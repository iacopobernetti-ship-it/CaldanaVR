using LCCCore;
using UnityEngine;

/// <summary>
/// Decal projection — minimal usage example for developers.
///
/// This script mimics an "integrator script": it only calls LCCManager's public API,
/// never touching SDK internals. Covers all 7 decal APIs:
///   Base projection (5)  SetDecalEnabled / SetDecalTexture / SetDecalProjection / SetDecalOpacity / SetDecalEdgeFade
///   Occlusion culling (2) SetDecalOcclusion / SetDecalOcclusionSettings
///
/// How to use:
///   1) Create an empty GameObject and attach this script;
///   2) In the Inspector, drag the scene's LCCManager onto m_manager;
///   3) Set m_filePath to a valid LCC scene path;
///   4) Assign the texture to project into m_decalTexture (enabling Read/Write in import settings is recommended);
///   5) Assign an empty object as the projector to m_projector (leave empty to use this object); its +Z axis is the projection direction;
///   6) Play. The decal turns on automatically once the scene finishes loading; drag the projector to see the decal land on the point cloud in real time.
///
/// Platform note: decal and occlusion culling only work on PC/Mac (URP). On Mobile/VR the SDK ignores the calls and logs a warning.
/// </summary>
public class Decal : MonoBehaviour
{
    [Header("Required")]
    [Tooltip("The LCCManager instance in the scene")]
    public LCCManager m_manager;
    [Tooltip("A valid LCC scene path")]
    public string m_filePath;
    [Tooltip("Texture to project. RGB = color, A = decal's own mask")]
    public Texture2D m_decalTexture;

    [Header("Projector (projects along +Z)")]
    [Tooltip("Projector pose. Leave empty to use this object's transform")]
    public Transform m_projector;
    [Range(1f, 179f)] public float m_fov = 60f;
    [Tooltip("Projection aspect ratio; <=0 uses the decal texture's aspect ratio automatically")]
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

    // -- Runtime state --
    private bool m_loaded;
    private bool m_lastOcclusion;
    private float m_lastCutoff = float.NaN;
    private float m_lastBias = float.NaN;
    private int m_lastFootprint = -1;
    private int m_lastResolution = -1;

    void Start()
    {
        if (m_manager == null || string.IsNullOrEmpty(m_filePath))
        {
            Debug.LogError("[DecalDemo] m_manager or m_filePath is not assigned.");
            enabled = false;
            return;
        }

        // 1) Initialize the render pipeline to PC single-scene editor mode
        m_manager.SetPlatformType(PlatformType.PC);
        m_manager.SwitchRenderPass(ActiveRenderMode.SingleRender);
        m_manager.SetEditorMode(true);

        // 2) Load the point-cloud scene, then enable the decal (decal is global state; setting it after the scene is ready is safest)
        var renderer = m_manager.GetRender(this.transform);
        Debug.Log($"[DecalDemo] Start loading: {m_filePath}");
        renderer.Load(m_filePath,
            _ => { /* progress callback, unused in this example */ },
            OnSceneLoaded);
    }

    private void OnSceneLoaded()
    {
        Debug.Log("[DecalDemo] Load complete, enabling decal projection.");

        // -- Base projection: 5 APIs --
        m_manager.SetDecalTexture(m_decalTexture);   // decal content
        m_manager.SetDecalOpacity(m_opacity);        // overall opacity
        m_manager.SetDecalEdgeFade(m_edgeFade);      // edge fade
        ApplyProjection();                           // projector pose (SetDecalProjection internally)
        m_manager.SetDecalEnabled(true);             // enable decal (_DECAL keyword)

        // -- Occlusion culling: 2 APIs -- must come after ApplyProjection (depth map needs a valid projector VP)
        m_manager.SetDecalOcclusionSettings(BuildOcclusionSettings());
        m_manager.SetDecalOcclusion(m_occlusion);
        CacheOcclusionState();

        m_loaded = true;
    }
    /// <summary>
    /// For demonstration only. In a real project, for better performance, you should NOT call
    /// SetDecalProjection / SetDecalOpacity / SetDecalEdgeFade every frame in Update();
    /// call the corresponding API only when the parameter actually changes.
    /// </summary>
    void Update()
    {
        if (!m_loaded) return;

        // Runtime toggle of the occlusion switch
        if (m_occlusion != m_lastOcclusion)
        {
            m_manager.SetDecalOcclusion(m_occlusion);
            m_lastOcclusion = m_occlusion;
        }

        // If any occlusion quality param changed -> push the whole struct once
        if (!Mathf.Approximately(m_occlusionCutoff, m_lastCutoff) ||
            !Mathf.Approximately(m_occlusionBias, m_lastBias) ||
            m_occlusionFootprint != m_lastFootprint ||
            m_occlusionResolution != m_lastResolution)
        {
            m_manager.SetDecalOcclusionSettings(BuildOcclusionSettings());
            CacheOcclusionState();
        }

        // Refresh projector / appearance every frame for easy live tweaking
        if (!m_updateEveryFrame) return;
        m_manager.SetDecalOpacity(m_opacity);
        m_manager.SetDecalEdgeFade(m_edgeFade);
        ApplyProjection();
    }

    private void OnDestroy()
    {
        if (m_loaded)
        {
            m_manager.SetDecalEnabled(false);
            m_manager.SetDecalOcclusion(false);
        }

    }

    /// <summary>Build the projection matrix from the current projector pose and perspective params.</summary>
    private void ApplyProjection()
    {
        Transform p = m_projector != null ? m_projector : this.transform;
        float aspect = m_aspect > 0f
            ? m_aspect
            : (m_decalTexture != null ? (float)m_decalTexture.width / m_decalTexture.height : 1f);
        m_manager.SetDecalProjection(p.position, p.rotation, m_fov, aspect, m_near, m_far);
    }

    /// <summary>Gather the 4 occlusion params into a struct.</summary>
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

    // -- Convenience debug entries (Inspector right-click) --
    [ContextMenu("Decal On")]  private void DecalOn()  { m_manager?.SetDecalEnabled(true); }
    [ContextMenu("Decal Off")] private void DecalOff() { m_manager?.SetDecalEnabled(false); }
    [ContextMenu("Occlusion On")]  private void OcclusionOn()  { m_occlusion = true;  m_manager?.SetDecalOcclusion(true);  m_lastOcclusion = true; }
    [ContextMenu("Occlusion Off")] private void OcclusionOff() { m_occlusion = false; m_manager?.SetDecalOcclusion(false); m_lastOcclusion = false; }
}
