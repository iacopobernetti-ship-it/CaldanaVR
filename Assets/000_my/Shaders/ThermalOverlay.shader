// Sovrapposizione termica SEMITRASPARENTE sopra gli splat.
//
// Mostra le temperature superficiali (colori per vertice scritti da TriangleTemperatureColorizer)
// sulla mesh low poly della via, lasciando vedere lo splat sotto.
//
// Le righe che contano:
//  - Queue Overlay (4000): si disegna DOPO gli splat. Misurato con i cartelli dei muri di
//    confine: un oggetto trasparente nella coda normale (3000) veniva ricoperto dagli splat,
//    in coda 4000 resta sopra;
//  - ZWrite Off + Blend: semitrasparente, e non nasconde nulla di cio' che viene dopo;
//  - ZTest LEqual: resta nascosta da cio' che le sta DAVANTI (gli splat scrivono profondita'
//    con SetZDepth, l'occlusore la scrive al posto della mesh). Senza, si vedrebbero le
//    facciate colorate attraverso le case;
//  - _Push: avvicina ogni vertice alla CAMERA di qualche centimetro. La mesh low poly coincide
//    solo grosso modo con la nuvola: senza spinta, gli splat che stanno un filo davanti alla
//    superficie la coprirebbero a chiazze. Verso la camera e non lungo la normale, perche' le
//    normali di una mesh fotogrammetrica non sono affidabili: una normale rivolta all'interno
//    spingerebbe la superficie dentro il muro;
//  - Cull Off: si vedono entrambe le facce, qualunque sia il verso dei triangoli;
//  - _MinDistance: la spinta non porta mai la superficie piu' vicina di cosi' alla camera. La
//    HUD sta a 0.7 m e dietro di se' scrive profondita' (VrHud, Depth Block Material): restando
//    oltre 1 m, i colori finiscono sempre DIETRO il pannello e il test di profondita' li scarta.
//    Misurato: con la sola coda di rendering i colori coprivano la HUD in entrambe le direzioni.
//
// Il materiale va assegnato in scena: solo cosi' lo shader entra nella build.
Shader "Artemis/ThermalOverlay"
{
    Properties
    {
        _Opacity ("Opacity", Range(0, 1)) = 0.6
        _Push ("Push toward camera (m)", Float) = 0.03
        _MinDistance ("Min distance from camera (m)", Float) = 1.0
    }

    SubShader
    {
        Tags
        {
            "RenderType" = "Transparent"
            "RenderPipeline" = "UniversalPipeline"
            "Queue" = "Overlay"
            "IgnoreProjector" = "True"
        }

        Pass
        {
            Name "ThermalOverlay"

            Blend SrcAlpha OneMinusSrcAlpha
            ZWrite Off
            ZTest LEqual
            Cull Off

            HLSLPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #pragma multi_compile_instancing

            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"

            CBUFFER_START(UnityPerMaterial)
                float _Opacity;
                float _Push;
                float _MinDistance;
            CBUFFER_END

            struct Attributes
            {
                float4 positionOS : POSITION;
                float4 color      : COLOR;
                UNITY_VERTEX_INPUT_INSTANCE_ID
            };

            struct Varyings
            {
                float4 positionCS : SV_POSITION;
                half4  color      : COLOR;
                UNITY_VERTEX_OUTPUT_STEREO
            };

            Varyings vert(Attributes IN)
            {
                Varyings OUT;
                UNITY_SETUP_INSTANCE_ID(IN);
                UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(OUT);

                float3 posWS = TransformObjectToWorld(IN.positionOS.xyz);
                float3 toCam = GetCameraPositionWS() - posWS;
                float len = max(length(toCam), 1e-4);
                posWS += (toCam / len) * min(_Push, max(len - _MinDistance, 0.0));

                OUT.positionCS = TransformWorldToHClip(posWS);
                OUT.color = half4(IN.color.rgb, _Opacity);
                return OUT;
            }

            half4 frag(Varyings IN) : SV_Target
            {
                return IN.color;
            }
            ENDHLSL
        }
    }

    Fallback Off
}
