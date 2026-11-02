---
name: lcc-unity-sdk
description: Use when the user wants to build with the LCC Unity SDK (LCCCore namespace) — loading, rendering, and editing 3D Gaussian Splatting (3DGS) assets in Unity. Covers the LCCManager and LCCCore.Renderer APIs, .lcc2/.ply/.splat data loading, clip/highlight/tone editing, snap, decal and video projection, relighting, shadows, collision meshes, multi-camera/multi-renderer, HD capture, and mobile/VR platforms.
---

# LCC Unity SDK — AI Development Guide

This skill teaches an AI assistant how to write Unity C# code against the **LCC Unity SDK** (package `com.xgrids.lccsdk`), a Gaussian Splatting (3DGS) rendering and editing plugin. Its goal: let a user describe a feature in plain language and have the AI produce correct, compilable code **without the user reading the API manual line by line**.

> **Primary reference (in-package, relative path):** [`api_user_book.md`](api_user_book.md) — the full auto-generated API reference (every method, parameter, and caveat). Always prefer it for exact signatures; this skill summarizes and adds recipes, gotchas, and the capability map.

---

## 1. Mental model (read this first)

- **Namespace:** `LCCCore` (add `using LCCCore;` to every script).
- **Two public types only:**
  - `LCCManager` — a `MonoBehaviour` component. There must be **exactly one** in the scene. Owns all renderers, cameras, global render state, editing (clip/highlight/tone), interaction queries (raycast/collision/snap), and VFX. **76 public methods, 0 public properties.**
  - `LCCCore.Renderer` — one render *instance* per loaded scene. Created via `LCCManager.GetRender(...)`, never `new`. **16 public methods + 3 read-only properties.**
- **`Renderer` name clash:** `LCCCore.Renderer` collides with `UnityEngine.Renderer`. Always fully qualify as `LCCCore.Renderer`, or alias it: `using Renderer = LCCCore.Renderer;`.
- **Data formats:**
  - `.lcc2` — LCC's own format; loads from **local path or HTTP(S) URL**.
  - Native `.ply` / `.sog` / `.spz` / `.splat` / `.ksplat` — **local path only**, and only in `SingleRender` full-load mode (no LOD chunking).
- **Platforms (`PlatformType`):** `PC, Mac, Android, iOS, Pico, Quest, AVP, PicoSwan, OpenXR, PCVR`.

---

## 2. Canonical lifecycle (strict ordering)

The setup sequence is order-sensitive. Any script that renders a scene follows this pattern:

1. `SetPlatformType(PlatformType)` — **must be first**, before any `GetRender`.
2. `SwitchRenderPass(ActiveRenderMode)` — optional, PC/Mac only, **before any `Load`**. `SingleRender` (default) vs `MultiRender` (up to 255 renderers, shared GPU buffer + single draw call).
3. `SetMainCamera(Camera)` — **before `GetRender`**.
4. (optional, before `Load`) `SetMaxBufferSplat(int count)` — GPU buffer capacity, unit = 万 (×10 000).
5. `GetRender(Transform)` or `GetRender(out GameObject)` — returns `LCCCore.Renderer` (or `null` on failure).
6. `renderer.Load(path, onProgress, onComplete, onError)`.
7. Teardown: `renderer.Unload()` (free data, keep instance) or `renderer.Dispose()` (destroy instance).

### Minimal working template

```csharp
using LCCCore;
using UnityEngine;

public class MinimalLCCScene : MonoBehaviour
{
    public LCCManager manager;   // drag the scene's LCCManager here
    public string filePath;      // "D:/data/scene.lcc2" or an https:// .lcc2 URL

    private LCCCore.Renderer renderer;

    void Start()
    {
        manager.SetPlatformType(PlatformType.PC);      // pick per target platform
        // manager.SwitchRenderPass(ActiveRenderMode.SingleRender); // default
        // manager.SwitchRenderPass(ActiveRenderMode.MultiRender);  // for many scenes
        manager.SetMainCamera(Camera.main);

        renderer = manager.GetRender(transform);
        if (renderer == null) { Debug.LogError("GetRender failed"); return; }

        renderer.Load(filePath, onProgress, onComplete, onError);
    }

    void onProgress(float p) => Debug.Log($"load {p:P0}");
    void onComplete() => Debug.Log("loaded");
    void onError(string e) => Debug.LogError(e);

    void OnDestroy() => renderer?.Dispose();
}
```

### Platform + path notes (from samples / quick-start)

| Platform | `PlatformType` | Data path |
|----------|---------------|-----------|
| Windows | `PC` | `G:\\data\\scene.lcc2` (double backslash) or `G:/data/scene.lcc2` |
| macOS | `Mac` | `/users/data/lcc/scene.lcc2` |
| Android | `Android` / `Pico` / `Quest` (by device model) | `Application.persistentDataPath` or HTTP URL (assets not directly readable) |
| iOS | `iOS` | **HTTP URL only** |
| VR | `Pico` / `Quest` / `PicoSwan` / `OpenXR` / `PCVR` | — |

---

## 3. API surface (full list)

Exact signatures live in [`api_user_book.md`](api_user_book.md). This is the complete inventory so the AI knows what exists and where to look.

### 3.1 `LCCManager` (76 methods)

**Setup / configuration (before Load)**
- `SetPlatformType(PlatformType)` — set target platform; **first**.
- `SwitchRenderPass(ActiveRenderMode)` — `MultiRender` / `SingleRender`; before `Load`, PC/Mac only.
- `GetRender(Transform)` / `GetRender(out GameObject)` → `LCCCore.Renderer`.
- `SetMaxBufferSplat(int)` — GPU buffer cap, unit 万, one-time, before `Load`.
- `SetFullRenderSplat(int)` — PC/Mac SingleRender full-load threshold, unit 万, before `Load`.
- `SetMaxRenderSplats(int)` — runtime max splats per frame; callable after `Load`; clamped by `SetMaxBufferSplat`.
- `SetVRPerformance(bool)` — VR high-perf sort (GPU radix).
- `GetLoadRatio()` → `float [0,1]` — current load progress.

**Runtime control**
- `SetDetailLevel(float sse)` — render precision `[1,100]`.
- `SetStartLod(int)` — starting LOD (0 = finest). `SetEndLod(int)` is obsolete.
- `SetSelectionMode(SelectionMode)` — node culling `Auto/Normal/Large`.
- `SetAutoFov(bool)` / `SetFOV(int, int, float, float)`.
- `SetShadowReceive(bool)` / `SetShadowColor(Color)` / `SetShadowStrength(float)`.
- `SetLights(List<PointLightData>)` → `int` (0 ok, -1 fail).
- `SetRecordMode(bool, Vector2 resolution, float fov)` — HD capture mode.
- `SetRenderEnable(Renderer, bool)` / `SetEnvironment(Renderer, bool)`.
- `SetZDepth(bool)` / `SetAlpha(float)` (global) / `SetLightIntensity(float)` / `SetLowPassFilter(float)`.
- `SetLockFPS(bool)` / `SetRenderLayer(int)` / `SetForceRefresh()`.
- `SetMipMode(MipMode)` — `Mip` / `Non_Mip`.
- `SetGraphicsAPI(GraphicsDeviceType)` / `SetDebugMode(bool)` / `SetEditorMode(bool)`.
- `SetAECMode(bool)` / `SetSemantic(bool, Vector4[] color)` — color array length **exactly 100**.
- `SwitchRenderMode(RenderMode, Texture2D)` — `PointCloud` / `LCCGS`.
- `SetRaycastDelta(float)` `[0.1,10]` / `SetMaxRaycastDistance(float)` `[10,10000]`.
- `SetMainCamera(Camera)` / `AddCamera(Camera)` / `RemoveCamera(Camera)`.

**Editing — clip / highlight / tone**
- `SetClip(Vector3, Vector3, bool)` — plane clip.
- `SetClip(List<Data2D>)` / `SetClip(List<Data3D>)` / `SetClip(List<DataMix>)`.
- `QuitClipMode()`.
- `SetHighlight(List<Data2D>)` / `SetHighlight(List<Data3D>)` / `SetHighlight(List<DataMix>)`.
- `QuitHighlightMode()`.
- `SetTone(List<ToneMix>)` / `QuitToneMode()`.

**Decal projection**
- `SetDecalEnabled(bool)` / `SetDecalTexture(Texture2D)`.
- `SetDecalProjection(Vector3, Quaternion, float fov, float aspect, float near, float far)`.
- `SetDecalOpacity(float)` `[0,1]` / `SetDecalEdgeFade(float)` `[0,0.5)`.
- `SetDecalOcclusion(bool)` / `SetDecalOcclusionSettings(DecalOcclusionSettings)`.

**Snap**
- `SetSnapEnabled(bool)` / `SetSnapRadius(float px)` / `SetEdgeThreshold(float)`.
- `SetSnapPreviewEnabled(bool)` / `UpdateSnapPreview(Vector2 mousePos, Camera)` / `GetSnapPreviewState()`.

**Query & interaction**
- `Raycast(Vector3 screenPos, out HitResult)` / `Raycast(Ray, out HitResult)`.
- `RaycastMesh(Vector3, out HitResult, float)` / `RaycastMesh(Ray, out HitResult, out Bounds, float)`.
- `RaycastWithSnap(Vector2, Camera, out HitResult)`.
- `IntersectsSphere(Sphere)` / `IntersectsSphere(Sphere, out Vector3)` / `IntersectsCapsule(Capsule)` / `IntersectsCapsule(Capsule, out Vector3)`.

**VFX & misc**
- `TriggerVFX(Vector3, int)` — trigger VFX effect.
- `GetAllRenderers()` — all live `Renderer` instances.

### 3.2 `LCCCore.Renderer` (16 methods + 3 properties)

**Properties (read-only):** `Transform` (mounted transform), `IsEnable` (bool), `IsRenderAll` (bool).

**Methods**
- `Load(string path, Action<float> onProgress, Action onComplete, Action<string> onError = null)`.
- `Unload()` — free data, keep instance (reusable `Load → Unload → Load`).
- `Dispose()` — destroy instance and free all GPU resources.
- `SetEnable(bool)` — toggle rendering (no resource release).
- `SetAlpha(float)` — **per-renderer** alpha (MultiRender/RenderCore path only).
- `SetColliderEnable(bool)` → `bool` — enable collision (data must contain collider nodes).
- `SetEnvironment(bool)` — toggle background/environment point cloud.
- `SetRenderAll(bool)` — PC/Mac SingleRender full-load toggle (takes effect on next `Load`).
- `GetBounds(out Vector3 max, out Vector3 min)` — world AABB.
- `GetSourceType()` → `SourceType` / `GetDataType()` → `DataType`.
- `GetMeta(string path, out SplatMeta)` / `GetMeta(out SplatMeta)`.
- `GetMeshBlockInfos()` → `List<LCCMeshBlockInfo>` (zero-I/O) / `GetMeshes()` → `List<LCCMeshBlock>` / `GetMeshes(IEnumerable<string> ids)`.

---

## 4. Capability map (feature → API → sample → doc)

Use this to answer "how do I do X?" in one lookup. Sample scripts live at `Samples~/LCCViewer/Scripts/`; official guides are under the online docs (see §7).

| Capability | Key API | Sample script | Doc guide |
|------------|---------|---------------|-----------|
| Load & render one scene | `GetRender` + `Renderer.Load` | `LCCRenderer.cs` | `04-pc-dev-quick-start` |
| Multiple scenes (one draw call) | `SwitchRenderPass(MultiRender)` | `MultiRenderer.cs` | `300-userbook/20-multimodel` |
| Per-renderer alpha | `Renderer.SetAlpha` | `MultiRenderAlpha.cs` | `300-userbook/20-multimodel` |
| Multiple cameras | `AddCamera` / `RemoveCamera` | `MutliCamera.cs` | `300-userbook/23-multicamera` |
| Camera sync (scene-view ↔ game) | (no LCC API) | `SceneGameCameraSync.cs`, `CameraOperate.cs` | — |
| Clip (2D/3D/mix) | `SetClip` / `QuitClipMode` | `Clip.cs` | `300-userbook/32-clip` |
| Highlight | `SetHighlight` / `QuitHighlightMode` | `Highlight.cs` | `300-userbook/31-highlight` |
| Tone / color grading | `SetTone` / `QuitToneMode` | `Tone.cs` | `300-userbook/33-tone` |
| Snap (edge/corner) | `SetSnapEnabled` / `UpdateSnapPreview` / `RaycastWithSnap` | `Snap.cs` | `300-userbook/28-snap` |
| Decal projection | `SetDecalTexture/Projection/Opacity/EdgeFade/Enabled` | `Decal.cs` | `300-userbook/29-decal` |
| Video decal | decal APIs + `VideoPlayer` → `SetDecalTexture` | `VideoStreaming.cs` | `300-userbook/30-video-decal` |
| Relighting | `SetLights(List<PointLightData>)` / `SetLightIntensity` | `Relighting.cs` | `300-userbook/22-realtime-light` |
| Shadow | `SetShadowReceive/Color/Strength` | `LCCShadow.cs` | `300-userbook/21-shadow` |
| HD / 4K capture | `SetRecordMode` | `HDRecord.cs` | `300-userbook/24-hdrecord` |
| Collision meshes | `SetColliderEnable` / `GetMeshes` / `GetMeshBlockInfos` / `RaycastMesh` / `IntersectsSphere` / `IntersectsCapsule` | `Meshes.cs` | `300-userbook/34-get-meshes`, `300-userbook/63-collision-system` |
| Mip switch | `SetMipMode` | `MipSwitch.cs` | `300-userbook/27-mipmode` |
| VFX | `TriggerVFX` | `VFX.cs` | `300-userbook/26-vfx` |
| Data-format detection | `Renderer.GetSourceType/GetDataType` | — | `300-userbook/25-datatype-compatible` |
| Editor mode | `SetEditorMode(true)` | (many) | `300-userbook/60-editor-mode` |
| Render params / LOD | `SetDetailLevel` / `SetStartLod` / `SetMaxRenderSplats` / `SetSelectionMode` | — | `300-userbook/61-render-params` |
| Packaging & app | — | — | `300-userbook/62-application-and-data-pack` |
| Platform guides | `SetPlatformType` per platform | — | `06..09`, `14`, `15` |

---

## 5. Code recipes

Every recipe assumes the setup from §2 has run (`SetPlatformType` → optional `SwitchRenderPass` → `SetMainCamera` → `GetRender`). Load completion is where editing/effects are enabled.

### 5.1 Multi-renderer (`MultiRender`)

```csharp
manager.SetPlatformType(PlatformType.PC);
manager.SwitchRenderPass(ActiveRenderMode.MultiRender);   // shared buffer, 1 draw call, ≤255 renderers
var a = manager.GetRender(transformA);
var b = manager.GetRender(transformB);
a.Load(pathA, null, () => Debug.Log("A loaded"));
b.Load(pathB, null, () => Debug.Log("B loaded"));
```

- Per-renderer opacity (MultiRender path): `a.SetAlpha(0.5f);` — final alpha = splat coverage × `LCCManager.SetAlpha` (global) × `Renderer.SetAlpha` (per-renderer).
- `MultiRender` **rejects HTTP and native (.ply/...) sources** — local `.lcc2` only.

### 5.2 Clip / Highlight / Tone (edit operations)

All three share the same mask structure. **Set `SetEditorMode(true)` first.** The mask textures are **R8, 1024×1024**, byte value semantics: `0` = cut, `240` = selected, `128` = neutral.

```csharp
manager.SetEditorMode(true);

// --- 2D mask (screen-space) ---
var tex = new Texture2D(1024, 1024, TextureFormat.R8, false);
tex.filterMode = FilterMode.Point;
tex.wrapMode = TextureWrapMode.Clamp;
byte[] vals = new byte[1024 * 1024];               // fill: 0 cut / 240 selected / 128 neutral
tex.SetPixelData(vals, 0);

var d2 = new Data2D {
    texture = tex,
    mv  = cam.worldToCameraMatrix,
    mvp = GL.GetGPUProjectionMatrix(cam.projectionMatrix, true) * cam.worldToCameraMatrix,
    mode = SelectMode.normal,                       // or SelectMode.invert
};
manager.SetClip(new List<Data2D> { d2 });           // SetHighlight / SetTone identical

// --- 3D shape (box / sphere), uses the shape's worldToLocalMatrix ---
var d3 = new Data3D {
    type      = ShapeType.box,                       // or ShapeType.sphere
    invMat    = boxObject.transform.worldToLocalMatrix,
    operation = OperationMode.normal,                // or OperationMode.erase (difference)
    mode      = SelectMode.normal,                   // normal / invert / clip
};
manager.SetClip(new List<Data3D> { d3 });

// --- clear ---
manager.QuitClipMode();                              // QuitHighlightMode / QuitToneMode
```

- **Tone** adds brightness/saturation/contrast/lutid on `ToneMix` (which also carries the `DataMix` mask fields). Defaults are `1.0f`; `lutid = 0` means "no LUT".
- To mix 2D + 3D in one call, use `DataMix` (`editType = EditType.Edit2D / Edit3D`) and pass `List<DataMix>`.

### 5.3 Snap

```csharp
// on load complete:
manager.SetSnapEnabled(true);
manager.SetSnapPreviewEnabled(true);

// every frame:
manager.UpdateSnapPreview(Input.mousePosition, cam);
if (Input.GetMouseButtonDown(1)) {
    manager.RaycastWithSnap(Input.mousePosition, cam, out HitResult hit);
    if (hit.isHit) { /* hit.hitPos is the snapped world point */ }
}
```

### 5.4 Decal projection

```csharp
// on load complete (decal is global state):
manager.SetDecalTexture(decalTex);              // RGB = color, A = mask
manager.SetDecalOpacity(1.0f);
manager.SetDecalEdgeFade(0.1f);                 // [0, 0.5)
manager.SetDecalProjection(projector.position, projector.rotation, fov, aspect, near, far);
manager.SetDecalEnabled(true);                  // enable (_DECAL keyword)

// occlusion culling (after projection is set; PC/Mac URP only):
manager.SetDecalOcclusionSettings(new DecalOcclusionSettings {
    opacityCutoff = 0f, depthBias = 0.05f, footprintMaxPx = 2, resolution = 1024
});
manager.SetDecalOcclusion(true);
```

- Projector projects along its **+Z** axis. `aspect <= 0` uses the texture aspect.
- **PC/Mac (URP) only** — mobile/VR logs a warning and ignores decal calls.
- Don't call `SetDecalProjection/Opacity/EdgeFade` every frame; call only when a parameter changes.

### 5.5 Video decal (stream video onto the point cloud)

```csharp
var vp = gameObject.AddComponent<VideoPlayer>();
vp.source = VideoSource.Url; vp.url = videoUrl;             // or VideoClip
vp.renderMode = VideoRenderMode.RenderTexture;
vp.prepareCompleted += v => {
    var rt = new RenderTexture((int)v.width, (int)v.height, 0, RenderTextureFormat.ARGB32);
    rt.Create(); v.targetTexture = rt; v.Play();
};
// on each new decoded frame (guard with vp.frame change), copy and push:
RenderTexture.active = rt;
frameTex.ReadPixels(new Rect(0, 0, rt.width, rt.height), 0, 0, false);
frameTex.Apply(false);
RenderTexture.active = prev;
manager.SetDecalTexture(frameTex);
```

### 5.6 Relighting (`SetLights`)

```csharp
using Unity.Mathematics;   // REQUIRED — PointLightData uses float3

var lights = new List<PointLightData> {
    new PointLightData {                    // point light (lightType 0)
        position = new float3(0, 2, 0), color = new float3(1, 0, 0),
        intensity = 2f, range = 3f, lightType = 0, direction = float3.zero, spotAngle = 0f, pad = float3.zero
    },
    new PointLightData {                    // spot light (lightType 1)
        position = new float3(0, 2, -2), color = new float3(0.1f, 0.9f, 0.7f),
        intensity = 3f, range = 20f, lightType = 1, direction = new float3(0, -1, 0), spotAngle = 45f, pad = float3.zero
    },
};
manager.SetLights(lights);   // returns 0 on success, -1 on failure
manager.SetLights(null);     // shut off lighting
```

### 5.7 Shadow

```csharp
manager.SetShadowReceive(true);
manager.SetShadowColor(new Color(0, 0, 0, 1f));
manager.SetShadowStrength(0.5f);
```

### 5.8 HD / 4K capture (`SetRecordMode`)

```csharp
// on load complete:
manager.SetRecordMode(true, new Vector2(3840, 2160), cam.fieldOfView);
// …render the scene into a 3840×2160 RenderTexture, then ReadPixels → EncodeToJPG…
manager.SetRecordMode(false, new Vector2(Screen.width, Screen.height), cam.fieldOfView);
```

### 5.9 Collision meshes & picking

```csharp
// enable collision (data must contain collider nodes):
renderer.SetColliderEnable(true);

// zero-I/O overview of collider blocks, then fetch only nearby blocks:
var infos = renderer.GetMeshBlockInfos();                  // List<LCCMeshBlockInfo>
var ids = infos.Where(i => /* distance to i.boundsWorld < 100m */).Select(i => i.id).ToList();
var blocks = renderer.GetMeshes(ids);                      // List<LCCMeshBlock>

// build Unity Mesh (use 32-bit index!):
var mesh = new Mesh { indexFormat = UnityEngine.Rendering.IndexFormat.UInt32 };
mesh.vertices = block.vertices; mesh.triangles = block.triangles;

// ray / shape queries on the manager:
manager.Raycast(ray, out HitResult hit);
manager.RaycastMesh(screenPos, out HitResult meshHit, maxDist);
manager.IntersectsSphere(sphere);                          // + out Vector3 penetration
manager.IntersectsCapsule(capsule);                        // + out Vector3 penetration
```

### 5.10 Mip mode, VFX, multi-camera, render params

```csharp
manager.SetMipMode(MipMode.Non_Mip);              // toggle Mip / Non_Mip
manager.TriggerVFX(pos, 0);                        // VFX effect
manager.AddCamera(secondCam);                      // render in extra cameras
manager.RemoveCamera(secondCam);

manager.SetDetailLevel(50f);                       // precision [1,100]
manager.SetStartLod(0);                            // 0 = finest
manager.SetSelectionMode(SelectionMode.Auto);      // Auto/Normal/Large
manager.SetMaxRenderSplats(2500);                  // unit 万, after Load
manager.SetMaxBufferSplat(3000);                   // unit 万, before Load
```

---

## 6. Data types & enums (compact)

Full field docs in [`api_user_book.md`](api_user_book.md) §3. Reproduced here because correct struct construction is what makes generated code compile.

### 6.1 Enums

```csharp
enum PlatformType   { PC, Mac, Android, iOS, Pico, Quest, AVP, PicoSwan, OpenXR, PCVR }
enum ActiveRenderMode { MultiRender, SingleRender }   // "MobileLOD" is an auto runtime state on mobile/VR, not settable
enum SourceType     { LCC, PLY, SPLAT, TYY, None, SOG, SPZ, KSPLAT }
enum DataType       { L1, L2, L2Pro, K1, K2, Drone, Drone_L2, PortalCam, None }
enum SnapType       { None, Edge, Corner }
enum MipMode        { Mip, Non_Mip }
enum SelectMode     { normal, invert, clip }
enum OperationMode  { normal = 0, erase = 1 }
enum EditType       { Edit2D, Edit3D }
enum RenderMode     { PointCloud, LCCGS }
enum ShapeType      { box, sphere }
enum SelectionMode  { Auto, Normal, Large }
```

### 6.2 Structs

```csharp
struct HitResult {
    bool isHit; float distance; Vector3 hitPos; Vector3 normal;
    float hitAlpha; float dist2Origin; float scale;
    SnapType snapType; Vector3 originalHitPos;
}
// ⚠ field is `hitPos` (not `position`); distance-to-source is `dist2Origin`.

struct SnapPreviewState {
    bool hasTarget; SnapType snapType; Vector2 screenPos; float distanceToMouse;
}

struct LCCMeshBlockInfo { string id; Bounds boundsWorld; Bounds boundsLocal; int vertexCount; int faceCount; }
struct LCCMeshBlock     { string id; Vector3[] vertices; int[] triangles; Bounds boundsLocal; }

struct Data2D { Texture2D texture; Matrix4x4 mv; Matrix4x4 mvp; SelectMode mode; }   // texture = R8 1024×1024 mask

struct Data3D { ShapeType type; Matrix4x4 invMat; OperationMode operation; SelectMode mode; }

struct DataMix { EditType editType; ShapeType type; Matrix4x4 invMat;
                 Texture2D texture; Matrix4x4 mv; Matrix4x4 mvp;
                 OperationMode operation; SelectMode mode; }

struct ToneMix { /* all DataMix fields */ + float brightness; float saturation; float contrast; int lutid; }

struct PointLightData {               // ⚠ float3 fields — needs `using Unity.Mathematics;`
    float3 position; int lightType;   // 0 = point, 1 = spot
    float3 color; float intensity; float3 direction; float range; float spotAngle; float3 pad;
}

struct DecalOcclusionSettings {
    float opacityCutoff; float depthBias; int footprintMaxPx; int resolution;
    static DecalOcclusionSettings Default { get; }   // 0, 0.05, 2, 1024
}
```

---

## 7. Reference pointers

### 7.1 In-package files (relative paths — always use these first)

- [`api_user_book.md`](api_user_book.md) — full API reference (authoritative signatures + caveats).
- `Samples~/LCCViewer/Scripts/` — working example scripts (see §4 for the mapping).
- `Samples~/LCCViewer/*.unity` — example scenes (Clip, Highlight, Tone, Snap, Decal, HDRecord, Shadow, Meshes, MipSwitch, MultiCamera, MultiRenderer, MultiRenderAlpha, Relighting, VFX, VideoStreaming, CameraSync, LCCViewer).
- `package.json` — package id `com.xgrids.lccsdk`, version, dependencies (`com.unity.mathematics`, URP).

> **If `api_user_book.md` and `Samples~/` are not present** (e.g. the SKILL.md was copied out of the package alone), rely on the online developer docs below — they are stable and cover the same API.

### 7.2 Online developer docs (stable; identical structure on both domains)

Two mirrors — **overseas** and **China** — same paths:

- Overseas: `https://docs.xgrids.com/zh-cn/07-plugin-sdk/02-unity/latest/`
- China:   `https://docs.xgrids.cn/zh-cn/07-plugin-sdk/02-unity/latest/`

Append `<slug>.html` to either base. Key pages (full list under `latest/`):

- Intro / features / hardware: `01-introduction`, `02-features`, `03-hardware-requirements`
- Getting started & settings: `04-pc-dev-quick-start`, `05-project-settings`
- Platform guides: `06-pico4ultra-dev-guide`, `07-pico4ultra-pc-dev-guide`, `08-quest3-dev-guide`, `09-quest3-pc-dev-guide`, `14-openxr-dev-guide`, `15-Pico4ultra-bs-dev-guide`
- Feature guides (`300-userbook/`): `20-multimodel`, `21-shadow`, `22-realtime-light`, `23-multicamera`, `24-hdrecord`, `25-datatype-compatible`, `26-vfx`, `27-mipmode`, `28-snap`, `29-decal`, `30-video-decal`, `31-highlight`, `32-clip`, `33-tone`, `34-get-meshes`, `60-editor-mode`, `61-render-params`, `62-application-and-data-pack`, `63-collision-system`, `64-macOS-permission`, `65-iOS-compile` (each `-dev-guide.md` → `-dev-guide.html`, except `64-…-user-guide`, `65-…-user-guide`).
- API reference (`400-api-reference/`): `01-lccmanager`, `02-renderer`, `03-structure`.
- Misc: `97-glossary`, `98-faq`, `99-contactus`.

---

## 8. Gotchas & pitfalls (check before generating code)

1. **`Renderer` name clash** — always `LCCCore.Renderer` (or `using Renderer = LCCCore.Renderer;`).
2. **`PointLightData` uses `float3`** — add `using Unity.Mathematics;`; fields are `float3`, not `Vector3`/`Vector4`; `color` has no alpha.
3. **`HitResult` field is `hitPos`**, and `dist2Origin` (not `distance`) is the sort distance.
4. **`Data3D.type` / `DataMix.type` / `ToneMix.type` are `ShapeType`** (enum, not `int`).
5. **Difference operation is `OperationMode.erase`**, not `subtract`.
6. **Correct name is `SetMaxRenderSplats`** — the sample `Meshes.cs` has a stale commented-out `SetMaxRendererSplats` (wrong). DLL + api book confirm `SetMaxRenderSplats`.
7. **Ordering is enforced** — `SetPlatformType` first; `SetMaxBufferSplat`/`SwitchRenderPass` before `Load`; mode locks after the first `Load`.
8. **Re-`Load` requires `Unload()`/`Dispose()` first**; loading while already loading is rejected.
9. **`MultiRender` = local `.lcc2` only** (no HTTP, no native `.ply`/`.splat`/etc.).
10. **Native formats** (`.ply/.sog/.spz/.splat/.ksplat`) = local path + `SingleRender` full load only.
11. **Decal & occlusion culling = PC/Mac (URP) only**.
12. **Editing needs `SetEditorMode(true)`** — set it for clip/highlight/tone (and several other samples).
13. **Coordinate alignment** — the renderer GameObject's Transform must match the data's coordinate system (the quick-start scene sets a specific rotation/scale). Apply the same transform when creating the object in code.
14. **Color space = Gamma** (3DGS trained in gamma; Linear looks washed out). Graphics API order: Windows DX12 > Vulkan > DX11; macOS Metal; Linux Vulkan.
15. **Camera clip planes** — near 0.2–0.3, far 5000–15000; FOV ~60.
16. **iOS loads by URL only**; Android uses `persistentDataPath` or URL.
17. **`SetMaxBufferSplat` / `SetFullRenderSplat` / `SetMaxRenderSplats` units are 万** (value × 10 000).
18. **`LCCMeshBlock.vertices` can exceed 65 535** → set `mesh.indexFormat = IndexFormat.UInt32`.
19. **2D mask textures must be 1024×1024 R8**; byte 0 = cut, 240 = selected, 128 = neutral.
20. **`SetSemantic` color array length must be exactly 100.**

---

## 9. How to use this skill (agent behavior)

When the user asks for an LCC feature:

1. **Locate the capability** in §4, then read the matching recipe in §5.
2. **Always emit a full compilable script**, starting from the §2 template — never a bare method call. Include `using LCCCore;`, the `LCCManager` field, platform setup, `GetRender`, and `Load`.
3. **Check §8 gotchas** against the feature before finishing (especially the `Renderer` alias and `float3` for lights).
4. **For exact signatures/caveats not covered here**, read [`api_user_book.md`](api_user_book.md) (relative path). If that file is absent, cite the online doc URL from §7.
5. **Prefer the canonical sample** for a feature (§4) as the ground-truth pattern, and note its file path in your answer so the user can open it.
6. **Keep code idiomatic to the SDK**: `LCCCore.Renderer` fully qualified; `SetPlatformType` from `Application.platform`/device model when targeting multiple platforms; call editing/effects only after the `Load` `onComplete` callback.
7. **Platform caveats**: mention decal/occlusion (PC/Mac URP only), HTTP restriction on iOS, and native-format restrictions where they apply.



