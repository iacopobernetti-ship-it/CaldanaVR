using LCCCore;
using UnityEngine;

/// <summary>
/// Runtime Keybindings:
///   1 / 2 / 3      → Set Renderer A alpha to 0.25 / 0.60 / 1.00
///   Q / W / E      → Set Renderer B alpha to 0.25 / 0.60 / 1.00
///   G              → Cycle global SetAlpha between 1.0 → 0.5 (Validates the overlay relationship between global and per-renderer opacity)
///   Space          → Toggle auto-animation: Sine-wave oscillation for Renderer A's alpha, while Renderer B remains static (Visually demonstrates mutual independence)
/// </summary>


public class MultiRenderAlpha : MonoBehaviour
{
    public LCCManager m_manager;

    public Transform m_transformA;
    public Transform m_transformB;
    public string m_scenePathA;
    public string m_scenePathB;

    public float m_separation = 2.0f;
    [Range(0f, 1f)] public float m_initialAlphaA = 0.3f;
    [Range(0f, 1f)] public float m_initialAlphaB = 1.0f;

    public bool m_autoAnimate = false;
    public float m_animatePeriod = 3.0f;

    private LCCCore.Renderer m_rendererA;
    private LCCCore.Renderer m_rendererB;
    private bool m_loadedA;
    private bool m_loadedB;
    private bool m_ready;
    private bool m_animating;
    private float m_globalAlpha = 1.0f;

    void Start()
    {
        if (m_manager == null || string.IsNullOrEmpty(m_scenePathA))
        {
            Debug.LogError("m_manager or m_scenePathA is null");
            enabled = false;
            return;
        }

        string pathB = string.IsNullOrEmpty(m_scenePathB) ? m_scenePathA : m_scenePathB;

        // Multi-Renderer independent alpha control requires MultiRender mode.
        m_manager.SetPlatformType(PlatformType.PC);
        m_manager.SwitchRenderPass(ActiveRenderMode.MultiRender); 
        m_manager.SetLockFPS(false);

        m_rendererA = m_manager.GetRender(m_transformA);
        m_rendererB = m_manager.GetRender(m_transformB);
        if (m_rendererA == null || m_rendererB == null)
        {
            Debug.LogError("[AlphaTest] Create Renderer fail ");
            enabled = false;
            return;
        }

        Debug.Log("[AlphaTest] Loading Renderer scenes ");
        m_rendererA.Load(m_scenePathA, _ => { }, OnLoadedA);
        m_rendererB.Load(pathB, _ => { }, OnLoadedB);
        m_rendererA.SetEnvironment(false);
        m_rendererB.SetEnvironment(false);
    }

    private void OnLoadedA()
    {
        m_loadedA = true;
        Debug.Log("[AlphaTest] Renderer A Loaded。");
        TryStart();
    }

    private void OnLoadedB()
    {
        m_loadedB = true;
        Debug.Log("[AlphaTest] Renderer B Loaded。");
        TryStart();
    }

    // Apply the initial alpha values and enter the interactive state once both Renderers are ready.
    private void TryStart()
    {
        if (m_ready || !m_loadedA || !m_loadedB) return;
        m_ready = true;

        m_rendererA.SetAlpha(m_initialAlphaA);
        m_rendererB.SetAlpha(m_initialAlphaB);
        m_animating = m_autoAnimate;

        Debug.Log($"[AlphaTest] Ready. Initial alpha: A={m_initialAlphaA:F2}, B={m_initialAlphaB:F2}");
        Debug.Log("[AlphaTest] Keybindings: 1/2/3 to adjust A, Q/W/E to adjust B, G to toggle global, Space to toggle auto-animation for A.");

    }

    void Update()
    {
        if (!m_ready) return;

        // Renderer A 
        if (Input.GetKeyDown(KeyCode.Alpha1)) SetA(0.25f);
        if (Input.GetKeyDown(KeyCode.Alpha2)) SetA(0.60f);
        if (Input.GetKeyDown(KeyCode.Alpha3)) SetA(1.00f);

        // Renderer B 
        if (Input.GetKeyDown(KeyCode.Q)) SetB(0.25f);
        if (Input.GetKeyDown(KeyCode.W)) SetB(0.60f);
        if (Input.GetKeyDown(KeyCode.E)) SetB(1.00f);

        // Global Alpha: Validating the "Global × Per-Renderer" blending overlay (orthogonal to per-Renderer opacity adjustments).
        if (Input.GetKeyDown(KeyCode.G))
        {
            m_globalAlpha = Mathf.Approximately(m_globalAlpha, 1.0f) ? 0.5f : 1.0f;
            m_manager.SetAlpha(m_globalAlpha);
            Debug.Log($"[AlphaTest] Global SetAlpha({m_globalAlpha:F2}) (accumulatively applied to all Renderers)");

        }

        // Auto animation
        if (Input.GetKeyDown(KeyCode.Space))
        {
            m_animating = !m_animating;
            Debug.Log($"[AlphaTest] Renderer A auto-animation = {m_animating} (Renderer B should remain completely static to prove independence)");
            if (!m_animating) m_rendererA.SetAlpha(m_initialAlphaA);
        }

        // Renderer A oscillates sinusoidally while Renderer B remains untouched — a visual proof of their independence.
        if (m_animating)
        {
            float t = (Mathf.Sin(Time.time * (2f * Mathf.PI / Mathf.Max(0.01f, m_animatePeriod))) + 1f) * 0.5f;
            m_rendererA.SetAlpha(t);
        }
    }

    private void SetA(float a)
    {
        m_animating = false;
        m_rendererA.SetAlpha(a);
        Debug.Log($"[AlphaTest] Renderer A.SetAlpha({a:F2})  —  B untouched");
    }

    private void SetB(float a)
    {
        m_rendererB.SetAlpha(a);
        Debug.Log($"[AlphaTest] Renderer B.SetAlpha({a:F2})  —  A untouched");
    }
}
