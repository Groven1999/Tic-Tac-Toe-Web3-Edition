#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Action`1<Websocket.Client.DisconnectionInfo>
struct Action_1_tB3B791BFE042AC67D218182694F33E2798009116;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Websocket.Client.ResponseMessage>
struct Action_1_t25DD9585A2EAA754EFE905A4853601E7C023748B;
// System.Threading.Channels.Channel`1<System.ArraySegment`1<System.Byte>>
struct Channel_1_tC50A91611F4F0F4CB71F56C1821E9AC6092048BC;
// System.Threading.Channels.Channel`1<System.String>
struct Channel_1_tE2546F1559226CB005449E3B3C4B71E637C5F17F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.EventHandler`1<System.Exception>
struct EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<System.String>
struct EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4;
// System.Func`1<System.Net.WebSockets.ClientWebSocket>
struct Func_1_t97EB92A7DEA37DFF8B17C5309B2DE692A3FCC3D5;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`3<System.Uri,System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocket>>
struct Func_3_tEBDF4CDEE04E142D7FABF6FD06FB35FBE6FBA55E;
// System.IObservable`1<Websocket.Client.DisconnectionInfo>
struct IObservable_1_tCBF6BE6861E59EB43AB9CE083DF1BC69441CAAF5;
// System.IObservable`1<System.Object>
struct IObservable_1_t3B5CA6CF57A9734CD1D166FB2074FE7FB725EDDC;
// System.IObservable`1<Websocket.Client.ResponseMessage>
struct IObservable_1_t2071C906186E707243779284D9343BC6CED83315;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Reactive.Subjects.Subject`1<Websocket.Client.DisconnectionInfo>
struct Subject_1_t5505263F971E1C64DE39E1F4598B810EB03F26A3;
// System.Reactive.Subjects.Subject`1<Websocket.Client.Models.ReconnectionInfo>
struct Subject_1_t24D4EAFD0283B47F19605B19B0BC1F78F87294FC;
// System.Reactive.Subjects.Subject`1<Websocket.Client.ResponseMessage>
struct Subject_1_t0EDAAC6DCF4AB372FA5E8B7293AA827054DD7E51;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.TaskCompletionSource`1<Websocket.Client.WebsocketClient>
struct TaskCompletionSource_1_t9761864C9CCF781E46490D74AFE01CD5910B45CF;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.TaskFactory`1<WalletConnectSharp.Network.IJsonRpcConnection>
struct TaskFactory_1_t01676E778B25830FA32DF2046B1351E371234734;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.TaskFactory`1<Websocket.Client.WebsocketClient>
struct TaskFactory_1_tB71861254D9BF377A104CAC3387C0C64B1F6AFC4;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<WalletConnectSharp.Network.IJsonRpcConnection>
struct Task_1_t6B7C1E82378BEC85DDAD7EF03D99F766A7D25845;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Threading.Tasks.Task`1<Websocket.Client.WebsocketClient>
struct Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE;
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
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Net.WebSockets.ClientWebSocket
struct ClientWebSocket_tCA318357FEA5850DFE2109A0139A57F152E0D71F;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Websocket.Client.DisconnectionInfo
struct DisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t7C1BCE55B066EE388E90CAE7882D22E7168D7777;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// WalletConnectSharp.Network.IJsonRpcConnection
struct IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B;
// WalletConnectSharp.Network.IJsonRpcError
struct IJsonRpcError_t8190B894324170342D6158CD135DA69D27165377;
// WalletConnectSharp.Network.IJsonRpcPayload
struct IJsonRpcPayload_tF91CB2D66F132D8088D3FA1D1EE87430B7E79D8B;
// Websocket.Client.Logging.ILog
struct ILog_tB94E21C00D2E118651E7D23B9B39D0BF8AD58B96;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.RefSafetyRulesAttribute
struct RefSafetyRulesAttribute_t4DC8366B43C513036C9EC1F0D4AD2E82DB864DDE;
// Websocket.Client.ResponseMessage
struct ResponseMessage_tED4D8300EA9964C3E02206B936A4F2CB7533AE80;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Threading.Timer
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Net.WebSockets.WebSocket
struct WebSocket_tE3DEAFF0F68BD5AF9A526D29D56B6E5C6E24C3A1;
// Websocket.Client.Threading.WebsocketAsyncLock
struct WebsocketAsyncLock_t1D7A1A5EC41BAD2E472F1011979314A3581E67C2;
// Websocket.Client.WebsocketClient
struct WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42;
// WalletConnectSharp.Network.Websocket.WebsocketConnection
struct WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502;
// WalletConnectSharp.Network.Websocket.WebsocketConnectionBuilder
struct WebsocketConnectionBuilder_tCAAA5B6D7EE0312222EC6A090EACDD60E91FD27A;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// WalletConnectSharp.Network.Websocket.WebsocketConnection/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_t83EC8829815D592BB13654648A8131DF827E3CBF;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t25DD9585A2EAA754EFE905A4853601E7C023748B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tB3B791BFE042AC67D218182694F33E2798009116_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t9761864C9CCF781E46490D74AFE01CD5910B45CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass38_0_t83EC8829815D592BB13654648A8131DF827E3CBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1AD1343DB3A97059C466420CD2F7E238428CC0ED;
IL2CPP_EXTERN_C String_t* _stringLiteral61CB1B3F548878CE62C6F095AFBDA5027B0B0B52;
IL2CPP_EXTERN_C String_t* _stringLiteral94F43EF3F5CCE08D85E6D263E511720AE2E14341;
IL2CPP_EXTERN_C String_t* _stringLiteral9DC2C21BDBB5EF90A44734D6C7AC4FF08AC84721;
IL2CPP_EXTERN_C String_t* _stringLiteralFA0C1A108A78C23737119DA2ECE6410D0FE287A4;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_mB44789FBBB0CA8ECD951DC96D21882FCD898F927_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_m504985EEBA4079D12005C93E2014170E56F75B79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mC370F06C7088CFC009D77DFA4AA710D9265FD363_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m1604359F88263AC650B4A59E0B6CA8619532BB60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mFC8FE32AA7E96D429F6099747DCD766382369489_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mDBAD3A8D38DF3346DE2E83B89580CADD6AB1C37C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_mE20E932176F1D006BFCBD53C323E013D77704186_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m286BDF24C3C8EE7D45E2862A307A431C1C87DAF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631_m47B4A85BCD7CDE70C9805BE1237872D068B41D1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C_TisU3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B_m8D96CA455269F3BB0D60CCA6FE9F42355A18B41F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C_TisU3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5_m0FA3600E13ED21FB51B20BDC7A0F93624DC28461_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631_mD1A25E29C9F11D655E52F6173891D9A64D891E4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B_mE996F47AE81AB817417FB53BFB50ED9A4D21A260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5_m36DC1467C8FE136FBE428763C48D01C8064647D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__47_t623F34BBDC207961DBCB36B7642E7F4E20A91E84_mD36D805E674BB2EDAFF56688D5A7674E4CD22BFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_ListenOnce_TisException_t_mB76D1D1B6F83F65BCD7B5C3FF37861FAECA9F1A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_ListenOnce_TisRuntimeObject_mCA6F1CF8D234E1F9283EF88B716F7FEB82278369_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mAC60001B01BC8FCA7B8D1E3913BBEB34A470FC03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObservableExtensions_Subscribe_TisDisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316_mC44B882C1B193391E18CE0A7F09943399ACAEF24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObservableExtensions_Subscribe_TisResponseMessage_tED4D8300EA9964C3E02206B936A4F2CB7533AE80_m197084ECE244D749A076AC58DEAE6D1E56C63AFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m83A3D4BB779A85D99DBEC93AEE48C15E06FBD9C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m0BEC9DDD70EBEF4B771D326A87019AD5CC446D67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_m51EBF864A9661992BDE2128FD7979E722A358D98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m99EA6B06B3ADE84A63353044CD61FA3B69C1F488_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mB03449DB934A552ACBFF79684C4FCF87FA9DDA94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m79ABE43C1E2FABC70D3743294BB2AACD93D3DF67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m9728DBE404D36E613EADFFDE46FA495F80CA209F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m471D8E5ACAD5D9F165A26BF6936D8E615A33E182_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisIJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_mCA222BDDC225EC0F3F732A8E361A46EA28D9D007_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCloseU3Ed__43_MoveNext_mB2D1B89F715EE48D41ED53E3F35BA5391A9A3FF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRegisterU3Ed__38_MoveNext_mC542F70E0E3DF362A5C9A3CB38FE5B72647B66EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass38_0_U3CRegisterU3Eb__0_mC76D20730F4C9A99A6B7857EA49BF4FD27B2CB1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass38_0_U3CRegisterU3Eb__1_m18B073920952354CD2BE165F8852799880086AD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebsocketConnection_OnDisconnect_mF0846C98EF98729C5FAA7CE4A2B258DC9F360F9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebsocketConnection_OnError_TisRuntimeObject_m2D6A8CBD2B1C6F5D5522ECA9FD615E7D24F6FE11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebsocketConnection_OnPayload_m6E380D77D226CE32A0ED4185CB1A2FD84BEB3BFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebsocketConnection__ctor_mF28E0FE9675FC5562B7278343487AF95CFA3A43C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tDE5172FCEF88EA0C4AEE336C5E30D0B00190D538 
{
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<Websocket.Client.WebsocketClient>
struct TaskCompletionSource_1_t9761864C9CCF781E46490D74AFE01CD5910B45CF  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE* ____task_0;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
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

// WalletConnectSharp.Network.Websocket.WebsocketConnectionBuilder
struct WebsocketConnectionBuilder_tCAAA5B6D7EE0312222EC6A090EACDD60E91FD27A  : public RuntimeObject
{
};

// WalletConnectSharp.Network.Websocket.WebsocketConnection/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_t83EC8829815D592BB13654648A8131DF827E3CBF  : public RuntimeObject
{
	// System.Threading.Tasks.TaskCompletionSource`1<Websocket.Client.WebsocketClient> WalletConnectSharp.Network.Websocket.WebsocketConnection/<>c__DisplayClass38_0::registeringTask
	TaskCompletionSource_1_t9761864C9CCF781E46490D74AFE01CD5910B45CF* ___registeringTask_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>
struct TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Websocket.Client.WebsocketClient>
struct TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_38;
};

// System.Threading.Tasks.Task`1<WalletConnectSharp.Network.IJsonRpcConnection>
struct Task_1_t6B7C1E82378BEC85DDAD7EF03D99F766A7D25845  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_38;
};

// System.Threading.Tasks.Task`1<Websocket.Client.WebsocketClient>
struct Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* ___m_result_38;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t7C1BCE55B066EE388E90CAE7882D22E7168D7777  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
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

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
struct RefSafetyRulesAttribute_t4DC8366B43C513036C9EC1F0D4AD2E82DB864DDE  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 System.Runtime.CompilerServices.RefSafetyRulesAttribute::Version
	int32_t ___Version_0;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Websocket.Client.WebsocketClient>
struct AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE* ___m_task_2;
};

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value_1;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
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

// Websocket.Client.DisconnectionType
struct DisconnectionType_t2FA31176A0B338F34F5119FFE3C2F9A934DCB311 
{
	// System.Int32 Websocket.Client.DisconnectionType::value__
	int32_t ___value___2;
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

// System.Int32Enum
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;
};

// System.Threading.Tasks.TaskCreationOptions
struct TaskCreationOptions_tB15CB42D61B8958640A7C702A79097B56D5C7ABA 
{
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___2;
};

// System.UriIdnScope
struct UriIdnScope_t001CC97A6F977E9BB7DB855CC6BA415A7F47491F 
{
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;
};

// System.Net.WebSockets.WebSocketCloseStatus
struct WebSocketCloseStatus_tED432212F88FCCA42F59AAA6BCF82962A2CFF4DF 
{
	// System.Int32 System.Net.WebSockets.WebSocketCloseStatus::value__
	int32_t ___value___2;
};

// System.Net.WebSockets.WebSocketMessageType
struct WebSocketMessageType_t7EA078C3F0E1D384B2F3B09BDA8CFD61406A9EC9 
{
	// System.Int32 System.Net.WebSockets.WebSocketMessageType::value__
	int32_t ___value___2;
};

// WalletConnectSharp.Network.Websocket.WebsocketConnection
struct WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502  : public RuntimeObject
{
	// Websocket.Client.WebsocketClient WalletConnectSharp.Network.Websocket.WebsocketConnection::_socket
	WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* ____socket_0;
	// System.String WalletConnectSharp.Network.Websocket.WebsocketConnection::_url
	String_t* ____url_1;
	// System.Boolean WalletConnectSharp.Network.Websocket.WebsocketConnection::_registering
	bool ____registering_2;
	// System.Guid WalletConnectSharp.Network.Websocket.WebsocketConnection::_context
	Guid_t ____context_3;
	// System.Boolean WalletConnectSharp.Network.Websocket.WebsocketConnection::Disposed
	bool ___Disposed_4;
	// System.TimeSpan WalletConnectSharp.Network.Websocket.WebsocketConnection::OpenTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___OpenTimeout_5;
	// System.Boolean WalletConnectSharp.Network.Websocket.WebsocketConnection::<IsPaused>k__BackingField
	bool ___U3CIsPausedU3Ek__BackingField_6;
	// System.EventHandler`1<System.String> WalletConnectSharp.Network.Websocket.WebsocketConnection::PayloadReceived
	EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* ___PayloadReceived_7;
	// System.EventHandler WalletConnectSharp.Network.Websocket.WebsocketConnection::Closed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___Closed_8;
	// System.EventHandler`1<System.Exception> WalletConnectSharp.Network.Websocket.WebsocketConnection::ErrorReceived
	EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* ___ErrorReceived_9;
	// System.EventHandler`1<System.Object> WalletConnectSharp.Network.Websocket.WebsocketConnection::Opened
	EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* ___Opened_10;
	// System.EventHandler`1<System.Exception> WalletConnectSharp.Network.Websocket.WebsocketConnection::RegisterErrored
	EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* ___RegisterErrored_11;
};

// System.Uri/Flags
struct Flags_t47CF4DB4036A6A539AFA6EE39C75F772E865E897 
{
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus>
struct Nullable_1_t4936015D54B4E5C3191E452324F5F52BD55E1284 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
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

// Websocket.Client.ResponseMessage
struct ResponseMessage_tED4D8300EA9964C3E02206B936A4F2CB7533AE80  : public RuntimeObject
{
	// System.String Websocket.Client.ResponseMessage::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_0;
	// System.Byte[] Websocket.Client.ResponseMessage::<Binary>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CBinaryU3Ek__BackingField_1;
	// System.Net.WebSockets.WebSocketMessageType Websocket.Client.ResponseMessage::<MessageType>k__BackingField
	int32_t ___U3CMessageTypeU3Ek__BackingField_2;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

// Websocket.Client.WebsocketClient
struct WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42  : public RuntimeObject
{
	// Websocket.Client.Threading.WebsocketAsyncLock Websocket.Client.WebsocketClient::_locker
	WebsocketAsyncLock_t1D7A1A5EC41BAD2E472F1011979314A3581E67C2* ____locker_1;
	// System.Func`3<System.Uri,System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocket>> Websocket.Client.WebsocketClient::_connectionFactory
	Func_3_tEBDF4CDEE04E142D7FABF6FD06FB35FBE6FBA55E* ____connectionFactory_2;
	// System.Uri Websocket.Client.WebsocketClient::_url
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____url_3;
	// System.Threading.Timer Websocket.Client.WebsocketClient::_lastChanceTimer
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ____lastChanceTimer_4;
	// System.DateTime Websocket.Client.WebsocketClient::_lastReceivedMsg
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____lastReceivedMsg_5;
	// System.Boolean Websocket.Client.WebsocketClient::_disposing
	bool ____disposing_6;
	// System.Boolean Websocket.Client.WebsocketClient::_reconnecting
	bool ____reconnecting_7;
	// System.Boolean Websocket.Client.WebsocketClient::_stopping
	bool ____stopping_8;
	// System.Boolean Websocket.Client.WebsocketClient::_isReconnectionEnabled
	bool ____isReconnectionEnabled_9;
	// System.Net.WebSockets.WebSocket Websocket.Client.WebsocketClient::_client
	WebSocket_tE3DEAFF0F68BD5AF9A526D29D56B6E5C6E24C3A1* ____client_10;
	// System.Threading.CancellationTokenSource Websocket.Client.WebsocketClient::_cancellation
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____cancellation_11;
	// System.Threading.CancellationTokenSource Websocket.Client.WebsocketClient::_cancellationTotal
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____cancellationTotal_12;
	// System.Reactive.Subjects.Subject`1<Websocket.Client.ResponseMessage> Websocket.Client.WebsocketClient::_messageReceivedSubject
	Subject_1_t0EDAAC6DCF4AB372FA5E8B7293AA827054DD7E51* ____messageReceivedSubject_13;
	// System.Reactive.Subjects.Subject`1<Websocket.Client.Models.ReconnectionInfo> Websocket.Client.WebsocketClient::_reconnectionSubject
	Subject_1_t24D4EAFD0283B47F19605B19B0BC1F78F87294FC* ____reconnectionSubject_14;
	// System.Reactive.Subjects.Subject`1<Websocket.Client.DisconnectionInfo> Websocket.Client.WebsocketClient::_disconnectedSubject
	Subject_1_t5505263F971E1C64DE39E1F4598B810EB03F26A3* ____disconnectedSubject_15;
	// System.Nullable`1<System.TimeSpan> Websocket.Client.WebsocketClient::<ReconnectTimeout>k__BackingField
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___U3CReconnectTimeoutU3Ek__BackingField_16;
	// System.Nullable`1<System.TimeSpan> Websocket.Client.WebsocketClient::<ErrorReconnectTimeout>k__BackingField
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___U3CErrorReconnectTimeoutU3Ek__BackingField_17;
	// System.String Websocket.Client.WebsocketClient::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_18;
	// System.Boolean Websocket.Client.WebsocketClient::<IsStarted>k__BackingField
	bool ___U3CIsStartedU3Ek__BackingField_19;
	// System.Boolean Websocket.Client.WebsocketClient::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_20;
	// System.Boolean Websocket.Client.WebsocketClient::<IsTextMessageConversionEnabled>k__BackingField
	bool ___U3CIsTextMessageConversionEnabledU3Ek__BackingField_21;
	// System.Text.Encoding Websocket.Client.WebsocketClient::<MessageEncoding>k__BackingField
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___U3CMessageEncodingU3Ek__BackingField_22;
	// System.Threading.Channels.Channel`1<System.String> Websocket.Client.WebsocketClient::_messagesTextToSendQueue
	Channel_1_tE2546F1559226CB005449E3B3C4B71E637C5F17F* ____messagesTextToSendQueue_23;
	// System.Threading.Channels.Channel`1<System.ArraySegment`1<System.Byte>> Websocket.Client.WebsocketClient::_messagesBinaryToSendQueue
	Channel_1_tC50A91611F4F0F4CB71F56C1821E9AC6092048BC* ____messagesBinaryToSendQueue_24;
};

// WalletConnectSharp.Network.Websocket.WebsocketConnection/<Dispose>d__47
struct U3CDisposeU3Ed__47_t623F34BBDC207961DBCB36B7642E7F4E20A91E84 
{
	// System.Int32 WalletConnectSharp.Network.Websocket.WebsocketConnection/<Dispose>d__47::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WalletConnectSharp.Network.Websocket.WebsocketConnection/<Dispose>d__47::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// WalletConnectSharp.Network.Websocket.WebsocketConnection WalletConnectSharp.Network.Websocket.WebsocketConnection/<Dispose>d__47::<>4__this
	WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* ___U3CU3E4__this_2;
};

// WalletConnectSharp.Network.Websocket.WebsocketConnection/<Register>d__38
struct U3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01 
{
	// System.Int32 WalletConnectSharp.Network.Websocket.WebsocketConnection/<Register>d__38::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Websocket.Client.WebsocketClient> WalletConnectSharp.Network.Websocket.WebsocketConnection/<Register>d__38::<>t__builder
	AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64 ___U3CU3Et__builder_1;
	// System.String WalletConnectSharp.Network.Websocket.WebsocketConnection/<Register>d__38::url
	String_t* ___url_2;
	// WalletConnectSharp.Network.Websocket.WebsocketConnection WalletConnectSharp.Network.Websocket.WebsocketConnection/<Register>d__38::<>4__this
	WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* ___U3CU3E4__this_3;
	// WalletConnectSharp.Network.Websocket.WebsocketConnection/<>c__DisplayClass38_0 WalletConnectSharp.Network.Websocket.WebsocketConnection/<Register>d__38::<>8__1
	U3CU3Ec__DisplayClass38_0_t83EC8829815D592BB13654648A8131DF827E3CBF* ___U3CU3E8__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Websocket.Client.WebsocketClient> WalletConnectSharp.Network.Websocket.WebsocketConnection/<Register>d__38::<>u__1
	TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter WalletConnectSharp.Network.Websocket.WebsocketConnection/<Register>d__38::<>u__2
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__2_6;
};

// System.Action`1<Websocket.Client.DisconnectionInfo>
struct Action_1_tB3B791BFE042AC67D218182694F33E2798009116  : public MulticastDelegate_t
{
};

// System.Action`1<Websocket.Client.ResponseMessage>
struct Action_1_t25DD9585A2EAA754EFE905A4853601E7C023748B  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Exception>
struct EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.String>
struct EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4  : public MulticastDelegate_t
{
};

// System.Func`1<System.Net.WebSockets.ClientWebSocket>
struct Func_1_t97EB92A7DEA37DFF8B17C5309B2DE692A3FCC3D5  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Websocket.Client.DisconnectionInfo
struct DisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316  : public RuntimeObject
{
	// Websocket.Client.DisconnectionType Websocket.Client.DisconnectionInfo::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_0;
	// System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus> Websocket.Client.DisconnectionInfo::<CloseStatus>k__BackingField
	Nullable_1_t4936015D54B4E5C3191E452324F5F52BD55E1284 ___U3CCloseStatusU3Ek__BackingField_1;
	// System.String Websocket.Client.DisconnectionInfo::<CloseStatusDescription>k__BackingField
	String_t* ___U3CCloseStatusDescriptionU3Ek__BackingField_2;
	// System.String Websocket.Client.DisconnectionInfo::<SubProtocol>k__BackingField
	String_t* ___U3CSubProtocolU3Ek__BackingField_3;
	// System.Exception Websocket.Client.DisconnectionInfo::<Exception>k__BackingField
	Exception_t* ___U3CExceptionU3Ek__BackingField_4;
	// System.Boolean Websocket.Client.DisconnectionInfo::<CancelReconnection>k__BackingField
	bool ___U3CCancelReconnectionU3Ek__BackingField_5;
	// System.Boolean Websocket.Client.DisconnectionInfo::<CancelClosing>k__BackingField
	bool ___U3CCancelClosingU3Ek__BackingField_6;
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// WalletConnectSharp.Network.Websocket.WebsocketConnection/<Close>d__43
struct U3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631 
{
	// System.Int32 WalletConnectSharp.Network.Websocket.WebsocketConnection/<Close>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder WalletConnectSharp.Network.Websocket.WebsocketConnection/<Close>d__43::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// WalletConnectSharp.Network.Websocket.WebsocketConnection WalletConnectSharp.Network.Websocket.WebsocketConnection/<Close>d__43::<>4__this
	WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> WalletConnectSharp.Network.Websocket.WebsocketConnection/<Close>d__43::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_3;
};

// WalletConnectSharp.Network.Websocket.WebsocketConnection/<Open>d__36
struct U3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B 
{
	// System.Int32 WalletConnectSharp.Network.Websocket.WebsocketConnection/<Open>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder WalletConnectSharp.Network.Websocket.WebsocketConnection/<Open>d__36::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// WalletConnectSharp.Network.Websocket.WebsocketConnection WalletConnectSharp.Network.Websocket.WebsocketConnection/<Open>d__36::<>4__this
	WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Websocket.Client.WebsocketClient> WalletConnectSharp.Network.Websocket.WebsocketConnection/<Open>d__36::<>u__1
	TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C ___U3CU3Eu__1_3;
};

// WalletConnectSharp.Network.Websocket.WebsocketConnection/<SendError>d__46
struct U3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5 
{
	// System.Int32 WalletConnectSharp.Network.Websocket.WebsocketConnection/<SendError>d__46::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder WalletConnectSharp.Network.Websocket.WebsocketConnection/<SendError>d__46::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// WalletConnectSharp.Network.Websocket.WebsocketConnection WalletConnectSharp.Network.Websocket.WebsocketConnection/<SendError>d__46::<>4__this
	WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* ___U3CU3E4__this_2;
	// WalletConnectSharp.Network.IJsonRpcError WalletConnectSharp.Network.Websocket.WebsocketConnection/<SendError>d__46::requestPayload
	RuntimeObject* ___requestPayload_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Websocket.Client.WebsocketClient> WalletConnectSharp.Network.Websocket.WebsocketConnection/<SendError>d__46::<>u__1
	TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C ___U3CU3Eu__1_4;
};

// <Module>

// <Module>

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>

// System.Threading.Tasks.TaskCompletionSource`1<Websocket.Client.WebsocketClient>

// System.Threading.Tasks.TaskCompletionSource`1<Websocket.Client.WebsocketClient>

// System.Attribute

// System.Attribute

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.EventArgs

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// WalletConnectSharp.Network.Websocket.WebsocketConnectionBuilder

// WalletConnectSharp.Network.Websocket.WebsocketConnectionBuilder

// WalletConnectSharp.Network.Websocket.WebsocketConnection/<>c__DisplayClass38_0

// WalletConnectSharp.Network.Websocket.WebsocketConnection/<>c__DisplayClass38_0

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<Websocket.Client.WebsocketClient>

// System.Runtime.CompilerServices.TaskAwaiter`1<Websocket.Client.WebsocketClient>

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Boolean>

// System.Threading.Tasks.Task`1<WalletConnectSharp.Network.IJsonRpcConnection>
struct Task_1_t6B7C1E82378BEC85DDAD7EF03D99F766A7D25845_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t01676E778B25830FA32DF2046B1351E371234734* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<WalletConnectSharp.Network.IJsonRpcConnection>

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Object>

// System.Threading.Tasks.Task`1<Websocket.Client.WebsocketClient>
struct Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tB71861254D9BF377A104CAC3387C0C64B1F6AFC4* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Websocket.Client.WebsocketClient>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// Microsoft.CodeAnalysis.EmbeddedAttribute

// Microsoft.CodeAnalysis.EmbeddedAttribute

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Runtime.CompilerServices.RefSafetyRulesAttribute

// System.Runtime.CompilerServices.RefSafetyRulesAttribute

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.Void

// System.Void

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Websocket.Client.WebsocketClient>
struct AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Websocket.Client.WebsocketClient>

// System.Nullable`1<System.TimeSpan>

// System.Nullable`1<System.TimeSpan>

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Delegate

// System.Delegate

// Websocket.Client.DisconnectionType

// Websocket.Client.DisconnectionType

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Int32Enum

// System.Int32Enum

// System.Threading.Tasks.TaskCreationOptions

// System.Threading.Tasks.TaskCreationOptions

// System.Net.WebSockets.WebSocketCloseStatus

// System.Net.WebSockets.WebSocketCloseStatus

// System.Net.WebSockets.WebSocketMessageType

// System.Net.WebSockets.WebSocketMessageType

// WalletConnectSharp.Network.Websocket.WebsocketConnection

// WalletConnectSharp.Network.Websocket.WebsocketConnection

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus>

// System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

// Websocket.Client.ResponseMessage

// Websocket.Client.ResponseMessage

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};

// System.Uri

// Websocket.Client.WebsocketClient
struct WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42_StaticFields
{
	// Websocket.Client.Logging.ILog Websocket.Client.WebsocketClient::Logger
	RuntimeObject* ___Logger_0;
};

// Websocket.Client.WebsocketClient

// WalletConnectSharp.Network.Websocket.WebsocketConnection/<Dispose>d__47

// WalletConnectSharp.Network.Websocket.WebsocketConnection/<Dispose>d__47

// WalletConnectSharp.Network.Websocket.WebsocketConnection/<Register>d__38

// WalletConnectSharp.Network.Websocket.WebsocketConnection/<Register>d__38

// System.Action`1<Websocket.Client.DisconnectionInfo>

// System.Action`1<Websocket.Client.DisconnectionInfo>

// System.Action`1<Websocket.Client.ResponseMessage>

// System.Action`1<Websocket.Client.ResponseMessage>

// System.EventHandler`1<System.Exception>

// System.EventHandler`1<System.Exception>

// System.EventHandler`1<System.Object>

// System.EventHandler`1<System.Object>

// System.EventHandler`1<System.String>

// System.EventHandler`1<System.String>

// System.Func`1<System.Net.WebSockets.ClientWebSocket>

// System.Func`1<System.Net.WebSockets.ClientWebSocket>

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// Websocket.Client.DisconnectionInfo

// Websocket.Client.DisconnectionInfo

// System.EventHandler

// System.EventHandler

// System.IO.IOException

// System.IO.IOException

// WalletConnectSharp.Network.Websocket.WebsocketConnection/<Close>d__43

// WalletConnectSharp.Network.Websocket.WebsocketConnection/<Close>d__43

// WalletConnectSharp.Network.Websocket.WebsocketConnection/<Open>d__36

// WalletConnectSharp.Network.Websocket.WebsocketConnection/<Open>d__36

// WalletConnectSharp.Network.Websocket.WebsocketConnection/<SendError>d__46

// WalletConnectSharp.Network.Websocket.WebsocketConnection/<SendError>d__46
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Network.Websocket.WebsocketConnection/<Open>d__36>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B_mE996F47AE81AB817417FB53BFB50ED9A4D21A260_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<WalletConnectSharp.Network.Websocket.WebsocketConnection/<Register>d__38>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_m071C18F68F3355EE595A59B96B1B8EB7DB209C5C_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.IDisposable System.ObservableExtensions::Subscribe<System.Object>(System.IObservable`1<T>,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObservableExtensions_Subscribe_TisRuntimeObject_m4808A5E34BE6CF31BE5543C31BF386997F63A543_gshared (RuntimeObject* ___0_source, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_onNext, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_sender, RuntimeObject* ___1_e, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Network.Websocket.WebsocketConnection/<Close>d__43>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631_mD1A25E29C9F11D655E52F6173891D9A64D891E4F_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Network.Websocket.WebsocketConnection/<SendError>d__46>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5_m36DC1467C8FE136FBE428763C48D01C8064647D2_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WalletConnectSharp.Network.Websocket.WebsocketConnection/<Dispose>d__47>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__47_t623F34BBDC207961DBCB36B7642E7F4E20A91E84_mD36D805E674BB2EDAFF56688D5A7674E4CD22BFA_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CDisposeU3Ed__47_t623F34BBDC207961DBCB36B7642E7F4E20A91E84* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_m7DB7E6251CB92C741F7E081E2ECAA06FF79E212F_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_gshared (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,WalletConnectSharp.Network.Websocket.WebsocketConnection/<Close>d__43>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631_m47B4A85BCD7CDE70C9805BE1237872D068B41D1E_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___0_awaiter, U3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,WalletConnectSharp.Network.Websocket.WebsocketConnection/<Open>d__36>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B_m6AB18322A93819E4417BD41DC35B170250766F4D_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor(System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m8E487F2587B905596F900A52FDFFF33EA7FC3096_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, int32_t ___0_creationOptions, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Action WalletConnectSharp.Common.Utils.Extensions::ListenOnce<System.Object>(System.EventHandler`1<TEventArgs>,System.EventHandler`1<TEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* Extensions_ListenOnce_TisRuntimeObject_mCA6F1CF8D234E1F9283EF88B716F7FEB82278369_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* ___0_eventHandler, EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* ___1_handler, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,WalletConnectSharp.Network.Websocket.WebsocketConnection/<Register>d__38>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_m632B19278036450FC9B90090A080435AD73377BA_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Network.Websocket.WebsocketConnection/<Register>d__38>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_mDE1C500D2C41988B32A1C8DD88E597F98D030980_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,WalletConnectSharp.Network.Websocket.WebsocketConnection/<SendError>d__46>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5_m7A0866821BE6CA9355F90933AC82F68A9E390B70_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection::OnError<System.Object>(WalletConnectSharp.Network.IJsonRpcPayload,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketConnection_OnError_TisRuntimeObject_m2D6A8CBD2B1C6F5D5522ECA9FD615E7D24F6FE11_gshared (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, RuntimeObject* ___0_ogPayload, Exception_t* ___1_e, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Object>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromResult_TisRuntimeObject_m3CB407E4DC5135B06ECAFC88B9C4F06612E4B521_gshared (RuntimeObject* ___0_result, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromSeconds_m4401B50C0CA831134068595C6AF2F1CA92AAF80F (double ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean WalletConnectSharp.Network.Validation::IsWsUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Validation_IsWsUrl_mDCF72A26441612D0DB8DF0905B6B6E0E3B72053D (String_t* ___0_url, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Network.Websocket.WebsocketConnection/<Open>d__36>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B_mE996F47AE81AB817417FB53BFB50ED9A4D21A260 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B_mE996F47AE81AB817417FB53BFB50ED9A4D21A260_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Websocket.Client.WebsocketClient>::Create()
inline AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64 AsyncTaskMethodBuilder_1_Create_mC370F06C7088CFC009D77DFA4AA710D9265FD363 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Websocket.Client.WebsocketClient>::Start<WalletConnectSharp.Network.Websocket.WebsocketConnection/<Register>d__38>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_mE20E932176F1D006BFCBD53C323E013D77704186 (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64* __this, U3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64*, U3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_m071C18F68F3355EE595A59B96B1B8EB7DB209C5C_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Websocket.Client.WebsocketClient>::get_Task()
inline Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE* AsyncTaskMethodBuilder_1_get_Task_m286BDF24C3C8EE7D45E2862A307A431C1C87DAF5 (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE* (*) (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.IObservable`1<Websocket.Client.ResponseMessage> Websocket.Client.WebsocketClient::get_MessageReceived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebsocketClient_get_MessageReceived_m16EA9CA66DCAB2075EE49BFDA8BD57FEA8C2BD43 (WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Websocket.Client.ResponseMessage>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1894B94034639E2D1197DE79A3D246A0F20DBCAC (Action_1_t25DD9585A2EAA754EFE905A4853601E7C023748B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t25DD9585A2EAA754EFE905A4853601E7C023748B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.IDisposable System.ObservableExtensions::Subscribe<Websocket.Client.ResponseMessage>(System.IObservable`1<T>,System.Action`1<T>)
inline RuntimeObject* ObservableExtensions_Subscribe_TisResponseMessage_tED4D8300EA9964C3E02206B936A4F2CB7533AE80_m197084ECE244D749A076AC58DEAE6D1E56C63AFE (RuntimeObject* ___0_source, Action_1_t25DD9585A2EAA754EFE905A4853601E7C023748B* ___1_onNext, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Action_1_t25DD9585A2EAA754EFE905A4853601E7C023748B*, const RuntimeMethod*))ObservableExtensions_Subscribe_TisRuntimeObject_m4808A5E34BE6CF31BE5543C31BF386997F63A543_gshared)(___0_source, ___1_onNext, method);
}
// System.IObservable`1<Websocket.Client.DisconnectionInfo> Websocket.Client.WebsocketClient::get_DisconnectionHappened()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebsocketClient_get_DisconnectionHappened_m3B73867C50CE5D02F7B257F14DA784A8888952D9 (WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Websocket.Client.DisconnectionInfo>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m60B7B7F55E72EDBD97B1A8F751F93853D2400142 (Action_1_tB3B791BFE042AC67D218182694F33E2798009116* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB3B791BFE042AC67D218182694F33E2798009116*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.IDisposable System.ObservableExtensions::Subscribe<Websocket.Client.DisconnectionInfo>(System.IObservable`1<T>,System.Action`1<T>)
inline RuntimeObject* ObservableExtensions_Subscribe_TisDisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316_mC44B882C1B193391E18CE0A7F09943399ACAEF24 (RuntimeObject* ___0_source, Action_1_tB3B791BFE042AC67D218182694F33E2798009116* ___1_onNext, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Action_1_tB3B791BFE042AC67D218182694F33E2798009116*, const RuntimeMethod*))ObservableExtensions_Subscribe_TisRuntimeObject_m4808A5E34BE6CF31BE5543C31BF386997F63A543_gshared)(___0_source, ___1_onNext, method);
}
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_sender, RuntimeObject* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Exception Websocket.Client.DisconnectionInfo::get_Exception()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* DisconnectionInfo_get_Exception_m846A7CB4528DAA213D9085BB1018578A7ED80664_inline (DisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Exception>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m888792B4544DF26E2DD65593C4BD6D701ADF224C_inline (EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* __this, RuntimeObject* ___0_sender, Exception_t* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE*, RuntimeObject*, Exception_t*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection::OnClose(Websocket.Client.DisconnectionInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketConnection_OnClose_m03DA171EFD23A099AD03AAC4D3807DCEED668CB9 (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, DisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) ;
// System.Net.WebSockets.WebSocketMessageType Websocket.Client.ResponseMessage::get_MessageType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ResponseMessage_get_MessageType_m9323E327E5343EBD7C65509A11E222896510F74E_inline (ResponseMessage_tED4D8300EA9964C3E02206B936A4F2CB7533AE80* __this, const RuntimeMethod* method) ;
// System.String Websocket.Client.ResponseMessage::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ResponseMessage_get_Text_m51F3F4069B69D3482A6C2C83F5175CFF2B4EE781_inline (ResponseMessage_tED4D8300EA9964C3E02206B936A4F2CB7533AE80* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.String>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mBA1183044DF9B66B4444D461008A62929C4DB1A5_inline (EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* __this, RuntimeObject* ___0_sender, String_t* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4*, RuntimeObject*, String_t*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Network.Websocket.WebsocketConnection/<Close>d__43>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631_mD1A25E29C9F11D655E52F6173891D9A64D891E4F (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631_mD1A25E29C9F11D655E52F6173891D9A64D891E4F_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Network.Websocket.WebsocketConnection/<SendError>d__46>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5_m36DC1467C8FE136FBE428763C48D01C8064647D2 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5_m36DC1467C8FE136FBE428763C48D01C8064647D2_gshared)(__this, ___0_stateMachine, method);
}
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WalletConnectSharp.Network.Websocket.WebsocketConnection/<Dispose>d__47>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__47_t623F34BBDC207961DBCB36B7642E7F4E20A91E84_mD36D805E674BB2EDAFF56688D5A7674E4CD22BFA (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CDisposeU3Ed__47_t623F34BBDC207961DBCB36B7642E7F4E20A91E84* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CDisposeU3Ed__47_t623F34BBDC207961DBCB36B7642E7F4E20A91E84*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__47_t623F34BBDC207961DBCB36B7642E7F4E20A91E84_mD36D805E674BB2EDAFF56688D5A7674E4CD22BFA_gshared)(__this, ___0_stateMachine, method);
}
// System.Void Websocket.Client.WebsocketClient::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketClient_Dispose_mB94B51B709728AB1DE3EAEF38B65F8629779C529 (WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Websocket.Client.WebsocketClient>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_m51EBF864A9661992BDE2128FD7979E722A358D98 (TaskCompletionSource_1_t9761864C9CCF781E46490D74AFE01CD5910B45CF* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t9761864C9CCF781E46490D74AFE01CD5910B45CF*, Exception_t*, const RuntimeMethod*))TaskCompletionSource_1_SetException_m7DB7E6251CB92C741F7E081E2ECAA06FF79E212F_gshared)(__this, ___0_exception, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Websocket.Client.WebsocketClient>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_m99EA6B06B3ADE84A63353044CD61FA3B69C1F488 (TaskCompletionSource_1_t9761864C9CCF781E46490D74AFE01CD5910B45CF* __this, WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t9761864C9CCF781E46490D74AFE01CD5910B45CF*, WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42*, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared)(__this, ___0_result, method);
}
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Boolean> Websocket.Client.WebsocketClient::Stop(System.Net.WebSockets.WebSocketCloseStatus,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WebsocketClient_Stop_m2C94F134B6F9246C22D6F2B438A829FAFE5176C9 (WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* __this, int32_t ___0_status, String_t* ___1_statusDescription, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
inline TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935 (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 (*) (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, const RuntimeMethod*))Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9 (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,WalletConnectSharp.Network.Websocket.WebsocketConnection/<Close>d__43>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631_m47B4A85BCD7CDE70C9805BE1237872D068B41D1E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___0_awaiter, U3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631_m47B4A85BCD7CDE70C9805BE1237872D068B41D1E_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
inline bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared)(__this, method);
}
// System.Void System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus>::.ctor(T)
inline void Nullable_1__ctor_mAC60001B01BC8FCA7B8D1E3913BBEB34A470FC03 (Nullable_1_t4936015D54B4E5C3191E452324F5F52BD55E1284* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t4936015D54B4E5C3191E452324F5F52BD55E1284*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared)(__this, ___0_value, method);
}
// System.Void Websocket.Client.DisconnectionInfo::.ctor(Websocket.Client.DisconnectionType,System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus>,System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisconnectionInfo__ctor_mB493E23643DA0B6623DC74005C943BA03D022061 (DisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316* __this, int32_t ___0_type, Nullable_1_t4936015D54B4E5C3191E452324F5F52BD55E1284 ___1_closeStatus, String_t* ___2_closeStatusDescription, String_t* ___3_subProtocol, Exception_t* ___4_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<Close>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseU3Ed__43_MoveNext_mB2D1B89F715EE48D41ED53E3F35BA5391A9A3FF6 (U3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<Close>d__43::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseU3Ed__43_SetStateMachine_m21DEE38A6164CD476E6CB3BCCDBD222C33A24902 (U3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<Dispose>d__47::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeU3Ed__47_MoveNext_m4FCAB11C44EF044E04225C53C5CB3D9D0970A744 (U3CDisposeU3Ed__47_t623F34BBDC207961DBCB36B7642E7F4E20A91E84* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<Dispose>d__47::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeU3Ed__47_SetStateMachine_mD895CEA637A4A1A25E1EEC42EF0BF20B57D6F4A7 (U3CDisposeU3Ed__47_t623F34BBDC207961DBCB36B7642E7F4E20A91E84* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Websocket.Client.WebsocketClient> WalletConnectSharp.Network.Websocket.WebsocketConnection::Register(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE* WebsocketConnection_Register_m4787D02B7E1FA366C1326FD24ACD14E9B95EF27E (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, String_t* ___0_url, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Websocket.Client.WebsocketClient>::GetAwaiter()
inline TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C Task_1_GetAwaiter_m9728DBE404D36E613EADFFDE46FA495F80CA209F (Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C (*) (Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Websocket.Client.WebsocketClient>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m0BEC9DDD70EBEF4B771D326A87019AD5CC446D67 (TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Websocket.Client.WebsocketClient>,WalletConnectSharp.Network.Websocket.WebsocketConnection/<Open>d__36>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C_TisU3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B_m8D96CA455269F3BB0D60CCA6FE9F42355A18B41F (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C* ___0_awaiter, U3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C*, U3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B_m6AB18322A93819E4417BD41DC35B170250766F4D_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Websocket.Client.WebsocketClient>::GetResult()
inline WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* TaskAwaiter_1_GetResult_m83A3D4BB779A85D99DBEC93AEE48C15E06FBD9C9 (TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C* __this, const RuntimeMethod* method)
{
	return ((  WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* (*) (TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<Open>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenU3Ed__36_MoveNext_m88DA7BE13EA91F3C36262F4097AB8A12C3CC6DBF (U3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<Open>d__36::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenU3Ed__36_SetStateMachine_m1E26A498C92CAE6802DCBA4EE8C2A0FCEDB36FC5 (U3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<>c__DisplayClass38_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0__ctor_m0908857F2F59E243103D03B14DB5F0FD5D083AD6 (U3CU3Ec__DisplayClass38_0_t83EC8829815D592BB13654648A8131DF827E3CBF* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Websocket.Client.WebsocketClient>::.ctor(System.Threading.Tasks.TaskCreationOptions)
inline void TaskCompletionSource_1__ctor_mB03449DB934A552ACBFF79684C4FCF87FA9DDA94 (TaskCompletionSource_1_t9761864C9CCF781E46490D74AFE01CD5910B45CF* __this, int32_t ___0_creationOptions, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t9761864C9CCF781E46490D74AFE01CD5910B45CF*, int32_t, const RuntimeMethod*))TaskCompletionSource_1__ctor_m8E487F2587B905596F900A52FDFFF33EA7FC3096_gshared)(__this, ___0_creationOptions, method);
}
// System.Void System.EventHandler`1<System.Exception>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mFC6BB12FC2C0F483763930B428CFC497E57D41FE (EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Action WalletConnectSharp.Common.Utils.Extensions::ListenOnce<System.Exception>(System.EventHandler`1<TEventArgs>,System.EventHandler`1<TEventArgs>)
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* Extensions_ListenOnce_TisException_t_mB76D1D1B6F83F65BCD7B5C3FF37861FAECA9F1A5 (EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* ___0_eventHandler, EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* ___1_handler, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE*, EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE*, const RuntimeMethod*))Extensions_ListenOnce_TisRuntimeObject_mCA6F1CF8D234E1F9283EF88B716F7FEB82278369_gshared)(___0_eventHandler, ___1_handler, method);
}
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370 (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Action WalletConnectSharp.Common.Utils.Extensions::ListenOnce<System.Object>(System.EventHandler`1<TEventArgs>,System.EventHandler`1<TEventArgs>)
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* Extensions_ListenOnce_TisRuntimeObject_mCA6F1CF8D234E1F9283EF88B716F7FEB82278369 (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* ___0_eventHandler, EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* ___1_handler, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746*, EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746*, const RuntimeMethod*))Extensions_ListenOnce_TisRuntimeObject_mCA6F1CF8D234E1F9283EF88B716F7FEB82278369_gshared)(___0_eventHandler, ___1_handler, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Websocket.Client.WebsocketClient>::get_Task()
inline Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE* TaskCompletionSource_1_get_Task_m79ABE43C1E2FABC70D3743294BB2AACD93D3DF67_inline (TaskCompletionSource_1_t9761864C9CCF781E46490D74AFE01CD5910B45CF* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE* (*) (TaskCompletionSource_1_t9761864C9CCF781E46490D74AFE01CD5910B45CF*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Websocket.Client.WebsocketClient>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Websocket.Client.WebsocketClient>,WalletConnectSharp.Network.Websocket.WebsocketConnection/<Register>d__38>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_mB44789FBBB0CA8ECD951DC96D21882FCD898F927 (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64* __this, TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C* ___0_awaiter, U3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64*, TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C*, U3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_m632B19278036450FC9B90090A080435AD73377BA_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Threading.Tasks.Task`1<Websocket.Client.WebsocketClient>::get_Result()
inline WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* Task_1_get_Result_m471D8E5ACAD5D9F165A26BF6936D8E615A33E182 (Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE* __this, const RuntimeMethod* method)
{
	return ((  WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* (*) (Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___0_uriString, const RuntimeMethod* method) ;
// System.Void Websocket.Client.WebsocketClient::.ctor(System.Uri,System.Func`1<System.Net.WebSockets.ClientWebSocket>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketClient__ctor_mB9E5352B3049DEDF9D248F1D39CB11F3FBFF26A8 (WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_url, Func_1_t97EB92A7DEA37DFF8B17C5309B2DE692A3FCC3D5* ___1_clientFactory, const RuntimeMethod* method) ;
// System.Void Websocket.Client.WebsocketClient::set_ReconnectTimeout(System.Nullable`1<System.TimeSpan>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebsocketClient_set_ReconnectTimeout_m4C639C864C4B1304B28B3FADA5B73C9BD1B306B4_inline (WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* __this, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___0_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Websocket.Client.WebsocketClient::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebsocketClient_Start_m38748137001926A559052C9BA7ADB1D066FB2DF5 (WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task WalletConnectSharp.Common.Utils.Extensions::WithTimeout(System.Threading.Tasks.Task,System.TimeSpan,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Extensions_WithTimeout_mC2594D2F66077313CDED7D239A5C1AAC42ED217A (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_timeout, String_t* ___2_message, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Websocket.Client.WebsocketClient>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Network.Websocket.WebsocketConnection/<Register>d__38>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_m504985EEBA4079D12005C93E2014170E56F75B79 (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_mDE1C500D2C41988B32A1C8DD88E597F98D030980_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection::OnOpen(Websocket.Client.WebsocketClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketConnection_OnOpen_mE2533B406E46444B6FFFA371C0F17190846EEF10 (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* ___0_socket, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Websocket.Client.WebsocketClient>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m1604359F88263AC650B4A59E0B6CA8619532BB60 (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Websocket.Client.WebsocketClient>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mFC8FE32AA7E96D429F6099747DCD766382369489 (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64* __this, WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64*, WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<Register>d__38::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterU3Ed__38_MoveNext_mC542F70E0E3DF362A5C9A3CB38FE5B72647B66EF (U3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Websocket.Client.WebsocketClient>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mDBAD3A8D38DF3346DE2E83B89580CADD6AB1C37C (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___0_stateMachine, method);
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<Register>d__38::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterU3Ed__38_SetStateMachine_mA59C6E935FDAC16BE5E310C45E747E744E524072 (U3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Websocket.Client.WebsocketClient>,WalletConnectSharp.Network.Websocket.WebsocketConnection/<SendError>d__46>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C_TisU3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5_m0FA3600E13ED21FB51B20BDC7A0F93624DC28461 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C* ___0_awaiter, U3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C*, U3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5_m7A0866821BE6CA9355F90933AC82F68A9E390B70_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Websocket.Client.WebsocketClient::Send(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketClient_Send_mEC22B056CDE68AC3E135353FB37863EF2D9A93BA (WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection::OnError<System.Object>(WalletConnectSharp.Network.IJsonRpcPayload,System.Exception)
inline void WebsocketConnection_OnError_TisRuntimeObject_m2D6A8CBD2B1C6F5D5522ECA9FD615E7D24F6FE11 (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, RuntimeObject* ___0_ogPayload, Exception_t* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502*, RuntimeObject*, Exception_t*, const RuntimeMethod*))WebsocketConnection_OnError_TisRuntimeObject_m2D6A8CBD2B1C6F5D5522ECA9FD615E7D24F6FE11_gshared)(__this, ___0_ogPayload, ___1_e, method);
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<SendError>d__46::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendErrorU3Ed__46_MoveNext_m3921F812229F5A9696A4488F8C7ADAF87BD1BAFA (U3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<SendError>d__46::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendErrorU3Ed__46_SetStateMachine_mEF40765EFB952B6F893F603068A92F0D33F81098 (U3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketConnection__ctor_mF28E0FE9675FC5562B7278343487AF95CFA3A43C (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, String_t* ___0_url, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<WalletConnectSharp.Network.IJsonRpcConnection>(TResult)
inline Task_1_t6B7C1E82378BEC85DDAD7EF03D99F766A7D25845* Task_FromResult_TisIJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_mCA222BDDC225EC0F3F732A8E361A46EA28D9D007 (RuntimeObject* ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t6B7C1E82378BEC85DDAD7EF03D99F766A7D25845* (*) (RuntimeObject*, const RuntimeMethod*))Task_FromResult_TisRuntimeObject_m3CB407E4DC5135B06ECAFC88B9C4F06612E4B521_gshared)(___0_result, method);
}
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m5C2D2C53D9952046323B94EC9FC4A571DB82CB5F (EmbeddedAttribute_t7C1BCE55B066EE388E90CAE7882D22E7168D7777* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.RefSafetyRulesAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefSafetyRulesAttribute__ctor_m9C4CD100F797DD663F77D2758988B3254CBDDBEF (RefSafetyRulesAttribute_t4DC8366B43C513036C9EC1F0D4AD2E82DB864DDE* __this, int32_t ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___0_p;
		__this->___Version_0 = L_0;
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
// System.String WalletConnectSharp.Network.Websocket.WebsocketConnection::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebsocketConnection_get_Url_m616EDF9FD30843EA13BB792017F6E90B2B51D9CE (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____url_1;
		return L_0;
	}
}
// System.Boolean WalletConnectSharp.Network.Websocket.WebsocketConnection::get_IsPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebsocketConnection_get_IsPaused_mC13C0D382CB1EDEB5ED3AB62B710CEBF74291DDC (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsPausedU3Ek__BackingField_6;
		return L_0;
	}
}
// System.String WalletConnectSharp.Network.Websocket.WebsocketConnection::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebsocketConnection_get_Name_m103F10A2AC4029B026636BD6EEB0981A9AA7679D (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CB1B3F548878CE62C6F095AFBDA5027B0B0B52);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral61CB1B3F548878CE62C6F095AFBDA5027B0B0B52;
	}
}
// System.String WalletConnectSharp.Network.Websocket.WebsocketConnection::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebsocketConnection_get_Context_mB8353DC7B8F75C3A3ACCFD4A65524B09941F4F36 (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, const RuntimeMethod* method) 
{
	{
		Guid_t* L_0 = (Guid_t*)(&__this->____context_3);
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C(L_0, NULL);
		return L_1;
	}
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection::add_PayloadReceived(System.EventHandler`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketConnection_add_PayloadReceived_m4AD79A2B951687A1EA1EA21F888457DDA65909FF (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* V_0 = NULL;
	EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* V_1 = NULL;
	EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* V_2 = NULL;
	{
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_0 = __this->___PayloadReceived_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_2 = V_1;
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4*)Castclass((RuntimeObject*)L_4, EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4_il2cpp_TypeInfo_var));
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4** L_5 = (EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4**)(&__this->___PayloadReceived_7);
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_6 = V_2;
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_7 = V_1;
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_9 = V_0;
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4*)L_9) == ((RuntimeObject*)(EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection::remove_PayloadReceived(System.EventHandler`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketConnection_remove_PayloadReceived_m4B9904FDA41258EE82EDDD3A29424072F2641C4F (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* V_0 = NULL;
	EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* V_1 = NULL;
	EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* V_2 = NULL;
	{
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_0 = __this->___PayloadReceived_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_2 = V_1;
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4*)Castclass((RuntimeObject*)L_4, EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4_il2cpp_TypeInfo_var));
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4** L_5 = (EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4**)(&__this->___PayloadReceived_7);
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_6 = V_2;
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_7 = V_1;
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_9 = V_0;
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4*)L_9) == ((RuntimeObject*)(EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection::add_Closed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketConnection_add_Closed_m8DE3CE210E44494FB2EF65BFB4C33045726FD673 (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___Closed_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82**)(&__this->___Closed_8);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection::remove_Closed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketConnection_remove_Closed_mF6E31AEF6CCF5A4B3783D4D3EBD5F19FE80BA319 (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_1 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___Closed_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82**)(&__this->___Closed_8);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_6 = V_2;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = V_1;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = V_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_9) == ((RuntimeObject*)(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection::add_ErrorReceived(System.EventHandler`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketConnection_add_ErrorReceived_m4D1329048310067A1E91B1F87421C336D3CDD8D4 (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* V_0 = NULL;
	EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* V_1 = NULL;
	EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* V_2 = NULL;
	{
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_0 = __this->___ErrorReceived_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_2 = V_1;
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE*)Castclass((RuntimeObject*)L_4, EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE_il2cpp_TypeInfo_var));
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE** L_5 = (EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE**)(&__this->___ErrorReceived_9);
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_6 = V_2;
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_7 = V_1;
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_9 = V_0;
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE*)L_9) == ((RuntimeObject*)(EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection::remove_ErrorReceived(System.EventHandler`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketConnection_remove_ErrorReceived_mD8CC7198D54FDCBEDE4B9376BC9D4FD71C7D9957 (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* V_0 = NULL;
	EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* V_1 = NULL;
	EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* V_2 = NULL;
	{
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_0 = __this->___ErrorReceived_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_2 = V_1;
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE*)Castclass((RuntimeObject*)L_4, EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE_il2cpp_TypeInfo_var));
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE** L_5 = (EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE**)(&__this->___ErrorReceived_9);
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_6 = V_2;
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_7 = V_1;
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_9 = V_0;
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE*)L_9) == ((RuntimeObject*)(EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean WalletConnectSharp.Network.Websocket.WebsocketConnection::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebsocketConnection_get_Connected_m453EEDB592EAA07BB0BB437014BCCE4F6539CA6C (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, const RuntimeMethod* method) 
{
	{
		WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_0 = __this->____socket_0;
		return (bool)((!(((RuntimeObject*)(WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Boolean WalletConnectSharp.Network.Websocket.WebsocketConnection::get_Connecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebsocketConnection_get_Connecting_m26723C8954B3CCA60FC7C7C7D721D895F6265428 (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____registering_2;
		return L_0;
	}
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketConnection__ctor_mF28E0FE9675FC5562B7278343487AF95CFA3A43C (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0;
		L_0 = TimeSpan_FromSeconds_m4401B50C0CA831134068595C6AF2F1CA92AAF80F((60.0), NULL);
		__this->___OpenTimeout_5 = L_0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_1 = ___0_url;
		bool L_2;
		L_2 = Validation_IsWsUrl_mDCF72A26441612D0DB8DF0905B6B6E0E3B72053D(L_1, NULL);
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_3 = ___0_url;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFA0C1A108A78C23737119DA2ECE6410D0FE287A4)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebsocketConnection__ctor_mF28E0FE9675FC5562B7278343487AF95CFA3A43C_RuntimeMethod_var)));
	}

IL_0033:
	{
		Guid_t L_6;
		L_6 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		__this->____context_3 = L_6;
		String_t* L_7 = ___0_url;
		__this->____url_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____url_1), (void*)L_7);
		return;
	}
}
// System.Threading.Tasks.Task WalletConnectSharp.Network.Websocket.WebsocketConnection::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebsocketConnection_Open_m82035ABDD7E8DC94F769F33038787CE9D3777152 (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B_mE996F47AE81AB817417FB53BFB50ED9A4D21A260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_1 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B_mE996F47AE81AB817417FB53BFB50ED9A4D21A260(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B_mE996F47AE81AB817417FB53BFB50ED9A4D21A260_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<Websocket.Client.WebsocketClient> WalletConnectSharp.Network.Websocket.WebsocketConnection::Register(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE* WebsocketConnection_Register_m4787D02B7E1FA366C1326FD24ACD14E9B95EF27E (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mC370F06C7088CFC009D77DFA4AA710D9265FD363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_mE20E932176F1D006BFCBD53C323E013D77704186_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m286BDF24C3C8EE7D45E2862A307A431C1C87DAF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mC370F06C7088CFC009D77DFA4AA710D9265FD363(AsyncTaskMethodBuilder_1_Create_mC370F06C7088CFC009D77DFA4AA710D9265FD363_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		String_t* L_1 = ___0_url;
		(&V_0)->___url_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___url_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64* L_2 = (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_mE20E932176F1D006BFCBD53C323E013D77704186(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_mE20E932176F1D006BFCBD53C323E013D77704186_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64* L_3 = (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m286BDF24C3C8EE7D45E2862A307A431C1C87DAF5(L_3, AsyncTaskMethodBuilder_1_get_Task_m286BDF24C3C8EE7D45E2862A307A431C1C87DAF5_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection::OnOpen(Websocket.Client.WebsocketClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketConnection_OnOpen_mE2533B406E46444B6FFFA371C0F17190846EEF10 (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* ___0_socket, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t25DD9585A2EAA754EFE905A4853601E7C023748B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB3B791BFE042AC67D218182694F33E2798009116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObservableExtensions_Subscribe_TisDisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316_mC44B882C1B193391E18CE0A7F09943399ACAEF24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObservableExtensions_Subscribe_TisResponseMessage_tED4D8300EA9964C3E02206B936A4F2CB7533AE80_m197084ECE244D749A076AC58DEAE6D1E56C63AFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebsocketConnection_OnDisconnect_mF0846C98EF98729C5FAA7CE4A2B258DC9F360F9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebsocketConnection_OnPayload_m6E380D77D226CE32A0ED4185CB1A2FD84BEB3BFE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* G_B4_0 = NULL;
	EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* G_B3_0 = NULL;
	{
		WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_0 = ___0_socket;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_1 = ___0_socket;
		RuntimeObject* L_2;
		L_2 = WebsocketClient_get_MessageReceived_m16EA9CA66DCAB2075EE49BFDA8BD57FEA8C2BD43(L_1, NULL);
		Action_1_t25DD9585A2EAA754EFE905A4853601E7C023748B* L_3 = (Action_1_t25DD9585A2EAA754EFE905A4853601E7C023748B*)il2cpp_codegen_object_new(Action_1_t25DD9585A2EAA754EFE905A4853601E7C023748B_il2cpp_TypeInfo_var);
		Action_1__ctor_m1894B94034639E2D1197DE79A3D246A0F20DBCAC(L_3, __this, (intptr_t)((void*)WebsocketConnection_OnPayload_m6E380D77D226CE32A0ED4185CB1A2FD84BEB3BFE_RuntimeMethod_var), NULL);
		RuntimeObject* L_4;
		L_4 = ObservableExtensions_Subscribe_TisResponseMessage_tED4D8300EA9964C3E02206B936A4F2CB7533AE80_m197084ECE244D749A076AC58DEAE6D1E56C63AFE(L_2, L_3, ObservableExtensions_Subscribe_TisResponseMessage_tED4D8300EA9964C3E02206B936A4F2CB7533AE80_m197084ECE244D749A076AC58DEAE6D1E56C63AFE_RuntimeMethod_var);
		WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_5 = ___0_socket;
		RuntimeObject* L_6;
		L_6 = WebsocketClient_get_DisconnectionHappened_m3B73867C50CE5D02F7B257F14DA784A8888952D9(L_5, NULL);
		Action_1_tB3B791BFE042AC67D218182694F33E2798009116* L_7 = (Action_1_tB3B791BFE042AC67D218182694F33E2798009116*)il2cpp_codegen_object_new(Action_1_tB3B791BFE042AC67D218182694F33E2798009116_il2cpp_TypeInfo_var);
		Action_1__ctor_m60B7B7F55E72EDBD97B1A8F751F93853D2400142(L_7, __this, (intptr_t)((void*)WebsocketConnection_OnDisconnect_mF0846C98EF98729C5FAA7CE4A2B258DC9F360F9F_RuntimeMethod_var), NULL);
		RuntimeObject* L_8;
		L_8 = ObservableExtensions_Subscribe_TisDisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316_mC44B882C1B193391E18CE0A7F09943399ACAEF24(L_6, L_7, ObservableExtensions_Subscribe_TisDisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316_mC44B882C1B193391E18CE0A7F09943399ACAEF24_RuntimeMethod_var);
		WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_9 = ___0_socket;
		__this->____socket_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____socket_0), (void*)L_9);
		__this->____registering_2 = (bool)0;
		EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* L_10 = __this->___Opened_10;
		EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* L_11 = L_10;
		G_B3_0 = L_11;
		if (L_11)
		{
			G_B4_0 = L_11;
			goto IL_004d;
		}
	}
	{
		return;
	}

IL_004d:
	{
		WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_12 = __this->____socket_0;
		EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_inline(G_B4_0, __this, L_12, NULL);
		return;
	}
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection::OnDisconnect(Websocket.Client.DisconnectionInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketConnection_OnDisconnect_mF0846C98EF98729C5FAA7CE4A2B258DC9F360F9F (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, DisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316* ___0_obj, const RuntimeMethod* method) 
{
	EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* G_B3_0 = NULL;
	EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* G_B2_0 = NULL;
	{
		DisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316* L_0 = ___0_obj;
		Exception_t* L_1;
		L_1 = DisconnectionInfo_get_Exception_m846A7CB4528DAA213D9085BB1018578A7ED80664_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_2 = __this->___ErrorReceived_9;
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
		DisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316* L_4 = ___0_obj;
		Exception_t* L_5;
		L_5 = DisconnectionInfo_get_Exception_m846A7CB4528DAA213D9085BB1018578A7ED80664_inline(L_4, NULL);
		EventHandler_1_Invoke_m888792B4544DF26E2DD65593C4BD6D701ADF224C_inline(G_B3_0, __this, L_5, NULL);
	}

IL_0020:
	{
		DisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316* L_6 = ___0_obj;
		WebsocketConnection_OnClose_m03DA171EFD23A099AD03AAC4D3807DCEED668CB9(__this, L_6, NULL);
		return;
	}
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection::OnClose(Websocket.Client.DisconnectionInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketConnection_OnClose_m03DA171EFD23A099AD03AAC4D3807DCEED668CB9 (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, DisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B4_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B3_0 = NULL;
	{
		WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_0 = __this->____socket_0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		__this->____socket_0 = (WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____socket_0), (void*)(WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42*)NULL);
		__this->____registering_2 = (bool)0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = __this->___Closed_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_3 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B4_0, __this, L_3, NULL);
		return;
	}
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection::OnPayload(Websocket.Client.ResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketConnection_OnPayload_m6E380D77D226CE32A0ED4185CB1A2FD84BEB3BFE (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, ResponseMessage_tED4D8300EA9964C3E02206B936A4F2CB7533AE80* ___0_obj, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* G_B9_0 = NULL;
	EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* G_B8_0 = NULL;
	{
		V_0 = (String_t*)NULL;
		ResponseMessage_tED4D8300EA9964C3E02206B936A4F2CB7533AE80* L_0 = ___0_obj;
		int32_t L_1;
		L_1 = ResponseMessage_get_MessageType_m9323E327E5343EBD7C65509A11E222896510F74E_inline(L_0, NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0027;
			}
		}
	}
	{
		goto IL_0028;
	}

IL_001d:
	{
		return;
	}

IL_001e:
	{
		ResponseMessage_tED4D8300EA9964C3E02206B936A4F2CB7533AE80* L_3 = ___0_obj;
		String_t* L_4;
		L_4 = ResponseMessage_get_Text_m51F3F4069B69D3482A6C2C83F5175CFF2B4EE781_inline(L_3, NULL);
		V_0 = L_4;
		goto IL_0028;
	}

IL_0027:
	{
		return;
	}

IL_0028:
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_5, NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		return;
	}

IL_0031:
	{
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_7 = __this->___PayloadReceived_7;
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_8 = L_7;
		G_B8_0 = L_8;
		if (L_8)
		{
			G_B9_0 = L_8;
			goto IL_003c;
		}
	}
	{
		return;
	}

IL_003c:
	{
		String_t* L_9 = V_0;
		EventHandler_1_Invoke_mBA1183044DF9B66B4444D461008A62929C4DB1A5_inline(G_B9_0, __this, L_9, NULL);
		return;
	}
}
// System.Threading.Tasks.Task WalletConnectSharp.Network.Websocket.WebsocketConnection::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebsocketConnection_Close_m57AF1D99F9131CE2BB9C311863578600D16637D0 (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631_mD1A25E29C9F11D655E52F6173891D9A64D891E4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_1 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631_mD1A25E29C9F11D655E52F6173891D9A64D891E4F(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631_mD1A25E29C9F11D655E52F6173891D9A64D891E4F_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task WalletConnectSharp.Network.Websocket.WebsocketConnection::SendError(WalletConnectSharp.Network.IJsonRpcError,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebsocketConnection_SendError_m527447E2ED023B9DF1302B1777D4A326DD2AC328 (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, RuntimeObject* ___0_requestPayload, RuntimeObject* ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5_m36DC1467C8FE136FBE428763C48D01C8064647D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		RuntimeObject* L_1 = ___0_requestPayload;
		(&V_0)->___requestPayload_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___requestPayload_3), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5_m36DC1467C8FE136FBE428763C48D01C8064647D2(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5_m36DC1467C8FE136FBE428763C48D01C8064647D2_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
	}
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketConnection_Dispose_m9D85CC56CA0CFF89E76FAB0B9969570B6AA6BF6B (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__47_t623F34BBDC207961DBCB36B7642E7F4E20A91E84_mD36D805E674BB2EDAFF56688D5A7674E4CD22BFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDisposeU3Ed__47_t623F34BBDC207961DBCB36B7642E7F4E20A91E84 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__47_t623F34BBDC207961DBCB36B7642E7F4E20A91E84_mD36D805E674BB2EDAFF56688D5A7674E4CD22BFA(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CDisposeU3Ed__47_t623F34BBDC207961DBCB36B7642E7F4E20A91E84_mD36D805E674BB2EDAFF56688D5A7674E4CD22BFA_RuntimeMethod_var);
		return;
	}
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketConnection_Dispose_m17B20E6BB72A194EA3AF58B51BADB6B0F80D5678 (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___Disposed_4;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		bool L_1 = ___0_disposing;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_2 = __this->____socket_0;
		WebsocketClient_Dispose_mB94B51B709728AB1DE3EAEF38B65F8629779C529(L_2, NULL);
	}

IL_0017:
	{
		__this->___Disposed_4 = (bool)1;
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
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<>c__DisplayClass38_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0__ctor_m0908857F2F59E243103D03B14DB5F0FD5D083AD6 (U3CU3Ec__DisplayClass38_0_t83EC8829815D592BB13654648A8131DF827E3CBF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<>c__DisplayClass38_0::<Register>b__0(System.Object,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0_U3CRegisterU3Eb__0_mC76D20730F4C9A99A6B7857EA49BF4FD27B2CB1E (U3CU3Ec__DisplayClass38_0_t83EC8829815D592BB13654648A8131DF827E3CBF* __this, RuntimeObject* ___0_sender, Exception_t* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m51EBF864A9661992BDE2128FD7979E722A358D98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TaskCompletionSource_1_t9761864C9CCF781E46490D74AFE01CD5910B45CF* L_0 = __this->___registeringTask_0;
		Exception_t* L_1 = ___1_args;
		TaskCompletionSource_1_SetException_m51EBF864A9661992BDE2128FD7979E722A358D98(L_0, L_1, TaskCompletionSource_1_SetException_m51EBF864A9661992BDE2128FD7979E722A358D98_RuntimeMethod_var);
		return;
	}
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<>c__DisplayClass38_0::<Register>b__1(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0_U3CRegisterU3Eb__1_m18B073920952354CD2BE165F8852799880086AD3 (U3CU3Ec__DisplayClass38_0_t83EC8829815D592BB13654648A8131DF827E3CBF* __this, RuntimeObject* ___0_sender, RuntimeObject* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m99EA6B06B3ADE84A63353044CD61FA3B69C1F488_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TaskCompletionSource_1_t9761864C9CCF781E46490D74AFE01CD5910B45CF* L_0 = __this->___registeringTask_0;
		RuntimeObject* L_1 = ___1_args;
		TaskCompletionSource_1_SetResult_m99EA6B06B3ADE84A63353044CD61FA3B69C1F488(L_0, ((WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42*)CastclassClass((RuntimeObject*)L_1, WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42_il2cpp_TypeInfo_var)), TaskCompletionSource_1_SetResult_m99EA6B06B3ADE84A63353044CD61FA3B69C1F488_RuntimeMethod_var);
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
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<Close>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseU3Ed__43_MoveNext_mB2D1B89F715EE48D41ED53E3F35BA5391A9A3FF6 (U3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631_m47B4A85BCD7CDE70C9805BE1237872D068B41D1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mAC60001B01BC8FCA7B8D1E3913BBEB34A470FC03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AD1343DB3A97059C466420CD2F7E238428CC0ED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* V_1 = NULL;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0068_1;
			}
		}
		{
			WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_3 = V_1;
			WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_4 = L_3->____socket_0;
			if (L_4)
			{
				goto IL_0024_1;
			}
		}
		{
			IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_5 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
			IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9DC2C21BDBB5EF90A44734D6C7AC4FF08AC84721)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCloseU3Ed__43_MoveNext_mB2D1B89F715EE48D41ED53E3F35BA5391A9A3FF6_RuntimeMethod_var)));
		}

IL_0024_1:
		{
			WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_6 = V_1;
			WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_7 = L_6->____socket_0;
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_8;
			L_8 = WebsocketClient_Stop_m2C94F134B6F9246C22D6F2B438A829FAFE5176C9(L_7, ((int32_t)1000), _stringLiteral1AD1343DB3A97059C466420CD2F7E238428CC0ED, NULL);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_9;
			L_9 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_8, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_2 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_2), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0084_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_12 = V_2;
			__this->___U3CU3Eu__1_3 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_13 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631_m47B4A85BCD7CDE70C9805BE1237872D068B41D1E(L_13, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631_m47B4A85BCD7CDE70C9805BE1237872D068B41D1E_RuntimeMethod_var);
			goto IL_00d5;
		}

IL_0068_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_14 = __this->___U3CU3Eu__1_3;
			V_2 = L_14;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_15 = (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
		}

IL_0084_1:
		{
			bool L_17;
			L_17 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_2), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_18 = V_1;
			Nullable_1_t4936015D54B4E5C3191E452324F5F52BD55E1284 L_19;
			memset((&L_19), 0, sizeof(L_19));
			Nullable_1__ctor_mAC60001B01BC8FCA7B8D1E3913BBEB34A470FC03((&L_19), ((int32_t)1005), /*hidden argument*/Nullable_1__ctor_mAC60001B01BC8FCA7B8D1E3913BBEB34A470FC03_RuntimeMethod_var);
			DisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316* L_20 = (DisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316*)il2cpp_codegen_object_new(DisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316_il2cpp_TypeInfo_var);
			DisconnectionInfo__ctor_mB493E23643DA0B6623DC74005C943BA03D022061(L_20, 0, L_19, _stringLiteral1AD1343DB3A97059C466420CD2F7E238428CC0ED, (String_t*)NULL, (Exception_t*)NULL, NULL);
			WebsocketConnection_OnClose_m03DA171EFD23A099AD03AAC4D3807DCEED668CB9(L_18, L_20, NULL);
			goto IL_00c2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ab;
		}
		throw e;
	}

CATCH_00ab:
	{// begin catch(System.Exception)
		Exception_t* L_21 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_21;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_22 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_23 = V_3;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_22, L_23, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00d5;
	}// end catch (depth: 1)

IL_00c2:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_24 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_24, NULL);
	}

IL_00d5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCloseU3Ed__43_MoveNext_mB2D1B89F715EE48D41ED53E3F35BA5391A9A3FF6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631*>(__this + _offset);
	U3CCloseU3Ed__43_MoveNext_mB2D1B89F715EE48D41ED53E3F35BA5391A9A3FF6(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<Close>d__43::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseU3Ed__43_SetStateMachine_m21DEE38A6164CD476E6CB3BCCDBD222C33A24902 (U3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCloseU3Ed__43_SetStateMachine_m21DEE38A6164CD476E6CB3BCCDBD222C33A24902_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCloseU3Ed__43_t9FF2D971C33A35894B81A2E39DC907C7ABD78631*>(__this + _offset);
	U3CCloseU3Ed__43_SetStateMachine_m21DEE38A6164CD476E6CB3BCCDBD222C33A24902(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<Dispose>d__47::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeU3Ed__47_MoveNext_m4FCAB11C44EF044E04225C53C5CB3D9D0970A744 (U3CDisposeU3Ed__47_t623F34BBDC207961DBCB36B7642E7F4E20A91E84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_0 = __this->___U3CU3E4__this_2;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_1 = V_0;
		VirtualActionInvoker1< bool >::Invoke(23 /* System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection::Dispose(System.Boolean) */, L_1, (bool)1);
		WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(L_2, NULL);
		goto IL_002d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(System.Exception)
		Exception_t* L_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_1 = L_3;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_4 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_5 = V_1;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_4, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0040;
	}// end catch (depth: 1)

IL_002d:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_6 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_6, NULL);
	}

IL_0040:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeU3Ed__47_MoveNext_m4FCAB11C44EF044E04225C53C5CB3D9D0970A744_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDisposeU3Ed__47_t623F34BBDC207961DBCB36B7642E7F4E20A91E84* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeU3Ed__47_t623F34BBDC207961DBCB36B7642E7F4E20A91E84*>(__this + _offset);
	U3CDisposeU3Ed__47_MoveNext_m4FCAB11C44EF044E04225C53C5CB3D9D0970A744(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<Dispose>d__47::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeU3Ed__47_SetStateMachine_mD895CEA637A4A1A25E1EEC42EF0BF20B57D6F4A7 (U3CDisposeU3Ed__47_t623F34BBDC207961DBCB36B7642E7F4E20A91E84* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisposeU3Ed__47_SetStateMachine_mD895CEA637A4A1A25E1EEC42EF0BF20B57D6F4A7_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CDisposeU3Ed__47_t623F34BBDC207961DBCB36B7642E7F4E20A91E84* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisposeU3Ed__47_t623F34BBDC207961DBCB36B7642E7F4E20A91E84*>(__this + _offset);
	U3CDisposeU3Ed__47_SetStateMachine_mD895CEA637A4A1A25E1EEC42EF0BF20B57D6F4A7(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<Open>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenU3Ed__36_MoveNext_m88DA7BE13EA91F3C36262F4097AB8A12C3CC6DBF (U3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C_TisU3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B_m8D96CA455269F3BB0D60CCA6FE9F42355A18B41F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m83A3D4BB779A85D99DBEC93AEE48C15E06FBD9C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m0BEC9DDD70EBEF4B771D326A87019AD5CC446D67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m9728DBE404D36E613EADFFDE46FA495F80CA209F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* V_1 = NULL;
	TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004c_1;
			}
		}
		{
			WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_3 = V_1;
			WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_4 = V_1;
			String_t* L_5 = L_4->____url_1;
			Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE* L_6;
			L_6 = WebsocketConnection_Register_m4787D02B7E1FA366C1326FD24ACD14E9B95EF27E(L_3, L_5, NULL);
			TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C L_7;
			L_7 = Task_1_GetAwaiter_m9728DBE404D36E613EADFFDE46FA495F80CA209F(L_6, Task_1_GetAwaiter_m9728DBE404D36E613EADFFDE46FA495F80CA209F_RuntimeMethod_var);
			V_2 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_1_get_IsCompleted_m0BEC9DDD70EBEF4B771D326A87019AD5CC446D67((&V_2), TaskAwaiter_1_get_IsCompleted_m0BEC9DDD70EBEF4B771D326A87019AD5CC446D67_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0068_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C L_10 = V_2;
			__this->___U3CU3Eu__1_3 = L_10;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_11 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C_TisU3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B_m8D96CA455269F3BB0D60CCA6FE9F42355A18B41F(L_11, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C_TisU3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B_m8D96CA455269F3BB0D60CCA6FE9F42355A18B41F_RuntimeMethod_var);
			goto IL_009c;
		}

IL_004c_1:
		{
			TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C L_12 = __this->___U3CU3Eu__1_3;
			V_2 = L_12;
			TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C* L_13 = (TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
		}

IL_0068_1:
		{
			WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_15;
			L_15 = TaskAwaiter_1_GetResult_m83A3D4BB779A85D99DBEC93AEE48C15E06FBD9C9((&V_2), TaskAwaiter_1_GetResult_m83A3D4BB779A85D99DBEC93AEE48C15E06FBD9C9_RuntimeMethod_var);
			goto IL_0089;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0072;
		}
		throw e;
	}

CATCH_0072:
	{// begin catch(System.Exception)
		Exception_t* L_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_16;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_17 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_18 = V_3;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_17, L_18, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_009c;
	}// end catch (depth: 1)

IL_0089:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_19 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_19, NULL);
	}

IL_009c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COpenU3Ed__36_MoveNext_m88DA7BE13EA91F3C36262F4097AB8A12C3CC6DBF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B*>(__this + _offset);
	U3COpenU3Ed__36_MoveNext_m88DA7BE13EA91F3C36262F4097AB8A12C3CC6DBF(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<Open>d__36::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenU3Ed__36_SetStateMachine_m1E26A498C92CAE6802DCBA4EE8C2A0FCEDB36FC5 (U3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COpenU3Ed__36_SetStateMachine_m1E26A498C92CAE6802DCBA4EE8C2A0FCEDB36FC5_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3COpenU3Ed__36_t397F543D61D5A662853BB000963CC50DE40CDD6B*>(__this + _offset);
	U3COpenU3Ed__36_SetStateMachine_m1E26A498C92CAE6802DCBA4EE8C2A0FCEDB36FC5(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<Register>d__38::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterU3Ed__38_MoveNext_mC542F70E0E3DF362A5C9A3CB38FE5B72647B66EF (U3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_mB44789FBBB0CA8ECD951DC96D21882FCD898F927_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_m504985EEBA4079D12005C93E2014170E56F75B79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mFC8FE32AA7E96D429F6099747DCD766382369489_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_ListenOnce_TisException_t_mB76D1D1B6F83F65BCD7B5C3FF37861FAECA9F1A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_ListenOnce_TisRuntimeObject_mCA6F1CF8D234E1F9283EF88B716F7FEB82278369_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m83A3D4BB779A85D99DBEC93AEE48C15E06FBD9C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m0BEC9DDD70EBEF4B771D326A87019AD5CC446D67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mB03449DB934A552ACBFF79684C4FCF87FA9DDA94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m79ABE43C1E2FABC70D3743294BB2AACD93D3DF67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t9761864C9CCF781E46490D74AFE01CD5910B45CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m9728DBE404D36E613EADFFDE46FA495F80CA209F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m471D8E5ACAD5D9F165A26BF6936D8E615A33E182_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass38_0_U3CRegisterU3Eb__0_mC76D20730F4C9A99A6B7857EA49BF4FD27B2CB1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass38_0_U3CRegisterU3Eb__1_m18B073920952354CD2BE165F8852799880086AD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass38_0_t83EC8829815D592BB13654648A8131DF827E3CBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94F43EF3F5CCE08D85E6D263E511720AE2E14341);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* V_1 = NULL;
	WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* V_2 = NULL;
	TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 V_4;
	memset((&V_4), 0, sizeof(V_4));
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* G_B19_0 = NULL;
	EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* G_B18_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00e1_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0133_1;
			}
		}
		{
			String_t* L_4 = __this->___url_2;
			bool L_5;
			L_5 = Validation_IsWsUrl_mDCF72A26441612D0DB8DF0905B6B6E0E3B72053D(L_4, NULL);
			if (L_5)
			{
				goto IL_003e_1;
			}
		}
		{
			String_t* L_6 = __this->___url_2;
			String_t* L_7;
			L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFA0C1A108A78C23737119DA2ECE6410D0FE287A4)), L_6, NULL);
			ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
			ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, L_7, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRegisterU3Ed__38_MoveNext_mC542F70E0E3DF362A5C9A3CB38FE5B72647B66EF_RuntimeMethod_var)));
		}

IL_003e_1:
		{
			WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_9 = V_1;
			bool L_10 = L_9->____registering_2;
			if (!L_10)
			{
				goto IL_0120_1;
			}
		}
		{
			U3CU3Ec__DisplayClass38_0_t83EC8829815D592BB13654648A8131DF827E3CBF* L_11 = (U3CU3Ec__DisplayClass38_0_t83EC8829815D592BB13654648A8131DF827E3CBF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass38_0_t83EC8829815D592BB13654648A8131DF827E3CBF_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass38_0__ctor_m0908857F2F59E243103D03B14DB5F0FD5D083AD6(L_11, NULL);
			__this->___U3CU3E8__1_4 = L_11;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_4), (void*)L_11);
			U3CU3Ec__DisplayClass38_0_t83EC8829815D592BB13654648A8131DF827E3CBF* L_12 = __this->___U3CU3E8__1_4;
			TaskCompletionSource_1_t9761864C9CCF781E46490D74AFE01CD5910B45CF* L_13 = (TaskCompletionSource_1_t9761864C9CCF781E46490D74AFE01CD5910B45CF*)il2cpp_codegen_object_new(TaskCompletionSource_1_t9761864C9CCF781E46490D74AFE01CD5910B45CF_il2cpp_TypeInfo_var);
			TaskCompletionSource_1__ctor_mB03449DB934A552ACBFF79684C4FCF87FA9DDA94(L_13, 0, TaskCompletionSource_1__ctor_mB03449DB934A552ACBFF79684C4FCF87FA9DDA94_RuntimeMethod_var);
			L_12->___registeringTask_0 = L_13;
			Il2CppCodeGenWriteBarrier((void**)(&L_12->___registeringTask_0), (void*)L_13);
			WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_14 = V_1;
			EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_15 = L_14->___RegisterErrored_11;
			U3CU3Ec__DisplayClass38_0_t83EC8829815D592BB13654648A8131DF827E3CBF* L_16 = __this->___U3CU3E8__1_4;
			EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_17 = (EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE*)il2cpp_codegen_object_new(EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE_il2cpp_TypeInfo_var);
			EventHandler_1__ctor_mFC6BB12FC2C0F483763930B428CFC497E57D41FE(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass38_0_U3CRegisterU3Eb__0_mC76D20730F4C9A99A6B7857EA49BF4FD27B2CB1E_RuntimeMethod_var), NULL);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_18;
			L_18 = Extensions_ListenOnce_TisException_t_mB76D1D1B6F83F65BCD7B5C3FF37861FAECA9F1A5(L_15, L_17, Extensions_ListenOnce_TisException_t_mB76D1D1B6F83F65BCD7B5C3FF37861FAECA9F1A5_RuntimeMethod_var);
			WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_19 = V_1;
			EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* L_20 = L_19->___Opened_10;
			U3CU3Ec__DisplayClass38_0_t83EC8829815D592BB13654648A8131DF827E3CBF* L_21 = __this->___U3CU3E8__1_4;
			EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* L_22 = (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746*)il2cpp_codegen_object_new(EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746_il2cpp_TypeInfo_var);
			EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370(L_22, L_21, (intptr_t)((void*)U3CU3Ec__DisplayClass38_0_U3CRegisterU3Eb__1_m18B073920952354CD2BE165F8852799880086AD3_RuntimeMethod_var), NULL);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_23;
			L_23 = Extensions_ListenOnce_TisRuntimeObject_mCA6F1CF8D234E1F9283EF88B716F7FEB82278369(L_20, L_22, Extensions_ListenOnce_TisRuntimeObject_mCA6F1CF8D234E1F9283EF88B716F7FEB82278369_RuntimeMethod_var);
			U3CU3Ec__DisplayClass38_0_t83EC8829815D592BB13654648A8131DF827E3CBF* L_24 = __this->___U3CU3E8__1_4;
			TaskCompletionSource_1_t9761864C9CCF781E46490D74AFE01CD5910B45CF* L_25 = L_24->___registeringTask_0;
			Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE* L_26;
			L_26 = TaskCompletionSource_1_get_Task_m79ABE43C1E2FABC70D3743294BB2AACD93D3DF67_inline(L_25, TaskCompletionSource_1_get_Task_m79ABE43C1E2FABC70D3743294BB2AACD93D3DF67_RuntimeMethod_var);
			TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C L_27;
			L_27 = Task_1_GetAwaiter_m9728DBE404D36E613EADFFDE46FA495F80CA209F(L_26, Task_1_GetAwaiter_m9728DBE404D36E613EADFFDE46FA495F80CA209F_RuntimeMethod_var);
			V_3 = L_27;
			bool L_28;
			L_28 = TaskAwaiter_1_get_IsCompleted_m0BEC9DDD70EBEF4B771D326A87019AD5CC446D67((&V_3), TaskAwaiter_1_get_IsCompleted_m0BEC9DDD70EBEF4B771D326A87019AD5CC446D67_RuntimeMethod_var);
			if (L_28)
			{
				goto IL_00fd_1;
			}
		}
		{
			int32_t L_29 = 0;
			V_0 = L_29;
			__this->___U3CU3E1__state_0 = L_29;
			TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C L_30 = V_3;
			__this->___U3CU3Eu__1_5 = L_30;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64* L_31 = (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_mB44789FBBB0CA8ECD951DC96D21882FCD898F927(L_31, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_mB44789FBBB0CA8ECD951DC96D21882FCD898F927_RuntimeMethod_var);
			goto IL_025f;
		}

IL_00e1_1:
		{
			TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C L_32 = __this->___U3CU3Eu__1_5;
			V_3 = L_32;
			TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C* L_33 = (TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C*)(&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_33, sizeof(TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C));
			int32_t L_34 = (-1);
			V_0 = L_34;
			__this->___U3CU3E1__state_0 = L_34;
		}

IL_00fd_1:
		{
			WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_35;
			L_35 = TaskAwaiter_1_GetResult_m83A3D4BB779A85D99DBEC93AEE48C15E06FBD9C9((&V_3), TaskAwaiter_1_GetResult_m83A3D4BB779A85D99DBEC93AEE48C15E06FBD9C9_RuntimeMethod_var);
			U3CU3Ec__DisplayClass38_0_t83EC8829815D592BB13654648A8131DF827E3CBF* L_36 = __this->___U3CU3E8__1_4;
			TaskCompletionSource_1_t9761864C9CCF781E46490D74AFE01CD5910B45CF* L_37 = L_36->___registeringTask_0;
			Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE* L_38;
			L_38 = TaskCompletionSource_1_get_Task_m79ABE43C1E2FABC70D3743294BB2AACD93D3DF67_inline(L_37, TaskCompletionSource_1_get_Task_m79ABE43C1E2FABC70D3743294BB2AACD93D3DF67_RuntimeMethod_var);
			WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_39;
			L_39 = Task_1_get_Result_m471D8E5ACAD5D9F165A26BF6936D8E615A33E182(L_38, Task_1_get_Result_m471D8E5ACAD5D9F165A26BF6936D8E615A33E182_RuntimeMethod_var);
			V_2 = L_39;
			goto IL_024b;
		}

IL_0120_1:
		{
			WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_40 = V_1;
			String_t* L_41 = __this->___url_2;
			L_40->____url_1 = L_41;
			Il2CppCodeGenWriteBarrier((void**)(&L_40->____url_1), (void*)L_41);
			WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_42 = V_1;
			L_42->____registering_2 = (bool)1;
		}

IL_0133_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_43 = V_0;
				if ((((int32_t)L_43) == ((int32_t)1)))
				{
					goto IL_01c1_2;
				}
			}
			{
				WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_44 = V_1;
				WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_45 = V_1;
				String_t* L_46 = L_45->____url_1;
				Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_47 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
				Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_47, L_46, NULL);
				WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_48 = (WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42*)il2cpp_codegen_object_new(WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42_il2cpp_TypeInfo_var);
				WebsocketClient__ctor_mB9E5352B3049DEDF9D248F1D39CB11F3FBFF26A8(L_48, L_47, (Func_1_t97EB92A7DEA37DFF8B17C5309B2DE692A3FCC3D5*)NULL, NULL);
				L_44->____socket_0 = L_48;
				Il2CppCodeGenWriteBarrier((void**)(&L_44->____socket_0), (void*)L_48);
				WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_49 = V_1;
				WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_50 = L_49->____socket_0;
				il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272));
				Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_51 = V_4;
				WebsocketClient_set_ReconnectTimeout_m4C639C864C4B1304B28B3FADA5B73C9BD1B306B4_inline(L_50, L_51, NULL);
				WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_52 = V_1;
				WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_53 = L_52->____socket_0;
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
				L_54 = WebsocketClient_Start_m38748137001926A559052C9BA7ADB1D066FB2DF5(L_53, NULL);
				WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_55 = V_1;
				TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_56 = L_55->___OpenTimeout_5;
				WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_57 = V_1;
				String_t* L_58 = L_57->____url_1;
				String_t* L_59;
				L_59 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral94F43EF3F5CCE08D85E6D263E511720AE2E14341, L_58, NULL);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_60;
				L_60 = Extensions_WithTimeout_mC2594D2F66077313CDED7D239A5C1AAC42ED217A(L_54, L_56, L_59, NULL);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_61;
				L_61 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_60, NULL);
				V_5 = L_61;
				bool L_62;
				L_62 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_5), NULL);
				if (L_62)
				{
					goto IL_01de_2;
				}
			}
			{
				int32_t L_63 = 1;
				V_0 = L_63;
				__this->___U3CU3E1__state_0 = L_63;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_64 = V_5;
				__this->___U3CU3Eu__2_6 = L_64;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64* L_65 = (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64*)(&__this->___U3CU3Et__builder_1);
				il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64_il2cpp_TypeInfo_var);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_m504985EEBA4079D12005C93E2014170E56F75B79(L_65, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01_m504985EEBA4079D12005C93E2014170E56F75B79_RuntimeMethod_var);
				goto IL_025f;
			}

IL_01c1_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_66 = __this->___U3CU3Eu__2_6;
				V_5 = L_66;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_67 = (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*)(&__this->___U3CU3Eu__2_6);
				il2cpp_codegen_initobj(L_67, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_68 = (-1);
				V_0 = L_68;
				__this->___U3CU3E1__state_0 = L_68;
			}

IL_01de_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_5), NULL);
				WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_69 = V_1;
				WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_70 = V_1;
				WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_71 = L_70->____socket_0;
				WebsocketConnection_OnOpen_mE2533B406E46444B6FFFA371C0F17190846EEF10(L_69, L_71, NULL);
				WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_72 = V_1;
				WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_73 = L_72->____socket_0;
				V_2 = L_73;
				goto IL_024b;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_01fa_1;
			}
			throw e;
		}

CATCH_01fa_1:
		{// begin catch(System.Exception)
			{
				Exception_t* L_74 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
				V_6 = L_74;
				WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_75 = V_1;
				EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_76 = L_75->___RegisterErrored_11;
				EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_77 = L_76;
				G_B18_0 = L_77;
				if (L_77)
				{
					G_B19_0 = L_77;
					goto IL_0208_1;
				}
			}
			{
				goto IL_0210_1;
			}

IL_0208_1:
			{
				WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_78 = V_1;
				Exception_t* L_79 = V_6;
				EventHandler_1_Invoke_m888792B4544DF26E2DD65593C4BD6D701ADF224C_inline(G_B19_0, L_78, L_79, NULL);
			}

IL_0210_1:
			{
				WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_80 = V_1;
				Nullable_1_t4936015D54B4E5C3191E452324F5F52BD55E1284 L_81;
				memset((&L_81), 0, sizeof(L_81));
				Nullable_1__ctor_mAC60001B01BC8FCA7B8D1E3913BBEB34A470FC03((&L_81), ((int32_t)1005), /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nullable_1__ctor_mAC60001B01BC8FCA7B8D1E3913BBEB34A470FC03_RuntimeMethod_var)));
				Exception_t* L_82 = V_6;
				String_t* L_83;
				L_83 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_82);
				Exception_t* L_84 = V_6;
				DisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316* L_85 = (DisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316_il2cpp_TypeInfo_var)));
				DisconnectionInfo__ctor_mB493E23643DA0B6623DC74005C943BA03D022061(L_85, 3, L_81, L_83, (String_t*)NULL, L_84, NULL);
				WebsocketConnection_OnClose_m03DA171EFD23A099AD03AAC4D3807DCEED668CB9(L_80, L_85, NULL);
				IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
			}
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0232;
		}
		throw e;
	}

CATCH_0232:
	{// begin catch(System.Exception)
		Exception_t* L_86 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_86;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64* L_87 = (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_88 = V_7;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_1_SetException_m1604359F88263AC650B4A59E0B6CA8619532BB60(L_87, L_88, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m1604359F88263AC650B4A59E0B6CA8619532BB60_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_025f;
	}// end catch (depth: 1)

IL_024b:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64* L_89 = (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64*)(&__this->___U3CU3Et__builder_1);
		WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_90 = V_2;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetResult_mFC8FE32AA7E96D429F6099747DCD766382369489(L_89, L_90, AsyncTaskMethodBuilder_1_SetResult_mFC8FE32AA7E96D429F6099747DCD766382369489_RuntimeMethod_var);
	}

IL_025f:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRegisterU3Ed__38_MoveNext_mC542F70E0E3DF362A5C9A3CB38FE5B72647B66EF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01*>(__this + _offset);
	U3CRegisterU3Ed__38_MoveNext_mC542F70E0E3DF362A5C9A3CB38FE5B72647B66EF(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<Register>d__38::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegisterU3Ed__38_SetStateMachine_mA59C6E935FDAC16BE5E310C45E747E744E524072 (U3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mDBAD3A8D38DF3346DE2E83B89580CADD6AB1C37C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64* L_0 = (AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t37DBEBDAC8F204D21FE7523F5621340C70B46E64_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetStateMachine_mDBAD3A8D38DF3346DE2E83B89580CADD6AB1C37C(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mDBAD3A8D38DF3346DE2E83B89580CADD6AB1C37C_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRegisterU3Ed__38_SetStateMachine_mA59C6E935FDAC16BE5E310C45E747E744E524072_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRegisterU3Ed__38_t363376F53336F0AAC166D030198BA01984CCAE01*>(__this + _offset);
	U3CRegisterU3Ed__38_SetStateMachine_mA59C6E935FDAC16BE5E310C45E747E744E524072(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<SendError>d__46::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendErrorU3Ed__46_MoveNext_m3921F812229F5A9696A4488F8C7ADAF87BD1BAFA (U3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C_TisU3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5_m0FA3600E13ED21FB51B20BDC7A0F93624DC28461_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m83A3D4BB779A85D99DBEC93AEE48C15E06FBD9C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m0BEC9DDD70EBEF4B771D326A87019AD5CC446D67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m9728DBE404D36E613EADFFDE46FA495F80CA209F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* V_1 = NULL;
	WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* V_2 = NULL;
	TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0057_1;
			}
		}
		{
			WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_3 = V_1;
			WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_4 = L_3->____socket_0;
			if (L_4)
			{
				goto IL_0082_1;
			}
		}
		{
			WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_5 = V_1;
			WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_6 = V_1;
			String_t* L_7 = L_6->____url_1;
			Task_1_t7481679E2873AE2761E454CA4CBFDB99E156FFBE* L_8;
			L_8 = WebsocketConnection_Register_m4787D02B7E1FA366C1326FD24ACD14E9B95EF27E(L_5, L_7, NULL);
			TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C L_9;
			L_9 = Task_1_GetAwaiter_m9728DBE404D36E613EADFFDE46FA495F80CA209F(L_8, Task_1_GetAwaiter_m9728DBE404D36E613EADFFDE46FA495F80CA209F_RuntimeMethod_var);
			V_3 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_1_get_IsCompleted_m0BEC9DDD70EBEF4B771D326A87019AD5CC446D67((&V_3), TaskAwaiter_1_get_IsCompleted_m0BEC9DDD70EBEF4B771D326A87019AD5CC446D67_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0073_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
			TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C L_12 = V_3;
			__this->___U3CU3Eu__1_4 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_13 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C_TisU3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5_m0FA3600E13ED21FB51B20BDC7A0F93624DC28461(L_13, (&V_3), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C_TisU3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5_m0FA3600E13ED21FB51B20BDC7A0F93624DC28461_RuntimeMethod_var);
			goto IL_00db;
		}

IL_0057_1:
		{
			TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C L_14 = __this->___U3CU3Eu__1_4;
			V_3 = L_14;
			TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C* L_15 = (TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C*)(&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_1_t7731F3F710FC4E1347EFFFEC7C5BF75DAC29790C));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
		}

IL_0073_1:
		{
			WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_17;
			L_17 = TaskAwaiter_1_GetResult_m83A3D4BB779A85D99DBEC93AEE48C15E06FBD9C9((&V_3), TaskAwaiter_1_GetResult_m83A3D4BB779A85D99DBEC93AEE48C15E06FBD9C9_RuntimeMethod_var);
			V_2 = L_17;
			WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_18 = V_1;
			WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_19 = V_2;
			L_18->____socket_0 = L_19;
			Il2CppCodeGenWriteBarrier((void**)(&L_18->____socket_0), (void*)L_19);
		}

IL_0082_1:
		{
		}
		try
		{// begin try (depth: 2)
			WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_20 = V_1;
			WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* L_21 = L_20->____socket_0;
			RuntimeObject* L_22 = __this->___requestPayload_3;
			il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
			String_t* L_23;
			L_23 = JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7(L_22, NULL);
			WebsocketClient_Send_mEC22B056CDE68AC3E135353FB37863EF2D9A93BA(L_21, L_23, NULL);
			goto IL_00ad_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_009b_1;
			}
			throw e;
		}

CATCH_009b_1:
		{// begin catch(System.Exception)
			Exception_t* L_24 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_4 = L_24;
			WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_25 = V_1;
			RuntimeObject* L_26 = __this->___requestPayload_3;
			Exception_t* L_27 = V_4;
			WebsocketConnection_OnError_TisRuntimeObject_m2D6A8CBD2B1C6F5D5522ECA9FD615E7D24F6FE11(L_25, L_26, L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebsocketConnection_OnError_TisRuntimeObject_m2D6A8CBD2B1C6F5D5522ECA9FD615E7D24F6FE11_RuntimeMethod_var)));
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_00ad_1;
		}// end catch (depth: 2)

IL_00ad_1:
		{
			goto IL_00c8;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00af;
		}
		throw e;
	}

CATCH_00af:
	{// begin catch(System.Exception)
		Exception_t* L_28 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_5 = L_28;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_29 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_30 = V_5;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_29, L_30, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00db;
	}// end catch (depth: 1)

IL_00c8:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_31 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_31, NULL);
	}

IL_00db:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendErrorU3Ed__46_MoveNext_m3921F812229F5A9696A4488F8C7ADAF87BD1BAFA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5*>(__this + _offset);
	U3CSendErrorU3Ed__46_MoveNext_m3921F812229F5A9696A4488F8C7ADAF87BD1BAFA(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnection/<SendError>d__46::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendErrorU3Ed__46_SetStateMachine_mEF40765EFB952B6F893F603068A92F0D33F81098 (U3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendErrorU3Ed__46_SetStateMachine_mEF40765EFB952B6F893F603068A92F0D33F81098_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendErrorU3Ed__46_t03DE4DF4E7F9093128EC304A077E09BFABB9BCC5*>(__this + _offset);
	U3CSendErrorU3Ed__46_SetStateMachine_mEF40765EFB952B6F893F603068A92F0D33F81098(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Threading.Tasks.Task`1<WalletConnectSharp.Network.IJsonRpcConnection> WalletConnectSharp.Network.Websocket.WebsocketConnectionBuilder::CreateConnection(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t6B7C1E82378BEC85DDAD7EF03D99F766A7D25845* WebsocketConnectionBuilder_CreateConnection_m30825094E1A4861A1B2CA3CCB31A50B933546F76 (WebsocketConnectionBuilder_tCAAA5B6D7EE0312222EC6A090EACDD60E91FD27A* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisIJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_mCA222BDDC225EC0F3F732A8E361A46EA28D9D007_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_url;
		WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502* L_1 = (WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502*)il2cpp_codegen_object_new(WebsocketConnection_tCF82E1C6964BEFD481FB098A5FA537472D41D502_il2cpp_TypeInfo_var);
		WebsocketConnection__ctor_mF28E0FE9675FC5562B7278343487AF95CFA3A43C(L_1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t6B7C1E82378BEC85DDAD7EF03D99F766A7D25845* L_2;
		L_2 = Task_FromResult_TisIJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_mCA222BDDC225EC0F3F732A8E361A46EA28D9D007(L_1, Task_FromResult_TisIJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_mCA222BDDC225EC0F3F732A8E361A46EA28D9D007_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void WalletConnectSharp.Network.Websocket.WebsocketConnectionBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebsocketConnectionBuilder__ctor_m5D0E7CEDB184A5EF0D5E310CE113F18A57ECC16F (WebsocketConnectionBuilder_tCAAA5B6D7EE0312222EC6A090EACDD60E91FD27A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* DisconnectionInfo_get_Exception_m846A7CB4528DAA213D9085BB1018578A7ED80664_inline (DisconnectionInfo_t42376B49C21BD744EB3487706EE9B6D33CAC4316* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->___U3CExceptionU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ResponseMessage_get_MessageType_m9323E327E5343EBD7C65509A11E222896510F74E_inline (ResponseMessage_tED4D8300EA9964C3E02206B936A4F2CB7533AE80* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CMessageTypeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ResponseMessage_get_Text_m51F3F4069B69D3482A6C2C83F5175CFF2B4EE781_inline (ResponseMessage_tED4D8300EA9964C3E02206B936A4F2CB7533AE80* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebsocketClient_set_ReconnectTimeout_m4C639C864C4B1304B28B3FADA5B73C9BD1B306B4_inline (WebsocketClient_t9C039ABABFD07C22C60D0C9A6C005D5801E9EB42* __this, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_0 = ___0_value;
		__this->___U3CReconnectTimeoutU3Ek__BackingField_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_sender, RuntimeObject* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = __this->____task_0;
		return L_0;
	}
}
