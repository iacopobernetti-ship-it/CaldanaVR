using System.Collections.Generic;
using LCCCore;
using UnityEngine;
using UnityEngine.Rendering;

public class Meshes : MonoBehaviour
{
    public LCCManager m_manager;
    public string m_FilePath;
    private LCCCore.Renderer m_renderer;
    private bool m_isLoaded = false;
    private Camera m_camera;

    private const string kContainerName = "LCCVisualizedMeshes";


    void Start()
    {
        m_camera = Camera.main;
        m_isLoaded = false;
        m_manager.SetPlatformType(PlatformType.PC);
        
        m_renderer = m_manager.GetRender(this.transform);
        Debug.Log("Started ");
        m_renderer.Load(m_FilePath,
            p => Debug.Log($"[Meshes] load progress: {p:P1}"),
            () =>
        {
            Debug.Log($"[Meshes] file loaded: {m_FilePath}");
            m_isLoaded = true;
            m_manager.SetAutoFov(false);
            //m_renderer.SetEnvironment(true);
            //m_manager.SetStartLod(1);
            //m_manager.SetMaxRendererSplats(2900);
        },
            e => Debug.LogError($"[Meshes] file load error: {e}")

            );
    }

    public void onGetAllMeshes()
    {
        if (!m_isLoaded || m_renderer == null)
        {
            Debug.LogWarning("[Meshes] onGetAllMeshes: 数据尚未加载完成，无法获取 Mesh。");
            return;
        }

        // 同步读取全部碰撞 Mesh 分块几何（本地坐标系；重操作，仅测试用）
        var meshes = m_renderer.GetMeshes();
        if (meshes == null || meshes.Count == 0)
        {
            Debug.LogWarning("[Meshes] onGetAllMeshes: 未获取到 Mesh（数据可能不含碰撞体）。");
            return;
        }

        VisualizeMeshes(meshes);
    }

    public void onRequireMeshes()
    {
        if (!m_isLoaded || m_renderer == null)
        {
            Debug.LogWarning("[Meshes] onRequireMeshes: 数据尚未加载完成，无法获取 Mesh。");
            return;
        }

        // 1. 零 I/O 读取全部碰撞 Mesh 分块元信息，按相机到 BBOX 表面距离筛选 100m 内的块
        var infos = m_renderer.GetMeshBlockInfos();
        if (infos == null || infos.Count == 0)
        {
            Debug.LogWarning("[Meshes] onRequireMeshes: 未获取到 Mesh 信息（数据可能不含碰撞体）。");
            return;
        }

        Vector3 camPos = m_camera.transform.position;
        var ids = new List<string>();
        foreach (var info in infos)
        {
            // 相机位于 BBOX 内部时 ClosestPoint 返回相机自身、距离为 0，同样会被选中
            if (calculateMinDistanceToAABB(info.boundsWorld, camPos) < 100f)
                ids.Add(info.id);
        }

        if (ids.Count == 0)
        {
            Debug.LogWarning("[Meshes] onRequireMeshes: 相机周围 100m 内没有 Mesh 分块。");
            return;
        }

        // 2. 按 id 只读取筛选出的分块几何并可视化
        var meshes = m_renderer.GetMeshes(ids);
        if (meshes == null || meshes.Count == 0)
        {
            Debug.LogWarning("[Meshes] onRequireMeshes: 按 id 获取 Mesh 失败。");
            return;
        }

        VisualizeMeshes(meshes);
        Debug.Log($"[Meshes] onRequireMeshes: 相机周围 100m 内选中 {ids.Count} 个分块，可视化 {meshes.Count} 个。");
    }

    // 计算点到 AABB 表面的最近距离（点位于 AABB 内部时返回 0）
    private static float calculateMinDistanceToAABB(Bounds _aabb, Vector3 _point)
    {
        Vector3 p = _aabb.ClosestPoint(_point);
        return Vector3.Distance(p, _point);
    }

    private void VisualizeMeshes(List<LCCMeshBlock> meshes)
    {
        // 清理上一次的可视化结果，避免重复堆积
        Transform root = m_renderer.Transform;
        Transform old = root.Find(kContainerName);
        if (old != null) Destroy(old.gameObject);

        var container = new GameObject(kContainerName).transform;
        container.SetParent(root, false);

        Material material = CreateVisualMaterial();

        for (int i = 0; i < meshes.Count; i++)
        {
            LCCMeshBlock block = meshes[i];
            if (block.vertices == null || block.vertices.Length == 0) continue;
            if (block.triangles == null || block.triangles.Length < 3) continue;

            var go = new GameObject(string.IsNullOrEmpty(block.id) ? $"MeshBlock_{i}" : block.id);
            go.transform.SetParent(container, false);

            var mesh = new Mesh { name = go.name };
            // 单块顶点数可能超过 65535，必须使用 32 位索引，否则几何错乱
            mesh.indexFormat = IndexFormat.UInt32;
            mesh.vertices = block.vertices;
            mesh.triangles = block.triangles;
            mesh.RecalculateNormals();
            mesh.RecalculateBounds();

            var mf = go.AddComponent<MeshFilter>();
            mf.sharedMesh = mesh;

            var mr = go.AddComponent<MeshRenderer>();
            mr.sharedMaterial = material;
        }

        Debug.Log($"[Meshes] 已为 {meshes.Count} 个 Mesh 分块创建 GameObject 并可视化。");
    }

    private Material CreateVisualMaterial()
    {
        Shader shader = Shader.Find("Universal Render Pipeline/Lit")
            ?? Shader.Find("Standard")
            ?? Shader.Find("Diffuse");
        if (shader == null)
        {
            Debug.LogError("[Meshes] 找不到可用的着色器。");
            return null;
        }

        var mat = new Material(shader) { color = new Color(0.7f, 0.7f, 0.7f, 1f) };
        // 碰撞网格三角形绕序不保证一致，关闭背面剔除以完整显示
        mat.SetFloat("_Cull", (float)CullMode.Off);
        return mat;
    }
}
