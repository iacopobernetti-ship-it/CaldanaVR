using LCCCore;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Tone : MonoBehaviour
{
public LCCManager m_manager;
    public string m_FilePath;
    public GameObject m_Box1;
    public Slider m_brightness;
    public Slider m_saturation;
    public Slider m_contrast;
    private LCCCore.Renderer m_renderer;
    private Camera m_camera;
    private bool m_isLoaded = false;
    void Start()
    {
        m_camera = Camera.main;
        m_manager.SetPlatformType(PlatformType.PC);
        m_manager.SetEditorMode(true);
        m_renderer = m_manager.GetRender(this.transform);  
        if(m_renderer == null )
            Debug.LogError("GetRender failed, check if the manager is set correctly and the file path is valid.");
        m_renderer.Load(m_FilePath,onLoadProgress, onLoadCallback);
    }

    private void onLoadProgress(float value)
    {
        Debug.Log($"loading progress: {value}");
    }

    private void onLoadCallback()
    { 
        Debug.Log("data loaded !!!");
        m_isLoaded = true;        
    }

    [ContextMenu("Render (need a little time to load data)")]
    public void Render()
    {    
        if(m_renderer == null)
            m_renderer = m_manager.GetRender(this.transform);
        m_renderer.Load(m_FilePath,onLoadProgress, onLoadCallback);
    }

    [ContextMenu("unRender")]
    public void unRender()
    {
        m_renderer?.Dispose();
    }


    public void onTone()
    {
        //纹理尺寸固定1024*1024,其它属性保持与示例一致
        Texture2D _texture = new Texture2D(1024, 1024, TextureFormat.R8, false);
        _texture.filterMode = FilterMode.Point;
        _texture.wrapMode = TextureWrapMode.Clamp;

        int _count = 1024 * 1024;
        int _half = _count / 2;
        byte[] _values = new byte[_count];
        for (int i = 0; i < _count; i++)
        {
            if (i < _half)
                _values[i] = 128;    //默认128，0 表示裁剪，240表示选中
            else
                _values[i] = 240;
        }

        _texture.SetPixelData(_values, 0);

        List<ToneMix> _tMixs = new List<ToneMix>();
        ToneMix _tmix01 = new ToneMix();
        _tmix01.editType = EditType.Edit2D;
        _tmix01.mv = m_camera.worldToCameraMatrix * this.transform.localToWorldMatrix;;
        _tmix01.texture = _texture;
        _tmix01.mode = SelectMode.normal;
        _tmix01.mvp = GL.GetGPUProjectionMatrix(m_camera.projectionMatrix, true) * m_camera.worldToCameraMatrix * this.transform.localToWorldMatrix;;
        _tmix01.brightness = 2.0f;
        _tmix01.saturation = 2.0f;
        _tmix01.contrast = 0.4f;
        _tMixs.Add(_tmix01);


        //--- 3D 选框准备 -----
        var _mat1 = m_Box1.transform.worldToLocalMatrix;

        //Box选区
        //ToneMix _tmix02 = new ToneMix();
        //_tmix02.editType = EditType.Edit3D;
        //_tmix02.type = ShapeType.box;
        //_tmix02.operation = OperationMode.normal;
        //_tmix02.mode = SelectMode.normal;
        //_tmix02.invMat = _mat1;
        //_tmix02.brightness = m_brightness.value;
        //_tmix02.saturation = m_saturation.value;
        //_tmix02.contrast = m_contrast.value;
        //_tMixs.Add(_tmix02);

        //ToneMix _tmix022 = new ToneMix();
        //_tmix022.editType = EditType.Edit3D;
        //_tmix022.type = ShapeType.box;
        //_tmix022.operation = OperationMode.normal;
        //_tmix022.mode = SelectMode.invert;
        //_tmix022.brightness = 0.5f;
        //_tmix022.saturation = 0.5f;
        //_tmix022.contrast = 2.0f;
        //_tMixs.Add(_tmix022);

        m_manager.SetTone(_tMixs);
    }

    public void onToneClear()
    {
        m_manager.QuitToneMode();
    }
}
