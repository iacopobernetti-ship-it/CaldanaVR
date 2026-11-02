using LCCCore;
using UnityEngine;
using UnityEngine.Video;

public class VideoStreaming : MonoBehaviour
{
    [Header("Required")]
    [Tooltip("The LCCManager instance in the scene")]
    public LCCManager m_manager;
    [Tooltip("A valid LCC scene path")]
    public string m_filePath;

    [Header("Video source (decoded frames are projected as the decal)")]
    [Tooltip("Video clip to project. Takes priority over the URL below")]
    public VideoClip m_videoClip;
    [Tooltip("Video file path / URL, used when no clip is assigned (e.g. file:///D:/xxx.mp4)")]
    public string m_videoUrl;
    [Tooltip("Loop playback")]
    public bool m_videoLoop = true;

    [Header("Projector (projects along +Z)")]
    [Tooltip("Projector pose. Leave empty to use this object's transform")]
    public Transform m_projector;
    [Range(1f, 179f)] public float m_fov = 60f;
    [Tooltip("Projection aspect ratio; <=0 uses the video's aspect ratio automatically")]
    public float m_aspect = 0f;
    public float m_near = 0.1f;
    public float m_far = 100f;

    [Header("Decal appearance")]
    [Range(0f, 1f)] public float m_opacity = 1.0f;
    [Range(0f, 0.5f)][Tooltip("Edge fade width (UV ratio). 0 = hard edge")]
    public float m_edgeFade = 0.1f;
    [Tooltip("Refresh projection every frame, so you can drag the projector / tweak params at runtime")]
    public bool m_updateEveryFrame = true;

    [Header("Occlusion culling (PC/Mac only)")]
    [Tooltip("When on, back-facing/occluded points behind front geometry are no longer colored by the decal (slide-projector effect); when off it is X-ray")]
    public bool m_occlusion = false;
    [Range(0f, 1f)][Tooltip("Opacity threshold: only splats with opacity >= this value contribute to the depth map, filtering out floaters/foggy points. 0 = all participate")]
    public float m_occlusionCutoff = 0f;
    [Range(0f, 0.5f)][Tooltip("Relative depth tolerance. Too small -> near-surface self-occlusion; too large -> leaked X-ray coloring. Default 0.05")]
    public float m_occlusionBias = 0.05f;
    [Range(0, 16)][Tooltip("Square footprint radius cap (px), the main knob for removing X-ray bleed-through. 0 = single texel, default 2")]
    public int m_occlusionFootprint = 2;
    [Tooltip("Depth map resolution (px, power of two 256~4096). Lower it to fill grazing-angle holes. Default 1024")]
    public int m_occlusionResolution = 1024;

    // -- 运行时状态 --
    private bool m_loaded;
    private bool m_lastOcclusion;
    private float m_lastCutoff = float.NaN;
    private float m_lastBias = float.NaN;
    private int m_lastFootprint = -1;
    private int m_lastResolution = -1;

    // -- 视频状态 --
    private VideoPlayer m_videoPlayer;
    private RenderTexture m_videoRT;   // VideoPlayer 将视频解码到这里（GPU）
    private Texture2D m_frameTex;      // 当前帧拷贝到这里，喂给贴花
    private bool m_videoReady;
    private long m_lastVideoFrame = -1; // 上一次推给贴花的帧序号

    void Start()
    {
        if (m_manager == null || string.IsNullOrEmpty(m_filePath))
        {
            Debug.LogError("[VideoStreaming] m_manager or m_filePath is not assigned.");
            enabled = false;
            return;
        }

        // 1) 将渲染管线初始化为 PC 单场景编辑器模式
        m_manager.SetPlatformType(PlatformType.PC);
        m_manager.SwitchRenderPass(ActiveRenderMode.SingleRender);
        m_manager.SetEditorMode(true);

        // 2) 与场景加载并行地开始解码视频
        SetupVideo();

        // 3) 加载点云场景，然后启用贴花（贴花是全局状态，在场景就绪后再设置最为稳妥）
        var renderer = m_manager.GetRender(this.transform);
        Debug.Log($"[VideoStreaming] Start loading: {m_filePath}");
        renderer.Load(m_filePath,
            _ => { /* 进度回调，本示例未使用 */ },
            OnSceneLoaded);
    }

    /// <summary>在运行时创建 VideoPlayer 并开始准备 clip/URL。</summary>
    private void SetupVideo()
    {
        m_videoPlayer = gameObject.AddComponent<VideoPlayer>();
        m_videoPlayer.playOnAwake = false;
        m_videoPlayer.isLooping = m_videoLoop;
        m_videoPlayer.renderMode = VideoRenderMode.RenderTexture;
        m_videoPlayer.audioOutputMode = VideoAudioOutputMode.None; // 演示：不接音频

        if (m_videoClip != null)
        {
            m_videoPlayer.source = VideoSource.VideoClip;
            m_videoPlayer.clip = m_videoClip;
        }
        else
        {
            m_videoPlayer.source = VideoSource.Url;
            m_videoPlayer.url = m_videoUrl;
        }

        // 分辨率已知后再分配帧缓冲，然后开始播放。
        m_videoPlayer.prepareCompleted += OnVideoPrepared;
        m_videoPlayer.Prepare();
    }

    private void OnVideoPrepared(VideoPlayer vp)
    {
        int w = (int)vp.width;
        int h = (int)vp.height;

        m_videoRT = new RenderTexture(w, h, 0, RenderTextureFormat.ARGB32);
        m_videoRT.Create();
        vp.targetTexture = m_videoRT;

        m_frameTex = new Texture2D(w, h, TextureFormat.RGBA32, false);

        m_videoReady = true;
        vp.Play();
        Debug.Log($"[VideoStreaming] Video prepared: {w}x{h}, playing.");
    }

    private void OnSceneLoaded()
    {
        Debug.Log("[VideoStreaming] Load complete, enabling decal projection.");

        // -- 基础投影：5 个 API --
        // 纹理内容在 Update() 中按解码帧驱动；这里先把当前已有的帧推上去。
        if (m_frameTex != null) m_manager.SetDecalTexture(m_frameTex);
        m_manager.SetDecalOpacity(m_opacity);        // 整体不透明度
        m_manager.SetDecalEdgeFade(m_edgeFade);      // 边缘羽化
        ApplyProjection();                           // 投影仪位姿（内部调用 SetDecalProjection）
        m_manager.SetDecalEnabled(true);             // 启用贴花（_DECAL keyword）

        // -- 遮挡剔除：2 个 API -- 必须在 ApplyProjection 之后（深度图需要有效的投影仪 VP 矩阵）
        m_manager.SetDecalOcclusionSettings(BuildOcclusionSettings());
        m_manager.SetDecalOcclusion(m_occlusion);
        CacheOcclusionState();

        m_loaded = true;
    }

    void Update()
    {
        if (!m_loaded) return;

        // --- 视频帧更新，与渲染 FPS 解耦 ---
        // VideoPlayer.frame 只按视频自身的播放速率递增。即使场景以数百 FPS 渲染，
        // 相邻两个视频帧之间该序号也保持不变，因此只有当真正出现新解码帧时，
        // 我们才拷贝该帧并重新推送贴花纹理。
        if (m_videoReady && m_videoPlayer.frame != m_lastVideoFrame)
        {
            m_lastVideoFrame = m_videoPlayer.frame;

            // 把 GPU 上的 RenderTexture 拷贝到贴花 API 接受的 Texture2D。
            // 只在视频帧率下执行，因此回读开销可控。
            RenderTexture prev = RenderTexture.active;
            RenderTexture.active = m_videoRT;
            m_frameTex.ReadPixels(new Rect(0, 0, m_videoRT.width, m_videoRT.height), 0, 0, false);
            m_frameTex.Apply(false);
            RenderTexture.active = prev;

            m_manager.SetDecalTexture(m_frameTex);
        }

        // 运行时切换遮挡开关
        if (m_occlusion != m_lastOcclusion)
        {
            m_manager.SetDecalOcclusion(m_occlusion);
            m_lastOcclusion = m_occlusion;
        }

        // 若任一遮挡质量参数发生变化 -> 整体推送一次结构体
        if (!Mathf.Approximately(m_occlusionCutoff, m_lastCutoff) ||
            !Mathf.Approximately(m_occlusionBias, m_lastBias) ||
            m_occlusionFootprint != m_lastFootprint ||
            m_occlusionResolution != m_lastResolution)
        {
            m_manager.SetDecalOcclusionSettings(BuildOcclusionSettings());
            CacheOcclusionState();
        }

        // 每帧刷新投影仪 / 外观，便于运行时实时调参
        if (!m_updateEveryFrame) return;
        m_manager.SetDecalOpacity(m_opacity);
        m_manager.SetDecalEdgeFade(m_edgeFade);
        ApplyProjection();
    }

    /// <summary>根据当前投影仪位姿与透视参数构建投影矩阵。</summary>
    private void ApplyProjection()
    {
        Transform p = m_projector != null ? m_projector : this.transform;
        float aspect = m_aspect > 0f
            ? m_aspect
            : (m_videoRT != null ? (float)m_videoRT.width / m_videoRT.height : 1920.0f / 1080.0f);
        m_manager.SetDecalProjection(p.position, p.rotation, m_fov, aspect, m_near, m_far);
    }

    /// <summary>将 4 个遮挡参数汇集到一个结构体中。</summary>
    private DecalOcclusionSettings BuildOcclusionSettings()
    {
        return new DecalOcclusionSettings
        {
            opacityCutoff  = m_occlusionCutoff,
            depthBias      = m_occlusionBias,
            footprintMaxPx = m_occlusionFootprint,
            resolution     = m_occlusionResolution,
        };
    }

    private void CacheOcclusionState()
    {
        m_lastOcclusion  = m_occlusion;
        m_lastCutoff     = m_occlusionCutoff;
        m_lastBias       = m_occlusionBias;
        m_lastFootprint  = m_occlusionFootprint;
        m_lastResolution = m_occlusionResolution;
    }

    private void OnDestroy()
    {
        if (m_videoPlayer != null) m_videoPlayer.prepareCompleted -= OnVideoPrepared;
        if (m_videoRT != null)
        {
            m_videoRT.Release();
            Destroy(m_videoRT);
        }
        if (m_frameTex != null) Destroy(m_frameTex);
    }

    // -- 便捷调试入口（Inspector 右键） --
    [ContextMenu("Decal On")]  private void DecalOn()  { m_manager?.SetDecalEnabled(true); }
    [ContextMenu("Decal Off")] private void DecalOff() { m_manager?.SetDecalEnabled(false); }
    [ContextMenu("Occlusion On")]  private void OcclusionOn()  { m_occlusion = true;  m_manager?.SetDecalOcclusion(true);  m_lastOcclusion = true; }
    [ContextMenu("Occlusion Off")] private void OcclusionOff() { m_occlusion = false; m_manager?.SetDecalOcclusion(false); m_lastOcclusion = false; }
}
