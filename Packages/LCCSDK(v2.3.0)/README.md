# LCC Unity SDK

LCC Unity SDK is an industrial-grade 3D Gaussian Splatting (3DGS) development kit officially provided by Shenzhen XGRIDS Technology Co., Ltd.

## Introduction

LCC Unity SDK delivers high-performance rendering for 3DGS scenes ranging from object-scale to city-scale, with more than 90 public APIs and continuously evolving features.

- Supports LCC2, PLY, SPLAT, SPZ, SOG, KSPLAT and other data formats.
- Deployable to Windows, Ubuntu, macOS, iOS, Android, VR and more.
- Covers single-scene and multi-scene real-time mixed rendering.
- Provides industrial and game-grade features including collision, highlight, clipping, relighting, shadow, projected decal, and video streaming fusion.

## Supported Platforms

| Platform | Support | Status | Note |
| --- | --- | --- | --- |
| Windows 10 / 11 | Full feature support | ✅ | — |
| macOS 12+ | Full feature support | ✅ | Intel & M-series chips |
| Ubuntu 20.04+ | Full feature support | ✅ | — |
| Android 10+ | Render, point cloud switching, raycast, etc. | ✅ | — |
| iOS 15+ | Render, point cloud switching, raycast, etc. | ✅ | — |
| Pico 4 Ultra | Render, point cloud switching, raycast, etc. | ✅ | Supports PCVR streaming and on-device rendering |
| Quest 3 | Render, point cloud switching, raycast, etc. | ✅ | Supports PCVR streaming and on-device rendering |

## Supported Unity Versions

| Unity Version | Supported Render Pipelines | Status |
| --- | --- | --- |
| Unity 2022.3 LTS | Built-in, URP | ✅ |
| Unity 6000.0 / 6000.1 / 6000.2 / 6000.3 / 6000.4 | URP | ✅ |
| Unity 6000.5 LTS | URP | ✅ |

## Package Structure

After importing the SDK into the Unity Editor, an LCC SDK folder appears under the Package directory, containing the following subdirectories.

| Subdirectory | Description |
| --- | --- |
| Runtime | Runtime files and scripts. |
| Plugins | Native and managed libraries required by the SDK. |
| Resources | Compiled per-platform shaders and other assets. |

## Getting the SDK

Download the LCC Unity SDK (labeled LCC_UNITY_SDK) from the developer platform.

- Official Website: https://www.xgrids.cn
- Developer Platform: https://developer.xgrids.cn
- Chinese Documentation: https://docs.xgrids.cn/zh-cn/07-plugin-sdk/02-unity/latest/01-introduction.html
- English Documentation: https://docs.xgrids.com/en-us/07-plugin-sdk/02-unity/latest/01-introduction.html

## Coordinate System

LCC data uses a Z-up right-handed coordinate system, whereas Unity uses a Y-up left-handed system. A coordinate transformation is required when rendering data in Unity.

The usual operation is to set the Renderer's Transform `Rotation.x` to `-90` and `Scale.x` to `-1`.

```csharp
// Set the Renderer's Transform to:
rendererTransform.localRotation = Quaternion.Euler(-90, 0, 0);
rendererTransform.localScale = new Vector3(-1, 1, 1);
```

## Features

The LCC Unity SDK exposes more than 90 public APIs. The following features can be integrated into your project on demand.

1. **Basic Rendering** — Supports full LOD0 rendering, dynamic LOD chunked rendering for large scenes, SH/non-SH data rendering, and separate control of subject and environment data; covers 3DGS scenes from object-scale to city-scale.

2. **Multi Graphics API** — Supports DX12, DX11, Vulkan and Metal graphics APIs to adapt to different hardware platforms.

3. **OpenXR** — Supports the OpenXR standard for VR devices, adapting to various hardware platforms.

4. **3DGS / Point Cloud Rendering** — Supports both 3DGS and point cloud rendering modes.

5. **Single / Multi-scene Mixed Rendering** — Supports single LCC scenes, multi-scene mixed rendering (up to 255 scenes), and mixed rendering of SOG / SPZ files; globally manages CPU and GPU memory to prevent leaks and memory spikes.

6. **Dynamic Lighting** — Supports real-time dynamic lighting with point and spot lights, without relying on proxy meshes for greater flexibility.

7. **Real-time Shadow** — Supports real-time shadow casting from meshes onto 3DGS surfaces, without proxy meshes for lower overhead and higher performance.

8. **Corner Snapping** — Supports corner snapping on 3DGS surfaces, snap cursor display, and snap raycast detection.

9. **Multi-camera Rendering** — Full rendering mode supports full-featured multi-camera; chunked rendering mode supports multi-camera at the same position and orientation.

10. **Projected Decal** — Supports texture and dynamic video projected decals, with depth occlusion for decals.

11. **Orthographic / Perspective Rendering** — Supports dynamically switching between orthographic and perspective rendering.

12. **HD Video Recording** — Supports video recording at 1080P, 2K, 4K, 8K and other resolutions, independent of the display resolution.

13. **Real-time Highlight** — Supports real-time selection highlight with 2D, 3D and Mix modes.

14. **Real-time Clip** — Supports real-time selection clipping with 2D, 3D and Mix modes.

15. **Real-time Plane Section** — Supports real-time horizontal and vertical plane sectioning.

16. **Real-time Color Adjust** — Supports real-time selection color adjustment, including brightness, saturation and contrast.

17. **Semantic Coloring** — Supports coloring data by semantics; requires the 3DGS primitives to carry semantic information.

18. **AI Box Rendering** — Supports visualization of AI-recognized lcb files, mainly for AI detection box rendering in the energy industry.

19. **Loading Effect** — Supports a diffusion effect during data loading.

20. **Raycast / Collision** — Supports mesh-less raycast, mesh raycast, sphere collision and capsule collision detection; built-in high-performance collision system.

21. **Dynamic FOV** — Supports runtime FOV adjustment of the render camera, mainly for scenarios where the render host and display device are separated, such as wearing stereoscopic glasses.

22. **Alpha Adjustment** — Supports real-time global 3DGS alpha adjustment; per-scene alpha can be adjusted independently in multi-scene rendering.

23. **Data Source** — Supports local disk and network server data sources.

24. **Frame Locking** — Supports dynamically switching between locked and unlocked frame rate; locked by default for optimal performance.

25. **Depth Write** — Supports real-time depth write; the limitation is coarse granularity, appearing as ellipsoid shapes.

26. **Mip / Non-Mip Toggle** — Supports real-time switching between Mip and Non-Mip rendering modes.

27. **PCVR Streaming** — Supports Single Pass Instanced and Multi Pass PCVR streaming.

28. **Get Scene Mesh** — Supports retrieving scene mesh data either all at once or on demand.

29. **Small-point Culling** — Supports runtime dynamic adjustment of small-point culling for performance optimization.

30. **Render Parameter Configuration** — Exposes multiple render parameter APIs, including total render buffer, on-screen splat count, StartLOD and SSE factor, allowing runtime adjustment of rendering performance and quality.

> Note: Some features are PC-only (Windows, Mac, Ubuntu); features that depend on Render Features may differ in support across Built-in, URP and HDRP.

## Performance

LCC rendering is GPU compute-intensive; performance mainly depends on screen resolution, CPU speed, GPU speed, and memory capacity and frequency. All splat counts below refer to 3DGS splats.

| Platform | Condition | Performance |
| --- | --- | --- |
| PC | NVIDIA RTX 3060, Intel i7-11700, 3200 MHz 32GB RAM, 1800×1000 | 24M splats @ 30FPS |
| Android | Mid-to-high-end devices since 2020 | 2M splats @ 30FPS |
| iOS | iPhone 11 and later | 3M splats @ 30FPS |
| VR | Pico 4 Ultra / Quest 3 | 600K splats @ 30FPS |

## License

This SDK is licensed under the XGRIDS SDK License Agreement. See THIRD-PARTY-NOTICES.txt for third-party component licenses.
