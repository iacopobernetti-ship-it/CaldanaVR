using LCCCore;
using System;
using System.Collections.Generic;
using UnityEngine;

public class Highlight : MonoBehaviour
{
    public LCCManager m_manager;
    public string m_FilePath;
    public GameObject m_Box1;
    public GameObject m_Box2;
    public GameObject m_Box3;
    public GameObject m_Clipsphere;
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


    public void on2DHighlight()
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
                _values[i] = 240;    //默认128，0 表示裁剪，240表示选中
            else
                _values[i] = 128;
        }
        _texture.SetPixelData(_values, 0);

        Texture2D _texture2 = new Texture2D(1024, 1024, TextureFormat.R8, false);
        _texture2.filterMode = FilterMode.Point;
        _texture2.wrapMode = TextureWrapMode.Clamp;
        byte[] _values2 = new byte[_count];
        for (int i = 0; i < _count; i++)
        {
            if (i > _count * 0.75 && i < _count * 0.9)
                _values2[i] = 240; 
            else
                _values2[i] = 128;
        }
        _texture2.SetPixelData(_values2, 0);

        List<Data2D> _2Ds = new List<Data2D>();
        Data2D _2d01 = new Data2D();
        _2d01.mv = m_camera.worldToCameraMatrix;        
        _2d01.texture = _texture;
        _2d01.mode = SelectMode.normal;
        _2d01.mvp = GL.GetGPUProjectionMatrix(m_camera.projectionMatrix, true) * m_camera.worldToCameraMatrix;
        _2Ds.Add(_2d01);

        Data2D _2d02 = new Data2D();
        _2d02.mv = m_camera.worldToCameraMatrix;
        _2d02.texture = _texture2;
        _2d02.mode = SelectMode.normal;
        _2d02.mvp = GL.GetGPUProjectionMatrix(m_camera.projectionMatrix, true) * m_camera.worldToCameraMatrix;
        _2Ds.Add(_2d02);

        m_manager.SetHighlight(_2Ds);
    }

    public void on3DHighlight()
    {
        List<Data3D> _3Ds = new List<Data3D>();
        var _mat1 = m_Box1.transform.worldToLocalMatrix;
        var _mat2 = m_Box2.transform.worldToLocalMatrix;
        var _mat3 = m_Box3.transform.worldToLocalMatrix;
        var _mat4 = m_Clipsphere.transform.worldToLocalMatrix;

        //Box选区
        Data3D _3d01 = new Data3D();
        _3d01.type = ShapeType.box;
        _3d01.operation = OperationMode.normal;
        _3d01.mode = SelectMode.normal;
        _3d01.invMat = _mat1;
        _3Ds.Add( _3d01);

        Data3D _3d02 = new Data3D();
        _3d02.type = ShapeType.box;
        _3d02.operation = OperationMode.normal;
        _3d02.mode = SelectMode.normal;
        _3d02.invMat = _mat2;
        _3Ds.Add(_3d02);

        //Sphere选区
        Data3D _3d04 = new Data3D();
        _3d04.type = ShapeType.sphere;
        _3d04.operation = OperationMode.normal;
        _3d04.mode = SelectMode.normal;
        _3d04.invMat = _mat4;
        _3Ds.Add(_3d04);

        //擦除Box/Sphere
        Data3D _3d03 = new Data3D();
        _3d03.type = ShapeType.box;
        _3d03.operation = OperationMode.erase;
        _3d03.mode = SelectMode.normal;
        _3d03.invMat = _mat3;
        _3Ds.Add(_3d03);

        //反选
        //Data3D _3d05 = new Data3D();
        //_3d05.mode = SelectMode.invert;
        //_3Ds.Add(_3d05);

        m_manager.SetHighlight(_3Ds);
    }

    public void onMixHighlight()
    {
            //--- 2D 选框准备 -----
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

        List<DataMix> _Mixs = new List<DataMix>();
        DataMix _mix01 = new DataMix();
        _mix01.editType = EditType.Edit2D;
        _mix01.mv = m_camera.worldToCameraMatrix;
        _mix01.texture = _texture;
        _mix01.mode = SelectMode.normal;
        _mix01.mvp = GL.GetGPUProjectionMatrix(m_camera.projectionMatrix, true) * m_camera.worldToCameraMatrix;
        _Mixs.Add(_mix01);

        //--- 3D 选框准备 -----
        var _mat1 = m_Box1.transform.worldToLocalMatrix;
        var _mat2 = m_Box2.transform.worldToLocalMatrix;
        var _mat3 = m_Box3.transform.worldToLocalMatrix;
        var _mat4 = m_Clipsphere.transform.worldToLocalMatrix;

        //Box选区
        DataMix _mix02 = new DataMix();
        _mix02.editType = EditType.Edit3D;
        _mix02.type = ShapeType.box;
        _mix02.operation = OperationMode.normal;
        _mix02.mode = SelectMode.normal;
        _mix02.invMat = _mat1;
        _Mixs.Add(_mix02);

        DataMix _mix03 = new DataMix();
        _mix03.editType = EditType.Edit3D;
        _mix03.type = ShapeType.box;
        _mix03.operation = OperationMode.normal;
        _mix03.mode = SelectMode.normal;
        _mix03.invMat = _mat2;
        _Mixs.Add(_mix03);

        //Sphere选区
        DataMix _mix04 = new DataMix();
        _mix04.editType = EditType.Edit3D;
        _mix04.type = ShapeType.sphere;
        _mix04.operation = OperationMode.normal;
        _mix04.mode = SelectMode.normal;
        _mix04.invMat = _mat4;
        _Mixs.Add(_mix04);

        //擦除Box/Sphere
        DataMix _mix05 = new DataMix();
        _mix05.editType = EditType.Edit3D;
        _mix05.type = ShapeType.box;
        _mix05.operation = OperationMode.erase;
        _mix05.mode = SelectMode.normal;
        _mix05.invMat = _mat3;
        _Mixs.Add(_mix05);

        //反选
        DataMix _mix06 = new DataMix();
        _mix06.editType = EditType.Edit3D;
        _mix06.type = ShapeType.box;
        _mix06.mode = SelectMode.invert;
        //_Mixs.Add(_mix06);

        m_manager.SetHighlight(_Mixs);
    }      
    
    public void onClearHighlight()
    {
        m_manager.QuitHighlightMode();
    }

}
