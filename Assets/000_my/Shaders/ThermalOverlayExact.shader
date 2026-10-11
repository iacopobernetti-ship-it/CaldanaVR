// Sovrapposizione termica "ESATTA": i colori si vedono dove la mesh termica e' davvero in primo
// piano, ignorando la profondita' scritta dagli splat.
//
// Perche' esiste: con SetZDepth acceso ogni splat scrive profondita' su tutta la sua impronta,
// aloni quasi invisibili compresi. Per la sovrapposizione semplice (ThermalOverlay) quel velo e'
// un muro, e per superarlo serviva spingere i colori di 3 m verso la camera — con i colori che
// trapelavano attraverso gli ostacoli vicini. Qui, dentro l'impronta della mesh termica, la
// profondita' degli splat viene CANCELLATA e sostituita con quella della mesh stessa.
//
// Lo stesso shader serve QUATTRO passaggi, scelti da _Mode e dagli stati di rendering passati
// come proprieta'. Li costruisce ThermalSurface a partire da UN materiale (M_ThermalOverlayExact),
// uno per coda (4000..4003), perche' URP disegna un solo passaggio per tipo di pass:
//   0 MARK   - la mesh proiettata sul piano a profondita' _MinDistance lungo il raggio di vista
//              (stessa impronta a schermo), test LEqual: passa solo dove cio' che e' gia'
//              disegnato sta OLTRE 1 m.
//              Marca quei pixel nello stencil. La HUD (0.7 m, con il suo blocco di profondita')
//              e gli oggetti vicinissimi non vengono marcati: restano protetti;
//   1 RESET  - nei pixel marcati scrive profondita' "lontanissima": cancella il velo degli splat;
//   2 DEPTH  - nei pixel marcati scrive la profondita' della mesh termica (la superficie piu'
//              vicina vince, come per un oggetto opaco);
//   3 COLOR  - colora dove la mesh e' la superficie piu' vicina, semitrasparente, e pulisce lo
//              stencil.
// Dopo il passo 3 la profondita' nell'impronta e' quella della mesh termica, cioe' all'incirca
// quella della superficie vera: chi viene disegnato dopo (marker della sonda) si comporta bene.
//
// Limiti noti: un oggetto fra 1 m e la parete (un avatar davanti a un muro) viene colorato come
// la parete, se la sovrapposizione e' accesa. Serve lo STENCIL nel depth buffer della camera: se
// la HUD torna sotto i colori, nel renderer URP va scelto un Depth Attachment Format con stencil.
//
// Il materiale base va assegnato in scena (campo di ThermalSurface): solo cosi' lo shader entra
// nella build.
Shader "Artemis/ThermalOverlayExact"
{
    Properties
    {
        _Opacity ("Opacity", Range(0, 1)) = 0.6
        _Push ("Push toward camera (m)", Float) = 0.0
        _MinDistance ("Protected distance from camera (m)", Float) = 1.0

        [HideInInspector] _Mode ("Mode", Float) = 3
        [HideInInspector] _ZTest ("ZTest", Float) = 4
        [HideInInspector] _ZWrite ("ZWrite", Float) = 0
        [HideInInspector] _ColorMask ("ColorMask", Float) = 15
        [HideInInspector] _SrcBlend ("SrcBlend", Float) = 5
        [HideInInspector] _DstBlend ("DstBlend", Float) = 10
        [HideInInspector] _StencilComp ("StencilComp", Float) = 3
        [HideInInspector] _StencilPass ("StencilPass", Float) = 1
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
            Name "ThermalOverlayExact"

            Stencil
            {
                Ref 8
                ReadMask 8
                WriteMask 8
                Comp [_StencilComp]
                Pass [_StencilPass]
                Fail Keep
                ZFail Keep
            }

            Blend [_SrcBlend] [_DstBlend]
            ZWrite [_ZWrite]
            ZTest [_ZTest]
            ColorMask [_ColorMask]
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
                float _Mode;
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
                float3 cam = GetCameraPositionWS();
                float3 toV = posWS - cam;
                float len = max(length(toV), 1e-4);
                float3 dir = toV / len;

                if (_Mode < 0.5)
                {
                    // MARK: stesso raggio di vista (stessa impronta a schermo), portato sul PIANO a
                    // profondita' _MinDistance davanti alla camera. Un piano e non una sfera: con
                    // i vertici a distanza fissa, l'interno di un triangolo grande (la mesh e'
                    // decimata) sta sulla corda della sfera, molto piu' vicino di 1 m, e a 0.5 m
                    // passava davanti alla HUD — era la diagonale colorata sul pannello. Su un
                    // piano un triangolo resta piatto, e ogni suo punto sta esattamente a 1 m.
                    // I vertici dietro la camera restano dove sono: verranno tagliati comunque.
                    float3 posVS = TransformWorldToView(posWS);
                    float viewZ = -posVS.z;
                    if (viewZ > 1e-3) posVS *= _MinDistance / viewZ;
                    posWS = mul(UNITY_MATRIX_I_V, float4(posVS, 1.0)).xyz;
                }
                else if (_Mode > 1.5)
                {
                    // DEPTH e COLOR: spinta minima verso la camera, mai oltre la zona protetta.
                    posWS -= dir * min(_Push, max(len - _MinDistance, 0.0));
                }

                OUT.positionCS = TransformWorldToHClip(posWS);

                if (_Mode > 0.5 && _Mode < 1.5)
                {
                    // RESET: profondita' appena dentro il piano lontano.
                    #if UNITY_REVERSED_Z
                        OUT.positionCS.z = OUT.positionCS.w * 0.000001;
                    #else
                        OUT.positionCS.z = OUT.positionCS.w * 0.999999;
                    #endif
                }

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
