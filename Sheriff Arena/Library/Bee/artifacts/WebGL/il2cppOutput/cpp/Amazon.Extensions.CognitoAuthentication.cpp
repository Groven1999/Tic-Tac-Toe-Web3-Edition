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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.ConstantClass>>
struct Dictionary_2_tD8F00ACF14B9BFD431C83918FCA20CD4039B8B67;
// System.EventHandler`1<Amazon.Runtime.StreamTransferProgressArgs>
struct EventHandler_1_tD5E55DD696D9D0F969B790973310C3550ED733EB;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<Amazon.CognitoIdentityProvider.Model.AttributeType>
struct List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>
struct TaskFactory_1_tEA5472048F1E037642CEE6505520415118D4B0D6;
// System.Threading.Tasks.TaskFactory`1<Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse>
struct TaskFactory_1_t6BCFD7B01B616040DB9CBF067F8613780F28AFC1;
// System.Threading.Tasks.TaskFactory`1<Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse>
struct TaskFactory_1_t01E4D06499E51EBA9A1FB8CBF7BFBF8464EFF348;
// System.Threading.Tasks.TaskFactory`1<Amazon.CognitoIdentityProvider.Model.SignUpResponse>
struct TaskFactory_1_t6FFABA6F94BAEA110AD4C0050CBFA89578604C93;
// System.Threading.Tasks.Task`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>
struct Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F;
// System.Threading.Tasks.Task`1<Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse>
struct Task_1_t040B2D8ADE8D739FEBCFA7A4AAA80876413350BF;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse>
struct Task_1_t62421925BDC0985C05B065638EFBFD75CA6A37C9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// Amazon.CognitoIdentityProvider.Model.AttributeType[]
struct AttributeTypeU5BU5D_t266DF9935B935B6348F6601AED126CCE58B804AB;
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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Amazon.Runtime.AWSCredentials
struct AWSCredentials_tB73470E3AD832FCF7B26DCFEFEECF53760F59579;
// Amazon.Runtime.Internal.Auth.AbstractAWSSigner
struct AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Amazon.Runtime.AmazonServiceClient
struct AmazonServiceClient_t783F8978EB893CBAB9990B7F17D3648E5795A4AC;
// Amazon.Runtime.AmazonWebServiceRequest
struct AmazonWebServiceRequest_t2F5DE86A5D8CF70A9F2B1C997EBA9F093648429F;
// Amazon.Runtime.AmazonWebServiceResponse
struct AmazonWebServiceResponse_t3F4B1B1621D883697F81F5FA301FE80F61FF968D;
// Amazon.CognitoIdentityProvider.Model.AnalyticsMetadataType
struct AnalyticsMetadataType_tE39BEFE8CE0EC826450ACAF70D74265005831C0D;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tEBD946AEBE271D135B9161CE0B423ED10AA933F4;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// Amazon.CognitoIdentityProvider.Model.AttributeType
struct AttributeType_t7FAD47DA16A417B5ED70A8E27D83BD7BA13BEA78;
// Amazon.Extensions.CognitoAuthentication.AuthFlowResponse
struct AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A;
// Amazon.CognitoIdentityProvider.AuthFlowType
struct AuthFlowType_tBE61AA75513223AD20B59024E7E078043589092C;
// Amazon.CognitoIdentityProvider.Model.AuthenticationResultType
struct AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// Amazon.CognitoIdentityProvider.ChallengeNameType
struct ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE;
// Amazon.Runtime.ClientConfig
struct ClientConfig_tAE0C88262BEB4136462F7ED01715577AD4ED7A2D;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// Amazon.Extensions.CognitoAuthentication.CognitoUser
struct CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821;
// Amazon.Extensions.CognitoAuthentication.CognitoUserPool
struct CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4;
// Amazon.Extensions.CognitoAuthentication.CognitoUserSession
struct CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A;
// Amazon.Runtime.ConstantClass
struct ConstantClass_tF227ADAB15BBF44B1B11FC3B439F012B5CAFF442;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// Amazon.Runtime.Internal.EndpointDiscoveryResolverBase
struct EndpointDiscoveryResolverBase_t56674A9CB5E345CBC4C0EA431CF07D13B2968A90;
// System.Exception
struct Exception_t;
// Amazon.Runtime.ExceptionEventHandler
struct ExceptionEventHandler_t76DF4C799B7554655F12F268F02EEAD1130A3CD6;
// System.Security.Cryptography.HMACSHA256
struct HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// Amazon.CognitoIdentityProvider.IAmazonCognitoIdentityProvider
struct IAmazonCognitoIdentityProvider_t815DA88C2B3B89933722D90610648734DE9EDF21;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Amazon.Runtime.Internal.IServiceMetadata
struct IServiceMetadata_t24406C0DF4AF0824423525AC21189F1976DE75C7;
// Amazon.CognitoIdentityProvider.Model.InitiateAuthRequest
struct InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB;
// Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse
struct InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3;
// Amazon.Extensions.CognitoAuthentication.InitiateCustomAuthRequest
struct InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219;
// Amazon.Runtime.Internal.Util.Logger
struct Logger_t75C9BCC7F51D182B1E82B3DC0E1B012158E74E6B;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Amazon.CognitoIdentityProvider.Model.NewDeviceMetadataType
struct NewDeviceMetadataType_t9934B8C236D786AAB4C2BF14B1105F01CABF6031;
// Amazon.Runtime.Internal.ParameterCollection
struct ParameterCollection_t83FCEAC6D1D9F537507E97CA698B4D654F8D7002;
// Amazon.Runtime.PreRequestEventHandler
struct PreRequestEventHandler_t869B1D1A1409EAFCB7420B80A9E7D99F8A815FCC;
// Amazon.Runtime.RequestEventArgs
struct RequestEventArgs_tA481BACD3813A31F36627FC1D3B6C833EC686A73;
// Amazon.Runtime.RequestEventHandler
struct RequestEventHandler_t7634A607863E3BECFAB972C8C28025EA9B7BF61A;
// Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeRequest
struct RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC;
// Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse
struct RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C;
// Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest
struct RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7;
// Amazon.Runtime.ResponseEventHandler
struct ResponseEventHandler_t7F2A2204A9C082DDEB7CBD57E67A48EEA9F0B239;
// Amazon.Runtime.ResponseMetadata
struct ResponseMetadata_tBF985AAFD923FA79A2759015BD7BE04ED320AE03;
// Amazon.Runtime.Internal.RuntimePipeline
struct RuntimePipeline_tCC34E1E885808DAEB1E93EFBA12CCCC5E368AE34;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Amazon.CognitoIdentityProvider.Model.SignUpRequest
struct SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA;
// Amazon.CognitoIdentityProvider.Model.SignUpResponse
struct SignUpResponse_t7BD8DAE1F23CD690C3F5EDE0004A671A2A70108E;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// Amazon.CognitoIdentityProvider.Model.UserContextDataType
struct UserContextDataType_tDC6CB2B4636744F6067DDE34E95AB27A9355D19A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Amazon.Runtime.WebServiceRequestEventArgs
struct WebServiceRequestEventArgs_t120A45C1B3AC645E0B85163E58E49469D1BEC36C;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AmazonCognitoIdentityProviderClient_t0E07D3551087EC08470443D2C21094424F53B4B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssemblyFileVersionAttribute_tEBD946AEBE271D135B9161CE0B423ED10AA933F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AttributeType_t7FAD47DA16A417B5ED70A8E27D83BD7BA13BEA78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthFlowType_tBE61AA75513223AD20B59024E7E078043589092C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CognitoAuthHelper_tF40CC3B14C08BA0121EB0A565FCF6717B793D282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstantClass_tF227ADAB15BBF44B1B11FC3B439F012B5CAFF442_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAmazonCognitoIdentityProvider_t815DA88C2B3B89933722D90610648734DE9EDF21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestEventHandler_t7634A607863E3BECFAB972C8C28025EA9B7BF61A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebServiceRequestEventArgs_t120A45C1B3AC645E0B85163E58E49469D1BEC36C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0311F42C1F9456B6C2CBD1CCC062B5F8B139A889;
IL2CPP_EXTERN_C String_t* _stringLiteral0BE6D6FEA9C0036EEDEFFD38B2D1C4EACC2B9D2F;
IL2CPP_EXTERN_C String_t* _stringLiteral1F1268E1AE201354BBC8D00D49BEAC846F12EDF7;
IL2CPP_EXTERN_C String_t* _stringLiteral3581B9DAF560030E2E31AE65668D9C6BEAA6728D;
IL2CPP_EXTERN_C String_t* _stringLiteral423EB5F690AD3B8F9E82A5EAEA94566DBDC2CB66;
IL2CPP_EXTERN_C String_t* _stringLiteral44D2155A9A3200DB4F66438C4A7020431E61BB80;
IL2CPP_EXTERN_C String_t* _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF;
IL2CPP_EXTERN_C String_t* _stringLiteral4CB81BFE27645382DC38DCACB8A2C37AB347D6D2;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral51921D99887DD5ED233F87333EF648AE91A8BF7C;
IL2CPP_EXTERN_C String_t* _stringLiteral530150E04E6EC41BEE7DA49EB9C12C5E0289840D;
IL2CPP_EXTERN_C String_t* _stringLiteral560B461CD3B3EC699D4EEE2BF321914A093EBDB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C;
IL2CPP_EXTERN_C String_t* _stringLiteral6B02B1E1487008AA8DA0EBBF4799CBC796FE4D62;
IL2CPP_EXTERN_C String_t* _stringLiteral736AF32BCDCEA98E53845EF220EE293D0B73DF58;
IL2CPP_EXTERN_C String_t* _stringLiteral842B8C7345E8AE5608EE332378D4489B8AF9C37C;
IL2CPP_EXTERN_C String_t* _stringLiteral8616432AB4B76B87A73EC2E9EDA0A66F90F81D79;
IL2CPP_EXTERN_C String_t* _stringLiteral9C3DEEC0531EF0C653C66F20E39D7E107A8DFC4D;
IL2CPP_EXTERN_C String_t* _stringLiteralA1C11240057DA2500A6450044EFF8D777E00F26A;
IL2CPP_EXTERN_C String_t* _stringLiteralA1C3EDDE2152361A22D3D0D87C064EC546264D1C;
IL2CPP_EXTERN_C String_t* _stringLiteralAB16D8A617F31CEA5526DAECE9ED6F7764595D82;
IL2CPP_EXTERN_C String_t* _stringLiteralAB8669F97B6902DCA018DD5D9A0B908C92F919FA;
IL2CPP_EXTERN_C String_t* _stringLiteralB1AF5447134F86E81C58631C3B6D93E2C8F97B1A;
IL2CPP_EXTERN_C String_t* _stringLiteralB9759268181E392BB5A3A5F594B01AD942FC7064;
IL2CPP_EXTERN_C String_t* _stringLiteralC0088BD9BDDD69F53812075FEBE4DE7AD5590ED0;
IL2CPP_EXTERN_C String_t* _stringLiteralC13B65C06BB3A788859D79A63DC8C530F152B2FB;
IL2CPP_EXTERN_C String_t* _stringLiteralC288B7612977CDB79FF44E3835AA0B4F6C422C31;
IL2CPP_EXTERN_C String_t* _stringLiteralCB07A09291C08815CF3D11E19DCD1076FA7C7EEE;
IL2CPP_EXTERN_C String_t* _stringLiteralCFB3EFC4BEA99FC338B21324C64F1B4AEBD47192;
IL2CPP_EXTERN_C String_t* _stringLiteralD02A4A4D1C4146EC9570C4228E7416949C61E664;
IL2CPP_EXTERN_C String_t* _stringLiteralD444B40C468D66B19259CD3EFE1FF0409F040706;
IL2CPP_EXTERN_C String_t* _stringLiteralDCE4227FFA1EC695E039F9C2BB1F760A67C3D925;
IL2CPP_EXTERN_C String_t* _stringLiteralDD096B8301B9807B9045A248F66BF18A2F33EC33;
IL2CPP_EXTERN_C String_t* _stringLiteralE8C29C59AD2C5A7B688373F667558973F9681B6B;
IL2CPP_EXTERN_C String_t* _stringLiteralEDAAB5C5D4BC79996A40BAC363247725901131D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFA46A75AEDB98EC4BA344FC277C99D2CBDE6A9B4;
IL2CPP_EXTERN_C String_t* _stringLiteralFBCFE8AE685D68F390182744A8EE501715BF4009;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C_TisU3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0_m1A88623A946B7116B5A9D56404FBF8FAAC04AB7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960_TisU3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C_m43A6BAD7CE5556EAEF57122A881E0564A217A100_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968_TisU3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989_mF116E48B65BA3D20C05B15C1906421370F8C674F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968_TisU3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41_mFCE987C31CCD35802AFED51AD58E2970DFDFC87D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m099727057491B93844F4F63BF9625FA69650D920_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m79924F59B204325407F2623448F8C9E7868924CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m8DBB9B28CA0434FF87A202D48FDCCFC85B0D5155_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mBA625C3B5E44E04FC3A40F9E9960BFA5B38CEB3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989_m1B9A9176BFA0269C12817E218339D3A014E4645D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0_m308D009FAE689EC7201DC75835A1461FDC0B51A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41_m38E0565FDF86F07ABC1D0DE9AAA4538A12EB090F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C_mF2DAD3B9F601A274276ED7F8E7A3F65545C48109_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m9F2729A370CCA8BBE5F886D74917C0656AEEF7CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CognitoAuthHelper_ServiceClientBeforeRequestEvent_mB7DB2F3A78C3DDA124E418924BD1EE5B49201E98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CognitoUserPool_CreateSignUpRequest_m81C8C716C9AC0476D2AC21DA6E3EF848B9E25524_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CognitoUserPool__ctor_m2C7E4568395974CC8237B014118C88441E441EAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CognitoUser__ctor_m335F207175DFEEDCA6B459DF616FB46038498635_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m030C3B98ABF7AAC107B58D1A1FB1B701B1139A56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m4ABB7BD7F6880E8C271184274B596307BB84176F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m920BFD1F52774606B033AF07D2509471B27ED877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m094CD328E5A9F3C42FA63C286B2E9C7C51FD4EDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m295F81189077054B6D354950AED200612A4C0153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_mEC6714330A618645449D77CAA62D1FD6FB087E89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m70E3FA1F98212436E4E4D975F5904F6BFABBC256_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m8766F26D3A7B03C9A2ACE33B56307F71E989CC31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_mABDDE10FDC157EF6F8DA158D99F1C9DDCA15E46B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m035708C2356C92747DA0E35BEF57060F02801707_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5BD713027E345EAD9E38B857E02832F52B4ABC8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m4236887B150F886EAAAE4A06CF03D6C4E0FAE055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m70041B804243C56052F1469E5BE5E2AB78A4CAA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m93CAC5BC5446389E6228F0FF8FC62169D7FF0B8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AssemblyFileVersionAttribute_tEBD946AEBE271D135B9161CE0B423ED10AA933F4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CognitoAuthHelper_tF40CC3B14C08BA0121EB0A565FCF6717B793D282_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
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
struct U3CModuleU3E_t80331024C13022134B1CF2E54DA547D8193A8106 
{
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

// System.Collections.Generic.List`1<Amazon.CognitoIdentityProvider.Model.AttributeType>
struct List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AttributeTypeU5BU5D_t266DF9935B935B6348F6601AED126CCE58B804AB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// Amazon.Runtime.AmazonServiceClient
struct AmazonServiceClient_t783F8978EB893CBAB9990B7F17D3648E5795A4AC  : public RuntimeObject
{
	// System.Boolean Amazon.Runtime.AmazonServiceClient::_disposed
	bool ____disposed_1;
	// Amazon.Runtime.Internal.Util.Logger Amazon.Runtime.AmazonServiceClient::_logger
	Logger_t75C9BCC7F51D182B1E82B3DC0E1B012158E74E6B* ____logger_2;
	// Amazon.Runtime.Internal.EndpointDiscoveryResolverBase Amazon.Runtime.AmazonServiceClient::<EndpointDiscoveryResolver>k__BackingField
	EndpointDiscoveryResolverBase_t56674A9CB5E345CBC4C0EA431CF07D13B2968A90* ___U3CEndpointDiscoveryResolverU3Ek__BackingField_3;
	// Amazon.Runtime.Internal.RuntimePipeline Amazon.Runtime.AmazonServiceClient::<RuntimePipeline>k__BackingField
	RuntimePipeline_tCC34E1E885808DAEB1E93EFBA12CCCC5E368AE34* ___U3CRuntimePipelineU3Ek__BackingField_4;
	// Amazon.Runtime.AWSCredentials Amazon.Runtime.AmazonServiceClient::<Credentials>k__BackingField
	AWSCredentials_tB73470E3AD832FCF7B26DCFEFEECF53760F59579* ___U3CCredentialsU3Ek__BackingField_5;
	// Amazon.Runtime.ClientConfig Amazon.Runtime.AmazonServiceClient::_config
	ClientConfig_tAE0C88262BEB4136462F7ED01715577AD4ED7A2D* ____config_6;
	// Amazon.Runtime.Internal.IServiceMetadata Amazon.Runtime.AmazonServiceClient::<ServiceMetadata>k__BackingField
	RuntimeObject* ___U3CServiceMetadataU3Ek__BackingField_7;
	// Amazon.Runtime.PreRequestEventHandler Amazon.Runtime.AmazonServiceClient::mBeforeMarshallingEvent
	PreRequestEventHandler_t869B1D1A1409EAFCB7420B80A9E7D99F8A815FCC* ___mBeforeMarshallingEvent_8;
	// Amazon.Runtime.RequestEventHandler Amazon.Runtime.AmazonServiceClient::mBeforeRequestEvent
	RequestEventHandler_t7634A607863E3BECFAB972C8C28025EA9B7BF61A* ___mBeforeRequestEvent_9;
	// Amazon.Runtime.ResponseEventHandler Amazon.Runtime.AmazonServiceClient::mAfterResponseEvent
	ResponseEventHandler_t7F2A2204A9C082DDEB7CBD57E67A48EEA9F0B239* ___mAfterResponseEvent_10;
	// Amazon.Runtime.ExceptionEventHandler Amazon.Runtime.AmazonServiceClient::mExceptionEvent
	ExceptionEventHandler_t76DF4C799B7554655F12F268F02EEAD1130A3CD6* ___mExceptionEvent_11;
	// Amazon.Runtime.Internal.Auth.AbstractAWSSigner Amazon.Runtime.AmazonServiceClient::<Signer>k__BackingField
	AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* ___U3CSignerU3Ek__BackingField_12;
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Amazon.CognitoIdentityProvider.Model.AttributeType
struct AttributeType_t7FAD47DA16A417B5ED70A8E27D83BD7BA13BEA78  : public RuntimeObject
{
	// System.String Amazon.CognitoIdentityProvider.Model.AttributeType::_name
	String_t* ____name_0;
	// System.String Amazon.CognitoIdentityProvider.Model.AttributeType::_value
	String_t* ____value_1;
};

// Amazon.Extensions.CognitoAuthentication.AuthFlowResponse
struct AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A  : public RuntimeObject
{
	// System.String Amazon.Extensions.CognitoAuthentication.AuthFlowResponse::<SessionID>k__BackingField
	String_t* ___U3CSessionIDU3Ek__BackingField_0;
	// Amazon.CognitoIdentityProvider.ChallengeNameType Amazon.Extensions.CognitoAuthentication.AuthFlowResponse::<ChallengeName>k__BackingField
	ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* ___U3CChallengeNameU3Ek__BackingField_1;
	// Amazon.CognitoIdentityProvider.Model.AuthenticationResultType Amazon.Extensions.CognitoAuthentication.AuthFlowResponse::<AuthenticationResult>k__BackingField
	AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* ___U3CAuthenticationResultU3Ek__BackingField_2;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Extensions.CognitoAuthentication.AuthFlowResponse::<ChallengeParameters>k__BackingField
	RuntimeObject* ___U3CChallengeParametersU3Ek__BackingField_3;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Extensions.CognitoAuthentication.AuthFlowResponse::<ClientMetadata>k__BackingField
	RuntimeObject* ___U3CClientMetadataU3Ek__BackingField_4;
};

// Amazon.Extensions.CognitoAuthentication.Util.CognitoAuthHelper
struct CognitoAuthHelper_tF40CC3B14C08BA0121EB0A565FCF6717B793D282  : public RuntimeObject
{
};

// Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants
struct CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE  : public RuntimeObject
{
};

// Amazon.Extensions.CognitoAuthentication.CognitoUser
struct CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821  : public RuntimeObject
{
	// System.String Amazon.Extensions.CognitoAuthentication.CognitoUser::<ClientSecret>k__BackingField
	String_t* ___U3CClientSecretU3Ek__BackingField_0;
	// System.String Amazon.Extensions.CognitoAuthentication.CognitoUser::<SecretHash>k__BackingField
	String_t* ___U3CSecretHashU3Ek__BackingField_1;
	// Amazon.Extensions.CognitoAuthentication.CognitoUserSession Amazon.Extensions.CognitoAuthentication.CognitoUser::<SessionTokens>k__BackingField
	CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* ___U3CSessionTokensU3Ek__BackingField_2;
	// System.String Amazon.Extensions.CognitoAuthentication.CognitoUser::<UserID>k__BackingField
	String_t* ___U3CUserIDU3Ek__BackingField_3;
	// System.String Amazon.Extensions.CognitoAuthentication.CognitoUser::<Username>k__BackingField
	String_t* ___U3CUsernameU3Ek__BackingField_4;
	// Amazon.Extensions.CognitoAuthentication.CognitoUserPool Amazon.Extensions.CognitoAuthentication.CognitoUser::<UserPool>k__BackingField
	CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* ___U3CUserPoolU3Ek__BackingField_5;
	// System.String Amazon.Extensions.CognitoAuthentication.CognitoUser::<ClientID>k__BackingField
	String_t* ___U3CClientIDU3Ek__BackingField_6;
	// System.String Amazon.Extensions.CognitoAuthentication.CognitoUser::<Status>k__BackingField
	String_t* ___U3CStatusU3Ek__BackingField_7;
	// Amazon.CognitoIdentityProvider.IAmazonCognitoIdentityProvider Amazon.Extensions.CognitoAuthentication.CognitoUser::<Provider>k__BackingField
	RuntimeObject* ___U3CProviderU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Amazon.Extensions.CognitoAuthentication.CognitoUser::<Attributes>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CAttributesU3Ek__BackingField_9;
	// System.String Amazon.Extensions.CognitoAuthentication.CognitoUser::<PoolName>k__BackingField
	String_t* ___U3CPoolNameU3Ek__BackingField_10;
};

// Amazon.Extensions.CognitoAuthentication.CognitoUserPool
struct CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4  : public RuntimeObject
{
	// System.String Amazon.Extensions.CognitoAuthentication.CognitoUserPool::<PoolID>k__BackingField
	String_t* ___U3CPoolIDU3Ek__BackingField_0;
	// System.String Amazon.Extensions.CognitoAuthentication.CognitoUserPool::<ClientID>k__BackingField
	String_t* ___U3CClientIDU3Ek__BackingField_1;
	// Amazon.CognitoIdentityProvider.IAmazonCognitoIdentityProvider Amazon.Extensions.CognitoAuthentication.CognitoUserPool::<Provider>k__BackingField
	RuntimeObject* ___U3CProviderU3Ek__BackingField_2;
	// System.String Amazon.Extensions.CognitoAuthentication.CognitoUserPool::<ClientSecret>k__BackingField
	String_t* ___U3CClientSecretU3Ek__BackingField_3;
};

// Amazon.Runtime.ConstantClass
struct ConstantClass_tF227ADAB15BBF44B1B11FC3B439F012B5CAFF442  : public RuntimeObject
{
	// System.String Amazon.Runtime.ConstantClass::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_2;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// Amazon.Extensions.CognitoAuthentication.InitiateCustomAuthRequest
struct InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Extensions.CognitoAuthentication.InitiateCustomAuthRequest::<AuthParameters>k__BackingField
	RuntimeObject* ___U3CAuthParametersU3Ek__BackingField_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Extensions.CognitoAuthentication.InitiateCustomAuthRequest::<ClientMetadata>k__BackingField
	RuntimeObject* ___U3CClientMetadataU3Ek__BackingField_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest
struct RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest::<ChallengeParameters>k__BackingField
	RuntimeObject* ___U3CChallengeParametersU3Ek__BackingField_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest::<ClientMetadata>k__BackingField
	RuntimeObject* ___U3CClientMetadataU3Ek__BackingField_1;
	// System.String Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest::<SessionID>k__BackingField
	String_t* ___U3CSessionIDU3Ek__BackingField_2;
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

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>
struct ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse>
struct ConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t040B2D8ADE8D739FEBCFA7A4AAA80876413350BF* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>
struct ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse>
struct ConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t62421925BDC0985C05B065638EFBFD75CA6A37C9* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Threading.Tasks.Task`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>
struct Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A* ___m_result_38;
};

// System.Threading.Tasks.Task`1<Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse>
struct Task_1_t040B2D8ADE8D739FEBCFA7A4AAA80876413350BF  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* ___m_result_38;
};

// System.Threading.Tasks.Task`1<Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse>
struct Task_1_t62421925BDC0985C05B065638EFBFD75CA6A37C9  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C* ___m_result_38;
};

// System.Threading.Tasks.Task`1<Amazon.CognitoIdentityProvider.Model.SignUpResponse>
struct Task_1_tCDFD88C7C279AC3FF77FA017A803840B030264EB  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	SignUpResponse_t7BD8DAE1F23CD690C3F5EDE0004A671A2A70108E* ___m_result_38;
};

// Amazon.CognitoIdentityProvider.AmazonCognitoIdentityProviderClient
struct AmazonCognitoIdentityProviderClient_t0E07D3551087EC08470443D2C21094424F53B4B4  : public AmazonServiceClient_t783F8978EB893CBAB9990B7F17D3648E5795A4AC
{
};

// System.Reflection.AssemblyFileVersionAttribute
struct AssemblyFileVersionAttribute_tEBD946AEBE271D135B9161CE0B423ED10AA933F4  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Reflection.AssemblyFileVersionAttribute::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;
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

// Amazon.CognitoIdentityProvider.AuthFlowType
struct AuthFlowType_tBE61AA75513223AD20B59024E7E078043589092C  : public ConstantClass_tF227ADAB15BBF44B1B11FC3B439F012B5CAFF442
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// Amazon.CognitoIdentityProvider.ChallengeNameType
struct ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE  : public ConstantClass_tF227ADAB15BBF44B1B11FC3B439F012B5CAFF442
{
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t782AD417BF829DAD1267A7AE4F9B553537CCF263  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue_4;
};

// Amazon.Runtime.RequestEventArgs
struct RequestEventArgs_tA481BACD3813A31F36627FC1D3B6C833EC686A73  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>
struct AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>
struct ConfiguredTaskAwaitable_1_tC0D96775EAA73CBC7E19707604897189616F4C3F 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968 ___m_configuredTaskAwaiter_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse>
struct ConfiguredTaskAwaitable_1_t8DBB13C9296821E47D4FE10CDD7AC77601AE08E5 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960 ___m_configuredTaskAwaiter_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 ___m_configuredTaskAwaiter_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse>
struct ConfiguredTaskAwaitable_1_t7B799B6DDCC4691A6AB71D62CCA4CE4A74F25A6A 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C ___m_configuredTaskAwaiter_0;
};

// Amazon.CognitoIdentityProvider.Model.AuthenticationResultType
struct AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A  : public RuntimeObject
{
	// System.String Amazon.CognitoIdentityProvider.Model.AuthenticationResultType::_accessToken
	String_t* ____accessToken_0;
	// System.Nullable`1<System.Int32> Amazon.CognitoIdentityProvider.Model.AuthenticationResultType::_expiresIn
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____expiresIn_1;
	// System.String Amazon.CognitoIdentityProvider.Model.AuthenticationResultType::_idToken
	String_t* ____idToken_2;
	// Amazon.CognitoIdentityProvider.Model.NewDeviceMetadataType Amazon.CognitoIdentityProvider.Model.AuthenticationResultType::_newDeviceMetadata
	NewDeviceMetadataType_t9934B8C236D786AAB4C2BF14B1105F01CABF6031* ____newDeviceMetadata_3;
	// System.String Amazon.CognitoIdentityProvider.Model.AuthenticationResultType::_refreshToken
	String_t* ____refreshToken_4;
	// System.String Amazon.CognitoIdentityProvider.Model.AuthenticationResultType::_tokenType
	String_t* ____tokenType_5;
};

// Amazon.Runtime.ChecksumValidationStatus
struct ChecksumValidationStatus_t508D95BC4888D389AD3B30AEBBD7BB265FE8584E 
{
	// System.Int32 Amazon.Runtime.ChecksumValidationStatus::value__
	int32_t ___value___2;
};

// Amazon.Extensions.CognitoAuthentication.CognitoUserSession
struct CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A  : public RuntimeObject
{
	// System.String Amazon.Extensions.CognitoAuthentication.CognitoUserSession::<IdToken>k__BackingField
	String_t* ___U3CIdTokenU3Ek__BackingField_0;
	// System.String Amazon.Extensions.CognitoAuthentication.CognitoUserSession::<AccessToken>k__BackingField
	String_t* ___U3CAccessTokenU3Ek__BackingField_1;
	// System.String Amazon.Extensions.CognitoAuthentication.CognitoUserSession::<RefreshToken>k__BackingField
	String_t* ___U3CRefreshTokenU3Ek__BackingField_2;
	// System.DateTime Amazon.Extensions.CognitoAuthentication.CognitoUserSession::<ExpirationTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CExpirationTimeU3Ek__BackingField_3;
	// System.DateTime Amazon.Extensions.CognitoAuthentication.CognitoUserSession::<IssuedTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CIssuedTimeU3Ek__BackingField_4;
};

// Amazon.Runtime.CoreChecksumAlgorithm
struct CoreChecksumAlgorithm_tBCFE2B1D496B26C62A22A0407F2DE09817CC0760 
{
	// System.Int32 Amazon.Runtime.CoreChecksumAlgorithm::value__
	int32_t ___value___2;
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

// System.Security.Cryptography.HMAC
struct HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684  : public KeyedHashAlgorithm_t782AD417BF829DAD1267A7AE4F9B553537CCF263
{
	// System.Int32 System.Security.Cryptography.HMAC::blockSizeValue
	int32_t ___blockSizeValue_5;
	// System.String System.Security.Cryptography.HMAC::m_hashName
	String_t* ___m_hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash1
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___m_hash1_7;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash2
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___m_hash2_8;
	// System.Byte[] System.Security.Cryptography.HMAC::m_inner
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_inner_9;
	// System.Byte[] System.Security.Cryptography.HMAC::m_outer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_outer_10;
	// System.Boolean System.Security.Cryptography.HMAC::m_hashing
	bool ___m_hashing_11;
};

// System.Net.HttpStatusCode
struct HttpStatusCode_t530B6899270B44ED560C3872DB5F9698FB7D7374 
{
	// System.Int32 System.Net.HttpStatusCode::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Amazon.Runtime.SignatureVersion
struct SignatureVersion_t8A643A44ED1F472BBE21AFE4BC73F91C6AAE06B1 
{
	// System.Int32 Amazon.Runtime.SignatureVersion::value__
	int32_t ___value___2;
};

// System.StringComparison
struct StringComparison_tE14A55CCFA001A5AC85D754179BF2888F45CC94D 
{
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;
};

// Amazon.Runtime.WebServiceRequestEventArgs
struct WebServiceRequestEventArgs_t120A45C1B3AC645E0B85163E58E49469D1BEC36C  : public RequestEventArgs_tA481BACD3813A31F36627FC1D3B6C833EC686A73
{
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.WebServiceRequestEventArgs::<Headers>k__BackingField
	RuntimeObject* ___U3CHeadersU3Ek__BackingField_1;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.WebServiceRequestEventArgs::<Parameters>k__BackingField
	RuntimeObject* ___U3CParametersU3Ek__BackingField_2;
	// Amazon.Runtime.Internal.ParameterCollection Amazon.Runtime.WebServiceRequestEventArgs::<ParameterCollection>k__BackingField
	ParameterCollection_t83FCEAC6D1D9F537507E97CA698B4D654F8D7002* ___U3CParameterCollectionU3Ek__BackingField_3;
	// System.String Amazon.Runtime.WebServiceRequestEventArgs::<ServiceName>k__BackingField
	String_t* ___U3CServiceNameU3Ek__BackingField_4;
	// System.Uri Amazon.Runtime.WebServiceRequestEventArgs::<Endpoint>k__BackingField
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___U3CEndpointU3Ek__BackingField_5;
	// Amazon.Runtime.AmazonWebServiceRequest Amazon.Runtime.WebServiceRequestEventArgs::<Request>k__BackingField
	AmazonWebServiceRequest_t2F5DE86A5D8CF70A9F2B1C997EBA9F093648429F* ___U3CRequestU3Ek__BackingField_6;
};

// Amazon.Runtime.AmazonWebServiceRequest
struct AmazonWebServiceRequest_t2F5DE86A5D8CF70A9F2B1C997EBA9F093648429F  : public RuntimeObject
{
	// Amazon.Runtime.RequestEventHandler Amazon.Runtime.AmazonWebServiceRequest::mBeforeRequestEvent
	RequestEventHandler_t7634A607863E3BECFAB972C8C28025EA9B7BF61A* ___mBeforeRequestEvent_0;
	// System.String Amazon.Runtime.AmazonWebServiceRequest::<UserAgentAddition>k__BackingField
	String_t* ___U3CUserAgentAdditionU3Ek__BackingField_1;
	// System.EventHandler`1<Amazon.Runtime.StreamTransferProgressArgs> Amazon.Runtime.AmazonWebServiceRequest::<Amazon.Runtime.Internal.IAmazonWebServiceRequest.StreamUploadProgressCallback>k__BackingField
	EventHandler_1_tD5E55DD696D9D0F969B790973310C3550ED733EB* ___U3CAmazon_Runtime_Internal_IAmazonWebServiceRequest_StreamUploadProgressCallbackU3Ek__BackingField_2;
	// Amazon.Runtime.SignatureVersion Amazon.Runtime.AmazonWebServiceRequest::<Amazon.Runtime.Internal.IAmazonWebServiceRequest.SignatureVersion>k__BackingField
	int32_t ___U3CAmazon_Runtime_Internal_IAmazonWebServiceRequest_SignatureVersionU3Ek__BackingField_3;
};

// Amazon.Runtime.AmazonWebServiceResponse
struct AmazonWebServiceResponse_t3F4B1B1621D883697F81F5FA301FE80F61FF968D  : public RuntimeObject
{
	// Amazon.Runtime.ResponseMetadata Amazon.Runtime.AmazonWebServiceResponse::responseMetadataField
	ResponseMetadata_tBF985AAFD923FA79A2759015BD7BE04ED320AE03* ___responseMetadataField_0;
	// System.Int64 Amazon.Runtime.AmazonWebServiceResponse::contentLength
	int64_t ___contentLength_1;
	// System.Net.HttpStatusCode Amazon.Runtime.AmazonWebServiceResponse::httpStatusCode
	int32_t ___httpStatusCode_2;
};

// System.Security.Cryptography.HMACSHA256
struct HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF  : public HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684
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

// Amazon.Runtime.ResponseMetadata
struct ResponseMetadata_tBF985AAFD923FA79A2759015BD7BE04ED320AE03  : public RuntimeObject
{
	// System.String Amazon.Runtime.ResponseMetadata::requestIdField
	String_t* ___requestIdField_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.ResponseMetadata::_metadata
	RuntimeObject* ____metadata_1;
	// Amazon.Runtime.CoreChecksumAlgorithm Amazon.Runtime.ResponseMetadata::<ChecksumAlgorithm>k__BackingField
	int32_t ___U3CChecksumAlgorithmU3Ek__BackingField_2;
	// Amazon.Runtime.ChecksumValidationStatus Amazon.Runtime.ResponseMetadata::<ChecksumValidationStatus>k__BackingField
	int32_t ___U3CChecksumValidationStatusU3Ek__BackingField_3;
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

// Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__106
struct U3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989 
{
	// System.Int32 Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__106::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse> Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__106::<>t__builder
	AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46 ___U3CU3Et__builder_1;
	// Amazon.Extensions.CognitoAuthentication.CognitoUser Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__106::<>4__this
	CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* ___U3CU3E4__this_2;
	// Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__106::customRequest
	RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* ___customRequest_3;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse> Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__106::<>u__1
	ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968 ___U3CU3Eu__1_4;
};

// Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__107
struct U3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0 
{
	// System.Int32 Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__107::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse> Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__107::<>t__builder
	AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46 ___U3CU3Et__builder_1;
	// Amazon.Extensions.CognitoAuthentication.CognitoUser Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__107::<>4__this
	CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* ___U3CU3E4__this_2;
	// Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__107::customRequest
	RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* ___customRequest_3;
	// System.Threading.CancellationToken Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__107::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse> Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__107::<>u__1
	ConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C ___U3CU3Eu__1_5;
};

// Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__104
struct U3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41 
{
	// System.Int32 Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__104::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse> Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__104::<>t__builder
	AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46 ___U3CU3Et__builder_1;
	// Amazon.Extensions.CognitoAuthentication.CognitoUser Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__104::<>4__this
	CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* ___U3CU3E4__this_2;
	// Amazon.Extensions.CognitoAuthentication.InitiateCustomAuthRequest Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__104::customRequest
	InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219* ___customRequest_3;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse> Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__104::<>u__1
	ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968 ___U3CU3Eu__1_4;
};

// Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__105
struct U3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C 
{
	// System.Int32 Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__105::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse> Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__105::<>t__builder
	AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46 ___U3CU3Et__builder_1;
	// Amazon.Extensions.CognitoAuthentication.InitiateCustomAuthRequest Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__105::customRequest
	InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219* ___customRequest_2;
	// Amazon.Extensions.CognitoAuthentication.CognitoUser Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__105::<>4__this
	CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* ___U3CU3E4__this_3;
	// System.Threading.CancellationToken Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__105::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse> Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__105::<>u__1
	ConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960 ___U3CU3Eu__1_5;
};

// Amazon.CognitoIdentityProvider.AmazonCognitoIdentityProviderRequest
struct AmazonCognitoIdentityProviderRequest_tE4C95B1571882A59A6D6BDAA9E521A8669F921FC  : public AmazonWebServiceRequest_t2F5DE86A5D8CF70A9F2B1C997EBA9F093648429F
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse
struct InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3  : public AmazonWebServiceResponse_t3F4B1B1621D883697F81F5FA301FE80F61FF968D
{
	// Amazon.CognitoIdentityProvider.Model.AuthenticationResultType Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse::_authenticationResult
	AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* ____authenticationResult_3;
	// Amazon.CognitoIdentityProvider.ChallengeNameType Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse::_challengeName
	ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* ____challengeName_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse::_challengeParameters
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____challengeParameters_5;
	// System.String Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse::_session
	String_t* ____session_6;
};

// Amazon.Runtime.RequestEventHandler
struct RequestEventHandler_t7634A607863E3BECFAB972C8C28025EA9B7BF61A  : public MulticastDelegate_t
{
};

// Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse
struct RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C  : public AmazonWebServiceResponse_t3F4B1B1621D883697F81F5FA301FE80F61FF968D
{
	// Amazon.CognitoIdentityProvider.Model.AuthenticationResultType Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse::_authenticationResult
	AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* ____authenticationResult_3;
	// Amazon.CognitoIdentityProvider.ChallengeNameType Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse::_challengeName
	ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* ____challengeName_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse::_challengeParameters
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____challengeParameters_5;
	// System.String Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse::_session
	String_t* ____session_6;
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// Amazon.CognitoIdentityProvider.Model.InitiateAuthRequest
struct InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB  : public AmazonCognitoIdentityProviderRequest_tE4C95B1571882A59A6D6BDAA9E521A8669F921FC
{
	// Amazon.CognitoIdentityProvider.Model.AnalyticsMetadataType Amazon.CognitoIdentityProvider.Model.InitiateAuthRequest::_analyticsMetadata
	AnalyticsMetadataType_tE39BEFE8CE0EC826450ACAF70D74265005831C0D* ____analyticsMetadata_4;
	// Amazon.CognitoIdentityProvider.AuthFlowType Amazon.CognitoIdentityProvider.Model.InitiateAuthRequest::_authFlow
	AuthFlowType_tBE61AA75513223AD20B59024E7E078043589092C* ____authFlow_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Amazon.CognitoIdentityProvider.Model.InitiateAuthRequest::_authParameters
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____authParameters_6;
	// System.String Amazon.CognitoIdentityProvider.Model.InitiateAuthRequest::_clientId
	String_t* ____clientId_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Amazon.CognitoIdentityProvider.Model.InitiateAuthRequest::_clientMetadata
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____clientMetadata_8;
	// Amazon.CognitoIdentityProvider.Model.UserContextDataType Amazon.CognitoIdentityProvider.Model.InitiateAuthRequest::_userContextData
	UserContextDataType_tDC6CB2B4636744F6067DDE34E95AB27A9355D19A* ____userContextData_9;
};

// Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeRequest
struct RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC  : public AmazonCognitoIdentityProviderRequest_tE4C95B1571882A59A6D6BDAA9E521A8669F921FC
{
	// Amazon.CognitoIdentityProvider.Model.AnalyticsMetadataType Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeRequest::_analyticsMetadata
	AnalyticsMetadataType_tE39BEFE8CE0EC826450ACAF70D74265005831C0D* ____analyticsMetadata_4;
	// Amazon.CognitoIdentityProvider.ChallengeNameType Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeRequest::_challengeName
	ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* ____challengeName_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeRequest::_challengeResponses
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____challengeResponses_6;
	// System.String Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeRequest::_clientId
	String_t* ____clientId_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeRequest::_clientMetadata
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____clientMetadata_8;
	// System.String Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeRequest::_session
	String_t* ____session_9;
	// Amazon.CognitoIdentityProvider.Model.UserContextDataType Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeRequest::_userContextData
	UserContextDataType_tDC6CB2B4636744F6067DDE34E95AB27A9355D19A* ____userContextData_10;
};

// Amazon.CognitoIdentityProvider.Model.SignUpRequest
struct SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA  : public AmazonCognitoIdentityProviderRequest_tE4C95B1571882A59A6D6BDAA9E521A8669F921FC
{
	// Amazon.CognitoIdentityProvider.Model.AnalyticsMetadataType Amazon.CognitoIdentityProvider.Model.SignUpRequest::_analyticsMetadata
	AnalyticsMetadataType_tE39BEFE8CE0EC826450ACAF70D74265005831C0D* ____analyticsMetadata_4;
	// System.String Amazon.CognitoIdentityProvider.Model.SignUpRequest::_clientId
	String_t* ____clientId_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Amazon.CognitoIdentityProvider.Model.SignUpRequest::_clientMetadata
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____clientMetadata_6;
	// System.String Amazon.CognitoIdentityProvider.Model.SignUpRequest::_password
	String_t* ____password_7;
	// System.String Amazon.CognitoIdentityProvider.Model.SignUpRequest::_secretHash
	String_t* ____secretHash_8;
	// System.Collections.Generic.List`1<Amazon.CognitoIdentityProvider.Model.AttributeType> Amazon.CognitoIdentityProvider.Model.SignUpRequest::_userAttributes
	List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* ____userAttributes_9;
	// Amazon.CognitoIdentityProvider.Model.UserContextDataType Amazon.CognitoIdentityProvider.Model.SignUpRequest::_userContextData
	UserContextDataType_tDC6CB2B4636744F6067DDE34E95AB27A9355D19A* ____userContextData_10;
	// System.String Amazon.CognitoIdentityProvider.Model.SignUpRequest::_username
	String_t* ____username_11;
	// System.Collections.Generic.List`1<Amazon.CognitoIdentityProvider.Model.AttributeType> Amazon.CognitoIdentityProvider.Model.SignUpRequest::_validationData
	List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* ____validationData_12;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.List`1<Amazon.CognitoIdentityProvider.Model.AttributeType>
struct List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AttributeTypeU5BU5D_t266DF9935B935B6348F6601AED126CCE58B804AB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Amazon.CognitoIdentityProvider.Model.AttributeType>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// Amazon.Runtime.AmazonServiceClient
struct AmazonServiceClient_t783F8978EB893CBAB9990B7F17D3648E5795A4AC_StaticFields
{
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Amazon.Runtime.AmazonServiceClient::_isProtocolUpdated
	bool ____isProtocolUpdated_0;
};

// Amazon.Runtime.AmazonServiceClient

// System.Reflection.Assembly

// System.Reflection.Assembly

// System.Attribute

// System.Attribute

// Amazon.CognitoIdentityProvider.Model.AttributeType

// Amazon.CognitoIdentityProvider.Model.AttributeType

// Amazon.Extensions.CognitoAuthentication.AuthFlowResponse

// Amazon.Extensions.CognitoAuthentication.AuthFlowResponse

// Amazon.Extensions.CognitoAuthentication.Util.CognitoAuthHelper
struct CognitoAuthHelper_tF40CC3B14C08BA0121EB0A565FCF6717B793D282_StaticFields
{
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoAuthHelper::assemblyFileVersion
	String_t* ___assemblyFileVersion_0;
};

// Amazon.Extensions.CognitoAuthentication.Util.CognitoAuthHelper

// Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants
struct CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields
{
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamSrpA
	String_t* ___ChlgParamSrpA_0;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamSrpB
	String_t* ___ChlgParamSrpB_1;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamSecretHash
	String_t* ___ChlgParamSecretHash_2;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamUsername
	String_t* ___ChlgParamUsername_3;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamChallengeName
	String_t* ___ChlgParamChallengeName_4;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamSalt
	String_t* ___ChlgParamSalt_5;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamSecretBlock
	String_t* ___ChlgParamSecretBlock_6;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamUserIDSrp
	String_t* ___ChlgParamUserIDSrp_7;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamRefreshToken
	String_t* ___ChlgParamRefreshToken_8;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamPassSecretBlock
	String_t* ___ChlgParamPassSecretBlock_9;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamPassSignature
	String_t* ___ChlgParamPassSignature_10;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamTimestamp
	String_t* ___ChlgParamTimestamp_11;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamDeliveryDest
	String_t* ___ChlgParamDeliveryDest_12;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamDeliveryMed
	String_t* ___ChlgParamDeliveryMed_13;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamSmsMfaCode
	String_t* ___ChlgParamSmsMfaCode_14;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamSoftwareTokenMfaCode
	String_t* ___ChlgParamSoftwareTokenMfaCode_15;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamDeviceKey
	String_t* ___ChlgParamDeviceKey_16;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamUserAttrs
	String_t* ___ChlgParamUserAttrs_17;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamRequiredAttrs
	String_t* ___ChlgParamRequiredAttrs_18;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamUserAttrPrefix
	String_t* ___ChlgParamUserAttrPrefix_19;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamNewPassword
	String_t* ___ChlgParamNewPassword_20;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::ChlgParamPassword
	String_t* ___ChlgParamPassword_21;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::UserAttrEmail
	String_t* ___UserAttrEmail_22;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::UserAttrPhoneNumber
	String_t* ___UserAttrPhoneNumber_23;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::DeviceAttrName
	String_t* ___DeviceAttrName_24;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::DeviceAttrRemembered
	String_t* ___DeviceAttrRemembered_25;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::DeviceAttrNotRemembered
	String_t* ___DeviceAttrNotRemembered_26;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::DeviceChlgParamSalt
	String_t* ___DeviceChlgParamSalt_27;
	// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::DeviceChlgParamVerifier
	String_t* ___DeviceChlgParamVerifier_28;
};

// Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants

// Amazon.Extensions.CognitoAuthentication.CognitoUser

// Amazon.Extensions.CognitoAuthentication.CognitoUser

// Amazon.Extensions.CognitoAuthentication.CognitoUserPool

// Amazon.Extensions.CognitoAuthentication.CognitoUserPool

// Amazon.Runtime.ConstantClass
struct ConstantClass_tF227ADAB15BBF44B1B11FC3B439F012B5CAFF442_StaticFields
{
	// System.Object Amazon.Runtime.ConstantClass::staticFieldsLock
	RuntimeObject* ___staticFieldsLock_0;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.ConstantClass>> Amazon.Runtime.ConstantClass::staticFields
	Dictionary_2_tD8F00ACF14B9BFD431C83918FCA20CD4039B8B67* ___staticFields_1;
};

// Amazon.Runtime.ConstantClass

// System.Text.Encoding
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
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// System.Security.Cryptography.HashAlgorithm

// System.Security.Cryptography.HashAlgorithm

// Amazon.Extensions.CognitoAuthentication.InitiateCustomAuthRequest

// Amazon.Extensions.CognitoAuthentication.InitiateCustomAuthRequest

// Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest

// Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest

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

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Threading.Tasks.Task`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>
struct Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tEA5472048F1E037642CEE6505520415118D4B0D6* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>

// System.Threading.Tasks.Task`1<Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse>
struct Task_1_t040B2D8ADE8D739FEBCFA7A4AAA80876413350BF_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6BCFD7B01B616040DB9CBF067F8613780F28AFC1* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse>

// System.Threading.Tasks.Task`1<Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse>
struct Task_1_t62421925BDC0985C05B065638EFBFD75CA6A37C9_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t01E4D06499E51EBA9A1FB8CBF7BFBF8464EFF348* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse>

// System.Threading.Tasks.Task`1<Amazon.CognitoIdentityProvider.Model.SignUpResponse>
struct Task_1_tCDFD88C7C279AC3FF77FA017A803840B030264EB_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6FFABA6F94BAEA110AD4C0050CBFA89578604C93* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Amazon.CognitoIdentityProvider.Model.SignUpResponse>

// Amazon.CognitoIdentityProvider.AmazonCognitoIdentityProviderClient
struct AmazonCognitoIdentityProviderClient_t0E07D3551087EC08470443D2C21094424F53B4B4_StaticFields
{
	// Amazon.Runtime.Internal.IServiceMetadata Amazon.CognitoIdentityProvider.AmazonCognitoIdentityProviderClient::serviceMetadata
	RuntimeObject* ___serviceMetadata_13;
};

// Amazon.CognitoIdentityProvider.AmazonCognitoIdentityProviderClient

// System.Reflection.AssemblyFileVersionAttribute

// System.Reflection.AssemblyFileVersionAttribute

// Amazon.CognitoIdentityProvider.AuthFlowType
struct AuthFlowType_tBE61AA75513223AD20B59024E7E078043589092C_StaticFields
{
	// Amazon.CognitoIdentityProvider.AuthFlowType Amazon.CognitoIdentityProvider.AuthFlowType::ADMIN_NO_SRP_AUTH
	AuthFlowType_tBE61AA75513223AD20B59024E7E078043589092C* ___ADMIN_NO_SRP_AUTH_3;
	// Amazon.CognitoIdentityProvider.AuthFlowType Amazon.CognitoIdentityProvider.AuthFlowType::ADMIN_USER_PASSWORD_AUTH
	AuthFlowType_tBE61AA75513223AD20B59024E7E078043589092C* ___ADMIN_USER_PASSWORD_AUTH_4;
	// Amazon.CognitoIdentityProvider.AuthFlowType Amazon.CognitoIdentityProvider.AuthFlowType::CUSTOM_AUTH
	AuthFlowType_tBE61AA75513223AD20B59024E7E078043589092C* ___CUSTOM_AUTH_5;
	// Amazon.CognitoIdentityProvider.AuthFlowType Amazon.CognitoIdentityProvider.AuthFlowType::REFRESH_TOKEN
	AuthFlowType_tBE61AA75513223AD20B59024E7E078043589092C* ___REFRESH_TOKEN_6;
	// Amazon.CognitoIdentityProvider.AuthFlowType Amazon.CognitoIdentityProvider.AuthFlowType::REFRESH_TOKEN_AUTH
	AuthFlowType_tBE61AA75513223AD20B59024E7E078043589092C* ___REFRESH_TOKEN_AUTH_7;
	// Amazon.CognitoIdentityProvider.AuthFlowType Amazon.CognitoIdentityProvider.AuthFlowType::USER_PASSWORD_AUTH
	AuthFlowType_tBE61AA75513223AD20B59024E7E078043589092C* ___USER_PASSWORD_AUTH_8;
	// Amazon.CognitoIdentityProvider.AuthFlowType Amazon.CognitoIdentityProvider.AuthFlowType::USER_SRP_AUTH
	AuthFlowType_tBE61AA75513223AD20B59024E7E078043589092C* ___USER_SRP_AUTH_9;
};

// Amazon.CognitoIdentityProvider.AuthFlowType

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// Amazon.CognitoIdentityProvider.ChallengeNameType
struct ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE_StaticFields
{
	// Amazon.CognitoIdentityProvider.ChallengeNameType Amazon.CognitoIdentityProvider.ChallengeNameType::ADMIN_NO_SRP_AUTH
	ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* ___ADMIN_NO_SRP_AUTH_3;
	// Amazon.CognitoIdentityProvider.ChallengeNameType Amazon.CognitoIdentityProvider.ChallengeNameType::CUSTOM_CHALLENGE
	ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* ___CUSTOM_CHALLENGE_4;
	// Amazon.CognitoIdentityProvider.ChallengeNameType Amazon.CognitoIdentityProvider.ChallengeNameType::DEVICE_PASSWORD_VERIFIER
	ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* ___DEVICE_PASSWORD_VERIFIER_5;
	// Amazon.CognitoIdentityProvider.ChallengeNameType Amazon.CognitoIdentityProvider.ChallengeNameType::DEVICE_SRP_AUTH
	ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* ___DEVICE_SRP_AUTH_6;
	// Amazon.CognitoIdentityProvider.ChallengeNameType Amazon.CognitoIdentityProvider.ChallengeNameType::MFA_SETUP
	ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* ___MFA_SETUP_7;
	// Amazon.CognitoIdentityProvider.ChallengeNameType Amazon.CognitoIdentityProvider.ChallengeNameType::NEW_PASSWORD_REQUIRED
	ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* ___NEW_PASSWORD_REQUIRED_8;
	// Amazon.CognitoIdentityProvider.ChallengeNameType Amazon.CognitoIdentityProvider.ChallengeNameType::PASSWORD_VERIFIER
	ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* ___PASSWORD_VERIFIER_9;
	// Amazon.CognitoIdentityProvider.ChallengeNameType Amazon.CognitoIdentityProvider.ChallengeNameType::SELECT_MFA_TYPE
	ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* ___SELECT_MFA_TYPE_10;
	// Amazon.CognitoIdentityProvider.ChallengeNameType Amazon.CognitoIdentityProvider.ChallengeNameType::SMS_MFA
	ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* ___SMS_MFA_11;
	// Amazon.CognitoIdentityProvider.ChallengeNameType Amazon.CognitoIdentityProvider.ChallengeNameType::SOFTWARE_TOKEN_MFA
	ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* ___SOFTWARE_TOKEN_MFA_12;
};

// Amazon.CognitoIdentityProvider.ChallengeNameType

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.DateTime
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

// System.DateTime

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Amazon.Runtime.RequestEventArgs

// Amazon.Runtime.RequestEventArgs

// System.Void

// System.Void

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>
struct AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse>

// Amazon.CognitoIdentityProvider.Model.AuthenticationResultType

// Amazon.CognitoIdentityProvider.Model.AuthenticationResultType

// Amazon.Extensions.CognitoAuthentication.CognitoUserSession

// Amazon.Extensions.CognitoAuthentication.CognitoUserSession

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.StringComparison

// System.StringComparison

// Amazon.Runtime.WebServiceRequestEventArgs

// Amazon.Runtime.WebServiceRequestEventArgs

// Amazon.Runtime.AmazonWebServiceResponse

// Amazon.Runtime.AmazonWebServiceResponse

// System.Security.Cryptography.HMACSHA256

// System.Security.Cryptography.HMACSHA256

// Amazon.Runtime.ResponseMetadata

// Amazon.Runtime.ResponseMetadata

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

// Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__106

// Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__106

// Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__107

// Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__107

// Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__104

// Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__104

// Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__105

// Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__105

// System.ArgumentException

// System.ArgumentException

// Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse

// Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse

// Amazon.Runtime.RequestEventHandler

// Amazon.Runtime.RequestEventHandler

// Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse

// Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse

// System.Reflection.TypeInfo

// System.Reflection.TypeInfo

// System.ArgumentNullException

// System.ArgumentNullException

// Amazon.CognitoIdentityProvider.Model.InitiateAuthRequest

// Amazon.CognitoIdentityProvider.Model.InitiateAuthRequest

// Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeRequest

// Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeRequest

// Amazon.CognitoIdentityProvider.Model.SignUpRequest

// Amazon.CognitoIdentityProvider.Model.SignUpRequest
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__104>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41_m1834A00EA159CFE003FF400D396E642497F2777A_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__105>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C_m6216343700268C69AE82FC5E9A0D63697C87A76D_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__106>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989_m9657106A30E19EA213E308D3E86CBD87E20D2569_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__107>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0_m6A16D377B34AE03DE2CB83F65E7441C4D3F88369_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8 Task_1_ConfigureAwait_m9D6420C859925B7C250DED7586DD770C91632070_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline (ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mD6243A7544181F96816A5F81459F4B66908ADB5E_gshared (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__106>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989_m17F610F513B4AA2F2C86B5180268773CBAB6C0DC_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___0_awaiter, U3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConfiguredTaskAwaiter_GetResult_m00ABE5C46A983C38086438B7A7CB2C62296B3383_gshared (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m623BF34EB93B2B3A3B7D46743B508E2E2958939E_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__107>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0_mF57BE4CC8A929ADFDCEB346C9F32E598D74BA1B9_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___0_awaiter, U3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__104>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41_mFA398FD92AF348E5758340F95370E1B61ADC7D82_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___0_awaiter, U3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__105>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C_m42950788E2C93F646955D1BB962BFBF2BFD04CBE_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___0_awaiter, U3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.String Amazon.Extensions.CognitoAuthentication.CognitoUserPool::get_PoolID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CognitoUserPool_get_PoolID_m99281C53A7CAC1D4CDF0C32090941FD0F6D126E8_inline (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_separator, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_PoolName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_PoolName_mCAB483AF91654ABD85D21B3998B66E2CF0249F83_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_ClientSecret(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_ClientSecret_mFE1679788E5D472AF992D1CA8AF994864DCF3728_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoAuthHelper::GetUserPoolSecretHash(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CognitoAuthHelper_GetUserPoolSecretHash_mF57E3665C72AD602AB5E76934BF0C3867B1CC6CF (String_t* ___0_userID, String_t* ___1_clientID, String_t* ___2_clientSecret, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_SecretHash(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_SecretHash_m14B08D454FF69FED4961163FC6BE9CA6D133C3BE_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_UserID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_UserID_m6C32991823583CE9E73F559A422DD92DD1B19E99_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_Username(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_Username_m4FBD3492324058AD333B8D7F24647AB3E85E4C77_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_Status(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_Status_m38E853C10A44D0BF3C6EB417B60EBF3EEDD18BAD_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_UserPool(Amazon.Extensions.CognitoAuthentication.CognitoUserPool)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_UserPool_m1D8B9B354129A8B45DABCD4702F4D21CC50B1CC9_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_ClientID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_ClientID_mCE2F7C94E3C0D6392BC319355022DF6ED28C29D8_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_SessionTokens(Amazon.Extensions.CognitoAuthentication.CognitoUserSession)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_SessionTokens_m5EB6A752215B2EBE6710985BFF7550040D0DF175_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_Attributes(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_Attributes_m85E4278DBBB1C7A0DC0B345E21869B46A8DF3C99_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_Provider(Amazon.CognitoIdentityProvider.IAmazonCognitoIdentityProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_Provider_mE3EF1C4D02BB67540B01384FC8F4A160B3882D6C_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// Amazon.CognitoIdentityProvider.IAmazonCognitoIdentityProvider Amazon.Extensions.CognitoAuthentication.CognitoUser::get_Provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CognitoUser_get_Provider_m92E887F0BC7FF366D8FD95A0EB9AD82060AF4101_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.RequestEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestEventHandler__ctor_mC6982232BF47E67D98A30C3EC5245A8F2367D130 (RequestEventHandler_t7634A607863E3BECFAB972C8C28025EA9B7BF61A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.AmazonServiceClient::add_BeforeRequestEvent(Amazon.Runtime.RequestEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmazonServiceClient_add_BeforeRequestEvent_m28F5D7FF85185E61668B0866E936DCD6CB1AE115 (AmazonServiceClient_t783F8978EB893CBAB9990B7F17D3648E5795A4AC* __this, RequestEventHandler_t7634A607863E3BECFAB972C8C28025EA9B7BF61A* ___0_value, const RuntimeMethod* method) ;
// System.String Amazon.CognitoIdentityProvider.Model.AuthenticationResultType::get_IdToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationResultType_get_IdToken_m535BC6A3D81FC50D798B5D4E8BC4DDACB80DDABB_inline (AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* __this, const RuntimeMethod* method) ;
// System.String Amazon.CognitoIdentityProvider.Model.AuthenticationResultType::get_AccessToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationResultType_get_AccessToken_m492D95909C8FA460144DCCBC83835710076ABE3A_inline (AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.String Amazon.CognitoIdentityProvider.Model.AuthenticationResultType::get_RefreshToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationResultType_get_RefreshToken_m52835C605AF2F9499917C892FEE7FA455DD17388_inline (AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* __this, const RuntimeMethod* method) ;
// System.Int32 Amazon.CognitoIdentityProvider.Model.AuthenticationResultType::get_ExpiresIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AuthenticationResultType_get_ExpiresIn_mB7A85DDE0F6B930372035B63315EB706ADA2B783 (AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserSession::.ctor(System.String,System.String,System.String,System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUserSession__ctor_m689A5F392D3F769F3995550351A33FC40221EAE0 (CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* __this, String_t* ___0_idToken, String_t* ___1_accessToken, String_t* ___2_refreshToken, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___3_issuedTime, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___4_expirationTime, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>::Create()
inline AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46 AsyncTaskMethodBuilder_1_Create_m099727057491B93844F4F63BF9625FA69650D920 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>::Start<Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__104>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41_m38E0565FDF86F07ABC1D0DE9AAA4538A12EB090F (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* __this, U3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*, U3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41_m1834A00EA159CFE003FF400D396E642497F2777A_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>::get_Task()
inline Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F* AsyncTaskMethodBuilder_1_get_Task_m9F2729A370CCA8BBE5F886D74917C0656AEEF7CA (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F* (*) (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>::Start<Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__105>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C_mF2DAD3B9F601A274276ED7F8E7A3F65545C48109 (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* __this, U3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*, U3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C_m6216343700268C69AE82FC5E9A0D63697C87A76D_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>::Start<Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__106>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989_m1B9A9176BFA0269C12817E218339D3A014E4645D (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* __this, U3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*, U3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989_m9657106A30E19EA213E308D3E86CBD87E20D2569_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>::Start<Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__107>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0_m308D009FAE689EC7201DC75835A1461FDC0B51A7 (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* __this, U3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*, U3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0_m6A16D377B34AE03DE2CB83F65E7441C4D3F88369_gshared)(__this, ___0_stateMachine, method);
}
// System.String Amazon.Runtime.ConstantClass::op_Implicit(Amazon.Runtime.ConstantClass)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConstantClass_op_Implicit_mCCA71F636BFC0890C09E998CD454443993433922 (ConstantClass_tF227ADAB15BBF44B1B11FC3B439F012B5CAFF442* ___0_value, const RuntimeMethod* method) ;
// Amazon.Extensions.CognitoAuthentication.CognitoUserSession Amazon.Extensions.CognitoAuthentication.CognitoUser::GetCognitoUserSession(Amazon.CognitoIdentityProvider.Model.AuthenticationResultType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* CognitoUser_GetCognitoUserSession_mE7638E52910982A69D7C6E122FA60847625DFDE4 (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* ___0_authResult, String_t* ___1_refreshTokenOverride, const RuntimeMethod* method) ;
// System.String Amazon.Extensions.CognitoAuthentication.CognitoUser::get_Username()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CognitoUser_get_Username_m0AB105B02E3075B1BD90A3E1054DB493AFF751B2_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, const RuntimeMethod* method) ;
// System.String Amazon.Extensions.CognitoAuthentication.CognitoUser::get_UserID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CognitoUser_get_UserID_m951679906C800CBC5CDA0A20DDB526964AD64CE8_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B (String_t* ___0_a, String_t* ___1_b, int32_t ___2_comparisonType, const RuntimeMethod* method) ;
// System.String Amazon.Extensions.CognitoAuthentication.CognitoUser::get_ClientSecret()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CognitoUser_get_ClientSecret_m53AFAB5A3C690D81D2280446AD4BDEEBC2F96033_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, const RuntimeMethod* method) ;
// System.String Amazon.Extensions.CognitoAuthentication.CognitoUser::get_ClientID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CognitoUser_get_ClientID_m658BA35B3F4E6715415B3F73C7515973B32A4334_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_tC0D96775EAA73CBC7E19707604897189616F4C3F Task_1_ConfigureAwait_m4236887B150F886EAAAE4A06CF03D6C4E0FAE055 (Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_tC0D96775EAA73CBC7E19707604897189616F4C3F (*) (Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F*, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m9D6420C859925B7C250DED7586DD770C91632070_gshared)(__this, ___0_continueOnCapturedContext, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>::GetAwaiter()
inline ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968 ConfiguredTaskAwaitable_1_GetAwaiter_m030C3B98ABF7AAC107B58D1A1FB1B701B1139A56_inline (ConfiguredTaskAwaitable_1_tC0D96775EAA73CBC7E19707604897189616F4C3F* __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968 (*) (ConfiguredTaskAwaitable_1_tC0D96775EAA73CBC7E19707604897189616F4C3F*, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_mABDDE10FDC157EF6F8DA158D99F1C9DDCA15E46B (ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968*, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mD6243A7544181F96816A5F81459F4B66908ADB5E_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>,Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__106>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968_TisU3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989_mF116E48B65BA3D20C05B15C1906421370F8C674F (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* __this, ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968* ___0_awaiter, U3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*, ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968*, U3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989_m17F610F513B4AA2F2C86B5180268773CBAB6C0DC_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>::GetResult()
inline AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A* ConfiguredTaskAwaiter_GetResult_m295F81189077054B6D354950AED200612A4C0153 (ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968* __this, const RuntimeMethod* method)
{
	return ((  AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A* (*) (ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968*, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m00ABE5C46A983C38086438B7A7CB2C62296B3383_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m79924F59B204325407F2623448F8C9E7868924CB (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m8DBB9B28CA0434FF87A202D48FDCCFC85B0D5155 (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* __this, AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*, AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__106::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespondToCustomAuthAsyncU3Ed__106_MoveNext_m7B12507FFC4EA608603D2166E87A15024A57E73F (U3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mBA625C3B5E44E04FC3A40F9E9960BFA5B38CEB3A (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___0_stateMachine, method);
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__106::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespondToCustomAuthAsyncU3Ed__106_SetStateMachine_m4E704BAD27F0092E78CC7767C5146CBF8E6FEED0 (U3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespondToAuthChallengeRequest__ctor_mA345F145A36AF9A2C81219EEE927515437348D00 (RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC* __this, const RuntimeMethod* method) ;
// System.Void Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeRequest::set_ChallengeName(Amazon.CognitoIdentityProvider.ChallengeNameType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RespondToAuthChallengeRequest_set_ChallengeName_mB23654BBD289D6D0288F5554A16EB49DA669A5DB_inline (RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC* __this, ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeRequest::set_ClientId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RespondToAuthChallengeRequest_set_ClientId_m8AF8F82607DB97CFAB8CE5E6F3DBAF6FE0F52BD2_inline (RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest::get_ChallengeParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RespondToCustomChallengeRequest_get_ChallengeParameters_m977692123830D002949D2B770B19829057DA0580_inline (RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m623BF34EB93B2B3A3B7D46743B508E2E2958939E_gshared)(__this, ___0_dictionary, method);
}
// System.Void Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeRequest::set_ChallengeResponses(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RespondToAuthChallengeRequest_set_ChallengeResponses_m3D7C354308D18CE7628F0FD5FD13AE8882540AF0_inline (RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest::get_ClientMetadata()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RespondToCustomChallengeRequest_get_ClientMetadata_mCBF0B8DE18D45CC2AAD0213245AEB89C2981376B_inline (RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* __this, const RuntimeMethod* method) ;
// System.Void Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeRequest::set_ClientMetadata(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RespondToAuthChallengeRequest_set_ClientMetadata_m703018EA33A391448C4EA7A771AF6399A5826F1D_inline (RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) ;
// System.String Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest::get_SessionID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RespondToCustomChallengeRequest_get_SessionID_m0A562729A3925659417B697F8355B3D6700FC6D3_inline (RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* __this, const RuntimeMethod* method) ;
// System.Void Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeRequest::set_Session(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RespondToAuthChallengeRequest_set_Session_m4901A40AA5B9A70F2F30F82BDBA24E3B89CFE17D_inline (RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t7B799B6DDCC4691A6AB71D62CCA4CE4A74F25A6A Task_1_ConfigureAwait_m93CAC5BC5446389E6228F0FF8FC62169D7FF0B8E (Task_1_t62421925BDC0985C05B065638EFBFD75CA6A37C9* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t7B799B6DDCC4691A6AB71D62CCA4CE4A74F25A6A (*) (Task_1_t62421925BDC0985C05B065638EFBFD75CA6A37C9*, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m9D6420C859925B7C250DED7586DD770C91632070_gshared)(__this, ___0_continueOnCapturedContext, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse>::GetAwaiter()
inline ConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C ConfiguredTaskAwaitable_1_GetAwaiter_m920BFD1F52774606B033AF07D2509471B27ED877_inline (ConfiguredTaskAwaitable_1_t7B799B6DDCC4691A6AB71D62CCA4CE4A74F25A6A* __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C (*) (ConfiguredTaskAwaitable_1_t7B799B6DDCC4691A6AB71D62CCA4CE4A74F25A6A*, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m8766F26D3A7B03C9A2ACE33B56307F71E989CC31 (ConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C*, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mD6243A7544181F96816A5F81459F4B66908ADB5E_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse>,Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__107>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C_TisU3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0_m1A88623A946B7116B5A9D56404FBF8FAAC04AB7A (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* __this, ConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C* ___0_awaiter, U3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*, ConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C*, U3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0_mF57BE4CC8A929ADFDCEB346C9F32E598D74BA1B9_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse>::GetResult()
inline RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C* ConfiguredTaskAwaiter_GetResult_m094CD328E5A9F3C42FA63C286B2E9C7C51FD4EDF (ConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C* __this, const RuntimeMethod* method)
{
	return ((  RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C* (*) (ConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C*, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m00ABE5C46A983C38086438B7A7CB2C62296B3383_gshared)(__this, method);
}
// Amazon.CognitoIdentityProvider.ChallengeNameType Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse::get_ChallengeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* RespondToAuthChallengeResponse_get_ChallengeName_mF24A98289977D029353261C32812D37795699258_inline (RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C* __this, const RuntimeMethod* method) ;
// Amazon.CognitoIdentityProvider.Model.AuthenticationResultType Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse::get_AuthenticationResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* RespondToAuthChallengeResponse_get_AuthenticationResult_m8A8D40A281D87AC5DBFC2F0EA96F5CAD79F4207A_inline (RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::UpdateSessionIfAuthenticationComplete(Amazon.CognitoIdentityProvider.ChallengeNameType,Amazon.CognitoIdentityProvider.Model.AuthenticationResultType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUser_UpdateSessionIfAuthenticationComplete_mEB4F85EDA80395EC6894744ED53D0F128A1FF593 (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* ___0_challengeName, AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* ___1_authResult, const RuntimeMethod* method) ;
// System.String Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse::get_Session()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RespondToAuthChallengeResponse_get_Session_m376193C0DA6D7BA93AD48EE4324E37123506AC09_inline (RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse::get_ChallengeParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* RespondToAuthChallengeResponse_get_ChallengeParameters_mF34752BF95181873017F0AA61F30A1A309632F70_inline (RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C* __this, const RuntimeMethod* method) ;
// Amazon.Runtime.ResponseMetadata Amazon.Runtime.AmazonWebServiceResponse::get_ResponseMetadata()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResponseMetadata_tBF985AAFD923FA79A2759015BD7BE04ED320AE03* AmazonWebServiceResponse_get_ResponseMetadata_m48152D51DE0B428227272EBD7BF93B1C253F8EA1_inline (AmazonWebServiceResponse_t3F4B1B1621D883697F81F5FA301FE80F61FF968D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.ResponseMetadata::get_Metadata()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResponseMetadata_get_Metadata_m828F215E34DE4F5AFD29D4D0F1ED0B2B6B7B77FA (ResponseMetadata_tBF985AAFD923FA79A2759015BD7BE04ED320AE03* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.AuthFlowResponse::.ctor(System.String,Amazon.CognitoIdentityProvider.Model.AuthenticationResultType,Amazon.CognitoIdentityProvider.ChallengeNameType,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthFlowResponse__ctor_mAEDF65E3A4CB4C8D2D5CD27FE01C5F6CCB155629 (AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A* __this, String_t* ___0_sessionId, AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* ___1_authenticationResult, ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* ___2_challengeName, RuntimeObject* ___3_challengeParameters, RuntimeObject* ___4_clientMetadata, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__107::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespondToCustomAuthAsyncU3Ed__107_MoveNext_mF6511D099531D2306B78F4A84F58A767B69E0440 (U3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__107::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespondToCustomAuthAsyncU3Ed__107_SetStateMachine_m526986BDC0B03DFD4C18D54B1C62566E64D2EF77 (U3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>,Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__104>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968_TisU3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41_mFCE987C31CCD35802AFED51AD58E2970DFDFC87D (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* __this, ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968* ___0_awaiter, U3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*, ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968*, U3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41_mFA398FD92AF348E5758340F95370E1B61ADC7D82_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__104::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWithCustomAuthAsyncU3Ed__104_MoveNext_m3DADDF7D050E7201E0649BED7767DFB66638DBB6 (U3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__104::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWithCustomAuthAsyncU3Ed__104_SetStateMachine_mB7CA65B04DCA87A2CA798481AB291BF174B46BDD (U3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Amazon.CognitoIdentityProvider.Model.InitiateAuthRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitiateAuthRequest__ctor_m3A61807A1A6B2E2A2481384097CE965EC2555D51 (InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB* __this, const RuntimeMethod* method) ;
// System.Void Amazon.CognitoIdentityProvider.Model.InitiateAuthRequest::set_AuthFlow(Amazon.CognitoIdentityProvider.AuthFlowType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InitiateAuthRequest_set_AuthFlow_m333BCB06AD95FD6E9AD777242F44439047CA067C_inline (InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB* __this, AuthFlowType_tBE61AA75513223AD20B59024E7E078043589092C* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Extensions.CognitoAuthentication.InitiateCustomAuthRequest::get_AuthParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InitiateCustomAuthRequest_get_AuthParameters_m129A9FCEDA144DDA475FE59478D750B4FE51C7DC_inline (InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219* __this, const RuntimeMethod* method) ;
// System.Void Amazon.CognitoIdentityProvider.Model.InitiateAuthRequest::set_AuthParameters(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InitiateAuthRequest_set_AuthParameters_m0EF43D28A25B2EF37B119AF6D6DDB86BD9210C47_inline (InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.CognitoIdentityProvider.Model.InitiateAuthRequest::set_ClientId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InitiateAuthRequest_set_ClientId_m812E96C0B6636DE9E202DF5A96CB78F909104D50_inline (InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Extensions.CognitoAuthentication.InitiateCustomAuthRequest::get_ClientMetadata()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InitiateCustomAuthRequest_get_ClientMetadata_m05E158CC040A58F46E1C64623732ED94BD0D2AB6_inline (InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219* __this, const RuntimeMethod* method) ;
// System.Void Amazon.CognitoIdentityProvider.Model.InitiateAuthRequest::set_ClientMetadata(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InitiateAuthRequest_set_ClientMetadata_m399A9AD63826132577D7034589C8A7A876015928_inline (InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t8DBB13C9296821E47D4FE10CDD7AC77601AE08E5 Task_1_ConfigureAwait_m70041B804243C56052F1469E5BE5E2AB78A4CAA0 (Task_1_t040B2D8ADE8D739FEBCFA7A4AAA80876413350BF* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t8DBB13C9296821E47D4FE10CDD7AC77601AE08E5 (*) (Task_1_t040B2D8ADE8D739FEBCFA7A4AAA80876413350BF*, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m9D6420C859925B7C250DED7586DD770C91632070_gshared)(__this, ___0_continueOnCapturedContext, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse>::GetAwaiter()
inline ConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960 ConfiguredTaskAwaitable_1_GetAwaiter_m4ABB7BD7F6880E8C271184274B596307BB84176F_inline (ConfiguredTaskAwaitable_1_t8DBB13C9296821E47D4FE10CDD7AC77601AE08E5* __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960 (*) (ConfiguredTaskAwaitable_1_t8DBB13C9296821E47D4FE10CDD7AC77601AE08E5*, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m70E3FA1F98212436E4E4D975F5904F6BFABBC256 (ConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960*, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mD6243A7544181F96816A5F81459F4B66908ADB5E_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse>,Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__105>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960_TisU3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C_m43A6BAD7CE5556EAEF57122A881E0564A217A100 (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* __this, ConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960* ___0_awaiter, U3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*, ConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960*, U3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C_m42950788E2C93F646955D1BB962BFBF2BFD04CBE_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse>::GetResult()
inline InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* ConfiguredTaskAwaiter_GetResult_mEC6714330A618645449D77CAA62D1FD6FB087E89 (ConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960* __this, const RuntimeMethod* method)
{
	return ((  InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* (*) (ConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960*, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m00ABE5C46A983C38086438B7A7CB2C62296B3383_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse::get_ChallengeParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* InitiateAuthResponse_get_ChallengeParameters_m42A92885A554898A1E2E9729026C69F1D927F1C7_inline (InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::UpdateUsernameAndSecretHash(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUser_UpdateUsernameAndSecretHash_m02A83442180CAEC1FE58577ED40949F00C8A328A (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, RuntimeObject* ___0_challengeParameters, const RuntimeMethod* method) ;
// Amazon.CognitoIdentityProvider.ChallengeNameType Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse::get_ChallengeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* InitiateAuthResponse_get_ChallengeName_mED12592384E09492D6E81B709B026D4A497AA0CB_inline (InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* __this, const RuntimeMethod* method) ;
// Amazon.CognitoIdentityProvider.Model.AuthenticationResultType Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse::get_AuthenticationResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* InitiateAuthResponse_get_AuthenticationResult_mE10CF96861D444017FEDA15A11931FEC35244B52_inline (InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* __this, const RuntimeMethod* method) ;
// System.String Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse::get_Session()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InitiateAuthResponse_get_Session_m5ECBBF616211034F7807C34DBC728FE8DFBE38F0_inline (InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__105::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWithCustomAuthAsyncU3Ed__105_MoveNext_m56995677C3A16EBE738EAED244DA05EFCCFD7D69 (U3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__105::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWithCustomAuthAsyncU3Ed__105_SetStateMachine_mFC6EDC339179DC12F0F1110B4D6996A62EF6F351 (U3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserPool::set_PoolID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUserPool_set_PoolID_m872334DB96658739F44F45FA27DDB07C8573CA21_inline (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserPool::set_ClientID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUserPool_set_ClientID_mC11BD963F601E3F75606DB64EDEC2343AB37779C_inline (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserPool::set_ClientSecret(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUserPool_set_ClientSecret_m1F07032E4806B640C348F79DCAB11CF7C314C544_inline (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserPool::set_Provider(Amazon.CognitoIdentityProvider.IAmazonCognitoIdentityProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUserPool_set_Provider_m1DE05BF8CA2CB1797A83E829FBD67745AB1E8A5A_inline (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// Amazon.CognitoIdentityProvider.IAmazonCognitoIdentityProvider Amazon.Extensions.CognitoAuthentication.CognitoUserPool::get_Provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CognitoUserPool_get_Provider_m376993456FD42DCEE91FEB3FE75168934BC3FEAC_inline (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Amazon.Extensions.CognitoAuthentication.CognitoUserPool::SignUpAsync(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CognitoUserPool_SignUpAsync_mCBAD93B9FF020B7E9CB2662AF66F43F4BE503580 (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, String_t* ___0_userID, String_t* ___1_password, RuntimeObject* ___2_userAttributes, RuntimeObject* ___3_validationData, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___4_cancellationToken, const RuntimeMethod* method) ;
// Amazon.CognitoIdentityProvider.Model.SignUpRequest Amazon.Extensions.CognitoAuthentication.CognitoUserPool::CreateSignUpRequest(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* CognitoUserPool_CreateSignUpRequest_m81C8C716C9AC0476D2AC21DA6E3EF848B9E25524 (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, String_t* ___0_userID, String_t* ___1_password, RuntimeObject* ___2_userAttributes, RuntimeObject* ___3_validationData, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Amazon.CognitoIdentityProvider.Model.AttributeType> Amazon.Extensions.CognitoAuthentication.Util.CognitoAuthHelper::CreateAttributeList(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* CognitoAuthHelper_CreateAttributeList_m2E05B395FA796BDD456827DAFBD4905D1648BC95 (RuntimeObject* ___0_attributeDict, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Amazon.CognitoIdentityProvider.Model.SignUpRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignUpRequest__ctor_m0B67DCA6A34887B4D549C32B712200999C7F22D1 (SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* __this, const RuntimeMethod* method) ;
// System.Void Amazon.CognitoIdentityProvider.Model.SignUpRequest::set_Username(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignUpRequest_set_Username_m8DB936184365AC96E767F168BAD6FBE814FB40A3_inline (SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.CognitoIdentityProvider.Model.SignUpRequest::set_Password(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignUpRequest_set_Password_mD565933319C5CFC0BACC971D95207102063E7F3C_inline (SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Amazon.Extensions.CognitoAuthentication.CognitoUserPool::get_ClientID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CognitoUserPool_get_ClientID_m0927CCCC84DA6816E9503A58EAD8D0BD085A984D_inline (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, const RuntimeMethod* method) ;
// System.Void Amazon.CognitoIdentityProvider.Model.SignUpRequest::set_ClientId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignUpRequest_set_ClientId_m18FCBE6E7436FFFBFF1F7D7B63C55AE2DF8E6DBF_inline (SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.CognitoIdentityProvider.Model.SignUpRequest::set_UserAttributes(System.Collections.Generic.List`1<Amazon.CognitoIdentityProvider.Model.AttributeType>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignUpRequest_set_UserAttributes_mFD3805E87777B937DDAF4C2B5E412D09E238D23C_inline (SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* __this, List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.CognitoIdentityProvider.Model.SignUpRequest::set_ValidationData(System.Collections.Generic.List`1<Amazon.CognitoIdentityProvider.Model.AttributeType>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignUpRequest_set_ValidationData_mFD302AD13B25B8BFE2D39C2E8EE06A049F92218A_inline (SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* __this, List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* ___0_value, const RuntimeMethod* method) ;
// System.String Amazon.Extensions.CognitoAuthentication.CognitoUserPool::get_ClientSecret()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CognitoUserPool_get_ClientSecret_mFA5C789B8A063D0949C445E9AD99AB98B2242B91_inline (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, const RuntimeMethod* method) ;
// System.Void Amazon.CognitoIdentityProvider.Model.SignUpRequest::set_SecretHash(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignUpRequest_set_SecretHash_m1F91F0AC35DF10DA4BBBC30512C7A445ECC2452F_inline (SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserSession::set_IdToken(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUserSession_set_IdToken_m173D74B12BD768C165586DDAE0CC531E864516D2_inline (CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserSession::set_AccessToken(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUserSession_set_AccessToken_mA0DFBDAC012FB94716AE4FB6BED6AD46318FA760_inline (CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserSession::set_RefreshToken(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUserSession_set_RefreshToken_m27AE16CED6E6FF1B4D0C62064A0CC82A394F6DB9_inline (CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserSession::set_IssuedTime(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUserSession_set_IssuedTime_m668E36A3A21703E73D2BFF33719B24A185B0574C_inline (CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) ;
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserSession::set_ExpirationTime(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUserSession_set_ExpirationTime_mD22E03ED858E76D5F45EB72B92DF2AF6F60ED8B7_inline (CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Attribute System.Reflection.CustomAttributeExtensions::GetCustomAttribute(System.Reflection.Assembly,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* CustomAttributeExtensions_GetCustomAttribute_m5BEDBB46CF1A8378A386E144E4591C9BEDAF1A9B (Assembly_t* ___0_element, Type_t* ___1_attributeType, const RuntimeMethod* method) ;
// System.String System.Reflection.AssemblyFileVersionAttribute::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AssemblyFileVersionAttribute_get_Version_m1B58C7F8413CE06BBAFBE74A1748B1E100CF73AE_inline (AssemblyFileVersionAttribute_tEBD946AEBE271D135B9161CE0B423ED10AA933F4* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.HMACSHA256::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMACSHA256__ctor_mFB46BF6A850BF47C0F079F026E79BDBFA6F866A5 (HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inArray, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Amazon.CognitoIdentityProvider.Model.AttributeType>::.ctor()
inline void List_1__ctor_m5BD713027E345EAD9E38B857E02832F52B4ABC8C (List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Amazon.CognitoIdentityProvider.Model.AttributeType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeType__ctor_mEBDE4BDB3A96D8C5232F6CC1611F74188EC40897 (AttributeType_t7FAD47DA16A417B5ED70A8E27D83BD7BA13BEA78* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Void Amazon.CognitoIdentityProvider.Model.AttributeType::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AttributeType_set_Name_mF2242DFF72D147F733AEB9DC4988CF6DDAD9F750_inline (AttributeType_t7FAD47DA16A417B5ED70A8E27D83BD7BA13BEA78* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void Amazon.CognitoIdentityProvider.Model.AttributeType::set_Value(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AttributeType_set_Value_m106C68540013CACA00EEE1EEC6115F1076B758F3_inline (AttributeType_t7FAD47DA16A417B5ED70A8E27D83BD7BA13BEA78* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Amazon.CognitoIdentityProvider.Model.AttributeType>::Add(T)
inline void List_1_Add_m035708C2356C92747DA0E35BEF57060F02801707_inline (List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* __this, AttributeType_t7FAD47DA16A417B5ED70A8E27D83BD7BA13BEA78* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D*, AttributeType_t7FAD47DA16A417B5ED70A8E27D83BD7BA13BEA78*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.WebServiceRequestEventArgs::get_Headers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WebServiceRequestEventArgs_get_Headers_m890706E0235181D917D4414C276E338E033B4328_inline (WebServiceRequestEventArgs_t120A45C1B3AC645E0B85163E58E49469D1BEC36C* __this, const RuntimeMethod* method) ;
// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoAuthHelper::get_AssemblyFileVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CognitoAuthHelper_get_AssemblyFileVersion_mB602EDBDA68932A4CBF571DD7F573A69B420969E (const RuntimeMethod* method) ;
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
// System.Void Amazon.Extensions.CognitoAuthentication.AuthFlowResponse::.ctor(System.String,Amazon.CognitoIdentityProvider.Model.AuthenticationResultType,Amazon.CognitoIdentityProvider.ChallengeNameType,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthFlowResponse__ctor_mAEDF65E3A4CB4C8D2D5CD27FE01C5F6CCB155629 (AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A* __this, String_t* ___0_sessionId, AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* ___1_authenticationResult, ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* ___2_challengeName, RuntimeObject* ___3_challengeParameters, RuntimeObject* ___4_clientMetadata, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_sessionId;
		__this->___U3CSessionIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionIDU3Ek__BackingField_0), (void*)L_0);
		ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* L_1 = ___2_challengeName;
		__this->___U3CChallengeNameU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CChallengeNameU3Ek__BackingField_1), (void*)L_1);
		AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* L_2 = ___1_authenticationResult;
		__this->___U3CAuthenticationResultU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthenticationResultU3Ek__BackingField_2), (void*)L_2);
		RuntimeObject* L_3 = ___3_challengeParameters;
		__this->___U3CChallengeParametersU3Ek__BackingField_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CChallengeParametersU3Ek__BackingField_3), (void*)L_3);
		RuntimeObject* L_4 = ___4_clientMetadata;
		__this->___U3CClientMetadataU3Ek__BackingField_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientMetadataU3Ek__BackingField_4), (void*)L_4);
		return;
	}
}
// System.String Amazon.Extensions.CognitoAuthentication.AuthFlowResponse::get_SessionID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AuthFlowResponse_get_SessionID_mB08E563DB50D57D3C798A1F5B08AFAEA38693296 (AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSessionIDU3Ek__BackingField_0;
		return L_0;
	}
}
// Amazon.CognitoIdentityProvider.Model.AuthenticationResultType Amazon.Extensions.CognitoAuthentication.AuthFlowResponse::get_AuthenticationResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* AuthFlowResponse_get_AuthenticationResult_m82D084B7A5D645CE891D755E97A6905B35054437 (AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A* __this, const RuntimeMethod* method) 
{
	{
		AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* L_0 = __this->___U3CAuthenticationResultU3Ek__BackingField_2;
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
// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Extensions.CognitoAuthentication.InitiateCustomAuthRequest::get_AuthParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InitiateCustomAuthRequest_get_AuthParameters_m129A9FCEDA144DDA475FE59478D750B4FE51C7DC (InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAuthParametersU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.InitiateCustomAuthRequest::set_AuthParameters(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitiateCustomAuthRequest_set_AuthParameters_mF3ADB4BC1BCB992F2B582FAB456B06EEC8219BCF (InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CAuthParametersU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthParametersU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Extensions.CognitoAuthentication.InitiateCustomAuthRequest::get_ClientMetadata()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InitiateCustomAuthRequest_get_ClientMetadata_m05E158CC040A58F46E1C64623732ED94BD0D2AB6 (InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CClientMetadataU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.InitiateCustomAuthRequest::set_ClientMetadata(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitiateCustomAuthRequest_set_ClientMetadata_m9C5115EDE1DAE9071AA14316964DC4A7D124BBB3 (InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CClientMetadataU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientMetadataU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.InitiateCustomAuthRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitiateCustomAuthRequest__ctor_m5FEC3EA5CD37B8FBA1548FC7D6AD3F9553A9B9A2 (InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219* __this, const RuntimeMethod* method) 
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
// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest::get_ChallengeParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RespondToCustomChallengeRequest_get_ChallengeParameters_m977692123830D002949D2B770B19829057DA0580 (RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CChallengeParametersU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest::set_ChallengeParameters(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespondToCustomChallengeRequest_set_ChallengeParameters_mC03E4A0B6FB19022F576C5AECC565347620C64C4 (RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CChallengeParametersU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CChallengeParametersU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest::get_ClientMetadata()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RespondToCustomChallengeRequest_get_ClientMetadata_mCBF0B8DE18D45CC2AAD0213245AEB89C2981376B (RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CClientMetadataU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest::set_ClientMetadata(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespondToCustomChallengeRequest_set_ClientMetadata_m2C10A98C4FDD173EDD3A5F007039DD33C0E52200 (RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CClientMetadataU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientMetadataU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest::get_SessionID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RespondToCustomChallengeRequest_get_SessionID_m0A562729A3925659417B697F8355B3D6700FC6D3 (RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSessionIDU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest::set_SessionID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespondToCustomChallengeRequest_set_SessionID_mC185B7CB30624B44B61928EF4AE8D6DDDF282D4E (RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CSessionIDU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionIDU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespondToCustomChallengeRequest__ctor_mE3A9D95FE8D0E2074F4422C92C6A50EF737EBC44 (RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___U3CClientMetadataU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientMetadataU3Ek__BackingField_1), (void*)L_0);
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
// System.String Amazon.Extensions.CognitoAuthentication.CognitoUser::get_ClientSecret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CognitoUser_get_ClientSecret_m53AFAB5A3C690D81D2280446AD4BDEEBC2F96033 (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CClientSecretU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_ClientSecret(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUser_set_ClientSecret_mFE1679788E5D472AF992D1CA8AF994864DCF3728 (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CClientSecretU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientSecretU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_SecretHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUser_set_SecretHash_m14B08D454FF69FED4961163FC6BE9CA6D133C3BE (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CSecretHashU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSecretHashU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_SessionTokens(Amazon.Extensions.CognitoAuthentication.CognitoUserSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUser_set_SessionTokens_m5EB6A752215B2EBE6710985BFF7550040D0DF175 (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* ___0_value, const RuntimeMethod* method) 
{
	{
		CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* L_0 = ___0_value;
		__this->___U3CSessionTokensU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionTokensU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Amazon.Extensions.CognitoAuthentication.CognitoUser::get_UserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CognitoUser_get_UserID_m951679906C800CBC5CDA0A20DDB526964AD64CE8 (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CUserIDU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_UserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUser_set_UserID_m6C32991823583CE9E73F559A422DD92DD1B19E99 (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CUserIDU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIDU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Amazon.Extensions.CognitoAuthentication.CognitoUser::get_Username()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CognitoUser_get_Username_m0AB105B02E3075B1BD90A3E1054DB493AFF751B2 (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CUsernameU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_Username(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUser_set_Username_m4FBD3492324058AD333B8D7F24647AB3E85E4C77 (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CUsernameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUsernameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_UserPool(Amazon.Extensions.CognitoAuthentication.CognitoUserPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUser_set_UserPool_m1D8B9B354129A8B45DABCD4702F4D21CC50B1CC9 (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* ___0_value, const RuntimeMethod* method) 
{
	{
		CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* L_0 = ___0_value;
		__this->___U3CUserPoolU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserPoolU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.String Amazon.Extensions.CognitoAuthentication.CognitoUser::get_ClientID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CognitoUser_get_ClientID_m658BA35B3F4E6715415B3F73C7515973B32A4334 (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CClientIDU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_ClientID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUser_set_ClientID_mCE2F7C94E3C0D6392BC319355022DF6ED28C29D8 (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CClientIDU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientIDU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_Status(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUser_set_Status_m38E853C10A44D0BF3C6EB417B60EBF3EEDD18BAD (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CStatusU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStatusU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// Amazon.CognitoIdentityProvider.IAmazonCognitoIdentityProvider Amazon.Extensions.CognitoAuthentication.CognitoUser::get_Provider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CognitoUser_get_Provider_m92E887F0BC7FF366D8FD95A0EB9AD82060AF4101 (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CProviderU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_Provider(Amazon.CognitoIdentityProvider.IAmazonCognitoIdentityProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUser_set_Provider_mE3EF1C4D02BB67540B01384FC8F4A160B3882D6C (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CProviderU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProviderU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_Attributes(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUser_set_Attributes_m85E4278DBBB1C7A0DC0B345E21869B46A8DF3C99 (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___0_value;
		__this->___U3CAttributesU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAttributesU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::set_PoolName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUser_set_PoolName_mCAB483AF91654ABD85D21B3998B66E2CF0249F83 (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPoolNameU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPoolNameU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::.ctor(System.String,System.String,Amazon.Extensions.CognitoAuthentication.CognitoUserPool,Amazon.CognitoIdentityProvider.IAmazonCognitoIdentityProvider,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUser__ctor_m335F207175DFEEDCA6B459DF616FB46038498635 (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_userID, String_t* ___1_clientID, CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* ___2_pool, RuntimeObject* ___3_provider, String_t* ___4_clientSecret, String_t* ___5_status, String_t* ___6_username, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___7_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AmazonCognitoIdentityProviderClient_t0E07D3551087EC08470443D2C21094424F53B4B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CognitoAuthHelper_ServiceClientBeforeRequestEvent_mB7DB2F3A78C3DDA124E418924BD1EE5B49201E98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestEventHandler_t7634A607863E3BECFAB972C8C28025EA9B7BF61A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	AmazonCognitoIdentityProviderClient_t0E07D3551087EC08470443D2C21094424F53B4B4* V_0 = NULL;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___U3CAttributesU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAttributesU3Ek__BackingField_9), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* L_1 = ___2_pool;
		String_t* L_2;
		L_2 = CognitoUserPool_get_PoolID_m99281C53A7CAC1D4CDF0C32090941FD0F6D126E8_inline(L_1, NULL);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, NULL);
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* L_4 = ___2_pool;
		String_t* L_5;
		L_5 = CognitoUserPool_get_PoolID_m99281C53A7CAC1D4CDF0C32090941FD0F6D126E8_inline(L_4, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = L_6;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)95));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8;
		L_8 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_5, L_7, NULL);
		int32_t L_9 = 1;
		String_t* L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		CognitoUser_set_PoolName_mCAB483AF91654ABD85D21B3998B66E2CF0249F83_inline(__this, L_10, NULL);
		goto IL_004e;
	}

IL_0043:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA1C11240057DA2500A6450044EFF8D777E00F26A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CognitoUser__ctor_m335F207175DFEEDCA6B459DF616FB46038498635_RuntimeMethod_var)));
	}

IL_004e:
	{
		String_t* L_12 = ___4_clientSecret;
		CognitoUser_set_ClientSecret_mFE1679788E5D472AF992D1CA8AF994864DCF3728_inline(__this, L_12, NULL);
		String_t* L_13 = ___4_clientSecret;
		bool L_14;
		L_14 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_13, NULL);
		if (L_14)
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_15 = ___0_userID;
		String_t* L_16 = ___1_clientID;
		String_t* L_17 = ___4_clientSecret;
		String_t* L_18;
		L_18 = CognitoAuthHelper_GetUserPoolSecretHash_mF57E3665C72AD602AB5E76934BF0C3867B1CC6CF(L_15, L_16, L_17, NULL);
		CognitoUser_set_SecretHash_m14B08D454FF69FED4961163FC6BE9CA6D133C3BE_inline(__this, L_18, NULL);
	}

IL_006e:
	{
		String_t* L_19 = ___0_userID;
		CognitoUser_set_UserID_m6C32991823583CE9E73F559A422DD92DD1B19E99_inline(__this, L_19, NULL);
		String_t* L_20 = ___0_userID;
		CognitoUser_set_Username_m4FBD3492324058AD333B8D7F24647AB3E85E4C77_inline(__this, L_20, NULL);
		String_t* L_21 = ___6_username;
		bool L_22;
		L_22 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_21, NULL);
		if (L_22)
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_23 = ___6_username;
		CognitoUser_set_Username_m4FBD3492324058AD333B8D7F24647AB3E85E4C77_inline(__this, L_23, NULL);
		goto IL_0096;
	}

IL_008f:
	{
		String_t* L_24 = ___0_userID;
		CognitoUser_set_Username_m4FBD3492324058AD333B8D7F24647AB3E85E4C77_inline(__this, L_24, NULL);
	}

IL_0096:
	{
		String_t* L_25 = ___5_status;
		CognitoUser_set_Status_m38E853C10A44D0BF3C6EB417B60EBF3EEDD18BAD_inline(__this, L_25, NULL);
		CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* L_26 = ___2_pool;
		CognitoUser_set_UserPool_m1D8B9B354129A8B45DABCD4702F4D21CC50B1CC9_inline(__this, L_26, NULL);
		String_t* L_27 = ___1_clientID;
		CognitoUser_set_ClientID_mCE2F7C94E3C0D6392BC319355022DF6ED28C29D8_inline(__this, L_27, NULL);
		CognitoUser_set_SessionTokens_m5EB6A752215B2EBE6710985BFF7550040D0DF175_inline(__this, (CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A*)NULL, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_28 = ___7_attributes;
		if (!L_28)
		{
			goto IL_00bf;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_29 = ___7_attributes;
		CognitoUser_set_Attributes_m85E4278DBBB1C7A0DC0B345E21869B46A8DF3C99_inline(__this, L_29, NULL);
	}

IL_00bf:
	{
		RuntimeObject* L_30 = ___3_provider;
		CognitoUser_set_Provider_mE3EF1C4D02BB67540B01384FC8F4A160B3882D6C_inline(__this, L_30, NULL);
		RuntimeObject* L_31;
		L_31 = CognitoUser_get_Provider_m92E887F0BC7FF366D8FD95A0EB9AD82060AF4101_inline(__this, NULL);
		V_0 = ((AmazonCognitoIdentityProviderClient_t0E07D3551087EC08470443D2C21094424F53B4B4*)IsInstClass((RuntimeObject*)L_31, AmazonCognitoIdentityProviderClient_t0E07D3551087EC08470443D2C21094424F53B4B4_il2cpp_TypeInfo_var));
		AmazonCognitoIdentityProviderClient_t0E07D3551087EC08470443D2C21094424F53B4B4* L_32 = V_0;
		if (!L_32)
		{
			goto IL_00e8;
		}
	}
	{
		AmazonCognitoIdentityProviderClient_t0E07D3551087EC08470443D2C21094424F53B4B4* L_33 = V_0;
		RequestEventHandler_t7634A607863E3BECFAB972C8C28025EA9B7BF61A* L_34 = (RequestEventHandler_t7634A607863E3BECFAB972C8C28025EA9B7BF61A*)il2cpp_codegen_object_new(RequestEventHandler_t7634A607863E3BECFAB972C8C28025EA9B7BF61A_il2cpp_TypeInfo_var);
		RequestEventHandler__ctor_mC6982232BF47E67D98A30C3EC5245A8F2367D130(L_34, NULL, (intptr_t)((void*)CognitoAuthHelper_ServiceClientBeforeRequestEvent_mB7DB2F3A78C3DDA124E418924BD1EE5B49201E98_RuntimeMethod_var), NULL);
		AmazonServiceClient_add_BeforeRequestEvent_m28F5D7FF85185E61668B0866E936DCD6CB1AE115(L_33, L_34, NULL);
	}

IL_00e8:
	{
		return;
	}
}
// Amazon.Extensions.CognitoAuthentication.CognitoUserSession Amazon.Extensions.CognitoAuthentication.CognitoUser::GetCognitoUserSession(Amazon.CognitoIdentityProvider.Model.AuthenticationResultType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* CognitoUser_GetCognitoUserSession_mE7638E52910982A69D7C6E122FA60847625DFDE4 (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* ___0_authResult, String_t* ___1_refreshTokenOverride, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* L_0 = ___0_authResult;
		String_t* L_1;
		L_1 = AuthenticationResultType_get_IdToken_m535BC6A3D81FC50D798B5D4E8BC4DDACB80DDABB_inline(L_0, NULL);
		AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* L_2 = ___0_authResult;
		String_t* L_3;
		L_3 = AuthenticationResultType_get_AccessToken_m492D95909C8FA460144DCCBC83835710076ABE3A_inline(L_2, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		V_2 = L_4;
		String_t* L_5 = ___1_refreshTokenOverride;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		G_B1_0 = L_1;
		if (L_6)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		String_t* L_7 = ___1_refreshTokenOverride;
		V_1 = L_7;
		G_B3_0 = G_B1_0;
		goto IL_0026;
	}

IL_001f:
	{
		AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* L_8 = ___0_authResult;
		String_t* L_9;
		L_9 = AuthenticationResultType_get_RefreshToken_m52835C605AF2F9499917C892FEE7FA455DD17388_inline(L_8, NULL);
		V_1 = L_9;
		G_B3_0 = G_B2_0;
	}

IL_0026:
	{
		String_t* L_10 = V_0;
		String_t* L_11 = V_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_12 = V_2;
		AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* L_13 = ___0_authResult;
		int32_t L_14;
		L_14 = AuthenticationResultType_get_ExpiresIn_mB7A85DDE0F6B930372035B63315EB706ADA2B783(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_15;
		L_15 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_2), ((double)L_14), NULL);
		CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* L_16 = (CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A*)il2cpp_codegen_object_new(CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A_il2cpp_TypeInfo_var);
		CognitoUserSession__ctor_m689A5F392D3F769F3995550351A33FC40221EAE0(L_16, G_B3_0, L_10, L_11, L_12, L_15, NULL);
		return L_16;
	}
}
// System.Threading.Tasks.Task`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse> Amazon.Extensions.CognitoAuthentication.CognitoUser::StartWithCustomAuthAsync(Amazon.Extensions.CognitoAuthentication.InitiateCustomAuthRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F* CognitoUser_StartWithCustomAuthAsync_m6435F73D9CF06259FDDAECC3A322E68B2DBE913C (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219* ___0_customRequest, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m099727057491B93844F4F63BF9625FA69650D920_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41_m38E0565FDF86F07ABC1D0DE9AAA4538A12EB090F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m9F2729A370CCA8BBE5F886D74917C0656AEEF7CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m099727057491B93844F4F63BF9625FA69650D920(AsyncTaskMethodBuilder_1_Create_m099727057491B93844F4F63BF9625FA69650D920_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219* L_1 = ___0_customRequest;
		(&V_0)->___customRequest_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___customRequest_3), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_2 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41_m38E0565FDF86F07ABC1D0DE9AAA4538A12EB090F(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41_m38E0565FDF86F07ABC1D0DE9AAA4538A12EB090F_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_3 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m9F2729A370CCA8BBE5F886D74917C0656AEEF7CA(L_3, AsyncTaskMethodBuilder_1_get_Task_m9F2729A370CCA8BBE5F886D74917C0656AEEF7CA_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse> Amazon.Extensions.CognitoAuthentication.CognitoUser::StartWithCustomAuthAsync(Amazon.Extensions.CognitoAuthentication.InitiateCustomAuthRequest,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F* CognitoUser_StartWithCustomAuthAsync_m0A2BA2C55838FB32619B871EBF597B8DEAB9F2A6 (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219* ___0_customRequest, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m099727057491B93844F4F63BF9625FA69650D920_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C_mF2DAD3B9F601A274276ED7F8E7A3F65545C48109_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m9F2729A370CCA8BBE5F886D74917C0656AEEF7CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m099727057491B93844F4F63BF9625FA69650D920(AsyncTaskMethodBuilder_1_Create_m099727057491B93844F4F63BF9625FA69650D920_RuntimeMethod_var);
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
		InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219* L_1 = ___0_customRequest;
		(&V_0)->___customRequest_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___customRequest_2), (void*)L_1);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___1_cancellationToken;
		(&V_0)->___cancellationToken_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_4))->____source_0), (void*)NULL);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_3 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C_mF2DAD3B9F601A274276ED7F8E7A3F65545C48109(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C_mF2DAD3B9F601A274276ED7F8E7A3F65545C48109_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_4 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_m9F2729A370CCA8BBE5F886D74917C0656AEEF7CA(L_4, AsyncTaskMethodBuilder_1_get_Task_m9F2729A370CCA8BBE5F886D74917C0656AEEF7CA_RuntimeMethod_var);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse> Amazon.Extensions.CognitoAuthentication.CognitoUser::RespondToCustomAuthAsync(Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F* CognitoUser_RespondToCustomAuthAsync_mB9B688578905A36CA72E67435BF4C8452EA0BE02 (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* ___0_customRequest, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m099727057491B93844F4F63BF9625FA69650D920_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989_m1B9A9176BFA0269C12817E218339D3A014E4645D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m9F2729A370CCA8BBE5F886D74917C0656AEEF7CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m099727057491B93844F4F63BF9625FA69650D920(AsyncTaskMethodBuilder_1_Create_m099727057491B93844F4F63BF9625FA69650D920_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* L_1 = ___0_customRequest;
		(&V_0)->___customRequest_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___customRequest_3), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_2 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989_m1B9A9176BFA0269C12817E218339D3A014E4645D(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989_m1B9A9176BFA0269C12817E218339D3A014E4645D_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_3 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m9F2729A370CCA8BBE5F886D74917C0656AEEF7CA(L_3, AsyncTaskMethodBuilder_1_get_Task_m9F2729A370CCA8BBE5F886D74917C0656AEEF7CA_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse> Amazon.Extensions.CognitoAuthentication.CognitoUser::RespondToCustomAuthAsync(Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F* CognitoUser_RespondToCustomAuthAsync_mF94C3E66B95C78F9C3FBE332738F250690520EDF (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* ___0_customRequest, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m099727057491B93844F4F63BF9625FA69650D920_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0_m308D009FAE689EC7201DC75835A1461FDC0B51A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m9F2729A370CCA8BBE5F886D74917C0656AEEF7CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m099727057491B93844F4F63BF9625FA69650D920(AsyncTaskMethodBuilder_1_Create_m099727057491B93844F4F63BF9625FA69650D920_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* L_1 = ___0_customRequest;
		(&V_0)->___customRequest_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___customRequest_3), (void*)L_1);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___1_cancellationToken;
		(&V_0)->___cancellationToken_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_4))->____source_0), (void*)NULL);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_3 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0_m308D009FAE689EC7201DC75835A1461FDC0B51A7(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0_m308D009FAE689EC7201DC75835A1461FDC0B51A7_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_4 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_m9F2729A370CCA8BBE5F886D74917C0656AEEF7CA(L_4, AsyncTaskMethodBuilder_1_get_Task_m9F2729A370CCA8BBE5F886D74917C0656AEEF7CA_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::UpdateSessionIfAuthenticationComplete(Amazon.CognitoIdentityProvider.ChallengeNameType,Amazon.CognitoIdentityProvider.Model.AuthenticationResultType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUser_UpdateSessionIfAuthenticationComplete_mEB4F85EDA80395EC6894744ED53D0F128A1FF593 (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* ___0_challengeName, AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* ___1_authResult, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstantClass_tF227ADAB15BBF44B1B11FC3B439F012B5CAFF442_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* V_0 = NULL;
	{
		ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* L_0 = ___0_challengeName;
		il2cpp_codegen_runtime_class_init_inline(ConstantClass_tF227ADAB15BBF44B1B11FC3B439F012B5CAFF442_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = ConstantClass_op_Implicit_mCCA71F636BFC0890C09E998CD454443993433922(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* L_3 = ___1_authResult;
		CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* L_4;
		L_4 = CognitoUser_GetCognitoUserSession_mE7638E52910982A69D7C6E122FA60847625DFDE4(__this, L_3, (String_t*)NULL, NULL);
		V_0 = L_4;
		CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* L_5 = V_0;
		CognitoUser_set_SessionTokens_m5EB6A752215B2EBE6710985BFF7550040D0DF175_inline(__this, L_5, NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser::UpdateUsernameAndSecretHash(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUser_UpdateUsernameAndSecretHash_m02A83442180CAEC1FE58577ED40949F00C8A328A (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, RuntimeObject* ___0_challengeParameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		String_t* L_0;
		L_0 = CognitoUser_get_Username_m0AB105B02E3075B1BD90A3E1054DB493AFF751B2_inline(__this, NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2;
		L_2 = CognitoUser_get_UserID_m951679906C800CBC5CDA0A20DDB526964AD64CE8_inline(__this, NULL);
		String_t* L_3;
		L_3 = CognitoUser_get_Username_m0AB105B02E3075B1BD90A3E1054DB493AFF751B2_inline(__this, NULL);
		bool L_4;
		L_4 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_2, L_3, 4, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___0_challengeParameters;
		G_B4_0 = G_B3_0;
		if (!L_5)
		{
			G_B5_0 = G_B3_0;
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_6 = ___0_challengeParameters;
		il2cpp_codegen_runtime_class_init_inline(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var);
		String_t* L_7 = ((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamUsername_3;
		bool L_8;
		L_8 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::ContainsKey(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_6, L_7);
		G_B6_0 = ((int32_t)(L_8));
		G_B6_1 = G_B4_0;
		goto IL_0033;
	}

IL_0032:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0033:
	{
		V_0 = (bool)G_B6_0;
		bool L_9 = V_0;
		if (((int32_t)(G_B6_1|(int32_t)L_9)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}

IL_0039:
	{
		RuntimeObject* L_10 = ___0_challengeParameters;
		il2cpp_codegen_runtime_class_init_inline(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var);
		String_t* L_11 = ((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamUsername_3;
		bool L_12;
		L_12 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::ContainsKey(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_10, L_11);
		if (!L_12)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_13 = ___0_challengeParameters;
		il2cpp_codegen_runtime_class_init_inline(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var);
		String_t* L_14 = ((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamUsername_3;
		String_t* L_15;
		L_15 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_13, L_14);
		CognitoUser_set_Username_m4FBD3492324058AD333B8D7F24647AB3E85E4C77_inline(__this, L_15, NULL);
	}

IL_0057:
	{
		String_t* L_16;
		L_16 = CognitoUser_get_ClientSecret_m53AFAB5A3C690D81D2280446AD4BDEEBC2F96033_inline(__this, NULL);
		bool L_17;
		L_17 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_16, NULL);
		if (L_17)
		{
			goto IL_0081;
		}
	}
	{
		String_t* L_18;
		L_18 = CognitoUser_get_Username_m0AB105B02E3075B1BD90A3E1054DB493AFF751B2_inline(__this, NULL);
		String_t* L_19;
		L_19 = CognitoUser_get_ClientID_m658BA35B3F4E6715415B3F73C7515973B32A4334_inline(__this, NULL);
		String_t* L_20;
		L_20 = CognitoUser_get_ClientSecret_m53AFAB5A3C690D81D2280446AD4BDEEBC2F96033_inline(__this, NULL);
		String_t* L_21;
		L_21 = CognitoAuthHelper_GetUserPoolSecretHash_mF57E3665C72AD602AB5E76934BF0C3867B1CC6CF(L_18, L_19, L_20, NULL);
		CognitoUser_set_SecretHash_m14B08D454FF69FED4961163FC6BE9CA6D133C3BE_inline(__this, L_21, NULL);
	}

IL_0081:
	{
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
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__106::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespondToCustomAuthAsyncU3Ed__106_MoveNext_m7B12507FFC4EA608603D2166E87A15024A57E73F (U3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968_TisU3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989_mF116E48B65BA3D20C05B15C1906421370F8C674F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m8DBB9B28CA0434FF87A202D48FDCCFC85B0D5155_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m030C3B98ABF7AAC107B58D1A1FB1B701B1139A56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m295F81189077054B6D354950AED200612A4C0153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mABDDE10FDC157EF6F8DA158D99F1C9DDCA15E46B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m4236887B150F886EAAAE4A06CF03D6C4E0FAE055_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* V_1 = NULL;
	AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A* V_2 = NULL;
	ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968 V_3;
	memset((&V_3), 0, sizeof(V_3));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_1_tC0D96775EAA73CBC7E19707604897189616F4C3F V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0060_1;
			}
		}
		{
			CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* L_3 = V_1;
			RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* L_4 = __this->___customRequest_3;
			il2cpp_codegen_initobj((&V_4), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = V_4;
			Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F* L_6;
			L_6 = VirtualFuncInvoker2< Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F*, RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(7 /* System.Threading.Tasks.Task`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse> Amazon.Extensions.CognitoAuthentication.CognitoUser::RespondToCustomAuthAsync(Amazon.Extensions.CognitoAuthentication.RespondToCustomChallengeRequest,System.Threading.CancellationToken) */, L_3, L_4, L_5);
			ConfiguredTaskAwaitable_1_tC0D96775EAA73CBC7E19707604897189616F4C3F L_7;
			L_7 = Task_1_ConfigureAwait_m4236887B150F886EAAAE4A06CF03D6C4E0FAE055(L_6, (bool)0, Task_1_ConfigureAwait_m4236887B150F886EAAAE4A06CF03D6C4E0FAE055_RuntimeMethod_var);
			V_5 = L_7;
			ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968 L_8;
			L_8 = ConfiguredTaskAwaitable_1_GetAwaiter_m030C3B98ABF7AAC107B58D1A1FB1B701B1139A56_inline((&V_5), ConfiguredTaskAwaitable_1_GetAwaiter_m030C3B98ABF7AAC107B58D1A1FB1B701B1139A56_RuntimeMethod_var);
			V_3 = L_8;
			bool L_9;
			L_9 = ConfiguredTaskAwaiter_get_IsCompleted_mABDDE10FDC157EF6F8DA158D99F1C9DDCA15E46B((&V_3), ConfiguredTaskAwaiter_get_IsCompleted_mABDDE10FDC157EF6F8DA158D99F1C9DDCA15E46B_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007c_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968 L_11 = V_3;
			__this->___U3CU3Eu__1_4 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_12 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968_TisU3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989_mF116E48B65BA3D20C05B15C1906421370F8C674F(L_12, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968_TisU3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989_mF116E48B65BA3D20C05B15C1906421370F8C674F_RuntimeMethod_var);
			goto IL_00b3;
		}

IL_0060_1:
		{
			ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968 L_13 = __this->___U3CU3Eu__1_4;
			V_3 = L_13;
			ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968* L_14 = (ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968*)(&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_14, sizeof(ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_007c_1:
		{
			AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A* L_16;
			L_16 = ConfiguredTaskAwaiter_GetResult_m295F81189077054B6D354950AED200612A4C0153((&V_3), ConfiguredTaskAwaiter_GetResult_m295F81189077054B6D354950AED200612A4C0153_RuntimeMethod_var);
			V_2 = L_16;
			goto IL_009f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0086;
		}
		throw e;
	}

CATCH_0086:
	{// begin catch(System.Exception)
		Exception_t* L_17 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_6 = L_17;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_18 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_19 = V_6;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_1_SetException_m79924F59B204325407F2623448F8C9E7868924CB(L_18, L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m79924F59B204325407F2623448F8C9E7868924CB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00b3;
	}// end catch (depth: 1)

IL_009f:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_20 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&__this->___U3CU3Et__builder_1);
		AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A* L_21 = V_2;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetResult_m8DBB9B28CA0434FF87A202D48FDCCFC85B0D5155(L_20, L_21, AsyncTaskMethodBuilder_1_SetResult_m8DBB9B28CA0434FF87A202D48FDCCFC85B0D5155_RuntimeMethod_var);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRespondToCustomAuthAsyncU3Ed__106_MoveNext_m7B12507FFC4EA608603D2166E87A15024A57E73F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989*>(__this + _offset);
	U3CRespondToCustomAuthAsyncU3Ed__106_MoveNext_m7B12507FFC4EA608603D2166E87A15024A57E73F(_thisAdjusted, method);
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__106::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespondToCustomAuthAsyncU3Ed__106_SetStateMachine_m4E704BAD27F0092E78CC7767C5146CBF8E6FEED0 (U3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mBA625C3B5E44E04FC3A40F9E9960BFA5B38CEB3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_0 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetStateMachine_mBA625C3B5E44E04FC3A40F9E9960BFA5B38CEB3A(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mBA625C3B5E44E04FC3A40F9E9960BFA5B38CEB3A_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRespondToCustomAuthAsyncU3Ed__106_SetStateMachine_m4E704BAD27F0092E78CC7767C5146CBF8E6FEED0_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRespondToCustomAuthAsyncU3Ed__106_t2AEA96488A313A235D724F82FB75ACC877B1F989*>(__this + _offset);
	U3CRespondToCustomAuthAsyncU3Ed__106_SetStateMachine_m4E704BAD27F0092E78CC7767C5146CBF8E6FEED0(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__107::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespondToCustomAuthAsyncU3Ed__107_MoveNext_mF6511D099531D2306B78F4A84F58A767B69E0440 (U3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C_TisU3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0_m1A88623A946B7116B5A9D56404FBF8FAAC04AB7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m8DBB9B28CA0434FF87A202D48FDCCFC85B0D5155_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m920BFD1F52774606B033AF07D2509471B27ED877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m094CD328E5A9F3C42FA63C286B2E9C7C51FD4EDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m8766F26D3A7B03C9A2ACE33B56307F71E989CC31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAmazonCognitoIdentityProvider_t815DA88C2B3B89933722D90610648734DE9EDF21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m93CAC5BC5446389E6228F0FF8FC62169D7FF0B8E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* V_1 = NULL;
	AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A* V_2 = NULL;
	RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC* V_3 = NULL;
	RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C* V_4 = NULL;
	ConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredTaskAwaitable_1_t7B799B6DDCC4691A6AB71D62CCA4CE4A74F25A6A V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00be_1;
			}
		}
		{
			RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC* L_3 = (RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC*)il2cpp_codegen_object_new(RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC_il2cpp_TypeInfo_var);
			RespondToAuthChallengeRequest__ctor_mA345F145A36AF9A2C81219EEE927515437348D00(L_3, NULL);
			RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC* L_4 = L_3;
			il2cpp_codegen_runtime_class_init_inline(ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE_il2cpp_TypeInfo_var);
			ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* L_5 = ((ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE_StaticFields*)il2cpp_codegen_static_fields_for(ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE_il2cpp_TypeInfo_var))->___CUSTOM_CHALLENGE_4;
			RespondToAuthChallengeRequest_set_ChallengeName_mB23654BBD289D6D0288F5554A16EB49DA669A5DB_inline(L_4, L_5, NULL);
			RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC* L_6 = L_4;
			CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* L_7 = V_1;
			String_t* L_8;
			L_8 = CognitoUser_get_ClientID_m658BA35B3F4E6715415B3F73C7515973B32A4334_inline(L_7, NULL);
			RespondToAuthChallengeRequest_set_ClientId_m8AF8F82607DB97CFAB8CE5E6F3DBAF6FE0F52BD2_inline(L_6, L_8, NULL);
			RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC* L_9 = L_6;
			RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* L_10 = __this->___customRequest_3;
			RuntimeObject* L_11;
			L_11 = RespondToCustomChallengeRequest_get_ChallengeParameters_m977692123830D002949D2B770B19829057DA0580_inline(L_10, NULL);
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9(L_12, L_11, Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9_RuntimeMethod_var);
			RespondToAuthChallengeRequest_set_ChallengeResponses_m3D7C354308D18CE7628F0FD5FD13AE8882540AF0_inline(L_9, L_12, NULL);
			RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC* L_13 = L_9;
			RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* L_14 = __this->___customRequest_3;
			RuntimeObject* L_15;
			L_15 = RespondToCustomChallengeRequest_get_ClientMetadata_mCBF0B8DE18D45CC2AAD0213245AEB89C2981376B_inline(L_14, NULL);
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9(L_16, L_15, Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9_RuntimeMethod_var);
			RespondToAuthChallengeRequest_set_ClientMetadata_m703018EA33A391448C4EA7A771AF6399A5826F1D_inline(L_13, L_16, NULL);
			RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC* L_17 = L_13;
			RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* L_18 = __this->___customRequest_3;
			String_t* L_19;
			L_19 = RespondToCustomChallengeRequest_get_SessionID_m0A562729A3925659417B697F8355B3D6700FC6D3_inline(L_18, NULL);
			RespondToAuthChallengeRequest_set_Session_m4901A40AA5B9A70F2F30F82BDBA24E3B89CFE17D_inline(L_17, L_19, NULL);
			V_3 = L_17;
			CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* L_20 = V_1;
			RuntimeObject* L_21;
			L_21 = CognitoUser_get_Provider_m92E887F0BC7FF366D8FD95A0EB9AD82060AF4101_inline(L_20, NULL);
			RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC* L_22 = V_3;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_23 = __this->___cancellationToken_4;
			Task_1_t62421925BDC0985C05B065638EFBFD75CA6A37C9* L_24;
			L_24 = InterfaceFuncInvoker2< Task_1_t62421925BDC0985C05B065638EFBFD75CA6A37C9*, RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(1 /* System.Threading.Tasks.Task`1<Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeResponse> Amazon.CognitoIdentityProvider.IAmazonCognitoIdentityProvider::RespondToAuthChallengeAsync(Amazon.CognitoIdentityProvider.Model.RespondToAuthChallengeRequest,System.Threading.CancellationToken) */, IAmazonCognitoIdentityProvider_t815DA88C2B3B89933722D90610648734DE9EDF21_il2cpp_TypeInfo_var, L_21, L_22, L_23);
			ConfiguredTaskAwaitable_1_t7B799B6DDCC4691A6AB71D62CCA4CE4A74F25A6A L_25;
			L_25 = Task_1_ConfigureAwait_m93CAC5BC5446389E6228F0FF8FC62169D7FF0B8E(L_24, (bool)0, Task_1_ConfigureAwait_m93CAC5BC5446389E6228F0FF8FC62169D7FF0B8E_RuntimeMethod_var);
			V_6 = L_25;
			ConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C L_26;
			L_26 = ConfiguredTaskAwaitable_1_GetAwaiter_m920BFD1F52774606B033AF07D2509471B27ED877_inline((&V_6), ConfiguredTaskAwaitable_1_GetAwaiter_m920BFD1F52774606B033AF07D2509471B27ED877_RuntimeMethod_var);
			V_5 = L_26;
			bool L_27;
			L_27 = ConfiguredTaskAwaiter_get_IsCompleted_m8766F26D3A7B03C9A2ACE33B56307F71E989CC31((&V_5), ConfiguredTaskAwaiter_get_IsCompleted_m8766F26D3A7B03C9A2ACE33B56307F71E989CC31_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_00db_1;
			}
		}
		{
			int32_t L_28 = 0;
			V_0 = L_28;
			__this->___U3CU3E1__state_0 = L_28;
			ConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C L_29 = V_5;
			__this->___U3CU3Eu__1_5 = L_29;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_30 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C_TisU3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0_m1A88623A946B7116B5A9D56404FBF8FAAC04AB7A(L_30, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C_TisU3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0_m1A88623A946B7116B5A9D56404FBF8FAAC04AB7A_RuntimeMethod_var);
			goto IL_015a;
		}

IL_00be_1:
		{
			ConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C L_31 = __this->___U3CU3Eu__1_5;
			V_5 = L_31;
			ConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C* L_32 = (ConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C*)(&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_32, sizeof(ConfiguredTaskAwaiter_t3C5B971D3F195AA37AAAE748645C5FEB987D480C));
			int32_t L_33 = (-1);
			V_0 = L_33;
			__this->___U3CU3E1__state_0 = L_33;
		}

IL_00db_1:
		{
			RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C* L_34;
			L_34 = ConfiguredTaskAwaiter_GetResult_m094CD328E5A9F3C42FA63C286B2E9C7C51FD4EDF((&V_5), ConfiguredTaskAwaiter_GetResult_m094CD328E5A9F3C42FA63C286B2E9C7C51FD4EDF_RuntimeMethod_var);
			V_4 = L_34;
			CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* L_35 = V_1;
			RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C* L_36 = V_4;
			ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* L_37;
			L_37 = RespondToAuthChallengeResponse_get_ChallengeName_mF24A98289977D029353261C32812D37795699258_inline(L_36, NULL);
			RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C* L_38 = V_4;
			AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* L_39;
			L_39 = RespondToAuthChallengeResponse_get_AuthenticationResult_m8A8D40A281D87AC5DBFC2F0EA96F5CAD79F4207A_inline(L_38, NULL);
			CognitoUser_UpdateSessionIfAuthenticationComplete_mEB4F85EDA80395EC6894744ED53D0F128A1FF593(L_35, L_37, L_39, NULL);
			RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C* L_40 = V_4;
			String_t* L_41;
			L_41 = RespondToAuthChallengeResponse_get_Session_m376193C0DA6D7BA93AD48EE4324E37123506AC09_inline(L_40, NULL);
			RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C* L_42 = V_4;
			AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* L_43;
			L_43 = RespondToAuthChallengeResponse_get_AuthenticationResult_m8A8D40A281D87AC5DBFC2F0EA96F5CAD79F4207A_inline(L_42, NULL);
			RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C* L_44 = V_4;
			ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* L_45;
			L_45 = RespondToAuthChallengeResponse_get_ChallengeName_mF24A98289977D029353261C32812D37795699258_inline(L_44, NULL);
			RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C* L_46 = V_4;
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_47;
			L_47 = RespondToAuthChallengeResponse_get_ChallengeParameters_mF34752BF95181873017F0AA61F30A1A309632F70_inline(L_46, NULL);
			RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C* L_48 = V_4;
			ResponseMetadata_tBF985AAFD923FA79A2759015BD7BE04ED320AE03* L_49;
			L_49 = AmazonWebServiceResponse_get_ResponseMetadata_m48152D51DE0B428227272EBD7BF93B1C253F8EA1_inline(L_48, NULL);
			RuntimeObject* L_50;
			L_50 = ResponseMetadata_get_Metadata_m828F215E34DE4F5AFD29D4D0F1ED0B2B6B7B77FA(L_49, NULL);
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_51 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9(L_51, L_50, Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9_RuntimeMethod_var);
			AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A* L_52 = (AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A*)il2cpp_codegen_object_new(AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A_il2cpp_TypeInfo_var);
			AuthFlowResponse__ctor_mAEDF65E3A4CB4C8D2D5CD27FE01C5F6CCB155629(L_52, L_41, L_43, L_45, L_47, L_51, NULL);
			V_2 = L_52;
			goto IL_0146;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_012d;
		}
		throw e;
	}

CATCH_012d:
	{// begin catch(System.Exception)
		Exception_t* L_53 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_53;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_54 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_55 = V_7;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_1_SetException_m79924F59B204325407F2623448F8C9E7868924CB(L_54, L_55, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m79924F59B204325407F2623448F8C9E7868924CB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_015a;
	}// end catch (depth: 1)

IL_0146:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_56 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&__this->___U3CU3Et__builder_1);
		AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A* L_57 = V_2;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetResult_m8DBB9B28CA0434FF87A202D48FDCCFC85B0D5155(L_56, L_57, AsyncTaskMethodBuilder_1_SetResult_m8DBB9B28CA0434FF87A202D48FDCCFC85B0D5155_RuntimeMethod_var);
	}

IL_015a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRespondToCustomAuthAsyncU3Ed__107_MoveNext_mF6511D099531D2306B78F4A84F58A767B69E0440_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0*>(__this + _offset);
	U3CRespondToCustomAuthAsyncU3Ed__107_MoveNext_mF6511D099531D2306B78F4A84F58A767B69E0440(_thisAdjusted, method);
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser/<RespondToCustomAuthAsync>d__107::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespondToCustomAuthAsyncU3Ed__107_SetStateMachine_m526986BDC0B03DFD4C18D54B1C62566E64D2EF77 (U3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mBA625C3B5E44E04FC3A40F9E9960BFA5B38CEB3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_0 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetStateMachine_mBA625C3B5E44E04FC3A40F9E9960BFA5B38CEB3A(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mBA625C3B5E44E04FC3A40F9E9960BFA5B38CEB3A_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRespondToCustomAuthAsyncU3Ed__107_SetStateMachine_m526986BDC0B03DFD4C18D54B1C62566E64D2EF77_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRespondToCustomAuthAsyncU3Ed__107_t9FDE3D7F90971D58A835DDC0B4423BA63F9819C0*>(__this + _offset);
	U3CRespondToCustomAuthAsyncU3Ed__107_SetStateMachine_m526986BDC0B03DFD4C18D54B1C62566E64D2EF77(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__104::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWithCustomAuthAsyncU3Ed__104_MoveNext_m3DADDF7D050E7201E0649BED7767DFB66638DBB6 (U3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968_TisU3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41_mFCE987C31CCD35802AFED51AD58E2970DFDFC87D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m8DBB9B28CA0434FF87A202D48FDCCFC85B0D5155_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m030C3B98ABF7AAC107B58D1A1FB1B701B1139A56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m295F81189077054B6D354950AED200612A4C0153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mABDDE10FDC157EF6F8DA158D99F1C9DDCA15E46B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m4236887B150F886EAAAE4A06CF03D6C4E0FAE055_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* V_1 = NULL;
	AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A* V_2 = NULL;
	ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968 V_3;
	memset((&V_3), 0, sizeof(V_3));
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_1_tC0D96775EAA73CBC7E19707604897189616F4C3F V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0060_1;
			}
		}
		{
			CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* L_3 = V_1;
			InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219* L_4 = __this->___customRequest_3;
			il2cpp_codegen_initobj((&V_4), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = V_4;
			Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F* L_6;
			L_6 = VirtualFuncInvoker2< Task_1_t3DECD73FFEBB5C81406535C0375DE1E6BFD0052F*, InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(5 /* System.Threading.Tasks.Task`1<Amazon.Extensions.CognitoAuthentication.AuthFlowResponse> Amazon.Extensions.CognitoAuthentication.CognitoUser::StartWithCustomAuthAsync(Amazon.Extensions.CognitoAuthentication.InitiateCustomAuthRequest,System.Threading.CancellationToken) */, L_3, L_4, L_5);
			ConfiguredTaskAwaitable_1_tC0D96775EAA73CBC7E19707604897189616F4C3F L_7;
			L_7 = Task_1_ConfigureAwait_m4236887B150F886EAAAE4A06CF03D6C4E0FAE055(L_6, (bool)0, Task_1_ConfigureAwait_m4236887B150F886EAAAE4A06CF03D6C4E0FAE055_RuntimeMethod_var);
			V_5 = L_7;
			ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968 L_8;
			L_8 = ConfiguredTaskAwaitable_1_GetAwaiter_m030C3B98ABF7AAC107B58D1A1FB1B701B1139A56_inline((&V_5), ConfiguredTaskAwaitable_1_GetAwaiter_m030C3B98ABF7AAC107B58D1A1FB1B701B1139A56_RuntimeMethod_var);
			V_3 = L_8;
			bool L_9;
			L_9 = ConfiguredTaskAwaiter_get_IsCompleted_mABDDE10FDC157EF6F8DA158D99F1C9DDCA15E46B((&V_3), ConfiguredTaskAwaiter_get_IsCompleted_mABDDE10FDC157EF6F8DA158D99F1C9DDCA15E46B_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007c_1;
			}
		}
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->___U3CU3E1__state_0 = L_10;
			ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968 L_11 = V_3;
			__this->___U3CU3Eu__1_4 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_12 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968_TisU3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41_mFCE987C31CCD35802AFED51AD58E2970DFDFC87D(L_12, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968_TisU3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41_mFCE987C31CCD35802AFED51AD58E2970DFDFC87D_RuntimeMethod_var);
			goto IL_00b3;
		}

IL_0060_1:
		{
			ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968 L_13 = __this->___U3CU3Eu__1_4;
			V_3 = L_13;
			ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968* L_14 = (ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968*)(&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_14, sizeof(ConfiguredTaskAwaiter_tB89796B1E05B660EA0F975B403038B4200EBA968));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->___U3CU3E1__state_0 = L_15;
		}

IL_007c_1:
		{
			AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A* L_16;
			L_16 = ConfiguredTaskAwaiter_GetResult_m295F81189077054B6D354950AED200612A4C0153((&V_3), ConfiguredTaskAwaiter_GetResult_m295F81189077054B6D354950AED200612A4C0153_RuntimeMethod_var);
			V_2 = L_16;
			goto IL_009f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0086;
		}
		throw e;
	}

CATCH_0086:
	{// begin catch(System.Exception)
		Exception_t* L_17 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_6 = L_17;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_18 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_19 = V_6;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_1_SetException_m79924F59B204325407F2623448F8C9E7868924CB(L_18, L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m79924F59B204325407F2623448F8C9E7868924CB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00b3;
	}// end catch (depth: 1)

IL_009f:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_20 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&__this->___U3CU3Et__builder_1);
		AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A* L_21 = V_2;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetResult_m8DBB9B28CA0434FF87A202D48FDCCFC85B0D5155(L_20, L_21, AsyncTaskMethodBuilder_1_SetResult_m8DBB9B28CA0434FF87A202D48FDCCFC85B0D5155_RuntimeMethod_var);
	}

IL_00b3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartWithCustomAuthAsyncU3Ed__104_MoveNext_m3DADDF7D050E7201E0649BED7767DFB66638DBB6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41*>(__this + _offset);
	U3CStartWithCustomAuthAsyncU3Ed__104_MoveNext_m3DADDF7D050E7201E0649BED7767DFB66638DBB6(_thisAdjusted, method);
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__104::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWithCustomAuthAsyncU3Ed__104_SetStateMachine_mB7CA65B04DCA87A2CA798481AB291BF174B46BDD (U3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mBA625C3B5E44E04FC3A40F9E9960BFA5B38CEB3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_0 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetStateMachine_mBA625C3B5E44E04FC3A40F9E9960BFA5B38CEB3A(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mBA625C3B5E44E04FC3A40F9E9960BFA5B38CEB3A_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartWithCustomAuthAsyncU3Ed__104_SetStateMachine_mB7CA65B04DCA87A2CA798481AB291BF174B46BDD_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartWithCustomAuthAsyncU3Ed__104_tD26103B5FBECB2FC316CC38E9FEF373F0085AB41*>(__this + _offset);
	U3CStartWithCustomAuthAsyncU3Ed__104_SetStateMachine_mB7CA65B04DCA87A2CA798481AB291BF174B46BDD(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__105::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWithCustomAuthAsyncU3Ed__105_MoveNext_m56995677C3A16EBE738EAED244DA05EFCCFD7D69 (U3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960_TisU3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C_m43A6BAD7CE5556EAEF57122A881E0564A217A100_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m8DBB9B28CA0434FF87A202D48FDCCFC85B0D5155_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthFlowType_tBE61AA75513223AD20B59024E7E078043589092C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m4ABB7BD7F6880E8C271184274B596307BB84176F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mEC6714330A618645449D77CAA62D1FD6FB087E89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m70E3FA1F98212436E4E4D975F5904F6BFABBC256_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAmazonCognitoIdentityProvider_t815DA88C2B3B89933722D90610648734DE9EDF21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m70041B804243C56052F1469E5BE5E2AB78A4CAA0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* V_1 = NULL;
	AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A* V_2 = NULL;
	InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB* V_3 = NULL;
	InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* V_4 = NULL;
	ConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960 V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredTaskAwaitable_1_t8DBB13C9296821E47D4FE10CDD7AC77601AE08E5 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00ad_1;
			}
		}
		{
			InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB* L_3 = (InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB*)il2cpp_codegen_object_new(InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB_il2cpp_TypeInfo_var);
			InitiateAuthRequest__ctor_m3A61807A1A6B2E2A2481384097CE965EC2555D51(L_3, NULL);
			InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB* L_4 = L_3;
			il2cpp_codegen_runtime_class_init_inline(AuthFlowType_tBE61AA75513223AD20B59024E7E078043589092C_il2cpp_TypeInfo_var);
			AuthFlowType_tBE61AA75513223AD20B59024E7E078043589092C* L_5 = ((AuthFlowType_tBE61AA75513223AD20B59024E7E078043589092C_StaticFields*)il2cpp_codegen_static_fields_for(AuthFlowType_tBE61AA75513223AD20B59024E7E078043589092C_il2cpp_TypeInfo_var))->___CUSTOM_AUTH_5;
			InitiateAuthRequest_set_AuthFlow_m333BCB06AD95FD6E9AD777242F44439047CA067C_inline(L_4, L_5, NULL);
			InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB* L_6 = L_4;
			InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219* L_7 = __this->___customRequest_2;
			RuntimeObject* L_8;
			L_8 = InitiateCustomAuthRequest_get_AuthParameters_m129A9FCEDA144DDA475FE59478D750B4FE51C7DC_inline(L_7, NULL);
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9(L_9, L_8, Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9_RuntimeMethod_var);
			InitiateAuthRequest_set_AuthParameters_m0EF43D28A25B2EF37B119AF6D6DDB86BD9210C47_inline(L_6, L_9, NULL);
			InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB* L_10 = L_6;
			CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* L_11 = V_1;
			String_t* L_12;
			L_12 = CognitoUser_get_ClientID_m658BA35B3F4E6715415B3F73C7515973B32A4334_inline(L_11, NULL);
			InitiateAuthRequest_set_ClientId_m812E96C0B6636DE9E202DF5A96CB78F909104D50_inline(L_10, L_12, NULL);
			InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB* L_13 = L_10;
			InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219* L_14 = __this->___customRequest_2;
			RuntimeObject* L_15;
			L_15 = InitiateCustomAuthRequest_get_ClientMetadata_m05E158CC040A58F46E1C64623732ED94BD0D2AB6_inline(L_14, NULL);
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9(L_16, L_15, Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9_RuntimeMethod_var);
			InitiateAuthRequest_set_ClientMetadata_m399A9AD63826132577D7034589C8A7A876015928_inline(L_13, L_16, NULL);
			V_3 = L_13;
			CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* L_17 = V_1;
			RuntimeObject* L_18;
			L_18 = CognitoUser_get_Provider_m92E887F0BC7FF366D8FD95A0EB9AD82060AF4101_inline(L_17, NULL);
			InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB* L_19 = V_3;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_20 = __this->___cancellationToken_4;
			Task_1_t040B2D8ADE8D739FEBCFA7A4AAA80876413350BF* L_21;
			L_21 = InterfaceFuncInvoker2< Task_1_t040B2D8ADE8D739FEBCFA7A4AAA80876413350BF*, InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* System.Threading.Tasks.Task`1<Amazon.CognitoIdentityProvider.Model.InitiateAuthResponse> Amazon.CognitoIdentityProvider.IAmazonCognitoIdentityProvider::InitiateAuthAsync(Amazon.CognitoIdentityProvider.Model.InitiateAuthRequest,System.Threading.CancellationToken) */, IAmazonCognitoIdentityProvider_t815DA88C2B3B89933722D90610648734DE9EDF21_il2cpp_TypeInfo_var, L_18, L_19, L_20);
			ConfiguredTaskAwaitable_1_t8DBB13C9296821E47D4FE10CDD7AC77601AE08E5 L_22;
			L_22 = Task_1_ConfigureAwait_m70041B804243C56052F1469E5BE5E2AB78A4CAA0(L_21, (bool)0, Task_1_ConfigureAwait_m70041B804243C56052F1469E5BE5E2AB78A4CAA0_RuntimeMethod_var);
			V_6 = L_22;
			ConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960 L_23;
			L_23 = ConfiguredTaskAwaitable_1_GetAwaiter_m4ABB7BD7F6880E8C271184274B596307BB84176F_inline((&V_6), ConfiguredTaskAwaitable_1_GetAwaiter_m4ABB7BD7F6880E8C271184274B596307BB84176F_RuntimeMethod_var);
			V_5 = L_23;
			bool L_24;
			L_24 = ConfiguredTaskAwaiter_get_IsCompleted_m70E3FA1F98212436E4E4D975F5904F6BFABBC256((&V_5), ConfiguredTaskAwaiter_get_IsCompleted_m70E3FA1F98212436E4E4D975F5904F6BFABBC256_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_00ca_1;
			}
		}
		{
			int32_t L_25 = 0;
			V_0 = L_25;
			__this->___U3CU3E1__state_0 = L_25;
			ConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960 L_26 = V_5;
			__this->___U3CU3Eu__1_5 = L_26;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_27 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960_TisU3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C_m43A6BAD7CE5556EAEF57122A881E0564A217A100(L_27, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960_TisU3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C_m43A6BAD7CE5556EAEF57122A881E0564A217A100_RuntimeMethod_var);
			goto IL_0156;
		}

IL_00ad_1:
		{
			ConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960 L_28 = __this->___U3CU3Eu__1_5;
			V_5 = L_28;
			ConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960* L_29 = (ConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960*)(&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_29, sizeof(ConfiguredTaskAwaiter_t8D6AC0F8FC7B107A37C0FAA24453C44E0AB4D960));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
		}

IL_00ca_1:
		{
			InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* L_31;
			L_31 = ConfiguredTaskAwaiter_GetResult_mEC6714330A618645449D77CAA62D1FD6FB087E89((&V_5), ConfiguredTaskAwaiter_GetResult_mEC6714330A618645449D77CAA62D1FD6FB087E89_RuntimeMethod_var);
			V_4 = L_31;
			CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* L_32 = V_1;
			InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* L_33 = V_4;
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_34;
			L_34 = InitiateAuthResponse_get_ChallengeParameters_m42A92885A554898A1E2E9729026C69F1D927F1C7_inline(L_33, NULL);
			CognitoUser_UpdateUsernameAndSecretHash_m02A83442180CAEC1FE58577ED40949F00C8A328A(L_32, L_34, NULL);
			CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* L_35 = V_1;
			InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* L_36 = V_4;
			ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* L_37;
			L_37 = InitiateAuthResponse_get_ChallengeName_mED12592384E09492D6E81B709B026D4A497AA0CB_inline(L_36, NULL);
			InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* L_38 = V_4;
			AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* L_39;
			L_39 = InitiateAuthResponse_get_AuthenticationResult_mE10CF96861D444017FEDA15A11931FEC35244B52_inline(L_38, NULL);
			CognitoUser_UpdateSessionIfAuthenticationComplete_mEB4F85EDA80395EC6894744ED53D0F128A1FF593(L_35, L_37, L_39, NULL);
			InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* L_40 = V_4;
			String_t* L_41;
			L_41 = InitiateAuthResponse_get_Session_m5ECBBF616211034F7807C34DBC728FE8DFBE38F0_inline(L_40, NULL);
			InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* L_42 = V_4;
			AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* L_43;
			L_43 = InitiateAuthResponse_get_AuthenticationResult_mE10CF96861D444017FEDA15A11931FEC35244B52_inline(L_42, NULL);
			InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* L_44 = V_4;
			ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* L_45;
			L_45 = InitiateAuthResponse_get_ChallengeName_mED12592384E09492D6E81B709B026D4A497AA0CB_inline(L_44, NULL);
			InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* L_46 = V_4;
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_47;
			L_47 = InitiateAuthResponse_get_ChallengeParameters_m42A92885A554898A1E2E9729026C69F1D927F1C7_inline(L_46, NULL);
			InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* L_48 = V_4;
			ResponseMetadata_tBF985AAFD923FA79A2759015BD7BE04ED320AE03* L_49;
			L_49 = AmazonWebServiceResponse_get_ResponseMetadata_m48152D51DE0B428227272EBD7BF93B1C253F8EA1_inline(L_48, NULL);
			RuntimeObject* L_50;
			L_50 = ResponseMetadata_get_Metadata_m828F215E34DE4F5AFD29D4D0F1ED0B2B6B7B77FA(L_49, NULL);
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_51 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9(L_51, L_50, Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9_RuntimeMethod_var);
			AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A* L_52 = (AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A*)il2cpp_codegen_object_new(AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A_il2cpp_TypeInfo_var);
			AuthFlowResponse__ctor_mAEDF65E3A4CB4C8D2D5CD27FE01C5F6CCB155629(L_52, L_41, L_43, L_45, L_47, L_51, NULL);
			V_2 = L_52;
			goto IL_0142;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0129;
		}
		throw e;
	}

CATCH_0129:
	{// begin catch(System.Exception)
		Exception_t* L_53 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_53;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_54 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_55 = V_7;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_1_SetException_m79924F59B204325407F2623448F8C9E7868924CB(L_54, L_55, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m79924F59B204325407F2623448F8C9E7868924CB_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0156;
	}// end catch (depth: 1)

IL_0142:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_56 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&__this->___U3CU3Et__builder_1);
		AuthFlowResponse_t02AAB5AD975735512520A7C57A26F1613810082A* L_57 = V_2;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetResult_m8DBB9B28CA0434FF87A202D48FDCCFC85B0D5155(L_56, L_57, AsyncTaskMethodBuilder_1_SetResult_m8DBB9B28CA0434FF87A202D48FDCCFC85B0D5155_RuntimeMethod_var);
	}

IL_0156:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartWithCustomAuthAsyncU3Ed__105_MoveNext_m56995677C3A16EBE738EAED244DA05EFCCFD7D69_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C*>(__this + _offset);
	U3CStartWithCustomAuthAsyncU3Ed__105_MoveNext_m56995677C3A16EBE738EAED244DA05EFCCFD7D69(_thisAdjusted, method);
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUser/<StartWithCustomAuthAsync>d__105::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWithCustomAuthAsyncU3Ed__105_SetStateMachine_mFC6EDC339179DC12F0F1110B4D6996A62EF6F351 (U3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mBA625C3B5E44E04FC3A40F9E9960BFA5B38CEB3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46* L_0 = (AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t3F2916164DFF941F5D8E733CA8A117891EC11B46_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetStateMachine_mBA625C3B5E44E04FC3A40F9E9960BFA5B38CEB3A(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mBA625C3B5E44E04FC3A40F9E9960BFA5B38CEB3A_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartWithCustomAuthAsyncU3Ed__105_SetStateMachine_mFC6EDC339179DC12F0F1110B4D6996A62EF6F351_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CStartWithCustomAuthAsyncU3Ed__105_tDD403BDD3EDBE28C6BB8F97B1F98E106147A800C*>(__this + _offset);
	U3CStartWithCustomAuthAsyncU3Ed__105_SetStateMachine_mFC6EDC339179DC12F0F1110B4D6996A62EF6F351(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Amazon.Extensions.CognitoAuthentication.CognitoUserPool::get_PoolID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CognitoUserPool_get_PoolID_m99281C53A7CAC1D4CDF0C32090941FD0F6D126E8 (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPoolIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserPool::set_PoolID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUserPool_set_PoolID_m872334DB96658739F44F45FA27DDB07C8573CA21 (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPoolIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPoolIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Amazon.Extensions.CognitoAuthentication.CognitoUserPool::get_ClientID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CognitoUserPool_get_ClientID_m0927CCCC84DA6816E9503A58EAD8D0BD085A984D (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CClientIDU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserPool::set_ClientID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUserPool_set_ClientID_mC11BD963F601E3F75606DB64EDEC2343AB37779C (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CClientIDU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientIDU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Amazon.CognitoIdentityProvider.IAmazonCognitoIdentityProvider Amazon.Extensions.CognitoAuthentication.CognitoUserPool::get_Provider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CognitoUserPool_get_Provider_m376993456FD42DCEE91FEB3FE75168934BC3FEAC (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CProviderU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserPool::set_Provider(Amazon.CognitoIdentityProvider.IAmazonCognitoIdentityProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUserPool_set_Provider_m1DE05BF8CA2CB1797A83E829FBD67745AB1E8A5A (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CProviderU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProviderU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Amazon.Extensions.CognitoAuthentication.CognitoUserPool::get_ClientSecret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CognitoUserPool_get_ClientSecret_mFA5C789B8A063D0949C445E9AD99AB98B2242B91 (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CClientSecretU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserPool::set_ClientSecret(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUserPool_set_ClientSecret_m1F07032E4806B640C348F79DCAB11CF7C314C544 (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CClientSecretU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientSecretU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserPool::.ctor(System.String,System.String,Amazon.CognitoIdentityProvider.IAmazonCognitoIdentityProvider,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUserPool__ctor_m2C7E4568395974CC8237B014118C88441E441EAD (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, String_t* ___0_poolID, String_t* ___1_clientID, RuntimeObject* ___2_provider, String_t* ___3_clientSecret, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AmazonCognitoIdentityProviderClient_t0E07D3551087EC08470443D2C21094424F53B4B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CognitoAuthHelper_ServiceClientBeforeRequestEvent_mB7DB2F3A78C3DDA124E418924BD1EE5B49201E98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestEventHandler_t7634A607863E3BECFAB972C8C28025EA9B7BF61A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	AmazonCognitoIdentityProviderClient_t0E07D3551087EC08470443D2C21094424F53B4B4* V_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_poolID;
		bool L_1;
		L_1 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_0, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, NULL);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0311F42C1F9456B6C2CBD1CCC062B5F8B139A889)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB07A09291C08815CF3D11E19DCD1076FA7C7EEE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CognitoUserPool__ctor_m2C7E4568395974CC8237B014118C88441E441EAD_RuntimeMethod_var)));
	}

IL_0023:
	{
		String_t* L_3 = ___0_poolID;
		CognitoUserPool_set_PoolID_m872334DB96658739F44F45FA27DDB07C8573CA21_inline(__this, L_3, NULL);
		String_t* L_4 = ___1_clientID;
		CognitoUserPool_set_ClientID_mC11BD963F601E3F75606DB64EDEC2343AB37779C_inline(__this, L_4, NULL);
		String_t* L_5 = ___3_clientSecret;
		CognitoUserPool_set_ClientSecret_m1F07032E4806B640C348F79DCAB11CF7C314C544_inline(__this, L_5, NULL);
		RuntimeObject* L_6 = ___2_provider;
		CognitoUserPool_set_Provider_m1DE05BF8CA2CB1797A83E829FBD67745AB1E8A5A_inline(__this, L_6, NULL);
		RuntimeObject* L_7;
		L_7 = CognitoUserPool_get_Provider_m376993456FD42DCEE91FEB3FE75168934BC3FEAC_inline(__this, NULL);
		V_0 = ((AmazonCognitoIdentityProviderClient_t0E07D3551087EC08470443D2C21094424F53B4B4*)IsInstClass((RuntimeObject*)L_7, AmazonCognitoIdentityProviderClient_t0E07D3551087EC08470443D2C21094424F53B4B4_il2cpp_TypeInfo_var));
		AmazonCognitoIdentityProviderClient_t0E07D3551087EC08470443D2C21094424F53B4B4* L_8 = V_0;
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		AmazonCognitoIdentityProviderClient_t0E07D3551087EC08470443D2C21094424F53B4B4* L_9 = V_0;
		RequestEventHandler_t7634A607863E3BECFAB972C8C28025EA9B7BF61A* L_10 = (RequestEventHandler_t7634A607863E3BECFAB972C8C28025EA9B7BF61A*)il2cpp_codegen_object_new(RequestEventHandler_t7634A607863E3BECFAB972C8C28025EA9B7BF61A_il2cpp_TypeInfo_var);
		RequestEventHandler__ctor_mC6982232BF47E67D98A30C3EC5245A8F2367D130(L_10, NULL, (intptr_t)((void*)CognitoAuthHelper_ServiceClientBeforeRequestEvent_mB7DB2F3A78C3DDA124E418924BD1EE5B49201E98_RuntimeMethod_var), NULL);
		AmazonServiceClient_add_BeforeRequestEvent_m28F5D7FF85185E61668B0866E936DCD6CB1AE115(L_9, L_10, NULL);
	}

IL_0061:
	{
		return;
	}
}
// System.Threading.Tasks.Task Amazon.Extensions.CognitoAuthentication.CognitoUserPool::SignUpAsync(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CognitoUserPool_SignUpAsync_mF4552697389732A44D959B399D0A08C72A734608 (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, String_t* ___0_userID, String_t* ___1_password, RuntimeObject* ___2_userAttributes, RuntimeObject* ___3_validationData, const RuntimeMethod* method) 
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_userID;
		String_t* L_1 = ___1_password;
		RuntimeObject* L_2 = ___2_userAttributes;
		RuntimeObject* L_3 = ___3_validationData;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = V_0;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = CognitoUserPool_SignUpAsync_mCBAD93B9FF020B7E9CB2662AF66F43F4BE503580(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Threading.Tasks.Task Amazon.Extensions.CognitoAuthentication.CognitoUserPool::SignUpAsync(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CognitoUserPool_SignUpAsync_mCBAD93B9FF020B7E9CB2662AF66F43F4BE503580 (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, String_t* ___0_userID, String_t* ___1_password, RuntimeObject* ___2_userAttributes, RuntimeObject* ___3_validationData, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___4_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAmazonCognitoIdentityProvider_t815DA88C2B3B89933722D90610648734DE9EDF21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* V_0 = NULL;
	{
		String_t* L_0 = ___0_userID;
		String_t* L_1 = ___1_password;
		RuntimeObject* L_2 = ___2_userAttributes;
		RuntimeObject* L_3 = ___3_validationData;
		SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* L_4;
		L_4 = CognitoUserPool_CreateSignUpRequest_m81C8C716C9AC0476D2AC21DA6E3EF848B9E25524(__this, L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		RuntimeObject* L_5;
		L_5 = CognitoUserPool_get_Provider_m376993456FD42DCEE91FEB3FE75168934BC3FEAC_inline(__this, NULL);
		SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* L_6 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ___4_cancellationToken;
		Task_1_tCDFD88C7C279AC3FF77FA017A803840B030264EB* L_8;
		L_8 = InterfaceFuncInvoker2< Task_1_tCDFD88C7C279AC3FF77FA017A803840B030264EB*, SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(2 /* System.Threading.Tasks.Task`1<Amazon.CognitoIdentityProvider.Model.SignUpResponse> Amazon.CognitoIdentityProvider.IAmazonCognitoIdentityProvider::SignUpAsync(Amazon.CognitoIdentityProvider.Model.SignUpRequest,System.Threading.CancellationToken) */, IAmazonCognitoIdentityProvider_t815DA88C2B3B89933722D90610648734DE9EDF21_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		return L_8;
	}
}
// Amazon.CognitoIdentityProvider.Model.SignUpRequest Amazon.Extensions.CognitoAuthentication.CognitoUserPool::CreateSignUpRequest(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* CognitoUserPool_CreateSignUpRequest_m81C8C716C9AC0476D2AC21DA6E3EF848B9E25524 (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, String_t* ___0_userID, String_t* ___1_password, RuntimeObject* ___2_userAttributes, RuntimeObject* ___3_validationData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* V_0 = NULL;
	List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* V_1 = NULL;
	SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* V_2 = NULL;
	List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* G_B6_0 = NULL;
	{
		V_0 = (List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D*)NULL;
		RuntimeObject* L_0 = ___2_userAttributes;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		RuntimeObject* L_1 = ___2_userAttributes;
		List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* L_2;
		L_2 = CognitoAuthHelper_CreateAttributeList_m2E05B395FA796BDD456827DAFBD4905D1648BC95(L_1, NULL);
		V_0 = L_2;
		goto IL_001e;
	}

IL_000e:
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD096B8301B9807B9045A248F66BF18A2F33EC33)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral423EB5F690AD3B8F9E82A5EAEA94566DBDC2CB66)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CognitoUserPool_CreateSignUpRequest_m81C8C716C9AC0476D2AC21DA6E3EF848B9E25524_RuntimeMethod_var)));
	}

IL_001e:
	{
		RuntimeObject* L_4 = ___3_validationData;
		if (L_4)
		{
			goto IL_0025;
		}
	}
	{
		G_B6_0 = ((List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D*)(NULL));
		goto IL_002c;
	}

IL_0025:
	{
		RuntimeObject* L_5 = ___3_validationData;
		List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* L_6;
		L_6 = CognitoAuthHelper_CreateAttributeList_m2E05B395FA796BDD456827DAFBD4905D1648BC95(L_5, NULL);
		G_B6_0 = L_6;
	}

IL_002c:
	{
		V_1 = G_B6_0;
		SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* L_7 = (SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA*)il2cpp_codegen_object_new(SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA_il2cpp_TypeInfo_var);
		SignUpRequest__ctor_m0B67DCA6A34887B4D549C32B712200999C7F22D1(L_7, NULL);
		SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* L_8 = L_7;
		String_t* L_9 = ___0_userID;
		SignUpRequest_set_Username_m8DB936184365AC96E767F168BAD6FBE814FB40A3_inline(L_8, L_9, NULL);
		SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* L_10 = L_8;
		String_t* L_11 = ___1_password;
		SignUpRequest_set_Password_mD565933319C5CFC0BACC971D95207102063E7F3C_inline(L_10, L_11, NULL);
		SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* L_12 = L_10;
		String_t* L_13;
		L_13 = CognitoUserPool_get_ClientID_m0927CCCC84DA6816E9503A58EAD8D0BD085A984D_inline(__this, NULL);
		SignUpRequest_set_ClientId_m18FCBE6E7436FFFBFF1F7D7B63C55AE2DF8E6DBF_inline(L_12, L_13, NULL);
		SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* L_14 = L_12;
		List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* L_15 = V_0;
		SignUpRequest_set_UserAttributes_mFD3805E87777B937DDAF4C2B5E412D09E238D23C_inline(L_14, L_15, NULL);
		SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* L_16 = L_14;
		List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* L_17 = V_1;
		SignUpRequest_set_ValidationData_mFD302AD13B25B8BFE2D39C2E8EE06A049F92218A_inline(L_16, L_17, NULL);
		V_2 = L_16;
		String_t* L_18;
		L_18 = CognitoUserPool_get_ClientSecret_mFA5C789B8A063D0949C445E9AD99AB98B2242B91_inline(__this, NULL);
		bool L_19;
		L_19 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_18, NULL);
		if (L_19)
		{
			goto IL_0080;
		}
	}
	{
		SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* L_20 = V_2;
		String_t* L_21 = ___0_userID;
		String_t* L_22;
		L_22 = CognitoUserPool_get_ClientID_m0927CCCC84DA6816E9503A58EAD8D0BD085A984D_inline(__this, NULL);
		String_t* L_23;
		L_23 = CognitoUserPool_get_ClientSecret_mFA5C789B8A063D0949C445E9AD99AB98B2242B91_inline(__this, NULL);
		String_t* L_24;
		L_24 = CognitoAuthHelper_GetUserPoolSecretHash_mF57E3665C72AD602AB5E76934BF0C3867B1CC6CF(L_21, L_22, L_23, NULL);
		SignUpRequest_set_SecretHash_m1F91F0AC35DF10DA4BBBC30512C7A445ECC2452F_inline(L_20, L_24, NULL);
	}

IL_0080:
	{
		SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* L_25 = V_2;
		return L_25;
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
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserSession::set_IdToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUserSession_set_IdToken_m173D74B12BD768C165586DDAE0CC531E864516D2 (CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CIdTokenU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdTokenU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserSession::set_AccessToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUserSession_set_AccessToken_mA0DFBDAC012FB94716AE4FB6BED6AD46318FA760 (CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CAccessTokenU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAccessTokenU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserSession::set_RefreshToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUserSession_set_RefreshToken_m27AE16CED6E6FF1B4D0C62064A0CC82A394F6DB9 (CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CRefreshTokenU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRefreshTokenU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserSession::set_ExpirationTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUserSession_set_ExpirationTime_mD22E03ED858E76D5F45EB72B92DF2AF6F60ED8B7 (CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		__this->___U3CExpirationTimeU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserSession::set_IssuedTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUserSession_set_IssuedTime_m668E36A3A21703E73D2BFF33719B24A185B0574C (CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		__this->___U3CIssuedTimeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.CognitoUserSession::.ctor(System.String,System.String,System.String,System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoUserSession__ctor_m689A5F392D3F769F3995550351A33FC40221EAE0 (CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* __this, String_t* ___0_idToken, String_t* ___1_accessToken, String_t* ___2_refreshToken, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___3_issuedTime, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___4_expirationTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_idToken;
		CognitoUserSession_set_IdToken_m173D74B12BD768C165586DDAE0CC531E864516D2_inline(__this, L_0, NULL);
		String_t* L_1 = ___1_accessToken;
		CognitoUserSession_set_AccessToken_mA0DFBDAC012FB94716AE4FB6BED6AD46318FA760_inline(__this, L_1, NULL);
		String_t* L_2 = ___2_refreshToken;
		CognitoUserSession_set_RefreshToken_m27AE16CED6E6FF1B4D0C62064A0CC82A394F6DB9_inline(__this, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9((&___3_issuedTime), NULL);
		CognitoUserSession_set_IssuedTime_m668E36A3A21703E73D2BFF33719B24A185B0574C_inline(__this, L_3, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9((&___4_expirationTime), NULL);
		CognitoUserSession_set_ExpirationTime_mD22E03ED858E76D5F45EB72B92DF2AF6F60ED8B7_inline(__this, L_4, NULL);
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
// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoAuthHelper::get_AssemblyFileVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CognitoAuthHelper_get_AssemblyFileVersion_mB602EDBDA68932A4CBF571DD7F573A69B420969E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssemblyFileVersionAttribute_tEBD946AEBE271D135B9161CE0B423ED10AA933F4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssemblyFileVersionAttribute_tEBD946AEBE271D135B9161CE0B423ED10AA933F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CognitoAuthHelper_tF40CC3B14C08BA0121EB0A565FCF6717B793D282_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CognitoAuthHelper_tF40CC3B14C08BA0121EB0A565FCF6717B793D282_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C);
		s_Il2CppMethodInitialized = true;
	}
	AssemblyFileVersionAttribute_tEBD946AEBE271D135B9161CE0B423ED10AA933F4* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		String_t* L_0 = ((CognitoAuthHelper_tF40CC3B14C08BA0121EB0A565FCF6717B793D282_StaticFields*)il2cpp_codegen_static_fields_for(CognitoAuthHelper_tF40CC3B14C08BA0121EB0A565FCF6717B793D282_il2cpp_TypeInfo_var))->___assemblyFileVersion_0;
		if (L_0)
		{
			goto IL_0045;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (CognitoAuthHelper_tF40CC3B14C08BA0121EB0A565FCF6717B793D282_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_3;
		L_3 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_2, NULL);
		Assembly_t* L_4;
		L_4 = VirtualFuncInvoker0< Assembly_t* >::Invoke(36 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_3);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (AssemblyFileVersionAttribute_tEBD946AEBE271D135B9161CE0B423ED10AA933F4_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7;
		L_7 = CustomAttributeExtensions_GetCustomAttribute_m5BEDBB46CF1A8378A386E144E4591C9BEDAF1A9B(L_4, L_6, NULL);
		V_0 = ((AssemblyFileVersionAttribute_tEBD946AEBE271D135B9161CE0B423ED10AA933F4*)IsInstSealed((RuntimeObject*)L_7, AssemblyFileVersionAttribute_tEBD946AEBE271D135B9161CE0B423ED10AA933F4_il2cpp_TypeInfo_var));
		AssemblyFileVersionAttribute_tEBD946AEBE271D135B9161CE0B423ED10AA933F4* L_8 = V_0;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		AssemblyFileVersionAttribute_tEBD946AEBE271D135B9161CE0B423ED10AA933F4* L_9 = V_0;
		String_t* L_10;
		L_10 = AssemblyFileVersionAttribute_get_Version_m1B58C7F8413CE06BBAFBE74A1748B1E100CF73AE_inline(L_9, NULL);
		G_B4_0 = L_10;
		goto IL_0040;
	}

IL_003b:
	{
		G_B4_0 = _stringLiteral5D54E959817188DBAD9E65FA3DB55F06B70F5E3C;
	}

IL_0040:
	{
		((CognitoAuthHelper_tF40CC3B14C08BA0121EB0A565FCF6717B793D282_StaticFields*)il2cpp_codegen_static_fields_for(CognitoAuthHelper_tF40CC3B14C08BA0121EB0A565FCF6717B793D282_il2cpp_TypeInfo_var))->___assemblyFileVersion_0 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoAuthHelper_tF40CC3B14C08BA0121EB0A565FCF6717B793D282_StaticFields*)il2cpp_codegen_static_fields_for(CognitoAuthHelper_tF40CC3B14C08BA0121EB0A565FCF6717B793D282_il2cpp_TypeInfo_var))->___assemblyFileVersion_0), (void*)G_B4_0);
	}

IL_0045:
	{
		String_t* L_11 = ((CognitoAuthHelper_tF40CC3B14C08BA0121EB0A565FCF6717B793D282_StaticFields*)il2cpp_codegen_static_fields_for(CognitoAuthHelper_tF40CC3B14C08BA0121EB0A565FCF6717B793D282_il2cpp_TypeInfo_var))->___assemblyFileVersion_0;
		return L_11;
	}
}
// System.String Amazon.Extensions.CognitoAuthentication.Util.CognitoAuthHelper::GetUserPoolSecretHash(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CognitoAuthHelper_GetUserPoolSecretHash_mF57E3665C72AD602AB5E76934BF0C3867B1CC6CF (String_t* ___0_userID, String_t* ___1_clientID, String_t* ___2_clientSecret, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		String_t* L_0 = ___0_userID;
		String_t* L_1 = ___1_clientID;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, L_1, NULL);
		V_0 = L_2;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_4 = ___2_clientSecret;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, L_4);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, L_7);
		V_1 = L_8;
		HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF* L_9 = (HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF*)il2cpp_codegen_object_new(HMACSHA256_t594D178275B0B5AF11CBC0AB816011DED5E20ADF_il2cpp_TypeInfo_var);
		HMACSHA256__ctor_mFB46BF6A850BF47C0F079F026E79BDBFA6F866A5(L_9, L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_9, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_11, NULL);
		return L_12;
	}
}
// System.Collections.Generic.List`1<Amazon.CognitoIdentityProvider.Model.AttributeType> Amazon.Extensions.CognitoAuthentication.Util.CognitoAuthHelper::CreateAttributeList(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* CognitoAuthHelper_CreateAttributeList_m2E05B395FA796BDD456827DAFBD4905D1648BC95 (RuntimeObject* ___0_attributeDict, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AttributeType_t7FAD47DA16A417B5ED70A8E27D83BD7BA13BEA78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m035708C2356C92747DA0E35BEF57060F02801707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5BD713027E345EAD9E38B857E02832F52B4ABC8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	AttributeType_t7FAD47DA16A417B5ED70A8E27D83BD7BA13BEA78* V_3 = NULL;
	{
		List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* L_0 = (List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D*)il2cpp_codegen_object_new(List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D_il2cpp_TypeInfo_var);
		List_1__ctor_m5BD713027E345EAD9E38B857E02832F52B4ABC8C(L_0, List_1__ctor_m5BD713027E345EAD9E38B857E02832F52B4ABC8C_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_attributeDict;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0047:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0050;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0050:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003d_1;
			}

IL_000f_1:
			{
				RuntimeObject* L_5 = V_1;
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_6;
				L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				AttributeType_t7FAD47DA16A417B5ED70A8E27D83BD7BA13BEA78* L_7 = (AttributeType_t7FAD47DA16A417B5ED70A8E27D83BD7BA13BEA78*)il2cpp_codegen_object_new(AttributeType_t7FAD47DA16A417B5ED70A8E27D83BD7BA13BEA78_il2cpp_TypeInfo_var);
				AttributeType__ctor_mEBDE4BDB3A96D8C5232F6CC1611F74188EC40897(L_7, NULL);
				AttributeType_t7FAD47DA16A417B5ED70A8E27D83BD7BA13BEA78* L_8 = L_7;
				String_t* L_9;
				L_9 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				AttributeType_set_Name_mF2242DFF72D147F733AEB9DC4988CF6DDAD9F750_inline(L_8, L_9, NULL);
				AttributeType_t7FAD47DA16A417B5ED70A8E27D83BD7BA13BEA78* L_10 = L_8;
				String_t* L_11;
				L_11 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				AttributeType_set_Value_m106C68540013CACA00EEE1EEC6115F1076B758F3_inline(L_10, L_11, NULL);
				V_3 = L_10;
				List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* L_12 = V_0;
				AttributeType_t7FAD47DA16A417B5ED70A8E27D83BD7BA13BEA78* L_13 = V_3;
				List_1_Add_m035708C2356C92747DA0E35BEF57060F02801707_inline(L_12, L_13, List_1_Add_m035708C2356C92747DA0E35BEF57060F02801707_RuntimeMethod_var);
			}

IL_003d_1:
			{
				RuntimeObject* L_14 = V_1;
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0051;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* L_16 = V_0;
		return L_16;
	}
}
// System.Void Amazon.Extensions.CognitoAuthentication.Util.CognitoAuthHelper::ServiceClientBeforeRequestEvent(System.Object,Amazon.Runtime.RequestEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoAuthHelper_ServiceClientBeforeRequestEvent_mB7DB2F3A78C3DDA124E418924BD1EE5B49201E98 (RuntimeObject* ___0_sender, RequestEventArgs_tA481BACD3813A31F36627FC1D3B6C833EC686A73* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebServiceRequestEventArgs_t120A45C1B3AC645E0B85163E58E49469D1BEC36C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1AF5447134F86E81C58631C3B6D93E2C8F97B1A);
		s_Il2CppMethodInitialized = true;
	}
	WebServiceRequestEventArgs_t120A45C1B3AC645E0B85163E58E49469D1BEC36C* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RequestEventArgs_tA481BACD3813A31F36627FC1D3B6C833EC686A73* L_0 = ___1_e;
		V_0 = ((WebServiceRequestEventArgs_t120A45C1B3AC645E0B85163E58E49469D1BEC36C*)IsInstClass((RuntimeObject*)L_0, WebServiceRequestEventArgs_t120A45C1B3AC645E0B85163E58E49469D1BEC36C_il2cpp_TypeInfo_var));
		WebServiceRequestEventArgs_t120A45C1B3AC645E0B85163E58E49469D1BEC36C* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		WebServiceRequestEventArgs_t120A45C1B3AC645E0B85163E58E49469D1BEC36C* L_2 = V_0;
		RuntimeObject* L_3;
		L_3 = WebServiceRequestEventArgs_get_Headers_m890706E0235181D917D4414C276E338E033B4328_inline(L_2, NULL);
		bool L_4;
		L_4 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::ContainsKey(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_3, _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF);
		if (L_4)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		return;
	}

IL_001d:
	{
		String_t* L_5;
		L_5 = CognitoAuthHelper_get_AssemblyFileVersion_mB602EDBDA68932A4CBF571DD7F573A69B420969E(NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB1AF5447134F86E81C58631C3B6D93E2C8F97B1A, L_5, NULL);
		V_1 = L_6;
		WebServiceRequestEventArgs_t120A45C1B3AC645E0B85163E58E49469D1BEC36C* L_7 = V_0;
		RuntimeObject* L_8;
		L_8 = WebServiceRequestEventArgs_get_Headers_m890706E0235181D917D4414C276E338E033B4328_inline(L_7, NULL);
		String_t* L_9;
		L_9 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_8, _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF);
		String_t* L_10 = V_1;
		bool L_11;
		L_11 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_9, L_10, NULL);
		if (L_11)
		{
			goto IL_006b;
		}
	}
	{
		WebServiceRequestEventArgs_t120A45C1B3AC645E0B85163E58E49469D1BEC36C* L_12 = V_0;
		RuntimeObject* L_13;
		L_13 = WebServiceRequestEventArgs_get_Headers_m890706E0235181D917D4414C276E338E033B4328_inline(L_12, NULL);
		WebServiceRequestEventArgs_t120A45C1B3AC645E0B85163E58E49469D1BEC36C* L_14 = V_0;
		RuntimeObject* L_15;
		L_15 = WebServiceRequestEventArgs_get_Headers_m890706E0235181D917D4414C276E338E033B4328_inline(L_14, NULL);
		String_t* L_16;
		L_16 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_15, _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF);
		String_t* L_17 = V_1;
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_16, L_17, NULL);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_13, _stringLiteral48C75149E263D08DBE3F3CB86DF011FA96C010AF, L_18);
	}

IL_006b:
	{
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
// System.Void Amazon.Extensions.CognitoAuthentication.Util.CognitoConstants::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CognitoConstants__cctor_m6A7595FF28431E903369DF3D696C028408027EA8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BE6D6FEA9C0036EEDEFFD38B2D1C4EACC2B9D2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F1268E1AE201354BBC8D00D49BEAC846F12EDF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3581B9DAF560030E2E31AE65668D9C6BEAA6728D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44D2155A9A3200DB4F66438C4A7020431E61BB80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CB81BFE27645382DC38DCACB8A2C37AB347D6D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51921D99887DD5ED233F87333EF648AE91A8BF7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral530150E04E6EC41BEE7DA49EB9C12C5E0289840D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral560B461CD3B3EC699D4EEE2BF321914A093EBDB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B02B1E1487008AA8DA0EBBF4799CBC796FE4D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral736AF32BCDCEA98E53845EF220EE293D0B73DF58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral842B8C7345E8AE5608EE332378D4489B8AF9C37C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8616432AB4B76B87A73EC2E9EDA0A66F90F81D79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C3DEEC0531EF0C653C66F20E39D7E107A8DFC4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1C3EDDE2152361A22D3D0D87C064EC546264D1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB16D8A617F31CEA5526DAECE9ED6F7764595D82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB8669F97B6902DCA018DD5D9A0B908C92F919FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9759268181E392BB5A3A5F594B01AD942FC7064);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0088BD9BDDD69F53812075FEBE4DE7AD5590ED0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC13B65C06BB3A788859D79A63DC8C530F152B2FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC288B7612977CDB79FF44E3835AA0B4F6C422C31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFB3EFC4BEA99FC338B21324C64F1B4AEBD47192);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD02A4A4D1C4146EC9570C4228E7416949C61E664);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD444B40C468D66B19259CD3EFE1FF0409F040706);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCE4227FFA1EC695E039F9C2BB1F760A67C3D925);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD096B8301B9807B9045A248F66BF18A2F33EC33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8C29C59AD2C5A7B688373F667558973F9681B6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDAAB5C5D4BC79996A40BAC363247725901131D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA46A75AEDB98EC4BA344FC277C99D2CBDE6A9B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBCFE8AE685D68F390182744A8EE501715BF4009);
		s_Il2CppMethodInitialized = true;
	}
	{
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamSrpA_0 = _stringLiteralCFB3EFC4BEA99FC338B21324C64F1B4AEBD47192;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamSrpA_0), (void*)_stringLiteralCFB3EFC4BEA99FC338B21324C64F1B4AEBD47192);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamSrpB_1 = _stringLiteralB9759268181E392BB5A3A5F594B01AD942FC7064;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamSrpB_1), (void*)_stringLiteralB9759268181E392BB5A3A5F594B01AD942FC7064);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamSecretHash_2 = _stringLiteral560B461CD3B3EC699D4EEE2BF321914A093EBDB9;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamSecretHash_2), (void*)_stringLiteral560B461CD3B3EC699D4EEE2BF321914A093EBDB9);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamUsername_3 = _stringLiteralFA46A75AEDB98EC4BA344FC277C99D2CBDE6A9B4;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamUsername_3), (void*)_stringLiteralFA46A75AEDB98EC4BA344FC277C99D2CBDE6A9B4);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamChallengeName_4 = _stringLiteral4CB81BFE27645382DC38DCACB8A2C37AB347D6D2;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamChallengeName_4), (void*)_stringLiteral4CB81BFE27645382DC38DCACB8A2C37AB347D6D2);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamSalt_5 = _stringLiteralA1C3EDDE2152361A22D3D0D87C064EC546264D1C;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamSalt_5), (void*)_stringLiteralA1C3EDDE2152361A22D3D0D87C064EC546264D1C);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamSecretBlock_6 = _stringLiteralDCE4227FFA1EC695E039F9C2BB1F760A67C3D925;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamSecretBlock_6), (void*)_stringLiteralDCE4227FFA1EC695E039F9C2BB1F760A67C3D925);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamUserIDSrp_7 = _stringLiteral736AF32BCDCEA98E53845EF220EE293D0B73DF58;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamUserIDSrp_7), (void*)_stringLiteral736AF32BCDCEA98E53845EF220EE293D0B73DF58);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamRefreshToken_8 = _stringLiteralE8C29C59AD2C5A7B688373F667558973F9681B6B;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamRefreshToken_8), (void*)_stringLiteralE8C29C59AD2C5A7B688373F667558973F9681B6B);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamPassSecretBlock_9 = _stringLiteralC13B65C06BB3A788859D79A63DC8C530F152B2FB;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamPassSecretBlock_9), (void*)_stringLiteralC13B65C06BB3A788859D79A63DC8C530F152B2FB);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamPassSignature_10 = _stringLiteral3581B9DAF560030E2E31AE65668D9C6BEAA6728D;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamPassSignature_10), (void*)_stringLiteral3581B9DAF560030E2E31AE65668D9C6BEAA6728D);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamTimestamp_11 = _stringLiteral1F1268E1AE201354BBC8D00D49BEAC846F12EDF7;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamTimestamp_11), (void*)_stringLiteral1F1268E1AE201354BBC8D00D49BEAC846F12EDF7);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamDeliveryDest_12 = _stringLiteral6B02B1E1487008AA8DA0EBBF4799CBC796FE4D62;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamDeliveryDest_12), (void*)_stringLiteral6B02B1E1487008AA8DA0EBBF4799CBC796FE4D62);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamDeliveryMed_13 = _stringLiteral8616432AB4B76B87A73EC2E9EDA0A66F90F81D79;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamDeliveryMed_13), (void*)_stringLiteral8616432AB4B76B87A73EC2E9EDA0A66F90F81D79);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamSmsMfaCode_14 = _stringLiteral530150E04E6EC41BEE7DA49EB9C12C5E0289840D;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamSmsMfaCode_14), (void*)_stringLiteral530150E04E6EC41BEE7DA49EB9C12C5E0289840D);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamSoftwareTokenMfaCode_15 = _stringLiteralAB8669F97B6902DCA018DD5D9A0B908C92F919FA;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamSoftwareTokenMfaCode_15), (void*)_stringLiteralAB8669F97B6902DCA018DD5D9A0B908C92F919FA);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamDeviceKey_16 = _stringLiteralFBCFE8AE685D68F390182744A8EE501715BF4009;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamDeviceKey_16), (void*)_stringLiteralFBCFE8AE685D68F390182744A8EE501715BF4009);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamUserAttrs_17 = _stringLiteralDD096B8301B9807B9045A248F66BF18A2F33EC33;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamUserAttrs_17), (void*)_stringLiteralDD096B8301B9807B9045A248F66BF18A2F33EC33);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamRequiredAttrs_18 = _stringLiteralEDAAB5C5D4BC79996A40BAC363247725901131D9;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamRequiredAttrs_18), (void*)_stringLiteralEDAAB5C5D4BC79996A40BAC363247725901131D9);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamUserAttrPrefix_19 = _stringLiteralC288B7612977CDB79FF44E3835AA0B4F6C422C31;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamUserAttrPrefix_19), (void*)_stringLiteralC288B7612977CDB79FF44E3835AA0B4F6C422C31);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamNewPassword_20 = _stringLiteral0BE6D6FEA9C0036EEDEFFD38B2D1C4EACC2B9D2F;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamNewPassword_20), (void*)_stringLiteral0BE6D6FEA9C0036EEDEFFD38B2D1C4EACC2B9D2F);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamPassword_21 = _stringLiteralAB16D8A617F31CEA5526DAECE9ED6F7764595D82;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___ChlgParamPassword_21), (void*)_stringLiteralAB16D8A617F31CEA5526DAECE9ED6F7764595D82);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___UserAttrEmail_22 = _stringLiteral51921D99887DD5ED233F87333EF648AE91A8BF7C;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___UserAttrEmail_22), (void*)_stringLiteral51921D99887DD5ED233F87333EF648AE91A8BF7C);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___UserAttrPhoneNumber_23 = _stringLiteralD444B40C468D66B19259CD3EFE1FF0409F040706;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___UserAttrPhoneNumber_23), (void*)_stringLiteralD444B40C468D66B19259CD3EFE1FF0409F040706);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___DeviceAttrName_24 = _stringLiteral44D2155A9A3200DB4F66438C4A7020431E61BB80;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___DeviceAttrName_24), (void*)_stringLiteral44D2155A9A3200DB4F66438C4A7020431E61BB80);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___DeviceAttrRemembered_25 = _stringLiteralC0088BD9BDDD69F53812075FEBE4DE7AD5590ED0;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___DeviceAttrRemembered_25), (void*)_stringLiteralC0088BD9BDDD69F53812075FEBE4DE7AD5590ED0);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___DeviceAttrNotRemembered_26 = _stringLiteralD02A4A4D1C4146EC9570C4228E7416949C61E664;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___DeviceAttrNotRemembered_26), (void*)_stringLiteralD02A4A4D1C4146EC9570C4228E7416949C61E664);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___DeviceChlgParamSalt_27 = _stringLiteral842B8C7345E8AE5608EE332378D4489B8AF9C37C;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___DeviceChlgParamSalt_27), (void*)_stringLiteral842B8C7345E8AE5608EE332378D4489B8AF9C37C);
		((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___DeviceChlgParamVerifier_28 = _stringLiteral9C3DEEC0531EF0C653C66F20E39D7E107A8DFC4D;
		Il2CppCodeGenWriteBarrier((void**)(&((CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_StaticFields*)il2cpp_codegen_static_fields_for(CognitoConstants_tBD0F5BDC4FD5C11FD05465AB98A27DD3ABC94BFE_il2cpp_TypeInfo_var))->___DeviceChlgParamVerifier_28), (void*)_stringLiteral9C3DEEC0531EF0C653C66F20E39D7E107A8DFC4D);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CognitoUserPool_get_PoolID_m99281C53A7CAC1D4CDF0C32090941FD0F6D126E8_inline (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPoolIDU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_PoolName_mCAB483AF91654ABD85D21B3998B66E2CF0249F83_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPoolNameU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPoolNameU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_ClientSecret_mFE1679788E5D472AF992D1CA8AF994864DCF3728_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CClientSecretU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientSecretU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_SecretHash_m14B08D454FF69FED4961163FC6BE9CA6D133C3BE_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CSecretHashU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSecretHashU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_UserID_m6C32991823583CE9E73F559A422DD92DD1B19E99_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CUserIDU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIDU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_Username_m4FBD3492324058AD333B8D7F24647AB3E85E4C77_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CUsernameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUsernameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_Status_m38E853C10A44D0BF3C6EB417B60EBF3EEDD18BAD_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CStatusU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStatusU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_UserPool_m1D8B9B354129A8B45DABCD4702F4D21CC50B1CC9_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* ___0_value, const RuntimeMethod* method) 
{
	{
		CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* L_0 = ___0_value;
		__this->___U3CUserPoolU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserPoolU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_ClientID_mCE2F7C94E3C0D6392BC319355022DF6ED28C29D8_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CClientIDU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientIDU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_SessionTokens_m5EB6A752215B2EBE6710985BFF7550040D0DF175_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* ___0_value, const RuntimeMethod* method) 
{
	{
		CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* L_0 = ___0_value;
		__this->___U3CSessionTokensU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionTokensU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_Attributes_m85E4278DBBB1C7A0DC0B345E21869B46A8DF3C99_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___0_value;
		__this->___U3CAttributesU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAttributesU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUser_set_Provider_mE3EF1C4D02BB67540B01384FC8F4A160B3882D6C_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CProviderU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProviderU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CognitoUser_get_Provider_m92E887F0BC7FF366D8FD95A0EB9AD82060AF4101_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CProviderU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationResultType_get_IdToken_m535BC6A3D81FC50D798B5D4E8BC4DDACB80DDABB_inline (AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____idToken_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationResultType_get_AccessToken_m492D95909C8FA460144DCCBC83835710076ABE3A_inline (AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____accessToken_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationResultType_get_RefreshToken_m52835C605AF2F9499917C892FEE7FA455DD17388_inline (AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____refreshToken_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CognitoUser_get_Username_m0AB105B02E3075B1BD90A3E1054DB493AFF751B2_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CUsernameU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CognitoUser_get_UserID_m951679906C800CBC5CDA0A20DDB526964AD64CE8_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CUserIDU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CognitoUser_get_ClientSecret_m53AFAB5A3C690D81D2280446AD4BDEEBC2F96033_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CClientSecretU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CognitoUser_get_ClientID_m658BA35B3F4E6715415B3F73C7515973B32A4334_inline (CognitoUser_t49332C46C70E366302B492A7F83F1AF32CD12821* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CClientIDU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RespondToAuthChallengeRequest_set_ChallengeName_mB23654BBD289D6D0288F5554A16EB49DA669A5DB_inline (RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC* __this, ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* ___0_value, const RuntimeMethod* method) 
{
	{
		ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* L_0 = ___0_value;
		__this->____challengeName_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____challengeName_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RespondToAuthChallengeRequest_set_ClientId_m8AF8F82607DB97CFAB8CE5E6F3DBAF6FE0F52BD2_inline (RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->____clientId_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____clientId_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RespondToCustomChallengeRequest_get_ChallengeParameters_m977692123830D002949D2B770B19829057DA0580_inline (RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CChallengeParametersU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RespondToAuthChallengeRequest_set_ChallengeResponses_m3D7C354308D18CE7628F0FD5FD13AE8882540AF0_inline (RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___0_value;
		__this->____challengeResponses_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____challengeResponses_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RespondToCustomChallengeRequest_get_ClientMetadata_mCBF0B8DE18D45CC2AAD0213245AEB89C2981376B_inline (RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CClientMetadataU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RespondToAuthChallengeRequest_set_ClientMetadata_m703018EA33A391448C4EA7A771AF6399A5826F1D_inline (RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___0_value;
		__this->____clientMetadata_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____clientMetadata_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RespondToCustomChallengeRequest_get_SessionID_m0A562729A3925659417B697F8355B3D6700FC6D3_inline (RespondToCustomChallengeRequest_tBEDFF31550EB4F9677A1F6F7D033F1CCC51BAFC7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSessionIDU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RespondToAuthChallengeRequest_set_Session_m4901A40AA5B9A70F2F30F82BDBA24E3B89CFE17D_inline (RespondToAuthChallengeRequest_t3888BF300B656D83A0D3C6BE97A87AF337CDD0CC* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->____session_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____session_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* RespondToAuthChallengeResponse_get_ChallengeName_mF24A98289977D029353261C32812D37795699258_inline (RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C* __this, const RuntimeMethod* method) 
{
	{
		ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* L_0 = __this->____challengeName_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* RespondToAuthChallengeResponse_get_AuthenticationResult_m8A8D40A281D87AC5DBFC2F0EA96F5CAD79F4207A_inline (RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C* __this, const RuntimeMethod* method) 
{
	{
		AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* L_0 = __this->____authenticationResult_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RespondToAuthChallengeResponse_get_Session_m376193C0DA6D7BA93AD48EE4324E37123506AC09_inline (RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____session_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* RespondToAuthChallengeResponse_get_ChallengeParameters_mF34752BF95181873017F0AA61F30A1A309632F70_inline (RespondToAuthChallengeResponse_t22F18F04FCF22EC77366C5E9DD5EABDE41347D9C* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____challengeParameters_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResponseMetadata_tBF985AAFD923FA79A2759015BD7BE04ED320AE03* AmazonWebServiceResponse_get_ResponseMetadata_m48152D51DE0B428227272EBD7BF93B1C253F8EA1_inline (AmazonWebServiceResponse_t3F4B1B1621D883697F81F5FA301FE80F61FF968D* __this, const RuntimeMethod* method) 
{
	{
		ResponseMetadata_tBF985AAFD923FA79A2759015BD7BE04ED320AE03* L_0 = __this->___responseMetadataField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InitiateAuthRequest_set_AuthFlow_m333BCB06AD95FD6E9AD777242F44439047CA067C_inline (InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB* __this, AuthFlowType_tBE61AA75513223AD20B59024E7E078043589092C* ___0_value, const RuntimeMethod* method) 
{
	{
		AuthFlowType_tBE61AA75513223AD20B59024E7E078043589092C* L_0 = ___0_value;
		__this->____authFlow_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____authFlow_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InitiateCustomAuthRequest_get_AuthParameters_m129A9FCEDA144DDA475FE59478D750B4FE51C7DC_inline (InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAuthParametersU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InitiateAuthRequest_set_AuthParameters_m0EF43D28A25B2EF37B119AF6D6DDB86BD9210C47_inline (InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___0_value;
		__this->____authParameters_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____authParameters_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InitiateAuthRequest_set_ClientId_m812E96C0B6636DE9E202DF5A96CB78F909104D50_inline (InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->____clientId_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____clientId_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InitiateCustomAuthRequest_get_ClientMetadata_m05E158CC040A58F46E1C64623732ED94BD0D2AB6_inline (InitiateCustomAuthRequest_tB0F363E52BEA1476CA2ACCD538CE462EF2D24219* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CClientMetadataU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InitiateAuthRequest_set_ClientMetadata_m399A9AD63826132577D7034589C8A7A876015928_inline (InitiateAuthRequest_t625BB2D5F454FA7C2E29BCA763CF621C6A27D2FB* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___0_value;
		__this->____clientMetadata_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____clientMetadata_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* InitiateAuthResponse_get_ChallengeParameters_m42A92885A554898A1E2E9729026C69F1D927F1C7_inline (InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____challengeParameters_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* InitiateAuthResponse_get_ChallengeName_mED12592384E09492D6E81B709B026D4A497AA0CB_inline (InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* __this, const RuntimeMethod* method) 
{
	{
		ChallengeNameType_tF00B48AE53140D03A4540A3CCAB9B94C44DA41CE* L_0 = __this->____challengeName_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* InitiateAuthResponse_get_AuthenticationResult_mE10CF96861D444017FEDA15A11931FEC35244B52_inline (InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* __this, const RuntimeMethod* method) 
{
	{
		AuthenticationResultType_tC22AEAB7AA8DE29462784119B6086D668C4D376A* L_0 = __this->____authenticationResult_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InitiateAuthResponse_get_Session_m5ECBBF616211034F7807C34DBC728FE8DFBE38F0_inline (InitiateAuthResponse_tC229773AAFD6AE13B095F5C122505B4C27CFE9E3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____session_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUserPool_set_PoolID_m872334DB96658739F44F45FA27DDB07C8573CA21_inline (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPoolIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPoolIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUserPool_set_ClientID_mC11BD963F601E3F75606DB64EDEC2343AB37779C_inline (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CClientIDU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientIDU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUserPool_set_ClientSecret_m1F07032E4806B640C348F79DCAB11CF7C314C544_inline (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CClientSecretU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientSecretU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUserPool_set_Provider_m1DE05BF8CA2CB1797A83E829FBD67745AB1E8A5A_inline (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CProviderU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProviderU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CognitoUserPool_get_Provider_m376993456FD42DCEE91FEB3FE75168934BC3FEAC_inline (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CProviderU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignUpRequest_set_Username_m8DB936184365AC96E767F168BAD6FBE814FB40A3_inline (SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->____username_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____username_11), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignUpRequest_set_Password_mD565933319C5CFC0BACC971D95207102063E7F3C_inline (SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->____password_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____password_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CognitoUserPool_get_ClientID_m0927CCCC84DA6816E9503A58EAD8D0BD085A984D_inline (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CClientIDU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignUpRequest_set_ClientId_m18FCBE6E7436FFFBFF1F7D7B63C55AE2DF8E6DBF_inline (SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->____clientId_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____clientId_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignUpRequest_set_UserAttributes_mFD3805E87777B937DDAF4C2B5E412D09E238D23C_inline (SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* __this, List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* ___0_value, const RuntimeMethod* method) 
{
	{
		List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* L_0 = ___0_value;
		__this->____userAttributes_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____userAttributes_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignUpRequest_set_ValidationData_mFD302AD13B25B8BFE2D39C2E8EE06A049F92218A_inline (SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* __this, List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* ___0_value, const RuntimeMethod* method) 
{
	{
		List_1_t06AAFB117D6A50424C0E0D8D60A975C9C78FEF1D* L_0 = ___0_value;
		__this->____validationData_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____validationData_12), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CognitoUserPool_get_ClientSecret_mFA5C789B8A063D0949C445E9AD99AB98B2242B91_inline (CognitoUserPool_tCCAAD3E7A1CF23F7B115EF8FFA9D58BAC4AB5DB4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CClientSecretU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SignUpRequest_set_SecretHash_m1F91F0AC35DF10DA4BBBC30512C7A445ECC2452F_inline (SignUpRequest_t0B4A803C156ABD567F915E1BC8E6A5FF2F47DABA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->____secretHash_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____secretHash_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUserSession_set_IdToken_m173D74B12BD768C165586DDAE0CC531E864516D2_inline (CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CIdTokenU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdTokenU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUserSession_set_AccessToken_mA0DFBDAC012FB94716AE4FB6BED6AD46318FA760_inline (CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CAccessTokenU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAccessTokenU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUserSession_set_RefreshToken_m27AE16CED6E6FF1B4D0C62064A0CC82A394F6DB9_inline (CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CRefreshTokenU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRefreshTokenU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUserSession_set_IssuedTime_m668E36A3A21703E73D2BFF33719B24A185B0574C_inline (CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		__this->___U3CIssuedTimeU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CognitoUserSession_set_ExpirationTime_mD22E03ED858E76D5F45EB72B92DF2AF6F60ED8B7_inline (CognitoUserSession_t7AE64A0739EB1FB28E5F7DC874D8AA663911381A* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_value;
		__this->___U3CExpirationTimeU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AssemblyFileVersionAttribute_get_Version_m1B58C7F8413CE06BBAFBE74A1748B1E100CF73AE_inline (AssemblyFileVersionAttribute_tEBD946AEBE271D135B9161CE0B423ED10AA933F4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CVersionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AttributeType_set_Name_mF2242DFF72D147F733AEB9DC4988CF6DDAD9F750_inline (AttributeType_t7FAD47DA16A417B5ED70A8E27D83BD7BA13BEA78* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->____name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____name_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AttributeType_set_Value_m106C68540013CACA00EEE1EEC6115F1076B758F3_inline (AttributeType_t7FAD47DA16A417B5ED70A8E27D83BD7BA13BEA78* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->____value_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WebServiceRequestEventArgs_get_Headers_m890706E0235181D917D4414C276E338E033B4328_inline (WebServiceRequestEventArgs_t120A45C1B3AC645E0B85163E58E49469D1BEC36C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CHeadersU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline (ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 L_0 = __this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
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
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
