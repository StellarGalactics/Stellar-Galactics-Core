#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect[]
struct All1VfxDemoEffectU5BU5D_t1497D474E912C788E0BA007C4C5A8DBB7B8177BC;
// AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffectCollection[]
struct All1VfxDemoEffectCollectionU5BU5D_t8A35A6B74ED770D92D4813845556899AEB14743E;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// AllIn1VfxToolkit.Demo.Scripts.All1DemoDropdownScroller
struct All1DemoDropdownScroller_tC0690559C949059DA3E32ADC434480A250155BB2;
// AllIn1VfxToolkit.Demo.Scripts.All1DemoMouseLocker
struct All1DemoMouseLocker_tA7C89FA53A875E212B8B38EDE3A2AE0381C8C7FB;
// AllIn1VfxToolkit.Demo.Scripts.All1DemoProjectileObstacle
struct All1DemoProjectileObstacle_tFCF68382D5227C417F314063D11C5D915D03AC31;
// AllIn1VfxToolkit.Demo.Scripts.All1DemoSceneColor
struct All1DemoSceneColor_t24E6A732D83DE49318C684B071A921DC97895375;
// AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect
struct All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682;
// AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffectCollection
struct All1VfxDemoEffectCollection_tE55400D4015AC0361F90307F2CAC49B6CD69017A;
// AllIn1VfxToolkit.Demo.Scripts.AllIn1AutoRotate
struct AllIn1AutoRotate_t05A8930E301C314223E779E4016662FABF00AF35;
// AllIn1VfxToolkit.Demo.Scripts.AllIn1CanvasFader
struct AllIn1CanvasFader_t258BB80CC8E3E162A796EC623E92020D69377410;
// AllIn1VfxToolkit.Demo.Scripts.AllIn1ChangeAllChildTextFonts
struct AllIn1ChangeAllChildTextFonts_t9C4A7481982A200CA2DB549F3AD24B98DD206E63;
// AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoProjectile
struct AllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5;
// AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween
struct AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463;
// AllIn1VfxToolkit.Demo.Scripts.AllIn1DoShake
struct AllIn1DoShake_tB94CDF60A715E19CA1EC2C0D6413338FEC872E64;
// AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate
struct AllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7;
// AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker
struct AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1;
// AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl
struct AllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1;
// AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxAutoDestroy
struct AllIn1VfxAutoDestroy_tC63936BC1AE63771AFAA0C5EA85C077B5348F1C6;
// AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController
struct AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C;
// AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxFadeLight
struct AllIn1VfxFadeLight_tF90CF036F28D0032EC29E8A320FD09742167B476;
// AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxParticleSystemTime
struct AllIn1VfxParticleSystemTime_t947040E7EBDE5A0B06FE7E4CCBD9803D9901B3F1;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController/<CurrentEffectLabelTweenEffectCR>d__38
struct U3CCurrentEffectLabelTweenEffectCRU3Ed__38_t2FC601553F066A6D1A95394A63B70216ADE848DB;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCurrentEffectLabelTweenEffectCRU3Ed__38_t2FC601553F066A6D1A95394A63B70216ADE848DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral006976E56695070D63E145217B701EDEE8895C82;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral4780AF940655CB59AF49F6344DA95EC30E32AA8A;
IL2CPP_EXTERN_C String_t* _stringLiteral493129A97A0C654B32ECBC950426300104965D7F;
IL2CPP_EXTERN_C String_t* _stringLiteral5FD7ACA76D20D20DB889E633C51EEB14ED85007F;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral9DED1F98F6124037784F89A7135F9F6F303C3B60;
IL2CPP_EXTERN_C String_t* _stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8;
IL2CPP_EXTERN_C String_t* _stringLiteralEDE8C4DF1715CFC71A5D1502BBF477C021B0A6BE;
IL2CPP_EXTERN_C String_t* _stringLiteralF12CEF824BF74FB0B0A862C961B9E80A0783D802;
IL2CPP_EXTERN_C String_t* _stringLiteralF5D8EF422ABD0284BA3EEB3BF58FBA9313575F4E;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* AllIn1TimeControl_U3CStartU3Eb__13_0_mA6BE97428BA2CCD2D9F31472B53C74440A2A2B68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5_mF3FFFDA2C98CBC95916F5F5C74CCFD0FD4F65839_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463_mAB56FA5132E70ACD999BD7D20C572508F55D3A41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7_m4BBC2AB5DC68C47F0C4BC7A6BC01EE0720A90855_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m3FC915DEC37CE1CE6E48A26D44655BAE36FD140E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1_m267848629D9479B88189CBF523E2B8FAD1D52259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCurrentEffectLabelTweenEffectCRU3Ed__38_System_Collections_IEnumerator_Reset_m7EB4182C76D651C0301AF6D458EE908C9216DFBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct All1VfxDemoEffectU5BU5D_t1497D474E912C788E0BA007C4C5A8DBB7B8177BC;
struct All1VfxDemoEffectCollectionU5BU5D_t8A35A6B74ED770D92D4813845556899AEB14743E;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1EE020DFAD8B16A5B31E04261037046B6EFF3844 
{
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController/<CurrentEffectLabelTweenEffectCR>d__38
struct U3CCurrentEffectLabelTweenEffectCRU3Ed__38_t2FC601553F066A6D1A95394A63B70216ADE848DB  : public RuntimeObject
{
	// System.Int32 AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController/<CurrentEffectLabelTweenEffectCR>d__38::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController/<CurrentEffectLabelTweenEffectCR>d__38::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController/<CurrentEffectLabelTweenEffectCR>d__38::<>4__this
	AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* ___U3CU3E4__this_2;
	// UnityEngine.Color AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController/<CurrentEffectLabelTweenEffectCR>d__38::<startColor>5__2
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CstartColorU3E5__2_3;
};

// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1* ___m_FontTextureRebuildCallback_5;
};

struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6_StaticFields
{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___textureRebuilt_4;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90  : public MulticastDelegate_t
{
};

// AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect
struct All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect::onlyOneAtATime
	bool ___onlyOneAtATime_4;
	// System.Boolean AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect::canBePlayedAgain
	bool ___canBePlayedAgain_5;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect::randomSpreadRadius
	float ___randomSpreadRadius_6;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect::cooldown
	float ___cooldown_7;
	// System.Boolean AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect::isShootProjectile
	bool ___isShootProjectile_8;
	// UnityEngine.GameObject AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect::effectPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___effectPrefab_9;
	// System.Boolean AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect::spawnTouchingFloor
	bool ___spawnTouchingFloor_10;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect::projectileSpeed
	float ___projectileSpeed_11;
	// UnityEngine.GameObject AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect::projectilePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectilePrefab_12;
	// UnityEngine.GameObject AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect::muzzleFlashPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___muzzleFlashPrefab_13;
	// UnityEngine.GameObject AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect::impactPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___impactPrefab_14;
	// System.Boolean AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect::doCameraShake
	bool ___doCameraShake_15;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect::mainEffectShakeAmount
	float ___mainEffectShakeAmount_16;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect::projectileImpactShakeAmount
	float ___projectileImpactShakeAmount_17;
	// UnityEngine.Vector3 AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect::positionOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionOffset_18;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect::scaleMultiplier
	float ___scaleMultiplier_19;
};

// AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffectCollection
struct All1VfxDemoEffectCollection_tE55400D4015AC0361F90307F2CAC49B6CD69017A  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect[] AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffectCollection::demoEffectCollection
	All1VfxDemoEffectU5BU5D_t1497D474E912C788E0BA007C4C5A8DBB7B8177BC* ___demoEffectCollection_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AllIn1VfxToolkit.Demo.Scripts.All1DemoDropdownScroller
struct All1DemoDropdownScroller_tC0690559C949059DA3E32ADC434480A250155BB2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 AllIn1VfxToolkit.Demo.Scripts.All1DemoDropdownScroller::dropdownElementCount
	int32_t ___dropdownElementCount_4;
	// UnityEngine.KeyCode AllIn1VfxToolkit.Demo.Scripts.All1DemoDropdownScroller::nextDropdownElementKey
	int32_t ___nextDropdownElementKey_5;
	// UnityEngine.UI.Dropdown AllIn1VfxToolkit.Demo.Scripts.All1DemoDropdownScroller::dropdown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___dropdown_6;
};

// AllIn1VfxToolkit.Demo.Scripts.All1DemoMouseLocker
struct All1DemoMouseLocker_tA7C89FA53A875E212B8B38EDE3A2AE0381C8C7FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.KeyCode AllIn1VfxToolkit.Demo.Scripts.All1DemoMouseLocker::mouseLockerKey
	int32_t ___mouseLockerKey_4;
	// UnityEngine.UI.Image AllIn1VfxToolkit.Demo.Scripts.All1DemoMouseLocker::lockButtonImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___lockButtonImage_5;
	// UnityEngine.Color AllIn1VfxToolkit.Demo.Scripts.All1DemoMouseLocker::lockButtonColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lockButtonColor_6;
	// AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate AllIn1VfxToolkit.Demo.Scripts.All1DemoMouseLocker::allIn1MouseRotate
	AllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7* ___allIn1MouseRotate_7;
	// AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween AllIn1VfxToolkit.Demo.Scripts.All1DemoMouseLocker::lockedTween
	AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* ___lockedTween_8;
	// UnityEngine.UI.Text AllIn1VfxToolkit.Demo.Scripts.All1DemoMouseLocker::pausedButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___pausedButtonText_9;
	// System.Boolean AllIn1VfxToolkit.Demo.Scripts.All1DemoMouseLocker::currentlyLocked
	bool ___currentlyLocked_10;
};

// AllIn1VfxToolkit.Demo.Scripts.All1DemoProjectileObstacle
struct All1DemoProjectileObstacle_tFCF68382D5227C417F314063D11C5D915D03AC31  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] AllIn1VfxToolkit.Demo.Scripts.All1DemoProjectileObstacle::projectileObstacles
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___projectileObstacles_4;
	// UnityEngine.UI.Dropdown AllIn1VfxToolkit.Demo.Scripts.All1DemoProjectileObstacle::projectileObstacleDropdown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___projectileObstacleDropdown_5;
};

// AllIn1VfxToolkit.Demo.Scripts.All1DemoSceneColor
struct All1DemoSceneColor_t24E6A732D83DE49318C684B071A921DC97895375  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Color[] AllIn1VfxToolkit.Demo.Scripts.All1DemoSceneColor::sceneColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___sceneColors_4;
	// UnityEngine.Camera AllIn1VfxToolkit.Demo.Scripts.All1DemoSceneColor::targetCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___targetCamera_5;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.All1DemoSceneColor::cameraColorMult
	float ___cameraColorMult_6;
	// UnityEngine.MeshRenderer AllIn1VfxToolkit.Demo.Scripts.All1DemoSceneColor::floorMeshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___floorMeshRenderer_7;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.All1DemoSceneColor::floorColorMult
	float ___floorColorMult_8;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.All1DemoSceneColor::fogColorMult
	float ___fogColorMult_9;
	// UnityEngine.UI.Dropdown AllIn1VfxToolkit.Demo.Scripts.All1DemoSceneColor::sceneColorDropdown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___sceneColorDropdown_10;
	// UnityEngine.Material AllIn1VfxToolkit.Demo.Scripts.All1DemoSceneColor::floorMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___floorMaterial_11;
};

// AllIn1VfxToolkit.Demo.Scripts.AllIn1AutoRotate
struct AllIn1AutoRotate_t05A8930E301C314223E779E4016662FABF00AF35  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1AutoRotate::rotationSpeed
	float ___rotationSpeed_4;
	// UnityEngine.Vector3 AllIn1VfxToolkit.Demo.Scripts.AllIn1AutoRotate::rotationAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotationAxis_5;
};

// AllIn1VfxToolkit.Demo.Scripts.AllIn1CanvasFader
struct AllIn1CanvasFader_t258BB80CC8E3E162A796EC623E92020D69377410  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.KeyCode AllIn1VfxToolkit.Demo.Scripts.AllIn1CanvasFader::fadeToggleKey
	int32_t ___fadeToggleKey_4;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1CanvasFader::tweenSpeed
	float ___tweenSpeed_5;
	// AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween AllIn1VfxToolkit.Demo.Scripts.AllIn1CanvasFader::hideUiButtonTween
	AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* ___hideUiButtonTween_6;
	// System.Boolean AllIn1VfxToolkit.Demo.Scripts.AllIn1CanvasFader::isTweening
	bool ___isTweening_7;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1CanvasFader::currentAlpha
	float ___currentAlpha_8;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1CanvasFader::targetAlpha
	float ___targetAlpha_9;
	// UnityEngine.CanvasGroup AllIn1VfxToolkit.Demo.Scripts.AllIn1CanvasFader::canvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___canvasGroup_10;
	// System.Boolean AllIn1VfxToolkit.Demo.Scripts.AllIn1CanvasFader::hideUiButtonTweenNotNull
	bool ___hideUiButtonTweenNotNull_11;
};

// AllIn1VfxToolkit.Demo.Scripts.AllIn1ChangeAllChildTextFonts
struct AllIn1ChangeAllChildTextFonts_t9C4A7481982A200CA2DB549F3AD24B98DD206E63  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Font AllIn1VfxToolkit.Demo.Scripts.AllIn1ChangeAllChildTextFonts::newFont
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___newFont_4;
	// System.Boolean AllIn1VfxToolkit.Demo.Scripts.AllIn1ChangeAllChildTextFonts::changeFontOnStart
	bool ___changeFontOnStart_5;
};

// AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoProjectile
struct AllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoProjectile::inaccurateAmount
	float ___inaccurateAmount_4;
	// UnityEngine.GameObject AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoProjectile::currentImpactPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentImpactPrefab_5;
	// UnityEngine.Transform AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoProjectile::currentHierarchyParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___currentHierarchyParent_6;
	// System.Boolean AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoProjectile::doImpactSpawn
	bool ___doImpactSpawn_7;
	// System.Boolean AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoProjectile::doShake
	bool ___doShake_8;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoProjectile::shakeAmountOnImpact
	float ___shakeAmountOnImpact_9;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoProjectile::impactScaleSize
	float ___impactScaleSize_10;
};

// AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween
struct AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween::maxTweenScale
	float ___maxTweenScale_4;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween::minTweenScale
	float ___minTweenScale_5;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween::tweenSpeed
	float ___tweenSpeed_6;
	// System.Boolean AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween::isTweening
	bool ___isTweening_7;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween::currentScale
	float ___currentScale_8;
	// UnityEngine.Vector3 AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween::scaleToApply
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scaleToApply_9;
};

// AllIn1VfxToolkit.Demo.Scripts.AllIn1DoShake
struct AllIn1DoShake_tB94CDF60A715E19CA1EC2C0D6413338FEC872E64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1DoShake::shakeAmount
	float ___shakeAmount_4;
	// System.Boolean AllIn1VfxToolkit.Demo.Scripts.AllIn1DoShake::doShakeOnStart
	bool ___doShakeOnStart_5;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1DoShake::shakeOnStartDelay
	float ___shakeOnStartDelay_6;
};

// AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate
struct AllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::objectToRotate
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___objectToRotate_4;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::rotationSpeedHorizontal
	float ___rotationSpeedHorizontal_5;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::translateVerticalSpeed
	float ___translateVerticalSpeed_6;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::translateScrollSpeed
	float ___translateScrollSpeed_7;
	// System.Boolean AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::lockCursor
	bool ___lockCursor_8;
	// UnityEngine.KeyCode AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::lockCursorKeyCode
	int32_t ___lockCursorKeyCode_9;
	// AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::hideUiButtonTween
	AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* ___hideUiButtonTween_10;
	// UnityEngine.UI.Image AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::lockedButtonImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___lockedButtonImage_11;
	// UnityEngine.UI.Text AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::lockedButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___lockedButtonText_12;
	// UnityEngine.Color AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::lockedButtonColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lockedButtonColor_13;
	// System.Boolean AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::cursorIsLocked
	bool ___cursorIsLocked_14;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::maxHeight
	float ___maxHeight_15;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::maxZoom
	float ___maxZoom_16;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::minZoom
	float ___minZoom_17;
	// UnityEngine.Vector3 AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::currPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currPosition_18;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::dt
	float ___dt_19;
};

// AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker
struct AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker::maximumTranslationShake
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___maximumTranslationShake_4;
	// UnityEngine.Vector3 AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker::maximumAngularShake
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___maximumAngularShake_5;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker::shakeFrequency
	float ___shakeFrequency_6;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker::shakeSmoothingExponent
	float ___shakeSmoothingExponent_7;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker::shakeRecoverPerSecond
	float ___shakeRecoverPerSecond_8;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker::currentShakeAmount
	float ___currentShakeAmount_10;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker::seed
	float ___seed_11;
};

struct AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1_StaticFields
{
	// AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker::i
	AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1* ___i_9;
};

// AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl
struct AllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.KeyCode AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::increaseTimeScale
	int32_t ___increaseTimeScale_4;
	// UnityEngine.KeyCode AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::increaseTimeScaleAlt
	int32_t ___increaseTimeScaleAlt_5;
	// UnityEngine.KeyCode AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::decreaseTimeScale
	int32_t ___decreaseTimeScale_6;
	// UnityEngine.KeyCode AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::decreaseTimeScaleAlt
	int32_t ___decreaseTimeScaleAlt_7;
	// UnityEngine.KeyCode AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::pauseKey
	int32_t ___pauseKey_8;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::timeScaleInterval
	float ___timeScaleInterval_9;
	// UnityEngine.UI.Slider AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::timeScaleSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___timeScaleSlider_10;
	// UnityEngine.UI.Image AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::pausedButtonImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___pausedButtonImage_11;
	// UnityEngine.Color AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::pausedButtonColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___pausedButtonColor_12;
	// System.Boolean AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::timeScaleSliderNotNull
	bool ___timeScaleSliderNotNull_13;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::lastChangeTime
	float ___lastChangeTime_14;
	// AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::pausedButtonTween
	AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* ___pausedButtonTween_15;
	// UnityEngine.UI.Text AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::pausedButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___pausedButtonText_16;
};

// AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxAutoDestroy
struct AllIn1VfxAutoDestroy_tC63936BC1AE63771AFAA0C5EA85C077B5348F1C6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxAutoDestroy::destroyTime
	float ___destroyTime_4;
};

// AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController
struct AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::startingCollectionIndex
	int32_t ___startingCollectionIndex_4;
	// System.Int32 AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::startingEffectIndex
	int32_t ___startingEffectIndex_5;
	// AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffectCollection[] AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::effectsToSpawnCollections
	All1VfxDemoEffectCollectionU5BU5D_t8A35A6B74ED770D92D4813845556899AEB14743E* ___effectsToSpawnCollections_6;
	// UnityEngine.GameObject AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::projectileBasePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectileBasePrefab_7;
	// UnityEngine.GameObject AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::projectileSceneSetupObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectileSceneSetupObject_8;
	// UnityEngine.Transform AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::projectileSpawnPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___projectileSpawnPoint_9;
	// UnityEngine.KeyCode AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::playEffectKey
	int32_t ___playEffectKey_10;
	// UnityEngine.KeyCode AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::nextEffectKey
	int32_t ___nextEffectKey_11;
	// UnityEngine.KeyCode AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::nextEffectKeyAlt
	int32_t ___nextEffectKeyAlt_12;
	// UnityEngine.KeyCode AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::previousEffectKey
	int32_t ___previousEffectKey_13;
	// UnityEngine.KeyCode AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::previousEffectKeyAlt
	int32_t ___previousEffectKeyAlt_14;
	// UnityEngine.UI.Text AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::currentEffectLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___currentEffectLabel_15;
	// UnityEngine.UI.Button AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::playEffectButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___playEffectButton_16;
	// UnityEngine.GameObject AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::playEffectInstructionsGo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playEffectInstructionsGo_17;
	// UnityEngine.UI.Button AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::nextEffectButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___nextEffectButton_18;
	// UnityEngine.UI.Button AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::previousEffectButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___previousEffectButton_19;
	// UnityEngine.Transform AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::groundSpawnTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___groundSpawnTransform_20;
	// UnityEngine.Transform AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::cameraPivotTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraPivotTransform_21;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::camPivotHeightSmoothing
	float ___camPivotHeightSmoothing_22;
	// UnityEngine.GameObject AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::projectileEffectUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectileEffectUI_23;
	// UnityEngine.GameObject AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::normalEffectUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___normalEffectUI_24;
	// AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::currDemoEffect
	All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* ___currDemoEffect_25;
	// System.Int32 AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::currDemoCollectionIndex
	int32_t ___currDemoCollectionIndex_26;
	// System.Int32 AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::currDemoEffectIndex
	int32_t ___currDemoEffectIndex_27;
	// System.Int32 AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::currentEffectPlays
	int32_t ___currentEffectPlays_28;
	// AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::currLabelTween
	AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* ___currLabelTween_29;
	// AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::playButtTween
	AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* ___playButtTween_30;
	// AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::nextButtTween
	AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* ___nextButtTween_31;
	// AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::prevButtTween
	AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* ___prevButtTween_32;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::timeSinceEffectPlay
	float ___timeSinceEffectPlay_33;
	// AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::allIn1TimeControl
	AllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1* ___allIn1TimeControl_34;
};

// AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxFadeLight
struct AllIn1VfxFadeLight_tF90CF036F28D0032EC29E8A320FD09742167B476  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxFadeLight::fadeDuration
	float ___fadeDuration_4;
	// System.Boolean AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxFadeLight::destroyWhenFaded
	bool ___destroyWhenFaded_5;
	// UnityEngine.Light AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxFadeLight::targetLight
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___targetLight_6;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxFadeLight::animationRatioRemaining
	float ___animationRatioRemaining_7;
	// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxFadeLight::iniLightIntensity
	float ___iniLightIntensity_8;
};

// AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxParticleSystemTime
struct AllIn1VfxParticleSystemTime_t947040E7EBDE5A0B06FE7E4CCBD9803D9901B3F1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxParticleSystemTime::updateEveryFrame
	bool ___updateEveryFrame_4;
	// UnityEngine.Vector2 AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxParticleSystemTime::simulationTimeRange
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___simulationTimeRange_5;
	// UnityEngine.ParticleSystem AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxParticleSystemTime::targetPs
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___targetPs_6;
	// System.Boolean AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxParticleSystemTime::isValid
	bool ___isValid_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353  : public RuntimeArray
{
	ALIGN_FIELD (8) Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* m_Items[1];

	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffectCollection[]
struct All1VfxDemoEffectCollectionU5BU5D_t8A35A6B74ED770D92D4813845556899AEB14743E  : public RuntimeArray
{
	ALIGN_FIELD (8) All1VfxDemoEffectCollection_tE55400D4015AC0361F90307F2CAC49B6CD69017A* m_Items[1];

	inline All1VfxDemoEffectCollection_tE55400D4015AC0361F90307F2CAC49B6CD69017A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline All1VfxDemoEffectCollection_tE55400D4015AC0361F90307F2CAC49B6CD69017A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, All1VfxDemoEffectCollection_tE55400D4015AC0361F90307F2CAC49B6CD69017A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline All1VfxDemoEffectCollection_tE55400D4015AC0361F90307F2CAC49B6CD69017A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline All1VfxDemoEffectCollection_tE55400D4015AC0361F90307F2CAC49B6CD69017A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, All1VfxDemoEffectCollection_tE55400D4015AC0361F90307F2CAC49B6CD69017A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect[]
struct All1VfxDemoEffectU5BU5D_t1497D474E912C788E0BA007C4C5A8DBB7B8177BC  : public RuntimeArray
{
	ALIGN_FIELD (8) All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* m_Items[1];

	inline All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.UI.Dropdown>()
inline Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoDropdownScroller::NextDropdownElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoDropdownScroller_NextDropdownElements_m1E50714A22689978979AD9250A85E8DC4C8E0329 (All1DemoDropdownScroller_tC0690559C949059DA3E32ADC434480A250155BB2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.Dropdown::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate>()
inline AllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7* Component_GetComponent_TisAllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7_m4BBC2AB5DC68C47F0C4BC7A6BC01EE0720A90855 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween>()
inline AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* Component_GetComponent_TisAllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463_mAB56FA5132E70ACD999BD7D20C572508F55D3A41 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoMouseLocker::DoMouseLockToggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoMouseLocker_DoMouseLockToggle_mDFD1E9F06646C7FDBFA67F9437F944AE91909E09 (All1DemoMouseLocker_tA7C89FA53A875E212B8B38EDE3A2AE0381C8C7FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween::ScaleUpTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DemoScaleTween_ScaleUpTween_m7A248CB539848F376DB4CFF95BC94F3B4C3E41CB (AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoProjectileObstacle::DropdownValueChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoProjectileObstacle_DropdownValueChanged_mFBF48CCE57376065EADE55B9F3255561C6FACC90 (All1DemoProjectileObstacle_tFCF68382D5227C417F314063D11C5D915D03AC31* __this, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoProjectileObstacle::SetProjectileObstacleN(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoProjectileObstacle_SetProjectileObstacleN_m7D19F65A703DCCF810FBB6FB9352EBBE9D9054F3 (All1DemoProjectileObstacle_tFCF68382D5227C417F314063D11C5D915D03AC31* __this, int32_t ___nIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoSceneColor::DropdownValueChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoSceneColor_DropdownValueChanged_m2C75ECD302045FF882760252A3165EB024822C13 (All1DemoSceneColor_t24E6A732D83DE49318C684B071A921DC97895375* __this, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoSceneColor::SetSceneColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoSceneColor_SetSceneColor_m0CA47927C241E75B0A075521FFB8D5F87B0BD7E4 (All1DemoSceneColor_t24E6A732D83DE49318C684B071A921DC97895375* __this, int32_t ___nIndex0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderSettings::set_fogColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_fogColor_mBBD12EC3492195F85F583CAF4FAE4A973227639B (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1CanvasFader::HideUiButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1CanvasFader_HideUiButtonPressed_mE81198608A65F0B0C85C636160102A68E7B70E5F (AllIn1CanvasFader_t258BB80CC8E3E162A796EC623E92020D69377410* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1CanvasFader::MakeCanvasVisibleTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1CanvasFader_MakeCanvasVisibleTween_mF19FBBD89C43813C394EBD432EFFEE8DDE825143 (AllIn1CanvasFader_t258BB80CC8E3E162A796EC623E92020D69377410* __this, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1CanvasFader::MakeCanvasInvisibleTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1CanvasFader_MakeCanvasInvisibleTween_mC109D9FA7CE16C5584BD66BB2BB3D05110667D9C (AllIn1CanvasFader_t258BB80CC8E3E162A796EC623E92020D69377410* __this, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1ChangeAllChildTextFonts::ChangeFonts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1ChangeAllChildTextFonts_ChangeFonts_m815411A716334A1AE568870F9819242306C3DB67 (AllIn1ChangeAllChildTextFonts_t9C4A7481982A200CA2DB549F3AD24B98DD206E63* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.UI.Text>()
inline TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* Component_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m3FC915DEC37CE1CE6E48A26D44655BAE36FD140E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Text::set_font(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_font_mA0D2999281A72029A5BC7294A886C5674F07DC5F (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___value0, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoProjectile::ApplyPrecisionOffsetToProjectileDir(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DemoProjectile_ApplyPrecisionOffsetToProjectileDir_mA1018FB2E8E2F1C1D75C1F95E1BD5EE27B52B5E2 (AllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___projectileDir0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker::DoCameraShake(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AllIn1Shaker_DoCameraShake_mEA0E05A1E14EE7E970C3CDEF1496F8279127D121_inline (AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1* __this, float ___shakeAmount0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween::UpdateScaleToApply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DemoScaleTween_UpdateScaleToApply_m0311F2480C4D2B7D493E6095DF81B277643BA68C (AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* __this, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween::ApplyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DemoScaleTween_ApplyScale_m7AF485D335014314C02DE49F0252D2B17340D02E (AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DoShake::DoShake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DoShake_DoShake_mCC1F6B788ABB0486E029649DB71986D6FBD4FA3C (AllIn1DoShake_tB94CDF60A715E19CA1EC2C0D6413338FEC872E64* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::ToggleCursorLocked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1MouseRotate_ToggleCursorLocked_mFB02361AD8FD96F02D1172B34F32E94E6406F0F1 (AllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeSinceLevelLoad_m65C386103A91B172781032CA1A6FFDEC8CFBA921 (const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::CamRotateAroundYAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1MouseRotate_CamRotateAroundYAxis_m697A7DF105BCA5A6D48C0EEBF5F4C537690B98B4 (AllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7* __this, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::CamHeightTranslate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1MouseRotate_CamHeightTranslate_mECDE5C987BC68AA45C8EDA9FB44B09646308E28E (AllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7* __this, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::CamZoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1MouseRotate_CamZoom_m3F0BC7D60154F66920D928D03DD823BD324C0C69 (AllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, float ___angle2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7 (bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker::SmoothShakeToApply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AllIn1Shaker_SmoothShakeToApply_m6D7E2F185D8727A5A2AA0B4FE502E5649603CA36 (AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1* __this, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker::ShakePosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shaker_ShakePosition_m22E42F2C6BBF315BAFCB97BC89F59955F201305A (AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1* __this, float ___shake0, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker::ShakeRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shaker_ShakeRotation_mC7EF81B96148A9FA17D9B985143A37B1990F0AFD (AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1* __this, float ___shake0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A (float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::UpdateTimeScaleUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1TimeControl_UpdateTimeScaleUI_m4E3FB9587A57A8645A6107897F6FFB5A42AA9F0B (AllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5 (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, const RuntimeMethod*))UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared)(__this, ___call0, method);
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::ChangeTimeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1TimeControl_ChangeTimeScale_m0BE7A4E2D50490F8CD8A8BDA8AC502E10E26DAAC (AllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1* __this, float ___changeAmount0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl>()
inline AllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1* GameObject_GetComponent_TisAllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1_m267848629D9479B88189CBF523E2B8FAD1D52259 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::SetupAndInstantiateCurrentEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxDemoController_SetupAndInstantiateCurrentEffect_m52AE39C1492F7AF923F0B724EB1FEAF5AE2118C0 (AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* __this, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::PlayCurrentEffect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxDemoController_PlayCurrentEffect_m24CB6CEA74A4B48CC98AF0A5CB53681706D95D8D (AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* __this, bool ___isAfterSetupAndInstantiateEffect0, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::ChangeCurrentEffect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxDemoController_ChangeCurrentEffect_m494D391AD8D79343DFF8FADCD391894324A61F50 (AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* __this, int32_t ___changeAmount0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::CooldownHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxDemoController_CooldownHandling_m89084EC502F1EFA5F6F834CDE66769E5D64CAE5E (AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::DestroyAllChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxDemoController_DestroyAllChildren_mC172E11A2F807C75A7F81BB0C74B2D20A013DED3 (AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoProjectile>()
inline AllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5* Component_GetComponent_TisAllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5_mF3FFFDA2C98CBC95916F5F5C74CCFD0FD4F65839 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoProjectile::Initialize(UnityEngine.Transform,UnityEngine.Vector3,System.Single,UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DemoProjectile_Initialize_mE93D7C4BE9805BD8196BC14DCD6A98FDCD7E536C (AllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___hierarchyParent0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___projectileDir1, float ___speed2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___impactPrefab3, float ___impactScaleSize4, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoProjectile::AddScreenShakeOnImpact(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DemoProjectile_AddScreenShakeOnImpact_m2E38DC55FE9DBEFBCFE50D3D2619A658BD1969B5 (AllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5* __this, float ___projectileImpactShakeAmount0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::CurrentEffectLabelTweenEffectCR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AllIn1VfxDemoController_CurrentEffectLabelTweenEffectCR_mB8475D729EBC068C28EA4AC8BA65A1AF24E342CF (AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::CurrentEffectChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1TimeControl_CurrentEffectChanged_m5D323E6E1178846163B333462A2E3C79D24B07C4 (AllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1* __this, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::ComputeValidEffectAndCollectionIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxDemoController_ComputeValidEffectAndCollectionIndex_m01F07C601B6DAF66FF355FFE68E2A31E4C1DAC9C (AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController/<CurrentEffectLabelTweenEffectCR>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCurrentEffectLabelTweenEffectCRU3Ed__38__ctor_mCCC473DFC618D8F567616AB17F82167AE7CA657E (U3CCurrentEffectLabelTweenEffectCRU3Ed__38_t2FC601553F066A6D1A95394A63B70216ADE848DB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween::ScaleDownTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DemoScaleTween_ScaleDownTween_m160FC47A637AEEDD553012EEB5490E46557CD13B (AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxParticleSystemTime::SetSimulationTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxParticleSystemTime_SetSimulationTime_mE10DE6B36542096BD573162D67BEB35F2F6ADCFF (AllIn1VfxParticleSystemTime_t947040E7EBDE5A0B06FE7E4CCBD9803D9901B3F1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Simulate(System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Simulate_mE81EFF12AC1E2C08F3AE86DA7CF0D5CA4EA8F91F (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, float ___t0, bool ___withChildren1, bool ___restart2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoDropdownScroller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoDropdownScroller_Start_m3AEA0F64B9CC9A0D9D225D9654A64C8DE72C6499 (All1DemoDropdownScroller_tC0690559C949059DA3E32ADC434480A250155BB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dropdown = GetComponent<Dropdown>();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0;
		L_0 = Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00(__this, Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00_RuntimeMethod_var);
		__this->___dropdown_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dropdown_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoDropdownScroller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoDropdownScroller_Update_mFCA3FDBE7EDD7B1154D80D1B7E42E54D96A53C49 (All1DemoDropdownScroller_tC0690559C949059DA3E32ADC434480A250155BB2* __this, const RuntimeMethod* method) 
{
	{
		// if(Input.GetKeyDown(nextDropdownElementKey)) NextDropdownElements();
		int32_t L_0 = __this->___nextDropdownElementKey_5;
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if(Input.GetKeyDown(nextDropdownElementKey)) NextDropdownElements();
		All1DemoDropdownScroller_NextDropdownElements_m1E50714A22689978979AD9250A85E8DC4C8E0329(__this, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoDropdownScroller::NextDropdownElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoDropdownScroller_NextDropdownElements_m1E50714A22689978979AD9250A85E8DC4C8E0329 (All1DemoDropdownScroller_tC0690559C949059DA3E32ADC434480A250155BB2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int nextValue = dropdown.value + 1;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___dropdown_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_0, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// if(nextValue < 0) nextValue = dropdownElementCount - 1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		// if(nextValue < 0) nextValue = dropdownElementCount - 1;
		int32_t L_3 = __this->___dropdownElementCount_4;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
	}

IL_001b:
	{
		// if(nextValue >= dropdownElementCount) nextValue = 0;
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___dropdownElementCount_4;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0026;
		}
	}
	{
		// if(nextValue >= dropdownElementCount) nextValue = 0;
		V_0 = 0;
	}

IL_0026:
	{
		// dropdown.value = nextValue;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_6 = __this->___dropdown_6;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoDropdownScroller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoDropdownScroller__ctor_m2C953D01FE52A0F5B5391BD6893B422F41F49879 (All1DemoDropdownScroller_tC0690559C949059DA3E32ADC434480A250155BB2* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private KeyCode nextDropdownElementKey = KeyCode.M;
		__this->___nextDropdownElementKey_5 = ((int32_t)109);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoMouseLocker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoMouseLocker_Start_m2953542DAFCBA2C99ADA01CC2C6AC02DC88B2FC9 (All1DemoMouseLocker_tA7C89FA53A875E212B8B38EDE3A2AE0381C8C7FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463_mAB56FA5132E70ACD999BD7D20C572508F55D3A41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7_m4BBC2AB5DC68C47F0C4BC7A6BC01EE0720A90855_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// allIn1MouseRotate = GetComponent<AllIn1MouseRotate>();
		AllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7* L_0;
		L_0 = Component_GetComponent_TisAllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7_m4BBC2AB5DC68C47F0C4BC7A6BC01EE0720A90855(__this, Component_GetComponent_TisAllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7_m4BBC2AB5DC68C47F0C4BC7A6BC01EE0720A90855_RuntimeMethod_var);
		__this->___allIn1MouseRotate_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___allIn1MouseRotate_7), (void*)L_0);
		// lockedTween = lockButtonImage.GetComponent<AllIn1DemoScaleTween>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___lockButtonImage_5;
		NullCheck(L_1);
		AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* L_2;
		L_2 = Component_GetComponent_TisAllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463_mAB56FA5132E70ACD999BD7D20C572508F55D3A41(L_1, Component_GetComponent_TisAllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463_mAB56FA5132E70ACD999BD7D20C572508F55D3A41_RuntimeMethod_var);
		__this->___lockedTween_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lockedTween_8), (void*)L_2);
		// pausedButtonText = lockButtonImage.GetComponentInChildren<Text>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___lockButtonImage_5;
		NullCheck(L_3);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4;
		L_4 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_3, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		__this->___pausedButtonText_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pausedButtonText_9), (void*)L_4);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoMouseLocker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoMouseLocker_Update_m373EDE495F58832F0F8CFECCF6781EDBCEFB835C (All1DemoMouseLocker_tA7C89FA53A875E212B8B38EDE3A2AE0381C8C7FB* __this, const RuntimeMethod* method) 
{
	{
		// if(Input.GetKeyDown(mouseLockerKey)) DoMouseLockToggle();
		int32_t L_0 = __this->___mouseLockerKey_4;
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if(Input.GetKeyDown(mouseLockerKey)) DoMouseLockToggle();
		All1DemoMouseLocker_DoMouseLockToggle_mDFD1E9F06646C7FDBFA67F9437F944AE91909E09(__this, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoMouseLocker::DoMouseLockToggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoMouseLocker_DoMouseLockToggle_mDFD1E9F06646C7FDBFA67F9437F944AE91909E09 (All1DemoMouseLocker_tA7C89FA53A875E212B8B38EDE3A2AE0381C8C7FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral006976E56695070D63E145217B701EDEE8895C82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493129A97A0C654B32ECBC950426300104965D7F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentlyLocked = !currentlyLocked;
		bool L_0 = __this->___currentlyLocked_10;
		__this->___currentlyLocked_10 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// allIn1MouseRotate.enabled = !currentlyLocked;
		AllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7* L_1 = __this->___allIn1MouseRotate_7;
		bool L_2 = __this->___currentlyLocked_10;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// lockedTween.ScaleUpTween();
		AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* L_3 = __this->___lockedTween_8;
		NullCheck(L_3);
		AllIn1DemoScaleTween_ScaleUpTween_m7A248CB539848F376DB4CFF95BC94F3B4C3E41CB(L_3, NULL);
		// if(currentlyLocked)
		bool L_4 = __this->___currentlyLocked_10;
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		// pausedButtonText.text = "Unlock Camera";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___pausedButtonText_9;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral493129A97A0C654B32ECBC950426300104965D7F);
		// lockButtonImage.color = lockButtonColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___lockButtonImage_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->___lockButtonColor_6;
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		return;
	}

IL_0058:
	{
		// pausedButtonText.text = "Lock Camera";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___pausedButtonText_9;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, _stringLiteral006976E56695070D63E145217B701EDEE8895C82);
		// lockButtonImage.color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___lockButtonImage_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoMouseLocker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoMouseLocker__ctor_mDBD522B8A448C17A081A04CDA7C3ABB00B88952C (All1DemoMouseLocker_tA7C89FA53A875E212B8B38EDE3A2AE0381C8C7FB* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private KeyCode mouseLockerKey = KeyCode.L;
		__this->___mouseLockerKey_4 = ((int32_t)108);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoProjectileObstacle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoProjectileObstacle_Start_m93FC967736D46AEDE1593321C346A210398603B6 (All1DemoProjectileObstacle_tFCF68382D5227C417F314063D11C5D915D03AC31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// projectileObstacleDropdown = GetComponent<Dropdown>();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0;
		L_0 = Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00(__this, Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00_RuntimeMethod_var);
		__this->___projectileObstacleDropdown_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___projectileObstacleDropdown_5), (void*)L_0);
		// DropdownValueChanged();
		All1DemoProjectileObstacle_DropdownValueChanged_mFBF48CCE57376065EADE55B9F3255561C6FACC90(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoProjectileObstacle::DropdownValueChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoProjectileObstacle_DropdownValueChanged_mFBF48CCE57376065EADE55B9F3255561C6FACC90 (All1DemoProjectileObstacle_tFCF68382D5227C417F314063D11C5D915D03AC31* __this, const RuntimeMethod* method) 
{
	{
		// SetProjectileObstacleN(projectileObstacleDropdown.value);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___projectileObstacleDropdown_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_0, NULL);
		All1DemoProjectileObstacle_SetProjectileObstacleN_m7D19F65A703DCCF810FBB6FB9352EBBE9D9054F3(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoProjectileObstacle::SetProjectileObstacleN(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoProjectileObstacle_SetProjectileObstacleN_m7D19F65A703DCCF810FBB6FB9352EBBE9D9054F3 (All1DemoProjectileObstacle_tFCF68382D5227C417F314063D11C5D915D03AC31* __this, int32_t ___nIndex0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for(int i = 0; i < projectileObstacles.Length; i++) projectileObstacles[i].SetActive(i == nIndex);
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// for(int i = 0; i < projectileObstacles.Length; i++) projectileObstacles[i].SetActive(i == nIndex);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___projectileObstacles_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = V_0;
		int32_t L_5 = ___nIndex0;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0), NULL);
		// for(int i = 0; i < projectileObstacles.Length; i++) projectileObstacles[i].SetActive(i == nIndex);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0019:
	{
		// for(int i = 0; i < projectileObstacles.Length; i++) projectileObstacles[i].SetActive(i == nIndex);
		int32_t L_7 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___projectileObstacles_4;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoProjectileObstacle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoProjectileObstacle__ctor_m6580651067A10F23E21BB5F88860606CD7BE312B (All1DemoProjectileObstacle_tFCF68382D5227C417F314063D11C5D915D03AC31* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoSceneColor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoSceneColor_Start_m2886F8FCF122D2686A50DAE1FB3807BE5692B541 (All1DemoSceneColor_t24E6A732D83DE49318C684B071A921DC97895375* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sceneColorDropdown = GetComponent<Dropdown>();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0;
		L_0 = Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00(__this, Component_GetComponent_TisDropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_m0DC2A1698BB6D852352E5460A07E91DA649EED00_RuntimeMethod_var);
		__this->___sceneColorDropdown_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sceneColorDropdown_10), (void*)L_0);
		// floorMaterial = floorMeshRenderer.material;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1 = __this->___floorMeshRenderer_7;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		__this->___floorMaterial_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___floorMaterial_11), (void*)L_2);
		// DropdownValueChanged();
		All1DemoSceneColor_DropdownValueChanged_m2C75ECD302045FF882760252A3165EB024822C13(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoSceneColor::DropdownValueChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoSceneColor_DropdownValueChanged_m2C75ECD302045FF882760252A3165EB024822C13 (All1DemoSceneColor_t24E6A732D83DE49318C684B071A921DC97895375* __this, const RuntimeMethod* method) 
{
	{
		// SetSceneColor(sceneColorDropdown.value);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___sceneColorDropdown_10;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_0, NULL);
		All1DemoSceneColor_SetSceneColor_m0CA47927C241E75B0A075521FFB8D5F87B0BD7E4(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoSceneColor::SetSceneColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoSceneColor_SetSceneColor_m0CA47927C241E75B0A075521FFB8D5F87B0BD7E4 (All1DemoSceneColor_t24E6A732D83DE49318C684B071A921DC97895375* __this, int32_t ___nIndex0, const RuntimeMethod* method) 
{
	{
		// targetCamera.backgroundColor = sceneColors[nIndex] * cameraColorMult;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___targetCamera_5;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1 = __this->___sceneColors_4;
		int32_t L_2 = ___nIndex0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		float L_5 = __this->___cameraColorMult_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_4, L_5, NULL);
		NullCheck(L_0);
		Camera_set_backgroundColor_m036FD8C316A93A0B168ACC89AFF16D396B872138(L_0, L_6, NULL);
		// floorMaterial.color = sceneColors[nIndex] * floorColorMult;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___floorMaterial_11;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_8 = __this->___sceneColors_4;
		int32_t L_9 = ___nIndex0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		float L_12 = __this->___floorColorMult_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_11, L_12, NULL);
		NullCheck(L_7);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_7, L_13, NULL);
		// RenderSettings.fogColor = sceneColors[nIndex] * fogColorMult;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_14 = __this->___sceneColors_4;
		int32_t L_15 = ___nIndex0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		float L_18 = __this->___fogColorMult_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_17, L_18, NULL);
		RenderSettings_set_fogColor_mBBD12EC3492195F85F583CAF4FAE4A973227639B(L_19, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1DemoSceneColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1DemoSceneColor__ctor_mF7B97858EDDB17D72C1884FE4EE15BEA82BFE58C (All1DemoSceneColor_t24E6A732D83DE49318C684B071A921DC97895375* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float cameraColorMult = 1f;
		__this->___cameraColorMult_6 = (1.0f);
		// [SerializeField] private float floorColorMult = 1f;
		__this->___floorColorMult_8 = (1.0f);
		// [SerializeField] private float fogColorMult = 1f;
		__this->___fogColorMult_9 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1VfxDemoEffect__ctor_mC1E58686925414B73A9E1F9C873D929AFACD2558 (All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* __this, const RuntimeMethod* method) 
{
	{
		// public bool canBePlayedAgain = true;
		__this->___canBePlayedAgain_5 = (bool)1;
		// public float cooldown = 0.25f;
		__this->___cooldown_7 = (0.25f);
		// public float projectileSpeed = 15f;
		__this->___projectileSpeed_11 = (15.0f);
		// public float mainEffectShakeAmount = 1f;
		__this->___mainEffectShakeAmount_16 = (1.0f);
		// [Header("Only if Shoot Projectile")] public float projectileImpactShakeAmount = 1f;
		__this->___projectileImpactShakeAmount_17 = (1.0f);
		// public float scaleMultiplier = 1f;
		__this->___scaleMultiplier_19 = (1.0f);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1VfxToolkit.Demo.Scripts.All1VfxDemoEffectCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1VfxDemoEffectCollection__ctor_m7CE7091546FBEFF9C5D5BA179E1480982D07C40A (All1VfxDemoEffectCollection_tE55400D4015AC0361F90307F2CAC49B6CD69017A* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1AutoRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1AutoRotate_Update_mD11F12E83A72E6EE8FE3B2BF0C3A5D0ECEBE0AB6 (AllIn1AutoRotate_t05A8930E301C314223E779E4016662FABF00AF35* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(rotationAxis * (rotationSpeed * Time.deltaTime), Space.Self);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___rotationAxis_5;
		float L_2 = __this->___rotationSpeed_4;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, ((float)il2cpp_codegen_multiply(L_2, L_3)), NULL);
		NullCheck(L_0);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_0, L_4, 1, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1AutoRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1AutoRotate__ctor_m519F8CADB35F2FBB2E9F72B39228D86E985B5C9F (AllIn1AutoRotate_t05A8930E301C314223E779E4016662FABF00AF35* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float rotationSpeed = 30f;
		__this->___rotationSpeed_4 = (30.0f);
		// [SerializeField] private Vector3 rotationAxis = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		__this->___rotationAxis_5 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1CanvasFader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1CanvasFader_Start_mAB42BE011A0BA53F3A06668E8EBE2BAD0299FEE8 (AllIn1CanvasFader_t258BB80CC8E3E162A796EC623E92020D69377410* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// canvasGroup = GetComponent<CanvasGroup>();
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0;
		L_0 = Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2(__this, Component_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_mA3B0428368982ED39ADEBB220EE67D1E99D8B2D2_RuntimeMethod_var);
		__this->___canvasGroup_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvasGroup_10), (void*)L_0);
		// canvasGroup.alpha = 1f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_1 = __this->___canvasGroup_10;
		NullCheck(L_1);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_1, (1.0f), NULL);
		// hideUiButtonTweenNotNull = hideUiButtonTween != null;
		AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* L_2 = __this->___hideUiButtonTween_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		__this->___hideUiButtonTweenNotNull_11 = L_3;
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1CanvasFader::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1CanvasFader_Update_mB32E243E002D97995F0B53BFB697D60FD040AD07 (AllIn1CanvasFader_t258BB80CC8E3E162A796EC623E92020D69377410* __this, const RuntimeMethod* method) 
{
	{
		// if(Input.GetKeyDown(fadeToggleKey)) HideUiButtonPressed();
		int32_t L_0 = __this->___fadeToggleKey_4;
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if(Input.GetKeyDown(fadeToggleKey)) HideUiButtonPressed();
		AllIn1CanvasFader_HideUiButtonPressed_mE81198608A65F0B0C85C636160102A68E7B70E5F(__this, NULL);
	}

IL_0013:
	{
		// if(!isTweening) return;
		bool L_2 = __this->___isTweening_7;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// if(!isTweening) return;
		return;
	}

IL_001c:
	{
		// currentAlpha = Mathf.MoveTowards(currentAlpha, targetAlpha, Time.unscaledDeltaTime * tweenSpeed);
		float L_3 = __this->___currentAlpha_8;
		float L_4 = __this->___targetAlpha_9;
		float L_5;
		L_5 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		float L_6 = __this->___tweenSpeed_5;
		float L_7;
		L_7 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_3, L_4, ((float)il2cpp_codegen_multiply(L_5, L_6)), NULL);
		__this->___currentAlpha_8 = L_7;
		// canvasGroup.alpha = currentAlpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_8 = __this->___canvasGroup_10;
		float L_9 = __this->___currentAlpha_8;
		NullCheck(L_8);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_8, L_9, NULL);
		// if(targetAlpha == currentAlpha) isTweening = false;
		float L_10 = __this->___targetAlpha_9;
		float L_11 = __this->___currentAlpha_8;
		if ((!(((float)L_10) == ((float)L_11))))
		{
			goto IL_0065;
		}
	}
	{
		// if(targetAlpha == currentAlpha) isTweening = false;
		__this->___isTweening_7 = (bool)0;
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1CanvasFader::HideUiButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1CanvasFader_HideUiButtonPressed_mE81198608A65F0B0C85C636160102A68E7B70E5F (AllIn1CanvasFader_t258BB80CC8E3E162A796EC623E92020D69377410* __this, const RuntimeMethod* method) 
{
	{
		// if(currentAlpha < 0.01f) MakeCanvasVisibleTween();
		float L_0 = __this->___currentAlpha_8;
		if ((!(((float)L_0) < ((float)(0.00999999978f)))))
		{
			goto IL_0015;
		}
	}
	{
		// if(currentAlpha < 0.01f) MakeCanvasVisibleTween();
		AllIn1CanvasFader_MakeCanvasVisibleTween_mF19FBBD89C43813C394EBD432EFFEE8DDE825143(__this, NULL);
		goto IL_001b;
	}

IL_0015:
	{
		// else MakeCanvasInvisibleTween();
		AllIn1CanvasFader_MakeCanvasInvisibleTween_mC109D9FA7CE16C5584BD66BB2BB3D05110667D9C(__this, NULL);
	}

IL_001b:
	{
		// if(hideUiButtonTweenNotNull) hideUiButtonTween.ScaleUpTween();
		bool L_1 = __this->___hideUiButtonTweenNotNull_11;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// if(hideUiButtonTweenNotNull) hideUiButtonTween.ScaleUpTween();
		AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* L_2 = __this->___hideUiButtonTween_6;
		NullCheck(L_2);
		AllIn1DemoScaleTween_ScaleUpTween_m7A248CB539848F376DB4CFF95BC94F3B4C3E41CB(L_2, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1CanvasFader::MakeCanvasVisibleTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1CanvasFader_MakeCanvasVisibleTween_mF19FBBD89C43813C394EBD432EFFEE8DDE825143 (AllIn1CanvasFader_t258BB80CC8E3E162A796EC623E92020D69377410* __this, const RuntimeMethod* method) 
{
	{
		// isTweening = true;
		__this->___isTweening_7 = (bool)1;
		// targetAlpha = 1f;
		__this->___targetAlpha_9 = (1.0f);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1CanvasFader::MakeCanvasInvisibleTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1CanvasFader_MakeCanvasInvisibleTween_mC109D9FA7CE16C5584BD66BB2BB3D05110667D9C (AllIn1CanvasFader_t258BB80CC8E3E162A796EC623E92020D69377410* __this, const RuntimeMethod* method) 
{
	{
		// isTweening = true;
		__this->___isTweening_7 = (bool)1;
		// targetAlpha = 0f;
		__this->___targetAlpha_9 = (0.0f);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1CanvasFader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1CanvasFader__ctor_m7AA5AEE9BDE70995CC60F1EC3495476D760170B4 (AllIn1CanvasFader_t258BB80CC8E3E162A796EC623E92020D69377410* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private KeyCode fadeToggleKey = KeyCode.U;
		__this->___fadeToggleKey_4 = ((int32_t)117);
		// [SerializeField] private float tweenSpeed = 1f;
		__this->___tweenSpeed_5 = (1.0f);
		// private float currentAlpha = 1f;
		__this->___currentAlpha_8 = (1.0f);
		// private float targetAlpha = 1f;
		__this->___targetAlpha_9 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1ChangeAllChildTextFonts::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1ChangeAllChildTextFonts_Start_m36123800631AB3C1015BBEFD927A6A2E38BE56CE (AllIn1ChangeAllChildTextFonts_t9C4A7481982A200CA2DB549F3AD24B98DD206E63* __this, const RuntimeMethod* method) 
{
	{
		// if(changeFontOnStart) ChangeFonts();
		bool L_0 = __this->___changeFontOnStart_5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if(changeFontOnStart) ChangeFonts();
		AllIn1ChangeAllChildTextFonts_ChangeFonts_m815411A716334A1AE568870F9819242306C3DB67(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1ChangeAllChildTextFonts::ChangeFonts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1ChangeAllChildTextFonts_ChangeFonts_m815411A716334A1AE568870F9819242306C3DB67 (AllIn1ChangeAllChildTextFonts_t9C4A7481982A200CA2DB549F3AD24B98DD206E63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m3FC915DEC37CE1CE6E48A26D44655BAE36FD140E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Text[] canvasTexts = GetComponentsInChildren<Text>();
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_0;
		L_0 = Component_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m3FC915DEC37CE1CE6E48A26D44655BAE36FD140E(__this, Component_GetComponentsInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m3FC915DEC37CE1CE6E48A26D44655BAE36FD140E_RuntimeMethod_var);
		V_0 = L_0;
		// for(int i = 0; i < canvasTexts.Length; i++) canvasTexts[i].font = newFont;
		V_1 = 0;
		goto IL_001d;
	}

IL_000b:
	{
		// for(int i = 0; i < canvasTexts.Length; i++) canvasTexts[i].font = newFont;
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_5 = __this->___newFont_4;
		NullCheck(L_4);
		Text_set_font_mA0D2999281A72029A5BC7294A886C5674F07DC5F(L_4, L_5, NULL);
		// for(int i = 0; i < canvasTexts.Length; i++) canvasTexts[i].font = newFont;
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001d:
	{
		// for(int i = 0; i < canvasTexts.Length; i++) canvasTexts[i].font = newFont;
		int32_t L_7 = V_1;
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1ChangeAllChildTextFonts::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1ChangeAllChildTextFonts__ctor_m11492DDEDABE1DA9A4B43B17BBE1F303750B5D56 (AllIn1ChangeAllChildTextFonts_t9C4A7481982A200CA2DB549F3AD24B98DD206E63* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoProjectile::Initialize(UnityEngine.Transform,UnityEngine.Vector3,System.Single,UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DemoProjectile_Initialize_mE93D7C4BE9805BD8196BC14DCD6A98FDCD7E536C (AllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___hierarchyParent0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___projectileDir1, float ___speed2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___impactPrefab3, float ___impactScaleSize4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentHierarchyParent = hierarchyParent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___hierarchyParent0;
		__this->___currentHierarchyParent_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentHierarchyParent_6), (void*)L_0);
		// currentImpactPrefab = impactPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___impactPrefab3;
		__this->___currentImpactPrefab_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentImpactPrefab_5), (void*)L_1);
		// doImpactSpawn = currentImpactPrefab != null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___currentImpactPrefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		__this->___doImpactSpawn_7 = L_3;
		// this.impactScaleSize = impactScaleSize;
		float L_4 = ___impactScaleSize4;
		__this->___impactScaleSize_10 = L_4;
		// ApplyPrecisionOffsetToProjectileDir(ref projectileDir);
		AllIn1DemoProjectile_ApplyPrecisionOffsetToProjectileDir_mA1018FB2E8E2F1C1D75C1F95E1BD5EE27B52B5E2(__this, (&___projectileDir1), NULL);
		// GetComponent<Rigidbody>().velocity = projectileDir * speed;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5;
		L_5 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___projectileDir1;
		float L_7 = ___speed2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		NullCheck(L_5);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_5, L_8, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoProjectile::AddScreenShakeOnImpact(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DemoProjectile_AddScreenShakeOnImpact_m2E38DC55FE9DBEFBCFE50D3D2619A658BD1969B5 (AllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5* __this, float ___projectileImpactShakeAmount0, const RuntimeMethod* method) 
{
	{
		// doShake = true;
		__this->___doShake_8 = (bool)1;
		// shakeAmountOnImpact = projectileImpactShakeAmount;
		float L_0 = ___projectileImpactShakeAmount0;
		__this->___shakeAmountOnImpact_9 = L_0;
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoProjectile::ApplyPrecisionOffsetToProjectileDir(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DemoProjectile_ApplyPrecisionOffsetToProjectileDir_mA1018FB2E8E2F1C1D75C1F95E1BD5EE27B52B5E2 (AllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___projectileDir0, const RuntimeMethod* method) 
{
	{
		// projectileDir.x += Random.Range(-inaccurateAmount, inaccurateAmount);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___projectileDir0;
		float* L_1 = (&L_0->___x_2);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = __this->___inaccurateAmount_4;
		float L_5 = __this->___inaccurateAmount_4;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_4)), L_5, NULL);
		*((float*)L_2) = (float)((float)il2cpp_codegen_add(L_3, L_6));
		// projectileDir.y += Random.Range(-inaccurateAmount, inaccurateAmount);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___projectileDir0;
		float* L_8 = (&L_7->___y_3);
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		float L_11 = __this->___inaccurateAmount_4;
		float L_12 = __this->___inaccurateAmount_4;
		float L_13;
		L_13 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_11)), L_12, NULL);
		*((float*)L_9) = (float)((float)il2cpp_codegen_add(L_10, L_13));
		// projectileDir.z += Random.Range(-inaccurateAmount, inaccurateAmount);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = ___projectileDir0;
		float* L_15 = (&L_14->___z_4);
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		float L_18 = __this->___inaccurateAmount_4;
		float L_19 = __this->___inaccurateAmount_4;
		float L_20;
		L_20 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_18)), L_19, NULL);
		*((float*)L_16) = (float)((float)il2cpp_codegen_add(L_17, L_20));
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoProjectile::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DemoProjectile_OnTriggerEnter_m3035242F023DDD941DAA2B313034CFC6BB2CEE23 (AllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(doImpactSpawn)
		bool L_0 = __this->___doImpactSpawn_7;
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		// Transform t = Instantiate(currentImpactPrefab, transform.position, Quaternion.identity).transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___currentImpactPrefab_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_1, L_3, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		// t.parent = currentHierarchyParent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___currentHierarchyParent_6;
		NullCheck(L_7);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_7, L_8, NULL);
		// t.localScale *= impactScaleSize;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_7;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_9, NULL);
		float L_11 = __this->___impactScaleSize_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		NullCheck(L_9);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_9, L_12, NULL);
	}

IL_004a:
	{
		// if(doShake) AllIn1Shaker.i.DoCameraShake(shakeAmountOnImpact);
		bool L_13 = __this->___doShake_8;
		if (!L_13)
		{
			goto IL_0062;
		}
	}
	{
		// if(doShake) AllIn1Shaker.i.DoCameraShake(shakeAmountOnImpact);
		AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1* L_14 = ((AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1_StaticFields*)il2cpp_codegen_static_fields_for(AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1_il2cpp_TypeInfo_var))->___i_9;
		float L_15 = __this->___shakeAmountOnImpact_9;
		NullCheck(L_14);
		AllIn1Shaker_DoCameraShake_mEA0E05A1E14EE7E970C3CDEF1496F8279127D121_inline(L_14, L_15, NULL);
	}

IL_0062:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_16, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoProjectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DemoProjectile__ctor_m8C715D018DC18C742F90A02A9CD0E4A2B64AE6A6 (AllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float inaccurateAmount = 0.05f;
		__this->___inaccurateAmount_4 = (0.0500000007f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DemoScaleTween_Update_mAEA2E5770912B41E8CCABD5B2B58CD66AE4CF825 (AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* __this, const RuntimeMethod* method) 
{
	{
		// if(!isTweening) return;
		bool L_0 = __this->___isTweening_7;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if(!isTweening) return;
		return;
	}

IL_0009:
	{
		// currentScale = Mathf.Lerp(currentScale, 1f, Time.unscaledDeltaTime * tweenSpeed);
		float L_1 = __this->___currentScale_8;
		float L_2;
		L_2 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		float L_3 = __this->___tweenSpeed_6;
		float L_4;
		L_4 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_1, (1.0f), ((float)il2cpp_codegen_multiply(L_2, L_3)), NULL);
		__this->___currentScale_8 = L_4;
		// UpdateScaleToApply();
		AllIn1DemoScaleTween_UpdateScaleToApply_m0311F2480C4D2B7D493E6095DF81B277643BA68C(__this, NULL);
		// ApplyScale();
		AllIn1DemoScaleTween_ApplyScale_m7AF485D335014314C02DE49F0252D2B17340D02E(__this, NULL);
		// if(Mathf.Abs(currentScale - 1f) < 0.02f) isTweening = false;
		float L_5 = __this->___currentScale_8;
		float L_6;
		L_6 = fabsf(((float)il2cpp_codegen_subtract(L_5, (1.0f))));
		if ((!(((float)L_6) < ((float)(0.0199999996f)))))
		{
			goto IL_0056;
		}
	}
	{
		// if(Mathf.Abs(currentScale - 1f) < 0.02f) isTweening = false;
		__this->___isTweening_7 = (bool)0;
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween::UpdateScaleToApply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DemoScaleTween_UpdateScaleToApply_m0311F2480C4D2B7D493E6095DF81B277643BA68C (AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* __this, const RuntimeMethod* method) 
{
	{
		// scaleToApply.x = currentScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___scaleToApply_9);
		float L_1 = __this->___currentScale_8;
		L_0->___x_2 = L_1;
		// scaleToApply.y = currentScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___scaleToApply_9);
		float L_3 = __this->___currentScale_8;
		L_2->___y_3 = L_3;
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween::ApplyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DemoScaleTween_ApplyScale_m7AF485D335014314C02DE49F0252D2B17340D02E (AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* __this, const RuntimeMethod* method) 
{
	{
		// transform.localScale = scaleToApply;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___scaleToApply_9;
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween::ScaleUpTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DemoScaleTween_ScaleUpTween_m7A248CB539848F376DB4CFF95BC94F3B4C3E41CB (AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* __this, const RuntimeMethod* method) 
{
	{
		// isTweening = true;
		__this->___isTweening_7 = (bool)1;
		// currentScale = maxTweenScale;
		float L_0 = __this->___maxTweenScale_4;
		__this->___currentScale_8 = L_0;
		// UpdateScaleToApply();
		AllIn1DemoScaleTween_UpdateScaleToApply_m0311F2480C4D2B7D493E6095DF81B277643BA68C(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween::ScaleDownTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DemoScaleTween_ScaleDownTween_m160FC47A637AEEDD553012EEB5490E46557CD13B (AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* __this, const RuntimeMethod* method) 
{
	{
		// isTweening = true;
		__this->___isTweening_7 = (bool)1;
		// currentScale = minTweenScale;
		float L_0 = __this->___minTweenScale_5;
		__this->___currentScale_8 = L_0;
		// UpdateScaleToApply();
		AllIn1DemoScaleTween_UpdateScaleToApply_m0311F2480C4D2B7D493E6095DF81B277643BA68C(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DemoScaleTween::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DemoScaleTween__ctor_m5A7DB72BF1EC71A3509C3F7C040A2FF96C556195 (AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float maxTweenScale = 2.0f;
		__this->___maxTweenScale_4 = (2.0f);
		// [SerializeField] private float minTweenScale = 0.8f;
		__this->___minTweenScale_5 = (0.800000012f);
		// [SerializeField] private float tweenSpeed = 15f;
		__this->___tweenSpeed_6 = (15.0f);
		// private float currentScale = 1f;
		__this->___currentScale_8 = (1.0f);
		// private Vector3 scaleToApply = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->___scaleToApply_9 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DoShake::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DoShake_Start_m2EDAED98519832DF28775BD1CD7A8DD2C0A62B88 (AllIn1DoShake_tB94CDF60A715E19CA1EC2C0D6413338FEC872E64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDE8C4DF1715CFC71A5D1502BBF477C021B0A6BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(doShakeOnStart)
		bool L_0 = __this->___doShakeOnStart_5;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		// if(shakeOnStartDelay < Time.deltaTime) DoShake();
		float L_1 = __this->___shakeOnStartDelay_6;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_001c;
		}
	}
	{
		// if(shakeOnStartDelay < Time.deltaTime) DoShake();
		AllIn1DoShake_DoShake_mCC1F6B788ABB0486E029649DB71986D6FBD4FA3C(__this, NULL);
		return;
	}

IL_001c:
	{
		// else Invoke(nameof(DoShake), shakeOnStartDelay);
		float L_3 = __this->___shakeOnStartDelay_6;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralEDE8C4DF1715CFC71A5D1502BBF477C021B0A6BE, L_3, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DoShake::DoShake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DoShake_DoShake_mCC1F6B788ABB0486E029649DB71986D6FBD4FA3C (AllIn1DoShake_tB94CDF60A715E19CA1EC2C0D6413338FEC872E64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AllIn1Shaker.i.DoCameraShake(shakeAmount);
		AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1* L_0 = ((AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1_StaticFields*)il2cpp_codegen_static_fields_for(AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1_il2cpp_TypeInfo_var))->___i_9;
		float L_1 = __this->___shakeAmount_4;
		NullCheck(L_0);
		AllIn1Shaker_DoCameraShake_mEA0E05A1E14EE7E970C3CDEF1496F8279127D121_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1DoShake::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1DoShake__ctor_mEAF734E8BE0B7EAC043FB17A90C239795E2D5973 (AllIn1DoShake_tB94CDF60A715E19CA1EC2C0D6413338FEC872E64* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float shakeAmount = 0.15f;
		__this->___shakeAmount_4 = (0.150000006f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1MouseRotate_Start_m0161A3F2E9D0DECB05F34FBF17524F8C534E992F (AllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7* __this, const RuntimeMethod* method) 
{
	{
		// if(lockCursor) cursorIsLocked = false;
		bool L_0 = __this->___lockCursor_8;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// if(lockCursor) cursorIsLocked = false;
		__this->___cursorIsLocked_14 = (bool)0;
		goto IL_0018;
	}

IL_0011:
	{
		// else cursorIsLocked = true;
		__this->___cursorIsLocked_14 = (bool)1;
	}

IL_0018:
	{
		// ToggleCursorLocked();
		AllIn1MouseRotate_ToggleCursorLocked_mFB02361AD8FD96F02D1172B34F32E94E6406F0F1(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1MouseRotate_Update_m31DCA9EA5AF9440F0902AF5C255A61687D77211D (AllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7* __this, const RuntimeMethod* method) 
{
	{
		// if(Time.timeSinceLevelLoad < 0.5f) return; //We wait a few moments to allow scene to fully load up
		float L_0;
		L_0 = Time_get_timeSinceLevelLoad_m65C386103A91B172781032CA1A6FFDEC8CFBA921(NULL);
		if ((!(((float)L_0) < ((float)(0.5f)))))
		{
			goto IL_000d;
		}
	}
	{
		// if(Time.timeSinceLevelLoad < 0.5f) return; //We wait a few moments to allow scene to fully load up
		return;
	}

IL_000d:
	{
		// dt = Time.unscaledDeltaTime;
		float L_1;
		L_1 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		__this->___dt_19 = L_1;
		// CamRotateAroundYAxis();
		AllIn1MouseRotate_CamRotateAroundYAxis_m697A7DF105BCA5A6D48C0EEBF5F4C537690B98B4(__this, NULL);
		// currPosition = objectToRotate.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___objectToRotate_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		__this->___currPosition_18 = L_3;
		// CamHeightTranslate();
		AllIn1MouseRotate_CamHeightTranslate_mECDE5C987BC68AA45C8EDA9FB44B09646308E28E(__this, NULL);
		// CamZoom();
		AllIn1MouseRotate_CamZoom_m3F0BC7D60154F66920D928D03DD823BD324C0C69(__this, NULL);
		// if(Input.GetKeyDown(lockCursorKeyCode)) ToggleCursorLocked();
		int32_t L_4 = __this->___lockCursorKeyCode_9;
		bool L_5;
		L_5 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_4, NULL);
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		// if(Input.GetKeyDown(lockCursorKeyCode)) ToggleCursorLocked();
		AllIn1MouseRotate_ToggleCursorLocked_mFB02361AD8FD96F02D1172B34F32E94E6406F0F1(__this, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::CamRotateAroundYAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1MouseRotate_CamRotateAroundYAxis_m697A7DF105BCA5A6D48C0EEBF5F4C537690B98B4 (AllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float mouseInputX = Input.GetAxis("Mouse X") * dt * 10f * rotationSpeedHorizontal;
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_1 = __this->___dt_19;
		float L_2 = __this->___rotationSpeedHorizontal_5;
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), (10.0f))), L_2));
		// objectToRotate.RotateAround(transform.position, Vector3.up, mouseInputX);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___objectToRotate_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_7 = V_0;
		NullCheck(L_3);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_3, L_5, L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::CamHeightTranslate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1MouseRotate_CamHeightTranslate_mECDE5C987BC68AA45C8EDA9FB44B09646308E28E (AllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float mouseInputY = Input.GetAxis("Mouse Y") * dt * translateVerticalSpeed;
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_1 = __this->___dt_19;
		float L_2 = __this->___translateVerticalSpeed_6;
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2));
		// currPosition.y = Mathf.Clamp(currPosition.y + mouseInputY, 0.25f, maxHeight);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___currPosition_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___currPosition_18);
		float L_5 = L_4->___y_3;
		float L_6 = V_0;
		float L_7 = __this->___maxHeight_15;
		float L_8;
		L_8 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_add(L_5, L_6)), (0.25f), L_7, NULL);
		L_3->___y_3 = L_8;
		// objectToRotate.position = currPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___objectToRotate_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___currPosition_18;
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_10, NULL);
		// objectToRotate.LookAt(transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___objectToRotate_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::CamZoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1MouseRotate_CamZoom_m3F0BC7D60154F66920D928D03DD823BD324C0C69 (AllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float mouseInputWheel = Input.GetAxis("Mouse ScrollWheel") * dt * 100f * translateScrollSpeed;
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		float L_1 = __this->___dt_19;
		float L_2 = __this->___translateScrollSpeed_7;
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), (100.0f))), L_2));
		// Vector3 currZoomVector = objectToRotate.forward * mouseInputWheel;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___objectToRotate_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_3, NULL);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		V_1 = L_6;
		// if(mouseInputWheel > 0 && Vector3.Distance(transform.position, objectToRotate.position) <= maxZoom) currZoomVector = Vector3.zero;
		float L_7 = V_0;
		if ((!(((float)L_7) > ((float)(0.0f)))))
		{
			goto IL_0064;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___objectToRotate_4;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12;
		L_12 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_9, L_11, NULL);
		float L_13 = __this->___maxZoom_16;
		if ((!(((float)L_12) <= ((float)L_13))))
		{
			goto IL_0064;
		}
	}
	{
		// if(mouseInputWheel > 0 && Vector3.Distance(transform.position, objectToRotate.position) <= maxZoom) currZoomVector = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_1 = L_14;
		goto IL_0095;
	}

IL_0064:
	{
		// else if(mouseInputWheel < 0 && Vector3.Distance(transform.position, objectToRotate.position) >= minZoom) currZoomVector = Vector3.zero;
		float L_15 = V_0;
		if ((!(((float)L_15) < ((float)(0.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___objectToRotate_4;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20;
		L_20 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_17, L_19, NULL);
		float L_21 = __this->___minZoom_17;
		if ((!(((float)L_20) >= ((float)L_21))))
		{
			goto IL_0095;
		}
	}
	{
		// else if(mouseInputWheel < 0 && Vector3.Distance(transform.position, objectToRotate.position) >= minZoom) currZoomVector = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_1 = L_22;
	}

IL_0095:
	{
		// currPosition += currZoomVector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___currPosition_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_23, L_24, NULL);
		__this->___currPosition_18 = L_25;
		// objectToRotate.position = currPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___objectToRotate_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->___currPosition_18;
		NullCheck(L_26);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_26, L_27, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::ToggleCursorLocked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1MouseRotate_ToggleCursorLocked_mFB02361AD8FD96F02D1172B34F32E94E6406F0F1 (AllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DED1F98F6124037784F89A7135F9F6F303C3B60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF12CEF824BF74FB0B0A862C961B9E80A0783D802);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cursorIsLocked = !cursorIsLocked;
		bool L_0 = __this->___cursorIsLocked_14;
		__this->___cursorIsLocked_14 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// hideUiButtonTween.ScaleUpTween();
		AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* L_1 = __this->___hideUiButtonTween_10;
		NullCheck(L_1);
		AllIn1DemoScaleTween_ScaleUpTween_m7A248CB539848F376DB4CFF95BC94F3B4C3E41CB(L_1, NULL);
		// if(cursorIsLocked)
		bool L_2 = __this->___cursorIsLocked_14;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// Cursor.visible = false;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)0, NULL);
		// lockedButtonImage.color = lockedButtonColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___lockedButtonImage_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___lockedButtonColor_13;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// lockedButtonText.text = "Unlock Cursor";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___lockedButtonText_12;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral9DED1F98F6124037784F89A7135F9F6F303C3B60);
		return;
	}

IL_0050:
	{
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(0, NULL);
		// Cursor.visible = true;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)1, NULL);
		// lockedButtonImage.color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___lockedButtonImage_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// lockedButtonText.text = "Lock Cursor";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___lockedButtonText_12;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, _stringLiteralF12CEF824BF74FB0B0A862C961B9E80A0783D802);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1MouseRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1MouseRotate__ctor_mC0E5BE12022A71BD439199984CBEB7CA44C2E695 (AllIn1MouseRotate_tF7230EBF70210EEC5EACB8C1C5E0D14C3C561AD7* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float rotationSpeedHorizontal = 10f;
		__this->___rotationSpeedHorizontal_5 = (10.0f);
		// [SerializeField] private float translateVerticalSpeed = 5f;
		__this->___translateVerticalSpeed_6 = (5.0f);
		// [SerializeField] private float translateScrollSpeed = 2f;
		__this->___translateScrollSpeed_7 = (2.0f);
		// [SerializeField] private float maxHeight = 40f;
		__this->___maxHeight_15 = (40.0f);
		// [SerializeField] private float maxZoom = 2f;
		__this->___maxZoom_16 = (2.0f);
		// [SerializeField] private float minZoom = 40f;
		__this->___minZoom_17 = (40.0f);
		// private Vector3 currPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___currPosition_18 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shaker_Awake_mAA9625FCBC12A84FC29FC8503B7DA43982C1D61A (AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (i != null && i != this) Destroy(gameObject);
		AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1* L_0 = ((AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1_StaticFields*)il2cpp_codegen_static_fields_for(AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1_il2cpp_TypeInfo_var))->___i_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1* L_2 = ((AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1_StaticFields*)il2cpp_codegen_static_fields_for(AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1_il2cpp_TypeInfo_var))->___i_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// if (i != null && i != this) Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		goto IL_002d;
	}

IL_0027:
	{
		// else  i = this;
		((AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1_StaticFields*)il2cpp_codegen_static_fields_for(AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1_il2cpp_TypeInfo_var))->___i_9 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1_StaticFields*)il2cpp_codegen_static_fields_for(AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1_il2cpp_TypeInfo_var))->___i_9), (void*)__this);
	}

IL_002d:
	{
		// seed = Random.value;
		float L_5;
		L_5 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		__this->___seed_11 = L_5;
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shaker_Update_mC86A4A4924E103DAF22E81E14FD8BBD5254731B1 (AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float shake = SmoothShakeToApply();
		float L_0;
		L_0 = AllIn1Shaker_SmoothShakeToApply_m6D7E2F185D8727A5A2AA0B4FE502E5649603CA36(__this, NULL);
		V_0 = L_0;
		// ShakePosition(shake);
		float L_1 = V_0;
		AllIn1Shaker_ShakePosition_m22E42F2C6BBF315BAFCB97BC89F59955F201305A(__this, L_1, NULL);
		// ShakeRotation(shake);
		float L_2 = V_0;
		AllIn1Shaker_ShakeRotation_mC7EF81B96148A9FA17D9B985143A37B1990F0AFD(__this, L_2, NULL);
		// currentShakeAmount = Mathf.Clamp01(currentShakeAmount - shakeRecoverPerSecond * Time.deltaTime);
		float L_3 = __this->___currentShakeAmount_10;
		float L_4 = __this->___shakeRecoverPerSecond_8;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_6;
		L_6 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_subtract(L_3, ((float)il2cpp_codegen_multiply(L_4, L_5)))), NULL);
		__this->___currentShakeAmount_10 = L_6;
		// }
		return;
	}
}
// System.Single AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker::SmoothShakeToApply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AllIn1Shaker_SmoothShakeToApply_m6D7E2F185D8727A5A2AA0B4FE502E5649603CA36 (AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1* __this, const RuntimeMethod* method) 
{
	{
		// float shake = Mathf.Pow(currentShakeAmount, shakeSmoothingExponent);
		float L_0 = __this->___currentShakeAmount_10;
		float L_1 = __this->___shakeSmoothingExponent_7;
		float L_2;
		L_2 = powf(L_0, L_1);
		// return shake;
		return L_2;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker::ShakeRotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shaker_ShakeRotation_mC7EF81B96148A9FA17D9B985143A37B1990F0AFD (AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1* __this, float ___shake0, const RuntimeMethod* method) 
{
	{
		// transform.localRotation = Quaternion.Euler(new Vector3(
		//     maximumAngularShake.x * (Mathf.PerlinNoise(seed + 3, Time.time * shakeFrequency) * 2 - 1),
		//     maximumAngularShake.y * (Mathf.PerlinNoise(seed + 4, Time.time * shakeFrequency) * 2 - 1),
		//     maximumAngularShake.z * (Mathf.PerlinNoise(seed + 5, Time.time * shakeFrequency) * 2 - 1)
		// ) * shake);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___maximumAngularShake_5);
		float L_2 = L_1->___x_2;
		float L_3 = __this->___seed_11;
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_5 = __this->___shakeFrequency_6;
		float L_6;
		L_6 = Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A(((float)il2cpp_codegen_add(L_3, (3.0f))), ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___maximumAngularShake_5);
		float L_8 = L_7->___y_3;
		float L_9 = __this->___seed_11;
		float L_10;
		L_10 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_11 = __this->___shakeFrequency_6;
		float L_12;
		L_12 = Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A(((float)il2cpp_codegen_add(L_9, (4.0f))), ((float)il2cpp_codegen_multiply(L_10, L_11)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___maximumAngularShake_5);
		float L_14 = L_13->___z_4;
		float L_15 = __this->___seed_11;
		float L_16;
		L_16 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_17 = __this->___shakeFrequency_6;
		float L_18;
		L_18 = Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A(((float)il2cpp_codegen_add(L_15, (5.0f))), ((float)il2cpp_codegen_multiply(L_16, L_17)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), ((float)il2cpp_codegen_multiply(L_2, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_6, (2.0f))), (1.0f))))), ((float)il2cpp_codegen_multiply(L_8, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_12, (2.0f))), (1.0f))))), ((float)il2cpp_codegen_multiply(L_14, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_18, (2.0f))), (1.0f))))), /*hidden argument*/NULL);
		float L_20 = ___shake0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_21, NULL);
		NullCheck(L_0);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_0, L_22, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker::ShakePosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shaker_ShakePosition_m22E42F2C6BBF315BAFCB97BC89F59955F201305A (AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1* __this, float ___shake0, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = new Vector3(
		//     maximumTranslationShake.x * (Mathf.PerlinNoise(seed, Time.time * shakeFrequency) * 2 - 1),
		//     maximumTranslationShake.y * (Mathf.PerlinNoise(seed + 1, Time.time * shakeFrequency) * 2 - 1),
		//     maximumTranslationShake.z * (Mathf.PerlinNoise(seed + 2, Time.time * shakeFrequency) * 2 - 1)
		// ) * shake;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___maximumTranslationShake_4);
		float L_2 = L_1->___x_2;
		float L_3 = __this->___seed_11;
		float L_4;
		L_4 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_5 = __this->___shakeFrequency_6;
		float L_6;
		L_6 = Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A(L_3, ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&__this->___maximumTranslationShake_4);
		float L_8 = L_7->___y_3;
		float L_9 = __this->___seed_11;
		float L_10;
		L_10 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_11 = __this->___shakeFrequency_6;
		float L_12;
		L_12 = Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A(((float)il2cpp_codegen_add(L_9, (1.0f))), ((float)il2cpp_codegen_multiply(L_10, L_11)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___maximumTranslationShake_4);
		float L_14 = L_13->___z_4;
		float L_15 = __this->___seed_11;
		float L_16;
		L_16 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_17 = __this->___shakeFrequency_6;
		float L_18;
		L_18 = Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A(((float)il2cpp_codegen_add(L_15, (2.0f))), ((float)il2cpp_codegen_multiply(L_16, L_17)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), ((float)il2cpp_codegen_multiply(L_2, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_6, (2.0f))), (1.0f))))), ((float)il2cpp_codegen_multiply(L_8, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_12, (2.0f))), (1.0f))))), ((float)il2cpp_codegen_multiply(L_14, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_18, (2.0f))), (1.0f))))), /*hidden argument*/NULL);
		float L_20 = ___shake0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_21, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker::DoCameraShake(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shaker_DoCameraShake_mEA0E05A1E14EE7E970C3CDEF1496F8279127D121 (AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1* __this, float ___shakeAmount0, const RuntimeMethod* method) 
{
	{
		// currentShakeAmount = shakeAmount;
		float L_0 = ___shakeAmount0;
		__this->___currentShakeAmount_10 = L_0;
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1Shaker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shaker__ctor_mAAA63B9ACABA2A3A92D6D86015D139447A58488C (AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] Vector3 maximumTranslationShake = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->___maximumTranslationShake_4 = L_0;
		// [SerializeField] Vector3 maximumAngularShake = Vector3.one * 15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (15.0f), NULL);
		__this->___maximumAngularShake_5 = L_2;
		// [SerializeField] float shakeFrequency = 25;
		__this->___shakeFrequency_6 = (25.0f);
		// [SerializeField] float shakeSmoothingExponent = 1;
		__this->___shakeSmoothingExponent_7 = (1.0f);
		// [SerializeField] float shakeRecoverPerSecond = 1;
		__this->___shakeRecoverPerSecond_8 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1TimeControl_Start_mD6BFC61D78D359E43E55CEF9CB4EA7A6D1794CAC (AllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllIn1TimeControl_U3CStartU3Eb__13_0_mA6BE97428BA2CCD2D9F31472B53C74440A2A2B68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463_mAB56FA5132E70ACD999BD7D20C572508F55D3A41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timeScaleSliderNotNull = timeScaleSlider != null;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___timeScaleSlider_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		__this->___timeScaleSliderNotNull_13 = L_1;
		// pausedButtonTween = pausedButtonImage.GetComponent<AllIn1DemoScaleTween>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___pausedButtonImage_11;
		NullCheck(L_2);
		AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* L_3;
		L_3 = Component_GetComponent_TisAllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463_mAB56FA5132E70ACD999BD7D20C572508F55D3A41(L_2, Component_GetComponent_TisAllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463_mAB56FA5132E70ACD999BD7D20C572508F55D3A41_RuntimeMethod_var);
		__this->___pausedButtonTween_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pausedButtonTween_15), (void*)L_3);
		// pausedButtonText = pausedButtonImage.GetComponentInChildren<Text>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___pausedButtonImage_11;
		NullCheck(L_4);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5;
		L_5 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_4, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		__this->___pausedButtonText_16 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pausedButtonText_16), (void*)L_5);
		// UpdateTimeScaleUI();
		AllIn1TimeControl_UpdateTimeScaleUI_m4E3FB9587A57A8645A6107897F6FFB5A42AA9F0B(__this, NULL);
		// if(timeScaleSliderNotNull) timeScaleSlider.onValueChanged.AddListener(delegate { ChangeTimeScale(timeScaleSlider.value - Time.timeScale); });
		bool L_6 = __this->___timeScaleSliderNotNull_13;
		if (!L_6)
		{
			goto IL_005e;
		}
	}
	{
		// if(timeScaleSliderNotNull) timeScaleSlider.onValueChanged.AddListener(delegate { ChangeTimeScale(timeScaleSlider.value - Time.timeScale); });
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = __this->___timeScaleSlider_10;
		NullCheck(L_7);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_8;
		L_8 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_7, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_9 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_9, __this, (intptr_t)((void*)AllIn1TimeControl_U3CStartU3Eb__13_0_mA6BE97428BA2CCD2D9F31472B53C74440A2A2B68_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_8, L_9, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1TimeControl_Update_m4E2E131577CFF98896A3487263FB756368219F17 (AllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if(Input.GetKeyDown(increaseTimeScale) || Input.GetKeyDown(increaseTimeScaleAlt)) ChangeTimeScale(timeScaleInterval);
		int32_t L_0 = __this->___increaseTimeScale_4;
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_0, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = __this->___increaseTimeScaleAlt_5;
		bool L_3;
		L_3 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_2, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}

IL_001a:
	{
		// if(Input.GetKeyDown(increaseTimeScale) || Input.GetKeyDown(increaseTimeScaleAlt)) ChangeTimeScale(timeScaleInterval);
		float L_4 = __this->___timeScaleInterval_9;
		AllIn1TimeControl_ChangeTimeScale_m0BE7A4E2D50490F8CD8A8BDA8AC502E10E26DAAC(__this, L_4, NULL);
	}

IL_0026:
	{
		// if(Input.GetKeyDown(decreaseTimeScale) || Input.GetKeyDown(decreaseTimeScaleAlt)) ChangeTimeScale(-timeScaleInterval);
		int32_t L_5 = __this->___decreaseTimeScale_6;
		bool L_6;
		L_6 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_5, NULL);
		if (L_6)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_7 = __this->___decreaseTimeScaleAlt_7;
		bool L_8;
		L_8 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_7, NULL);
		if (!L_8)
		{
			goto IL_004d;
		}
	}

IL_0040:
	{
		// if(Input.GetKeyDown(decreaseTimeScale) || Input.GetKeyDown(decreaseTimeScaleAlt)) ChangeTimeScale(-timeScaleInterval);
		float L_9 = __this->___timeScaleInterval_9;
		AllIn1TimeControl_ChangeTimeScale_m0BE7A4E2D50490F8CD8A8BDA8AC502E10E26DAAC(__this, ((-L_9)), NULL);
	}

IL_004d:
	{
		// if(Input.GetKeyDown(pauseKey))
		int32_t L_10 = __this->___pauseKey_8;
		bool L_11;
		L_11 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_10, NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		// if(Time.timeScale < 0.01f) ChangeTimeScale(1f - Time.timeScale);
		float L_12;
		L_12 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		if ((!(((float)L_12) < ((float)(0.00999999978f)))))
		{
			goto IL_0079;
		}
	}
	{
		// if(Time.timeScale < 0.01f) ChangeTimeScale(1f - Time.timeScale);
		float L_13;
		L_13 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		AllIn1TimeControl_ChangeTimeScale_m0BE7A4E2D50490F8CD8A8BDA8AC502E10E26DAAC(__this, ((float)il2cpp_codegen_subtract((1.0f), L_13)), NULL);
		goto IL_0085;
	}

IL_0079:
	{
		// else ChangeTimeScale(-Time.timeScale);
		float L_14;
		L_14 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		AllIn1TimeControl_ChangeTimeScale_m0BE7A4E2D50490F8CD8A8BDA8AC502E10E26DAAC(__this, ((-L_14)), NULL);
	}

IL_0085:
	{
		// pausedButtonTween.ScaleUpTween();
		AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* L_15 = __this->___pausedButtonTween_15;
		NullCheck(L_15);
		AllIn1DemoScaleTween_ScaleUpTween_m7A248CB539848F376DB4CFF95BC94F3B4C3E41CB(L_15, NULL);
	}

IL_0090:
	{
		// float timeScaleChangeInterval = 0.1f;
		V_0 = (0.100000001f);
		// if(!(Time.unscaledTime - lastChangeTime > timeScaleChangeInterval)) return;
		float L_16;
		L_16 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		float L_17 = __this->___lastChangeTime_14;
		float L_18 = V_0;
		if ((((float)((float)il2cpp_codegen_subtract(L_16, L_17))) > ((float)L_18)))
		{
			goto IL_00a6;
		}
	}
	{
		// if(!(Time.unscaledTime - lastChangeTime > timeScaleChangeInterval)) return;
		return;
	}

IL_00a6:
	{
		// if(Input.GetKey(increaseTimeScale) || Input.GetKey(increaseTimeScaleAlt)) ChangeTimeScale(timeScaleInterval);
		int32_t L_19 = __this->___increaseTimeScale_4;
		bool L_20;
		L_20 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_19, NULL);
		if (L_20)
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_21 = __this->___increaseTimeScaleAlt_5;
		bool L_22;
		L_22 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_21, NULL);
		if (!L_22)
		{
			goto IL_00cc;
		}
	}

IL_00c0:
	{
		// if(Input.GetKey(increaseTimeScale) || Input.GetKey(increaseTimeScaleAlt)) ChangeTimeScale(timeScaleInterval);
		float L_23 = __this->___timeScaleInterval_9;
		AllIn1TimeControl_ChangeTimeScale_m0BE7A4E2D50490F8CD8A8BDA8AC502E10E26DAAC(__this, L_23, NULL);
	}

IL_00cc:
	{
		// if(Input.GetKey(decreaseTimeScale) || Input.GetKey(decreaseTimeScaleAlt)) ChangeTimeScale(-timeScaleInterval);
		int32_t L_24 = __this->___decreaseTimeScale_6;
		bool L_25;
		L_25 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_24, NULL);
		if (L_25)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_26 = __this->___decreaseTimeScaleAlt_7;
		bool L_27;
		L_27 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(L_26, NULL);
		if (!L_27)
		{
			goto IL_00f3;
		}
	}

IL_00e6:
	{
		// if(Input.GetKey(decreaseTimeScale) || Input.GetKey(decreaseTimeScaleAlt)) ChangeTimeScale(-timeScaleInterval);
		float L_28 = __this->___timeScaleInterval_9;
		AllIn1TimeControl_ChangeTimeScale_m0BE7A4E2D50490F8CD8A8BDA8AC502E10E26DAAC(__this, ((-L_28)), NULL);
	}

IL_00f3:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::ChangeTimeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1TimeControl_ChangeTimeScale_m0BE7A4E2D50490F8CD8A8BDA8AC502E10E26DAAC (AllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1* __this, float ___changeAmount0, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = Mathf.Clamp(Time.timeScale + changeAmount, 0.0f, 1f);
		float L_0;
		L_0 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		float L_1 = ___changeAmount0;
		float L_2;
		L_2 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_add(L_0, L_1)), (0.0f), (1.0f), NULL);
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331(L_2, NULL);
		// lastChangeTime = Time.unscaledTime;
		float L_3;
		L_3 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		__this->___lastChangeTime_14 = L_3;
		// UpdateTimeScaleUI();
		AllIn1TimeControl_UpdateTimeScaleUI_m4E3FB9587A57A8645A6107897F6FFB5A42AA9F0B(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::UpdateTimeScaleUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1TimeControl_UpdateTimeScaleUI_m4E3FB9587A57A8645A6107897F6FFB5A42AA9F0B (AllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4780AF940655CB59AF49F6344DA95EC30E32AA8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(timeScaleSliderNotNull) timeScaleSlider.value = Time.timeScale;
		bool L_0 = __this->___timeScaleSliderNotNull_13;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// if(timeScaleSliderNotNull) timeScaleSlider.value = Time.timeScale;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___timeScaleSlider_10;
		float L_2;
		L_2 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, L_2);
	}

IL_0018:
	{
		// if(Time.timeScale < 0.01f)
		float L_3;
		L_3 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		if ((!(((float)L_3) < ((float)(0.00999999978f)))))
		{
			goto IL_0046;
		}
	}
	{
		// pausedButtonText.text = "Unpause";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___pausedButtonText_16;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral4780AF940655CB59AF49F6344DA95EC30E32AA8A);
		// pausedButtonImage.color = pausedButtonColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___pausedButtonImage_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___pausedButtonColor_12;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		return;
	}

IL_0046:
	{
		// pausedButtonText.text = "Pause";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___pausedButtonText_16;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8);
		// pausedButtonImage.color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___pausedButtonImage_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::PauseUiButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1TimeControl_PauseUiButton_mEE8DF596A943BD4D57C9F692701673CAB14F19F0 (AllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1* __this, const RuntimeMethod* method) 
{
	{
		// if(Time.timeScale < 0.01f) Time.timeScale = 1f;
		float L_0;
		L_0 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		if ((!(((float)L_0) < ((float)(0.00999999978f)))))
		{
			goto IL_0018;
		}
	}
	{
		// if(Time.timeScale < 0.01f) Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		goto IL_0022;
	}

IL_0018:
	{
		// else Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
	}

IL_0022:
	{
		// UpdateTimeScaleUI();
		AllIn1TimeControl_UpdateTimeScaleUI_m4E3FB9587A57A8645A6107897F6FFB5A42AA9F0B(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::CurrentEffectChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1TimeControl_CurrentEffectChanged_m5D323E6E1178846163B333462A2E3C79D24B07C4 (AllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1* __this, const RuntimeMethod* method) 
{
	{
		// if(Time.timeScale < 0.01f)
		float L_0;
		L_0 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		if ((!(((float)L_0) < ((float)(0.00999999978f)))))
		{
			goto IL_001c;
		}
	}
	{
		// Time.timeScale = 0.1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.100000001f), NULL);
		// UpdateTimeScaleUI();
		AllIn1TimeControl_UpdateTimeScaleUI_m4E3FB9587A57A8645A6107897F6FFB5A42AA9F0B(__this, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1TimeControl__ctor_m67D4078E0E60537150B3382D2ABE361575953BB7 (AllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private KeyCode increaseTimeScale = KeyCode.UpArrow;
		__this->___increaseTimeScale_4 = ((int32_t)273);
		// [SerializeField] private KeyCode increaseTimeScaleAlt = KeyCode.W;
		__this->___increaseTimeScaleAlt_5 = ((int32_t)119);
		// [SerializeField] private KeyCode decreaseTimeScale = KeyCode.DownArrow;
		__this->___decreaseTimeScale_6 = ((int32_t)274);
		// [SerializeField] private KeyCode decreaseTimeScaleAlt = KeyCode.S;
		__this->___decreaseTimeScaleAlt_7 = ((int32_t)115);
		// [SerializeField] private KeyCode pauseKey = KeyCode.P;
		__this->___pauseKey_8 = ((int32_t)112);
		// [SerializeField, Range(0f, 1f)] private float timeScaleInterval = 0.05f;
		__this->___timeScaleInterval_9 = (0.0500000007f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1TimeControl::<Start>b__13_0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1TimeControl_U3CStartU3Eb__13_0_mA6BE97428BA2CCD2D9F31472B53C74440A2A2B68 (AllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1* __this, float ___U3Cp0U3E0, const RuntimeMethod* method) 
{
	{
		// if(timeScaleSliderNotNull) timeScaleSlider.onValueChanged.AddListener(delegate { ChangeTimeScale(timeScaleSlider.value - Time.timeScale); });
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___timeScaleSlider_10;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		float L_2;
		L_2 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		AllIn1TimeControl_ChangeTimeScale_m0BE7A4E2D50490F8CD8A8BDA8AC502E10E26DAAC(__this, ((float)il2cpp_codegen_subtract(L_1, L_2)), NULL);
		// if(timeScaleSliderNotNull) timeScaleSlider.onValueChanged.AddListener(delegate { ChangeTimeScale(timeScaleSlider.value - Time.timeScale); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxAutoDestroy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxAutoDestroy_Start_mBE6F5247B4DA9694E8360226A73071D98D953360 (AllIn1VfxAutoDestroy_tC63936BC1AE63771AFAA0C5EA85C077B5348F1C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject, destroyTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		float L_1 = __this->___destroyTime_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxAutoDestroy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxAutoDestroy__ctor_mC5FDE209F3B11C2912FCF5EE29582864072C7AE4 (AllIn1VfxAutoDestroy_tC63936BC1AE63771AFAA0C5EA85C077B5348F1C6* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float destroyTime = 1f;
		__this->___destroyTime_4 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxDemoController_Start_mB8B3D32873617B0D710AC889350FE2D1C00D8648 (AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463_mAB56FA5132E70ACD999BD7D20C572508F55D3A41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1_m267848629D9479B88189CBF523E2B8FAD1D52259_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// projectileSceneSetupObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___projectileSceneSetupObject_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// currDemoCollectionIndex = startingCollectionIndex;
		int32_t L_1 = __this->___startingCollectionIndex_4;
		__this->___currDemoCollectionIndex_26 = L_1;
		// currDemoEffectIndex = startingEffectIndex;
		int32_t L_2 = __this->___startingEffectIndex_5;
		__this->___currDemoEffectIndex_27 = L_2;
		// currLabelTween = currentEffectLabel.GetComponent<AllIn1DemoScaleTween>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___currentEffectLabel_15;
		NullCheck(L_3);
		AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* L_4;
		L_4 = Component_GetComponent_TisAllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463_mAB56FA5132E70ACD999BD7D20C572508F55D3A41(L_3, Component_GetComponent_TisAllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463_mAB56FA5132E70ACD999BD7D20C572508F55D3A41_RuntimeMethod_var);
		__this->___currLabelTween_29 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currLabelTween_29), (void*)L_4);
		// playButtTween = playEffectButton.GetComponent<AllIn1DemoScaleTween>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___playEffectButton_16;
		NullCheck(L_5);
		AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* L_6;
		L_6 = Component_GetComponent_TisAllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463_mAB56FA5132E70ACD999BD7D20C572508F55D3A41(L_5, Component_GetComponent_TisAllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463_mAB56FA5132E70ACD999BD7D20C572508F55D3A41_RuntimeMethod_var);
		__this->___playButtTween_30 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playButtTween_30), (void*)L_6);
		// nextButtTween = nextEffectButton.GetComponent<AllIn1DemoScaleTween>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->___nextEffectButton_18;
		NullCheck(L_7);
		AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* L_8;
		L_8 = Component_GetComponent_TisAllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463_mAB56FA5132E70ACD999BD7D20C572508F55D3A41(L_7, Component_GetComponent_TisAllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463_mAB56FA5132E70ACD999BD7D20C572508F55D3A41_RuntimeMethod_var);
		__this->___nextButtTween_31 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextButtTween_31), (void*)L_8);
		// prevButtTween = previousEffectButton.GetComponent<AllIn1DemoScaleTween>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___previousEffectButton_19;
		NullCheck(L_9);
		AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* L_10;
		L_10 = Component_GetComponent_TisAllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463_mAB56FA5132E70ACD999BD7D20C572508F55D3A41(L_9, Component_GetComponent_TisAllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463_mAB56FA5132E70ACD999BD7D20C572508F55D3A41_RuntimeMethod_var);
		__this->___prevButtTween_32 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prevButtTween_32), (void*)L_10);
		// allIn1TimeControl = gameObject.GetComponent<AllIn1TimeControl>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_11);
		AllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1* L_12;
		L_12 = GameObject_GetComponent_TisAllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1_m267848629D9479B88189CBF523E2B8FAD1D52259(L_11, GameObject_GetComponent_TisAllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1_m267848629D9479B88189CBF523E2B8FAD1D52259_RuntimeMethod_var);
		__this->___allIn1TimeControl_34 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___allIn1TimeControl_34), (void*)L_12);
		// SetupAndInstantiateCurrentEffect();
		AllIn1VfxDemoController_SetupAndInstantiateCurrentEffect_m52AE39C1492F7AF923F0B724EB1FEAF5AE2118C0(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxDemoController_Update_mD85A99CA88122D7CB2D69D8ADC48A13F8E3F99ED (AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* __this, const RuntimeMethod* method) 
{
	{
		// if(currDemoEffect.canBePlayedAgain && Input.GetKeyDown(playEffectKey)) PlayCurrentEffect();
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_0 = __this->___currDemoEffect_25;
		NullCheck(L_0);
		bool L_1 = L_0->___canBePlayedAgain_5;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = __this->___playEffectKey_10;
		bool L_3;
		L_3 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_2, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// if(currDemoEffect.canBePlayedAgain && Input.GetKeyDown(playEffectKey)) PlayCurrentEffect();
		AllIn1VfxDemoController_PlayCurrentEffect_m24CB6CEA74A4B48CC98AF0A5CB53681706D95D8D(__this, (bool)0, NULL);
	}

IL_0021:
	{
		// if(Input.GetKeyDown(nextEffectKey) || Input.GetKeyDown(nextEffectKeyAlt)) ChangeCurrentEffect(1);
		int32_t L_4 = __this->___nextEffectKey_11;
		bool L_5;
		L_5 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_4, NULL);
		if (L_5)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_6 = __this->___nextEffectKeyAlt_12;
		bool L_7;
		L_7 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_6, NULL);
		if (!L_7)
		{
			goto IL_0044;
		}
	}

IL_003b:
	{
		// if(Input.GetKeyDown(nextEffectKey) || Input.GetKeyDown(nextEffectKeyAlt)) ChangeCurrentEffect(1);
		AllIn1VfxDemoController_ChangeCurrentEffect_m494D391AD8D79343DFF8FADCD391894324A61F50(__this, 1, NULL);
		goto IL_0065;
	}

IL_0044:
	{
		// else if(Input.GetKeyDown(previousEffectKey) || Input.GetKeyDown(previousEffectKeyAlt)) ChangeCurrentEffect(-1);
		int32_t L_8 = __this->___previousEffectKey_13;
		bool L_9;
		L_9 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_8, NULL);
		if (L_9)
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_10 = __this->___previousEffectKeyAlt_14;
		bool L_11;
		L_11 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_10, NULL);
		if (!L_11)
		{
			goto IL_0065;
		}
	}

IL_005e:
	{
		// else if(Input.GetKeyDown(previousEffectKey) || Input.GetKeyDown(previousEffectKeyAlt)) ChangeCurrentEffect(-1);
		AllIn1VfxDemoController_ChangeCurrentEffect_m494D391AD8D79343DFF8FADCD391894324A61F50(__this, (-1), NULL);
	}

IL_0065:
	{
		// if(currDemoEffect.spawnTouchingFloor) cameraPivotTransform.position = Vector3.Lerp(cameraPivotTransform.position, new Vector3(0f, 0.1f, 0f), Time.unscaledDeltaTime * camPivotHeightSmoothing);
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_12 = __this->___currDemoEffect_25;
		NullCheck(L_12);
		bool L_13 = L_12->___spawnTouchingFloor_10;
		if (!L_13)
		{
			goto IL_00ad;
		}
	}
	{
		// if(currDemoEffect.spawnTouchingFloor) cameraPivotTransform.position = Vector3.Lerp(cameraPivotTransform.position, new Vector3(0f, 0.1f, 0f), Time.unscaledDeltaTime * camPivotHeightSmoothing);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___cameraPivotTransform_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___cameraPivotTransform_21;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), (0.0f), (0.100000001f), (0.0f), /*hidden argument*/NULL);
		float L_18;
		L_18 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		float L_19 = __this->___camPivotHeightSmoothing_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_16, L_17, ((float)il2cpp_codegen_multiply(L_18, L_19)), NULL);
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_20, NULL);
	}

IL_00ad:
	{
		// if(!currDemoEffect.spawnTouchingFloor) cameraPivotTransform.position = Vector3.Lerp(cameraPivotTransform.position, new Vector3(0f, 2f, 0f), Time.unscaledDeltaTime * camPivotHeightSmoothing);
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_21 = __this->___currDemoEffect_25;
		NullCheck(L_21);
		bool L_22 = L_21->___spawnTouchingFloor_10;
		if (L_22)
		{
			goto IL_00f5;
		}
	}
	{
		// if(!currDemoEffect.spawnTouchingFloor) cameraPivotTransform.position = Vector3.Lerp(cameraPivotTransform.position, new Vector3(0f, 2f, 0f), Time.unscaledDeltaTime * camPivotHeightSmoothing);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___cameraPivotTransform_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->___cameraPivotTransform_21;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), (0.0f), (2.0f), (0.0f), /*hidden argument*/NULL);
		float L_27;
		L_27 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		float L_28 = __this->___camPivotHeightSmoothing_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_25, L_26, ((float)il2cpp_codegen_multiply(L_27, L_28)), NULL);
		NullCheck(L_23);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_23, L_29, NULL);
	}

IL_00f5:
	{
		// CooldownHandling();
		AllIn1VfxDemoController_CooldownHandling_m89084EC502F1EFA5F6F834CDE66769E5D64CAE5E(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::CooldownHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxDemoController_CooldownHandling_m89084EC502F1EFA5F6F834CDE66769E5D64CAE5E (AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* __this, const RuntimeMethod* method) 
{
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* G_B4_0 = NULL;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* G_B5_1 = NULL;
	{
		// if(!currDemoEffect.canBePlayedAgain) return;
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_0 = __this->___currDemoEffect_25;
		NullCheck(L_0);
		bool L_1 = L_0->___canBePlayedAgain_5;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if(!currDemoEffect.canBePlayedAgain) return;
		return;
	}

IL_000e:
	{
		// timeSinceEffectPlay += Time.deltaTime;
		float L_2 = __this->___timeSinceEffectPlay_33;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timeSinceEffectPlay_33 = ((float)il2cpp_codegen_add(L_2, L_3));
		// playEffectButton.interactable = currentEffectPlays < 1 || timeSinceEffectPlay >= currDemoEffect.cooldown;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___playEffectButton_16;
		int32_t L_5 = __this->___currentEffectPlays_28;
		G_B3_0 = L_4;
		if ((((int32_t)L_5) < ((int32_t)1)))
		{
			G_B4_0 = L_4;
			goto IL_0047;
		}
	}
	{
		float L_6 = __this->___timeSinceEffectPlay_33;
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_7 = __this->___currDemoEffect_25;
		NullCheck(L_7);
		float L_8 = L_7->___cooldown_7;
		G_B5_0 = ((((int32_t)((!(((float)L_6) >= ((float)L_8)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_0048;
	}

IL_0047:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0048:
	{
		NullCheck(G_B5_1);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(G_B5_1, (bool)G_B5_0, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::PlayCurrentEffect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxDemoController_PlayCurrentEffect_m24CB6CEA74A4B48CC98AF0A5CB53681706D95D8D (AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* __this, bool ___isAfterSetupAndInstantiateEffect0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5_mF3FFFDA2C98CBC95916F5F5C74CCFD0FD4F65839_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	AllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5* V_2 = NULL;
	{
		// if(currentEffectPlays > 0 && timeSinceEffectPlay < currDemoEffect.cooldown) return; //Return if on cooldown and not first play
		int32_t L_0 = __this->___currentEffectPlays_28;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		float L_1 = __this->___timeSinceEffectPlay_33;
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_2 = __this->___currDemoEffect_25;
		NullCheck(L_2);
		float L_3 = L_2->___cooldown_7;
		if ((!(((float)L_1) < ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		// if(currentEffectPlays > 0 && timeSinceEffectPlay < currDemoEffect.cooldown) return; //Return if on cooldown and not first play
		return;
	}

IL_001d:
	{
		// if(!isAfterSetupAndInstantiateEffect && Time.timeSinceLevelLoad > 0.1f) playButtTween.ScaleUpTween();
		bool L_4 = ___isAfterSetupAndInstantiateEffect0;
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		float L_5;
		L_5 = Time_get_timeSinceLevelLoad_m65C386103A91B172781032CA1A6FFDEC8CFBA921(NULL);
		if ((!(((float)L_5) > ((float)(0.100000001f)))))
		{
			goto IL_0037;
		}
	}
	{
		// if(!isAfterSetupAndInstantiateEffect && Time.timeSinceLevelLoad > 0.1f) playButtTween.ScaleUpTween();
		AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* L_6 = __this->___playButtTween_30;
		NullCheck(L_6);
		AllIn1DemoScaleTween_ScaleUpTween_m7A248CB539848F376DB4CFF95BC94F3B4C3E41CB(L_6, NULL);
	}

IL_0037:
	{
		// if(!isAfterSetupAndInstantiateEffect && currDemoEffect.onlyOneAtATime) DestroyAllChildren();
		bool L_7 = ___isAfterSetupAndInstantiateEffect0;
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_8 = __this->___currDemoEffect_25;
		NullCheck(L_8);
		bool L_9 = L_8->___onlyOneAtATime_4;
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		// if(!isAfterSetupAndInstantiateEffect && currDemoEffect.onlyOneAtATime) DestroyAllChildren();
		AllIn1VfxDemoController_DestroyAllChildren_mC172E11A2F807C75A7F81BB0C74B2D20A013DED3(__this, NULL);
	}

IL_004d:
	{
		// timeSinceEffectPlay = 0f;
		__this->___timeSinceEffectPlay_33 = (0.0f);
		// Transform tempTransform = null;
		V_0 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		// if(currDemoEffect.isShootProjectile)
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_10 = __this->___currDemoEffect_25;
		NullCheck(L_10);
		bool L_11 = L_10->___isShootProjectile_8;
		if (!L_11)
		{
			goto IL_01de;
		}
	}
	{
		// if(currDemoEffect.muzzleFlashPrefab != null)
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_12 = __this->___currDemoEffect_25;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___muzzleFlashPrefab_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_00e7;
		}
	}
	{
		// tempTransform = Instantiate(currDemoEffect.muzzleFlashPrefab, projectileSpawnPoint.position, Quaternion.identity).transform;
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_15 = __this->___currDemoEffect_25;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15->___muzzleFlashPrefab_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___projectileSpawnPoint_9;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_16, L_18, L_19, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		V_0 = L_21;
		// tempTransform.localRotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_22);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_22, L_23, NULL);
		// tempTransform.forward = projectileSpawnPoint.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___projectileSpawnPoint_9;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_25, NULL);
		NullCheck(L_24);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_24, L_26, NULL);
		// tempTransform.parent = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_27);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_27, L_28, NULL);
		// tempTransform.localScale *= currDemoEffect.scaleMultiplier;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = L_29;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_30, NULL);
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_32 = __this->___currDemoEffect_25;
		NullCheck(L_32);
		float L_33 = L_32->___scaleMultiplier_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_31, L_33, NULL);
		NullCheck(L_30);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_30, L_34, NULL);
	}

IL_00e7:
	{
		// Transform projectileBase = Instantiate(projectileBasePrefab, projectileSpawnPoint.position, Quaternion.identity).transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___projectileBasePrefab_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = __this->___projectileSpawnPoint_9;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_35, L_37, L_38, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
		V_1 = L_40;
		// projectileBase.forward = projectileSpawnPoint.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = __this->___projectileSpawnPoint_9;
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_42, NULL);
		NullCheck(L_41);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_41, L_43, NULL);
		// projectileBase.parent = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_44);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_44, L_45, NULL);
		// projectileBase.localRotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47;
		L_47 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_46);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_46, L_47, NULL);
		// tempTransform = Instantiate(currDemoEffect.projectilePrefab, projectileSpawnPoint.position, Quaternion.identity).transform;
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_48 = __this->___currDemoEffect_25;
		NullCheck(L_48);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = L_48->___projectilePrefab_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50 = __this->___projectileSpawnPoint_9;
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_50, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52;
		L_52 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53;
		L_53 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_49, L_51, L_52, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		NullCheck(L_53);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_53, NULL);
		V_0 = L_54;
		// tempTransform.localRotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56;
		L_56 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_55);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_55, L_56, NULL);
		// tempTransform.forward = projectileSpawnPoint.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58 = __this->___projectileSpawnPoint_9;
		NullCheck(L_58);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_58, NULL);
		NullCheck(L_57);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_57, L_59, NULL);
		// tempTransform.parent = projectileBase;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61 = V_1;
		NullCheck(L_60);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_60, L_61, NULL);
		// AllIn1DemoProjectile tempProjectileInstance = projectileBase.GetComponent<AllIn1DemoProjectile>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62 = V_1;
		NullCheck(L_62);
		AllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5* L_63;
		L_63 = Component_GetComponent_TisAllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5_mF3FFFDA2C98CBC95916F5F5C74CCFD0FD4F65839(L_62, Component_GetComponent_TisAllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5_mF3FFFDA2C98CBC95916F5F5C74CCFD0FD4F65839_RuntimeMethod_var);
		V_2 = L_63;
		// tempProjectileInstance.Initialize(transform, projectileSpawnPoint.forward, currDemoEffect.projectileSpeed, currDemoEffect.impactPrefab, currDemoEffect.scaleMultiplier);
		AllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5* L_64 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65;
		L_65 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66 = __this->___projectileSpawnPoint_9;
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_66, NULL);
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_68 = __this->___currDemoEffect_25;
		NullCheck(L_68);
		float L_69 = L_68->___projectileSpeed_11;
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_70 = __this->___currDemoEffect_25;
		NullCheck(L_70);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = L_70->___impactPrefab_14;
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_72 = __this->___currDemoEffect_25;
		NullCheck(L_72);
		float L_73 = L_72->___scaleMultiplier_19;
		NullCheck(L_64);
		AllIn1DemoProjectile_Initialize_mE93D7C4BE9805BD8196BC14DCD6A98FDCD7E536C(L_64, L_65, L_67, L_69, L_71, L_73, NULL);
		// if(currDemoEffect.doCameraShake) tempProjectileInstance.AddScreenShakeOnImpact(currDemoEffect.projectileImpactShakeAmount);
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_74 = __this->___currDemoEffect_25;
		NullCheck(L_74);
		bool L_75 = L_74->___doCameraShake_15;
		if (!L_75)
		{
			goto IL_02bb;
		}
	}
	{
		// if(currDemoEffect.doCameraShake) tempProjectileInstance.AddScreenShakeOnImpact(currDemoEffect.projectileImpactShakeAmount);
		AllIn1DemoProjectile_t3265F140D058AB89BBFE601DC3D5A0F3B39F1DB5* L_76 = V_2;
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_77 = __this->___currDemoEffect_25;
		NullCheck(L_77);
		float L_78 = L_77->___projectileImpactShakeAmount_17;
		NullCheck(L_76);
		AllIn1DemoProjectile_AddScreenShakeOnImpact_m2E38DC55FE9DBEFBCFE50D3D2619A658BD1969B5(L_76, L_78, NULL);
		goto IL_02bb;
	}

IL_01de:
	{
		// tempTransform = Instantiate(currDemoEffect.effectPrefab, transform).transform;
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_79 = __this->___currDemoEffect_25;
		NullCheck(L_79);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = L_79->___effectPrefab_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82;
		L_82 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_80, L_81, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		NullCheck(L_82);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83;
		L_83 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_82, NULL);
		V_0 = L_83;
		// if(!currDemoEffect.spawnTouchingFloor) tempTransform.localPosition = Vector3.zero;
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_84 = __this->___currDemoEffect_25;
		NullCheck(L_84);
		bool L_85 = L_84->___spawnTouchingFloor_10;
		if (L_85)
		{
			goto IL_0214;
		}
	}
	{
		// if(!currDemoEffect.spawnTouchingFloor) tempTransform.localPosition = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_86 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_86);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_86, L_87, NULL);
		goto IL_0225;
	}

IL_0214:
	{
		// else tempTransform.position = groundSpawnTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89 = __this->___groundSpawnTransform_20;
		NullCheck(L_89);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_89, NULL);
		NullCheck(L_88);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_88, L_90, NULL);
	}

IL_0225:
	{
		// tempTransform.localRotation = currDemoEffect.effectPrefab.transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_91 = V_0;
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_92 = __this->___currDemoEffect_25;
		NullCheck(L_92);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93 = L_92->___effectPrefab_9;
		NullCheck(L_93);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
		L_94 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_93, NULL);
		NullCheck(L_94);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_95;
		L_95 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_94, NULL);
		NullCheck(L_91);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_91, L_95, NULL);
		// if(currDemoEffect.canBePlayedAgain && currDemoEffect.randomSpreadRadius > 0f && currentEffectPlays > 0)
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_96 = __this->___currDemoEffect_25;
		NullCheck(L_96);
		bool L_97 = L_96->___canBePlayedAgain_5;
		if (!L_97)
		{
			goto IL_02bb;
		}
	}
	{
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_98 = __this->___currDemoEffect_25;
		NullCheck(L_98);
		float L_99 = L_98->___randomSpreadRadius_6;
		if ((!(((float)L_99) > ((float)(0.0f)))))
		{
			goto IL_02bb;
		}
	}
	{
		int32_t L_100 = __this->___currentEffectPlays_28;
		if ((((int32_t)L_100) <= ((int32_t)0)))
		{
			goto IL_02bb;
		}
	}
	{
		// tempTransform.position += new Vector3(Random.Range(-currDemoEffect.randomSpreadRadius, currDemoEffect.randomSpreadRadius), 0f,
		//     Random.Range(-currDemoEffect.randomSpreadRadius, currDemoEffect.randomSpreadRadius));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102 = L_101;
		NullCheck(L_102);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_102, NULL);
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_104 = __this->___currDemoEffect_25;
		NullCheck(L_104);
		float L_105 = L_104->___randomSpreadRadius_6;
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_106 = __this->___currDemoEffect_25;
		NullCheck(L_106);
		float L_107 = L_106->___randomSpreadRadius_6;
		float L_108;
		L_108 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_105)), L_107, NULL);
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_109 = __this->___currDemoEffect_25;
		NullCheck(L_109);
		float L_110 = L_109->___randomSpreadRadius_6;
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_111 = __this->___currDemoEffect_25;
		NullCheck(L_111);
		float L_112 = L_111->___randomSpreadRadius_6;
		float L_113;
		L_113 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_110)), L_112, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		memset((&L_114), 0, sizeof(L_114));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_114), L_108, (0.0f), L_113, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
		L_115 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_103, L_114, NULL);
		NullCheck(L_102);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_102, L_115, NULL);
	}

IL_02bb:
	{
		// tempTransform.localScale *= currDemoEffect.scaleMultiplier;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_117 = L_116;
		NullCheck(L_117);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
		L_118 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_117, NULL);
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_119 = __this->___currDemoEffect_25;
		NullCheck(L_119);
		float L_120 = L_119->___scaleMultiplier_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_118, L_120, NULL);
		NullCheck(L_117);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_117, L_121, NULL);
		// tempTransform.position += currDemoEffect.positionOffset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_122 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_123 = L_122;
		NullCheck(L_123);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124;
		L_124 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_123, NULL);
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_125 = __this->___currDemoEffect_25;
		NullCheck(L_125);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = L_125->___positionOffset_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_124, L_126, NULL);
		NullCheck(L_123);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_123, L_127, NULL);
		// if(!isAfterSetupAndInstantiateEffect && currDemoEffect.doCameraShake) AllIn1Shaker.i.DoCameraShake(currDemoEffect.mainEffectShakeAmount);
		bool L_128 = ___isAfterSetupAndInstantiateEffect0;
		if (L_128)
		{
			goto IL_0318;
		}
	}
	{
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_129 = __this->___currDemoEffect_25;
		NullCheck(L_129);
		bool L_130 = L_129->___doCameraShake_15;
		if (!L_130)
		{
			goto IL_0318;
		}
	}
	{
		// if(!isAfterSetupAndInstantiateEffect && currDemoEffect.doCameraShake) AllIn1Shaker.i.DoCameraShake(currDemoEffect.mainEffectShakeAmount);
		AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1* L_131 = ((AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1_StaticFields*)il2cpp_codegen_static_fields_for(AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1_il2cpp_TypeInfo_var))->___i_9;
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_132 = __this->___currDemoEffect_25;
		NullCheck(L_132);
		float L_133 = L_132->___mainEffectShakeAmount_16;
		NullCheck(L_131);
		AllIn1Shaker_DoCameraShake_mEA0E05A1E14EE7E970C3CDEF1496F8279127D121_inline(L_131, L_133, NULL);
	}

IL_0318:
	{
		// currentEffectPlays++;
		int32_t L_134 = __this->___currentEffectPlays_28;
		__this->___currentEffectPlays_28 = ((int32_t)il2cpp_codegen_add(L_134, 1));
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::ChangeCurrentEffect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxDemoController_ChangeCurrentEffect_m494D391AD8D79343DFF8FADCD391894324A61F50 (AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* __this, int32_t ___changeAmount0, const RuntimeMethod* method) 
{
	{
		// if(changeAmount < 0) prevButtTween.ScaleUpTween();
		int32_t L_0 = ___changeAmount0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		// if(changeAmount < 0) prevButtTween.ScaleUpTween();
		AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* L_1 = __this->___prevButtTween_32;
		NullCheck(L_1);
		AllIn1DemoScaleTween_ScaleUpTween_m7A248CB539848F376DB4CFF95BC94F3B4C3E41CB(L_1, NULL);
		goto IL_0020;
	}

IL_0011:
	{
		// else if(changeAmount > 0) nextButtTween.ScaleUpTween();
		int32_t L_2 = ___changeAmount0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		// else if(changeAmount > 0) nextButtTween.ScaleUpTween();
		AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* L_3 = __this->___nextButtTween_31;
		NullCheck(L_3);
		AllIn1DemoScaleTween_ScaleUpTween_m7A248CB539848F376DB4CFF95BC94F3B4C3E41CB(L_3, NULL);
	}

IL_0020:
	{
		// StartCoroutine(CurrentEffectLabelTweenEffectCR());
		RuntimeObject* L_4;
		L_4 = AllIn1VfxDemoController_CurrentEffectLabelTweenEffectCR_mB8475D729EBC068C28EA4AC8BA65A1AF24E342CF(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// currDemoEffectIndex += changeAmount;
		int32_t L_6 = __this->___currDemoEffectIndex_27;
		int32_t L_7 = ___changeAmount0;
		__this->___currDemoEffectIndex_27 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		// SetupAndInstantiateCurrentEffect();
		AllIn1VfxDemoController_SetupAndInstantiateCurrentEffect_m52AE39C1492F7AF923F0B724EB1FEAF5AE2118C0(__this, NULL);
		// allIn1TimeControl.CurrentEffectChanged();
		AllIn1TimeControl_t5B0B6DF3F14E8B3A0E36D6AF67AF5671AA6797A1* L_8 = __this->___allIn1TimeControl_34;
		NullCheck(L_8);
		AllIn1TimeControl_CurrentEffectChanged_m5D323E6E1178846163B333462A2E3C79D24B07C4(L_8, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::SetupAndInstantiateCurrentEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxDemoController_SetupAndInstantiateCurrentEffect_m52AE39C1492F7AF923F0B724EB1FEAF5AE2118C0 (AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* __this, const RuntimeMethod* method) 
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// DestroyAllChildren();
		AllIn1VfxDemoController_DestroyAllChildren_mC172E11A2F807C75A7F81BB0C74B2D20A013DED3(__this, NULL);
		// currentEffectPlays = 0;
		__this->___currentEffectPlays_28 = 0;
		// ComputeValidEffectAndCollectionIndex();
		AllIn1VfxDemoController_ComputeValidEffectAndCollectionIndex_m01F07C601B6DAF66FF355FFE68E2A31E4C1DAC9C(__this, NULL);
		// currDemoEffect = effectsToSpawnCollections[currDemoCollectionIndex].demoEffectCollection[currDemoEffectIndex];
		All1VfxDemoEffectCollectionU5BU5D_t8A35A6B74ED770D92D4813845556899AEB14743E* L_0 = __this->___effectsToSpawnCollections_6;
		int32_t L_1 = __this->___currDemoCollectionIndex_26;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		All1VfxDemoEffectCollection_tE55400D4015AC0361F90307F2CAC49B6CD69017A* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		All1VfxDemoEffectU5BU5D_t1497D474E912C788E0BA007C4C5A8DBB7B8177BC* L_4 = L_3->___demoEffectCollection_4;
		int32_t L_5 = __this->___currDemoEffectIndex_27;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->___currDemoEffect_25 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currDemoEffect_25), (void*)L_7);
		// projectileSceneSetupObject.SetActive(currDemoEffect.isShootProjectile);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___projectileSceneSetupObject_8;
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_9 = __this->___currDemoEffect_25;
		NullCheck(L_9);
		bool L_10 = L_9->___isShootProjectile_8;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, L_10, NULL);
		// projectileEffectUI.SetActive(currDemoEffect.isShootProjectile);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___projectileEffectUI_23;
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_12 = __this->___currDemoEffect_25;
		NullCheck(L_12);
		bool L_13 = L_12->___isShootProjectile_8;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, L_13, NULL);
		// normalEffectUI.SetActive(!currDemoEffect.isShootProjectile);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___normalEffectUI_24;
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_15 = __this->___currDemoEffect_25;
		NullCheck(L_15);
		bool L_16 = L_15->___isShootProjectile_8;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0), NULL);
		// currentEffectLabel.text = currDemoEffect.isShootProjectile ? currDemoEffect.projectilePrefab.name : currDemoEffect.effectPrefab.name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___currentEffectLabel_15;
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_18 = __this->___currDemoEffect_25;
		NullCheck(L_18);
		bool L_19 = L_18->___isShootProjectile_8;
		G_B1_0 = L_17;
		if (L_19)
		{
			G_B2_0 = L_17;
			goto IL_009c;
		}
	}
	{
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_20 = __this->___currDemoEffect_25;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_20->___effectPrefab_9;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_21, NULL);
		G_B3_0 = L_22;
		G_B3_1 = G_B1_0;
		goto IL_00ac;
	}

IL_009c:
	{
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_23 = __this->___currDemoEffect_25;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = L_23->___projectilePrefab_12;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_24, NULL);
		G_B3_0 = L_25;
		G_B3_1 = G_B2_0;
	}

IL_00ac:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// playEffectButton.gameObject.SetActive(currDemoEffect.canBePlayedAgain);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_26 = __this->___playEffectButton_16;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_26, NULL);
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_28 = __this->___currDemoEffect_25;
		NullCheck(L_28);
		bool L_29 = L_28->___canBePlayedAgain_5;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, L_29, NULL);
		// playEffectInstructionsGo.SetActive(currDemoEffect.canBePlayedAgain);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___playEffectInstructionsGo_17;
		All1VfxDemoEffect_t15977B5DD1C8DEE28BD67A937B80E112960D5682* L_31 = __this->___currDemoEffect_25;
		NullCheck(L_31);
		bool L_32 = L_31->___canBePlayedAgain_5;
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, L_32, NULL);
		// PlayCurrentEffect(true);
		AllIn1VfxDemoController_PlayCurrentEffect_m24CB6CEA74A4B48CC98AF0A5CB53681706D95D8D(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::ComputeValidEffectAndCollectionIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxDemoController_ComputeValidEffectAndCollectionIndex_m01F07C601B6DAF66FF355FFE68E2A31E4C1DAC9C (AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int demoEffectOperation = 0; // 0 means no operation, 1 means assign first collection effect, 2 means last collection effect
		V_0 = 0;
		// if(currDemoEffectIndex < 0)
		int32_t L_0 = __this->___currDemoEffectIndex_27;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// currDemoCollectionIndex--;
		int32_t L_1 = __this->___currDemoCollectionIndex_26;
		__this->___currDemoCollectionIndex_26 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		// demoEffectOperation = 2;
		V_0 = 2;
		goto IL_0049;
	}

IL_001d:
	{
		// else if(currDemoEffectIndex >= effectsToSpawnCollections[currDemoCollectionIndex].demoEffectCollection.Length)
		int32_t L_2 = __this->___currDemoEffectIndex_27;
		All1VfxDemoEffectCollectionU5BU5D_t8A35A6B74ED770D92D4813845556899AEB14743E* L_3 = __this->___effectsToSpawnCollections_6;
		int32_t L_4 = __this->___currDemoCollectionIndex_26;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		All1VfxDemoEffectCollection_tE55400D4015AC0361F90307F2CAC49B6CD69017A* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		All1VfxDemoEffectU5BU5D_t1497D474E912C788E0BA007C4C5A8DBB7B8177BC* L_7 = L_6->___demoEffectCollection_4;
		NullCheck(L_7);
		if ((((int32_t)L_2) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0049;
		}
	}
	{
		// currDemoCollectionIndex++;
		int32_t L_8 = __this->___currDemoCollectionIndex_26;
		__this->___currDemoCollectionIndex_26 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// demoEffectOperation = 1;
		V_0 = 1;
	}

IL_0049:
	{
		// if(currDemoCollectionIndex < 0)
		int32_t L_9 = __this->___currDemoCollectionIndex_26;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		// currDemoCollectionIndex = effectsToSpawnCollections.Length - 1;
		All1VfxDemoEffectCollectionU5BU5D_t8A35A6B74ED770D92D4813845556899AEB14743E* L_10 = __this->___effectsToSpawnCollections_6;
		NullCheck(L_10);
		__this->___currDemoCollectionIndex_26 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_10)->max_length)), 1));
		// demoEffectOperation = 2;
		V_0 = 2;
		goto IL_007f;
	}

IL_0066:
	{
		// else if(currDemoCollectionIndex >= effectsToSpawnCollections.Length)
		int32_t L_11 = __this->___currDemoCollectionIndex_26;
		All1VfxDemoEffectCollectionU5BU5D_t8A35A6B74ED770D92D4813845556899AEB14743E* L_12 = __this->___effectsToSpawnCollections_6;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_007f;
		}
	}
	{
		// currDemoCollectionIndex = 0;
		__this->___currDemoCollectionIndex_26 = 0;
		// demoEffectOperation = 1;
		V_0 = 1;
	}

IL_007f:
	{
		// if(demoEffectOperation > 0)
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_00af;
		}
	}
	{
		// if(demoEffectOperation == 1) currDemoEffectIndex = 0;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_008f;
		}
	}
	{
		// if(demoEffectOperation == 1) currDemoEffectIndex = 0;
		__this->___currDemoEffectIndex_27 = 0;
		return;
	}

IL_008f:
	{
		// else if(demoEffectOperation == 2) currDemoEffectIndex = effectsToSpawnCollections[currDemoCollectionIndex].demoEffectCollection.Length - 1;
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)2))))
		{
			goto IL_00af;
		}
	}
	{
		// else if(demoEffectOperation == 2) currDemoEffectIndex = effectsToSpawnCollections[currDemoCollectionIndex].demoEffectCollection.Length - 1;
		All1VfxDemoEffectCollectionU5BU5D_t8A35A6B74ED770D92D4813845556899AEB14743E* L_16 = __this->___effectsToSpawnCollections_6;
		int32_t L_17 = __this->___currDemoCollectionIndex_26;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		All1VfxDemoEffectCollection_tE55400D4015AC0361F90307F2CAC49B6CD69017A* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		All1VfxDemoEffectU5BU5D_t1497D474E912C788E0BA007C4C5A8DBB7B8177BC* L_20 = L_19->___demoEffectCollection_4;
		NullCheck(L_20);
		__this->___currDemoEffectIndex_27 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_20)->max_length)), 1));
	}

IL_00af:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::CurrentEffectLabelTweenEffectCR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AllIn1VfxDemoController_CurrentEffectLabelTweenEffectCR_mB8475D729EBC068C28EA4AC8BA65A1AF24E342CF (AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCurrentEffectLabelTweenEffectCRU3Ed__38_t2FC601553F066A6D1A95394A63B70216ADE848DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCurrentEffectLabelTweenEffectCRU3Ed__38_t2FC601553F066A6D1A95394A63B70216ADE848DB* L_0 = (U3CCurrentEffectLabelTweenEffectCRU3Ed__38_t2FC601553F066A6D1A95394A63B70216ADE848DB*)il2cpp_codegen_object_new(U3CCurrentEffectLabelTweenEffectCRU3Ed__38_t2FC601553F066A6D1A95394A63B70216ADE848DB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCurrentEffectLabelTweenEffectCRU3Ed__38__ctor_mCCC473DFC618D8F567616AB17F82167AE7CA657E(L_0, 0, NULL);
		U3CCurrentEffectLabelTweenEffectCRU3Ed__38_t2FC601553F066A6D1A95394A63B70216ADE848DB* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::DestroyAllChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxDemoController_DestroyAllChildren_mC172E11A2F807C75A7F81BB0C74B2D20A013DED3 (AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// foreach(Transform child in transform) Destroy(child.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_003d;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0023_1;
			}

IL_000e_1:
			{
				// foreach(Transform child in transform) Destroy(child.gameObject);
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// foreach(Transform child in transform) Destroy(child.gameObject);
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
			}

IL_0023_1:
			{
				// foreach(Transform child in transform) Destroy(child.gameObject);
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxDemoController__ctor_mF78C27690839D42AB85B15EFD14CB81A49EDB7C8 (AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private KeyCode playEffectKey = KeyCode.Q;
		__this->___playEffectKey_10 = ((int32_t)113);
		// [SerializeField] private KeyCode nextEffectKey = KeyCode.RightArrow;
		__this->___nextEffectKey_11 = ((int32_t)275);
		// [SerializeField] private KeyCode nextEffectKeyAlt = KeyCode.D;
		__this->___nextEffectKeyAlt_12 = ((int32_t)100);
		// [SerializeField] private KeyCode previousEffectKey = KeyCode.LeftArrow;
		__this->___previousEffectKey_13 = ((int32_t)276);
		// [SerializeField] private KeyCode previousEffectKeyAlt = KeyCode.A;
		__this->___previousEffectKeyAlt_14 = ((int32_t)97);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController/<CurrentEffectLabelTweenEffectCR>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCurrentEffectLabelTweenEffectCRU3Ed__38__ctor_mCCC473DFC618D8F567616AB17F82167AE7CA657E (U3CCurrentEffectLabelTweenEffectCRU3Ed__38_t2FC601553F066A6D1A95394A63B70216ADE848DB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController/<CurrentEffectLabelTweenEffectCR>d__38::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCurrentEffectLabelTweenEffectCRU3Ed__38_System_IDisposable_Dispose_m185332DA9227E65EED1BCB88F963EDDDEC82A4C5 (U3CCurrentEffectLabelTweenEffectCRU3Ed__38_t2FC601553F066A6D1A95394A63B70216ADE848DB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController/<CurrentEffectLabelTweenEffectCR>d__38::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCurrentEffectLabelTweenEffectCRU3Ed__38_MoveNext_mE937276C9F04C804735B1232C77F0F18CEC4FFE5 (U3CCurrentEffectLabelTweenEffectCRU3Ed__38_t2FC601553F066A6D1A95394A63B70216ADE848DB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0080;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Color startColor = currentEffectLabel.color;
		AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* L_4 = V_1;
		NullCheck(L_4);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = L_4->___currentEffectLabel_15;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		__this->___U3CstartColorU3E5__2_3 = L_6;
		// currLabelTween.ScaleDownTween();
		AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* L_7 = V_1;
		NullCheck(L_7);
		AllIn1DemoScaleTween_t50CFE7E73C4E7CC9FA64C5DE7D5CA66521755463* L_8 = L_7->___currLabelTween_29;
		NullCheck(L_8);
		AllIn1DemoScaleTween_ScaleDownTween_m160FC47A637AEEDD553012EEB5490E46557CD13B(L_8, NULL);
		// currentEffectLabel.color = new Color(startColor.r, startColor.g, startColor.b, 0f);
		AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* L_9 = V_1;
		NullCheck(L_9);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = L_9->___currentEffectLabel_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_11 = (&__this->___U3CstartColorU3E5__2_3);
		float L_12 = L_11->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_13 = (&__this->___U3CstartColorU3E5__2_3);
		float L_14 = L_13->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_15 = (&__this->___U3CstartColorU3E5__2_3);
		float L_16 = L_15->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		memset((&L_17), 0, sizeof(L_17));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_17), L_12, L_14, L_16, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_17);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0080:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// currentEffectLabel.color = new Color(startColor.r, startColor.g, startColor.b, 1f);
		AllIn1VfxDemoController_t138A7CCC317DAE076CB72F1F978ACDD63393298C* L_18 = V_1;
		NullCheck(L_18);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = L_18->___currentEffectLabel_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_20 = (&__this->___U3CstartColorU3E5__2_3);
		float L_21 = L_20->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_22 = (&__this->___U3CstartColorU3E5__2_3);
		float L_23 = L_22->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_24 = (&__this->___U3CstartColorU3E5__2_3);
		float L_25 = L_24->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		memset((&L_26), 0, sizeof(L_26));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_26), L_21, L_23, L_25, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_19, L_26);
		// }
		return (bool)0;
	}
}
// System.Object AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController/<CurrentEffectLabelTweenEffectCR>d__38::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCurrentEffectLabelTweenEffectCRU3Ed__38_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF3EF536605AFE036F86897BD9A367F5AC31F4665 (U3CCurrentEffectLabelTweenEffectCRU3Ed__38_t2FC601553F066A6D1A95394A63B70216ADE848DB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController/<CurrentEffectLabelTweenEffectCR>d__38::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCurrentEffectLabelTweenEffectCRU3Ed__38_System_Collections_IEnumerator_Reset_m7EB4182C76D651C0301AF6D458EE908C9216DFBC (U3CCurrentEffectLabelTweenEffectCRU3Ed__38_t2FC601553F066A6D1A95394A63B70216ADE848DB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCurrentEffectLabelTweenEffectCRU3Ed__38_System_Collections_IEnumerator_Reset_m7EB4182C76D651C0301AF6D458EE908C9216DFBC_RuntimeMethod_var)));
	}
}
// System.Object AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxDemoController/<CurrentEffectLabelTweenEffectCR>d__38::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCurrentEffectLabelTweenEffectCRU3Ed__38_System_Collections_IEnumerator_get_Current_m5BB294BDE056B20F86EDC15F73148C0797FD22D3 (U3CCurrentEffectLabelTweenEffectCRU3Ed__38_t2FC601553F066A6D1A95394A63B70216ADE848DB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxFadeLight::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxFadeLight_Start_mB099FB603674BA39FB6B8FF710402006319ABC55 (AllIn1VfxFadeLight_tF90CF036F28D0032EC29E8A320FD09742167B476* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// targetLight = GetComponent<Light>();
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0;
		L_0 = Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9(__this, Component_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mF4816FA12B6F220CA55D47D669D7E50DC118B9E9_RuntimeMethod_var);
		__this->___targetLight_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetLight_6), (void*)L_0);
		// iniLightIntensity = targetLight.intensity;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = __this->___targetLight_6;
		NullCheck(L_1);
		float L_2;
		L_2 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_1, NULL);
		__this->___iniLightIntensity_8 = L_2;
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxFadeLight::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxFadeLight_Update_mD027412F5A4FF1984E4796E7FD7B771242A06E97 (AllIn1VfxFadeLight_tF90CF036F28D0032EC29E8A320FD09742167B476* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// targetLight.intensity = Mathf.Lerp(0f, iniLightIntensity, animationRatioRemaining);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = __this->___targetLight_6;
		float L_1 = __this->___iniLightIntensity_8;
		float L_2 = __this->___animationRatioRemaining_7;
		float L_3;
		L_3 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), L_1, L_2, NULL);
		NullCheck(L_0);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_0, L_3, NULL);
		// animationRatioRemaining -= Time.deltaTime / fadeDuration;
		float L_4 = __this->___animationRatioRemaining_7;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_6 = __this->___fadeDuration_4;
		__this->___animationRatioRemaining_7 = ((float)il2cpp_codegen_subtract(L_4, ((float)(L_5/L_6))));
		// if(destroyWhenFaded && animationRatioRemaining <= 0f) Destroy(gameObject);
		bool L_7 = __this->___destroyWhenFaded_5;
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		float L_8 = __this->___animationRatioRemaining_7;
		if ((!(((float)L_8) <= ((float)(0.0f)))))
		{
			goto IL_005a;
		}
	}
	{
		// if(destroyWhenFaded && animationRatioRemaining <= 0f) Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_9, NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxFadeLight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxFadeLight__ctor_m750D81196CB5B49FFC0EC99D26BC9FCAF5F457E5 (AllIn1VfxFadeLight_tF90CF036F28D0032EC29E8A320FD09742167B476* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float fadeDuration = 0.1f;
		__this->___fadeDuration_4 = (0.100000001f);
		// [SerializeField] private bool destroyWhenFaded = true;
		__this->___destroyWhenFaded_5 = (bool)1;
		// private float animationRatioRemaining = 1f;
		__this->___animationRatioRemaining_7 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxParticleSystemTime::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxParticleSystemTime_Start_m84BEFC53B33ECB32C0E3AB7733600495EEA14045 (AllIn1VfxParticleSystemTime_t947040E7EBDE5A0B06FE7E4CCBD9803D9901B3F1* __this, const RuntimeMethod* method) 
{
	{
		// SetSimulationTime();
		AllIn1VfxParticleSystemTime_SetSimulationTime_mE10DE6B36542096BD573162D67BEB35F2F6ADCFF(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxParticleSystemTime::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxParticleSystemTime_Update_m8AE28E49ABFE35DC4DB78D27AC6447B949D5E286 (AllIn1VfxParticleSystemTime_t947040E7EBDE5A0B06FE7E4CCBD9803D9901B3F1* __this, const RuntimeMethod* method) 
{
	{
		// if(updateEveryFrame) SetSimulationTime();
		bool L_0 = __this->___updateEveryFrame_4;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if(updateEveryFrame) SetSimulationTime();
		AllIn1VfxParticleSystemTime_SetSimulationTime_mE10DE6B36542096BD573162D67BEB35F2F6ADCFF(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxParticleSystemTime::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxParticleSystemTime_OnValidate_mF3A6B1153C0FEA9C9FD3C3FE3677BF3B3139F809 (AllIn1VfxParticleSystemTime_t947040E7EBDE5A0B06FE7E4CCBD9803D9901B3F1* __this, const RuntimeMethod* method) 
{
	{
		// SetSimulationTime();
		AllIn1VfxParticleSystemTime_SetSimulationTime_mE10DE6B36542096BD573162D67BEB35F2F6ADCFF(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxParticleSystemTime::SetSimulationTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxParticleSystemTime_SetSimulationTime_mE10DE6B36542096BD573162D67BEB35F2F6ADCFF (AllIn1VfxParticleSystemTime_t947040E7EBDE5A0B06FE7E4CCBD9803D9901B3F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FD7ACA76D20D20DB889E633C51EEB14ED85007F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5D8EF422ABD0284BA3EEB3BF58FBA9313575F4E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(targetPs == null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___targetPs_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0056;
		}
	}
	{
		// targetPs = GetComponent<ParticleSystem>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2;
		L_2 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(__this, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		__this->___targetPs_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetPs_6), (void*)L_2);
		// if(targetPs == null && isValid)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = __this->___targetPs_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		bool L_5 = __this->___isValid_7;
		if (!L_5)
		{
			goto IL_0056;
		}
	}
	{
		// Debug.LogError("The object " + gameObject.name + " has no Particle System and you are trying to access it. Please take a look");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralF5D8EF422ABD0284BA3EEB3BF58FBA9313575F4E, L_7, _stringLiteral5FD7ACA76D20D20DB889E633C51EEB14ED85007F, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_8, NULL);
		// isValid = false;
		__this->___isValid_7 = (bool)0;
	}

IL_0056:
	{
		// if(!isValid) return;
		bool L_9 = __this->___isValid_7;
		if (L_9)
		{
			goto IL_005f;
		}
	}
	{
		// if(!isValid) return;
		return;
	}

IL_005f:
	{
		// if(simulationTimeRange.y > 0f) targetPs.Simulate(Random.Range(simulationTimeRange.x, simulationTimeRange.y), true, true);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___simulationTimeRange_5);
		float L_11 = L_10->___y_1;
		if ((!(((float)L_11) > ((float)(0.0f)))))
		{
			goto IL_009a;
		}
	}
	{
		// if(simulationTimeRange.y > 0f) targetPs.Simulate(Random.Range(simulationTimeRange.x, simulationTimeRange.y), true, true);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_12 = __this->___targetPs_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___simulationTimeRange_5);
		float L_14 = L_13->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___simulationTimeRange_5);
		float L_16 = L_15->___y_1;
		float L_17;
		L_17 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_14, L_16, NULL);
		NullCheck(L_12);
		ParticleSystem_Simulate_mE81EFF12AC1E2C08F3AE86DA7CF0D5CA4EA8F91F(L_12, L_17, (bool)1, (bool)1, NULL);
		return;
	}

IL_009a:
	{
		// else targetPs.Simulate(simulationTimeRange.x, true, true);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_18 = __this->___targetPs_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (&__this->___simulationTimeRange_5);
		float L_20 = L_19->___x_0;
		NullCheck(L_18);
		ParticleSystem_Simulate_mE81EFF12AC1E2C08F3AE86DA7CF0D5CA4EA8F91F(L_18, L_20, (bool)1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Demo.Scripts.AllIn1VfxParticleSystemTime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxParticleSystemTime__ctor_mF6C510D377E0C6F00C0DFFD16A4C6A9236CB6A13 (AllIn1VfxParticleSystemTime_t947040E7EBDE5A0B06FE7E4CCBD9803D9901B3F1* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private bool updateEveryFrame = true;
		__this->___updateEveryFrame_4 = (bool)1;
		// [SerializeField] private Vector2 simulationTimeRange = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___simulationTimeRange_5 = L_0;
		// private bool isValid = true;
		__this->___isValid_7 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) 
{
	{
		// return m_Value;
		int32_t L_0 = __this->___m_Value_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		float L_2 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___a0;
		float L_4 = L_3.___g_1;
		float L_5 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___b_2;
		float L_8 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___a_3;
		float L_11 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___maxDelta2;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		float L_5 = ___target1;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0017:
	{
		float L_6 = ___current0;
		float L_7 = ___target1;
		float L_8 = ___current0;
		float L_9;
		L_9 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		float L_10 = ___maxDelta2;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_11 = V_1;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AllIn1Shaker_DoCameraShake_mEA0E05A1E14EE7E970C3CDEF1496F8279127D121_inline (AllIn1Shaker_tD930CDB1DFE1B41FA11381E14A313F42F06227C1* __this, float ___shakeAmount0, const RuntimeMethod* method) 
{
	{
		// currentShakeAmount = shakeAmount;
		float L_0 = ___shakeAmount0;
		__this->___currentShakeAmount_10 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) 
{
	{
		// public SliderEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_0 = __this->___m_OnValueChanged_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
