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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Solana.Unity.KeyStore.Model.CryptoInfo`1<System.Object>
struct CryptoInfo_1_t8C7DE9ACDBDBCC2C738DCCBCED86CE917D30A0BD;
// Solana.Unity.KeyStore.Model.CryptoInfo`1<Solana.Unity.KeyStore.Model.Pbkdf2Params>
struct CryptoInfo_1_t5FF286FC76D8F0321050A4F6477DEE7CD6E5B210;
// Solana.Unity.KeyStore.Model.CryptoInfo`1<Solana.Unity.KeyStore.Model.ScryptParams>
struct CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Func`2<System.Byte,System.Object>
struct Func_2_t6E66BCD31592FAA3B441B68BF938E37260DCFA3C;
// System.Func`2<System.Byte,System.String>
struct Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1<System.Object>
struct KeyStoreServiceBase_1_tE6BB1E823F653515286C59A960B5E410C04524F5;
// Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1<Solana.Unity.KeyStore.Model.Pbkdf2Params>
struct KeyStoreServiceBase_1_tEFA72F0803DD15098A4EC34A66D8BFE43CD212D8;
// Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1<Solana.Unity.KeyStore.Model.ScryptParams>
struct KeyStoreServiceBase_1_t9E28408AE50D30E487A114F2A8FA68EEA6390FD7;
// Solana.Unity.KeyStore.Model.KeyStore`1<System.Object>
struct KeyStore_1_t219BD66CB42D8406C85E77D68ED903BF7BFB3603;
// Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.Pbkdf2Params>
struct KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383;
// Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.ScryptParams>
struct KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// Solana.Unity.Wallet.Account
struct Account_t15F1801E39C4C126421D353BFA50F8BD35957596;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_tD9BAC60F604446ED14967643F63A83CE2A5C3701;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Solana.Unity.KeyStore.Model.CipherParams
struct CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// Solana.Unity.KeyStore.Exceptions.DecryptionException
struct DecryptionException_t34C51BD782E922C459D93AD2E4E705E22D92F5C3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Solana.Unity.Wallet.Ed25519Bip32
struct Ed25519Bip32_t0C7B700FA66BDBC24D1D4D036FE4ADF4C7DECAF3;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
// Org.BouncyCastle.Crypto.IBufferedCipher
struct IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_tE4751F03244264E12A0669633A68076FD032E2CF;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1;
// Org.BouncyCastle.Crypto.IMac
struct IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992;
// Solana.Unity.KeyStore.Crypto.IRandomBytesGenerator
struct IRandomBytesGenerator_tFC5194FC1C3F41650DCEA4A6771B44F8177EA82D;
// Org.BouncyCastle.Crypto.Prng.IRandomGenerator
struct IRandomGenerator_t50CA6B7268CF1B6ED0762EB5808373C32743C8F1;
// Solana.Unity.KeyStore.Exceptions.InvalidKdfException
struct InvalidKdfException_tBB0DE3AAA56DDBC6703168B247F189C33E6C21EF;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A;
// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1;
// Newtonsoft.Json.Linq.JProperty
struct JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632;
// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46;
// Newtonsoft.Json.JsonException
struct JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD;
// Solana.Unity.KeyStore.Model.KdfParams
struct KdfParams_t9B1EE8807F717153B82AD7581BFCF8D18273C2EF;
// Org.BouncyCastle.Crypto.Digests.KeccakDigest
struct KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC;
// Solana.Unity.KeyStore.Crypto.KeyStoreCrypto
struct KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7;
// Solana.Unity.KeyStore.Services.KeyStorePbkdf2Service
struct KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1;
// Solana.Unity.KeyStore.Services.KeyStoreScryptService
struct KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Solana.Unity.Wallet.Bip39.Mnemonic
struct Mnemonic_t075F032FA5F0717CC413E47365DAC5B205E70F6D;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF;
// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1;
// Solana.Unity.KeyStore.Model.Pbkdf2Params
struct Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3;
// Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator
struct Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D;
// Solana.Unity.Wallet.PrivateKey
struct PrivateKey_t90586BD92512B1F79CAFAE6DEC4D7B812DE78D41;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_tF293724DEA588C35A7E94C4F4413AEE6438FE9CD;
// Solana.Unity.Wallet.PublicKey
struct PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751;
// Solana.Unity.KeyStore.Crypto.RandomBytesGenerator
struct RandomBytesGenerator_t436ACB62D55C9778CE8BFACD7928CF7FFC781D89;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Solana.Unity.KeyStore.Crypto.Scrypt
struct Scrypt_tC421E81C853C3F465102F12CFC22427098AF370A;
// Solana.Unity.KeyStore.Model.ScryptParams
struct ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641;
// Solana.Unity.KeyStore.SecretKeyStoreService
struct SecretKeyStoreService_tC995BA9FA5DACB96360A38A12C4820AE12685088;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076;
// System.Runtime.Serialization.SerializationException
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7;
// Org.BouncyCastle.Crypto.Digests.Sha256Digest
struct Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A;
// Solana.Unity.KeyStore.SolanaKeyStoreService
struct SolanaKeyStoreService_t9899B3015AE00FED31BD9E6A0E0C2DE337D05FB6;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Solana.Unity.Wallet.Wallet
struct Wallet_tD28CA3630C46B9D3C02F1092B57E29A2AD8C43BD;
// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_t53D97F8AB016B10A00D616C620766D38449D8C98;
// Solana.Unity.KeyStore.Utils/<>c
struct U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CipherUtilities_tDA37832A133C3F502C98888EA1477FBA0EF5F8F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecryptionException_t34C51BD782E922C459D93AD2E4E705E22D92F5C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidKdfException_tBB0DE3AAA56DDBC6703168B247F189C33E6C21EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterUtilities_t2330968701206F630234AD4A65667E7CAEE14EAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RandomBytesGenerator_t436ACB62D55C9778CE8BFACD7928CF7FFC781D89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Wallet_tD28CA3630C46B9D3C02F1092B57E29A2AD8C43BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral24B0B97B3E8D6A36FF26BD81423363B53D42F503;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral423ACA01AC170A50869ECDEF572CD96995576718;
IL2CPP_EXTERN_C String_t* _stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84;
IL2CPP_EXTERN_C String_t* _stringLiteral4453DFAF2D4404421C7655A74682810B84BB4273;
IL2CPP_EXTERN_C String_t* _stringLiteral4D2C1C959A238B46BE96520170F27554B7770608;
IL2CPP_EXTERN_C String_t* _stringLiteral4E6231226F0A62484622AE51964EB5710BB528F9;
IL2CPP_EXTERN_C String_t* _stringLiteral5A3E3977D9F8F8451C8A37C8447C7FEBBFC3DBF5;
IL2CPP_EXTERN_C String_t* _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260;
IL2CPP_EXTERN_C String_t* _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA;
IL2CPP_EXTERN_C String_t* _stringLiteral70C6D80A1C9DC0AE77AA63E1DC135F76ED9B37E0;
IL2CPP_EXTERN_C String_t* _stringLiteral728977F71296CFAFD99E1AB9556CDB5900C1F9C7;
IL2CPP_EXTERN_C String_t* _stringLiteral7388028DFD0988112838E6C1EA125965F1E17235;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057;
IL2CPP_EXTERN_C String_t* _stringLiteral90AF97DD8EF1877A399A4D1D1AF32DE07CB7CA27;
IL2CPP_EXTERN_C String_t* _stringLiteral964A115C9844FDC3CAB0DA4CB724F1C996223905;
IL2CPP_EXTERN_C String_t* _stringLiteral9872E3E66D46ECD9B57AC933AD07A9F70CC9C289;
IL2CPP_EXTERN_C String_t* _stringLiteral99C165894B2900048144F5DEF682937FE73CA541;
IL2CPP_EXTERN_C String_t* _stringLiteral9CBB35F28A07682E1B5EF20C0A52D591F38201CB;
IL2CPP_EXTERN_C String_t* _stringLiteralA3400C8DC0F81D38A7B6E87AE8E044D15A824F75;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralAC78E78B6EC5C50ADC67D977E0F4C67424995CE6;
IL2CPP_EXTERN_C String_t* _stringLiteralB144512DA9AA6B91993CE8E07E163EA3FF0A440A;
IL2CPP_EXTERN_C String_t* _stringLiteralB7248681F5E1332CF3625028F368C8C55C58D51C;
IL2CPP_EXTERN_C String_t* _stringLiteralB9C2DA9A9075BAFFE0F756EE767F13E62BE6C6AF;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC2E9AD187E8DFB29B1A11B345B6033D077A751E1;
IL2CPP_EXTERN_C String_t* _stringLiteralC5C871F485807C4DC72F10C59B4C2BC67AEAAD47;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDEF710A7FE8B1F687BE0C4888B5002E9635CE519;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73;
IL2CPP_EXTERN_C String_t* _stringLiteralF5EB413ECFFF3BAE3AD68F77F0BE96461A826D77;
IL2CPP_EXTERN_C String_t* _stringLiteralFA8F76AD92C6571280E05F49F1888F46A6DE8B56;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_CipherParams_m92B8C920DB36D8E1DF44BF7A964B071E75836459_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_CipherParams_m991D219D4E2ECCEF6150167AE479C696698E0AEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_CipherText_mA165D66076D43B9C3B0C2FFC460EC9000D5462E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_CipherText_mB4179887B2F94F01728C5B3465CC9293812203C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_Kdfparams_m97D42C1BCB670D971801CF9ED1EACC0B7D47015B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_Kdfparams_mDD58CA9FB4D665B4FB90E89DF91633A278E133F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_Mac_m058F6F3F2B75E29229BAD6970850F2D0FBEB4E7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_Mac_m79172E2646852C3A38B0CF48705D253F56A91CB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisString_t_m2052FCC7ADC9755B1FCA666EB30114DE80CCF1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisJObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_m9E591C06E7D85000E58316F90B1625BB0C90C200_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisKeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500_mD3344E77F0601A2580A60BF527ADDB6D3C6715E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisKeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383_m65F85BB1BF9E6F0628A670D99DB425E00BABA31F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreCrypto_GenerateDerivedScryptKey_mDBEE6DBC9C461B7658582053A55DCB7A5441EBF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreCrypto_ValidateMac_m1C97DF4502ED3DAAC0A021F1666FB103E6B6F6A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreKdfChecker_GetKdfTypeFromJson_m621DECCF73516C14F63E89E858A408914D3BFA9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreKdfChecker_GetKeyStoreKdfType_m1DCFAD0ABD05B77A540D5A6C81C75684DCF83EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStorePbkdf2Service_DecryptKeyStore_mBF59231A99D3209880089DC044E5295968BDDB6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreScryptService_DecryptKeyStore_mE34F6122DCCA1E1AB2BC67515384BB270BFE6CEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m399C882B266BE3C62E1FE1BC0DEB221C44ECEFC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreServiceBase_1_DecryptKeyStoreFromJson_mDB7BDB7504E66FB5D9100AA58BC5B394CD072C7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreServiceBase_1_EncryptAndGenerateKeyStoreAsJson_mC564F9F70B18E9591033B4C3B3BFF1ED47681867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreServiceBase_1__ctor_m0EF74083BD8BD5653E51F12200C9EF1263785FC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreServiceBase_1__ctor_m64D65982ED2BF1F1A5B84B72D8335796ABED0915_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreServiceBase_1__ctor_m79B2E15596108DA36A52978AFBC77C84B5D10256_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreServiceBase_1__ctor_m7F3CB4CACCABC655A1995D24D909B56F6C401669_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreServiceBase_1__ctor_m8CD9FDCC16BDE402C7B274CEB84F7611796B7EDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreServiceBase_1__ctor_mA5DA170DFCD4089769906FCF478977AC11F502B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_get_Crypto_m0292B2F1761671D32F937626E7E3CFDCE12BAD0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_get_Crypto_mF8F2F9EAD196AC7E6D73BFBD84527ACF5DEB27DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCA39BDFF0515AAF2D5364E2F2EBEFB3A45DC065B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SecretKeyStoreService_DecryptKeyStoreFromFile_mCC116DE87FED3417E550C9D4D1221879DAA25D72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SecretKeyStoreService_DecryptKeyStoreFromJson_m0E707349D1DD8758B51E1044619CBB948B2812A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SecretKeyStoreService_EncryptAndGenerateDefaultKeyStoreAsJson_m884049623B626CB690B437836CF33FD3B4B39B2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SecretKeyStoreService_GenerateUtcFileName_m6B465B6ACB1744423F34FBF91B9D0BCB16ECA21C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SecretKeyStoreService_GetAddressFromKeyStore_mC10FAE99D4D51C190B38E4868F5EADE19610679A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Join_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m201C4BB68BF4DFE8E4347E7E2BA72E35663E93D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToHexU3Eb__3_0_mA0F1D18215AA956B4E29757378C80F8E14D770F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utils_FromCharacterToByte_m1151399A00F7107E6FC7E189E2DBBB1890584A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utils_FromStringByteArray_mBFAD20DAEB0A1DDCC7EA28B985A9273A82951C92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utils_HexToByteArray_m9A86A9ECE12C375E76D81441E40654F4ACC582E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2F5062625349D145FFCCBA41EFBFD3689542676A 
{
};

// Solana.Unity.KeyStore.Model.CryptoInfo`1<System.Object>
struct CryptoInfo_1_t8C7DE9ACDBDBCC2C738DCCBCED86CE917D30A0BD  : public RuntimeObject
{
	// System.String Solana.Unity.KeyStore.Model.CryptoInfo`1::<Cipher>k__BackingField
	String_t* ___U3CCipherU3Ek__BackingField_0;
	// System.String Solana.Unity.KeyStore.Model.CryptoInfo`1::<CipherText>k__BackingField
	String_t* ___U3CCipherTextU3Ek__BackingField_1;
	// Solana.Unity.KeyStore.Model.CipherParams Solana.Unity.KeyStore.Model.CryptoInfo`1::<CipherParams>k__BackingField
	CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213* ___U3CCipherParamsU3Ek__BackingField_2;
	// System.String Solana.Unity.KeyStore.Model.CryptoInfo`1::<Kdf>k__BackingField
	String_t* ___U3CKdfU3Ek__BackingField_3;
	// System.String Solana.Unity.KeyStore.Model.CryptoInfo`1::<Mac>k__BackingField
	String_t* ___U3CMacU3Ek__BackingField_4;
	// TKdfParams Solana.Unity.KeyStore.Model.CryptoInfo`1::<Kdfparams>k__BackingField
	RuntimeObject* ___U3CKdfparamsU3Ek__BackingField_5;
};

// Solana.Unity.KeyStore.Model.CryptoInfo`1<Solana.Unity.KeyStore.Model.Pbkdf2Params>
struct CryptoInfo_1_t5FF286FC76D8F0321050A4F6477DEE7CD6E5B210  : public RuntimeObject
{
	// System.String Solana.Unity.KeyStore.Model.CryptoInfo`1::<Cipher>k__BackingField
	String_t* ___U3CCipherU3Ek__BackingField_0;
	// System.String Solana.Unity.KeyStore.Model.CryptoInfo`1::<CipherText>k__BackingField
	String_t* ___U3CCipherTextU3Ek__BackingField_1;
	// Solana.Unity.KeyStore.Model.CipherParams Solana.Unity.KeyStore.Model.CryptoInfo`1::<CipherParams>k__BackingField
	CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213* ___U3CCipherParamsU3Ek__BackingField_2;
	// System.String Solana.Unity.KeyStore.Model.CryptoInfo`1::<Kdf>k__BackingField
	String_t* ___U3CKdfU3Ek__BackingField_3;
	// System.String Solana.Unity.KeyStore.Model.CryptoInfo`1::<Mac>k__BackingField
	String_t* ___U3CMacU3Ek__BackingField_4;
	// TKdfParams Solana.Unity.KeyStore.Model.CryptoInfo`1::<Kdfparams>k__BackingField
	Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* ___U3CKdfparamsU3Ek__BackingField_5;
};

// Solana.Unity.KeyStore.Model.CryptoInfo`1<Solana.Unity.KeyStore.Model.ScryptParams>
struct CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB  : public RuntimeObject
{
	// System.String Solana.Unity.KeyStore.Model.CryptoInfo`1::<Cipher>k__BackingField
	String_t* ___U3CCipherU3Ek__BackingField_0;
	// System.String Solana.Unity.KeyStore.Model.CryptoInfo`1::<CipherText>k__BackingField
	String_t* ___U3CCipherTextU3Ek__BackingField_1;
	// Solana.Unity.KeyStore.Model.CipherParams Solana.Unity.KeyStore.Model.CryptoInfo`1::<CipherParams>k__BackingField
	CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213* ___U3CCipherParamsU3Ek__BackingField_2;
	// System.String Solana.Unity.KeyStore.Model.CryptoInfo`1::<Kdf>k__BackingField
	String_t* ___U3CKdfU3Ek__BackingField_3;
	// System.String Solana.Unity.KeyStore.Model.CryptoInfo`1::<Mac>k__BackingField
	String_t* ___U3CMacU3Ek__BackingField_4;
	// TKdfParams Solana.Unity.KeyStore.Model.CryptoInfo`1::<Kdfparams>k__BackingField
	ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* ___U3CKdfparamsU3Ek__BackingField_5;
};

// Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1<Solana.Unity.KeyStore.Model.Pbkdf2Params>
struct KeyStoreServiceBase_1_tEFA72F0803DD15098A4EC34A66D8BFE43CD212D8  : public RuntimeObject
{
	// Solana.Unity.KeyStore.Crypto.KeyStoreCrypto Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1::KeyStoreCrypto
	KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* ___KeyStoreCrypto_1;
	// Solana.Unity.KeyStore.Crypto.IRandomBytesGenerator Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1::RandomBytesGenerator
	RuntimeObject* ___RandomBytesGenerator_2;
};

// Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1<Solana.Unity.KeyStore.Model.ScryptParams>
struct KeyStoreServiceBase_1_t9E28408AE50D30E487A114F2A8FA68EEA6390FD7  : public RuntimeObject
{
	// Solana.Unity.KeyStore.Crypto.KeyStoreCrypto Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1::KeyStoreCrypto
	KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* ___KeyStoreCrypto_1;
	// Solana.Unity.KeyStore.Crypto.IRandomBytesGenerator Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1::RandomBytesGenerator
	RuntimeObject* ___RandomBytesGenerator_2;
};

// Solana.Unity.KeyStore.Model.KeyStore`1<System.Object>
struct KeyStore_1_t219BD66CB42D8406C85E77D68ED903BF7BFB3603  : public RuntimeObject
{
	// Solana.Unity.KeyStore.Model.CryptoInfo`1<TKdfParams> Solana.Unity.KeyStore.Model.KeyStore`1::<Crypto>k__BackingField
	CryptoInfo_1_t8C7DE9ACDBDBCC2C738DCCBCED86CE917D30A0BD* ___U3CCryptoU3Ek__BackingField_0;
	// System.String Solana.Unity.KeyStore.Model.KeyStore`1::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_1;
	// System.String Solana.Unity.KeyStore.Model.KeyStore`1::<Address>k__BackingField
	String_t* ___U3CAddressU3Ek__BackingField_2;
	// System.Int32 Solana.Unity.KeyStore.Model.KeyStore`1::<Version>k__BackingField
	int32_t ___U3CVersionU3Ek__BackingField_3;
};

// Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.Pbkdf2Params>
struct KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383  : public RuntimeObject
{
	// Solana.Unity.KeyStore.Model.CryptoInfo`1<TKdfParams> Solana.Unity.KeyStore.Model.KeyStore`1::<Crypto>k__BackingField
	CryptoInfo_1_t5FF286FC76D8F0321050A4F6477DEE7CD6E5B210* ___U3CCryptoU3Ek__BackingField_0;
	// System.String Solana.Unity.KeyStore.Model.KeyStore`1::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_1;
	// System.String Solana.Unity.KeyStore.Model.KeyStore`1::<Address>k__BackingField
	String_t* ___U3CAddressU3Ek__BackingField_2;
	// System.Int32 Solana.Unity.KeyStore.Model.KeyStore`1::<Version>k__BackingField
	int32_t ___U3CVersionU3Ek__BackingField_3;
};

// Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.ScryptParams>
struct KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500  : public RuntimeObject
{
	// Solana.Unity.KeyStore.Model.CryptoInfo`1<TKdfParams> Solana.Unity.KeyStore.Model.KeyStore`1::<Crypto>k__BackingField
	CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB* ___U3CCryptoU3Ek__BackingField_0;
	// System.String Solana.Unity.KeyStore.Model.KeyStore`1::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_1;
	// System.String Solana.Unity.KeyStore.Model.KeyStore`1::<Address>k__BackingField
	String_t* ___U3CAddressU3Ek__BackingField_2;
	// System.Int32 Solana.Unity.KeyStore.Model.KeyStore`1::<Version>k__BackingField
	int32_t ___U3CVersionU3Ek__BackingField_3;
};

// Solana.Unity.Wallet.Account
struct Account_t15F1801E39C4C126421D353BFA50F8BD35957596  : public RuntimeObject
{
	// Solana.Unity.Wallet.PrivateKey Solana.Unity.Wallet.Account::<PrivateKey>k__BackingField
	PrivateKey_t90586BD92512B1F79CAFAE6DEC4D7B812DE78D41* ___U3CPrivateKeyU3Ek__BackingField_0;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Wallet.Account::<PublicKey>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CPublicKeyU3Ek__BackingField_1;
};
struct Il2CppArrayBounds;

// Solana.Unity.KeyStore.Model.CipherParams
struct CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213  : public RuntimeObject
{
	// System.String Solana.Unity.KeyStore.Model.CipherParams::<Iv>k__BackingField
	String_t* ___U3CIvU3Ek__BackingField_0;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// Org.BouncyCastle.Crypto.Digests.GeneralDigest
struct GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.GeneralDigest::xBuf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___xBuf_1;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.GeneralDigest::xBufOff
	int32_t ___xBufOff_2;
	// System.Int64 Org.BouncyCastle.Crypto.Digests.GeneralDigest::byteCount
	int64_t ___byteCount_3;
};

// System.Runtime.CompilerServices.IsExternalInit
struct IsExternalInit_t8D4758477324361BA86C873E8D1B3F90F0958696  : public RuntimeObject
{
};

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3  : public RuntimeObject
{
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A* ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject* ____annotations_4;
};

struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_StaticFields
{
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46* ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BigIntegerTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___StringTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___GuidTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___TimeSpanTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___UriTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___CharTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___DateTimeTypes_13;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BytesTypes_14;
};

// Solana.Unity.KeyStore.Serialization.JsonKeyStorePbkdf2Serializer
struct JsonKeyStorePbkdf2Serializer_t4B679FC811F75BAFCA887B139F23CC3F3E3D3098  : public RuntimeObject
{
};

// Solana.Unity.KeyStore.Serialization.JsonKeyStoreScryptSerializer
struct JsonKeyStoreScryptSerializer_t4D105C5BE1DCE93C0184AB642C29F947DFEB36ED  : public RuntimeObject
{
};

// Solana.Unity.KeyStore.Model.KdfParams
struct KdfParams_t9B1EE8807F717153B82AD7581BFCF8D18273C2EF  : public RuntimeObject
{
	// System.Int32 Solana.Unity.KeyStore.Model.KdfParams::<Dklen>k__BackingField
	int32_t ___U3CDklenU3Ek__BackingField_0;
	// System.String Solana.Unity.KeyStore.Model.KdfParams::<Salt>k__BackingField
	String_t* ___U3CSaltU3Ek__BackingField_1;
};

// Org.BouncyCastle.Crypto.Digests.KeccakDigest
struct KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8  : public RuntimeObject
{
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.KeccakDigest::state
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___state_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.KeccakDigest::dataQueue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dataQueue_2;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::rate
	int32_t ___rate_3;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::bitsInQueue
	int32_t ___bitsInQueue_4;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::fixedOutputLength
	int32_t ___fixedOutputLength_5;
	// System.Boolean Org.BouncyCastle.Crypto.Digests.KeccakDigest::squeezing
	bool ___squeezing_6;
};

struct KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_StaticFields
{
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.KeccakDigest::KeccakRoundConstants
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___KeccakRoundConstants_0;
};

// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::key
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key_0;
};

// Solana.Unity.KeyStore.Crypto.KeyStoreCrypto
struct KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7  : public RuntimeObject
{
};

// Solana.Unity.KeyStore.KeyStoreKdfChecker
struct KeyStoreKdfChecker_tAFD654AE0AE52867AED94BD4352950B324F8AE9F  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::parameters
	RuntimeObject* ___parameters_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::iv
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv_1;
};

// Org.BouncyCastle.Crypto.PbeParametersGenerator
struct PbeParametersGenerator_t52F4B2C45D5DF5393DAF81BA17BA7CE1BA770D9E  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.PbeParametersGenerator::mPassword
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mPassword_0;
	// System.Byte[] Org.BouncyCastle.Crypto.PbeParametersGenerator::mSalt
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mSalt_1;
	// System.Int32 Org.BouncyCastle.Crypto.PbeParametersGenerator::mIterationCount
	int32_t ___mIterationCount_2;
};

// Solana.Unity.Wallet.PrivateKey
struct PrivateKey_t90586BD92512B1F79CAFAE6DEC4D7B812DE78D41  : public RuntimeObject
{
	// System.String Solana.Unity.Wallet.PrivateKey::_key
	String_t* ____key_1;
	// System.Byte[] Solana.Unity.Wallet.PrivateKey::_keyBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____keyBytes_2;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
};

// Solana.Unity.KeyStore.Crypto.RandomBytesGenerator
struct RandomBytesGenerator_t436ACB62D55C9778CE8BFACD7928CF7FFC781D89  : public RuntimeObject
{
};

struct RandomBytesGenerator_t436ACB62D55C9778CE8BFACD7928CF7FFC781D89_StaticFields
{
	// Org.BouncyCastle.Security.SecureRandom Solana.Unity.KeyStore.Crypto.RandomBytesGenerator::Random
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___Random_0;
};

// Solana.Unity.KeyStore.Crypto.Scrypt
struct Scrypt_tC421E81C853C3F465102F12CFC22427098AF370A  : public RuntimeObject
{
};

// Solana.Unity.KeyStore.SecretKeyStoreService
struct SecretKeyStoreService_tC995BA9FA5DACB96360A38A12C4820AE12685088  : public RuntimeObject
{
	// Solana.Unity.KeyStore.Services.KeyStoreScryptService Solana.Unity.KeyStore.SecretKeyStoreService::_keyStoreScryptService
	KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436* ____keyStoreScryptService_0;
	// Solana.Unity.KeyStore.Services.KeyStorePbkdf2Service Solana.Unity.KeyStore.SecretKeyStoreService::_keyStorePbkdf2Service
	KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1* ____keyStorePbkdf2Service_1;
};

// Solana.Unity.KeyStore.SolanaKeyStoreService
struct SolanaKeyStoreService_t9899B3015AE00FED31BD9E6A0E0C2DE337D05FB6  : public RuntimeObject
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

// Solana.Unity.KeyStore.Utils
struct Utils_t5900C32D71AC3F9007C00C2732B01133F0D30CB5  : public RuntimeObject
{
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

// Solana.Unity.Wallet.Wallet
struct Wallet_tD28CA3630C46B9D3C02F1092B57E29A2AD8C43BD  : public RuntimeObject
{
	// Solana.Unity.Wallet.SeedMode Solana.Unity.Wallet.Wallet::_seedMode
	int32_t ____seedMode_1;
	// System.Byte[] Solana.Unity.Wallet.Wallet::_seed
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____seed_2;
	// Solana.Unity.Wallet.Ed25519Bip32 Solana.Unity.Wallet.Wallet::_ed25519Bip32
	Ed25519Bip32_t0C7B700FA66BDBC24D1D4D036FE4ADF4C7DECAF3* ____ed25519Bip32_3;
	// System.String Solana.Unity.Wallet.Wallet::<Passphrase>k__BackingField
	String_t* ___U3CPassphraseU3Ek__BackingField_4;
	// Solana.Unity.Wallet.Account Solana.Unity.Wallet.Wallet::<Account>k__BackingField
	Account_t15F1801E39C4C126421D353BFA50F8BD35957596* ___U3CAccountU3Ek__BackingField_5;
	// Solana.Unity.Wallet.Bip39.Mnemonic Solana.Unity.Wallet.Wallet::<Mnemonic>k__BackingField
	Mnemonic_t075F032FA5F0717CC413E47365DAC5B205E70F6D* ___U3CMnemonicU3Ek__BackingField_6;
};

// Solana.Unity.KeyStore.Utils/<>c
struct U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E  : public RuntimeObject
{
};

struct U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E_StaticFields
{
	// Solana.Unity.KeyStore.Utils/<>c Solana.Unity.KeyStore.Utils/<>c::<>9
	U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E* ___U3CU3E9_0;
	// System.Func`2<System.Byte,System.String> Solana.Unity.KeyStore.Utils/<>c::<>9__3_0
	Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___U3CU3E9__3_0_1;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A  : public JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3
{
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616* ____listChanged_15;
	// System.ComponentModel.AddingNewEventHandler Newtonsoft.Json.Linq.JContainer::_addingNew
	AddingNewEventHandler_tD9BAC60F604446ED14967643F63A83CE2A5C3701* ____addingNew_16;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* ____collectionChanged_17;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject* ____syncRoot_18;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_19;
};

// Solana.Unity.KeyStore.Services.KeyStorePbkdf2Service
struct KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1  : public KeyStoreServiceBase_1_tEFA72F0803DD15098A4EC34A66D8BFE43CD212D8
{
};

// Solana.Unity.KeyStore.Services.KeyStoreScryptService
struct KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436  : public KeyStoreServiceBase_1_t9E28408AE50D30E487A114F2A8FA68EEA6390FD7
{
};

// Solana.Unity.KeyStore.Model.Pbkdf2Params
struct Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3  : public KdfParams_t9B1EE8807F717153B82AD7581BFCF8D18273C2EF
{
	// System.Int32 Solana.Unity.KeyStore.Model.Pbkdf2Params::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_2;
	// System.String Solana.Unity.KeyStore.Model.Pbkdf2Params::<Prf>k__BackingField
	String_t* ___U3CPrfU3Ek__BackingField_3;
};

// Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator
struct Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D  : public PbeParametersGenerator_t52F4B2C45D5DF5393DAF81BA17BA7CE1BA770D9E
{
	// Org.BouncyCastle.Crypto.IMac Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator::hMac
	RuntimeObject* ___hMac_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator::state
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___state_4;
};

// Solana.Unity.KeyStore.Model.ScryptParams
struct ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641  : public KdfParams_t9B1EE8807F717153B82AD7581BFCF8D18273C2EF
{
	// System.Int32 Solana.Unity.KeyStore.Model.ScryptParams::<N>k__BackingField
	int32_t ___U3CNU3Ek__BackingField_2;
	// System.Int32 Solana.Unity.KeyStore.Model.ScryptParams::<R>k__BackingField
	int32_t ___U3CRU3Ek__BackingField_3;
	// System.Int32 Solana.Unity.KeyStore.Model.ScryptParams::<P>k__BackingField
	int32_t ___U3CPU3Ek__BackingField_4;
};

// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076  : public Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8
{
	// Org.BouncyCastle.Crypto.Prng.IRandomGenerator Org.BouncyCastle.Security.SecureRandom::generator
	RuntimeObject* ___generator_10;
};

struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_StaticFields
{
	// System.Int64 Org.BouncyCastle.Security.SecureRandom::counter
	int64_t ___counter_8;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Security.SecureRandom::master
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___master_9;
	// System.Double Org.BouncyCastle.Security.SecureRandom::DoubleScale
	double ___DoubleScale_11;
};

// Org.BouncyCastle.Crypto.Digests.Sha256Digest
struct Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A  : public GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7
{
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H1
	uint32_t ___H1_5;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H2
	uint32_t ___H2_6;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H3
	uint32_t ___H3_7;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H4
	uint32_t ___H4_8;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H5
	uint32_t ___H5_9;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H6
	uint32_t ___H6_10;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H7
	uint32_t ___H7_11;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H8
	uint32_t ___H8_12;
	// System.UInt32[] Org.BouncyCastle.Crypto.Digests.Sha256Digest::X
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___X_13;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::xOff
	int32_t ___xOff_14;
};

struct Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_StaticFields
{
	// System.UInt32[] Org.BouncyCastle.Crypto.Digests.Sha256Digest::K
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___K_15;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// System.ByReference`1<System.Char>
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
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

// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1  : public JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A
{
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632* ____properties_20;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_21;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_tF293724DEA588C35A7E94C4F4413AEE6438FE9CD* ___PropertyChanging_22;
};

// Newtonsoft.Json.Linq.JProperty
struct JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4  : public JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A
{
	// Newtonsoft.Json.Linq.JProperty/JPropertyList Newtonsoft.Json.Linq.JProperty::_content
	JPropertyList_t53D97F8AB016B10A00D616C620766D38449D8C98* ____content_20;
	// System.String Newtonsoft.Json.Linq.JProperty::_name
	String_t* ____name_21;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// System.ReadOnlySpan`1<System.Char>
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// Solana.Unity.KeyStore.Exceptions.DecryptionException
struct DecryptionException_t34C51BD782E922C459D93AD2E4E705E22D92F5C3  : public Exception_t
{
};

// Solana.Unity.KeyStore.Exceptions.InvalidKdfException
struct InvalidKdfException_tBB0DE3AAA56DDBC6703168B247F189C33E6C21EF  : public Exception_t
{
};

// Newtonsoft.Json.JsonException
struct JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD  : public Exception_t
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// System.Func`2<System.Byte,System.String>
struct Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Runtime.Serialization.SerializationException
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_StaticFields
{
	// System.String System.Runtime.Serialization.SerializationException::s_nullMessage
	String_t* ___s_nullMessage_18;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared (String_t* ___value0, const RuntimeMethod* method) ;
// System.Byte[] Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1<System.Object>::DecryptKeyStoreFromJson(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m6B452B4CED014724BA4ECFB4BD9281E19DAB0617_gshared (KeyStoreServiceBase_1_tE6BB1E823F653515286C59A960B5E410C04524F5* __this, String_t* ___password0, String_t* ___json1, const RuntimeMethod* method) ;
// System.String Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1<System.Object>::EncryptAndGenerateKeyStoreAsJson(System.String,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStoreServiceBase_1_EncryptAndGenerateKeyStoreAsJson_m6C36E44DE8CD29198C529DBC67B575E6A8429E8B_gshared (KeyStoreServiceBase_1_tE6BB1E823F653515286C59A960B5E410C04524F5* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___privateKey1, String_t* ___address2, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Byte,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m356DD0E5E7CE04DB0252EF251F0D812872A08C8B_gshared (Func_2_t6E66BCD31592FAA3B441B68BF938E37260DCFA3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Byte,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_mC1471D425731DC6CDDA682B4426C72DFFFC8A781_gshared (RuntimeObject* ___source0, Func_2_t6E66BCD31592FAA3B441B68BF938E37260DCFA3C* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.String System.String::Join<System.Byte>(System.String,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m201C4BB68BF4DFE8E4347E7E2BA72E35663E93D2_gshared (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.ReadOnlySpan`1<System.Char>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Char>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
// System.Int32 System.MemoryExtensions::IndexOf<System.Char>(System.ReadOnlySpan`1<T>,T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCA39BDFF0515AAF2D5364E2F2EBEFB3A45DC065B_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, Il2CppChar ___value1, const RuntimeMethod* method) ;
// System.Void Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreServiceBase_1__ctor_mC4ACC3900E8EF18088C5E4622765538A91C86466_gshared (KeyStoreServiceBase_1_tE6BB1E823F653515286C59A960B5E410C04524F5* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1<System.Object>::.ctor(Solana.Unity.KeyStore.Crypto.IRandomBytesGenerator,Solana.Unity.KeyStore.Crypto.KeyStoreCrypto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreServiceBase_1__ctor_m0C8E8DED1CA7DCC4C962ABC8DFECE818D6DF5172_gshared (KeyStoreServiceBase_1_tE6BB1E823F653515286C59A960B5E410C04524F5* __this, RuntimeObject* ___randomBytesGenerator0, KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* ___keyStoreCrypto1, const RuntimeMethod* method) ;
// System.Void Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1<System.Object>::.ctor(Solana.Unity.KeyStore.Crypto.IRandomBytesGenerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreServiceBase_1__ctor_m650E90C7DAD083849E0116EA890F219FE7FBDE56_gshared (KeyStoreServiceBase_1_tE6BB1E823F653515286C59A960B5E410C04524F5* __this, RuntimeObject* ___randomBytesGenerator0, const RuntimeMethod* method) ;
// Solana.Unity.KeyStore.Model.CryptoInfo`1<TKdfParams> Solana.Unity.KeyStore.Model.KeyStore`1<System.Object>::get_Crypto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CryptoInfo_1_t8C7DE9ACDBDBCC2C738DCCBCED86CE917D30A0BD* KeyStore_1_get_Crypto_mC5DFB56C3C1286DE63D2483F82F8C2C932EF5002_gshared_inline (KeyStore_1_t219BD66CB42D8406C85E77D68ED903BF7BFB3603* __this, const RuntimeMethod* method) ;
// System.String Solana.Unity.KeyStore.Model.CryptoInfo`1<System.Object>::get_Mac()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfo_1_get_Mac_mF63E86062BB4B016FE5C5A4F4A2705D6A0C4816B_gshared_inline (CryptoInfo_1_t8C7DE9ACDBDBCC2C738DCCBCED86CE917D30A0BD* __this, const RuntimeMethod* method) ;
// Solana.Unity.KeyStore.Model.CipherParams Solana.Unity.KeyStore.Model.CryptoInfo`1<System.Object>::get_CipherParams()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213* CryptoInfo_1_get_CipherParams_m58F2EB991CBC11D3104B6D9432EB8FA939A765E0_gshared_inline (CryptoInfo_1_t8C7DE9ACDBDBCC2C738DCCBCED86CE917D30A0BD* __this, const RuntimeMethod* method) ;
// System.String Solana.Unity.KeyStore.Model.CryptoInfo`1<System.Object>::get_CipherText()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfo_1_get_CipherText_m01FBFE261DC06DBE2F575CF26C88CC4C1135106E_gshared_inline (CryptoInfo_1_t8C7DE9ACDBDBCC2C738DCCBCED86CE917D30A0BD* __this, const RuntimeMethod* method) ;
// TKdfParams Solana.Unity.KeyStore.Model.CryptoInfo`1<System.Object>::get_Kdfparams()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CryptoInfo_1_get_Kdfparams_m54F3374D0E9FB3F139D960BAECE012B9CD428F1A_gshared_inline (CryptoInfo_1_t8C7DE9ACDBDBCC2C738DCCBCED86CE917D30A0BD* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;

// Newtonsoft.Json.Linq.JProperty Newtonsoft.Json.Linq.JObject::Property(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* JObject_Property_mBC900C047166F06EA67767C1549A829071276412 (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m29A7A39A820BD2EFF57EC051CB305B86C4B81FA9 (JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* JProperty_get_Value_m1D20FFEA7909BF0B835848D5FE9FCA2B08EF07F9 (JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<Newtonsoft.Json.Linq.JObject>(System.String)
inline JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* JsonConvert_DeserializeObject_TisJObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_m9E591C06E7D85000E58316F90B1625BB0C90C200 (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared)(___value0, method);
}
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0 (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String Solana.Unity.KeyStore.KeyStoreKdfChecker::GetKdfTypeFromJson(Newtonsoft.Json.Linq.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStoreKdfChecker_GetKdfTypeFromJson_m621DECCF73516C14F63E89E858A408914D3BFA9C (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___keyStoreDocument0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Solana.Unity.KeyStore.Exceptions.InvalidKdfException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidKdfException__ctor_mF106D0E636D23179E8C70B34C68F27F298C69FAE (InvalidKdfException_tBB0DE3AAA56DDBC6703168B247F189C33E6C21EF* __this, String_t* ___kdf0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.KeyStore.Services.KeyStorePbkdf2Service::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStorePbkdf2Service__ctor_m94D3FCE6E28056535215800DA2AA23A2B10E1760 (KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.KeyStore.Services.KeyStoreScryptService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreScryptService__ctor_m71C61FD1FCF67C767C296FD525A231693FB04E86 (KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.IO.StreamReader System.IO.File::OpenText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* File_OpenText_mC22D29C515D26A22FDCB30A021A3033A87F150E6 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Byte[] Solana.Unity.KeyStore.SecretKeyStoreService::DecryptKeyStoreFromJson(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SecretKeyStoreService_DecryptKeyStoreFromJson_m0E707349D1DD8758B51E1044619CBB948B2812A3 (SecretKeyStoreService_tC995BA9FA5DACB96360A38A12C4820AE12685088* __this, String_t* ___password0, String_t* ___json1, const RuntimeMethod* method) ;
// Solana.Unity.KeyStore.Model.KdfType Solana.Unity.KeyStore.KeyStoreKdfChecker::GetKeyStoreKdfType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyStoreKdfChecker_GetKeyStoreKdfType_m1DCFAD0ABD05B77A540D5A6C81C75684DCF83EDA (String_t* ___json0, const RuntimeMethod* method) ;
// System.Byte[] Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1<Solana.Unity.KeyStore.Model.Pbkdf2Params>::DecryptKeyStoreFromJson(System.String,System.String)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m399C882B266BE3C62E1FE1BC0DEB221C44ECEFC2 (KeyStoreServiceBase_1_tEFA72F0803DD15098A4EC34A66D8BFE43CD212D8* __this, String_t* ___password0, String_t* ___json1, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (KeyStoreServiceBase_1_tEFA72F0803DD15098A4EC34A66D8BFE43CD212D8*, String_t*, String_t*, const RuntimeMethod*))KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m6B452B4CED014724BA4ECFB4BD9281E19DAB0617_gshared)(__this, ___password0, ___json1, method);
}
// System.Byte[] Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1<Solana.Unity.KeyStore.Model.ScryptParams>::DecryptKeyStoreFromJson(System.String,System.String)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreServiceBase_1_DecryptKeyStoreFromJson_mDB7BDB7504E66FB5D9100AA58BC5B394CD072C7F (KeyStoreServiceBase_1_t9E28408AE50D30E487A114F2A8FA68EEA6390FD7* __this, String_t* ___password0, String_t* ___json1, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (KeyStoreServiceBase_1_t9E28408AE50D30E487A114F2A8FA68EEA6390FD7*, String_t*, String_t*, const RuntimeMethod*))KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m6B452B4CED014724BA4ECFB4BD9281E19DAB0617_gshared)(__this, ___password0, ___json1, method);
}
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1<Solana.Unity.KeyStore.Model.ScryptParams>::EncryptAndGenerateKeyStoreAsJson(System.String,System.Byte[],System.String)
inline String_t* KeyStoreServiceBase_1_EncryptAndGenerateKeyStoreAsJson_mC564F9F70B18E9591033B4C3B3BFF1ED47681867 (KeyStoreServiceBase_1_t9E28408AE50D30E487A114F2A8FA68EEA6390FD7* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___privateKey1, String_t* ___address2, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyStoreServiceBase_1_t9E28408AE50D30E487A114F2A8FA68EEA6390FD7*, String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t*, const RuntimeMethod*))KeyStoreServiceBase_1_EncryptAndGenerateKeyStoreAsJson_m6C36E44DE8CD29198C529DBC67B575E6A8429E8B_gshared)(__this, ___password0, ___privateKey1, ___address2, method);
}
// System.Byte[] Solana.Unity.KeyStore.Utils::FromStringByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Utils_FromStringByteArray_mBFAD20DAEB0A1DDCC7EA28B985A9273A82951C92 (String_t* ___data0, const RuntimeMethod* method) ;
// Solana.Unity.Wallet.Wallet Solana.Unity.KeyStore.SolanaKeyStoreService::InitializeWallet(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Wallet_tD28CA3630C46B9D3C02F1092B57E29A2AD8C43BD* SolanaKeyStoreService_InitializeWallet_m6E77CF68B64D744D641FCC64DA48DA5EC7AD490C (SolanaKeyStoreService_t9899B3015AE00FED31BD9E6A0E0C2DE337D05FB6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___seed0, String_t* ___passphrase1, const RuntimeMethod* method) ;
// System.String System.IO.File::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_mA4A939F853D573379F7129AFDC469B91E9747BAA (String_t* ___path0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
// Solana.Unity.Wallet.Account Solana.Unity.Wallet.Wallet::get_Account()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Account_t15F1801E39C4C126421D353BFA50F8BD35957596* Wallet_get_Account_m4FDF8DDD87F44E0A1E0163BD647B99CCDF930338_inline (Wallet_tD28CA3630C46B9D3C02F1092B57E29A2AD8C43BD* __this, const RuntimeMethod* method) ;
// Solana.Unity.Wallet.PrivateKey Solana.Unity.Wallet.Account::get_PrivateKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PrivateKey_t90586BD92512B1F79CAFAE6DEC4D7B812DE78D41* Account_get_PrivateKey_m270CD59C61BE230DD42FBF16D96DE6CD05FA7722_inline (Account_t15F1801E39C4C126421D353BFA50F8BD35957596* __this, const RuntimeMethod* method) ;
// System.Byte[] Solana.Unity.Wallet.PrivateKey::get_KeyBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PrivateKey_get_KeyBytes_mB0849F26537B4249A24EFBCDBFC47666FF5A8507 (PrivateKey_t90586BD92512B1F79CAFAE6DEC4D7B812DE78D41* __this, const RuntimeMethod* method) ;
// System.String Solana.Unity.KeyStore.Utils::ToStringByteArray(System.Collections.Generic.IEnumerable`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_ToStringByteArray_m202E44765B954CD3241E8FED7F8E08A210FBC6BD (RuntimeObject* ___bytes0, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077 (String_t* ___path0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Wallet.Wallet::.ctor(System.Byte[],System.String,Solana.Unity.Wallet.SeedMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wallet__ctor_mE3F102F0EE650D317E6C700519E86311A510F6D5 (Wallet_tD28CA3630C46B9D3C02F1092B57E29A2AD8C43BD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___seed0, String_t* ___passphrase1, int32_t ___seedMode2, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Byte Solana.Unity.KeyStore.Utils::FromCharacterToByte(System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Utils_FromCharacterToByte_m1151399A00F7107E6FC7E189E2DBBB1890584A14 (Il2CppChar ___character0, int32_t ___index1, int32_t ___shift2, const RuntimeMethod* method) ;
// System.Byte[] Solana.Unity.KeyStore.Utils::HexToByteArrayInternal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Utils_HexToByteArrayInternal_m0AA30977B9ABCEA1F373AFED0276F42E83D56E86 (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE31CCFC2A6FA296CA9E9C6813112D7850FE682D4 (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Byte,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB31E88A2C3F2063BDBA38CD35564CDC13C344109 (Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m356DD0E5E7CE04DB0252EF251F0D812872A08C8B_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Byte,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisString_t_m2052FCC7ADC9755B1FCA666EB30114DE80CCF1DF (RuntimeObject* ___source0, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E*, const RuntimeMethod*))Enumerable_Select_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_mC1471D425731DC6CDDA682B4426C72DFFFC8A781_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String System.String::Join<System.Byte>(System.String,System.Collections.Generic.IEnumerable`1<T>)
inline String_t* String_Join_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m201C4BB68BF4DFE8E4347E7E2BA72E35663E93D2 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, RuntimeObject*, const RuntimeMethod*))String_Join_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m201C4BB68BF4DFE8E4347E7E2BA72E35663E93D2_gshared)(___separator0, ___values1, method);
}
// System.ReadOnlySpan`1<System.Char> System.MemoryExtensions::AsSpan(System.String,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m8409F3DA0EF95BF6B3A8741E5C56E729B0A824C6_inline (String_t* ___text0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32,System.Int32)
inline ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.String System.ReadOnlySpan`1<System.Char>::ToString()
inline String_t* ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D_gshared)(__this, method);
}
// System.Byte System.Byte::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Byte_Parse_m9ECDF4D955A0A3C47392308CF9DBD50CDFE4F417 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Char>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline)(__this, method);
}
// System.Int32 System.MemoryExtensions::IndexOf<System.Char>(System.ReadOnlySpan`1<T>,T)
inline int32_t MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCA39BDFF0515AAF2D5364E2F2EBEFB3A45DC065B_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, Il2CppChar, const RuntimeMethod*))MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCA39BDFF0515AAF2D5364E2F2EBEFB3A45DC065B_gshared_inline)(___span0, ___value1, method);
}
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void Solana.Unity.KeyStore.Utils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF2B726EF1741A1DA45B842F336AB8E53592E5B81 (U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E* __this, const RuntimeMethod* method) ;
// System.String System.Byte::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310 (uint8_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1<Solana.Unity.KeyStore.Model.Pbkdf2Params>::.ctor()
inline void KeyStoreServiceBase_1__ctor_m8CD9FDCC16BDE402C7B274CEB84F7611796B7EDE (KeyStoreServiceBase_1_tEFA72F0803DD15098A4EC34A66D8BFE43CD212D8* __this, const RuntimeMethod* method)
{
	((  void (*) (KeyStoreServiceBase_1_tEFA72F0803DD15098A4EC34A66D8BFE43CD212D8*, const RuntimeMethod*))KeyStoreServiceBase_1__ctor_mC4ACC3900E8EF18088C5E4622765538A91C86466_gshared)(__this, method);
}
// System.Void Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1<Solana.Unity.KeyStore.Model.Pbkdf2Params>::.ctor(Solana.Unity.KeyStore.Crypto.IRandomBytesGenerator,Solana.Unity.KeyStore.Crypto.KeyStoreCrypto)
inline void KeyStoreServiceBase_1__ctor_mA5DA170DFCD4089769906FCF478977AC11F502B4 (KeyStoreServiceBase_1_tEFA72F0803DD15098A4EC34A66D8BFE43CD212D8* __this, RuntimeObject* ___randomBytesGenerator0, KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* ___keyStoreCrypto1, const RuntimeMethod* method)
{
	((  void (*) (KeyStoreServiceBase_1_tEFA72F0803DD15098A4EC34A66D8BFE43CD212D8*, RuntimeObject*, KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7*, const RuntimeMethod*))KeyStoreServiceBase_1__ctor_m0C8E8DED1CA7DCC4C962ABC8DFECE818D6DF5172_gshared)(__this, ___randomBytesGenerator0, ___keyStoreCrypto1, method);
}
// System.Void Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1<Solana.Unity.KeyStore.Model.Pbkdf2Params>::.ctor(Solana.Unity.KeyStore.Crypto.IRandomBytesGenerator)
inline void KeyStoreServiceBase_1__ctor_m0EF74083BD8BD5653E51F12200C9EF1263785FC1 (KeyStoreServiceBase_1_tEFA72F0803DD15098A4EC34A66D8BFE43CD212D8* __this, RuntimeObject* ___randomBytesGenerator0, const RuntimeMethod* method)
{
	((  void (*) (KeyStoreServiceBase_1_tEFA72F0803DD15098A4EC34A66D8BFE43CD212D8*, RuntimeObject*, const RuntimeMethod*))KeyStoreServiceBase_1__ctor_m650E90C7DAD083849E0116EA890F219FE7FBDE56_gshared)(__this, ___randomBytesGenerator0, method);
}
// System.Int32 Solana.Unity.KeyStore.Model.Pbkdf2Params::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pbkdf2Params_get_Count_m21F0CC9B7F3FB40F4DF9637B9B5F932E59483FE5_inline (Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* __this, const RuntimeMethod* method) ;
// System.Int32 Solana.Unity.KeyStore.Model.KdfParams::get_Dklen()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KdfParams_get_Dklen_m0DA49F53D2964502070D2078E4E632476C1641B2_inline (KdfParams_t9B1EE8807F717153B82AD7581BFCF8D18273C2EF* __this, const RuntimeMethod* method) ;
// System.Byte[] Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::GeneratePbkdf2Sha256DerivedKey(System.String,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GeneratePbkdf2Sha256DerivedKey_m03A22D5B0A11C905A297ADEC50E9AD79E7A0013C (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, int32_t ___count2, int32_t ___dklen3, const RuntimeMethod* method) ;
// System.Void Solana.Unity.KeyStore.Model.Pbkdf2Params::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pbkdf2Params__ctor_mB7A25632BEB8646C5A23355374C807BB54FDF6D3 (Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* __this, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.KeyStore.Model.KdfParams::set_Dklen(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KdfParams_set_Dklen_m4616AAC32EB9CA8620CDA26733446ABF5FEEA28C_inline (KdfParams_t9B1EE8807F717153B82AD7581BFCF8D18273C2EF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.KeyStore.Model.Pbkdf2Params::set_Count(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pbkdf2Params_set_Count_m34A80FBE8585FB68E6209FC26B06B2C06DEE86D5_inline (Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.KeyStore.Model.Pbkdf2Params::set_Prf(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pbkdf2Params_set_Prf_m9AD34003E7A74690789EC721B321C6DFCEB3BCCC_inline (Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.Pbkdf2Params> Solana.Unity.KeyStore.Serialization.JsonKeyStorePbkdf2Serializer::DeserializePbkdf2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* JsonKeyStorePbkdf2Serializer_DeserializePbkdf2_mA0F8D6B48BEDFAAD7FCF7F985A28B97471E05586 (String_t* ___json0, const RuntimeMethod* method) ;
// System.String Solana.Unity.KeyStore.Serialization.JsonKeyStorePbkdf2Serializer::SerialisePbkdf2(Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.Pbkdf2Params>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonKeyStorePbkdf2Serializer_SerialisePbkdf2_m15B7F6EC1DC247D3EEE7BD6F16AAF5B426C92EF5 (KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* ___pbkdf2KeyStore0, const RuntimeMethod* method) ;
// Solana.Unity.KeyStore.Model.CryptoInfo`1<TKdfParams> Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.Pbkdf2Params>::get_Crypto()
inline CryptoInfo_1_t5FF286FC76D8F0321050A4F6477DEE7CD6E5B210* KeyStore_1_get_Crypto_m0292B2F1761671D32F937626E7E3CFDCE12BAD0B_inline (KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* __this, const RuntimeMethod* method)
{
	return ((  CryptoInfo_1_t5FF286FC76D8F0321050A4F6477DEE7CD6E5B210* (*) (KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383*, const RuntimeMethod*))KeyStore_1_get_Crypto_mC5DFB56C3C1286DE63D2483F82F8C2C932EF5002_gshared_inline)(__this, method);
}
// System.String Solana.Unity.KeyStore.Model.CryptoInfo`1<Solana.Unity.KeyStore.Model.Pbkdf2Params>::get_Mac()
inline String_t* CryptoInfo_1_get_Mac_m79172E2646852C3A38B0CF48705D253F56A91CB6_inline (CryptoInfo_1_t5FF286FC76D8F0321050A4F6477DEE7CD6E5B210* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (CryptoInfo_1_t5FF286FC76D8F0321050A4F6477DEE7CD6E5B210*, const RuntimeMethod*))CryptoInfo_1_get_Mac_mF63E86062BB4B016FE5C5A4F4A2705D6A0C4816B_gshared_inline)(__this, method);
}
// System.Byte[] Solana.Unity.KeyStore.Utils::HexToByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Utils_HexToByteArray_m9A86A9ECE12C375E76D81441E40654F4ACC582E9 (String_t* ___value0, const RuntimeMethod* method) ;
// Solana.Unity.KeyStore.Model.CipherParams Solana.Unity.KeyStore.Model.CryptoInfo`1<Solana.Unity.KeyStore.Model.Pbkdf2Params>::get_CipherParams()
inline CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213* CryptoInfo_1_get_CipherParams_m92B8C920DB36D8E1DF44BF7A964B071E75836459_inline (CryptoInfo_1_t5FF286FC76D8F0321050A4F6477DEE7CD6E5B210* __this, const RuntimeMethod* method)
{
	return ((  CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213* (*) (CryptoInfo_1_t5FF286FC76D8F0321050A4F6477DEE7CD6E5B210*, const RuntimeMethod*))CryptoInfo_1_get_CipherParams_m58F2EB991CBC11D3104B6D9432EB8FA939A765E0_gshared_inline)(__this, method);
}
// System.String Solana.Unity.KeyStore.Model.CipherParams::get_Iv()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CipherParams_get_Iv_m20942DD64A8B25300F2D6A75344D693C48C33263_inline (CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213* __this, const RuntimeMethod* method) ;
// System.String Solana.Unity.KeyStore.Model.CryptoInfo`1<Solana.Unity.KeyStore.Model.Pbkdf2Params>::get_CipherText()
inline String_t* CryptoInfo_1_get_CipherText_mB4179887B2F94F01728C5B3465CC9293812203C0_inline (CryptoInfo_1_t5FF286FC76D8F0321050A4F6477DEE7CD6E5B210* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (CryptoInfo_1_t5FF286FC76D8F0321050A4F6477DEE7CD6E5B210*, const RuntimeMethod*))CryptoInfo_1_get_CipherText_m01FBFE261DC06DBE2F575CF26C88CC4C1135106E_gshared_inline)(__this, method);
}
// TKdfParams Solana.Unity.KeyStore.Model.CryptoInfo`1<Solana.Unity.KeyStore.Model.Pbkdf2Params>::get_Kdfparams()
inline Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* CryptoInfo_1_get_Kdfparams_mDD58CA9FB4D665B4FB90E89DF91633A278E133F8_inline (CryptoInfo_1_t5FF286FC76D8F0321050A4F6477DEE7CD6E5B210* __this, const RuntimeMethod* method)
{
	return ((  Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* (*) (CryptoInfo_1_t5FF286FC76D8F0321050A4F6477DEE7CD6E5B210*, const RuntimeMethod*))CryptoInfo_1_get_Kdfparams_m54F3374D0E9FB3F139D960BAECE012B9CD428F1A_gshared_inline)(__this, method);
}
// System.String Solana.Unity.KeyStore.Model.KdfParams::get_Salt()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KdfParams_get_Salt_mEA33B92C79AE05757DCB0440F0168E0B80E9A3F4_inline (KdfParams_t9B1EE8807F717153B82AD7581BFCF8D18273C2EF* __this, const RuntimeMethod* method) ;
// System.Byte[] Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::DecryptPbkdf2Sha256(System.String,System.Byte[],System.Byte[],System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_DecryptPbkdf2Sha256_m9EA90B0121ADD4E5ECF2FBF79182CEC5A9133BAB (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipherText3, int32_t ___c4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt5, int32_t ___dklen6, const RuntimeMethod* method) ;
// System.Void Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1<Solana.Unity.KeyStore.Model.ScryptParams>::.ctor()
inline void KeyStoreServiceBase_1__ctor_m79B2E15596108DA36A52978AFBC77C84B5D10256 (KeyStoreServiceBase_1_t9E28408AE50D30E487A114F2A8FA68EEA6390FD7* __this, const RuntimeMethod* method)
{
	((  void (*) (KeyStoreServiceBase_1_t9E28408AE50D30E487A114F2A8FA68EEA6390FD7*, const RuntimeMethod*))KeyStoreServiceBase_1__ctor_mC4ACC3900E8EF18088C5E4622765538A91C86466_gshared)(__this, method);
}
// System.Void Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1<Solana.Unity.KeyStore.Model.ScryptParams>::.ctor(Solana.Unity.KeyStore.Crypto.IRandomBytesGenerator,Solana.Unity.KeyStore.Crypto.KeyStoreCrypto)
inline void KeyStoreServiceBase_1__ctor_m64D65982ED2BF1F1A5B84B72D8335796ABED0915 (KeyStoreServiceBase_1_t9E28408AE50D30E487A114F2A8FA68EEA6390FD7* __this, RuntimeObject* ___randomBytesGenerator0, KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* ___keyStoreCrypto1, const RuntimeMethod* method)
{
	((  void (*) (KeyStoreServiceBase_1_t9E28408AE50D30E487A114F2A8FA68EEA6390FD7*, RuntimeObject*, KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7*, const RuntimeMethod*))KeyStoreServiceBase_1__ctor_m0C8E8DED1CA7DCC4C962ABC8DFECE818D6DF5172_gshared)(__this, ___randomBytesGenerator0, ___keyStoreCrypto1, method);
}
// System.Void Solana.Unity.KeyStore.Services.KeyStoreServiceBase`1<Solana.Unity.KeyStore.Model.ScryptParams>::.ctor(Solana.Unity.KeyStore.Crypto.IRandomBytesGenerator)
inline void KeyStoreServiceBase_1__ctor_m7F3CB4CACCABC655A1995D24D909B56F6C401669 (KeyStoreServiceBase_1_t9E28408AE50D30E487A114F2A8FA68EEA6390FD7* __this, RuntimeObject* ___randomBytesGenerator0, const RuntimeMethod* method)
{
	((  void (*) (KeyStoreServiceBase_1_t9E28408AE50D30E487A114F2A8FA68EEA6390FD7*, RuntimeObject*, const RuntimeMethod*))KeyStoreServiceBase_1__ctor_m650E90C7DAD083849E0116EA890F219FE7FBDE56_gshared)(__this, ___randomBytesGenerator0, method);
}
// System.Byte[] Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::GetPasswordAsBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GetPasswordAsBytes_mAA60A85804EF4263AD01AA9179A251DBF09E5F5C (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, String_t* ___password0, const RuntimeMethod* method) ;
// System.Int32 Solana.Unity.KeyStore.Model.ScryptParams::get_N()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParams_get_N_mDAFBDC59B51BC33BD0D2D5DA35A02F46A6892AE7_inline (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* __this, const RuntimeMethod* method) ;
// System.Int32 Solana.Unity.KeyStore.Model.ScryptParams::get_R()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParams_get_R_mAEF4FF09651BC26B6CD2FAF06DA243E4524EB7DE_inline (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* __this, const RuntimeMethod* method) ;
// System.Int32 Solana.Unity.KeyStore.Model.ScryptParams::get_P()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParams_get_P_mBDCF88ADEF16EA41E4CD384204DD40396CCABBC6_inline (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* __this, const RuntimeMethod* method) ;
// System.Byte[] Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::GenerateDerivedScryptKey(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateDerivedScryptKey_mDBEE6DBC9C461B7658582053A55DCB7A5441EBF4 (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, int32_t ___n2, int32_t ___r3, int32_t ___p4, int32_t ___dkLen5, bool ___checkRandN6, const RuntimeMethod* method) ;
// System.Void Solana.Unity.KeyStore.Model.ScryptParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParams__ctor_m830F04D35EDA0C3E99D92B829DE761CC218F217C (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* __this, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.KeyStore.Model.ScryptParams::set_N(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParams_set_N_m794FE7E2C5C6E8E100E1D2A08697F0DB3BA241AE_inline (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.KeyStore.Model.ScryptParams::set_R(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParams_set_R_mE69905F7655C8EA666EC530E3963D6D2CE1EEA88_inline (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.KeyStore.Model.ScryptParams::set_P(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParams_set_P_m48C0B8CDD3A3462F2EBACED538DD796C962047E7_inline (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* __this, int32_t ___value0, const RuntimeMethod* method) ;
// Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.ScryptParams> Solana.Unity.KeyStore.Serialization.JsonKeyStoreScryptSerializer::DeserializeScrypt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* JsonKeyStoreScryptSerializer_DeserializeScrypt_mB8C5F942F77C18995FA5FF4010CADEE4C166D5CF (String_t* ___json0, const RuntimeMethod* method) ;
// System.String Solana.Unity.KeyStore.Serialization.JsonKeyStoreScryptSerializer::SerializeScrypt(Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.ScryptParams>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonKeyStoreScryptSerializer_SerializeScrypt_m02C3C5FD05219BDE609C7CA7A236691D0B29607D (KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* ___scryptKeyStore0, const RuntimeMethod* method) ;
// Solana.Unity.KeyStore.Model.CryptoInfo`1<TKdfParams> Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.ScryptParams>::get_Crypto()
inline CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB* KeyStore_1_get_Crypto_mF8F2F9EAD196AC7E6D73BFBD84527ACF5DEB27DA_inline (KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* __this, const RuntimeMethod* method)
{
	return ((  CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB* (*) (KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500*, const RuntimeMethod*))KeyStore_1_get_Crypto_mC5DFB56C3C1286DE63D2483F82F8C2C932EF5002_gshared_inline)(__this, method);
}
// System.String Solana.Unity.KeyStore.Model.CryptoInfo`1<Solana.Unity.KeyStore.Model.ScryptParams>::get_Mac()
inline String_t* CryptoInfo_1_get_Mac_m058F6F3F2B75E29229BAD6970850F2D0FBEB4E7D_inline (CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB*, const RuntimeMethod*))CryptoInfo_1_get_Mac_mF63E86062BB4B016FE5C5A4F4A2705D6A0C4816B_gshared_inline)(__this, method);
}
// Solana.Unity.KeyStore.Model.CipherParams Solana.Unity.KeyStore.Model.CryptoInfo`1<Solana.Unity.KeyStore.Model.ScryptParams>::get_CipherParams()
inline CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213* CryptoInfo_1_get_CipherParams_m991D219D4E2ECCEF6150167AE479C696698E0AEA_inline (CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB* __this, const RuntimeMethod* method)
{
	return ((  CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213* (*) (CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB*, const RuntimeMethod*))CryptoInfo_1_get_CipherParams_m58F2EB991CBC11D3104B6D9432EB8FA939A765E0_gshared_inline)(__this, method);
}
// System.String Solana.Unity.KeyStore.Model.CryptoInfo`1<Solana.Unity.KeyStore.Model.ScryptParams>::get_CipherText()
inline String_t* CryptoInfo_1_get_CipherText_mA165D66076D43B9C3B0C2FFC460EC9000D5462E4_inline (CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB*, const RuntimeMethod*))CryptoInfo_1_get_CipherText_m01FBFE261DC06DBE2F575CF26C88CC4C1135106E_gshared_inline)(__this, method);
}
// TKdfParams Solana.Unity.KeyStore.Model.CryptoInfo`1<Solana.Unity.KeyStore.Model.ScryptParams>::get_Kdfparams()
inline ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* CryptoInfo_1_get_Kdfparams_m97D42C1BCB670D971801CF9ED1EACC0B7D47015B_inline (CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB* __this, const RuntimeMethod* method)
{
	return ((  ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* (*) (CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB*, const RuntimeMethod*))CryptoInfo_1_get_Kdfparams_m54F3374D0E9FB3F139D960BAECE012B9CD428F1A_gshared_inline)(__this, method);
}
// System.Byte[] Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::DecryptScrypt(System.String,System.Byte[],System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_DecryptScrypt_m0B2735016A32B9374A3A3AE037603F0C9E331D99 (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipherText3, int32_t ___n4, int32_t ___p5, int32_t ___r6, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt7, int32_t ___dklen8, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.Pbkdf2Params>>(System.String)
inline KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* JsonConvert_DeserializeObject_TisKeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383_m65F85BB1BF9E6F0628A670D99DB425E00BABA31F (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared)(___value0, method);
}
// T Newtonsoft.Json.JsonConvert::DeserializeObject<Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.ScryptParams>>(System.String)
inline KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* JsonConvert_DeserializeObject_TisKeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500_mD3344E77F0601A2580A60BF527ADDB6D3C6715E1 (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared)(___value0, method);
}
// System.String Solana.Unity.KeyStore.Utils::ToHex(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_ToHex_m9E7A369D4F8F99EB22D335057710021158257B32 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.KeyStore.Model.CipherParams::set_Iv(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CipherParams_set_Iv_m8057D32CE1E7366F11CB38E40A229B2EF0B0D198_inline (CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.KeyStore.Model.KdfParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KdfParams__ctor_m3F163FD331826CE7CA11C8D70E3FDAE8AFFB0504 (KdfParams_t9B1EE8807F717153B82AD7581BFCF8D18273C2EF* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Byte[] Solana.Unity.KeyStore.Crypto.Scrypt::CryptoScrypt(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Scrypt_CryptoScrypt_m554A52638B50E68E0C43EB51E756AD49CD6D2EFF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, int32_t ___n2, int32_t ___r3, int32_t ___p4, int32_t ___dkLen5, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___sourceArray0, RuntimeArray* ___destinationArray1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__ctor_m1D83E44DC559F9E747241A63E130AF770D442FCF (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, int32_t ___bitLength0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Byte[] Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::CalculateKeccakHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_CalculateKeccakHash_mB11AE2375DD9A48618858F1788440E76082142ED (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha256Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha256Digest__ctor_m6A98252E0DAF748D5D1BDBCDA91042301B1657D8 (Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator::.ctor(Org.BouncyCastle.Crypto.IDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pkcs5S2ParametersGenerator__ctor_m43D8AC42079DF38586045859373DF2C8825A6C71 (Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D* __this, RuntimeObject* ___digest0, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.PbeParametersGenerator::Pkcs5PasswordToUtf8Bytes(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PbeParametersGenerator_Pkcs5PasswordToUtf8Bytes_mF4BE2279157A14D42D973D2C5A022922A6D552DA (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___password0, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::GetKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16 (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Security.ParameterUtilities::CreateKeyParameter(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* ParameterUtilities_CreateKeyParameter_m503070D02626F2E547CED69879BB7A359ED9ED19 (String_t* ___algorithm0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyBytes1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::.ctor(Org.BouncyCastle.Crypto.ICipherParameters,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParametersWithIV__ctor_mC1B4901D3CEBECE5903FE14597AA0701B7B7C994 (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, RuntimeObject* ___parameters0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.IBufferedCipher Org.BouncyCastle.Security.CipherUtilities::GetCipher(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CipherUtilities_GetCipher_m120CBF0B698B4B035A827FF2E710AD7B170DC615 (String_t* ___algorithm0, const RuntimeMethod* method) ;
// System.Byte[] Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::Decrypt(System.Byte[],System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_Decrypt_m097DCA56C2EF7EC95B60929BAFAF0660EF951BEC (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipherText2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___derivedKey3, const RuntimeMethod* method) ;
// System.Void Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::ValidateMac(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreCrypto_ValidateMac_m1C97DF4502ED3DAAC0A021F1666FB103E6B6F6A9 (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipherText1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___derivedKey2, const RuntimeMethod* method) ;
// System.Byte[] Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::GenerateAesCtrCipher(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateAesCtrCipher_m12C22EE6A2DEE495E239DF5A609A093577BFCA8A (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encryptKey1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input2, const RuntimeMethod* method) ;
// System.Byte[] Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::GenerateMac(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateMac_m52C0288D10244303029F66F425B00CB1D368B606 (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___derivedKey0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipherText1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Solana.Unity.KeyStore.Exceptions.DecryptionException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecryptionException__ctor_m6F2EBBB70D5D3CDD1CC48E7900A87EBEB09129F7 (DecryptionException_t34C51BD782E922C459D93AD2E4E705E22D92F5C3* __this, String_t* ___msg0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Byte[] Solana.Unity.KeyStore.Crypto.RandomBytesGenerator::GenerateRandomBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RandomBytesGenerator_GenerateRandomBytes_mEA7DC5FACADBCF09D56FD9B0397D955186F94D6D (int32_t ___size0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Security.SecureRandom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureRandom__ctor_m1FB3C478CD5CC4CDF68C981D8F5F89FC8EF8CC68 (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* __this, const RuntimeMethod* method) ;
// System.Byte[] Solana.Unity.KeyStore.Crypto.Scrypt::SingleIterationPbkdf2(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Scrypt_SingleIterationPbkdf2_mA11CB4F78119104A2607D675A395A3D16E0F400B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s1, int32_t ___dkLen2, const RuntimeMethod* method) ;
// System.Void Solana.Unity.KeyStore.Crypto.Scrypt::SMix(System.Byte*,System.Int32,System.Int32,System.UInt32*,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrypt_SMix_mE768CADBFF050B9C3C003CBA9976F57E26FD478A (uint8_t* ___b0, int32_t ___r1, int32_t ___n2, uint32_t* ___v3, uint32_t* ___xy4, const RuntimeMethod* method) ;
// System.UInt32 Solana.Unity.KeyStore.Crypto.Scrypt::R(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA (uint32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Void Solana.Unity.KeyStore.Crypto.Scrypt::BulkCopy(System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrypt_BulkCopy_mB64AEE7B53811BD875AAF042510D76561C2B8BBA (void* ___dst0, void* ___src1, int32_t ___len2, const RuntimeMethod* method) ;
// System.Void Solana.Unity.KeyStore.Crypto.Scrypt::BulkXor(System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrypt_BulkXor_mF10C9576FA0F8EE8AECDE2A8FEFCCDCA4A969626 (void* ___dst0, void* ___src1, int32_t ___len2, const RuntimeMethod* method) ;
// System.Void Solana.Unity.KeyStore.Crypto.Scrypt::Salsa208(System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrypt_Salsa208_m5720642AC41897784F98F02BE11D11D8F9967091 (uint32_t* ___b0, const RuntimeMethod* method) ;
// System.UInt32 Solana.Unity.KeyStore.Crypto.Scrypt::Decode32(System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Scrypt_Decode32_mCC5F9787343496F8224C4342E5078029D1B1C136 (uint8_t* ___p0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.KeyStore.Crypto.Scrypt::BlockMix(System.UInt32*,System.UInt32*,System.UInt32*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrypt_BlockMix_m42D2A0465573955B3EEE612B4094FE291A400EF0 (uint32_t* ___bin0, uint32_t* ___bout1, uint32_t* ___x2, int32_t ___r3, const RuntimeMethod* method) ;
// System.Int64 Solana.Unity.KeyStore.Crypto.Scrypt::Integerify(System.UInt32*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Scrypt_Integerify_m72FDE02612D955BA6BBBC0AB8534F05799E3EBDE (uint32_t* ___b0, int32_t ___r1, const RuntimeMethod* method) ;
// System.Void Solana.Unity.KeyStore.Crypto.Scrypt::Encode32(System.Byte*,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrypt_Encode32_mE26FCB20A12D3F29DDCE9C2410035BB520C1F2B2 (uint8_t* ___p0, uint32_t ___x1, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Char& System.String::GetRawStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Int32 System.SpanHelpers::IndexOf(System.Byte&,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_mB37566B16F2F4C7D14E1CD6EA781AC67110E8C4C (uint8_t* ___searchSpace0, uint8_t ___value1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 System.SpanHelpers::IndexOf(System.Char&,System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_m1EBE4594F5288D2297A3A8E8E4F365BE4BD211DC (Il2CppChar* ___searchSpace0, Il2CppChar ___value1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.String Solana.Unity.KeyStore.KeyStoreKdfChecker::GetKdfTypeFromJson(Newtonsoft.Json.Linq.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStoreKdfChecker_GetKdfTypeFromJson_m621DECCF73516C14F63E89E858A408914D3BFA9C (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___keyStoreDocument0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral964A115C9844FDC3CAB0DA4CB724F1C996223905);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3400C8DC0F81D38A7B6E87AE8E044D15A824F75);
		s_Il2CppMethodInitialized = true;
	}
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* G_B2_0 = NULL;
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* G_B1_0 = NULL;
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* G_B4_0 = NULL;
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* G_B3_0 = NULL;
	{
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_0 = ___keyStoreDocument0;
		NullCheck(L_0);
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_1;
		L_1 = JObject_Property_mBC900C047166F06EA67767C1549A829071276412(L_0, _stringLiteralA3400C8DC0F81D38A7B6E87AE8E044D15A824F75, NULL);
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0019;
		}
	}
	{
		JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD* L_3 = (JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		JsonException__ctor_m29A7A39A820BD2EFF57EC051CB305B86C4B81FA9(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC2E9AD187E8DFB29B1A11B345B6033D077A751E1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreKdfChecker_GetKdfTypeFromJson_m621DECCF73516C14F63E89E858A408914D3BFA9C_RuntimeMethod_var)));
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_4;
		L_4 = JProperty_get_Value_m1D20FFEA7909BF0B835848D5FE9FCA2B08EF07F9(G_B2_0, NULL);
		NullCheck(((JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1*)CastclassClass((RuntimeObject*)L_4, JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_il2cpp_TypeInfo_var)));
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_5;
		L_5 = JObject_Property_mBC900C047166F06EA67767C1549A829071276412(((JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1*)CastclassClass((RuntimeObject*)L_4, JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_il2cpp_TypeInfo_var)), _stringLiteral964A115C9844FDC3CAB0DA4CB724F1C996223905, NULL);
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_003b;
		}
	}
	{
		JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD* L_7 = (JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		JsonException__ctor_m29A7A39A820BD2EFF57EC051CB305B86C4B81FA9(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5EB413ECFFF3BAE3AD68F77F0BE96461A826D77)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreKdfChecker_GetKdfTypeFromJson_m621DECCF73516C14F63E89E858A408914D3BFA9C_RuntimeMethod_var)));
	}

IL_003b:
	{
		NullCheck(G_B4_0);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_8;
		L_8 = JProperty_get_Value_m1D20FFEA7909BF0B835848D5FE9FCA2B08EF07F9(G_B4_0, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// Solana.Unity.KeyStore.Model.KdfType Solana.Unity.KeyStore.KeyStoreKdfChecker::GetKeyStoreKdfType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyStoreKdfChecker_GetKeyStoreKdfType_m1DCFAD0ABD05B77A540D5A6C81C75684DCF83EDA (String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisJObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_m9E591C06E7D85000E58316F90B1625BB0C90C200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5C871F485807C4DC72F10C59B4C2BC67AEAAD47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEF710A7FE8B1F687BE0C4888B5002E9635CE519);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* G_B4_0 = NULL;
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* G_B3_0 = NULL;
	{
		String_t* L_0 = ___json0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreKdfChecker_GetKeyStoreKdfType_m1DCFAD0ABD05B77A540D5A6C81C75684DCF83EDA_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___json0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_3;
		L_3 = JsonConvert_DeserializeObject_TisJObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_m9E591C06E7D85000E58316F90B1625BB0C90C200(L_2, JsonConvert_DeserializeObject_TisJObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_m9E591C06E7D85000E58316F90B1625BB0C90C200_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0022;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_5 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFA8F76AD92C6571280E05F49F1888F46A6DE8B56)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreKdfChecker_GetKeyStoreKdfType_m1DCFAD0ABD05B77A540D5A6C81C75684DCF83EDA_RuntimeMethod_var)));
	}

IL_0022:
	{
		String_t* L_6;
		L_6 = KeyStoreKdfChecker_GetKdfTypeFromJson_m621DECCF73516C14F63E89E858A408914D3BFA9C(G_B4_0, NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		if (L_7)
		{
			goto IL_0036;
		}
	}
	{
		JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD* L_8 = (JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		JsonException__ctor_m29A7A39A820BD2EFF57EC051CB305B86C4B81FA9(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4453DFAF2D4404421C7655A74682810B84BB4273)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreKdfChecker_GetKeyStoreKdfType_m1DCFAD0ABD05B77A540D5A6C81C75684DCF83EDA_RuntimeMethod_var)));
	}

IL_0036:
	{
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteralC5C871F485807C4DC72F10C59B4C2BC67AEAAD47, NULL);
		if (L_10)
		{
			goto IL_0052;
		}
	}
	{
		String_t* L_11 = V_0;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralDEF710A7FE8B1F687BE0C4888B5002E9635CE519, NULL);
		if (L_12)
		{
			goto IL_0056;
		}
	}
	{
		goto IL_005a;
	}

IL_0052:
	{
		V_1 = 1;
		goto IL_0061;
	}

IL_0056:
	{
		V_1 = 0;
		goto IL_0061;
	}

IL_005a:
	{
		String_t* L_13 = V_0;
		InvalidKdfException_tBB0DE3AAA56DDBC6703168B247F189C33E6C21EF* L_14 = (InvalidKdfException_tBB0DE3AAA56DDBC6703168B247F189C33E6C21EF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidKdfException_tBB0DE3AAA56DDBC6703168B247F189C33E6C21EF_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		InvalidKdfException__ctor_mF106D0E636D23179E8C70B34C68F27F298C69FAE(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreKdfChecker_GetKeyStoreKdfType_m1DCFAD0ABD05B77A540D5A6C81C75684DCF83EDA_RuntimeMethod_var)));
	}

IL_0061:
	{
		int32_t L_15 = V_1;
		return L_15;
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
// System.Void Solana.Unity.KeyStore.SecretKeyStoreService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretKeyStoreService__ctor_m0C7526D18E1DF21952ABCC11DFEE1AF1386828DD (SecretKeyStoreService_tC995BA9FA5DACB96360A38A12C4820AE12685088* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1* L_0 = (KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1*)il2cpp_codegen_object_new(KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		KeyStorePbkdf2Service__ctor_m94D3FCE6E28056535215800DA2AA23A2B10E1760(L_0, NULL);
		__this->____keyStorePbkdf2Service_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyStorePbkdf2Service_1), (void*)L_0);
		KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436* L_1 = (KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436*)il2cpp_codegen_object_new(KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		KeyStoreScryptService__ctor_m71C61FD1FCF67C767C296FD525A231693FB04E86(L_1, NULL);
		__this->____keyStoreScryptService_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyStoreScryptService_0), (void*)L_1);
		return;
	}
}
// System.Void Solana.Unity.KeyStore.SecretKeyStoreService::.ctor(Solana.Unity.KeyStore.Services.KeyStoreScryptService,Solana.Unity.KeyStore.Services.KeyStorePbkdf2Service)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretKeyStoreService__ctor_mC32299F7FB47A939E051E652125E07D2EFBF0113 (SecretKeyStoreService_tC995BA9FA5DACB96360A38A12C4820AE12685088* __this, KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436* ___keyStoreScryptService0, KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1* ___keyStorePbkdf2Service1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436* L_0 = ___keyStoreScryptService0;
		__this->____keyStoreScryptService_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyStoreScryptService_0), (void*)L_0);
		KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1* L_1 = ___keyStorePbkdf2Service1;
		__this->____keyStorePbkdf2Service_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyStorePbkdf2Service_1), (void*)L_1);
		return;
	}
}
// System.String Solana.Unity.KeyStore.SecretKeyStoreService::GetAddressFromKeyStore(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretKeyStoreService_GetAddressFromKeyStore_mC10FAE99D4D51C190B38E4868F5EADE19610679A (String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisJObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_m9E591C06E7D85000E58316F90B1625BB0C90C200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* G_B4_0 = NULL;
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* G_B3_0 = NULL;
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* G_B6_0 = NULL;
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* G_B5_0 = NULL;
	{
		String_t* L_0 = ___json0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecretKeyStoreService_GetAddressFromKeyStore_mC10FAE99D4D51C190B38E4868F5EADE19610679A_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___json0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_3;
		L_3 = JsonConvert_DeserializeObject_TisJObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_m9E591C06E7D85000E58316F90B1625BB0C90C200(L_2, JsonConvert_DeserializeObject_TisJObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_m9E591C06E7D85000E58316F90B1625BB0C90C200_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0022;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_5 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFA8F76AD92C6571280E05F49F1888F46A6DE8B56)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecretKeyStoreService_GetAddressFromKeyStore_mC10FAE99D4D51C190B38E4868F5EADE19610679A_RuntimeMethod_var)));
	}

IL_0022:
	{
		NullCheck(G_B4_0);
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_6;
		L_6 = JObject_Property_mBC900C047166F06EA67767C1549A829071276412(G_B4_0, _stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057, NULL);
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_7 = L_6;
		G_B5_0 = L_7;
		if (L_7)
		{
			G_B6_0 = L_7;
			goto IL_003a;
		}
	}
	{
		JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD* L_8 = (JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		JsonException__ctor_m29A7A39A820BD2EFF57EC051CB305B86C4B81FA9(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4D2C1C959A238B46BE96520170F27554B7770608)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecretKeyStoreService_GetAddressFromKeyStore_mC10FAE99D4D51C190B38E4868F5EADE19610679A_RuntimeMethod_var)));
	}

IL_003a:
	{
		NullCheck(G_B6_0);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_9;
		L_9 = JProperty_get_Value_m1D20FFEA7909BF0B835848D5FE9FCA2B08EF07F9(G_B6_0, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		return L_10;
	}
}
// System.String Solana.Unity.KeyStore.SecretKeyStoreService::GenerateUtcFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretKeyStoreService_GenerateUtcFileName_m6B465B6ACB1744423F34FBF91B9D0BCB16ECA21C (String_t* ___address0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99C165894B2900048144F5DEF682937FE73CA541);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9C2DA9A9075BAFFE0F756EE767F13E62BE6C6AF);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___address0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecretKeyStoreService_GenerateUtcFileName_m6B465B6ACB1744423F34FBF91B9D0BCB16ECA21C_RuntimeMethod_var)));
	}

IL_000e:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_0), _stringLiteral99C165894B2900048144F5DEF682937FE73CA541, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_3, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, NULL);
		String_t* L_5 = ___address0;
		String_t* L_6;
		L_6 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralB9C2DA9A9075BAFFE0F756EE767F13E62BE6C6AF, L_4, _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA, L_5, NULL);
		return L_6;
	}
}
// System.Byte[] Solana.Unity.KeyStore.SecretKeyStoreService::DecryptKeyStoreFromFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SecretKeyStoreService_DecryptKeyStoreFromFile_mCC116DE87FED3417E550C9D4D1221879DAA25D72 (SecretKeyStoreService_tC995BA9FA5DACB96360A38A12C4820AE12685088* __this, String_t* ___password0, String_t* ___filePath1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_0 = NULL;
	String_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		String_t* L_0 = ___password0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecretKeyStoreService_DecryptKeyStoreFromFile_mCC116DE87FED3417E550C9D4D1221879DAA25D72_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___filePath1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4E6231226F0A62484622AE51964EB5710BB528F9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecretKeyStoreService_DecryptKeyStoreFromFile_mCC116DE87FED3417E550C9D4D1221879DAA25D72_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = ___filePath1;
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_5;
		L_5 = File_OpenText_mC22D29C515D26A22FDCB30A021A3033A87F150E6(L_4, NULL);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				{
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_6 = V_0;
					if (!L_6)
					{
						goto IL_003e;
					}
				}
				{
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_7 = V_0;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_003e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_8 = V_0;
			NullCheck(L_8);
			String_t* L_9;
			L_9 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.TextReader::ReadToEnd() */, L_8);
			V_1 = L_9;
			String_t* L_10 = ___password0;
			String_t* L_11 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
			L_12 = SecretKeyStoreService_DecryptKeyStoreFromJson_m0E707349D1DD8758B51E1044619CBB948B2812A3(__this, L_10, L_11, NULL);
			V_2 = L_12;
			goto IL_003f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		return L_13;
	}
}
// System.Byte[] Solana.Unity.KeyStore.SecretKeyStoreService::DecryptKeyStoreFromJson(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SecretKeyStoreService_DecryptKeyStoreFromJson_m0E707349D1DD8758B51E1044619CBB948B2812A3 (SecretKeyStoreService_tC995BA9FA5DACB96360A38A12C4820AE12685088* __this, String_t* ___password0, String_t* ___json1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m399C882B266BE3C62E1FE1BC0DEB221C44ECEFC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreServiceBase_1_DecryptKeyStoreFromJson_mDB7BDB7504E66FB5D9100AA58BC5B394CD072C7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		String_t* L_0 = ___password0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecretKeyStoreService_DecryptKeyStoreFromJson_m0E707349D1DD8758B51E1044619CBB948B2812A3_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___json1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral43187C90BBB5DFB063A95733C9BD65ECD25A2E84)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecretKeyStoreService_DecryptKeyStoreFromJson_m0E707349D1DD8758B51E1044619CBB948B2812A3_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = ___json1;
		int32_t L_5;
		L_5 = KeyStoreKdfChecker_GetKeyStoreKdfType_m1DCFAD0ABD05B77A540D5A6C81C75684DCF83EDA(L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_004a;
		}
	}
	{
		KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1* L_8 = __this->____keyStorePbkdf2Service_1;
		String_t* L_9 = ___password0;
		String_t* L_10 = ___json1;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m399C882B266BE3C62E1FE1BC0DEB221C44ECEFC2(L_8, L_9, L_10, KeyStoreServiceBase_1_DecryptKeyStoreFromJson_m399C882B266BE3C62E1FE1BC0DEB221C44ECEFC2_RuntimeMethod_var);
		V_1 = L_11;
		goto IL_0055;
	}

IL_003a:
	{
		KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436* L_12 = __this->____keyStoreScryptService_0;
		String_t* L_13 = ___password0;
		String_t* L_14 = ___json1;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = KeyStoreServiceBase_1_DecryptKeyStoreFromJson_mDB7BDB7504E66FB5D9100AA58BC5B394CD072C7F(L_12, L_13, L_14, KeyStoreServiceBase_1_DecryptKeyStoreFromJson_mDB7BDB7504E66FB5D9100AA58BC5B394CD072C7F_RuntimeMethod_var);
		V_1 = L_15;
		goto IL_0055;
	}

IL_004a:
	{
		Exception_t* L_16 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9CBB35F28A07682E1B5EF20C0A52D591F38201CB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecretKeyStoreService_DecryptKeyStoreFromJson_m0E707349D1DD8758B51E1044619CBB948B2812A3_RuntimeMethod_var)));
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		return L_17;
	}
}
// System.String Solana.Unity.KeyStore.SecretKeyStoreService::EncryptAndGenerateDefaultKeyStoreAsJson(System.String,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretKeyStoreService_EncryptAndGenerateDefaultKeyStoreAsJson_m884049623B626CB690B437836CF33FD3B4B39B2E (SecretKeyStoreService_tC995BA9FA5DACB96360A38A12C4820AE12685088* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key1, String_t* ___address2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreServiceBase_1_EncryptAndGenerateKeyStoreAsJson_mC564F9F70B18E9591033B4C3B3BFF1ED47681867_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___password0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecretKeyStoreService_EncryptAndGenerateDefaultKeyStoreAsJson_m884049623B626CB690B437836CF33FD3B4B39B2E_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___address2;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SecretKeyStoreService_EncryptAndGenerateDefaultKeyStoreAsJson_m884049623B626CB690B437836CF33FD3B4B39B2E_RuntimeMethod_var)));
	}

IL_001c:
	{
		KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436* L_4 = __this->____keyStoreScryptService_0;
		String_t* L_5 = ___password0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___key1;
		String_t* L_7 = ___address2;
		NullCheck(L_4);
		String_t* L_8;
		L_8 = KeyStoreServiceBase_1_EncryptAndGenerateKeyStoreAsJson_mC564F9F70B18E9591033B4C3B3BFF1ED47681867(L_4, L_5, L_6, L_7, KeyStoreServiceBase_1_EncryptAndGenerateKeyStoreAsJson_mC564F9F70B18E9591033B4C3B3BFF1ED47681867_RuntimeMethod_var);
		return L_8;
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
// Solana.Unity.Wallet.Wallet Solana.Unity.KeyStore.SolanaKeyStoreService::RestoreKeystore(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Wallet_tD28CA3630C46B9D3C02F1092B57E29A2AD8C43BD* SolanaKeyStoreService_RestoreKeystore_m809291ACD685A5F3FE06B9150E0099118817F77C (SolanaKeyStoreService_t9899B3015AE00FED31BD9E6A0E0C2DE337D05FB6* __this, String_t* ___privateKey0, String_t* ___passphrase1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___privateKey0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Utils_FromStringByteArray_mBFAD20DAEB0A1DDCC7EA28B985A9273A82951C92(L_0, NULL);
		String_t* L_2 = ___passphrase1;
		Wallet_tD28CA3630C46B9D3C02F1092B57E29A2AD8C43BD* L_3;
		L_3 = SolanaKeyStoreService_InitializeWallet_m6E77CF68B64D744D641FCC64DA48DA5EC7AD490C(__this, L_1, L_2, NULL);
		return L_3;
	}
}
// Solana.Unity.Wallet.Wallet Solana.Unity.KeyStore.SolanaKeyStoreService::RestoreKeystoreFromFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Wallet_tD28CA3630C46B9D3C02F1092B57E29A2AD8C43BD* SolanaKeyStoreService_RestoreKeystoreFromFile_mCEF04C96F140EF2D5D1D707BB9DC6AD5989EAA89 (SolanaKeyStoreService_t9899B3015AE00FED31BD9E6A0E0C2DE337D05FB6* __this, String_t* ___path0, String_t* ___passphrase1, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___path0;
		String_t* L_1;
		L_1 = File_ReadAllText_mA4A939F853D573379F7129AFDC469B91E9747BAA(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Utils_FromStringByteArray_mBFAD20DAEB0A1DDCC7EA28B985A9273A82951C92(L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		String_t* L_4 = ___passphrase1;
		Wallet_tD28CA3630C46B9D3C02F1092B57E29A2AD8C43BD* L_5;
		L_5 = SolanaKeyStoreService_InitializeWallet_m6E77CF68B64D744D641FCC64DA48DA5EC7AD490C(__this, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Void Solana.Unity.KeyStore.SolanaKeyStoreService::SaveKeystore(System.String,Solana.Unity.Wallet.Wallet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolanaKeyStoreService_SaveKeystore_m6FFB1B40C3F1078026961584060144F77E180CE6 (SolanaKeyStoreService_t9899B3015AE00FED31BD9E6A0E0C2DE337D05FB6* __this, String_t* ___path0, Wallet_tD28CA3630C46B9D3C02F1092B57E29A2AD8C43BD* ___wallet1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___path0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		Wallet_tD28CA3630C46B9D3C02F1092B57E29A2AD8C43BD* L_2 = ___wallet1;
		NullCheck(L_2);
		Account_t15F1801E39C4C126421D353BFA50F8BD35957596* L_3;
		L_3 = Wallet_get_Account_m4FDF8DDD87F44E0A1E0163BD647B99CCDF930338_inline(L_2, NULL);
		NullCheck(L_3);
		PrivateKey_t90586BD92512B1F79CAFAE6DEC4D7B812DE78D41* L_4;
		L_4 = Account_get_PrivateKey_m270CD59C61BE230DD42FBF16D96DE6CD05FA7722_inline(L_3, NULL);
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = PrivateKey_get_KeyBytes_mB0849F26537B4249A24EFBCDBFC47666FF5A8507(L_4, NULL);
		String_t* L_6;
		L_6 = Utils_ToStringByteArray_m202E44765B954CD3241E8FED7F8E08A210FBC6BD((RuntimeObject*)L_5, NULL);
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_6);
		File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077(L_0, L_7, NULL);
		return;
	}
}
// Solana.Unity.Wallet.Wallet Solana.Unity.KeyStore.SolanaKeyStoreService::InitializeWallet(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Wallet_tD28CA3630C46B9D3C02F1092B57E29A2AD8C43BD* SolanaKeyStoreService_InitializeWallet_m6E77CF68B64D744D641FCC64DA48DA5EC7AD490C (SolanaKeyStoreService_t9899B3015AE00FED31BD9E6A0E0C2DE337D05FB6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___seed0, String_t* ___passphrase1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wallet_tD28CA3630C46B9D3C02F1092B57E29A2AD8C43BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___seed0;
		String_t* L_1 = ___passphrase1;
		Wallet_tD28CA3630C46B9D3C02F1092B57E29A2AD8C43BD* L_2 = (Wallet_tD28CA3630C46B9D3C02F1092B57E29A2AD8C43BD*)il2cpp_codegen_object_new(Wallet_tD28CA3630C46B9D3C02F1092B57E29A2AD8C43BD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Wallet__ctor_mE3F102F0EE650D317E6C700519E86311A510F6D5(L_2, L_0, L_1, 1, NULL);
		return L_2;
	}
}
// System.Void Solana.Unity.KeyStore.SolanaKeyStoreService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolanaKeyStoreService__ctor_m36CDF8A27BB40CAAB347BCD344EFCE5F96B9824D (SolanaKeyStoreService_t9899B3015AE00FED31BD9E6A0E0C2DE337D05FB6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Byte Solana.Unity.KeyStore.Utils::FromCharacterToByte(System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Utils_FromCharacterToByte_m1151399A00F7107E6FC7E189E2DBBB1890584A14 (Il2CppChar ___character0, int32_t ___index1, int32_t ___shift2, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		Il2CppChar L_0 = ___character0;
		V_0 = (uint8_t)((int32_t)(uint8_t)L_0);
		uint8_t L_1 = V_0;
		if ((((int32_t)((int32_t)64)) >= ((int32_t)L_1)))
		{
			goto IL_000d;
		}
	}
	{
		uint8_t L_2 = V_0;
		if ((((int32_t)((int32_t)71)) > ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}

IL_000d:
	{
		uint8_t L_3 = V_0;
		if ((((int32_t)((int32_t)96)) >= ((int32_t)L_3)))
		{
			goto IL_0047;
		}
	}
	{
		uint8_t L_4 = V_0;
		if ((((int32_t)((int32_t)103)) <= ((int32_t)L_4)))
		{
			goto IL_0047;
		}
	}

IL_0017:
	{
		uint8_t L_5 = V_0;
		if ((!(((uint32_t)((int32_t)64)) == ((uint32_t)((int32_t)(((int32_t)64)&(int32_t)L_5))))))
		{
			goto IL_007a;
		}
	}
	{
		uint8_t L_6 = V_0;
		if ((!(((uint32_t)((int32_t)32)) == ((uint32_t)((int32_t)(((int32_t)32)&(int32_t)L_6))))))
		{
			goto IL_0037;
		}
	}
	{
		uint8_t L_7 = V_0;
		int32_t L_8 = ___shift2;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_7, ((int32_t)10))), ((int32_t)97)))<<((int32_t)(L_8&((int32_t)31))))));
		goto IL_007a;
	}

IL_0037:
	{
		uint8_t L_9 = V_0;
		int32_t L_10 = ___shift2;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_9, ((int32_t)10))), ((int32_t)65)))<<((int32_t)(L_10&((int32_t)31))))));
		goto IL_007a;
	}

IL_0047:
	{
		uint8_t L_11 = V_0;
		if ((((int32_t)((int32_t)41)) >= ((int32_t)L_11)))
		{
			goto IL_005e;
		}
	}
	{
		uint8_t L_12 = V_0;
		if ((((int32_t)((int32_t)64)) <= ((int32_t)L_12)))
		{
			goto IL_005e;
		}
	}
	{
		uint8_t L_13 = V_0;
		int32_t L_14 = ___shift2;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_13, ((int32_t)48)))<<((int32_t)(L_14&((int32_t)31))))));
		goto IL_007a;
	}

IL_005e:
	{
		Il2CppChar L_15 = ___character0;
		Il2CppChar L_16 = L_15;
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)), &L_16);
		int32_t L_18 = ___index1;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_19);
		String_t* L_21;
		L_21 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral70C6D80A1C9DC0AE77AA63E1DC135F76ED9B37E0)), L_17, L_20, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_22 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_FromCharacterToByte_m1151399A00F7107E6FC7E189E2DBBB1890584A14_RuntimeMethod_var)));
	}

IL_007a:
	{
		uint8_t L_23 = V_0;
		return L_23;
	}
}
// System.Byte[] Solana.Unity.KeyStore.Utils::HexToByteArrayInternal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Utils_HexToByteArrayInternal_m0AA30977B9ABCEA1F373AFED0276F42E83D56E86 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = L_2;
		goto IL_0063;
	}

IL_0013:
	{
		String_t* L_3 = ___value0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		V_1 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_4/2)));
		V_0 = L_5;
		V_2 = 0;
		goto IL_005a;
	}

IL_0027:
	{
		String_t* L_6 = ___value0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, L_7, NULL);
		int32_t L_9 = V_2;
		uint8_t L_10;
		L_10 = Utils_FromCharacterToByte_m1151399A00F7107E6FC7E189E2DBBB1890584A14(L_8, L_9, 4, NULL);
		V_3 = L_10;
		String_t* L_11 = ___value0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		Il2CppChar L_13;
		L_13 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		int32_t L_14 = V_2;
		uint8_t L_15;
		L_15 = Utils_FromCharacterToByte_m1151399A00F7107E6FC7E189E2DBBB1890584A14(L_13, ((int32_t)il2cpp_codegen_add(L_14, 1)), 0, NULL);
		V_4 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		uint8_t L_19 = V_3;
		uint8_t L_20 = V_4;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_19|(int32_t)L_20))));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 2));
	}

IL_005a:
	{
		int32_t L_22 = V_2;
		String_t* L_23 = ___value0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_23, NULL);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0027;
		}
	}

IL_0063:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_0;
		return L_25;
	}
}
// System.Byte[] Solana.Unity.KeyStore.Utils::HexToByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Utils_HexToByteArray_m9A86A9ECE12C375E76D81441E40654F4ACC582E9 (String_t* ___value0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		String_t* L_0 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Utils_HexToByteArrayInternal_m0AA30977B9ABCEA1F373AFED0276F42E83D56E86(L_0, NULL);
		V_0 = L_1;
		goto IL_0021;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0009;
		}
		throw e;
	}

CATCH_0009:
	{// begin catch(System.FormatException)
		V_1 = ((FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)IL2CPP_GET_ACTIVE_EXCEPTION(FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*));
		String_t* L_2 = ___value0;
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9872E3E66D46ECD9B57AC933AD07A9F70CC9C289)), L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A3E3977D9F8F8451C8A37C8447C7FEBBFC3DBF5)), NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_4 = V_1;
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_5 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		FormatException__ctor_mE31CCFC2A6FA296CA9E9C6813112D7850FE682D4(L_5, L_3, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_HexToByteArray_m9A86A9ECE12C375E76D81441E40654F4ACC582E9_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0021:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		return L_6;
	}
}
// System.String Solana.Unity.KeyStore.Utils::ToHex(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_ToHex_m9E7A369D4F8F99EB22D335057710021158257B32 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisString_t_m2052FCC7ADC9755B1FCA666EB30114DE80CCF1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToHexU3Eb__3_0_mA0F1D18215AA956B4E29757378C80F8E14D770F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* G_B2_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_1 = NULL;
	Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* G_B1_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E_il2cpp_TypeInfo_var);
		Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* L_1 = ((U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1;
		Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E_il2cpp_TypeInfo_var);
		U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E* L_3 = ((U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* L_4 = (Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E*)il2cpp_codegen_object_new(Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mB31E88A2C3F2063BDBA38CD35564CDC13C344109(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CToHexU3Eb__3_0_mA0F1D18215AA956B4E29757378C80F8E14D770F6_RuntimeMethod_var), NULL);
		Func_2_t005A26AED2B1A3C5734C5C399B5B636AA2DBD36E* L_5 = L_4;
		((U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisString_t_m2052FCC7ADC9755B1FCA666EB30114DE80CCF1DF((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Select_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisString_t_m2052FCC7ADC9755B1FCA666EB30114DE80CCF1DF_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7;
		L_7 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_6, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		String_t* L_8;
		L_8 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_7, NULL);
		return L_8;
	}
}
// System.String Solana.Unity.KeyStore.Utils::ToStringByteArray(System.Collections.Generic.IEnumerable`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_ToStringByteArray_m202E44765B954CD3241E8FED7F8E08A210FBC6BD (RuntimeObject* ___bytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_Join_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m201C4BB68BF4DFE8E4347E7E2BA72E35663E93D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___bytes0;
		String_t* L_1;
		L_1 = String_Join_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m201C4BB68BF4DFE8E4347E7E2BA72E35663E93D2(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_0, String_Join_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m201C4BB68BF4DFE8E4347E7E2BA72E35663E93D2_RuntimeMethod_var);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, L_1, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		return L_2;
	}
}
// System.Byte[] Solana.Unity.KeyStore.Utils::FromStringByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Utils_FromStringByteArray_mBFAD20DAEB0A1DDCC7EA28B985A9273A82951C92 (String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCA39BDFF0515AAF2D5364E2F2EBEFB3A45DC065B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		String_t* L_1 = ___data0;
		String_t* L_2 = ___data0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_4;
		L_4 = MemoryExtensions_AsSpan_m8409F3DA0EF95BF6B3A8741E5C56E729B0A824C6_inline(L_1, 1, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), NULL);
		V_3 = L_4;
		goto IL_0061;
	}

IL_001e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8 = V_3;
		V_4 = L_8;
		int32_t L_9 = V_2;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_10;
		L_10 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline((&V_4), 0, L_9, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		V_5 = L_10;
		String_t* L_11;
		L_11 = ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D((&V_5), ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D_RuntimeMethod_var);
		uint8_t L_12;
		L_12 = Byte_Parse_m9ECDF4D955A0A3C47392308CF9DBD50CDFE4F417(L_11, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)L_12);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_13 = V_3;
		V_4 = L_13;
		int32_t L_14 = V_2;
		V_6 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_6;
		int32_t L_16;
		L_16 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&V_4), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_17 = V_6;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_18;
		L_18 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline((&V_4), L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		V_3 = L_18;
	}

IL_0061:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_19 = V_3;
		int32_t L_20;
		L_20 = MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCA39BDFF0515AAF2D5364E2F2EBEFB3A45DC065B_inline(L_19, ((int32_t)44), MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCA39BDFF0515AAF2D5364E2F2EBEFB3A45DC065B_RuntimeMethod_var);
		int32_t L_21 = L_20;
		V_2 = L_21;
		if ((!(((uint32_t)L_21) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		int32_t L_23 = V_1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_24 = V_3;
		V_4 = L_24;
		int32_t L_25;
		L_25 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&V_4), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_26;
		L_26 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline((&V_4), 0, ((int32_t)il2cpp_codegen_subtract(L_25, 1)), ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		V_5 = L_26;
		String_t* L_27;
		L_27 = ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D((&V_5), ReadOnlySpan_1_ToString_mB13A913EF211B14B719EE62133C15C298642E34D_RuntimeMethod_var);
		uint8_t L_28;
		L_28 = Byte_Parse_m9ECDF4D955A0A3C47392308CF9DBD50CDFE4F417(L_27, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)L_28);
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)63))))
		{
			goto IL_00ae;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_30 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_30);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_30, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7388028DFD0988112838E6C1EA125965F1E17235)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_FromStringByteArray_mBFAD20DAEB0A1DDCC7EA28B985A9273A82951C92_RuntimeMethod_var)));
	}

IL_00ae:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_0;
		return L_31;
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
// System.Void Solana.Unity.KeyStore.Utils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4E76FF88D220E1911BD8790DD8489171F9EF4238 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E* L_0 = (U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E*)il2cpp_codegen_object_new(U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mF2B726EF1741A1DA45B842F336AB8E53592E5B81(L_0, NULL);
		((U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Solana.Unity.KeyStore.Utils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF2B726EF1741A1DA45B842F336AB8E53592E5B81 (U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Solana.Unity.KeyStore.Utils/<>c::<ToHex>b__3_0(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToHexU3Eb__3_0_mA0F1D18215AA956B4E29757378C80F8E14D770F6 (U3CU3Ec_t1A50B9B1BCC6C68C0EA2F4E90E785B2009B18A4E* __this, uint8_t ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310((&___b0), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
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
// System.Void Solana.Unity.KeyStore.Services.KeyStorePbkdf2Service::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStorePbkdf2Service__ctor_m94D3FCE6E28056535215800DA2AA23A2B10E1760 (KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreServiceBase_1__ctor_m8CD9FDCC16BDE402C7B274CEB84F7611796B7EDE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyStoreServiceBase_1__ctor_m8CD9FDCC16BDE402C7B274CEB84F7611796B7EDE(__this, KeyStoreServiceBase_1__ctor_m8CD9FDCC16BDE402C7B274CEB84F7611796B7EDE_RuntimeMethod_var);
		return;
	}
}
// System.Void Solana.Unity.KeyStore.Services.KeyStorePbkdf2Service::.ctor(Solana.Unity.KeyStore.Crypto.IRandomBytesGenerator,Solana.Unity.KeyStore.Crypto.KeyStoreCrypto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStorePbkdf2Service__ctor_m427FA39C12904B11BA7EDACFBAF75AFA2586AF02 (KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1* __this, RuntimeObject* ___randomBytesGenerator0, KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* ___keyStoreCrypto1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreServiceBase_1__ctor_mA5DA170DFCD4089769906FCF478977AC11F502B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___randomBytesGenerator0;
		KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* L_1 = ___keyStoreCrypto1;
		KeyStoreServiceBase_1__ctor_mA5DA170DFCD4089769906FCF478977AC11F502B4(__this, L_0, L_1, KeyStoreServiceBase_1__ctor_mA5DA170DFCD4089769906FCF478977AC11F502B4_RuntimeMethod_var);
		return;
	}
}
// System.Void Solana.Unity.KeyStore.Services.KeyStorePbkdf2Service::.ctor(Solana.Unity.KeyStore.Crypto.IRandomBytesGenerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStorePbkdf2Service__ctor_m2DB2FF7573EAAE92354355F6AD87710BE0A5448B (KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1* __this, RuntimeObject* ___randomBytesGenerator0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreServiceBase_1__ctor_m0EF74083BD8BD5653E51F12200C9EF1263785FC1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___randomBytesGenerator0;
		KeyStoreServiceBase_1__ctor_m0EF74083BD8BD5653E51F12200C9EF1263785FC1(__this, L_0, KeyStoreServiceBase_1__ctor_m0EF74083BD8BD5653E51F12200C9EF1263785FC1_RuntimeMethod_var);
		return;
	}
}
// System.Byte[] Solana.Unity.KeyStore.Services.KeyStorePbkdf2Service::GenerateDerivedKey(System.String,System.Byte[],Solana.Unity.KeyStore.Model.Pbkdf2Params)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStorePbkdf2Service_GenerateDerivedKey_m0E83F15AB5A4D4AA0CBC83AB2C5AC4D90271EB00 (KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* ___kdfParams2, const RuntimeMethod* method) 
{
	{
		KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* L_0 = ((KeyStoreServiceBase_1_tEFA72F0803DD15098A4EC34A66D8BFE43CD212D8*)__this)->___KeyStoreCrypto_1;
		String_t* L_1 = ___password0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___salt1;
		Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* L_3 = ___kdfParams2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Pbkdf2Params_get_Count_m21F0CC9B7F3FB40F4DF9637B9B5F932E59483FE5_inline(L_3, NULL);
		Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* L_5 = ___kdfParams2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = KdfParams_get_Dklen_m0DA49F53D2964502070D2078E4E632476C1641B2_inline(L_5, NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = KeyStoreCrypto_GeneratePbkdf2Sha256DerivedKey_m03A22D5B0A11C905A297ADEC50E9AD79E7A0013C(L_0, L_1, L_2, L_4, L_6, NULL);
		return L_7;
	}
}
// Solana.Unity.KeyStore.Model.Pbkdf2Params Solana.Unity.KeyStore.Services.KeyStorePbkdf2Service::GetDefaultParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* KeyStorePbkdf2Service_GetDefaultParams_mEB81881EC1A4CA33717353310DE9FF00DDB0F850 (KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral728977F71296CFAFD99E1AB9556CDB5900C1F9C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* L_0 = (Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3*)il2cpp_codegen_object_new(Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Pbkdf2Params__ctor_mB7A25632BEB8646C5A23355374C807BB54FDF6D3(L_0, NULL);
		Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* L_1 = L_0;
		NullCheck(L_1);
		KdfParams_set_Dklen_m4616AAC32EB9CA8620CDA26733446ABF5FEEA28C_inline(L_1, ((int32_t)32), NULL);
		Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* L_2 = L_1;
		NullCheck(L_2);
		Pbkdf2Params_set_Count_m34A80FBE8585FB68E6209FC26B06B2C06DEE86D5_inline(L_2, ((int32_t)262144), NULL);
		Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* L_3 = L_2;
		NullCheck(L_3);
		Pbkdf2Params_set_Prf_m9AD34003E7A74690789EC721B321C6DFCEB3BCCC_inline(L_3, _stringLiteral728977F71296CFAFD99E1AB9556CDB5900C1F9C7, NULL);
		return L_3;
	}
}
// Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.Pbkdf2Params> Solana.Unity.KeyStore.Services.KeyStorePbkdf2Service::DeserializeKeyStoreFromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* KeyStorePbkdf2Service_DeserializeKeyStoreFromJson_mB24DBB46DADBFE968E09391D9A9E5824BCF262CE (KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1* __this, String_t* ___json0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___json0;
		KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* L_1;
		L_1 = JsonKeyStorePbkdf2Serializer_DeserializePbkdf2_mA0F8D6B48BEDFAAD7FCF7F985A28B97471E05586(L_0, NULL);
		return L_1;
	}
}
// System.String Solana.Unity.KeyStore.Services.KeyStorePbkdf2Service::SerializeKeyStoreToJson(Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.Pbkdf2Params>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStorePbkdf2Service_SerializeKeyStoreToJson_mA302D45774A3A5FD0A6A11BF27F5444BDBC57BB2 (KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1* __this, KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* ___keyStore0, const RuntimeMethod* method) 
{
	{
		KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* L_0 = ___keyStore0;
		String_t* L_1;
		L_1 = JsonKeyStorePbkdf2Serializer_SerialisePbkdf2_m15B7F6EC1DC247D3EEE7BD6F16AAF5B426C92EF5(L_0, NULL);
		return L_1;
	}
}
// System.Byte[] Solana.Unity.KeyStore.Services.KeyStorePbkdf2Service::DecryptKeyStore(System.String,Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.Pbkdf2Params>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStorePbkdf2Service_DecryptKeyStore_mBF59231A99D3209880089DC044E5295968BDDB6F (KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1* __this, String_t* ___password0, KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* ___keyStore1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_CipherParams_m92B8C920DB36D8E1DF44BF7A964B071E75836459_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_CipherText_mB4179887B2F94F01728C5B3465CC9293812203C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Kdfparams_mDD58CA9FB4D665B4FB90E89DF91633A278E133F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Mac_m79172E2646852C3A38B0CF48705D253F56A91CB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_get_Crypto_m0292B2F1761671D32F937626E7E3CFDCE12BAD0B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___password0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStorePbkdf2Service_DecryptKeyStore_mBF59231A99D3209880089DC044E5295968BDDB6F_RuntimeMethod_var)));
	}

IL_000e:
	{
		KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* L_2 = ___keyStore1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB144512DA9AA6B91993CE8E07E163EA3FF0A440A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStorePbkdf2Service_DecryptKeyStore_mBF59231A99D3209880089DC044E5295968BDDB6F_RuntimeMethod_var)));
	}

IL_001c:
	{
		KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* L_4 = ((KeyStoreServiceBase_1_tEFA72F0803DD15098A4EC34A66D8BFE43CD212D8*)__this)->___KeyStoreCrypto_1;
		String_t* L_5 = ___password0;
		KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* L_6 = ___keyStore1;
		NullCheck(L_6);
		CryptoInfo_1_t5FF286FC76D8F0321050A4F6477DEE7CD6E5B210* L_7;
		L_7 = KeyStore_1_get_Crypto_m0292B2F1761671D32F937626E7E3CFDCE12BAD0B_inline(L_6, KeyStore_1_get_Crypto_m0292B2F1761671D32F937626E7E3CFDCE12BAD0B_RuntimeMethod_var);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = CryptoInfo_1_get_Mac_m79172E2646852C3A38B0CF48705D253F56A91CB6_inline(L_7, CryptoInfo_1_get_Mac_m79172E2646852C3A38B0CF48705D253F56A91CB6_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = Utils_HexToByteArray_m9A86A9ECE12C375E76D81441E40654F4ACC582E9(L_8, NULL);
		KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* L_10 = ___keyStore1;
		NullCheck(L_10);
		CryptoInfo_1_t5FF286FC76D8F0321050A4F6477DEE7CD6E5B210* L_11;
		L_11 = KeyStore_1_get_Crypto_m0292B2F1761671D32F937626E7E3CFDCE12BAD0B_inline(L_10, KeyStore_1_get_Crypto_m0292B2F1761671D32F937626E7E3CFDCE12BAD0B_RuntimeMethod_var);
		NullCheck(L_11);
		CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213* L_12;
		L_12 = CryptoInfo_1_get_CipherParams_m92B8C920DB36D8E1DF44BF7A964B071E75836459_inline(L_11, CryptoInfo_1_get_CipherParams_m92B8C920DB36D8E1DF44BF7A964B071E75836459_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = CipherParams_get_Iv_m20942DD64A8B25300F2D6A75344D693C48C33263_inline(L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = Utils_HexToByteArray_m9A86A9ECE12C375E76D81441E40654F4ACC582E9(L_13, NULL);
		KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* L_15 = ___keyStore1;
		NullCheck(L_15);
		CryptoInfo_1_t5FF286FC76D8F0321050A4F6477DEE7CD6E5B210* L_16;
		L_16 = KeyStore_1_get_Crypto_m0292B2F1761671D32F937626E7E3CFDCE12BAD0B_inline(L_15, KeyStore_1_get_Crypto_m0292B2F1761671D32F937626E7E3CFDCE12BAD0B_RuntimeMethod_var);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = CryptoInfo_1_get_CipherText_mB4179887B2F94F01728C5B3465CC9293812203C0_inline(L_16, CryptoInfo_1_get_CipherText_mB4179887B2F94F01728C5B3465CC9293812203C0_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = Utils_HexToByteArray_m9A86A9ECE12C375E76D81441E40654F4ACC582E9(L_17, NULL);
		KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* L_19 = ___keyStore1;
		NullCheck(L_19);
		CryptoInfo_1_t5FF286FC76D8F0321050A4F6477DEE7CD6E5B210* L_20;
		L_20 = KeyStore_1_get_Crypto_m0292B2F1761671D32F937626E7E3CFDCE12BAD0B_inline(L_19, KeyStore_1_get_Crypto_m0292B2F1761671D32F937626E7E3CFDCE12BAD0B_RuntimeMethod_var);
		NullCheck(L_20);
		Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* L_21;
		L_21 = CryptoInfo_1_get_Kdfparams_mDD58CA9FB4D665B4FB90E89DF91633A278E133F8_inline(L_20, CryptoInfo_1_get_Kdfparams_mDD58CA9FB4D665B4FB90E89DF91633A278E133F8_RuntimeMethod_var);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Pbkdf2Params_get_Count_m21F0CC9B7F3FB40F4DF9637B9B5F932E59483FE5_inline(L_21, NULL);
		KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* L_23 = ___keyStore1;
		NullCheck(L_23);
		CryptoInfo_1_t5FF286FC76D8F0321050A4F6477DEE7CD6E5B210* L_24;
		L_24 = KeyStore_1_get_Crypto_m0292B2F1761671D32F937626E7E3CFDCE12BAD0B_inline(L_23, KeyStore_1_get_Crypto_m0292B2F1761671D32F937626E7E3CFDCE12BAD0B_RuntimeMethod_var);
		NullCheck(L_24);
		Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* L_25;
		L_25 = CryptoInfo_1_get_Kdfparams_mDD58CA9FB4D665B4FB90E89DF91633A278E133F8_inline(L_24, CryptoInfo_1_get_Kdfparams_mDD58CA9FB4D665B4FB90E89DF91633A278E133F8_RuntimeMethod_var);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = KdfParams_get_Salt_mEA33B92C79AE05757DCB0440F0168E0B80E9A3F4_inline(L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = Utils_HexToByteArray_m9A86A9ECE12C375E76D81441E40654F4ACC582E9(L_26, NULL);
		KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* L_28 = ___keyStore1;
		NullCheck(L_28);
		CryptoInfo_1_t5FF286FC76D8F0321050A4F6477DEE7CD6E5B210* L_29;
		L_29 = KeyStore_1_get_Crypto_m0292B2F1761671D32F937626E7E3CFDCE12BAD0B_inline(L_28, KeyStore_1_get_Crypto_m0292B2F1761671D32F937626E7E3CFDCE12BAD0B_RuntimeMethod_var);
		NullCheck(L_29);
		Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* L_30;
		L_30 = CryptoInfo_1_get_Kdfparams_mDD58CA9FB4D665B4FB90E89DF91633A278E133F8_inline(L_29, CryptoInfo_1_get_Kdfparams_mDD58CA9FB4D665B4FB90E89DF91633A278E133F8_RuntimeMethod_var);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = KdfParams_get_Dklen_m0DA49F53D2964502070D2078E4E632476C1641B2_inline(L_30, NULL);
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
		L_32 = KeyStoreCrypto_DecryptPbkdf2Sha256_m9EA90B0121ADD4E5ECF2FBF79182CEC5A9133BAB(L_4, L_5, L_9, L_14, L_18, L_22, L_27, L_31, NULL);
		return L_32;
	}
}
// System.String Solana.Unity.KeyStore.Services.KeyStorePbkdf2Service::GetKdfType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStorePbkdf2Service_GetKdfType_m23008860871D59DC97B415B93B1AAC6EF3EB8170 (KeyStorePbkdf2Service_t32686580A958A411ACF125A401F94B0191DC26A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5C871F485807C4DC72F10C59B4C2BC67AEAAD47);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralC5C871F485807C4DC72F10C59B4C2BC67AEAAD47;
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
// System.Void Solana.Unity.KeyStore.Services.KeyStoreScryptService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreScryptService__ctor_m71C61FD1FCF67C767C296FD525A231693FB04E86 (KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreServiceBase_1__ctor_m79B2E15596108DA36A52978AFBC77C84B5D10256_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyStoreServiceBase_1__ctor_m79B2E15596108DA36A52978AFBC77C84B5D10256(__this, KeyStoreServiceBase_1__ctor_m79B2E15596108DA36A52978AFBC77C84B5D10256_RuntimeMethod_var);
		return;
	}
}
// System.Void Solana.Unity.KeyStore.Services.KeyStoreScryptService::.ctor(Solana.Unity.KeyStore.Crypto.IRandomBytesGenerator,Solana.Unity.KeyStore.Crypto.KeyStoreCrypto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreScryptService__ctor_m52849D03E7869DE00F435834DFB7AD0203AAEC40 (KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436* __this, RuntimeObject* ___randomBytesGenerator0, KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* ___keyStoreCrypto1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreServiceBase_1__ctor_m64D65982ED2BF1F1A5B84B72D8335796ABED0915_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___randomBytesGenerator0;
		KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* L_1 = ___keyStoreCrypto1;
		KeyStoreServiceBase_1__ctor_m64D65982ED2BF1F1A5B84B72D8335796ABED0915(__this, L_0, L_1, KeyStoreServiceBase_1__ctor_m64D65982ED2BF1F1A5B84B72D8335796ABED0915_RuntimeMethod_var);
		return;
	}
}
// System.Void Solana.Unity.KeyStore.Services.KeyStoreScryptService::.ctor(Solana.Unity.KeyStore.Crypto.IRandomBytesGenerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreScryptService__ctor_mF14D7398FA56EB668974D9AC7606445B2DD5E001 (KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436* __this, RuntimeObject* ___randomBytesGenerator0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreServiceBase_1__ctor_m7F3CB4CACCABC655A1995D24D909B56F6C401669_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___randomBytesGenerator0;
		KeyStoreServiceBase_1__ctor_m7F3CB4CACCABC655A1995D24D909B56F6C401669(__this, L_0, KeyStoreServiceBase_1__ctor_m7F3CB4CACCABC655A1995D24D909B56F6C401669_RuntimeMethod_var);
		return;
	}
}
// System.Byte[] Solana.Unity.KeyStore.Services.KeyStoreScryptService::GenerateDerivedKey(System.String,System.Byte[],Solana.Unity.KeyStore.Model.ScryptParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreScryptService_GenerateDerivedKey_m1541F7A048C514CF7EB11B9B0DE30F71CEEFDEBF (KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* ___kdfParams2, const RuntimeMethod* method) 
{
	{
		KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* L_0 = ((KeyStoreServiceBase_1_t9E28408AE50D30E487A114F2A8FA68EEA6390FD7*)__this)->___KeyStoreCrypto_1;
		KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* L_1 = ((KeyStoreServiceBase_1_t9E28408AE50D30E487A114F2A8FA68EEA6390FD7*)__this)->___KeyStoreCrypto_1;
		String_t* L_2 = ___password0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = KeyStoreCrypto_GetPasswordAsBytes_mAA60A85804EF4263AD01AA9179A251DBF09E5F5C(L_1, L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___salt1;
		ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* L_5 = ___kdfParams2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ScryptParams_get_N_mDAFBDC59B51BC33BD0D2D5DA35A02F46A6892AE7_inline(L_5, NULL);
		ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* L_7 = ___kdfParams2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ScryptParams_get_R_mAEF4FF09651BC26B6CD2FAF06DA243E4524EB7DE_inline(L_7, NULL);
		ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* L_9 = ___kdfParams2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = ScryptParams_get_P_mBDCF88ADEF16EA41E4CD384204DD40396CCABBC6_inline(L_9, NULL);
		ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* L_11 = ___kdfParams2;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = KdfParams_get_Dklen_m0DA49F53D2964502070D2078E4E632476C1641B2_inline(L_11, NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = KeyStoreCrypto_GenerateDerivedScryptKey_mDBEE6DBC9C461B7658582053A55DCB7A5441EBF4(L_0, L_3, L_4, L_6, L_8, L_10, L_12, (bool)0, NULL);
		return L_13;
	}
}
// Solana.Unity.KeyStore.Model.ScryptParams Solana.Unity.KeyStore.Services.KeyStoreScryptService::GetDefaultParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* KeyStoreScryptService_GetDefaultParams_m6F7EF93446F331EEC408C0E135388BA17843756C (KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* L_0 = (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641*)il2cpp_codegen_object_new(ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ScryptParams__ctor_m830F04D35EDA0C3E99D92B829DE761CC218F217C(L_0, NULL);
		ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* L_1 = L_0;
		NullCheck(L_1);
		KdfParams_set_Dklen_m4616AAC32EB9CA8620CDA26733446ABF5FEEA28C_inline(L_1, ((int32_t)32), NULL);
		ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* L_2 = L_1;
		NullCheck(L_2);
		ScryptParams_set_N_m794FE7E2C5C6E8E100E1D2A08697F0DB3BA241AE_inline(L_2, ((int32_t)262144), NULL);
		ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* L_3 = L_2;
		NullCheck(L_3);
		ScryptParams_set_R_mE69905F7655C8EA666EC530E3963D6D2CE1EEA88_inline(L_3, 1, NULL);
		ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* L_4 = L_3;
		NullCheck(L_4);
		ScryptParams_set_P_m48C0B8CDD3A3462F2EBACED538DD796C962047E7_inline(L_4, 8, NULL);
		return L_4;
	}
}
// Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.ScryptParams> Solana.Unity.KeyStore.Services.KeyStoreScryptService::DeserializeKeyStoreFromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* KeyStoreScryptService_DeserializeKeyStoreFromJson_mE907C9621F2A94CC2BF5E7AE886A9D770483273F (KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436* __this, String_t* ___json0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___json0;
		KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* L_1;
		L_1 = JsonKeyStoreScryptSerializer_DeserializeScrypt_mB8C5F942F77C18995FA5FF4010CADEE4C166D5CF(L_0, NULL);
		return L_1;
	}
}
// System.String Solana.Unity.KeyStore.Services.KeyStoreScryptService::SerializeKeyStoreToJson(Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.ScryptParams>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStoreScryptService_SerializeKeyStoreToJson_m5F74B35B78EACBC19B43F0849F736F6B7E75813A (KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436* __this, KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* ___keyStore0, const RuntimeMethod* method) 
{
	{
		KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* L_0 = ___keyStore0;
		String_t* L_1;
		L_1 = JsonKeyStoreScryptSerializer_SerializeScrypt_m02C3C5FD05219BDE609C7CA7A236691D0B29607D(L_0, NULL);
		return L_1;
	}
}
// System.Byte[] Solana.Unity.KeyStore.Services.KeyStoreScryptService::DecryptKeyStore(System.String,Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.ScryptParams>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreScryptService_DecryptKeyStore_mE34F6122DCCA1E1AB2BC67515384BB270BFE6CEE (KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436* __this, String_t* ___password0, KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* ___keyStore1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_CipherParams_m991D219D4E2ECCEF6150167AE479C696698E0AEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_CipherText_mA165D66076D43B9C3B0C2FFC460EC9000D5462E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Kdfparams_m97D42C1BCB670D971801CF9ED1EACC0B7D47015B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Mac_m058F6F3F2B75E29229BAD6970850F2D0FBEB4E7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_get_Crypto_mF8F2F9EAD196AC7E6D73BFBD84527ACF5DEB27DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___password0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreScryptService_DecryptKeyStore_mE34F6122DCCA1E1AB2BC67515384BB270BFE6CEE_RuntimeMethod_var)));
	}

IL_000e:
	{
		KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* L_2 = ___keyStore1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB144512DA9AA6B91993CE8E07E163EA3FF0A440A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreScryptService_DecryptKeyStore_mE34F6122DCCA1E1AB2BC67515384BB270BFE6CEE_RuntimeMethod_var)));
	}

IL_001c:
	{
		KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* L_4 = ((KeyStoreServiceBase_1_t9E28408AE50D30E487A114F2A8FA68EEA6390FD7*)__this)->___KeyStoreCrypto_1;
		String_t* L_5 = ___password0;
		KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* L_6 = ___keyStore1;
		NullCheck(L_6);
		CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB* L_7;
		L_7 = KeyStore_1_get_Crypto_mF8F2F9EAD196AC7E6D73BFBD84527ACF5DEB27DA_inline(L_6, KeyStore_1_get_Crypto_mF8F2F9EAD196AC7E6D73BFBD84527ACF5DEB27DA_RuntimeMethod_var);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = CryptoInfo_1_get_Mac_m058F6F3F2B75E29229BAD6970850F2D0FBEB4E7D_inline(L_7, CryptoInfo_1_get_Mac_m058F6F3F2B75E29229BAD6970850F2D0FBEB4E7D_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = Utils_HexToByteArray_m9A86A9ECE12C375E76D81441E40654F4ACC582E9(L_8, NULL);
		KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* L_10 = ___keyStore1;
		NullCheck(L_10);
		CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB* L_11;
		L_11 = KeyStore_1_get_Crypto_mF8F2F9EAD196AC7E6D73BFBD84527ACF5DEB27DA_inline(L_10, KeyStore_1_get_Crypto_mF8F2F9EAD196AC7E6D73BFBD84527ACF5DEB27DA_RuntimeMethod_var);
		NullCheck(L_11);
		CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213* L_12;
		L_12 = CryptoInfo_1_get_CipherParams_m991D219D4E2ECCEF6150167AE479C696698E0AEA_inline(L_11, CryptoInfo_1_get_CipherParams_m991D219D4E2ECCEF6150167AE479C696698E0AEA_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = CipherParams_get_Iv_m20942DD64A8B25300F2D6A75344D693C48C33263_inline(L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = Utils_HexToByteArray_m9A86A9ECE12C375E76D81441E40654F4ACC582E9(L_13, NULL);
		KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* L_15 = ___keyStore1;
		NullCheck(L_15);
		CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB* L_16;
		L_16 = KeyStore_1_get_Crypto_mF8F2F9EAD196AC7E6D73BFBD84527ACF5DEB27DA_inline(L_15, KeyStore_1_get_Crypto_mF8F2F9EAD196AC7E6D73BFBD84527ACF5DEB27DA_RuntimeMethod_var);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = CryptoInfo_1_get_CipherText_mA165D66076D43B9C3B0C2FFC460EC9000D5462E4_inline(L_16, CryptoInfo_1_get_CipherText_mA165D66076D43B9C3B0C2FFC460EC9000D5462E4_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = Utils_HexToByteArray_m9A86A9ECE12C375E76D81441E40654F4ACC582E9(L_17, NULL);
		KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* L_19 = ___keyStore1;
		NullCheck(L_19);
		CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB* L_20;
		L_20 = KeyStore_1_get_Crypto_mF8F2F9EAD196AC7E6D73BFBD84527ACF5DEB27DA_inline(L_19, KeyStore_1_get_Crypto_mF8F2F9EAD196AC7E6D73BFBD84527ACF5DEB27DA_RuntimeMethod_var);
		NullCheck(L_20);
		ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* L_21;
		L_21 = CryptoInfo_1_get_Kdfparams_m97D42C1BCB670D971801CF9ED1EACC0B7D47015B_inline(L_20, CryptoInfo_1_get_Kdfparams_m97D42C1BCB670D971801CF9ED1EACC0B7D47015B_RuntimeMethod_var);
		NullCheck(L_21);
		int32_t L_22;
		L_22 = ScryptParams_get_N_mDAFBDC59B51BC33BD0D2D5DA35A02F46A6892AE7_inline(L_21, NULL);
		KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* L_23 = ___keyStore1;
		NullCheck(L_23);
		CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB* L_24;
		L_24 = KeyStore_1_get_Crypto_mF8F2F9EAD196AC7E6D73BFBD84527ACF5DEB27DA_inline(L_23, KeyStore_1_get_Crypto_mF8F2F9EAD196AC7E6D73BFBD84527ACF5DEB27DA_RuntimeMethod_var);
		NullCheck(L_24);
		ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* L_25;
		L_25 = CryptoInfo_1_get_Kdfparams_m97D42C1BCB670D971801CF9ED1EACC0B7D47015B_inline(L_24, CryptoInfo_1_get_Kdfparams_m97D42C1BCB670D971801CF9ED1EACC0B7D47015B_RuntimeMethod_var);
		NullCheck(L_25);
		int32_t L_26;
		L_26 = ScryptParams_get_P_mBDCF88ADEF16EA41E4CD384204DD40396CCABBC6_inline(L_25, NULL);
		KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* L_27 = ___keyStore1;
		NullCheck(L_27);
		CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB* L_28;
		L_28 = KeyStore_1_get_Crypto_mF8F2F9EAD196AC7E6D73BFBD84527ACF5DEB27DA_inline(L_27, KeyStore_1_get_Crypto_mF8F2F9EAD196AC7E6D73BFBD84527ACF5DEB27DA_RuntimeMethod_var);
		NullCheck(L_28);
		ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* L_29;
		L_29 = CryptoInfo_1_get_Kdfparams_m97D42C1BCB670D971801CF9ED1EACC0B7D47015B_inline(L_28, CryptoInfo_1_get_Kdfparams_m97D42C1BCB670D971801CF9ED1EACC0B7D47015B_RuntimeMethod_var);
		NullCheck(L_29);
		int32_t L_30;
		L_30 = ScryptParams_get_R_mAEF4FF09651BC26B6CD2FAF06DA243E4524EB7DE_inline(L_29, NULL);
		KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* L_31 = ___keyStore1;
		NullCheck(L_31);
		CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB* L_32;
		L_32 = KeyStore_1_get_Crypto_mF8F2F9EAD196AC7E6D73BFBD84527ACF5DEB27DA_inline(L_31, KeyStore_1_get_Crypto_mF8F2F9EAD196AC7E6D73BFBD84527ACF5DEB27DA_RuntimeMethod_var);
		NullCheck(L_32);
		ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* L_33;
		L_33 = CryptoInfo_1_get_Kdfparams_m97D42C1BCB670D971801CF9ED1EACC0B7D47015B_inline(L_32, CryptoInfo_1_get_Kdfparams_m97D42C1BCB670D971801CF9ED1EACC0B7D47015B_RuntimeMethod_var);
		NullCheck(L_33);
		String_t* L_34;
		L_34 = KdfParams_get_Salt_mEA33B92C79AE05757DCB0440F0168E0B80E9A3F4_inline(L_33, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = Utils_HexToByteArray_m9A86A9ECE12C375E76D81441E40654F4ACC582E9(L_34, NULL);
		KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* L_36 = ___keyStore1;
		NullCheck(L_36);
		CryptoInfo_1_tB4AE05D5B4EE4E2C4A9CE2B0125158FCEE6A76CB* L_37;
		L_37 = KeyStore_1_get_Crypto_mF8F2F9EAD196AC7E6D73BFBD84527ACF5DEB27DA_inline(L_36, KeyStore_1_get_Crypto_mF8F2F9EAD196AC7E6D73BFBD84527ACF5DEB27DA_RuntimeMethod_var);
		NullCheck(L_37);
		ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* L_38;
		L_38 = CryptoInfo_1_get_Kdfparams_m97D42C1BCB670D971801CF9ED1EACC0B7D47015B_inline(L_37, CryptoInfo_1_get_Kdfparams_m97D42C1BCB670D971801CF9ED1EACC0B7D47015B_RuntimeMethod_var);
		NullCheck(L_38);
		int32_t L_39;
		L_39 = KdfParams_get_Dklen_m0DA49F53D2964502070D2078E4E632476C1641B2_inline(L_38, NULL);
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
		L_40 = KeyStoreCrypto_DecryptScrypt_m0B2735016A32B9374A3A3AE037603F0C9E331D99(L_4, L_5, L_9, L_14, L_18, L_22, L_26, L_30, L_35, L_39, NULL);
		return L_40;
	}
}
// System.String Solana.Unity.KeyStore.Services.KeyStoreScryptService::GetKdfType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStoreScryptService_GetKdfType_m19C029D58E0ED745DA4CBF1543E12A298D822C57 (KeyStoreScryptService_tED9790DC4D5413D7F27BABA1148A0371CCA4C436* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEF710A7FE8B1F687BE0C4888B5002E9635CE519);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralDEF710A7FE8B1F687BE0C4888B5002E9635CE519;
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
// System.String Solana.Unity.KeyStore.Serialization.JsonKeyStorePbkdf2Serializer::SerialisePbkdf2(Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.Pbkdf2Params>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonKeyStorePbkdf2Serializer_SerialisePbkdf2_m15B7F6EC1DC247D3EEE7BD6F16AAF5B426C92EF5 (KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* ___pbkdf2KeyStore0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* L_0 = ___pbkdf2KeyStore0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7(L_0, NULL);
		return L_1;
	}
}
// Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.Pbkdf2Params> Solana.Unity.KeyStore.Serialization.JsonKeyStorePbkdf2Serializer::DeserializePbkdf2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* JsonKeyStorePbkdf2Serializer_DeserializePbkdf2_mA0F8D6B48BEDFAAD7FCF7F985A28B97471E05586 (String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisKeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383_m65F85BB1BF9E6F0628A670D99DB425E00BABA31F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___json0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		KeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383* L_1;
		L_1 = JsonConvert_DeserializeObject_TisKeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383_m65F85BB1BF9E6F0628A670D99DB425E00BABA31F(L_0, JsonConvert_DeserializeObject_TisKeyStore_1_tFEA2ED3F380F3DEABC620005114A15F402C11383_m65F85BB1BF9E6F0628A670D99DB425E00BABA31F_RuntimeMethod_var);
		return L_1;
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
// System.String Solana.Unity.KeyStore.Serialization.JsonKeyStoreScryptSerializer::SerializeScrypt(Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.ScryptParams>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonKeyStoreScryptSerializer_SerializeScrypt_m02C3C5FD05219BDE609C7CA7A236691D0B29607D (KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* ___scryptKeyStore0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* L_0 = ___scryptKeyStore0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7(L_0, NULL);
		return L_1;
	}
}
// Solana.Unity.KeyStore.Model.KeyStore`1<Solana.Unity.KeyStore.Model.ScryptParams> Solana.Unity.KeyStore.Serialization.JsonKeyStoreScryptSerializer::DeserializeScrypt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* JsonKeyStoreScryptSerializer_DeserializeScrypt_mB8C5F942F77C18995FA5FF4010CADEE4C166D5CF (String_t* ___json0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisKeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500_mD3344E77F0601A2580A60BF527ADDB6D3C6715E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___json0;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		KeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500* L_1;
		L_1 = JsonConvert_DeserializeObject_TisKeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500_mD3344E77F0601A2580A60BF527ADDB6D3C6715E1(L_0, JsonConvert_DeserializeObject_TisKeyStore_1_tA4921EBABEE842CA5EEE4A44B44A30785E3AA500_mD3344E77F0601A2580A60BF527ADDB6D3C6715E1_RuntimeMethod_var);
		return L_1;
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
// System.Void Solana.Unity.KeyStore.Model.CipherParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherParams__ctor_mAF6AA250E77BBF89E53238E18EA4305EC68D32F4 (CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Solana.Unity.KeyStore.Model.CipherParams::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherParams__ctor_m6B69650C87DD55A5171D5A6724D26100354CD045 (CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___iv0;
		String_t* L_1;
		L_1 = Utils_ToHex_m9E7A369D4F8F99EB22D335057710021158257B32(L_0, NULL);
		CipherParams_set_Iv_m8057D32CE1E7366F11CB38E40A229B2EF0B0D198_inline(__this, L_1, NULL);
		return;
	}
}
// System.String Solana.Unity.KeyStore.Model.CipherParams::get_Iv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CipherParams_get_Iv_m20942DD64A8B25300F2D6A75344D693C48C33263 (CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CIvU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.KeyStore.Model.CipherParams::set_Iv(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherParams_set_Iv_m8057D32CE1E7366F11CB38E40A229B2EF0B0D198 (CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CIvU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIvU3Ek__BackingField_0), (void*)L_0);
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
// System.Int32 Solana.Unity.KeyStore.Model.KdfParams::get_Dklen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KdfParams_get_Dklen_m0DA49F53D2964502070D2078E4E632476C1641B2 (KdfParams_t9B1EE8807F717153B82AD7581BFCF8D18273C2EF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDklenU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.KeyStore.Model.KdfParams::set_Dklen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KdfParams_set_Dklen_m4616AAC32EB9CA8620CDA26733446ABF5FEEA28C (KdfParams_t9B1EE8807F717153B82AD7581BFCF8D18273C2EF* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CDklenU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String Solana.Unity.KeyStore.Model.KdfParams::get_Salt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KdfParams_get_Salt_mEA33B92C79AE05757DCB0440F0168E0B80E9A3F4 (KdfParams_t9B1EE8807F717153B82AD7581BFCF8D18273C2EF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSaltU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Solana.Unity.KeyStore.Model.KdfParams::set_Salt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KdfParams_set_Salt_mD8AA9F80B93112F1834279191F04D53733651D01 (KdfParams_t9B1EE8807F717153B82AD7581BFCF8D18273C2EF* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CSaltU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSaltU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Solana.Unity.KeyStore.Model.KdfParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KdfParams__ctor_m3F163FD331826CE7CA11C8D70E3FDAE8AFFB0504 (KdfParams_t9B1EE8807F717153B82AD7581BFCF8D18273C2EF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Int32 Solana.Unity.KeyStore.Model.Pbkdf2Params::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pbkdf2Params_get_Count_m21F0CC9B7F3FB40F4DF9637B9B5F932E59483FE5 (Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCountU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.KeyStore.Model.Pbkdf2Params::set_Count(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pbkdf2Params_set_Count_m34A80FBE8585FB68E6209FC26B06B2C06DEE86D5 (Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCountU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String Solana.Unity.KeyStore.Model.Pbkdf2Params::get_Prf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Pbkdf2Params_get_Prf_m8BFDFAEFA7E549B96A0B7304643D11619CA05F27 (Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPrfU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.KeyStore.Model.Pbkdf2Params::set_Prf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pbkdf2Params_set_Prf_m9AD34003E7A74690789EC721B321C6DFCEB3BCCC (Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CPrfU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPrfU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Solana.Unity.KeyStore.Model.Pbkdf2Params::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pbkdf2Params__ctor_mB7A25632BEB8646C5A23355374C807BB54FDF6D3 (Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* __this, const RuntimeMethod* method) 
{
	{
		KdfParams__ctor_m3F163FD331826CE7CA11C8D70E3FDAE8AFFB0504(__this, NULL);
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
// System.Int32 Solana.Unity.KeyStore.Model.ScryptParams::get_N()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScryptParams_get_N_mDAFBDC59B51BC33BD0D2D5DA35A02F46A6892AE7 (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CNU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.KeyStore.Model.ScryptParams::set_N(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParams_set_N_m794FE7E2C5C6E8E100E1D2A08697F0DB3BA241AE (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CNU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 Solana.Unity.KeyStore.Model.ScryptParams::get_R()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScryptParams_get_R_mAEF4FF09651BC26B6CD2FAF06DA243E4524EB7DE (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CRU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.KeyStore.Model.ScryptParams::set_R(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParams_set_R_mE69905F7655C8EA666EC530E3963D6D2CE1EEA88 (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CRU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 Solana.Unity.KeyStore.Model.ScryptParams::get_P()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScryptParams_get_P_mBDCF88ADEF16EA41E4CD384204DD40396CCABBC6 (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.KeyStore.Model.ScryptParams::set_P(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParams_set_P_m48C0B8CDD3A3462F2EBACED538DD796C962047E7 (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CPU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Solana.Unity.KeyStore.Model.ScryptParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParams__ctor_m830F04D35EDA0C3E99D92B829DE761CC218F217C (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* __this, const RuntimeMethod* method) 
{
	{
		KdfParams__ctor_m3F163FD331826CE7CA11C8D70E3FDAE8AFFB0504(__this, NULL);
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
// System.Void Solana.Unity.KeyStore.Exceptions.DecryptionException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecryptionException__ctor_m6F2EBBB70D5D3CDD1CC48E7900A87EBEB09129F7 (DecryptionException_t34C51BD782E922C459D93AD2E4E705E22D92F5C3* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___msg0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
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
// System.Void Solana.Unity.KeyStore.Exceptions.InvalidKdfException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidKdfException__ctor_mF106D0E636D23179E8C70B34C68F27F298C69FAE (InvalidKdfException_tBB0DE3AAA56DDBC6703168B247F189C33E6C21EF* __this, String_t* ___kdf0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24B0B97B3E8D6A36FF26BD81423363B53D42F503);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___kdf0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral24B0B97B3E8D6A36FF26BD81423363B53D42F503, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_1, NULL);
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
// System.Byte[] Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::GenerateDerivedScryptKey(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateDerivedScryptKey_mDBEE6DBC9C461B7658582053A55DCB7A5441EBF4 (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, int32_t ___n2, int32_t ___r3, int32_t ___p4, int32_t ___dkLen5, bool ___checkRandN6, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___checkRandN6;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = ___r3;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = ___n2;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)65536))))
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral90AF97DD8EF1877A399A4D1D1AF32DE07CB7CA27)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreCrypto_GenerateDerivedScryptKey_mDBEE6DBC9C461B7658582053A55DCB7A5441EBF4_RuntimeMethod_var)));
	}

IL_001c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___password0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___salt1;
		int32_t L_6 = ___n2;
		int32_t L_7 = ___r3;
		int32_t L_8 = ___p4;
		int32_t L_9 = ___dkLen5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = Scrypt_CryptoScrypt_m554A52638B50E68E0C43EB51E756AD49CD6D2EFF(L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Byte[] Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::GenerateCipherKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateCipherKey_m2EF7CDC3101387C63F3C5EFBBF4978CB611C5DB6 (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___derivedKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___derivedKey0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_1, (RuntimeArray*)L_2, ((int32_t)16), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::CalculateKeccakHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_CalculateKeccakHash_mB11AE2375DD9A48618858F1788440E76082142ED (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* L_0 = (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8*)il2cpp_codegen_object_new(KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		KeccakDigest__ctor_m1D83E44DC559F9E747241A63E130AF770D442FCF(L_0, ((int32_t)256), NULL);
		KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::GetDigestSize() */, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* L_4 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___value0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___value0;
		NullCheck(L_6);
		NullCheck(L_4);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(16 /* System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_4);
		int32_t L_8;
		L_8 = VirtualFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(17 /* System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::DoFinal(System.Byte[],System.Int32) */, L_4, L_7, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		return L_9;
	}
}
// System.Byte[] Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::GenerateMac(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateMac_m52C0288D10244303029F66F425B00CB1D368B606 (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___derivedKey0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipherText1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___cipherText1;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)16), ((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___derivedKey0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, ((int32_t)16), (RuntimeArray*)L_3, 0, ((int32_t)16), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___cipherText1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___cipherText1;
		NullCheck(L_6);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, ((int32_t)16), ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = KeyStoreCrypto_CalculateKeccakHash_mB11AE2375DD9A48618858F1788440E76082142ED(__this, L_7, NULL);
		return L_8;
	}
}
// System.Byte[] Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::GeneratePbkdf2Sha256DerivedKey(System.String,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GeneratePbkdf2Sha256DerivedKey_m03A22D5B0A11C905A297ADEC50E9AD79E7A0013C (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, int32_t ___count2, int32_t ___dklen3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A* L_0 = (Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A*)il2cpp_codegen_object_new(Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha256Digest__ctor_m6A98252E0DAF748D5D1BDBCDA91042301B1657D8(L_0, NULL);
		Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D* L_1 = (Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D*)il2cpp_codegen_object_new(Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Pkcs5S2ParametersGenerator__ctor_m43D8AC42079DF38586045859373DF2C8825A6C71(L_1, L_0, NULL);
		Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D* L_2 = L_1;
		String_t* L_3 = ___password0;
		NullCheck(L_3);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4;
		L_4 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = PbeParametersGenerator_Pkcs5PasswordToUtf8Bytes_mF4BE2279157A14D42D973D2C5A022922A6D552DA(L_4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___salt1;
		int32_t L_7 = ___count2;
		NullCheck(L_2);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.PbeParametersGenerator::Init(System.Byte[],System.Byte[],System.Int32) */, L_2, L_5, L_6, L_7);
		int32_t L_8 = ___dklen3;
		NullCheck(L_2);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(12 /* Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.PbeParametersGenerator::GenerateDerivedMacParameters(System.Int32) */, L_2, ((int32_t)il2cpp_codegen_multiply(8, L_8)));
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_9, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_9, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		return L_10;
	}
}
// System.Byte[] Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::GenerateAesCtrCipher(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateAesCtrCipher_m12C22EE6A2DEE495E239DF5A609A093577BFCA8A (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___encryptKey1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CipherUtilities_tDA37832A133C3F502C98888EA1477FBA0EF5F8F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterUtilities_t2330968701206F630234AD4A65667E7CAEE14EAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral423ACA01AC170A50869ECDEF572CD96995576718);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC78E78B6EC5C50ADC67D977E0F4C67424995CE6);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___encryptKey1;
		il2cpp_codegen_runtime_class_init_inline(ParameterUtilities_t2330968701206F630234AD4A65667E7CAEE14EAF_il2cpp_TypeInfo_var);
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_1;
		L_1 = ParameterUtilities_CreateKeyParameter_m503070D02626F2E547CED69879BB7A359ED9ED19(_stringLiteral423ACA01AC170A50869ECDEF572CD96995576718, L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___iv0;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_3 = (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)il2cpp_codegen_object_new(ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ParametersWithIV__ctor_mC1B4901D3CEBECE5903FE14597AA0701B7B7C994(L_3, L_1, L_2, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(CipherUtilities_tDA37832A133C3F502C98888EA1477FBA0EF5F8F8_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = CipherUtilities_GetCipher_m120CBF0B698B4B035A827FF2E710AD7B170DC615(_stringLiteralAC78E78B6EC5C50ADC67D977E0F4C67424995CE6, NULL);
		RuntimeObject* L_5 = L_4;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_6 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBufferedCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var, L_5, (bool)1, L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___input2;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = InterfaceFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Byte[] Org.BouncyCastle.Crypto.IBufferedCipher::DoFinal(System.Byte[]) */, IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var, L_5, L_7);
		return L_8;
	}
}
// System.Byte[] Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::DecryptScrypt(System.String,System.Byte[],System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_DecryptScrypt_m0B2735016A32B9374A3A3AE037603F0C9E331D99 (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipherText3, int32_t ___n4, int32_t ___p5, int32_t ___r6, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt7, int32_t ___dklen8, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___password0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = KeyStoreCrypto_GetPasswordAsBytes_mAA60A85804EF4263AD01AA9179A251DBF09E5F5C(__this, L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___salt7;
		int32_t L_3 = ___n4;
		int32_t L_4 = ___r6;
		int32_t L_5 = ___p5;
		int32_t L_6 = ___dklen8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = KeyStoreCrypto_GenerateDerivedScryptKey_mDBEE6DBC9C461B7658582053A55DCB7A5441EBF4(__this, L_1, L_2, L_3, L_4, L_5, L_6, (bool)0, NULL);
		V_0 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___mac1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___iv2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___cipherText3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = KeyStoreCrypto_Decrypt_m097DCA56C2EF7EC95B60929BAFAF0660EF951BEC(__this, L_8, L_9, L_10, L_11, NULL);
		return L_12;
	}
}
// System.Byte[] Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::DecryptPbkdf2Sha256(System.String,System.Byte[],System.Byte[],System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_DecryptPbkdf2Sha256_m9EA90B0121ADD4E5ECF2FBF79182CEC5A9133BAB (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, String_t* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipherText3, int32_t ___c4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt5, int32_t ___dklen6, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___password0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___salt5;
		int32_t L_2 = ___c4;
		int32_t L_3 = ___dklen6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = KeyStoreCrypto_GeneratePbkdf2Sha256DerivedKey_m03A22D5B0A11C905A297ADEC50E9AD79E7A0013C(__this, L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___mac1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___iv2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___cipherText3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = KeyStoreCrypto_Decrypt_m097DCA56C2EF7EC95B60929BAFAF0660EF951BEC(__this, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// System.Byte[] Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::Decrypt(System.Byte[],System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_Decrypt_m097DCA56C2EF7EC95B60929BAFAF0660EF951BEC (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipherText2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___derivedKey3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___mac0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___cipherText2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___derivedKey3;
		KeyStoreCrypto_ValidateMac_m1C97DF4502ED3DAAC0A021F1666FB103E6B6F6A9(__this, L_0, L_1, L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___derivedKey3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_4, (RuntimeArray*)L_5, ((int32_t)16), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___iv1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___cipherText2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = KeyStoreCrypto_GenerateAesCtrCipher_m12C22EE6A2DEE495E239DF5A609A093577BFCA8A(__this, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// System.Void Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::ValidateMac(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreCrypto_ValidateMac_m1C97DF4502ED3DAAC0A021F1666FB103E6B6F6A9 (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cipherText1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___derivedKey2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___derivedKey2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___cipherText1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = KeyStoreCrypto_GenerateMac_m52C0288D10244303029F66F425B00CB1D368B606(__this, L_0, L_1, NULL);
		String_t* L_3;
		L_3 = Utils_ToHex_m9E7A369D4F8F99EB22D335057710021158257B32(L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___mac0;
		String_t* L_5;
		L_5 = Utils_ToHex_m9E7A369D4F8F99EB22D335057710021158257B32(L_4, NULL);
		bool L_6;
		L_6 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0025;
		}
	}
	{
		DecryptionException_t34C51BD782E922C459D93AD2E4E705E22D92F5C3* L_7 = (DecryptionException_t34C51BD782E922C459D93AD2E4E705E22D92F5C3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecryptionException_t34C51BD782E922C459D93AD2E4E705E22D92F5C3_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		DecryptionException__ctor_m6F2EBBB70D5D3CDD1CC48E7900A87EBEB09129F7(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7248681F5E1332CF3625028F368C8C55C58D51C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreCrypto_ValidateMac_m1C97DF4502ED3DAAC0A021F1666FB103E6B6F6A9_RuntimeMethod_var)));
	}

IL_0025:
	{
		return;
	}
}
// System.Byte[] Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::GetPasswordAsBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GetPasswordAsBytes_mAA60A85804EF4263AD01AA9179A251DBF09E5F5C (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, String_t* ___password0, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___password0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Solana.Unity.KeyStore.Crypto.KeyStoreCrypto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreCrypto__ctor_m948733E26C537E4D6D509A60321F0AC59C98F03C (KeyStoreCrypto_tEE0DCFE1B45C5ECEEDD4E84B7D2A0CBFAC7095E7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Byte[] Solana.Unity.KeyStore.Crypto.RandomBytesGenerator::GenerateRandomInitializationVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RandomBytesGenerator_GenerateRandomInitializationVector_m5C0692FD62B636A8DBC762DDD71967C9A70DF1D7 (RandomBytesGenerator_t436ACB62D55C9778CE8BFACD7928CF7FFC781D89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RandomBytesGenerator_t436ACB62D55C9778CE8BFACD7928CF7FFC781D89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RandomBytesGenerator_t436ACB62D55C9778CE8BFACD7928CF7FFC781D89_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = RandomBytesGenerator_GenerateRandomBytes_mEA7DC5FACADBCF09D56FD9B0397D955186F94D6D(((int32_t)16), NULL);
		return L_0;
	}
}
// System.Byte[] Solana.Unity.KeyStore.Crypto.RandomBytesGenerator::GenerateRandomSalt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RandomBytesGenerator_GenerateRandomSalt_mD041EDBC513FA32F13CC9B8B94EC494AB4041943 (RandomBytesGenerator_t436ACB62D55C9778CE8BFACD7928CF7FFC781D89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RandomBytesGenerator_t436ACB62D55C9778CE8BFACD7928CF7FFC781D89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RandomBytesGenerator_t436ACB62D55C9778CE8BFACD7928CF7FFC781D89_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = RandomBytesGenerator_GenerateRandomBytes_mEA7DC5FACADBCF09D56FD9B0397D955186F94D6D(((int32_t)32), NULL);
		return L_0;
	}
}
// System.Byte[] Solana.Unity.KeyStore.Crypto.RandomBytesGenerator::GenerateRandomBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RandomBytesGenerator_GenerateRandomBytes_mEA7DC5FACADBCF09D56FD9B0397D955186F94D6D (int32_t ___size0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RandomBytesGenerator_t436ACB62D55C9778CE8BFACD7928CF7FFC781D89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		int32_t L_0 = ___size0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(RandomBytesGenerator_t436ACB62D55C9778CE8BFACD7928CF7FFC781D89_il2cpp_TypeInfo_var);
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_2 = ((RandomBytesGenerator_t436ACB62D55C9778CE8BFACD7928CF7FFC781D89_StaticFields*)il2cpp_codegen_static_fields_for(RandomBytesGenerator_t436ACB62D55C9778CE8BFACD7928CF7FFC781D89_il2cpp_TypeInfo_var))->___Random_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_2, L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		return L_4;
	}
}
// System.Void Solana.Unity.KeyStore.Crypto.RandomBytesGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomBytesGenerator__ctor_m169130EF2497D648B694E0C195745F6C5F324609 (RandomBytesGenerator_t436ACB62D55C9778CE8BFACD7928CF7FFC781D89* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Solana.Unity.KeyStore.Crypto.RandomBytesGenerator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomBytesGenerator__cctor_m4EAB5F99C4798ACCE974E80DFCB6A9EAEDA5A6F6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RandomBytesGenerator_t436ACB62D55C9778CE8BFACD7928CF7FFC781D89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_0 = (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076*)il2cpp_codegen_object_new(SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SecureRandom__ctor_m1FB3C478CD5CC4CDF68C981D8F5F89FC8EF8CC68(L_0, NULL);
		((RandomBytesGenerator_t436ACB62D55C9778CE8BFACD7928CF7FFC781D89_StaticFields*)il2cpp_codegen_static_fields_for(RandomBytesGenerator_t436ACB62D55C9778CE8BFACD7928CF7FFC781D89_il2cpp_TypeInfo_var))->___Random_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RandomBytesGenerator_t436ACB62D55C9778CE8BFACD7928CF7FFC781D89_StaticFields*)il2cpp_codegen_static_fields_for(RandomBytesGenerator_t436ACB62D55C9778CE8BFACD7928CF7FFC781D89_il2cpp_TypeInfo_var))->___Random_0), (void*)L_0);
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
// System.Byte[] Solana.Unity.KeyStore.Crypto.Scrypt::SingleIterationPbkdf2(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Scrypt_SingleIterationPbkdf2_mA11CB4F78119104A2607D675A395A3D16E0F400B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s1, int32_t ___dkLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A* L_0 = (Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A*)il2cpp_codegen_object_new(Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Sha256Digest__ctor_m6A98252E0DAF748D5D1BDBCDA91042301B1657D8(L_0, NULL);
		Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D* L_1 = (Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D*)il2cpp_codegen_object_new(Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Pkcs5S2ParametersGenerator__ctor_m43D8AC42079DF38586045859373DF2C8825A6C71(L_1, L_0, NULL);
		Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D* L_2 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___p0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___s1;
		NullCheck(L_2);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.PbeParametersGenerator::Init(System.Byte[],System.Byte[],System.Int32) */, L_2, L_3, L_4, 1);
		int32_t L_5 = ___dkLen2;
		NullCheck(L_2);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(12 /* Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.PbeParametersGenerator::GenerateDerivedMacParameters(System.Int32) */, L_2, ((int32_t)il2cpp_codegen_multiply(L_5, 8)));
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_6, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_6, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		return L_7;
	}
}
// System.Byte[] Solana.Unity.KeyStore.Crypto.Scrypt::CryptoScrypt(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Scrypt_CryptoScrypt_m554A52638B50E68E0C43EB51E756AD49CD6D2EFF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, int32_t ___n2, int32_t ___r3, int32_t ___p4, int32_t ___dkLen5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	void* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	void* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	int32_t V_7 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B6_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B5_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B7_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B8_0 = NULL;
	{
		int32_t L_0 = ___r3;
		int32_t L_1 = ___p4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)128), L_0)), L_1)), ((int32_t)63))));
		V_0 = L_2;
		int32_t L_3 = ___r3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)256), L_3)), ((int32_t)63))));
		int32_t L_5 = ___r3;
		int32_t L_6 = ___n2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)128), L_5)), L_6)), ((int32_t)63))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___password0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___salt1;
		int32_t L_11 = ___p4;
		int32_t L_12 = ___r3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = Scrypt_SingleIterationPbkdf2_mA11CB4F78119104A2607D675A395A3D16E0F400B(L_9, L_10, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)128))), L_12)), NULL);
		V_0 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14;
		V_2 = L_15;
		G_B1_0 = L_7;
		G_B1_1 = L_4;
		if (!L_15)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_4;
			goto IL_0057;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_2;
		NullCheck(L_16);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		if (((int32_t)(((RuntimeArray*)L_16)->max_length)))
		{
			G_B3_0 = G_B1_0;
			G_B3_1 = G_B1_1;
			goto IL_005c;
		}
	}

IL_0057:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		G_B4_0 = G_B2_0;
		G_B4_1 = G_B2_1;
		goto IL_0065;
	}

IL_005c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_2;
		NullCheck(L_17);
		V_1 = (uint8_t*)((uintptr_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0065:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = G_B4_0;
		V_4 = L_18;
		G_B5_0 = G_B4_1;
		if (!L_18)
		{
			G_B6_0 = G_B4_1;
			goto IL_0070;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_4;
		NullCheck(L_19);
		G_B6_0 = G_B5_0;
		if (((int32_t)(((RuntimeArray*)L_19)->max_length)))
		{
			G_B7_0 = G_B5_0;
			goto IL_0075;
		}
	}

IL_0070:
	{
		V_3 = (void*)((uintptr_t)0);
		G_B8_0 = G_B6_0;
		goto IL_007f;
	}

IL_0075:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_4;
		NullCheck(L_20);
		V_3 = (void*)((uintptr_t)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		G_B8_0 = G_B7_0;
	}

IL_007f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = G_B8_0;
		V_6 = L_21;
		if (!L_21)
		{
			goto IL_008a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_6;
		NullCheck(L_22);
		if (((int32_t)(((RuntimeArray*)L_22)->max_length)))
		{
			goto IL_0090;
		}
	}

IL_008a:
	{
		V_5 = (void*)((uintptr_t)0);
		goto IL_009b;
	}

IL_0090:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_6;
		NullCheck(L_23);
		V_5 = (void*)((uintptr_t)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_009b:
	{
		V_7 = 0;
		goto IL_00bd;
	}

IL_00a0:
	{
		uint8_t* L_24 = V_1;
		int32_t L_25 = V_7;
		int32_t L_26 = ___r3;
		int32_t L_27 = ___r3;
		int32_t L_28 = ___n2;
		void* L_29 = V_3;
		void* L_30 = V_5;
		Scrypt_SMix_mE768CADBFF050B9C3C003CBA9976F57E26FD478A((uint8_t*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_24, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_25, ((int32_t)128))), L_26))))), L_27, L_28, (uint32_t*)L_29, (uint32_t*)L_30, NULL);
		int32_t L_31 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00bd:
	{
		int32_t L_32 = V_7;
		int32_t L_33 = ___p4;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_00a0;
		}
	}
	{
		V_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___password0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_0;
		int32_t L_36 = ___dkLen5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37;
		L_37 = Scrypt_SingleIterationPbkdf2_mA11CB4F78119104A2607D675A395A3D16E0F400B(L_34, L_35, L_36, NULL);
		return L_37;
	}
}
// System.Void Solana.Unity.KeyStore.Crypto.Scrypt::BulkCopy(System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrypt_BulkCopy_mB64AEE7B53811BD875AAF042510D76561C2B8BBA (void* ___dst0, void* ___src1, int32_t ___len2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		void* L_0 = ___dst0;
		V_0 = (uint8_t*)L_0;
		void* L_1 = ___src1;
		V_1 = (uint8_t*)L_1;
		goto IL_0017;
	}

IL_0006:
	{
		uint8_t* L_2 = V_0;
		uint8_t* L_3 = V_1;
		int64_t L_4 = *((int64_t*)L_3);
		*((int64_t*)L_2) = (int64_t)L_4;
		uint8_t* L_5 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, 8));
		uint8_t* L_6 = V_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, 8));
		int32_t L_7 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_7, 8));
	}

IL_0017:
	{
		int32_t L_8 = ___len2;
		if ((((int32_t)L_8) >= ((int32_t)8)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_9 = ___len2;
		if ((((int32_t)L_9) < ((int32_t)4)))
		{
			goto IL_0030;
		}
	}
	{
		uint8_t* L_10 = V_0;
		uint8_t* L_11 = V_1;
		int32_t L_12 = *((uint32_t*)L_11);
		*((int32_t*)L_10) = (int32_t)L_12;
		uint8_t* L_13 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, 4));
		uint8_t* L_14 = V_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_14, 4));
		int32_t L_15 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_15, 4));
	}

IL_0030:
	{
		int32_t L_16 = ___len2;
		if ((((int32_t)L_16) < ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		uint8_t* L_17 = V_0;
		uint8_t* L_18 = V_1;
		int32_t L_19 = *((uint16_t*)L_18);
		*((int16_t*)L_17) = (int16_t)L_19;
		uint8_t* L_20 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, 2));
		uint8_t* L_21 = V_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, 2));
		int32_t L_22 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_22, 2));
	}

IL_0045:
	{
		int32_t L_23 = ___len2;
		if ((((int32_t)L_23) < ((int32_t)1)))
		{
			goto IL_004d;
		}
	}
	{
		uint8_t* L_24 = V_0;
		uint8_t* L_25 = V_1;
		int32_t L_26 = *((uint8_t*)L_25);
		*((int8_t*)L_24) = (int8_t)L_26;
	}

IL_004d:
	{
		return;
	}
}
// System.Void Solana.Unity.KeyStore.Crypto.Scrypt::BulkXor(System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrypt_BulkXor_mF10C9576FA0F8EE8AECDE2A8FEFCCDCA4A969626 (void* ___dst0, void* ___src1, int32_t ___len2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		void* L_0 = ___dst0;
		V_0 = (uint8_t*)L_0;
		void* L_1 = ___src1;
		V_1 = (uint8_t*)L_1;
		goto IL_001a;
	}

IL_0006:
	{
		uint8_t* L_2 = V_0;
		uint8_t* L_3 = L_2;
		int64_t L_4 = *((int64_t*)L_3);
		uint8_t* L_5 = V_1;
		int64_t L_6 = *((int64_t*)L_5);
		*((int64_t*)L_3) = (int64_t)((int64_t)(L_4^L_6));
		uint8_t* L_7 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, 8));
		uint8_t* L_8 = V_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, 8));
		int32_t L_9 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_9, 8));
	}

IL_001a:
	{
		int32_t L_10 = ___len2;
		if ((((int32_t)L_10) >= ((int32_t)8)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_11 = ___len2;
		if ((((int32_t)L_11) < ((int32_t)4)))
		{
			goto IL_0036;
		}
	}
	{
		uint8_t* L_12 = V_0;
		uint8_t* L_13 = L_12;
		int32_t L_14 = *((uint32_t*)L_13);
		uint8_t* L_15 = V_1;
		int32_t L_16 = *((uint32_t*)L_15);
		*((int32_t*)L_13) = (int32_t)((int32_t)(L_14^L_16));
		uint8_t* L_17 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, 4));
		uint8_t* L_18 = V_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, 4));
		int32_t L_19 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_19, 4));
	}

IL_0036:
	{
		int32_t L_20 = ___len2;
		if ((((int32_t)L_20) < ((int32_t)2)))
		{
			goto IL_004f;
		}
	}
	{
		uint8_t* L_21 = V_0;
		uint8_t* L_22 = L_21;
		int32_t L_23 = *((uint16_t*)L_22);
		uint8_t* L_24 = V_1;
		int32_t L_25 = *((uint16_t*)L_24);
		*((int16_t*)L_22) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_23^L_25)));
		uint8_t* L_26 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_26, 2));
		uint8_t* L_27 = V_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_27, 2));
		int32_t L_28 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_28, 2));
	}

IL_004f:
	{
		int32_t L_29 = ___len2;
		if ((((int32_t)L_29) < ((int32_t)1)))
		{
			goto IL_005b;
		}
	}
	{
		uint8_t* L_30 = V_0;
		uint8_t* L_31 = L_30;
		int32_t L_32 = *((uint8_t*)L_31);
		uint8_t* L_33 = V_1;
		int32_t L_34 = *((uint8_t*)L_33);
		*((int8_t*)L_31) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_32^L_34)));
	}

IL_005b:
	{
		return;
	}
}
// System.Void Solana.Unity.KeyStore.Crypto.Scrypt::Encode32(System.Byte*,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrypt_Encode32_mE26FCB20A12D3F29DDCE9C2410035BB520C1F2B2 (uint8_t* ___p0, uint32_t ___x1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___p0;
		uint32_t L_1 = ___x1;
		*((int8_t*)L_0) = (int8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_1&((int32_t)255))));
		uint8_t* L_2 = ___p0;
		uint32_t L_3 = ___x1;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, 1))) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_3>>8))&((int32_t)255))));
		uint8_t* L_4 = ___p0;
		uint32_t L_5 = ___x1;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, 2))) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_5>>((int32_t)16)))&((int32_t)255))));
		uint8_t* L_6 = ___p0;
		uint32_t L_7 = ___x1;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, 3))) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_7>>((int32_t)24)))&((int32_t)255))));
		return;
	}
}
// System.UInt32 Solana.Unity.KeyStore.Crypto.Scrypt::Decode32(System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Scrypt_Decode32_mCC5F9787343496F8224C4342E5078029D1B1C136 (uint8_t* ___p0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___p0;
		int32_t L_1 = *((uint8_t*)L_0);
		uint8_t* L_2 = ___p0;
		int32_t L_3 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, 1)));
		uint8_t* L_4 = ___p0;
		int32_t L_5 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, 2)));
		uint8_t* L_6 = ___p0;
		int32_t L_7 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, 3)));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(L_3<<8)))), ((int32_t)(L_5<<((int32_t)16))))), ((int32_t)(L_7<<((int32_t)24)))));
	}
}
// System.Void Solana.Unity.KeyStore.Crypto.Scrypt::Salsa208(System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrypt_Salsa208_m5720642AC41897784F98F02BE11D11D8F9967091 (uint32_t* ___b0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	int32_t V_16 = 0;
	{
		uint32_t* L_0 = ___b0;
		int32_t L_1 = *((uint32_t*)L_0);
		V_0 = L_1;
		uint32_t* L_2 = ___b0;
		int32_t L_3 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, 4)));
		V_1 = L_3;
		uint32_t* L_4 = ___b0;
		int32_t L_5 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4)))));
		V_2 = L_5;
		uint32_t* L_6 = ___b0;
		int32_t L_7 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 4)))));
		V_3 = L_7;
		uint32_t* L_8 = ___b0;
		int32_t L_9 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), 4)))));
		V_4 = L_9;
		uint32_t* L_10 = ___b0;
		int32_t L_11 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)5), 4)))));
		V_5 = L_11;
		uint32_t* L_12 = ___b0;
		int32_t L_13 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)6), 4)))));
		V_6 = L_13;
		uint32_t* L_14 = ___b0;
		int32_t L_15 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)7), 4)))));
		V_7 = L_15;
		uint32_t* L_16 = ___b0;
		int32_t L_17 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)8), 4)))));
		V_8 = L_17;
		uint32_t* L_18 = ___b0;
		int32_t L_19 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)9)), 4)))));
		V_9 = L_19;
		uint32_t* L_20 = ___b0;
		int32_t L_21 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)10)), 4)))));
		V_10 = L_21;
		uint32_t* L_22 = ___b0;
		int32_t L_23 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)11)), 4)))));
		V_11 = L_23;
		uint32_t* L_24 = ___b0;
		int32_t L_25 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)12)), 4)))));
		V_12 = L_25;
		uint32_t* L_26 = ___b0;
		int32_t L_27 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)13)), 4)))));
		V_13 = L_27;
		uint32_t* L_28 = ___b0;
		int32_t L_29 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)14)), 4)))));
		V_14 = L_29;
		uint32_t* L_30 = ___b0;
		int32_t L_31 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)15)), 4)))));
		V_15 = L_31;
		V_16 = 0;
		goto IL_0291;
	}

IL_0093:
	{
		uint32_t L_32 = V_4;
		uint32_t L_33 = V_0;
		uint32_t L_34 = V_12;
		uint32_t L_35;
		L_35 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)L_34)), 7, NULL);
		V_4 = ((int32_t)((int32_t)L_32^(int32_t)L_35));
		uint32_t L_36 = V_8;
		uint32_t L_37 = V_4;
		uint32_t L_38 = V_0;
		uint32_t L_39;
		L_39 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_38)), ((int32_t)9), NULL);
		V_8 = ((int32_t)((int32_t)L_36^(int32_t)L_39));
		uint32_t L_40 = V_12;
		uint32_t L_41 = V_8;
		uint32_t L_42 = V_4;
		uint32_t L_43;
		L_43 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)L_42)), ((int32_t)13), NULL);
		V_12 = ((int32_t)((int32_t)L_40^(int32_t)L_43));
		uint32_t L_44 = V_0;
		uint32_t L_45 = V_12;
		uint32_t L_46 = V_8;
		uint32_t L_47;
		L_47 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)L_46)), ((int32_t)18), NULL);
		V_0 = ((int32_t)((int32_t)L_44^(int32_t)L_47));
		uint32_t L_48 = V_9;
		uint32_t L_49 = V_5;
		uint32_t L_50 = V_1;
		uint32_t L_51;
		L_51 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)L_50)), 7, NULL);
		V_9 = ((int32_t)((int32_t)L_48^(int32_t)L_51));
		uint32_t L_52 = V_13;
		uint32_t L_53 = V_9;
		uint32_t L_54 = V_5;
		uint32_t L_55;
		L_55 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)L_54)), ((int32_t)9), NULL);
		V_13 = ((int32_t)((int32_t)L_52^(int32_t)L_55));
		uint32_t L_56 = V_1;
		uint32_t L_57 = V_13;
		uint32_t L_58 = V_9;
		uint32_t L_59;
		L_59 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)L_58)), ((int32_t)13), NULL);
		V_1 = ((int32_t)((int32_t)L_56^(int32_t)L_59));
		uint32_t L_60 = V_5;
		uint32_t L_61 = V_1;
		uint32_t L_62 = V_13;
		uint32_t L_63;
		L_63 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)L_62)), ((int32_t)18), NULL);
		V_5 = ((int32_t)((int32_t)L_60^(int32_t)L_63));
		uint32_t L_64 = V_14;
		uint32_t L_65 = V_10;
		uint32_t L_66 = V_6;
		uint32_t L_67;
		L_67 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66)), 7, NULL);
		V_14 = ((int32_t)((int32_t)L_64^(int32_t)L_67));
		uint32_t L_68 = V_2;
		uint32_t L_69 = V_14;
		uint32_t L_70 = V_10;
		uint32_t L_71;
		L_71 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)L_70)), ((int32_t)9), NULL);
		V_2 = ((int32_t)((int32_t)L_68^(int32_t)L_71));
		uint32_t L_72 = V_6;
		uint32_t L_73 = V_2;
		uint32_t L_74 = V_14;
		uint32_t L_75;
		L_75 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)L_74)), ((int32_t)13), NULL);
		V_6 = ((int32_t)((int32_t)L_72^(int32_t)L_75));
		uint32_t L_76 = V_10;
		uint32_t L_77 = V_6;
		uint32_t L_78 = V_2;
		uint32_t L_79;
		L_79 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)L_78)), ((int32_t)18), NULL);
		V_10 = ((int32_t)((int32_t)L_76^(int32_t)L_79));
		uint32_t L_80 = V_3;
		uint32_t L_81 = V_15;
		uint32_t L_82 = V_11;
		uint32_t L_83;
		L_83 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)L_82)), 7, NULL);
		V_3 = ((int32_t)((int32_t)L_80^(int32_t)L_83));
		uint32_t L_84 = V_7;
		uint32_t L_85 = V_3;
		uint32_t L_86 = V_15;
		uint32_t L_87;
		L_87 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)L_86)), ((int32_t)9), NULL);
		V_7 = ((int32_t)((int32_t)L_84^(int32_t)L_87));
		uint32_t L_88 = V_11;
		uint32_t L_89 = V_7;
		uint32_t L_90 = V_3;
		uint32_t L_91;
		L_91 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)L_90)), ((int32_t)13), NULL);
		V_11 = ((int32_t)((int32_t)L_88^(int32_t)L_91));
		uint32_t L_92 = V_15;
		uint32_t L_93 = V_11;
		uint32_t L_94 = V_7;
		uint32_t L_95;
		L_95 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)L_94)), ((int32_t)18), NULL);
		V_15 = ((int32_t)((int32_t)L_92^(int32_t)L_95));
		uint32_t L_96 = V_1;
		uint32_t L_97 = V_0;
		uint32_t L_98 = V_3;
		uint32_t L_99;
		L_99 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)L_98)), 7, NULL);
		V_1 = ((int32_t)((int32_t)L_96^(int32_t)L_99));
		uint32_t L_100 = V_2;
		uint32_t L_101 = V_1;
		uint32_t L_102 = V_0;
		uint32_t L_103;
		L_103 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)L_102)), ((int32_t)9), NULL);
		V_2 = ((int32_t)((int32_t)L_100^(int32_t)L_103));
		uint32_t L_104 = V_3;
		uint32_t L_105 = V_2;
		uint32_t L_106 = V_1;
		uint32_t L_107;
		L_107 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)L_106)), ((int32_t)13), NULL);
		V_3 = ((int32_t)((int32_t)L_104^(int32_t)L_107));
		uint32_t L_108 = V_0;
		uint32_t L_109 = V_3;
		uint32_t L_110 = V_2;
		uint32_t L_111;
		L_111 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)L_110)), ((int32_t)18), NULL);
		V_0 = ((int32_t)((int32_t)L_108^(int32_t)L_111));
		uint32_t L_112 = V_6;
		uint32_t L_113 = V_5;
		uint32_t L_114 = V_4;
		uint32_t L_115;
		L_115 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)L_114)), 7, NULL);
		V_6 = ((int32_t)((int32_t)L_112^(int32_t)L_115));
		uint32_t L_116 = V_7;
		uint32_t L_117 = V_6;
		uint32_t L_118 = V_5;
		uint32_t L_119;
		L_119 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)L_118)), ((int32_t)9), NULL);
		V_7 = ((int32_t)((int32_t)L_116^(int32_t)L_119));
		uint32_t L_120 = V_4;
		uint32_t L_121 = V_7;
		uint32_t L_122 = V_6;
		uint32_t L_123;
		L_123 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)L_122)), ((int32_t)13), NULL);
		V_4 = ((int32_t)((int32_t)L_120^(int32_t)L_123));
		uint32_t L_124 = V_5;
		uint32_t L_125 = V_4;
		uint32_t L_126 = V_7;
		uint32_t L_127;
		L_127 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_125, (int32_t)L_126)), ((int32_t)18), NULL);
		V_5 = ((int32_t)((int32_t)L_124^(int32_t)L_127));
		uint32_t L_128 = V_11;
		uint32_t L_129 = V_10;
		uint32_t L_130 = V_9;
		uint32_t L_131;
		L_131 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)L_130)), 7, NULL);
		V_11 = ((int32_t)((int32_t)L_128^(int32_t)L_131));
		uint32_t L_132 = V_8;
		uint32_t L_133 = V_11;
		uint32_t L_134 = V_10;
		uint32_t L_135;
		L_135 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)L_134)), ((int32_t)9), NULL);
		V_8 = ((int32_t)((int32_t)L_132^(int32_t)L_135));
		uint32_t L_136 = V_9;
		uint32_t L_137 = V_8;
		uint32_t L_138 = V_11;
		uint32_t L_139;
		L_139 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)L_138)), ((int32_t)13), NULL);
		V_9 = ((int32_t)((int32_t)L_136^(int32_t)L_139));
		uint32_t L_140 = V_10;
		uint32_t L_141 = V_9;
		uint32_t L_142 = V_8;
		uint32_t L_143;
		L_143 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)L_142)), ((int32_t)18), NULL);
		V_10 = ((int32_t)((int32_t)L_140^(int32_t)L_143));
		uint32_t L_144 = V_12;
		uint32_t L_145 = V_15;
		uint32_t L_146 = V_14;
		uint32_t L_147;
		L_147 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_145, (int32_t)L_146)), 7, NULL);
		V_12 = ((int32_t)((int32_t)L_144^(int32_t)L_147));
		uint32_t L_148 = V_13;
		uint32_t L_149 = V_12;
		uint32_t L_150 = V_15;
		uint32_t L_151;
		L_151 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_149, (int32_t)L_150)), ((int32_t)9), NULL);
		V_13 = ((int32_t)((int32_t)L_148^(int32_t)L_151));
		uint32_t L_152 = V_14;
		uint32_t L_153 = V_13;
		uint32_t L_154 = V_12;
		uint32_t L_155;
		L_155 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_153, (int32_t)L_154)), ((int32_t)13), NULL);
		V_14 = ((int32_t)((int32_t)L_152^(int32_t)L_155));
		uint32_t L_156 = V_15;
		uint32_t L_157 = V_14;
		uint32_t L_158 = V_13;
		uint32_t L_159;
		L_159 = Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA(((int32_t)il2cpp_codegen_add((int32_t)L_157, (int32_t)L_158)), ((int32_t)18), NULL);
		V_15 = ((int32_t)((int32_t)L_156^(int32_t)L_159));
		int32_t L_160 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_160, 2));
	}

IL_0291:
	{
		int32_t L_161 = V_16;
		if ((((int32_t)L_161) < ((int32_t)8)))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t* L_162 = ___b0;
		uint32_t* L_163 = L_162;
		int32_t L_164 = *((uint32_t*)L_163);
		uint32_t L_165 = V_0;
		*((int32_t*)L_163) = (int32_t)((int32_t)il2cpp_codegen_add(L_164, (int32_t)L_165));
		uint32_t* L_166 = ___b0;
		uint32_t* L_167 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_166, 4));
		int32_t L_168 = *((uint32_t*)L_167);
		uint32_t L_169 = V_1;
		*((int32_t*)L_167) = (int32_t)((int32_t)il2cpp_codegen_add(L_168, (int32_t)L_169));
		uint32_t* L_170 = ___b0;
		uint32_t* L_171 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_170, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4))));
		int32_t L_172 = *((uint32_t*)L_171);
		uint32_t L_173 = V_2;
		*((int32_t*)L_171) = (int32_t)((int32_t)il2cpp_codegen_add(L_172, (int32_t)L_173));
		uint32_t* L_174 = ___b0;
		uint32_t* L_175 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_174, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 4))));
		int32_t L_176 = *((uint32_t*)L_175);
		uint32_t L_177 = V_3;
		*((int32_t*)L_175) = (int32_t)((int32_t)il2cpp_codegen_add(L_176, (int32_t)L_177));
		uint32_t* L_178 = ___b0;
		uint32_t* L_179 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_178, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), 4))));
		int32_t L_180 = *((uint32_t*)L_179);
		uint32_t L_181 = V_4;
		*((int32_t*)L_179) = (int32_t)((int32_t)il2cpp_codegen_add(L_180, (int32_t)L_181));
		uint32_t* L_182 = ___b0;
		uint32_t* L_183 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_182, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)5), 4))));
		int32_t L_184 = *((uint32_t*)L_183);
		uint32_t L_185 = V_5;
		*((int32_t*)L_183) = (int32_t)((int32_t)il2cpp_codegen_add(L_184, (int32_t)L_185));
		uint32_t* L_186 = ___b0;
		uint32_t* L_187 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_186, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)6), 4))));
		int32_t L_188 = *((uint32_t*)L_187);
		uint32_t L_189 = V_6;
		*((int32_t*)L_187) = (int32_t)((int32_t)il2cpp_codegen_add(L_188, (int32_t)L_189));
		uint32_t* L_190 = ___b0;
		uint32_t* L_191 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_190, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)7), 4))));
		int32_t L_192 = *((uint32_t*)L_191);
		uint32_t L_193 = V_7;
		*((int32_t*)L_191) = (int32_t)((int32_t)il2cpp_codegen_add(L_192, (int32_t)L_193));
		uint32_t* L_194 = ___b0;
		uint32_t* L_195 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_194, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)8), 4))));
		int32_t L_196 = *((uint32_t*)L_195);
		uint32_t L_197 = V_8;
		*((int32_t*)L_195) = (int32_t)((int32_t)il2cpp_codegen_add(L_196, (int32_t)L_197));
		uint32_t* L_198 = ___b0;
		uint32_t* L_199 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_198, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)9)), 4))));
		int32_t L_200 = *((uint32_t*)L_199);
		uint32_t L_201 = V_9;
		*((int32_t*)L_199) = (int32_t)((int32_t)il2cpp_codegen_add(L_200, (int32_t)L_201));
		uint32_t* L_202 = ___b0;
		uint32_t* L_203 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_202, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)10)), 4))));
		int32_t L_204 = *((uint32_t*)L_203);
		uint32_t L_205 = V_10;
		*((int32_t*)L_203) = (int32_t)((int32_t)il2cpp_codegen_add(L_204, (int32_t)L_205));
		uint32_t* L_206 = ___b0;
		uint32_t* L_207 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_206, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)11)), 4))));
		int32_t L_208 = *((uint32_t*)L_207);
		uint32_t L_209 = V_11;
		*((int32_t*)L_207) = (int32_t)((int32_t)il2cpp_codegen_add(L_208, (int32_t)L_209));
		uint32_t* L_210 = ___b0;
		uint32_t* L_211 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_210, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)12)), 4))));
		int32_t L_212 = *((uint32_t*)L_211);
		uint32_t L_213 = V_12;
		*((int32_t*)L_211) = (int32_t)((int32_t)il2cpp_codegen_add(L_212, (int32_t)L_213));
		uint32_t* L_214 = ___b0;
		uint32_t* L_215 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_214, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)13)), 4))));
		int32_t L_216 = *((uint32_t*)L_215);
		uint32_t L_217 = V_13;
		*((int32_t*)L_215) = (int32_t)((int32_t)il2cpp_codegen_add(L_216, (int32_t)L_217));
		uint32_t* L_218 = ___b0;
		uint32_t* L_219 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_218, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)14)), 4))));
		int32_t L_220 = *((uint32_t*)L_219);
		uint32_t L_221 = V_14;
		*((int32_t*)L_219) = (int32_t)((int32_t)il2cpp_codegen_add(L_220, (int32_t)L_221));
		uint32_t* L_222 = ___b0;
		uint32_t* L_223 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_222, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)15)), 4))));
		int32_t L_224 = *((uint32_t*)L_223);
		uint32_t L_225 = V_15;
		*((int32_t*)L_223) = (int32_t)((int32_t)il2cpp_codegen_add(L_224, (int32_t)L_225));
		return;
	}
}
// System.UInt32 Solana.Unity.KeyStore.Crypto.Scrypt::R(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Scrypt_R_mDA6E2222795A687E5DF1A2B0180EF7920AB106FA (uint32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		uint32_t L_2 = ___a0;
		int32_t L_3 = ___b1;
		return ((int32_t)(((int32_t)((int32_t)L_0<<((int32_t)(L_1&((int32_t)31)))))|((int32_t)((uint32_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
// System.Void Solana.Unity.KeyStore.Crypto.Scrypt::BlockMix(System.UInt32*,System.UInt32*,System.UInt32*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrypt_BlockMix_m42D2A0465573955B3EEE612B4094FE291A400EF0 (uint32_t* ___bin0, uint32_t* ___bout1, uint32_t* ___x2, int32_t ___r3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t* L_0 = ___x2;
		uint32_t* L_1 = ___bin0;
		int32_t L_2 = ___r3;
		Scrypt_BulkCopy_mB64AEE7B53811BD875AAF042510D76561C2B8BBA((void*)L_0, (void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_2)), 1)), ((int32_t)16)))), 4))))), ((int32_t)64), NULL);
		V_0 = 0;
		goto IL_0078;
	}

IL_001a:
	{
		uint32_t* L_3 = ___x2;
		uint32_t* L_4 = ___bin0;
		int32_t L_5 = V_0;
		Scrypt_BulkXor_mF10C9576FA0F8EE8AECDE2A8FEFCCDCA4A969626((void*)L_3, (void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4))))), ((int32_t)64), NULL);
		uint32_t* L_6 = ___x2;
		Scrypt_Salsa208_m5720642AC41897784F98F02BE11D11D8F9967091(L_6, NULL);
		uint32_t* L_7 = ___bout1;
		int32_t L_8 = V_0;
		uint32_t* L_9 = ___x2;
		Scrypt_BulkCopy_mB64AEE7B53811BD875AAF042510D76561C2B8BBA((void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_8, 8))), 4))))), (void*)L_9, ((int32_t)64), NULL);
		uint32_t* L_10 = ___x2;
		uint32_t* L_11 = ___bin0;
		int32_t L_12 = V_0;
		Scrypt_BulkXor_mF10C9576FA0F8EE8AECDE2A8FEFCCDCA4A969626((void*)L_10, (void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16))), ((int32_t)16)))), 4))))), ((int32_t)64), NULL);
		uint32_t* L_13 = ___x2;
		Scrypt_Salsa208_m5720642AC41897784F98F02BE11D11D8F9967091(L_13, NULL);
		uint32_t* L_14 = ___bout1;
		int32_t L_15 = V_0;
		int32_t L_16 = ___r3;
		uint32_t* L_17 = ___x2;
		Scrypt_BulkCopy_mB64AEE7B53811BD875AAF042510D76561C2B8BBA((void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_15, 8)), ((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)16)))))), 4))))), (void*)L_17, ((int32_t)64), NULL);
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 2));
	}

IL_0078:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = ___r3;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_20)))))
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.Int64 Solana.Unity.KeyStore.Crypto.Scrypt::Integerify(System.UInt32*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Scrypt_Integerify_m72FDE02612D955BA6BBBC0AB8534F05799E3EBDE (uint32_t* ___b0, int32_t ___r1, const RuntimeMethod* method) 
{
	uint32_t* V_0 = NULL;
	{
		uint32_t* L_0 = ___b0;
		int32_t L_1 = ___r1;
		V_0 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_1)), 1)), ((int32_t)64)))));
		uint32_t* L_2 = V_0;
		int32_t L_3 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, 4)));
		uint32_t* L_4 = V_0;
		int32_t L_5 = *((uint32_t*)L_4);
		return ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)((uint32_t)L_3))<<((int32_t)32))), ((int64_t)(uint64_t)((uint32_t)L_5))));
	}
}
// System.Void Solana.Unity.KeyStore.Crypto.Scrypt::SMix(System.Byte*,System.Int32,System.Int32,System.UInt32*,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrypt_SMix_mE768CADBFF050B9C3C003CBA9976F57E26FD478A (uint8_t* ___b0, int32_t ___r1, int32_t ___n2, uint32_t* ___v3, uint32_t* ___xy4, const RuntimeMethod* method) 
{
	uint32_t* V_0 = NULL;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int32_t V_7 = 0;
	{
		uint32_t* L_0 = ___xy4;
		V_0 = L_0;
		uint32_t* L_1 = ___xy4;
		int32_t L_2 = ___r1;
		V_1 = (uint32_t*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_2))), 4)))));
		uint32_t* L_3 = ___xy4;
		int32_t L_4 = ___r1;
		V_2 = (uint32_t*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(((int32_t)64), L_4))), 4)))));
		V_3 = 0;
		goto IL_0035;
	}

IL_001f:
	{
		uint32_t* L_5 = V_0;
		int32_t L_6 = V_3;
		uint8_t* L_7 = ___b0;
		int32_t L_8 = V_3;
		uint32_t L_9;
		L_9 = Scrypt_Decode32_mCC5F9787343496F8224C4342E5078029D1B1C136((uint8_t*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, ((int32_t)il2cpp_codegen_multiply(4, L_8))))), NULL);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4))))) = (int32_t)L_9;
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0035:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = ___r1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_12)))))
		{
			goto IL_001f;
		}
	}
	{
		V_4 = ((int64_t)0);
		goto IL_0096;
	}

IL_0042:
	{
		uint32_t* L_13 = ___v3;
		int64_t L_14 = V_4;
		int32_t L_15 = ___r1;
		uint32_t* L_16 = V_0;
		int32_t L_17 = ___r1;
		Scrypt_BulkCopy_mB64AEE7B53811BD875AAF042510D76561C2B8BBA((void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(L_14, ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_15))))), ((int64_t)4))))))), (void*)L_16, ((int32_t)il2cpp_codegen_multiply(((int32_t)128), L_17)), NULL);
		uint32_t* L_18 = V_0;
		uint32_t* L_19 = V_1;
		uint32_t* L_20 = V_2;
		int32_t L_21 = ___r1;
		Scrypt_BlockMix_m42D2A0465573955B3EEE612B4094FE291A400EF0(L_18, L_19, L_20, L_21, NULL);
		uint32_t* L_22 = ___v3;
		int64_t L_23 = V_4;
		int32_t L_24 = ___r1;
		uint32_t* L_25 = V_1;
		int32_t L_26 = ___r1;
		Scrypt_BulkCopy_mB64AEE7B53811BD875AAF042510D76561C2B8BBA((void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add(L_23, ((int64_t)1))), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_24))))), ((int64_t)4))))))), (void*)L_25, ((int32_t)il2cpp_codegen_multiply(((int32_t)128), L_26)), NULL);
		uint32_t* L_27 = V_1;
		uint32_t* L_28 = V_0;
		uint32_t* L_29 = V_2;
		int32_t L_30 = ___r1;
		Scrypt_BlockMix_m42D2A0465573955B3EEE612B4094FE291A400EF0(L_27, L_28, L_29, L_30, NULL);
		int64_t L_31 = V_4;
		V_4 = ((int64_t)il2cpp_codegen_add(L_31, ((int64_t)2)));
	}

IL_0096:
	{
		int64_t L_32 = V_4;
		int32_t L_33 = ___n2;
		if ((((int64_t)L_32) < ((int64_t)((int64_t)L_33))))
		{
			goto IL_0042;
		}
	}
	{
		V_5 = 0;
		goto IL_010d;
	}

IL_00a1:
	{
		uint32_t* L_34 = V_0;
		int32_t L_35 = ___r1;
		int64_t L_36;
		L_36 = Scrypt_Integerify_m72FDE02612D955BA6BBBC0AB8534F05799E3EBDE(L_34, L_35, NULL);
		int32_t L_37 = ___n2;
		V_6 = ((int64_t)(L_36&((int64_t)((int32_t)il2cpp_codegen_subtract(L_37, 1)))));
		uint32_t* L_38 = V_0;
		uint32_t* L_39 = ___v3;
		int64_t L_40 = V_6;
		int32_t L_41 = ___r1;
		int32_t L_42 = ___r1;
		Scrypt_BulkXor_mF10C9576FA0F8EE8AECDE2A8FEFCCDCA4A969626((void*)L_38, (void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(L_40, ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_41))))), ((int64_t)4))))))), ((int32_t)il2cpp_codegen_multiply(((int32_t)128), L_42)), NULL);
		uint32_t* L_43 = V_0;
		uint32_t* L_44 = V_1;
		uint32_t* L_45 = V_2;
		int32_t L_46 = ___r1;
		Scrypt_BlockMix_m42D2A0465573955B3EEE612B4094FE291A400EF0(L_43, L_44, L_45, L_46, NULL);
		uint32_t* L_47 = V_1;
		int32_t L_48 = ___r1;
		int64_t L_49;
		L_49 = Scrypt_Integerify_m72FDE02612D955BA6BBBC0AB8534F05799E3EBDE(L_47, L_48, NULL);
		int32_t L_50 = ___n2;
		V_6 = ((int64_t)(L_49&((int64_t)((int32_t)il2cpp_codegen_subtract(L_50, 1)))));
		uint32_t* L_51 = V_1;
		uint32_t* L_52 = ___v3;
		int64_t L_53 = V_6;
		int32_t L_54 = ___r1;
		int32_t L_55 = ___r1;
		Scrypt_BulkXor_mF10C9576FA0F8EE8AECDE2A8FEFCCDCA4A969626((void*)L_51, (void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(L_53, ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_54))))), ((int64_t)4))))))), ((int32_t)il2cpp_codegen_multiply(((int32_t)128), L_55)), NULL);
		uint32_t* L_56 = V_1;
		uint32_t* L_57 = V_0;
		uint32_t* L_58 = V_2;
		int32_t L_59 = ___r1;
		Scrypt_BlockMix_m42D2A0465573955B3EEE612B4094FE291A400EF0(L_56, L_57, L_58, L_59, NULL);
		int32_t L_60 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_60, 2));
	}

IL_010d:
	{
		int32_t L_61 = V_5;
		int32_t L_62 = ___n2;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_00a1;
		}
	}
	{
		V_7 = 0;
		goto IL_0131;
	}

IL_0117:
	{
		uint8_t* L_63 = ___b0;
		int32_t L_64 = V_7;
		uint32_t* L_65 = V_0;
		int32_t L_66 = V_7;
		int32_t L_67 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_65, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_66), 4)))));
		Scrypt_Encode32_mE26FCB20A12D3F29DDCE9C2410035BB520C1F2B2((uint8_t*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_63, ((int32_t)il2cpp_codegen_multiply(4, L_64))))), L_67, NULL);
		int32_t L_68 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_0131:
	{
		int32_t L_69 = V_7;
		int32_t L_70 = ___r1;
		if ((((int32_t)L_69) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_70)))))
		{
			goto IL_0117;
		}
	}
	{
		return;
	}
}
// System.Void Solana.Unity.KeyStore.Crypto.Scrypt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrypt__ctor_m7DA0E4A98790A45FC4744A44C373E342710407FB (Scrypt_tC421E81C853C3F465102F12CFC22427098AF370A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Account_t15F1801E39C4C126421D353BFA50F8BD35957596* Wallet_get_Account_m4FDF8DDD87F44E0A1E0163BD647B99CCDF930338_inline (Wallet_tD28CA3630C46B9D3C02F1092B57E29A2AD8C43BD* __this, const RuntimeMethod* method) 
{
	{
		Account_t15F1801E39C4C126421D353BFA50F8BD35957596* L_0 = __this->___U3CAccountU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PrivateKey_t90586BD92512B1F79CAFAE6DEC4D7B812DE78D41* Account_get_PrivateKey_m270CD59C61BE230DD42FBF16D96DE6CD05FA7722_inline (Account_t15F1801E39C4C126421D353BFA50F8BD35957596* __this, const RuntimeMethod* method) 
{
	{
		PrivateKey_t90586BD92512B1F79CAFAE6DEC4D7B812DE78D41* L_0 = __this->___U3CPrivateKeyU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m8409F3DA0EF95BF6B3A8741E5C56E729B0A824C6_inline (String_t* ___text0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (!L_2)
		{
			goto IL_0010;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)24), NULL);
	}

IL_0010:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3 = V_0;
		return L_3;
	}

IL_001a:
	{
		int32_t L_4 = ___start1;
		String_t* L_5 = ___text0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_7 = ___length2;
		String_t* L_8 = ___text0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		int32_t L_10 = ___start1;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0035;
		}
	}

IL_002e:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)24), NULL);
	}

IL_0035:
	{
		String_t* L_11 = ___text0;
		NullCheck(L_11);
		Il2CppChar* L_12;
		L_12 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_11, NULL);
		int32_t L_13 = ___start1;
		Il2CppChar* L_14;
		L_14 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_12, L_13);
		int32_t L_15 = ___length2;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_16;
		memset((&L_16), 0, sizeof(L_16));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_16), L_14, L_15, /*hidden argument*/ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pbkdf2Params_get_Count_m21F0CC9B7F3FB40F4DF9637B9B5F932E59483FE5_inline (Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCountU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KdfParams_get_Dklen_m0DA49F53D2964502070D2078E4E632476C1641B2_inline (KdfParams_t9B1EE8807F717153B82AD7581BFCF8D18273C2EF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDklenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KdfParams_set_Dklen_m4616AAC32EB9CA8620CDA26733446ABF5FEEA28C_inline (KdfParams_t9B1EE8807F717153B82AD7581BFCF8D18273C2EF* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CDklenU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pbkdf2Params_set_Count_m34A80FBE8585FB68E6209FC26B06B2C06DEE86D5_inline (Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCountU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pbkdf2Params_set_Prf_m9AD34003E7A74690789EC721B321C6DFCEB3BCCC_inline (Pbkdf2Params_t0FAD8D08ADD5D9DCAF3135389714E7423A65ECF3* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CPrfU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPrfU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CipherParams_get_Iv_m20942DD64A8B25300F2D6A75344D693C48C33263_inline (CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CIvU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KdfParams_get_Salt_mEA33B92C79AE05757DCB0440F0168E0B80E9A3F4_inline (KdfParams_t9B1EE8807F717153B82AD7581BFCF8D18273C2EF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSaltU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParams_get_N_mDAFBDC59B51BC33BD0D2D5DA35A02F46A6892AE7_inline (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CNU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParams_get_R_mAEF4FF09651BC26B6CD2FAF06DA243E4524EB7DE_inline (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CRU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParams_get_P_mBDCF88ADEF16EA41E4CD384204DD40396CCABBC6_inline (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParams_set_N_m794FE7E2C5C6E8E100E1D2A08697F0DB3BA241AE_inline (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CNU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParams_set_R_mE69905F7655C8EA666EC530E3963D6D2CE1EEA88_inline (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CRU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParams_set_P_m48C0B8CDD3A3462F2EBACED538DD796C962047E7_inline (ScryptParams_tEE7548938F7B6982F3EB66A9088B72511DC77641* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CPU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CipherParams_set_Iv_m8057D32CE1E7366F11CB38E40A229B2EF0B0D198_inline (CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CIvU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIvU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___length1;
		int32_t L_3 = (int32_t)__this->____length_1;
		int32_t L_4 = ___start0;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)__this->____pointer_0;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___start0;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7);
		int32_t L_9 = ___length1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_10), L_8, L_9, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCA39BDFF0515AAF2D5364E2F2EBEFB3A45DC065B_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, Il2CppChar ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5 = ___span0;
		Il2CppChar* L_6;
		L_6 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>(L_6);
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_as_ref<uint8_t>((&___value1));
		int32_t L_9 = *((uint8_t*)L_8);
		int32_t L_10;
		L_10 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___span0), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_11;
		L_11 = SpanHelpers_IndexOf_mB37566B16F2F4C7D14E1CD6EA781AC67110E8C4C(L_7, (uint8_t)L_9, L_10, NULL);
		return L_11;
	}

IL_003b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___span0;
		Il2CppChar* L_18;
		L_18 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppChar* L_19;
		L_19 = il2cpp_unsafe_as_ref<Il2CppChar>(L_18);
		Il2CppChar* L_20;
		L_20 = il2cpp_unsafe_as_ref<Il2CppChar>((&___value1));
		int32_t L_21 = *((uint16_t*)L_20);
		int32_t L_22;
		L_22 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___span0), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_23;
		L_23 = SpanHelpers_IndexOf_m1EBE4594F5288D2297A3A8E8E4F365BE4BD211DC(L_19, (Il2CppChar)L_21, L_22, NULL);
		return L_23;
	}

IL_0076:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_24 = ___span0;
		Il2CppChar* L_25;
		L_25 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_24, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppChar L_26 = ___value1;
		int32_t L_27;
		L_27 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___span0), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_28;
		L_28 = ((  int32_t (*) (Il2CppChar*, Il2CppChar, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CryptoInfo_1_t8C7DE9ACDBDBCC2C738DCCBCED86CE917D30A0BD* KeyStore_1_get_Crypto_mC5DFB56C3C1286DE63D2483F82F8C2C932EF5002_gshared_inline (KeyStore_1_t219BD66CB42D8406C85E77D68ED903BF7BFB3603* __this, const RuntimeMethod* method) 
{
	{
		CryptoInfo_1_t8C7DE9ACDBDBCC2C738DCCBCED86CE917D30A0BD* L_0 = (CryptoInfo_1_t8C7DE9ACDBDBCC2C738DCCBCED86CE917D30A0BD*)__this->___U3CCryptoU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfo_1_get_Mac_mF63E86062BB4B016FE5C5A4F4A2705D6A0C4816B_gshared_inline (CryptoInfo_1_t8C7DE9ACDBDBCC2C738DCCBCED86CE917D30A0BD* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = (String_t*)__this->___U3CMacU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213* CryptoInfo_1_get_CipherParams_m58F2EB991CBC11D3104B6D9432EB8FA939A765E0_gshared_inline (CryptoInfo_1_t8C7DE9ACDBDBCC2C738DCCBCED86CE917D30A0BD* __this, const RuntimeMethod* method) 
{
	{
		CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213* L_0 = (CipherParams_t08B6801B008FFD73390A7975CB64251C5DBAB213*)__this->___U3CCipherParamsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfo_1_get_CipherText_m01FBFE261DC06DBE2F575CF26C88CC4C1135106E_gshared_inline (CryptoInfo_1_t8C7DE9ACDBDBCC2C738DCCBCED86CE917D30A0BD* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = (String_t*)__this->___U3CCipherTextU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CryptoInfo_1_get_Kdfparams_m54F3374D0E9FB3F139D960BAECE012B9CD428F1A_gshared_inline (CryptoInfo_1_t8C7DE9ACDBDBCC2C738DCCBCED86CE917D30A0BD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CKdfparamsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___ptr0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
