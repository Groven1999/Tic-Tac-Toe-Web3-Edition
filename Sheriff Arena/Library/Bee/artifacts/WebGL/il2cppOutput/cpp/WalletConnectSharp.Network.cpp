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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.EventHandler`1<System.String>>
struct Dictionary_2_t3AB42A23897EC8BCB5DF72EAE42386E76719F02F;
// System.Collections.Generic.Dictionary`2<System.String,System.EventHandler`1<WalletConnectSharp.Common.Model.Errors.WalletConnectException>>
struct Dictionary_2_t6427F068F2E0E9622E1DC076378F519CC4E56EB1;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5;
// WalletConnectSharp.Common.Events.EventHandlerMap`1<System.Object>
struct EventHandlerMap_1_tFC7E099D7EF8022E7CBA294D9D7EAD879D74E0AE;
// WalletConnectSharp.Common.Events.EventHandlerMap`1<System.String>
struct EventHandlerMap_1_t0AE57E6C727720119728463858340241CEB74325;
// WalletConnectSharp.Common.Events.EventHandlerMap`1<WalletConnectSharp.Common.Model.Errors.WalletConnectException>
struct EventHandlerMap_1_tB421B5244EA83E8618A5BE91A1FF904971630989;
// System.EventHandler`1<System.Exception>
struct EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE;
// System.EventHandler`1<WalletConnectSharp.Network.IJsonRpcConnection>
struct EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C;
// System.EventHandler`1<WalletConnectSharp.Network.Models.JsonRpcPayload>
struct EventHandler_1_t4AAB334E60528D35FBC25EDD898C5F2EF6194F66;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<System.String>
struct EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4;
// System.EventHandler`1<WalletConnectSharp.Common.Model.Errors.WalletConnectException>
struct EventHandler_1_t9329BBDFB85E6FCD59BCEA56CB42E93CDF693156;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Linq.JToken>
struct IDictionary_2_t641BD83F3C4FF5FE1C7429862C1E2B6E3DB7527B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<WalletConnectSharp.Network.Models.RpcRequestOptionsAttribute>
struct IEnumerable_1_tD4191DE14D8D7CDD74E2DEE82E0EAD238362B2B1;
// System.Collections.Generic.IEqualityComparer`1<WalletConnectSharp.Network.Models.Error>
struct IEqualityComparer_1_t796885C933B9962BA9DBD71D5C7167FFB2CF04DB;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
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
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t9F66A40ABC42541FE1142E572A038F66CECF3935;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// WalletConnectSharp.Network.Models.Error
struct Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// WalletConnectSharp.Common.Events.GenericEventHolder
struct GenericEventHolder_t76AAFFBC8A1D3255353D5F9842412D4AD62CBAF1;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// WalletConnectSharp.Network.IJsonRpcConnection
struct IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A;
// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3;
// WalletConnectSharp.Network.Models.JsonRpcError
struct JsonRpcError_t4B522B6901C42383D05ACFCB3E12295CEE258536;
// WalletConnectSharp.Network.Models.JsonRpcPayload
struct JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F;
// WalletConnectSharp.Network.JsonRpcProvider
struct JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7;
// System.OperatingSystem
struct OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557;
// System.Runtime.CompilerServices.RefSafetyRulesAttribute
struct RefSafetyRulesAttribute_tB3BF5AD87CA31772A4B9ADF2620221C58F1107CC;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// WalletConnectSharp.Network.RelayUrlBuilder
struct RelayUrlBuilder_tAA23FDAF9DC93EB0AD82BB9F696B7DB4A7A38642;
// WalletConnectSharp.Network.Models.RpcMethodAttribute
struct RpcMethodAttribute_tE75979D5D46A61790005DF1772E9836138F1B6E8;
// WalletConnectSharp.Network.Models.RpcOptionsAttribute
struct RpcOptionsAttribute_t2286689827674F2046E54EEDE422382B5BDB0A82;
// WalletConnectSharp.Network.Models.RpcRequestOptionsAttribute
struct RpcRequestOptionsAttribute_t6401E7B8487A10FBDB0BB15BD0FD4233897174FF;
// WalletConnectSharp.Network.Models.RpcResponseOptionsAttribute
struct RpcResponseOptionsAttribute_t8D56A4DDD2881C4D6091340A1B6470628D4133D7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WalletConnectSharp.Common.Model.Errors.WalletConnectException
struct WalletConnectException_t9CBCE981FDAC7DC8072A3D9E9F941CC2B56A5BA8;
// WalletConnectSharp.Network.Models.Error/CodeMessageDataEqualityComparer
struct CodeMessageDataEqualityComparer_tDE98AE6BACCACADCD8FA9578CDDCACC45A657631;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodeMessageDataEqualityComparer_tDE98AE6BACCACADCD8FA9578CDDCACC45A657631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericEventHolder_t76AAFFBC8A1D3255353D5F9842412D4AD62CBAF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t641BD83F3C4FF5FE1C7429862C1E2B6E3DB7527B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformID_t9C84323A65D2A39DBEB7A922286A9E9836B8BECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SDKConstants_t7A28B12CC8BD6837A353E7CA8D5DE811292792CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SdkErrors_t0760AD2C1D33848184D9B3F67DBB806D9182EA83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral047E369701975DC40DC49AA23CC6CAFC2EC004FE;
IL2CPP_EXTERN_C String_t* _stringLiteral06922BBBC7488E061F5774492D20C1F96077B887;
IL2CPP_EXTERN_C String_t* _stringLiteral0A97300E0ACA4739A7E451AC92B819A8F3FA32BD;
IL2CPP_EXTERN_C String_t* _stringLiteral1448C991CB29C80DE66267344AF5DFF13DF6D55D;
IL2CPP_EXTERN_C String_t* _stringLiteral19A4DD21BBFD4F7063C65CBD5B8DEB0688B58B10;
IL2CPP_EXTERN_C String_t* _stringLiteral211D703A10C207E4F2B978045F28D1208138A45A;
IL2CPP_EXTERN_C String_t* _stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B;
IL2CPP_EXTERN_C String_t* _stringLiteral3A6906E03D11CBEEBFB057D6ABA2AF284C95E7D0;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral42B98E8D3CDFD35E549499F496EDDFB083336897;
IL2CPP_EXTERN_C String_t* _stringLiteral595320BA056F8106150E19C7F57653801E2B706A;
IL2CPP_EXTERN_C String_t* _stringLiteral66C5ED5044469BB9500F2AE523253C93EE36A578;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral743BBE1761936A645416E0A29BDBB3B0F139F57C;
IL2CPP_EXTERN_C String_t* _stringLiteral74CC3B7E957B3E7555158404BFDECEF3E64B046B;
IL2CPP_EXTERN_C String_t* _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF;
IL2CPP_EXTERN_C String_t* _stringLiteral83F713D824ACC4750B372C896A4258FB6A63D407;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8B5873F28D8A7B11FFFBB32582218961DD3D0824;
IL2CPP_EXTERN_C String_t* _stringLiteral9C6672D556D3488E95B6418804BD11D275A58F1F;
IL2CPP_EXTERN_C String_t* _stringLiteral9DCA4F535A11276AF62FE26137F9B039FC7D24DD;
IL2CPP_EXTERN_C String_t* _stringLiteral9F2FFDA91733A106876B7CCD0BAA14B70537446C;
IL2CPP_EXTERN_C String_t* _stringLiteralAE4FDABA69AF20301DAC3F440FF491E1069955B0;
IL2CPP_EXTERN_C String_t* _stringLiteralCA02D96D2D5B5DFE46BA40752529C60761D84AA1;
IL2CPP_EXTERN_C String_t* _stringLiteralCD53B6BB2C67D836C2A945076D6677489318B3F2;
IL2CPP_EXTERN_C String_t* _stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F;
IL2CPP_EXTERN_C String_t* _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5_mEF18CF9AFD81F62F0159E77D168E315A25035581_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336_m11C65FDD94B8B8980CAB512BA9573F4B9072E086_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7_m2E3259283EE5E7EB7E8E7DE8471C584D00A6F2CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5_mD01FA213918211361C9427D21367C708C82728E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336_m4B64F3AD984BDA909A65BA9BF9832F9B7EE33EC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7_mF9B46F6DA2D3422C282BA40453DB226BF977701F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Cast_TisRpcRequestOptionsAttribute_t6401E7B8487A10FBDB0BB15BD0FD4233897174FF_mAD4AE4790E8A8E8DBD0ED45A36CD3E2DEB991EAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisRpcRequestOptionsAttribute_t6401E7B8487A10FBDB0BB15BD0FD4233897174FF_m9D91AA413C9F162F43E45EBFDA60B67ED498C30F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandlerMap_1_get_Item_m1095F93432B2914E79181BA9E5A88B1E969E0E44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandlerMap_1_get_Item_m7E1C02E580C2B2B441046B8841EF4B96ADB03E05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericEventHolder_OfType_TisString_t_m81C85E79777B42F2559E02A8CADD11D2BEFF1397_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GenericEventHolder_OfType_TisWalletConnectException_t9CBCE981FDAC7DC8072A3D9E9F941CC2B56A5BA8_m1FBE69ACDC751B2BC1ED7C3E67B8B04888DE1639_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashCode_Combine_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisString_t_TisString_t_m9B77A28C41BEC2562AA1B7148215FF6C1CB8E63B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JToken_ToObject_TisString_t_m24A2444CF94E8759ECB9DA2C94349E16C95CFE48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisJsonRpcError_t4B522B6901C42383D05ACFCB3E12295CEE258536_m89269DED5FFF4E7D63C6ED565629B5B396A32235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisJsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F_m72EAAD3632514BC05F3D5213824943DC961478C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonRpcPayload_get_Method_m4BC5E6037F2B64FADEC302C2B2A69AE918C9216B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonRpcProvider_OnConnectionDisconnected_m76FC97CB418CF040D730C8D69C0BCC96CCAF336F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonRpcProvider_OnConnectionError_mDE0263B2E8C73AECCABD3F965F5B6444A8A49587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonRpcProvider_OnPayload_m67295EDB659357C0E2A4F91C14F2C6BAE20183D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CConnectU3Ed__35_MoveNext_mFD07069E4A4BDD6FB18F441572C2BFF8C76810E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mEA682AE0DEB0D89054EB55197618D6C2C4A60CE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* RpcRequestOptionsAttribute_t6401E7B8487A10FBDB0BB15BD0FD4233897174FF_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t55B5C1C6F151C66D8DDD5D79F2D829B26F0D640A 
{
};

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

// WalletConnectSharp.Common.Events.EventHandlerMap`1<System.String>
struct EventHandlerMap_1_t0AE57E6C727720119728463858340241CEB74325  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.EventHandler`1<TEventArgs>> WalletConnectSharp.Common.Events.EventHandlerMap`1::mapping
	Dictionary_2_t3AB42A23897EC8BCB5DF72EAE42386E76719F02F* ___mapping_0;
	// System.Object WalletConnectSharp.Common.Events.EventHandlerMap`1::_mappingLock
	RuntimeObject* ____mappingLock_1;
	// System.EventHandler`1<TEventArgs> WalletConnectSharp.Common.Events.EventHandlerMap`1::BeforeEventExecuted
	EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* ___BeforeEventExecuted_2;
};

// WalletConnectSharp.Common.Events.EventHandlerMap`1<WalletConnectSharp.Common.Model.Errors.WalletConnectException>
struct EventHandlerMap_1_tB421B5244EA83E8618A5BE91A1FF904971630989  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.EventHandler`1<TEventArgs>> WalletConnectSharp.Common.Events.EventHandlerMap`1::mapping
	Dictionary_2_t6427F068F2E0E9622E1DC076378F519CC4E56EB1* ___mapping_0;
	// System.Object WalletConnectSharp.Common.Events.EventHandlerMap`1::_mappingLock
	RuntimeObject* ____mappingLock_1;
	// System.EventHandler`1<TEventArgs> WalletConnectSharp.Common.Events.EventHandlerMap`1::BeforeEventExecuted
	EventHandler_1_t9329BBDFB85E6FCD59BCEA56CB42E93CDF693156* ___BeforeEventExecuted_2;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ____task_0;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
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

// WalletConnectSharp.Common.Events.GenericEventHolder
struct GenericEventHolder_t76AAFFBC8A1D3255353D5F9842412D4AD62CBAF1  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> WalletConnectSharp.Common.Events.GenericEventHolder::dynamicTypeMapping
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ___dynamicTypeMapping_0;
};

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3  : public RuntimeObject
{
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A* ____parent_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____previous_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____next_2;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject* ____annotations_3;
};

// WalletConnectSharp.Network.Models.JsonRpcError
struct JsonRpcError_t4B522B6901C42383D05ACFCB3E12295CEE258536  : public RuntimeObject
{
	// System.Int64 WalletConnectSharp.Network.Models.JsonRpcError::_id
	int64_t ____id_0;
	// WalletConnectSharp.Network.Models.Error WalletConnectSharp.Network.Models.JsonRpcError::_error
	Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* ____error_1;
};

// WalletConnectSharp.Network.Models.JsonRpcPayload
struct JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F  : public RuntimeObject
{
	// System.Int64 WalletConnectSharp.Network.Models.JsonRpcPayload::_id
	int64_t ____id_0;
	// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Linq.JToken> WalletConnectSharp.Network.Models.JsonRpcPayload::_extraStuff
	RuntimeObject* ____extraStuff_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC  : public RuntimeObject
{
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_0;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____entriesArray_1;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____entriesTable_3;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* ____nullKeyEntry_4;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____serializationInfo_5;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_6;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject* ____syncRoot_7;
};

// WalletConnectSharp.Network.RelayUrlBuilder
struct RelayUrlBuilder_tAA23FDAF9DC93EB0AD82BB9F696B7DB4A7A38642  : public RuntimeObject
{
};

// WalletConnectSharp.Common.SDKConstants
struct SDKConstants_t7A28B12CC8BD6837A353E7CA8D5DE811292792CA  : public RuntimeObject
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

// WalletConnectSharp.Network.Validation
struct Validation_t15E94961E1F53F138F564B0BCE2A29A0D31C02CB  : public RuntimeObject
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

// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7  : public RuntimeObject
{
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;
};

// WalletConnectSharp.Network.Models.Error/CodeMessageDataEqualityComparer
struct CodeMessageDataEqualityComparer_tDE98AE6BACCACADCD8FA9578CDDCACC45A657631  : public RuntimeObject
{
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_38;
};

// System.ValueTuple`2<System.Object,System.Object>
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	// T1 System.ValueTuple`2::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject* ___Item2_1;
};

// System.ValueTuple`2<System.String,System.String>
struct ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91 
{
	// T1 System.ValueTuple`2::Item1
	String_t* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	String_t* ___Item2_1;
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

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t9F66A40ABC42541FE1142E572A038F66CECF3935  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
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

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
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

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7  : public NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC
{
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____all_9;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____allKeys_10;
};

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
struct RefSafetyRulesAttribute_tB3BF5AD87CA31772A4B9ADF2620221C58F1107CC  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 System.Runtime.CompilerServices.RefSafetyRulesAttribute::Version
	int32_t ___Version_0;
};

// WalletConnectSharp.Network.Models.RpcMethodAttribute
struct RpcMethodAttribute_tE75979D5D46A61790005DF1772E9836138F1B6E8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String WalletConnectSharp.Network.Models.RpcMethodAttribute::<MethodName>k__BackingField
	String_t* ___U3CMethodNameU3Ek__BackingField_0;
};

// WalletConnectSharp.Network.Models.RpcOptionsAttribute
struct RpcOptionsAttribute_t2286689827674F2046E54EEDE422382B5BDB0A82  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int64 WalletConnectSharp.Network.Models.RpcOptionsAttribute::<TTL>k__BackingField
	int64_t ___U3CTTLU3Ek__BackingField_0;
	// System.Int32 WalletConnectSharp.Network.Models.RpcOptionsAttribute::<Tag>k__BackingField
	int32_t ___U3CTagU3Ek__BackingField_1;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
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

// WalletConnectSharp.Common.Model.Errors.ErrorType
struct ErrorType_t991BACFDF1EDF8071C9D261756D76FC48AD166FC 
{
	// System.UInt32 WalletConnectSharp.Common.Model.Errors.ErrorType::value__
	uint32_t ___value___2;
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

// WalletConnectSharp.Network.JsonRpcProvider
struct JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4  : public RuntimeObject
{
	// WalletConnectSharp.Network.IJsonRpcConnection WalletConnectSharp.Network.JsonRpcProvider::_connection
	RuntimeObject* ____connection_0;
	// System.Boolean WalletConnectSharp.Network.JsonRpcProvider::_hasRegisteredEventListeners
	bool ____hasRegisteredEventListeners_1;
	// System.Guid WalletConnectSharp.Network.JsonRpcProvider::_context
	Guid_t ____context_2;
	// System.Boolean WalletConnectSharp.Network.JsonRpcProvider::_connectingStarted
	bool ____connectingStarted_3;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> WalletConnectSharp.Network.JsonRpcProvider::Connecting
	TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* ___Connecting_4;
	// System.Int64 WalletConnectSharp.Network.JsonRpcProvider::_lastId
	int64_t ____lastId_5;
	// System.EventHandler`1<WalletConnectSharp.Network.Models.JsonRpcPayload> WalletConnectSharp.Network.JsonRpcProvider::PayloadReceived
	EventHandler_1_t4AAB334E60528D35FBC25EDD898C5F2EF6194F66* ___PayloadReceived_6;
	// System.EventHandler`1<WalletConnectSharp.Network.IJsonRpcConnection> WalletConnectSharp.Network.JsonRpcProvider::Connected
	EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* ___Connected_7;
	// System.EventHandler WalletConnectSharp.Network.JsonRpcProvider::Disconnected
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___Disconnected_8;
	// System.EventHandler`1<System.Exception> WalletConnectSharp.Network.JsonRpcProvider::ErrorReceived
	EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* ___ErrorReceived_9;
	// System.EventHandler`1<System.String> WalletConnectSharp.Network.JsonRpcProvider::RawMessageReceived
	EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* ___RawMessageReceived_10;
	// WalletConnectSharp.Common.Events.GenericEventHolder WalletConnectSharp.Network.JsonRpcProvider::jsonResponseEventHolder
	GenericEventHolder_t76AAFFBC8A1D3255353D5F9842412D4AD62CBAF1* ___jsonResponseEventHolder_11;
	// System.Boolean WalletConnectSharp.Network.JsonRpcProvider::Disposed
	bool ___Disposed_12;
};

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

// System.PlatformID
struct PlatformID_t9C84323A65D2A39DBEB7A922286A9E9836B8BECA 
{
	// System.Int32 System.PlatformID::value__
	int32_t ___value___2;
};

// System.Text.RegularExpressions.RegexOptions
struct RegexOptions_tE9DA9C4DF8FB26DD1C7E0F8AA022C1164A423F6B 
{
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;
};

// WalletConnectSharp.Network.Models.RpcRequestOptionsAttribute
struct RpcRequestOptionsAttribute_t6401E7B8487A10FBDB0BB15BD0FD4233897174FF  : public RpcOptionsAttribute_t2286689827674F2046E54EEDE422382B5BDB0A82
{
};

// WalletConnectSharp.Network.Models.RpcResponseOptionsAttribute
struct RpcResponseOptionsAttribute_t8D56A4DDD2881C4D6091340A1B6470628D4133D7  : public RpcOptionsAttribute_t2286689827674F2046E54EEDE422382B5BDB0A82
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// System.OperatingSystem
struct OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557  : public RuntimeObject
{
	// System.Version System.OperatingSystem::_version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____version_0;
	// System.PlatformID System.OperatingSystem::_platform
	int32_t ____platform_1;
	// System.String System.OperatingSystem::_servicePack
	String_t* ____servicePack_2;
	// System.String System.OperatingSystem::_versionString
	String_t* ____versionString_3;
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

// WalletConnectSharp.Common.Model.Errors.WalletConnectException
struct WalletConnectException_t9CBCE981FDAC7DC8072A3D9E9F941CC2B56A5BA8  : public Exception_t
{
	// System.UInt32 WalletConnectSharp.Common.Model.Errors.WalletConnectException::<Code>k__BackingField
	uint32_t ___U3CCodeU3Ek__BackingField_18;
	// System.String WalletConnectSharp.Common.Model.Errors.WalletConnectException::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_19;
};

// System.EventHandler`1<System.Exception>
struct EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE  : public MulticastDelegate_t
{
};

// System.EventHandler`1<WalletConnectSharp.Network.IJsonRpcConnection>
struct EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C  : public MulticastDelegate_t
{
};

// System.EventHandler`1<WalletConnectSharp.Network.Models.JsonRpcPayload>
struct EventHandler_1_t4AAB334E60528D35FBC25EDD898C5F2EF6194F66  : public MulticastDelegate_t
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

// System.EventHandler`1<WalletConnectSharp.Common.Model.Errors.WalletConnectException>
struct EventHandler_1_t9329BBDFB85E6FCD59BCEA56CB42E93CDF693156  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__33
struct U3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5 
{
	// System.Int32 WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__33::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// WalletConnectSharp.Network.JsonRpcProvider WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__33::<>4__this
	JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* ___U3CU3E4__this_2;
	// WalletConnectSharp.Network.IJsonRpcConnection WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__33::connection
	RuntimeObject* ___connection_3;
	// System.Runtime.CompilerServices.TaskAwaiter WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__33::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_4;
};

// WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__35
struct U3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336 
{
	// System.Int32 WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__35::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// WalletConnectSharp.Network.JsonRpcProvider WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__35::<>4__this
	JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__35::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// WalletConnectSharp.Network.JsonRpcProvider/<Disconnect>d__36
struct U3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7 
{
	// System.Int32 WalletConnectSharp.Network.JsonRpcProvider/<Disconnect>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder WalletConnectSharp.Network.JsonRpcProvider/<Disconnect>d__36::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// WalletConnectSharp.Network.JsonRpcProvider WalletConnectSharp.Network.JsonRpcProvider/<Disconnect>d__36::<>4__this
	JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter WalletConnectSharp.Network.JsonRpcProvider/<Disconnect>d__36::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// WalletConnectSharp.Common.Events.EventHandlerMap`1<System.String>

// WalletConnectSharp.Common.Events.EventHandlerMap`1<System.String>

// WalletConnectSharp.Common.Events.EventHandlerMap`1<WalletConnectSharp.Common.Model.Errors.WalletConnectException>

// WalletConnectSharp.Common.Events.EventHandlerMap`1<WalletConnectSharp.Common.Model.Errors.WalletConnectException>

// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>

// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>

// System.Attribute

// System.Attribute

// System.Text.RegularExpressions.Capture

// System.Text.RegularExpressions.Capture

// WalletConnectSharp.Network.Models.Error
struct Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2_StaticFields
{
	// System.Collections.Generic.IEqualityComparer`1<WalletConnectSharp.Network.Models.Error> WalletConnectSharp.Network.Models.Error::<CodeMessageDataComparer>k__BackingField
	RuntimeObject* ___U3CCodeMessageDataComparerU3Ek__BackingField_3;
};

// WalletConnectSharp.Network.Models.Error

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.EventArgs

// WalletConnectSharp.Common.Events.GenericEventHolder

// WalletConnectSharp.Common.Events.GenericEventHolder

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_StaticFields
{
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BooleanTypes_4;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___NumberTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BigIntegerTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BytesTypes_13;
};

// Newtonsoft.Json.Linq.JToken

// WalletConnectSharp.Network.Models.JsonRpcError

// WalletConnectSharp.Network.Models.JsonRpcError

// WalletConnectSharp.Network.Models.JsonRpcPayload

// WalletConnectSharp.Network.Models.JsonRpcPayload

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// WalletConnectSharp.Network.RelayUrlBuilder

// WalletConnectSharp.Network.RelayUrlBuilder

// WalletConnectSharp.Common.SDKConstants
struct SDKConstants_t7A28B12CC8BD6837A353E7CA8D5DE811292792CA_StaticFields
{
	// System.String WalletConnectSharp.Common.SDKConstants::SDK_VERSION
	String_t* ___SDK_VERSION_0;
};

// WalletConnectSharp.Common.SDKConstants

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

// WalletConnectSharp.Network.Validation

// WalletConnectSharp.Network.Validation

// System.Version

// System.Version

// WalletConnectSharp.Network.Models.Error/CodeMessageDataEqualityComparer

// WalletConnectSharp.Network.Models.Error/CodeMessageDataEqualityComparer

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Boolean>

// System.ValueTuple`2<System.Object,System.Object>

// System.ValueTuple`2<System.Object,System.Object>

// System.ValueTuple`2<System.String,System.String>

// System.ValueTuple`2<System.String,System.String>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// Microsoft.CodeAnalysis.EmbeddedAttribute

// Microsoft.CodeAnalysis.EmbeddedAttribute

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

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

// System.Collections.Specialized.NameValueCollection

// System.Collections.Specialized.NameValueCollection

// System.Runtime.CompilerServices.RefSafetyRulesAttribute

// System.Runtime.CompilerServices.RefSafetyRulesAttribute

// WalletConnectSharp.Network.Models.RpcMethodAttribute

// WalletConnectSharp.Network.Models.RpcMethodAttribute

// WalletConnectSharp.Network.Models.RpcOptionsAttribute

// WalletConnectSharp.Network.Models.RpcOptionsAttribute

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// WalletConnectSharp.Common.Model.Errors.ErrorType

// WalletConnectSharp.Common.Model.Errors.ErrorType

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// WalletConnectSharp.Network.JsonRpcProvider

// WalletConnectSharp.Network.JsonRpcProvider

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// System.Text.RegularExpressions.Match

// System.PlatformID

// System.PlatformID

// System.Text.RegularExpressions.RegexOptions

// System.Text.RegularExpressions.RegexOptions

// WalletConnectSharp.Network.Models.RpcRequestOptionsAttribute

// WalletConnectSharp.Network.Models.RpcRequestOptionsAttribute

// WalletConnectSharp.Network.Models.RpcResponseOptionsAttribute

// WalletConnectSharp.Network.Models.RpcResponseOptionsAttribute

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.StringSplitOptions

// System.StringSplitOptions

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

// System.OperatingSystem

// System.OperatingSystem

// System.Type
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

// System.Type

// WalletConnectSharp.Common.Model.Errors.WalletConnectException

// WalletConnectSharp.Common.Model.Errors.WalletConnectException

// System.EventHandler`1<System.Exception>

// System.EventHandler`1<System.Exception>

// System.EventHandler`1<WalletConnectSharp.Network.IJsonRpcConnection>

// System.EventHandler`1<WalletConnectSharp.Network.IJsonRpcConnection>

// System.EventHandler`1<WalletConnectSharp.Network.Models.JsonRpcPayload>

// System.EventHandler`1<WalletConnectSharp.Network.Models.JsonRpcPayload>

// System.EventHandler`1<System.Object>

// System.EventHandler`1<System.Object>

// System.EventHandler`1<System.String>

// System.EventHandler`1<System.String>

// System.EventHandler`1<WalletConnectSharp.Common.Model.Errors.WalletConnectException>

// System.EventHandler`1<WalletConnectSharp.Common.Model.Errors.WalletConnectException>

// System.ArgumentException

// System.ArgumentException

// System.EventHandler

// System.EventHandler

// System.IO.IOException

// System.IO.IOException

// WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__33

// WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__33

// WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__35

// WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__35

// WalletConnectSharp.Network.JsonRpcProvider/<Disconnect>d__36

// WalletConnectSharp.Network.JsonRpcProvider/<Disconnect>d__36
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


// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_gshared (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__33>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5_mD01FA213918211361C9427D21367C708C82728E4_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_sender, RuntimeObject* ___1_e, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_gshared (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, bool ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__35>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336_m4B64F3AD984BDA909A65BA9BF9832F9B7EE33EC7_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Network.JsonRpcProvider/<Disconnect>d__36>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7_mF9B46F6DA2D3422C282BA40453DB226BF977701F_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared (String_t* ___0_value, const RuntimeMethod* method) ;
// WalletConnectSharp.Common.Events.EventHandlerMap`1<T> WalletConnectSharp.Common.Events.GenericEventHolder::OfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventHandlerMap_1_tFC7E099D7EF8022E7CBA294D9D7EAD879D74E0AE* GenericEventHolder_OfType_TisRuntimeObject_m72221C2D2E63A883C78A11B9B216A06610E2CEB0_gshared (GenericEventHolder_t76AAFFBC8A1D3255353D5F9842412D4AD62CBAF1* __this, const RuntimeMethod* method) ;
// System.EventHandler`1<TEventArgs> WalletConnectSharp.Common.Events.EventHandlerMap`1<System.Object>::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* EventHandlerMap_1_get_Item_m38FEF3C11EF9DE8FF1B79060AF6B4921E0703555_gshared (EventHandlerMap_1_tFC7E099D7EF8022E7CBA294D9D7EAD879D74E0AE* __this, String_t* ___0_eventId, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__33>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5_mEF18CF9AFD81F62F0159E77D168E315A25035581_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__35>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336_m11C65FDD94B8B8980CAB512BA9573F4B9072E086_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Network.JsonRpcProvider/<Disconnect>d__36>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7_m2E3259283EE5E7EB7E8E7DE8471C584D00A6F2CC_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Object,System.Object>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m4D25F4A0A0085EBE6559B6CC932AA5E267DB554D_gshared (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, RuntimeObject* ___0_item1, RuntimeObject* ___1_item2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.HashCode::Combine<System.Int64,System.Object,System.Object>(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCode_Combine_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisRuntimeObject_TisRuntimeObject_m3BFF3B5E1699F85F0F7308760AD9DCB856A6A86C_gshared (int64_t ___0_value1, RuntimeObject* ___1_value2, RuntimeObject* ___2_value3, const RuntimeMethod* method) ;
// T Newtonsoft.Json.Linq.JToken::ToObject<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JToken_ToObject_TisRuntimeObject_m60590FEF9C8FE15CB8D077C39B8E852F4C34E872_gshared (JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline)(__this, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
inline void TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646 (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_gshared)(__this, method);
}
// System.Void WalletConnectSharp.Common.Events.GenericEventHolder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEventHolder__ctor_mDC8840BB2935B57104FF6EC9BE57E1DDA0AF9F11 (GenericEventHolder_t76AAFFBC8A1D3255353D5F9842412D4AD62CBAF1* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.JsonRpcProvider::RegisterEventListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcProvider_RegisterEventListeners_mA9D50B5FE0A501566255066977DA3E17DC2DC766 (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__33>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5_mD01FA213918211361C9427D21367C708C82728E4 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5_mD01FA213918211361C9427D21367C708C82728E4_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Common.Logging.WCLogger::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WCLogger_Log_m3FEF2454D6D6B821509E030E2026329EC8BBD1C5 (String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WalletConnectSharp.Network.IJsonRpcConnection>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m4387351FD720E9AF0491960E49FD6D9C1682B448_inline (EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* __this, RuntimeObject* ___0_sender, RuntimeObject* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448 (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, bool ___0_result, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, bool, const RuntimeMethod*))TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_gshared)(__this, ___0_result, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__35>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336_m4B64F3AD984BDA909A65BA9BF9832F9B7EE33EC7 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336_m4B64F3AD984BDA909A65BA9BF9832F9B7EE33EC7_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<WalletConnectSharp.Network.JsonRpcProvider/<Disconnect>d__36>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7_mF9B46F6DA2D3422C282BA40453DB226BF977701F (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7_mF9B46F6DA2D3422C282BA40453DB226BF977701F_gshared)(__this, ___0_stateMachine, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mA8ACECDE40354784B5D51AF202A57A673BF3F90A (EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Exception>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mFC6BB12FC2C0F483763930B428CFC497E57D41FE (EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___0_object, ___1_method, method);
}
// System.String WalletConnectSharp.Network.JsonRpcProvider::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonRpcProvider_get_Context_mB32ED29EE852B1DC2A930FFAEA266EFD9352268C (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Exception>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m888792B4544DF26E2DD65593C4BD6D701ADF224C_inline (EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* __this, RuntimeObject* ___0_sender, Exception_t* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE*, RuntimeObject*, Exception_t*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<WalletConnectSharp.Network.Models.JsonRpcPayload>(System.String)
inline JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* JsonConvert_DeserializeObject_TisJsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F_m72EAAD3632514BC05F3D5213824943DC961478C9 (String_t* ___0_value, const RuntimeMethod* method)
{
	return ((  JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared)(___0_value, method);
}
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int64 WalletConnectSharp.Network.Models.JsonRpcPayload::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t JsonRpcPayload_get_Id_m6A3CB9236DBB12B3771C559A47C126316AFC14C2_inline (JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.Models.JsonRpcPayload::set_Id(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonRpcPayload_set_Id_mAB11EFF69CA9E2287EC37C41F84E5666D42B21B1_inline (JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WalletConnectSharp.Network.Models.JsonRpcPayload>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mBB57F775E551B0604C2D56EC666258F36799A12A_inline (EventHandler_1_t4AAB334E60528D35FBC25EDD898C5F2EF6194F66* __this, RuntimeObject* ___0_sender, JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t4AAB334E60528D35FBC25EDD898C5F2EF6194F66*, RuntimeObject*, JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Boolean WalletConnectSharp.Network.Models.JsonRpcPayload::get_IsRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonRpcPayload_get_IsRequest_m71EFBADA83DAF685C2D750CB7EAD02AAC3FE2601 (JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.String>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mBA1183044DF9B66B4444D461008A62929C4DB1A5_inline (EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* __this, RuntimeObject* ___0_sender, String_t* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4*, RuntimeObject*, String_t*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Boolean WalletConnectSharp.Network.Models.JsonRpcPayload::get_IsError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonRpcPayload_get_IsError_m4D437D87C543D4DD7CF216AD26BBCCCDAFE0991C (JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* __this, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<WalletConnectSharp.Network.Models.JsonRpcError>(System.String)
inline JsonRpcError_t4B522B6901C42383D05ACFCB3E12295CEE258536* JsonConvert_DeserializeObject_TisJsonRpcError_t4B522B6901C42383D05ACFCB3E12295CEE258536_m89269DED5FFF4E7D63C6ED565629B5B396A32235 (String_t* ___0_value, const RuntimeMethod* method)
{
	return ((  JsonRpcError_t4B522B6901C42383D05ACFCB3E12295CEE258536* (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared)(___0_value, method);
}
// WalletConnectSharp.Common.Events.EventHandlerMap`1<T> WalletConnectSharp.Common.Events.GenericEventHolder::OfType<WalletConnectSharp.Common.Model.Errors.WalletConnectException>()
inline EventHandlerMap_1_tB421B5244EA83E8618A5BE91A1FF904971630989* GenericEventHolder_OfType_TisWalletConnectException_t9CBCE981FDAC7DC8072A3D9E9F941CC2B56A5BA8_m1FBE69ACDC751B2BC1ED7C3E67B8B04888DE1639 (GenericEventHolder_t76AAFFBC8A1D3255353D5F9842412D4AD62CBAF1* __this, const RuntimeMethod* method)
{
	return ((  EventHandlerMap_1_tB421B5244EA83E8618A5BE91A1FF904971630989* (*) (GenericEventHolder_t76AAFFBC8A1D3255353D5F9842412D4AD62CBAF1*, const RuntimeMethod*))GenericEventHolder_OfType_TisRuntimeObject_m72221C2D2E63A883C78A11B9B216A06610E2CEB0_gshared)(__this, method);
}
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.EventHandler`1<TEventArgs> WalletConnectSharp.Common.Events.EventHandlerMap`1<WalletConnectSharp.Common.Model.Errors.WalletConnectException>::get_Item(System.String)
inline EventHandler_1_t9329BBDFB85E6FCD59BCEA56CB42E93CDF693156* EventHandlerMap_1_get_Item_m1095F93432B2914E79181BA9E5A88B1E969E0E44 (EventHandlerMap_1_tB421B5244EA83E8618A5BE91A1FF904971630989* __this, String_t* ___0_eventId, const RuntimeMethod* method)
{
	return ((  EventHandler_1_t9329BBDFB85E6FCD59BCEA56CB42E93CDF693156* (*) (EventHandlerMap_1_tB421B5244EA83E8618A5BE91A1FF904971630989*, String_t*, const RuntimeMethod*))EventHandlerMap_1_get_Item_m38FEF3C11EF9DE8FF1B79060AF6B4921E0703555_gshared)(__this, ___0_eventId, method);
}
// WalletConnectSharp.Network.Models.Error WalletConnectSharp.Network.Models.JsonRpcError::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* JsonRpcError_get_Error_m72A72D92951D79F61B30FAF8E1E806D275D00B3F_inline (JsonRpcError_t4B522B6901C42383D05ACFCB3E12295CEE258536* __this, const RuntimeMethod* method) ;
// WalletConnectSharp.Common.Model.Errors.WalletConnectException WalletConnectSharp.Network.Models.Error::ToException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WalletConnectException_t9CBCE981FDAC7DC8072A3D9E9F941CC2B56A5BA8* Error_ToException_mC62148C388F89717BA8CD774119924C69FFB7C16 (Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WalletConnectSharp.Common.Model.Errors.WalletConnectException>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m51ED7B6B2ED89C20FE78A800983675CECE6F39D4_inline (EventHandler_1_t9329BBDFB85E6FCD59BCEA56CB42E93CDF693156* __this, RuntimeObject* ___0_sender, WalletConnectException_t9CBCE981FDAC7DC8072A3D9E9F941CC2B56A5BA8* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t9329BBDFB85E6FCD59BCEA56CB42E93CDF693156*, RuntimeObject*, WalletConnectException_t9CBCE981FDAC7DC8072A3D9E9F941CC2B56A5BA8*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// WalletConnectSharp.Common.Events.EventHandlerMap`1<T> WalletConnectSharp.Common.Events.GenericEventHolder::OfType<System.String>()
inline EventHandlerMap_1_t0AE57E6C727720119728463858340241CEB74325* GenericEventHolder_OfType_TisString_t_m81C85E79777B42F2559E02A8CADD11D2BEFF1397 (GenericEventHolder_t76AAFFBC8A1D3255353D5F9842412D4AD62CBAF1* __this, const RuntimeMethod* method)
{
	return ((  EventHandlerMap_1_t0AE57E6C727720119728463858340241CEB74325* (*) (GenericEventHolder_t76AAFFBC8A1D3255353D5F9842412D4AD62CBAF1*, const RuntimeMethod*))GenericEventHolder_OfType_TisRuntimeObject_m72221C2D2E63A883C78A11B9B216A06610E2CEB0_gshared)(__this, method);
}
// System.EventHandler`1<TEventArgs> WalletConnectSharp.Common.Events.EventHandlerMap`1<System.String>::get_Item(System.String)
inline EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* EventHandlerMap_1_get_Item_m7E1C02E580C2B2B441046B8841EF4B96ADB03E05 (EventHandlerMap_1_t0AE57E6C727720119728463858340241CEB74325* __this, String_t* ___0_eventId, const RuntimeMethod* method)
{
	return ((  EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* (*) (EventHandlerMap_1_t0AE57E6C727720119728463858340241CEB74325*, String_t*, const RuntimeMethod*))EventHandlerMap_1_get_Item_m38FEF3C11EF9DE8FF1B79060AF6B4921E0703555_gshared)(__this, ___0_eventId, method);
}
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.JsonRpcProvider::UnregisterEventListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcProvider_UnregisterEventListeners_mB5554C04F1B42B1BFE6D583C40DF7E22CFDF4A0D (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__33>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5_mEF18CF9AFD81F62F0159E77D168E315A25035581 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5_mEF18CF9AFD81F62F0159E77D168E315A25035581_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.JsonRpcProvider::FinalizeConnection(WalletConnectSharp.Network.IJsonRpcConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcProvider_FinalizeConnection_mA7DDB0156F200221EFF2E2355933FEA68E1DB90D (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, RuntimeObject* ___0_connection, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectU3Ed__33_MoveNext_mB992080587BF451E6630D46F6A6B73028724FECF (U3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectU3Ed__33_SetStateMachine_m3A8DD1A9A9C8199665F1E572C8395A8AFA2BAB77 (U3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task WalletConnectSharp.Network.JsonRpcProvider::Connect(WalletConnectSharp.Network.IJsonRpcConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* JsonRpcProvider_Connect_m373791E2A59875ABB655A53EC8355D80375D783B (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, RuntimeObject* ___0_connection, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__35>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336_m11C65FDD94B8B8980CAB512BA9573F4B9072E086 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336_m11C65FDD94B8B8980CAB512BA9573F4B9072E086_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectU3Ed__35_MoveNext_mFD07069E4A4BDD6FB18F441572C2BFF8C76810E7 (U3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__35::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectU3Ed__35_SetStateMachine_m98247FEB6282F674D21EBA483DAF86B88CE7C271 (U3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,WalletConnectSharp.Network.JsonRpcProvider/<Disconnect>d__36>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7_m2E3259283EE5E7EB7E8E7DE8471C584D00A6F2CC (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7_m2E3259283EE5E7EB7E8E7DE8471C584D00A6F2CC_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void WalletConnectSharp.Network.JsonRpcProvider/<Disconnect>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisconnectU3Ed__36_MoveNext_m2A0EF1C93BA7ED4D88FFE6EE45C6D4E21BD8AC98 (U3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7* __this, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.JsonRpcProvider/<Disconnect>d__36::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisconnectU3Ed__36_SetStateMachine_m1224CE31FB9957DB8A841025E84767AD3FB7052C (U3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB (String_t* __this, String_t* ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Collections.Specialized.NameValueCollection WalletConnectSharp.Common.Utils.UrlUtils::ParseQs(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* UrlUtils_ParseQs_mCFBD651424EC5DD5353D5116E548491821C76B11 (String_t* ___0_queryString, const RuntimeMethod* method) ;
// System.String WalletConnectSharp.Common.Utils.UrlUtils::StringifyQs(System.Collections.Specialized.NameValueCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UrlUtils_StringifyQs_mC05DE1C804F93D613ECDE1056B323AA709DB6037 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ___0_params, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.OperatingSystem System.Environment::get_OSVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557* Environment_get_OSVersion_mDDD265F5864A2086664CAE56D7C4B59E9A50AF66 (const RuntimeMethod* method) ;
// System.PlatformID System.OperatingSystem::get_Platform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OperatingSystem_get_Platform_m01AF3D6217E4031C3AA824481BBE9E2933347E26_inline (OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.Version System.OperatingSystem::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* OperatingSystem_get_Version_m535655B606064F2D5E20452DC2258338B59DA9F6_inline (OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557* __this, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.String,System.String>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_mEA682AE0DEB0D89054EB55197618D6C2C4A60CE7 (ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91* __this, String_t* ___0_item1, String_t* ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91*, String_t*, String_t*, const RuntimeMethod*))ValueTuple_2__ctor_m4D25F4A0A0085EBE6559B6CC932AA5E267DB554D_gshared)(__this, ___0_item1, ___1_item2, method);
}
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_m5C2BB28FCDF18C58EB69B0B38B449A9C248C84EB (String_t* ___0_input, String_t* ___1_pattern, int32_t ___2_options, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.String WalletConnectSharp.Network.Validation::GetUrlProtocol(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Validation_GetUrlProtocol_mEBEB0949829950E918A9FC5AF68A6166AE27BEE0 (String_t* ___0_url, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Regex_IsMatch_m66D13054C7992322810B0CFC6B46AF11A927C9AA (String_t* ___0_input, String_t* ___1_pattern, const RuntimeMethod* method) ;
// System.Boolean WalletConnectSharp.Network.Validation::MatchRegexProtocol(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Validation_MatchRegexProtocol_m5CE0F56607C3A24207D1B9EF0F7D7F292C0109D6 (String_t* ___0_url, String_t* ___1_regex, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// WalletConnectSharp.Network.Models.Error WalletConnectSharp.Network.Models.Error::FromErrorType(WalletConnectSharp.Common.Model.Errors.ErrorType,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* Error_FromErrorType_mCC6F63C48ABB44F2CB11978B9948632D35C90174 (uint32_t ___0_type, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___1_params, String_t* ___2_extraData, const RuntimeMethod* method) ;
// System.String WalletConnectSharp.Common.Model.Errors.SdkErrors::MessageFromType(WalletConnectSharp.Common.Model.Errors.ErrorType,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SdkErrors_MessageFromType_mA51D53A36173142705919319C683EBD5BDC6408A (uint32_t ___0_type, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___1_params, const RuntimeMethod* method) ;
// System.Void WalletConnectSharp.Network.Models.Error::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Error__ctor_m00FB88242378E01ECAACBDB760ADCB07F0214D5E (Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* __this, const RuntimeMethod* method) ;
// System.UInt32 WalletConnectSharp.Common.Model.Errors.WalletConnectException::get_Code()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WalletConnectException_get_Code_mE5638A9357E5B11D1BC37B694447A37EE71F25E6_inline (WalletConnectException_t9CBCE981FDAC7DC8072A3D9E9F941CC2B56A5BA8* __this, const RuntimeMethod* method) ;
// WalletConnectSharp.Common.Model.Errors.WalletConnectException WalletConnectSharp.Common.Model.Errors.WalletConnectException::FromType(WalletConnectSharp.Common.Model.Errors.ErrorType,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WalletConnectException_t9CBCE981FDAC7DC8072A3D9E9F941CC2B56A5BA8* WalletConnectException_FromType_mB9C37E5D20E2FD7067A7CA0D4C4CADAB6F731BD6 (uint32_t ___0_type, String_t* ___1_message, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___2_params, Exception_t* ___3_innerException, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Boolean WalletConnectSharp.Network.Models.Error::Equals(WalletConnectSharp.Network.Models.Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Error_Equals_mB11574AC2E4AF897C5F03A2543330B6AC719C3F2 (Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* __this, Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* ___0_other, const RuntimeMethod* method) ;
// System.Int32 System.HashCode::Combine<System.Int64,System.String,System.String>(T1,T2,T3)
inline int32_t HashCode_Combine_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisString_t_TisString_t_m9B77A28C41BEC2562AA1B7148215FF6C1CB8E63B (int64_t ___0_value1, String_t* ___1_value2, String_t* ___2_value3, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int64_t, String_t*, String_t*, const RuntimeMethod*))HashCode_Combine_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisRuntimeObject_TisRuntimeObject_m3BFF3B5E1699F85F0F7308760AD9DCB856A6A86C_gshared)(___0_value1, ___1_value2, ___2_value3, method);
}
// System.Void WalletConnectSharp.Network.Models.Error/CodeMessageDataEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeMessageDataEqualityComparer__ctor_mD1BE334F93BC33FCBB590D5E8E4896ACBE7C7C89 (CodeMessageDataEqualityComparer_tDE98AE6BACCACADCD8FA9578CDDCACC45A657631* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// T Newtonsoft.Json.Linq.JToken::ToObject<System.String>()
inline String_t* JToken_ToObject_TisString_t_m24A2444CF94E8759ECB9DA2C94349E16C95CFE48 (JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3*, const RuntimeMethod*))JToken_ToObject_TisRuntimeObject_m60590FEF9C8FE15CB8D077C39B8E852F4C34E872_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<WalletConnectSharp.Network.Models.RpcRequestOptionsAttribute>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisRpcRequestOptionsAttribute_t6401E7B8487A10FBDB0BB15BD0FD4233897174FF_mAD4AE4790E8A8E8DBD0ED45A36CD3E2DEB991EAB (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_gshared)(___0_source, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<WalletConnectSharp.Network.Models.RpcRequestOptionsAttribute>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RpcRequestOptionsAttribute_t6401E7B8487A10FBDB0BB15BD0FD4233897174FF* Enumerable_FirstOrDefault_TisRpcRequestOptionsAttribute_t6401E7B8487A10FBDB0BB15BD0FD4233897174FF_m9D91AA413C9F162F43E45EBFDA60B67ED498C30F (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RpcRequestOptionsAttribute_t6401E7B8487A10FBDB0BB15BD0FD4233897174FF* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m7DE546C4F58329C905F662422736A44C50268ECD_gshared)(___0_source, method);
}
// System.Void WalletConnectSharp.Network.Models.RpcOptionsAttribute::.ctor(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcOptionsAttribute__ctor_mA0DC7961CA7748D7C171D43C34378BBEE62ED614 (RpcOptionsAttribute_t2286689827674F2046E54EEDE422382B5BDB0A82* __this, int64_t ___0_ttl, int32_t ___1_tag, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mEF7F8DFFF7F34EF473EEB8E9D8B99E1F6351DEA2 (EmbeddedAttribute_t9F66A40ABC42541FE1142E572A038F66CECF3935* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefSafetyRulesAttribute__ctor_mE3DC2424B61BD8235B6779DC6AD74C82ECCADF8B (RefSafetyRulesAttribute_tB3BF5AD87CA31772A4B9ADF2620221C58F1107CC* __this, int32_t ___0_p, const RuntimeMethod* method) 
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
// System.Void WalletConnectSharp.Network.JsonRpcProvider::add_Connected(System.EventHandler`1<WalletConnectSharp.Network.IJsonRpcConnection>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcProvider_add_Connected_m40DB74A8AD665797BA0F6BB2F669134CADCBD33D (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* V_0 = NULL;
	EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* V_1 = NULL;
	EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* V_2 = NULL;
	{
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* L_0 = __this->___Connected_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* L_2 = V_1;
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C*)Castclass((RuntimeObject*)L_4, EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C_il2cpp_TypeInfo_var));
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C** L_5 = (EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C**)(&__this->___Connected_7);
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* L_6 = V_2;
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* L_7 = V_1;
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* L_9 = V_0;
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C*)L_9) == ((RuntimeObject*)(EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WalletConnectSharp.Network.JsonRpcProvider::remove_Connected(System.EventHandler`1<WalletConnectSharp.Network.IJsonRpcConnection>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcProvider_remove_Connected_m6EE13A83A09C7F38A559D809675C57B4FCAD14F8 (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* V_0 = NULL;
	EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* V_1 = NULL;
	EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* V_2 = NULL;
	{
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* L_0 = __this->___Connected_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* L_2 = V_1;
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C*)Castclass((RuntimeObject*)L_4, EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C_il2cpp_TypeInfo_var));
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C** L_5 = (EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C**)(&__this->___Connected_7);
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* L_6 = V_2;
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* L_7 = V_1;
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* L_9 = V_0;
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C*)L_9) == ((RuntimeObject*)(EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void WalletConnectSharp.Network.JsonRpcProvider::add_Disconnected(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcProvider_add_Disconnected_m8E080624591EA02DE7C9FC10579530EDADADB709 (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
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
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___Disconnected_8;
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
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82**)(&__this->___Disconnected_8);
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
// System.Void WalletConnectSharp.Network.JsonRpcProvider::remove_Disconnected(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcProvider_remove_Disconnected_m3C00A49AB07AE47960BFD199CBF62FDE82FA3DE6 (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___0_value, const RuntimeMethod* method) 
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
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___Disconnected_8;
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
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82** L_5 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82**)(&__this->___Disconnected_8);
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
// System.Void WalletConnectSharp.Network.JsonRpcProvider::add_ErrorReceived(System.EventHandler`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcProvider_add_ErrorReceived_m7ECBE0140BA2133B48285738879A4BD25CEC8FD5 (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* ___0_value, const RuntimeMethod* method) 
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
// System.Void WalletConnectSharp.Network.JsonRpcProvider::remove_ErrorReceived(System.EventHandler`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcProvider_remove_ErrorReceived_m2D37D9A99EDEB88D24A74348ACA71F5FB8F3552F (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* ___0_value, const RuntimeMethod* method) 
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
// System.Void WalletConnectSharp.Network.JsonRpcProvider::add_RawMessageReceived(System.EventHandler`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcProvider_add_RawMessageReceived_mC57CE9460FD7EE3745C42A053CC81A86000CB074 (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* ___0_value, const RuntimeMethod* method) 
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
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_0 = __this->___RawMessageReceived_10;
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
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4** L_5 = (EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4**)(&__this->___RawMessageReceived_10);
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
// System.Void WalletConnectSharp.Network.JsonRpcProvider::remove_RawMessageReceived(System.EventHandler`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcProvider_remove_RawMessageReceived_m5DBD444960281B094452AA8A8D7638B5E5BBF786 (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* ___0_value, const RuntimeMethod* method) 
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
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_0 = __this->___RawMessageReceived_10;
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
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4** L_5 = (EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4**)(&__this->___RawMessageReceived_10);
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
// System.Boolean WalletConnectSharp.Network.JsonRpcProvider::get_IsConnecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonRpcProvider_get_IsConnecting_mDD34CE67753388658F544EA3E473451DE9144A3B (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____connectingStarted_3;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_1 = __this->___Connecting_4;
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_2;
		L_2 = TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline(L_1, TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		bool L_3;
		L_3 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_2, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_001c:
	{
		return (bool)0;
	}
}
// WalletConnectSharp.Network.IJsonRpcConnection WalletConnectSharp.Network.JsonRpcProvider::get_Connection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonRpcProvider_get_Connection_m1DAD95E451A49A404F321380E9C5D4B30C26E3FE (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____connection_0;
		return L_0;
	}
}
// System.String WalletConnectSharp.Network.JsonRpcProvider::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonRpcProvider_get_Name_mB6BDB1998179879C79F8ED9041EC79AAC498797D (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral743BBE1761936A645416E0A29BDBB3B0F139F57C);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral743BBE1761936A645416E0A29BDBB3B0F139F57C;
	}
}
// System.String WalletConnectSharp.Network.JsonRpcProvider::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonRpcProvider_get_Context_mB32ED29EE852B1DC2A930FFAEA266EFD9352268C (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, const RuntimeMethod* method) 
{
	{
		Guid_t* L_0 = (Guid_t*)(&__this->____context_2);
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C(L_0, NULL);
		return L_1;
	}
}
// System.Void WalletConnectSharp.Network.JsonRpcProvider::.ctor(WalletConnectSharp.Network.IJsonRpcConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcProvider__ctor_mE44152778E1CA3078DEF097A8400F0CE7B1698F3 (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, RuntimeObject* ___0_connection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericEventHolder_t76AAFFBC8A1D3255353D5F9842412D4AD62CBAF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_0 = (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*)il2cpp_codegen_object_new(TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646(L_0, TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		__this->___Connecting_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Connecting_4), (void*)L_0);
		GenericEventHolder_t76AAFFBC8A1D3255353D5F9842412D4AD62CBAF1* L_1 = (GenericEventHolder_t76AAFFBC8A1D3255353D5F9842412D4AD62CBAF1*)il2cpp_codegen_object_new(GenericEventHolder_t76AAFFBC8A1D3255353D5F9842412D4AD62CBAF1_il2cpp_TypeInfo_var);
		GenericEventHolder__ctor_mDC8840BB2935B57104FF6EC9BE57E1DDA0AF9F11(L_1, NULL);
		__this->___jsonResponseEventHolder_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jsonResponseEventHolder_11), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Guid_t L_2;
		L_2 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		__this->____context_2 = L_2;
		RuntimeObject* L_3 = ___0_connection;
		__this->____connection_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____connection_0), (void*)L_3);
		RuntimeObject* L_4 = __this->____connection_0;
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean WalletConnectSharp.Network.IJsonRpcConnection::get_Connected() */, IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_il2cpp_TypeInfo_var, L_4);
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		JsonRpcProvider_RegisterEventListeners_mA9D50B5FE0A501566255066977DA3E17DC2DC766(__this, NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.Threading.Tasks.Task WalletConnectSharp.Network.JsonRpcProvider::Connect(WalletConnectSharp.Network.IJsonRpcConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* JsonRpcProvider_Connect_m373791E2A59875ABB655A53EC8355D80375D783B (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, RuntimeObject* ___0_connection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5_mD01FA213918211361C9427D21367C708C82728E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5 V_0;
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
		RuntimeObject* L_1 = ___0_connection;
		(&V_0)->___connection_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___connection_3), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5_mD01FA213918211361C9427D21367C708C82728E4(L_2, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5_mD01FA213918211361C9427D21367C708C82728E4_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_3, NULL);
		return L_4;
	}
}
// System.Void WalletConnectSharp.Network.JsonRpcProvider::FinalizeConnection(WalletConnectSharp.Network.IJsonRpcConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcProvider_FinalizeConnection_mA7DDB0156F200221EFF2E2355933FEA68E1DB90D (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, RuntimeObject* ___0_connection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A97300E0ACA4739A7E451AC92B819A8F3FA32BD);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* G_B2_0 = NULL;
	EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* G_B1_0 = NULL;
	{
		WCLogger_Log_m3FEF2454D6D6B821509E030E2026329EC8BBD1C5(_stringLiteral0A97300E0ACA4739A7E451AC92B819A8F3FA32BD, NULL);
		RuntimeObject* L_0 = ___0_connection;
		__this->____connection_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____connection_0), (void*)L_0);
		JsonRpcProvider_RegisterEventListeners_mA9D50B5FE0A501566255066977DA3E17DC2DC766(__this, NULL);
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* L_1 = __this->___Connected_7;
		EventHandler_1_t366E8240E110FF763062AA9C0EE621DADF53129C* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0023;
		}
	}
	{
		goto IL_002a;
	}

IL_0023:
	{
		RuntimeObject* L_3 = ___0_connection;
		EventHandler_1_Invoke_m4387351FD720E9AF0491960E49FD6D9C1682B448_inline(G_B2_0, __this, L_3, NULL);
	}

IL_002a:
	{
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_4 = __this->___Connecting_4;
		TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448(L_4, (bool)1, TaskCompletionSource_1_SetResult_mA4C94A8605B8E4A2646C0C2B08A3D373E1174448_RuntimeMethod_var);
		__this->____connectingStarted_3 = (bool)0;
		return;
	}
}
// System.Threading.Tasks.Task WalletConnectSharp.Network.JsonRpcProvider::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* JsonRpcProvider_Connect_m37086A72F06D3D05910ACBBC3AB65D47DC576CCB (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336_m4B64F3AD984BDA909A65BA9BF9832F9B7EE33EC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336 V_0;
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
		AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336_m4B64F3AD984BDA909A65BA9BF9832F9B7EE33EC7(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336_m4B64F3AD984BDA909A65BA9BF9832F9B7EE33EC7_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task WalletConnectSharp.Network.JsonRpcProvider::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* JsonRpcProvider_Disconnect_mC04077EB88DFCBCA9309CB096D4E4D8432880C6F (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7_mF9B46F6DA2D3422C282BA40453DB226BF977701F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7 V_0;
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
		AsyncTaskMethodBuilder_Start_TisU3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7_mF9B46F6DA2D3422C282BA40453DB226BF977701F(L_1, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7_mF9B46F6DA2D3422C282BA40453DB226BF977701F_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_2 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_2, NULL);
		return L_3;
	}
}
// System.Void WalletConnectSharp.Network.JsonRpcProvider::RegisterEventListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcProvider_RegisterEventListeners_mA9D50B5FE0A501566255066977DA3E17DC2DC766 (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonRpcProvider_OnConnectionDisconnected_m76FC97CB418CF040D730C8D69C0BCC96CCAF336F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonRpcProvider_OnConnectionError_mDE0263B2E8C73AECCABD3F965F5B6444A8A49587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonRpcProvider_OnPayload_m67295EDB659357C0E2A4F91C14F2C6BAE20183D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06922BBBC7488E061F5774492D20C1F96077B887);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____hasRegisteredEventListeners_1;
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
		RuntimeObject* L_1 = __this->____connection_0;
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral06922BBBC7488E061F5774492D20C1F96077B887, L_2, NULL);
		WCLogger_Log_m3FEF2454D6D6B821509E030E2026329EC8BBD1C5(L_3, NULL);
		RuntimeObject* L_4 = __this->____connection_0;
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_5 = (EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4*)il2cpp_codegen_object_new(EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mA8ACECDE40354784B5D51AF202A57A673BF3F90A(L_5, __this, (intptr_t)((void*)JsonRpcProvider_OnPayload_m67295EDB659357C0E2A4F91C14F2C6BAE20183D8_RuntimeMethod_var), NULL);
		InterfaceActionInvoker1< EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* >::Invoke(0 /* System.Void WalletConnectSharp.Network.IJsonRpcConnection::add_PayloadReceived(System.EventHandler`1<System.String>) */, IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->____connection_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_7 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_7, __this, (intptr_t)((void*)JsonRpcProvider_OnConnectionDisconnected_m76FC97CB418CF040D730C8D69C0BCC96CCAF336F_RuntimeMethod_var), NULL);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(2 /* System.Void WalletConnectSharp.Network.IJsonRpcConnection::add_Closed(System.EventHandler) */, IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->____connection_0;
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_9 = (EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE*)il2cpp_codegen_object_new(EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mFC6BB12FC2C0F483763930B428CFC497E57D41FE(L_9, __this, (intptr_t)((void*)JsonRpcProvider_OnConnectionError_mDE0263B2E8C73AECCABD3F965F5B6444A8A49587_RuntimeMethod_var), NULL);
		InterfaceActionInvoker1< EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* >::Invoke(4 /* System.Void WalletConnectSharp.Network.IJsonRpcConnection::add_ErrorReceived(System.EventHandler`1<System.Exception>) */, IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_il2cpp_TypeInfo_var, L_8, L_9);
		__this->____hasRegisteredEventListeners_1 = (bool)1;
		return;
	}
}
// System.Void WalletConnectSharp.Network.JsonRpcProvider::UnregisterEventListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcProvider_UnregisterEventListeners_mB5554C04F1B42B1BFE6D583C40DF7E22CFDF4A0D (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonRpcProvider_OnConnectionDisconnected_m76FC97CB418CF040D730C8D69C0BCC96CCAF336F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonRpcProvider_OnConnectionError_mDE0263B2E8C73AECCABD3F965F5B6444A8A49587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonRpcProvider_OnPayload_m67295EDB659357C0E2A4F91C14F2C6BAE20183D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42B98E8D3CDFD35E549499F496EDDFB083336897);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE4FDABA69AF20301DAC3F440FF491E1069955B0);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____hasRegisteredEventListeners_1;
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
		RuntimeObject* L_1 = __this->____connection_0;
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3;
		L_3 = JsonRpcProvider_get_Context_mB32ED29EE852B1DC2A930FFAEA266EFD9352268C(__this, NULL);
		String_t* L_4;
		L_4 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralAE4FDABA69AF20301DAC3F440FF491E1069955B0, L_2, _stringLiteral42B98E8D3CDFD35E549499F496EDDFB083336897, L_3, NULL);
		WCLogger_Log_m3FEF2454D6D6B821509E030E2026329EC8BBD1C5(L_4, NULL);
		RuntimeObject* L_5 = __this->____connection_0;
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_6 = (EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4*)il2cpp_codegen_object_new(EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mA8ACECDE40354784B5D51AF202A57A673BF3F90A(L_6, __this, (intptr_t)((void*)JsonRpcProvider_OnPayload_m67295EDB659357C0E2A4F91C14F2C6BAE20183D8_RuntimeMethod_var), NULL);
		InterfaceActionInvoker1< EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* >::Invoke(1 /* System.Void WalletConnectSharp.Network.IJsonRpcConnection::remove_PayloadReceived(System.EventHandler`1<System.String>) */, IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7 = __this->____connection_0;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_8 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_8, __this, (intptr_t)((void*)JsonRpcProvider_OnConnectionDisconnected_m76FC97CB418CF040D730C8D69C0BCC96CCAF336F_RuntimeMethod_var), NULL);
		InterfaceActionInvoker1< EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* >::Invoke(3 /* System.Void WalletConnectSharp.Network.IJsonRpcConnection::remove_Closed(System.EventHandler) */, IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_il2cpp_TypeInfo_var, L_7, L_8);
		RuntimeObject* L_9 = __this->____connection_0;
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_10 = (EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE*)il2cpp_codegen_object_new(EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE_il2cpp_TypeInfo_var);
		EventHandler_1__ctor_mFC6BB12FC2C0F483763930B428CFC497E57D41FE(L_10, __this, (intptr_t)((void*)JsonRpcProvider_OnConnectionError_mDE0263B2E8C73AECCABD3F965F5B6444A8A49587_RuntimeMethod_var), NULL);
		InterfaceActionInvoker1< EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* >::Invoke(5 /* System.Void WalletConnectSharp.Network.IJsonRpcConnection::remove_ErrorReceived(System.EventHandler`1<System.Exception>) */, IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_il2cpp_TypeInfo_var, L_9, L_10);
		__this->____hasRegisteredEventListeners_1 = (bool)0;
		return;
	}
}
// System.Void WalletConnectSharp.Network.JsonRpcProvider::OnConnectionError(System.Object,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcProvider_OnConnectionError_mDE0263B2E8C73AECCABD3F965F5B6444A8A49587 (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, RuntimeObject* ___0_sender, Exception_t* ___1_e, const RuntimeMethod* method) 
{
	EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* G_B2_0 = NULL;
	EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* G_B1_0 = NULL;
	{
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_0 = __this->___ErrorReceived_9;
		EventHandler_1_t509F741A4FD019BF57F8A8AE7D6DC3858B804BDE* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Exception_t* L_2 = ___1_e;
		EventHandler_1_Invoke_m888792B4544DF26E2DD65593C4BD6D701ADF224C_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void WalletConnectSharp.Network.JsonRpcProvider::OnConnectionDisconnected(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcProvider_OnConnectionDisconnected_m76FC97CB418CF040D730C8D69C0BCC96CCAF336F (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) 
{
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B2_0 = NULL;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* G_B1_0 = NULL;
	{
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_0 = __this->___Disconnected_8;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___1_e;
		EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(G_B2_0, __this, L_2, NULL);
		return;
	}
}
// System.Void WalletConnectSharp.Network.JsonRpcProvider::OnPayload(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcProvider_OnPayload_m67295EDB659357C0E2A4F91C14F2C6BAE20183D8 (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, RuntimeObject* ___0_sender, String_t* ___1_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandlerMap_1_get_Item_m1095F93432B2914E79181BA9E5A88B1E969E0E44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandlerMap_1_get_Item_m7E1C02E580C2B2B441046B8841EF4B96ADB03E05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericEventHolder_OfType_TisString_t_m81C85E79777B42F2559E02A8CADD11D2BEFF1397_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericEventHolder_OfType_TisWalletConnectException_t9CBCE981FDAC7DC8072A3D9E9F941CC2B56A5BA8_m1FBE69ACDC751B2BC1ED7C3E67B8B04888DE1639_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisJsonRpcError_t4B522B6901C42383D05ACFCB3E12295CEE258536_m89269DED5FFF4E7D63C6ED565629B5B396A32235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisJsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F_m72EAAD3632514BC05F3D5213824943DC961478C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A6906E03D11CBEEBFB057D6ABA2AF284C95E7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66C5ED5044469BB9500F2AE523253C93EE36A578);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DCA4F535A11276AF62FE26137F9B039FC7D24DD);
		s_Il2CppMethodInitialized = true;
	}
	JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* V_0 = NULL;
	JsonRpcError_t4B522B6901C42383D05ACFCB3E12295CEE258536* V_1 = NULL;
	int64_t V_2 = 0;
	EventHandler_1_t4AAB334E60528D35FBC25EDD898C5F2EF6194F66* G_B6_0 = NULL;
	EventHandler_1_t4AAB334E60528D35FBC25EDD898C5F2EF6194F66* G_B5_0 = NULL;
	EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* G_B10_0 = NULL;
	EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* G_B9_0 = NULL;
	{
		String_t* L_0 = ___1_json;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral66C5ED5044469BB9500F2AE523253C93EE36A578, L_0, NULL);
		WCLogger_Log_m3FEF2454D6D6B821509E030E2026329EC8BBD1C5(L_1, NULL);
		String_t* L_2 = ___1_json;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* L_3;
		L_3 = JsonConvert_DeserializeObject_TisJsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F_m72EAAD3632514BC05F3D5213824943DC961478C9(L_2, JsonConvert_DeserializeObject_TisJsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F_m72EAAD3632514BC05F3D5213824943DC961478C9_RuntimeMethod_var);
		V_0 = L_3;
		JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* L_4 = V_0;
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_5 = ___1_json;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B5873F28D8A7B11FFFBB32582218961DD3D0824)), L_5, NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_7 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonRpcProvider_OnPayload_m67295EDB659357C0E2A4F91C14F2C6BAE20183D8_RuntimeMethod_var)));
	}

IL_002b:
	{
		JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* L_8 = V_0;
		int64_t L_9;
		L_9 = JsonRpcPayload_get_Id_m6A3CB9236DBB12B3771C559A47C126316AFC14C2_inline(L_8, NULL);
		if (L_9)
		{
			goto IL_003f;
		}
	}
	{
		JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* L_10 = V_0;
		int64_t L_11 = __this->____lastId_5;
		JsonRpcPayload_set_Id_mAB11EFF69CA9E2287EC37C41F84E5666D42B21B1_inline(L_10, L_11, NULL);
	}

IL_003f:
	{
		JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* L_12 = V_0;
		int64_t L_13;
		L_13 = JsonRpcPayload_get_Id_m6A3CB9236DBB12B3771C559A47C126316AFC14C2_inline(L_12, NULL);
		int64_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16;
		L_16 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral9DCA4F535A11276AF62FE26137F9B039FC7D24DD, L_15, NULL);
		WCLogger_Log_m3FEF2454D6D6B821509E030E2026329EC8BBD1C5(L_16, NULL);
		EventHandler_1_t4AAB334E60528D35FBC25EDD898C5F2EF6194F66* L_17 = __this->___PayloadReceived_6;
		EventHandler_1_t4AAB334E60528D35FBC25EDD898C5F2EF6194F66* L_18 = L_17;
		G_B5_0 = L_18;
		if (L_18)
		{
			G_B6_0 = L_18;
			goto IL_0065;
		}
	}
	{
		goto IL_006c;
	}

IL_0065:
	{
		JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* L_19 = V_0;
		EventHandler_1_Invoke_mBB57F775E551B0604C2D56EC666258F36799A12A_inline(G_B6_0, __this, L_19, NULL);
	}

IL_006c:
	{
		JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* L_20 = V_0;
		bool L_21;
		L_21 = JsonRpcPayload_get_IsRequest_m71EFBADA83DAF685C2D750CB7EAD02AAC3FE2601(L_20, NULL);
		if (!L_21)
		{
			goto IL_0087;
		}
	}
	{
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_22 = __this->___RawMessageReceived_10;
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_23 = L_22;
		G_B9_0 = L_23;
		if (L_23)
		{
			G_B10_0 = L_23;
			goto IL_007f;
		}
	}
	{
		return;
	}

IL_007f:
	{
		String_t* L_24 = ___1_json;
		EventHandler_1_Invoke_mBA1183044DF9B66B4444D461008A62929C4DB1A5_inline(G_B10_0, __this, L_24, NULL);
		return;
	}

IL_0087:
	{
		JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* L_25 = V_0;
		bool L_26;
		L_26 = JsonRpcPayload_get_IsError_m4D437D87C543D4DD7CF216AD26BBCCCDAFE0991C(L_25, NULL);
		if (!L_26)
		{
			goto IL_00c6;
		}
	}
	{
		String_t* L_27 = ___1_json;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		JsonRpcError_t4B522B6901C42383D05ACFCB3E12295CEE258536* L_28;
		L_28 = JsonConvert_DeserializeObject_TisJsonRpcError_t4B522B6901C42383D05ACFCB3E12295CEE258536_m89269DED5FFF4E7D63C6ED565629B5B396A32235(L_27, JsonConvert_DeserializeObject_TisJsonRpcError_t4B522B6901C42383D05ACFCB3E12295CEE258536_m89269DED5FFF4E7D63C6ED565629B5B396A32235_RuntimeMethod_var);
		V_1 = L_28;
		GenericEventHolder_t76AAFFBC8A1D3255353D5F9842412D4AD62CBAF1* L_29 = __this->___jsonResponseEventHolder_11;
		EventHandlerMap_1_tB421B5244EA83E8618A5BE91A1FF904971630989* L_30;
		L_30 = GenericEventHolder_OfType_TisWalletConnectException_t9CBCE981FDAC7DC8072A3D9E9F941CC2B56A5BA8_m1FBE69ACDC751B2BC1ED7C3E67B8B04888DE1639(L_29, GenericEventHolder_OfType_TisWalletConnectException_t9CBCE981FDAC7DC8072A3D9E9F941CC2B56A5BA8_m1FBE69ACDC751B2BC1ED7C3E67B8B04888DE1639_RuntimeMethod_var);
		JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* L_31 = V_0;
		int64_t L_32;
		L_32 = JsonRpcPayload_get_Id_m6A3CB9236DBB12B3771C559A47C126316AFC14C2_inline(L_31, NULL);
		V_2 = L_32;
		String_t* L_33;
		L_33 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_2), NULL);
		EventHandler_1_t9329BBDFB85E6FCD59BCEA56CB42E93CDF693156* L_34;
		L_34 = EventHandlerMap_1_get_Item_m1095F93432B2914E79181BA9E5A88B1E969E0E44(L_30, L_33, EventHandlerMap_1_get_Item_m1095F93432B2914E79181BA9E5A88B1E969E0E44_RuntimeMethod_var);
		JsonRpcError_t4B522B6901C42383D05ACFCB3E12295CEE258536* L_35 = V_1;
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_36;
		L_36 = JsonRpcError_get_Error_m72A72D92951D79F61B30FAF8E1E806D275D00B3F_inline(L_35, NULL);
		WalletConnectException_t9CBCE981FDAC7DC8072A3D9E9F941CC2B56A5BA8* L_37;
		L_37 = Error_ToException_mC62148C388F89717BA8CD774119924C69FFB7C16(L_36, NULL);
		EventHandler_1_Invoke_m51ED7B6B2ED89C20FE78A800983675CECE6F39D4_inline(L_34, __this, L_37, NULL);
		return;
	}

IL_00c6:
	{
		JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* L_38 = V_0;
		int64_t L_39;
		L_39 = JsonRpcPayload_get_Id_m6A3CB9236DBB12B3771C559A47C126316AFC14C2_inline(L_38, NULL);
		V_2 = L_39;
		String_t* L_40;
		L_40 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_2), NULL);
		String_t* L_41;
		L_41 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3A6906E03D11CBEEBFB057D6ABA2AF284C95E7D0, L_40, NULL);
		WCLogger_Log_m3FEF2454D6D6B821509E030E2026329EC8BBD1C5(L_41, NULL);
		GenericEventHolder_t76AAFFBC8A1D3255353D5F9842412D4AD62CBAF1* L_42 = __this->___jsonResponseEventHolder_11;
		EventHandlerMap_1_t0AE57E6C727720119728463858340241CEB74325* L_43;
		L_43 = GenericEventHolder_OfType_TisString_t_m81C85E79777B42F2559E02A8CADD11D2BEFF1397(L_42, GenericEventHolder_OfType_TisString_t_m81C85E79777B42F2559E02A8CADD11D2BEFF1397_RuntimeMethod_var);
		JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* L_44 = V_0;
		int64_t L_45;
		L_45 = JsonRpcPayload_get_Id_m6A3CB9236DBB12B3771C559A47C126316AFC14C2_inline(L_44, NULL);
		V_2 = L_45;
		String_t* L_46;
		L_46 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_2), NULL);
		EventHandler_1_t83C9915D60A5A98644492E9A5FCDB1F68BC50FF4* L_47;
		L_47 = EventHandlerMap_1_get_Item_m7E1C02E580C2B2B441046B8841EF4B96ADB03E05(L_43, L_46, EventHandlerMap_1_get_Item_m7E1C02E580C2B2B441046B8841EF4B96ADB03E05_RuntimeMethod_var);
		String_t* L_48 = ___1_json;
		EventHandler_1_Invoke_mBA1183044DF9B66B4444D461008A62929C4DB1A5_inline(L_47, __this, L_48, NULL);
		return;
	}
}
// System.Void WalletConnectSharp.Network.JsonRpcProvider::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcProvider_Dispose_mAD833429FE55B4D89ED2B4D83FA5B1CE1D1E591A (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(20 /* System.Void WalletConnectSharp.Network.JsonRpcProvider::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void WalletConnectSharp.Network.JsonRpcProvider::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcProvider_Dispose_m93955A61C413201D798F1ACFD6827EA4AE56CA58 (JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	{
		bool L_0 = __this->___Disposed_12;
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
			goto IL_0023;
		}
	}
	{
		JsonRpcProvider_UnregisterEventListeners_mB5554C04F1B42B1BFE6D583C40DF7E22CFDF4A0D(__this, NULL);
		RuntimeObject* L_2 = __this->____connection_0;
		RuntimeObject* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001e;
		}
	}
	{
		goto IL_0023;
	}

IL_001e:
	{
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, G_B5_0);
	}

IL_0023:
	{
		__this->___Disposed_12 = (bool)1;
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
// System.Void WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectU3Ed__33_MoveNext_mB992080587BF451E6630D46F6A6B73028724FECF (U3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5_mEF18CF9AFD81F62F0159E77D168E315A25035581_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1448C991CB29C80DE66267344AF5DFF13DF6D55D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD53B6BB2C67D836C2A945076D6677489318B3F2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_009e_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0117_1;
			}
		}
		{
			JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* L_4 = V_1;
			RuntimeObject* L_5 = L_4->____connection_0;
			String_t* L_6;
			L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String WalletConnectSharp.Network.IJsonRpcConnection::get_Url() */, IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_il2cpp_TypeInfo_var, L_5);
			RuntimeObject* L_7 = __this->___connection_3;
			String_t* L_8;
			L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String WalletConnectSharp.Network.IJsonRpcConnection::get_Url() */, IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_il2cpp_TypeInfo_var, L_7);
			bool L_9;
			L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_8, NULL);
			if (!L_9)
			{
				goto IL_004a_1;
			}
		}
		{
			RuntimeObject* L_10 = __this->___connection_3;
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean WalletConnectSharp.Network.IJsonRpcConnection::get_Connected() */, IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_il2cpp_TypeInfo_var, L_10);
			if (!L_11)
			{
				goto IL_004a_1;
			}
		}
		{
			goto IL_015f;
		}

IL_004a_1:
		{
			JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* L_12 = V_1;
			RuntimeObject* L_13 = L_12->____connection_0;
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean WalletConnectSharp.Network.IJsonRpcConnection::get_Connected() */, IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_il2cpp_TypeInfo_var, L_13);
			if (!L_14)
			{
				goto IL_00c1_1;
			}
		}
		{
			WCLogger_Log_m3FEF2454D6D6B821509E030E2026329EC8BBD1C5(_stringLiteralCD53B6BB2C67D836C2A945076D6677489318B3F2, NULL);
			JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* L_15 = V_1;
			RuntimeObject* L_16 = L_15->____connection_0;
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_17;
			L_17 = InterfaceFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(12 /* System.Threading.Tasks.Task WalletConnectSharp.Network.IJsonRpcConnection::Close() */, IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_il2cpp_TypeInfo_var, L_16);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_18;
			L_18 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_17, NULL);
			V_2 = L_18;
			bool L_19;
			L_19 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_19)
			{
				goto IL_00ba_1;
			}
		}
		{
			int32_t L_20 = 0;
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_21 = V_2;
			__this->___U3CU3Eu__1_4 = L_21;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_22 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5_mEF18CF9AFD81F62F0159E77D168E315A25035581(L_22, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5_mEF18CF9AFD81F62F0159E77D168E315A25035581_RuntimeMethod_var);
			goto IL_0172;
		}

IL_009e_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_23 = __this->___U3CU3Eu__1_4;
			V_2 = L_23;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_24 = (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*)(&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_24, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_25 = (-1);
			V_0 = L_25;
			__this->___U3CU3E1__state_0 = L_25;
		}

IL_00ba_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
		}

IL_00c1_1:
		{
			JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* L_26 = V_1;
			TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_27 = (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*)il2cpp_codegen_object_new(TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
			TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646(L_27, TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
			L_26->___Connecting_4 = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&L_26->___Connecting_4), (void*)L_27);
			JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* L_28 = V_1;
			L_28->____connectingStarted_3 = (bool)1;
			WCLogger_Log_m3FEF2454D6D6B821509E030E2026329EC8BBD1C5(_stringLiteral1448C991CB29C80DE66267344AF5DFF13DF6D55D, NULL);
			RuntimeObject* L_29 = __this->___connection_3;
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
			L_30 = InterfaceFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(10 /* System.Threading.Tasks.Task WalletConnectSharp.Network.IJsonRpcConnection::Open() */, IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_il2cpp_TypeInfo_var, L_29);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_31;
			L_31 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_30, NULL);
			V_2 = L_31;
			bool L_32;
			L_32 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_32)
			{
				goto IL_0133_1;
			}
		}
		{
			int32_t L_33 = 1;
			V_0 = L_33;
			__this->___U3CU3E1__state_0 = L_33;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_34 = V_2;
			__this->___U3CU3Eu__1_4 = L_34;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_35 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5_mEF18CF9AFD81F62F0159E77D168E315A25035581(L_35, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5_mEF18CF9AFD81F62F0159E77D168E315A25035581_RuntimeMethod_var);
			goto IL_0172;
		}

IL_0117_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_36 = __this->___U3CU3Eu__1_4;
			V_2 = L_36;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_37 = (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*)(&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_37, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_38 = (-1);
			V_0 = L_38;
			__this->___U3CU3E1__state_0 = L_38;
		}

IL_0133_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* L_39 = V_1;
			RuntimeObject* L_40 = __this->___connection_3;
			JsonRpcProvider_FinalizeConnection_mA7DDB0156F200221EFF2E2355933FEA68E1DB90D(L_39, L_40, NULL);
			goto IL_015f;
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
		Exception_t* L_41 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_41;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_42 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_43 = V_3;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_42, L_43, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0172;
	}// end catch (depth: 1)

IL_015f:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_44 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_44, NULL);
	}

IL_0172:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CConnectU3Ed__33_MoveNext_mB992080587BF451E6630D46F6A6B73028724FECF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5*>(__this + _offset);
	U3CConnectU3Ed__33_MoveNext_mB992080587BF451E6630D46F6A6B73028724FECF(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectU3Ed__33_SetStateMachine_m3A8DD1A9A9C8199665F1E572C8395A8AFA2BAB77 (U3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C  void U3CConnectU3Ed__33_SetStateMachine_m3A8DD1A9A9C8199665F1E572C8395A8AFA2BAB77_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CConnectU3Ed__33_tDEBE2E545E671658E4A6AF8959FBBEC3501F7DC5*>(__this + _offset);
	U3CConnectU3Ed__33_SetStateMachine_m3A8DD1A9A9C8199665F1E572C8395A8AFA2BAB77(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__35::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectU3Ed__35_MoveNext_mFD07069E4A4BDD6FB18F441572C2BFF8C76810E7 (U3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336_m11C65FDD94B8B8980CAB512BA9573F4B9072E086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C6672D556D3488E95B6418804BD11D275A58F1F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0069_1;
			}
		}
		{
			JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* L_3 = V_1;
			RuntimeObject* L_4 = L_3->____connection_0;
			if (L_4)
			{
				goto IL_0024_1;
			}
		}
		{
			Exception_t* L_5 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
			Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9F2FFDA91733A106876B7CCD0BAA14B70537446C)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CConnectU3Ed__35_MoveNext_mFD07069E4A4BDD6FB18F441572C2BFF8C76810E7_RuntimeMethod_var)));
		}

IL_0024_1:
		{
			WCLogger_Log_m3FEF2454D6D6B821509E030E2026329EC8BBD1C5(_stringLiteral9C6672D556D3488E95B6418804BD11D275A58F1F, NULL);
			JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* L_6 = V_1;
			JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* L_7 = V_1;
			RuntimeObject* L_8 = L_7->____connection_0;
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
			L_9 = JsonRpcProvider_Connect_m373791E2A59875ABB655A53EC8355D80375D783B(L_6, L_8, NULL);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_10;
			L_10 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_9, NULL);
			V_2 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_11)
			{
				goto IL_0085_1;
			}
		}
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_13 = V_2;
			__this->___U3CU3Eu__1_3 = L_13;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_14 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336_m11C65FDD94B8B8980CAB512BA9573F4B9072E086(L_14, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336_m11C65FDD94B8B8980CAB512BA9573F4B9072E086_RuntimeMethod_var);
			goto IL_00b8;
		}

IL_0069_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_15 = __this->___U3CU3Eu__1_3;
			V_2 = L_15;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_16 = (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
		}

IL_0085_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			goto IL_00a5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008e;
		}
		throw e;
	}

CATCH_008e:
	{// begin catch(System.Exception)
		Exception_t* L_18 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_18;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_19 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_20 = V_3;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_19, L_20, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00b8;
	}// end catch (depth: 1)

IL_00a5:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_21 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_21, NULL);
	}

IL_00b8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CConnectU3Ed__35_MoveNext_mFD07069E4A4BDD6FB18F441572C2BFF8C76810E7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336*>(__this + _offset);
	U3CConnectU3Ed__35_MoveNext_mFD07069E4A4BDD6FB18F441572C2BFF8C76810E7(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Network.JsonRpcProvider/<Connect>d__35::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectU3Ed__35_SetStateMachine_m98247FEB6282F674D21EBA483DAF86B88CE7C271 (U3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C  void U3CConnectU3Ed__35_SetStateMachine_m98247FEB6282F674D21EBA483DAF86B88CE7C271_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CConnectU3Ed__35_t26A5B9EB0913061C1478287F71186D9D51459336*>(__this + _offset);
	U3CConnectU3Ed__35_SetStateMachine_m98247FEB6282F674D21EBA483DAF86B88CE7C271(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WalletConnectSharp.Network.JsonRpcProvider/<Disconnect>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisconnectU3Ed__36_MoveNext_m2A0EF1C93BA7ED4D88FFE6EE45C6D4E21BD8AC98 (U3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7_m2E3259283EE5E7EB7E8E7DE8471C584D00A6F2CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004b_1;
			}
		}
		{
			JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* L_3 = V_1;
			RuntimeObject* L_4 = L_3->____connection_0;
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
			L_5 = InterfaceFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(12 /* System.Threading.Tasks.Task WalletConnectSharp.Network.IJsonRpcConnection::Close() */, IJsonRpcConnection_t16B87468B62132A8CF536CE3F755F5910B31770B_il2cpp_TypeInfo_var, L_4);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_6;
			L_6 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_5, NULL);
			V_2 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_7)
			{
				goto IL_0067_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9 = V_2;
			__this->___U3CU3Eu__1_3 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_10 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7_m2E3259283EE5E7EB7E8E7DE8471C584D00A6F2CC(L_10, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7_m2E3259283EE5E7EB7E8E7DE8471C584D00A6F2CC_RuntimeMethod_var);
			goto IL_00a5;
		}

IL_004b_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_11 = __this->___U3CU3Eu__1_3;
			V_2 = L_11;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_12 = (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_0067_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			JsonRpcProvider_tCE0E6B1BE861B240887AFB73B308C79EFE4B0AC4* L_14 = V_1;
			TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_15 = (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*)il2cpp_codegen_object_new(TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
			TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646(L_15, TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
			L_14->___Connecting_4 = L_15;
			Il2CppCodeGenWriteBarrier((void**)(&L_14->___Connecting_4), (void*)L_15);
			goto IL_0092;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007b;
		}
		throw e;
	}

CATCH_007b:
	{// begin catch(System.Exception)
		Exception_t* L_16 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_16;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_17 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_18 = V_3;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_17, L_18, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00a5;
	}// end catch (depth: 1)

IL_0092:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_19 = (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)(&__this->___U3CU3Et__builder_1);
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_19, NULL);
	}

IL_00a5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CDisconnectU3Ed__36_MoveNext_m2A0EF1C93BA7ED4D88FFE6EE45C6D4E21BD8AC98_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7*>(__this + _offset);
	U3CDisconnectU3Ed__36_MoveNext_m2A0EF1C93BA7ED4D88FFE6EE45C6D4E21BD8AC98(_thisAdjusted, method);
}
// System.Void WalletConnectSharp.Network.JsonRpcProvider/<Disconnect>d__36::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisconnectU3Ed__36_SetStateMachine_m1224CE31FB9957DB8A841025E84767AD3FB7052C (U3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C  void U3CDisconnectU3Ed__36_SetStateMachine_m1224CE31FB9957DB8A841025E84767AD3FB7052C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CDisconnectU3Ed__36_tBBFDE065D71AC8A1EAAE4F03CEC11BDE219633D7*>(__this + _offset);
	U3CDisconnectU3Ed__36_SetStateMachine_m1224CE31FB9957DB8A841025E84767AD3FB7052C(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String WalletConnectSharp.Network.RelayUrlBuilder::FormatRelayRpcUrl(System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RelayUrlBuilder_FormatRelayRpcUrl_mF783F4D681884D68F43D2731D5324B0C107CAF6E (RelayUrlBuilder_tAA23FDAF9DC93EB0AD82BB9F696B7DB4A7A38642* __this, String_t* ___0_relayUrl, String_t* ___1_protocol, String_t* ___2_version, String_t* ___3_projectId, String_t* ___4_auth, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19A4DD21BBFD4F7063C65CBD5B8DEB0688B58B10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral595320BA056F8106150E19C7F57653801E2B706A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74CC3B7E957B3E7555158404BFDECEF3E64B046B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	String_t* V_1 = NULL;
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* G_B3_0 = NULL;
	{
		String_t* L_0 = ___0_relayUrl;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_0, _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900, 0, NULL);
		V_0 = L_1;
		String_t* L_2 = ___1_protocol;
		String_t* L_3 = ___2_version;
		String_t* L_4;
		L_4 = VirtualFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(6 /* System.String WalletConnectSharp.Network.RelayUrlBuilder::BuildUserAgent(System.String,System.String) */, __this, L_2, L_3);
		V_1 = L_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) > ((int32_t)1)))
		{
			goto IL_0023;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0026;
	}

IL_0023:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
		int32_t L_7 = 1;
		String_t* L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		G_B3_0 = L_8;
	}

IL_0026:
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_9;
		L_9 = UrlUtils_ParseQs_mCFBD651424EC5DD5353D5116E548491821C76B11(G_B3_0, NULL);
		V_2 = L_9;
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_10 = V_2;
		String_t* L_11 = ___4_auth;
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(15 /* System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String) */, L_10, _stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F, L_11);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_12 = V_2;
		String_t* L_13 = ___3_projectId;
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(15 /* System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String) */, L_12, _stringLiteral595320BA056F8106150E19C7F57653801E2B706A, L_13);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_14 = V_2;
		String_t* L_15 = V_1;
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(15 /* System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String) */, L_14, _stringLiteral19A4DD21BBFD4F7063C65CBD5B8DEB0688B58B10, L_15);
		bool L_16;
		L_16 = VirtualFuncInvoker1< bool, String_t** >::Invoke(9 /* System.Boolean WalletConnectSharp.Network.RelayUrlBuilder::TryGetOrigin(System.String&) */, __this, (&V_3));
		if (!L_16)
		{
			goto IL_0068;
		}
	}
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_17 = V_2;
		String_t* L_18 = V_3;
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(15 /* System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String) */, L_17, _stringLiteral74CC3B7E957B3E7555158404BFDECEF3E64B046B, L_18);
	}

IL_0068:
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_19 = V_2;
		String_t* L_20;
		L_20 = UrlUtils_StringifyQs_mC05DE1C804F93D613ECDE1056B323AA709DB6037(L_19, NULL);
		V_4 = L_20;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = V_0;
		int32_t L_22 = 0;
		String_t* L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		String_t* L_24 = V_4;
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_23, L_24, NULL);
		return L_25;
	}
}
// System.String WalletConnectSharp.Network.RelayUrlBuilder::BuildUserAgent(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RelayUrlBuilder_BuildUserAgent_mA847EB0023FFD5BF473E6951DD0255A2ABD29B27 (RelayUrlBuilder_tAA23FDAF9DC93EB0AD82BB9F696B7DB4A7A38642* __this, String_t* ___0_protocol, String_t* ___1_version, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91 L_0;
		L_0 = VirtualFuncInvoker0< ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91 >::Invoke(7 /* System.ValueTuple`2<System.String,System.String> WalletConnectSharp.Network.RelayUrlBuilder::GetOsInfo() */, __this);
		ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91 L_1 = L_0;
		String_t* L_2 = L_1.___Item1_0;
		V_0 = L_2;
		String_t* L_3 = L_1.___Item2_1;
		V_1 = L_3;
		ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91 L_4;
		L_4 = VirtualFuncInvoker0< ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91 >::Invoke(8 /* System.ValueTuple`2<System.String,System.String> WalletConnectSharp.Network.RelayUrlBuilder::GetSdkInfo() */, __this);
		ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91 L_5 = L_4;
		String_t* L_6 = L_5.___Item1_0;
		V_2 = L_6;
		String_t* L_7 = L_5.___Item2_1;
		V_3 = L_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___0_protocol;
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		ArrayElementTypeCheck (L_11, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		String_t* L_13 = ___1_version;
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_12;
		ArrayElementTypeCheck (L_14, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		String_t* L_16 = V_2;
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_15;
		ArrayElementTypeCheck (L_17, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		String_t* L_19 = V_3;
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_18;
		ArrayElementTypeCheck (L_20, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		String_t* L_22 = V_0;
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_21;
		ArrayElementTypeCheck (L_23, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		String_t* L_25 = V_1;
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_25);
		String_t* L_26;
		L_26 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_24, NULL);
		return L_26;
	}
}
// System.ValueTuple`2<System.String,System.String> WalletConnectSharp.Network.RelayUrlBuilder::GetOsInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91 RelayUrlBuilder_GetOsInfo_m14F26E661B358F758301DF12F86989B46EC2B9B2 (RelayUrlBuilder_tAA23FDAF9DC93EB0AD82BB9F696B7DB4A7A38642* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformID_t9C84323A65D2A39DBEB7A922286A9E9836B8BECA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mEA682AE0DEB0D89054EB55197618D6C2C4A60CE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557* L_0;
		L_0 = Environment_get_OSVersion_mDDD265F5864A2086664CAE56D7C4B59E9A50AF66(NULL);
		int32_t L_1;
		L_1 = OperatingSystem_get_Platform_m01AF3D6217E4031C3AA824481BBE9E2933347E26_inline(L_0, NULL);
		V_1 = L_1;
		Il2CppFakeBox<int32_t> L_2(PlatformID_t9C84323A65D2A39DBEB7A922286A9E9836B8BECA_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_3;
		L_3 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_2), NULL);
		String_t* L_4;
		L_4 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_3, NULL);
		OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557* L_5;
		L_5 = Environment_get_OSVersion_mDDD265F5864A2086664CAE56D7C4B59E9A50AF66(NULL);
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_6;
		L_6 = OperatingSystem_get_Version_m535655B606064F2D5E20452DC2258338B59DA9F6_inline(L_5, NULL);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		String_t* L_8;
		L_8 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_7, NULL);
		V_0 = L_8;
		String_t* L_9 = V_0;
		ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ValueTuple_2__ctor_mEA682AE0DEB0D89054EB55197618D6C2C4A60CE7((&L_10), L_4, L_9, /*hidden argument*/ValueTuple_2__ctor_mEA682AE0DEB0D89054EB55197618D6C2C4A60CE7_RuntimeMethod_var);
		return L_10;
	}
}
// System.ValueTuple`2<System.String,System.String> WalletConnectSharp.Network.RelayUrlBuilder::GetSdkInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91 RelayUrlBuilder_GetSdkInfo_m39EA23C279984D5472D3FA15D3DA2A0274B2BB54 (RelayUrlBuilder_tAA23FDAF9DC93EB0AD82BB9F696B7DB4A7A38642* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKConstants_t7A28B12CC8BD6837A353E7CA8D5DE811292792CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mEA682AE0DEB0D89054EB55197618D6C2C4A60CE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral047E369701975DC40DC49AA23CC6CAFC2EC004FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SDKConstants_t7A28B12CC8BD6837A353E7CA8D5DE811292792CA_il2cpp_TypeInfo_var);
		String_t* L_0 = ((SDKConstants_t7A28B12CC8BD6837A353E7CA8D5DE811292792CA_StaticFields*)il2cpp_codegen_static_fields_for(SDKConstants_t7A28B12CC8BD6837A353E7CA8D5DE811292792CA_il2cpp_TypeInfo_var))->___SDK_VERSION_0;
		ValueTuple_2_tA369C763469BCB1C81541EE3A74BAE7F5F7A4A91 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ValueTuple_2__ctor_mEA682AE0DEB0D89054EB55197618D6C2C4A60CE7((&L_1), _stringLiteral047E369701975DC40DC49AA23CC6CAFC2EC004FE, L_0, /*hidden argument*/ValueTuple_2__ctor_mEA682AE0DEB0D89054EB55197618D6C2C4A60CE7_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean WalletConnectSharp.Network.RelayUrlBuilder::TryGetOrigin(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RelayUrlBuilder_TryGetOrigin_mF38E0541FC3AABB30CFF1A75058417D3CDAB7596 (RelayUrlBuilder_tAA23FDAF9DC93EB0AD82BB9F696B7DB4A7A38642* __this, String_t** ___0_origin, const RuntimeMethod* method) 
{
	{
		String_t** L_0 = ___0_origin;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		return (bool)0;
	}
}
// System.Void WalletConnectSharp.Network.RelayUrlBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayUrlBuilder__ctor_mFA739EBB8E5979217FDDDE44EA91222B27F5A883 (RelayUrlBuilder_tAA23FDAF9DC93EB0AD82BB9F696B7DB4A7A38642* __this, const RuntimeMethod* method) 
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
// System.String WalletConnectSharp.Network.Validation::GetUrlProtocol(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Validation_GetUrlProtocol_mEBEB0949829950E918A9FC5AF68A6166AE27BEE0 (String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83F713D824ACC4750B372C896A4258FB6A63D407);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_url;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_1;
		L_1 = Regex_Match_m5C2BB28FCDF18C58EB69B0B38B449A9C248C84EB(L_0, _stringLiteral83F713D824ACC4750B372C896A4258FB6A63D407, 1, NULL);
		String_t* L_2;
		L_2 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_1, NULL);
		return L_2;
	}
}
// System.Boolean WalletConnectSharp.Network.Validation::MatchRegexProtocol(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Validation_MatchRegexProtocol_m5CE0F56607C3A24207D1B9EF0F7D7F292C0109D6 (String_t* ___0_url, String_t* ___1_regex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___0_url;
		String_t* L_1;
		L_1 = Validation_GetUrlProtocol_mEBEB0949829950E918A9FC5AF68A6166AE27BEE0(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		String_t* L_3 = V_0;
		String_t* L_4 = ___1_regex;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Regex_IsMatch_m66D13054C7992322810B0CFC6B46AF11A927C9AA(L_3, L_4, NULL);
		return L_5;
	}
}
// System.Boolean WalletConnectSharp.Network.Validation::IsWsUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Validation_IsWsUrl_mDCF72A26441612D0DB8DF0905B6B6E0E3B72053D (String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA02D96D2D5B5DFE46BA40752529C60761D84AA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_url;
		bool L_1;
		L_1 = Validation_MatchRegexProtocol_m5CE0F56607C3A24207D1B9EF0F7D7F292C0109D6(L_0, _stringLiteralCA02D96D2D5B5DFE46BA40752529C60761D84AA1, NULL);
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
// WalletConnectSharp.Network.Models.Error WalletConnectSharp.Network.Models.Error::FromErrorType(WalletConnectSharp.Common.Model.Errors.ErrorType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* Error_FromErrorType_m29A16C8E8A41EA4995D4E800E3EA6774DCB77913 (uint32_t ___0_type, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_type;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_1, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = L_1;
		String_t* L_3 = ___1_message;
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_2, _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964, L_3, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2_il2cpp_TypeInfo_var);
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_4;
		L_4 = Error_FromErrorType_mCC6F63C48ABB44F2CB11978B9948632D35C90174(L_0, L_2, (String_t*)NULL, NULL);
		return L_4;
	}
}
// WalletConnectSharp.Network.Models.Error WalletConnectSharp.Network.Models.Error::FromErrorType(WalletConnectSharp.Common.Model.Errors.ErrorType,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* Error_FromErrorType_mCC6F63C48ABB44F2CB11978B9948632D35C90174 (uint32_t ___0_type, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___1_params, String_t* ___2_extraData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SdkErrors_t0760AD2C1D33848184D9B3F67DBB806D9182EA83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		uint32_t L_0 = ___0_type;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = ___1_params;
		il2cpp_codegen_runtime_class_init_inline(SdkErrors_t0760AD2C1D33848184D9B3F67DBB806D9182EA83_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = SdkErrors_MessageFromType_mA51D53A36173142705919319C683EBD5BDC6408A(L_0, L_1, NULL);
		V_0 = L_2;
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_3 = (Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2*)il2cpp_codegen_object_new(Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2_il2cpp_TypeInfo_var);
		Error__ctor_m00FB88242378E01ECAACBDB760ADCB07F0214D5E(L_3, NULL);
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_4 = L_3;
		uint32_t L_5 = ___0_type;
		L_4->___Code_0 = ((int64_t)(uint64_t)L_5);
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_6 = L_4;
		String_t* L_7 = V_0;
		L_6->___Message_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___Message_1), (void*)L_7);
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_8 = L_6;
		String_t* L_9 = ___2_extraData;
		L_8->___Data_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___Data_2), (void*)L_9);
		return L_8;
	}
}
// WalletConnectSharp.Network.Models.Error WalletConnectSharp.Network.Models.Error::FromException(WalletConnectSharp.Common.Model.Errors.WalletConnectException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* Error_FromException_m6B1A2EBA04BAEAA30354EB04A31A181D9D6FB7B5 (WalletConnectException_t9CBCE981FDAC7DC8072A3D9E9F941CC2B56A5BA8* ___0_walletConnectException, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_0 = (Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2*)il2cpp_codegen_object_new(Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2_il2cpp_TypeInfo_var);
		Error__ctor_m00FB88242378E01ECAACBDB760ADCB07F0214D5E(L_0, NULL);
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_1 = L_0;
		WalletConnectException_t9CBCE981FDAC7DC8072A3D9E9F941CC2B56A5BA8* L_2 = ___0_walletConnectException;
		uint32_t L_3;
		L_3 = WalletConnectException_get_Code_mE5638A9357E5B11D1BC37B694447A37EE71F25E6_inline(L_2, NULL);
		L_1->___Code_0 = ((int64_t)(uint64_t)L_3);
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_4 = L_1;
		WalletConnectException_t9CBCE981FDAC7DC8072A3D9E9F941CC2B56A5BA8* L_5 = ___0_walletConnectException;
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_5);
		L_4->___Message_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___Message_1), (void*)L_6);
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_7 = L_4;
		WalletConnectException_t9CBCE981FDAC7DC8072A3D9E9F941CC2B56A5BA8* L_8 = ___0_walletConnectException;
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		L_7->___Data_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___Data_2), (void*)L_9);
		return L_7;
	}
}
// WalletConnectSharp.Common.Model.Errors.WalletConnectException WalletConnectSharp.Network.Models.Error::ToException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WalletConnectException_t9CBCE981FDAC7DC8072A3D9E9F941CC2B56A5BA8* Error_ToException_mC62148C388F89717BA8CD774119924C69FFB7C16 (Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___Code_0;
		String_t* L_1 = __this->___Message_1;
		WalletConnectException_t9CBCE981FDAC7DC8072A3D9E9F941CC2B56A5BA8* L_2;
		L_2 = WalletConnectException_FromType_mB9C37E5D20E2FD7067A7CA0D4C4CADAB6F731BD6(((int32_t)(uint32_t)L_0), L_1, (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL, (Exception_t*)NULL, NULL);
		return L_2;
	}
}
// System.Boolean WalletConnectSharp.Network.Models.Error::Equals(WalletConnectSharp.Network.Models.Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Error_Equals_mB11574AC2E4AF897C5F03A2543330B6AC719C3F2 (Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* __this, Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* ___0_other, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___Code_0;
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_1 = ___0_other;
		int64_t L_2 = L_1->___Code_0;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_3 = __this->___Message_1;
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_4 = ___0_other;
		String_t* L_5 = L_4->___Message_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_7 = __this->___Data_2;
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_8 = ___0_other;
		String_t* L_9 = L_8->___Data_2;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, L_9, NULL);
		return L_10;
	}

IL_0033:
	{
		return (bool)0;
	}
}
// System.Boolean WalletConnectSharp.Network.Models.Error::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Error_Equals_mEF8A2957571FE0093358408DD13B2EF6D38A33E2 (Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_obj;
		if ((!(((RuntimeObject*)(Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2*)__this) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		RuntimeObject* L_2 = ___0_obj;
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		return (bool)0;
	}

IL_0020:
	{
		RuntimeObject* L_6 = ___0_obj;
		bool L_7;
		L_7 = Error_Equals_mB11574AC2E4AF897C5F03A2543330B6AC719C3F2(__this, ((Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2*)CastclassClass((RuntimeObject*)L_6, Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2_il2cpp_TypeInfo_var)), NULL);
		return L_7;
	}
}
// System.Int32 WalletConnectSharp.Network.Models.Error::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Error_GetHashCode_mAF18441E62CC613252ECD960D6751B0F658733A5 (Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_Combine_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisString_t_TisString_t_m9B77A28C41BEC2562AA1B7148215FF6C1CB8E63B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = __this->___Code_0;
		String_t* L_1 = __this->___Message_1;
		String_t* L_2 = __this->___Data_2;
		il2cpp_codegen_runtime_class_init_inline(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashCode_Combine_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisString_t_TisString_t_m9B77A28C41BEC2562AA1B7148215FF6C1CB8E63B(L_0, L_1, L_2, HashCode_Combine_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisString_t_TisString_t_m9B77A28C41BEC2562AA1B7148215FF6C1CB8E63B_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void WalletConnectSharp.Network.Models.Error::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Error__ctor_m00FB88242378E01ECAACBDB760ADCB07F0214D5E (Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void WalletConnectSharp.Network.Models.Error::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Error__cctor_m8EA72F0B16A0E14F027EDF5A15B46B1A5A1B6140 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CodeMessageDataEqualityComparer_tDE98AE6BACCACADCD8FA9578CDDCACC45A657631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CodeMessageDataEqualityComparer_tDE98AE6BACCACADCD8FA9578CDDCACC45A657631* L_0 = (CodeMessageDataEqualityComparer_tDE98AE6BACCACADCD8FA9578CDDCACC45A657631*)il2cpp_codegen_object_new(CodeMessageDataEqualityComparer_tDE98AE6BACCACADCD8FA9578CDDCACC45A657631_il2cpp_TypeInfo_var);
		CodeMessageDataEqualityComparer__ctor_mD1BE334F93BC33FCBB590D5E8E4896ACBE7C7C89(L_0, NULL);
		((Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2_StaticFields*)il2cpp_codegen_static_fields_for(Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2_il2cpp_TypeInfo_var))->___U3CCodeMessageDataComparerU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2_StaticFields*)il2cpp_codegen_static_fields_for(Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2_il2cpp_TypeInfo_var))->___U3CCodeMessageDataComparerU3Ek__BackingField_3), (void*)L_0);
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
// System.Boolean WalletConnectSharp.Network.Models.Error/CodeMessageDataEqualityComparer::Equals(WalletConnectSharp.Network.Models.Error,WalletConnectSharp.Network.Models.Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CodeMessageDataEqualityComparer_Equals_mAB107C805DA269A3F932F535DE5A8E992FEE0F0C (CodeMessageDataEqualityComparer_tDE98AE6BACCACADCD8FA9578CDDCACC45A657631* __this, Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* ___0_x, Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_0 = ___0_x;
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_1 = ___1_y;
		if ((!(((RuntimeObject*)(Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2*)L_0) == ((RuntimeObject*)(Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_2 = ___0_x;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_3 = ___1_y;
		if (L_3)
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_4 = ___0_x;
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_4, NULL);
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_6 = ___1_y;
		Type_t* L_7;
		L_7 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0025;
		}
	}
	{
		return (bool)0;
	}

IL_0025:
	{
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_9 = ___0_x;
		int64_t L_10 = L_9->___Code_0;
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_11 = ___1_y;
		int64_t L_12 = L_11->___Code_0;
		if ((!(((uint64_t)L_10) == ((uint64_t)L_12))))
		{
			goto IL_0058;
		}
	}
	{
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_13 = ___0_x;
		String_t* L_14 = L_13->___Message_1;
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_15 = ___1_y;
		String_t* L_16 = L_15->___Message_1;
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, L_16, NULL);
		if (!L_17)
		{
			goto IL_0058;
		}
	}
	{
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_18 = ___0_x;
		String_t* L_19 = L_18->___Data_2;
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_20 = ___1_y;
		String_t* L_21 = L_20->___Data_2;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, L_21, NULL);
		return L_22;
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Int32 WalletConnectSharp.Network.Models.Error/CodeMessageDataEqualityComparer::GetHashCode(WalletConnectSharp.Network.Models.Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodeMessageDataEqualityComparer_GetHashCode_m5EAF61AA40618238242EBE30A5B0058FAB94EAA8 (CodeMessageDataEqualityComparer_tDE98AE6BACCACADCD8FA9578CDDCACC45A657631* __this, Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_Combine_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisString_t_TisString_t_m9B77A28C41BEC2562AA1B7148215FF6C1CB8E63B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_0 = ___0_obj;
		int64_t L_1 = L_0->___Code_0;
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_2 = ___0_obj;
		String_t* L_3 = L_2->___Message_1;
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_4 = ___0_obj;
		String_t* L_5 = L_4->___Data_2;
		il2cpp_codegen_runtime_class_init_inline(HashCode_t9CF0E862CF73DB9FE67D8DBBD1F4C46330F88AE3_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = HashCode_Combine_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisString_t_TisString_t_m9B77A28C41BEC2562AA1B7148215FF6C1CB8E63B(L_1, L_3, L_5, HashCode_Combine_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisString_t_TisString_t_m9B77A28C41BEC2562AA1B7148215FF6C1CB8E63B_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void WalletConnectSharp.Network.Models.Error/CodeMessageDataEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodeMessageDataEqualityComparer__ctor_mD1BE334F93BC33FCBB590D5E8E4896ACBE7C7C89 (CodeMessageDataEqualityComparer_tDE98AE6BACCACADCD8FA9578CDDCACC45A657631* __this, const RuntimeMethod* method) 
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
// System.Int64 WalletConnectSharp.Network.Models.JsonRpcError::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JsonRpcError_get_Id_m06A45766F289D4F7B4A1B63B6B1FDB1D849DB654 (JsonRpcError_t4B522B6901C42383D05ACFCB3E12295CEE258536* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____id_0;
		return L_0;
	}
}
// WalletConnectSharp.Network.Models.Error WalletConnectSharp.Network.Models.JsonRpcError::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* JsonRpcError_get_Error_m72A72D92951D79F61B30FAF8E1E806D275D00B3F (JsonRpcError_t4B522B6901C42383D05ACFCB3E12295CEE258536* __this, const RuntimeMethod* method) 
{
	{
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_0 = __this->____error_1;
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
// System.Int64 WalletConnectSharp.Network.Models.JsonRpcPayload::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JsonRpcPayload_get_Id_m6A3CB9236DBB12B3771C559A47C126316AFC14C2 (JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____id_0;
		return L_0;
	}
}
// System.Void WalletConnectSharp.Network.Models.JsonRpcPayload::set_Id(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonRpcPayload_set_Id_mAB11EFF69CA9E2287EC37C41F84E5666D42B21B1 (JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->____id_0 = L_0;
		return;
	}
}
// System.String WalletConnectSharp.Network.Models.JsonRpcPayload::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonRpcPayload_get_Method_m4BC5E6037F2B64FADEC302C2B2A69AE918C9216B (JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t641BD83F3C4FF5FE1C7429862C1E2B6E3DB7527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_ToObject_TisString_t_m24A2444CF94E8759ECB9DA2C94349E16C95CFE48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = JsonRpcPayload_get_IsRequest_m71EFBADA83DAF685C2D750CB7EAD02AAC3FE2601(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral211D703A10C207E4F2B978045F28D1208138A45A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonRpcPayload_get_Method_m4BC5E6037F2B64FADEC302C2B2A69AE918C9216B_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____extraStuff_1;
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_3;
		L_3 = InterfaceFuncInvoker1< JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Linq.JToken>::get_Item(TKey) */, IDictionary_2_t641BD83F3C4FF5FE1C7429862C1E2B6E3DB7527B_il2cpp_TypeInfo_var, L_2, _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF);
		String_t* L_4;
		L_4 = JToken_ToObject_TisString_t_m24A2444CF94E8759ECB9DA2C94349E16C95CFE48(L_3, JToken_ToObject_TisString_t_m24A2444CF94E8759ECB9DA2C94349E16C95CFE48_RuntimeMethod_var);
		return L_4;
	}
}
// System.Boolean WalletConnectSharp.Network.Models.JsonRpcPayload::get_IsRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonRpcPayload_get_IsRequest_m71EFBADA83DAF685C2D750CB7EAD02AAC3FE2601 (JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t641BD83F3C4FF5FE1C7429862C1E2B6E3DB7527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____extraStuff_1;
		bool L_1;
		L_1 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Linq.JToken>::ContainsKey(TKey) */, IDictionary_2_t641BD83F3C4FF5FE1C7429862C1E2B6E3DB7527B_il2cpp_TypeInfo_var, L_0, _stringLiteral82EA3C9AFC08F0CECEBC1B257606B3106346FCAF);
		return L_1;
	}
}
// System.Boolean WalletConnectSharp.Network.Models.JsonRpcPayload::get_IsResponse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonRpcPayload_get_IsResponse_m32D9D1D9458C517F47F9590663912D6B26BB76A6 (JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t641BD83F3C4FF5FE1C7429862C1E2B6E3DB7527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____extraStuff_1;
		bool L_1;
		L_1 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Linq.JToken>::ContainsKey(TKey) */, IDictionary_2_t641BD83F3C4FF5FE1C7429862C1E2B6E3DB7527B_il2cpp_TypeInfo_var, L_0, _stringLiteral228835A6E22383C9BC1AAFD065E6D63FA30BF27B);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		bool L_2;
		L_2 = JsonRpcPayload_get_IsError_m4D437D87C543D4DD7CF216AD26BBCCCDAFE0991C(__this, NULL);
		return L_2;
	}

IL_0019:
	{
		return (bool)1;
	}
}
// System.Boolean WalletConnectSharp.Network.Models.JsonRpcPayload::get_IsError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonRpcPayload_get_IsError_m4D437D87C543D4DD7CF216AD26BBCCCDAFE0991C (JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t641BD83F3C4FF5FE1C7429862C1E2B6E3DB7527B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____extraStuff_1;
		bool L_1;
		L_1 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Linq.JToken>::ContainsKey(TKey) */, IDictionary_2_t641BD83F3C4FF5FE1C7429862C1E2B6E3DB7527B_il2cpp_TypeInfo_var, L_0, _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
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
// System.String WalletConnectSharp.Network.Models.RpcMethodAttribute::get_MethodName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RpcMethodAttribute_get_MethodName_m4961AC133A71717F1597A5EB2EDF2FB75720E696 (RpcMethodAttribute_tE75979D5D46A61790005DF1772E9836138F1B6E8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMethodNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void WalletConnectSharp.Network.Models.RpcMethodAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcMethodAttribute__ctor_m59EBDD60013A9F768E9D15FAFE73798A55131222 (RpcMethodAttribute_tE75979D5D46A61790005DF1772E9836138F1B6E8* __this, String_t* ___0_method, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___0_method;
		__this->___U3CMethodNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodNameU3Ek__BackingField_0), (void*)L_0);
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
// System.Int64 WalletConnectSharp.Network.Models.RpcOptionsAttribute::get_TTL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RpcOptionsAttribute_get_TTL_m74BFA1B6EEF2B9EB155C07A2A87677F4758DC366 (RpcOptionsAttribute_t2286689827674F2046E54EEDE422382B5BDB0A82* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CTTLU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Int32 WalletConnectSharp.Network.Models.RpcOptionsAttribute::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RpcOptionsAttribute_get_Tag_m25E79FF84693F02D0637EB74F6A4516FB021BE83 (RpcOptionsAttribute_t2286689827674F2046E54EEDE422382B5BDB0A82* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CTagU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void WalletConnectSharp.Network.Models.RpcOptionsAttribute::.ctor(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcOptionsAttribute__ctor_mA0DC7961CA7748D7C171D43C34378BBEE62ED614 (RpcOptionsAttribute_t2286689827674F2046E54EEDE422382B5BDB0A82* __this, int64_t ___0_ttl, int32_t ___1_tag, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int64_t L_0 = ___0_ttl;
		__this->___U3CTTLU3Ek__BackingField_0 = L_0;
		int32_t L_1 = ___1_tag;
		__this->___U3CTagU3Ek__BackingField_1 = L_1;
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
// WalletConnectSharp.Network.Models.RpcRequestOptionsAttribute WalletConnectSharp.Network.Models.RpcRequestOptionsAttribute::GetOptionsForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RpcRequestOptionsAttribute_t6401E7B8487A10FBDB0BB15BD0FD4233897174FF* RpcRequestOptionsAttribute_GetOptionsForType_mA5DD239E7B808CB690848A187D2B76312F43BAF5 (Type_t* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Cast_TisRpcRequestOptionsAttribute_t6401E7B8487A10FBDB0BB15BD0FD4233897174FF_mAD4AE4790E8A8E8DBD0ED45A36CD3E2DEB991EAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisRpcRequestOptionsAttribute_t6401E7B8487A10FBDB0BB15BD0FD4233897174FF_m9D91AA413C9F162F43E45EBFDA60B67ED498C30F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcRequestOptionsAttribute_t6401E7B8487A10FBDB0BB15BD0FD4233897174FF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_t;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (RpcRequestOptionsAttribute_t6401E7B8487A10FBDB0BB15BD0FD4233897174FF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(20 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_2, (bool)1);
		RuntimeObject* L_4;
		L_4 = Enumerable_Cast_TisRpcRequestOptionsAttribute_t6401E7B8487A10FBDB0BB15BD0FD4233897174FF_mAD4AE4790E8A8E8DBD0ED45A36CD3E2DEB991EAB((RuntimeObject*)L_3, Enumerable_Cast_TisRpcRequestOptionsAttribute_t6401E7B8487A10FBDB0BB15BD0FD4233897174FF_mAD4AE4790E8A8E8DBD0ED45A36CD3E2DEB991EAB_RuntimeMethod_var);
		RpcRequestOptionsAttribute_t6401E7B8487A10FBDB0BB15BD0FD4233897174FF* L_5;
		L_5 = Enumerable_FirstOrDefault_TisRpcRequestOptionsAttribute_t6401E7B8487A10FBDB0BB15BD0FD4233897174FF_m9D91AA413C9F162F43E45EBFDA60B67ED498C30F(L_4, Enumerable_FirstOrDefault_TisRpcRequestOptionsAttribute_t6401E7B8487A10FBDB0BB15BD0FD4233897174FF_m9D91AA413C9F162F43E45EBFDA60B67ED498C30F_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void WalletConnectSharp.Network.Models.RpcRequestOptionsAttribute::.ctor(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcRequestOptionsAttribute__ctor_mA2E2194470F82B75D1E5B7E427DC1CAB740F9ED4 (RpcRequestOptionsAttribute_t6401E7B8487A10FBDB0BB15BD0FD4233897174FF* __this, int64_t ___0_ttl, int32_t ___1_tag, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_ttl;
		int32_t L_1 = ___1_tag;
		RpcOptionsAttribute__ctor_mA0DC7961CA7748D7C171D43C34378BBEE62ED614(__this, L_0, L_1, NULL);
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
// System.Void WalletConnectSharp.Network.Models.RpcResponseOptionsAttribute::.ctor(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcResponseOptionsAttribute__ctor_m5127BB7FF2D287809F14FFB175ECC395EA19561A (RpcResponseOptionsAttribute_t8D56A4DDD2881C4D6091340A1B6470628D4133D7* __this, int64_t ___0_ttl, int32_t ___1_tag, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_ttl;
		int32_t L_1 = ___1_tag;
		RpcOptionsAttribute__ctor_mA0DC7961CA7748D7C171D43C34378BBEE62ED614(__this, L_0, L_1, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t JsonRpcPayload_get_Id_m6A3CB9236DBB12B3771C559A47C126316AFC14C2_inline (JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____id_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonRpcPayload_set_Id_mAB11EFF69CA9E2287EC37C41F84E5666D42B21B1_inline (JsonRpcPayload_t1D60CBA3C374F07770CA2AEBECB5FED2A5AC854F* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->____id_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* JsonRpcError_get_Error_m72A72D92951D79F61B30FAF8E1E806D275D00B3F_inline (JsonRpcError_t4B522B6901C42383D05ACFCB3E12295CEE258536* __this, const RuntimeMethod* method) 
{
	{
		Error_tAFB4B4DDC563B97EAA142E1D487E3ED7ACAD6CB2* L_0 = __this->____error_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OperatingSystem_get_Platform_m01AF3D6217E4031C3AA824481BBE9E2933347E26_inline (OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____platform_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* OperatingSystem_get_Version_m535655B606064F2D5E20452DC2258338B59DA9F6_inline (OperatingSystem_t08A94435A5C7D999B5553B6C58763A6F2E3C8557* __this, const RuntimeMethod* method) 
{
	{
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_0 = __this->____version_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t WalletConnectException_get_Code_mE5638A9357E5B11D1BC37B694447A37EE71F25E6_inline (WalletConnectException_t9CBCE981FDAC7DC8072A3D9E9F941CC2B56A5BA8* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___U3CCodeU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_0 = __this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_sender, RuntimeObject* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
