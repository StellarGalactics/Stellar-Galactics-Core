#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>
struct AccountResultWrapper_1_t35C48ED11890EF1944543B94020A80A8957D0DF6;
// Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord>
struct AccountResultWrapper_1_tE2B867F9693F4ACE6D4F826758E6C69467BA1B2F;
// Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord>
struct AccountResultWrapper_1_tDE471A66570801A8C41D659A421EFA72EB83EA44;
// Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.TokenNameRecord>
struct AccountResultWrapper_1_t730BB6868847CFF8C7718409C46B4C513DADF175;
// System.Action`1<Solana.Unity.Rpc.Models.AccountInfo>
struct Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Programs.Models.NameService.NameRecord>
struct Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0;
// Solana.Unity.Programs.Abstract.Flag`1<System.Byte>
struct Flag_1_tE856994BD2E54D4E30C969685660983436342634;
// Solana.Unity.Programs.Abstract.Flag`1<System.UInt16>
struct Flag_1_tF3FDBDBE20F5EC193AB8508F4A0DE89722A3330B;
// Solana.Unity.Programs.Abstract.Flag`1<System.UInt32>
struct Flag_1_t5F036E33115A67358CFAC2988A37EDD24D4199E0;
// Solana.Unity.Programs.Abstract.Flag`1<System.UInt64>
struct Flag_1_tCB7EECC164DEDA2B11A472F448D1C3512B6CB272;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Solana.Unity.Programs.Models.NameService.NameRecord>
struct KeyCollection_t3294E6AE549004233E2735FF3EB14BB195E75EF5;
// System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>
struct List_1_t87857C0E564D1397226E391D7090B146B2C66BCF;
// System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>
struct List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195;
// System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.MemCmp>
struct List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.RecordBase>
struct List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20;
// System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.ReverseNameRecord>
struct List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>
struct RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288;
// Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>>
struct RequestResult_1_tB91845DC2F7F5A2669DC616168B28DCAECB8BC40;
// Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>
struct RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757;
// Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Object>
struct RequestResult_1_tF25E3B2C01F82A444D7625EB9C476DC8437EBA24;
// Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>
struct ResponseValue_1_tCF55E6F19763014775060D2267A55A89D56559E7;
// Solana.Unity.Rpc.Messages.ResponseValue`1<System.Object>
struct ResponseValue_1_t8663D687999D2DEE6072DDA9FD2059BBDE351512;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>>
struct TaskFactory_1_tFD7E67942B7E397EE294FFE5FD30BFB78A385D72;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord>>
struct TaskFactory_1_tAE25EA6DFAAEF4D3CE0A518649634DF71A270EA6;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord>>
struct TaskFactory_1_tBEC93147998AB484D5D461E73D6447253E783E8C;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.TokenNameRecord>>
struct TaskFactory_1_t46B9AE7C7F03E21517C205C39E4A8A3807970A67;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>>
struct TaskFactory_1_t1520ECA0306439B4A27571EFD01BE60EF1F68D2E;
// System.Threading.Tasks.TaskFactory`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>>>
struct TaskFactory_1_tD6D638C453BE2AF7ED2D102CE446928A9591FE0F;
// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>>
struct Task_1_tD419F557E87227B9486B57EAC1C645BFDCF53137;
// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<System.Object>>
struct Task_1_tEE90784264C8822BBBD39BEDF885750838FE631C;
// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord>>
struct Task_1_t458F9EF3E716B074C040C0E7B28A60E76B2A22A2;
// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord>>
struct Task_1_t70A3A7F6C77AAC9C265B912DA0AB65496B5AE155;
// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.TokenNameRecord>>
struct Task_1_t5B368A1CFA055DA4AA6A27E08A842F7BC5978543;
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.RecordBase>>
struct Task_1_tB4FA9EC20ECCC4E5E22F419FD23C599FD72DEE40;
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.ReverseNameRecord>>
struct Task_1_t3E06D87C4D65534DF33BAF4B98E35A8BC6B68BE6;
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>>
struct Task_1_t7CCC66177F684EE443B47A17968843DDDAE44557;
// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>>>
struct Task_1_t1BB72EBC3EC5F4B31EFDCF30D3E0283AE1B50D14;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Solana.Unity.Programs.Models.NameService.NameRecord>
struct ValueCollection_t68CAB4F824DDA34CB8033E49DD36556A7AF24B8A;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Solana.Unity.Programs.Models.NameService.NameRecord>[]
struct EntryU5BU5D_tED5FE38B346D9ACD9A5A19D5C7EB562EF0E91652;
// Solana.Unity.Rpc.Models.AccountInfo[]
struct AccountInfoU5BU5D_t72AE93DD292074F8475AD5A974FBD4F876B879CC;
// Solana.Unity.Rpc.Models.AccountKeyPair[]
struct AccountKeyPairU5BU5D_t884C044806436E77EC51B836E2F1FE557ADBAA04;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Solana.Unity.Rpc.Models.MemCmp[]
struct MemCmpU5BU5D_t37715F75E6CC94F2F96499EC5F16555BE6A852DF;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Solana.Unity.Programs.Models.NameService.RecordBase[]
struct RecordBaseU5BU5D_tB94710D52B067ED8682875F81D42523354C908D1;
// Solana.Unity.Programs.Models.NameService.ReverseNameRecord[]
struct ReverseNameRecordU5BU5D_tC5C8C7E8B3A855BC138387933C695BCE01E1692E;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Solana.Unity.Rpc.Models.AccountInfo
struct AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D;
// Solana.Unity.Rpc.Models.AccountKeyPair
struct AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Solana.Unity.Programs.Abstract.BaseClient
struct BaseClient_t17729739896F3595EC6D20C2273EA5558597A030;
// Solana.Unity.Programs.Abstract.BaseProgram
struct BaseProgram_t9BFF1A2FDD436A147BDAE34D2A92899BAD67FF89;
// Solana.Unity.Programs.Abstract.ByteFlag
struct ByteFlag_t3271B68D4C56AD6B5DBF14A75FCC9F3D764F9750;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Solana.Unity.Rpc.Messages.ContextObj
struct ContextObj_t20CBAD0294B1CE430341642034DBC6207DABD526;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Solana.Unity.Rpc.Models.ErrorData
struct ErrorData_t49373BB7C78A299593CF1FF546FFB3DCC8A9E5B8;
// System.Exception
struct Exception_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Solana.Unity.Rpc.IRpcClient
struct IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE;
// Solana.Unity.Rpc.IStreamingRpcClient
struct IStreamingRpcClient_tD95D1830E2CE0EFC8A302FAC12CC93BAC7C76B3C;
// Solana.Unity.Programs.Abstract.IntFlag
struct IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F;
// Solana.Unity.Programs.Abstract.LongFlag
struct LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497;
// Solana.Unity.Rpc.Models.MemCmp
struct MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Solana.Unity.Programs.Models.NameService.NameRecord
struct NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4;
// Solana.Unity.Programs.Clients.NameServiceClient
struct NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6;
// Solana.Unity.Wallet.PublicKey
struct PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751;
// Solana.Unity.Programs.Models.NameService.RecordBase
struct RecordBase_t953BABA34828F7E098182F7EE652F8EB205988C4;
// Solana.Unity.Programs.Models.NameService.RecordHeader
struct RecordHeader_tD2952D3C4FFC294B9E534F9091941AA8435ED032;
// Solana.Unity.Programs.Models.NameService.ReverseNameRecord
struct ReverseNameRecord_t58FFC94FBBE06D572ED02190EBD4AB2CF3635A67;
// Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord
struct ReverseTokenNameRecord_t3CC577751BA616DC34AB1A8AC6718B6604D55330;
// Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord
struct ReverseTwitterRecord_t9EF7949A5194ECA8B95909E3F5E81230C9C57BCE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Solana.Unity.Programs.Abstract.ShortFlag
struct ShortFlag_t027394942D6DDF44D3D88B49F5CA4061FB97284C;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// Solana.Unity.Programs.Models.NameService.TokenData
struct TokenData_t12CE89584C4E414FF0D0A29C6AB70561ACE4CB7E;
// Solana.Unity.Programs.Models.NameService.TokenNameRecord
struct TokenNameRecord_t641AD3F42E45A18FDE4DED0FDED5DA7B6719722B;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Solana.Unity.Programs.Clients.NameServiceClient/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943;
// Solana.Unity.Programs.Clients.NameServiceClient/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t87857C0E564D1397226E391D7090B146B2C66BCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NameServiceProgram_t58E186B23111F86C0B1E6758CEF0B7DC1685E331_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral33E572DE77505FAFDD3B68FD5F0B7689DB0831A5;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B_TisU3CGetAddressFromNameAsyncU3Ed__12_tE4BD1B21FBE7B99302F45E141B8F7D8A7C543708_mBD1C9BFB9101EE2F3D71EF396AE7E211F1325D65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B_TisU3CGetAddressFromTwitterHandleAsyncU3Ed__10_t8FFC84F26D97F563611365CC56DEB4B6679AE70B_m6DB37F2210B57D0CE34B4619E7F97DB633EB1263_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218_TisU3CGetTwitterHandleFromAddressAsyncU3Ed__11_t564EC05B8242C8AFE6869B3C5E07CDE8F1F9C088_m8921B83709B77D6791C83EE15099B2D71FEF4784_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E_TisU3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120_m5BBFC4F0852E3B99EF567A5F90492ED0A7F6FBEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E_TisU3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5_m0FDD92A468D4F25EE80914E43285C8D2D174B9DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487_TisU3CGetMintFromTokenTickerAsyncU3Ed__9_t7319B18844C922C16D3D9A79677CFA275C1F0463_m3B8F8319D63D339DBE2025FEE9E00A9D939B482C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797_TisU3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120_m9410AA5342417FD49DEE8E825C0ECB559E6AD0F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797_TisU3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5_m49E938E30859EF34D43A56C558E4A34990A3A882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3_TisU3CGetTokenInfoFromMintAsyncU3Ed__8_tA67B2F3B5D13737205FCBEDE4A6D4647A41A8BF7_m71572CBF7ABC3E17F5D8A3608F923CB6C8F794E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m0721D43DFCD95E8F7CD77168431AA22863E2B6BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m5793BB70BAA82228D967E9A18E716496AD9A5629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m724C4B3497A58289AA1C05FFEF4D9191AFE6E864_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m894D9FFB661A6516A11D01507A8915F6B7D70228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mB66655D1A52205811514C6DED0351093663BCADE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mCF165DEE4F0758C0A79438314892D9950AFD8CA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m2BA3927F679F9CDD0CF9845FACBA23C8FF642E4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m4C4197ACBB0DC302EF8A95AADDD60F37CA6EABBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m5631A20455F2817128DD71054AB55AFF5270B407_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m89DA84B0CBEAF30AE49E5A01A59671D6BBE268B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mBEBED9B9ADDA84BBB8C0025D6A6E5C606613E46C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mE2749CB23DC1A297B52CCE55698420F52D2AFA2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m17B77EB38857897EF6F7E1A7471EF96EBCC1B830_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m199C2DC8F3E24D7AD5D2F78825431903EC7EF576_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m46B04B4D5CAAF718AC3BE3C7C09CA846349823EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m72B4B974CC60018DB132452C9A85C2A69C4B63F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m8EB856A57C1AFE9E964B32DD22374F484F8C85F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mBC2AC49A9D20D25CB016F2C1B65C62D412735AEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m558551C4C63F0375FA93F4C24EB89BC407203EF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA741EA10F01BC609C4C716B775B5521D5240616D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m0B591E92CA44A3D0894F622FC6ABA8699877B8AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m167EB406ED5FE46A57B5F626EB989CD30D59B3CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Skip_TisString_t_m54DC11CB444A792E1F6F8226CC15482137C4522D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Take_TisString_t_m31A30189361F02FD6807DA3F2CDCFD4109B79487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA73CB9C54FB99EA1428F1FC98FEFAD3D9158C009_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m212902D3DB0489F190C77FCCC425803052CE4B83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA3299A03C6BE328003715CA88213224DEB5868B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Flag_1__ctor_m0A87910CBC04931326EBFA67E8846E0F461D11FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Flag_1__ctor_mA786DA3DD94698B2888FC3FB09DD936FC98EA0A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Flag_1__ctor_mEFC92F89CB9EAAFA5E38DB7129E26471AA400897_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Flag_1__ctor_mFB41DC134C69211941953E70C56BE5ABD076EEC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m47B4B40C0334BE174573D98C362C0D943D680E9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5853407B96D51DD3FB23DD11F09732938F42324F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9C1BA4C90D27B56082EDE7E810EF3594FC57B34C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDBE0D9EBCE9CFD5E2CD155C9EBBCB01F5917EAEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ForEach_m4B9E1BE58DEB75E957970E67BE0AA7C91EE186D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m878DFFCC837D7A6BD025D013AD3AA85CC92F1EC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m07CDC59B9C8CDABDC1B85B99092EBE4BFB442152_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCFB38BC8E004AEF82BA5973908A3B6DB07A58ED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD1379AAB2C1B81B9C692C424867309B65C4042BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD34D580E3646C83FFD5E294911A5FBB7F43AA5AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m025CF4F74A24D16544358D8836010613DCC6F164_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m15D31E8E97A270919BFDE5C9D73B0ACB1EF222D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE02DFBC2ACB78F804D7001DDC9360FF60EF6EC37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameServiceClient_GetAccountAndSetMetadata_TisNameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4_m5930FE841A53DC959FD3640642036911AA758A10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameServiceClient_GetAccountAndSetMetadata_TisReverseTokenNameRecord_t3CC577751BA616DC34AB1A8AC6718B6604D55330_m6669A159A86E5DB3DF4B90C383A0E5A34DBFE0C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameServiceClient_GetAccountAndSetMetadata_TisReverseTwitterRecord_t9EF7949A5194ECA8B95909E3F5E81230C9C57BCE_m5A877F01B5B53DFECDB9D7C1560F07BCB47D8892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NameServiceClient_GetAccountAndSetMetadata_TisTokenNameRecord_t641AD3F42E45A18FDE4DED0FDED5DA7B6719722B_m17EC89650FF9BCA4F9FE7710F0D676CAA800D680_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestResult_1_get_Result_m1240E7E1D9842870C21DCFB7C93A3CFF04950040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestResult_1_get_WasSuccessful_m2CFEEC2DF7AD7E23376D5707253E8930614C07AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestResult_1_get_WasSuccessful_m65314331FDC4692E1360229C838E8F24188A4AB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResponseValue_1_get_Value_m8862714A428375294111D7D44CF0476EE7DB1A0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m07B69DA5865FD41C20FCF083929ABB721AFF06C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m444A9A56D3C3E118585C450E1A8FEBCED57FC967_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m53E619D92759FD7BBFD9B7D9AA477B82C6E4BD15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m64373E83B0B055912BBEC37E4883DB260803FBB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mB02B0DAD584722A281D9C20CC6441CCED52C3928_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mF52A04B9F0E80E7AE6C48AE5F1E2988DEE3255F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m130A03EA04C60F2AA151449041EBEEF0E56A6093_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m64DD448EF4352CF0DBABD33D984F39FD7762124C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m8C5717EA2B2DCE9A0429F692F77AC97A8C2214E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mB7C92C0BF1E8EF7731CB57CE95194D792A298BBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mC93DEEBB4D0BD78EE84ACF86EE65DBFD53287117_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mFC03F92B73E1B472B668F085F4541EB5FBDD02F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m3D1CF4FDE1E2A178F3D909A364D2A376397E032E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m80463985CCBAE2B621B7B4F5DAF2586FA663B3E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mA6FCC8275038E4B11BFB2BBAE3D592796DB34CBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mE0CD1A56E431799461E86D57C7F25199B966D6E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mE458B0CAF95BA8297F79CEA393A540C010316277_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mFC114E00D2F62973362EE2FADA8477C202527DF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CGetNamesFromAddressAsyncU3Eb__0_m5C4B78737BAED97AC3E9804F97191455D9D1F752_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CGetAllNamesByOwnerAsyncU3Eb__0_mB3E9BC6AC697485F8AA37FAE1B0E9DE44A138954_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Programs.Models.NameService.NameRecord>
struct Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tED5FE38B346D9ACD9A5A19D5C7EB562EF0E91652* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t3294E6AE549004233E2735FF3EB14BB195E75EF5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t68CAB4F824DDA34CB8033E49DD36556A7AF24B8A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// Solana.Unity.Programs.Abstract.Flag`1<System.Byte>
struct Flag_1_tE856994BD2E54D4E30C969685660983436342634  : public RuntimeObject
{
	// T Solana.Unity.Programs.Abstract.Flag`1::<Value>k__BackingField
	uint8_t ___U3CValueU3Ek__BackingField_0;
};

// Solana.Unity.Programs.Abstract.Flag`1<System.UInt16>
struct Flag_1_tF3FDBDBE20F5EC193AB8508F4A0DE89722A3330B  : public RuntimeObject
{
	// T Solana.Unity.Programs.Abstract.Flag`1::<Value>k__BackingField
	uint16_t ___U3CValueU3Ek__BackingField_0;
};

// Solana.Unity.Programs.Abstract.Flag`1<System.UInt32>
struct Flag_1_t5F036E33115A67358CFAC2988A37EDD24D4199E0  : public RuntimeObject
{
	// T Solana.Unity.Programs.Abstract.Flag`1::<Value>k__BackingField
	uint32_t ___U3CValueU3Ek__BackingField_0;
};

// Solana.Unity.Programs.Abstract.Flag`1<System.UInt64>
struct Flag_1_tCB7EECC164DEDA2B11A472F448D1C3512B6CB272  : public RuntimeObject
{
	// T Solana.Unity.Programs.Abstract.Flag`1::<Value>k__BackingField
	uint64_t ___U3CValueU3Ek__BackingField_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Solana.Unity.Programs.Models.NameService.NameRecord>
struct KeyCollection_t3294E6AE549004233E2735FF3EB14BB195E75EF5  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0* ____dictionary_0;
};

// System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>
struct List_1_t87857C0E564D1397226E391D7090B146B2C66BCF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AccountInfoU5BU5D_t72AE93DD292074F8475AD5A974FBD4F876B879CC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t87857C0E564D1397226E391D7090B146B2C66BCF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AccountInfoU5BU5D_t72AE93DD292074F8475AD5A974FBD4F876B879CC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>
struct List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AccountKeyPairU5BU5D_t884C044806436E77EC51B836E2F1FE557ADBAA04* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AccountKeyPairU5BU5D_t884C044806436E77EC51B836E2F1FE557ADBAA04* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.MemCmp>
struct List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MemCmpU5BU5D_t37715F75E6CC94F2F96499EC5F16555BE6A852DF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MemCmpU5BU5D_t37715F75E6CC94F2F96499EC5F16555BE6A852DF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.RecordBase>
struct List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RecordBaseU5BU5D_tB94710D52B067ED8682875F81D42523354C908D1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RecordBaseU5BU5D_tB94710D52B067ED8682875F81D42523354C908D1* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.ReverseNameRecord>
struct List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ReverseNameRecordU5BU5D_tC5C8C7E8B3A855BC138387933C695BCE01E1692E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ReverseNameRecordU5BU5D_tC5C8C7E8B3A855BC138387933C695BCE01E1692E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>
struct RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288  : public RuntimeObject
{
	// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::<WasHttpRequestSuccessful>k__BackingField
	bool ___U3CWasHttpRequestSuccessfulU3Ek__BackingField_0;
	// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::<WasRequestSuccessfullyHandled>k__BackingField
	bool ___U3CWasRequestSuccessfullyHandledU3Ek__BackingField_1;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<Reason>k__BackingField
	String_t* ___U3CReasonU3Ek__BackingField_2;
	// T Solana.Unity.Rpc.Core.Http.RequestResult`1::<Result>k__BackingField
	List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* ___U3CResultU3Ek__BackingField_3;
	// System.Net.HttpStatusCode Solana.Unity.Rpc.Core.Http.RequestResult`1::<HttpStatusCode>k__BackingField
	int32_t ___U3CHttpStatusCodeU3Ek__BackingField_4;
	// System.Int32 Solana.Unity.Rpc.Core.Http.RequestResult`1::<ServerErrorCode>k__BackingField
	int32_t ___U3CServerErrorCodeU3Ek__BackingField_5;
	// Solana.Unity.Rpc.Models.ErrorData Solana.Unity.Rpc.Core.Http.RequestResult`1::<ErrorData>k__BackingField
	ErrorData_t49373BB7C78A299593CF1FF546FFB3DCC8A9E5B8* ___U3CErrorDataU3Ek__BackingField_6;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<RawRpcRequest>k__BackingField
	String_t* ___U3CRawRpcRequestU3Ek__BackingField_7;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<RawRpcResponse>k__BackingField
	String_t* ___U3CRawRpcResponseU3Ek__BackingField_8;
};

// Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>>
struct RequestResult_1_tB91845DC2F7F5A2669DC616168B28DCAECB8BC40  : public RuntimeObject
{
	// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::<WasHttpRequestSuccessful>k__BackingField
	bool ___U3CWasHttpRequestSuccessfulU3Ek__BackingField_0;
	// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::<WasRequestSuccessfullyHandled>k__BackingField
	bool ___U3CWasRequestSuccessfullyHandledU3Ek__BackingField_1;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<Reason>k__BackingField
	String_t* ___U3CReasonU3Ek__BackingField_2;
	// T Solana.Unity.Rpc.Core.Http.RequestResult`1::<Result>k__BackingField
	ResponseValue_1_tCF55E6F19763014775060D2267A55A89D56559E7* ___U3CResultU3Ek__BackingField_3;
	// System.Net.HttpStatusCode Solana.Unity.Rpc.Core.Http.RequestResult`1::<HttpStatusCode>k__BackingField
	int32_t ___U3CHttpStatusCodeU3Ek__BackingField_4;
	// System.Int32 Solana.Unity.Rpc.Core.Http.RequestResult`1::<ServerErrorCode>k__BackingField
	int32_t ___U3CServerErrorCodeU3Ek__BackingField_5;
	// Solana.Unity.Rpc.Models.ErrorData Solana.Unity.Rpc.Core.Http.RequestResult`1::<ErrorData>k__BackingField
	ErrorData_t49373BB7C78A299593CF1FF546FFB3DCC8A9E5B8* ___U3CErrorDataU3Ek__BackingField_6;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<RawRpcRequest>k__BackingField
	String_t* ___U3CRawRpcRequestU3Ek__BackingField_7;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<RawRpcResponse>k__BackingField
	String_t* ___U3CRawRpcResponseU3Ek__BackingField_8;
};

// Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Object>
struct RequestResult_1_tF25E3B2C01F82A444D7625EB9C476DC8437EBA24  : public RuntimeObject
{
	// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::<WasHttpRequestSuccessful>k__BackingField
	bool ___U3CWasHttpRequestSuccessfulU3Ek__BackingField_0;
	// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::<WasRequestSuccessfullyHandled>k__BackingField
	bool ___U3CWasRequestSuccessfullyHandledU3Ek__BackingField_1;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<Reason>k__BackingField
	String_t* ___U3CReasonU3Ek__BackingField_2;
	// T Solana.Unity.Rpc.Core.Http.RequestResult`1::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_3;
	// System.Net.HttpStatusCode Solana.Unity.Rpc.Core.Http.RequestResult`1::<HttpStatusCode>k__BackingField
	int32_t ___U3CHttpStatusCodeU3Ek__BackingField_4;
	// System.Int32 Solana.Unity.Rpc.Core.Http.RequestResult`1::<ServerErrorCode>k__BackingField
	int32_t ___U3CServerErrorCodeU3Ek__BackingField_5;
	// Solana.Unity.Rpc.Models.ErrorData Solana.Unity.Rpc.Core.Http.RequestResult`1::<ErrorData>k__BackingField
	ErrorData_t49373BB7C78A299593CF1FF546FFB3DCC8A9E5B8* ___U3CErrorDataU3Ek__BackingField_6;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<RawRpcRequest>k__BackingField
	String_t* ___U3CRawRpcRequestU3Ek__BackingField_7;
	// System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::<RawRpcResponse>k__BackingField
	String_t* ___U3CRawRpcResponseU3Ek__BackingField_8;
};

// Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>
struct ResponseValue_1_tCF55E6F19763014775060D2267A55A89D56559E7  : public RuntimeObject
{
	// Solana.Unity.Rpc.Messages.ContextObj Solana.Unity.Rpc.Messages.ResponseValue`1::<Context>k__BackingField
	ContextObj_t20CBAD0294B1CE430341642034DBC6207DABD526* ___U3CContextU3Ek__BackingField_0;
	// T Solana.Unity.Rpc.Messages.ResponseValue`1::<Value>k__BackingField
	List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* ___U3CValueU3Ek__BackingField_1;
};

// Solana.Unity.Rpc.Messages.ResponseValue`1<System.Object>
struct ResponseValue_1_t8663D687999D2DEE6072DDA9FD2059BBDE351512  : public RuntimeObject
{
	// Solana.Unity.Rpc.Messages.ContextObj Solana.Unity.Rpc.Messages.ResponseValue`1::<Context>k__BackingField
	ContextObj_t20CBAD0294B1CE430341642034DBC6207DABD526* ___U3CContextU3Ek__BackingField_0;
	// T Solana.Unity.Rpc.Messages.ResponseValue`1::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_1;
};

// Solana.Unity.Programs.Models.ResultWrapper`2<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,Solana.Unity.Programs.Models.NameService.NameRecord>
struct ResultWrapper_2_tAB390D4A9692AA2C8E35707FD81AFAB83E669238  : public RuntimeObject
{
	// Solana.Unity.Rpc.Core.Http.RequestResult`1<T> Solana.Unity.Programs.Models.ResultWrapper`2::<OriginalRequest>k__BackingField
	RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* ___U3COriginalRequestU3Ek__BackingField_0;
	// T2 Solana.Unity.Programs.Models.ResultWrapper`2::<ParsedResult>k__BackingField
	NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* ___U3CParsedResultU3Ek__BackingField_1;
};

// Solana.Unity.Programs.Models.ResultWrapper`2<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord>
struct ResultWrapper_2_tE8F3FE8D611A6468AF3DD0ABFC0860F5D69B738E  : public RuntimeObject
{
	// Solana.Unity.Rpc.Core.Http.RequestResult`1<T> Solana.Unity.Programs.Models.ResultWrapper`2::<OriginalRequest>k__BackingField
	RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* ___U3COriginalRequestU3Ek__BackingField_0;
	// T2 Solana.Unity.Programs.Models.ResultWrapper`2::<ParsedResult>k__BackingField
	ReverseTokenNameRecord_t3CC577751BA616DC34AB1A8AC6718B6604D55330* ___U3CParsedResultU3Ek__BackingField_1;
};

// Solana.Unity.Programs.Models.ResultWrapper`2<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord>
struct ResultWrapper_2_t29FE227F17FE27D19A6F8D09811F51E938DF096A  : public RuntimeObject
{
	// Solana.Unity.Rpc.Core.Http.RequestResult`1<T> Solana.Unity.Programs.Models.ResultWrapper`2::<OriginalRequest>k__BackingField
	RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* ___U3COriginalRequestU3Ek__BackingField_0;
	// T2 Solana.Unity.Programs.Models.ResultWrapper`2::<ParsedResult>k__BackingField
	ReverseTwitterRecord_t9EF7949A5194ECA8B95909E3F5E81230C9C57BCE* ___U3CParsedResultU3Ek__BackingField_1;
};

// Solana.Unity.Programs.Models.ResultWrapper`2<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,Solana.Unity.Programs.Models.NameService.TokenNameRecord>
struct ResultWrapper_2_tBA55572AC8296D78D408A7145444BC68A9AB4E89  : public RuntimeObject
{
	// Solana.Unity.Rpc.Core.Http.RequestResult`1<T> Solana.Unity.Programs.Models.ResultWrapper`2::<OriginalRequest>k__BackingField
	RequestResult_1_t8FF863D369FC7B36364D9AB901041DC97502B757* ___U3COriginalRequestU3Ek__BackingField_0;
	// T2 Solana.Unity.Programs.Models.ResultWrapper`2::<ParsedResult>k__BackingField
	TokenNameRecord_t641AD3F42E45A18FDE4DED0FDED5DA7B6719722B* ___U3CParsedResultU3Ek__BackingField_1;
};

// Solana.Unity.Rpc.Models.AccountInfoBase
struct AccountInfoBase_t1D3349589317F053FAC79A6C7FFDEB72B347210B  : public RuntimeObject
{
	// System.UInt64 Solana.Unity.Rpc.Models.AccountInfoBase::<Lamports>k__BackingField
	uint64_t ___U3CLamportsU3Ek__BackingField_0;
	// System.String Solana.Unity.Rpc.Models.AccountInfoBase::<Owner>k__BackingField
	String_t* ___U3COwnerU3Ek__BackingField_1;
	// System.Boolean Solana.Unity.Rpc.Models.AccountInfoBase::<Executable>k__BackingField
	bool ___U3CExecutableU3Ek__BackingField_2;
	// System.UInt64 Solana.Unity.Rpc.Models.AccountInfoBase::<RentEpoch>k__BackingField
	uint64_t ___U3CRentEpochU3Ek__BackingField_3;
};

// Solana.Unity.Rpc.Models.AccountKeyPair
struct AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C  : public RuntimeObject
{
	// Solana.Unity.Rpc.Models.AccountInfo Solana.Unity.Rpc.Models.AccountKeyPair::<Account>k__BackingField
	AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* ___U3CAccountU3Ek__BackingField_0;
	// System.String Solana.Unity.Rpc.Models.AccountKeyPair::<PublicKey>k__BackingField
	String_t* ___U3CPublicKeyU3Ek__BackingField_1;
};
struct Il2CppArrayBounds;

// Solana.Unity.Programs.Abstract.BaseClient
struct BaseClient_t17729739896F3595EC6D20C2273EA5558597A030  : public RuntimeObject
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Abstract.BaseClient::<ProgramIdKey>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CProgramIdKeyU3Ek__BackingField_0;
	// Solana.Unity.Rpc.IRpcClient Solana.Unity.Programs.Abstract.BaseClient::<RpcClient>k__BackingField
	RuntimeObject* ___U3CRpcClientU3Ek__BackingField_1;
	// Solana.Unity.Rpc.IStreamingRpcClient Solana.Unity.Programs.Abstract.BaseClient::<StreamingRpcClient>k__BackingField
	RuntimeObject* ___U3CStreamingRpcClientU3Ek__BackingField_2;
};

// Solana.Unity.Programs.Abstract.BaseProgram
struct BaseProgram_t9BFF1A2FDD436A147BDAE34D2A92899BAD67FF89  : public RuntimeObject
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Abstract.BaseProgram::_programIdKey
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ____programIdKey_0;
	// System.String Solana.Unity.Programs.Abstract.BaseProgram::_programName
	String_t* ____programName_1;
};

// System.Runtime.CompilerServices.IsExternalInit
struct IsExternalInit_t36B1FA26D66169DC67CD8EA4E02970796A95A1C2  : public RuntimeObject
{
};

// Solana.Unity.Rpc.Models.MemCmp
struct MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689  : public RuntimeObject
{
	// System.Int32 Solana.Unity.Rpc.Models.MemCmp::<Offset>k__BackingField
	int32_t ___U3COffsetU3Ek__BackingField_0;
	// System.String Solana.Unity.Rpc.Models.MemCmp::<Bytes>k__BackingField
	String_t* ___U3CBytesU3Ek__BackingField_1;
};

// Solana.Unity.Wallet.PublicKey
struct PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751  : public RuntimeObject
{
	// System.String Solana.Unity.Wallet.PublicKey::_key
	String_t* ____key_1;
	// System.Byte[] Solana.Unity.Wallet.PublicKey::_keyBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____keyBytes_2;
};

struct PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_StaticFields
{
	// System.Byte[] Solana.Unity.Wallet.PublicKey::ProgramDerivedAddressBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ProgramDerivedAddressBytes_3;
};

// Solana.Unity.Programs.Models.NameService.RecordBase
struct RecordBase_t953BABA34828F7E098182F7EE652F8EB205988C4  : public RuntimeObject
{
	// Solana.Unity.Programs.Models.NameService.RecordHeader Solana.Unity.Programs.Models.NameService.RecordBase::<Header>k__BackingField
	RecordHeader_tD2952D3C4FFC294B9E534F9091941AA8435ED032* ___U3CHeaderU3Ek__BackingField_0;
	// Solana.Unity.Programs.Models.NameService.RecordType Solana.Unity.Programs.Models.NameService.RecordBase::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_1;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Models.NameService.RecordBase::<AccountAddress>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CAccountAddressU3Ek__BackingField_2;
	// System.String Solana.Unity.Programs.Models.NameService.RecordBase::<LookupValue>k__BackingField
	String_t* ___U3CLookupValueU3Ek__BackingField_3;
};

// Solana.Unity.Programs.Models.NameService.RecordHeader
struct RecordHeader_tD2952D3C4FFC294B9E534F9091941AA8435ED032  : public RuntimeObject
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Models.NameService.RecordHeader::<ParentName>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CParentNameU3Ek__BackingField_0;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Models.NameService.RecordHeader::<Owner>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3COwnerU3Ek__BackingField_1;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Models.NameService.RecordHeader::<Class>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CClassU3Ek__BackingField_2;
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
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

// Solana.Unity.Programs.Clients.NameServiceClient/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo> Solana.Unity.Programs.Clients.NameServiceClient/<>c__DisplayClass13_0::accInfos
	List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* ___accInfos_0;
	// System.Action`1<Solana.Unity.Rpc.Models.AccountInfo> Solana.Unity.Programs.Clients.NameServiceClient/<>c__DisplayClass13_0::<>9__0
	Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E* ___U3CU3E9__0_1;
};

// Solana.Unity.Programs.Clients.NameServiceClient/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo> Solana.Unity.Programs.Clients.NameServiceClient/<>c__DisplayClass6_0::accInfos
	List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* ___accInfos_0;
	// System.Action`1<Solana.Unity.Rpc.Models.AccountInfo> Solana.Unity.Programs.Clients.NameServiceClient/<>c__DisplayClass6_0::<>9__0
	Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E* ___U3CU3E9__0_1;
};

// Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>
struct AccountResultWrapper_1_t35C48ED11890EF1944543B94020A80A8957D0DF6  : public ResultWrapper_2_tAB390D4A9692AA2C8E35707FD81AFAB83E669238
{
};

// Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord>
struct AccountResultWrapper_1_tE2B867F9693F4ACE6D4F826758E6C69467BA1B2F  : public ResultWrapper_2_tE8F3FE8D611A6468AF3DD0ABFC0860F5D69B738E
{
};

// Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord>
struct AccountResultWrapper_1_tDE471A66570801A8C41D659A421EFA72EB83EA44  : public ResultWrapper_2_t29FE227F17FE27D19A6F8D09811F51E938DF096A
{
};

// Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.TokenNameRecord>
struct AccountResultWrapper_1_t730BB6868847CFF8C7718409C46B4C513DADF175  : public ResultWrapper_2_tBA55572AC8296D78D408A7145444BC68A9AB4E89
{
};

// System.Collections.Generic.List`1/Enumerator<Solana.Unity.Rpc.Models.AccountKeyPair>
struct Enumerator_tCA20CEFEDD74E64311F87E16592D56205E548A63 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>>
struct TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tD419F557E87227B9486B57EAC1C645BFDCF53137* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord>>
struct TaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t458F9EF3E716B074C040C0E7B28A60E76B2A22A2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord>>
struct TaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t70A3A7F6C77AAC9C265B912DA0AB65496B5AE155* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.TokenNameRecord>>
struct TaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t5B368A1CFA055DA4AA6A27E08A842F7BC5978543* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>>
struct TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t7CCC66177F684EE443B47A17968843DDDAE44557* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>>>
struct TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t1BB72EBC3EC5F4B31EFDCF30D3E0283AE1B50D14* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>>
struct Task_1_tD419F557E87227B9486B57EAC1C645BFDCF53137  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	AccountResultWrapper_1_t35C48ED11890EF1944543B94020A80A8957D0DF6* ___m_result_38;
};

struct Task_1_tD419F557E87227B9486B57EAC1C645BFDCF53137_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFD7E67942B7E397EE294FFE5FD30BFB78A385D72* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord>>
struct Task_1_t458F9EF3E716B074C040C0E7B28A60E76B2A22A2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	AccountResultWrapper_1_tE2B867F9693F4ACE6D4F826758E6C69467BA1B2F* ___m_result_38;
};

struct Task_1_t458F9EF3E716B074C040C0E7B28A60E76B2A22A2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tAE25EA6DFAAEF4D3CE0A518649634DF71A270EA6* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord>>
struct Task_1_t70A3A7F6C77AAC9C265B912DA0AB65496B5AE155  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	AccountResultWrapper_1_tDE471A66570801A8C41D659A421EFA72EB83EA44* ___m_result_38;
};

struct Task_1_t70A3A7F6C77AAC9C265B912DA0AB65496B5AE155_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tBEC93147998AB484D5D461E73D6447253E783E8C* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.TokenNameRecord>>
struct Task_1_t5B368A1CFA055DA4AA6A27E08A842F7BC5978543  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	AccountResultWrapper_1_t730BB6868847CFF8C7718409C46B4C513DADF175* ___m_result_38;
};

struct Task_1_t5B368A1CFA055DA4AA6A27E08A842F7BC5978543_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t46B9AE7C7F03E21517C205C39E4A8A3807970A67* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>>
struct Task_1_t7CCC66177F684EE443B47A17968843DDDAE44557  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* ___m_result_38;
};

struct Task_1_t7CCC66177F684EE443B47A17968843DDDAE44557_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t1520ECA0306439B4A27571EFD01BE60EF1F68D2E* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>>>
struct Task_1_t1BB72EBC3EC5F4B31EFDCF30D3E0283AE1B50D14  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RequestResult_1_tB91845DC2F7F5A2669DC616168B28DCAECB8BC40* ___m_result_38;
};

struct Task_1_t1BB72EBC3EC5F4B31EFDCF30D3E0283AE1B50D14_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tD6D638C453BE2AF7ED2D102CE446928A9591FE0F* ___s_defaultFactory_39;
};

// Solana.Unity.Rpc.Models.AccountInfo
struct AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D  : public AccountInfoBase_t1D3349589317F053FAC79A6C7FFDEB72B347210B
{
	// System.Collections.Generic.List`1<System.String> Solana.Unity.Rpc.Models.AccountInfo::<Data>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CDataU3Ek__BackingField_4;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// Solana.Unity.Programs.Abstract.ByteFlag
struct ByteFlag_t3271B68D4C56AD6B5DBF14A75FCC9F3D764F9750  : public Flag_1_tE856994BD2E54D4E30C969685660983436342634
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// Solana.Unity.Programs.Abstract.IntFlag
struct IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F  : public Flag_1_t5F036E33115A67358CFAC2988A37EDD24D4199E0
{
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

// Solana.Unity.Programs.Abstract.LongFlag
struct LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497  : public Flag_1_tCB7EECC164DEDA2B11A472F448D1C3512B6CB272
{
};

// Solana.Unity.Programs.Models.NameService.NameRecord
struct NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4  : public RecordBase_t953BABA34828F7E098182F7EE652F8EB205988C4
{
	// System.Byte[] Solana.Unity.Programs.Models.NameService.NameRecord::<Value>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CValueU3Ek__BackingField_4;
};

// Solana.Unity.Programs.Clients.NameServiceClient
struct NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6  : public BaseClient_t17729739896F3595EC6D20C2273EA5558597A030
{
};

struct NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_StaticFields
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Clients.NameServiceClient::TokenTLD
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___TokenTLD_3;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Clients.NameServiceClient::TwitterTLD
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___TwitterTLD_4;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Clients.NameServiceClient::ReverseTwitterNameClass
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___ReverseTwitterNameClass_5;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Clients.NameServiceClient::SolTLD
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___SolTLD_6;
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Clients.NameServiceClient::ReverseSolNameClass
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___ReverseSolNameClass_7;
};

// Solana.Unity.Programs.Models.NameService.ReverseNameRecord
struct ReverseNameRecord_t58FFC94FBBE06D572ED02190EBD4AB2CF3635A67  : public RecordBase_t953BABA34828F7E098182F7EE652F8EB205988C4
{
	// System.String Solana.Unity.Programs.Models.NameService.ReverseNameRecord::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_4;
	// Solana.Unity.Programs.Models.NameService.NameRecord Solana.Unity.Programs.Models.NameService.ReverseNameRecord::<Value>k__BackingField
	NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* ___U3CValueU3Ek__BackingField_5;
};

// Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord
struct ReverseTokenNameRecord_t3CC577751BA616DC34AB1A8AC6718B6604D55330  : public RecordBase_t953BABA34828F7E098182F7EE652F8EB205988C4
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord::<Value>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CValueU3Ek__BackingField_4;
};

// Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord
struct ReverseTwitterRecord_t9EF7949A5194ECA8B95909E3F5E81230C9C57BCE  : public RecordBase_t953BABA34828F7E098182F7EE652F8EB205988C4
{
	// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord::<TwitterRegistryKey>k__BackingField
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___U3CTwitterRegistryKeyU3Ek__BackingField_4;
	// System.String Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord::<TwitterHandle>k__BackingField
	String_t* ___U3CTwitterHandleU3Ek__BackingField_5;
};

// Solana.Unity.Programs.Abstract.ShortFlag
struct ShortFlag_t027394942D6DDF44D3D88B49F5CA4061FB97284C  : public Flag_1_tF3FDBDBE20F5EC193AB8508F4A0DE89722A3330B
{
};

// Solana.Unity.Programs.Models.NameService.TokenNameRecord
struct TokenNameRecord_t641AD3F42E45A18FDE4DED0FDED5DA7B6719722B  : public RecordBase_t953BABA34828F7E098182F7EE652F8EB205988C4
{
	// Solana.Unity.Programs.Models.NameService.TokenData Solana.Unity.Programs.Models.NameService.TokenNameRecord::<Value>k__BackingField
	TokenData_t12CE89584C4E414FF0D0A29C6AB70561ACE4CB7E* ___U3CValueU3Ek__BackingField_4;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>>
struct AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tD419F557E87227B9486B57EAC1C645BFDCF53137* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tD419F557E87227B9486B57EAC1C645BFDCF53137* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord>>
struct AsyncTaskMethodBuilder_1_t6F9AE825DBBFB690B34CF80CD6429CA8B8046D70 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t458F9EF3E716B074C040C0E7B28A60E76B2A22A2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t6F9AE825DBBFB690B34CF80CD6429CA8B8046D70_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t458F9EF3E716B074C040C0E7B28A60E76B2A22A2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord>>
struct AsyncTaskMethodBuilder_1_t67DA9004B3CC9F416278880B1A23954597921D84 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t70A3A7F6C77AAC9C265B912DA0AB65496B5AE155* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t67DA9004B3CC9F416278880B1A23954597921D84_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t70A3A7F6C77AAC9C265B912DA0AB65496B5AE155* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.TokenNameRecord>>
struct AsyncTaskMethodBuilder_1_tC89894FD9CB2AC1176E2977A4FF4E47624708D7B 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t5B368A1CFA055DA4AA6A27E08A842F7BC5978543* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tC89894FD9CB2AC1176E2977A4FF4E47624708D7B_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t5B368A1CFA055DA4AA6A27E08A842F7BC5978543* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.RecordBase>>
struct AsyncTaskMethodBuilder_1_t9844139D1A5FE0FC170332C2CA8FE8D03913B7E9 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tB4FA9EC20ECCC4E5E22F419FD23C599FD72DEE40* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_t9844139D1A5FE0FC170332C2CA8FE8D03913B7E9_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tB4FA9EC20ECCC4E5E22F419FD23C599FD72DEE40* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.ReverseNameRecord>>
struct AsyncTaskMethodBuilder_1_tA698A6B4934A33B811B45CA5CE1757331D298D4E 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t3E06D87C4D65534DF33BAF4B98E35A8BC6B68BE6* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tA698A6B4934A33B811B45CA5CE1757331D298D4E_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t3E06D87C4D65534DF33BAF4B98E35A8BC6B68BE6* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
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

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
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

// Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromNameAsync>d__12
struct U3CGetAddressFromNameAsyncU3Ed__12_tE4BD1B21FBE7B99302F45E141B8F7D8A7C543708 
{
	// System.Int32 Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromNameAsync>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>> Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromNameAsync>d__12::<>t__builder
	AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200 ___U3CU3Et__builder_1;
	// System.String Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromNameAsync>d__12::name
	String_t* ___name_2;
	// Solana.Unity.Programs.Clients.NameServiceClient Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromNameAsync>d__12::<>4__this
	NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>> Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromNameAsync>d__12::<>u__1
	TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B ___U3CU3Eu__1_4;
};

// Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromTwitterHandleAsync>d__10
struct U3CGetAddressFromTwitterHandleAsyncU3Ed__10_t8FFC84F26D97F563611365CC56DEB4B6679AE70B 
{
	// System.Int32 Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromTwitterHandleAsync>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>> Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromTwitterHandleAsync>d__10::<>t__builder
	AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200 ___U3CU3Et__builder_1;
	// System.String Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromTwitterHandleAsync>d__10::twitterHandle
	String_t* ___twitterHandle_2;
	// Solana.Unity.Programs.Clients.NameServiceClient Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromTwitterHandleAsync>d__10::<>4__this
	NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>> Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromTwitterHandleAsync>d__10::<>u__1
	TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B ___U3CU3Eu__1_4;
};

// Solana.Unity.Programs.Clients.NameServiceClient/<GetAllNamesByOwnerAsync>d__6
struct U3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120 
{
	// System.Int32 Solana.Unity.Programs.Clients.NameServiceClient/<GetAllNamesByOwnerAsync>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.RecordBase>> Solana.Unity.Programs.Clients.NameServiceClient/<GetAllNamesByOwnerAsync>d__6::<>t__builder
	AsyncTaskMethodBuilder_1_t9844139D1A5FE0FC170332C2CA8FE8D03913B7E9 ___U3CU3Et__builder_1;
	// Solana.Unity.Programs.Clients.NameServiceClient Solana.Unity.Programs.Clients.NameServiceClient/<GetAllNamesByOwnerAsync>d__6::<>4__this
	NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* ___U3CU3E4__this_2;
	// System.String Solana.Unity.Programs.Clients.NameServiceClient/<GetAllNamesByOwnerAsync>d__6::address
	String_t* ___address_3;
	// Solana.Unity.Programs.Clients.NameServiceClient/<>c__DisplayClass6_0 Solana.Unity.Programs.Clients.NameServiceClient/<GetAllNamesByOwnerAsync>d__6::<>8__1
	U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA* ___U3CU3E8__1_4;
	// System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.RecordBase> Solana.Unity.Programs.Clients.NameServiceClient/<GetAllNamesByOwnerAsync>d__6::<result>5__2
	List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20* ___U3CresultU3E5__2_5;
	// System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Programs.Models.NameService.NameRecord> Solana.Unity.Programs.Clients.NameServiceClient/<GetAllNamesByOwnerAsync>d__6::<nameToRecordMap>5__3
	Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0* ___U3CnameToRecordMapU3E5__3_6;
	// System.Collections.Generic.List`1<System.String> Solana.Unity.Programs.Clients.NameServiceClient/<GetAllNamesByOwnerAsync>d__6::<reverseNameAddresses>5__4
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CreverseNameAddressesU3E5__4_7;
	// System.Collections.Generic.List`1<System.String> Solana.Unity.Programs.Clients.NameServiceClient/<GetAllNamesByOwnerAsync>d__6::<addressesCopy>5__5
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CaddressesCopyU3E5__5_8;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>> Solana.Unity.Programs.Clients.NameServiceClient/<GetAllNamesByOwnerAsync>d__6::<>u__1
	TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E ___U3CU3Eu__1_9;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>>> Solana.Unity.Programs.Clients.NameServiceClient/<GetAllNamesByOwnerAsync>d__6::<>u__2
	TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797 ___U3CU3Eu__2_10;
};

// Solana.Unity.Programs.Clients.NameServiceClient/<GetMintFromTokenTickerAsync>d__9
struct U3CGetMintFromTokenTickerAsyncU3Ed__9_t7319B18844C922C16D3D9A79677CFA275C1F0463 
{
	// System.Int32 Solana.Unity.Programs.Clients.NameServiceClient/<GetMintFromTokenTickerAsync>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord>> Solana.Unity.Programs.Clients.NameServiceClient/<GetMintFromTokenTickerAsync>d__9::<>t__builder
	AsyncTaskMethodBuilder_1_t6F9AE825DBBFB690B34CF80CD6429CA8B8046D70 ___U3CU3Et__builder_1;
	// System.String Solana.Unity.Programs.Clients.NameServiceClient/<GetMintFromTokenTickerAsync>d__9::tokenTicker
	String_t* ___tokenTicker_2;
	// Solana.Unity.Programs.Clients.NameServiceClient Solana.Unity.Programs.Clients.NameServiceClient/<GetMintFromTokenTickerAsync>d__9::<>4__this
	NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord>> Solana.Unity.Programs.Clients.NameServiceClient/<GetMintFromTokenTickerAsync>d__9::<>u__1
	TaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487 ___U3CU3Eu__1_4;
};

// Solana.Unity.Programs.Clients.NameServiceClient/<GetNamesFromAddressAsync>d__13
struct U3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5 
{
	// System.Int32 Solana.Unity.Programs.Clients.NameServiceClient/<GetNamesFromAddressAsync>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.ReverseNameRecord>> Solana.Unity.Programs.Clients.NameServiceClient/<GetNamesFromAddressAsync>d__13::<>t__builder
	AsyncTaskMethodBuilder_1_tA698A6B4934A33B811B45CA5CE1757331D298D4E ___U3CU3Et__builder_1;
	// Solana.Unity.Programs.Clients.NameServiceClient Solana.Unity.Programs.Clients.NameServiceClient/<GetNamesFromAddressAsync>d__13::<>4__this
	NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* ___U3CU3E4__this_2;
	// System.String Solana.Unity.Programs.Clients.NameServiceClient/<GetNamesFromAddressAsync>d__13::address
	String_t* ___address_3;
	// Solana.Unity.Programs.Clients.NameServiceClient/<>c__DisplayClass13_0 Solana.Unity.Programs.Clients.NameServiceClient/<GetNamesFromAddressAsync>d__13::<>8__1
	U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943* ___U3CU3E8__1_4;
	// System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.ReverseNameRecord> Solana.Unity.Programs.Clients.NameServiceClient/<GetNamesFromAddressAsync>d__13::<ret>5__2
	List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917* ___U3CretU3E5__2_5;
	// System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Programs.Models.NameService.NameRecord> Solana.Unity.Programs.Clients.NameServiceClient/<GetNamesFromAddressAsync>d__13::<nameToRecordMap>5__3
	Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0* ___U3CnameToRecordMapU3E5__3_6;
	// System.Collections.Generic.List`1<System.String> Solana.Unity.Programs.Clients.NameServiceClient/<GetNamesFromAddressAsync>d__13::<reverseNameAddresses>5__4
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CreverseNameAddressesU3E5__4_7;
	// System.Collections.Generic.List`1<System.String> Solana.Unity.Programs.Clients.NameServiceClient/<GetNamesFromAddressAsync>d__13::<addressesCopy>5__5
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CaddressesCopyU3E5__5_8;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>> Solana.Unity.Programs.Clients.NameServiceClient/<GetNamesFromAddressAsync>d__13::<>u__1
	TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E ___U3CU3Eu__1_9;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>>> Solana.Unity.Programs.Clients.NameServiceClient/<GetNamesFromAddressAsync>d__13::<>u__2
	TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797 ___U3CU3Eu__2_10;
};

// Solana.Unity.Programs.Clients.NameServiceClient/<GetTokenInfoFromMintAsync>d__8
struct U3CGetTokenInfoFromMintAsyncU3Ed__8_tA67B2F3B5D13737205FCBEDE4A6D4647A41A8BF7 
{
	// System.Int32 Solana.Unity.Programs.Clients.NameServiceClient/<GetTokenInfoFromMintAsync>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.TokenNameRecord>> Solana.Unity.Programs.Clients.NameServiceClient/<GetTokenInfoFromMintAsync>d__8::<>t__builder
	AsyncTaskMethodBuilder_1_tC89894FD9CB2AC1176E2977A4FF4E47624708D7B ___U3CU3Et__builder_1;
	// System.String Solana.Unity.Programs.Clients.NameServiceClient/<GetTokenInfoFromMintAsync>d__8::address
	String_t* ___address_2;
	// Solana.Unity.Programs.Clients.NameServiceClient Solana.Unity.Programs.Clients.NameServiceClient/<GetTokenInfoFromMintAsync>d__8::<>4__this
	NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.TokenNameRecord>> Solana.Unity.Programs.Clients.NameServiceClient/<GetTokenInfoFromMintAsync>d__8::<>u__1
	TaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3 ___U3CU3Eu__1_4;
};

// Solana.Unity.Programs.Clients.NameServiceClient/<GetTwitterHandleFromAddressAsync>d__11
struct U3CGetTwitterHandleFromAddressAsyncU3Ed__11_t564EC05B8242C8AFE6869B3C5E07CDE8F1F9C088 
{
	// System.Int32 Solana.Unity.Programs.Clients.NameServiceClient/<GetTwitterHandleFromAddressAsync>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord>> Solana.Unity.Programs.Clients.NameServiceClient/<GetTwitterHandleFromAddressAsync>d__11::<>t__builder
	AsyncTaskMethodBuilder_1_t67DA9004B3CC9F416278880B1A23954597921D84 ___U3CU3Et__builder_1;
	// System.String Solana.Unity.Programs.Clients.NameServiceClient/<GetTwitterHandleFromAddressAsync>d__11::address
	String_t* ___address_2;
	// Solana.Unity.Programs.Clients.NameServiceClient Solana.Unity.Programs.Clients.NameServiceClient/<GetTwitterHandleFromAddressAsync>d__11::<>4__this
	NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord>> Solana.Unity.Programs.Clients.NameServiceClient/<GetTwitterHandleFromAddressAsync>d__11::<>u__1
	TaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218 ___U3CU3Eu__1_4;
};

// System.Action`1<Solana.Unity.Rpc.Models.AccountInfo>
struct Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E  : public MulticastDelegate_t
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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::op_Implicit(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<T>> Solana.Unity.Programs.Clients.NameServiceClient::GetAccountAndSetMetadata<System.Object>(Solana.Unity.Wallet.PublicKey,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEE90784264C8822BBBD39BEDF885750838FE631C* NameServiceClient_GetAccountAndSetMetadata_TisRuntimeObject_mC1A4219144A3774A5AF4E076DA8B38193DD71E91_gshared (NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___accountAddress0, String_t* ___lookupValue1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromNameAsync>d__12>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetAddressFromNameAsyncU3Ed__12_tE4BD1B21FBE7B99302F45E141B8F7D8A7C543708_mF8DDBE90C148A7C0BF8BDCFC8D714F39D1F2762B_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetAddressFromNameAsyncU3Ed__12_tE4BD1B21FBE7B99302F45E141B8F7D8A7C543708* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromTwitterHandleAsync>d__10>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetAddressFromTwitterHandleAsyncU3Ed__10_t8FFC84F26D97F563611365CC56DEB4B6679AE70B_m7A5408EE3B0435D50FC97C22D77BAD075C7502B7_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetAddressFromTwitterHandleAsyncU3Ed__10_t8FFC84F26D97F563611365CC56DEB4B6679AE70B* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Programs.Clients.NameServiceClient/<GetAllNamesByOwnerAsync>d__6>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120_mE5C3F511BAF536A61F9274F8163842357CE4C275_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120* ___stateMachine1, const RuntimeMethod* method) ;
// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Object>::get_WasSuccessful()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RequestResult_1_get_WasSuccessful_mA5BF47D1E4F808D3ECA23C00469FDEC73907C1F5_gshared (RequestResult_1_tF25E3B2C01F82A444D7625EB9C476DC8437EBA24* __this, const RuntimeMethod* method) ;
// T Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Object>::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RequestResult_1_get_Result_m37897891F48B9F2ADF46524718A671C1F7F827CC_gshared_inline (RequestResult_1_tF25E3B2C01F82A444D7625EB9C476DC8437EBA24* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Take_TisRuntimeObject_m0D329A9F9B3CB4DFDA8FC9F35FFBFE45804B32D5_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Skip_TisRuntimeObject_mC63F7758979C7B3D3C94A57B8BCD63C5237EA697_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T Solana.Unity.Rpc.Messages.ResponseValue`1<System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ResponseValue_1_get_Value_m6C5854737B78630F19EC3D59B572C8A944FE1A18_gshared_inline (ResponseValue_1_t8663D687999D2DEE6072DDA9FD2059BBDE351512* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::ForEach(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Programs.Clients.NameServiceClient/<GetMintFromTokenTickerAsync>d__9>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetMintFromTokenTickerAsyncU3Ed__9_t7319B18844C922C16D3D9A79677CFA275C1F0463_m81FA30FDB48AFB75513E7BF9A72ED228481078E1_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetMintFromTokenTickerAsyncU3Ed__9_t7319B18844C922C16D3D9A79677CFA275C1F0463* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Programs.Clients.NameServiceClient/<GetNamesFromAddressAsync>d__13>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5_m42BD58577FCAC6745A454C7879D7B0495D154F72_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Programs.Clients.NameServiceClient/<GetTokenInfoFromMintAsync>d__8>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetTokenInfoFromMintAsyncU3Ed__8_tA67B2F3B5D13737205FCBEDE4A6D4647A41A8BF7_m694FD523C21E4121E43B0EB89A518E92A5045E2C_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetTokenInfoFromMintAsyncU3Ed__8_tA67B2F3B5D13737205FCBEDE4A6D4647A41A8BF7* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Solana.Unity.Programs.Clients.NameServiceClient/<GetTwitterHandleFromAddressAsync>d__11>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetTwitterHandleFromAddressAsyncU3Ed__11_t564EC05B8242C8AFE6869B3C5E07CDE8F1F9C088_mD3E17D720921F54DA10BCDA059E94F4E23061518_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetTwitterHandleFromAddressAsyncU3Ed__11_t564EC05B8242C8AFE6869B3C5E07CDE8F1F9C088* ___stateMachine1, const RuntimeMethod* method) ;
// T Solana.Unity.Programs.Abstract.Flag`1<System.Byte>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_gshared_inline (Flag_1_tE856994BD2E54D4E30C969685660983436342634* __this, const RuntimeMethod* method) ;
// System.Boolean Solana.Unity.Programs.Abstract.Flag`1<System.Byte>::IsKthBitSet(System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8_gshared (uint64_t ___n0, int32_t ___k1, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Programs.Abstract.Flag`1<System.Byte>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flag_1__ctor_mEFC92F89CB9EAAFA5E38DB7129E26471AA400897_gshared (Flag_1_tE856994BD2E54D4E30C969685660983436342634* __this, uint8_t ___mask0, const RuntimeMethod* method) ;
// T Solana.Unity.Programs.Abstract.Flag`1<System.UInt32>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_gshared_inline (Flag_1_t5F036E33115A67358CFAC2988A37EDD24D4199E0* __this, const RuntimeMethod* method) ;
// System.Boolean Solana.Unity.Programs.Abstract.Flag`1<System.UInt32>::IsKthBitSet(System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_gshared (uint64_t ___n0, int32_t ___k1, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Programs.Abstract.Flag`1<System.UInt32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flag_1__ctor_mA786DA3DD94698B2888FC3FB09DD936FC98EA0A6_gshared (Flag_1_t5F036E33115A67358CFAC2988A37EDD24D4199E0* __this, uint32_t ___mask0, const RuntimeMethod* method) ;
// T Solana.Unity.Programs.Abstract.Flag`1<System.UInt64>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_gshared_inline (Flag_1_tCB7EECC164DEDA2B11A472F448D1C3512B6CB272* __this, const RuntimeMethod* method) ;
// System.Boolean Solana.Unity.Programs.Abstract.Flag`1<System.UInt64>::IsKthBitSet(System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_gshared (uint64_t ___n0, int32_t ___k1, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Programs.Abstract.Flag`1<System.UInt64>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flag_1__ctor_mFB41DC134C69211941953E70C56BE5ABD076EEC0_gshared (Flag_1_tCB7EECC164DEDA2B11A472F448D1C3512B6CB272* __this, uint64_t ___mask0, const RuntimeMethod* method) ;
// T Solana.Unity.Programs.Abstract.Flag`1<System.UInt16>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_gshared_inline (Flag_1_tF3FDBDBE20F5EC193AB8508F4A0DE89722A3330B* __this, const RuntimeMethod* method) ;
// System.Boolean Solana.Unity.Programs.Abstract.Flag`1<System.UInt16>::IsKthBitSet(System.UInt64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_gshared (uint64_t ___n0, int32_t ___k1, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Programs.Abstract.Flag`1<System.UInt16>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flag_1__ctor_m0A87910CBC04931326EBFA67E8846E0F461D11FE_gshared (Flag_1_tF3FDBDBE20F5EC193AB8508F4A0DE89722A3330B* __this, uint16_t ___mask0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>::Add(T)
inline void List_1_Add_m47B4B40C0334BE174573D98C362C0D943D680E9F_inline (List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* __this, AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t87857C0E564D1397226E391D7090B146B2C66BCF*, AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Byte[] Solana.Unity.Programs.NameServiceProgram::ComputeHashedName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NameServiceProgram_ComputeHashedName_m509D6763A130F5226D9D4BC2466E8006AE545D1D (String_t* ___name0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::op_Implicit(T[])
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_gshared)(___array0, method);
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.NameServiceProgram::DeriveNameAccountKey(System.ReadOnlySpan`1<System.Byte>,Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* NameServiceProgram_DeriveNameAccountKey_mFD4537BEAD96B13112F083D4C0F851CC47821CCC (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___hashedName0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___nameClass1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___parentName2, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<T>> Solana.Unity.Programs.Clients.NameServiceClient::GetAccountAndSetMetadata<Solana.Unity.Programs.Models.NameService.NameRecord>(Solana.Unity.Wallet.PublicKey,System.String)
inline Task_1_tD419F557E87227B9486B57EAC1C645BFDCF53137* NameServiceClient_GetAccountAndSetMetadata_TisNameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4_m5930FE841A53DC959FD3640642036911AA758A10 (NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___accountAddress0, String_t* ___lookupValue1, const RuntimeMethod* method)
{
	return ((  Task_1_tD419F557E87227B9486B57EAC1C645BFDCF53137* (*) (NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6*, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*, String_t*, const RuntimeMethod*))NameServiceClient_GetAccountAndSetMetadata_TisRuntimeObject_mC1A4219144A3774A5AF4E076DA8B38193DD71E91_gshared)(__this, ___accountAddress0, ___lookupValue1, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>>::GetAwaiter()
inline TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B Task_1_GetAwaiter_mFC114E00D2F62973362EE2FADA8477C202527DF5 (Task_1_tD419F557E87227B9486B57EAC1C645BFDCF53137* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B (*) (Task_1_tD419F557E87227B9486B57EAC1C645BFDCF53137*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mB7C92C0BF1E8EF7731CB57CE95194D792A298BBD (TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>>,Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromNameAsync>d__12>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B_TisU3CGetAddressFromNameAsyncU3Ed__12_tE4BD1B21FBE7B99302F45E141B8F7D8A7C543708_mBD1C9BFB9101EE2F3D71EF396AE7E211F1325D65 (AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200* __this, TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B* ___awaiter0, U3CGetAddressFromNameAsyncU3Ed__12_tE4BD1B21FBE7B99302F45E141B8F7D8A7C543708* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200*, TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B*, U3CGetAddressFromNameAsyncU3Ed__12_tE4BD1B21FBE7B99302F45E141B8F7D8A7C543708*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetAddressFromNameAsyncU3Ed__12_tE4BD1B21FBE7B99302F45E141B8F7D8A7C543708_mF8DDBE90C148A7C0BF8BDCFC8D714F39D1F2762B_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>>::GetResult()
inline AccountResultWrapper_1_t35C48ED11890EF1944543B94020A80A8957D0DF6* TaskAwaiter_1_GetResult_m53E619D92759FD7BBFD9B7D9AA477B82C6E4BD15 (TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B* __this, const RuntimeMethod* method)
{
	return ((  AccountResultWrapper_1_t35C48ED11890EF1944543B94020A80A8957D0DF6* (*) (TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m0721D43DFCD95E8F7CD77168431AA22863E2B6BA (AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m4C4197ACBB0DC302EF8A95AADDD60F37CA6EABBA (AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200* __this, AccountResultWrapper_1_t35C48ED11890EF1944543B94020A80A8957D0DF6* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200*, AccountResultWrapper_1_t35C48ED11890EF1944543B94020A80A8957D0DF6*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromNameAsync>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAddressFromNameAsyncU3Ed__12_MoveNext_m6D72A52F81DA21713E2A852B2C17CD0B5AC1AEC7 (U3CGetAddressFromNameAsyncU3Ed__12_tE4BD1B21FBE7B99302F45E141B8F7D8A7C543708* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m46B04B4D5CAAF718AC3BE3C7C09CA846349823EB (AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromNameAsync>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAddressFromNameAsyncU3Ed__12_SetStateMachine_mA8A2B49ED26BF9039CB765F859423C6D6F248623 (U3CGetAddressFromNameAsyncU3Ed__12_tE4BD1B21FBE7B99302F45E141B8F7D8A7C543708* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.NameRecord>>,Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromTwitterHandleAsync>d__10>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B_TisU3CGetAddressFromTwitterHandleAsyncU3Ed__10_t8FFC84F26D97F563611365CC56DEB4B6679AE70B_m6DB37F2210B57D0CE34B4619E7F97DB633EB1263 (AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200* __this, TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B* ___awaiter0, U3CGetAddressFromTwitterHandleAsyncU3Ed__10_t8FFC84F26D97F563611365CC56DEB4B6679AE70B* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200*, TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B*, U3CGetAddressFromTwitterHandleAsyncU3Ed__10_t8FFC84F26D97F563611365CC56DEB4B6679AE70B*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetAddressFromTwitterHandleAsyncU3Ed__10_t8FFC84F26D97F563611365CC56DEB4B6679AE70B_m7A5408EE3B0435D50FC97C22D77BAD075C7502B7_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromTwitterHandleAsync>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAddressFromTwitterHandleAsyncU3Ed__10_MoveNext_mB9FD1F4FD1AE0BACE4386F7691CC0CD7B4EDCF3F (U3CGetAddressFromTwitterHandleAsyncU3Ed__10_t8FFC84F26D97F563611365CC56DEB4B6679AE70B* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromTwitterHandleAsync>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAddressFromTwitterHandleAsyncU3Ed__10_SetStateMachine_mD03395F99A8004B17AC57D5916AE54F2C805E8BA (U3CGetAddressFromTwitterHandleAsyncU3Ed__10_t8FFC84F26D97F563611365CC56DEB4B6679AE70B* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mB55633C6EDACF3F1FE0060D864EBC0F35753319D (U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA* __this, const RuntimeMethod* method) ;
// Solana.Unity.Rpc.IRpcClient Solana.Unity.Programs.Abstract.BaseClient::get_RpcClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseClient_get_RpcClient_mDC99C59F85131FF26A4B3A336BED28115177FAE4_inline (BaseClient_t17729739896F3595EC6D20C2273EA5558597A030* __this, const RuntimeMethod* method) ;
// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Abstract.BaseClient::get_ProgramIdKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* BaseClient_get_ProgramIdKey_mA0104EA3A9EFF472EE43600EEF96E3BE41F96488_inline (BaseClient_t17729739896F3595EC6D20C2273EA5558597A030* __this, const RuntimeMethod* method) ;
// System.String Solana.Unity.Wallet.PublicKey::op_Implicit(Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PublicKey_op_Implicit_m384B7ABBC96BB94E492A1F7EDD3EA30EFCB38921 (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___publicKey0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.MemCmp>::.ctor()
inline void List_1__ctor_m07CDC59B9C8CDABDC1B85B99092EBE4BFB442152 (List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Solana.Unity.Rpc.Models.MemCmp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemCmp__ctor_m57991249C7DB05E5D8154A984009A688B1D8DE6B (MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* __this, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Rpc.Models.MemCmp::set_Bytes(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemCmp_set_Bytes_mCDC0CAE1E02E4847F4BD1155280B968EA5E4E550_inline (MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Rpc.Models.MemCmp::set_Offset(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemCmp_set_Offset_mCB83B81A3939A37B8DF0EFD827F906F7814E4ECC_inline (MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.MemCmp>::Add(T)
inline void List_1_Add_mDBE0D9EBCE9CFD5E2CD155C9EBBCB01F5917EAEB_inline (List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E* __this, MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E*, MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>>::GetAwaiter()
inline TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E Task_1_GetAwaiter_m80463985CCBAE2B621B7B4F5DAF2586FA663B3E8 (Task_1_t7CCC66177F684EE443B47A17968843DDDAE44557* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E (*) (Task_1_t7CCC66177F684EE443B47A17968843DDDAE44557*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m8C5717EA2B2DCE9A0429F692F77AC97A8C2214E7 (TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.RecordBase>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>>,Solana.Unity.Programs.Clients.NameServiceClient/<GetAllNamesByOwnerAsync>d__6>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E_TisU3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120_m5BBFC4F0852E3B99EF567A5F90492ED0A7F6FBEF (AsyncTaskMethodBuilder_1_t9844139D1A5FE0FC170332C2CA8FE8D03913B7E9* __this, TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E* ___awaiter0, U3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9844139D1A5FE0FC170332C2CA8FE8D03913B7E9*, TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E*, U3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120_mE5C3F511BAF536A61F9274F8163842357CE4C275_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>>::GetResult()
inline RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* TaskAwaiter_1_GetResult_mF52A04B9F0E80E7AE6C48AE5F1E2988DEE3255F7 (TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E* __this, const RuntimeMethod* method)
{
	return ((  RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* (*) (TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.RecordBase>::.ctor()
inline void List_1__ctor_mCFB38BC8E004AEF82BA5973908A3B6DB07A58ED5 (List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>::get_WasSuccessful()
inline bool RequestResult_1_get_WasSuccessful_m2CFEEC2DF7AD7E23376D5707253E8930614C07AA (RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288*, const RuntimeMethod*))RequestResult_1_get_WasSuccessful_mA5BF47D1E4F808D3ECA23C00469FDEC73907C1F5_gshared)(__this, method);
}
// T Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>::get_Result()
inline List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_inline (RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* __this, const RuntimeMethod* method)
{
	return ((  List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* (*) (RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288*, const RuntimeMethod*))RequestResult_1_get_Result_m37897891F48B9F2ADF46524718A671C1F7F827CC_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>::get_Count()
inline int32_t List_1_get_Count_m15D31E8E97A270919BFDE5C9D73B0ACB1EF222D2_inline (List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Programs.Models.NameService.NameRecord>::.ctor()
inline void Dictionary_2__ctor_mA741EA10F01BC609C4C716B775B5521D5240616D (Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>::GetEnumerator()
inline Enumerator_tCA20CEFEDD74E64311F87E16592D56205E548A63 List_1_GetEnumerator_m878DFFCC837D7A6BD025D013AD3AA85CC92F1EC1 (List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCA20CEFEDD74E64311F87E16592D56205E548A63 (*) (List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Solana.Unity.Rpc.Models.AccountKeyPair>::Dispose()
inline void Enumerator_Dispose_mA73CB9C54FB99EA1428F1FC98FEFAD3D9158C009 (Enumerator_tCA20CEFEDD74E64311F87E16592D56205E548A63* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCA20CEFEDD74E64311F87E16592D56205E548A63*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Solana.Unity.Rpc.Models.AccountKeyPair>::get_Current()
inline AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* Enumerator_get_Current_mA3299A03C6BE328003715CA88213224DEB5868B3_inline (Enumerator_tCA20CEFEDD74E64311F87E16592D56205E548A63* __this, const RuntimeMethod* method)
{
	return ((  AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* (*) (Enumerator_tCA20CEFEDD74E64311F87E16592D56205E548A63*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// Solana.Unity.Rpc.Models.AccountInfo Solana.Unity.Rpc.Models.AccountKeyPair::get_Account()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* AccountKeyPair_get_Account_m1953E7F21E2813875D1B5088D80206F6BA7685B0_inline (AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Solana.Unity.Rpc.Models.AccountInfo::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* AccountInfo_get_Data_mD10117914E4AB951B8D8F9211496B9EB2DACD646_inline (AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___s0, const RuntimeMethod* method) ;
// Solana.Unity.Programs.Models.NameService.RecordHeader Solana.Unity.Programs.Models.NameService.RecordHeader::Deserialize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordHeader_tD2952D3C4FFC294B9E534F9091941AA8435ED032* RecordHeader_Deserialize_mDD5711EF59842A8E245BE43B94C65E4C5CF7C8BF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) ;
// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Models.NameService.RecordHeader::get_ParentName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RecordHeader_get_ParentName_m4E10D3CCDC337A87ACEDC73F80BD745AAC948D6C_inline (RecordHeader_tD2952D3C4FFC294B9E534F9091941AA8435ED032* __this, const RuntimeMethod* method) ;
// System.Boolean Solana.Unity.Wallet.PublicKey::op_Equality(Solana.Unity.Wallet.PublicKey,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PublicKey_op_Equality_m0AA9C9DFE5518A02C138793CDC1394B872C92CF9 (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___lhs0, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___rhs1, const RuntimeMethod* method) ;
// System.String Solana.Unity.Rpc.Models.AccountKeyPair::get_PublicKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccountKeyPair_get_PublicKey_m339EFDACB82C95204D2F142EFF64DE6B46463DC4_inline (AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* __this, const RuntimeMethod* method) ;
// Solana.Unity.Programs.Models.NameService.NameRecord Solana.Unity.Programs.Models.NameService.NameRecord::Deserialize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* NameRecord_Deserialize_m5085BF3B10D6B694503FF76374276B2B48AE2F84 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Programs.Models.NameService.NameRecord>::Add(TKey,TValue)
inline void Dictionary_2_Add_m558551C4C63F0375FA93F4C24EB89BC407203EF7 (Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0* __this, String_t* ___key0, NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0*, String_t*, NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Models.NameService.RecordHeader::get_Class()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RecordHeader_get_Class_m334C541ACD67621BC25D1845D590C31E007D0B41_inline (RecordHeader_tD2952D3C4FFC294B9E534F9091941AA8435ED032* __this, const RuntimeMethod* method) ;
// Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord::Deserialize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReverseTwitterRecord_t9EF7949A5194ECA8B95909E3F5E81230C9C57BCE* ReverseTwitterRecord_Deserialize_mB4F925B334BBDE24A4DB83C85557E6445B08F18A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Wallet.PublicKey::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90 (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* __this, String_t* ___key0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Programs.Models.NameService.RecordBase::set_AccountAddress(Solana.Unity.Wallet.PublicKey)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordBase_set_AccountAddress_m85E14042052E6E5422CED56BAC68D37E1B2E73F4_inline (RecordBase_t953BABA34828F7E098182F7EE652F8EB205988C4* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.RecordBase>::Add(T)
inline void List_1_Add_m9C1BA4C90D27B56082EDE7E810EF3594FC57B34C_inline (List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20* __this, RecordBase_t953BABA34828F7E098182F7EE652F8EB205988C4* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20*, RecordBase_t953BABA34828F7E098182F7EE652F8EB205988C4*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord::Deserialize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReverseTokenNameRecord_t3CC577751BA616DC34AB1A8AC6718B6604D55330* ReverseTokenNameRecord_Deserialize_mB283C78A090072606902593F8B37571565CA2C73 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) ;
// Solana.Unity.Programs.Models.NameService.TokenNameRecord Solana.Unity.Programs.Models.NameService.TokenNameRecord::Deserialize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TokenNameRecord_t641AD3F42E45A18FDE4DED0FDED5DA7B6719722B* TokenNameRecord_Deserialize_m21B5F8CAF846C9E45538B7191864A925F0B19356 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Solana.Unity.Rpc.Models.AccountKeyPair>::MoveNext()
inline bool Enumerator_MoveNext_m212902D3DB0489F190C77FCCC425803052CE4B83 (Enumerator_tCA20CEFEDD74E64311F87E16592D56205E548A63* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCA20CEFEDD74E64311F87E16592D56205E548A63*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Programs.Models.NameService.NameRecord>::get_Keys()
inline KeyCollection_t3294E6AE549004233E2735FF3EB14BB195E75EF5* Dictionary_2_get_Keys_m167EB406ED5FE46A57B5F626EB989CD30D59B3CB (Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t3294E6AE549004233E2735FF3EB14BB195E75EF5* (*) (Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>::.ctor()
inline void List_1__ctor_mD1379AAB2C1B81B9C692C424867309B65C4042BE (List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t87857C0E564D1397226E391D7090B146B2C66BCF*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Take_TisString_t_m31A30189361F02FD6807DA3F2CDCFD4109B79487 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisRuntimeObject_m0D329A9F9B3CB4DFDA8FC9F35FFBFE45804B32D5_gshared)(___source0, ___count1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Skip_TisString_t_m54DC11CB444A792E1F6F8226CC15482137C4522D (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Skip_TisRuntimeObject_mC63F7758979C7B3D3C94A57B8BCD63C5237EA697_gshared)(___source0, ___count1, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>>>::GetAwaiter()
inline TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797 Task_1_GetAwaiter_m3D1CF4FDE1E2A178F3D909A364D2A376397E032E (Task_1_t1BB72EBC3EC5F4B31EFDCF30D3E0283AE1B50D14* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797 (*) (Task_1_t1BB72EBC3EC5F4B31EFDCF30D3E0283AE1B50D14*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m130A03EA04C60F2AA151449041EBEEF0E56A6093 (TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.RecordBase>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>>>,Solana.Unity.Programs.Clients.NameServiceClient/<GetAllNamesByOwnerAsync>d__6>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797_TisU3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120_m9410AA5342417FD49DEE8E825C0ECB559E6AD0F3 (AsyncTaskMethodBuilder_1_t9844139D1A5FE0FC170332C2CA8FE8D03913B7E9* __this, TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797* ___awaiter0, U3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9844139D1A5FE0FC170332C2CA8FE8D03913B7E9*, TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797*, U3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120_mE5C3F511BAF536A61F9274F8163842357CE4C275_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>>>::GetResult()
inline RequestResult_1_tB91845DC2F7F5A2669DC616168B28DCAECB8BC40* TaskAwaiter_1_GetResult_m07B69DA5865FD41C20FCF083929ABB721AFF06C8 (TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797* __this, const RuntimeMethod* method)
{
	return ((  RequestResult_1_tB91845DC2F7F5A2669DC616168B28DCAECB8BC40* (*) (TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>>::get_WasSuccessful()
inline bool RequestResult_1_get_WasSuccessful_m65314331FDC4692E1360229C838E8F24188A4AB8 (RequestResult_1_tB91845DC2F7F5A2669DC616168B28DCAECB8BC40* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (RequestResult_1_tB91845DC2F7F5A2669DC616168B28DCAECB8BC40*, const RuntimeMethod*))RequestResult_1_get_WasSuccessful_mA5BF47D1E4F808D3ECA23C00469FDEC73907C1F5_gshared)(__this, method);
}
// T Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>>::get_Result()
inline ResponseValue_1_tCF55E6F19763014775060D2267A55A89D56559E7* RequestResult_1_get_Result_m1240E7E1D9842870C21DCFB7C93A3CFF04950040_inline (RequestResult_1_tB91845DC2F7F5A2669DC616168B28DCAECB8BC40* __this, const RuntimeMethod* method)
{
	return ((  ResponseValue_1_tCF55E6F19763014775060D2267A55A89D56559E7* (*) (RequestResult_1_tB91845DC2F7F5A2669DC616168B28DCAECB8BC40*, const RuntimeMethod*))RequestResult_1_get_Result_m37897891F48B9F2ADF46524718A671C1F7F827CC_gshared_inline)(__this, method);
}
// T Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>::get_Value()
inline List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* ResponseValue_1_get_Value_m8862714A428375294111D7D44CF0476EE7DB1A0C_inline (ResponseValue_1_tCF55E6F19763014775060D2267A55A89D56559E7* __this, const RuntimeMethod* method)
{
	return ((  List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* (*) (ResponseValue_1_tCF55E6F19763014775060D2267A55A89D56559E7*, const RuntimeMethod*))ResponseValue_1_get_Value_m6C5854737B78630F19EC3D59B572C8A944FE1A18_gshared_inline)(__this, method);
}
// System.Void System.Action`1<Solana.Unity.Rpc.Models.AccountInfo>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m61235F2EDD6BC4CCC72DA59B713E6324272E9B47 (Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>::ForEach(System.Action`1<T>)
inline void List_1_ForEach_m4B9E1BE58DEB75E957970E67BE0AA7C91EE186D4 (List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* __this, Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E* ___action0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t87857C0E564D1397226E391D7090B146B2C66BCF*, Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E*, const RuntimeMethod*))List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared)(__this, ___action0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Solana.Unity.Programs.Models.NameService.NameRecord>::get_Item(TKey)
inline NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* Dictionary_2_get_Item_m0B591E92CA44A3D0894F622FC6ABA8699877B8AF (Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* (*) (Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// T System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>::get_Item(System.Int32)
inline AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* List_1_get_Item_mE02DFBC2ACB78F804D7001DDC9360FF60EF6EC37 (List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* (*) (List_1_t87857C0E564D1397226E391D7090B146B2C66BCF*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// Solana.Unity.Programs.Models.NameService.ReverseNameRecord Solana.Unity.Programs.Models.NameService.ReverseNameRecord::Deserialize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReverseNameRecord_t58FFC94FBBE06D572ED02190EBD4AB2CF3635A67* ReverseNameRecord_Deserialize_m4CCBCC65E1CCBCB547FB7035C7E997E37FD4C063 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Programs.Models.NameService.ReverseNameRecord::set_Value(Solana.Unity.Programs.Models.NameService.NameRecord)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReverseNameRecord_set_Value_m8E5F5E61BED1A76033ACBC97B843DA9F1F99966A_inline (ReverseNameRecord_t58FFC94FBBE06D572ED02190EBD4AB2CF3635A67* __this, NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>::get_Count()
inline int32_t List_1_get_Count_m025CF4F74A24D16544358D8836010613DCC6F164_inline (List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t87857C0E564D1397226E391D7090B146B2C66BCF*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.RecordBase>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m724C4B3497A58289AA1C05FFEF4D9191AFE6E864 (AsyncTaskMethodBuilder_1_t9844139D1A5FE0FC170332C2CA8FE8D03913B7E9* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9844139D1A5FE0FC170332C2CA8FE8D03913B7E9*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.RecordBase>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m2BA3927F679F9CDD0CF9845FACBA23C8FF642E4A (AsyncTaskMethodBuilder_1_t9844139D1A5FE0FC170332C2CA8FE8D03913B7E9* __this, List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9844139D1A5FE0FC170332C2CA8FE8D03913B7E9*, List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetAllNamesByOwnerAsync>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllNamesByOwnerAsyncU3Ed__6_MoveNext_m1C58525D3EEFED910EF15108F6AA9ED3EADF46C9 (U3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.RecordBase>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mBC2AC49A9D20D25CB016F2C1B65C62D412735AEF (AsyncTaskMethodBuilder_1_t9844139D1A5FE0FC170332C2CA8FE8D03913B7E9* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9844139D1A5FE0FC170332C2CA8FE8D03913B7E9*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetAllNamesByOwnerAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllNamesByOwnerAsyncU3Ed__6_SetStateMachine_m99FE703DA5123279FCE262FD24D30B417269AA12 (U3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<T>> Solana.Unity.Programs.Clients.NameServiceClient::GetAccountAndSetMetadata<Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord>(Solana.Unity.Wallet.PublicKey,System.String)
inline Task_1_t458F9EF3E716B074C040C0E7B28A60E76B2A22A2* NameServiceClient_GetAccountAndSetMetadata_TisReverseTokenNameRecord_t3CC577751BA616DC34AB1A8AC6718B6604D55330_m6669A159A86E5DB3DF4B90C383A0E5A34DBFE0C7 (NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___accountAddress0, String_t* ___lookupValue1, const RuntimeMethod* method)
{
	return ((  Task_1_t458F9EF3E716B074C040C0E7B28A60E76B2A22A2* (*) (NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6*, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*, String_t*, const RuntimeMethod*))NameServiceClient_GetAccountAndSetMetadata_TisRuntimeObject_mC1A4219144A3774A5AF4E076DA8B38193DD71E91_gshared)(__this, ___accountAddress0, ___lookupValue1, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord>>::GetAwaiter()
inline TaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487 Task_1_GetAwaiter_mE458B0CAF95BA8297F79CEA393A540C010316277 (Task_1_t458F9EF3E716B074C040C0E7B28A60E76B2A22A2* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487 (*) (Task_1_t458F9EF3E716B074C040C0E7B28A60E76B2A22A2*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m64DD448EF4352CF0DBABD33D984F39FD7762124C (TaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord>>,Solana.Unity.Programs.Clients.NameServiceClient/<GetMintFromTokenTickerAsync>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487_TisU3CGetMintFromTokenTickerAsyncU3Ed__9_t7319B18844C922C16D3D9A79677CFA275C1F0463_m3B8F8319D63D339DBE2025FEE9E00A9D939B482C (AsyncTaskMethodBuilder_1_t6F9AE825DBBFB690B34CF80CD6429CA8B8046D70* __this, TaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487* ___awaiter0, U3CGetMintFromTokenTickerAsyncU3Ed__9_t7319B18844C922C16D3D9A79677CFA275C1F0463* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t6F9AE825DBBFB690B34CF80CD6429CA8B8046D70*, TaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487*, U3CGetMintFromTokenTickerAsyncU3Ed__9_t7319B18844C922C16D3D9A79677CFA275C1F0463*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetMintFromTokenTickerAsyncU3Ed__9_t7319B18844C922C16D3D9A79677CFA275C1F0463_m81FA30FDB48AFB75513E7BF9A72ED228481078E1_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord>>::GetResult()
inline AccountResultWrapper_1_tE2B867F9693F4ACE6D4F826758E6C69467BA1B2F* TaskAwaiter_1_GetResult_m444A9A56D3C3E118585C450E1A8FEBCED57FC967 (TaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487* __this, const RuntimeMethod* method)
{
	return ((  AccountResultWrapper_1_tE2B867F9693F4ACE6D4F826758E6C69467BA1B2F* (*) (TaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mB66655D1A52205811514C6DED0351093663BCADE (AsyncTaskMethodBuilder_1_t6F9AE825DBBFB690B34CF80CD6429CA8B8046D70* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t6F9AE825DBBFB690B34CF80CD6429CA8B8046D70*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mE2749CB23DC1A297B52CCE55698420F52D2AFA2E (AsyncTaskMethodBuilder_1_t6F9AE825DBBFB690B34CF80CD6429CA8B8046D70* __this, AccountResultWrapper_1_tE2B867F9693F4ACE6D4F826758E6C69467BA1B2F* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t6F9AE825DBBFB690B34CF80CD6429CA8B8046D70*, AccountResultWrapper_1_tE2B867F9693F4ACE6D4F826758E6C69467BA1B2F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetMintFromTokenTickerAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetMintFromTokenTickerAsyncU3Ed__9_MoveNext_mF43B80FE3D3629D46153D56DBBED30F206B59F1E (U3CGetMintFromTokenTickerAsyncU3Ed__9_t7319B18844C922C16D3D9A79677CFA275C1F0463* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTokenNameRecord>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m199C2DC8F3E24D7AD5D2F78825431903EC7EF576 (AsyncTaskMethodBuilder_1_t6F9AE825DBBFB690B34CF80CD6429CA8B8046D70* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t6F9AE825DBBFB690B34CF80CD6429CA8B8046D70*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetMintFromTokenTickerAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetMintFromTokenTickerAsyncU3Ed__9_SetStateMachine_m1E9FE28213B92B84AEE1063C069168138016E15F (U3CGetMintFromTokenTickerAsyncU3Ed__9_t7319B18844C922C16D3D9A79677CFA275C1F0463* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m2DCCDED10C83790D9A1783F42344FC09F94A7F49 (U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.ReverseNameRecord>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>>,Solana.Unity.Programs.Clients.NameServiceClient/<GetNamesFromAddressAsync>d__13>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E_TisU3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5_m0FDD92A468D4F25EE80914E43285C8D2D174B9DB (AsyncTaskMethodBuilder_1_tA698A6B4934A33B811B45CA5CE1757331D298D4E* __this, TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E* ___awaiter0, U3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA698A6B4934A33B811B45CA5CE1757331D298D4E*, TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E*, U3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5_m42BD58577FCAC6745A454C7879D7B0495D154F72_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.ReverseNameRecord>::.ctor()
inline void List_1__ctor_mD34D580E3646C83FFD5E294911A5FBB7F43AA5AE (List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.ReverseNameRecord>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>>>,Solana.Unity.Programs.Clients.NameServiceClient/<GetNamesFromAddressAsync>d__13>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797_TisU3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5_m49E938E30859EF34D43A56C558E4A34990A3A882 (AsyncTaskMethodBuilder_1_tA698A6B4934A33B811B45CA5CE1757331D298D4E* __this, TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797* ___awaiter0, U3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA698A6B4934A33B811B45CA5CE1757331D298D4E*, TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797*, U3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5_m42BD58577FCAC6745A454C7879D7B0495D154F72_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.ReverseNameRecord>::Add(T)
inline void List_1_Add_m5853407B96D51DD3FB23DD11F09732938F42324F_inline (List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917* __this, ReverseNameRecord_t58FFC94FBBE06D572ED02190EBD4AB2CF3635A67* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917*, ReverseNameRecord_t58FFC94FBBE06D572ED02190EBD4AB2CF3635A67*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.ReverseNameRecord>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m894D9FFB661A6516A11D01507A8915F6B7D70228 (AsyncTaskMethodBuilder_1_tA698A6B4934A33B811B45CA5CE1757331D298D4E* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA698A6B4934A33B811B45CA5CE1757331D298D4E*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.ReverseNameRecord>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m5631A20455F2817128DD71054AB55AFF5270B407 (AsyncTaskMethodBuilder_1_tA698A6B4934A33B811B45CA5CE1757331D298D4E* __this, List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA698A6B4934A33B811B45CA5CE1757331D298D4E*, List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetNamesFromAddressAsync>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNamesFromAddressAsyncU3Ed__13_MoveNext_mD7C0404CD3291F1EADA402927D980A1063195DB8 (U3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Solana.Unity.Programs.Models.NameService.ReverseNameRecord>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m8EB856A57C1AFE9E964B32DD22374F484F8C85F5 (AsyncTaskMethodBuilder_1_tA698A6B4934A33B811B45CA5CE1757331D298D4E* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA698A6B4934A33B811B45CA5CE1757331D298D4E*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetNamesFromAddressAsync>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNamesFromAddressAsyncU3Ed__13_SetStateMachine_mAA02CA3C1D46B219086E7009587EE9D6A46A0ABC (U3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<T>> Solana.Unity.Programs.Clients.NameServiceClient::GetAccountAndSetMetadata<Solana.Unity.Programs.Models.NameService.TokenNameRecord>(Solana.Unity.Wallet.PublicKey,System.String)
inline Task_1_t5B368A1CFA055DA4AA6A27E08A842F7BC5978543* NameServiceClient_GetAccountAndSetMetadata_TisTokenNameRecord_t641AD3F42E45A18FDE4DED0FDED5DA7B6719722B_m17EC89650FF9BCA4F9FE7710F0D676CAA800D680 (NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___accountAddress0, String_t* ___lookupValue1, const RuntimeMethod* method)
{
	return ((  Task_1_t5B368A1CFA055DA4AA6A27E08A842F7BC5978543* (*) (NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6*, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*, String_t*, const RuntimeMethod*))NameServiceClient_GetAccountAndSetMetadata_TisRuntimeObject_mC1A4219144A3774A5AF4E076DA8B38193DD71E91_gshared)(__this, ___accountAddress0, ___lookupValue1, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.TokenNameRecord>>::GetAwaiter()
inline TaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3 Task_1_GetAwaiter_mA6FCC8275038E4B11BFB2BBAE3D592796DB34CBF (Task_1_t5B368A1CFA055DA4AA6A27E08A842F7BC5978543* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3 (*) (Task_1_t5B368A1CFA055DA4AA6A27E08A842F7BC5978543*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.TokenNameRecord>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mC93DEEBB4D0BD78EE84ACF86EE65DBFD53287117 (TaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.TokenNameRecord>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.TokenNameRecord>>,Solana.Unity.Programs.Clients.NameServiceClient/<GetTokenInfoFromMintAsync>d__8>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3_TisU3CGetTokenInfoFromMintAsyncU3Ed__8_tA67B2F3B5D13737205FCBEDE4A6D4647A41A8BF7_m71572CBF7ABC3E17F5D8A3608F923CB6C8F794E4 (AsyncTaskMethodBuilder_1_tC89894FD9CB2AC1176E2977A4FF4E47624708D7B* __this, TaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3* ___awaiter0, U3CGetTokenInfoFromMintAsyncU3Ed__8_tA67B2F3B5D13737205FCBEDE4A6D4647A41A8BF7* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC89894FD9CB2AC1176E2977A4FF4E47624708D7B*, TaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3*, U3CGetTokenInfoFromMintAsyncU3Ed__8_tA67B2F3B5D13737205FCBEDE4A6D4647A41A8BF7*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetTokenInfoFromMintAsyncU3Ed__8_tA67B2F3B5D13737205FCBEDE4A6D4647A41A8BF7_m694FD523C21E4121E43B0EB89A518E92A5045E2C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.TokenNameRecord>>::GetResult()
inline AccountResultWrapper_1_t730BB6868847CFF8C7718409C46B4C513DADF175* TaskAwaiter_1_GetResult_m64373E83B0B055912BBEC37E4883DB260803FBB4 (TaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3* __this, const RuntimeMethod* method)
{
	return ((  AccountResultWrapper_1_t730BB6868847CFF8C7718409C46B4C513DADF175* (*) (TaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.TokenNameRecord>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mCF165DEE4F0758C0A79438314892D9950AFD8CA7 (AsyncTaskMethodBuilder_1_tC89894FD9CB2AC1176E2977A4FF4E47624708D7B* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC89894FD9CB2AC1176E2977A4FF4E47624708D7B*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.TokenNameRecord>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mBEBED9B9ADDA84BBB8C0025D6A6E5C606613E46C (AsyncTaskMethodBuilder_1_tC89894FD9CB2AC1176E2977A4FF4E47624708D7B* __this, AccountResultWrapper_1_t730BB6868847CFF8C7718409C46B4C513DADF175* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC89894FD9CB2AC1176E2977A4FF4E47624708D7B*, AccountResultWrapper_1_t730BB6868847CFF8C7718409C46B4C513DADF175*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetTokenInfoFromMintAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTokenInfoFromMintAsyncU3Ed__8_MoveNext_mC675B572C6816C9247F03E7AC52D83001C9A1AA8 (U3CGetTokenInfoFromMintAsyncU3Ed__8_tA67B2F3B5D13737205FCBEDE4A6D4647A41A8BF7* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.TokenNameRecord>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m17B77EB38857897EF6F7E1A7471EF96EBCC1B830 (AsyncTaskMethodBuilder_1_tC89894FD9CB2AC1176E2977A4FF4E47624708D7B* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC89894FD9CB2AC1176E2977A4FF4E47624708D7B*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetTokenInfoFromMintAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTokenInfoFromMintAsyncU3Ed__8_SetStateMachine_m824C1F47401FF69F4B8D4D8D257050F5552604DE (U3CGetTokenInfoFromMintAsyncU3Ed__8_tA67B2F3B5D13737205FCBEDE4A6D4647A41A8BF7* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<T>> Solana.Unity.Programs.Clients.NameServiceClient::GetAccountAndSetMetadata<Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord>(Solana.Unity.Wallet.PublicKey,System.String)
inline Task_1_t70A3A7F6C77AAC9C265B912DA0AB65496B5AE155* NameServiceClient_GetAccountAndSetMetadata_TisReverseTwitterRecord_t9EF7949A5194ECA8B95909E3F5E81230C9C57BCE_m5A877F01B5B53DFECDB9D7C1560F07BCB47D8892 (NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___accountAddress0, String_t* ___lookupValue1, const RuntimeMethod* method)
{
	return ((  Task_1_t70A3A7F6C77AAC9C265B912DA0AB65496B5AE155* (*) (NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6*, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*, String_t*, const RuntimeMethod*))NameServiceClient_GetAccountAndSetMetadata_TisRuntimeObject_mC1A4219144A3774A5AF4E076DA8B38193DD71E91_gshared)(__this, ___accountAddress0, ___lookupValue1, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord>>::GetAwaiter()
inline TaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218 Task_1_GetAwaiter_mE0CD1A56E431799461E86D57C7F25199B966D6E4 (Task_1_t70A3A7F6C77AAC9C265B912DA0AB65496B5AE155* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218 (*) (Task_1_t70A3A7F6C77AAC9C265B912DA0AB65496B5AE155*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mFC03F92B73E1B472B668F085F4541EB5FBDD02F6 (TaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord>>,Solana.Unity.Programs.Clients.NameServiceClient/<GetTwitterHandleFromAddressAsync>d__11>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218_TisU3CGetTwitterHandleFromAddressAsyncU3Ed__11_t564EC05B8242C8AFE6869B3C5E07CDE8F1F9C088_m8921B83709B77D6791C83EE15099B2D71FEF4784 (AsyncTaskMethodBuilder_1_t67DA9004B3CC9F416278880B1A23954597921D84* __this, TaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218* ___awaiter0, U3CGetTwitterHandleFromAddressAsyncU3Ed__11_t564EC05B8242C8AFE6869B3C5E07CDE8F1F9C088* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t67DA9004B3CC9F416278880B1A23954597921D84*, TaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218*, U3CGetTwitterHandleFromAddressAsyncU3Ed__11_t564EC05B8242C8AFE6869B3C5E07CDE8F1F9C088*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetTwitterHandleFromAddressAsyncU3Ed__11_t564EC05B8242C8AFE6869B3C5E07CDE8F1F9C088_mD3E17D720921F54DA10BCDA059E94F4E23061518_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord>>::GetResult()
inline AccountResultWrapper_1_tDE471A66570801A8C41D659A421EFA72EB83EA44* TaskAwaiter_1_GetResult_mB02B0DAD584722A281D9C20CC6441CCED52C3928 (TaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218* __this, const RuntimeMethod* method)
{
	return ((  AccountResultWrapper_1_tDE471A66570801A8C41D659A421EFA72EB83EA44* (*) (TaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m5793BB70BAA82228D967E9A18E716496AD9A5629 (AsyncTaskMethodBuilder_1_t67DA9004B3CC9F416278880B1A23954597921D84* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t67DA9004B3CC9F416278880B1A23954597921D84*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m89DA84B0CBEAF30AE49E5A01A59671D6BBE268B6 (AsyncTaskMethodBuilder_1_t67DA9004B3CC9F416278880B1A23954597921D84* __this, AccountResultWrapper_1_tDE471A66570801A8C41D659A421EFA72EB83EA44* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t67DA9004B3CC9F416278880B1A23954597921D84*, AccountResultWrapper_1_tDE471A66570801A8C41D659A421EFA72EB83EA44*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetTwitterHandleFromAddressAsync>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTwitterHandleFromAddressAsyncU3Ed__11_MoveNext_m5892F8ADECD137317897B49EB9E88668511F85C8 (U3CGetTwitterHandleFromAddressAsyncU3Ed__11_t564EC05B8242C8AFE6869B3C5E07CDE8F1F9C088* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solana.Unity.Programs.Models.AccountResultWrapper`1<Solana.Unity.Programs.Models.NameService.ReverseTwitterRecord>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m72B4B974CC60018DB132452C9A85C2A69C4B63F9 (AsyncTaskMethodBuilder_1_t67DA9004B3CC9F416278880B1A23954597921D84* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t67DA9004B3CC9F416278880B1A23954597921D84*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetTwitterHandleFromAddressAsync>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTwitterHandleFromAddressAsyncU3Ed__11_SetStateMachine_mA5866EFFF689224D3802FBB2967CD288214DA2D1 (U3CGetTwitterHandleFromAddressAsyncU3Ed__11_t564EC05B8242C8AFE6869B3C5E07CDE8F1F9C088* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Programs.Abstract.BaseClient::set_RpcClient(Solana.Unity.Rpc.IRpcClient)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseClient_set_RpcClient_mDED8EC0A4F3400165085F19B3368A0964A656DFE_inline (BaseClient_t17729739896F3595EC6D20C2273EA5558597A030* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Programs.Abstract.BaseClient::set_StreamingRpcClient(Solana.Unity.Rpc.IStreamingRpcClient)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseClient_set_StreamingRpcClient_m402961DDDCC737B153D572A3FBD98C2E1E029087_inline (BaseClient_t17729739896F3595EC6D20C2273EA5558597A030* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// T Solana.Unity.Programs.Abstract.Flag`1<System.Byte>::get_Value()
inline uint8_t Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_inline (Flag_1_tE856994BD2E54D4E30C969685660983436342634* __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Flag_1_tE856994BD2E54D4E30C969685660983436342634*, const RuntimeMethod*))Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_gshared_inline)(__this, method);
}
// System.Boolean Solana.Unity.Programs.Abstract.Flag`1<System.Byte>::IsKthBitSet(System.UInt64,System.Int32)
inline bool Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8 (uint64_t ___n0, int32_t ___k1, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t, int32_t, const RuntimeMethod*))Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8_gshared)(___n0, ___k1, method);
}
// System.Void Solana.Unity.Programs.Abstract.Flag`1<System.Byte>::.ctor(T)
inline void Flag_1__ctor_mEFC92F89CB9EAAFA5E38DB7129E26471AA400897 (Flag_1_tE856994BD2E54D4E30C969685660983436342634* __this, uint8_t ___mask0, const RuntimeMethod* method)
{
	((  void (*) (Flag_1_tE856994BD2E54D4E30C969685660983436342634*, uint8_t, const RuntimeMethod*))Flag_1__ctor_mEFC92F89CB9EAAFA5E38DB7129E26471AA400897_gshared)(__this, ___mask0, method);
}
// T Solana.Unity.Programs.Abstract.Flag`1<System.UInt32>::get_Value()
inline uint32_t Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline (Flag_1_t5F036E33115A67358CFAC2988A37EDD24D4199E0* __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (Flag_1_t5F036E33115A67358CFAC2988A37EDD24D4199E0*, const RuntimeMethod*))Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_gshared_inline)(__this, method);
}
// System.Boolean Solana.Unity.Programs.Abstract.Flag`1<System.UInt32>::IsKthBitSet(System.UInt64,System.Int32)
inline bool Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B (uint64_t ___n0, int32_t ___k1, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t, int32_t, const RuntimeMethod*))Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_gshared)(___n0, ___k1, method);
}
// System.Void Solana.Unity.Programs.Abstract.Flag`1<System.UInt32>::.ctor(T)
inline void Flag_1__ctor_mA786DA3DD94698B2888FC3FB09DD936FC98EA0A6 (Flag_1_t5F036E33115A67358CFAC2988A37EDD24D4199E0* __this, uint32_t ___mask0, const RuntimeMethod* method)
{
	((  void (*) (Flag_1_t5F036E33115A67358CFAC2988A37EDD24D4199E0*, uint32_t, const RuntimeMethod*))Flag_1__ctor_mA786DA3DD94698B2888FC3FB09DD936FC98EA0A6_gshared)(__this, ___mask0, method);
}
// T Solana.Unity.Programs.Abstract.Flag`1<System.UInt64>::get_Value()
inline uint64_t Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline (Flag_1_tCB7EECC164DEDA2B11A472F448D1C3512B6CB272* __this, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (Flag_1_tCB7EECC164DEDA2B11A472F448D1C3512B6CB272*, const RuntimeMethod*))Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_gshared_inline)(__this, method);
}
// System.Boolean Solana.Unity.Programs.Abstract.Flag`1<System.UInt64>::IsKthBitSet(System.UInt64,System.Int32)
inline bool Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98 (uint64_t ___n0, int32_t ___k1, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t, int32_t, const RuntimeMethod*))Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_gshared)(___n0, ___k1, method);
}
// System.Void Solana.Unity.Programs.Abstract.Flag`1<System.UInt64>::.ctor(T)
inline void Flag_1__ctor_mFB41DC134C69211941953E70C56BE5ABD076EEC0 (Flag_1_tCB7EECC164DEDA2B11A472F448D1C3512B6CB272* __this, uint64_t ___mask0, const RuntimeMethod* method)
{
	((  void (*) (Flag_1_tCB7EECC164DEDA2B11A472F448D1C3512B6CB272*, uint64_t, const RuntimeMethod*))Flag_1__ctor_mFB41DC134C69211941953E70C56BE5ABD076EEC0_gshared)(__this, ___mask0, method);
}
// T Solana.Unity.Programs.Abstract.Flag`1<System.UInt16>::get_Value()
inline uint16_t Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_inline (Flag_1_tF3FDBDBE20F5EC193AB8508F4A0DE89722A3330B* __this, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (Flag_1_tF3FDBDBE20F5EC193AB8508F4A0DE89722A3330B*, const RuntimeMethod*))Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_gshared_inline)(__this, method);
}
// System.Boolean Solana.Unity.Programs.Abstract.Flag`1<System.UInt16>::IsKthBitSet(System.UInt64,System.Int32)
inline bool Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991 (uint64_t ___n0, int32_t ___k1, const RuntimeMethod* method)
{
	return ((  bool (*) (uint64_t, int32_t, const RuntimeMethod*))Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_gshared)(___n0, ___k1, method);
}
// System.Void Solana.Unity.Programs.Abstract.Flag`1<System.UInt16>::.ctor(T)
inline void Flag_1__ctor_m0A87910CBC04931326EBFA67E8846E0F461D11FE (Flag_1_tF3FDBDBE20F5EC193AB8508F4A0DE89722A3330B* __this, uint16_t ___mask0, const RuntimeMethod* method)
{
	((  void (*) (Flag_1_tF3FDBDBE20F5EC193AB8508F4A0DE89722A3330B*, uint16_t, const RuntimeMethod*))Flag_1__ctor_m0A87910CBC04931326EBFA67E8846E0F461D11FE_gshared)(__this, ___mask0, method);
}
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m2DCCDED10C83790D9A1783F42344FC09F94A7F49 (U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<>c__DisplayClass13_0::<GetNamesFromAddressAsync>b__0(Solana.Unity.Rpc.Models.AccountInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CGetNamesFromAddressAsyncU3Eb__0_m5C4B78737BAED97AC3E9804F97191455D9D1F752 (U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943* __this, AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m47B4B40C0334BE174573D98C362C0D943D680E9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* L_0 = __this->___accInfos_0;
		AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* L_1 = ___x0;
		NullCheck(L_0);
		List_1_Add_m47B4B40C0334BE174573D98C362C0D943D680E9F_inline(L_0, L_1, List_1_Add_m47B4B40C0334BE174573D98C362C0D943D680E9F_RuntimeMethod_var);
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
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mB55633C6EDACF3F1FE0060D864EBC0F35753319D (U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<>c__DisplayClass6_0::<GetAllNamesByOwnerAsync>b__0(Solana.Unity.Rpc.Models.AccountInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CGetAllNamesByOwnerAsyncU3Eb__0_mB3E9BC6AC697485F8AA37FAE1B0E9DE44A138954 (U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA* __this, AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m47B4B40C0334BE174573D98C362C0D943D680E9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* L_0 = __this->___accInfos_0;
		AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* L_1 = ___x0;
		NullCheck(L_0);
		List_1_Add_m47B4B40C0334BE174573D98C362C0D943D680E9F_inline(L_0, L_1, List_1_Add_m47B4B40C0334BE174573D98C362C0D943D680E9F_RuntimeMethod_var);
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
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromNameAsync>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAddressFromNameAsyncU3Ed__12_MoveNext_m6D72A52F81DA21713E2A852B2C17CD0B5AC1AEC7 (U3CGetAddressFromNameAsyncU3Ed__12_tE4BD1B21FBE7B99302F45E141B8F7D8A7C543708* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B_TisU3CGetAddressFromNameAsyncU3Ed__12_tE4BD1B21FBE7B99302F45E141B8F7D8A7C543708_mBD1C9BFB9101EE2F3D71EF396AE7E211F1325D65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m4C4197ACBB0DC302EF8A95AADDD60F37CA6EABBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameServiceClient_GetAccountAndSetMetadata_TisNameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4_m5930FE841A53DC959FD3640642036911AA758A10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameServiceProgram_t58E186B23111F86C0B1E6758CEF0B7DC1685E331_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m53E619D92759FD7BBFD9B7D9AA477B82C6E4BD15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mB7C92C0BF1E8EF7731CB57CE95194D792A298BBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mFC114E00D2F62973362EE2FADA8477C202527DF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33E572DE77505FAFDD3B68FD5F0B7689DB0831A5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* V_1 = NULL;
	AccountResultWrapper_1_t35C48ED11890EF1944543B94020A80A8957D0DF6* V_2 = NULL;
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* V_3 = NULL;
	TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_009f_1;
			}
		}
		{
			String_t* L_3 = __this->___name_2;
			NullCheck(L_3);
			bool L_4;
			L_4 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_3, _stringLiteral33E572DE77505FAFDD3B68FD5F0B7689DB0831A5, NULL);
			if (!L_4)
			{
				goto IL_0045_1;
			}
		}
		{
			String_t* L_5 = __this->___name_2;
			String_t* L_6 = __this->___name_2;
			NullCheck(L_6);
			int32_t L_7;
			L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
			NullCheck(L_5);
			String_t* L_8;
			L_8 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_5, 0, ((int32_t)il2cpp_codegen_subtract(L_7, 4)), NULL);
			__this->___name_2 = L_8;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___name_2), (void*)L_8);
		}

IL_0045_1:
		{
			String_t* L_9 = __this->___name_2;
			il2cpp_codegen_runtime_class_init_inline(NameServiceProgram_t58E186B23111F86C0B1E6758CEF0B7DC1685E331_il2cpp_TypeInfo_var);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
			L_10 = NameServiceProgram_ComputeHashedName_m509D6763A130F5226D9D4BC2466E8006AE545D1D(L_9, NULL);
			ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_11;
			L_11 = ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644(L_10, ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_12 = ((NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_StaticFields*)il2cpp_codegen_static_fields_for(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var))->___SolTLD_6;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_13;
			L_13 = NameServiceProgram_DeriveNameAccountKey_mFD4537BEAD96B13112F083D4C0F851CC47821CCC(L_11, (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)NULL, L_12, NULL);
			V_3 = L_13;
			NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* L_14 = V_1;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_15 = V_3;
			String_t* L_16 = __this->___name_2;
			NullCheck(L_14);
			Task_1_tD419F557E87227B9486B57EAC1C645BFDCF53137* L_17;
			L_17 = NameServiceClient_GetAccountAndSetMetadata_TisNameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4_m5930FE841A53DC959FD3640642036911AA758A10(L_14, L_15, L_16, NameServiceClient_GetAccountAndSetMetadata_TisNameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4_m5930FE841A53DC959FD3640642036911AA758A10_RuntimeMethod_var);
			NullCheck(L_17);
			TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B L_18;
			L_18 = Task_1_GetAwaiter_mFC114E00D2F62973362EE2FADA8477C202527DF5(L_17, Task_1_GetAwaiter_mFC114E00D2F62973362EE2FADA8477C202527DF5_RuntimeMethod_var);
			V_4 = L_18;
			bool L_19;
			L_19 = TaskAwaiter_1_get_IsCompleted_mB7C92C0BF1E8EF7731CB57CE95194D792A298BBD((&V_4), TaskAwaiter_1_get_IsCompleted_mB7C92C0BF1E8EF7731CB57CE95194D792A298BBD_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_00bc_1;
			}
		}
		{
			int32_t L_20 = 0;
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
			TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B L_21 = V_4;
			__this->___U3CU3Eu__1_4 = L_21;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200* L_22 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B_TisU3CGetAddressFromNameAsyncU3Ed__12_tE4BD1B21FBE7B99302F45E141B8F7D8A7C543708_mBD1C9BFB9101EE2F3D71EF396AE7E211F1325D65(L_22, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B_TisU3CGetAddressFromNameAsyncU3Ed__12_tE4BD1B21FBE7B99302F45E141B8F7D8A7C543708_mBD1C9BFB9101EE2F3D71EF396AE7E211F1325D65_RuntimeMethod_var);
			goto IL_00f3;
		}

IL_009f_1:
		{
			TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B L_23 = __this->___U3CU3Eu__1_4;
			V_4 = L_23;
			TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B* L_24 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_24, sizeof(TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B));
			int32_t L_25 = (-1);
			V_0 = L_25;
			__this->___U3CU3E1__state_0 = L_25;
		}

IL_00bc_1:
		{
			AccountResultWrapper_1_t35C48ED11890EF1944543B94020A80A8957D0DF6* L_26;
			L_26 = TaskAwaiter_1_GetResult_m53E619D92759FD7BBFD9B7D9AA477B82C6E4BD15((&V_4), TaskAwaiter_1_GetResult_m53E619D92759FD7BBFD9B7D9AA477B82C6E4BD15_RuntimeMethod_var);
			V_2 = L_26;
			goto IL_00df;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c6;
		}
		throw e;
	}

CATCH_00c6:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200* L_27 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_28 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m0721D43DFCD95E8F7CD77168431AA22863E2B6BA(L_27, L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m0721D43DFCD95E8F7CD77168431AA22863E2B6BA_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00f3;
	}// end catch (depth: 1)

IL_00df:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200* L_29 = (&__this->___U3CU3Et__builder_1);
		AccountResultWrapper_1_t35C48ED11890EF1944543B94020A80A8957D0DF6* L_30 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m4C4197ACBB0DC302EF8A95AADDD60F37CA6EABBA(L_29, L_30, AsyncTaskMethodBuilder_1_SetResult_m4C4197ACBB0DC302EF8A95AADDD60F37CA6EABBA_RuntimeMethod_var);
	}

IL_00f3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetAddressFromNameAsyncU3Ed__12_MoveNext_m6D72A52F81DA21713E2A852B2C17CD0B5AC1AEC7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetAddressFromNameAsyncU3Ed__12_tE4BD1B21FBE7B99302F45E141B8F7D8A7C543708* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetAddressFromNameAsyncU3Ed__12_tE4BD1B21FBE7B99302F45E141B8F7D8A7C543708*>(__this + _offset);
	U3CGetAddressFromNameAsyncU3Ed__12_MoveNext_m6D72A52F81DA21713E2A852B2C17CD0B5AC1AEC7(_thisAdjusted, method);
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromNameAsync>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAddressFromNameAsyncU3Ed__12_SetStateMachine_mA8A2B49ED26BF9039CB765F859423C6D6F248623 (U3CGetAddressFromNameAsyncU3Ed__12_tE4BD1B21FBE7B99302F45E141B8F7D8A7C543708* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m46B04B4D5CAAF718AC3BE3C7C09CA846349823EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m46B04B4D5CAAF718AC3BE3C7C09CA846349823EB(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m46B04B4D5CAAF718AC3BE3C7C09CA846349823EB_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetAddressFromNameAsyncU3Ed__12_SetStateMachine_mA8A2B49ED26BF9039CB765F859423C6D6F248623_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetAddressFromNameAsyncU3Ed__12_tE4BD1B21FBE7B99302F45E141B8F7D8A7C543708* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetAddressFromNameAsyncU3Ed__12_tE4BD1B21FBE7B99302F45E141B8F7D8A7C543708*>(__this + _offset);
	U3CGetAddressFromNameAsyncU3Ed__12_SetStateMachine_mA8A2B49ED26BF9039CB765F859423C6D6F248623(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromTwitterHandleAsync>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAddressFromTwitterHandleAsyncU3Ed__10_MoveNext_mB9FD1F4FD1AE0BACE4386F7691CC0CD7B4EDCF3F (U3CGetAddressFromTwitterHandleAsyncU3Ed__10_t8FFC84F26D97F563611365CC56DEB4B6679AE70B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B_TisU3CGetAddressFromTwitterHandleAsyncU3Ed__10_t8FFC84F26D97F563611365CC56DEB4B6679AE70B_m6DB37F2210B57D0CE34B4619E7F97DB633EB1263_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m4C4197ACBB0DC302EF8A95AADDD60F37CA6EABBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameServiceClient_GetAccountAndSetMetadata_TisNameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4_m5930FE841A53DC959FD3640642036911AA758A10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameServiceProgram_t58E186B23111F86C0B1E6758CEF0B7DC1685E331_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m53E619D92759FD7BBFD9B7D9AA477B82C6E4BD15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mB7C92C0BF1E8EF7731CB57CE95194D792A298BBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mFC114E00D2F62973362EE2FADA8477C202527DF5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* V_1 = NULL;
	AccountResultWrapper_1_t35C48ED11890EF1944543B94020A80A8957D0DF6* V_2 = NULL;
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* V_3 = NULL;
	TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006b_1;
			}
		}
		{
			String_t* L_3 = __this->___twitterHandle_2;
			il2cpp_codegen_runtime_class_init_inline(NameServiceProgram_t58E186B23111F86C0B1E6758CEF0B7DC1685E331_il2cpp_TypeInfo_var);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
			L_4 = NameServiceProgram_ComputeHashedName_m509D6763A130F5226D9D4BC2466E8006AE545D1D(L_3, NULL);
			ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
			L_5 = ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644(L_4, ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_6 = ((NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_StaticFields*)il2cpp_codegen_static_fields_for(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var))->___TwitterTLD_4;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_7;
			L_7 = NameServiceProgram_DeriveNameAccountKey_mFD4537BEAD96B13112F083D4C0F851CC47821CCC(L_5, (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)NULL, L_6, NULL);
			V_3 = L_7;
			NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* L_8 = V_1;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_9 = V_3;
			String_t* L_10 = __this->___twitterHandle_2;
			NullCheck(L_8);
			Task_1_tD419F557E87227B9486B57EAC1C645BFDCF53137* L_11;
			L_11 = NameServiceClient_GetAccountAndSetMetadata_TisNameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4_m5930FE841A53DC959FD3640642036911AA758A10(L_8, L_9, L_10, NameServiceClient_GetAccountAndSetMetadata_TisNameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4_m5930FE841A53DC959FD3640642036911AA758A10_RuntimeMethod_var);
			NullCheck(L_11);
			TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B L_12;
			L_12 = Task_1_GetAwaiter_mFC114E00D2F62973362EE2FADA8477C202527DF5(L_11, Task_1_GetAwaiter_mFC114E00D2F62973362EE2FADA8477C202527DF5_RuntimeMethod_var);
			V_4 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_1_get_IsCompleted_mB7C92C0BF1E8EF7731CB57CE95194D792A298BBD((&V_4), TaskAwaiter_1_get_IsCompleted_mB7C92C0BF1E8EF7731CB57CE95194D792A298BBD_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0088_1;
			}
		}
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
			TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B L_15 = V_4;
			__this->___U3CU3Eu__1_4 = L_15;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200* L_16 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B_TisU3CGetAddressFromTwitterHandleAsyncU3Ed__10_t8FFC84F26D97F563611365CC56DEB4B6679AE70B_m6DB37F2210B57D0CE34B4619E7F97DB633EB1263(L_16, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B_TisU3CGetAddressFromTwitterHandleAsyncU3Ed__10_t8FFC84F26D97F563611365CC56DEB4B6679AE70B_m6DB37F2210B57D0CE34B4619E7F97DB633EB1263_RuntimeMethod_var);
			goto IL_00bf;
		}

IL_006b_1:
		{
			TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B L_17 = __this->___U3CU3Eu__1_4;
			V_4 = L_17;
			TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B* L_18 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_1_t05FECA0955F766A38F89999E816E92FB9E1CEF8B));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
		}

IL_0088_1:
		{
			AccountResultWrapper_1_t35C48ED11890EF1944543B94020A80A8957D0DF6* L_20;
			L_20 = TaskAwaiter_1_GetResult_m53E619D92759FD7BBFD9B7D9AA477B82C6E4BD15((&V_4), TaskAwaiter_1_GetResult_m53E619D92759FD7BBFD9B7D9AA477B82C6E4BD15_RuntimeMethod_var);
			V_2 = L_20;
			goto IL_00ab;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0092;
		}
		throw e;
	}

CATCH_0092:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200* L_21 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_22 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m0721D43DFCD95E8F7CD77168431AA22863E2B6BA(L_21, L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m0721D43DFCD95E8F7CD77168431AA22863E2B6BA_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bf;
	}// end catch (depth: 1)

IL_00ab:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200* L_23 = (&__this->___U3CU3Et__builder_1);
		AccountResultWrapper_1_t35C48ED11890EF1944543B94020A80A8957D0DF6* L_24 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m4C4197ACBB0DC302EF8A95AADDD60F37CA6EABBA(L_23, L_24, AsyncTaskMethodBuilder_1_SetResult_m4C4197ACBB0DC302EF8A95AADDD60F37CA6EABBA_RuntimeMethod_var);
	}

IL_00bf:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetAddressFromTwitterHandleAsyncU3Ed__10_MoveNext_mB9FD1F4FD1AE0BACE4386F7691CC0CD7B4EDCF3F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetAddressFromTwitterHandleAsyncU3Ed__10_t8FFC84F26D97F563611365CC56DEB4B6679AE70B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetAddressFromTwitterHandleAsyncU3Ed__10_t8FFC84F26D97F563611365CC56DEB4B6679AE70B*>(__this + _offset);
	U3CGetAddressFromTwitterHandleAsyncU3Ed__10_MoveNext_mB9FD1F4FD1AE0BACE4386F7691CC0CD7B4EDCF3F(_thisAdjusted, method);
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetAddressFromTwitterHandleAsync>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAddressFromTwitterHandleAsyncU3Ed__10_SetStateMachine_mD03395F99A8004B17AC57D5916AE54F2C805E8BA (U3CGetAddressFromTwitterHandleAsyncU3Ed__10_t8FFC84F26D97F563611365CC56DEB4B6679AE70B* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m46B04B4D5CAAF718AC3BE3C7C09CA846349823EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t27A639B8489ECD4AC023529681BC2293CE7BD200* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m46B04B4D5CAAF718AC3BE3C7C09CA846349823EB(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m46B04B4D5CAAF718AC3BE3C7C09CA846349823EB_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetAddressFromTwitterHandleAsyncU3Ed__10_SetStateMachine_mD03395F99A8004B17AC57D5916AE54F2C805E8BA_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetAddressFromTwitterHandleAsyncU3Ed__10_t8FFC84F26D97F563611365CC56DEB4B6679AE70B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetAddressFromTwitterHandleAsyncU3Ed__10_t8FFC84F26D97F563611365CC56DEB4B6679AE70B*>(__this + _offset);
	U3CGetAddressFromTwitterHandleAsyncU3Ed__10_SetStateMachine_mD03395F99A8004B17AC57D5916AE54F2C805E8BA(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetAllNamesByOwnerAsync>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllNamesByOwnerAsyncU3Ed__6_MoveNext_m1C58525D3EEFED910EF15108F6AA9ED3EADF46C9 (U3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E_TisU3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120_m5BBFC4F0852E3B99EF567A5F90492ED0A7F6FBEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797_TisU3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120_m9410AA5342417FD49DEE8E825C0ECB559E6AD0F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m2BA3927F679F9CDD0CF9845FACBA23C8FF642E4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m558551C4C63F0375FA93F4C24EB89BC407203EF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA741EA10F01BC609C4C716B775B5521D5240616D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m0B591E92CA44A3D0894F622FC6ABA8699877B8AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m167EB406ED5FE46A57B5F626EB989CD30D59B3CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisString_t_m54DC11CB444A792E1F6F8226CC15482137C4522D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Take_TisString_t_m31A30189361F02FD6807DA3F2CDCFD4109B79487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA73CB9C54FB99EA1428F1FC98FEFAD3D9158C009_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m212902D3DB0489F190C77FCCC425803052CE4B83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA3299A03C6BE328003715CA88213224DEB5868B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9C1BA4C90D27B56082EDE7E810EF3594FC57B34C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDBE0D9EBCE9CFD5E2CD155C9EBBCB01F5917EAEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_m4B9E1BE58DEB75E957970E67BE0AA7C91EE186D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m878DFFCC837D7A6BD025D013AD3AA85CC92F1EC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m07CDC59B9C8CDABDC1B85B99092EBE4BFB442152_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCFB38BC8E004AEF82BA5973908A3B6DB07A58ED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD1379AAB2C1B81B9C692C424867309B65C4042BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m025CF4F74A24D16544358D8836010613DCC6F164_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m15D31E8E97A270919BFDE5C9D73B0ACB1EF222D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE02DFBC2ACB78F804D7001DDC9360FF60EF6EC37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t87857C0E564D1397226E391D7090B146B2C66BCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameServiceProgram_t58E186B23111F86C0B1E6758CEF0B7DC1685E331_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestResult_1_get_Result_m1240E7E1D9842870C21DCFB7C93A3CFF04950040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestResult_1_get_WasSuccessful_m2CFEEC2DF7AD7E23376D5707253E8930614C07AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestResult_1_get_WasSuccessful_m65314331FDC4692E1360229C838E8F24188A4AB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseValue_1_get_Value_m8862714A428375294111D7D44CF0476EE7DB1A0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m07B69DA5865FD41C20FCF083929ABB721AFF06C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mF52A04B9F0E80E7AE6C48AE5F1E2988DEE3255F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m130A03EA04C60F2AA151449041EBEEF0E56A6093_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m8C5717EA2B2DCE9A0429F692F77AC97A8C2214E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m3D1CF4FDE1E2A178F3D909A364D2A376397E032E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m80463985CCBAE2B621B7B4F5DAF2586FA663B3E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CGetAllNamesByOwnerAsyncU3Eb__0_mB3E9BC6AC697485F8AA37FAE1B0E9DE44A138954_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* V_1 = NULL;
	List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20* V_2 = NULL;
	RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* V_3 = NULL;
	TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Enumerator_tCA20CEFEDD74E64311F87E16592D56205E548A63 V_6;
	memset((&V_6), 0, sizeof(V_6));
	AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* V_7 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	RecordHeader_tD2952D3C4FFC294B9E534F9091941AA8435ED032* V_9 = NULL;
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* V_10 = NULL;
	NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* V_11 = NULL;
	ReverseTwitterRecord_t9EF7949A5194ECA8B95909E3F5E81230C9C57BCE* V_12 = NULL;
	NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* V_13 = NULL;
	ReverseTokenNameRecord_t3CC577751BA616DC34AB1A8AC6718B6604D55330* V_14 = NULL;
	TokenNameRecord_t641AD3F42E45A18FDE4DED0FDED5DA7B6719722B* V_15 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_16 = NULL;
	RequestResult_1_tB91845DC2F7F5A2669DC616168B28DCAECB8BC40* V_17 = NULL;
	TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797 V_18;
	memset((&V_18), 0, sizeof(V_18));
	Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E* V_19 = NULL;
	int32_t V_20 = 0;
	NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* V_21 = NULL;
	AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* V_22 = NULL;
	ReverseNameRecord_t58FFC94FBBE06D572ED02190EBD4AB2CF3635A67* V_23 = NULL;
	Exception_t* V_24 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E* G_B37_0 = NULL;
	List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* G_B37_1 = NULL;
	Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E* G_B36_0 = NULL;
	List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* G_B36_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_009f_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_037a_1;
			}
		}
		{
			U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA* L_4 = (U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			U3CU3Ec__DisplayClass6_0__ctor_mB55633C6EDACF3F1FE0060D864EBC0F35753319D(L_4, NULL);
			__this->___U3CU3E8__1_4 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)L_4);
			NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = BaseClient_get_RpcClient_mDC99C59F85131FF26A4B3A336BED28115177FAE4_inline(L_5, NULL);
			NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* L_7 = V_1;
			NullCheck(L_7);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_8;
			L_8 = BaseClient_get_ProgramIdKey_mA0104EA3A9EFF472EE43600EEF96E3BE41F96488_inline(L_7, NULL);
			il2cpp_codegen_runtime_class_init_inline(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
			String_t* L_9;
			L_9 = PublicKey_op_Implicit_m384B7ABBC96BB94E492A1F7EDD3EA30EFCB38921(L_8, NULL);
			il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_10 = V_5;
			List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E* L_11 = (List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E*)il2cpp_codegen_object_new(List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E_il2cpp_TypeInfo_var);
			NullCheck(L_11);
			List_1__ctor_m07CDC59B9C8CDABDC1B85B99092EBE4BFB442152(L_11, List_1__ctor_m07CDC59B9C8CDABDC1B85B99092EBE4BFB442152_RuntimeMethod_var);
			List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E* L_12 = L_11;
			MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* L_13 = (MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689*)il2cpp_codegen_object_new(MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689_il2cpp_TypeInfo_var);
			NullCheck(L_13);
			MemCmp__ctor_m57991249C7DB05E5D8154A984009A688B1D8DE6B(L_13, NULL);
			MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* L_14 = L_13;
			String_t* L_15 = __this->___address_3;
			NullCheck(L_14);
			MemCmp_set_Bytes_mCDC0CAE1E02E4847F4BD1155280B968EA5E4E550_inline(L_14, L_15, NULL);
			MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* L_16 = L_14;
			NullCheck(L_16);
			MemCmp_set_Offset_mCB83B81A3939A37B8DF0EFD827F906F7814E4ECC_inline(L_16, ((int32_t)32), NULL);
			NullCheck(L_12);
			List_1_Add_mDBE0D9EBCE9CFD5E2CD155C9EBBCB01F5917EAEB_inline(L_12, L_16, List_1_Add_mDBE0D9EBCE9CFD5E2CD155C9EBBCB01F5917EAEB_RuntimeMethod_var);
			NullCheck(L_6);
			Task_1_t7CCC66177F684EE443B47A17968843DDDAE44557* L_17;
			L_17 = InterfaceFuncInvoker4< Task_1_t7CCC66177F684EE443B47A17968843DDDAE44557*, String_t*, int32_t, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, RuntimeObject* >::Invoke(69 /* System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>> Solana.Unity.Rpc.IRpcClient::GetProgramAccountsAsync(System.String,Solana.Unity.Rpc.Types.Commitment,System.Nullable`1<System.Int32>,System.Collections.Generic.IList`1<Solana.Unity.Rpc.Models.MemCmp>) */, IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var, L_6, L_9, 1, L_10, L_12);
			NullCheck(L_17);
			TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E L_18;
			L_18 = Task_1_GetAwaiter_m80463985CCBAE2B621B7B4F5DAF2586FA663B3E8(L_17, Task_1_GetAwaiter_m80463985CCBAE2B621B7B4F5DAF2586FA663B3E8_RuntimeMethod_var);
			V_4 = L_18;
			bool L_19;
			L_19 = TaskAwaiter_1_get_IsCompleted_m8C5717EA2B2DCE9A0429F692F77AC97A8C2214E7((&V_4), TaskAwaiter_1_get_IsCompleted_m8C5717EA2B2DCE9A0429F692F77AC97A8C2214E7_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_00bc_1;
			}
		}
		{
			int32_t L_20 = 0;
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
			TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E L_21 = V_4;
			__this->___U3CU3Eu__1_9 = L_21;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_9))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t9844139D1A5FE0FC170332C2CA8FE8D03913B7E9* L_22 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E_TisU3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120_m5BBFC4F0852E3B99EF567A5F90492ED0A7F6FBEF(L_22, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E_TisU3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120_m5BBFC4F0852E3B99EF567A5F90492ED0A7F6FBEF_RuntimeMethod_var);
			goto IL_0516;
		}

IL_009f_1:
		{
			TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E L_23 = __this->___U3CU3Eu__1_9;
			V_4 = L_23;
			TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E* L_24 = (&__this->___U3CU3Eu__1_9);
			il2cpp_codegen_initobj(L_24, sizeof(TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E));
			int32_t L_25 = (-1);
			V_0 = L_25;
			__this->___U3CU3E1__state_0 = L_25;
		}

IL_00bc_1:
		{
			RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* L_26;
			L_26 = TaskAwaiter_1_GetResult_mF52A04B9F0E80E7AE6C48AE5F1E2988DEE3255F7((&V_4), TaskAwaiter_1_GetResult_mF52A04B9F0E80E7AE6C48AE5F1E2988DEE3255F7_RuntimeMethod_var);
			V_3 = L_26;
			List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20* L_27 = (List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20*)il2cpp_codegen_object_new(List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20_il2cpp_TypeInfo_var);
			NullCheck(L_27);
			List_1__ctor_mCFB38BC8E004AEF82BA5973908A3B6DB07A58ED5(L_27, List_1__ctor_mCFB38BC8E004AEF82BA5973908A3B6DB07A58ED5_RuntimeMethod_var);
			__this->___U3CresultU3E5__2_5 = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__2_5), (void*)L_27);
			RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* L_28 = V_3;
			NullCheck(L_28);
			bool L_29;
			L_29 = RequestResult_1_get_WasSuccessful_m2CFEEC2DF7AD7E23376D5707253E8930614C07AA(L_28, RequestResult_1_get_WasSuccessful_m2CFEEC2DF7AD7E23376D5707253E8930614C07AA_RuntimeMethod_var);
			if (!L_29)
			{
				goto IL_00ec_1;
			}
		}
		{
			RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* L_30 = V_3;
			NullCheck(L_30);
			List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* L_31;
			L_31 = RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_inline(L_30, RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_RuntimeMethod_var);
			if (!L_31)
			{
				goto IL_00ec_1;
			}
		}
		{
			RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* L_32 = V_3;
			NullCheck(L_32);
			List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* L_33;
			L_33 = RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_inline(L_32, RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_RuntimeMethod_var);
			NullCheck(L_33);
			int32_t L_34;
			L_34 = List_1_get_Count_m15D31E8E97A270919BFDE5C9D73B0ACB1EF222D2_inline(L_33, List_1_get_Count_m15D31E8E97A270919BFDE5C9D73B0ACB1EF222D2_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_00f8_1;
			}
		}

IL_00ec_1:
		{
			List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20* L_35 = __this->___U3CresultU3E5__2_5;
			V_2 = L_35;
			goto IL_04df;
		}

IL_00f8_1:
		{
			Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0* L_36 = (Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0*)il2cpp_codegen_object_new(Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0_il2cpp_TypeInfo_var);
			NullCheck(L_36);
			Dictionary_2__ctor_mA741EA10F01BC609C4C716B775B5521D5240616D(L_36, Dictionary_2__ctor_mA741EA10F01BC609C4C716B775B5521D5240616D_RuntimeMethod_var);
			__this->___U3CnameToRecordMapU3E5__3_6 = L_36;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameToRecordMapU3E5__3_6), (void*)L_36);
			RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* L_37 = V_3;
			NullCheck(L_37);
			List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* L_38;
			L_38 = RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_inline(L_37, RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_RuntimeMethod_var);
			NullCheck(L_38);
			Enumerator_tCA20CEFEDD74E64311F87E16592D56205E548A63 L_39;
			L_39 = List_1_GetEnumerator_m878DFFCC837D7A6BD025D013AD3AA85CC92F1EC1(L_38, List_1_GetEnumerator_m878DFFCC837D7A6BD025D013AD3AA85CC92F1EC1_RuntimeMethod_var);
			V_6 = L_39;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0292_1:
				{// begin finally (depth: 2)
					{
						int32_t L_40 = V_0;
						if ((((int32_t)L_40) >= ((int32_t)0)))
						{
							goto IL_02a3_1;
						}
					}
					{
						Enumerator_Dispose_mA73CB9C54FB99EA1428F1FC98FEFAD3D9158C009((&V_6), Enumerator_Dispose_mA73CB9C54FB99EA1428F1FC98FEFAD3D9158C009_RuntimeMethod_var);
					}

IL_02a3_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_0284_2;
				}

IL_0115_2:
				{
					AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* L_41;
					L_41 = Enumerator_get_Current_mA3299A03C6BE328003715CA88213224DEB5868B3_inline((&V_6), Enumerator_get_Current_mA3299A03C6BE328003715CA88213224DEB5868B3_RuntimeMethod_var);
					V_7 = L_41;
					AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* L_42 = V_7;
					NullCheck(L_42);
					AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* L_43;
					L_43 = AccountKeyPair_get_Account_m1953E7F21E2813875D1B5088D80206F6BA7685B0_inline(L_42, NULL);
					NullCheck(L_43);
					List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_44;
					L_44 = AccountInfo_get_Data_mD10117914E4AB951B8D8F9211496B9EB2DACD646_inline(L_43, NULL);
					NullCheck(L_44);
					String_t* L_45;
					L_45 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_44, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
					il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
					L_46 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_45, NULL);
					V_8 = L_46;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = V_8;
					RecordHeader_tD2952D3C4FFC294B9E534F9091941AA8435ED032* L_48;
					L_48 = RecordHeader_Deserialize_mDD5711EF59842A8E245BE43B94C65E4C5CF7C8BF(L_47, NULL);
					V_9 = L_48;
					RecordHeader_tD2952D3C4FFC294B9E534F9091941AA8435ED032* L_49 = V_9;
					NullCheck(L_49);
					PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_50;
					L_50 = RecordHeader_get_ParentName_m4E10D3CCDC337A87ACEDC73F80BD745AAC948D6C_inline(L_49, NULL);
					il2cpp_codegen_runtime_class_init_inline(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var);
					PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_51 = ((NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_StaticFields*)il2cpp_codegen_static_fields_for(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var))->___SolTLD_6;
					il2cpp_codegen_runtime_class_init_inline(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
					bool L_52;
					L_52 = PublicKey_op_Equality_m0AA9C9DFE5518A02C138793CDC1394B872C92CF9(L_50, L_51, NULL);
					if (!L_52)
					{
						goto IL_0193_2;
					}
				}
				{
					AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* L_53 = V_7;
					NullCheck(L_53);
					String_t* L_54;
					L_54 = AccountKeyPair_get_PublicKey_m339EFDACB82C95204D2F142EFF64DE6B46463DC4_inline(L_53, NULL);
					il2cpp_codegen_runtime_class_init_inline(NameServiceProgram_t58E186B23111F86C0B1E6758CEF0B7DC1685E331_il2cpp_TypeInfo_var);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55;
					L_55 = NameServiceProgram_ComputeHashedName_m509D6763A130F5226D9D4BC2466E8006AE545D1D(L_54, NULL);
					ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_56;
					L_56 = ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644(L_55, ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
					il2cpp_codegen_runtime_class_init_inline(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var);
					PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_57 = ((NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_StaticFields*)il2cpp_codegen_static_fields_for(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var))->___ReverseSolNameClass_7;
					PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_58;
					L_58 = NameServiceProgram_DeriveNameAccountKey_mFD4537BEAD96B13112F083D4C0F851CC47821CCC(L_56, L_57, (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)NULL, NULL);
					V_10 = L_58;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_8;
					NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* L_60;
					L_60 = NameRecord_Deserialize_m5085BF3B10D6B694503FF76374276B2B48AE2F84(L_59, NULL);
					V_11 = L_60;
					Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0* L_61 = __this->___U3CnameToRecordMapU3E5__3_6;
					PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_62 = V_10;
					il2cpp_codegen_runtime_class_init_inline(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
					String_t* L_63;
					L_63 = PublicKey_op_Implicit_m384B7ABBC96BB94E492A1F7EDD3EA30EFCB38921(L_62, NULL);
					NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* L_64 = V_11;
					NullCheck(L_61);
					Dictionary_2_Add_m558551C4C63F0375FA93F4C24EB89BC407203EF7(L_61, L_63, L_64, Dictionary_2_Add_m558551C4C63F0375FA93F4C24EB89BC407203EF7_RuntimeMethod_var);
					goto IL_0284_2;
				}

IL_0193_2:
				{
					RecordHeader_tD2952D3C4FFC294B9E534F9091941AA8435ED032* L_65 = V_9;
					NullCheck(L_65);
					PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_66;
					L_66 = RecordHeader_get_ParentName_m4E10D3CCDC337A87ACEDC73F80BD745AAC948D6C_inline(L_65, NULL);
					il2cpp_codegen_runtime_class_init_inline(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var);
					PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_67 = ((NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_StaticFields*)il2cpp_codegen_static_fields_for(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var))->___TwitterTLD_4;
					il2cpp_codegen_runtime_class_init_inline(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
					bool L_68;
					L_68 = PublicKey_op_Equality_m0AA9C9DFE5518A02C138793CDC1394B872C92CF9(L_66, L_67, NULL);
					if (!L_68)
					{
						goto IL_0212_2;
					}
				}
				{
					RecordHeader_tD2952D3C4FFC294B9E534F9091941AA8435ED032* L_69 = V_9;
					NullCheck(L_69);
					PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_70;
					L_70 = RecordHeader_get_Class_m334C541ACD67621BC25D1845D590C31E007D0B41_inline(L_69, NULL);
					il2cpp_codegen_runtime_class_init_inline(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var);
					PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_71 = ((NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_StaticFields*)il2cpp_codegen_static_fields_for(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var))->___ReverseTwitterNameClass_5;
					il2cpp_codegen_runtime_class_init_inline(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
					bool L_72;
					L_72 = PublicKey_op_Equality_m0AA9C9DFE5518A02C138793CDC1394B872C92CF9(L_70, L_71, NULL);
					if (!L_72)
					{
						goto IL_01e7_2;
					}
				}
				{
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = V_8;
					ReverseTwitterRecord_t9EF7949A5194ECA8B95909E3F5E81230C9C57BCE* L_74;
					L_74 = ReverseTwitterRecord_Deserialize_mB4F925B334BBDE24A4DB83C85557E6445B08F18A(L_73, NULL);
					V_12 = L_74;
					ReverseTwitterRecord_t9EF7949A5194ECA8B95909E3F5E81230C9C57BCE* L_75 = V_12;
					AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* L_76 = V_7;
					NullCheck(L_76);
					String_t* L_77;
					L_77 = AccountKeyPair_get_PublicKey_m339EFDACB82C95204D2F142EFF64DE6B46463DC4_inline(L_76, NULL);
					PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_78 = (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)il2cpp_codegen_object_new(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
					NullCheck(L_78);
					PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90(L_78, L_77, NULL);
					NullCheck(L_75);
					RecordBase_set_AccountAddress_m85E14042052E6E5422CED56BAC68D37E1B2E73F4_inline(L_75, L_78, NULL);
					List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20* L_79 = __this->___U3CresultU3E5__2_5;
					ReverseTwitterRecord_t9EF7949A5194ECA8B95909E3F5E81230C9C57BCE* L_80 = V_12;
					NullCheck(L_79);
					List_1_Add_m9C1BA4C90D27B56082EDE7E810EF3594FC57B34C_inline(L_79, L_80, List_1_Add_m9C1BA4C90D27B56082EDE7E810EF3594FC57B34C_RuntimeMethod_var);
					goto IL_0284_2;
				}

IL_01e7_2:
				{
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = V_8;
					NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* L_82;
					L_82 = NameRecord_Deserialize_m5085BF3B10D6B694503FF76374276B2B48AE2F84(L_81, NULL);
					V_13 = L_82;
					NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* L_83 = V_13;
					AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* L_84 = V_7;
					NullCheck(L_84);
					String_t* L_85;
					L_85 = AccountKeyPair_get_PublicKey_m339EFDACB82C95204D2F142EFF64DE6B46463DC4_inline(L_84, NULL);
					PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_86 = (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)il2cpp_codegen_object_new(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
					NullCheck(L_86);
					PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90(L_86, L_85, NULL);
					NullCheck(L_83);
					RecordBase_set_AccountAddress_m85E14042052E6E5422CED56BAC68D37E1B2E73F4_inline(L_83, L_86, NULL);
					List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20* L_87 = __this->___U3CresultU3E5__2_5;
					NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* L_88 = V_13;
					NullCheck(L_87);
					List_1_Add_m9C1BA4C90D27B56082EDE7E810EF3594FC57B34C_inline(L_87, L_88, List_1_Add_m9C1BA4C90D27B56082EDE7E810EF3594FC57B34C_RuntimeMethod_var);
					goto IL_0284_2;
				}

IL_0212_2:
				{
					RecordHeader_tD2952D3C4FFC294B9E534F9091941AA8435ED032* L_89 = V_9;
					NullCheck(L_89);
					PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_90;
					L_90 = RecordHeader_get_ParentName_m4E10D3CCDC337A87ACEDC73F80BD745AAC948D6C_inline(L_89, NULL);
					il2cpp_codegen_runtime_class_init_inline(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var);
					PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_91 = ((NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_StaticFields*)il2cpp_codegen_static_fields_for(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var))->___TokenTLD_3;
					il2cpp_codegen_runtime_class_init_inline(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
					bool L_92;
					L_92 = PublicKey_op_Equality_m0AA9C9DFE5518A02C138793CDC1394B872C92CF9(L_90, L_91, NULL);
					if (!L_92)
					{
						goto IL_0284_2;
					}
				}
				{
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = V_8;
					NullCheck(L_93);
					if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_93)->max_length))) == ((uint32_t)((int32_t)224)))))
					{
						goto IL_025b_2;
					}
				}
				{
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = V_8;
					ReverseTokenNameRecord_t3CC577751BA616DC34AB1A8AC6718B6604D55330* L_95;
					L_95 = ReverseTokenNameRecord_Deserialize_mB283C78A090072606902593F8B37571565CA2C73(L_94, NULL);
					V_14 = L_95;
					ReverseTokenNameRecord_t3CC577751BA616DC34AB1A8AC6718B6604D55330* L_96 = V_14;
					AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* L_97 = V_7;
					NullCheck(L_97);
					String_t* L_98;
					L_98 = AccountKeyPair_get_PublicKey_m339EFDACB82C95204D2F142EFF64DE6B46463DC4_inline(L_97, NULL);
					PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_99 = (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)il2cpp_codegen_object_new(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
					NullCheck(L_99);
					PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90(L_99, L_98, NULL);
					NullCheck(L_96);
					RecordBase_set_AccountAddress_m85E14042052E6E5422CED56BAC68D37E1B2E73F4_inline(L_96, L_99, NULL);
					List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20* L_100 = __this->___U3CresultU3E5__2_5;
					ReverseTokenNameRecord_t3CC577751BA616DC34AB1A8AC6718B6604D55330* L_101 = V_14;
					NullCheck(L_100);
					List_1_Add_m9C1BA4C90D27B56082EDE7E810EF3594FC57B34C_inline(L_100, L_101, List_1_Add_m9C1BA4C90D27B56082EDE7E810EF3594FC57B34C_RuntimeMethod_var);
					goto IL_0284_2;
				}

IL_025b_2:
				{
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = V_8;
					TokenNameRecord_t641AD3F42E45A18FDE4DED0FDED5DA7B6719722B* L_103;
					L_103 = TokenNameRecord_Deserialize_m21B5F8CAF846C9E45538B7191864A925F0B19356(L_102, NULL);
					V_15 = L_103;
					TokenNameRecord_t641AD3F42E45A18FDE4DED0FDED5DA7B6719722B* L_104 = V_15;
					AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* L_105 = V_7;
					NullCheck(L_105);
					String_t* L_106;
					L_106 = AccountKeyPair_get_PublicKey_m339EFDACB82C95204D2F142EFF64DE6B46463DC4_inline(L_105, NULL);
					PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_107 = (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)il2cpp_codegen_object_new(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
					NullCheck(L_107);
					PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90(L_107, L_106, NULL);
					NullCheck(L_104);
					RecordBase_set_AccountAddress_m85E14042052E6E5422CED56BAC68D37E1B2E73F4_inline(L_104, L_107, NULL);
					List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20* L_108 = __this->___U3CresultU3E5__2_5;
					TokenNameRecord_t641AD3F42E45A18FDE4DED0FDED5DA7B6719722B* L_109 = V_15;
					NullCheck(L_108);
					List_1_Add_m9C1BA4C90D27B56082EDE7E810EF3594FC57B34C_inline(L_108, L_109, List_1_Add_m9C1BA4C90D27B56082EDE7E810EF3594FC57B34C_RuntimeMethod_var);
				}

IL_0284_2:
				{
					bool L_110;
					L_110 = Enumerator_MoveNext_m212902D3DB0489F190C77FCCC425803052CE4B83((&V_6), Enumerator_MoveNext_m212902D3DB0489F190C77FCCC425803052CE4B83_RuntimeMethod_var);
					if (L_110)
					{
						goto IL_0115_2;
					}
				}
				{
					goto IL_02a4_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_02a4_1:
		{
			Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0* L_111 = __this->___U3CnameToRecordMapU3E5__3_6;
			NullCheck(L_111);
			KeyCollection_t3294E6AE549004233E2735FF3EB14BB195E75EF5* L_112;
			L_112 = Dictionary_2_get_Keys_m167EB406ED5FE46A57B5F626EB989CD30D59B3CB(L_111, Dictionary_2_get_Keys_m167EB406ED5FE46A57B5F626EB989CD30D59B3CB_RuntimeMethod_var);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_113;
			L_113 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131(L_112, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
			__this->___U3CreverseNameAddressesU3E5__4_7 = L_113;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreverseNameAddressesU3E5__4_7), (void*)L_113);
			U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA* L_114 = __this->___U3CU3E8__1_4;
			List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* L_115 = (List_1_t87857C0E564D1397226E391D7090B146B2C66BCF*)il2cpp_codegen_object_new(List_1_t87857C0E564D1397226E391D7090B146B2C66BCF_il2cpp_TypeInfo_var);
			NullCheck(L_115);
			List_1__ctor_mD1379AAB2C1B81B9C692C424867309B65C4042BE(L_115, List_1__ctor_mD1379AAB2C1B81B9C692C424867309B65C4042BE_RuntimeMethod_var);
			NullCheck(L_114);
			L_114->___accInfos_0 = L_115;
			Il2CppCodeGenWriteBarrier((void**)(&L_114->___accInfos_0), (void*)L_115);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_116 = __this->___U3CreverseNameAddressesU3E5__4_7;
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_117 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
			NullCheck(L_117);
			List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_117, L_116, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
			__this->___U3CaddressesCopyU3E5__5_8 = L_117;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaddressesCopyU3E5__5_8), (void*)L_117);
			goto IL_03ea_1;
		}

IL_02e0_1:
		{
			V_16 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL;
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_118 = __this->___U3CaddressesCopyU3E5__5_8;
			NullCheck(L_118);
			int32_t L_119;
			L_119 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_118, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
			if ((((int32_t)L_119) <= ((int32_t)((int32_t)100))))
			{
				goto IL_0320_1;
			}
		}
		{
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_120 = __this->___U3CaddressesCopyU3E5__5_8;
			RuntimeObject* L_121;
			L_121 = Enumerable_Take_TisString_t_m31A30189361F02FD6807DA3F2CDCFD4109B79487(L_120, ((int32_t)100), Enumerable_Take_TisString_t_m31A30189361F02FD6807DA3F2CDCFD4109B79487_RuntimeMethod_var);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_122;
			L_122 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131(L_121, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
			V_16 = L_122;
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_123 = __this->___U3CaddressesCopyU3E5__5_8;
			RuntimeObject* L_124;
			L_124 = Enumerable_Skip_TisString_t_m54DC11CB444A792E1F6F8226CC15482137C4522D(L_123, ((int32_t)100), Enumerable_Skip_TisString_t_m54DC11CB444A792E1F6F8226CC15482137C4522D_RuntimeMethod_var);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_125;
			L_125 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131(L_124, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
			__this->___U3CaddressesCopyU3E5__5_8 = L_125;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaddressesCopyU3E5__5_8), (void*)L_125);
			goto IL_0338_1;
		}

IL_0320_1:
		{
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_126 = __this->___U3CaddressesCopyU3E5__5_8;
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_127 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
			NullCheck(L_127);
			List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_127, L_126, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
			V_16 = L_127;
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_128 = __this->___U3CaddressesCopyU3E5__5_8;
			NullCheck(L_128);
			List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_128, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		}

IL_0338_1:
		{
			NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* L_129 = V_1;
			NullCheck(L_129);
			RuntimeObject* L_130;
			L_130 = BaseClient_get_RpcClient_mDC99C59F85131FF26A4B3A336BED28115177FAE4_inline(L_129, NULL);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_131 = V_16;
			NullCheck(L_130);
			Task_1_t1BB72EBC3EC5F4B31EFDCF30D3E0283AE1B50D14* L_132;
			L_132 = InterfaceFuncInvoker2< Task_1_t1BB72EBC3EC5F4B31EFDCF30D3E0283AE1B50D14*, RuntimeObject*, int32_t >::Invoke(67 /* System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>>> Solana.Unity.Rpc.IRpcClient::GetMultipleAccountsAsync(System.Collections.Generic.IList`1<System.String>,Solana.Unity.Rpc.Types.Commitment) */, IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var, L_130, L_131, 1);
			NullCheck(L_132);
			TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797 L_133;
			L_133 = Task_1_GetAwaiter_m3D1CF4FDE1E2A178F3D909A364D2A376397E032E(L_132, Task_1_GetAwaiter_m3D1CF4FDE1E2A178F3D909A364D2A376397E032E_RuntimeMethod_var);
			V_18 = L_133;
			bool L_134;
			L_134 = TaskAwaiter_1_get_IsCompleted_m130A03EA04C60F2AA151449041EBEEF0E56A6093((&V_18), TaskAwaiter_1_get_IsCompleted_m130A03EA04C60F2AA151449041EBEEF0E56A6093_RuntimeMethod_var);
			if (L_134)
			{
				goto IL_0397_1;
			}
		}
		{
			int32_t L_135 = 1;
			V_0 = L_135;
			__this->___U3CU3E1__state_0 = L_135;
			TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797 L_136 = V_18;
			__this->___U3CU3Eu__2_10 = L_136;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_10))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t9844139D1A5FE0FC170332C2CA8FE8D03913B7E9* L_137 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797_TisU3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120_m9410AA5342417FD49DEE8E825C0ECB559E6AD0F3(L_137, (&V_18), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797_TisU3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120_m9410AA5342417FD49DEE8E825C0ECB559E6AD0F3_RuntimeMethod_var);
			goto IL_0516;
		}

IL_037a_1:
		{
			TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797 L_138 = __this->___U3CU3Eu__2_10;
			V_18 = L_138;
			TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797* L_139 = (&__this->___U3CU3Eu__2_10);
			il2cpp_codegen_initobj(L_139, sizeof(TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797));
			int32_t L_140 = (-1);
			V_0 = L_140;
			__this->___U3CU3E1__state_0 = L_140;
		}

IL_0397_1:
		{
			RequestResult_1_tB91845DC2F7F5A2669DC616168B28DCAECB8BC40* L_141;
			L_141 = TaskAwaiter_1_GetResult_m07B69DA5865FD41C20FCF083929ABB721AFF06C8((&V_18), TaskAwaiter_1_GetResult_m07B69DA5865FD41C20FCF083929ABB721AFF06C8_RuntimeMethod_var);
			V_17 = L_141;
			RequestResult_1_tB91845DC2F7F5A2669DC616168B28DCAECB8BC40* L_142 = V_17;
			NullCheck(L_142);
			bool L_143;
			L_143 = RequestResult_1_get_WasSuccessful_m65314331FDC4692E1360229C838E8F24188A4AB8(L_142, RequestResult_1_get_WasSuccessful_m65314331FDC4692E1360229C838E8F24188A4AB8_RuntimeMethod_var);
			if (!L_143)
			{
				goto IL_03fb_1;
			}
		}
		{
			RequestResult_1_tB91845DC2F7F5A2669DC616168B28DCAECB8BC40* L_144 = V_17;
			NullCheck(L_144);
			ResponseValue_1_tCF55E6F19763014775060D2267A55A89D56559E7* L_145;
			L_145 = RequestResult_1_get_Result_m1240E7E1D9842870C21DCFB7C93A3CFF04950040_inline(L_144, RequestResult_1_get_Result_m1240E7E1D9842870C21DCFB7C93A3CFF04950040_RuntimeMethod_var);
			NullCheck(L_145);
			List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* L_146;
			L_146 = ResponseValue_1_get_Value_m8862714A428375294111D7D44CF0476EE7DB1A0C_inline(L_145, ResponseValue_1_get_Value_m8862714A428375294111D7D44CF0476EE7DB1A0C_RuntimeMethod_var);
			U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA* L_147 = __this->___U3CU3E8__1_4;
			NullCheck(L_147);
			Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E* L_148 = L_147->___U3CU3E9__0_1;
			Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E* L_149 = L_148;
			G_B36_0 = L_149;
			G_B36_1 = L_146;
			if (L_149)
			{
				G_B37_0 = L_149;
				G_B37_1 = L_146;
				goto IL_03e5_1;
			}
		}
		{
			U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA* L_150 = __this->___U3CU3E8__1_4;
			U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA* L_151 = __this->___U3CU3E8__1_4;
			Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E* L_152 = (Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E*)il2cpp_codegen_object_new(Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E_il2cpp_TypeInfo_var);
			NullCheck(L_152);
			Action_1__ctor_m61235F2EDD6BC4CCC72DA59B713E6324272E9B47(L_152, L_151, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CGetAllNamesByOwnerAsyncU3Eb__0_mB3E9BC6AC697485F8AA37FAE1B0E9DE44A138954_RuntimeMethod_var), NULL);
			Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E* L_153 = L_152;
			V_19 = L_153;
			NullCheck(L_150);
			L_150->___U3CU3E9__0_1 = L_153;
			Il2CppCodeGenWriteBarrier((void**)(&L_150->___U3CU3E9__0_1), (void*)L_153);
			Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E* L_154 = V_19;
			G_B37_0 = L_154;
			G_B37_1 = G_B36_1;
		}

IL_03e5_1:
		{
			NullCheck(G_B37_1);
			List_1_ForEach_m4B9E1BE58DEB75E957970E67BE0AA7C91EE186D4(G_B37_1, G_B37_0, List_1_ForEach_m4B9E1BE58DEB75E957970E67BE0AA7C91EE186D4_RuntimeMethod_var);
		}

IL_03ea_1:
		{
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_155 = __this->___U3CaddressesCopyU3E5__5_8;
			NullCheck(L_155);
			int32_t L_156;
			L_156 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_155, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
			if ((((int32_t)L_156) > ((int32_t)0)))
			{
				goto IL_02e0_1;
			}
		}

IL_03fb_1:
		{
			V_20 = 0;
			goto IL_0483_1;
		}

IL_0403_1:
		{
			Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0* L_157 = __this->___U3CnameToRecordMapU3E5__3_6;
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_158 = __this->___U3CreverseNameAddressesU3E5__4_7;
			int32_t L_159 = V_20;
			NullCheck(L_158);
			String_t* L_160;
			L_160 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_158, L_159, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
			NullCheck(L_157);
			NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* L_161;
			L_161 = Dictionary_2_get_Item_m0B591E92CA44A3D0894F622FC6ABA8699877B8AF(L_157, L_160, Dictionary_2_get_Item_m0B591E92CA44A3D0894F622FC6ABA8699877B8AF_RuntimeMethod_var);
			V_21 = L_161;
			U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA* L_162 = __this->___U3CU3E8__1_4;
			NullCheck(L_162);
			List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* L_163 = L_162->___accInfos_0;
			int32_t L_164 = V_20;
			NullCheck(L_163);
			AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* L_165;
			L_165 = List_1_get_Item_mE02DFBC2ACB78F804D7001DDC9360FF60EF6EC37(L_163, L_164, List_1_get_Item_mE02DFBC2ACB78F804D7001DDC9360FF60EF6EC37_RuntimeMethod_var);
			V_22 = L_165;
			AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* L_166 = V_22;
			if (!L_166)
			{
				goto IL_047d_1;
			}
		}
		{
			AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* L_167 = V_22;
			NullCheck(L_167);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_168;
			L_168 = AccountInfo_get_Data_mD10117914E4AB951B8D8F9211496B9EB2DACD646_inline(L_167, NULL);
			NullCheck(L_168);
			String_t* L_169;
			L_169 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_168, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_170;
			L_170 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_169, NULL);
			ReverseNameRecord_t58FFC94FBBE06D572ED02190EBD4AB2CF3635A67* L_171;
			L_171 = ReverseNameRecord_Deserialize_m4CCBCC65E1CCBCB547FB7035C7E997E37FD4C063(L_170, NULL);
			V_23 = L_171;
			ReverseNameRecord_t58FFC94FBBE06D572ED02190EBD4AB2CF3635A67* L_172 = V_23;
			NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* L_173 = V_21;
			NullCheck(L_172);
			ReverseNameRecord_set_Value_m8E5F5E61BED1A76033ACBC97B843DA9F1F99966A_inline(L_172, L_173, NULL);
			ReverseNameRecord_t58FFC94FBBE06D572ED02190EBD4AB2CF3635A67* L_174 = V_23;
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_175 = __this->___U3CreverseNameAddressesU3E5__4_7;
			int32_t L_176 = V_20;
			NullCheck(L_175);
			String_t* L_177;
			L_177 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_175, L_176, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_178 = (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)il2cpp_codegen_object_new(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
			NullCheck(L_178);
			PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90(L_178, L_177, NULL);
			NullCheck(L_174);
			RecordBase_set_AccountAddress_m85E14042052E6E5422CED56BAC68D37E1B2E73F4_inline(L_174, L_178, NULL);
			List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20* L_179 = __this->___U3CresultU3E5__2_5;
			ReverseNameRecord_t58FFC94FBBE06D572ED02190EBD4AB2CF3635A67* L_180 = V_23;
			NullCheck(L_179);
			List_1_Add_m9C1BA4C90D27B56082EDE7E810EF3594FC57B34C_inline(L_179, L_180, List_1_Add_m9C1BA4C90D27B56082EDE7E810EF3594FC57B34C_RuntimeMethod_var);
		}

IL_047d_1:
		{
			int32_t L_181 = V_20;
			V_20 = ((int32_t)il2cpp_codegen_add(L_181, 1));
		}

IL_0483_1:
		{
			int32_t L_182 = V_20;
			U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA* L_183 = __this->___U3CU3E8__1_4;
			NullCheck(L_183);
			List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* L_184 = L_183->___accInfos_0;
			NullCheck(L_184);
			int32_t L_185;
			L_185 = List_1_get_Count_m025CF4F74A24D16544358D8836010613DCC6F164_inline(L_184, List_1_get_Count_m025CF4F74A24D16544358D8836010613DCC6F164_RuntimeMethod_var);
			if ((((int32_t)L_182) < ((int32_t)L_185)))
			{
				goto IL_0403_1;
			}
		}
		{
			List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20* L_186 = __this->___U3CresultU3E5__2_5;
			V_2 = L_186;
			goto IL_04df;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_04a3;
		}
		throw e;
	}

CATCH_04a3:
	{// begin catch(System.Exception)
		V_24 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_4 = (U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)(U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA*)NULL);
		__this->___U3CresultU3E5__2_5 = (List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__2_5), (void*)(List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20*)NULL);
		__this->___U3CnameToRecordMapU3E5__3_6 = (Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameToRecordMapU3E5__3_6), (void*)(Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0*)NULL);
		__this->___U3CreverseNameAddressesU3E5__4_7 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreverseNameAddressesU3E5__4_7), (void*)(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL);
		__this->___U3CaddressesCopyU3E5__5_8 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaddressesCopyU3E5__5_8), (void*)(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL);
		AsyncTaskMethodBuilder_1_t9844139D1A5FE0FC170332C2CA8FE8D03913B7E9* L_187 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_188 = V_24;
		AsyncTaskMethodBuilder_1_SetException_m724C4B3497A58289AA1C05FFEF4D9191AFE6E864(L_187, L_188, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m724C4B3497A58289AA1C05FFEF4D9191AFE6E864_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0516;
	}// end catch (depth: 1)

IL_04df:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_4 = (U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)(U3CU3Ec__DisplayClass6_0_tCA8C9BE6F43C9F56490F10E7B0FC56810D69A8FA*)NULL);
		__this->___U3CresultU3E5__2_5 = (List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresultU3E5__2_5), (void*)(List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20*)NULL);
		__this->___U3CnameToRecordMapU3E5__3_6 = (Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameToRecordMapU3E5__3_6), (void*)(Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0*)NULL);
		__this->___U3CreverseNameAddressesU3E5__4_7 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreverseNameAddressesU3E5__4_7), (void*)(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL);
		__this->___U3CaddressesCopyU3E5__5_8 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaddressesCopyU3E5__5_8), (void*)(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL);
		AsyncTaskMethodBuilder_1_t9844139D1A5FE0FC170332C2CA8FE8D03913B7E9* L_189 = (&__this->___U3CU3Et__builder_1);
		List_1_t3B3FDBE9904F4FFA5627EBAB4F537C95EA4CDB20* L_190 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m2BA3927F679F9CDD0CF9845FACBA23C8FF642E4A(L_189, L_190, AsyncTaskMethodBuilder_1_SetResult_m2BA3927F679F9CDD0CF9845FACBA23C8FF642E4A_RuntimeMethod_var);
	}

IL_0516:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetAllNamesByOwnerAsyncU3Ed__6_MoveNext_m1C58525D3EEFED910EF15108F6AA9ED3EADF46C9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120*>(__this + _offset);
	U3CGetAllNamesByOwnerAsyncU3Ed__6_MoveNext_m1C58525D3EEFED910EF15108F6AA9ED3EADF46C9(_thisAdjusted, method);
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetAllNamesByOwnerAsync>d__6::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllNamesByOwnerAsyncU3Ed__6_SetStateMachine_m99FE703DA5123279FCE262FD24D30B417269AA12 (U3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mBC2AC49A9D20D25CB016F2C1B65C62D412735AEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t9844139D1A5FE0FC170332C2CA8FE8D03913B7E9* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mBC2AC49A9D20D25CB016F2C1B65C62D412735AEF(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mBC2AC49A9D20D25CB016F2C1B65C62D412735AEF_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetAllNamesByOwnerAsyncU3Ed__6_SetStateMachine_m99FE703DA5123279FCE262FD24D30B417269AA12_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetAllNamesByOwnerAsyncU3Ed__6_tB51B9FA827E68DF0C8F0673BE5C1101EC95A9120*>(__this + _offset);
	U3CGetAllNamesByOwnerAsyncU3Ed__6_SetStateMachine_m99FE703DA5123279FCE262FD24D30B417269AA12(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetMintFromTokenTickerAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetMintFromTokenTickerAsyncU3Ed__9_MoveNext_mF43B80FE3D3629D46153D56DBBED30F206B59F1E (U3CGetMintFromTokenTickerAsyncU3Ed__9_t7319B18844C922C16D3D9A79677CFA275C1F0463* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487_TisU3CGetMintFromTokenTickerAsyncU3Ed__9_t7319B18844C922C16D3D9A79677CFA275C1F0463_m3B8F8319D63D339DBE2025FEE9E00A9D939B482C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mE2749CB23DC1A297B52CCE55698420F52D2AFA2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameServiceClient_GetAccountAndSetMetadata_TisReverseTokenNameRecord_t3CC577751BA616DC34AB1A8AC6718B6604D55330_m6669A159A86E5DB3DF4B90C383A0E5A34DBFE0C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameServiceProgram_t58E186B23111F86C0B1E6758CEF0B7DC1685E331_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m444A9A56D3C3E118585C450E1A8FEBCED57FC967_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m64DD448EF4352CF0DBABD33D984F39FD7762124C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mE458B0CAF95BA8297F79CEA393A540C010316277_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* V_1 = NULL;
	AccountResultWrapper_1_tE2B867F9693F4ACE6D4F826758E6C69467BA1B2F* V_2 = NULL;
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* V_3 = NULL;
	TaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006b_1;
			}
		}
		{
			String_t* L_3 = __this->___tokenTicker_2;
			il2cpp_codegen_runtime_class_init_inline(NameServiceProgram_t58E186B23111F86C0B1E6758CEF0B7DC1685E331_il2cpp_TypeInfo_var);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
			L_4 = NameServiceProgram_ComputeHashedName_m509D6763A130F5226D9D4BC2466E8006AE545D1D(L_3, NULL);
			ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
			L_5 = ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644(L_4, ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_6 = ((NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_StaticFields*)il2cpp_codegen_static_fields_for(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var))->___TokenTLD_3;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_7;
			L_7 = NameServiceProgram_DeriveNameAccountKey_mFD4537BEAD96B13112F083D4C0F851CC47821CCC(L_5, (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)NULL, L_6, NULL);
			V_3 = L_7;
			NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* L_8 = V_1;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_9 = V_3;
			String_t* L_10 = __this->___tokenTicker_2;
			NullCheck(L_8);
			Task_1_t458F9EF3E716B074C040C0E7B28A60E76B2A22A2* L_11;
			L_11 = NameServiceClient_GetAccountAndSetMetadata_TisReverseTokenNameRecord_t3CC577751BA616DC34AB1A8AC6718B6604D55330_m6669A159A86E5DB3DF4B90C383A0E5A34DBFE0C7(L_8, L_9, L_10, NameServiceClient_GetAccountAndSetMetadata_TisReverseTokenNameRecord_t3CC577751BA616DC34AB1A8AC6718B6604D55330_m6669A159A86E5DB3DF4B90C383A0E5A34DBFE0C7_RuntimeMethod_var);
			NullCheck(L_11);
			TaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487 L_12;
			L_12 = Task_1_GetAwaiter_mE458B0CAF95BA8297F79CEA393A540C010316277(L_11, Task_1_GetAwaiter_mE458B0CAF95BA8297F79CEA393A540C010316277_RuntimeMethod_var);
			V_4 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_1_get_IsCompleted_m64DD448EF4352CF0DBABD33D984F39FD7762124C((&V_4), TaskAwaiter_1_get_IsCompleted_m64DD448EF4352CF0DBABD33D984F39FD7762124C_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0088_1;
			}
		}
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
			TaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487 L_15 = V_4;
			__this->___U3CU3Eu__1_4 = L_15;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t6F9AE825DBBFB690B34CF80CD6429CA8B8046D70* L_16 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487_TisU3CGetMintFromTokenTickerAsyncU3Ed__9_t7319B18844C922C16D3D9A79677CFA275C1F0463_m3B8F8319D63D339DBE2025FEE9E00A9D939B482C(L_16, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487_TisU3CGetMintFromTokenTickerAsyncU3Ed__9_t7319B18844C922C16D3D9A79677CFA275C1F0463_m3B8F8319D63D339DBE2025FEE9E00A9D939B482C_RuntimeMethod_var);
			goto IL_00bf;
		}

IL_006b_1:
		{
			TaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487 L_17 = __this->___U3CU3Eu__1_4;
			V_4 = L_17;
			TaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487* L_18 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_1_t79CE683A005C28D62ED349F1E93AC325FC7C5487));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
		}

IL_0088_1:
		{
			AccountResultWrapper_1_tE2B867F9693F4ACE6D4F826758E6C69467BA1B2F* L_20;
			L_20 = TaskAwaiter_1_GetResult_m444A9A56D3C3E118585C450E1A8FEBCED57FC967((&V_4), TaskAwaiter_1_GetResult_m444A9A56D3C3E118585C450E1A8FEBCED57FC967_RuntimeMethod_var);
			V_2 = L_20;
			goto IL_00ab;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0092;
		}
		throw e;
	}

CATCH_0092:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t6F9AE825DBBFB690B34CF80CD6429CA8B8046D70* L_21 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_22 = V_5;
		AsyncTaskMethodBuilder_1_SetException_mB66655D1A52205811514C6DED0351093663BCADE(L_21, L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB66655D1A52205811514C6DED0351093663BCADE_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bf;
	}// end catch (depth: 1)

IL_00ab:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t6F9AE825DBBFB690B34CF80CD6429CA8B8046D70* L_23 = (&__this->___U3CU3Et__builder_1);
		AccountResultWrapper_1_tE2B867F9693F4ACE6D4F826758E6C69467BA1B2F* L_24 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mE2749CB23DC1A297B52CCE55698420F52D2AFA2E(L_23, L_24, AsyncTaskMethodBuilder_1_SetResult_mE2749CB23DC1A297B52CCE55698420F52D2AFA2E_RuntimeMethod_var);
	}

IL_00bf:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetMintFromTokenTickerAsyncU3Ed__9_MoveNext_mF43B80FE3D3629D46153D56DBBED30F206B59F1E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetMintFromTokenTickerAsyncU3Ed__9_t7319B18844C922C16D3D9A79677CFA275C1F0463* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetMintFromTokenTickerAsyncU3Ed__9_t7319B18844C922C16D3D9A79677CFA275C1F0463*>(__this + _offset);
	U3CGetMintFromTokenTickerAsyncU3Ed__9_MoveNext_mF43B80FE3D3629D46153D56DBBED30F206B59F1E(_thisAdjusted, method);
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetMintFromTokenTickerAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetMintFromTokenTickerAsyncU3Ed__9_SetStateMachine_m1E9FE28213B92B84AEE1063C069168138016E15F (U3CGetMintFromTokenTickerAsyncU3Ed__9_t7319B18844C922C16D3D9A79677CFA275C1F0463* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m199C2DC8F3E24D7AD5D2F78825431903EC7EF576_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t6F9AE825DBBFB690B34CF80CD6429CA8B8046D70* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m199C2DC8F3E24D7AD5D2F78825431903EC7EF576(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m199C2DC8F3E24D7AD5D2F78825431903EC7EF576_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetMintFromTokenTickerAsyncU3Ed__9_SetStateMachine_m1E9FE28213B92B84AEE1063C069168138016E15F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetMintFromTokenTickerAsyncU3Ed__9_t7319B18844C922C16D3D9A79677CFA275C1F0463* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetMintFromTokenTickerAsyncU3Ed__9_t7319B18844C922C16D3D9A79677CFA275C1F0463*>(__this + _offset);
	U3CGetMintFromTokenTickerAsyncU3Ed__9_SetStateMachine_m1E9FE28213B92B84AEE1063C069168138016E15F(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetNamesFromAddressAsync>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNamesFromAddressAsyncU3Ed__13_MoveNext_mD7C0404CD3291F1EADA402927D980A1063195DB8 (U3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E_TisU3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5_m0FDD92A468D4F25EE80914E43285C8D2D174B9DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797_TisU3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5_m49E938E30859EF34D43A56C558E4A34990A3A882_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m5631A20455F2817128DD71054AB55AFF5270B407_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m558551C4C63F0375FA93F4C24EB89BC407203EF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA741EA10F01BC609C4C716B775B5521D5240616D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m0B591E92CA44A3D0894F622FC6ABA8699877B8AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m167EB406ED5FE46A57B5F626EB989CD30D59B3CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisString_t_m54DC11CB444A792E1F6F8226CC15482137C4522D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Take_TisString_t_m31A30189361F02FD6807DA3F2CDCFD4109B79487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA73CB9C54FB99EA1428F1FC98FEFAD3D9158C009_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m212902D3DB0489F190C77FCCC425803052CE4B83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA3299A03C6BE328003715CA88213224DEB5868B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5853407B96D51DD3FB23DD11F09732938F42324F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDBE0D9EBCE9CFD5E2CD155C9EBBCB01F5917EAEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_m4B9E1BE58DEB75E957970E67BE0AA7C91EE186D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m878DFFCC837D7A6BD025D013AD3AA85CC92F1EC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m07CDC59B9C8CDABDC1B85B99092EBE4BFB442152_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD1379AAB2C1B81B9C692C424867309B65C4042BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD34D580E3646C83FFD5E294911A5FBB7F43AA5AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m025CF4F74A24D16544358D8836010613DCC6F164_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m15D31E8E97A270919BFDE5C9D73B0ACB1EF222D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE02DFBC2ACB78F804D7001DDC9360FF60EF6EC37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t87857C0E564D1397226E391D7090B146B2C66BCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameServiceProgram_t58E186B23111F86C0B1E6758CEF0B7DC1685E331_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestResult_1_get_Result_m1240E7E1D9842870C21DCFB7C93A3CFF04950040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestResult_1_get_WasSuccessful_m2CFEEC2DF7AD7E23376D5707253E8930614C07AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestResult_1_get_WasSuccessful_m65314331FDC4692E1360229C838E8F24188A4AB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseValue_1_get_Value_m8862714A428375294111D7D44CF0476EE7DB1A0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m07B69DA5865FD41C20FCF083929ABB721AFF06C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mF52A04B9F0E80E7AE6C48AE5F1E2988DEE3255F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m130A03EA04C60F2AA151449041EBEEF0E56A6093_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m8C5717EA2B2DCE9A0429F692F77AC97A8C2214E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m3D1CF4FDE1E2A178F3D909A364D2A376397E032E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m80463985CCBAE2B621B7B4F5DAF2586FA663B3E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CGetNamesFromAddressAsyncU3Eb__0_m5C4B78737BAED97AC3E9804F97191455D9D1F752_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* V_1 = NULL;
	List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917* V_2 = NULL;
	RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* V_3 = NULL;
	TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Enumerator_tCA20CEFEDD74E64311F87E16592D56205E548A63 V_6;
	memset((&V_6), 0, sizeof(V_6));
	NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* V_7 = NULL;
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* V_8 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_9 = NULL;
	RequestResult_1_tB91845DC2F7F5A2669DC616168B28DCAECB8BC40* V_10 = NULL;
	TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E* V_12 = NULL;
	int32_t V_13 = 0;
	NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* V_14 = NULL;
	AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* V_15 = NULL;
	ReverseNameRecord_t58FFC94FBBE06D572ED02190EBD4AB2CF3635A67* V_16 = NULL;
	Exception_t* V_17 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E* G_B28_0 = NULL;
	List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* G_B28_1 = NULL;
	Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E* G_B27_0 = NULL;
	List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* G_B27_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00c1_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_027b_1;
			}
		}
		{
			U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943* L_4 = (U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			U3CU3Ec__DisplayClass13_0__ctor_m2DCCDED10C83790D9A1783F42344FC09F94A7F49(L_4, NULL);
			__this->___U3CU3E8__1_4 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)L_4);
			NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = BaseClient_get_RpcClient_mDC99C59F85131FF26A4B3A336BED28115177FAE4_inline(L_5, NULL);
			NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* L_7 = V_1;
			NullCheck(L_7);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_8;
			L_8 = BaseClient_get_ProgramIdKey_mA0104EA3A9EFF472EE43600EEF96E3BE41F96488_inline(L_7, NULL);
			il2cpp_codegen_runtime_class_init_inline(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
			String_t* L_9;
			L_9 = PublicKey_op_Implicit_m384B7ABBC96BB94E492A1F7EDD3EA30EFCB38921(L_8, NULL);
			il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
			Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_10 = V_5;
			List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E* L_11 = (List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E*)il2cpp_codegen_object_new(List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E_il2cpp_TypeInfo_var);
			NullCheck(L_11);
			List_1__ctor_m07CDC59B9C8CDABDC1B85B99092EBE4BFB442152(L_11, List_1__ctor_m07CDC59B9C8CDABDC1B85B99092EBE4BFB442152_RuntimeMethod_var);
			List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E* L_12 = L_11;
			MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* L_13 = (MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689*)il2cpp_codegen_object_new(MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689_il2cpp_TypeInfo_var);
			NullCheck(L_13);
			MemCmp__ctor_m57991249C7DB05E5D8154A984009A688B1D8DE6B(L_13, NULL);
			MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* L_14 = L_13;
			il2cpp_codegen_runtime_class_init_inline(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_15 = ((NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_StaticFields*)il2cpp_codegen_static_fields_for(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var))->___SolTLD_6;
			String_t* L_16;
			L_16 = PublicKey_op_Implicit_m384B7ABBC96BB94E492A1F7EDD3EA30EFCB38921(L_15, NULL);
			NullCheck(L_14);
			MemCmp_set_Bytes_mCDC0CAE1E02E4847F4BD1155280B968EA5E4E550_inline(L_14, L_16, NULL);
			MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* L_17 = L_14;
			NullCheck(L_17);
			MemCmp_set_Offset_mCB83B81A3939A37B8DF0EFD827F906F7814E4ECC_inline(L_17, 0, NULL);
			NullCheck(L_12);
			List_1_Add_mDBE0D9EBCE9CFD5E2CD155C9EBBCB01F5917EAEB_inline(L_12, L_17, List_1_Add_mDBE0D9EBCE9CFD5E2CD155C9EBBCB01F5917EAEB_RuntimeMethod_var);
			List_1_tA22CAD18C56F0BE10CFED0FEA78A8194E77D656E* L_18 = L_12;
			MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* L_19 = (MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689*)il2cpp_codegen_object_new(MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689_il2cpp_TypeInfo_var);
			NullCheck(L_19);
			MemCmp__ctor_m57991249C7DB05E5D8154A984009A688B1D8DE6B(L_19, NULL);
			MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* L_20 = L_19;
			String_t* L_21 = __this->___address_3;
			NullCheck(L_20);
			MemCmp_set_Bytes_mCDC0CAE1E02E4847F4BD1155280B968EA5E4E550_inline(L_20, L_21, NULL);
			MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* L_22 = L_20;
			NullCheck(L_22);
			MemCmp_set_Offset_mCB83B81A3939A37B8DF0EFD827F906F7814E4ECC_inline(L_22, ((int32_t)32), NULL);
			NullCheck(L_18);
			List_1_Add_mDBE0D9EBCE9CFD5E2CD155C9EBBCB01F5917EAEB_inline(L_18, L_22, List_1_Add_mDBE0D9EBCE9CFD5E2CD155C9EBBCB01F5917EAEB_RuntimeMethod_var);
			NullCheck(L_6);
			Task_1_t7CCC66177F684EE443B47A17968843DDDAE44557* L_23;
			L_23 = InterfaceFuncInvoker4< Task_1_t7CCC66177F684EE443B47A17968843DDDAE44557*, String_t*, int32_t, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, RuntimeObject* >::Invoke(69 /* System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>> Solana.Unity.Rpc.IRpcClient::GetProgramAccountsAsync(System.String,Solana.Unity.Rpc.Types.Commitment,System.Nullable`1<System.Int32>,System.Collections.Generic.IList`1<Solana.Unity.Rpc.Models.MemCmp>) */, IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var, L_6, L_9, 1, L_10, L_18);
			NullCheck(L_23);
			TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E L_24;
			L_24 = Task_1_GetAwaiter_m80463985CCBAE2B621B7B4F5DAF2586FA663B3E8(L_23, Task_1_GetAwaiter_m80463985CCBAE2B621B7B4F5DAF2586FA663B3E8_RuntimeMethod_var);
			V_4 = L_24;
			bool L_25;
			L_25 = TaskAwaiter_1_get_IsCompleted_m8C5717EA2B2DCE9A0429F692F77AC97A8C2214E7((&V_4), TaskAwaiter_1_get_IsCompleted_m8C5717EA2B2DCE9A0429F692F77AC97A8C2214E7_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_00de_1;
			}
		}
		{
			int32_t L_26 = 0;
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
			TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E L_27 = V_4;
			__this->___U3CU3Eu__1_9 = L_27;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_9))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tA698A6B4934A33B811B45CA5CE1757331D298D4E* L_28 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E_TisU3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5_m0FDD92A468D4F25EE80914E43285C8D2D174B9DB(L_28, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E_TisU3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5_m0FDD92A468D4F25EE80914E43285C8D2D174B9DB_RuntimeMethod_var);
			goto IL_0417;
		}

IL_00c1_1:
		{
			TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E L_29 = __this->___U3CU3Eu__1_9;
			V_4 = L_29;
			TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E* L_30 = (&__this->___U3CU3Eu__1_9);
			il2cpp_codegen_initobj(L_30, sizeof(TaskAwaiter_1_t325AB24644D6B502AD61AADC7DF0BC3EF744033E));
			int32_t L_31 = (-1);
			V_0 = L_31;
			__this->___U3CU3E1__state_0 = L_31;
		}

IL_00de_1:
		{
			RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* L_32;
			L_32 = TaskAwaiter_1_GetResult_mF52A04B9F0E80E7AE6C48AE5F1E2988DEE3255F7((&V_4), TaskAwaiter_1_GetResult_mF52A04B9F0E80E7AE6C48AE5F1E2988DEE3255F7_RuntimeMethod_var);
			V_3 = L_32;
			List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917* L_33 = (List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917*)il2cpp_codegen_object_new(List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917_il2cpp_TypeInfo_var);
			NullCheck(L_33);
			List_1__ctor_mD34D580E3646C83FFD5E294911A5FBB7F43AA5AE(L_33, List_1__ctor_mD34D580E3646C83FFD5E294911A5FBB7F43AA5AE_RuntimeMethod_var);
			__this->___U3CretU3E5__2_5 = L_33;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CretU3E5__2_5), (void*)L_33);
			RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* L_34 = V_3;
			NullCheck(L_34);
			bool L_35;
			L_35 = RequestResult_1_get_WasSuccessful_m2CFEEC2DF7AD7E23376D5707253E8930614C07AA(L_34, RequestResult_1_get_WasSuccessful_m2CFEEC2DF7AD7E23376D5707253E8930614C07AA_RuntimeMethod_var);
			if (!L_35)
			{
				goto IL_010e_1;
			}
		}
		{
			RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* L_36 = V_3;
			NullCheck(L_36);
			List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* L_37;
			L_37 = RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_inline(L_36, RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_RuntimeMethod_var);
			if (!L_37)
			{
				goto IL_010e_1;
			}
		}
		{
			RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* L_38 = V_3;
			NullCheck(L_38);
			List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* L_39;
			L_39 = RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_inline(L_38, RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_RuntimeMethod_var);
			NullCheck(L_39);
			int32_t L_40;
			L_40 = List_1_get_Count_m15D31E8E97A270919BFDE5C9D73B0ACB1EF222D2_inline(L_39, List_1_get_Count_m15D31E8E97A270919BFDE5C9D73B0ACB1EF222D2_RuntimeMethod_var);
			if (L_40)
			{
				goto IL_011a_1;
			}
		}

IL_010e_1:
		{
			List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917* L_41 = __this->___U3CretU3E5__2_5;
			V_2 = L_41;
			goto IL_03e0;
		}

IL_011a_1:
		{
			Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0* L_42 = (Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0*)il2cpp_codegen_object_new(Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0_il2cpp_TypeInfo_var);
			NullCheck(L_42);
			Dictionary_2__ctor_mA741EA10F01BC609C4C716B775B5521D5240616D(L_42, Dictionary_2__ctor_mA741EA10F01BC609C4C716B775B5521D5240616D_RuntimeMethod_var);
			__this->___U3CnameToRecordMapU3E5__3_6 = L_42;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameToRecordMapU3E5__3_6), (void*)L_42);
			RequestResult_1_tCDDF64ACBBECDAA3F3D44DE060B4CD0CB69A7288* L_43 = V_3;
			NullCheck(L_43);
			List_1_t14F58A20777D8E165ADF47547CFA17ED0AE2F195* L_44;
			L_44 = RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_inline(L_43, RequestResult_1_get_Result_m1BD2D3D0CEF2E02D9C7DD0691911CC45EF4B7696_RuntimeMethod_var);
			NullCheck(L_44);
			Enumerator_tCA20CEFEDD74E64311F87E16592D56205E548A63 L_45;
			L_45 = List_1_GetEnumerator_m878DFFCC837D7A6BD025D013AD3AA85CC92F1EC1(L_44, List_1_GetEnumerator_m878DFFCC837D7A6BD025D013AD3AA85CC92F1EC1_RuntimeMethod_var);
			V_6 = L_45;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0193_1:
				{// begin finally (depth: 2)
					{
						int32_t L_46 = V_0;
						if ((((int32_t)L_46) >= ((int32_t)0)))
						{
							goto IL_01a4_1;
						}
					}
					{
						Enumerator_Dispose_mA73CB9C54FB99EA1428F1FC98FEFAD3D9158C009((&V_6), Enumerator_Dispose_mA73CB9C54FB99EA1428F1FC98FEFAD3D9158C009_RuntimeMethod_var);
					}

IL_01a4_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_0188_2;
				}

IL_0134_2:
				{
					AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* L_47;
					L_47 = Enumerator_get_Current_mA3299A03C6BE328003715CA88213224DEB5868B3_inline((&V_6), Enumerator_get_Current_mA3299A03C6BE328003715CA88213224DEB5868B3_RuntimeMethod_var);
					AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* L_48 = L_47;
					NullCheck(L_48);
					AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* L_49;
					L_49 = AccountKeyPair_get_Account_m1953E7F21E2813875D1B5088D80206F6BA7685B0_inline(L_48, NULL);
					NullCheck(L_49);
					List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_50;
					L_50 = AccountInfo_get_Data_mD10117914E4AB951B8D8F9211496B9EB2DACD646_inline(L_49, NULL);
					NullCheck(L_50);
					String_t* L_51;
					L_51 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_50, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
					il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52;
					L_52 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_51, NULL);
					NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* L_53;
					L_53 = NameRecord_Deserialize_m5085BF3B10D6B694503FF76374276B2B48AE2F84(L_52, NULL);
					V_7 = L_53;
					NullCheck(L_48);
					String_t* L_54;
					L_54 = AccountKeyPair_get_PublicKey_m339EFDACB82C95204D2F142EFF64DE6B46463DC4_inline(L_48, NULL);
					il2cpp_codegen_runtime_class_init_inline(NameServiceProgram_t58E186B23111F86C0B1E6758CEF0B7DC1685E331_il2cpp_TypeInfo_var);
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55;
					L_55 = NameServiceProgram_ComputeHashedName_m509D6763A130F5226D9D4BC2466E8006AE545D1D(L_54, NULL);
					ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_56;
					L_56 = ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644(L_55, ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
					il2cpp_codegen_runtime_class_init_inline(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var);
					PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_57 = ((NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_StaticFields*)il2cpp_codegen_static_fields_for(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var))->___ReverseSolNameClass_7;
					PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_58;
					L_58 = NameServiceProgram_DeriveNameAccountKey_mFD4537BEAD96B13112F083D4C0F851CC47821CCC(L_56, L_57, (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)NULL, NULL);
					V_8 = L_58;
					Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0* L_59 = __this->___U3CnameToRecordMapU3E5__3_6;
					PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_60 = V_8;
					il2cpp_codegen_runtime_class_init_inline(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
					String_t* L_61;
					L_61 = PublicKey_op_Implicit_m384B7ABBC96BB94E492A1F7EDD3EA30EFCB38921(L_60, NULL);
					NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* L_62 = V_7;
					NullCheck(L_59);
					Dictionary_2_Add_m558551C4C63F0375FA93F4C24EB89BC407203EF7(L_59, L_61, L_62, Dictionary_2_Add_m558551C4C63F0375FA93F4C24EB89BC407203EF7_RuntimeMethod_var);
				}

IL_0188_2:
				{
					bool L_63;
					L_63 = Enumerator_MoveNext_m212902D3DB0489F190C77FCCC425803052CE4B83((&V_6), Enumerator_MoveNext_m212902D3DB0489F190C77FCCC425803052CE4B83_RuntimeMethod_var);
					if (L_63)
					{
						goto IL_0134_2;
					}
				}
				{
					goto IL_01a5_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_01a5_1:
		{
			Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0* L_64 = __this->___U3CnameToRecordMapU3E5__3_6;
			NullCheck(L_64);
			KeyCollection_t3294E6AE549004233E2735FF3EB14BB195E75EF5* L_65;
			L_65 = Dictionary_2_get_Keys_m167EB406ED5FE46A57B5F626EB989CD30D59B3CB(L_64, Dictionary_2_get_Keys_m167EB406ED5FE46A57B5F626EB989CD30D59B3CB_RuntimeMethod_var);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_66;
			L_66 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131(L_65, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
			__this->___U3CreverseNameAddressesU3E5__4_7 = L_66;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreverseNameAddressesU3E5__4_7), (void*)L_66);
			U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943* L_67 = __this->___U3CU3E8__1_4;
			List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* L_68 = (List_1_t87857C0E564D1397226E391D7090B146B2C66BCF*)il2cpp_codegen_object_new(List_1_t87857C0E564D1397226E391D7090B146B2C66BCF_il2cpp_TypeInfo_var);
			NullCheck(L_68);
			List_1__ctor_mD1379AAB2C1B81B9C692C424867309B65C4042BE(L_68, List_1__ctor_mD1379AAB2C1B81B9C692C424867309B65C4042BE_RuntimeMethod_var);
			NullCheck(L_67);
			L_67->___accInfos_0 = L_68;
			Il2CppCodeGenWriteBarrier((void**)(&L_67->___accInfos_0), (void*)L_68);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_69 = __this->___U3CreverseNameAddressesU3E5__4_7;
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_70 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
			NullCheck(L_70);
			List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_70, L_69, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
			__this->___U3CaddressesCopyU3E5__5_8 = L_70;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaddressesCopyU3E5__5_8), (void*)L_70);
			goto IL_02eb_1;
		}

IL_01e1_1:
		{
			V_9 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL;
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_71 = __this->___U3CaddressesCopyU3E5__5_8;
			NullCheck(L_71);
			int32_t L_72;
			L_72 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_71, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
			if ((((int32_t)L_72) <= ((int32_t)((int32_t)100))))
			{
				goto IL_0221_1;
			}
		}
		{
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_73 = __this->___U3CaddressesCopyU3E5__5_8;
			RuntimeObject* L_74;
			L_74 = Enumerable_Take_TisString_t_m31A30189361F02FD6807DA3F2CDCFD4109B79487(L_73, ((int32_t)100), Enumerable_Take_TisString_t_m31A30189361F02FD6807DA3F2CDCFD4109B79487_RuntimeMethod_var);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_75;
			L_75 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131(L_74, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
			V_9 = L_75;
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_76 = __this->___U3CaddressesCopyU3E5__5_8;
			RuntimeObject* L_77;
			L_77 = Enumerable_Skip_TisString_t_m54DC11CB444A792E1F6F8226CC15482137C4522D(L_76, ((int32_t)100), Enumerable_Skip_TisString_t_m54DC11CB444A792E1F6F8226CC15482137C4522D_RuntimeMethod_var);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_78;
			L_78 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131(L_77, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
			__this->___U3CaddressesCopyU3E5__5_8 = L_78;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaddressesCopyU3E5__5_8), (void*)L_78);
			goto IL_0239_1;
		}

IL_0221_1:
		{
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_79 = __this->___U3CaddressesCopyU3E5__5_8;
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_80 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
			NullCheck(L_80);
			List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_80, L_79, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
			V_9 = L_80;
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_81 = __this->___U3CaddressesCopyU3E5__5_8;
			NullCheck(L_81);
			List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_81, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		}

IL_0239_1:
		{
			NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* L_82 = V_1;
			NullCheck(L_82);
			RuntimeObject* L_83;
			L_83 = BaseClient_get_RpcClient_mDC99C59F85131FF26A4B3A336BED28115177FAE4_inline(L_82, NULL);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_84 = V_9;
			NullCheck(L_83);
			Task_1_t1BB72EBC3EC5F4B31EFDCF30D3E0283AE1B50D14* L_85;
			L_85 = InterfaceFuncInvoker2< Task_1_t1BB72EBC3EC5F4B31EFDCF30D3E0283AE1B50D14*, RuntimeObject*, int32_t >::Invoke(67 /* System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>>> Solana.Unity.Rpc.IRpcClient::GetMultipleAccountsAsync(System.Collections.Generic.IList`1<System.String>,Solana.Unity.Rpc.Types.Commitment) */, IRpcClient_t4E221F0637F19F7A9DCA46B3CA05F653E4FEFAFE_il2cpp_TypeInfo_var, L_83, L_84, 1);
			NullCheck(L_85);
			TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797 L_86;
			L_86 = Task_1_GetAwaiter_m3D1CF4FDE1E2A178F3D909A364D2A376397E032E(L_85, Task_1_GetAwaiter_m3D1CF4FDE1E2A178F3D909A364D2A376397E032E_RuntimeMethod_var);
			V_11 = L_86;
			bool L_87;
			L_87 = TaskAwaiter_1_get_IsCompleted_m130A03EA04C60F2AA151449041EBEEF0E56A6093((&V_11), TaskAwaiter_1_get_IsCompleted_m130A03EA04C60F2AA151449041EBEEF0E56A6093_RuntimeMethod_var);
			if (L_87)
			{
				goto IL_0298_1;
			}
		}
		{
			int32_t L_88 = 1;
			V_0 = L_88;
			__this->___U3CU3E1__state_0 = L_88;
			TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797 L_89 = V_11;
			__this->___U3CU3Eu__2_10 = L_89;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_10))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tA698A6B4934A33B811B45CA5CE1757331D298D4E* L_90 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797_TisU3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5_m49E938E30859EF34D43A56C558E4A34990A3A882(L_90, (&V_11), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797_TisU3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5_m49E938E30859EF34D43A56C558E4A34990A3A882_RuntimeMethod_var);
			goto IL_0417;
		}

IL_027b_1:
		{
			TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797 L_91 = __this->___U3CU3Eu__2_10;
			V_11 = L_91;
			TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797* L_92 = (&__this->___U3CU3Eu__2_10);
			il2cpp_codegen_initobj(L_92, sizeof(TaskAwaiter_1_t9447806626251A7A2D93E008F8F46CD4882C9797));
			int32_t L_93 = (-1);
			V_0 = L_93;
			__this->___U3CU3E1__state_0 = L_93;
		}

IL_0298_1:
		{
			RequestResult_1_tB91845DC2F7F5A2669DC616168B28DCAECB8BC40* L_94;
			L_94 = TaskAwaiter_1_GetResult_m07B69DA5865FD41C20FCF083929ABB721AFF06C8((&V_11), TaskAwaiter_1_GetResult_m07B69DA5865FD41C20FCF083929ABB721AFF06C8_RuntimeMethod_var);
			V_10 = L_94;
			RequestResult_1_tB91845DC2F7F5A2669DC616168B28DCAECB8BC40* L_95 = V_10;
			NullCheck(L_95);
			bool L_96;
			L_96 = RequestResult_1_get_WasSuccessful_m65314331FDC4692E1360229C838E8F24188A4AB8(L_95, RequestResult_1_get_WasSuccessful_m65314331FDC4692E1360229C838E8F24188A4AB8_RuntimeMethod_var);
			if (!L_96)
			{
				goto IL_02fc_1;
			}
		}
		{
			RequestResult_1_tB91845DC2F7F5A2669DC616168B28DCAECB8BC40* L_97 = V_10;
			NullCheck(L_97);
			ResponseValue_1_tCF55E6F19763014775060D2267A55A89D56559E7* L_98;
			L_98 = RequestResult_1_get_Result_m1240E7E1D9842870C21DCFB7C93A3CFF04950040_inline(L_97, RequestResult_1_get_Result_m1240E7E1D9842870C21DCFB7C93A3CFF04950040_RuntimeMethod_var);
			NullCheck(L_98);
			List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* L_99;
			L_99 = ResponseValue_1_get_Value_m8862714A428375294111D7D44CF0476EE7DB1A0C_inline(L_98, ResponseValue_1_get_Value_m8862714A428375294111D7D44CF0476EE7DB1A0C_RuntimeMethod_var);
			U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943* L_100 = __this->___U3CU3E8__1_4;
			NullCheck(L_100);
			Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E* L_101 = L_100->___U3CU3E9__0_1;
			Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E* L_102 = L_101;
			G_B27_0 = L_102;
			G_B27_1 = L_99;
			if (L_102)
			{
				G_B28_0 = L_102;
				G_B28_1 = L_99;
				goto IL_02e6_1;
			}
		}
		{
			U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943* L_103 = __this->___U3CU3E8__1_4;
			U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943* L_104 = __this->___U3CU3E8__1_4;
			Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E* L_105 = (Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E*)il2cpp_codegen_object_new(Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E_il2cpp_TypeInfo_var);
			NullCheck(L_105);
			Action_1__ctor_m61235F2EDD6BC4CCC72DA59B713E6324272E9B47(L_105, L_104, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CGetNamesFromAddressAsyncU3Eb__0_m5C4B78737BAED97AC3E9804F97191455D9D1F752_RuntimeMethod_var), NULL);
			Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E* L_106 = L_105;
			V_12 = L_106;
			NullCheck(L_103);
			L_103->___U3CU3E9__0_1 = L_106;
			Il2CppCodeGenWriteBarrier((void**)(&L_103->___U3CU3E9__0_1), (void*)L_106);
			Action_1_t18F8D67BB40DA7DBAF7E1F441168D2E1EAF5E41E* L_107 = V_12;
			G_B28_0 = L_107;
			G_B28_1 = G_B27_1;
		}

IL_02e6_1:
		{
			NullCheck(G_B28_1);
			List_1_ForEach_m4B9E1BE58DEB75E957970E67BE0AA7C91EE186D4(G_B28_1, G_B28_0, List_1_ForEach_m4B9E1BE58DEB75E957970E67BE0AA7C91EE186D4_RuntimeMethod_var);
		}

IL_02eb_1:
		{
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_108 = __this->___U3CaddressesCopyU3E5__5_8;
			NullCheck(L_108);
			int32_t L_109;
			L_109 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_108, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
			if ((((int32_t)L_109) > ((int32_t)0)))
			{
				goto IL_01e1_1;
			}
		}

IL_02fc_1:
		{
			V_13 = 0;
			goto IL_0384_1;
		}

IL_0304_1:
		{
			Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0* L_110 = __this->___U3CnameToRecordMapU3E5__3_6;
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_111 = __this->___U3CreverseNameAddressesU3E5__4_7;
			int32_t L_112 = V_13;
			NullCheck(L_111);
			String_t* L_113;
			L_113 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_111, L_112, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
			NullCheck(L_110);
			NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* L_114;
			L_114 = Dictionary_2_get_Item_m0B591E92CA44A3D0894F622FC6ABA8699877B8AF(L_110, L_113, Dictionary_2_get_Item_m0B591E92CA44A3D0894F622FC6ABA8699877B8AF_RuntimeMethod_var);
			V_14 = L_114;
			U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943* L_115 = __this->___U3CU3E8__1_4;
			NullCheck(L_115);
			List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* L_116 = L_115->___accInfos_0;
			int32_t L_117 = V_13;
			NullCheck(L_116);
			AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* L_118;
			L_118 = List_1_get_Item_mE02DFBC2ACB78F804D7001DDC9360FF60EF6EC37(L_116, L_117, List_1_get_Item_mE02DFBC2ACB78F804D7001DDC9360FF60EF6EC37_RuntimeMethod_var);
			V_15 = L_118;
			AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* L_119 = V_15;
			if (!L_119)
			{
				goto IL_037e_1;
			}
		}
		{
			AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* L_120 = V_15;
			NullCheck(L_120);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_121;
			L_121 = AccountInfo_get_Data_mD10117914E4AB951B8D8F9211496B9EB2DACD646_inline(L_120, NULL);
			NullCheck(L_121);
			String_t* L_122;
			L_122 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_121, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_123;
			L_123 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_122, NULL);
			ReverseNameRecord_t58FFC94FBBE06D572ED02190EBD4AB2CF3635A67* L_124;
			L_124 = ReverseNameRecord_Deserialize_m4CCBCC65E1CCBCB547FB7035C7E997E37FD4C063(L_123, NULL);
			V_16 = L_124;
			ReverseNameRecord_t58FFC94FBBE06D572ED02190EBD4AB2CF3635A67* L_125 = V_16;
			NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* L_126 = V_14;
			NullCheck(L_125);
			ReverseNameRecord_set_Value_m8E5F5E61BED1A76033ACBC97B843DA9F1F99966A_inline(L_125, L_126, NULL);
			ReverseNameRecord_t58FFC94FBBE06D572ED02190EBD4AB2CF3635A67* L_127 = V_16;
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_128 = __this->___U3CreverseNameAddressesU3E5__4_7;
			int32_t L_129 = V_13;
			NullCheck(L_128);
			String_t* L_130;
			L_130 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_128, L_129, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_131 = (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)il2cpp_codegen_object_new(PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751_il2cpp_TypeInfo_var);
			NullCheck(L_131);
			PublicKey__ctor_mAC5FE8C442D642434F04E8491B83BDBBE9E80A90(L_131, L_130, NULL);
			NullCheck(L_127);
			RecordBase_set_AccountAddress_m85E14042052E6E5422CED56BAC68D37E1B2E73F4_inline(L_127, L_131, NULL);
			List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917* L_132 = __this->___U3CretU3E5__2_5;
			ReverseNameRecord_t58FFC94FBBE06D572ED02190EBD4AB2CF3635A67* L_133 = V_16;
			NullCheck(L_132);
			List_1_Add_m5853407B96D51DD3FB23DD11F09732938F42324F_inline(L_132, L_133, List_1_Add_m5853407B96D51DD3FB23DD11F09732938F42324F_RuntimeMethod_var);
		}

IL_037e_1:
		{
			int32_t L_134 = V_13;
			V_13 = ((int32_t)il2cpp_codegen_add(L_134, 1));
		}

IL_0384_1:
		{
			int32_t L_135 = V_13;
			U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943* L_136 = __this->___U3CU3E8__1_4;
			NullCheck(L_136);
			List_1_t87857C0E564D1397226E391D7090B146B2C66BCF* L_137 = L_136->___accInfos_0;
			NullCheck(L_137);
			int32_t L_138;
			L_138 = List_1_get_Count_m025CF4F74A24D16544358D8836010613DCC6F164_inline(L_137, List_1_get_Count_m025CF4F74A24D16544358D8836010613DCC6F164_RuntimeMethod_var);
			if ((((int32_t)L_135) < ((int32_t)L_138)))
			{
				goto IL_0304_1;
			}
		}
		{
			List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917* L_139 = __this->___U3CretU3E5__2_5;
			V_2 = L_139;
			goto IL_03e0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_03a4;
		}
		throw e;
	}

CATCH_03a4:
	{// begin catch(System.Exception)
		V_17 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_4 = (U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)(U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943*)NULL);
		__this->___U3CretU3E5__2_5 = (List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CretU3E5__2_5), (void*)(List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917*)NULL);
		__this->___U3CnameToRecordMapU3E5__3_6 = (Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameToRecordMapU3E5__3_6), (void*)(Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0*)NULL);
		__this->___U3CreverseNameAddressesU3E5__4_7 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreverseNameAddressesU3E5__4_7), (void*)(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL);
		__this->___U3CaddressesCopyU3E5__5_8 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaddressesCopyU3E5__5_8), (void*)(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL);
		AsyncTaskMethodBuilder_1_tA698A6B4934A33B811B45CA5CE1757331D298D4E* L_140 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_141 = V_17;
		AsyncTaskMethodBuilder_1_SetException_m894D9FFB661A6516A11D01507A8915F6B7D70228(L_140, L_141, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m894D9FFB661A6516A11D01507A8915F6B7D70228_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0417;
	}// end catch (depth: 1)

IL_03e0:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_4 = (U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)(U3CU3Ec__DisplayClass13_0_tFAC440DE83008746B27AD8D2F83791E45B244943*)NULL);
		__this->___U3CretU3E5__2_5 = (List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CretU3E5__2_5), (void*)(List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917*)NULL);
		__this->___U3CnameToRecordMapU3E5__3_6 = (Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameToRecordMapU3E5__3_6), (void*)(Dictionary_2_tD753BE88EA5F1331ECE21742B38B9F049ADFC4F0*)NULL);
		__this->___U3CreverseNameAddressesU3E5__4_7 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreverseNameAddressesU3E5__4_7), (void*)(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL);
		__this->___U3CaddressesCopyU3E5__5_8 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaddressesCopyU3E5__5_8), (void*)(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL);
		AsyncTaskMethodBuilder_1_tA698A6B4934A33B811B45CA5CE1757331D298D4E* L_142 = (&__this->___U3CU3Et__builder_1);
		List_1_tFC8C739FB6B1A3BD892E0D4199E1DCCE72ED5917* L_143 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m5631A20455F2817128DD71054AB55AFF5270B407(L_142, L_143, AsyncTaskMethodBuilder_1_SetResult_m5631A20455F2817128DD71054AB55AFF5270B407_RuntimeMethod_var);
	}

IL_0417:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetNamesFromAddressAsyncU3Ed__13_MoveNext_mD7C0404CD3291F1EADA402927D980A1063195DB8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5*>(__this + _offset);
	U3CGetNamesFromAddressAsyncU3Ed__13_MoveNext_mD7C0404CD3291F1EADA402927D980A1063195DB8(_thisAdjusted, method);
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetNamesFromAddressAsync>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNamesFromAddressAsyncU3Ed__13_SetStateMachine_mAA02CA3C1D46B219086E7009587EE9D6A46A0ABC (U3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m8EB856A57C1AFE9E964B32DD22374F484F8C85F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tA698A6B4934A33B811B45CA5CE1757331D298D4E* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m8EB856A57C1AFE9E964B32DD22374F484F8C85F5(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m8EB856A57C1AFE9E964B32DD22374F484F8C85F5_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetNamesFromAddressAsyncU3Ed__13_SetStateMachine_mAA02CA3C1D46B219086E7009587EE9D6A46A0ABC_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetNamesFromAddressAsyncU3Ed__13_tD74024CD828050AE526B5922F0154FCC30F532A5*>(__this + _offset);
	U3CGetNamesFromAddressAsyncU3Ed__13_SetStateMachine_mAA02CA3C1D46B219086E7009587EE9D6A46A0ABC(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetTokenInfoFromMintAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTokenInfoFromMintAsyncU3Ed__8_MoveNext_mC675B572C6816C9247F03E7AC52D83001C9A1AA8 (U3CGetTokenInfoFromMintAsyncU3Ed__8_tA67B2F3B5D13737205FCBEDE4A6D4647A41A8BF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3_TisU3CGetTokenInfoFromMintAsyncU3Ed__8_tA67B2F3B5D13737205FCBEDE4A6D4647A41A8BF7_m71572CBF7ABC3E17F5D8A3608F923CB6C8F794E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mBEBED9B9ADDA84BBB8C0025D6A6E5C606613E46C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameServiceClient_GetAccountAndSetMetadata_TisTokenNameRecord_t641AD3F42E45A18FDE4DED0FDED5DA7B6719722B_m17EC89650FF9BCA4F9FE7710F0D676CAA800D680_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameServiceProgram_t58E186B23111F86C0B1E6758CEF0B7DC1685E331_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m64373E83B0B055912BBEC37E4883DB260803FBB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mC93DEEBB4D0BD78EE84ACF86EE65DBFD53287117_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mA6FCC8275038E4B11BFB2BBAE3D592796DB34CBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* V_1 = NULL;
	AccountResultWrapper_1_t730BB6868847CFF8C7718409C46B4C513DADF175* V_2 = NULL;
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* V_3 = NULL;
	TaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006b_1;
			}
		}
		{
			String_t* L_3 = __this->___address_2;
			il2cpp_codegen_runtime_class_init_inline(NameServiceProgram_t58E186B23111F86C0B1E6758CEF0B7DC1685E331_il2cpp_TypeInfo_var);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
			L_4 = NameServiceProgram_ComputeHashedName_m509D6763A130F5226D9D4BC2466E8006AE545D1D(L_3, NULL);
			ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
			L_5 = ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644(L_4, ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_6 = ((NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_StaticFields*)il2cpp_codegen_static_fields_for(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var))->___TokenTLD_3;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_7;
			L_7 = NameServiceProgram_DeriveNameAccountKey_mFD4537BEAD96B13112F083D4C0F851CC47821CCC(L_5, (PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751*)NULL, L_6, NULL);
			V_3 = L_7;
			NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* L_8 = V_1;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_9 = V_3;
			String_t* L_10 = __this->___address_2;
			NullCheck(L_8);
			Task_1_t5B368A1CFA055DA4AA6A27E08A842F7BC5978543* L_11;
			L_11 = NameServiceClient_GetAccountAndSetMetadata_TisTokenNameRecord_t641AD3F42E45A18FDE4DED0FDED5DA7B6719722B_m17EC89650FF9BCA4F9FE7710F0D676CAA800D680(L_8, L_9, L_10, NameServiceClient_GetAccountAndSetMetadata_TisTokenNameRecord_t641AD3F42E45A18FDE4DED0FDED5DA7B6719722B_m17EC89650FF9BCA4F9FE7710F0D676CAA800D680_RuntimeMethod_var);
			NullCheck(L_11);
			TaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3 L_12;
			L_12 = Task_1_GetAwaiter_mA6FCC8275038E4B11BFB2BBAE3D592796DB34CBF(L_11, Task_1_GetAwaiter_mA6FCC8275038E4B11BFB2BBAE3D592796DB34CBF_RuntimeMethod_var);
			V_4 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_1_get_IsCompleted_mC93DEEBB4D0BD78EE84ACF86EE65DBFD53287117((&V_4), TaskAwaiter_1_get_IsCompleted_mC93DEEBB4D0BD78EE84ACF86EE65DBFD53287117_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0088_1;
			}
		}
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
			TaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3 L_15 = V_4;
			__this->___U3CU3Eu__1_4 = L_15;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tC89894FD9CB2AC1176E2977A4FF4E47624708D7B* L_16 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3_TisU3CGetTokenInfoFromMintAsyncU3Ed__8_tA67B2F3B5D13737205FCBEDE4A6D4647A41A8BF7_m71572CBF7ABC3E17F5D8A3608F923CB6C8F794E4(L_16, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3_TisU3CGetTokenInfoFromMintAsyncU3Ed__8_tA67B2F3B5D13737205FCBEDE4A6D4647A41A8BF7_m71572CBF7ABC3E17F5D8A3608F923CB6C8F794E4_RuntimeMethod_var);
			goto IL_00bf;
		}

IL_006b_1:
		{
			TaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3 L_17 = __this->___U3CU3Eu__1_4;
			V_4 = L_17;
			TaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3* L_18 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_1_tE3D6D06D72F44DF3CB5C60918517BBE7AFE624B3));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
		}

IL_0088_1:
		{
			AccountResultWrapper_1_t730BB6868847CFF8C7718409C46B4C513DADF175* L_20;
			L_20 = TaskAwaiter_1_GetResult_m64373E83B0B055912BBEC37E4883DB260803FBB4((&V_4), TaskAwaiter_1_GetResult_m64373E83B0B055912BBEC37E4883DB260803FBB4_RuntimeMethod_var);
			V_2 = L_20;
			goto IL_00ab;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0092;
		}
		throw e;
	}

CATCH_0092:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tC89894FD9CB2AC1176E2977A4FF4E47624708D7B* L_21 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_22 = V_5;
		AsyncTaskMethodBuilder_1_SetException_mCF165DEE4F0758C0A79438314892D9950AFD8CA7(L_21, L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mCF165DEE4F0758C0A79438314892D9950AFD8CA7_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bf;
	}// end catch (depth: 1)

IL_00ab:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tC89894FD9CB2AC1176E2977A4FF4E47624708D7B* L_23 = (&__this->___U3CU3Et__builder_1);
		AccountResultWrapper_1_t730BB6868847CFF8C7718409C46B4C513DADF175* L_24 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mBEBED9B9ADDA84BBB8C0025D6A6E5C606613E46C(L_23, L_24, AsyncTaskMethodBuilder_1_SetResult_mBEBED9B9ADDA84BBB8C0025D6A6E5C606613E46C_RuntimeMethod_var);
	}

IL_00bf:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetTokenInfoFromMintAsyncU3Ed__8_MoveNext_mC675B572C6816C9247F03E7AC52D83001C9A1AA8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetTokenInfoFromMintAsyncU3Ed__8_tA67B2F3B5D13737205FCBEDE4A6D4647A41A8BF7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetTokenInfoFromMintAsyncU3Ed__8_tA67B2F3B5D13737205FCBEDE4A6D4647A41A8BF7*>(__this + _offset);
	U3CGetTokenInfoFromMintAsyncU3Ed__8_MoveNext_mC675B572C6816C9247F03E7AC52D83001C9A1AA8(_thisAdjusted, method);
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetTokenInfoFromMintAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTokenInfoFromMintAsyncU3Ed__8_SetStateMachine_m824C1F47401FF69F4B8D4D8D257050F5552604DE (U3CGetTokenInfoFromMintAsyncU3Ed__8_tA67B2F3B5D13737205FCBEDE4A6D4647A41A8BF7* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m17B77EB38857897EF6F7E1A7471EF96EBCC1B830_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tC89894FD9CB2AC1176E2977A4FF4E47624708D7B* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m17B77EB38857897EF6F7E1A7471EF96EBCC1B830(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m17B77EB38857897EF6F7E1A7471EF96EBCC1B830_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetTokenInfoFromMintAsyncU3Ed__8_SetStateMachine_m824C1F47401FF69F4B8D4D8D257050F5552604DE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetTokenInfoFromMintAsyncU3Ed__8_tA67B2F3B5D13737205FCBEDE4A6D4647A41A8BF7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetTokenInfoFromMintAsyncU3Ed__8_tA67B2F3B5D13737205FCBEDE4A6D4647A41A8BF7*>(__this + _offset);
	U3CGetTokenInfoFromMintAsyncU3Ed__8_SetStateMachine_m824C1F47401FF69F4B8D4D8D257050F5552604DE(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetTwitterHandleFromAddressAsync>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTwitterHandleFromAddressAsyncU3Ed__11_MoveNext_m5892F8ADECD137317897B49EB9E88668511F85C8 (U3CGetTwitterHandleFromAddressAsyncU3Ed__11_t564EC05B8242C8AFE6869B3C5E07CDE8F1F9C088* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218_TisU3CGetTwitterHandleFromAddressAsyncU3Ed__11_t564EC05B8242C8AFE6869B3C5E07CDE8F1F9C088_m8921B83709B77D6791C83EE15099B2D71FEF4784_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m89DA84B0CBEAF30AE49E5A01A59671D6BBE268B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameServiceClient_GetAccountAndSetMetadata_TisReverseTwitterRecord_t9EF7949A5194ECA8B95909E3F5E81230C9C57BCE_m5A877F01B5B53DFECDB9D7C1560F07BCB47D8892_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameServiceProgram_t58E186B23111F86C0B1E6758CEF0B7DC1685E331_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB02B0DAD584722A281D9C20CC6441CCED52C3928_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mFC03F92B73E1B472B668F085F4541EB5FBDD02F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mE0CD1A56E431799461E86D57C7F25199B966D6E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* V_1 = NULL;
	AccountResultWrapper_1_tDE471A66570801A8C41D659A421EFA72EB83EA44* V_2 = NULL;
	PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* V_3 = NULL;
	TaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006f_1;
			}
		}
		{
			String_t* L_3 = __this->___address_2;
			il2cpp_codegen_runtime_class_init_inline(NameServiceProgram_t58E186B23111F86C0B1E6758CEF0B7DC1685E331_il2cpp_TypeInfo_var);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
			L_4 = NameServiceProgram_ComputeHashedName_m509D6763A130F5226D9D4BC2466E8006AE545D1D(L_3, NULL);
			ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
			L_5 = ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644(L_4, ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var);
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_6 = ((NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_StaticFields*)il2cpp_codegen_static_fields_for(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var))->___ReverseTwitterNameClass_5;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_7 = ((NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_StaticFields*)il2cpp_codegen_static_fields_for(NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6_il2cpp_TypeInfo_var))->___TwitterTLD_4;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_8;
			L_8 = NameServiceProgram_DeriveNameAccountKey_mFD4537BEAD96B13112F083D4C0F851CC47821CCC(L_5, L_6, L_7, NULL);
			V_3 = L_8;
			NameServiceClient_t2F90ADEE5F9D9096D1E7C1B0DFB7BA839FDF5AF6* L_9 = V_1;
			PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_10 = V_3;
			String_t* L_11 = __this->___address_2;
			NullCheck(L_9);
			Task_1_t70A3A7F6C77AAC9C265B912DA0AB65496B5AE155* L_12;
			L_12 = NameServiceClient_GetAccountAndSetMetadata_TisReverseTwitterRecord_t9EF7949A5194ECA8B95909E3F5E81230C9C57BCE_m5A877F01B5B53DFECDB9D7C1560F07BCB47D8892(L_9, L_10, L_11, NameServiceClient_GetAccountAndSetMetadata_TisReverseTwitterRecord_t9EF7949A5194ECA8B95909E3F5E81230C9C57BCE_m5A877F01B5B53DFECDB9D7C1560F07BCB47D8892_RuntimeMethod_var);
			NullCheck(L_12);
			TaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218 L_13;
			L_13 = Task_1_GetAwaiter_mE0CD1A56E431799461E86D57C7F25199B966D6E4(L_12, Task_1_GetAwaiter_mE0CD1A56E431799461E86D57C7F25199B966D6E4_RuntimeMethod_var);
			V_4 = L_13;
			bool L_14;
			L_14 = TaskAwaiter_1_get_IsCompleted_mFC03F92B73E1B472B668F085F4541EB5FBDD02F6((&V_4), TaskAwaiter_1_get_IsCompleted_mFC03F92B73E1B472B668F085F4541EB5FBDD02F6_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_008c_1;
			}
		}
		{
			int32_t L_15 = 0;
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
			TaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218 L_16 = V_4;
			__this->___U3CU3Eu__1_4 = L_16;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t67DA9004B3CC9F416278880B1A23954597921D84* L_17 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218_TisU3CGetTwitterHandleFromAddressAsyncU3Ed__11_t564EC05B8242C8AFE6869B3C5E07CDE8F1F9C088_m8921B83709B77D6791C83EE15099B2D71FEF4784(L_17, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218_TisU3CGetTwitterHandleFromAddressAsyncU3Ed__11_t564EC05B8242C8AFE6869B3C5E07CDE8F1F9C088_m8921B83709B77D6791C83EE15099B2D71FEF4784_RuntimeMethod_var);
			goto IL_00c3;
		}

IL_006f_1:
		{
			TaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218 L_18 = __this->___U3CU3Eu__1_4;
			V_4 = L_18;
			TaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218* L_19 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_19, sizeof(TaskAwaiter_1_t19B6AEA8903C8DB378610146F0D12237EDD3C218));
			int32_t L_20 = (-1);
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
		}

IL_008c_1:
		{
			AccountResultWrapper_1_tDE471A66570801A8C41D659A421EFA72EB83EA44* L_21;
			L_21 = TaskAwaiter_1_GetResult_mB02B0DAD584722A281D9C20CC6441CCED52C3928((&V_4), TaskAwaiter_1_GetResult_mB02B0DAD584722A281D9C20CC6441CCED52C3928_RuntimeMethod_var);
			V_2 = L_21;
			goto IL_00af;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0096;
		}
		throw e;
	}

CATCH_0096:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t67DA9004B3CC9F416278880B1A23954597921D84* L_22 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_23 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m5793BB70BAA82228D967E9A18E716496AD9A5629(L_22, L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m5793BB70BAA82228D967E9A18E716496AD9A5629_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c3;
	}// end catch (depth: 1)

IL_00af:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t67DA9004B3CC9F416278880B1A23954597921D84* L_24 = (&__this->___U3CU3Et__builder_1);
		AccountResultWrapper_1_tDE471A66570801A8C41D659A421EFA72EB83EA44* L_25 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m89DA84B0CBEAF30AE49E5A01A59671D6BBE268B6(L_24, L_25, AsyncTaskMethodBuilder_1_SetResult_m89DA84B0CBEAF30AE49E5A01A59671D6BBE268B6_RuntimeMethod_var);
	}

IL_00c3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetTwitterHandleFromAddressAsyncU3Ed__11_MoveNext_m5892F8ADECD137317897B49EB9E88668511F85C8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetTwitterHandleFromAddressAsyncU3Ed__11_t564EC05B8242C8AFE6869B3C5E07CDE8F1F9C088* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetTwitterHandleFromAddressAsyncU3Ed__11_t564EC05B8242C8AFE6869B3C5E07CDE8F1F9C088*>(__this + _offset);
	U3CGetTwitterHandleFromAddressAsyncU3Ed__11_MoveNext_m5892F8ADECD137317897B49EB9E88668511F85C8(_thisAdjusted, method);
}
// System.Void Solana.Unity.Programs.Clients.NameServiceClient/<GetTwitterHandleFromAddressAsync>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTwitterHandleFromAddressAsyncU3Ed__11_SetStateMachine_mA5866EFFF689224D3802FBB2967CD288214DA2D1 (U3CGetTwitterHandleFromAddressAsyncU3Ed__11_t564EC05B8242C8AFE6869B3C5E07CDE8F1F9C088* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m72B4B974CC60018DB132452C9A85C2A69C4B63F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t67DA9004B3CC9F416278880B1A23954597921D84* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m72B4B974CC60018DB132452C9A85C2A69C4B63F9(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m72B4B974CC60018DB132452C9A85C2A69C4B63F9_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetTwitterHandleFromAddressAsyncU3Ed__11_SetStateMachine_mA5866EFFF689224D3802FBB2967CD288214DA2D1_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetTwitterHandleFromAddressAsyncU3Ed__11_t564EC05B8242C8AFE6869B3C5E07CDE8F1F9C088* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetTwitterHandleFromAddressAsyncU3Ed__11_t564EC05B8242C8AFE6869B3C5E07CDE8F1F9C088*>(__this + _offset);
	U3CGetTwitterHandleFromAddressAsyncU3Ed__11_SetStateMachine_mA5866EFFF689224D3802FBB2967CD288214DA2D1(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Abstract.BaseClient::get_ProgramIdKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* BaseClient_get_ProgramIdKey_mA0104EA3A9EFF472EE43600EEF96E3BE41F96488 (BaseClient_t17729739896F3595EC6D20C2273EA5558597A030* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CProgramIdKeyU3Ek__BackingField_0;
		return L_0;
	}
}
// Solana.Unity.Rpc.IRpcClient Solana.Unity.Programs.Abstract.BaseClient::get_RpcClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseClient_get_RpcClient_mDC99C59F85131FF26A4B3A336BED28115177FAE4 (BaseClient_t17729739896F3595EC6D20C2273EA5558597A030* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CRpcClientU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Programs.Abstract.BaseClient::set_RpcClient(Solana.Unity.Rpc.IRpcClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseClient_set_RpcClient_mDED8EC0A4F3400165085F19B3368A0964A656DFE (BaseClient_t17729739896F3595EC6D20C2273EA5558597A030* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CRpcClientU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRpcClientU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Solana.Unity.Rpc.IStreamingRpcClient Solana.Unity.Programs.Abstract.BaseClient::get_StreamingRpcClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseClient_get_StreamingRpcClient_m31A16EE3DE5B5391430A9D3ADAEB2B563676A46B (BaseClient_t17729739896F3595EC6D20C2273EA5558597A030* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CStreamingRpcClientU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Programs.Abstract.BaseClient::set_StreamingRpcClient(Solana.Unity.Rpc.IStreamingRpcClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseClient_set_StreamingRpcClient_m402961DDDCC737B153D572A3FBD98C2E1E029087 (BaseClient_t17729739896F3595EC6D20C2273EA5558597A030* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CStreamingRpcClientU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStreamingRpcClientU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Solana.Unity.Programs.Abstract.BaseClient::.ctor(Solana.Unity.Rpc.IRpcClient,Solana.Unity.Rpc.IStreamingRpcClient,Solana.Unity.Wallet.PublicKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseClient__ctor_m8D233EA282BFD47627C379F84517E110287ACED8 (BaseClient_t17729739896F3595EC6D20C2273EA5558597A030* __this, RuntimeObject* ___rpcClient0, RuntimeObject* ___streamingRpcClient1, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programId2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___rpcClient0;
		BaseClient_set_RpcClient_mDED8EC0A4F3400165085F19B3368A0964A656DFE_inline(__this, L_0, NULL);
		RuntimeObject* L_1 = ___streamingRpcClient1;
		BaseClient_set_StreamingRpcClient_m402961DDDCC737B153D572A3FBD98C2E1E029087_inline(__this, L_1, NULL);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_2 = ___programId2;
		__this->___U3CProgramIdKeyU3Ek__BackingField_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProgramIdKeyU3Ek__BackingField_0), (void*)L_2);
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
// Solana.Unity.Wallet.PublicKey Solana.Unity.Programs.Abstract.BaseProgram::get_ProgramIdKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* BaseProgram_get_ProgramIdKey_m6139D02A962F716D42664CE79EA0BEECA5DAAE4D (BaseProgram_t9BFF1A2FDD436A147BDAE34D2A92899BAD67FF89* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->____programIdKey_0;
		return L_0;
	}
}
// System.String Solana.Unity.Programs.Abstract.BaseProgram::get_ProgramName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseProgram_get_ProgramName_mF5B1E4D98E256F5F2BF607FC0BF3FE29CB8B825A (BaseProgram_t9BFF1A2FDD436A147BDAE34D2A92899BAD67FF89* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____programName_1;
		return L_0;
	}
}
// System.Void Solana.Unity.Programs.Abstract.BaseProgram::.ctor(Solana.Unity.Wallet.PublicKey,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseProgram__ctor_m029276DAF68264583E816049559A384EA90545BA (BaseProgram_t9BFF1A2FDD436A147BDAE34D2A92899BAD67FF89* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___programIdKey0, String_t* ___programName1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___programIdKey0;
		__this->____programIdKey_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____programIdKey_0), (void*)L_0);
		String_t* L_1 = ___programName1;
		__this->____programName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____programName_1), (void*)L_1);
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
// System.Boolean Solana.Unity.Programs.Abstract.ByteFlag::get_Bit0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteFlag_get_Bit0_mF1288759156E5E3B88C60C1D11743F78E7E744B0 (ByteFlag_t3271B68D4C56AD6B5DBF14A75FCC9F3D764F9750* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0;
		L_0 = Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_inline(__this, Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8(((int64_t)(uint64_t)L_0), 1, Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ByteFlag::get_Bit1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteFlag_get_Bit1_m54BE0C0F0672740FB789F49874537DEC3CAEB00A (ByteFlag_t3271B68D4C56AD6B5DBF14A75FCC9F3D764F9750* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0;
		L_0 = Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_inline(__this, Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8(((int64_t)(uint64_t)L_0), 2, Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ByteFlag::get_Bit2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteFlag_get_Bit2_mF926142C9BD68690A52715AEB1D4039B2A54ECB1 (ByteFlag_t3271B68D4C56AD6B5DBF14A75FCC9F3D764F9750* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0;
		L_0 = Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_inline(__this, Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8(((int64_t)(uint64_t)L_0), 3, Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ByteFlag::get_Bit3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteFlag_get_Bit3_m9984DD3C34B6BEFBFC8171D97FA592A6B716EB0E (ByteFlag_t3271B68D4C56AD6B5DBF14A75FCC9F3D764F9750* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0;
		L_0 = Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_inline(__this, Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8(((int64_t)(uint64_t)L_0), 4, Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ByteFlag::get_Bit4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteFlag_get_Bit4_m0016DA94185C67606EFF2DD9AC7C56C84D2B4F28 (ByteFlag_t3271B68D4C56AD6B5DBF14A75FCC9F3D764F9750* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0;
		L_0 = Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_inline(__this, Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8(((int64_t)(uint64_t)L_0), 5, Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ByteFlag::get_Bit5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteFlag_get_Bit5_mDA24FF1DE8FCD126F7828139C5610D7A339AABF7 (ByteFlag_t3271B68D4C56AD6B5DBF14A75FCC9F3D764F9750* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0;
		L_0 = Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_inline(__this, Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8(((int64_t)(uint64_t)L_0), 6, Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ByteFlag::get_Bit6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteFlag_get_Bit6_m92EB45D934E054014240C7139290AF8151A489E6 (ByteFlag_t3271B68D4C56AD6B5DBF14A75FCC9F3D764F9750* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0;
		L_0 = Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_inline(__this, Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8(((int64_t)(uint64_t)L_0), 7, Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ByteFlag::get_Bit7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteFlag_get_Bit7_m68A9F89D6621CEBFCC2C667EDBD4D22385FD20D7 (ByteFlag_t3271B68D4C56AD6B5DBF14A75FCC9F3D764F9750* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0;
		L_0 = Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_inline(__this, Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8(((int64_t)(uint64_t)L_0), 8, Flag_1_IsKthBitSet_m9FBD2F0A2B297756C26A251AD74BB153834377E8_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Solana.Unity.Programs.Abstract.ByteFlag::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteFlag__ctor_m5D841615E128E98E49C2A8901AA923D5E15B4303 (ByteFlag_t3271B68D4C56AD6B5DBF14A75FCC9F3D764F9750* __this, uint8_t ___mask0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1__ctor_mEFC92F89CB9EAAFA5E38DB7129E26471AA400897_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ___mask0;
		Flag_1__ctor_mEFC92F89CB9EAAFA5E38DB7129E26471AA400897(__this, L_0, Flag_1__ctor_mEFC92F89CB9EAAFA5E38DB7129E26471AA400897_RuntimeMethod_var);
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
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit0_m2B4D402A8A5F537E9C71BBD8C0F981488380BA17 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), 1, Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit1_m9502593098F202EC80D01B823C4D7A642239126C (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), 2, Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit2_mEE55F1F1C2059FAC8E41F0480AB9094B69362CC0 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), 3, Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit3_m0978F21BDF13A4400E7F859B78ED0218AD87813E (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), 4, Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit4_m5780903695A42F322EB7B4EAC448593FD685D62D (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), 5, Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit5_mE15932A948968B0745E84ABB2EFC40C2DABD0CC2 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), 6, Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit6_mAE3F12A92A26953D1D5EED4488081ED00CE8143A (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), 7, Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit7_mC7E2643E9E4A227A501FB35E6414BACAC84C8792 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), 8, Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit8_m552971F78BDD2784CF87D2B37B101D5D48DBEEC4 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)9), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit9()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit9_m762260DA36FA10C8EB2DC6A4B264A29395A04869 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)10), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit10()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit10_m4E6FAA1DDEC0B073252D531112E70AD2CA24B92D (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)11), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit11()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit11_m83E19076A6F3D1B7ED119D1DD150375FDE2B9647 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)12), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit12()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit12_mEBF8042DC9F3EF55E20AB8ADDD4F1069CE7F5A37 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)13), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit13()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit13_m8AAD14B6E3ED08E82030B695F99D852B796D4D29 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)14), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit14()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit14_mE913B69E8AE7AA32547BA985857EBBEC3E75DE78 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)15), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit15()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit15_m16CCAF7C2FB0B6DAFB05108FD121897B46C7C613 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)16), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit16_mCC82CD6465247031177236FE582E165F7E09BC36 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)17), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit17()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit17_m658F13F5A595530622F5AF11E097E0B7ECB628B5 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)18), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit18()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit18_m8FF0CEC0DB464FE9ACC33B716236B1F089649EE4 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)19), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit19()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit19_mA38BEAABA3798A80BB1B071300E80D680479FAB4 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)20), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit20()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit20_mDB428F2FFBE22317453DFE02FA30DCD68F170D93 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)21), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit21()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit21_m42831490C5BBCFDD6E67F11C742E26412D59C9B4 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)22), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit22()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit22_mD603BABAC4618BD98EF0AAA84F6284283C54C0F0 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)23), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit23()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit23_m3A7B3DDD2C0F8A7E4DA40CF1C91A34DCBA97FFC4 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)24), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit24()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit24_m22AE252D6F05BCD91038FB1190A47C62062F8C87 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)25), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit25()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit25_m9CB1C40BE0D1F2795D7298B11570BA7389E77E46 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)26), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit26()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit26_m2A0EFDA46BDFFB0A9ACFFF573D9E0210C54DBCC8 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)27), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit27()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit27_mEB3BC11E42EF95EDDBBF58B5A94E392C8CAEDBE2 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)28), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit28()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit28_mA43EEFF8AE34140C1944857216DC4AF5A3D608E2 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)29), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit29()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit29_m03DA836D702354C0AEE9514C7E6340E9D3329137 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)30), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit30()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit30_m3020DE2179A0AF92A5331F69DD9E7C8A1BDD2B3B (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)31), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.IntFlag::get_Bit31()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntFlag_get_Bit31_mDE601EF59E4F2679D3A7A8E1A35ECF8EBC810D84 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0;
		L_0 = Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_inline(__this, Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B(((int64_t)(uint64_t)L_0), ((int32_t)32), Flag_1_IsKthBitSet_m647E35A24EF3A026CB8A61AA8BFE0371B91F148B_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Solana.Unity.Programs.Abstract.IntFlag::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntFlag__ctor_mDB0D99C8819F14A79D66114BD6D214EBB3E912A2 (IntFlag_t81D4275D3E6B08EE13B66DC81455388CF70FE52F* __this, uint32_t ___mask0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1__ctor_mA786DA3DD94698B2888FC3FB09DD936FC98EA0A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___mask0;
		Flag_1__ctor_mA786DA3DD94698B2888FC3FB09DD936FC98EA0A6(__this, L_0, Flag_1__ctor_mA786DA3DD94698B2888FC3FB09DD936FC98EA0A6_RuntimeMethod_var);
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
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit0_m957829DA439CAD1DEDA774D571972877A301BA08 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, 1, Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit1_mA087C5D676FE743A704E004BE84D972723C74507 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, 2, Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit2_m9EB3A5AD14EEF94CB8729A5088E6F0A0766E5A59 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, 3, Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit3_m953EBAABCF135B3C51DC3A2E220CF684B85755F0 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, 4, Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit4_mDE085FF3EBB73A5C70EAC2BB2D3F9597B875BFA8 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, 5, Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit5_mE39C8ABD89D5A367F41D4D68AFB355024B5C1730 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, 6, Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit6_mAA7E6A9881319E5C917929A547FA5790BD5A2940 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, 7, Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit7_m208954EEA794715B3ED5ADC19653CB53F6439062 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, 8, Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit8_mD27E5942A33FE4FEF8EB469AF77D0495F8B2C82F (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)9), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit9()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit9_mC1C52E01A4A61EA34CD3592B63DBE3CFC7E289A3 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)10), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit10()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit10_mFA349C247AB336677210AF5B95454C3CA4C5C42B (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)11), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit11()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit11_m78ABAD36F5A48BC16B970A4F0585CF72C6F02114 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)12), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit12()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit12_m8680082A24FE24E7A68EA454F72CBDCD75EC1224 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)13), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit13()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit13_m0BA751F015410ED4C236B1F00AE390AB6E50394E (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)14), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit14()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit14_m0C6876F830ED4D859B0D26E8DCC835846BEAFB5E (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)15), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit15()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit15_m2565D96BFD745FF2C2D11D76A76497165A01B5A5 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)16), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit16_mAA1C2BDE35B9CB2D4C6E31E823E71A045D6E0090 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)17), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit17()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit17_mF592FDB8762E2E05CA0730DFCE755A980B449A0D (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)18), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit18()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit18_mE8FEE3C54109CF092AAA700F82E970B25A7B62FD (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)19), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit19()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit19_mDCA91EE2FA343EABA5FE40F2A97151BCCD5C3605 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)20), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit20()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit20_m95A67A905C1E380F3F7C38D642933D360172B9B7 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)21), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit21()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit21_m5D1C0BA8AA95D75C65D46F082254AFB069E70708 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)22), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit22()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit22_m417BC35E748623AAB3A026DFECAA1C93C6618D9F (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)23), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit23()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit23_m29CF674650FBF6B67FA0C0542DC1CD1FBB7BB02F (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)24), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit24()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit24_mAC7529993EADCF41E66910C37563C3E61ED8A789 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)25), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit25()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit25_m8C38C1A15F2E9EFBAA7992BC44D326DC56855197 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)26), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit26()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit26_mB85516FFF827DD97ADAA92C24C6331E27BC75B11 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)27), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit27()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit27_m3678E80A95E88FCB6466A027A32EB588C6439B2B (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)28), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit28()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit28_mB376FFE8CCE762DEF939144BCD67F4ED3EE39909 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)29), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit29()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit29_m1F9930832A9B2D3D9A18F8AFCE3C92E3084F6C45 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)30), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit30()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit30_m99E34A6A3667215DD6019D4E121B145CDD6432B8 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)31), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit31()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit31_m09FE75F2B7152FBE31E43D7330014CD7FEFBD479 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)32), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit32_m6B5A5BCA5752863BA0166B3BEAD9189156750AD3 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)33), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit33()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit33_m2A3604FB108E9A7983FBF39D6145E58B5B23B8AE (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)34), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit34()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit34_mC56E09D2B2805108DD9C8EBD422BCCEAD62652E1 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)35), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit35()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit35_mE4C1F94BFD833CEF11000258B3CC96589054E827 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)36), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit36()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit36_mEF2151A73A4B9005AA0066E1ACA801263EE4064E (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)37), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit37()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit37_m6F1F596D41B9A68AF290E60BCB7EE5B6ED4C3FB7 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)38), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit38()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit38_m8E34D6F6DAA9994D00051F3FA4EFE919CD84C665 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)39), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit39()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit39_mA395454F14C187ED01C86D6320ED9E4B05C54242 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)40), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit40()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit40_m5C2266920E33183D0AF61B82ECEDB4C6847AF117 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)41), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit41()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit41_m30571789BB797FD22B47C91497DBDBF65562D496 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)42), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit42()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit42_mC43B4419C860767E5F8E57BB3C2121BF9D8D9132 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)43), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit43()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit43_m4D6658C74DBEF5573EC96AC1239FABF59CB99E47 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)44), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit44()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit44_m884BF6C311966005A9AF5F3EDF4E11A7653BBDD1 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)45), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit45()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit45_mCEB77DC66C17DE1827410E640C88B2C1AC781BD6 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)46), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit46()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit46_mDD8A667CFBAE7B1F69A933CD5C48C51D877000E2 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)47), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit47()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit47_m50BB944D913A1481CE31530EC24B1FC6A7C75889 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)48), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit48()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit48_m651EB8C37D6C0D9591E74FB7175BA82A4B690702 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)49), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit49()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit49_mC3CF009E67341CDE8DA96596D9D28DECD83519C4 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)50), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit50()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit50_m64A0220DB00EFFD18D1E7C3F9EB9C4542C1F1C49 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)51), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit51()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit51_m35D417C34758B469FE0100AA4691A7A81819E6E4 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)52), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit52()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit52_m118948ACB03F9FEE3FF89EECF3C6E2A044B825D1 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)53), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit53()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit53_mAA2B9B0E04469D949C8BF34F11D1BD1427BC96FA (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)54), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit54()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit54_m9699AE5C0C988EFDDFF75506A37DC34872127729 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)55), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit55()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit55_mC92926E867310F8C9A2863E3B84D219DACD5BD6A (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)56), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit56()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit56_mEB21024380EBC3CB6008743141F7EA8A922EFF8C (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)57), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit57()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit57_mB4CAA6269721B40CCE6EFE76C66A056F74BA682F (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)58), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit58()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit58_m81B8C5EF87213E4E8E805A1C6C1CD6F408025E71 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)59), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit59()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit59_m084F430A91C072AEBD77C20C77E4B085CF242C77 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)60), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit60()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit60_m7554F98F681DDCB0A9F96ECBAFB060B9B320BCD2 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)61), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit61()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit61_m7B34736FAB3637A9F3742297AE3B90151DFA2357 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)62), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit62()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit62_m06A363D0AB6DD5A8A07F7D6A7653CAA1E09CA443 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)63), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.LongFlag::get_Bit63()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongFlag_get_Bit63_mE6A81F6D26EE6F627915604B4334B13D409FA00A (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0;
		L_0 = Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_inline(__this, Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98(L_0, ((int32_t)64), Flag_1_IsKthBitSet_mAC2B5DB418468AF916D3CF4FBEE376B58D8E4F98_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Solana.Unity.Programs.Abstract.LongFlag::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongFlag__ctor_m9A740878E8AD0EC11B3912E3B3DA285807030311 (LongFlag_t1BA8DDA6EE194B89E3DB9090CD310BE8A3F4D497* __this, uint64_t ___mask0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1__ctor_mFB41DC134C69211941953E70C56BE5ABD076EEC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ___mask0;
		Flag_1__ctor_mFB41DC134C69211941953E70C56BE5ABD076EEC0(__this, L_0, Flag_1__ctor_mFB41DC134C69211941953E70C56BE5ABD076EEC0_RuntimeMethod_var);
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
// System.Boolean Solana.Unity.Programs.Abstract.ShortFlag::get_Bit0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortFlag_get_Bit0_mBA3FC80471E7FB7163AEC568BC172EB54E479E50 (ShortFlag_t027394942D6DDF44D3D88B49F5CA4061FB97284C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_inline(__this, Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991(((int64_t)(uint64_t)L_0), 1, Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ShortFlag::get_Bit1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortFlag_get_Bit1_mE8A22BF5AFA1A7EF7DC8CECDA55F52F4BA5D2B54 (ShortFlag_t027394942D6DDF44D3D88B49F5CA4061FB97284C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_inline(__this, Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991(((int64_t)(uint64_t)L_0), 2, Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ShortFlag::get_Bit2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortFlag_get_Bit2_m5C922D2E7A7125DF5DACB9F999C67DF7D025C128 (ShortFlag_t027394942D6DDF44D3D88B49F5CA4061FB97284C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_inline(__this, Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991(((int64_t)(uint64_t)L_0), 3, Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ShortFlag::get_Bit3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortFlag_get_Bit3_mC36CD4A571ABDC08DBDAA43AABFBFAA02F2D3677 (ShortFlag_t027394942D6DDF44D3D88B49F5CA4061FB97284C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_inline(__this, Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991(((int64_t)(uint64_t)L_0), 4, Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ShortFlag::get_Bit4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortFlag_get_Bit4_mA5140AD2FEE494BD8022D3F99FD270395B6A1A29 (ShortFlag_t027394942D6DDF44D3D88B49F5CA4061FB97284C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_inline(__this, Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991(((int64_t)(uint64_t)L_0), 5, Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ShortFlag::get_Bit5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortFlag_get_Bit5_mD0A95F119680E9A87BC8FF14A460CBB8E96DF23F (ShortFlag_t027394942D6DDF44D3D88B49F5CA4061FB97284C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_inline(__this, Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991(((int64_t)(uint64_t)L_0), 6, Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ShortFlag::get_Bit6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortFlag_get_Bit6_mA85C330A1897C5EB67D37B2AC1FA98CA3975E0F0 (ShortFlag_t027394942D6DDF44D3D88B49F5CA4061FB97284C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_inline(__this, Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991(((int64_t)(uint64_t)L_0), 7, Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ShortFlag::get_Bit7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortFlag_get_Bit7_m655225D1172BFECF13063F086E4FC8C4C581D38C (ShortFlag_t027394942D6DDF44D3D88B49F5CA4061FB97284C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_inline(__this, Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991(((int64_t)(uint64_t)L_0), 8, Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ShortFlag::get_Bit8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortFlag_get_Bit8_m54F0A420AB65E8D141C888E5C0203CAB9B7E5A6E (ShortFlag_t027394942D6DDF44D3D88B49F5CA4061FB97284C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_inline(__this, Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991(((int64_t)(uint64_t)L_0), ((int32_t)9), Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ShortFlag::get_Bit9()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortFlag_get_Bit9_m41A59B2C1F3A3A0FBD9BB63F266FE8D5DD2F487E (ShortFlag_t027394942D6DDF44D3D88B49F5CA4061FB97284C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_inline(__this, Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991(((int64_t)(uint64_t)L_0), ((int32_t)10), Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ShortFlag::get_Bit10()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortFlag_get_Bit10_m95B2D0AF73ABA0E86D0DE6F93679A6A61AA2F61E (ShortFlag_t027394942D6DDF44D3D88B49F5CA4061FB97284C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_inline(__this, Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991(((int64_t)(uint64_t)L_0), ((int32_t)11), Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ShortFlag::get_Bit11()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortFlag_get_Bit11_mA7FDB853540E88FD3273079B5E407B8BB1AD62A6 (ShortFlag_t027394942D6DDF44D3D88B49F5CA4061FB97284C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_inline(__this, Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991(((int64_t)(uint64_t)L_0), ((int32_t)12), Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ShortFlag::get_Bit12()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortFlag_get_Bit12_m83652FCC1CF9E066E401DBECC04BD757466E0044 (ShortFlag_t027394942D6DDF44D3D88B49F5CA4061FB97284C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_inline(__this, Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991(((int64_t)(uint64_t)L_0), ((int32_t)13), Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ShortFlag::get_Bit13()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortFlag_get_Bit13_m18959D9A66759B049C4734D0BBB2043AD9EB033A (ShortFlag_t027394942D6DDF44D3D88B49F5CA4061FB97284C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_inline(__this, Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991(((int64_t)(uint64_t)L_0), ((int32_t)14), Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ShortFlag::get_Bit14()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortFlag_get_Bit14_m258E35D48186733A18C8F1B6F6864954ABE50730 (ShortFlag_t027394942D6DDF44D3D88B49F5CA4061FB97284C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_inline(__this, Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991(((int64_t)(uint64_t)L_0), ((int32_t)15), Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Solana.Unity.Programs.Abstract.ShortFlag::get_Bit15()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortFlag_get_Bit15_m1B8A2365E6036756185DB5ABD05E4C8F35043651 (ShortFlag_t027394942D6DDF44D3D88B49F5CA4061FB97284C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0;
		L_0 = Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_inline(__this, Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_RuntimeMethod_var);
		bool L_1;
		L_1 = Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991(((int64_t)(uint64_t)L_0), ((int32_t)16), Flag_1_IsKthBitSet_m99A6FB341280FFFA3B5352911C4009752BE4F991_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Solana.Unity.Programs.Abstract.ShortFlag::.ctor(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortFlag__ctor_m21AED034039EF0E08173E415951E069D1BC04239 (ShortFlag_t027394942D6DDF44D3D88B49F5CA4061FB97284C* __this, uint16_t ___mask0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flag_1__ctor_m0A87910CBC04931326EBFA67E8846E0F461D11FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint16_t L_0 = ___mask0;
		Flag_1__ctor_m0A87910CBC04931326EBFA67E8846E0F461D11FE(__this, L_0, Flag_1__ctor_m0A87910CBC04931326EBFA67E8846E0F461D11FE_RuntimeMethod_var);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseClient_get_RpcClient_mDC99C59F85131FF26A4B3A336BED28115177FAE4_inline (BaseClient_t17729739896F3595EC6D20C2273EA5558597A030* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CRpcClientU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* BaseClient_get_ProgramIdKey_mA0104EA3A9EFF472EE43600EEF96E3BE41F96488_inline (BaseClient_t17729739896F3595EC6D20C2273EA5558597A030* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CProgramIdKeyU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemCmp_set_Bytes_mCDC0CAE1E02E4847F4BD1155280B968EA5E4E550_inline (MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CBytesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBytesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemCmp_set_Offset_mCB83B81A3939A37B8DF0EFD827F906F7814E4ECC_inline (MemCmp_t4BE71C090A166F2609527558672FEA01DB81F689* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3COffsetU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* AccountKeyPair_get_Account_m1953E7F21E2813875D1B5088D80206F6BA7685B0_inline (AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* __this, const RuntimeMethod* method) 
{
	{
		AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* L_0 = __this->___U3CAccountU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* AccountInfo_get_Data_mD10117914E4AB951B8D8F9211496B9EB2DACD646_inline (AccountInfo_tA8F8793AFBFF73090B460192B39BA38F79B1032D* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CDataU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RecordHeader_get_ParentName_m4E10D3CCDC337A87ACEDC73F80BD745AAC948D6C_inline (RecordHeader_tD2952D3C4FFC294B9E534F9091941AA8435ED032* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CParentNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AccountKeyPair_get_PublicKey_m339EFDACB82C95204D2F142EFF64DE6B46463DC4_inline (AccountKeyPair_t983B016344E4C892AB42348DDC9243D05618A36C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPublicKeyU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* RecordHeader_get_Class_m334C541ACD67621BC25D1845D590C31E007D0B41_inline (RecordHeader_tD2952D3C4FFC294B9E534F9091941AA8435ED032* __this, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = __this->___U3CClassU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecordBase_set_AccountAddress_m85E14042052E6E5422CED56BAC68D37E1B2E73F4_inline (RecordBase_t953BABA34828F7E098182F7EE652F8EB205988C4* __this, PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* ___value0, const RuntimeMethod* method) 
{
	{
		PublicKey_t6F22B541109DEBE6AFC7B2093079B92AF5DAF751* L_0 = ___value0;
		__this->___U3CAccountAddressU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAccountAddressU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReverseNameRecord_set_Value_m8E5F5E61BED1A76033ACBC97B843DA9F1F99966A_inline (ReverseNameRecord_t58FFC94FBBE06D572ED02190EBD4AB2CF3635A67* __this, NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* ___value0, const RuntimeMethod* method) 
{
	{
		NameRecord_t95DF21678F9E34406E13501D053C2E1468A8A8A4* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseClient_set_RpcClient_mDED8EC0A4F3400165085F19B3368A0964A656DFE_inline (BaseClient_t17729739896F3595EC6D20C2273EA5558597A030* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CRpcClientU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRpcClientU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseClient_set_StreamingRpcClient_m402961DDDCC737B153D572A3FBD98C2E1E029087_inline (BaseClient_t17729739896F3595EC6D20C2273EA5558597A030* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CStreamingRpcClientU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStreamingRpcClientU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RequestResult_1_get_Result_m37897891F48B9F2ADF46524718A671C1F7F827CC_gshared_inline (RequestResult_1_tF25E3B2C01F82A444D7625EB9C476DC8437EBA24* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CResultU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ResponseValue_1_get_Value_m6C5854737B78630F19EC3D59B572C8A944FE1A18_gshared_inline (ResponseValue_1_t8663D687999D2DEE6072DDA9FD2059BBDE351512* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Flag_1_get_Value_m81805DC5ADDC244845F6FDC798641D0C5CBE205D_gshared_inline (Flag_1_tE856994BD2E54D4E30C969685660983436342634* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = (uint8_t)__this->___U3CValueU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Flag_1_get_Value_m8B291CCD1D698EF0FD3BAB82908014094C79C8AA_gshared_inline (Flag_1_t5F036E33115A67358CFAC2988A37EDD24D4199E0* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = (uint32_t)__this->___U3CValueU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Flag_1_get_Value_mFF59327B8924F49928635F5E151B969F5D7C4CE3_gshared_inline (Flag_1_tCB7EECC164DEDA2B11A472F448D1C3512B6CB272* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = (uint64_t)__this->___U3CValueU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t Flag_1_get_Value_m28027BE2C35391443785957F6FF39BA13B5DB11C_gshared_inline (Flag_1_tF3FDBDBE20F5EC193AB8508F4A0DE89722A3330B* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = (uint16_t)__this->___U3CValueU3Ek__BackingField_0;
		return L_0;
	}
}
