#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int64,WalletConnectSharp.Sign.Models.PendingRequestStruct>
struct Dictionary_2_t47C81363EAF74D7115434382C1D17097EA3A52A6;
// System.Collections.Generic.Dictionary`2<System.Int64,WalletConnectSharp.Sign.Models.ProposalStruct>
struct Dictionary_2_tCE22CA725FBA88FBB45D2D1E505A2D69F88C8060;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>
struct Dictionary_2_t6F746BAA06881876A266EA34F6D2B0598F10A994;
// System.Collections.Generic.Dictionary`2<System.String,WalletConnectSharp.Sign.Models.SessionStruct>
struct Dictionary_2_t5CC8AEF1E4E69816555E4B5D88EBB4C2A01D5BE4;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<WalletConnectSharp.Sign.Models.DefaultsLoadingEventArgs>
struct EventHandler_1_t30EEAD9BE466391AB06F7F8E7F0353EAE8EED806;
// System.EventHandler`1<System.Exception>
struct EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<WalletConnectSharp.Core.Models.Pairing.PairingEvent>
struct EventHandler_1_tC5C346C30DF7A5F37B8B5580290B17662A8A6180;
// System.EventHandler`1<WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent>
struct EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55;
// System.EventHandler`1<WalletConnectSharp.Sign.Models.Engine.Events.SessionProposalEvent>
struct EventHandler_1_t4A4170BD54B78D67B3728FB46AE4DBAA07C6293E;
// System.EventHandler`1<WalletConnectSharp.Sign.Models.SessionStruct>
struct EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94;
// System.EventHandler`1<WalletConnectSharp.Sign.Models.Engine.Events.SessionUpdateEvent>
struct EventHandler_1_t078B1E2E79295629A235F8D7D86ED8A24638F79A;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<WalletConnectSharp.Network.Models.Error>
struct IEqualityComparer_1_t796885C933B9962BA9DBD71D5C7167FFB2CF04DB;
// System.Collections.Generic.IEqualityComparer`1<WalletConnectSharp.Sign.Models.Namespace>
struct IEqualityComparer_1_t0E820789F5E73268F899DF1E91C9F41912FA1B2A;
// System.Collections.Generic.IEqualityComparer`1<WalletConnectSharp.Sign.Models.ProposedNamespace>
struct IEqualityComparer_1_t3DEEC745B895128E541971BFD0DF75B8B28772FC;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t854AC855896A27133C7EC78A5764687EAE6F3A1C;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.String,WalletConnectSharp.Sign.Models.Namespace>
struct KeyCollection_t05B89CD562AD615C388EBDCA3D8E6AC92C701377;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>
struct KeyCollection_tADEF87A8AA23E2EF374A563F70FBE38952B5C7A9;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>
struct KeyCollection_tDD84839E1174F2132B4B05A806047C8DCB092AC2;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>
struct SortedDictionary_2_t988B01B17248124FE8F06E2783DC4D609EF0DE2E;
// System.Collections.Generic.SortedDictionary`2<System.String,WalletConnectSharp.Sign.Models.Namespace>
struct SortedDictionary_2_t9EF98B54A1181C7E9937FCB974BCFE1119299AEB;
// System.Collections.Generic.SortedDictionary`2<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>
struct SortedDictionary_2_t69D9B958ADDE5BC27A17B121D558DD2F1D55B1DE;
// WalletConnectSharp.Core.Controllers.Store`2<System.Int64,WalletConnectSharp.Sign.Models.PendingRequestStruct>
struct Store_2_t48F884197F31AD6D01E0B5B424C2D89C33A593EB;
// WalletConnectSharp.Core.Controllers.Store`2<System.Int64,WalletConnectSharp.Sign.Models.ProposalStruct>
struct Store_2_t7D37114C5EBC48CD5B529EA79108886DAA6F6D5A;
// WalletConnectSharp.Core.Controllers.Store`2<System.Object,WalletConnectSharp.Sign.Models.SessionStruct>
struct Store_2_t50FA825544E8B854E69AE2F53ACB6ADEA7BBE03F;
// WalletConnectSharp.Core.Controllers.Store`2<System.String,WalletConnectSharp.Sign.Models.SessionStruct>
struct Store_2_tE4FD884B5BD908D4BABB7ABA422282C220C9440A;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.TaskFactory`1<WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData>
struct TaskFactory_1_t44F7205C9D15EAB7E1071447155195B46D7E161E;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<WalletConnectSharp.Sign.Models.SessionStruct>
struct Task_1_t14AB7A2B29FADABB515DE44B78266C03CFDD8268;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Threading.Tasks.Task`1<WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData>
struct Task_1_t3DE2F0EBC4A3E3DD775D27CD5B92AD54C65DC5EA;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.String,WalletConnectSharp.Sign.Models.Namespace>>
struct TreeSet_1_t34CAD0F617E853E6C7AC46317F37FB0B472BAF7A;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>>
struct TreeSet_1_t373586A5E692A1ECDBD0D85ABB8AC96C60965B66;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.String,WalletConnectSharp.Sign.Models.Namespace>
struct ValueCollection_t3361506E6FBE32B254C2C78A38A0010A60A06C26;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>
struct ValueCollection_tB5F685896CC2FB28F62C7E67D01A899C723F71DE;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>
struct ValueCollection_t5969A76235619AB78F9E293FABD4655D1604D33B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>[]
struct EntryU5BU5D_t386A4AC30A0CD29407953CF40DEEFE2A730AC849;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
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
// WalletConnectSharp.Sign.Models.PendingRequestStruct[]
struct PendingRequestStructU5BU5D_t916FBD4331B75706643A2BF5F3A5BC1B34EA0968;
// WalletConnectSharp.Sign.Models.ProposalStruct[]
struct ProposalStructU5BU5D_tE80E44D8A0AF91BFADD40883CFCCF51D197E1B76;
// WalletConnectSharp.Core.Models.Relay.ProtocolOptions[]
struct ProtocolOptionsU5BU5D_tD97471A3320EE85560F7A876239FDF81A0F24C6C;
// WalletConnectSharp.Sign.Models.SessionStruct[]
struct SessionStructU5BU5D_tAD152692912304BF6EF1EAB73B05811574B9F406;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// WalletConnectSharp.Sign.Controllers.AddressProvider
struct AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// WalletConnectSharp.Sign.Models.Engine.ConnectOptions
struct ConnectOptions_t02F2520E53511A534588BA0939CCC16043713F88;
// WalletConnectSharp.Sign.Models.Engine.ConnectedData
struct ConnectedData_tA7FD8B2D59BA27EE3294C6A24620BA64A06089D7;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// WalletConnectSharp.Core.Models.CoreOptions
struct CoreOptions_tA357D8C3F9D77FBAE0262F38D5DE0FA223FA8B08;
// WalletConnectSharp.Sign.Models.DefaultsLoadingEventArgs
struct DefaultsLoadingEventArgs_t331F8FF084CEFF8C9A6F92F1A7DD58444B49CCE5;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// WalletConnectSharp.Network.Models.Error
struct Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2;
// System.Exception
struct Exception_t;
// WalletConnectSharp.Sign.Models.Engine.IAcknowledgement
struct IAcknowledgement_tBC1DD22E85871FED61E6CD363A39ADEF741AA91E;
// WalletConnectSharp.Sign.Interfaces.IAddressProvider
struct IAddressProvider_t08A85E00B91FC2FF453FC78B1EC78965242F7B74;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// WalletConnectSharp.Network.Interfaces.IConnectionBuilder
struct IConnectionBuilder_tE735D1A3CF8BD1541253D33B1BEC0CD8514D1E7E;
// WalletConnectSharp.Core.Interfaces.ICore
struct ICore_t486AB9797C8EA37B31C47E5ACD8D2A65C63C3BDF;
// WalletConnectSharp.Crypto.Interfaces.ICrypto
struct ICrypto_t2BDE2CC1165370E3D0B58E5D7192866DA3016A38;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// WalletConnectSharp.Sign.Interfaces.IEngine
struct IEngine_t4035BCC0E0D0958DBC0C410BB9C1DC5D7A9D559B;
// WalletConnectSharp.Crypto.Interfaces.IKeyChain
struct IKeyChain_tD93D601370C930713E56F52D405F02373C60CF35;
// WalletConnectSharp.Storage.Interfaces.IKeyValueStorage
struct IKeyValueStorage_t32495C81C0D854E5375AAE500F8A102DF003DDF2;
// WalletConnectSharp.Core.Interfaces.IPairingStore
struct IPairingStore_t4BF09D2A1E77B942CD7467B7A15FEBDDCD69D112;
// WalletConnectSharp.Sign.Interfaces.IPendingRequests
struct IPendingRequests_t7FB4257690A3C35E3ECEF488635D42FE39E651AB;
// WalletConnectSharp.Sign.Interfaces.IProposal
struct IProposal_tF0489EDC24E2B37A1F4CA13D73C27469F32F19C3;
// WalletConnectSharp.Network.IRelayUrlBuilder
struct IRelayUrlBuilder_t7A092C488DF543029F21C65D2C5713E8F58A4F48;
// WalletConnectSharp.Sign.Interfaces.ISession
struct ISession_t2158EA0723520A54E52F244020A90B22E60FD7FC;
// WalletConnectSharp.Sign.Interfaces.ISignClient
struct ISignClient_t96FD1D128E9AE60001E8BD60DC835D5127FC29DA;
// WalletConnectSharp.Core.Metadata
struct Metadata_t4AC24B559D85168A0280CC60EAD19CA5E0C2B1AC;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// WalletConnectSharp.Sign.Models.Namespace
struct Namespace_t8A1625FFCBDE1844297005A0B0E446EAC9CBDA49;
// WalletConnectSharp.Sign.Models.Namespaces
struct Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2;
// WalletConnectSharp.Sign.Models.Participant
struct Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223;
// WalletConnectSharp.Sign.Controllers.PendingRequests
struct PendingRequests_tBF176ADFA9046487D96F27192F681C048C7BC38A;
// WalletConnectSharp.Sign.Controllers.Proposal
struct Proposal_t609CB604E229BB88B83EC9D3FBC516455EE9D929;
// WalletConnectSharp.Sign.Models.ProposedNamespace
struct ProposedNamespace_tD09A3F2DDDADACB651F6E2CCEC37B94D45386DB2;
// WalletConnectSharp.Core.Models.Relay.ProtocolOptions
struct ProtocolOptions_t87E54661957741DB313DB6887FC624D67FC2B668;
// WalletConnectSharp.Sign.Models.RequiredNamespaces
struct RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// WalletConnectSharp.Sign.Controllers.Session
struct Session_t89DECC2F058CFABB54855136D97CD8B906E1D41A;
// WalletConnectSharp.Sign.Models.Engine.Methods.SessionDelete
struct SessionDelete_tCDF1435C5BE2CA8C85F4712C71C6C966314BCE85;
// WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent
struct SessionEvent_t51DCC23F861FF9390B6B9BEA4F4BC00A86BBF2A6;
// WalletConnectSharp.Sign.Models.Engine.Methods.SessionExtend
struct SessionExtend_tFB4F74A8A40B0665CB16E681462893D5B651EB5E;
// WalletConnectSharp.Sign.Models.Engine.Events.SessionProposalEvent
struct SessionProposalEvent_t20B7175CA1F3C9B8F6FD63CAA02A7C81AF7283B4;
// WalletConnectSharp.Sign.Models.Engine.Methods.SessionPropose
struct SessionPropose_t6D7CE92C5E4D9B5921F2153D425AF210261A3A69;
// WalletConnectSharp.Sign.Models.SessionStruct
struct SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E;
// WalletConnectSharp.Sign.Models.Engine.Methods.SessionUpdate
struct SessionUpdate_t6E6C94CF144C5B156E715544FF64941241768EC3;
// WalletConnectSharp.Sign.Models.Engine.Events.SessionUpdateEvent
struct SessionUpdateEvent_tDEEB67FEF3C76A9173C017492C009168613F17B2;
// WalletConnectSharp.Sign.Models.SignClientOptions
struct SignClientOptions_t9E9C02D5BF2C670B2FBB07D96D565DCAAD207B9D;
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
// WalletConnectSharp.Core.Models.Verify.VerifiedContext
struct VerifiedContext_t1E65B4DF965AAF5DA35B9AA0DC52300C760D10A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WalletConnectSharp.Sign.Models.Engine.IAcknowledgement/TaskAcknowledgement
struct TaskAcknowledgement_t2DE71F6617690BFA473DC8DE0A3A237BDB926FDF;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultsLoadingEventArgs_t331F8FF084CEFF8C9A6F92F1A7DD58444B49CCE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6F746BAA06881876A266EA34F6D2B0598F10A994_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICore_t486AB9797C8EA37B31C47E5ACD8D2A65C63C3BDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEngineAPI_tDAE25681E18B438E010F95FE02982515D32A9385_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IKeyValueStorage_t32495C81C0D854E5375AAE500F8A102DF003DDF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IModule_t5E13B7170A3930FB4B604A03CA174BC171B7172A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISignClient_t96FD1D128E9AE60001E8BD60DC835D5127FC29DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskAcknowledgement_t2DE71F6617690BFA473DC8DE0A3A237BDB926FDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WalletConnectSignClient_tF285B0C7B639363DD25489D68A1E22F5E0056396_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2388F091C228023E790448E1E25A13FDA7A160F4;
IL2CPP_EXTERN_C String_t* _stringLiteral27A9CD636B42E026DEBC83DBC31F2569DC31CE24;
IL2CPP_EXTERN_C String_t* _stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558;
IL2CPP_EXTERN_C String_t* _stringLiteral47A69ED29390B09F1E1DE51E73B3770D6CAA9B45;
IL2CPP_EXTERN_C String_t* _stringLiteral80D479AC3A6E2B8B70DE6CC1D300F757754E6312;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8EFEA378DCE53335D9C3C6BC54A586802D45644B;
IL2CPP_EXTERN_C String_t* _stringLiteral91824649BB1C6B683E7A451E08C94889A729BA62;
IL2CPP_EXTERN_C String_t* _stringLiteral96B26C368E74EDB80685DEE93CAB7B0813B67961;
IL2CPP_EXTERN_C String_t* _stringLiteralC028EE7E3B755B6750CB9460E275DFE2AB12748F;
IL2CPP_EXTERN_C String_t* _stringLiteralFCFEC34E89A07B423A1D2F8D89D33BED660094DD;
IL2CPP_EXTERN_C const RuntimeMethod* AddressProvider_ClientOnSessionConnected_mAD2DE06ED24B3B007F2CC0580BC389529C9740E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AddressProvider_ClientOnSessionDeleted_mE28D28A3E348581CF15E7D1D0842043E9D7F75D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AddressProvider_ClientOnSessionUpdated_m4FF4E2885C982A9E51D522BEB75F298409AF0134_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_mB27EE438B2B1EBC1875DDE303FD036CEEA1A2D72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_m9C5BF287EB8021A3DA0B5907FEBFD677D6532A68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8_mE865EF33C55AF454C6458EB60EA7980CE24452D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138_m5E89EBFD36B0FDAFE5096A9CBD9F4E98A973A075_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8_m02ED98728F23F932A89789AD1FA771AB9E8BFE8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_m1822FA84A0BDFDCDF463AE36F49F3B3A4F0BC0BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138_m1EFEA3375DFBBCA214C543BE1CF052D51C57B01D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490_mA53DB08511E015810ACDBE216117BC1CCD8B3CA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490_m661DB8530D1414681CDF38AEE1FA73D866667103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9D4C09209F78170AC1D82FB4C1B713D3B3BCCC9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisString_t_m9CA8A9DE7F8DCB619529414D42C259BDF6C05A5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Take_TisString_t_m31A30189361F02FD6807DA3F2CDCFD4109B79487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKeyValueStorage_GetItem_TisDefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D_mCF5A3E57DE0E2D830178C14653C006BDECB5CC5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IKeyValueStorage_SetItem_TisDefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D_mCB913009802A108EE51203080432B34D6A5E2590_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SessionStruct_CurrentAddress_m8E6E3AC81B9C48A8D9CE574438D3F1062B506202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_ContainsKey_m44D2C27C2D9F5891777547ABEFCE584A0576ECB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_ContainsKey_mD5ABD9F94EC91124189C49A2607C0B3B687E8B21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2__ctor_mF3D4F68CBF05E02665CBF75EAEBDF8C69F010A9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_get_Item_m37C1D4A84E63ECBCDCFAED3906CFA5C7D34CA187_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_get_Item_mED87760BA6248CDCD26FD1B9370EB26711783F84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_get_Keys_m69C5EF81E3EA179F6ABB6CA464B6E63C83CD16BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_get_Keys_m87C794707B69BEBFA056FC97B6697A0C8232E343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Store_2__ctor_m0D991759DD54DB3D8FB34A887859D971E75DC5C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Store_2__ctor_m1BE6272C28E07E65AB7168CA1F4A8F0D7EAAE267_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Store_2__ctor_m364F7B03CF00FA4405C870A3CC89F4534363CE4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Join_TisString_t_m18F27EC5F8A0C5405FD63254DD1190B26B715010_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m372D306836B78EB5520B5AD1DD07AC0CF0013F50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m2435469D0693EE79E689D76FC8C9E43474DED761_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m3053EAEBF00E0F56D64CE89B31651788B0C0649E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E;;
struct SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_com;
struct SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_com;;
struct SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_pinvoke;
struct SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_pinvoke;;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>
struct Dictionary_2_t6F746BAA06881876A266EA34F6D2B0598F10A994  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t386A4AC30A0CD29407953CF40DEEFE2A730AC849* ____entries_1;
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
	KeyCollection_tADEF87A8AA23E2EF374A563F70FBE38952B5C7A9* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB5F685896CC2FB28F62C7E67D01A899C723F71DE* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.String,WalletConnectSharp.Sign.Models.Namespace>
struct KeyCollection_t05B89CD562AD615C388EBDCA3D8E6AC92C701377  : public RuntimeObject
{
	// System.Collections.Generic.SortedDictionary`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/KeyCollection::_dictionary
	SortedDictionary_2_t9EF98B54A1181C7E9937FCB974BCFE1119299AEB* ____dictionary_0;
};

// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>
struct KeyCollection_tDD84839E1174F2132B4B05A806047C8DCB092AC2  : public RuntimeObject
{
	// System.Collections.Generic.SortedDictionary`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/KeyCollection::_dictionary
	SortedDictionary_2_t69D9B958ADDE5BC27A17B121D558DD2F1D55B1DE* ____dictionary_0;
};

// System.Collections.Generic.SortedDictionary`2<System.String,WalletConnectSharp.Sign.Models.Namespace>
struct SortedDictionary_2_t9EF98B54A1181C7E9937FCB974BCFE1119299AEB  : public RuntimeObject
{
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_t05B89CD562AD615C388EBDCA3D8E6AC92C701377* ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_t3361506E6FBE32B254C2C78A38A0010A60A06C26* ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_t34CAD0F617E853E6C7AC46317F37FB0B472BAF7A* ____set_2;
};

// System.Collections.Generic.SortedDictionary`2<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>
struct SortedDictionary_2_t69D9B958ADDE5BC27A17B121D558DD2F1D55B1DE  : public RuntimeObject
{
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_tDD84839E1174F2132B4B05A806047C8DCB092AC2* ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_t5969A76235619AB78F9E293FABD4655D1604D33B* ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_t373586A5E692A1ECDBD0D85ABB8AC96C60965B66* ____set_2;
};

// WalletConnectSharp.Core.Controllers.Store`2<System.Int64,WalletConnectSharp.Sign.Models.PendingRequestStruct>
struct Store_2_t48F884197F31AD6D01E0B5B424C2D89C33A593EB  : public RuntimeObject
{
	// System.Boolean WalletConnectSharp.Core.Controllers.Store`2::Disposed
	bool ___Disposed_0;
	// System.Boolean WalletConnectSharp.Core.Controllers.Store`2::initialized
	bool ___initialized_1;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> WalletConnectSharp.Core.Controllers.Store`2::map
	Dictionary_2_t47C81363EAF74D7115434382C1D17097EA3A52A6* ___map_2;
	// TValue[] WalletConnectSharp.Core.Controllers.Store`2::cached
	PendingRequestStructU5BU5D_t916FBD4331B75706643A2BF5F3A5BC1B34EA0968* ___cached_3;
	// WalletConnectSharp.Core.Interfaces.ICore WalletConnectSharp.Core.Controllers.Store`2::<Core>k__BackingField
	RuntimeObject* ___U3CCoreU3Ek__BackingField_4;
	// System.String WalletConnectSharp.Core.Controllers.Store`2::<StoragePrefix>k__BackingField
	String_t* ___U3CStoragePrefixU3Ek__BackingField_5;
	// System.String WalletConnectSharp.Core.Controllers.Store`2::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_6;
	// System.String WalletConnectSharp.Core.Controllers.Store`2::<Context>k__BackingField
	String_t* ___U3CContextU3Ek__BackingField_7;
};

// WalletConnectSharp.Core.Controllers.Store`2<System.Int64,WalletConnectSharp.Sign.Models.ProposalStruct>
struct Store_2_t7D37114C5EBC48CD5B529EA79108886DAA6F6D5A  : public RuntimeObject
{
	// System.Boolean WalletConnectSharp.Core.Controllers.Store`2::Disposed
	bool ___Disposed_0;
	// System.Boolean WalletConnectSharp.Core.Controllers.Store`2::initialized
	bool ___initialized_1;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> WalletConnectSharp.Core.Controllers.Store`2::map
	Dictionary_2_tCE22CA725FBA88FBB45D2D1E505A2D69F88C8060* ___map_2;
	// TValue[] WalletConnectSharp.Core.Controllers.Store`2::cached
	ProposalStructU5BU5D_tE80E44D8A0AF91BFADD40883CFCCF51D197E1B76* ___cached_3;
	// WalletConnectSharp.Core.Interfaces.ICore WalletConnectSharp.Core.Controllers.Store`2::<Core>k__BackingField
	RuntimeObject* ___U3CCoreU3Ek__BackingField_4;
	// System.String WalletConnectSharp.Core.Controllers.Store`2::<StoragePrefix>k__BackingField
	String_t* ___U3CStoragePrefixU3Ek__BackingField_5;
	// System.String WalletConnectSharp.Core.Controllers.Store`2::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_6;
	// System.String WalletConnectSharp.Core.Controllers.Store`2::<Context>k__BackingField
	String_t* ___U3CContextU3Ek__BackingField_7;
};

// WalletConnectSharp.Core.Controllers.Store`2<System.String,WalletConnectSharp.Sign.Models.SessionStruct>
struct Store_2_tE4FD884B5BD908D4BABB7ABA422282C220C9440A  : public RuntimeObject
{
	// System.Boolean WalletConnectSharp.Core.Controllers.Store`2::Disposed
	bool ___Disposed_0;
	// System.Boolean WalletConnectSharp.Core.Controllers.Store`2::initialized
	bool ___initialized_1;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> WalletConnectSharp.Core.Controllers.Store`2::map
	Dictionary_2_t5CC8AEF1E4E69816555E4B5D88EBB4C2A01D5BE4* ___map_2;
	// TValue[] WalletConnectSharp.Core.Controllers.Store`2::cached
	SessionStructU5BU5D_tAD152692912304BF6EF1EAB73B05811574B9F406* ___cached_3;
	// WalletConnectSharp.Core.Interfaces.ICore WalletConnectSharp.Core.Controllers.Store`2::<Core>k__BackingField
	RuntimeObject* ___U3CCoreU3Ek__BackingField_4;
	// System.String WalletConnectSharp.Core.Controllers.Store`2::<StoragePrefix>k__BackingField
	String_t* ___U3CStoragePrefixU3Ek__BackingField_5;
	// System.String WalletConnectSharp.Core.Controllers.Store`2::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_6;
	// System.String WalletConnectSharp.Core.Controllers.Store`2::<Context>k__BackingField
	String_t* ___U3CContextU3Ek__BackingField_7;
};

// WalletConnectSharp.Sign.Models.Engine.ConnectOptions
struct ConnectOptions_t02F2520E53511A534588BA0939CCC16043713F88  : public RuntimeObject
{
	// WalletConnectSharp.Sign.Models.RequiredNamespaces WalletConnectSharp.Sign.Models.Engine.ConnectOptions::RequiredNamespaces
	RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* ___RequiredNamespaces_0;
	// System.Collections.Generic.Dictionary`2<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace> WalletConnectSharp.Sign.Models.Engine.ConnectOptions::OptionalNamespaces
	Dictionary_2_t6F746BAA06881876A266EA34F6D2B0598F10A994* ___OptionalNamespaces_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> WalletConnectSharp.Sign.Models.Engine.ConnectOptions::SessionProperties
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___SessionProperties_2;
	// System.String WalletConnectSharp.Sign.Models.Engine.ConnectOptions::PairingTopic
	String_t* ___PairingTopic_3;
	// WalletConnectSharp.Core.Models.Relay.ProtocolOptions WalletConnectSharp.Sign.Models.Engine.ConnectOptions::Relays
	ProtocolOptions_t87E54661957741DB313DB6887FC624D67FC2B668* ___Relays_4;
	// System.Int64 WalletConnectSharp.Sign.Models.Engine.ConnectOptions::Expiry
	int64_t ___Expiry_5;
};

// WalletConnectSharp.Sign.Models.Engine.ConnectedData
struct ConnectedData_tA7FD8B2D59BA27EE3294C6A24620BA64A06089D7  : public RuntimeObject
{
	// System.String WalletConnectSharp.Sign.Models.Engine.ConnectedData::Uri
	String_t* ___Uri_0;
	// System.Threading.Tasks.Task`1<WalletConnectSharp.Sign.Models.SessionStruct> WalletConnectSharp.Sign.Models.Engine.ConnectedData::Approval
	Task_1_t14AB7A2B29FADABB515DE44B78266C03CFDD8268* ___Approval_1;
};

// WalletConnectSharp.Network.Models.Error
struct Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2  : public RuntimeObject
{
	// System.Int64 WalletConnectSharp.Network.Models.Error::Code
	int64_t ___Code_0;
	// System.String WalletConnectSharp.Network.Models.Error::Message
	String_t* ___Message_1;
	// System.String WalletConnectSharp.Network.Models.Error::Data
	String_t* ___Data_2;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// WalletConnectSharp.Sign.Models.Namespace
struct Namespace_t8A1625FFCBDE1844297005A0B0E446EAC9CBDA49  : public RuntimeObject
{
	// System.String[] WalletConnectSharp.Sign.Models.Namespace::Accounts
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Accounts_0;
	// System.String[] WalletConnectSharp.Sign.Models.Namespace::Methods
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Methods_1;
	// System.String[] WalletConnectSharp.Sign.Models.Namespace::Events
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Events_2;
	// System.String[] WalletConnectSharp.Sign.Models.Namespace::Chains
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Chains_3;
};

// WalletConnectSharp.Sign.Models.Participant
struct Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223  : public RuntimeObject
{
	// System.String WalletConnectSharp.Sign.Models.Participant::PublicKey
	String_t* ___PublicKey_0;
	// WalletConnectSharp.Core.Metadata WalletConnectSharp.Sign.Models.Participant::Metadata
	Metadata_t4AC24B559D85168A0280CC60EAD19CA5E0C2B1AC* ___Metadata_1;
};

// WalletConnectSharp.Sign.Models.ProposedNamespace
struct ProposedNamespace_tD09A3F2DDDADACB651F6E2CCEC37B94D45386DB2  : public RuntimeObject
{
	// System.String[] WalletConnectSharp.Sign.Models.ProposedNamespace::Chains
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Chains_0;
	// System.String[] WalletConnectSharp.Sign.Models.ProposedNamespace::Methods
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Methods_1;
	// System.String[] WalletConnectSharp.Sign.Models.ProposedNamespace::<Events>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CEventsU3Ek__BackingField_2;
};

// WalletConnectSharp.Core.Models.Relay.ProtocolOptions
struct ProtocolOptions_t87E54661957741DB313DB6887FC624D67FC2B668  : public RuntimeObject
{
	// System.String WalletConnectSharp.Core.Models.Relay.ProtocolOptions::Protocol
	String_t* ___Protocol_0;
	// System.String WalletConnectSharp.Core.Models.Relay.ProtocolOptions::Data
	String_t* ___Data_1;
};

// WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent
struct SessionEvent_t51DCC23F861FF9390B6B9BEA4F4BC00A86BBF2A6  : public RuntimeObject
{
	// System.Int64 WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent::Id
	int64_t ___Id_0;
	// System.String WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent::Topic
	String_t* ___Topic_1;
};

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionPropose
struct SessionPropose_t6D7CE92C5E4D9B5921F2153D425AF210261A3A69  : public RuntimeObject
{
	// WalletConnectSharp.Core.Models.Relay.ProtocolOptions[] WalletConnectSharp.Sign.Models.Engine.Methods.SessionPropose::Relays
	ProtocolOptionsU5BU5D_tD97471A3320EE85560F7A876239FDF81A0F24C6C* ___Relays_0;
	// WalletConnectSharp.Sign.Models.RequiredNamespaces WalletConnectSharp.Sign.Models.Engine.Methods.SessionPropose::RequiredNamespaces
	RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* ___RequiredNamespaces_1;
	// System.Collections.Generic.Dictionary`2<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace> WalletConnectSharp.Sign.Models.Engine.Methods.SessionPropose::OptionalNamespaces
	Dictionary_2_t6F746BAA06881876A266EA34F6D2B0598F10A994* ___OptionalNamespaces_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> WalletConnectSharp.Sign.Models.Engine.Methods.SessionPropose::SessionProperties
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___SessionProperties_3;
	// WalletConnectSharp.Sign.Models.Participant WalletConnectSharp.Sign.Models.Engine.Methods.SessionPropose::Proposer
	Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223* ___Proposer_4;
};

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionProposeResponse
struct SessionProposeResponse_t9000F43BD1704898E12122DE0DF7916A4FC1A441  : public RuntimeObject
{
	// System.String WalletConnectSharp.Sign.Models.Engine.Methods.SessionProposeResponse::ResponderPublicKey
	String_t* ___ResponderPublicKey_0;
};

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionSettle
struct SessionSettle_t8805C3F8071C55A298337EB5E43BAB6DC10F7C07  : public RuntimeObject
{
	// System.String WalletConnectSharp.Sign.Models.Engine.Methods.SessionSettle::PairingTopic
	String_t* ___PairingTopic_0;
	// WalletConnectSharp.Core.Models.Relay.ProtocolOptions WalletConnectSharp.Sign.Models.Engine.Methods.SessionSettle::Relay
	ProtocolOptions_t87E54661957741DB313DB6887FC624D67FC2B668* ___Relay_1;
	// WalletConnectSharp.Sign.Models.Namespaces WalletConnectSharp.Sign.Models.Engine.Methods.SessionSettle::Namespaces
	Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2* ___Namespaces_2;
	// System.Int64 WalletConnectSharp.Sign.Models.Engine.Methods.SessionSettle::Expiry
	int64_t ___Expiry_3;
	// WalletConnectSharp.Sign.Models.Participant WalletConnectSharp.Sign.Models.Engine.Methods.SessionSettle::Controller
	Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223* ___Controller_4;
};

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionUpdate
struct SessionUpdate_t6E6C94CF144C5B156E715544FF64941241768EC3  : public RuntimeObject
{
	// WalletConnectSharp.Sign.Models.Namespaces WalletConnectSharp.Sign.Models.Engine.Methods.SessionUpdate::Namespaces
	Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2* ___Namespaces_0;
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

// WalletConnectSharp.Sign.WalletConnectSignClient
struct WalletConnectSignClient_tF285B0C7B639363DD25489D68A1E22F5E0056396  : public RuntimeObject
{
	// System.String WalletConnectSharp.Sign.WalletConnectSignClient::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_4;
	// System.String WalletConnectSharp.Sign.WalletConnectSignClient::<Context>k__BackingField
	String_t* ___U3CContextU3Ek__BackingField_5;
	// WalletConnectSharp.Core.Metadata WalletConnectSharp.Sign.WalletConnectSignClient::<Metadata>k__BackingField
	Metadata_t4AC24B559D85168A0280CC60EAD19CA5E0C2B1AC* ___U3CMetadataU3Ek__BackingField_6;
	// WalletConnectSharp.Sign.Interfaces.IAddressProvider WalletConnectSharp.Sign.WalletConnectSignClient::<AddressProvider>k__BackingField
	RuntimeObject* ___U3CAddressProviderU3Ek__BackingField_7;
	// WalletConnectSharp.Core.Interfaces.ICore WalletConnectSharp.Sign.WalletConnectSignClient::<Core>k__BackingField
	RuntimeObject* ___U3CCoreU3Ek__BackingField_8;
	// WalletConnectSharp.Sign.Interfaces.IEngine WalletConnectSharp.Sign.WalletConnectSignClient::<Engine>k__BackingField
	RuntimeObject* ___U3CEngineU3Ek__BackingField_9;
	// WalletConnectSharp.Core.Interfaces.IPairingStore WalletConnectSharp.Sign.WalletConnectSignClient::<PairingStore>k__BackingField
	RuntimeObject* ___U3CPairingStoreU3Ek__BackingField_10;
	// WalletConnectSharp.Sign.Interfaces.ISession WalletConnectSharp.Sign.WalletConnectSignClient::<Session>k__BackingField
	RuntimeObject* ___U3CSessionU3Ek__BackingField_11;
	// WalletConnectSharp.Sign.Interfaces.IProposal WalletConnectSharp.Sign.WalletConnectSignClient::<Proposal>k__BackingField
	RuntimeObject* ___U3CProposalU3Ek__BackingField_12;
	// WalletConnectSharp.Sign.Interfaces.IPendingRequests WalletConnectSharp.Sign.WalletConnectSignClient::<PendingRequests>k__BackingField
	RuntimeObject* ___U3CPendingRequestsU3Ek__BackingField_13;
	// WalletConnectSharp.Sign.Models.SignClientOptions WalletConnectSharp.Sign.WalletConnectSignClient::<Options>k__BackingField
	SignClientOptions_t9E9C02D5BF2C670B2FBB07D96D565DCAAD207B9D* ___U3COptionsU3Ek__BackingField_14;
	// System.Boolean WalletConnectSharp.Sign.WalletConnectSignClient::Disposed
	bool ___Disposed_15;
	// System.EventHandler`1<WalletConnectSharp.Sign.Models.SessionStruct> WalletConnectSharp.Sign.WalletConnectSignClient::SessionExpired
	EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94* ___SessionExpired_16;
	// System.EventHandler`1<WalletConnectSharp.Core.Models.Pairing.PairingEvent> WalletConnectSharp.Sign.WalletConnectSignClient::PairingExpired
	EventHandler_1_tC5C346C30DF7A5F37B8B5580290B17662A8A6180* ___PairingExpired_17;
	// System.EventHandler`1<WalletConnectSharp.Sign.Models.Engine.Events.SessionProposalEvent> WalletConnectSharp.Sign.WalletConnectSignClient::SessionProposed
	EventHandler_1_t4A4170BD54B78D67B3728FB46AE4DBAA07C6293E* ___SessionProposed_18;
	// System.EventHandler`1<WalletConnectSharp.Sign.Models.SessionStruct> WalletConnectSharp.Sign.WalletConnectSignClient::SessionConnected
	EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94* ___SessionConnected_19;
	// System.EventHandler`1<System.Exception> WalletConnectSharp.Sign.WalletConnectSignClient::SessionConnectionErrored
	EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* ___SessionConnectionErrored_20;
	// System.EventHandler`1<WalletConnectSharp.Sign.Models.Engine.Events.SessionUpdateEvent> WalletConnectSharp.Sign.WalletConnectSignClient::SessionUpdateRequest
	EventHandler_1_t078B1E2E79295629A235F8D7D86ED8A24638F79A* ___SessionUpdateRequest_21;
	// System.EventHandler`1<WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent> WalletConnectSharp.Sign.WalletConnectSignClient::SessionExtendRequest
	EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55* ___SessionExtendRequest_22;
	// System.EventHandler`1<WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent> WalletConnectSharp.Sign.WalletConnectSignClient::SessionUpdated
	EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55* ___SessionUpdated_23;
	// System.EventHandler`1<WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent> WalletConnectSharp.Sign.WalletConnectSignClient::SessionExtended
	EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55* ___SessionExtended_24;
	// System.EventHandler`1<WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent> WalletConnectSharp.Sign.WalletConnectSignClient::SessionPinged
	EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55* ___SessionPinged_25;
	// System.EventHandler`1<WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent> WalletConnectSharp.Sign.WalletConnectSignClient::SessionDeleted
	EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55* ___SessionDeleted_26;
	// System.EventHandler`1<WalletConnectSharp.Sign.Models.SessionStruct> WalletConnectSharp.Sign.WalletConnectSignClient::SessionRejected
	EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94* ___SessionRejected_27;
	// System.EventHandler`1<WalletConnectSharp.Sign.Models.SessionStruct> WalletConnectSharp.Sign.WalletConnectSignClient::SessionApproved
	EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94* ___SessionApproved_28;
	// System.EventHandler`1<WalletConnectSharp.Core.Models.Pairing.PairingEvent> WalletConnectSharp.Sign.WalletConnectSignClient::PairingPinged
	EventHandler_1_tC5C346C30DF7A5F37B8B5580290B17662A8A6180* ___PairingPinged_29;
	// System.EventHandler`1<WalletConnectSharp.Core.Models.Pairing.PairingEvent> WalletConnectSharp.Sign.WalletConnectSignClient::PairingDeleted
	EventHandler_1_tC5C346C30DF7A5F37B8B5580290B17662A8A6180* ___PairingDeleted_30;
};

// WalletConnectSharp.Sign.Models.Engine.IAcknowledgement/TaskAcknowledgement
struct TaskAcknowledgement_t2DE71F6617690BFA473DC8DE0A3A237BDB926FDF  : public RuntimeObject
{
	// System.Threading.Tasks.Task WalletConnectSharp.Sign.Models.Engine.IAcknowledgement/TaskAcknowledgement::_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____task_0;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>
struct TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData>
struct TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3DE2F0EBC4A3E3DD775D27CD5B92AD54C65DC5EA* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_38;
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

// WalletConnectSharp.Sign.Models.Caip25Address
struct Caip25Address_t9414A3E418BA10C910000680D96EBDADDCB0EDDC 
{
	// System.String WalletConnectSharp.Sign.Models.Caip25Address::Address
	String_t* ___Address_0;
	// System.String WalletConnectSharp.Sign.Models.Caip25Address::ChainId
	String_t* ___ChainId_1;
};
// Native definition for P/Invoke marshalling of WalletConnectSharp.Sign.Models.Caip25Address
struct Caip25Address_t9414A3E418BA10C910000680D96EBDADDCB0EDDC_marshaled_pinvoke
{
	char* ___Address_0;
	char* ___ChainId_1;
};
// Native definition for COM marshalling of WalletConnectSharp.Sign.Models.Caip25Address
struct Caip25Address_t9414A3E418BA10C910000680D96EBDADDCB0EDDC_marshaled_com
{
	Il2CppChar* ___Address_0;
	Il2CppChar* ___ChainId_1;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// WalletConnectSharp.Sign.Models.Namespaces
struct Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2  : public SortedDictionary_2_t9EF98B54A1181C7E9937FCB974BCFE1119299AEB
{
};

// WalletConnectSharp.Sign.Controllers.PendingRequests
struct PendingRequests_tBF176ADFA9046487D96F27192F681C048C7BC38A  : public Store_2_t48F884197F31AD6D01E0B5B424C2D89C33A593EB
{
};

// WalletConnectSharp.Sign.Controllers.Proposal
struct Proposal_t609CB604E229BB88B83EC9D3FBC516455EE9D929  : public Store_2_t7D37114C5EBC48CD5B529EA79108886DAA6F6D5A
{
};

// WalletConnectSharp.Sign.Models.RequiredNamespaces
struct RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC  : public SortedDictionary_2_t69D9B958ADDE5BC27A17B121D558DD2F1D55B1DE
{
};

// WalletConnectSharp.Sign.Controllers.Session
struct Session_t89DECC2F058CFABB54855136D97CD8B906E1D41A  : public Store_2_tE4FD884B5BD908D4BABB7ABA422282C220C9440A
{
};

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionDelete
struct SessionDelete_tCDF1435C5BE2CA8C85F4712C71C6C966314BCE85  : public Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2
{
};

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionExtend
struct SessionExtend_tFB4F74A8A40B0665CB16E681462893D5B651EB5E  : public Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710
{
};

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionPing
struct SessionPing_t8050EC440C53837A92FCFF876786A26AA44D306F  : public Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710
{
};

// WalletConnectSharp.Sign.Models.Engine.Events.SessionUpdateEvent
struct SessionUpdateEvent_tDEEB67FEF3C76A9173C017492C009168613F17B2  : public SessionEvent_t51DCC23F861FF9390B6B9BEA4F4BC00A86BBF2A6
{
	// WalletConnectSharp.Sign.Models.Engine.Methods.SessionUpdate WalletConnectSharp.Sign.Models.Engine.Events.SessionUpdateEvent::Params
	SessionUpdate_t6E6C94CF144C5B156E715544FF64941241768EC3* ___Params_2;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
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

// WalletConnectSharp.Sign.Models.ProposalStruct
struct ProposalStruct_tF717CC78D2B24F2F6DDDCD3995B3E204768C3A35 
{
	// System.Int64 WalletConnectSharp.Sign.Models.ProposalStruct::Id
	int64_t ___Id_0;
	// System.Nullable`1<System.Int64> WalletConnectSharp.Sign.Models.ProposalStruct::Expiry
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___Expiry_1;
	// WalletConnectSharp.Core.Models.Relay.ProtocolOptions[] WalletConnectSharp.Sign.Models.ProposalStruct::Relays
	ProtocolOptionsU5BU5D_tD97471A3320EE85560F7A876239FDF81A0F24C6C* ___Relays_2;
	// WalletConnectSharp.Sign.Models.Participant WalletConnectSharp.Sign.Models.ProposalStruct::Proposer
	Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223* ___Proposer_3;
	// WalletConnectSharp.Sign.Models.RequiredNamespaces WalletConnectSharp.Sign.Models.ProposalStruct::RequiredNamespaces
	RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* ___RequiredNamespaces_4;
	// System.Collections.Generic.Dictionary`2<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace> WalletConnectSharp.Sign.Models.ProposalStruct::OptionalNamespaces
	Dictionary_2_t6F746BAA06881876A266EA34F6D2B0598F10A994* ___OptionalNamespaces_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> WalletConnectSharp.Sign.Models.ProposalStruct::SessionProperties
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___SessionProperties_6;
	// System.String WalletConnectSharp.Sign.Models.ProposalStruct::PairingTopic
	String_t* ___PairingTopic_7;
};
// Native definition for P/Invoke marshalling of WalletConnectSharp.Sign.Models.ProposalStruct
struct ProposalStruct_tF717CC78D2B24F2F6DDDCD3995B3E204768C3A35_marshaled_pinvoke
{
	int64_t ___Id_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___Expiry_1;
	ProtocolOptionsU5BU5D_tD97471A3320EE85560F7A876239FDF81A0F24C6C* ___Relays_2;
	Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223* ___Proposer_3;
	RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* ___RequiredNamespaces_4;
	Dictionary_2_t6F746BAA06881876A266EA34F6D2B0598F10A994* ___OptionalNamespaces_5;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___SessionProperties_6;
	char* ___PairingTopic_7;
};
// Native definition for COM marshalling of WalletConnectSharp.Sign.Models.ProposalStruct
struct ProposalStruct_tF717CC78D2B24F2F6DDDCD3995B3E204768C3A35_marshaled_com
{
	int64_t ___Id_0;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___Expiry_1;
	ProtocolOptionsU5BU5D_tD97471A3320EE85560F7A876239FDF81A0F24C6C* ___Relays_2;
	Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223* ___Proposer_3;
	RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* ___RequiredNamespaces_4;
	Dictionary_2_t6F746BAA06881876A266EA34F6D2B0598F10A994* ___OptionalNamespaces_5;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___SessionProperties_6;
	Il2CppChar* ___PairingTopic_7;
};

// WalletConnectSharp.Sign.Models.SessionStruct
struct SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E 
{
	// System.String WalletConnectSharp.Sign.Models.SessionStruct::Topic
	String_t* ___Topic_0;
	// System.String WalletConnectSharp.Sign.Models.SessionStruct::PairingTopic
	String_t* ___PairingTopic_1;
	// WalletConnectSharp.Core.Models.Relay.ProtocolOptions WalletConnectSharp.Sign.Models.SessionStruct::Relay
	ProtocolOptions_t87E54661957741DB313DB6887FC624D67FC2B668* ___Relay_2;
	// System.Nullable`1<System.Int64> WalletConnectSharp.Sign.Models.SessionStruct::Expiry
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___Expiry_3;
	// System.Nullable`1<System.Boolean> WalletConnectSharp.Sign.Models.SessionStruct::Acknowledged
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___Acknowledged_4;
	// System.String WalletConnectSharp.Sign.Models.SessionStruct::Controller
	String_t* ___Controller_5;
	// WalletConnectSharp.Sign.Models.Namespaces WalletConnectSharp.Sign.Models.SessionStruct::Namespaces
	Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2* ___Namespaces_6;
	// WalletConnectSharp.Sign.Models.RequiredNamespaces WalletConnectSharp.Sign.Models.SessionStruct::RequiredNamespaces
	RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* ___RequiredNamespaces_7;
	// WalletConnectSharp.Sign.Models.Participant WalletConnectSharp.Sign.Models.SessionStruct::Self
	Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223* ___Self_8;
	// WalletConnectSharp.Sign.Models.Participant WalletConnectSharp.Sign.Models.SessionStruct::Peer
	Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223* ___Peer_9;
};
// Native definition for P/Invoke marshalling of WalletConnectSharp.Sign.Models.SessionStruct
struct SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_pinvoke
{
	char* ___Topic_0;
	char* ___PairingTopic_1;
	ProtocolOptions_t87E54661957741DB313DB6887FC624D67FC2B668* ___Relay_2;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___Expiry_3;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___Acknowledged_4;
	char* ___Controller_5;
	Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2* ___Namespaces_6;
	RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* ___RequiredNamespaces_7;
	Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223* ___Self_8;
	Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223* ___Peer_9;
};
// Native definition for COM marshalling of WalletConnectSharp.Sign.Models.SessionStruct
struct SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_com
{
	Il2CppChar* ___Topic_0;
	Il2CppChar* ___PairingTopic_1;
	ProtocolOptions_t87E54661957741DB313DB6887FC624D67FC2B668* ___Relay_2;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___Expiry_3;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___Acknowledged_4;
	Il2CppChar* ___Controller_5;
	Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2* ___Namespaces_6;
	RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* ___RequiredNamespaces_7;
	Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223* ___Self_8;
	Participant_t6902CD1ED748F1F6D364ACFB5F1C02E374EB0223* ___Peer_9;
};

// System.StringSplitOptions
struct StringSplitOptions_t4DD892C76C70DD4800FC1B76054D69826F770062 
{
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;
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

// WalletConnectSharp.Core.Models.CoreOptions
struct CoreOptions_tA357D8C3F9D77FBAE0262F38D5DE0FA223FA8B08  : public RuntimeObject
{
	// System.String WalletConnectSharp.Core.Models.CoreOptions::ProjectId
	String_t* ___ProjectId_0;
	// System.String WalletConnectSharp.Core.Models.CoreOptions::Name
	String_t* ___Name_1;
	// System.String WalletConnectSharp.Core.Models.CoreOptions::RelayUrl
	String_t* ___RelayUrl_2;
	// System.String WalletConnectSharp.Core.Models.CoreOptions::BaseContext
	String_t* ___BaseContext_3;
	// WalletConnectSharp.Storage.Interfaces.IKeyValueStorage WalletConnectSharp.Core.Models.CoreOptions::Storage
	RuntimeObject* ___Storage_4;
	// WalletConnectSharp.Crypto.Interfaces.IKeyChain WalletConnectSharp.Core.Models.CoreOptions::KeyChain
	RuntimeObject* ___KeyChain_5;
	// WalletConnectSharp.Network.Interfaces.IConnectionBuilder WalletConnectSharp.Core.Models.CoreOptions::ConnectionBuilder
	RuntimeObject* ___ConnectionBuilder_6;
	// WalletConnectSharp.Crypto.Interfaces.ICrypto WalletConnectSharp.Core.Models.CoreOptions::CryptoModule
	RuntimeObject* ___CryptoModule_7;
	// System.Nullable`1<System.TimeSpan> WalletConnectSharp.Core.Models.CoreOptions::ConnectionTimeout
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___ConnectionTimeout_8;
	// WalletConnectSharp.Network.IRelayUrlBuilder WalletConnectSharp.Core.Models.CoreOptions::RelayUrlBuilder
	RuntimeObject* ___RelayUrlBuilder_9;
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

// WalletConnectSharp.Sign.Models.Engine.Events.SessionProposalEvent
struct SessionProposalEvent_t20B7175CA1F3C9B8F6FD63CAA02A7C81AF7283B4  : public RuntimeObject
{
	// System.Int64 WalletConnectSharp.Sign.Models.Engine.Events.SessionProposalEvent::Id
	int64_t ___Id_0;
	// WalletConnectSharp.Sign.Models.ProposalStruct WalletConnectSharp.Sign.Models.Engine.Events.SessionProposalEvent::Proposal
	ProposalStruct_tF717CC78D2B24F2F6DDDCD3995B3E204768C3A35 ___Proposal_1;
	// WalletConnectSharp.Core.Models.Verify.VerifiedContext WalletConnectSharp.Sign.Models.Engine.Events.SessionProposalEvent::VerifiedContext
	VerifiedContext_t1E65B4DF965AAF5DA35B9AA0DC52300C760D10A7* ___VerifiedContext_2;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// WalletConnectSharp.Sign.Controllers.AddressProvider/<UpdateDefaultChainAndNamespace>d__31
struct U3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490 
{
	// System.Int32 WalletConnectSharp.Sign.Controllers.AddressProvider/<UpdateDefaultChainAndNamespace>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder WalletConnectSharp.Sign.Controllers.AddressProvider/<UpdateDefaultChainAndNamespace>d__31::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// WalletConnectSharp.Sign.Controllers.AddressProvider WalletConnectSharp.Sign.Controllers.AddressProvider/<UpdateDefaultChainAndNamespace>d__31::<>4__this
	AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter WalletConnectSharp.Sign.Controllers.AddressProvider/<UpdateDefaultChainAndNamespace>d__31::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData
struct DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D 
{
	// WalletConnectSharp.Sign.Models.SessionStruct WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData::Session
	SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E ___Session_0;
	// System.String WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData::Namespace
	String_t* ___Namespace_1;
	// System.String WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData::ChainId
	String_t* ___ChainId_2;
};
// Native definition for P/Invoke marshalling of WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData
struct DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D_marshaled_pinvoke
{
	SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_pinvoke ___Session_0;
	char* ___Namespace_1;
	char* ___ChainId_2;
};
// Native definition for COM marshalling of WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData
struct DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D_marshaled_com
{
	SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_com ___Session_0;
	Il2CppChar* ___Namespace_1;
	Il2CppChar* ___ChainId_2;
};

// System.EventHandler`1<WalletConnectSharp.Sign.Models.DefaultsLoadingEventArgs>
struct EventHandler_1_t30EEAD9BE466391AB06F7F8E7F0353EAE8EED806  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};

// System.EventHandler`1<WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent>
struct EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55  : public MulticastDelegate_t
{
};

// System.EventHandler`1<WalletConnectSharp.Sign.Models.SessionStruct>
struct EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94  : public MulticastDelegate_t
{
};

// System.Threading.Tasks.Task`1<WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData>
struct Task_1_t3DE2F0EBC4A3E3DD775D27CD5B92AD54C65DC5EA  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D ___m_result_38;
};

// WalletConnectSharp.Sign.Controllers.AddressProvider
struct AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671  : public RuntimeObject
{
	// System.EventHandler`1<WalletConnectSharp.Sign.Models.DefaultsLoadingEventArgs> WalletConnectSharp.Sign.Controllers.AddressProvider::DefaultsLoaded
	EventHandler_1_t30EEAD9BE466391AB06F7F8E7F0353EAE8EED806* ___DefaultsLoaded_0;
	// WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData WalletConnectSharp.Sign.Controllers.AddressProvider::_state
	DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D ____state_1;
	// WalletConnectSharp.Sign.Interfaces.ISession WalletConnectSharp.Sign.Controllers.AddressProvider::<Sessions>k__BackingField
	RuntimeObject* ___U3CSessionsU3Ek__BackingField_2;
	// WalletConnectSharp.Sign.Interfaces.ISignClient WalletConnectSharp.Sign.Controllers.AddressProvider::_client
	RuntimeObject* ____client_3;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// WalletConnectSharp.Sign.Models.DefaultsLoadingEventArgs
struct DefaultsLoadingEventArgs_t331F8FF084CEFF8C9A6F92F1A7DD58444B49CCE5  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData WalletConnectSharp.Sign.Models.DefaultsLoadingEventArgs::<Defaults>k__BackingField
	DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D ___U3CDefaultsU3Ek__BackingField_1;
};

// WalletConnectSharp.Sign.Models.SignClientOptions
struct SignClientOptions_t9E9C02D5BF2C670B2FBB07D96D565DCAAD207B9D  : public CoreOptions_tA357D8C3F9D77FBAE0262F38D5DE0FA223FA8B08
{
	// WalletConnectSharp.Core.Interfaces.ICore WalletConnectSharp.Sign.Models.SignClientOptions::Core
	RuntimeObject* ___Core_10;
	// WalletConnectSharp.Core.Metadata WalletConnectSharp.Sign.Models.SignClientOptions::Metadata
	Metadata_t4AC24B559D85168A0280CC60EAD19CA5E0C2B1AC* ___Metadata_11;
};

// WalletConnectSharp.Sign.Controllers.AddressProvider/<Init>d__33
struct U3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8 
{
	// System.Int32 WalletConnectSharp.Sign.Controllers.AddressProvider/<Init>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder WalletConnectSharp.Sign.Controllers.AddressProvider/<Init>d__33::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// WalletConnectSharp.Sign.Controllers.AddressProvider WalletConnectSharp.Sign.Controllers.AddressProvider/<Init>d__33::<>4__this
	AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter WalletConnectSharp.Sign.Controllers.AddressProvider/<Init>d__33::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// WalletConnectSharp.Sign.Controllers.AddressProvider/<LoadDefaults>d__27
struct U3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A 
{
	// System.Int32 WalletConnectSharp.Sign.Controllers.AddressProvider/<LoadDefaults>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder WalletConnectSharp.Sign.Controllers.AddressProvider/<LoadDefaults>d__27::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// WalletConnectSharp.Sign.Controllers.AddressProvider WalletConnectSharp.Sign.Controllers.AddressProvider/<LoadDefaults>d__27::<>4__this
	AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* ___U3CU3E4__this_2;
	// System.String WalletConnectSharp.Sign.Controllers.AddressProvider/<LoadDefaults>d__27::<key>5__2
	String_t* ___U3CkeyU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> WalletConnectSharp.Sign.Controllers.AddressProvider/<LoadDefaults>d__27::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData> WalletConnectSharp.Sign.Controllers.AddressProvider/<LoadDefaults>d__27::<>u__2
	TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257 ___U3CU3Eu__2_5;
};

// WalletConnectSharp.Sign.Controllers.AddressProvider/<SaveDefaults>d__26
struct U3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138 
{
	// System.Int32 WalletConnectSharp.Sign.Controllers.AddressProvider/<SaveDefaults>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder WalletConnectSharp.Sign.Controllers.AddressProvider/<SaveDefaults>d__26::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// WalletConnectSharp.Sign.Controllers.AddressProvider WalletConnectSharp.Sign.Controllers.AddressProvider/<SaveDefaults>d__26::<>4__this
	AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter WalletConnectSharp.Sign.Controllers.AddressProvider/<SaveDefaults>d__26::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>

// System.Collections.Generic.Dictionary`2<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.String,WalletConnectSharp.Sign.Models.Namespace>

// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.String,WalletConnectSharp.Sign.Models.Namespace>

// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>

// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>

// System.Collections.Generic.SortedDictionary`2<System.String,WalletConnectSharp.Sign.Models.Namespace>

// System.Collections.Generic.SortedDictionary`2<System.String,WalletConnectSharp.Sign.Models.Namespace>

// System.Collections.Generic.SortedDictionary`2<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>

// System.Collections.Generic.SortedDictionary`2<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>

// WalletConnectSharp.Core.Controllers.Store`2<System.Int64,WalletConnectSharp.Sign.Models.PendingRequestStruct>

// WalletConnectSharp.Core.Controllers.Store`2<System.Int64,WalletConnectSharp.Sign.Models.PendingRequestStruct>

// WalletConnectSharp.Core.Controllers.Store`2<System.Int64,WalletConnectSharp.Sign.Models.ProposalStruct>

// WalletConnectSharp.Core.Controllers.Store`2<System.Int64,WalletConnectSharp.Sign.Models.ProposalStruct>

// WalletConnectSharp.Core.Controllers.Store`2<System.String,WalletConnectSharp.Sign.Models.SessionStruct>

// WalletConnectSharp.Core.Controllers.Store`2<System.String,WalletConnectSharp.Sign.Models.SessionStruct>

// WalletConnectSharp.Sign.Models.Engine.ConnectOptions

// WalletConnectSharp.Sign.Models.Engine.ConnectOptions

// WalletConnectSharp.Sign.Models.Engine.ConnectedData

// WalletConnectSharp.Sign.Models.Engine.ConnectedData

// WalletConnectSharp.Network.Models.Error
struct Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2_StaticFields
{
	// System.Collections.Generic.IEqualityComparer`1<WalletConnectSharp.Network.Models.Error> WalletConnectSharp.Network.Models.Error::<CodeMessageDataComparer>k__BackingField
	RuntimeObject* ___U3CCodeMessageDataComparerU3Ek__BackingField_3;
};

// WalletConnectSharp.Network.Models.Error

// WalletConnectSharp.Sign.Models.Namespace
struct Namespace_t8A1625FFCBDE1844297005A0B0E446EAC9CBDA49_StaticFields
{
	// System.Collections.Generic.IEqualityComparer`1<WalletConnectSharp.Sign.Models.Namespace> WalletConnectSharp.Sign.Models.Namespace::<NamespaceComparer>k__BackingField
	RuntimeObject* ___U3CNamespaceComparerU3Ek__BackingField_4;
};

// WalletConnectSharp.Sign.Models.Namespace

// WalletConnectSharp.Sign.Models.Participant

// WalletConnectSharp.Sign.Models.Participant

// WalletConnectSharp.Sign.Models.ProposedNamespace
struct ProposedNamespace_tD09A3F2DDDADACB651F6E2CCEC37B94D45386DB2_StaticFields
{
	// System.Collections.Generic.IEqualityComparer`1<WalletConnectSharp.Sign.Models.ProposedNamespace> WalletConnectSharp.Sign.Models.ProposedNamespace::<RequiredNamespaceComparer>k__BackingField
	RuntimeObject* ___U3CRequiredNamespaceComparerU3Ek__BackingField_3;
};

// WalletConnectSharp.Sign.Models.ProposedNamespace

// WalletConnectSharp.Core.Models.Relay.ProtocolOptions

// WalletConnectSharp.Core.Models.Relay.ProtocolOptions

// WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent

// WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionPropose

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionPropose

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionProposeResponse

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionProposeResponse

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionSettle

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionSettle

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionUpdate

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionUpdate

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

// WalletConnectSharp.Sign.WalletConnectSignClient
struct WalletConnectSignClient_tF285B0C7B639363DD25489D68A1E22F5E0056396_StaticFields
{
	// System.String WalletConnectSharp.Sign.WalletConnectSignClient::PROTOCOL
	String_t* ___PROTOCOL_0;
	// System.Int32 WalletConnectSharp.Sign.WalletConnectSignClient::VERSION
	int32_t ___VERSION_1;
	// System.String WalletConnectSharp.Sign.WalletConnectSignClient::CONTEXTPOSTFIX
	String_t* ___CONTEXTPOSTFIX_2;
	// System.String WalletConnectSharp.Sign.WalletConnectSignClient::StoragePrefix
	String_t* ___StoragePrefix_3;
};

// WalletConnectSharp.Sign.WalletConnectSignClient

// WalletConnectSharp.Sign.Models.Engine.IAcknowledgement/TaskAcknowledgement

// WalletConnectSharp.Sign.Models.Engine.IAcknowledgement/TaskAcknowledgement

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Int64>

// System.Nullable`1<System.Int64>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>

// System.Runtime.CompilerServices.TaskAwaiter`1<WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData>

// System.Runtime.CompilerServices.TaskAwaiter`1<WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData>

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Boolean>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// WalletConnectSharp.Sign.Models.Caip25Address

// WalletConnectSharp.Sign.Models.Caip25Address

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// WalletConnectSharp.Sign.Models.Namespaces

// WalletConnectSharp.Sign.Models.Namespaces

// WalletConnectSharp.Sign.Controllers.PendingRequests

// WalletConnectSharp.Sign.Controllers.PendingRequests

// WalletConnectSharp.Sign.Controllers.Proposal

// WalletConnectSharp.Sign.Controllers.Proposal

// WalletConnectSharp.Sign.Models.RequiredNamespaces

// WalletConnectSharp.Sign.Models.RequiredNamespaces

// WalletConnectSharp.Sign.Controllers.Session

// WalletConnectSharp.Sign.Controllers.Session

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionDelete

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionDelete

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionExtend

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionExtend

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionPing

// WalletConnectSharp.Sign.Models.Engine.Methods.SessionPing

// WalletConnectSharp.Sign.Models.Engine.Events.SessionUpdateEvent

// WalletConnectSharp.Sign.Models.Engine.Events.SessionUpdateEvent

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// System.Void

// System.Void

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// WalletConnectSharp.Sign.Models.SessionStruct

// WalletConnectSharp.Sign.Models.SessionStruct

// System.StringSplitOptions

// System.StringSplitOptions

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

// WalletConnectSharp.Core.Models.CoreOptions

// WalletConnectSharp.Core.Models.CoreOptions

// WalletConnectSharp.Sign.Models.Engine.Events.SessionProposalEvent

// WalletConnectSharp.Sign.Models.Engine.Events.SessionProposalEvent

// WalletConnectSharp.Sign.Controllers.AddressProvider/<UpdateDefaultChainAndNamespace>d__31

// WalletConnectSharp.Sign.Controllers.AddressProvider/<UpdateDefaultChainAndNamespace>d__31

// WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData

// WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData

// System.EventHandler`1<WalletConnectSharp.Sign.Models.DefaultsLoadingEventArgs>

// System.EventHandler`1<WalletConnectSharp.Sign.Models.DefaultsLoadingEventArgs>

// System.EventHandler`1<System.Object>

// System.EventHandler`1<System.Object>

// System.EventHandler`1<WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent>

// System.EventHandler`1<WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent>

// System.EventHandler`1<WalletConnectSharp.Sign.Models.SessionStruct>

// System.EventHandler`1<WalletConnectSharp.Sign.Models.SessionStruct>

// System.Threading.Tasks.Task`1<WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData>
struct Task_1_t3DE2F0EBC4A3E3DD775D27CD5B92AD54C65DC5EA_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t44F7205C9D15EAB7E1071447155195B46D7E161E* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData>

// WalletConnectSharp.Sign.Controllers.AddressProvider

// WalletConnectSharp.Sign.Controllers.AddressProvider

// System.ArgumentException

// System.ArgumentException

// WalletConnectSharp.Sign.Models.DefaultsLoadingEventArgs

// WalletConnectSharp.Sign.Models.DefaultsLoadingEventArgs

// WalletConnectSharp.Sign.Models.SignClientOptions

// WalletConnectSharp.Sign.Models.SignClientOptions

// WalletConnectSharp.Sign.Controllers.AddressProvider/<Init>d__33

// WalletConnectSharp.Sign.Controllers.AddressProvider/<Init>d__33

// WalletConnectSharp.Sign.Controllers.AddressProvider/<LoadDefaults>d__27

// WalletConnectSharp.Sign.Controllers.AddressProvider/<LoadDefaults>d__27

// WalletConnectSharp.Sign.Controllers.AddressProvider/<SaveDefaults>d__26

// WalletConnectSharp.Sign.Controllers.AddressProvider/<SaveDefaults>d__26
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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

IL2CPP_EXTERN_C void SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshal_pinvoke(const SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E& unmarshaled, SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshal_pinvoke_back(const SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_pinvoke& marshaled, SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E& unmarshaled);
IL2CPP_EXTERN_C void SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshal_pinvoke_cleanup(SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshal_com(const SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E& unmarshaled, SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshal_com_back(const SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_com& marshaled, SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E& unmarshaled);
IL2CPP_EXTERN_C void SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshal_com_cleanup(SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_com& marshaled);

// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2__ctor_m6C226B5BBE8AEF2B91B5DDE105C20BBE6DEC3D91_gshared (SortedDictionary_2_t988B01B17248124FE8F06E2783DC4D609EF0DE2E* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedDictionary_2_get_Item_mB51B2738EFB6D5FD4F9A6C266B356DD12B8DE56F_gshared (SortedDictionary_2_t988B01B17248124FE8F06E2783DC4D609EF0DE2E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Take_TisRuntimeObject_m0D329A9F9B3CB4DFDA8FC9F35FFBFE45804B32D5_gshared (RuntimeObject* ___0_source, int32_t ___1_count, const RuntimeMethod* method) ;
// System.String System.String::Join<System.Object>(System.Char,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_TisRuntimeObject_m00365E4D9011CF55D0FC83B5FF6ED862FBE21741_gshared (Il2CppChar ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WalletConnectSharp.Sign.Models.SessionStruct>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m3A3B249F5335928243FE3E1ECE0C075CB70D9CF2_gshared (EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Sign.Controllers.AddressProvider/<SaveDefaults>d__26>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138_m1EFEA3375DFBBCA214C543BE1CF052D51C57B01D_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Sign.Controllers.AddressProvider/<LoadDefaults>d__27>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_m1822FA84A0BDFDCDF463AE36F49F3B3A4F0BC0BF_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WalletConnectSharp.Sign.Controllers.AddressProvider/<UpdateDefaultChainAndNamespace>d__31>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490_m661DB8530D1414681CDF38AEE1FA73D866667103_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Sign.Controllers.AddressProvider/<Init>d__33>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8_m02ED98728F23F932A89789AD1FA771AB9E8BFE8E_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Sign.Controllers.AddressProvider/<Init>d__33>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8_mE865EF33C55AF454C6458EB60EA7980CE24452D8_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_gshared (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,WalletConnectSharp.Sign.Controllers.AddressProvider/<LoadDefaults>d__27>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_mB27EE438B2B1EBC1875DDE303FD036CEEA1A2D72_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___0_awaiter, U3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257 Task_1_GetAwaiter_m3053EAEBF00E0F56D64CE89B31651788B0C0649E_gshared (Task_1_t3DE2F0EBC4A3E3DD775D27CD5B92AD54C65DC5EA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m2435469D0693EE79E689D76FC8C9E43474DED761_gshared (TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData>,WalletConnectSharp.Sign.Controllers.AddressProvider/<LoadDefaults>d__27>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_m9C5BF287EB8021A3DA0B5907FEBFD677D6532A68_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257* ___0_awaiter, U3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D TaskAwaiter_1_GetResult_m372D306836B78EB5520B5AD1DD07AC0CF0013F50_gshared (TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_sender, RuntimeObject* ___1_e, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Sign.Controllers.AddressProvider/<SaveDefaults>d__26>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138_m5E89EBFD36B0FDAFE5096A9CBD9F4E98A973A075_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedDictionary_2_ContainsKey_mBB182CA506F804DC8A77F9B9AEE077E25D5CABA5_gshared (SortedDictionary_2_t988B01B17248124FE8F06E2783DC4D609EF0DE2E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared (RuntimeObject* ___0_source, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Sign.Controllers.AddressProvider/<UpdateDefaultChainAndNamespace>d__31>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490_mA53DB08511E015810ACDBE216117BC1CCD8B3CA7_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t854AC855896A27133C7EC78A5764687EAE6F3A1C* SortedDictionary_2_get_Keys_m41E3C5E65D93D925E48610B41B89B26AEEF0A01F_gshared (SortedDictionary_2_t988B01B17248124FE8F06E2783DC4D609EF0DE2E* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Core.Controllers.Store`2<System.Int64,WalletConnectSharp.Sign.Models.PendingRequestStruct>::.ctor(WalletConnectSharp.Core.Interfaces.ICore,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_2__ctor_m364F7B03CF00FA4405C870A3CC89F4534363CE4F_gshared (Store_2_t48F884197F31AD6D01E0B5B424C2D89C33A593EB* __this, RuntimeObject* ___0_core, String_t* ___1_name, String_t* ___2_storagePrefix, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Core.Controllers.Store`2<System.Int64,WalletConnectSharp.Sign.Models.ProposalStruct>::.ctor(WalletConnectSharp.Core.Interfaces.ICore,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_2__ctor_m0D991759DD54DB3D8FB34A887859D971E75DC5C1_gshared (Store_2_t7D37114C5EBC48CD5B529EA79108886DAA6F6D5A* __this, RuntimeObject* ___0_core, String_t* ___1_name, String_t* ___2_storagePrefix, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Core.Controllers.Store`2<System.Object,WalletConnectSharp.Sign.Models.SessionStruct>::.ctor(WalletConnectSharp.Core.Interfaces.ICore,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Store_2__ctor_m6009C0CE91E7C2BBCBF674EA28A0BFCC05438818_gshared (Store_2_t50FA825544E8B854E69AE2F53ACB6ADEA7BBE03F* __this, RuntimeObject* ___0_core, String_t* ___1_name, String_t* ___2_storagePrefix, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.SortedDictionary`2<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>::.ctor()
inline void SortedDictionary_2__ctor_mF3D4F68CBF05E02665CBF75EAEBDF8C69F010A9A (SortedDictionary_2_t69D9B958ADDE5BC27A17B121D558DD2F1D55B1DE* __this, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t69D9B958ADDE5BC27A17B121D558DD2F1D55B1DE*, const RuntimeMethod*))SortedDictionary_2__ctor_m6C226B5BBE8AEF2B91B5DDE105C20BBE6DEC3D91_gshared)(__this, method);
}
// System.String WalletConnectSharp.Sign.Models.SessionStruct::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SessionStruct_get_Key_m80866C1FBF39A0F2334DEA62BC5908F664E28EBF_inline (SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10 (String_t* ___0_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.SortedDictionary`2<System.String,WalletConnectSharp.Sign.Models.Namespace>::get_Item(TKey)
inline Namespace_t8A1625FFCBDE1844297005A0B0E446EAC9CBDA49* SortedDictionary_2_get_Item_m37C1D4A84E63ECBCDCFAED3906CFA5C7D34CA187 (SortedDictionary_2_t9EF98B54A1181C7E9937FCB974BCFE1119299AEB* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Namespace_t8A1625FFCBDE1844297005A0B0E446EAC9CBDA49* (*) (SortedDictionary_2_t9EF98B54A1181C7E9937FCB974BCFE1119299AEB*, String_t*, const RuntimeMethod*))SortedDictionary_2_get_Item_mB51B2738EFB6D5FD4F9A6C266B356DD12B8DE56F_gshared)(__this, ___0_key, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB (String_t* __this, String_t* ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Take_TisString_t_m31A30189361F02FD6807DA3F2CDCFD4109B79487 (RuntimeObject* ___0_source, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Take_TisRuntimeObject_m0D329A9F9B3CB4DFDA8FC9F35FFBFE45804B32D5_gshared)(___0_source, ___1_count, method);
}
// System.String System.String::Join<System.String>(System.Char,System.Collections.Generic.IEnumerable`1<T>)
inline String_t* String_Join_TisString_t_m18F27EC5F8A0C5405FD63254DD1190B26B715010 (Il2CppChar ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Il2CppChar, RuntimeObject*, const RuntimeMethod*))String_Join_TisRuntimeObject_m00365E4D9011CF55D0FC83B5FF6ED862FBE21741_gshared)(___0_separator, ___1_values, method);
}
// WalletConnectSharp.Sign.Models.Caip25Address WalletConnectSharp.Sign.Models.SessionStruct::CurrentAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Caip25Address_t9414A3E418BA10C910000680D96EBDADDCB0EDDC SessionStruct_CurrentAddress_m8E6E3AC81B9C48A8D9CE574438D3F1062B506202 (SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E* __this, String_t* ___0_namespace, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Core.Models.CoreOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreOptions__ctor_m60F5FE75F12A5CEAB900CD4E923EB039010CB9C4 (CoreOptions_tA357D8C3F9D77FBAE0262F38D5DE0FA223FA8B08* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Sign.Models.RequiredNamespaces::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredNamespaces__ctor_m1AADD04BE7BCD901BC155036DAB990AC06158E3E (RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>::.ctor()
inline void Dictionary_2__ctor_m9D4C09209F78170AC1D82FB4C1B713D3B3BCCC9D (Dictionary_2_t6F746BAA06881876A266EA34F6D2B0598F10A994* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6F746BAA06881876A266EA34F6D2B0598F10A994*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void WalletConnectSharp.Sign.Models.Engine.IAcknowledgement/TaskAcknowledgement::.ctor(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAcknowledgement__ctor_mD053FFC2CBFF8EEBB7C87BFA6D7E2CBFDC59BC76 (TaskAcknowledgement_t2DE71F6617690BFA473DC8DE0A3A237BDB926FDF* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.Models.Error::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Error__ctor_m00FB88242378E01ECAACBDB760ADCB07F0214D5E (Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionEvent__ctor_mCDE464DC5D76C7B589587E356D239BF6B1160C31 (SessionEvent_t51DCC23F861FF9390B6B9BEA4F4BC00A86BBF2A6* __this, const RuntimeMethod* method) ;
// WalletConnectSharp.Sign.Models.SessionStruct WalletConnectSharp.Sign.Controllers.AddressProvider::get_DefaultSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String WalletConnectSharp.Sign.Controllers.AddressProvider::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressProvider_get_Name_m82518D2474D0D858B2AA30B39673C50A7F01F68F (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider::set_Sessions(WalletConnectSharp.Sign.Interfaces.ISession)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AddressProvider_set_Sessions_mAF885A1B0230D42D0140F6C7E05DCC2565755E02_inline (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WalletConnectSharp.Sign.Models.SessionStruct>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m3A3B249F5335928243FE3E1ECE0C075CB70D9CF2 (EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_m3A3B249F5335928243FE3E1ECE0C075CB70D9CF2_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.EventHandler`1<WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m7132B4B676D4C617F218FE7F408C45BBDC43768E (EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Sign.Controllers.AddressProvider/<SaveDefaults>d__26>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138_m1EFEA3375DFBBCA214C543BE1CF052D51C57B01D (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138_m1EFEA3375DFBBCA214C543BE1CF052D51C57B01D_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Sign.Controllers.AddressProvider/<LoadDefaults>d__27>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_m1822FA84A0BDFDCDF463AE36F49F3B3A4F0BC0BF (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_m1822FA84A0BDFDCDF463AE36F49F3B3A4F0BC0BF_gshared)(__this, ___0_stateMachine, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider::UpdateDefaultChainAndNamespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressProvider_UpdateDefaultChainAndNamespace_m2050AD812B41661EE76CFCECEC6426235D83F0B2 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider::set_DefaultSession(WalletConnectSharp.Sign.Models.SessionStruct)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressProvider_set_DefaultSession_m519CEBCB359BF2F28C97C3E77A0CB3E94BCD7ED4 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E ___0_value, const RuntimeMethod* method) ;
// System.Boolean WalletConnectSharp.Sign.Controllers.AddressProvider::get_HasDefaultSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressProvider_get_HasDefaultSession_m1AE5C66A3FB715B806AB641F5F336A0F5AE21139 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<WalletConnectSharp.Sign.Controllers.AddressProvider/<UpdateDefaultChainAndNamespace>d__31>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490_m661DB8530D1414681CDF38AEE1FA73D866667103 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490_m661DB8530D1414681CDF38AEE1FA73D866667103_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Sign.Controllers.AddressProvider/<Init>d__33>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8_m02ED98728F23F932A89789AD1FA771AB9E8BFE8E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8_m02ED98728F23F932A89789AD1FA771AB9E8BFE8E_gshared)(__this, ___0_stateMachine, method);
}
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider::set_DefaultNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressProvider_set_DefaultNamespace_mC744DC6D0DBD0DF9713BEBBD8FF17C764CDCE4F5 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Sign.Controllers.AddressProvider/<Init>d__33>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8_mE865EF33C55AF454C6458EB60EA7980CE24452D8 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8_mE865EF33C55AF454C6458EB60EA7980CE24452D8_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider/<Init>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitU3Ed__33_MoveNext_mCD37A392005B0AF98F51E31042870CCED1D7802E (U3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider/<Init>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitU3Ed__33_SetStateMachine_m9D262EC3C552482B3479BB16053B3909823B3EEA (U3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.String WalletConnectSharp.Sign.Controllers.AddressProvider::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressProvider_get_Context_m3AC91C629AB973FD990E73BB8CE9E33CECBA2149 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, const RuntimeMethod* method) ;
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
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,WalletConnectSharp.Sign.Controllers.AddressProvider/<LoadDefaults>d__27>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_mB27EE438B2B1EBC1875DDE303FD036CEEA1A2D72 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___0_awaiter, U3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_mB27EE438B2B1EBC1875DDE303FD036CEEA1A2D72_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
inline bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData>::GetAwaiter()
inline TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257 Task_1_GetAwaiter_m3053EAEBF00E0F56D64CE89B31651788B0C0649E (Task_1_t3DE2F0EBC4A3E3DD775D27CD5B92AD54C65DC5EA* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257 (*) (Task_1_t3DE2F0EBC4A3E3DD775D27CD5B92AD54C65DC5EA*, const RuntimeMethod*))Task_1_GetAwaiter_m3053EAEBF00E0F56D64CE89B31651788B0C0649E_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m2435469D0693EE79E689D76FC8C9E43474DED761 (TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m2435469D0693EE79E689D76FC8C9E43474DED761_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData>,WalletConnectSharp.Sign.Controllers.AddressProvider/<LoadDefaults>d__27>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_m9C5BF287EB8021A3DA0B5907FEBFD677D6532A68 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257* ___0_awaiter, U3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257*, U3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_m9C5BF287EB8021A3DA0B5907FEBFD677D6532A68_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData>::GetResult()
inline DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D TaskAwaiter_1_GetResult_m372D306836B78EB5520B5AD1DD07AC0CF0013F50 (TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257* __this, const RuntimeMethod* method)
{
	return ((  DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D (*) (TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257*, const RuntimeMethod*))TaskAwaiter_1_GetResult_m372D306836B78EB5520B5AD1DD07AC0CF0013F50_gshared)(__this, method);
}
// System.Void WalletConnectSharp.Sign.Models.DefaultsLoadingEventArgs::.ctor(WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultsLoadingEventArgs__ctor_mF35C80BD7F6971A8206B7AFB904FF9F5FBC6FA31 (DefaultsLoadingEventArgs_t331F8FF084CEFF8C9A6F92F1A7DD58444B49CCE5* __this, DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D* ___0_defaults, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WalletConnectSharp.Sign.Models.DefaultsLoadingEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mC0FDB3B04F7153D58C19B8E15686569D3AB0D836_inline (EventHandler_1_t30EEAD9BE466391AB06F7F8E7F0353EAE8EED806* __this, RuntimeObject* ___0_sender, DefaultsLoadingEventArgs_t331F8FF084CEFF8C9A6F92F1A7DD58444B49CCE5* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t30EEAD9BE466391AB06F7F8E7F0353EAE8EED806*, RuntimeObject*, DefaultsLoadingEventArgs_t331F8FF084CEFF8C9A6F92F1A7DD58444B49CCE5*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider/<LoadDefaults>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDefaultsU3Ed__27_MoveNext_m6CED6070FC921010981460FFF65BDFDF1A7A7DBA (U3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider/<LoadDefaults>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDefaultsU3Ed__27_SetStateMachine_m9017AF64FF2A96C553AE8F8BD8E29F6943BDBA73 (U3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Sign.Controllers.AddressProvider/<SaveDefaults>d__26>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138_m5E89EBFD36B0FDAFE5096A9CBD9F4E98A973A075 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138_m5E89EBFD36B0FDAFE5096A9CBD9F4E98A973A075_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider/<SaveDefaults>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveDefaultsU3Ed__26_MoveNext_mF52E9728A6C2BA6071C41A0EDD29D601CB21CF4A (U3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider/<SaveDefaults>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveDefaultsU3Ed__26_SetStateMachine_mB70F630B60A859BD8C13896BDB2397495601F9A0 (U3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.String WalletConnectSharp.Sign.Controllers.AddressProvider::get_DefaultNamespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressProvider_get_DefaultNamespace_m99AE8D224A0E89CF9BBA6E09CC35F4A04E8F28A6 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.String,WalletConnectSharp.Sign.Models.Namespace>::ContainsKey(TKey)
inline bool SortedDictionary_2_ContainsKey_mD5ABD9F94EC91124189C49A2607C0B3B687E8B21 (SortedDictionary_2_t9EF98B54A1181C7E9937FCB974BCFE1119299AEB* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedDictionary_2_t9EF98B54A1181C7E9937FCB974BCFE1119299AEB*, String_t*, const RuntimeMethod*))SortedDictionary_2_ContainsKey_mBB182CA506F804DC8A77F9B9AEE077E25D5CABA5_gshared)(__this, ___0_key, method);
}
// System.String WalletConnectSharp.Sign.Controllers.AddressProvider::get_DefaultChain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressProvider_get_DefaultChain_m4260AB6A70B33C0434DF6ADF8AC2531975339C1A (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33 (RuntimeObject* ___0_source, String_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared)(___0_source, ___1_value, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Sign.Controllers.AddressProvider/<UpdateDefaultChainAndNamespace>d__31>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490_mA53DB08511E015810ACDBE216117BC1CCD8B3CA7 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490_mA53DB08511E015810ACDBE216117BC1CCD8B3CA7_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider::set_DefaultChain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressProvider_set_DefaultChain_mBABA1BE68FC54BEDBC61676F4A12490A12AFCF5C (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2<System.String,WalletConnectSharp.Sign.Models.Namespace>::get_Keys()
inline KeyCollection_t05B89CD562AD615C388EBDCA3D8E6AC92C701377* SortedDictionary_2_get_Keys_m69C5EF81E3EA179F6ABB6CA464B6E63C83CD16BC (SortedDictionary_2_t9EF98B54A1181C7E9937FCB974BCFE1119299AEB* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t05B89CD562AD615C388EBDCA3D8E6AC92C701377* (*) (SortedDictionary_2_t9EF98B54A1181C7E9937FCB974BCFE1119299AEB*, const RuntimeMethod*))SortedDictionary_2_get_Keys_m41E3C5E65D93D925E48610B41B89B26AEEF0A01F_gshared)(__this, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline String_t* Enumerable_FirstOrDefault_TisString_t_m9CA8A9DE7F8DCB619529414D42C259BDF6C05A5B (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_gshared)(___0_source, method);
}
// System.Boolean System.Collections.Generic.SortedDictionary`2<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>::ContainsKey(TKey)
inline bool SortedDictionary_2_ContainsKey_m44D2C27C2D9F5891777547ABEFCE584A0576ECB8 (SortedDictionary_2_t69D9B958ADDE5BC27A17B121D558DD2F1D55B1DE* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedDictionary_2_t69D9B958ADDE5BC27A17B121D558DD2F1D55B1DE*, String_t*, const RuntimeMethod*))SortedDictionary_2_ContainsKey_mBB182CA506F804DC8A77F9B9AEE077E25D5CABA5_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.SortedDictionary`2<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>::get_Item(TKey)
inline ProposedNamespace_tD09A3F2DDDADACB651F6E2CCEC37B94D45386DB2* SortedDictionary_2_get_Item_mED87760BA6248CDCD26FD1B9370EB26711783F84 (SortedDictionary_2_t69D9B958ADDE5BC27A17B121D558DD2F1D55B1DE* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  ProposedNamespace_tD09A3F2DDDADACB651F6E2CCEC37B94D45386DB2* (*) (SortedDictionary_2_t69D9B958ADDE5BC27A17B121D558DD2F1D55B1DE*, String_t*, const RuntimeMethod*))SortedDictionary_2_get_Item_mB51B2738EFB6D5FD4F9A6C266B356DD12B8DE56F_gshared)(__this, ___0_key, method);
}
// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2<System.String,WalletConnectSharp.Sign.Models.ProposedNamespace>::get_Keys()
inline KeyCollection_tDD84839E1174F2132B4B05A806047C8DCB092AC2* SortedDictionary_2_get_Keys_m87C794707B69BEBFA056FC97B6697A0C8232E343 (SortedDictionary_2_t69D9B958ADDE5BC27A17B121D558DD2F1D55B1DE* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tDD84839E1174F2132B4B05A806047C8DCB092AC2* (*) (SortedDictionary_2_t69D9B958ADDE5BC27A17B121D558DD2F1D55B1DE*, const RuntimeMethod*))SortedDictionary_2_get_Keys_m41E3C5E65D93D925E48610B41B89B26AEEF0A01F_gshared)(__this, method);
}
// System.Void WalletConnectSharp.Common.Logging.WCLogger::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WCLogger_LogError_m436F04A302C7816A1F69AAC619FC5BA3DC896618 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Common.Logging.WCLogger::LogError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WCLogger_LogError_mFDECF4DF0595C49C951D9D1BE61C1B8225B9E91A (Exception_t* ___0_e, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider/<UpdateDefaultChainAndNamespace>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateDefaultChainAndNamespaceU3Ed__31_MoveNext_m8A548E906227BD4F4F4B7A159BBB80C945C92A61 (U3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider/<UpdateDefaultChainAndNamespace>d__31::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateDefaultChainAndNamespaceU3Ed__31_SetStateMachine_m00F3EE701FC73D0CFAB709B1642B2725CE7D9E19 (U3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Core.Controllers.Store`2<System.Int64,WalletConnectSharp.Sign.Models.PendingRequestStruct>::.ctor(WalletConnectSharp.Core.Interfaces.ICore,System.String,System.String)
inline void Store_2__ctor_m364F7B03CF00FA4405C870A3CC89F4534363CE4F (Store_2_t48F884197F31AD6D01E0B5B424C2D89C33A593EB* __this, RuntimeObject* ___0_core, String_t* ___1_name, String_t* ___2_storagePrefix, const RuntimeMethod* method)
{
	((  void (*) (Store_2_t48F884197F31AD6D01E0B5B424C2D89C33A593EB*, RuntimeObject*, String_t*, String_t*, const RuntimeMethod*))Store_2__ctor_m364F7B03CF00FA4405C870A3CC89F4534363CE4F_gshared)(__this, ___0_core, ___1_name, ___2_storagePrefix, method);
}
// System.Void WalletConnectSharp.Core.Controllers.Store`2<System.Int64,WalletConnectSharp.Sign.Models.ProposalStruct>::.ctor(WalletConnectSharp.Core.Interfaces.ICore,System.String,System.String)
inline void Store_2__ctor_m0D991759DD54DB3D8FB34A887859D971E75DC5C1 (Store_2_t7D37114C5EBC48CD5B529EA79108886DAA6F6D5A* __this, RuntimeObject* ___0_core, String_t* ___1_name, String_t* ___2_storagePrefix, const RuntimeMethod* method)
{
	((  void (*) (Store_2_t7D37114C5EBC48CD5B529EA79108886DAA6F6D5A*, RuntimeObject*, String_t*, String_t*, const RuntimeMethod*))Store_2__ctor_m0D991759DD54DB3D8FB34A887859D971E75DC5C1_gshared)(__this, ___0_core, ___1_name, ___2_storagePrefix, method);
}
// System.Void WalletConnectSharp.Core.Controllers.Store`2<System.String,WalletConnectSharp.Sign.Models.SessionStruct>::.ctor(WalletConnectSharp.Core.Interfaces.ICore,System.String,System.String)
inline void Store_2__ctor_m1BE6272C28E07E65AB7168CA1F4A8F0D7EAAE267 (Store_2_tE4FD884B5BD908D4BABB7ABA422282C220C9440A* __this, RuntimeObject* ___0_core, String_t* ___1_name, String_t* ___2_storagePrefix, const RuntimeMethod* method)
{
	((  void (*) (Store_2_tE4FD884B5BD908D4BABB7ABA422282C220C9440A*, RuntimeObject*, String_t*, String_t*, const RuntimeMethod*))Store_2__ctor_m6009C0CE91E7C2BBCBF674EA28A0BFCC05438818_gshared)(__this, ___0_core, ___1_name, ___2_storagePrefix, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Sign.Models.RequiredNamespaces::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredNamespaces__ctor_m1AADD04BE7BCD901BC155036DAB990AC06158E3E (RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2__ctor_mF3D4F68CBF05E02665CBF75EAEBDF8C69F010A9A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SortedDictionary_2__ctor_mF3D4F68CBF05E02665CBF75EAEBDF8C69F010A9A(__this, SortedDictionary_2__ctor_mF3D4F68CBF05E02665CBF75EAEBDF8C69F010A9A_RuntimeMethod_var);
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
// Conversion methods for marshalling of: WalletConnectSharp.Sign.Models.SessionStruct
IL2CPP_EXTERN_C void SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshal_pinvoke(const SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E& unmarshaled, SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Relay_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Relay' of type 'SessionStruct': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Relay_2Exception, NULL);
}
IL2CPP_EXTERN_C void SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshal_pinvoke_back(const SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_pinvoke& marshaled, SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E& unmarshaled)
{
	Exception_t* ___Relay_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Relay' of type 'SessionStruct': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Relay_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: WalletConnectSharp.Sign.Models.SessionStruct
IL2CPP_EXTERN_C void SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshal_pinvoke_cleanup(SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: WalletConnectSharp.Sign.Models.SessionStruct
IL2CPP_EXTERN_C void SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshal_com(const SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E& unmarshaled, SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_com& marshaled)
{
	Exception_t* ___Relay_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Relay' of type 'SessionStruct': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Relay_2Exception, NULL);
}
IL2CPP_EXTERN_C void SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshal_com_back(const SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_com& marshaled, SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E& unmarshaled)
{
	Exception_t* ___Relay_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Relay' of type 'SessionStruct': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Relay_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: WalletConnectSharp.Sign.Models.SessionStruct
IL2CPP_EXTERN_C void SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshal_com_cleanup(SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E_marshaled_com& marshaled)
{
}
// System.String WalletConnectSharp.Sign.Models.SessionStruct::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionStruct_get_Key_m80866C1FBF39A0F2334DEA62BC5908F664E28EBF (SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___Topic_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* SessionStruct_get_Key_m80866C1FBF39A0F2334DEA62BC5908F664E28EBF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SessionStruct_get_Key_m80866C1FBF39A0F2334DEA62BC5908F664E28EBF_inline(_thisAdjusted, method);
	return _returnValue;
}
// WalletConnectSharp.Sign.Models.Caip25Address WalletConnectSharp.Sign.Models.SessionStruct::CurrentAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Caip25Address_t9414A3E418BA10C910000680D96EBDADDCB0EDDC SessionStruct_CurrentAddress_m8E6E3AC81B9C48A8D9CE574438D3F1062B506202 (SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E* __this, String_t* ___0_namespace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Take_TisString_t_m31A30189361F02FD6807DA3F2CDCFD4109B79487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m37C1D4A84E63ECBCDCFAED3906CFA5C7D34CA187_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_Join_TisString_t_m18F27EC5F8A0C5405FD63254DD1190B26B715010_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Caip25Address_t9414A3E418BA10C910000680D96EBDADDCB0EDDC V_3;
	memset((&V_3), 0, sizeof(V_3));
	Namespace_t8A1625FFCBDE1844297005A0B0E446EAC9CBDA49* G_B6_0 = NULL;
	Namespace_t8A1625FFCBDE1844297005A0B0E446EAC9CBDA49* G_B5_0 = NULL;
	{
		String_t* L_0 = ___0_namespace;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91824649BB1C6B683E7A451E08C94889A729BA62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SessionStruct_CurrentAddress_m8E6E3AC81B9C48A8D9CE574438D3F1062B506202_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = __this->___Topic_0;
		bool L_3;
		L_3 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_2, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27A9CD636B42E026DEBC83DBC31F2569DC31CE24)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SessionStruct_CurrentAddress_m8E6E3AC81B9C48A8D9CE574438D3F1062B506202_RuntimeMethod_var)));
	}

IL_0026:
	{
		Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2* L_5 = __this->___Namespaces_6;
		String_t* L_6 = ___0_namespace;
		Namespace_t8A1625FFCBDE1844297005A0B0E446EAC9CBDA49* L_7;
		L_7 = SortedDictionary_2_get_Item_m37C1D4A84E63ECBCDCFAED3906CFA5C7D34CA187(L_5, L_6, SortedDictionary_2_get_Item_m37C1D4A84E63ECBCDCFAED3906CFA5C7D34CA187_RuntimeMethod_var);
		Namespace_t8A1625FFCBDE1844297005A0B0E446EAC9CBDA49* L_8 = L_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8->___Accounts_0;
		G_B5_0 = L_8;
		if ((((RuntimeArray*)L_9)->max_length))
		{
			G_B6_0 = L_8;
			goto IL_0051;
		}
	}
	{
		String_t* L_10 = ___0_namespace;
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral47A69ED29390B09F1E1DE51E73B3770D6CAA9B45)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC028EE7E3B755B6750CB9460E275DFE2AB12748F)), NULL);
		Exception_t* L_12 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SessionStruct_CurrentAddress_m8E6E3AC81B9C48A8D9CE574438D3F1062B506202_RuntimeMethod_var)));
	}

IL_0051:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B6_0->___Accounts_0;
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16;
		L_16 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_15, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, 0, NULL);
		V_0 = L_16;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = V_0;
		int32_t L_18 = 2;
		String_t* L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_1 = L_19;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_0;
		RuntimeObject* L_21;
		L_21 = Enumerable_Take_TisString_t_m31A30189361F02FD6807DA3F2CDCFD4109B79487((RuntimeObject*)L_20, 2, Enumerable_Take_TisString_t_m31A30189361F02FD6807DA3F2CDCFD4109B79487_RuntimeMethod_var);
		String_t* L_22;
		L_22 = String_Join_TisString_t_m18F27EC5F8A0C5405FD63254DD1190B26B715010(((int32_t)58), L_21, String_Join_TisString_t_m18F27EC5F8A0C5405FD63254DD1190B26B715010_RuntimeMethod_var);
		V_2 = L_22;
		il2cpp_codegen_initobj((&V_3), sizeof(Caip25Address_t9414A3E418BA10C910000680D96EBDADDCB0EDDC));
		String_t* L_23 = V_1;
		(&V_3)->___Address_0 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___Address_0), (void*)L_23);
		String_t* L_24 = V_2;
		(&V_3)->___ChainId_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___ChainId_1), (void*)L_24);
		Caip25Address_t9414A3E418BA10C910000680D96EBDADDCB0EDDC L_25 = V_3;
		return L_25;
	}
}
IL2CPP_EXTERN_C  Caip25Address_t9414A3E418BA10C910000680D96EBDADDCB0EDDC SessionStruct_CurrentAddress_m8E6E3AC81B9C48A8D9CE574438D3F1062B506202_AdjustorThunk (RuntimeObject* __this, String_t* ___0_namespace, const RuntimeMethod* method)
{
	SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E*>(__this + _offset);
	Caip25Address_t9414A3E418BA10C910000680D96EBDADDCB0EDDC _returnValue;
	_returnValue = SessionStruct_CurrentAddress_m8E6E3AC81B9C48A8D9CE574438D3F1062B506202(_thisAdjusted, ___0_namespace, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Sign.Models.SignClientOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignClientOptions__ctor_m31D1577C219E1372778C283BF03343A0C3DB42E9 (SignClientOptions_t9E9C02D5BF2C670B2FBB07D96D565DCAAD207B9D* __this, const RuntimeMethod* method) 
{
	{
		CoreOptions__ctor_m60F5FE75F12A5CEAB900CD4E923EB039010CB9C4(__this, NULL);
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
// System.Void WalletConnectSharp.Sign.Models.Engine.ConnectedData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectedData__ctor_m6F15D63BF94DA2D5F1A3894C5ECFCE2B742EA715 (ConnectedData_tA7FD8B2D59BA27EE3294C6A24620BA64A06089D7* __this, const RuntimeMethod* method) 
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
// System.Void WalletConnectSharp.Sign.Models.Engine.ConnectOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectOptions__ctor_m9AD9E8A6FCFE0C47587D494D536CE128A710FA40 (ConnectOptions_t02F2520E53511A534588BA0939CCC16043713F88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9D4C09209F78170AC1D82FB4C1B713D3B3BCCC9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6F746BAA06881876A266EA34F6D2B0598F10A994_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___Expiry_5 = ((int64_t)((int32_t)300));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* L_0 = (RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC*)il2cpp_codegen_object_new(RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC_il2cpp_TypeInfo_var);
		RequiredNamespaces__ctor_m1AADD04BE7BCD901BC155036DAB990AC06158E3E(L_0, NULL);
		__this->___RequiredNamespaces_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RequiredNamespaces_0), (void*)L_0);
		__this->___SessionProperties_2 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SessionProperties_2), (void*)(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL);
		Dictionary_2_t6F746BAA06881876A266EA34F6D2B0598F10A994* L_1 = (Dictionary_2_t6F746BAA06881876A266EA34F6D2B0598F10A994*)il2cpp_codegen_object_new(Dictionary_2_t6F746BAA06881876A266EA34F6D2B0598F10A994_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9D4C09209F78170AC1D82FB4C1B713D3B3BCCC9D(L_1, Dictionary_2__ctor_m9D4C09209F78170AC1D82FB4C1B713D3B3BCCC9D_RuntimeMethod_var);
		__this->___OptionalNamespaces_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OptionalNamespaces_1), (void*)L_1);
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
// WalletConnectSharp.Sign.Models.Engine.IAcknowledgement WalletConnectSharp.Sign.Models.Engine.IAcknowledgement::FromTask(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IAcknowledgement_FromTask_m301C3799E77D14D39ACB5E2C88FDC972AD9C848D (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAcknowledgement_t2DE71F6617690BFA473DC8DE0A3A237BDB926FDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ___0_task;
		TaskAcknowledgement_t2DE71F6617690BFA473DC8DE0A3A237BDB926FDF* L_1 = (TaskAcknowledgement_t2DE71F6617690BFA473DC8DE0A3A237BDB926FDF*)il2cpp_codegen_object_new(TaskAcknowledgement_t2DE71F6617690BFA473DC8DE0A3A237BDB926FDF_il2cpp_TypeInfo_var);
		TaskAcknowledgement__ctor_mD053FFC2CBFF8EEBB7C87BFA6D7E2CBFDC59BC76(L_1, L_0, NULL);
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
// System.Void WalletConnectSharp.Sign.Models.Engine.IAcknowledgement/TaskAcknowledgement::.ctor(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAcknowledgement__ctor_mD053FFC2CBFF8EEBB7C87BFA6D7E2CBFDC59BC76 (TaskAcknowledgement_t2DE71F6617690BFA473DC8DE0A3A237BDB926FDF* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ___0_task;
		__this->____task_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____task_0), (void*)L_0);
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
// System.Void WalletConnectSharp.Sign.Models.Engine.Methods.SessionDelete::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionDelete__ctor_m249A08D29BB64FD76903052771A5C80C5740E5A8 (SessionDelete_tCDF1435C5BE2CA8C85F4712C71C6C966314BCE85* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2_il2cpp_TypeInfo_var);
		Error__ctor_m00FB88242378E01ECAACBDB760ADCB07F0214D5E(__this, NULL);
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
// System.Void WalletConnectSharp.Sign.Models.Engine.Methods.SessionExtend::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionExtend__ctor_m3B032F7F5D5D4E8908990064CB85F4398869D3FB (SessionExtend_tFB4F74A8A40B0665CB16E681462893D5B651EB5E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(__this, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Sign.Models.Engine.Methods.SessionPropose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionPropose__ctor_mCE77B0032DA5D60DB95C41BF14F467040AE8342B (SessionPropose_t6D7CE92C5E4D9B5921F2153D425AF210261A3A69* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionEvent__ctor_mCDE464DC5D76C7B589587E356D239BF6B1160C31 (SessionEvent_t51DCC23F861FF9390B6B9BEA4F4BC00A86BBF2A6* __this, const RuntimeMethod* method) 
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
// System.Void WalletConnectSharp.Sign.Models.Engine.Events.SessionProposalEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionProposalEvent__ctor_m8431585C08C7B4B57ED534164BC922E7DCBFFE52 (SessionProposalEvent_t20B7175CA1F3C9B8F6FD63CAA02A7C81AF7283B4* __this, const RuntimeMethod* method) 
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
// System.Void WalletConnectSharp.Sign.Models.Engine.Events.SessionUpdateEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionUpdateEvent__ctor_mDBE26D7EFF987214FE59EFD4A9F7C6438C95D712 (SessionUpdateEvent_tDEEB67FEF3C76A9173C017492C009168613F17B2* __this, const RuntimeMethod* method) 
{
	{
		SessionEvent__ctor_mCDE464DC5D76C7B589587E356D239BF6B1160C31(__this, NULL);
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
// System.Boolean WalletConnectSharp.Sign.Controllers.AddressProvider::get_HasDefaultSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressProvider_get_HasDefaultSession_m1AE5C66A3FB715B806AB641F5F336A0F5AE21139 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, const RuntimeMethod* method) 
{
	{
		SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_0;
		L_0 = AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3(__this, NULL);
		String_t* L_1 = L_0.___Topic_0;
		bool L_2;
		L_2 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_1, NULL);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_3;
		L_3 = AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3(__this, NULL);
		Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2* L_4 = L_3.___Namespaces_6;
		return (bool)((!(((RuntimeObject*)(Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_0021:
	{
		return (bool)0;
	}
}
// System.String WalletConnectSharp.Sign.Controllers.AddressProvider::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressProvider_get_Name_m82518D2474D0D858B2AA30B39673C50A7F01F68F (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModule_t5E13B7170A3930FB4B604A03CA174BC171B7172A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EFEA378DCE53335D9C3C6BC54A586802D45644B);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____client_3;
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String WalletConnectSharp.Common.IModule::get_Name() */, IModule_t5E13B7170A3930FB4B604A03CA174BC171B7172A_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral8EFEA378DCE53335D9C3C6BC54A586802D45644B, NULL);
		return L_2;
	}
}
// System.String WalletConnectSharp.Sign.Controllers.AddressProvider::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressProvider_get_Context_m3AC91C629AB973FD990E73BB8CE9E33CECBA2149 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = AddressProvider_get_Name_m82518D2474D0D858B2AA30B39673C50A7F01F68F(__this, NULL);
		return L_0;
	}
}
// WalletConnectSharp.Sign.Models.SessionStruct WalletConnectSharp.Sign.Controllers.AddressProvider::get_DefaultSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, const RuntimeMethod* method) 
{
	{
		DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D* L_0 = (DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D*)(&__this->____state_1);
		SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_1 = L_0->___Session_0;
		return L_1;
	}
}
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider::set_DefaultSession(WalletConnectSharp.Sign.Models.SessionStruct)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressProvider_set_DefaultSession_m519CEBCB359BF2F28C97C3E77A0CB3E94BCD7ED4 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E ___0_value, const RuntimeMethod* method) 
{
	{
		DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D* L_0 = (DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D*)(&__this->____state_1);
		SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_1 = ___0_value;
		L_0->___Session_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_0->___Session_0))->___Topic_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_0->___Session_0))->___PairingTopic_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_0->___Session_0))->___Relay_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_0->___Session_0))->___Controller_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_0->___Session_0))->___Namespaces_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_0->___Session_0))->___RequiredNamespaces_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_0->___Session_0))->___Self_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_0->___Session_0))->___Peer_9), (void*)NULL);
		#endif
		return;
	}
}
// System.String WalletConnectSharp.Sign.Controllers.AddressProvider::get_DefaultNamespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressProvider_get_DefaultNamespace_m99AE8D224A0E89CF9BBA6E09CC35F4A04E8F28A6 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, const RuntimeMethod* method) 
{
	{
		DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D* L_0 = (DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D*)(&__this->____state_1);
		String_t* L_1 = L_0->___Namespace_1;
		return L_1;
	}
}
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider::set_DefaultNamespace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressProvider_set_DefaultNamespace_mC744DC6D0DBD0DF9713BEBBD8FF17C764CDCE4F5 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D* L_0 = (DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D*)(&__this->____state_1);
		String_t* L_1 = ___0_value;
		L_0->___Namespace_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___Namespace_1), (void*)L_1);
		return;
	}
}
// System.String WalletConnectSharp.Sign.Controllers.AddressProvider::get_DefaultChain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AddressProvider_get_DefaultChain_m4260AB6A70B33C0434DF6ADF8AC2531975339C1A (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, const RuntimeMethod* method) 
{
	{
		DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D* L_0 = (DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D*)(&__this->____state_1);
		String_t* L_1 = L_0->___ChainId_2;
		return L_1;
	}
}
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider::set_DefaultChain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressProvider_set_DefaultChain_mBABA1BE68FC54BEDBC61676F4A12490A12AFCF5C (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D* L_0 = (DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D*)(&__this->____state_1);
		String_t* L_1 = ___0_value;
		L_0->___ChainId_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___ChainId_2), (void*)L_1);
		return;
	}
}
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider::set_Sessions(WalletConnectSharp.Sign.Interfaces.ISession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressProvider_set_Sessions_mAF885A1B0230D42D0140F6C7E05DCC2565755E02 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CSessionsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider::.ctor(WalletConnectSharp.Sign.Interfaces.ISignClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressProvider__ctor_mFB46117C0BCFE47713BD73AB06B5A1B602F79233 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, RuntimeObject* ___0_client, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressProvider_ClientOnSessionConnected_mAD2DE06ED24B3B007F2CC0580BC389529C9740E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressProvider_ClientOnSessionDeleted_mE28D28A3E348581CF15E7D1D0842043E9D7F75D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressProvider_ClientOnSessionUpdated_m4FF4E2885C982A9E51D522BEB75F298409AF0134_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEngineAPI_tDAE25681E18B438E010F95FE02982515D32A9385_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignClient_t96FD1D128E9AE60001E8BD60DC835D5127FC29DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_client;
		__this->____client_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_3), (void*)L_0);
		RuntimeObject* L_1 = ___0_client;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* WalletConnectSharp.Sign.Interfaces.ISession WalletConnectSharp.Sign.Interfaces.ISignClient::get_Session() */, ISignClient_t96FD1D128E9AE60001E8BD60DC835D5127FC29DA_il2cpp_TypeInfo_var, L_1);
		AddressProvider_set_Sessions_mAF885A1B0230D42D0140F6C7E05DCC2565755E02_inline(__this, L_2, NULL);
		RuntimeObject* L_3 = ___0_client;
		EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94* L_4 = (EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94*)il2cpp_codegen_object_new(EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m3A3B249F5335928243FE3E1ECE0C075CB70D9CF2(L_4, __this, (intptr_t)((void*)AddressProvider_ClientOnSessionConnected_mAD2DE06ED24B3B007F2CC0580BC389529C9740E6_RuntimeMethod_var), NULL);
		InterfaceActionInvoker1< EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94* >::Invoke(6 /* System.Void WalletConnectSharp.Sign.Interfaces.IEngineAPI::add_SessionConnected(System.EventHandler`1<WalletConnectSharp.Sign.Models.SessionStruct>) */, IEngineAPI_tDAE25681E18B438E010F95FE02982515D32A9385_il2cpp_TypeInfo_var, L_3, L_4);
		RuntimeObject* L_5 = ___0_client;
		EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55* L_6 = (EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55*)il2cpp_codegen_object_new(EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m7132B4B676D4C617F218FE7F408C45BBDC43768E(L_6, __this, (intptr_t)((void*)AddressProvider_ClientOnSessionDeleted_mE28D28A3E348581CF15E7D1D0842043E9D7F75D0_RuntimeMethod_var), NULL);
		InterfaceActionInvoker1< EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55* >::Invoke(20 /* System.Void WalletConnectSharp.Sign.Interfaces.IEngineAPI::add_SessionDeleted(System.EventHandler`1<WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent>) */, IEngineAPI_tDAE25681E18B438E010F95FE02982515D32A9385_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7 = ___0_client;
		EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55* L_8 = (EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55*)il2cpp_codegen_object_new(EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m7132B4B676D4C617F218FE7F408C45BBDC43768E(L_8, __this, (intptr_t)((void*)AddressProvider_ClientOnSessionUpdated_m4FF4E2885C982A9E51D522BEB75F298409AF0134_RuntimeMethod_var), NULL);
		InterfaceActionInvoker1< EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55* >::Invoke(14 /* System.Void WalletConnectSharp.Sign.Interfaces.IEngineAPI::add_SessionUpdated(System.EventHandler`1<WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent>) */, IEngineAPI_tDAE25681E18B438E010F95FE02982515D32A9385_il2cpp_TypeInfo_var, L_7, L_8);
		RuntimeObject* L_9 = ___0_client;
		EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94* L_10 = (EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94*)il2cpp_codegen_object_new(EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m3A3B249F5335928243FE3E1ECE0C075CB70D9CF2(L_10, __this, (intptr_t)((void*)AddressProvider_ClientOnSessionConnected_mAD2DE06ED24B3B007F2CC0580BC389529C9740E6_RuntimeMethod_var), NULL);
		InterfaceActionInvoker1< EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94* >::Invoke(24 /* System.Void WalletConnectSharp.Sign.Interfaces.IEngineAPI::add_SessionApproved(System.EventHandler`1<WalletConnectSharp.Sign.Models.SessionStruct>) */, IEngineAPI_tDAE25681E18B438E010F95FE02982515D32A9385_il2cpp_TypeInfo_var, L_9, L_10);
		return;
	}
}
// System.Threading.Tasks.Task WalletConnectSharp.Sign.Controllers.AddressProvider::SaveDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AddressProvider_SaveDefaults_m0CFFC1DE03AE42A7CF9D92FB8349D461F2C5CA25 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138_m1EFEA3375DFBBCA214C543BE1CF052D51C57B01D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138 V_0;
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
		AsyncTaskMethodBuilder_Start_TisU3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138_m1EFEA3375DFBBCA214C543BE1CF052D51C57B01D(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138_m1EFEA3375DFBBCA214C543BE1CF052D51C57B01D_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task WalletConnectSharp.Sign.Controllers.AddressProvider::LoadDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AddressProvider_LoadDefaults_m616C7D8EF1AF32187397411C9773E97C2BD48BE2 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_m1822FA84A0BDFDCDF463AE36F49F3B3A4F0BC0BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A V_0;
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
		AsyncTaskMethodBuilder_Start_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_m1822FA84A0BDFDCDF463AE36F49F3B3A4F0BC0BF(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_m1822FA84A0BDFDCDF463AE36F49F3B3A4F0BC0BF_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider::ClientOnSessionUpdated(System.Object,WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressProvider_ClientOnSessionUpdated_m4FF4E2885C982A9E51D522BEB75F298409AF0134 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, RuntimeObject* ___0_sender, SessionEvent_t51DCC23F861FF9390B6B9BEA4F4BC00A86BBF2A6* ___1_e, const RuntimeMethod* method) 
{
	{
		SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_0;
		L_0 = AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3(__this, NULL);
		String_t* L_1 = L_0.___Topic_0;
		SessionEvent_t51DCC23F861FF9390B6B9BEA4F4BC00A86BBF2A6* L_2 = ___1_e;
		String_t* L_3 = L_2->___Topic_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		AddressProvider_UpdateDefaultChainAndNamespace_m2050AD812B41661EE76CFCECEC6426235D83F0B2(__this, NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider::ClientOnSessionDeleted(System.Object,WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressProvider_ClientOnSessionDeleted_mE28D28A3E348581CF15E7D1D0842043E9D7F75D0 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, RuntimeObject* ___0_sender, SessionEvent_t51DCC23F861FF9390B6B9BEA4F4BC00A86BBF2A6* ___1_e, const RuntimeMethod* method) 
{
	SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_0;
		L_0 = AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3(__this, NULL);
		String_t* L_1 = L_0.___Topic_0;
		SessionEvent_t51DCC23F861FF9390B6B9BEA4F4BC00A86BBF2A6* L_2 = ___1_e;
		String_t* L_3 = L_2->___Topic_1;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E));
		SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_5 = V_0;
		AddressProvider_set_DefaultSession_m519CEBCB359BF2F28C97C3E77A0CB3E94BCD7ED4(__this, L_5, NULL);
		AddressProvider_UpdateDefaultChainAndNamespace_m2050AD812B41661EE76CFCECEC6426235D83F0B2(__this, NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider::ClientOnSessionConnected(System.Object,WalletConnectSharp.Sign.Models.SessionStruct)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressProvider_ClientOnSessionConnected_mAD2DE06ED24B3B007F2CC0580BC389529C9740E6 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, RuntimeObject* ___0_sender, SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E ___1_e, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = AddressProvider_get_HasDefaultSession_m1AE5C66A3FB715B806AB641F5F336A0F5AE21139(__this, NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_1 = ___1_e;
		AddressProvider_set_DefaultSession_m519CEBCB359BF2F28C97C3E77A0CB3E94BCD7ED4(__this, L_1, NULL);
		AddressProvider_UpdateDefaultChainAndNamespace_m2050AD812B41661EE76CFCECEC6426235D83F0B2(__this, NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider::UpdateDefaultChainAndNamespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressProvider_UpdateDefaultChainAndNamespace_m2050AD812B41661EE76CFCECEC6426235D83F0B2 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490_m661DB8530D1414681CDF38AEE1FA73D866667103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490 V_0;
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
		AsyncVoidMethodBuilder_Start_TisU3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490_m661DB8530D1414681CDF38AEE1FA73D866667103(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490_m661DB8530D1414681CDF38AEE1FA73D866667103_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task WalletConnectSharp.Sign.Controllers.AddressProvider::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AddressProvider_Init_mBD61297A8535B761059FEBEBF42065D850E8C760 (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8_m02ED98728F23F932A89789AD1FA771AB9E8BFE8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8 V_0;
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
		AsyncTaskMethodBuilder_Start_TisU3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8_m02ED98728F23F932A89789AD1FA771AB9E8BFE8E(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8_m02ED98728F23F932A89789AD1FA771AB9E8BFE8E_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressProvider_Dispose_m61AC2EF584C3529685477F798B79348484B8770D (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressProvider_ClientOnSessionConnected_mAD2DE06ED24B3B007F2CC0580BC389529C9740E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressProvider_ClientOnSessionDeleted_mE28D28A3E348581CF15E7D1D0842043E9D7F75D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressProvider_ClientOnSessionUpdated_m4FF4E2885C982A9E51D522BEB75F298409AF0134_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEngineAPI_tDAE25681E18B438E010F95FE02982515D32A9385_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____client_3;
		EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94* L_1 = (EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94*)il2cpp_codegen_object_new(EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m3A3B249F5335928243FE3E1ECE0C075CB70D9CF2(L_1, __this, (intptr_t)((void*)AddressProvider_ClientOnSessionConnected_mAD2DE06ED24B3B007F2CC0580BC389529C9740E6_RuntimeMethod_var), NULL);
		InterfaceActionInvoker1< EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94* >::Invoke(7 /* System.Void WalletConnectSharp.Sign.Interfaces.IEngineAPI::remove_SessionConnected(System.EventHandler`1<WalletConnectSharp.Sign.Models.SessionStruct>) */, IEngineAPI_tDAE25681E18B438E010F95FE02982515D32A9385_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = __this->____client_3;
		EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55* L_3 = (EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55*)il2cpp_codegen_object_new(EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m7132B4B676D4C617F218FE7F408C45BBDC43768E(L_3, __this, (intptr_t)((void*)AddressProvider_ClientOnSessionDeleted_mE28D28A3E348581CF15E7D1D0842043E9D7F75D0_RuntimeMethod_var), NULL);
		InterfaceActionInvoker1< EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55* >::Invoke(21 /* System.Void WalletConnectSharp.Sign.Interfaces.IEngineAPI::remove_SessionDeleted(System.EventHandler`1<WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent>) */, IEngineAPI_tDAE25681E18B438E010F95FE02982515D32A9385_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = __this->____client_3;
		EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55* L_5 = (EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55*)il2cpp_codegen_object_new(EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m7132B4B676D4C617F218FE7F408C45BBDC43768E(L_5, __this, (intptr_t)((void*)AddressProvider_ClientOnSessionUpdated_m4FF4E2885C982A9E51D522BEB75F298409AF0134_RuntimeMethod_var), NULL);
		InterfaceActionInvoker1< EventHandler_1_tF803566DAFD7E7BA62AC072F8F1FAE8AB52C6F55* >::Invoke(15 /* System.Void WalletConnectSharp.Sign.Interfaces.IEngineAPI::remove_SessionUpdated(System.EventHandler`1<WalletConnectSharp.Sign.Models.Engine.Events.SessionEvent>) */, IEngineAPI_tDAE25681E18B438E010F95FE02982515D32A9385_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->____client_3;
		EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94* L_7 = (EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94*)il2cpp_codegen_object_new(EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_m3A3B249F5335928243FE3E1ECE0C075CB70D9CF2(L_7, __this, (intptr_t)((void*)AddressProvider_ClientOnSessionConnected_mAD2DE06ED24B3B007F2CC0580BC389529C9740E6_RuntimeMethod_var), NULL);
		InterfaceActionInvoker1< EventHandler_1_tD2B8E8A000416317F5FF22A7FFF8FE3EE09F8C94* >::Invoke(25 /* System.Void WalletConnectSharp.Sign.Interfaces.IEngineAPI::remove_SessionApproved(System.EventHandler`1<WalletConnectSharp.Sign.Models.SessionStruct>) */, IEngineAPI_tDAE25681E18B438E010F95FE02982515D32A9385_il2cpp_TypeInfo_var, L_6, L_7);
		__this->____client_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____client_3), (void*)(RuntimeObject*)NULL);
		AddressProvider_set_Sessions_mAF885A1B0230D42D0140F6C7E05DCC2565755E02_inline(__this, (RuntimeObject*)NULL, NULL);
		AddressProvider_set_DefaultNamespace_mC744DC6D0DBD0DF9713BEBBD8FF17C764CDCE4F5(__this, (String_t*)NULL, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E));
		SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_8 = V_0;
		AddressProvider_set_DefaultSession_m519CEBCB359BF2F28C97C3E77A0CB3E94BCD7ED4(__this, L_8, NULL);
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


// Conversion methods for marshalling of: WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData
IL2CPP_EXTERN_C void DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D_marshal_pinvoke(const DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D& unmarshaled, DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Session_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Session' of type 'DefaultData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Session_0Exception, NULL);
}
IL2CPP_EXTERN_C void DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D_marshal_pinvoke_back(const DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D_marshaled_pinvoke& marshaled, DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D& unmarshaled)
{
	Exception_t* ___Session_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Session' of type 'DefaultData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Session_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData
IL2CPP_EXTERN_C void DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D_marshal_pinvoke_cleanup(DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData
IL2CPP_EXTERN_C void DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D_marshal_com(const DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D& unmarshaled, DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D_marshaled_com& marshaled)
{
	Exception_t* ___Session_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Session' of type 'DefaultData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Session_0Exception, NULL);
}
IL2CPP_EXTERN_C void DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D_marshal_com_back(const DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D_marshaled_com& marshaled, DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D& unmarshaled)
{
	Exception_t* ___Session_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Session' of type 'DefaultData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Session_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: WalletConnectSharp.Sign.Controllers.AddressProvider/DefaultData
IL2CPP_EXTERN_C void DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D_marshal_com_cleanup(DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider/<Init>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitU3Ed__33_MoveNext_mCD37A392005B0AF98F51E31042870CCED1D7802E (U3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8_mE865EF33C55AF454C6458EB60EA7980CE24452D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0046_1;
			}
		}
		{
			AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_3 = V_1;
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
			L_4 = VirtualFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(16 /* System.Threading.Tasks.Task WalletConnectSharp.Sign.Controllers.AddressProvider::LoadDefaults() */, L_3);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_5;
			L_5 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_4, NULL);
			V_2 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_6)
			{
				goto IL_0062_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_8 = V_2;
			__this->___U3CU3Eu__1_3 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_9 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8_mE865EF33C55AF454C6458EB60EA7980CE24452D8(L_9, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8_mE865EF33C55AF454C6458EB60EA7980CE24452D8_RuntimeMethod_var);
			goto IL_0095;
		}

IL_0046_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_10 = __this->___U3CU3Eu__1_3;
			V_2 = L_10;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_11 = (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_0062_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			goto IL_0082;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006b;
		}
		throw e;
	}

CATCH_006b:
	{// begin catch(System.Exception)
		Exception_t* L_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_13;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_14 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_15 = V_3;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_14, L_15, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0095;
	}// end catch (depth: 1)

IL_0082:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_16 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_16, NULL);
	}

IL_0095:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitU3Ed__33_MoveNext_mCD37A392005B0AF98F51E31042870CCED1D7802E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8*>(__this + _offset);
	U3CInitU3Ed__33_MoveNext_mCD37A392005B0AF98F51E31042870CCED1D7802E(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider/<Init>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitU3Ed__33_SetStateMachine_m9D262EC3C552482B3479BB16053B3909823B3EEA (U3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C  void U3CInitU3Ed__33_SetStateMachine_m9D262EC3C552482B3479BB16053B3909823B3EEA_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitU3Ed__33_t9733C29B43D6492F37F62B46A2F2EEF2F0EE0CB8*>(__this + _offset);
	U3CInitU3Ed__33_SetStateMachine_m9D262EC3C552482B3479BB16053B3909823B3EEA(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider/<LoadDefaults>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDefaultsU3Ed__27_MoveNext_m6CED6070FC921010981460FFF65BDFDF1A7A7DBA (U3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_mB27EE438B2B1EBC1875DDE303FD036CEEA1A2D72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_m9C5BF287EB8021A3DA0B5907FEBFD677D6532A68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultsLoadingEventArgs_t331F8FF084CEFF8C9A6F92F1A7DD58444B49CCE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICore_t486AB9797C8EA37B31C47E5ACD8D2A65C63C3BDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyValueStorage_GetItem_TisDefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D_mCF5A3E57DE0E2D830178C14653C006BDECB5CC5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyValueStorage_t32495C81C0D854E5375AAE500F8A102DF003DDF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignClient_t96FD1D128E9AE60001E8BD60DC835D5127FC29DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m372D306836B78EB5520B5AD1DD07AC0CF0013F50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m2435469D0693EE79E689D76FC8C9E43474DED761_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m3053EAEBF00E0F56D64CE89B31651788B0C0649E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCFEC34E89A07B423A1D2F8D89D33BED660094DD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* V_1 = NULL;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_2;
	memset((&V_2), 0, sizeof(V_2));
	DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D V_3;
	memset((&V_3), 0, sizeof(V_3));
	TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	EventHandler_1_t30EEAD9BE466391AB06F7F8E7F0353EAE8EED806* G_B14_0 = NULL;
	EventHandler_1_t30EEAD9BE466391AB06F7F8E7F0353EAE8EED806* G_B13_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_007b_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00ef_1;
			}
		}
		{
			AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_4 = V_1;
			String_t* L_5;
			L_5 = AddressProvider_get_Context_m3AC91C629AB973FD990E73BB8CE9E33CECBA2149(L_4, NULL);
			String_t* L_6;
			L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, _stringLiteralFCFEC34E89A07B423A1D2F8D89D33BED660094DD, NULL);
			__this->___U3CkeyU3E5__2_3 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkeyU3E5__2_3), (void*)L_6);
			AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_7 = V_1;
			RuntimeObject* L_8 = L_7->____client_3;
			RuntimeObject* L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* WalletConnectSharp.Core.Interfaces.ICore WalletConnectSharp.Sign.Interfaces.ISignClient::get_Core() */, ISignClient_t96FD1D128E9AE60001E8BD60DC835D5127FC29DA_il2cpp_TypeInfo_var, L_8);
			RuntimeObject* L_10;
			L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* WalletConnectSharp.Storage.Interfaces.IKeyValueStorage WalletConnectSharp.Core.Interfaces.ICore::get_Storage() */, ICore_t486AB9797C8EA37B31C47E5ACD8D2A65C63C3BDF_il2cpp_TypeInfo_var, L_9);
			String_t* L_11 = __this->___U3CkeyU3E5__2_3;
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_12;
			L_12 = InterfaceFuncInvoker1< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, String_t* >::Invoke(3 /* System.Threading.Tasks.Task`1<System.Boolean> WalletConnectSharp.Storage.Interfaces.IKeyValueStorage::HasItem(System.String) */, IKeyValueStorage_t32495C81C0D854E5375AAE500F8A102DF003DDF2_il2cpp_TypeInfo_var, L_10, L_11);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_13;
			L_13 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_12, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_2 = L_13;
			bool L_14;
			L_14 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_2), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0097_1;
			}
		}
		{
			int32_t L_15 = 0;
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_16 = V_2;
			__this->___U3CU3Eu__1_4 = L_16;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_17 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_mB27EE438B2B1EBC1875DDE303FD036CEEA1A2D72(L_17, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_mB27EE438B2B1EBC1875DDE303FD036CEEA1A2D72_RuntimeMethod_var);
			goto IL_0182;
		}

IL_007b_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_18 = __this->___U3CU3Eu__1_4;
			V_2 = L_18;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_19 = (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*)(&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_19, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_20 = (-1);
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
		}

IL_0097_1:
		{
			bool L_21;
			L_21 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_2), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			if (!L_21)
			{
				goto IL_011d_1;
			}
		}
		{
			AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_22 = V_1;
			RuntimeObject* L_23 = L_22->____client_3;
			RuntimeObject* L_24;
			L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* WalletConnectSharp.Core.Interfaces.ICore WalletConnectSharp.Sign.Interfaces.ISignClient::get_Core() */, ISignClient_t96FD1D128E9AE60001E8BD60DC835D5127FC29DA_il2cpp_TypeInfo_var, L_23);
			RuntimeObject* L_25;
			L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* WalletConnectSharp.Storage.Interfaces.IKeyValueStorage WalletConnectSharp.Core.Interfaces.ICore::get_Storage() */, ICore_t486AB9797C8EA37B31C47E5ACD8D2A65C63C3BDF_il2cpp_TypeInfo_var, L_24);
			String_t* L_26 = __this->___U3CkeyU3E5__2_3;
			Task_1_t3DE2F0EBC4A3E3DD775D27CD5B92AD54C65DC5EA* L_27;
			L_27 = GenericInterfaceFuncInvoker1< Task_1_t3DE2F0EBC4A3E3DD775D27CD5B92AD54C65DC5EA*, String_t* >::Invoke(IKeyValueStorage_GetItem_TisDefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D_mCF5A3E57DE0E2D830178C14653C006BDECB5CC5F_RuntimeMethod_var, L_25, L_26);
			TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257 L_28;
			L_28 = Task_1_GetAwaiter_m3053EAEBF00E0F56D64CE89B31651788B0C0649E(L_27, Task_1_GetAwaiter_m3053EAEBF00E0F56D64CE89B31651788B0C0649E_RuntimeMethod_var);
			V_4 = L_28;
			bool L_29;
			L_29 = TaskAwaiter_1_get_IsCompleted_m2435469D0693EE79E689D76FC8C9E43474DED761((&V_4), TaskAwaiter_1_get_IsCompleted_m2435469D0693EE79E689D76FC8C9E43474DED761_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_010c_1;
			}
		}
		{
			int32_t L_30 = 1;
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
			TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257 L_31 = V_4;
			__this->___U3CU3Eu__2_5 = L_31;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_32 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_m9C5BF287EB8021A3DA0B5907FEBFD677D6532A68(L_32, (&V_4), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257_TisU3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A_m9C5BF287EB8021A3DA0B5907FEBFD677D6532A68_RuntimeMethod_var);
			goto IL_0182;
		}

IL_00ef_1:
		{
			TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257 L_33 = __this->___U3CU3Eu__2_5;
			V_4 = L_33;
			TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257* L_34 = (TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257*)(&__this->___U3CU3Eu__2_5);
			il2cpp_codegen_initobj(L_34, sizeof(TaskAwaiter_1_t4EBB108C9F6AE0EAE914ECFBE945BD84E8EED257));
			int32_t L_35 = (-1);
			V_0 = L_35;
			__this->___U3CU3E1__state_0 = L_35;
		}

IL_010c_1:
		{
			DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D L_36;
			L_36 = TaskAwaiter_1_GetResult_m372D306836B78EB5520B5AD1DD07AC0CF0013F50((&V_4), TaskAwaiter_1_GetResult_m372D306836B78EB5520B5AD1DD07AC0CF0013F50_RuntimeMethod_var);
			V_3 = L_36;
			AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_37 = V_1;
			DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D L_38 = V_3;
			L_37->____state_1 = L_38;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&L_37->____state_1))->___Session_0))->___Topic_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&L_37->____state_1))->___Session_0))->___PairingTopic_1), (void*)NULL);
			#endif
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&L_37->____state_1))->___Session_0))->___Relay_2), (void*)NULL);
			#endif
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&L_37->____state_1))->___Session_0))->___Controller_5), (void*)NULL);
			#endif
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&L_37->____state_1))->___Session_0))->___Namespaces_6), (void*)NULL);
			#endif
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&L_37->____state_1))->___Session_0))->___RequiredNamespaces_7), (void*)NULL);
			#endif
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&L_37->____state_1))->___Session_0))->___Self_8), (void*)NULL);
			#endif
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&L_37->____state_1))->___Session_0))->___Peer_9), (void*)NULL);
			#endif
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&(((&L_37->____state_1))->___Namespace_1), (void*)NULL);
			#endif
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&(((&L_37->____state_1))->___ChainId_2), (void*)NULL);
			#endif
			goto IL_0129_1;
		}

IL_011d_1:
		{
			AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_39 = V_1;
			DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D* L_40 = (DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D*)(&L_39->____state_1);
			il2cpp_codegen_initobj(L_40, sizeof(DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D));
		}

IL_0129_1:
		{
			AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_41 = V_1;
			EventHandler_1_t30EEAD9BE466391AB06F7F8E7F0353EAE8EED806* L_42 = L_41->___DefaultsLoaded_0;
			EventHandler_1_t30EEAD9BE466391AB06F7F8E7F0353EAE8EED806* L_43 = L_42;
			G_B13_0 = L_43;
			if (L_43)
			{
				G_B14_0 = L_43;
				goto IL_0135_1;
			}
		}
		{
			goto IL_0146_1;
		}

IL_0135_1:
		{
			AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_44 = V_1;
			AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_45 = V_1;
			DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D* L_46 = (DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D*)(&L_45->____state_1);
			DefaultsLoadingEventArgs_t331F8FF084CEFF8C9A6F92F1A7DD58444B49CCE5* L_47 = (DefaultsLoadingEventArgs_t331F8FF084CEFF8C9A6F92F1A7DD58444B49CCE5*)il2cpp_codegen_object_new(DefaultsLoadingEventArgs_t331F8FF084CEFF8C9A6F92F1A7DD58444B49CCE5_il2cpp_TypeInfo_var);
			DefaultsLoadingEventArgs__ctor_mF35C80BD7F6971A8206B7AFB904FF9F5FBC6FA31(L_47, L_46, NULL);
			EventHandler_1_Invoke_mC0FDB3B04F7153D58C19B8E15686569D3AB0D836_inline(G_B14_0, L_44, L_47, NULL);
		}

IL_0146_1:
		{
			goto IL_0168;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0148;
		}
		throw e;
	}

CATCH_0148:
	{// begin catch(System.Exception)
		Exception_t* L_48 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_5 = L_48;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CkeyU3E5__2_3 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkeyU3E5__2_3), (void*)(String_t*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_49 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_50 = V_5;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_49, L_50, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0182;
	}// end catch (depth: 1)

IL_0168:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CkeyU3E5__2_3 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkeyU3E5__2_3), (void*)(String_t*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_51 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_51, NULL);
	}

IL_0182:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CLoadDefaultsU3Ed__27_MoveNext_m6CED6070FC921010981460FFF65BDFDF1A7A7DBA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A*>(__this + _offset);
	U3CLoadDefaultsU3Ed__27_MoveNext_m6CED6070FC921010981460FFF65BDFDF1A7A7DBA(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider/<LoadDefaults>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDefaultsU3Ed__27_SetStateMachine_m9017AF64FF2A96C553AE8F8BD8E29F6943BDBA73 (U3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C  void U3CLoadDefaultsU3Ed__27_SetStateMachine_m9017AF64FF2A96C553AE8F8BD8E29F6943BDBA73_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CLoadDefaultsU3Ed__27_tBB23C3CC2D86C7B09F4C08EC6574A5930EE1753A*>(__this + _offset);
	U3CLoadDefaultsU3Ed__27_SetStateMachine_m9017AF64FF2A96C553AE8F8BD8E29F6943BDBA73(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider/<SaveDefaults>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveDefaultsU3Ed__26_MoveNext_mF52E9728A6C2BA6071C41A0EDD29D601CB21CF4A (U3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138_m5E89EBFD36B0FDAFE5096A9CBD9F4E98A973A075_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICore_t486AB9797C8EA37B31C47E5ACD8D2A65C63C3BDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyValueStorage_SetItem_TisDefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D_mCB913009802A108EE51203080432B34D6A5E2590_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignClient_t96FD1D128E9AE60001E8BD60DC835D5127FC29DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCFEC34E89A07B423A1D2F8D89D33BED660094DD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_1 = __this->___U3CU3E4__this_2;
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
			AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_3 = V_1;
			RuntimeObject* L_4 = L_3->____client_3;
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* WalletConnectSharp.Core.Interfaces.ICore WalletConnectSharp.Sign.Interfaces.ISignClient::get_Core() */, ISignClient_t96FD1D128E9AE60001E8BD60DC835D5127FC29DA_il2cpp_TypeInfo_var, L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* WalletConnectSharp.Storage.Interfaces.IKeyValueStorage WalletConnectSharp.Core.Interfaces.ICore::get_Storage() */, ICore_t486AB9797C8EA37B31C47E5ACD8D2A65C63C3BDF_il2cpp_TypeInfo_var, L_5);
			AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_7 = V_1;
			String_t* L_8;
			L_8 = AddressProvider_get_Context_m3AC91C629AB973FD990E73BB8CE9E33CECBA2149(L_7, NULL);
			String_t* L_9;
			L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, _stringLiteralFCFEC34E89A07B423A1D2F8D89D33BED660094DD, NULL);
			AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_10 = V_1;
			DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D L_11 = L_10->____state_1;
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_12;
			L_12 = GenericInterfaceFuncInvoker2< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, String_t*, DefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D >::Invoke(IKeyValueStorage_SetItem_TisDefaultData_t07EF79D747E4B9FF5E4D0DBEF091EF1956B51E1D_mCB913009802A108EE51203080432B34D6A5E2590_RuntimeMethod_var, L_6, L_9, L_11);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_13;
			L_13 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_12, NULL);
			V_2 = L_13;
			bool L_14;
			L_14 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_14)
			{
				goto IL_0087_1;
			}
		}
		{
			int32_t L_15 = 0;
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_16 = V_2;
			__this->___U3CU3Eu__1_3 = L_16;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_17 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138_m5E89EBFD36B0FDAFE5096A9CBD9F4E98A973A075(L_17, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138_m5E89EBFD36B0FDAFE5096A9CBD9F4E98A973A075_RuntimeMethod_var);
			goto IL_00ba;
		}

IL_006b_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_18 = __this->___U3CU3Eu__1_3;
			V_2 = L_18;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_19 = (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_19, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_20 = (-1);
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
		}

IL_0087_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			goto IL_00a7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0090;
		}
		throw e;
	}

CATCH_0090:
	{// begin catch(System.Exception)
		Exception_t* L_21 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_21;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_22 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_23 = V_3;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_22, L_23, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00ba;
	}// end catch (depth: 1)

IL_00a7:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_24 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_24, NULL);
	}

IL_00ba:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveDefaultsU3Ed__26_MoveNext_mF52E9728A6C2BA6071C41A0EDD29D601CB21CF4A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138*>(__this + _offset);
	U3CSaveDefaultsU3Ed__26_MoveNext_mF52E9728A6C2BA6071C41A0EDD29D601CB21CF4A(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider/<SaveDefaults>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveDefaultsU3Ed__26_SetStateMachine_mB70F630B60A859BD8C13896BDB2397495601F9A0 (U3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C  void U3CSaveDefaultsU3Ed__26_SetStateMachine_mB70F630B60A859BD8C13896BDB2397495601F9A0_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSaveDefaultsU3Ed__26_t66CDF4DD2E420178DF3448425B188F755F3EF138*>(__this + _offset);
	U3CSaveDefaultsU3Ed__26_SetStateMachine_mB70F630B60A859BD8C13896BDB2397495601F9A0(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider/<UpdateDefaultChainAndNamespace>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateDefaultChainAndNamespaceU3Ed__31_MoveNext_m8A548E906227BD4F4F4B7A159BBB80C945C92A61 (U3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490_mA53DB08511E015810ACDBE216117BC1CCD8B3CA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisString_t_m9CA8A9DE7F8DCB619529414D42C259BDF6C05A5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_m44D2C27C2D9F5891777547ABEFCE584A0576ECB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_ContainsKey_mD5ABD9F94EC91124189C49A2607C0B3B687E8B21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m37C1D4A84E63ECBCDCFAED3906CFA5C7D34CA187_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_mED87760BA6248CDCD26FD1B9370EB26711783F84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Keys_m69C5EF81E3EA179F6ABB6CA464B6E63C83CD16BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Keys_m87C794707B69BEBFA056FC97B6697A0C8232E343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80D479AC3A6E2B8B70DE6CC1D300F757754E6312);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				switch (L_3)
				{
					case 0:
					{
						goto IL_00ba_2;
					}
					case 1:
					{
						goto IL_0140_2;
					}
					case 2:
					{
						goto IL_0363_2;
					}
				}
			}
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_4 = V_1;
				bool L_5;
				L_5 = AddressProvider_get_HasDefaultSession_m1AE5C66A3FB715B806AB641F5F336A0F5AE21139(L_4, NULL);
				if (!L_5)
				{
					goto IL_0325_2;
				}
			}
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_6 = V_1;
				String_t* L_7;
				L_7 = AddressProvider_get_DefaultNamespace_m99AE8D224A0E89CF9BBA6E09CC35F4A04E8F28A6(L_6, NULL);
				V_2 = L_7;
				String_t* L_8 = V_2;
				if (!L_8)
				{
					goto IL_0169_2;
				}
			}
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_9 = V_1;
				SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_10;
				L_10 = AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3(L_9, NULL);
				Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2* L_11 = L_10.___Namespaces_6;
				String_t* L_12 = V_2;
				bool L_13;
				L_13 = SortedDictionary_2_ContainsKey_mD5ABD9F94EC91124189C49A2607C0B3B687E8B21(L_11, L_12, SortedDictionary_2_ContainsKey_mD5ABD9F94EC91124189C49A2607C0B3B687E8B21_RuntimeMethod_var);
				if (!L_13)
				{
					goto IL_0169_2;
				}
			}
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_14 = V_1;
				String_t* L_15;
				L_15 = AddressProvider_get_DefaultChain_m4260AB6A70B33C0434DF6ADF8AC2531975339C1A(L_14, NULL);
				V_3 = L_15;
				String_t* L_16 = V_3;
				if (!L_16)
				{
					goto IL_0080_2;
				}
			}
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_17 = V_1;
				SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_18;
				L_18 = AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3(L_17, NULL);
				Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2* L_19 = L_18.___Namespaces_6;
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_20 = V_1;
				String_t* L_21;
				L_21 = AddressProvider_get_DefaultNamespace_m99AE8D224A0E89CF9BBA6E09CC35F4A04E8F28A6(L_20, NULL);
				Namespace_t8A1625FFCBDE1844297005A0B0E446EAC9CBDA49* L_22;
				L_22 = SortedDictionary_2_get_Item_m37C1D4A84E63ECBCDCFAED3906CFA5C7D34CA187(L_19, L_21, SortedDictionary_2_get_Item_m37C1D4A84E63ECBCDCFAED3906CFA5C7D34CA187_RuntimeMethod_var);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22->___Chains_3;
				String_t* L_24 = V_3;
				bool L_25;
				L_25 = Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33((RuntimeObject*)L_23, L_24, Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33_RuntimeMethod_var);
				if (!L_25)
				{
					goto IL_00e3_2;
				}
			}

IL_0080_2:
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_26 = V_1;
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_27;
				L_27 = VirtualFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(15 /* System.Threading.Tasks.Task WalletConnectSharp.Sign.Controllers.AddressProvider::SaveDefaults() */, L_26);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_28;
				L_28 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_27, NULL);
				V_4 = L_28;
				bool L_29;
				L_29 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_4), NULL);
				if (L_29)
				{
					goto IL_00d7_2;
				}
			}
			{
				int32_t L_30 = 0;
				V_0 = L_30;
				__this->___U3CU3E1__state_0 = L_30;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_31 = V_4;
				__this->___U3CU3Eu__1_3 = L_31;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_32 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490_mA53DB08511E015810ACDBE216117BC1CCD8B3CA7(L_32, (&V_4), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490_mA53DB08511E015810ACDBE216117BC1CCD8B3CA7_RuntimeMethod_var);
				goto IL_03be;
			}

IL_00ba_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_33 = __this->___U3CU3Eu__1_3;
				V_4 = L_33;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_34 = (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*)(&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_34, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_35 = (-1);
				V_0 = L_35;
				__this->___U3CU3E1__state_0 = L_35;
			}

IL_00d7_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_4), NULL);
				goto IL_03ab;
			}

IL_00e3_2:
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_36 = V_1;
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_37 = V_1;
				SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_38;
				L_38 = AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3(L_37, NULL);
				Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2* L_39 = L_38.___Namespaces_6;
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_40 = V_1;
				String_t* L_41;
				L_41 = AddressProvider_get_DefaultNamespace_m99AE8D224A0E89CF9BBA6E09CC35F4A04E8F28A6(L_40, NULL);
				Namespace_t8A1625FFCBDE1844297005A0B0E446EAC9CBDA49* L_42;
				L_42 = SortedDictionary_2_get_Item_m37C1D4A84E63ECBCDCFAED3906CFA5C7D34CA187(L_39, L_41, SortedDictionary_2_get_Item_m37C1D4A84E63ECBCDCFAED3906CFA5C7D34CA187_RuntimeMethod_var);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_42->___Chains_3;
				int32_t L_44 = 0;
				String_t* L_45 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
				AddressProvider_set_DefaultChain_mBABA1BE68FC54BEDBC61676F4A12490A12AFCF5C(L_36, L_45, NULL);
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_46 = V_1;
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_47;
				L_47 = VirtualFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(15 /* System.Threading.Tasks.Task WalletConnectSharp.Sign.Controllers.AddressProvider::SaveDefaults() */, L_46);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_48;
				L_48 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_47, NULL);
				V_4 = L_48;
				bool L_49;
				L_49 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_4), NULL);
				if (L_49)
				{
					goto IL_015d_2;
				}
			}
			{
				int32_t L_50 = 1;
				V_0 = L_50;
				__this->___U3CU3E1__state_0 = L_50;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_51 = V_4;
				__this->___U3CU3Eu__1_3 = L_51;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_52 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490_mA53DB08511E015810ACDBE216117BC1CCD8B3CA7(L_52, (&V_4), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490_mA53DB08511E015810ACDBE216117BC1CCD8B3CA7_RuntimeMethod_var);
				goto IL_03be;
			}

IL_0140_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_53 = __this->___U3CU3Eu__1_3;
				V_4 = L_53;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_54 = (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*)(&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_54, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_55 = (-1);
				V_0 = L_55;
				__this->___U3CU3E1__state_0 = L_55;
			}

IL_015d_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_4), NULL);
				goto IL_03ab;
			}

IL_0169_2:
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_56 = V_1;
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_57 = V_1;
				SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_58;
				L_58 = AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3(L_57, NULL);
				Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2* L_59 = L_58.___Namespaces_6;
				KeyCollection_t05B89CD562AD615C388EBDCA3D8E6AC92C701377* L_60;
				L_60 = SortedDictionary_2_get_Keys_m69C5EF81E3EA179F6ABB6CA464B6E63C83CD16BC(L_59, SortedDictionary_2_get_Keys_m69C5EF81E3EA179F6ABB6CA464B6E63C83CD16BC_RuntimeMethod_var);
				String_t* L_61;
				L_61 = Enumerable_FirstOrDefault_TisString_t_m9CA8A9DE7F8DCB619529414D42C259BDF6C05A5B(L_60, Enumerable_FirstOrDefault_TisString_t_m9CA8A9DE7F8DCB619529414D42C259BDF6C05A5B_RuntimeMethod_var);
				AddressProvider_set_DefaultNamespace_mC744DC6D0DBD0DF9713BEBBD8FF17C764CDCE4F5(L_56, L_61, NULL);
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_62 = V_1;
				String_t* L_63;
				L_63 = AddressProvider_get_DefaultNamespace_m99AE8D224A0E89CF9BBA6E09CC35F4A04E8F28A6(L_62, NULL);
				if (!L_63)
				{
					goto IL_024f_2;
				}
			}
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_64 = V_1;
				SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_65;
				L_65 = AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3(L_64, NULL);
				Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2* L_66 = L_65.___Namespaces_6;
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_67 = V_1;
				String_t* L_68;
				L_68 = AddressProvider_get_DefaultNamespace_m99AE8D224A0E89CF9BBA6E09CC35F4A04E8F28A6(L_67, NULL);
				bool L_69;
				L_69 = SortedDictionary_2_ContainsKey_mD5ABD9F94EC91124189C49A2607C0B3B687E8B21(L_66, L_68, SortedDictionary_2_ContainsKey_mD5ABD9F94EC91124189C49A2607C0B3B687E8B21_RuntimeMethod_var);
				if (!L_69)
				{
					goto IL_01ec_2;
				}
			}
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_70 = V_1;
				SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_71;
				L_71 = AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3(L_70, NULL);
				Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2* L_72 = L_71.___Namespaces_6;
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_73 = V_1;
				String_t* L_74;
				L_74 = AddressProvider_get_DefaultNamespace_m99AE8D224A0E89CF9BBA6E09CC35F4A04E8F28A6(L_73, NULL);
				Namespace_t8A1625FFCBDE1844297005A0B0E446EAC9CBDA49* L_75;
				L_75 = SortedDictionary_2_get_Item_m37C1D4A84E63ECBCDCFAED3906CFA5C7D34CA187(L_72, L_74, SortedDictionary_2_get_Item_m37C1D4A84E63ECBCDCFAED3906CFA5C7D34CA187_RuntimeMethod_var);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_76 = L_75->___Chains_3;
				if (!L_76)
				{
					goto IL_01ec_2;
				}
			}
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_77 = V_1;
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_78 = V_1;
				SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_79;
				L_79 = AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3(L_78, NULL);
				Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2* L_80 = L_79.___Namespaces_6;
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_81 = V_1;
				String_t* L_82;
				L_82 = AddressProvider_get_DefaultNamespace_m99AE8D224A0E89CF9BBA6E09CC35F4A04E8F28A6(L_81, NULL);
				Namespace_t8A1625FFCBDE1844297005A0B0E446EAC9CBDA49* L_83;
				L_83 = SortedDictionary_2_get_Item_m37C1D4A84E63ECBCDCFAED3906CFA5C7D34CA187(L_80, L_82, SortedDictionary_2_get_Item_m37C1D4A84E63ECBCDCFAED3906CFA5C7D34CA187_RuntimeMethod_var);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_84 = L_83->___Chains_3;
				int32_t L_85 = 0;
				String_t* L_86 = (L_84)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_85));
				AddressProvider_set_DefaultChain_mBABA1BE68FC54BEDBC61676F4A12490A12AFCF5C(L_77, L_86, NULL);
				goto IL_032c_2;
			}

IL_01ec_2:
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_87 = V_1;
				SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_88;
				L_88 = AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3(L_87, NULL);
				RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* L_89 = L_88.___RequiredNamespaces_7;
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_90 = V_1;
				String_t* L_91;
				L_91 = AddressProvider_get_DefaultNamespace_m99AE8D224A0E89CF9BBA6E09CC35F4A04E8F28A6(L_90, NULL);
				bool L_92;
				L_92 = SortedDictionary_2_ContainsKey_m44D2C27C2D9F5891777547ABEFCE584A0576ECB8(L_89, L_91, SortedDictionary_2_ContainsKey_m44D2C27C2D9F5891777547ABEFCE584A0576ECB8_RuntimeMethod_var);
				if (!L_92)
				{
					goto IL_032c_2;
				}
			}
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_93 = V_1;
				SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_94;
				L_94 = AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3(L_93, NULL);
				RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* L_95 = L_94.___RequiredNamespaces_7;
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_96 = V_1;
				String_t* L_97;
				L_97 = AddressProvider_get_DefaultNamespace_m99AE8D224A0E89CF9BBA6E09CC35F4A04E8F28A6(L_96, NULL);
				ProposedNamespace_tD09A3F2DDDADACB651F6E2CCEC37B94D45386DB2* L_98;
				L_98 = SortedDictionary_2_get_Item_mED87760BA6248CDCD26FD1B9370EB26711783F84(L_95, L_97, SortedDictionary_2_get_Item_mED87760BA6248CDCD26FD1B9370EB26711783F84_RuntimeMethod_var);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_99 = L_98->___Chains_0;
				if (!L_99)
				{
					goto IL_032c_2;
				}
			}
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_100 = V_1;
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_101 = V_1;
				SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_102;
				L_102 = AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3(L_101, NULL);
				RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* L_103 = L_102.___RequiredNamespaces_7;
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_104 = V_1;
				String_t* L_105;
				L_105 = AddressProvider_get_DefaultNamespace_m99AE8D224A0E89CF9BBA6E09CC35F4A04E8F28A6(L_104, NULL);
				ProposedNamespace_tD09A3F2DDDADACB651F6E2CCEC37B94D45386DB2* L_106;
				L_106 = SortedDictionary_2_get_Item_mED87760BA6248CDCD26FD1B9370EB26711783F84(L_103, L_105, SortedDictionary_2_get_Item_mED87760BA6248CDCD26FD1B9370EB26711783F84_RuntimeMethod_var);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_107 = L_106->___Chains_0;
				int32_t L_108 = 0;
				String_t* L_109 = (L_107)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_108));
				AddressProvider_set_DefaultChain_mBABA1BE68FC54BEDBC61676F4A12490A12AFCF5C(L_100, L_109, NULL);
				goto IL_032c_2;
			}

IL_024f_2:
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_110 = V_1;
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_111 = V_1;
				SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_112;
				L_112 = AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3(L_111, NULL);
				Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2* L_113 = L_112.___Namespaces_6;
				KeyCollection_t05B89CD562AD615C388EBDCA3D8E6AC92C701377* L_114;
				L_114 = SortedDictionary_2_get_Keys_m69C5EF81E3EA179F6ABB6CA464B6E63C83CD16BC(L_113, SortedDictionary_2_get_Keys_m69C5EF81E3EA179F6ABB6CA464B6E63C83CD16BC_RuntimeMethod_var);
				String_t* L_115;
				L_115 = Enumerable_FirstOrDefault_TisString_t_m9CA8A9DE7F8DCB619529414D42C259BDF6C05A5B(L_114, Enumerable_FirstOrDefault_TisString_t_m9CA8A9DE7F8DCB619529414D42C259BDF6C05A5B_RuntimeMethod_var);
				AddressProvider_set_DefaultNamespace_mC744DC6D0DBD0DF9713BEBBD8FF17C764CDCE4F5(L_110, L_115, NULL);
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_116 = V_1;
				String_t* L_117;
				L_117 = AddressProvider_get_DefaultNamespace_m99AE8D224A0E89CF9BBA6E09CC35F4A04E8F28A6(L_116, NULL);
				if (!L_117)
				{
					goto IL_02b4_2;
				}
			}
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_118 = V_1;
				SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_119;
				L_119 = AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3(L_118, NULL);
				Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2* L_120 = L_119.___Namespaces_6;
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_121 = V_1;
				String_t* L_122;
				L_122 = AddressProvider_get_DefaultNamespace_m99AE8D224A0E89CF9BBA6E09CC35F4A04E8F28A6(L_121, NULL);
				Namespace_t8A1625FFCBDE1844297005A0B0E446EAC9CBDA49* L_123;
				L_123 = SortedDictionary_2_get_Item_m37C1D4A84E63ECBCDCFAED3906CFA5C7D34CA187(L_120, L_122, SortedDictionary_2_get_Item_m37C1D4A84E63ECBCDCFAED3906CFA5C7D34CA187_RuntimeMethod_var);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_124 = L_123->___Chains_3;
				if (!L_124)
				{
					goto IL_02b4_2;
				}
			}
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_125 = V_1;
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_126 = V_1;
				SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_127;
				L_127 = AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3(L_126, NULL);
				Namespaces_t21319E5B0935CA954D3DA6CAF3182442DFEF5FC2* L_128 = L_127.___Namespaces_6;
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_129 = V_1;
				String_t* L_130;
				L_130 = AddressProvider_get_DefaultNamespace_m99AE8D224A0E89CF9BBA6E09CC35F4A04E8F28A6(L_129, NULL);
				Namespace_t8A1625FFCBDE1844297005A0B0E446EAC9CBDA49* L_131;
				L_131 = SortedDictionary_2_get_Item_m37C1D4A84E63ECBCDCFAED3906CFA5C7D34CA187(L_128, L_130, SortedDictionary_2_get_Item_m37C1D4A84E63ECBCDCFAED3906CFA5C7D34CA187_RuntimeMethod_var);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_132 = L_131->___Chains_3;
				int32_t L_133 = 0;
				String_t* L_134 = (L_132)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_133));
				AddressProvider_set_DefaultChain_mBABA1BE68FC54BEDBC61676F4A12490A12AFCF5C(L_125, L_134, NULL);
				goto IL_032c_2;
			}

IL_02b4_2:
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_135 = V_1;
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_136 = V_1;
				SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_137;
				L_137 = AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3(L_136, NULL);
				RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* L_138 = L_137.___RequiredNamespaces_7;
				KeyCollection_tDD84839E1174F2132B4B05A806047C8DCB092AC2* L_139;
				L_139 = SortedDictionary_2_get_Keys_m87C794707B69BEBFA056FC97B6697A0C8232E343(L_138, SortedDictionary_2_get_Keys_m87C794707B69BEBFA056FC97B6697A0C8232E343_RuntimeMethod_var);
				String_t* L_140;
				L_140 = Enumerable_FirstOrDefault_TisString_t_m9CA8A9DE7F8DCB619529414D42C259BDF6C05A5B(L_139, Enumerable_FirstOrDefault_TisString_t_m9CA8A9DE7F8DCB619529414D42C259BDF6C05A5B_RuntimeMethod_var);
				AddressProvider_set_DefaultNamespace_mC744DC6D0DBD0DF9713BEBBD8FF17C764CDCE4F5(L_135, L_140, NULL);
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_141 = V_1;
				String_t* L_142;
				L_142 = AddressProvider_get_DefaultNamespace_m99AE8D224A0E89CF9BBA6E09CC35F4A04E8F28A6(L_141, NULL);
				if (!L_142)
				{
					goto IL_0319_2;
				}
			}
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_143 = V_1;
				SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_144;
				L_144 = AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3(L_143, NULL);
				RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* L_145 = L_144.___RequiredNamespaces_7;
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_146 = V_1;
				String_t* L_147;
				L_147 = AddressProvider_get_DefaultNamespace_m99AE8D224A0E89CF9BBA6E09CC35F4A04E8F28A6(L_146, NULL);
				ProposedNamespace_tD09A3F2DDDADACB651F6E2CCEC37B94D45386DB2* L_148;
				L_148 = SortedDictionary_2_get_Item_mED87760BA6248CDCD26FD1B9370EB26711783F84(L_145, L_147, SortedDictionary_2_get_Item_mED87760BA6248CDCD26FD1B9370EB26711783F84_RuntimeMethod_var);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_149 = L_148->___Chains_0;
				if (!L_149)
				{
					goto IL_0319_2;
				}
			}
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_150 = V_1;
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_151 = V_1;
				SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E L_152;
				L_152 = AddressProvider_get_DefaultSession_mCF54D7EFCC7E9B96D049156388A360FF4CC4E0C3(L_151, NULL);
				RequiredNamespaces_tAE60F5875B28826E0D827FC2131ABAE2B86C9FDC* L_153 = L_152.___RequiredNamespaces_7;
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_154 = V_1;
				String_t* L_155;
				L_155 = AddressProvider_get_DefaultNamespace_m99AE8D224A0E89CF9BBA6E09CC35F4A04E8F28A6(L_154, NULL);
				ProposedNamespace_tD09A3F2DDDADACB651F6E2CCEC37B94D45386DB2* L_156;
				L_156 = SortedDictionary_2_get_Item_mED87760BA6248CDCD26FD1B9370EB26711783F84(L_153, L_155, SortedDictionary_2_get_Item_mED87760BA6248CDCD26FD1B9370EB26711783F84_RuntimeMethod_var);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_157 = L_156->___Chains_0;
				int32_t L_158 = 0;
				String_t* L_159 = (L_157)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_158));
				AddressProvider_set_DefaultChain_mBABA1BE68FC54BEDBC61676F4A12490A12AFCF5C(L_150, L_159, NULL);
				goto IL_032c_2;
			}

IL_0319_2:
			{
				WCLogger_LogError_m436F04A302C7816A1F69AAC619FC5BA3DC896618(_stringLiteral80D479AC3A6E2B8B70DE6CC1D300F757754E6312, NULL);
				goto IL_032c_2;
			}

IL_0325_2:
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_160 = V_1;
				AddressProvider_set_DefaultNamespace_mC744DC6D0DBD0DF9713BEBBD8FF17C764CDCE4F5(L_160, (String_t*)NULL, NULL);
			}

IL_032c_2:
			{
				AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* L_161 = V_1;
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_162;
				L_162 = VirtualFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(15 /* System.Threading.Tasks.Task WalletConnectSharp.Sign.Controllers.AddressProvider::SaveDefaults() */, L_161);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_163;
				L_163 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_162, NULL);
				V_4 = L_163;
				bool L_164;
				L_164 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_4), NULL);
				if (L_164)
				{
					goto IL_0380_2;
				}
			}
			{
				int32_t L_165 = 2;
				V_0 = L_165;
				__this->___U3CU3E1__state_0 = L_165;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_166 = V_4;
				__this->___U3CU3Eu__1_3 = L_166;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_167 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490_mA53DB08511E015810ACDBE216117BC1CCD8B3CA7(L_167, (&V_4), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490_mA53DB08511E015810ACDBE216117BC1CCD8B3CA7_RuntimeMethod_var);
				goto IL_03be;
			}

IL_0363_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_168 = __this->___U3CU3Eu__1_3;
				V_4 = L_168;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_169 = (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*)(&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_169, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_170 = (-1);
				V_0 = L_170;
				__this->___U3CU3E1__state_0 = L_170;
			}

IL_0380_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_4), NULL);
				goto IL_0390_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0389_1;
			}
			throw e;
		}

CATCH_0389_1:
		{// begin catch(System.Exception)
			Exception_t* L_171 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			WCLogger_LogError_mFDECF4DF0595C49C951D9D1BE61C1B8225B9E91A(L_171, NULL);
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
		}// end catch (depth: 2)

IL_0390_1:
		{
			goto IL_03ab;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0392;
		}
		throw e;
	}

CATCH_0392:
	{// begin catch(System.Exception)
		Exception_t* L_172 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_5 = L_172;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_173 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_174 = V_5;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_173, L_174, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_03be;
	}// end catch (depth: 1)

IL_03ab:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_175 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_175, NULL);
	}

IL_03be:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUpdateDefaultChainAndNamespaceU3Ed__31_MoveNext_m8A548E906227BD4F4F4B7A159BBB80C945C92A61_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490*>(__this + _offset);
	U3CUpdateDefaultChainAndNamespaceU3Ed__31_MoveNext_m8A548E906227BD4F4F4B7A159BBB80C945C92A61(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Sign.Controllers.AddressProvider/<UpdateDefaultChainAndNamespace>d__31::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateDefaultChainAndNamespaceU3Ed__31_SetStateMachine_m00F3EE701FC73D0CFAB709B1642B2725CE7D9E19 (U3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUpdateDefaultChainAndNamespaceU3Ed__31_SetStateMachine_m00F3EE701FC73D0CFAB709B1642B2725CE7D9E19_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CUpdateDefaultChainAndNamespaceU3Ed__31_t89B533F852EAB4D114005745942DC9DD01EB5490*>(__this + _offset);
	U3CUpdateDefaultChainAndNamespaceU3Ed__31_SetStateMachine_m00F3EE701FC73D0CFAB709B1642B2725CE7D9E19(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Sign.Controllers.PendingRequests::.ctor(WalletConnectSharp.Core.Interfaces.ICore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PendingRequests__ctor_mEC4B77DC5CDC2B9244CECF5F36AE0816B8118F50 (PendingRequests_tBF176ADFA9046487D96F27192F681C048C7BC38A* __this, RuntimeObject* ___0_core, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Store_2__ctor_m364F7B03CF00FA4405C870A3CC89F4534363CE4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WalletConnectSignClient_tF285B0C7B639363DD25489D68A1E22F5E0056396_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2388F091C228023E790448E1E25A13FDA7A160F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_core;
		il2cpp_codegen_runtime_class_init_inline(WalletConnectSignClient_tF285B0C7B639363DD25489D68A1E22F5E0056396_il2cpp_TypeInfo_var);
		String_t* L_1 = ((WalletConnectSignClient_tF285B0C7B639363DD25489D68A1E22F5E0056396_StaticFields*)il2cpp_codegen_static_fields_for(WalletConnectSignClient_tF285B0C7B639363DD25489D68A1E22F5E0056396_il2cpp_TypeInfo_var))->___StoragePrefix_3;
		Store_2__ctor_m364F7B03CF00FA4405C870A3CC89F4534363CE4F(__this, L_0, _stringLiteral2388F091C228023E790448E1E25A13FDA7A160F4, L_1, Store_2__ctor_m364F7B03CF00FA4405C870A3CC89F4534363CE4F_RuntimeMethod_var);
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
// System.Void WalletConnectSharp.Sign.Controllers.Proposal::.ctor(WalletConnectSharp.Core.Interfaces.ICore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Proposal__ctor_m8138453F07D011C111B8AE998CA73DAFC43015E6 (Proposal_t609CB604E229BB88B83EC9D3FBC516455EE9D929* __this, RuntimeObject* ___0_core, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Store_2__ctor_m0D991759DD54DB3D8FB34A887859D971E75DC5C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WalletConnectSignClient_tF285B0C7B639363DD25489D68A1E22F5E0056396_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96B26C368E74EDB80685DEE93CAB7B0813B67961);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_core;
		il2cpp_codegen_runtime_class_init_inline(WalletConnectSignClient_tF285B0C7B639363DD25489D68A1E22F5E0056396_il2cpp_TypeInfo_var);
		String_t* L_1 = ((WalletConnectSignClient_tF285B0C7B639363DD25489D68A1E22F5E0056396_StaticFields*)il2cpp_codegen_static_fields_for(WalletConnectSignClient_tF285B0C7B639363DD25489D68A1E22F5E0056396_il2cpp_TypeInfo_var))->___StoragePrefix_3;
		Store_2__ctor_m0D991759DD54DB3D8FB34A887859D971E75DC5C1(__this, L_0, _stringLiteral96B26C368E74EDB80685DEE93CAB7B0813B67961, L_1, Store_2__ctor_m0D991759DD54DB3D8FB34A887859D971E75DC5C1_RuntimeMethod_var);
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
// System.Void WalletConnectSharp.Sign.Controllers.Session::.ctor(WalletConnectSharp.Core.Interfaces.ICore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Session__ctor_mEFAD54571A71B9390606E31454A69066D70EFC0A (Session_t89DECC2F058CFABB54855136D97CD8B906E1D41A* __this, RuntimeObject* ___0_core, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Store_2__ctor_m1BE6272C28E07E65AB7168CA1F4A8F0D7EAAE267_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WalletConnectSignClient_tF285B0C7B639363DD25489D68A1E22F5E0056396_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_core;
		il2cpp_codegen_runtime_class_init_inline(WalletConnectSignClient_tF285B0C7B639363DD25489D68A1E22F5E0056396_il2cpp_TypeInfo_var);
		String_t* L_1 = ((WalletConnectSignClient_tF285B0C7B639363DD25489D68A1E22F5E0056396_StaticFields*)il2cpp_codegen_static_fields_for(WalletConnectSignClient_tF285B0C7B639363DD25489D68A1E22F5E0056396_il2cpp_TypeInfo_var))->___StoragePrefix_3;
		Store_2__ctor_m1BE6272C28E07E65AB7168CA1F4A8F0D7EAAE267(__this, L_0, _stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558, L_1, Store_2__ctor_m1BE6272C28E07E65AB7168CA1F4A8F0D7EAAE267_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SessionStruct_get_Key_m80866C1FBF39A0F2334DEA62BC5908F664E28EBF_inline (SessionStruct_tB44158BBCD00F6106D012CFF575CBA54FC84030E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___Topic_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AddressProvider_set_Sessions_mAF885A1B0230D42D0140F6C7E05DCC2565755E02_inline (AddressProvider_t62E6271C2EA0677230CD1CD5238E743802857671* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CSessionsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_sender, RuntimeObject* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
