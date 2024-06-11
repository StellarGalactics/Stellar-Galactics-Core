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

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// AllIn1VfxToolkit.All1VfxRandomTimeSeed
struct All1VfxRandomTimeSeed_t67A13258B2C46B1B81032BB643724405898B5B57;
// AllIn1VfxToolkit.Scripts.AllIn1GraphicMaterialDuplicate
struct AllIn1GraphicMaterialDuplicate_tEC6847E85A67C8AFB79A06C3E271091CCD6B3AA0;
// AllIn1VfxToolkit.AllIn1LookAt
struct AllIn1LookAt_tDBAC078F7CE06BC8241E5429C930D8586A64D836;
// AllIn1VfxToolkit.AllIn1ParticleHelperComponent
struct AllIn1ParticleHelperComponent_tDFD2B3E7E4BE678952CD673F473DBEFEA569C0BB;
// AllIn1VfxToolkit.AllIn1ParticleHelperSO
struct AllIn1ParticleHelperSO_tB1703DA97F077A501D1897ACE6C5AEE88C4A8061;
// AllIn1VfxToolkit.AllIn1VfxBounceAnimation
struct AllIn1VfxBounceAnimation_tCE51755C53049903743EC707AADB9B8B0019D86E;
// AllIn1VfxToolkit.AllIn1VfxComponent
struct AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54;
// AllIn1VfxToolkit.AllIn1VfxFakeLightDirSetter
struct AllIn1VfxFakeLightDirSetter_t2DF709DA0A4395452D0BF247C1D247B3722FCC06;
// AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty
struct AllIn1VfxScrollShaderProperty_tAC8F7ED4CC8304DBB58E1B23A2D2CE13EA22E07E;
// AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture
struct AllIn1VfxScrollShaderTexture_t0B1CA0D34AF4808EA9BA40B9CDBA558936EB3103;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0023D6A9F7F3B566DFB2EFA5BE5820D9509D681E;
IL2CPP_EXTERN_C String_t* _stringLiteral0299CC5F40C577F300BB29854CBAAD8B68ABF5A0;
IL2CPP_EXTERN_C String_t* _stringLiteral0401A6C1F7012C721901C937730CA854AED44F14;
IL2CPP_EXTERN_C String_t* _stringLiteral040793655BC228982AF83F2DE9C015C189306364;
IL2CPP_EXTERN_C String_t* _stringLiteral083BBDE4DA923F689C1CF133A399ABCA89D99017;
IL2CPP_EXTERN_C String_t* _stringLiteral1340C6E5B2B210689A25CF2270555B16E1489106;
IL2CPP_EXTERN_C String_t* _stringLiteral14D479CBF77090A6D30F543484D1D50B87795337;
IL2CPP_EXTERN_C String_t* _stringLiteral158697E57921300501C71DFA8626FCAE1F8FD030;
IL2CPP_EXTERN_C String_t* _stringLiteral1647B084BF73860206F4BB01E3237ED88F61B4BA;
IL2CPP_EXTERN_C String_t* _stringLiteral185035D897E40E37CE218ED2FFA2B3FD8F8F8F22;
IL2CPP_EXTERN_C String_t* _stringLiteral1E1912CAB55AF7DEF1C5B72F955FFFBCB9884AB5;
IL2CPP_EXTERN_C String_t* _stringLiteral1E74A2EC3C4B69C55D0D1B56F81D53F03FC58D57;
IL2CPP_EXTERN_C String_t* _stringLiteral2043A81282FBC38D068F48CE6B02508288E7F859;
IL2CPP_EXTERN_C String_t* _stringLiteral2F3FA2011635BA3ADF04F3A6636CEA5D2D14EF88;
IL2CPP_EXTERN_C String_t* _stringLiteral34AD56288A03AA8D7B7BE17E549C5FB602F9E885;
IL2CPP_EXTERN_C String_t* _stringLiteral3C1DB6BCE7F7EC4956D0CD51C602C4B9D94DE193;
IL2CPP_EXTERN_C String_t* _stringLiteral3F868CB06E969FC20ED35E84ACC75C8E94BE5789;
IL2CPP_EXTERN_C String_t* _stringLiteral40728BBCE4EE91640605FACC63DB3CEC63B83B80;
IL2CPP_EXTERN_C String_t* _stringLiteral4696BEB1B4DD525F1293813D16EC3A02B2B12251;
IL2CPP_EXTERN_C String_t* _stringLiteral46AFF93E738AD334DF787721BD7F7D0089E5D7AC;
IL2CPP_EXTERN_C String_t* _stringLiteral4A68E99ECA06FD65FDFD5FCD7FECC5839F4C0DBC;
IL2CPP_EXTERN_C String_t* _stringLiteral4AA79340AA7669BF821B747B748410DB52DA3261;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral51C68DEA8F259A907A0498E34875D1BD0A6CED03;
IL2CPP_EXTERN_C String_t* _stringLiteral5398DC3D4FFCD34741F382F596A262B6FA2922AC;
IL2CPP_EXTERN_C String_t* _stringLiteral561612A9F818B42EF04003F9D6952E8EC5D027ED;
IL2CPP_EXTERN_C String_t* _stringLiteral5904389432FCA9BFEA539A8A22DDC0BD69F94F04;
IL2CPP_EXTERN_C String_t* _stringLiteral5A02191D32DC069B431D3E54FF28CEC7767178DB;
IL2CPP_EXTERN_C String_t* _stringLiteral5CE72404582BDAE77C15BF3F30FEFFD1A81D8F8C;
IL2CPP_EXTERN_C String_t* _stringLiteral5D5BF7644F6756216DBAE69270F57FE11BEAE972;
IL2CPP_EXTERN_C String_t* _stringLiteral5F61F506633DBCEB100F2CA993128F6DC6A9C618;
IL2CPP_EXTERN_C String_t* _stringLiteral638A6BF6390D12422CAC4910C95F16CFBCE6D50B;
IL2CPP_EXTERN_C String_t* _stringLiteral6677C73BF64E77B045EA94D2AA385D7540F0A39D;
IL2CPP_EXTERN_C String_t* _stringLiteral6757D44A85F13AA2863BDC7DCEF5E30BC21278BD;
IL2CPP_EXTERN_C String_t* _stringLiteral68CB89848359D7BCEA0995C8FB01DAA1D5DFDE28;
IL2CPP_EXTERN_C String_t* _stringLiteral6B20C68293E633F1FCCB3BBD64B19DD052F5ED87;
IL2CPP_EXTERN_C String_t* _stringLiteral7281FF2F619273B6F998E3D3DCA0CFAF23CCFAD2;
IL2CPP_EXTERN_C String_t* _stringLiteral72A7CAD40240F38905C2C0E1E50F4449AD82AEAB;
IL2CPP_EXTERN_C String_t* _stringLiteral757FDB668BCAADD3B45A3175E6AC8EBACA3EEB65;
IL2CPP_EXTERN_C String_t* _stringLiteral76264918B150B6FD44125E9CE7F711A3689B9700;
IL2CPP_EXTERN_C String_t* _stringLiteral79BCB0C2B8C16448AD04D20C4925CF363A67BAA9;
IL2CPP_EXTERN_C String_t* _stringLiteral7D2ED17259CF0DC4179D682E4471BF85B5574BBA;
IL2CPP_EXTERN_C String_t* _stringLiteral7DDFF290B24173A5DC1BC9BC22C9322BB36CFC10;
IL2CPP_EXTERN_C String_t* _stringLiteral872DCAB5572E264E9E4EA514D7E835229090D6BC;
IL2CPP_EXTERN_C String_t* _stringLiteral89115C0E93F9302CD0B8CD7BB21C410B6162644D;
IL2CPP_EXTERN_C String_t* _stringLiteral8DED3C670AB3C2E5A20C926F89F96926BE24AC79;
IL2CPP_EXTERN_C String_t* _stringLiteral92274FFFE307A7AA40F70ECBD38BB73705AC9E5B;
IL2CPP_EXTERN_C String_t* _stringLiteral94BD673B8551A4C6D6A807ED9D7A6C37D921072F;
IL2CPP_EXTERN_C String_t* _stringLiteral94F92EDABB0744C4E72E030B935FEC2580C8A614;
IL2CPP_EXTERN_C String_t* _stringLiteral954CC189A0FC8B78E623F527148C0981714376AC;
IL2CPP_EXTERN_C String_t* _stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1;
IL2CPP_EXTERN_C String_t* _stringLiteral99117A43311619936587FBCABCC9B16B687AB302;
IL2CPP_EXTERN_C String_t* _stringLiteral9A5093C3D376CC1E1CC7EEF2F6A221406781623A;
IL2CPP_EXTERN_C String_t* _stringLiteral9ABAD8FF849D104EA8DB7481A66BB4B9FD7143A2;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE902BD3933F71AD381D3042D88DF18342E37C4;
IL2CPP_EXTERN_C String_t* _stringLiteralA0F4CF9D3B8B4AD6A49A888401B14AE51DD52E16;
IL2CPP_EXTERN_C String_t* _stringLiteralA27C6266A902DDCC5C73F82BEBBBDF1C87CCFFFA;
IL2CPP_EXTERN_C String_t* _stringLiteralA66067A208E75497516342A152D58B32B1C89075;
IL2CPP_EXTERN_C String_t* _stringLiteralA7A626DEA2521BA48EA03C7C5828601203370D81;
IL2CPP_EXTERN_C String_t* _stringLiteralA87819C2031146742C1F5350BC509988DACBE9F9;
IL2CPP_EXTERN_C String_t* _stringLiteralAAE3A15202D762AC5E5D99D35460A3E2C88307E1;
IL2CPP_EXTERN_C String_t* _stringLiteralB1D928ABA3C2555CCA12F60991D28C7F5A0E200E;
IL2CPP_EXTERN_C String_t* _stringLiteralB8649C06FE9FBAB8E997CBD8796167F6283CAB2C;
IL2CPP_EXTERN_C String_t* _stringLiteralBCBD8C7003675066255066C8241D1DCB43737145;
IL2CPP_EXTERN_C String_t* _stringLiteralC1321093811095513C44D23E1503BACF248356F0;
IL2CPP_EXTERN_C String_t* _stringLiteralC3A9DE289B76C73BE63D02B5A01D7C45B656AD49;
IL2CPP_EXTERN_C String_t* _stringLiteralC76190ED0C48EB995A11E863941095B1AA26B582;
IL2CPP_EXTERN_C String_t* _stringLiteralC827CF6C30E43507B780232E56A8ECC3A42FD702;
IL2CPP_EXTERN_C String_t* _stringLiteralC879E94E49560F1B236BDF1611C5EC619EA5B93F;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE96480BEB47650A1397787D142CB9736546564;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE91F51A391C3F771D9B2463C388312AA8DA8CF;
IL2CPP_EXTERN_C String_t* _stringLiteralCF6B5D4AFB7B21CFD9A2454BF9D1139B1B749D14;
IL2CPP_EXTERN_C String_t* _stringLiteralD01835DFD9412FEB7AA45A9F2E69029F2B71B936;
IL2CPP_EXTERN_C String_t* _stringLiteralD34B357F606D69B3A243155329F7C26E9ED9B03B;
IL2CPP_EXTERN_C String_t* _stringLiteralD53DF615DBAF7AA486744EFFCF7D2AB271BC7058;
IL2CPP_EXTERN_C String_t* _stringLiteralD678A75C242A16DA78744D87F52BD6BA550F95C4;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC639E8CFF8B48439F2DC546D026EE8EAB89718B;
IL2CPP_EXTERN_C String_t* _stringLiteralE8B1F4E65A0B35AB6619D979A27DD1766DEB7039;
IL2CPP_EXTERN_C String_t* _stringLiteralEAE96BC7C4AF88268A19A75CCE8F01ABB5A77AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralEFF7EFBB29A0F779F9CF65D30804B3D60468618E;
IL2CPP_EXTERN_C String_t* _stringLiteralF4B62A69FCAFBA03A81C4FD2F7CF77104D7CB48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF5D8EF422ABD0284BA3EEB3BF58FBA9313575F4E;
IL2CPP_EXTERN_C String_t* _stringLiteralFD3081C211F1405167EBF5BDD775516383D38F4F;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_0_0_0_var;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t637A9216F65DF96B664354B0280EEF43B9EC6A62 
{
};

// AllIn1VfxToolkit.AllIn1VfxNoiseCreator
struct AllIn1VfxNoiseCreator_t69332FB6CDC3AB1FD4AB5EB8F52C8A541B46ABA7  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.ParticleSystem/MinMaxGradient
struct MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 
{
	// UnityEngine.ParticleSystemGradientMode UnityEngine.ParticleSystem/MinMaxGradient::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMin
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMin_1;
	// UnityEngine.Gradient UnityEngine.ParticleSystem/MinMaxGradient::m_GradientMax
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_GradientMax_2;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMin
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMin_3;
	// UnityEngine.Color UnityEngine.ParticleSystem/MinMaxGradient::m_ColorMax
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorMax_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// AllIn1VfxToolkit.AllIn1ParticleHelperSO
struct AllIn1ParticleHelperSO_tB1703DA97F077A501D1897ACE6C5AEE88C4A8061  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean AllIn1VfxToolkit.AllIn1ParticleHelperSO::matchDurationToLifetime
	bool ___matchDurationToLifetime_4;
	// System.Boolean AllIn1VfxToolkit.AllIn1ParticleHelperSO::randomRotation
	bool ___randomRotation_5;
	// System.Single AllIn1VfxToolkit.AllIn1ParticleHelperSO::minLifetime
	float ___minLifetime_6;
	// System.Single AllIn1VfxToolkit.AllIn1ParticleHelperSO::maxLifetime
	float ___maxLifetime_7;
	// System.Single AllIn1VfxToolkit.AllIn1ParticleHelperSO::minSpeed
	float ___minSpeed_8;
	// System.Single AllIn1VfxToolkit.AllIn1ParticleHelperSO::maxSpeed
	float ___maxSpeed_9;
	// System.Single AllIn1VfxToolkit.AllIn1ParticleHelperSO::minSize
	float ___minSize_10;
	// System.Single AllIn1VfxToolkit.AllIn1ParticleHelperSO::maxSize
	float ___maxSize_11;
	// UnityEngine.ParticleSystem/MinMaxGradient AllIn1VfxToolkit.AllIn1ParticleHelperSO::startColor
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___startColor_12;
	// System.Boolean AllIn1VfxToolkit.AllIn1ParticleHelperSO::isBurst
	bool ___isBurst_13;
	// System.Int32 AllIn1VfxToolkit.AllIn1ParticleHelperSO::minNumberOfParticles
	int32_t ___minNumberOfParticles_14;
	// System.Int32 AllIn1VfxToolkit.AllIn1ParticleHelperSO::maxNumberOfParticles
	int32_t ___maxNumberOfParticles_15;
	// AllIn1VfxToolkit.AllIn1ParticleHelperComponent/EmissionShapes AllIn1VfxToolkit.AllIn1ParticleHelperSO::currEmissionShape
	int32_t ___currEmissionShape_16;
	// AllIn1VfxToolkit.AllIn1ParticleHelperComponent/LifetimeSettings AllIn1VfxToolkit.AllIn1ParticleHelperSO::colorLifetime
	int32_t ___colorLifetime_17;
	// AllIn1VfxToolkit.AllIn1ParticleHelperComponent/LifetimeSettings AllIn1VfxToolkit.AllIn1ParticleHelperSO::sizeLifetime
	int32_t ___sizeLifetime_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AllIn1VfxToolkit.All1VfxRandomTimeSeed
struct All1VfxRandomTimeSeed_t67A13258B2C46B1B81032BB643724405898B5B57  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single AllIn1VfxToolkit.All1VfxRandomTimeSeed::minSeedValue
	float ___minSeedValue_4;
	// System.Single AllIn1VfxToolkit.All1VfxRandomTimeSeed::maxSeedValue
	float ___maxSeedValue_5;
};

// AllIn1VfxToolkit.Scripts.AllIn1GraphicMaterialDuplicate
struct AllIn1GraphicMaterialDuplicate_tEC6847E85A67C8AFB79A06C3E271091CCD6B3AA0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// AllIn1VfxToolkit.AllIn1LookAt
struct AllIn1LookAt_tDBAC078F7CE06BC8241E5429C930D8586A64D836  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean AllIn1VfxToolkit.AllIn1LookAt::updateEveryFrame
	bool ___updateEveryFrame_4;
	// System.Boolean AllIn1VfxToolkit.AllIn1LookAt::targetIsMainCamera
	bool ___targetIsMainCamera_5;
	// UnityEngine.Transform AllIn1VfxToolkit.AllIn1LookAt::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_6;
	// AllIn1VfxToolkit.AllIn1LookAt/FaceDirection AllIn1VfxToolkit.AllIn1LookAt::faceDirection
	int32_t ___faceDirection_7;
	// System.Boolean AllIn1VfxToolkit.AllIn1LookAt::negateDirection
	bool ___negateDirection_8;
};

// AllIn1VfxToolkit.AllIn1ParticleHelperComponent
struct AllIn1ParticleHelperComponent_tDFD2B3E7E4BE678952CD673F473DBEFEA569C0BB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean AllIn1VfxToolkit.AllIn1ParticleHelperComponent::hierarchyHelpers
	bool ___hierarchyHelpers_4;
	// System.Boolean AllIn1VfxToolkit.AllIn1ParticleHelperComponent::generalOptions
	bool ___generalOptions_5;
	// System.Boolean AllIn1VfxToolkit.AllIn1ParticleHelperComponent::shapeOptions
	bool ___shapeOptions_6;
	// System.Boolean AllIn1VfxToolkit.AllIn1ParticleHelperComponent::emissionOptions
	bool ___emissionOptions_7;
	// System.Boolean AllIn1VfxToolkit.AllIn1ParticleHelperComponent::overLifetimeOptions
	bool ___overLifetimeOptions_8;
	// System.Boolean AllIn1VfxToolkit.AllIn1ParticleHelperComponent::colorChangeOption
	bool ___colorChangeOption_9;
	// System.Boolean AllIn1VfxToolkit.AllIn1ParticleHelperComponent::particleHelperPresets
	bool ___particleHelperPresets_10;
	// System.Boolean AllIn1VfxToolkit.AllIn1ParticleHelperComponent::particleSystemPresets
	bool ___particleSystemPresets_11;
	// System.Int32 AllIn1VfxToolkit.AllIn1ParticleHelperComponent::numberOfCopies
	int32_t ___numberOfCopies_12;
	// System.Boolean AllIn1VfxToolkit.AllIn1ParticleHelperComponent::applyEverythingOnChange
	bool ___applyEverythingOnChange_13;
	// System.Boolean AllIn1VfxToolkit.AllIn1ParticleHelperComponent::matchDurationToLifetime
	bool ___matchDurationToLifetime_14;
	// System.Boolean AllIn1VfxToolkit.AllIn1ParticleHelperComponent::randomRotation
	bool ___randomRotation_15;
	// System.Single AllIn1VfxToolkit.AllIn1ParticleHelperComponent::minLifetime
	float ___minLifetime_16;
	// System.Single AllIn1VfxToolkit.AllIn1ParticleHelperComponent::maxLifetime
	float ___maxLifetime_17;
	// System.Single AllIn1VfxToolkit.AllIn1ParticleHelperComponent::minSpeed
	float ___minSpeed_18;
	// System.Single AllIn1VfxToolkit.AllIn1ParticleHelperComponent::maxSpeed
	float ___maxSpeed_19;
	// System.Single AllIn1VfxToolkit.AllIn1ParticleHelperComponent::minSize
	float ___minSize_20;
	// System.Single AllIn1VfxToolkit.AllIn1ParticleHelperComponent::maxSize
	float ___maxSize_21;
	// UnityEngine.ParticleSystem/MinMaxGradient AllIn1VfxToolkit.AllIn1ParticleHelperComponent::startColor
	MinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69 ___startColor_22;
	// System.Boolean AllIn1VfxToolkit.AllIn1ParticleHelperComponent::isBurst
	bool ___isBurst_23;
	// System.Int32 AllIn1VfxToolkit.AllIn1ParticleHelperComponent::minNumberOfParticles
	int32_t ___minNumberOfParticles_24;
	// System.Int32 AllIn1VfxToolkit.AllIn1ParticleHelperComponent::maxNumberOfParticles
	int32_t ___maxNumberOfParticles_25;
	// AllIn1VfxToolkit.AllIn1ParticleHelperComponent/EmissionShapes AllIn1VfxToolkit.AllIn1ParticleHelperComponent::currEmissionShape
	int32_t ___currEmissionShape_26;
	// AllIn1VfxToolkit.AllIn1ParticleHelperComponent/LifetimeSettings AllIn1VfxToolkit.AllIn1ParticleHelperComponent::colorLifetime
	int32_t ___colorLifetime_27;
	// AllIn1VfxToolkit.AllIn1ParticleHelperComponent/LifetimeSettings AllIn1VfxToolkit.AllIn1ParticleHelperComponent::sizeLifetime
	int32_t ___sizeLifetime_28;
};

// AllIn1VfxToolkit.AllIn1VfxBounceAnimation
struct AllIn1VfxBounceAnimation_tCE51755C53049903743EC707AADB9B8B0019D86E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 AllIn1VfxToolkit.AllIn1VfxBounceAnimation::targetOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetOffset_4;
	// System.Single AllIn1VfxToolkit.AllIn1VfxBounceAnimation::speed
	float ___speed_5;
	// UnityEngine.Vector3 AllIn1VfxToolkit.AllIn1VfxBounceAnimation::startPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPosition_6;
	// UnityEngine.Vector3 AllIn1VfxToolkit.AllIn1VfxBounceAnimation::animationMovementVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___animationMovementVector_7;
};

// AllIn1VfxToolkit.AllIn1VfxComponent
struct AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material AllIn1VfxToolkit.AllIn1VfxComponent::currMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currMaterial_4;
	// UnityEngine.Material AllIn1VfxToolkit.AllIn1VfxComponent::prevMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___prevMaterial_5;
	// System.Boolean AllIn1VfxToolkit.AllIn1VfxComponent::matAssigned
	bool ___matAssigned_6;
	// System.Boolean AllIn1VfxToolkit.AllIn1VfxComponent::destroyed
	bool ___destroyed_7;
};

// AllIn1VfxToolkit.AllIn1VfxFakeLightDirSetter
struct AllIn1VfxFakeLightDirSetter_t2DF709DA0A4395452D0BF247C1D247B3722FCC06  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean AllIn1VfxToolkit.AllIn1VfxFakeLightDirSetter::setOnAwake
	bool ___setOnAwake_4;
	// System.Boolean AllIn1VfxToolkit.AllIn1VfxFakeLightDirSetter::setOnUpdate
	bool ___setOnUpdate_5;
	// UnityEngine.Transform AllIn1VfxToolkit.AllIn1VfxFakeLightDirSetter::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_6;
	// System.Int32 AllIn1VfxToolkit.AllIn1VfxFakeLightDirSetter::lightDirId
	int32_t ___lightDirId_7;
};

// AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty
struct AllIn1VfxScrollShaderProperty_tAC8F7ED4CC8304DBB58E1B23A2D2CE13EA22E07E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::numericPropertyName
	String_t* ___numericPropertyName_4;
	// System.Single AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::scrollSpeed
	float ___scrollSpeed_5;
	// System.Boolean AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::backAndForth
	bool ___backAndForth_6;
	// System.Single AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::maxValue
	float ___maxValue_7;
	// System.Single AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::iniValue
	float ___iniValue_8;
	// System.Boolean AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::goingUp
	bool ___goingUp_9;
	// System.Boolean AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::applyModulo
	bool ___applyModulo_10;
	// System.Single AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::modulo
	float ___modulo_11;
	// System.Boolean AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::stopAtValue
	bool ___stopAtValue_12;
	// System.Single AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::stopValue
	float ___stopValue_13;
	// UnityEngine.Material AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_14;
	// UnityEngine.Material AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::originalMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___originalMat_15;
	// System.Boolean AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::restoreMaterialOnDisable
	bool ___restoreMaterialOnDisable_16;
	// System.Int32 AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::propertyShaderID
	int32_t ___propertyShaderID_17;
	// System.Single AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::currValue
	float ___currValue_18;
	// System.Boolean AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::isValid
	bool ___isValid_19;
};

// AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture
struct AllIn1VfxScrollShaderTexture_t0B1CA0D34AF4808EA9BA40B9CDBA558936EB3103  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::texturePropertyName
	String_t* ___texturePropertyName_4;
	// UnityEngine.Vector2 AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::scrollSpeed
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scrollSpeed_5;
	// System.Boolean AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::textureOffset
	bool ___textureOffset_6;
	// System.Boolean AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::backAndForth
	bool ___backAndForth_7;
	// UnityEngine.Vector2 AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::maxValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___maxValue_8;
	// UnityEngine.Vector2 AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::iniValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___iniValue_9;
	// System.Boolean AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::goingUpX
	bool ___goingUpX_10;
	// System.Boolean AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::goingUpY
	bool ___goingUpY_11;
	// System.Boolean AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::applyModulo
	bool ___applyModulo_12;
	// UnityEngine.Vector2 AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::modulo
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___modulo_13;
	// System.Boolean AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::stopAtValue
	bool ___stopAtValue_14;
	// UnityEngine.Vector2 AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::stopValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___stopValue_15;
	// UnityEngine.Material AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_16;
	// UnityEngine.Material AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::originalMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___originalMat_17;
	// System.Boolean AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::restoreMaterialOnDisable
	bool ___restoreMaterialOnDisable_18;
	// System.Int32 AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::propertyShaderID
	int32_t ___propertyShaderID_19;
	// UnityEngine.Vector2 AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::currValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___currValue_20;
	// System.Boolean AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::isValid
	bool ___isValid_21;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetFloat_m49458EDC57C2B431D765FE7414F18918AD619888 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___properties0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.AllIn1LookAt::LookAtCompute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1LookAt_LookAtCompute_m729D7D16E1394FB0818C7E6BCB3661828AFB608E (AllIn1LookAt_tDBAC078F7CE06BC8241E5429C930D8586A64D836* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_up(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_up_m1FBA5A97E5057747AC027AD5897EDE80A554D554 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_right(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_right_mBE8A7189FB1313A8B3E1E10EA538DED15D3E93DA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::SetMaterial(AllIn1VfxToolkit.AllIn1VfxComponent/AfterSetAction,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_SetMaterial_mD699A3146AF9BD36479E9242D82880218E43FAFD (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, int32_t ___action0, String_t* ___shaderName1, const RuntimeMethod* method) ;
// System.Boolean AllIn1VfxToolkit.AllIn1VfxComponent::FetchCurrentMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllIn1VfxComponent_FetchCurrentMaterial_m39F8AE40F3507E0BE6FAADA12ADA81C59718B026 (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Graphic>()
inline Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::MissingRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_MissingRenderer_mB023CB700C00CC98DFECD40F146C57164D16C77E (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33 (String_t* ___path0, Type_t* ___systemTypeInstance1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___source0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::DoAfterSetAction(AllIn1VfxToolkit.AllIn1VfxComponent/AfterSetAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_DoAfterSetAction_mE585EF484C1E4657FBAAF98041E7A2772829E727 (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, int32_t ___action0, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::SetSceneDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_SetSceneDirty_m9E6A673E9394C3A3B775625029362C9D996410EA (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::ClearAllKeywords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_ClearAllKeywords_m59BC37A1506BB4271456D76BF6E53597D2652F6E (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::CopyPropertiesFromMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_CopyPropertiesFromMaterial_m4148227E6A0B8E66315D8115F656B7F8BEAE915B (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat0, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::ResetAllProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_ResetAllProperties_m50ABAF51C59617C87828194552AA89EC998BAFB2 (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, String_t* ___shaderName0, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::CleanMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_CleanMaterial_mFAD12AF2EDBE22342D512879ABFF5F12D059BE78 (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::MakeNewMaterial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_MakeNewMaterial_m7C807638EC9C62D137C3881745E75AEC8F98A81D (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, String_t* ___shaderName0, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::SetKeyword(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2 (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, String_t* ___keyword0, bool ___state1, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::FindCurrMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_FindCurrMaterial_m6005E8C7A35C0F7F353D15BD4026AD790B609BCD (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::SaveMaterialWithOtherName(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_SaveMaterialWithOtherName_m813A30F3AC436425C72CAE067E4696DEBAEEAE32 (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, String_t* ___path0, int32_t ___i1, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::DoSaving(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_DoSaving_m936CEFF84DEAAA780F01E1774FD78018AB351FE7 (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, String_t* ___fileName0, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.AllIn1VfxFakeLightDirSetter::SetGlobalFakeLightDir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxFakeLightDirSetter_SetGlobalFakeLightDir_mC9E6091C093D3A23241CA19E45E032A889CB71B0 (AllIn1VfxFakeLightDirSetter_t2DF709DA0A4395452D0BF247C1D247B3722FCC06* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::SetGlobalVector(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalVector_mDC5F45B008D44A2C8BF6D450CFE8B58B847C8190 (int32_t ___nameID0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Random::InitState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random_InitState_mE70961834F42FFEEB06CB9C68175354E0C255664 (int32_t ___seed0, const RuntimeMethod* method) ;
// UnityEngine.Color AllIn1VfxToolkit.AllIn1VfxNoiseCreator::CalculatePerlinColor(System.Int32,System.Int32,System.Single,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F AllIn1VfxNoiseCreator_CalculatePerlinColor_m3675833D2D56F07A38F4B3FAE9493989B733D9F3 (int32_t ___x0, int32_t ___y1, float ___scale2, float ___offset3, int32_t ___width4, int32_t ___height5, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___x0, int32_t ___y1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colors0, const RuntimeMethod* method) ;
// UnityEngine.Color AllIn1VfxToolkit.AllIn1VfxNoiseCreator::PerlinBorderless(System.Int32,System.Int32,System.Single,System.Single,System.Int32,System.Int32,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F AllIn1VfxNoiseCreator_PerlinBorderless_m49ADBDE375DC489A6473ED11D71EAD34E771AC45 (int32_t ___x0, int32_t ___y1, float ___scale2, float ___offset3, int32_t ___width4, int32_t ___height5, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___previousPerlin6, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::PerlinNoise(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A (float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Texture2D::GetPixel(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::DestroyComponentAndLogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxScrollShaderProperty_DestroyComponentAndLogError_mE541EDF927CBB77AF92844EDB5F13BC99EE07A36 (AllIn1VfxScrollShaderProperty_tAC8F7ED4CC8304DBB58E1B23A2D2CE13EA22E07E* __this, String_t* ___logError0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Single UnityEngine.Material::GetFloat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_m52462F4AEDE20758BFB592B11DE83A79D2774932 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::FlipGoingUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxScrollShaderProperty_FlipGoingUp_m2E85C6CA803F28BD510C7D2B57F2C4FFF3D5F180 (AllIn1VfxScrollShaderProperty_tAC8F7ED4CC8304DBB58E1B23A2D2CE13EA22E07E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, float ___value1, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::DestroyComponentAndLogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxScrollShaderTexture_DestroyComponentAndLogError_m0FF3DD2B9CEEF6E92BB15E65DAC3E1F5546C3E6E (AllIn1VfxScrollShaderTexture_t0B1CA0D34AF4808EA9BA40B9CDBA558936EB3103* __this, String_t* ___logError0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Material::GetTextureOffset(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Material_GetTextureOffset_m4F9E2C96960DFE3C76B9D878F8E654D78185F9CA (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Material::GetTextureScale(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Material_GetTextureScale_mF3406F1439C275C25FEE0C4E19108B29AA77E693 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::FlipGoingUp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxScrollShaderTexture_FlipGoingUp_mAF1B7A83DBB3020A14A98614C591A410344AC793 (AllIn1VfxScrollShaderTexture_t0B1CA0D34AF4808EA9BA40B9CDBA558936EB3103* __this, bool ___isXComponent0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTextureOffset(System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureOffset_mB28E782AE9F9B4CB9D36F209C976F8A0FE7DF747 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTextureScale(System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureScale_mBA092A3DCD393695B32801FD05F70A8CC58CB89D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
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
// System.Void AllIn1VfxToolkit.All1VfxRandomTimeSeed::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1VfxRandomTimeSeed_Start_mDA15A7000478CFFD6A05A4682D8264A4C25EE08E (All1VfxRandomTimeSeed_t67A13258B2C46B1B81032BB643724405898B5B57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF6B5D4AFB7B21CFD9A2454BF9D1139B1B749D14);
		s_Il2CppMethodInitialized = true;
	}
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* V_0 = NULL;
	{
		// MaterialPropertyBlock properties = new MaterialPropertyBlock();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_0 = (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)il2cpp_codegen_object_new(MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB(L_0, NULL);
		V_0 = L_0;
		// properties.SetFloat("_TimingSeed", Random.Range(minSeedValue, maxSeedValue));
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_1 = V_0;
		float L_2 = __this->___minSeedValue_4;
		float L_3 = __this->___maxSeedValue_5;
		float L_4;
		L_4 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_2, L_3, NULL);
		NullCheck(L_1);
		MaterialPropertyBlock_SetFloat_m49458EDC57C2B431D765FE7414F18918AD619888(L_1, _stringLiteralCF6B5D4AFB7B21CFD9A2454BF9D1139B1B749D14, L_4, NULL);
		// GetComponent<Renderer>().SetPropertyBlock(properties);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5;
		L_5 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_6 = V_0;
		NullCheck(L_5);
		Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.All1VfxRandomTimeSeed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1VfxRandomTimeSeed__ctor_m7C1941EA9B48C2B65733D95234AFFCD643604CE2 (All1VfxRandomTimeSeed_t67A13258B2C46B1B81032BB643724405898B5B57* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float maxSeedValue = 100f;
		__this->___maxSeedValue_5 = (100.0f);
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
// System.Void AllIn1VfxToolkit.AllIn1LookAt::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1LookAt_Start_mCC8D994795CB43E68509E633B1815DB6537658F0 (AllIn1LookAt_tDBAC078F7CE06BC8241E5429C930D8586A64D836* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B20C68293E633F1FCCB3BBD64B19DD052F5ED87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral872DCAB5572E264E9E4EA514D7E835229090D6BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A5093C3D376CC1E1CC7EEF2F6A221406781623A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(targetIsMainCamera)
		bool L_0 = __this->___targetIsMainCamera_5;
		if (!L_0)
		{
			goto IL_0054;
		}
	}
	{
		// if(!(Camera.main is null)) target = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// if(!(Camera.main is null)) target = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		__this->___target_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_6), (void*)L_3);
	}

IL_001f:
	{
		// if(target == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___target_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0087;
		}
	}
	{
		// Debug.LogError("No main camera was found, AllIn1LookAt component of " + gameObject.name + " will now be destroyed. Please double check your setup");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral6B20C68293E633F1FCCB3BBD64B19DD052F5ED87, L_7, _stringLiteral9A5093C3D376CC1E1CC7EEF2F6A221406781623A, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_8, NULL);
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
		goto IL_0087;
	}

IL_0054:
	{
		// if(target == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___target_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0087;
		}
	}
	{
		// Debug.LogError("No target was assigned, AllIn1LookAt component of " + gameObject.name + " will now be destroyed. Please double check your setup");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral872DCAB5572E264E9E4EA514D7E835229090D6BC, L_12, _stringLiteral9A5093C3D376CC1E1CC7EEF2F6A221406781623A, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_13, NULL);
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
	}

IL_0087:
	{
		// if(!updateEveryFrame) LookAtCompute();
		bool L_14 = __this->___updateEveryFrame_4;
		if (L_14)
		{
			goto IL_0095;
		}
	}
	{
		// if(!updateEveryFrame) LookAtCompute();
		AllIn1LookAt_LookAtCompute_m729D7D16E1394FB0818C7E6BCB3661828AFB608E(__this, NULL);
	}

IL_0095:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1LookAt::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1LookAt_Update_m0A08D68C2DEBDBC9ADBFB2DDEDCE62BD0D8676F8 (AllIn1LookAt_tDBAC078F7CE06BC8241E5429C930D8586A64D836* __this, const RuntimeMethod* method) 
{
	{
		// if(updateEveryFrame) LookAtCompute();
		bool L_0 = __this->___updateEveryFrame_4;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if(updateEveryFrame) LookAtCompute();
		AllIn1LookAt_LookAtCompute_m729D7D16E1394FB0818C7E6BCB3661828AFB608E(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1LookAt::LookAtCompute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1LookAt_LookAtCompute_m729D7D16E1394FB0818C7E6BCB3661828AFB608E (AllIn1LookAt_tDBAC078F7CE06BC8241E5429C930D8586A64D836* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// Vector3 lookAtVector = (target.position - transform.position).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_6;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_3, NULL);
		V_1 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		V_0 = L_5;
		// if(negateDirection) lookAtVector = -lookAtVector;
		bool L_6 = __this->___negateDirection_8;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// if(negateDirection) lookAtVector = -lookAtVector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_7, NULL);
		V_0 = L_8;
	}

IL_0033:
	{
		// switch(faceDirection)
		int32_t L_9 = __this->___faceDirection_7;
		V_2 = L_9;
		int32_t L_10 = V_2;
		switch (L_10)
		{
			case 0:
			{
				goto IL_004d;
			}
			case 1:
			{
				goto IL_005a;
			}
			case 2:
			{
				goto IL_0067;
			}
		}
	}
	{
		return;
	}

IL_004d:
	{
		// transform.forward = lookAtVector;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		NullCheck(L_11);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_11, L_12, NULL);
		// break;
		return;
	}

IL_005a:
	{
		// transform.up = lookAtVector;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		NullCheck(L_13);
		Transform_set_up_m1FBA5A97E5057747AC027AD5897EDE80A554D554(L_13, L_14, NULL);
		// break;
		return;
	}

IL_0067:
	{
		// transform.right = lookAtVector;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		NullCheck(L_15);
		Transform_set_right_mBE8A7189FB1313A8B3E1E10EA538DED15D3E93DA(L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1LookAt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1LookAt__ctor_mF02E6C137CA1BC8C258B7C14A30B8C66F158369A (AllIn1LookAt_tDBAC078F7CE06BC8241E5429C930D8586A64D836* __this, const RuntimeMethod* method) 
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
// System.Void AllIn1VfxToolkit.AllIn1ParticleHelperComponent::SetSceneDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1ParticleHelperComponent_SetSceneDirty_mA8C50FFDA9C4CCE517E1FF13921E34A61554D0FD (AllIn1ParticleHelperComponent_tDFD2B3E7E4BE678952CD673F473DBEFEA569C0BB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1ParticleHelperComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1ParticleHelperComponent__ctor_m68AF57BA2F4F0E580F068414810D768F0F7FC368 (AllIn1ParticleHelperComponent_tDFD2B3E7E4BE678952CD673F473DBEFEA569C0BB* __this, const RuntimeMethod* method) 
{
	{
		// public int numberOfCopies = 1;
		__this->___numberOfCopies_12 = 1;
		// public bool applyEverythingOnChange = true;
		__this->___applyEverythingOnChange_13 = (bool)1;
		// public float minLifetime = 5f, maxLifetime = 5f;
		__this->___minLifetime_16 = (5.0f);
		// public float minLifetime = 5f, maxLifetime = 5f;
		__this->___maxLifetime_17 = (5.0f);
		// public float minSpeed = 5f, maxSpeed = 5f;
		__this->___minSpeed_18 = (5.0f);
		// public float minSpeed = 5f, maxSpeed = 5f;
		__this->___maxSpeed_19 = (5.0f);
		// public float minSize = 1f, maxSize = 1f;
		__this->___minSize_20 = (1.0f);
		// public float minSize = 1f, maxSize = 1f;
		__this->___maxSize_21 = (1.0f);
		// public int minNumberOfParticles = 10, maxNumberOfParticles = 10;
		__this->___minNumberOfParticles_24 = ((int32_t)10);
		// public int minNumberOfParticles = 10, maxNumberOfParticles = 10;
		__this->___maxNumberOfParticles_25 = ((int32_t)10);
		// public LifetimeSettings colorLifetime = LifetimeSettings.None;
		__this->___colorLifetime_27 = 2;
		// public LifetimeSettings sizeLifetime = LifetimeSettings.None;
		__this->___sizeLifetime_28 = 2;
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
// System.Void AllIn1VfxToolkit.AllIn1ParticleHelperSO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1ParticleHelperSO__ctor_m9AEBFEDE1FCCE704444E3C59C7C7A3D344601DD8 (AllIn1ParticleHelperSO_tB1703DA97F077A501D1897ACE6C5AEE88C4A8061* __this, const RuntimeMethod* method) 
{
	{
		// public float minLifetime = 5f, maxLifetime = 5f;
		__this->___minLifetime_6 = (5.0f);
		// public float minLifetime = 5f, maxLifetime = 5f;
		__this->___maxLifetime_7 = (5.0f);
		// public float minSpeed = 5f, maxSpeed = 5f;
		__this->___minSpeed_8 = (5.0f);
		// public float minSpeed = 5f, maxSpeed = 5f;
		__this->___maxSpeed_9 = (5.0f);
		// public float minSize = 1f, maxSize = 1f;
		__this->___minSize_10 = (1.0f);
		// public float minSize = 1f, maxSize = 1f;
		__this->___maxSize_11 = (1.0f);
		// public int minNumberOfParticles = 10, maxNumberOfParticles = 10;
		__this->___minNumberOfParticles_14 = ((int32_t)10);
		// public int minNumberOfParticles = 10, maxNumberOfParticles = 10;
		__this->___maxNumberOfParticles_15 = ((int32_t)10);
		// public AllIn1ParticleHelperComponent.LifetimeSettings colorLifetime = AllIn1ParticleHelperComponent.LifetimeSettings.Descendent;
		__this->___colorLifetime_17 = 1;
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
// System.Void AllIn1VfxToolkit.AllIn1VfxBounceAnimation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxBounceAnimation_Start_m6980DB7335C5A381ED59D3098EF626C0FD242503 (AllIn1VfxBounceAnimation_tCE51755C53049903743EC707AADB9B8B0019D86E* __this, const RuntimeMethod* method) 
{
	{
		// startPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___startPosition_6 = L_1;
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxBounceAnimation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxBounceAnimation_Update_mD47D1739EF4F7267CCE4E33B575AC9E498149727 (AllIn1VfxBounceAnimation_tCE51755C53049903743EC707AADB9B8B0019D86E* __this, const RuntimeMethod* method) 
{
	{
		// animationMovementVector = targetOffset * ((Mathf.Sin(Time.time * speed) + 1f) / 2f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___targetOffset_4;
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_2 = __this->___speed_5;
		float L_3;
		L_3 = sinf(((float)il2cpp_codegen_multiply(L_1, L_2)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, ((float)(((float)il2cpp_codegen_add(L_3, (1.0f)))/(2.0f))), NULL);
		__this->___animationMovementVector_7 = L_4;
		// transform.position = startPosition + animationMovementVector;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___startPosition_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___animationMovementVector_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_7, NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_8, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxBounceAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxBounceAnimation__ctor_m4F526F9FB3184ECC0EAC866948AE87859C2767C7 (AllIn1VfxBounceAnimation_tCE51755C53049903743EC707AADB9B8B0019D86E* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private Vector3 targetOffset = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		__this->___targetOffset_4 = L_0;
		// [SerializeField] private float speed = 1f;
		__this->___speed_5 = (1.0f);
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
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::MakeNewMaterial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_MakeNewMaterial_m7C807638EC9C62D137C3881745E75AEC8F98A81D (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, String_t* ___shaderName0, const RuntimeMethod* method) 
{
	{
		// SetMaterial(AfterSetAction.Clear, shaderName);
		String_t* L_0 = ___shaderName0;
		AllIn1VfxComponent_SetMaterial_mD699A3146AF9BD36479E9242D82880218E43FAFD(__this, 0, L_0, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::MakeCopy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_MakeCopy_m5E8E4DB90105190135CDDF674BFDAE0B449ED8EB (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE902BD3933F71AD381D3042D88DF18342E37C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if(currMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___currMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if(FetchCurrentMaterial()) return;
		bool L_2;
		L_2 = AllIn1VfxComponent_FetchCurrentMaterial_m39F8AE40F3507E0BE6FAADA12ADA81C59718B026(__this, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// if(FetchCurrentMaterial()) return;
		return;
	}

IL_0017:
	{
		// string shaderName = currMaterial.shader.name;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___currMaterial_4;
		NullCheck(L_3);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4;
		L_4 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		V_0 = L_5;
		// if(shaderName.Contains("AllIn1Vfx/")) shaderName = shaderName.Replace("AllIn1Vfx/", "");
		String_t* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_6, _stringLiteral9CE902BD3933F71AD381D3042D88DF18342E37C4, NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// if(shaderName.Contains("AllIn1Vfx/")) shaderName = shaderName.Replace("AllIn1Vfx/", "");
		String_t* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_8, _stringLiteral9CE902BD3933F71AD381D3042D88DF18342E37C4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_0 = L_9;
	}

IL_0046:
	{
		// SetMaterial(AfterSetAction.CopyMaterial, shaderName);
		String_t* L_10 = V_0;
		AllIn1VfxComponent_SetMaterial_mD699A3146AF9BD36479E9242D82880218E43FAFD(__this, 1, L_10, NULL);
		// }
		return;
	}
}
// System.Boolean AllIn1VfxToolkit.AllIn1VfxComponent::FetchCurrentMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllIn1VfxComponent_FetchCurrentMaterial_m39F8AE40F3507E0BE6FAADA12ADA81C59718B026 (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_1 = NULL;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* V_2 = NULL;
	{
		// bool rendererExists = false;
		V_0 = (bool)0;
		// Renderer sr = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_1 = L_0;
		// if(sr != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// rendererExists = true;
		V_0 = (bool)1;
		// currMaterial = sr.sharedMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = V_1;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_3, NULL);
		__this->___currMaterial_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currMaterial_4), (void*)L_4);
		goto IL_0040;
	}

IL_0022:
	{
		// Graphic img = GetComponent<Graphic>();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_5;
		L_5 = Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90(__this, Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		V_2 = L_5;
		// if(img != null)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_6 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		// rendererExists = true;
		V_0 = (bool)1;
		// currMaterial = img.material;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_8 = V_2;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_8);
		__this->___currMaterial_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currMaterial_4), (void*)L_9);
	}

IL_0040:
	{
		// if(!rendererExists)
		bool L_10 = V_0;
		if (L_10)
		{
			goto IL_004b;
		}
	}
	{
		// MissingRenderer();
		AllIn1VfxComponent_MissingRenderer_mB023CB700C00CC98DFECD40F146C57164D16C77E(__this, NULL);
		// return true;
		return (bool)1;
	}

IL_004b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::ResetAllProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_ResetAllProperties_m50ABAF51C59617C87828194552AA89EC998BAFB2 (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, String_t* ___shaderName0, const RuntimeMethod* method) 
{
	{
		// SetMaterial(AfterSetAction.Reset, shaderName);
		String_t* L_0 = ___shaderName0;
		AllIn1VfxComponent_SetMaterial_mD699A3146AF9BD36479E9242D82880218E43FAFD(__this, 2, L_0, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::SetMaterial(AllIn1VfxToolkit.AllIn1VfxComponent/AfterSetAction,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_SetMaterial_mD699A3146AF9BD36479E9242D82880218E43FAFD (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, int32_t ___action0, String_t* ___shaderName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral083BBDE4DA923F689C1CF133A399ABCA89D99017);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	bool V_1 = false;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* V_2 = NULL;
	{
		// Shader allIn1VfxShader = Resources.Load(shaderName, typeof(Shader)) as Shader;
		String_t* L_0 = ___shaderName1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33(L_0, L_2, NULL);
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)IsInstSealed((RuntimeObject*)L_3, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		// if(!Application.isPlaying && Application.isEditor && allIn1VfxShader != null)
		bool L_4;
		L_4 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_4)
		{
			goto IL_0102;
		}
	}
	{
		bool L_5;
		L_5 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (!L_5)
		{
			goto IL_0102;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0102;
		}
	}
	{
		// bool rendererExists = false;
		V_1 = (bool)0;
		// Renderer sr = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8;
		L_8 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		// if(sr != null)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_009c;
		}
	}
	{
		// rendererExists = true;
		V_1 = (bool)1;
		// prevMaterial = new Material(GetComponent<Renderer>().sharedMaterial);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_10;
		L_10 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_10);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_10, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_12, L_11, NULL);
		__this->___prevMaterial_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prevMaterial_5), (void*)L_12);
		// currMaterial = new Material(allIn1VfxShader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_14, L_13, NULL);
		__this->___currMaterial_4 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currMaterial_4), (void*)L_14);
		// GetComponent<Renderer>().sharedMaterial = currMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_15;
		L_15 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___currMaterial_4;
		NullCheck(L_15);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_15, L_16, NULL);
		// GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_17;
		L_17 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_17);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18;
		L_18 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_17, NULL);
		NullCheck(L_18);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_18, 0, NULL);
		// matAssigned = true;
		__this->___matAssigned_6 = (bool)1;
		// DoAfterSetAction(action);
		int32_t L_19 = ___action0;
		AllIn1VfxComponent_DoAfterSetAction_mE585EF484C1E4657FBAAF98041E7A2772829E727(__this, L_19, NULL);
		goto IL_00f1;
	}

IL_009c:
	{
		// Graphic img = GetComponent<Graphic>();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_20;
		L_20 = Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90(__this, Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		V_2 = L_20;
		// if(img != null)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_21 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_00f1;
		}
	}
	{
		// rendererExists = true;
		V_1 = (bool)1;
		// prevMaterial = new Material(img.material);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_23 = V_2;
		NullCheck(L_23);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24;
		L_24 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_23);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_25, L_24, NULL);
		__this->___prevMaterial_5 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prevMaterial_5), (void*)L_25);
		// currMaterial = new Material(allIn1VfxShader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_26 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_27, L_26, NULL);
		__this->___currMaterial_4 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currMaterial_4), (void*)L_27);
		// img.material = currMaterial;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_28 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___currMaterial_4;
		NullCheck(L_28);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_28, L_29);
		// img.material.hideFlags = HideFlags.None;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_30 = V_2;
		NullCheck(L_30);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31;
		L_31 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_30);
		NullCheck(L_31);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_31, 0, NULL);
		// matAssigned = true;
		__this->___matAssigned_6 = (bool)1;
		// DoAfterSetAction(action);
		int32_t L_32 = ___action0;
		AllIn1VfxComponent_DoAfterSetAction_mE585EF484C1E4657FBAAF98041E7A2772829E727(__this, L_32, NULL);
	}

IL_00f1:
	{
		// if(!rendererExists)
		bool L_33 = V_1;
		if (L_33)
		{
			goto IL_00fb;
		}
	}
	{
		// MissingRenderer();
		AllIn1VfxComponent_MissingRenderer_mB023CB700C00CC98DFECD40F146C57164D16C77E(__this, NULL);
		// return;
		return;
	}

IL_00fb:
	{
		// SetSceneDirty();
		AllIn1VfxComponent_SetSceneDirty_m9E6A673E9394C3A3B775625029362C9D996410EA(__this, NULL);
		return;
	}

IL_0102:
	{
		// else if(allIn1VfxShader == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_34 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_34, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_35)
		{
			goto IL_011b;
		}
	}
	{
		// Debug.LogError(
		//     "Make sure the AllIn1Vfx shader variants are inside the Resource folder!   You looked for " +
		//     shaderName);
		String_t* L_36 = ___shaderName1;
		String_t* L_37;
		L_37 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral083BBDE4DA923F689C1CF133A399ABCA89D99017, L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_37, NULL);
	}

IL_011b:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::DoAfterSetAction(AllIn1VfxToolkit.AllIn1VfxComponent/AfterSetAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_DoAfterSetAction_mE585EF484C1E4657FBAAF98041E7A2772829E727 (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, int32_t ___action0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___action0;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___action0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_0008:
	{
		// ClearAllKeywords();
		AllIn1VfxComponent_ClearAllKeywords_m59BC37A1506BB4271456D76BF6E53597D2652F6E(__this, NULL);
		// break;
		return;
	}

IL_000f:
	{
		// currMaterial.CopyPropertiesFromMaterial(prevMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___currMaterial_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___prevMaterial_5;
		NullCheck(L_2);
		Material_CopyPropertiesFromMaterial_m4148227E6A0B8E66315D8115F656B7F8BEAE915B(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::TryCreateNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_TryCreateNew_mD91847C8E3A67C7DDAC68975332BCB016DAA18B0 (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC76190ED0C48EB995A11E863941095B1AA26B582);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEE91F51A391C3F771D9B2463C388312AA8DA8CF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_1 = NULL;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* V_2 = NULL;
	{
		// bool rendererExists = false;
		V_0 = (bool)0;
		// Renderer sr = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_1 = L_0;
		// if(sr != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_006d;
		}
	}
	{
		// rendererExists = true;
		V_0 = (bool)1;
		// if(sr != null && sr.sharedMaterial != null && sr.sharedMaterial.shader.name.Contains("Vfx"))
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_005a;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = V_1;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8 = V_1;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		NullCheck(L_9);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10;
		L_10 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_11, _stringLiteralC76190ED0C48EB995A11E863941095B1AA26B582, NULL);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		// ResetAllProperties("AllIn1Vfx");
		AllIn1VfxComponent_ResetAllProperties_m50ABAF51C59617C87828194552AA89EC998BAFB2(__this, _stringLiteralCEE91F51A391C3F771D9B2463C388312AA8DA8CF, NULL);
		// ClearAllKeywords();
		AllIn1VfxComponent_ClearAllKeywords_m59BC37A1506BB4271456D76BF6E53597D2652F6E(__this, NULL);
		goto IL_00b9;
	}

IL_005a:
	{
		// CleanMaterial();
		AllIn1VfxComponent_CleanMaterial_mFAD12AF2EDBE22342D512879ABFF5F12D059BE78(__this, NULL);
		// MakeNewMaterial("AllIn1Vfx");
		AllIn1VfxComponent_MakeNewMaterial_m7C807638EC9C62D137C3881745E75AEC8F98A81D(__this, _stringLiteralCEE91F51A391C3F771D9B2463C388312AA8DA8CF, NULL);
		goto IL_00b9;
	}

IL_006d:
	{
		// Graphic img = GetComponent<Graphic>();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_13;
		L_13 = Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90(__this, Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		V_2 = L_13;
		// if(img != null)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_14 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00b9;
		}
	}
	{
		// rendererExists = true;
		V_0 = (bool)1;
		// if(img.material.shader.name.Contains("Vfx"))
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_16 = V_2;
		NullCheck(L_16);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17;
		L_17 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_16);
		NullCheck(L_17);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_18;
		L_18 = Material_get_shader_m8B0C11AE6F2AD7DE30AF52D3195EB716F7A71983(L_17, NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_18, NULL);
		NullCheck(L_19);
		bool L_20;
		L_20 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_19, _stringLiteralC76190ED0C48EB995A11E863941095B1AA26B582, NULL);
		if (!L_20)
		{
			goto IL_00ae;
		}
	}
	{
		// ResetAllProperties("AllIn1Vfx");
		AllIn1VfxComponent_ResetAllProperties_m50ABAF51C59617C87828194552AA89EC998BAFB2(__this, _stringLiteralCEE91F51A391C3F771D9B2463C388312AA8DA8CF, NULL);
		// ClearAllKeywords();
		AllIn1VfxComponent_ClearAllKeywords_m59BC37A1506BB4271456D76BF6E53597D2652F6E(__this, NULL);
		goto IL_00b9;
	}

IL_00ae:
	{
		// else MakeNewMaterial("AllIn1Vfx");
		AllIn1VfxComponent_MakeNewMaterial_m7C807638EC9C62D137C3881745E75AEC8F98A81D(__this, _stringLiteralCEE91F51A391C3F771D9B2463C388312AA8DA8CF, NULL);
	}

IL_00b9:
	{
		// if(!rendererExists)
		bool L_21 = V_0;
		if (L_21)
		{
			goto IL_00c2;
		}
	}
	{
		// MissingRenderer();
		AllIn1VfxComponent_MissingRenderer_mB023CB700C00CC98DFECD40F146C57164D16C77E(__this, NULL);
	}

IL_00c2:
	{
		// SetSceneDirty();
		AllIn1VfxComponent_SetSceneDirty_m9E6A673E9394C3A3B775625029362C9D996410EA(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::ClearAllKeywords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_ClearAllKeywords_m59BC37A1506BB4271456D76BF6E53597D2652F6E (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0023D6A9F7F3B566DFB2EFA5BE5820D9509D681E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0299CC5F40C577F300BB29854CBAAD8B68ABF5A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0401A6C1F7012C721901C937730CA854AED44F14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral040793655BC228982AF83F2DE9C015C189306364);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1340C6E5B2B210689A25CF2270555B16E1489106);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14D479CBF77090A6D30F543484D1D50B87795337);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral158697E57921300501C71DFA8626FCAE1F8FD030);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral185035D897E40E37CE218ED2FFA2B3FD8F8F8F22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E1912CAB55AF7DEF1C5B72F955FFFBCB9884AB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E74A2EC3C4B69C55D0D1B56F81D53F03FC58D57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F3FA2011635BA3ADF04F3A6636CEA5D2D14EF88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34AD56288A03AA8D7B7BE17E549C5FB602F9E885);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C1DB6BCE7F7EC4956D0CD51C602C4B9D94DE193);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F868CB06E969FC20ED35E84ACC75C8E94BE5789);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40728BBCE4EE91640605FACC63DB3CEC63B83B80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4696BEB1B4DD525F1293813D16EC3A02B2B12251);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A68E99ECA06FD65FDFD5FCD7FECC5839F4C0DBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AA79340AA7669BF821B747B748410DB52DA3261);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C68DEA8F259A907A0498E34875D1BD0A6CED03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5398DC3D4FFCD34741F382F596A262B6FA2922AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral561612A9F818B42EF04003F9D6952E8EC5D027ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5904389432FCA9BFEA539A8A22DDC0BD69F94F04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A02191D32DC069B431D3E54FF28CEC7767178DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CE72404582BDAE77C15BF3F30FEFFD1A81D8F8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D5BF7644F6756216DBAE69270F57FE11BEAE972);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F61F506633DBCEB100F2CA993128F6DC6A9C618);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral638A6BF6390D12422CAC4910C95F16CFBCE6D50B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6677C73BF64E77B045EA94D2AA385D7540F0A39D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6757D44A85F13AA2863BDC7DCEF5E30BC21278BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7281FF2F619273B6F998E3D3DCA0CFAF23CCFAD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72A7CAD40240F38905C2C0E1E50F4449AD82AEAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral757FDB668BCAADD3B45A3175E6AC8EBACA3EEB65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76264918B150B6FD44125E9CE7F711A3689B9700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79BCB0C2B8C16448AD04D20C4925CF363A67BAA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D2ED17259CF0DC4179D682E4471BF85B5574BBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DDFF290B24173A5DC1BC9BC22C9322BB36CFC10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89115C0E93F9302CD0B8CD7BB21C410B6162644D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DED3C670AB3C2E5A20C926F89F96926BE24AC79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92274FFFE307A7AA40F70ECBD38BB73705AC9E5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94BD673B8551A4C6D6A807ED9D7A6C37D921072F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94F92EDABB0744C4E72E030B935FEC2580C8A614);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral954CC189A0FC8B78E623F527148C0981714376AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99117A43311619936587FBCABCC9B16B687AB302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ABAD8FF849D104EA8DB7481A66BB4B9FD7143A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA27C6266A902DDCC5C73F82BEBBBDF1C87CCFFFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA66067A208E75497516342A152D58B32B1C89075);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87819C2031146742C1F5350BC509988DACBE9F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAE3A15202D762AC5E5D99D35460A3E2C88307E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1D928ABA3C2555CCA12F60991D28C7F5A0E200E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8649C06FE9FBAB8E997CBD8796167F6283CAB2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCBD8C7003675066255066C8241D1DCB43737145);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1321093811095513C44D23E1503BACF248356F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3A9DE289B76C73BE63D02B5A01D7C45B656AD49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC879E94E49560F1B236BDF1611C5EC619EA5B93F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE96480BEB47650A1397787D142CB9736546564);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD01835DFD9412FEB7AA45A9F2E69029F2B71B936);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD34B357F606D69B3A243155329F7C26E9ED9B03B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD678A75C242A16DA78744D87F52BD6BA550F95C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC639E8CFF8B48439F2DC546D026EE8EAB89718B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8B1F4E65A0B35AB6619D979A27DD1766DEB7039);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFF7EFBB29A0F779F9CF65D30804B3D60468618E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4B62A69FCAFBA03A81C4FD2F7CF77104D7CB48D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD3081C211F1405167EBF5BDD775516383D38F4F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetKeyword("FOG_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral34AD56288A03AA8D7B7BE17E549C5FB602F9E885, (bool)0, NULL);
		// SetKeyword("SCREENDISTORTION_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral72A7CAD40240F38905C2C0E1E50F4449AD82AEAB, (bool)0, NULL);
		// SetKeyword("DISTORTUSECOL_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral1340C6E5B2B210689A25CF2270555B16E1489106, (bool)0, NULL);
		// SetKeyword("DISTORTONLYBACK_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteralC879E94E49560F1B236BDF1611C5EC619EA5B93F, (bool)0, NULL);
		// SetKeyword("SHAPE1SCREENUV_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral2F3FA2011635BA3ADF04F3A6636CEA5D2D14EF88, (bool)0, NULL);
		// SetKeyword("SHAPE2SCREENUV_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral185035D897E40E37CE218ED2FFA2B3FD8F8F8F22, (bool)0, NULL);
		// SetKeyword("SHAPE3SCREENUV_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral5D5BF7644F6756216DBAE69270F57FE11BEAE972, (bool)0, NULL);
		// SetKeyword("SHAPEDEBUG_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral0401A6C1F7012C721901C937730CA854AED44F14, (bool)0, NULL);
		// SetKeyword("SHAPE1CONTRAST_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral5CE72404582BDAE77C15BF3F30FEFFD1A81D8F8C, (bool)0, NULL);
		// SetKeyword("SHAPE1DISTORT_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral94F92EDABB0744C4E72E030B935FEC2580C8A614, (bool)0, NULL);
		// SetKeyword("SHAPE1ROTATE_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral76264918B150B6FD44125E9CE7F711A3689B9700, (bool)0, NULL);
		// SetKeyword("SHAPE1SHAPECOLOR_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral040793655BC228982AF83F2DE9C015C189306364, (bool)0, NULL);
		// SetKeyword("SHAPE2_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteralCBE96480BEB47650A1397787D142CB9736546564, (bool)0, NULL);
		// SetKeyword("SHAPE2CONTRAST_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral4AA79340AA7669BF821B747B748410DB52DA3261, (bool)0, NULL);
		// SetKeyword("SHAPE2DISTORT_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral14D479CBF77090A6D30F543484D1D50B87795337, (bool)0, NULL);
		// SetKeyword("SHAPE2ROTATE_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral8DED3C670AB3C2E5A20C926F89F96926BE24AC79, (bool)0, NULL);
		// SetKeyword("SHAPE2SHAPECOLOR_");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral94BD673B8551A4C6D6A807ED9D7A6C37D921072F, (bool)0, NULL);
		// SetKeyword("SHAPE3_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral7DDFF290B24173A5DC1BC9BC22C9322BB36CFC10, (bool)0, NULL);
		// SetKeyword("SHAPE3CONTRAST_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteralF4B62A69FCAFBA03A81C4FD2F7CF77104D7CB48D, (bool)0, NULL);
		// SetKeyword("SHAPE3DISTORT_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral51C68DEA8F259A907A0498E34875D1BD0A6CED03, (bool)0, NULL);
		// SetKeyword("SHAPE3ROTATE_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteralDC639E8CFF8B48439F2DC546D026EE8EAB89718B, (bool)0, NULL);
		// SetKeyword("SHAPE3SHAPECOLOR_");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteralA27C6266A902DDCC5C73F82BEBBBDF1C87CCFFFA, (bool)0, NULL);
		// SetKeyword("GLOW_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteralA87819C2031146742C1F5350BC509988DACBE9F9, (bool)0, NULL);
		// SetKeyword("GLOWTEX_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteralB8649C06FE9FBAB8E997CBD8796167F6283CAB2C, (bool)0, NULL);
		// SetKeyword("SOFTPART_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteralB1D928ABA3C2555CCA12F60991D28C7F5A0E200E, (bool)0, NULL);
		// SetKeyword("DEPTHGLOW_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteralD01835DFD9412FEB7AA45A9F2E69029F2B71B936, (bool)0, NULL);
		// SetKeyword("MASK_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral954CC189A0FC8B78E623F527148C0981714376AC, (bool)0, NULL);
		// SetKeyword("COLORRAMP_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral9ABAD8FF849D104EA8DB7481A66BB4B9FD7143A2, (bool)0, NULL);
		// SetKeyword("COLORRAMPGRAD_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral89115C0E93F9302CD0B8CD7BB21C410B6162644D, (bool)0, NULL);
		// SetKeyword("COLORGRADING_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteralFD3081C211F1405167EBF5BDD775516383D38F4F, (bool)0, NULL);
		// SetKeyword("HSV_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral158697E57921300501C71DFA8626FCAE1F8FD030, (bool)0, NULL);
		// SetKeyword("BLUR_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral4696BEB1B4DD525F1293813D16EC3A02B2B12251, (bool)0, NULL);
		// SetKeyword("BLURISHD_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral0023D6A9F7F3B566DFB2EFA5BE5820D9509D681E, (bool)0, NULL);
		// SetKeyword("POSTERIZE_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral99117A43311619936587FBCABCC9B16B687AB302, (bool)0, NULL);
		// SetKeyword("FADE_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral1E74A2EC3C4B69C55D0D1B56F81D53F03FC58D57, (bool)0, NULL);
		// SetKeyword("FADEBURN_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral6757D44A85F13AA2863BDC7DCEF5E30BC21278BD, (bool)0, NULL);
		// SetKeyword("PIXELATE_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral5398DC3D4FFCD34741F382F596A262B6FA2922AC, (bool)0, NULL);
		// SetKeyword("DISTORT_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteralE8B1F4E65A0B35AB6619D979A27DD1766DEB7039, (bool)0, NULL);
		// SetKeyword("SHAKEUV_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteralBCBD8C7003675066255066C8241D1DCB43737145, (bool)0, NULL);
		// SetKeyword("WAVEUV_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral7281FF2F619273B6F998E3D3DCA0CFAF23CCFAD2, (bool)0, NULL);
		// SetKeyword("ROUNDWAVEUV_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral6677C73BF64E77B045EA94D2AA385D7540F0A39D, (bool)0, NULL);
		// SetKeyword("TWISTUV_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral0299CC5F40C577F300BB29854CBAAD8B68ABF5A0, (bool)0, NULL);
		// SetKeyword("DOODLE_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral4A68E99ECA06FD65FDFD5FCD7FECC5839F4C0DBC, (bool)0, NULL);
		// SetKeyword("OFFSETSTREAM_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral757FDB668BCAADD3B45A3175E6AC8EBACA3EEB65, (bool)0, NULL);
		// SetKeyword("TEXTURESCROLL_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral638A6BF6390D12422CAC4910C95F16CFBCE6D50B, (bool)0, NULL);
		// SetKeyword("VERTOFFSET_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteralA66067A208E75497516342A152D58B32B1C89075, (bool)0, NULL);
		// SetKeyword("RIM_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral92274FFFE307A7AA40F70ECBD38BB73705AC9E5B, (bool)0, NULL);
		// SetKeyword("BACKFACETINT_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral3C1DB6BCE7F7EC4956D0CD51C602C4B9D94DE193, (bool)0, NULL);
		// SetKeyword("POLARUV_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral3F868CB06E969FC20ED35E84ACC75C8E94BE5789, (bool)0, NULL);
		// SetKeyword("POLARUVDISTORT_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral7D2ED17259CF0DC4179D682E4471BF85B5574BBA, (bool)0, NULL);
		// SetKeyword("SHAPE1MASK_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral5A02191D32DC069B431D3E54FF28CEC7767178DB, (bool)0, NULL);
		// SetKeyword("TRAILWIDTH_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral5F61F506633DBCEB100F2CA993128F6DC6A9C618, (bool)0, NULL);
		// SetKeyword("LIGHTANDSHADOW_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteralD34B357F606D69B3A243155329F7C26E9ED9B03B, (bool)0, NULL);
		// SetKeyword("SHAPETEXOFFSET_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral5904389432FCA9BFEA539A8A22DDC0BD69F94F04, (bool)0, NULL);
		// SetKeyword("SHAPEWEIGHTS_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral561612A9F818B42EF04003F9D6952E8EC5D027ED, (bool)0, NULL);
		// SetKeyword("ALPHACUTOFF_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteralD678A75C242A16DA78744D87F52BD6BA550F95C4, (bool)0, NULL);
		// SetKeyword("ALPHASMOOTHSTEP_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteralAAE3A15202D762AC5E5D99D35460A3E2C88307E1, (bool)0, NULL);
		// SetKeyword("ALPHAFADE_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral79BCB0C2B8C16448AD04D20C4925CF363A67BAA9, (bool)0, NULL);
		// SetKeyword("ALPHAFADEUSESHAPE1_");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral40728BBCE4EE91640605FACC63DB3CEC63B83B80, (bool)0, NULL);
		// SetKeyword("ALPHAFADEUSEREDCHAN");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteralEFF7EFBB29A0F779F9CF65D30804B3D60468618E, (bool)0, NULL);
		// SetKeyword("ALPHAFADETRANSPAREN");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteralC3A9DE289B76C73BE63D02B5A01D7C45B656AD49, (bool)0, NULL);
		// SetKeyword("ALPHAFADEINPUTSTREA");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteral1E1912CAB55AF7DEF1C5B72F955FFFBCB9884AB5, (bool)0, NULL);
		// SetKeyword("CAMDISTFADE_ON");
		AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2(__this, _stringLiteralC1321093811095513C44D23E1503BACF248356F0, (bool)0, NULL);
		// SetSceneDirty();
		AllIn1VfxComponent_SetSceneDirty_m9E6A673E9394C3A3B775625029362C9D996410EA(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::SetKeyword(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_SetKeyword_m95EC164255D1EA16944BE4564EFE7730F9864BF2 (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, String_t* ___keyword0, bool ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(destroyed) return;
		bool L_0 = __this->___destroyed_7;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if(destroyed) return;
		return;
	}

IL_0009:
	{
		// if(currMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___currMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// FindCurrMaterial();
		AllIn1VfxComponent_FindCurrMaterial_m6005E8C7A35C0F7F353D15BD4026AD790B609BCD(__this, NULL);
		// if(currMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___currMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// MissingRenderer();
		AllIn1VfxComponent_MissingRenderer_mB023CB700C00CC98DFECD40F146C57164D16C77E(__this, NULL);
		// return;
		return;
	}

IL_0032:
	{
		// if(!state) currMaterial.DisableKeyword(keyword);
		bool L_5 = ___state1;
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		// if(!state) currMaterial.DisableKeyword(keyword);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___currMaterial_4;
		String_t* L_7 = ___keyword0;
		NullCheck(L_6);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_6, L_7, NULL);
		return;
	}

IL_0042:
	{
		// else currMaterial.EnableKeyword(keyword);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___currMaterial_4;
		String_t* L_9 = ___keyword0;
		NullCheck(L_8);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::FindCurrMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_FindCurrMaterial_m6005E8C7A35C0F7F353D15BD4026AD790B609BCD (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* V_0 = NULL;
	{
		// Renderer sr = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		// if(sr != null)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// currMaterial = GetComponent<Renderer>().sharedMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2;
		L_2 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_2, NULL);
		__this->___currMaterial_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currMaterial_4), (void*)L_3);
		// matAssigned = true;
		__this->___matAssigned_6 = (bool)1;
		return;
	}

IL_0027:
	{
		// Graphic img = GetComponent<Graphic>();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_4;
		L_4 = Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90(__this, Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		V_0 = L_4;
		// if(img != null)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		// currMaterial = img.material;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_7 = V_0;
		NullCheck(L_7);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8;
		L_8 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_7);
		__this->___currMaterial_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currMaterial_4), (void*)L_8);
		// matAssigned = true;
		__this->___matAssigned_6 = (bool)1;
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::CleanMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_CleanMaterial_mFAD12AF2EDBE22342D512879ABFF5F12D059BE78 (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_0 = NULL;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* V_1 = NULL;
	{
		// Renderer sr = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_0 = L_0;
		// if(sr != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// sr.sharedMaterial = new Material(Shader.Find("Sprites/Default"));
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = V_0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4;
		L_4 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_5, L_4, NULL);
		NullCheck(L_3);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_3, L_5, NULL);
		// matAssigned = false;
		__this->___matAssigned_6 = (bool)0;
		goto IL_005a;
	}

IL_002e:
	{
		// Graphic img = GetComponent<Graphic>();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_6;
		L_6 = Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90(__this, Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		V_1 = L_6;
		// if(img != null)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		// img.material = new Material(Shader.Find("Sprites/Default"));
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_9 = V_1;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10;
		L_10 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_11, L_10, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_9, L_11);
		// matAssigned = false;
		__this->___matAssigned_6 = (bool)0;
	}

IL_005a:
	{
		// SetSceneDirty();
		AllIn1VfxComponent_SetSceneDirty_m9E6A673E9394C3A3B775625029362C9D996410EA(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::SaveMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_SaveMaterial_m7D85382C7E27146C01DCA5FD782B221912A9F3F5 (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::SaveMaterialWithOtherName(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_SaveMaterialWithOtherName_m813A30F3AC436425C72CAE067E4696DEBAEEAE32 (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, String_t* ___path0, int32_t ___i1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0F4CF9D3B8B4AD6A49A888401B14AE51DD52E16);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// int number = i;
		int32_t L_0 = ___i1;
		V_0 = L_0;
		// string newPath = path + "_" + number.ToString();
		String_t* L_1 = ___path0;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_2, NULL);
		// string fullPath = newPath + ".mat";
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteralA0F4CF9D3B8B4AD6A49A888401B14AE51DD52E16, NULL);
		V_1 = L_4;
		// if(System.IO.File.Exists(fullPath))
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_5, NULL);
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// number++;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// SaveMaterialWithOtherName(path, number);
		String_t* L_8 = ___path0;
		int32_t L_9 = V_0;
		AllIn1VfxComponent_SaveMaterialWithOtherName_m813A30F3AC436425C72CAE067E4696DEBAEEAE32(__this, L_8, L_9, NULL);
		return;
	}

IL_0034:
	{
		// DoSaving(fullPath);
		String_t* L_10 = V_1;
		AllIn1VfxComponent_DoSaving_m936CEFF84DEAAA780F01E1774FD78018AB351FE7(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::DoSaving(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_DoSaving_m936CEFF84DEAAA780F01E1774FD78018AB351FE7 (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, String_t* ___fileName0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::SetSceneDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_SetSceneDirty_m9E6A673E9394C3A3B775625029362C9D996410EA (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::MissingRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent_MissingRenderer_mB023CB700C00CC98DFECD40F146C57164D16C77E (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxComponent__ctor_m8ACEF8DBF8B3771EEDB5F36F03F1727BE579862F (AllIn1VfxComponent_t2587889FCB75E1748AEF4F9EAE574E8C3631BE54* __this, const RuntimeMethod* method) 
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
// System.Void AllIn1VfxToolkit.AllIn1VfxFakeLightDirSetter::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxFakeLightDirSetter_Awake_mFC968AF1A810D7A7ECC44EC14A230CC25280A6A2 (AllIn1VfxFakeLightDirSetter_t2DF709DA0A4395452D0BF247C1D247B3722FCC06* __this, const RuntimeMethod* method) 
{
	{
		// if(setOnAwake) SetGlobalFakeLightDir();
		bool L_0 = __this->___setOnAwake_4;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if(setOnAwake) SetGlobalFakeLightDir();
		AllIn1VfxFakeLightDirSetter_SetGlobalFakeLightDir_mC9E6091C093D3A23241CA19E45E032A889CB71B0(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxFakeLightDirSetter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxFakeLightDirSetter_Update_m49832CBC47E8981C8683A61E9139330F894E49BE (AllIn1VfxFakeLightDirSetter_t2DF709DA0A4395452D0BF247C1D247B3722FCC06* __this, const RuntimeMethod* method) 
{
	{
		// if(setOnUpdate) SetGlobalFakeLightDir();
		bool L_0 = __this->___setOnUpdate_5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if(setOnUpdate) SetGlobalFakeLightDir();
		AllIn1VfxFakeLightDirSetter_SetGlobalFakeLightDir_mC9E6091C093D3A23241CA19E45E032A889CB71B0(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxFakeLightDirSetter::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxFakeLightDirSetter_OnValidate_mAEDEC47E4DEB9BE90B5FABA0578040D8C06085A5 (AllIn1VfxFakeLightDirSetter_t2DF709DA0A4395452D0BF247C1D247B3722FCC06* __this, const RuntimeMethod* method) 
{
	{
		// SetGlobalFakeLightDir();
		AllIn1VfxFakeLightDirSetter_SetGlobalFakeLightDir_mC9E6091C093D3A23241CA19E45E032A889CB71B0(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxFakeLightDirSetter::SetGlobalFakeLightDir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxFakeLightDirSetter_SetGlobalFakeLightDir_mC9E6091C093D3A23241CA19E45E032A889CB71B0 (AllIn1VfxFakeLightDirSetter_t2DF709DA0A4395452D0BF247C1D247B3722FCC06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC827CF6C30E43507B780232E56A8ECC3A42FD702);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(lightDirId == 0) lightDirId = Shader.PropertyToID("_All1VfxLightDir");
		int32_t L_0 = __this->___lightDirId_7;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// if(lightDirId == 0) lightDirId = Shader.PropertyToID("_All1VfxLightDir");
		int32_t L_1;
		L_1 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralC827CF6C30E43507B780232E56A8ECC3A42FD702, NULL);
		__this->___lightDirId_7 = L_1;
	}

IL_0018:
	{
		// if(target == null) target = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___target_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// if(target == null) target = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___target_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_6), (void*)L_4);
	}

IL_0032:
	{
		// Shader.SetGlobalVector(lightDirId, target.forward.normalized);
		int32_t L_5 = __this->___lightDirId_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___target_6;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_6, NULL);
		V_0 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_8, NULL);
		Shader_SetGlobalVector_mDC5F45B008D44A2C8BF6D450CFE8B58B847C8190(L_5, L_9, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxFakeLightDirSetter::SetNewFakeLightDir(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxFakeLightDirSetter_SetNewFakeLightDir_mC8F9F66AF38019A5523C57E2ACB9F4D3DC07C2EE (AllIn1VfxFakeLightDirSetter_t2DF709DA0A4395452D0BF247C1D247B3722FCC06* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newFakeLightDir0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC827CF6C30E43507B780232E56A8ECC3A42FD702);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(lightDirId == 0) lightDirId = Shader.PropertyToID("_All1VfxLightDir");
		int32_t L_0 = __this->___lightDirId_7;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		// if(lightDirId == 0) lightDirId = Shader.PropertyToID("_All1VfxLightDir");
		int32_t L_1;
		L_1 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralC827CF6C30E43507B780232E56A8ECC3A42FD702, NULL);
		__this->___lightDirId_7 = L_1;
	}

IL_0018:
	{
		// Shader.SetGlobalVector(lightDirId, newFakeLightDir.normalized);
		int32_t L_2 = __this->___lightDirId_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&___newFakeLightDir0), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_3, NULL);
		Shader_SetGlobalVector_mDC5F45B008D44A2C8BF6D450CFE8B58B847C8190(L_2, L_4, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxFakeLightDirSetter::SetNewTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxFakeLightDirSetter_SetNewTarget_m0F2F25862843224A6D62E6A3784691B25599DE8A (AllIn1VfxFakeLightDirSetter_t2DF709DA0A4395452D0BF247C1D247B3722FCC06* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___newTarget0, const RuntimeMethod* method) 
{
	{
		// target = newTarget;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___newTarget0;
		__this->___target_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxFakeLightDirSetter::SetOnUpdateBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxFakeLightDirSetter_SetOnUpdateBool_mB9B0A836D23E435B99D73D67F247F6722345DD71 (AllIn1VfxFakeLightDirSetter_t2DF709DA0A4395452D0BF247C1D247B3722FCC06* __this, bool ___newSetOnUpdateValue0, const RuntimeMethod* method) 
{
	{
		// setOnUpdate = newSetOnUpdateValue;
		bool L_0 = ___newSetOnUpdateValue0;
		__this->___setOnUpdate_5 = L_0;
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxFakeLightDirSetter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxFakeLightDirSetter__ctor_m4C5EA3BCE548CFE5D3AC5842C8540136B460DE4C (AllIn1VfxFakeLightDirSetter_t2DF709DA0A4395452D0BF247C1D247B3722FCC06* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private bool setOnAwake = true;
		__this->___setOnAwake_4 = (bool)1;
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
// UnityEngine.Texture2D AllIn1VfxToolkit.AllIn1VfxNoiseCreator::PerlinNoise(UnityEngine.Texture2D,System.Single,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* AllIn1VfxNoiseCreator_PerlinNoise_mF395BD7B1C25E3A3B0A31239B7783F1D3A04B964 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, float ___scale1, int32_t ___randomSeed2, bool ___tileable3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// int texWidth = tex.width;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___tex0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		V_0 = L_1;
		// int texHeight = tex.height;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___tex0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		V_1 = L_3;
		// Random.InitState(randomSeed);
		int32_t L_4 = ___randomSeed2;
		Random_InitState_mE70961834F42FFEEB06CB9C68175354E0C255664(L_4, NULL);
		// float randomOffset = Random.Range(-100f, 100f);
		float L_5;
		L_5 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-100.0f), (100.0f), NULL);
		V_2 = L_5;
		// for(int i = 0; i < texHeight; i++)
		V_4 = 0;
		goto IL_0056;
	}

IL_0029:
	{
		// for(int j = 0; j < texWidth; j++)
		V_5 = 0;
		goto IL_004b;
	}

IL_002e:
	{
		// tex.SetPixel(j, i, CalculatePerlinColor(j, i, scale, randomOffset, texWidth, texHeight));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = ___tex0;
		int32_t L_7 = V_5;
		int32_t L_8 = V_4;
		int32_t L_9 = V_5;
		int32_t L_10 = V_4;
		float L_11 = ___scale1;
		float L_12 = V_2;
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = AllIn1VfxNoiseCreator_CalculatePerlinColor_m3675833D2D56F07A38F4B3FAE9493989B733D9F3(L_9, L_10, L_11, L_12, L_13, L_14, NULL);
		NullCheck(L_6);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_6, L_7, L_8, L_15, NULL);
		// for(int j = 0; j < texWidth; j++)
		int32_t L_16 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_004b:
	{
		// for(int j = 0; j < texWidth; j++)
		int32_t L_17 = V_5;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_002e;
		}
	}
	{
		// for(int i = 0; i < texHeight; i++)
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0056:
	{
		// for(int i = 0; i < texHeight; i++)
		int32_t L_20 = V_4;
		int32_t L_21 = V_1;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0029;
		}
	}
	{
		// tex.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_22 = ___tex0;
		NullCheck(L_22);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_22, NULL);
		// Texture2D finalPerlin = new Texture2D(texHeight, texWidth);
		int32_t L_23 = V_1;
		int32_t L_24 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_25, L_23, L_24, NULL);
		V_3 = L_25;
		// finalPerlin.SetPixels(tex.GetPixels());
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26 = V_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = ___tex0;
		NullCheck(L_27);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_28;
		L_28 = Texture2D_GetPixels_m77A00D71DF5CDC7DAA0EE66FF2C90A24C7604039(L_27, NULL);
		NullCheck(L_26);
		Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073(L_26, L_28, NULL);
		// if(tileable)
		bool L_29 = ___tileable3;
		if (!L_29)
		{
			goto IL_00b0;
		}
	}
	{
		// for(int i = 0; i < texHeight; i++)
		V_6 = 0;
		goto IL_00ab;
	}

IL_007d:
	{
		// for(int j = 0; j < texWidth; j++)
		V_7 = 0;
		goto IL_00a0;
	}

IL_0082:
	{
		// finalPerlin.SetPixel(j, i, PerlinBorderless(j, i, scale, randomOffset, texWidth, texHeight, tex));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30 = V_3;
		int32_t L_31 = V_7;
		int32_t L_32 = V_6;
		int32_t L_33 = V_7;
		int32_t L_34 = V_6;
		float L_35 = ___scale1;
		float L_36 = V_2;
		int32_t L_37 = V_0;
		int32_t L_38 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = ___tex0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = AllIn1VfxNoiseCreator_PerlinBorderless_m49ADBDE375DC489A6473ED11D71EAD34E771AC45(L_33, L_34, L_35, L_36, L_37, L_38, L_39, NULL);
		NullCheck(L_30);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_30, L_31, L_32, L_40, NULL);
		// for(int j = 0; j < texWidth; j++)
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00a0:
	{
		// for(int j = 0; j < texWidth; j++)
		int32_t L_42 = V_7;
		int32_t L_43 = V_0;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_0082;
		}
	}
	{
		// for(int i = 0; i < texHeight; i++)
		int32_t L_44 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00ab:
	{
		// for(int i = 0; i < texHeight; i++)
		int32_t L_45 = V_6;
		int32_t L_46 = V_1;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_007d;
		}
	}

IL_00b0:
	{
		// finalPerlin.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_47 = V_3;
		NullCheck(L_47);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_47, NULL);
		// return finalPerlin;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_48 = V_3;
		return L_48;
	}
}
// UnityEngine.Color AllIn1VfxToolkit.AllIn1VfxNoiseCreator::CalculatePerlinColor(System.Int32,System.Int32,System.Single,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F AllIn1VfxNoiseCreator_CalculatePerlinColor_m3675833D2D56F07A38F4B3FAE9493989B733D9F3 (int32_t ___x0, int32_t ___y1, float ___scale2, float ___offset3, int32_t ___width4, int32_t ___height5, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float xCoord = (x + offset) / width * scale;
		int32_t L_0 = ___x0;
		float L_1 = ___offset3;
		int32_t L_2 = ___width4;
		float L_3 = ___scale2;
		// float yCoord = (y + offset) / height * scale;
		int32_t L_4 = ___y1;
		float L_5 = ___offset3;
		int32_t L_6 = ___height5;
		float L_7 = ___scale2;
		V_0 = ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_add(((float)L_4), L_5))/((float)L_6))), L_7));
		// float perlin = Mathf.PerlinNoise(xCoord, yCoord);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A(((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_add(((float)L_0), L_1))/((float)L_2))), L_3)), L_8, NULL);
		// return new Color(perlin, perlin, perlin, 1);
		float L_10 = L_9;
		float L_11 = L_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), L_10, L_11, L_11, (1.0f), /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Color AllIn1VfxToolkit.AllIn1VfxNoiseCreator::PerlinBorderless(System.Int32,System.Int32,System.Single,System.Single,System.Int32,System.Int32,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F AllIn1VfxNoiseCreator_PerlinBorderless_m49ADBDE375DC489A6473ED11D71EAD34E771AC45 (int32_t ___x0, int32_t ___y1, float ___scale2, float ___offset3, int32_t ___width4, int32_t ___height5, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___previousPerlin6, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	{
		// int iniX = x;
		int32_t L_0 = ___x0;
		V_0 = L_0;
		// int iniY = y;
		int32_t L_1 = ___y1;
		V_1 = L_1;
		// float u = (float)x / width;
		int32_t L_2 = ___x0;
		int32_t L_3 = ___width4;
		V_2 = ((float)(((float)L_2)/((float)L_3)));
		// float v = (float)y / height;
		int32_t L_4 = ___y1;
		int32_t L_5 = ___height5;
		V_3 = ((float)(((float)L_4)/((float)L_5)));
		// if(u > 0.5f) x = width - x;
		float L_6 = V_2;
		if ((!(((float)L_6) > ((float)(0.5f)))))
		{
			goto IL_0020;
		}
	}
	{
		// if(u > 0.5f) x = width - x;
		int32_t L_7 = ___width4;
		int32_t L_8 = ___x0;
		___x0 = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_0020:
	{
		// if(v > 0.5f) y = height - y;
		float L_9 = V_3;
		if ((!(((float)L_9) > ((float)(0.5f)))))
		{
			goto IL_002e;
		}
	}
	{
		// if(v > 0.5f) y = height - y;
		int32_t L_10 = ___height5;
		int32_t L_11 = ___y1;
		___y1 = ((int32_t)il2cpp_codegen_subtract(L_10, L_11));
	}

IL_002e:
	{
		// offset += 23.43f;
		float L_12 = ___offset3;
		___offset3 = ((float)il2cpp_codegen_add(L_12, (23.4300003f)));
		// float xCoord = (x + offset) / width * scale;
		int32_t L_13 = ___x0;
		float L_14 = ___offset3;
		int32_t L_15 = ___width4;
		float L_16 = ___scale2;
		// float yCoord = (y + offset) / height * scale;
		int32_t L_17 = ___y1;
		float L_18 = ___offset3;
		int32_t L_19 = ___height5;
		float L_20 = ___scale2;
		V_4 = ((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_add(((float)L_17), L_18))/((float)L_19))), L_20));
		// float perlin = Mathf.PerlinNoise(xCoord, yCoord);
		float L_21 = V_4;
		float L_22;
		L_22 = Mathf_PerlinNoise_mAB0E53C29FE95469CF303364910AD0D8662A9A6A(((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_add(((float)L_13), L_14))/((float)L_15))), L_16)), L_21, NULL);
		V_5 = L_22;
		// Color newPerlin = new Color(perlin, perlin, perlin, 1);
		float L_23 = V_5;
		float L_24 = V_5;
		float L_25 = V_5;
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_6), L_23, L_24, L_25, (1.0f), NULL);
		// float edge = Mathf.Max(u, v);
		float L_26 = V_2;
		float L_27 = V_3;
		float L_28;
		L_28 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_26, L_27, NULL);
		V_7 = L_28;
		// edge = Mathf.Max(edge, Mathf.Max(1f - u, 1f - v));
		float L_29 = V_7;
		float L_30 = V_2;
		float L_31 = V_3;
		float L_32;
		L_32 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract((1.0f), L_30)), ((float)il2cpp_codegen_subtract((1.0f), L_31)), NULL);
		float L_33;
		L_33 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_29, L_32, NULL);
		V_7 = L_33;
		// edge = Mathf.Pow(edge, 10f);
		float L_34 = V_7;
		float L_35;
		L_35 = powf(L_34, (10.0f));
		V_7 = L_35;
		// return Color.Lerp(previousPerlin.GetPixel(iniX, iniY), newPerlin, edge);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_36 = ___previousPerlin6;
		int32_t L_37 = V_0;
		int32_t L_38 = V_1;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39;
		L_39 = Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415(L_36, L_37, L_38, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40 = V_6;
		float L_41 = V_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42;
		L_42 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_39, L_40, L_41, NULL);
		return L_42;
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
// System.Void AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxScrollShaderProperty_Start_mD66CC06C259D0358916B2E72EC5E0F495A4C52EB (AllIn1VfxScrollShaderProperty_tAC8F7ED4CC8304DBB58E1B23A2D2CE13EA22E07E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2043A81282FBC38D068F48CE6B02508288E7F859);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7A626DEA2521BA48EA03C7C5828601203370D81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAE96BC7C4AF88268A19A75CCE8F01ABB5A77AB1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(mat == null) mat = GetComponent<Renderer>().material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___mat_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// if(mat == null) mat = GetComponent<Renderer>().material;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2;
		L_2 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_2, NULL);
		__this->___mat_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat_14), (void*)L_3);
		goto IL_0039;
	}

IL_0021:
	{
		// originalMat = new Material(mat);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___mat_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_5, L_4, NULL);
		__this->___originalMat_15 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalMat_15), (void*)L_5);
		// restoreMaterialOnDisable = true;
		__this->___restoreMaterialOnDisable_16 = (bool)1;
	}

IL_0039:
	{
		// if (mat == null) DestroyComponentAndLogError(gameObject.name + " has no valid Material, deleting AllIn1VfxScrollShaderProperty component");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___mat_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0063;
		}
	}
	{
		// if (mat == null) DestroyComponentAndLogError(gameObject.name + " has no valid Material, deleting AllIn1VfxScrollShaderProperty component");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, _stringLiteralEAE96BC7C4AF88268A19A75CCE8F01ABB5A77AB1, NULL);
		AllIn1VfxScrollShaderProperty_DestroyComponentAndLogError_mE541EDF927CBB77AF92844EDB5F13BC99EE07A36(__this, L_10, NULL);
		return;
	}

IL_0063:
	{
		// if (mat.HasProperty(numericPropertyName)) propertyShaderID = Shader.PropertyToID(numericPropertyName);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->___mat_14;
		String_t* L_12 = __this->___numericPropertyName_4;
		NullCheck(L_11);
		bool L_13;
		L_13 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0089;
		}
	}
	{
		// if (mat.HasProperty(numericPropertyName)) propertyShaderID = Shader.PropertyToID(numericPropertyName);
		String_t* L_14 = __this->___numericPropertyName_4;
		int32_t L_15;
		L_15 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(L_14, NULL);
		__this->___propertyShaderID_17 = L_15;
		goto IL_00af;
	}

IL_0089:
	{
		// else DestroyComponentAndLogError(gameObject.name + "'s Material doesn't have a " + numericPropertyName + " property");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_16, NULL);
		String_t* L_18 = __this->___numericPropertyName_4;
		String_t* L_19;
		L_19 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_17, _stringLiteralA7A626DEA2521BA48EA03C7C5828601203370D81, L_18, _stringLiteral2043A81282FBC38D068F48CE6B02508288E7F859, NULL);
		AllIn1VfxScrollShaderProperty_DestroyComponentAndLogError_mE541EDF927CBB77AF92844EDB5F13BC99EE07A36(__this, L_19, NULL);
	}

IL_00af:
	{
		// currValue = mat.GetFloat(propertyShaderID);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___mat_14;
		int32_t L_21 = __this->___propertyShaderID_17;
		NullCheck(L_20);
		float L_22;
		L_22 = Material_GetFloat_m52462F4AEDE20758BFB592B11DE83A79D2774932(L_20, L_21, NULL);
		__this->___currValue_18 = L_22;
		// if(backAndForth || stopAtValue)
		bool L_23 = __this->___backAndForth_6;
		if (L_23)
		{
			goto IL_00d6;
		}
	}
	{
		bool L_24 = __this->___stopAtValue_12;
		if (!L_24)
		{
			goto IL_0144;
		}
	}

IL_00d6:
	{
		// iniValue = currValue;
		float L_25 = __this->___currValue_18;
		__this->___iniValue_8 = L_25;
		// goingUp = iniValue < maxValue;
		float L_26 = __this->___iniValue_8;
		float L_27 = __this->___maxValue_7;
		__this->___goingUp_9 = (bool)((((float)L_26) < ((float)L_27))? 1 : 0);
		// if(!goingUp && scrollSpeed > 0) scrollSpeed *= -1f;
		bool L_28 = __this->___goingUp_9;
		if (L_28)
		{
			goto IL_011d;
		}
	}
	{
		float L_29 = __this->___scrollSpeed_5;
		if ((!(((float)L_29) > ((float)(0.0f)))))
		{
			goto IL_011d;
		}
	}
	{
		// if(!goingUp && scrollSpeed > 0) scrollSpeed *= -1f;
		float L_30 = __this->___scrollSpeed_5;
		__this->___scrollSpeed_5 = ((float)il2cpp_codegen_multiply(L_30, (-1.0f)));
	}

IL_011d:
	{
		// if(goingUp && scrollSpeed < 0) scrollSpeed *= -1f;
		bool L_31 = __this->___goingUp_9;
		if (!L_31)
		{
			goto IL_0144;
		}
	}
	{
		float L_32 = __this->___scrollSpeed_5;
		if ((!(((float)L_32) < ((float)(0.0f)))))
		{
			goto IL_0144;
		}
	}
	{
		// if(goingUp && scrollSpeed < 0) scrollSpeed *= -1f;
		float L_33 = __this->___scrollSpeed_5;
		__this->___scrollSpeed_5 = ((float)il2cpp_codegen_multiply(L_33, (-1.0f)));
	}

IL_0144:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxScrollShaderProperty_Update_mC7E9894774CBE05469B32451E8EA242254567EAF (AllIn1VfxScrollShaderProperty_tAC8F7ED4CC8304DBB58E1B23A2D2CE13EA22E07E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68CB89848359D7BCEA0995C8FB01DAA1D5DFDE28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5D8EF422ABD0284BA3EEB3BF58FBA9313575F4E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(mat == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___mat_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// if(isValid)
		bool L_2 = __this->___isValid_19;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// Debug.LogError("The object " + gameObject.name + " has no Material and you are trying to access it. Please take a look");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralF5D8EF422ABD0284BA3EEB3BF58FBA9313575F4E, L_4, _stringLiteral68CB89848359D7BCEA0995C8FB01DAA1D5DFDE28, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_5, NULL);
		// isValid = false;
		__this->___isValid_19 = (bool)0;
	}

IL_003c:
	{
		// return;
		return;
	}

IL_003d:
	{
		// currValue += scrollSpeed * Time.deltaTime;
		float L_6 = __this->___currValue_18;
		float L_7 = __this->___scrollSpeed_5;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___currValue_18 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_7, L_8))));
		// if(backAndForth)
		bool L_9 = __this->___backAndForth_6;
		if (!L_9)
		{
			goto IL_0098;
		}
	}
	{
		// if(goingUp && currValue >= maxValue) FlipGoingUp();
		bool L_10 = __this->___goingUp_9;
		if (!L_10)
		{
			goto IL_007c;
		}
	}
	{
		float L_11 = __this->___currValue_18;
		float L_12 = __this->___maxValue_7;
		if ((!(((float)L_11) >= ((float)L_12))))
		{
			goto IL_007c;
		}
	}
	{
		// if(goingUp && currValue >= maxValue) FlipGoingUp();
		AllIn1VfxScrollShaderProperty_FlipGoingUp_m2E85C6CA803F28BD510C7D2B57F2C4FFF3D5F180(__this, NULL);
		goto IL_0098;
	}

IL_007c:
	{
		// else if(!goingUp && currValue <= iniValue) FlipGoingUp();
		bool L_13 = __this->___goingUp_9;
		if (L_13)
		{
			goto IL_0098;
		}
	}
	{
		float L_14 = __this->___currValue_18;
		float L_15 = __this->___iniValue_8;
		if ((!(((float)L_14) <= ((float)L_15))))
		{
			goto IL_0098;
		}
	}
	{
		// else if(!goingUp && currValue <= iniValue) FlipGoingUp();
		AllIn1VfxScrollShaderProperty_FlipGoingUp_m2E85C6CA803F28BD510C7D2B57F2C4FFF3D5F180(__this, NULL);
	}

IL_0098:
	{
		// if (applyModulo) currValue %= modulo;
		bool L_16 = __this->___applyModulo_10;
		if (!L_16)
		{
			goto IL_00b3;
		}
	}
	{
		// if (applyModulo) currValue %= modulo;
		float L_17 = __this->___currValue_18;
		float L_18 = __this->___modulo_11;
		__this->___currValue_18 = (fmodf(L_17, L_18));
	}

IL_00b3:
	{
		// if(stopAtValue)
		bool L_19 = __this->___stopAtValue_12;
		if (!L_19)
		{
			goto IL_00ff;
		}
	}
	{
		// if(goingUp && currValue >= stopValue) scrollSpeed = 0f;
		bool L_20 = __this->___goingUp_9;
		if (!L_20)
		{
			goto IL_00de;
		}
	}
	{
		float L_21 = __this->___currValue_18;
		float L_22 = __this->___stopValue_13;
		if ((!(((float)L_21) >= ((float)L_22))))
		{
			goto IL_00de;
		}
	}
	{
		// if(goingUp && currValue >= stopValue) scrollSpeed = 0f;
		__this->___scrollSpeed_5 = (0.0f);
		goto IL_00ff;
	}

IL_00de:
	{
		// else if(!goingUp && currValue <= stopValue) scrollSpeed = 0f;
		bool L_23 = __this->___goingUp_9;
		if (L_23)
		{
			goto IL_00ff;
		}
	}
	{
		float L_24 = __this->___currValue_18;
		float L_25 = __this->___stopValue_13;
		if ((!(((float)L_24) <= ((float)L_25))))
		{
			goto IL_00ff;
		}
	}
	{
		// else if(!goingUp && currValue <= stopValue) scrollSpeed = 0f;
		__this->___scrollSpeed_5 = (0.0f);
	}

IL_00ff:
	{
		// mat.SetFloat(propertyShaderID, currValue);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___mat_14;
		int32_t L_27 = __this->___propertyShaderID_17;
		float L_28 = __this->___currValue_18;
		NullCheck(L_26);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_26, L_27, L_28, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::FlipGoingUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxScrollShaderProperty_FlipGoingUp_m2E85C6CA803F28BD510C7D2B57F2C4FFF3D5F180 (AllIn1VfxScrollShaderProperty_tAC8F7ED4CC8304DBB58E1B23A2D2CE13EA22E07E* __this, const RuntimeMethod* method) 
{
	{
		// goingUp = !goingUp;
		bool L_0 = __this->___goingUp_9;
		__this->___goingUp_9 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// scrollSpeed *= -1f;
		float L_1 = __this->___scrollSpeed_5;
		__this->___scrollSpeed_5 = ((float)il2cpp_codegen_multiply(L_1, (-1.0f)));
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::DestroyComponentAndLogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxScrollShaderProperty_DestroyComponentAndLogError_mE541EDF927CBB77AF92844EDB5F13BC99EE07A36 (AllIn1VfxScrollShaderProperty_tAC8F7ED4CC8304DBB58E1B23A2D2CE13EA22E07E* __this, String_t* ___logError0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(logError);
		String_t* L_0 = ___logError0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_0, NULL);
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxScrollShaderProperty_OnDisable_m0F247B092283A86651B5ED5256D6C9E7FB5663EB (AllIn1VfxScrollShaderProperty_tAC8F7ED4CC8304DBB58E1B23A2D2CE13EA22E07E* __this, const RuntimeMethod* method) 
{
	{
		// if(restoreMaterialOnDisable) mat.CopyPropertiesFromMaterial(originalMat);
		bool L_0 = __this->___restoreMaterialOnDisable_16;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// if(restoreMaterialOnDisable) mat.CopyPropertiesFromMaterial(originalMat);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___mat_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___originalMat_15;
		NullCheck(L_1);
		Material_CopyPropertiesFromMaterial_m4148227E6A0B8E66315D8115F656B7F8BEAE915B(L_1, L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxScrollShaderProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxScrollShaderProperty__ctor_m1384E828EC486AA3BBF98290DC65AA715322CE68 (AllIn1VfxScrollShaderProperty_tAC8F7ED4CC8304DBB58E1B23A2D2CE13EA22E07E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD53DF615DBAF7AA486744EFFCF7D2AB271BC7058);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string numericPropertyName = "_HsvShift";
		__this->___numericPropertyName_4 = _stringLiteralD53DF615DBAF7AA486744EFFCF7D2AB271BC7058;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___numericPropertyName_4), (void*)_stringLiteralD53DF615DBAF7AA486744EFFCF7D2AB271BC7058);
		// [SerializeField] private float maxValue = 1f;
		__this->___maxValue_7 = (1.0f);
		// [SerializeField] private float modulo = 360f;
		__this->___modulo_11 = (360.0f);
		// private bool isValid = true;
		__this->___isValid_19 = (bool)1;
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
// System.Void AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxScrollShaderTexture_Start_mF0CF9576C87849A23149BD503FB5F299FBCF9A59 (AllIn1VfxScrollShaderTexture_t0B1CA0D34AF4808EA9BA40B9CDBA558936EB3103* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1647B084BF73860206F4BB01E3237ED88F61B4BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46AFF93E738AD334DF787721BD7F7D0089E5D7AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7A626DEA2521BA48EA03C7C5828601203370D81);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(mat == null) mat = GetComponent<Renderer>().material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___mat_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// if(mat == null) mat = GetComponent<Renderer>().material;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2;
		L_2 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_2, NULL);
		__this->___mat_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat_16), (void*)L_3);
		goto IL_0039;
	}

IL_0021:
	{
		// originalMat = new Material(mat);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___mat_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_5, L_4, NULL);
		__this->___originalMat_17 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalMat_17), (void*)L_5);
		// restoreMaterialOnDisable = true;
		__this->___restoreMaterialOnDisable_18 = (bool)1;
	}

IL_0039:
	{
		// if (mat == null) DestroyComponentAndLogError(gameObject.name + " has no valid Material, deleting AllIn1VfxScrollShaderTexture component");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___mat_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0063;
		}
	}
	{
		// if (mat == null) DestroyComponentAndLogError(gameObject.name + " has no valid Material, deleting AllIn1VfxScrollShaderTexture component");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, _stringLiteral1647B084BF73860206F4BB01E3237ED88F61B4BA, NULL);
		AllIn1VfxScrollShaderTexture_DestroyComponentAndLogError_m0FF3DD2B9CEEF6E92BB15E65DAC3E1F5546C3E6E(__this, L_10, NULL);
		return;
	}

IL_0063:
	{
		// if (mat.HasProperty(texturePropertyName)) propertyShaderID = Shader.PropertyToID(texturePropertyName);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->___mat_16;
		String_t* L_12 = __this->___texturePropertyName_4;
		NullCheck(L_11);
		bool L_13;
		L_13 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0089;
		}
	}
	{
		// if (mat.HasProperty(texturePropertyName)) propertyShaderID = Shader.PropertyToID(texturePropertyName);
		String_t* L_14 = __this->___texturePropertyName_4;
		int32_t L_15;
		L_15 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(L_14, NULL);
		__this->___propertyShaderID_19 = L_15;
		goto IL_00af;
	}

IL_0089:
	{
		// else DestroyComponentAndLogError(gameObject.name + "'s Material doesn't have a " + texturePropertyName + " texture property");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_16, NULL);
		String_t* L_18 = __this->___texturePropertyName_4;
		String_t* L_19;
		L_19 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_17, _stringLiteralA7A626DEA2521BA48EA03C7C5828601203370D81, L_18, _stringLiteral46AFF93E738AD334DF787721BD7F7D0089E5D7AC, NULL);
		AllIn1VfxScrollShaderTexture_DestroyComponentAndLogError_m0FF3DD2B9CEEF6E92BB15E65DAC3E1F5546C3E6E(__this, L_19, NULL);
	}

IL_00af:
	{
		// if(textureOffset) currValue = mat.GetTextureOffset(texturePropertyName);
		bool L_20 = __this->___textureOffset_6;
		if (!L_20)
		{
			goto IL_00d0;
		}
	}
	{
		// if(textureOffset) currValue = mat.GetTextureOffset(texturePropertyName);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___mat_16;
		String_t* L_22 = __this->___texturePropertyName_4;
		NullCheck(L_21);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Material_GetTextureOffset_m4F9E2C96960DFE3C76B9D878F8E654D78185F9CA(L_21, L_22, NULL);
		__this->___currValue_20 = L_23;
		goto IL_00e7;
	}

IL_00d0:
	{
		// else currValue = mat.GetTextureScale(texturePropertyName);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = __this->___mat_16;
		String_t* L_25 = __this->___texturePropertyName_4;
		NullCheck(L_24);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Material_GetTextureScale_mF3406F1439C275C25FEE0C4E19108B29AA77E693(L_24, L_25, NULL);
		__this->___currValue_20 = L_26;
	}

IL_00e7:
	{
		// if(backAndForth || stopAtValue)
		bool L_27 = __this->___backAndForth_7;
		if (L_27)
		{
			goto IL_00fa;
		}
	}
	{
		bool L_28 = __this->___stopAtValue_14;
		if (!L_28)
		{
			goto IL_0202;
		}
	}

IL_00fa:
	{
		// iniValue = currValue;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = __this->___currValue_20;
		__this->___iniValue_9 = L_29;
		// goingUpX = iniValue.x < maxValue.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_30 = (&__this->___iniValue_9);
		float L_31 = L_30->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_32 = (&__this->___maxValue_8);
		float L_33 = L_32->___x_0;
		__this->___goingUpX_10 = (bool)((((float)L_31) < ((float)L_33))? 1 : 0);
		// if(!goingUpX && scrollSpeed.x > 0) scrollSpeed *= -1f;
		bool L_34 = __this->___goingUpX_10;
		if (L_34)
		{
			goto IL_0154;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_35 = (&__this->___scrollSpeed_5);
		float L_36 = L_35->___x_0;
		if ((!(((float)L_36) > ((float)(0.0f)))))
		{
			goto IL_0154;
		}
	}
	{
		// if(!goingUpX && scrollSpeed.x > 0) scrollSpeed *= -1f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = __this->___scrollSpeed_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_37, (-1.0f), NULL);
		__this->___scrollSpeed_5 = L_38;
	}

IL_0154:
	{
		// if(goingUpX && scrollSpeed.x < 0) scrollSpeed *= -1f;
		bool L_39 = __this->___goingUpX_10;
		if (!L_39)
		{
			goto IL_0184;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_40 = (&__this->___scrollSpeed_5);
		float L_41 = L_40->___x_0;
		if ((!(((float)L_41) < ((float)(0.0f)))))
		{
			goto IL_0184;
		}
	}
	{
		// if(goingUpX && scrollSpeed.x < 0) scrollSpeed *= -1f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = __this->___scrollSpeed_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
		L_43 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_42, (-1.0f), NULL);
		__this->___scrollSpeed_5 = L_43;
	}

IL_0184:
	{
		// goingUpY = iniValue.y < maxValue.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_44 = (&__this->___iniValue_9);
		float L_45 = L_44->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_46 = (&__this->___maxValue_8);
		float L_47 = L_46->___y_1;
		__this->___goingUpY_11 = (bool)((((float)L_45) < ((float)L_47))? 1 : 0);
		// if(!goingUpY && scrollSpeed.y > 0) scrollSpeed *= -1f;
		bool L_48 = __this->___goingUpY_11;
		if (L_48)
		{
			goto IL_01d2;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_49 = (&__this->___scrollSpeed_5);
		float L_50 = L_49->___y_1;
		if ((!(((float)L_50) > ((float)(0.0f)))))
		{
			goto IL_01d2;
		}
	}
	{
		// if(!goingUpY && scrollSpeed.y > 0) scrollSpeed *= -1f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = __this->___scrollSpeed_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		L_52 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_51, (-1.0f), NULL);
		__this->___scrollSpeed_5 = L_52;
	}

IL_01d2:
	{
		// if(goingUpY && scrollSpeed.y < 0) scrollSpeed *= -1f;
		bool L_53 = __this->___goingUpY_11;
		if (!L_53)
		{
			goto IL_0202;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_54 = (&__this->___scrollSpeed_5);
		float L_55 = L_54->___y_1;
		if ((!(((float)L_55) < ((float)(0.0f)))))
		{
			goto IL_0202;
		}
	}
	{
		// if(goingUpY && scrollSpeed.y < 0) scrollSpeed *= -1f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = __this->___scrollSpeed_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		L_57 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_56, (-1.0f), NULL);
		__this->___scrollSpeed_5 = L_57;
	}

IL_0202:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxScrollShaderTexture_Update_m446DDC71A8F5C42761DCAD83195F3DC48F865AC9 (AllIn1VfxScrollShaderTexture_t0B1CA0D34AF4808EA9BA40B9CDBA558936EB3103* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68CB89848359D7BCEA0995C8FB01DAA1D5DFDE28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5D8EF422ABD0284BA3EEB3BF58FBA9313575F4E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(mat == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___mat_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// if(isValid)
		bool L_2 = __this->___isValid_21;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// Debug.LogError("The object " + gameObject.name + " has no Material and you are trying to access it. Please take a look");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralF5D8EF422ABD0284BA3EEB3BF58FBA9313575F4E, L_4, _stringLiteral68CB89848359D7BCEA0995C8FB01DAA1D5DFDE28, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_5, NULL);
		// isValid = false;
		__this->___isValid_21 = (bool)0;
	}

IL_003c:
	{
		// return;
		return;
	}

IL_003d:
	{
		// currValue += scrollSpeed * Time.deltaTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___currValue_20;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___scrollSpeed_5;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_7, L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_6, L_9, NULL);
		__this->___currValue_20 = L_10;
		// if(backAndForth)
		bool L_11 = __this->___backAndForth_7;
		if (!L_11)
		{
			goto IL_0109;
		}
	}
	{
		// if(goingUpX && currValue.x >= maxValue.x) FlipGoingUp(true);
		bool L_12 = __this->___goingUpX_10;
		if (!L_12)
		{
			goto IL_0092;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___currValue_20);
		float L_14 = L_13->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___maxValue_8);
		float L_16 = L_15->___x_0;
		if ((!(((float)L_14) >= ((float)L_16))))
		{
			goto IL_0092;
		}
	}
	{
		// if(goingUpX && currValue.x >= maxValue.x) FlipGoingUp(true);
		AllIn1VfxScrollShaderTexture_FlipGoingUp_mAF1B7A83DBB3020A14A98614C591A410344AC793(__this, (bool)1, NULL);
		goto IL_00b9;
	}

IL_0092:
	{
		// else if(!goingUpX && currValue.x <= iniValue.x) FlipGoingUp(true);
		bool L_17 = __this->___goingUpX_10;
		if (L_17)
		{
			goto IL_00b9;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = (&__this->___currValue_20);
		float L_19 = L_18->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = (&__this->___iniValue_9);
		float L_21 = L_20->___x_0;
		if ((!(((float)L_19) <= ((float)L_21))))
		{
			goto IL_00b9;
		}
	}
	{
		// else if(!goingUpX && currValue.x <= iniValue.x) FlipGoingUp(true);
		AllIn1VfxScrollShaderTexture_FlipGoingUp_mAF1B7A83DBB3020A14A98614C591A410344AC793(__this, (bool)1, NULL);
	}

IL_00b9:
	{
		// if(goingUpY && currValue.y >= maxValue.y) FlipGoingUp(false);
		bool L_22 = __this->___goingUpY_11;
		if (!L_22)
		{
			goto IL_00e2;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = (&__this->___currValue_20);
		float L_24 = L_23->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = (&__this->___maxValue_8);
		float L_26 = L_25->___y_1;
		if ((!(((float)L_24) >= ((float)L_26))))
		{
			goto IL_00e2;
		}
	}
	{
		// if(goingUpY && currValue.y >= maxValue.y) FlipGoingUp(false);
		AllIn1VfxScrollShaderTexture_FlipGoingUp_mAF1B7A83DBB3020A14A98614C591A410344AC793(__this, (bool)0, NULL);
		goto IL_0109;
	}

IL_00e2:
	{
		// else if(!goingUpY && currValue.y <= iniValue.y) FlipGoingUp(false);
		bool L_27 = __this->___goingUpY_11;
		if (L_27)
		{
			goto IL_0109;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28 = (&__this->___currValue_20);
		float L_29 = L_28->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_30 = (&__this->___iniValue_9);
		float L_31 = L_30->___y_1;
		if ((!(((float)L_29) <= ((float)L_31))))
		{
			goto IL_0109;
		}
	}
	{
		// else if(!goingUpY && currValue.y <= iniValue.y) FlipGoingUp(false);
		AllIn1VfxScrollShaderTexture_FlipGoingUp_mAF1B7A83DBB3020A14A98614C591A410344AC793(__this, (bool)0, NULL);
	}

IL_0109:
	{
		// if(applyModulo)
		bool L_32 = __this->___applyModulo_12;
		if (!L_32)
		{
			goto IL_0145;
		}
	}
	{
		// currValue.x %= modulo.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_33 = (&__this->___currValue_20);
		float* L_34 = (&L_33->___x_0);
		float* L_35 = L_34;
		float L_36 = *((float*)L_35);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_37 = (&__this->___modulo_13);
		float L_38 = L_37->___x_0;
		*((float*)L_35) = (float)(fmodf(L_36, L_38));
		// currValue.y %= modulo.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_39 = (&__this->___currValue_20);
		float* L_40 = (&L_39->___y_1);
		float* L_41 = L_40;
		float L_42 = *((float*)L_41);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_43 = (&__this->___modulo_13);
		float L_44 = L_43->___y_1;
		*((float*)L_41) = (float)(fmodf(L_42, L_44));
	}

IL_0145:
	{
		// if(stopAtValue)
		bool L_45 = __this->___stopAtValue_14;
		if (!L_45)
		{
			goto IL_0214;
		}
	}
	{
		// if(goingUpX && currValue.x >= stopValue.x) scrollSpeed.x = 0f;
		bool L_46 = __this->___goingUpX_10;
		if (!L_46)
		{
			goto IL_0182;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_47 = (&__this->___currValue_20);
		float L_48 = L_47->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_49 = (&__this->___stopValue_15);
		float L_50 = L_49->___x_0;
		if ((!(((float)L_48) >= ((float)L_50))))
		{
			goto IL_0182;
		}
	}
	{
		// if(goingUpX && currValue.x >= stopValue.x) scrollSpeed.x = 0f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_51 = (&__this->___scrollSpeed_5);
		L_51->___x_0 = (0.0f);
		goto IL_01b2;
	}

IL_0182:
	{
		// else if(!goingUpX && currValue.x <= stopValue.x) scrollSpeed.x = 0f;
		bool L_52 = __this->___goingUpX_10;
		if (L_52)
		{
			goto IL_01b2;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_53 = (&__this->___currValue_20);
		float L_54 = L_53->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_55 = (&__this->___stopValue_15);
		float L_56 = L_55->___x_0;
		if ((!(((float)L_54) <= ((float)L_56))))
		{
			goto IL_01b2;
		}
	}
	{
		// else if(!goingUpX && currValue.x <= stopValue.x) scrollSpeed.x = 0f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_57 = (&__this->___scrollSpeed_5);
		L_57->___x_0 = (0.0f);
	}

IL_01b2:
	{
		// if(goingUpY && currValue.y >= stopValue.y) scrollSpeed.y = 0f;
		bool L_58 = __this->___goingUpY_11;
		if (!L_58)
		{
			goto IL_01e4;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_59 = (&__this->___currValue_20);
		float L_60 = L_59->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_61 = (&__this->___stopValue_15);
		float L_62 = L_61->___y_1;
		if ((!(((float)L_60) >= ((float)L_62))))
		{
			goto IL_01e4;
		}
	}
	{
		// if(goingUpY && currValue.y >= stopValue.y) scrollSpeed.y = 0f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_63 = (&__this->___scrollSpeed_5);
		L_63->___y_1 = (0.0f);
		goto IL_0214;
	}

IL_01e4:
	{
		// else if(!goingUpY && currValue.y <= stopValue.y) scrollSpeed.y = 0f;
		bool L_64 = __this->___goingUpY_11;
		if (L_64)
		{
			goto IL_0214;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_65 = (&__this->___currValue_20);
		float L_66 = L_65->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_67 = (&__this->___stopValue_15);
		float L_68 = L_67->___y_1;
		if ((!(((float)L_66) <= ((float)L_68))))
		{
			goto IL_0214;
		}
	}
	{
		// else if(!goingUpY && currValue.y <= stopValue.y) scrollSpeed.y = 0f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_69 = (&__this->___scrollSpeed_5);
		L_69->___y_1 = (0.0f);
	}

IL_0214:
	{
		// if(textureOffset) mat.SetTextureOffset(propertyShaderID, currValue);
		bool L_70 = __this->___textureOffset_6;
		if (!L_70)
		{
			goto IL_0234;
		}
	}
	{
		// if(textureOffset) mat.SetTextureOffset(propertyShaderID, currValue);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_71 = __this->___mat_16;
		int32_t L_72 = __this->___propertyShaderID_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73 = __this->___currValue_20;
		NullCheck(L_71);
		Material_SetTextureOffset_mB28E782AE9F9B4CB9D36F209C976F8A0FE7DF747(L_71, L_72, L_73, NULL);
		return;
	}

IL_0234:
	{
		// else mat.SetTextureScale(propertyShaderID, currValue);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74 = __this->___mat_16;
		int32_t L_75 = __this->___propertyShaderID_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_76 = __this->___currValue_20;
		NullCheck(L_74);
		Material_SetTextureScale_mBA092A3DCD393695B32801FD05F70A8CC58CB89D(L_74, L_75, L_76, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::FlipGoingUp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxScrollShaderTexture_FlipGoingUp_mAF1B7A83DBB3020A14A98614C591A410344AC793 (AllIn1VfxScrollShaderTexture_t0B1CA0D34AF4808EA9BA40B9CDBA558936EB3103* __this, bool ___isXComponent0, const RuntimeMethod* method) 
{
	{
		// if(isXComponent)
		bool L_0 = ___isXComponent0;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// goingUpX = !goingUpX;
		bool L_1 = __this->___goingUpX_10;
		__this->___goingUpX_10 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// scrollSpeed.x *= -1f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___scrollSpeed_5);
		float* L_3 = (&L_2->___x_0);
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		*((float*)L_4) = (float)((float)il2cpp_codegen_multiply(L_5, (-1.0f)));
		return;
	}

IL_0027:
	{
		// goingUpY = !goingUpY;
		bool L_6 = __this->___goingUpY_11;
		__this->___goingUpY_11 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		// scrollSpeed.y *= -1f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___scrollSpeed_5);
		float* L_8 = (&L_7->___y_1);
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		*((float*)L_9) = (float)((float)il2cpp_codegen_multiply(L_10, (-1.0f)));
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::DestroyComponentAndLogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxScrollShaderTexture_DestroyComponentAndLogError_m0FF3DD2B9CEEF6E92BB15E65DAC3E1F5546C3E6E (AllIn1VfxScrollShaderTexture_t0B1CA0D34AF4808EA9BA40B9CDBA558936EB3103* __this, String_t* ___logError0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(logError);
		String_t* L_0 = ___logError0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_0, NULL);
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxScrollShaderTexture_OnDisable_mF76C26882A3006EE2D4B7CC25955F8B850E0B06D (AllIn1VfxScrollShaderTexture_t0B1CA0D34AF4808EA9BA40B9CDBA558936EB3103* __this, const RuntimeMethod* method) 
{
	{
		// if(restoreMaterialOnDisable) mat.CopyPropertiesFromMaterial(originalMat);
		bool L_0 = __this->___restoreMaterialOnDisable_18;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// if(restoreMaterialOnDisable) mat.CopyPropertiesFromMaterial(originalMat);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___mat_16;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___originalMat_17;
		NullCheck(L_1);
		Material_CopyPropertiesFromMaterial_m4148227E6A0B8E66315D8115F656B7F8BEAE915B(L_1, L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.AllIn1VfxScrollShaderTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1VfxScrollShaderTexture__ctor_mFF32DBC76C34C5F76D16CA6EE1193F16CEEE8AC5 (AllIn1VfxScrollShaderTexture_t0B1CA0D34AF4808EA9BA40B9CDBA558936EB3103* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string texturePropertyName = "_MainTex";
		__this->___texturePropertyName_4 = _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texturePropertyName_4), (void*)_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		// [SerializeField] private Vector2 scrollSpeed = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___scrollSpeed_5 = L_0;
		// private bool textureOffset = true;
		__this->___textureOffset_6 = (bool)1;
		// [SerializeField] private Vector2 maxValue = Vector2.one;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		__this->___maxValue_8 = L_1;
		// private Vector2 iniValue = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___iniValue_9 = L_2;
		// [SerializeField] private Vector2 modulo = Vector2.one;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		__this->___modulo_13 = L_3;
		// [SerializeField] private Vector2 stopValue = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___stopValue_15 = L_4;
		// private Vector2 currValue = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___currValue_20 = L_5;
		// private bool isValid = true;
		__this->___isValid_21 = (bool)1;
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
// System.Void AllIn1VfxToolkit.Scripts.AllIn1GraphicMaterialDuplicate::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1GraphicMaterialDuplicate_Awake_mAF133D27FBE98EFB1DEEE7A25C8CBC5476049BCC (AllIn1GraphicMaterialDuplicate_tEC6847E85A67C8AFB79A06C3E271091CCD6B3AA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Graphic graphic = GetComponent<Graphic>();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0;
		L_0 = Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90(__this, Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		// graphic.material = new Material(graphic.material);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_1 = L_0;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_3, L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_1, L_3);
		// }
		return;
	}
}
// System.Void AllIn1VfxToolkit.Scripts.AllIn1GraphicMaterialDuplicate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1GraphicMaterialDuplicate__ctor_mD51ED5244AFFF8CC67D241F800D0F836E152A148 (AllIn1GraphicMaterialDuplicate_tEC6847E85A67C8AFB79A06C3E271091CCD6B3AA0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___v0;
		float L_5 = L_4.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
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
