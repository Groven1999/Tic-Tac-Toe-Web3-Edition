#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>
struct HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0;
// Nethereum.Hex.HexConvertors.IHexConvertor`1<System.Numerics.BigInteger>
struct IHexConvertor_1_t065D8C7F14D94EDF4E83EE3837AA95C741793015;
// System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.AccessList>
struct List_1_t4E11F5D2075471CC5269E680568592D8D061C750;
// System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>
struct List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskFactory`1<Nethereum.Hex.HexTypes.HexBigInteger>
struct TaskFactory_1_tDE964D439D228F3E34FE38E3D5285AAECE0DDC91;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.Task`1<Nethereum.Hex.HexTypes.HexBigInteger>
struct Task_1_t090886E71122196EFD9A94467E467FC25376F7AE;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// Nethereum.Signer.TypeTransactionSigner`1<System.Object>
struct TypeTransactionSigner_1_t9B039BB6333833A97C43EF2D3EF751092ACA05ED;
// Nethereum.Signer.TypeTransactionSigner`1<Nethereum.Model.Transaction1559>
struct TypeTransactionSigner_1_t1265552D6E6BBF665F746B7DA9B8A87F92750566;
// Nethereum.RPC.Eth.DTOs.AccessList[]
struct AccessListU5BU5D_t923FFC19CDD93DD1C54788C39B7D7EA3B9716498;
// Nethereum.Model.AccessListItem[]
struct AccessListItemU5BU5D_tDBA701B5947DD90F356DD62308C207F6385F3C32;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// Nethereum.Web3.Accounts.Account
struct Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D;
// Nethereum.Web3.Accounts.AccountOfflineTransactionSigner
struct AccountOfflineTransactionSigner_t27B036ED22C52CD7649744E61CD66C415EF8AF6E;
// Nethereum.Web3.Accounts.AccountSignerTransactionManager
struct AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5;
// Nethereum.Accounts.AccountMessageSigning.AccountSigningOfflineService
struct AccountSigningOfflineService_t5B00F48844C8AE22356DB38ED57559F480076273;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// Nethereum.RPC.Eth.DTOs.CallInput
struct CallInput_t134727ED6D63AA0F8722CB06FEC85207CC5D3F9C;
// Nethereum.RPC.Chain.ChainFeature
struct ChainFeature_tF632425CF79CB4E1EF7C89498A82926FE706B455;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// Nethereum.Signer.Crypto.ECKey
struct ECKey_t15179DA21C4FF3FC07AB170ED70B8D9BD23729BB;
// Nethereum.Signer.EIP712.Eip712TypedDataSigner
struct Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8;
// Nethereum.Signer.EthECKey
struct EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A;
// Nethereum.Accounts.AccountMessageSigning.EthPersonalOfflineSign
struct EthPersonalOfflineSign_t0F267D31B822CE82D4D762222602B89EE7CE7198;
// Nethereum.RPC.Eth.Transactions.EthSendRawTransaction
struct EthSendRawTransaction_tC85D4CAD6B297971F6DEF6456CD7440F06A8BA83;
// Nethereum.Accounts.AccountMessageSigning.EthSignTypedDataV4Offline
struct EthSignTypedDataV4Offline_t201B90D1C99C130DFAEF950CE8A6FD4589AB5AC9;
// Nethereum.Signer.EthereumMessageSigner
struct EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745;
// System.Exception
struct Exception_t;
// Nethereum.Hex.HexTypes.HexBigInteger
struct HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811;
// Nethereum.RPC.Accounts.IAccount
struct IAccount_t2D498E1E6AF11CFDB79F07A7D78532E396F852D0;
// Nethereum.RPC.AccountSigning.IAccountSigningService
struct IAccountSigningService_t6AE095CD4297AB3ED57A1F6B4ABEC8A9C5B684DC;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Nethereum.JsonRpc.Client.IClient
struct IClient_t3F4473F20A6C2C4B7F392E89E960C7F7D2792ABA;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Nethereum.RPC.AccountSigning.IEthPersonalSign
struct IEthPersonalSign_tD40E7EA8DCC0AA1F47BEFC904E21A6ABA0744966;
// Nethereum.RPC.AccountSigning.IEthSignTypedDataV4
struct IEthSignTypedDataV4_t54533AF134CAA4D038FF18B78AF7FD2D33BF18FB;
// Nethereum.RPC.Fee1559Suggestions.IFee1559SuggestionStrategy
struct IFee1559SuggestionStrategy_t0B057881CDCFEB32F3A6783E6064C25B2DA730E1;
// Nethereum.RPC.NonceServices.INonceService
struct INonceService_tB8D5E1FA020A2292091853A4C76384B94AFC7F6D;
// Nethereum.Model.ISignature
struct ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A;
// Nethereum.RPC.TransactionManagers.ITransactionManager
struct ITransactionManager_t93C7C810748D626CB18E930ADCB2A2571F8426A1;
// Nethereum.RPC.TransactionReceipts.ITransactionReceiptService
struct ITransactionReceiptService_tFAFCA1B8790B067709343072CB3203D009EF61F5;
// Nethereum.RPC.NonceServices.InMemoryNonceService
struct InMemoryNonceService_t488B8489597A7B61513513D0D73434DA4C2692F6;
// Nethereum.Signer.LegacyTransactionSigner
struct LegacyTransactionSigner_t79F388EF4219EA442310B574B7BD4A666C6D0950;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// Nethereum.Model.RLPSignedDataHashBuilder
struct RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4;
// Nethereum.JsonRpc.Client.RpcRequestBuilder
struct RpcRequestBuilder_t1EEB2A8EF2FDCBE66226A789E0B2F0B91D997CEF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
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
// Nethereum.Model.Transaction1559
struct Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17;
// Nethereum.Signer.Transaction1559Signer
struct Transaction1559Signer_t3E012A0B96B3F9B430A630587E63BA0C39A48B53;
// Nethereum.RPC.Eth.DTOs.TransactionInput
struct TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2;
// Nethereum.RPC.TransactionManagers.TransactionManagerBase
struct TransactionManagerBase_t348BC050DA9D2D79FB1DB6FE3031B8E94B8C7ABC;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AccountOfflineTransactionSigner_t27B036ED22C52CD7649744E61CD66C415EF8AF6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AccountSigningOfflineService_t5B00F48844C8AE22356DB38ED57559F480076273_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EthPersonalOfflineSign_t0F267D31B822CE82D4D762222602B89EE7CE7198_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EthSendRawTransaction_tC85D4CAD6B297971F6DEF6456CD7440F06A8BA83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EthSignTypedDataV4Offline_t201B90D1C99C130DFAEF950CE8A6FD4589AB5AC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAccount_t2D498E1E6AF11CFDB79F07A7D78532E396F852D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INonceService_tB8D5E1FA020A2292091853A4C76384B94AFC7F6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITransactionManager_t93C7C810748D626CB18E930ADCB2A2571F8426A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InMemoryNonceService_t488B8489597A7B61513513D0D73434DA4C2692F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LegacyTransactionSigner_t79F388EF4219EA442310B574B7BD4A666C6D0950_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transaction1559Signer_t3E012A0B96B3F9B430A630587E63BA0C39A48B53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B3300A4B1A0AB228765EF483986A3BC9AF3D4E4;
IL2CPP_EXTERN_C String_t* _stringLiteral27E3B43A48A6965D728D3AF11F4F01BE2BDE92C2;
IL2CPP_EXTERN_C String_t* _stringLiteral6AFF7E3020187A288091C0A65BD9980824997BF4;
IL2CPP_EXTERN_C String_t* _stringLiteral700F43A4ACFA6B86019FC4C177DFFC4EFF2D87AA;
IL2CPP_EXTERN_C String_t* _stringLiteral7E4E5160611A8B06B451FECA4446AF46296AF761;
IL2CPP_EXTERN_C String_t* _stringLiteral840D94CDC6A5AD28D5CB4F7047FAB75458D55B82;
IL2CPP_EXTERN_C String_t* _stringLiteral91FED74CEF757F8D31B0BF529905C1E65F8D981C;
IL2CPP_EXTERN_C String_t* _stringLiteralA96CA46B70C016F40F353768035703DBC688F153;
IL2CPP_EXTERN_C const RuntimeMethod* AccountOfflineTransactionSigner_SignTransaction_m57613942CB3553A61494F911182BE39C23D44DB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AccountSignerTransactionManager_SignTransaction_mA9757FD32C153C6200D3EFC8907D0F5A2A6DA3C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AccountSignerTransactionManager__ctor_mB493E92EF6ECAC12838043088EF0CB24D35DB9D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_mE24AAA4440D80FDCEB1199CD5D38C4FC817D63CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B_mC23987D9AA5CDA93CD69E5128D99D00F068B9B15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_mDC77E3C08C42618F9C4094DED4E56AED39E446EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195_TisU3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462_m96F2AF80C7A8572186D18D460581A68BF3488CA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m948377EA496F01B068E1DDF5F62DDF2983B49A88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_mD8408ADFF5DF9937F0596EC3FFBD3BBDEFEBF79B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_m4756F1CFA850ABDDEB7CB1D0BF3800481DF32FEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m1DA80056E554ED675CA93BF37424210F8179D498_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m310E3082F896A2EA219B90D85FD5DEB882BEF0A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mD776015CBCD1AEBA1B0265663096BFCCEB1D0505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m0DA781182F7BDD715BB40C4EB5468D33105B9390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mF4666048C1F1ED8CD3297DCB6F730CC548B7691D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462_mDEF6F203051BDD97886ED15AF075A721EB26E405_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_m912144C2465BBE9A217097BD9DD9379DEB5DF381_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B_mB6F5AC2A77CC19739679462165A4E5DBC8C27FCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_mD283710835D331ECE1B7FDE8879DB67FCDE29A77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m4D9C081FB8940E6A6FA61D3CB0277C9BDB85BB52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m78C3431C4BFC0F5D4FF57955FC9B827B8442BBA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m25128B609BEAC7C193798013688B89F33267E731_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m8711E39129F29F95D6AEC02DF7D90CB31E10FF00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m4368644F058B59DD4E18EB8352DD2BF895C2E86C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1_op_Equality_mC3A87099DAFB6C109637B611558A892934121788_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1_op_Implicit_m1D51D1B0E1293F9D9BB9AB6AA705F2582826C75C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HexRPCType_1_op_Inequality_mABC696C29299C847083DB8364B468AEB2428264F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m5D4AFF8301193978BFBA2F1470C7BCF86A8BCCAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m342E8ED9121C0E690F5A24C7B1CAF4A2B06A389A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeTransactionSigner_1_SignTransaction_m66EF2A1557991A8C3328D8123501872E497F1405_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetNonceAsyncU3Ed__12_MoveNext_mC7141CD258AA084F34534C0262923162B97F741F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendTransactionAsyncU3Ed__8_MoveNext_mBDE405890CA8396D1A499E8F9FDA0543DD0D5626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSignAndSendTransactionAsyncU3Ed__13_MoveNext_m6A7FD777B6C8AF57B9EB94CC1E01E4916B87DD1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_MoveNext_mEBF4AA6183735D902E8EF344A1CAC537C3545B66_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7EB131C5B44FC99EB662F98AE5C6EB1B6981DFF9 
{
};

// System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.AccessList>
struct List_1_t4E11F5D2075471CC5269E680568592D8D061C750  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AccessListU5BU5D_t923FFC19CDD93DD1C54788C39B7D7EA3B9716498* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>
struct List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AccessListItemU5BU5D_tDBA701B5947DD90F356DD62308C207F6385F3C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Nethereum.JsonRpc.Client.RpcRequestResponseHandler`1<System.String>
struct RpcRequestResponseHandler_1_tD25422CAD182EA9DED80FC56D41784FD88F5B68C  : public RuntimeObject
{
	// Nethereum.JsonRpc.Client.RpcRequestBuilder Nethereum.JsonRpc.Client.RpcRequestResponseHandler`1::<RpcRequestBuilder>k__BackingField
	RpcRequestBuilder_t1EEB2A8EF2FDCBE66226A789E0B2F0B91D997CEF* ___U3CRpcRequestBuilderU3Ek__BackingField_0;
	// Nethereum.JsonRpc.Client.IClient Nethereum.JsonRpc.Client.RpcRequestResponseHandler`1::<Client>k__BackingField
	RuntimeObject* ___U3CClientU3Ek__BackingField_1;
};

// Nethereum.Signer.TypeTransactionSigner`1<Nethereum.Model.Transaction1559>
struct TypeTransactionSigner_1_t1265552D6E6BBF665F746B7DA9B8A87F92750566  : public RuntimeObject
{
};

// Nethereum.Web3.Accounts.AccountOfflineTransactionSigner
struct AccountOfflineTransactionSigner_t27B036ED22C52CD7649744E61CD66C415EF8AF6E  : public RuntimeObject
{
	// Nethereum.Signer.LegacyTransactionSigner Nethereum.Web3.Accounts.AccountOfflineTransactionSigner::_legacyTransactionSigner
	LegacyTransactionSigner_t79F388EF4219EA442310B574B7BD4A666C6D0950* ____legacyTransactionSigner_0;
	// Nethereum.Signer.Transaction1559Signer Nethereum.Web3.Accounts.AccountOfflineTransactionSigner::_transaction1559Signer
	Transaction1559Signer_t3E012A0B96B3F9B430A630587E63BA0C39A48B53* ____transaction1559Signer_1;
};

// Nethereum.Accounts.AccountMessageSigning.AccountSigningOfflineService
struct AccountSigningOfflineService_t5B00F48844C8AE22356DB38ED57559F480076273  : public RuntimeObject
{
	// Nethereum.RPC.AccountSigning.IEthSignTypedDataV4 Nethereum.Accounts.AccountMessageSigning.AccountSigningOfflineService::<SignTypedDataV4>k__BackingField
	RuntimeObject* ___U3CSignTypedDataV4U3Ek__BackingField_0;
	// Nethereum.RPC.AccountSigning.IEthPersonalSign Nethereum.Accounts.AccountMessageSigning.AccountSigningOfflineService::<PersonalSign>k__BackingField
	RuntimeObject* ___U3CPersonalSignU3Ek__BackingField_1;
};

// Nethereum.RPC.Eth.DTOs.CallInput
struct CallInput_t134727ED6D63AA0F8722CB06FEC85207CC5D3F9C  : public RuntimeObject
{
	// System.String Nethereum.RPC.Eth.DTOs.CallInput::_from
	String_t* ____from_0;
	// System.String Nethereum.RPC.Eth.DTOs.CallInput::_to
	String_t* ____to_1;
	// System.String Nethereum.RPC.Eth.DTOs.CallInput::_data
	String_t* ____data_2;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::<Gas>k__BackingField
	HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* ___U3CGasU3Ek__BackingField_3;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::<GasPrice>k__BackingField
	HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* ___U3CGasPriceU3Ek__BackingField_4;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::<Value>k__BackingField
	HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* ___U3CValueU3Ek__BackingField_5;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::<MaxFeePerGas>k__BackingField
	HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* ___U3CMaxFeePerGasU3Ek__BackingField_6;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::<MaxPriorityFeePerGas>k__BackingField
	HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* ___U3CMaxPriorityFeePerGasU3Ek__BackingField_7;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::<Type>k__BackingField
	HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* ___U3CTypeU3Ek__BackingField_8;
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::<ChainId>k__BackingField
	HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* ___U3CChainIdU3Ek__BackingField_9;
};

// Nethereum.Signer.EIP712.Eip712TypedDataSigner
struct Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8  : public RuntimeObject
{
	// Nethereum.Signer.EthereumMessageSigner Nethereum.Signer.EIP712.Eip712TypedDataSigner::_signer
	EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745* ____signer_0;
};

// Nethereum.Signer.EthECKey
struct EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A  : public RuntimeObject
{
	// Nethereum.Signer.Crypto.ECKey Nethereum.Signer.EthECKey::_ecKey
	ECKey_t15179DA21C4FF3FC07AB170ED70B8D9BD23729BB* ____ecKey_2;
	// System.Byte[] Nethereum.Signer.EthECKey::_publicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____publicKey_3;
	// System.Byte[] Nethereum.Signer.EthECKey::_publicKeyCompressed
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____publicKeyCompressed_4;
	// System.Byte[] Nethereum.Signer.EthECKey::_publicKeyNoPrefix
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____publicKeyNoPrefix_5;
	// System.Byte[] Nethereum.Signer.EthECKey::_publicKeyNoPrefixCompressed
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____publicKeyNoPrefixCompressed_6;
	// System.String Nethereum.Signer.EthECKey::_ethereumAddress
	String_t* ____ethereumAddress_7;
	// System.Byte[] Nethereum.Signer.EthECKey::_privateKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____privateKey_8;
	// System.String Nethereum.Signer.EthECKey::_privateKeyHex
	String_t* ____privateKeyHex_9;
};

// Nethereum.Accounts.AccountMessageSigning.EthPersonalOfflineSign
struct EthPersonalOfflineSign_t0F267D31B822CE82D4D762222602B89EE7CE7198  : public RuntimeObject
{
	// Nethereum.Signer.EthECKey Nethereum.Accounts.AccountMessageSigning.EthPersonalOfflineSign::_ethECKey
	EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* ____ethECKey_0;
	// Nethereum.Signer.EthereumMessageSigner Nethereum.Accounts.AccountMessageSigning.EthPersonalOfflineSign::_ethereumMessageSigner
	EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745* ____ethereumMessageSigner_1;
};

// Nethereum.Accounts.AccountMessageSigning.EthSignTypedDataV4Offline
struct EthSignTypedDataV4Offline_t201B90D1C99C130DFAEF950CE8A6FD4589AB5AC9  : public RuntimeObject
{
	// Nethereum.Signer.EthECKey Nethereum.Accounts.AccountMessageSigning.EthSignTypedDataV4Offline::_ethECKey
	EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* ____ethECKey_0;
	// Nethereum.Signer.EIP712.Eip712TypedDataSigner Nethereum.Accounts.AccountMessageSigning.EthSignTypedDataV4Offline::_typedDataSigner
	Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8* ____typedDataSigner_1;
};

// Nethereum.Signer.LegacyTransactionSigner
struct LegacyTransactionSigner_t79F388EF4219EA442310B574B7BD4A666C6D0950  : public RuntimeObject
{
};

// Nethereum.Signer.MessageSigner
struct MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A  : public RuntimeObject
{
};

// Nethereum.Model.SignedTransaction
struct SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818  : public RuntimeObject
{
	// Nethereum.Model.ISignature Nethereum.Model.SignedTransaction::<Signature>k__BackingField
	RuntimeObject* ___U3CSignatureU3Ek__BackingField_0;
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

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.Hex.HexTypes.HexBigInteger>
struct ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t090886E71122196EFD9A94467E467FC25376F7AE* ___m_task_0;
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

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>
struct ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};

// System.Threading.Tasks.Task`1<Nethereum.Hex.HexTypes.HexBigInteger>
struct Task_1_t090886E71122196EFD9A94467E467FC25376F7AE  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_38;
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

// System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F 
{
	// System.Int32 System.Numerics.BigInteger::_sign
	int32_t ____sign_6;
	// System.UInt32[] System.Numerics.BigInteger::_bits
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____bits_7;
};
// Native definition for P/Invoke marshalling of System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_pinvoke
{
	int32_t ____sign_6;
	Il2CppSafeArray/*NONE*/* ____bits_7;
};
// Native definition for COM marshalling of System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_marshaled_com
{
	int32_t ____sign_6;
	Il2CppSafeArray/*NONE*/* ____bits_7;
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

// Nethereum.RPC.Eth.Transactions.EthSendRawTransaction
struct EthSendRawTransaction_tC85D4CAD6B297971F6DEF6456CD7440F06A8BA83  : public RpcRequestResponseHandler_1_tD25422CAD182EA9DED80FC56D41784FD88F5B68C
{
};

// Nethereum.Signer.EthereumMessageSigner
struct EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745  : public MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A
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

// Nethereum.Model.SignedLegacyTransactionBase
struct SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F  : public SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818
{
	// Nethereum.Model.RLPSignedDataHashBuilder Nethereum.Model.SignedLegacyTransactionBase::<RlpSignerEncoder>k__BackingField
	RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* ___U3CRlpSignerEncoderU3Ek__BackingField_1;
};

// Nethereum.Model.SignedTypeTransaction
struct SignedTypeTransaction_tE290AC7A95BAC7772CCC1FCDE1DEE730E316D70B  : public SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818
{
};

// Nethereum.Signer.Transaction1559Signer
struct Transaction1559Signer_t3E012A0B96B3F9B430A630587E63BA0C39A48B53  : public TypeTransactionSigner_1_t1265552D6E6BBF665F746B7DA9B8A87F92750566
{
};

// Nethereum.RPC.Eth.DTOs.TransactionInput
struct TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2  : public CallInput_t134727ED6D63AA0F8722CB06FEC85207CC5D3F9C
{
	// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.TransactionInput::<Nonce>k__BackingField
	HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* ___U3CNonceU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.AccessList> Nethereum.RPC.Eth.DTOs.TransactionInput::<AccessList>k__BackingField
	List_1_t4E11F5D2075471CC5269E680568592D8D061C750* ___U3CAccessListU3Ek__BackingField_11;
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

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.Hex.HexTypes.HexBigInteger>
struct AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t090886E71122196EFD9A94467E467FC25376F7AE* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>
struct AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_2;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Nethereum.Hex.HexTypes.HexBigInteger>
struct ConfiguredTaskAwaitable_1_t54BF6E9D9C600508578354F7A21369CA90DF263F 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195 ___m_configuredTaskAwaiter_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 ___m_configuredTaskAwaiter_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.String>
struct ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 ___m_configuredTaskAwaiter_0;
};

// Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>
struct HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0  : public RuntimeObject
{
	// Nethereum.Hex.HexConvertors.IHexConvertor`1<T> Nethereum.Hex.HexTypes.HexRPCType`1::convertor
	RuntimeObject* ___convertor_0;
	// System.String Nethereum.Hex.HexTypes.HexRPCType`1::hexValue
	String_t* ___hexValue_1;
	// T Nethereum.Hex.HexTypes.HexRPCType`1::value
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value_2;
	// System.Object Nethereum.Hex.HexTypes.HexRPCType`1::lockingObject
	RuntimeObject* ___lockingObject_3;
	// System.Boolean Nethereum.Hex.HexTypes.HexRPCType`1::needsInitialisingValue
	bool ___needsInitialisingValue_4;
};

// System.Nullable`1<System.Numerics.BigInteger>
struct Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___value_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___m_configuredTaskAwaiter_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_com
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com ___m_configuredTaskAwaiter_0;
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

// Nethereum.RPC.NonceServices.InMemoryNonceService
struct InMemoryNonceService_t488B8489597A7B61513513D0D73434DA4C2692F6  : public RuntimeObject
{
	// System.Numerics.BigInteger Nethereum.RPC.NonceServices.InMemoryNonceService::<CurrentNonce>k__BackingField
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___U3CCurrentNonceU3Ek__BackingField_0;
	// Nethereum.JsonRpc.Client.IClient Nethereum.RPC.NonceServices.InMemoryNonceService::<Client>k__BackingField
	RuntimeObject* ___U3CClientU3Ek__BackingField_1;
	// System.String Nethereum.RPC.NonceServices.InMemoryNonceService::_account
	String_t* ____account_2;
	// System.Threading.SemaphoreSlim Nethereum.RPC.NonceServices.InMemoryNonceService::_semaphoreSlim
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____semaphoreSlim_3;
};

// Nethereum.Model.SignedLegacyTransaction
struct SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A  : public SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F
{
};

// Nethereum.Model.TransactionType
struct TransactionType_tE37EFD1623B44F5340629124DD2B25B2D67A9F8D 
{
	// System.Int32 Nethereum.Model.TransactionType::value__
	int32_t ___value___2;
};

// Nethereum.Web3.Accounts.Account
struct Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D  : public RuntimeObject
{
	// Nethereum.RPC.NonceServices.INonceService Nethereum.Web3.Accounts.Account::_nonceService
	RuntimeObject* ____nonceService_0;
	// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Web3.Accounts.Account::<ChainId>k__BackingField
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___U3CChainIdU3Ek__BackingField_1;
	// System.String Nethereum.Web3.Accounts.Account::<PrivateKey>k__BackingField
	String_t* ___U3CPrivateKeyU3Ek__BackingField_2;
	// System.String Nethereum.Web3.Accounts.Account::<PublicKey>k__BackingField
	String_t* ___U3CPublicKeyU3Ek__BackingField_3;
	// System.String Nethereum.Web3.Accounts.Account::<Address>k__BackingField
	String_t* ___U3CAddressU3Ek__BackingField_4;
	// Nethereum.RPC.TransactionManagers.ITransactionManager Nethereum.Web3.Accounts.Account::<TransactionManager>k__BackingField
	RuntimeObject* ___U3CTransactionManagerU3Ek__BackingField_5;
	// Nethereum.RPC.AccountSigning.IAccountSigningService Nethereum.Web3.Accounts.Account::<AccountSigningService>k__BackingField
	RuntimeObject* ___U3CAccountSigningServiceU3Ek__BackingField_6;
};

// Nethereum.Hex.HexTypes.HexBigInteger
struct HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811  : public HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Nethereum.Model.Transaction1559
struct Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17  : public SignedTypeTransaction_tE290AC7A95BAC7772CCC1FCDE1DEE730E316D70B
{
	// System.Numerics.BigInteger Nethereum.Model.Transaction1559::<ChainId>k__BackingField
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___U3CChainIdU3Ek__BackingField_1;
	// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.Transaction1559::<Nonce>k__BackingField
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___U3CNonceU3Ek__BackingField_2;
	// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.Transaction1559::<MaxPriorityFeePerGas>k__BackingField
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___U3CMaxPriorityFeePerGasU3Ek__BackingField_3;
	// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.Transaction1559::<MaxFeePerGas>k__BackingField
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___U3CMaxFeePerGasU3Ek__BackingField_4;
	// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.Transaction1559::<GasLimit>k__BackingField
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___U3CGasLimitU3Ek__BackingField_5;
	// System.String Nethereum.Model.Transaction1559::<ReceiverAddress>k__BackingField
	String_t* ___U3CReceiverAddressU3Ek__BackingField_6;
	// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Model.Transaction1559::<Amount>k__BackingField
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___U3CAmountU3Ek__BackingField_7;
	// System.String Nethereum.Model.Transaction1559::<Data>k__BackingField
	String_t* ___U3CDataU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<Nethereum.Model.AccessListItem> Nethereum.Model.Transaction1559::<AccessList>k__BackingField
	List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___U3CAccessListU3Ek__BackingField_9;
};

// Nethereum.RPC.TransactionManagers.TransactionManagerBase
struct TransactionManagerBase_t348BC050DA9D2D79FB1DB6FE3031B8E94B8C7ABC  : public RuntimeObject
{
	// Nethereum.JsonRpc.Client.IClient Nethereum.RPC.TransactionManagers.TransactionManagerBase::<Client>k__BackingField
	RuntimeObject* ___U3CClientU3Ek__BackingField_0;
	// System.Numerics.BigInteger Nethereum.RPC.TransactionManagers.TransactionManagerBase::<DefaultGasPrice>k__BackingField
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___U3CDefaultGasPriceU3Ek__BackingField_1;
	// Nethereum.RPC.Accounts.IAccount Nethereum.RPC.TransactionManagers.TransactionManagerBase::<Account>k__BackingField
	RuntimeObject* ___U3CAccountU3Ek__BackingField_2;
	// System.Boolean Nethereum.RPC.TransactionManagers.TransactionManagerBase::<UseLegacyAsDefault>k__BackingField
	bool ___U3CUseLegacyAsDefaultU3Ek__BackingField_3;
	// System.Boolean Nethereum.RPC.TransactionManagers.TransactionManagerBase::<CalculateOrSetDefaultGasPriceFeesIfNotSet>k__BackingField
	bool ___U3CCalculateOrSetDefaultGasPriceFeesIfNotSetU3Ek__BackingField_4;
	// System.Boolean Nethereum.RPC.TransactionManagers.TransactionManagerBase::<EstimateOrSetDefaultGasIfNotSet>k__BackingField
	bool ___U3CEstimateOrSetDefaultGasIfNotSetU3Ek__BackingField_5;
	// Nethereum.RPC.Chain.ChainFeature Nethereum.RPC.TransactionManagers.TransactionManagerBase::<ChainFeature>k__BackingField
	ChainFeature_tF632425CF79CB4E1EF7C89498A82926FE706B455* ___U3CChainFeatureU3Ek__BackingField_6;
	// System.Nullable`1<System.Numerics.BigInteger> Nethereum.RPC.TransactionManagers.TransactionManagerBase::<ChainId>k__BackingField
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___U3CChainIdU3Ek__BackingField_7;
	// System.Nullable`1<System.Numerics.BigInteger> Nethereum.RPC.TransactionManagers.TransactionManagerBase::<DefaultMaxPriorityFeePerGas>k__BackingField
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___U3CDefaultMaxPriorityFeePerGasU3Ek__BackingField_8;
	// Nethereum.RPC.Fee1559Suggestions.IFee1559SuggestionStrategy Nethereum.RPC.TransactionManagers.TransactionManagerBase::_fee1559SuggestionStrategy
	RuntimeObject* ____fee1559SuggestionStrategy_9;
	// Nethereum.RPC.TransactionReceipts.ITransactionReceiptService Nethereum.RPC.TransactionManagers.TransactionManagerBase::_transactionReceiptService
	RuntimeObject* ____transactionReceiptService_10;
};

// Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__12
struct U3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462 
{
	// System.Int32 Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.Hex.HexTypes.HexBigInteger> Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__12::<>t__builder
	AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314 ___U3CU3Et__builder_1;
	// Nethereum.Web3.Accounts.AccountSignerTransactionManager Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__12::<>4__this
	AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* ___U3CU3E4__this_2;
	// Nethereum.RPC.Eth.DTOs.TransactionInput Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__12::transaction
	TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* ___transaction_3;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.Hex.HexTypes.HexBigInteger> Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__12::<>u__1
	ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195 ___U3CU3Eu__1_4;
};

// Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SendTransactionAsync>d__8
struct U3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E 
{
	// System.Int32 Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SendTransactionAsync>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SendTransactionAsync>d__8::<>t__builder
	AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E ___U3CU3Et__builder_1;
	// Nethereum.RPC.Eth.DTOs.TransactionInput Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SendTransactionAsync>d__8::transactionInput
	TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* ___transactionInput_2;
	// Nethereum.Web3.Accounts.AccountSignerTransactionManager Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SendTransactionAsync>d__8::<>4__this
	AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SendTransactionAsync>d__8::<>u__1
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SendTransactionAsync>d__8::<>u__2
	ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 ___U3CU3Eu__2_5;
};

// Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__13
struct U3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B 
{
	// System.Int32 Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__13::<>t__builder
	AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E ___U3CU3Et__builder_1;
	// Nethereum.Web3.Accounts.AccountSignerTransactionManager Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__13::<>4__this
	AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* ___U3CU3E4__this_2;
	// Nethereum.RPC.Eth.DTOs.TransactionInput Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__13::transaction
	TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* ___transaction_3;
	// Nethereum.RPC.Eth.Transactions.EthSendRawTransaction Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__13::<ethSendTransaction>5__2
	EthSendRawTransaction_tC85D4CAD6B297971F6DEF6456CD7440F06A8BA83* ___U3CethSendTransactionU3E5__2_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__13::<>u__1
	ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 ___U3CU3Eu__1_5;
};

// Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionAsync>d__9
struct U3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892 
{
	// System.Int32 Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionAsync>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionAsync>d__9::<>t__builder
	AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E ___U3CU3Et__builder_1;
	// Nethereum.Web3.Accounts.AccountSignerTransactionManager Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionAsync>d__9::<>4__this
	AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* ___U3CU3E4__this_2;
	// Nethereum.RPC.Eth.DTOs.TransactionInput Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionAsync>d__9::transaction
	TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* ___transaction_3;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionAsync>d__9::<>u__1
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionAsync>d__9::<>u__2
	ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 ___U3CU3Eu__2_5;
};

// Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__11
struct U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B 
{
	// System.Int32 Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__11::<>t__builder
	AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E ___U3CU3Et__builder_1;
	// Nethereum.RPC.Eth.DTOs.TransactionInput Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__11::transaction
	TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* ___transaction_2;
	// Nethereum.Web3.Accounts.AccountSignerTransactionManager Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__11::<>4__this
	AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.Hex.HexTypes.HexBigInteger> Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__11::<>u__1
	ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195 ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__11::<>u__2
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___U3CU3Eu__2_5;
};

// Nethereum.Web3.Accounts.AccountSignerTransactionManager
struct AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5  : public TransactionManagerBase_t348BC050DA9D2D79FB1DB6FE3031B8E94B8C7ABC
{
	// Nethereum.Web3.Accounts.AccountOfflineTransactionSigner Nethereum.Web3.Accounts.AccountSignerTransactionManager::_transactionSigner
	AccountOfflineTransactionSigner_t27B036ED22C52CD7649744E61CD66C415EF8AF6E* ____transactionSigner_11;
	// System.Numerics.BigInteger Nethereum.Web3.Accounts.AccountSignerTransactionManager::<DefaultGas>k__BackingField
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___U3CDefaultGasU3Ek__BackingField_12;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.AccessList>
struct List_1_t4E11F5D2075471CC5269E680568592D8D061C750_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AccessListU5BU5D_t923FFC19CDD93DD1C54788C39B7D7EA3B9716498* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.AccessList>

// System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>
struct List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AccessListItemU5BU5D_tDBA701B5947DD90F356DD62308C207F6385F3C32* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>

// Nethereum.Signer.TypeTransactionSigner`1<Nethereum.Model.Transaction1559>

// Nethereum.Signer.TypeTransactionSigner`1<Nethereum.Model.Transaction1559>

// Nethereum.Web3.Accounts.AccountOfflineTransactionSigner

// Nethereum.Web3.Accounts.AccountOfflineTransactionSigner

// Nethereum.Accounts.AccountMessageSigning.AccountSigningOfflineService

// Nethereum.Accounts.AccountMessageSigning.AccountSigningOfflineService

// Nethereum.RPC.Eth.DTOs.CallInput

// Nethereum.RPC.Eth.DTOs.CallInput

// Nethereum.Signer.EIP712.Eip712TypedDataSigner
struct Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8_StaticFields
{
	// Nethereum.Signer.EIP712.Eip712TypedDataSigner Nethereum.Signer.EIP712.Eip712TypedDataSigner::<Current>k__BackingField
	Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8* ___U3CCurrentU3Ek__BackingField_1;
};

// Nethereum.Signer.EIP712.Eip712TypedDataSigner

// Nethereum.Signer.EthECKey
struct EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A_StaticFields
{
	// Org.BouncyCastle.Security.SecureRandom Nethereum.Signer.EthECKey::SecureRandom
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___SecureRandom_0;
	// System.Byte Nethereum.Signer.EthECKey::DEFAULT_PREFIX
	uint8_t ___DEFAULT_PREFIX_1;
};

// Nethereum.Signer.EthECKey

// Nethereum.Accounts.AccountMessageSigning.EthPersonalOfflineSign

// Nethereum.Accounts.AccountMessageSigning.EthPersonalOfflineSign

// Nethereum.Accounts.AccountMessageSigning.EthSignTypedDataV4Offline

// Nethereum.Accounts.AccountMessageSigning.EthSignTypedDataV4Offline

// Nethereum.Signer.LegacyTransactionSigner

// Nethereum.Signer.LegacyTransactionSigner

// Nethereum.Model.SignedTransaction

// Nethereum.Model.SignedTransaction

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

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.Hex.HexTypes.HexBigInteger>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.Hex.HexTypes.HexBigInteger>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>

// System.Threading.Tasks.Task`1<Nethereum.Hex.HexTypes.HexBigInteger>
struct Task_1_t090886E71122196EFD9A94467E467FC25376F7AE_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tDE964D439D228F3E34FE38E3D5285AAECE0DDC91* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Nethereum.Hex.HexTypes.HexBigInteger>

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.String>

// System.Numerics.BigInteger
struct BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_StaticFields
{
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnMinInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinInt_8;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnOneInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnOneInt_9;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnZeroInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnZeroInt_10;
	// System.Numerics.BigInteger System.Numerics.BigInteger::s_bnMinusOneInt
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___s_bnMinusOneInt_11;
	// System.Byte[] System.Numerics.BigInteger::s_success
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_success_12;
};

// System.Numerics.BigInteger

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

// Nethereum.RPC.Eth.Transactions.EthSendRawTransaction

// Nethereum.RPC.Eth.Transactions.EthSendRawTransaction

// Nethereum.Signer.EthereumMessageSigner

// Nethereum.Signer.EthereumMessageSigner

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// Nethereum.Signer.Transaction1559Signer

// Nethereum.Signer.Transaction1559Signer

// Nethereum.RPC.Eth.DTOs.TransactionInput

// Nethereum.RPC.Eth.DTOs.TransactionInput

// System.Void

// System.Void

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.Hex.HexTypes.HexBigInteger>
struct AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t090886E71122196EFD9A94467E467FC25376F7AE* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.Hex.HexTypes.HexBigInteger>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>
struct AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Nethereum.Hex.HexTypes.HexBigInteger>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Nethereum.Hex.HexTypes.HexBigInteger>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.String>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.String>

// Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>

// Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>

// System.Nullable`1<System.Numerics.BigInteger>

// System.Nullable`1<System.Numerics.BigInteger>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Nethereum.RPC.NonceServices.InMemoryNonceService

// Nethereum.RPC.NonceServices.InMemoryNonceService

// Nethereum.Model.SignedLegacyTransaction
struct SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields
{
	// System.Numerics.BigInteger Nethereum.Model.SignedLegacyTransaction::DEFAULT_GAS_PRICE
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___DEFAULT_GAS_PRICE_2;
	// System.Numerics.BigInteger Nethereum.Model.SignedLegacyTransaction::DEFAULT_GAS_LIMIT
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___DEFAULT_GAS_LIMIT_3;
};

// Nethereum.Model.SignedLegacyTransaction

// Nethereum.Model.TransactionType

// Nethereum.Model.TransactionType

// Nethereum.Web3.Accounts.Account

// Nethereum.Web3.Accounts.Account

// Nethereum.Hex.HexTypes.HexBigInteger

// Nethereum.Hex.HexTypes.HexBigInteger

// Nethereum.Model.Transaction1559

// Nethereum.Model.Transaction1559

// Nethereum.RPC.TransactionManagers.TransactionManagerBase

// Nethereum.RPC.TransactionManagers.TransactionManagerBase

// Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__12

// Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__12

// Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SendTransactionAsync>d__8

// Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SendTransactionAsync>d__8

// Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__13

// Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__13

// Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionAsync>d__9

// Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionAsync>d__9

// Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__11

// Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__11

// Nethereum.Web3.Accounts.AccountSignerTransactionManager

// Nethereum.Web3.Accounts.AccountSignerTransactionManager

// System.ArgumentException

// System.ArgumentException

// System.NullReferenceException

// System.NullReferenceException

// System.ArgumentNullException

// System.ArgumentNullException
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


// System.Boolean System.Nullable`1<System.Numerics.BigInteger>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_gshared_inline (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72* __this, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::op_Equality(Nethereum.Hex.HexTypes.HexRPCType`1<T>,Nethereum.Hex.HexTypes.HexRPCType`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HexRPCType_1_op_Equality_mC3A87099DAFB6C109637B611558A892934121788_gshared (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* ___0_lhs, HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::op_Inequality(Nethereum.Hex.HexTypes.HexRPCType`1<T>,Nethereum.Hex.HexTypes.HexRPCType`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HexRPCType_1_op_Inequality_mABC696C29299C847083DB8364B468AEB2428264F_gshared (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* ___0_lhs, HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* ___1_rhs, const RuntimeMethod* method) ;
// T Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_gshared (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Numerics.BigInteger>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Nullable_1_get_Value_m5D4AFF8301193978BFBA2F1470C7BCF86A8BCCAE_gshared (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72* __this, const RuntimeMethod* method) ;
// T Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::op_Implicit(Nethereum.Hex.HexTypes.HexRPCType`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F HexRPCType_1_op_Implicit_m1D51D1B0E1293F9D9BB9AB6AA705F2582826C75C_gshared (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* ___0_hexRpcType, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Numerics.BigInteger>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_gshared (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, const RuntimeMethod* method) ;
// System.String Nethereum.Signer.TypeTransactionSigner`1<System.Object>::SignTransaction(Nethereum.Signer.EthECKey,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeTransactionSigner_1_SignTransaction_m7A6B5B744F4A7C67A389573867EA883A53E9EA84_gshared (TypeTransactionSigner_1_t9B039BB6333833A97C43EF2D3EF751092ACA05ED* __this, EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* ___0_ecKey, RuntimeObject* ___1_transaction, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SendTransactionAsync>d__8>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_mCCD241D3E15BBDB4C6BD644425381235402334B8_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionAsync>d__9>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_m3EEA768AEBC846623BE26B7390EC03FC14AD0638_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__11>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m260F53F311BC40744DFA6E4FCA87EA62880E6DF3_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__12>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462_m2AA4C8C79B8B8BB7DB52FE0E0CA60C100E650AF7_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__13>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B_mD5027217BFF4263350D5EE8E99B656A22021E697_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8 Task_1_ConfigureAwait_m9D6420C859925B7C250DED7586DD770C91632070_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline (ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mD6243A7544181F96816A5F81459F4B66908ADB5E_gshared (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__12>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462_mD2CC02B3C362BFB5A726C3A6DF4616F9E6ED8E1E_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___0_awaiter, U3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConfiguredTaskAwaiter_GetResult_m00ABE5C46A983C38086438B7A7CB2C62296B3383_gshared (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SendTransactionAsync>d__8>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_m5D36055AD0C152AD99AC80E51EA0C8A0A8C08CC0_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SendTransactionAsync>d__8>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_m5517098B0C9DEF2A0DC0FA7C6D5029FB9BD1C501_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___0_awaiter, U3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__13>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B_mF3ABE65DA7E12926FB7D04772748C54116A9BCCE_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___0_awaiter, U3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionAsync>d__9>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_m7330F4D0A7333359D5FF468A65376C6283E1D427_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionAsync>d__9>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_m655535295E514D559714EDE87C71947B96F21A81_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___0_awaiter, U3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__11>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m84E0D3732326B24FF53AD77DD8CF4CC12C1B27F8_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___0_awaiter, U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__11>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m0C2A8BA66D52C99D5F5C9E1C32346CC99E0585AD_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B* ___1_stateMachine, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Accounts.AccountMessageSigning.EthSignTypedDataV4Offline::.ctor(Nethereum.Signer.EthECKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EthSignTypedDataV4Offline__ctor_m991889B103CC4E4253FBD5D7851A4765179A1DCA (EthSignTypedDataV4Offline_t201B90D1C99C130DFAEF950CE8A6FD4589AB5AC9* __this, EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* ___0_ethECKey, const RuntimeMethod* method) ;
// System.Void Nethereum.Accounts.AccountMessageSigning.EthPersonalOfflineSign::.ctor(Nethereum.Signer.EthECKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EthPersonalOfflineSign__ctor_m20877071C261D9783C7B397E7783E4DCFE47F9B5 (EthPersonalOfflineSign_t0F267D31B822CE82D4D762222602B89EE7CE7198* __this, EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* ___0_ethECKey, const RuntimeMethod* method) ;
// System.Void Nethereum.Signer.EthereumMessageSigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EthereumMessageSigner__ctor_mF80566B1FA116EDE2BE4993DAF88D8B6DB493D0E (EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Signer.EIP712.Eip712TypedDataSigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Eip712TypedDataSigner__ctor_m7768A14F01B00256A9768DEC1A7F4041729363EC (Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Accounts.Account::Initialise(Nethereum.Signer.EthECKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_Initialise_mF87DDF54CB108605CED16E9BD1C6EA003774E900 (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* ___0_key, const RuntimeMethod* method) ;
// System.Void Nethereum.Signer.EthECKey::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EthECKey__ctor_mE4059EFF16EAD226A12FDEB387BE3C4ABCDD5D11 (EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* __this, String_t* ___0_privateKey, const RuntimeMethod* method) ;
// System.Void Nethereum.Signer.EthECKey::.ctor(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EthECKey__ctor_m55FBB14B79A9370CB4ABDC4D480B158F21271543 (EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_vch, bool ___1_isPrivate, const RuntimeMethod* method) ;
// System.String Nethereum.Signer.EthECKey::GetPrivateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EthECKey_GetPrivateKey_m02CD893B0AF1F09062864EE3CF1A8ECA01E7EC21 (EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Accounts.Account::set_PrivateKey(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Account_set_PrivateKey_m23C2E03847B487901115CCC6961D425EF9AA7108_inline (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Nethereum.Signer.EthECKey::GetPublicAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EthECKey_GetPublicAddress_mB0B50ECC21F82642C2BEBB36E2E19A19C4E9987E (EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Accounts.Account::set_Address(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Account_set_Address_mB454771613D142C123086030A3B467CA274A6E17_inline (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.Signer.EthECKey::GetPubKey(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EthECKey_GetPubKey_m5893BE5CD398841F3A6054C98CA1EFDD4C3550B6 (EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* __this, bool ___0_compresseed, const RuntimeMethod* method) ;
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::ToHex(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, bool ___1_prefix, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Accounts.Account::set_PublicKey(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Account_set_PublicKey_m4BEA14A8EB8D5D0CD002FEF320A8E9AFB4DDDB88_inline (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.Accounts.AccountMessageSigning.AccountSigningOfflineService::.ctor(Nethereum.Signer.EthECKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountSigningOfflineService__ctor_mE4BFD961688F77AF5C4F812F9203F24E95E9E314 (AccountSigningOfflineService_t5B00F48844C8AE22356DB38ED57559F480076273* __this, EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* ___0_ethECKey, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Accounts.Account::set_AccountSigningService(Nethereum.RPC.AccountSigning.IAccountSigningService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Account_set_AccountSigningService_mD744940F52AA986C72DE82670932459623476AAE_inline (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Web3.Accounts.Account::get_ChainId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Account_get_ChainId_m9CE472C7BD92D76DC225D3EF96A589DCBF34A360_inline (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager::.ctor(Nethereum.JsonRpc.Client.IClient,Nethereum.Web3.Accounts.Account,System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountSignerTransactionManager__ctor_mB493E92EF6ECAC12838043088EF0CB24D35DB9D7 (AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* __this, RuntimeObject* ___0_rpcClient, Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* ___1_account, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___2_overridingAccountChainId, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Accounts.Account::set_TransactionManager(Nethereum.RPC.TransactionManagers.ITransactionManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Account_set_TransactionManager_m8E50BAC031AE822FF0F29C909207A7B684E4A3F4_inline (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.String Nethereum.Web3.Accounts.Account::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Account_get_Address_m640C6E09FD63581B3444F408B2B7CBB7CAD2EFC5_inline (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, const RuntimeMethod* method) ;
// Nethereum.RPC.TransactionManagers.ITransactionManager Nethereum.Web3.Accounts.Account::get_TransactionManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Account_get_TransactionManager_mBCAE205C985A72F40A3E014B54E9759432A5258C_inline (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.RPC.NonceServices.InMemoryNonceService::.ctor(System.String,Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InMemoryNonceService__ctor_mB36F1BC6D2C26E9FCD90F7586624E7C8D4059CB3 (InMemoryNonceService_t488B8489597A7B61513513D0D73434DA4C2692F6* __this, String_t* ___0_account, RuntimeObject* ___1_client, const RuntimeMethod* method) ;
// System.Void Nethereum.Signer.LegacyTransactionSigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacyTransactionSigner__ctor_m040C34FF004FAA94DA93D6531F11DCB0145391DA (LegacyTransactionSigner_t79F388EF4219EA442310B574B7BD4A666C6D0950* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Signer.Transaction1559Signer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559Signer__ctor_mA9CF9037DD13A904D753CE4FEF218E83663B6E9D (Transaction1559Signer_t3E012A0B96B3F9B430A630587E63BA0C39A48B53* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.String Nethereum.RPC.Eth.DTOs.CallInput::get_From()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CallInput_get_From_m0E827978D276DECD603396D4AC4369ACE95C601B (CallInput_t134727ED6D63AA0F8722CB06FEC85207CC5D3F9C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.RPC.Eth.DTOs.CallInput::set_From(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CallInput_set_From_m2774FB54F7108125227102BBFCAF284439023064_inline (CallInput_t134727ED6D63AA0F8722CB06FEC85207CC5D3F9C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Util.AddressExtensions::IsTheSameAddress(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddressExtensions_IsTheSameAddress_m5366CF742A45B864A6D59F8040E77A7927A4B831 (String_t* ___0_address, String_t* ___1_otherAddress, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Numerics.BigInteger>::get_HasValue()
inline bool Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_inline (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72*, const RuntimeMethod*))Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_gshared_inline)(__this, method);
}
// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.TransactionInput::get_Nonce()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* TransactionInput_get_Nonce_m6896F658F684EE32D0082439E84AC3B132C8AAF0_inline (TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* __this, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::op_Equality(Nethereum.Hex.HexTypes.HexRPCType`1<T>,Nethereum.Hex.HexTypes.HexRPCType`1<T>)
inline bool HexRPCType_1_op_Equality_mC3A87099DAFB6C109637B611558A892934121788 (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* ___0_lhs, HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0*, HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0*, const RuntimeMethod*))HexRPCType_1_op_Equality_mC3A87099DAFB6C109637B611558A892934121788_gshared)(___0_lhs, ___1_rhs, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::get_Gas()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* CallInput_get_Gas_m09A9CF512CFABF7076567743AACD5877595F681C_inline (CallInput_t134727ED6D63AA0F8722CB06FEC85207CC5D3F9C* __this, const RuntimeMethod* method) ;
// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* CallInput_get_Value_m28727CA48965FA13A86086553D7865768C7CF2F4_inline (CallInput_t134727ED6D63AA0F8722CB06FEC85207CC5D3F9C* __this, const RuntimeMethod* method) ;
// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.Hex.HexTypes.HexBigInteger::.ctor(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HexBigInteger__ctor_mE96FF1F49C3B1DF037485FBCEBEB27707DA444ED (HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, const RuntimeMethod* method) ;
// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* CallInput_get_Type_m5AC7217846BC3240AB103B0C45DF168662ADF311_inline (CallInput_t134727ED6D63AA0F8722CB06FEC85207CC5D3F9C* __this, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::op_Inequality(Nethereum.Hex.HexTypes.HexRPCType`1<T>,Nethereum.Hex.HexTypes.HexRPCType`1<T>)
inline bool HexRPCType_1_op_Inequality_mABC696C29299C847083DB8364B468AEB2428264F (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* ___0_lhs, HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0*, HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0*, const RuntimeMethod*))HexRPCType_1_op_Inequality_mABC696C29299C847083DB8364B468AEB2428264F_gshared)(___0_lhs, ___1_rhs, method);
}
// T Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::get_Value()
inline BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* __this, const RuntimeMethod* method)
{
	return ((  BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F (*) (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0*, const RuntimeMethod*))HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_gshared)(__this, method);
}
// System.Byte Nethereum.Model.TransactionTypeExtensions::AsByte(Nethereum.Model.TransactionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t TransactionTypeExtensions_AsByte_m6F28DCF90590ABCD9F4A1FC31047D7EDAD3AE4A1 (int32_t ___0_transactionType, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.BigInteger::op_Equality(System.Numerics.BigInteger,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_op_Equality_mC3E68AE3326F7FAC3441A5618537BFB24CD15248 (BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_left, int64_t ___1_right, const RuntimeMethod* method) ;
// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::get_MaxPriorityFeePerGas()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* CallInput_get_MaxPriorityFeePerGas_m76DC2A7004C6DB0487342B98D71A1B519F2AA655_inline (CallInput_t134727ED6D63AA0F8722CB06FEC85207CC5D3F9C* __this, const RuntimeMethod* method) ;
// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::get_MaxFeePerGas()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* CallInput_get_MaxFeePerGas_m7F2F78062F61F145F95095D15F4D2FB8B130E58E_inline (CallInput_t134727ED6D63AA0F8722CB06FEC85207CC5D3F9C* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Numerics.BigInteger>::get_Value()
inline BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F Nullable_1_get_Value_m5D4AFF8301193978BFBA2F1470C7BCF86A8BCCAE (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72* __this, const RuntimeMethod* method)
{
	return ((  BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F (*) (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72*, const RuntimeMethod*))Nullable_1_get_Value_m5D4AFF8301193978BFBA2F1470C7BCF86A8BCCAE_gshared)(__this, method);
}
// T Nethereum.Hex.HexTypes.HexRPCType`1<System.Numerics.BigInteger>::op_Implicit(Nethereum.Hex.HexTypes.HexRPCType`1<T>)
inline BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F HexRPCType_1_op_Implicit_m1D51D1B0E1293F9D9BB9AB6AA705F2582826C75C (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0* ___0_hexRpcType, const RuntimeMethod* method)
{
	return ((  BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F (*) (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0*, const RuntimeMethod*))HexRPCType_1_op_Implicit_m1D51D1B0E1293F9D9BB9AB6AA705F2582826C75C_gshared)(___0_hexRpcType, method);
}
// System.Void System.Nullable`1<System.Numerics.BigInteger>::.ctor(T)
inline void Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138 (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72*, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F, const RuntimeMethod*))Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_gshared)(__this, ___0_value, method);
}
// System.String Nethereum.RPC.Eth.DTOs.CallInput::get_To()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CallInput_get_To_mE564AA7B4D78B890CF0407ED7257627DCD494EBB (CallInput_t134727ED6D63AA0F8722CB06FEC85207CC5D3F9C* __this, const RuntimeMethod* method) ;
// System.String Nethereum.RPC.Eth.DTOs.CallInput::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CallInput_get_Data_mF97203DF5052D5FB6436FDECE1D9E414DA3F9D2D (CallInput_t134727ED6D63AA0F8722CB06FEC85207CC5D3F9C* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.AccessList> Nethereum.RPC.Eth.DTOs.TransactionInput::get_AccessList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t4E11F5D2075471CC5269E680568592D8D061C750* TransactionInput_get_AccessList_m451849F30B6AF12301B961B43B901E5E923C371F_inline (TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Nethereum.Model.AccessListItem> Nethereum.RPC.Eth.Mappers.AccessListRPCMapper::ToSignerAccessListItemArray(System.Collections.Generic.List`1<Nethereum.RPC.Eth.DTOs.AccessList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* AccessListRPCMapper_ToSignerAccessListItemArray_m7EB72772CC534F23E8A1C54CEE69F5515D529C5A (List_1_t4E11F5D2075471CC5269E680568592D8D061C750* ___0_accessLists, const RuntimeMethod* method) ;
// System.Void Nethereum.Model.Transaction1559::.ctor(System.Numerics.BigInteger,System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.Nullable`1<System.Numerics.BigInteger>,System.String,System.Nullable`1<System.Numerics.BigInteger>,System.String,System.Collections.Generic.List`1<Nethereum.Model.AccessListItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transaction1559__ctor_mE0EFA1A36A81052017B7A5714C6B53E8836DC962 (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_chainId, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___1_nonce, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___2_maxPriorityFeePerGas, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___3_maxFeePerGas, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___4_gasLimit, String_t* ___5_receiverAddress, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___6_amount, String_t* ___7_data, List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* ___8_accessList, const RuntimeMethod* method) ;
// System.String Nethereum.Web3.Accounts.Account::get_PrivateKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Account_get_PrivateKey_mD9DC77BD871288862E657C76E141ED1642A474D5_inline (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, const RuntimeMethod* method) ;
// System.String Nethereum.Signer.TypeTransactionSigner`1<Nethereum.Model.Transaction1559>::SignTransaction(Nethereum.Signer.EthECKey,T)
inline String_t* TypeTransactionSigner_1_SignTransaction_m66EF2A1557991A8C3328D8123501872E497F1405 (TypeTransactionSigner_1_t1265552D6E6BBF665F746B7DA9B8A87F92750566* __this, EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* ___0_ecKey, Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* ___1_transaction, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TypeTransactionSigner_1_t1265552D6E6BBF665F746B7DA9B8A87F92750566*, EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A*, Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17*, const RuntimeMethod*))TypeTransactionSigner_1_SignTransaction_m7A6B5B744F4A7C67A389573867EA883A53E9EA84_gshared)(__this, ___0_ecKey, ___1_transaction, method);
}
// Nethereum.Hex.HexTypes.HexBigInteger Nethereum.RPC.Eth.DTOs.CallInput::get_GasPrice()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* CallInput_get_GasPrice_mCB6E5240F55080A0B4F7B4E1067495CB83BA527B_inline (CallInput_t134727ED6D63AA0F8722CB06FEC85207CC5D3F9C* __this, const RuntimeMethod* method) ;
// System.String Nethereum.Signer.LegacyTransactionSigner::SignTransaction(System.String,System.String,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LegacyTransactionSigner_SignTransaction_m493AB802D55FFCF302B75441E32C572FBF1E9B17 (LegacyTransactionSigner_t79F388EF4219EA442310B574B7BD4A666C6D0950* __this, String_t* ___0_privateKey, String_t* ___1_to, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___2_amount, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___3_nonce, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___4_gasPrice, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___5_gasLimit, String_t* ___6_data, const RuntimeMethod* method) ;
// System.String Nethereum.Signer.LegacyTransactionSigner::SignTransaction(System.String,System.Numerics.BigInteger,System.String,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Numerics.BigInteger,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LegacyTransactionSigner_SignTransaction_m8C14099903324E61BE044ACD8C7EFB335AC246C9 (LegacyTransactionSigner_t79F388EF4219EA442310B574B7BD4A666C6D0950* __this, String_t* ___0_privateKey, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___1_chainId, String_t* ___2_to, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___3_amount, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___4_nonce, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___5_gasPrice, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___6_gasLimit, String_t* ___7_data, const RuntimeMethod* method) ;
// System.Void Nethereum.RPC.TransactionManagers.TransactionManagerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionManagerBase__ctor_m914B98A4962785C7D826655DDB15B9618A7FD377 (TransactionManagerBase_t348BC050DA9D2D79FB1DB6FE3031B8E94B8C7ABC* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.RPC.TransactionManagers.TransactionManagerBase::set_ChainId(System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransactionManagerBase_set_ChainId_m3F1421151360D50ACD69BD373C205A5E1565434E_inline (TransactionManagerBase_t348BC050DA9D2D79FB1DB6FE3031B8E94B8C7ABC* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.RPC.TransactionManagers.TransactionManagerBase::set_Account(Nethereum.RPC.Accounts.IAccount)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransactionManagerBase_set_Account_mC173C6D17C15593909D309673E74BAB9D3E237F1_inline (TransactionManagerBase_t348BC050DA9D2D79FB1DB6FE3031B8E94B8C7ABC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Accounts.AccountOfflineTransactionSigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountOfflineTransactionSigner__ctor_mE3402592824BB4C3E136242456C514691F3867BB (AccountOfflineTransactionSigner_t27B036ED22C52CD7649744E61CD66C415EF8AF6E* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Create()
inline AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Start<Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SendTransactionAsync>d__8>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_m912144C2465BBE9A217097BD9DD9379DEB5DF381 (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, U3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, U3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_mCCD241D3E15BBDB4C6BD644425381235402334B8_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::get_Task()
inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Start<Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionAsync>d__9>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_mD283710835D331ECE1B7FDE8879DB67FCDE29A77 (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, U3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, U3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_m3EEA768AEBC846623BE26B7390EC03FC14AD0638_gshared)(__this, ___0_stateMachine, method);
}
// System.Void Nethereum.RPC.TransactionManagers.TransactionManagerBase::SetDefaultGasIfNotSet(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransactionManagerBase_SetDefaultGasIfNotSet_m5AEC162C02F9801C9A1EDD4E5AA64264A56D67A9 (TransactionManagerBase_t348BC050DA9D2D79FB1DB6FE3031B8E94B8C7ABC* __this, TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* ___0_transactionInput, const RuntimeMethod* method) ;
// Nethereum.RPC.Accounts.IAccount Nethereum.RPC.TransactionManagers.TransactionManagerBase::get_Account()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TransactionManagerBase_get_Account_m723835CC7E2DCA78E31EC272E55A543B5EF333F9_inline (TransactionManagerBase_t348BC050DA9D2D79FB1DB6FE3031B8E94B8C7ABC* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Numerics.BigInteger> Nethereum.RPC.TransactionManagers.TransactionManagerBase::get_ChainId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 TransactionManagerBase_get_ChainId_m3872C1FB94230DD60C6FDC17995CE2A069F694AB_inline (TransactionManagerBase_t348BC050DA9D2D79FB1DB6FE3031B8E94B8C7ABC* __this, const RuntimeMethod* method) ;
// System.String Nethereum.Web3.Accounts.AccountOfflineTransactionSigner::SignTransaction(Nethereum.Web3.Accounts.Account,Nethereum.RPC.Eth.DTOs.TransactionInput,System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccountOfflineTransactionSigner_SignTransaction_m57613942CB3553A61494F911182BE39C23D44DB9 (AccountOfflineTransactionSigner_t27B036ED22C52CD7649744E61CD66C415EF8AF6E* __this, Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* ___0_account, TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* ___1_transaction, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___2_overridingAccountChainId, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Start<Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__11>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m4D9C081FB8940E6A6FA61D3CB0277C9BDB85BB52 (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m260F53F311BC40744DFA6E4FCA87EA62880E6DF3_gshared)(__this, ___0_stateMachine, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.Hex.HexTypes.HexBigInteger>::Create()
inline AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314 AsyncTaskMethodBuilder_1_Create_m310E3082F896A2EA219B90D85FD5DEB882BEF0A2 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.Hex.HexTypes.HexBigInteger>::Start<Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__12>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462_mDEF6F203051BDD97886ED15AF075A721EB26E405 (AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314* __this, U3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314*, U3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462_m2AA4C8C79B8B8BB7DB52FE0E0CA60C100E650AF7_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.Hex.HexTypes.HexBigInteger>::get_Task()
inline Task_1_t090886E71122196EFD9A94467E467FC25376F7AE* AsyncTaskMethodBuilder_1_get_Task_m78C3431C4BFC0F5D4FF57955FC9B827B8442BBA8 (AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t090886E71122196EFD9A94467E467FC25376F7AE* (*) (AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Start<Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__13>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B_mB6F5AC2A77CC19739679462165A4E5DBC8C27FCD (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, U3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, U3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B_mD5027217BFF4263350D5EE8E99B656A22021E697_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<Nethereum.Hex.HexTypes.HexBigInteger>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t54BF6E9D9C600508578354F7A21369CA90DF263F Task_1_ConfigureAwait_m342E8ED9121C0E690F5A24C7B1CAF4A2B06A389A (Task_1_t090886E71122196EFD9A94467E467FC25376F7AE* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t54BF6E9D9C600508578354F7A21369CA90DF263F (*) (Task_1_t090886E71122196EFD9A94467E467FC25376F7AE*, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m9D6420C859925B7C250DED7586DD770C91632070_gshared)(__this, ___0_continueOnCapturedContext, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Nethereum.Hex.HexTypes.HexBigInteger>::GetAwaiter()
inline ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195 ConfiguredTaskAwaitable_1_GetAwaiter_m25128B609BEAC7C193798013688B89F33267E731_inline (ConfiguredTaskAwaitable_1_t54BF6E9D9C600508578354F7A21369CA90DF263F* __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195 (*) (ConfiguredTaskAwaitable_1_t54BF6E9D9C600508578354F7A21369CA90DF263F*, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.Hex.HexTypes.HexBigInteger>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m4368644F058B59DD4E18EB8352DD2BF895C2E86C (ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195*, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mD6243A7544181F96816A5F81459F4B66908ADB5E_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.Hex.HexTypes.HexBigInteger>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.Hex.HexTypes.HexBigInteger>,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__12>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195_TisU3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462_m96F2AF80C7A8572186D18D460581A68BF3488CA0 (AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314* __this, ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195* ___0_awaiter, U3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314*, ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195*, U3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462_mD2CC02B3C362BFB5A726C3A6DF4616F9E6ED8E1E_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.Hex.HexTypes.HexBigInteger>::GetResult()
inline HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* ConfiguredTaskAwaiter_GetResult_m8711E39129F29F95D6AEC02DF7D90CB31E10FF00 (ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195* __this, const RuntimeMethod* method)
{
	return ((  HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* (*) (ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195*, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m00ABE5C46A983C38086438B7A7CB2C62296B3383_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.Hex.HexTypes.HexBigInteger>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mD776015CBCD1AEBA1B0265663096BFCCEB1D0505 (AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.Hex.HexTypes.HexBigInteger>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m0DA781182F7BDD715BB40C4EB5468D33105B9390 (AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314* __this, HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314*, HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNonceAsyncU3Ed__12_MoveNext_mC7141CD258AA084F34534C0262923162B97F741F (U3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Nethereum.Hex.HexTypes.HexBigInteger>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mF4666048C1F1ED8CD3297DCB6F730CC548B7691D (AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___0_stateMachine, method);
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNonceAsyncU3Ed__12_SetStateMachine_mB0CBD5F4FAA0DBF7DAF29034A28C43E8B610FFD2 (U3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Nethereum.RPC.TransactionManagers.TransactionManagerBase::EnsureChainIdAndChainFeatureIsSetAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TransactionManagerBase_EnsureChainIdAndChainFeatureIsSetAsync_m81211D12CE9C761EB2EB013251AF1D3FAB8DF07D (TransactionManagerBase_t348BC050DA9D2D79FB1DB6FE3031B8E94B8C7ABC* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SendTransactionAsync>d__8>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_mD8408ADFF5DF9937F0596EC3FFBD3BBDEFEBF79B (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*, U3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_m5D36055AD0C152AD99AC80E51EA0C8A0A8C08CC0_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager::SignAndSendTransactionAsync(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* AccountSignerTransactionManager_SignAndSendTransactionAsync_m91A636543091D1AFC1CF5D246480DBC8B34E1578 (AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* __this, TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* ___0_transaction, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.String>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8 (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC (*) (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m9D6420C859925B7C250DED7586DD770C91632070_gshared)(__this, ___0_continueOnCapturedContext, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.String>::GetAwaiter()
inline ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_inline (ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC* __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 (*) (ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC*, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1 (ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5*, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mD6243A7544181F96816A5F81459F4B66908ADB5E_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SendTransactionAsync>d__8>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_mE24AAA4440D80FDCEB1199CD5D38C4FC817D63CD (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5* ___0_awaiter, U3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5*, U3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_m5517098B0C9DEF2A0DC0FA7C6D5029FB9BD1C501_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>::GetResult()
inline String_t* ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8 (ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5*, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m00ABE5C46A983C38086438B7A7CB2C62296B3383_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, String_t* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, String_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SendTransactionAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendTransactionAsyncU3Ed__8_MoveNext_mBDE405890CA8396D1A499E8F9FDA0543DD0D5626 (U3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30 (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___0_stateMachine, method);
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SendTransactionAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendTransactionAsyncU3Ed__8_SetStateMachine_mF9E4219B591D981CE4639A2E9A629E75BCD2FF98 (U3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Nethereum.RPC.Eth.Transactions.EthSendRawTransaction::.ctor(Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EthSendRawTransaction__ctor_mB1C17273E27D5F5A47D1801B620BB920F2F4BA23 (EthSendRawTransaction_tC85D4CAD6B297971F6DEF6456CD7440F06A8BA83* __this, RuntimeObject* ___0_client, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager::SignTransactionRetrievingNextNonceAsync(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* AccountSignerTransactionManager_SignTransactionRetrievingNextNonceAsync_mCFA6B101B49768964B8A1985268190FCF30960AB (AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* __this, TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* ___0_transaction, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__13>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B_mC23987D9AA5CDA93CD69E5128D99D00F068B9B15 (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5* ___0_awaiter, U3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5*, U3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B_mF3ABE65DA7E12926FB7D04772748C54116A9BCCE_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::EnsureHexPrefix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_EnsureHexPrefix_m19AD0DDEC70CED3CA428D91D7B270C5B18E09F7B (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.String> Nethereum.RPC.Eth.Transactions.EthSendRawTransaction::SendRequestAsync(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* EthSendRawTransaction_SendRequestAsync_m1A836ADACCDCB9CC4D2023BF18291D2236D9EA29 (EthSendRawTransaction_tC85D4CAD6B297971F6DEF6456CD7440F06A8BA83* __this, String_t* ___0_signedTransactionData, RuntimeObject* ___1_id, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignAndSendTransactionAsyncU3Ed__13_MoveNext_m6A7FD777B6C8AF57B9EB94CC1E01E4916B87DD1A (U3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignAndSendTransactionAsyncU3Ed__13_SetStateMachine_mB8740431C99F9F86C6B13410AD60842DCE655885 (U3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionAsync>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_m4756F1CFA850ABDDEB7CB1D0BF3800481DF32FEF (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*, U3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_m7330F4D0A7333359D5FF468A65376C6283E1D427_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.String>,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionAsync>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_mDC77E3C08C42618F9C4094DED4E56AED39E446EF (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5* ___0_awaiter, U3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5*, U3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_m655535295E514D559714EDE87C71947B96F21A81_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignTransactionAsyncU3Ed__9_MoveNext_mC5BFA4C030B5086EDC1E8A771FDD16D2B0544B35 (U3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignTransactionAsyncU3Ed__9_SetStateMachine_m8170B6476B6905976D983242DC3AA24C86C2B88E (U3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Nethereum.Hex.HexTypes.HexBigInteger> Nethereum.Web3.Accounts.AccountSignerTransactionManager::GetNonceAsync(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t090886E71122196EFD9A94467E467FC25376F7AE* AccountSignerTransactionManager_GetNonceAsync_m27A3478C5E6F5681D7AACE75147C76A34B58BEB4 (AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* __this, TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* ___0_transaction, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Nethereum.Hex.HexTypes.HexBigInteger>,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__11>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m948377EA496F01B068E1DDF5F62DDF2983B49A88 (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195* ___0_awaiter, U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195*, U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m84E0D3732326B24FF53AD77DD8CF4CC12C1B27F8_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void Nethereum.RPC.Eth.DTOs.TransactionInput::set_Nonce(Nethereum.Hex.HexTypes.HexBigInteger)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransactionInput_set_Nonce_mF84D9D70D26C5A85E999ECC65F64B35E6E6D0626_inline (TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* __this, HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* ___0_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Nethereum.RPC.TransactionManagers.TransactionManagerBase::SetTransactionFeesOrPricingAsync(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TransactionManagerBase_SetTransactionFeesOrPricingAsync_mF2C7624EA76D10856545B910B11C64E322217DBB (TransactionManagerBase_t348BC050DA9D2D79FB1DB6FE3031B8E94B8C7ABC* __this, TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* ___0_transaction, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__11>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m1DA80056E554ED675CA93BF37424210F8179D498 (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*, U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m0C2A8BA66D52C99D5F5C9E1C32346CC99E0585AD_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.String Nethereum.Web3.Accounts.AccountSignerTransactionManager::SignTransaction(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccountSignerTransactionManager_SignTransaction_mA9757FD32C153C6200D3EFC8907D0F5A2A6DA3C7 (AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* __this, TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* ___0_transaction, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_MoveNext_mEBF4AA6183735D902E8EF344A1CAC537C3545B66 (U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_SetStateMachine_m0F720D642807FB88B08AD5243968697DFED505B3 (U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
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
// System.Void Nethereum.Accounts.AccountMessageSigning.AccountSigningOfflineService::.ctor(Nethereum.Signer.EthECKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountSigningOfflineService__ctor_mE4BFD961688F77AF5C4F812F9203F24E95E9E314 (AccountSigningOfflineService_t5B00F48844C8AE22356DB38ED57559F480076273* __this, EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* ___0_ethECKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EthPersonalOfflineSign_t0F267D31B822CE82D4D762222602B89EE7CE7198_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EthSignTypedDataV4Offline_t201B90D1C99C130DFAEF950CE8A6FD4589AB5AC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* L_0 = ___0_ethECKey;
		EthSignTypedDataV4Offline_t201B90D1C99C130DFAEF950CE8A6FD4589AB5AC9* L_1 = (EthSignTypedDataV4Offline_t201B90D1C99C130DFAEF950CE8A6FD4589AB5AC9*)il2cpp_codegen_object_new(EthSignTypedDataV4Offline_t201B90D1C99C130DFAEF950CE8A6FD4589AB5AC9_il2cpp_TypeInfo_var);
		EthSignTypedDataV4Offline__ctor_m991889B103CC4E4253FBD5D7851A4765179A1DCA(L_1, L_0, NULL);
		__this->___U3CSignTypedDataV4U3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSignTypedDataV4U3Ek__BackingField_0), (void*)L_1);
		EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* L_2 = ___0_ethECKey;
		EthPersonalOfflineSign_t0F267D31B822CE82D4D762222602B89EE7CE7198* L_3 = (EthPersonalOfflineSign_t0F267D31B822CE82D4D762222602B89EE7CE7198*)il2cpp_codegen_object_new(EthPersonalOfflineSign_t0F267D31B822CE82D4D762222602B89EE7CE7198_il2cpp_TypeInfo_var);
		EthPersonalOfflineSign__ctor_m20877071C261D9783C7B397E7783E4DCFE47F9B5(L_3, L_2, NULL);
		__this->___U3CPersonalSignU3Ek__BackingField_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPersonalSignU3Ek__BackingField_1), (void*)L_3);
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
// System.Void Nethereum.Accounts.AccountMessageSigning.EthPersonalOfflineSign::.ctor(Nethereum.Signer.EthECKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EthPersonalOfflineSign__ctor_m20877071C261D9783C7B397E7783E4DCFE47F9B5 (EthPersonalOfflineSign_t0F267D31B822CE82D4D762222602B89EE7CE7198* __this, EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* ___0_ethECKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* L_0 = ___0_ethECKey;
		__this->____ethECKey_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ethECKey_0), (void*)L_0);
		EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745* L_1 = (EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745*)il2cpp_codegen_object_new(EthereumMessageSigner_tF481F829C030ABE15FB5B16F2A3E5441E9300745_il2cpp_TypeInfo_var);
		EthereumMessageSigner__ctor_mF80566B1FA116EDE2BE4993DAF88D8B6DB493D0E(L_1, NULL);
		__this->____ethereumMessageSigner_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ethereumMessageSigner_1), (void*)L_1);
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
// System.Void Nethereum.Accounts.AccountMessageSigning.EthSignTypedDataV4Offline::.ctor(Nethereum.Signer.EthECKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EthSignTypedDataV4Offline__ctor_m991889B103CC4E4253FBD5D7851A4765179A1DCA (EthSignTypedDataV4Offline_t201B90D1C99C130DFAEF950CE8A6FD4589AB5AC9* __this, EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* ___0_ethECKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* L_0 = ___0_ethECKey;
		__this->____ethECKey_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ethECKey_0), (void*)L_0);
		Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8* L_1 = (Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8*)il2cpp_codegen_object_new(Eip712TypedDataSigner_tC2AE9959FBDA6D4F2E747A4109F3EA5FBC306EF8_il2cpp_TypeInfo_var);
		Eip712TypedDataSigner__ctor_m7768A14F01B00256A9768DEC1A7F4041729363EC(L_1, NULL);
		__this->____typedDataSigner_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____typedDataSigner_1), (void*)L_1);
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
// System.Nullable`1<System.Numerics.BigInteger> Nethereum.Web3.Accounts.Account::get_ChainId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Account_get_ChainId_m9CE472C7BD92D76DC225D3EF96A589DCBF34A360 (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CChainIdU3Ek__BackingField_1;
		return L_0;
	}
}
// System.String Nethereum.Web3.Accounts.Account::get_PrivateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Account_get_PrivateKey_mD9DC77BD871288862E657C76E141ED1642A474D5 (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPrivateKeyU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.Web3.Accounts.Account::set_PrivateKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_set_PrivateKey_m23C2E03847B487901115CCC6961D425EF9AA7108 (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPrivateKeyU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPrivateKeyU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.Web3.Accounts.Account::set_PublicKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_set_PublicKey_m4BEA14A8EB8D5D0CD002FEF320A8E9AFB4DDDB88 (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPublicKeyU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPublicKeyU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.Web3.Accounts.Account::.ctor(Nethereum.Signer.EthECKey,System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account__ctor_m546190DD2CDBFEB1FA4BC31D8243D01422CAE467 (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* ___0_key, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___1_chainId, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___1_chainId;
		__this->___U3CChainIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CChainIdU3Ek__BackingField_1))->___value_1))->____bits_7), (void*)NULL);
		EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* L_1 = ___0_key;
		Account_Initialise_mF87DDF54CB108605CED16E9BD1C6EA003774E900(__this, L_1, NULL);
		return;
	}
}
// System.Void Nethereum.Web3.Accounts.Account::.ctor(System.String,System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account__ctor_m660AB0A8FCC54C1677250B64DE1C887E97B6D368 (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, String_t* ___0_privateKey, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___1_chainId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___1_chainId;
		__this->___U3CChainIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CChainIdU3Ek__BackingField_1))->___value_1))->____bits_7), (void*)NULL);
		String_t* L_1 = ___0_privateKey;
		EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* L_2 = (EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A*)il2cpp_codegen_object_new(EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A_il2cpp_TypeInfo_var);
		EthECKey__ctor_mE4059EFF16EAD226A12FDEB387BE3C4ABCDD5D11(L_2, L_1, NULL);
		Account_Initialise_mF87DDF54CB108605CED16E9BD1C6EA003774E900(__this, L_2, NULL);
		return;
	}
}
// System.Void Nethereum.Web3.Accounts.Account::.ctor(System.Byte[],System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account__ctor_m95962EDF0FD462AE04B0B7FC9C983173E306B20C (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_privateKey, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___1_chainId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___1_chainId;
		__this->___U3CChainIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CChainIdU3Ek__BackingField_1))->___value_1))->____bits_7), (void*)NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_privateKey;
		EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* L_2 = (EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A*)il2cpp_codegen_object_new(EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A_il2cpp_TypeInfo_var);
		EthECKey__ctor_m55FBB14B79A9370CB4ABDC4D480B158F21271543(L_2, L_1, (bool)1, NULL);
		Account_Initialise_mF87DDF54CB108605CED16E9BD1C6EA003774E900(__this, L_2, NULL);
		return;
	}
}
// System.Void Nethereum.Web3.Accounts.Account::Initialise(Nethereum.Signer.EthECKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_Initialise_mF87DDF54CB108605CED16E9BD1C6EA003774E900 (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccountSigningOfflineService_t5B00F48844C8AE22356DB38ED57559F480076273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* L_0 = ___0_key;
		String_t* L_1;
		L_1 = EthECKey_GetPrivateKey_m02CD893B0AF1F09062864EE3CF1A8ECA01E7EC21(L_0, NULL);
		Account_set_PrivateKey_m23C2E03847B487901115CCC6961D425EF9AA7108_inline(__this, L_1, NULL);
		EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* L_2 = ___0_key;
		String_t* L_3;
		L_3 = EthECKey_GetPublicAddress_mB0B50ECC21F82642C2BEBB36E2E19A19C4E9987E(L_2, NULL);
		Account_set_Address_mB454771613D142C123086030A3B467CA274A6E17_inline(__this, L_3, NULL);
		EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* L_4 = ___0_key;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = EthECKey_GetPubKey_m5893BE5CD398841F3A6054C98CA1EFDD4C3550B6(L_4, (bool)0, NULL);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_5, (bool)0, NULL);
		Account_set_PublicKey_m4BEA14A8EB8D5D0CD002FEF320A8E9AFB4DDDB88_inline(__this, L_6, NULL);
		EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* L_7 = ___0_key;
		AccountSigningOfflineService_t5B00F48844C8AE22356DB38ED57559F480076273* L_8 = (AccountSigningOfflineService_t5B00F48844C8AE22356DB38ED57559F480076273*)il2cpp_codegen_object_new(AccountSigningOfflineService_t5B00F48844C8AE22356DB38ED57559F480076273_il2cpp_TypeInfo_var);
		AccountSigningOfflineService__ctor_mE4BFD961688F77AF5C4F812F9203F24E95E9E314(L_8, L_7, NULL);
		Account_set_AccountSigningService_mD744940F52AA986C72DE82670932459623476AAE_inline(__this, L_8, NULL);
		VirtualActionInvoker0::Invoke(9 /* System.Void Nethereum.Web3.Accounts.Account::InitialiseDefaultTransactionManager() */, __this);
		return;
	}
}
// System.Void Nethereum.Web3.Accounts.Account::InitialiseDefaultTransactionManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_InitialiseDefaultTransactionManager_mE20FB1BD5E16B0CE651CE3395C38DF3791F5EE61 (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0;
		L_0 = Account_get_ChainId_m9CE472C7BD92D76DC225D3EF96A589DCBF34A360_inline(__this, NULL);
		AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_1 = (AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5*)il2cpp_codegen_object_new(AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5_il2cpp_TypeInfo_var);
		AccountSignerTransactionManager__ctor_mB493E92EF6ECAC12838043088EF0CB24D35DB9D7(L_1, (RuntimeObject*)NULL, __this, L_0, NULL);
		Account_set_TransactionManager_m8E50BAC031AE822FF0F29C909207A7B684E4A3F4_inline(__this, L_1, NULL);
		return;
	}
}
// System.String Nethereum.Web3.Accounts.Account::get_Address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Account_get_Address_m640C6E09FD63581B3444F408B2B7CBB7CAD2EFC5 (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAddressU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Nethereum.Web3.Accounts.Account::set_Address(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_set_Address_mB454771613D142C123086030A3B467CA274A6E17 (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CAddressU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAddressU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// Nethereum.RPC.TransactionManagers.ITransactionManager Nethereum.Web3.Accounts.Account::get_TransactionManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Account_get_TransactionManager_mBCAE205C985A72F40A3E014B54E9759432A5258C (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTransactionManagerU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Nethereum.Web3.Accounts.Account::set_TransactionManager(Nethereum.RPC.TransactionManagers.ITransactionManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_set_TransactionManager_m8E50BAC031AE822FF0F29C909207A7B684E4A3F4 (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTransactionManagerU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTransactionManagerU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// Nethereum.RPC.NonceServices.INonceService Nethereum.Web3.Accounts.Account::get_NonceService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Account_get_NonceService_m3F368B413D6A0A8A91E98FC27A34023D565AE6E4 (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITransactionManager_t93C7C810748D626CB18E930ADCB2A2571F8426A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InMemoryNonceService_t488B8489597A7B61513513D0D73434DA4C2692F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____nonceService_0;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0029;
		}
	}
	{
		String_t* L_2;
		L_2 = Account_get_Address_m640C6E09FD63581B3444F408B2B7CBB7CAD2EFC5_inline(__this, NULL);
		RuntimeObject* L_3;
		L_3 = Account_get_TransactionManager_mBCAE205C985A72F40A3E014B54E9759432A5258C_inline(__this, NULL);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Nethereum.JsonRpc.Client.IClient Nethereum.RPC.TransactionManagers.ITransactionManager::get_Client() */, ITransactionManager_t93C7C810748D626CB18E930ADCB2A2571F8426A1_il2cpp_TypeInfo_var, L_3);
		InMemoryNonceService_t488B8489597A7B61513513D0D73434DA4C2692F6* L_5 = (InMemoryNonceService_t488B8489597A7B61513513D0D73434DA4C2692F6*)il2cpp_codegen_object_new(InMemoryNonceService_t488B8489597A7B61513513D0D73434DA4C2692F6_il2cpp_TypeInfo_var);
		InMemoryNonceService__ctor_mB36F1BC6D2C26E9FCD90F7586624E7C8D4059CB3(L_5, L_2, L_4, NULL);
		InMemoryNonceService_t488B8489597A7B61513513D0D73434DA4C2692F6* L_6 = L_5;
		V_0 = L_6;
		__this->____nonceService_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nonceService_0), (void*)L_6);
		RuntimeObject* L_7 = V_0;
		G_B2_0 = L_7;
	}

IL_0029:
	{
		return G_B2_0;
	}
}
// System.Void Nethereum.Web3.Accounts.Account::set_NonceService(Nethereum.RPC.NonceServices.INonceService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_set_NonceService_m64A57511E675ED626BED301021A240BC94DEBB36 (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->____nonceService_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nonceService_0), (void*)L_0);
		return;
	}
}
// Nethereum.RPC.AccountSigning.IAccountSigningService Nethereum.Web3.Accounts.Account::get_AccountSigningService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Account_get_AccountSigningService_m31E18D4155C8CBD34B1C34B0C2ADDA840FC5F5B6 (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAccountSigningServiceU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Nethereum.Web3.Accounts.Account::set_AccountSigningService(Nethereum.RPC.AccountSigning.IAccountSigningService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Account_set_AccountSigningService_mD744940F52AA986C72DE82670932459623476AAE (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CAccountSigningServiceU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAccountSigningServiceU3Ek__BackingField_6), (void*)L_0);
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
// System.Void Nethereum.Web3.Accounts.AccountOfflineTransactionSigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountOfflineTransactionSigner__ctor_mE3402592824BB4C3E136242456C514691F3867BB (AccountOfflineTransactionSigner_t27B036ED22C52CD7649744E61CD66C415EF8AF6E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LegacyTransactionSigner_t79F388EF4219EA442310B574B7BD4A666C6D0950_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction1559Signer_t3E012A0B96B3F9B430A630587E63BA0C39A48B53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		LegacyTransactionSigner_t79F388EF4219EA442310B574B7BD4A666C6D0950* L_0 = (LegacyTransactionSigner_t79F388EF4219EA442310B574B7BD4A666C6D0950*)il2cpp_codegen_object_new(LegacyTransactionSigner_t79F388EF4219EA442310B574B7BD4A666C6D0950_il2cpp_TypeInfo_var);
		LegacyTransactionSigner__ctor_m040C34FF004FAA94DA93D6531F11DCB0145391DA(L_0, NULL);
		__this->____legacyTransactionSigner_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____legacyTransactionSigner_0), (void*)L_0);
		Transaction1559Signer_t3E012A0B96B3F9B430A630587E63BA0C39A48B53* L_1 = (Transaction1559Signer_t3E012A0B96B3F9B430A630587E63BA0C39A48B53*)il2cpp_codegen_object_new(Transaction1559Signer_t3E012A0B96B3F9B430A630587E63BA0C39A48B53_il2cpp_TypeInfo_var);
		Transaction1559Signer__ctor_mA9CF9037DD13A904D753CE4FEF218E83663B6E9D(L_1, NULL);
		__this->____transaction1559Signer_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____transaction1559Signer_1), (void*)L_1);
		return;
	}
}
// System.String Nethereum.Web3.Accounts.AccountOfflineTransactionSigner::SignTransaction(Nethereum.Web3.Accounts.Account,Nethereum.RPC.Eth.DTOs.TransactionInput,System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccountOfflineTransactionSigner_SignTransaction_m57613942CB3553A61494F911182BE39C23D44DB9 (AccountOfflineTransactionSigner_t27B036ED22C52CD7649744E61CD66C415EF8AF6E* __this, Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* ___0_account, TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* ___1_transaction, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___2_overridingAccountChainId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1_op_Equality_mC3A87099DAFB6C109637B611558A892934121788_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1_op_Implicit_m1D51D1B0E1293F9D9BB9AB6AA705F2582826C75C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1_op_Inequality_mABC696C29299C847083DB8364B468AEB2428264F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m5D4AFF8301193978BFBA2F1470C7BCF86A8BCCAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeTransactionSigner_1_SignTransaction_m66EF2A1557991A8C3328D8123501872E497F1405_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 V_0;
	memset((&V_0), 0, sizeof(V_0));
	HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* V_1 = NULL;
	HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* V_2 = NULL;
	HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* V_3 = NULL;
	String_t* V_4 = NULL;
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_5;
	memset((&V_5), 0, sizeof(V_5));
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F V_6;
	memset((&V_6), 0, sizeof(V_6));
	Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* V_7 = NULL;
	HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* V_8 = NULL;
	HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* G_B12_0 = NULL;
	HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* G_B11_0 = NULL;
	{
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_0 = ___1_transaction;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral840D94CDC6A5AD28D5CB4F7047FAB75458D55B82)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccountOfflineTransactionSigner_SignTransaction_m57613942CB3553A61494F911182BE39C23D44DB9_RuntimeMethod_var)));
	}

IL_000e:
	{
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_2 = ___1_transaction;
		String_t* L_3;
		L_3 = CallInput_get_From_m0E827978D276DECD603396D4AC4369ACE95C601B(L_2, NULL);
		bool L_4;
		L_4 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_3, NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_5 = ___1_transaction;
		Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* L_6 = ___0_account;
		String_t* L_7;
		L_7 = Account_get_Address_m640C6E09FD63581B3444F408B2B7CBB7CAD2EFC5_inline(L_6, NULL);
		CallInput_set_From_m2774FB54F7108125227102BBFCAF284439023064_inline(L_5, L_7, NULL);
		goto IL_0047;
	}

IL_0029:
	{
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_8 = ___1_transaction;
		String_t* L_9;
		L_9 = CallInput_get_From_m0E827978D276DECD603396D4AC4369ACE95C601B(L_8, NULL);
		Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* L_10 = ___0_account;
		String_t* L_11;
		L_11 = Account_get_Address_m640C6E09FD63581B3444F408B2B7CBB7CAD2EFC5_inline(L_10, NULL);
		bool L_12;
		L_12 = AddressExtensions_IsTheSameAddress_m5366CF742A45B864A6D59F8040E77A7927A4B831(L_9, L_11, NULL);
		if (L_12)
		{
			goto IL_0047;
		}
	}
	{
		Exception_t* L_13 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7E4E5160611A8B06B451FECA4446AF46296AF761)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccountOfflineTransactionSigner_SignTransaction_m57613942CB3553A61494F911182BE39C23D44DB9_RuntimeMethod_var)));
	}

IL_0047:
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_14 = ___2_overridingAccountChainId;
		V_0 = L_14;
		bool L_15;
		L_15 = Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_inline((&V_0), Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_0059;
		}
	}
	{
		Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* L_16 = ___0_account;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_17;
		L_17 = Account_get_ChainId_m9CE472C7BD92D76DC225D3EF96A589DCBF34A360_inline(L_16, NULL);
		V_0 = L_17;
	}

IL_0059:
	{
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_18 = ___1_transaction;
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_19;
		L_19 = TransactionInput_get_Nonce_m6896F658F684EE32D0082439E84AC3B132C8AAF0_inline(L_18, NULL);
		V_1 = L_19;
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_20 = V_1;
		bool L_21;
		L_21 = HexRPCType_1_op_Equality_mC3A87099DAFB6C109637B611558A892934121788(L_20, (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0*)NULL, HexRPCType_1_op_Equality_mC3A87099DAFB6C109637B611558A892934121788_RuntimeMethod_var);
		if (!L_21)
		{
			goto IL_0079;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_22 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral840D94CDC6A5AD28D5CB4F7047FAB75458D55B82)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral700F43A4ACFA6B86019FC4C177DFFC4EFF2D87AA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccountOfflineTransactionSigner_SignTransaction_m57613942CB3553A61494F911182BE39C23D44DB9_RuntimeMethod_var)));
	}

IL_0079:
	{
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_23 = ___1_transaction;
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_24;
		L_24 = CallInput_get_Gas_m09A9CF512CFABF7076567743AACD5877595F681C_inline(L_23, NULL);
		V_2 = L_24;
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_25 = ___1_transaction;
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_26;
		L_26 = CallInput_get_Value_m28727CA48965FA13A86086553D7865768C7CF2F4_inline(L_25, NULL);
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_27 = L_26;
		G_B11_0 = L_27;
		if (L_27)
		{
			G_B12_0 = L_27;
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_28;
		L_28 = BigInteger_op_Implicit_m0E4A1C7B1F24EB10AE57608F2EBA5B127006D850(0, NULL);
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_29 = (HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811*)il2cpp_codegen_object_new(HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811_il2cpp_TypeInfo_var);
		HexBigInteger__ctor_mE96FF1F49C3B1DF037485FBCEBEB27707DA444ED(L_29, L_28, NULL);
		G_B12_0 = L_29;
	}

IL_0095:
	{
		V_3 = G_B12_0;
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_30 = ___1_transaction;
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_31;
		L_31 = CallInput_get_Type_m5AC7217846BC3240AB103B0C45DF168662ADF311_inline(L_30, NULL);
		bool L_32;
		L_32 = HexRPCType_1_op_Inequality_mABC696C29299C847083DB8364B468AEB2428264F(L_31, (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0*)NULL, HexRPCType_1_op_Inequality_mABC696C29299C847083DB8364B468AEB2428264F_RuntimeMethod_var);
		if (!L_32)
		{
			goto IL_0172;
		}
	}
	{
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_33 = ___1_transaction;
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_34;
		L_34 = CallInput_get_Type_m5AC7217846BC3240AB103B0C45DF168662ADF311_inline(L_33, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_35;
		L_35 = HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D(L_34, HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_RuntimeMethod_var);
		uint8_t L_36;
		L_36 = TransactionTypeExtensions_AsByte_m6F28DCF90590ABCD9F4A1FC31047D7EDAD3AE4A1(2, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = BigInteger_op_Equality_mC3E68AE3326F7FAC3441A5618537BFB24CD15248(L_35, ((int64_t)(uint64_t)L_36), NULL);
		if (!L_37)
		{
			goto IL_0172;
		}
	}
	{
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_38 = ___1_transaction;
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_39;
		L_39 = CallInput_get_MaxPriorityFeePerGas_m76DC2A7004C6DB0487342B98D71A1B519F2AA655_inline(L_38, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_40;
		L_40 = HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D(L_39, HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_RuntimeMethod_var);
		V_5 = L_40;
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_41 = ___1_transaction;
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_42;
		L_42 = CallInput_get_MaxFeePerGas_m7F2F78062F61F145F95095D15F4D2FB8B130E58E_inline(L_41, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_43;
		L_43 = HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D(L_42, HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_RuntimeMethod_var);
		V_6 = L_43;
		bool L_44;
		L_44 = Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_inline((&V_0), Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		if (L_44)
		{
			goto IL_00f1;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_45 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_45, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3300A4B1A0AB228765EF483986A3BC9AF3D4E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccountOfflineTransactionSigner_SignTransaction_m57613942CB3553A61494F911182BE39C23D44DB9_RuntimeMethod_var)));
	}

IL_00f1:
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_46;
		L_46 = Nullable_1_get_Value_m5D4AFF8301193978BFBA2F1470C7BCF86A8BCCAE((&V_0), Nullable_1_get_Value_m5D4AFF8301193978BFBA2F1470C7BCF86A8BCCAE_RuntimeMethod_var);
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_47 = V_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_48;
		L_48 = HexRPCType_1_op_Implicit_m1D51D1B0E1293F9D9BB9AB6AA705F2582826C75C(L_47, HexRPCType_1_op_Implicit_m1D51D1B0E1293F9D9BB9AB6AA705F2582826C75C_RuntimeMethod_var);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138((&L_49), L_48, /*hidden argument*/Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_RuntimeMethod_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_50 = V_5;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138((&L_51), L_50, /*hidden argument*/Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_RuntimeMethod_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_52 = V_6;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138((&L_53), L_52, /*hidden argument*/Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_RuntimeMethod_var);
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_54 = V_2;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_55;
		L_55 = HexRPCType_1_op_Implicit_m1D51D1B0E1293F9D9BB9AB6AA705F2582826C75C(L_54, HexRPCType_1_op_Implicit_m1D51D1B0E1293F9D9BB9AB6AA705F2582826C75C_RuntimeMethod_var);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_56;
		memset((&L_56), 0, sizeof(L_56));
		Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138((&L_56), L_55, /*hidden argument*/Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_RuntimeMethod_var);
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_57 = ___1_transaction;
		String_t* L_58;
		L_58 = CallInput_get_To_mE564AA7B4D78B890CF0407ED7257627DCD494EBB(L_57, NULL);
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_59 = V_3;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_60;
		L_60 = HexRPCType_1_op_Implicit_m1D51D1B0E1293F9D9BB9AB6AA705F2582826C75C(L_59, HexRPCType_1_op_Implicit_m1D51D1B0E1293F9D9BB9AB6AA705F2582826C75C_RuntimeMethod_var);
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138((&L_61), L_60, /*hidden argument*/Nullable_1__ctor_m375B97C05383FFB408CA1297692E1DACD721C138_RuntimeMethod_var);
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_62 = ___1_transaction;
		String_t* L_63;
		L_63 = CallInput_get_Data_mF97203DF5052D5FB6436FDECE1D9E414DA3F9D2D(L_62, NULL);
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_64 = ___1_transaction;
		List_1_t4E11F5D2075471CC5269E680568592D8D061C750* L_65;
		L_65 = TransactionInput_get_AccessList_m451849F30B6AF12301B961B43B901E5E923C371F_inline(L_64, NULL);
		List_1_t7727649A9660B1DC937C1B462F4494C77D4F8ABC* L_66;
		L_66 = AccessListRPCMapper_ToSignerAccessListItemArray_m7EB72772CC534F23E8A1C54CEE69F5515D529C5A(L_65, NULL);
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_67 = (Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17*)il2cpp_codegen_object_new(Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17_il2cpp_TypeInfo_var);
		Transaction1559__ctor_mE0EFA1A36A81052017B7A5714C6B53E8836DC962(L_67, L_46, L_49, L_51, L_53, L_56, L_58, L_61, L_63, L_66, NULL);
		V_7 = L_67;
		Transaction1559Signer_t3E012A0B96B3F9B430A630587E63BA0C39A48B53* L_68 = __this->____transaction1559Signer_1;
		Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* L_69 = ___0_account;
		String_t* L_70;
		L_70 = Account_get_PrivateKey_mD9DC77BD871288862E657C76E141ED1642A474D5_inline(L_69, NULL);
		EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* L_71 = (EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A*)il2cpp_codegen_object_new(EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A_il2cpp_TypeInfo_var);
		EthECKey__ctor_mE4059EFF16EAD226A12FDEB387BE3C4ABCDD5D11(L_71, L_70, NULL);
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_72 = V_7;
		String_t* L_73;
		L_73 = TypeTransactionSigner_1_SignTransaction_m66EF2A1557991A8C3328D8123501872E497F1405(L_68, L_71, L_72, TypeTransactionSigner_1_SignTransaction_m66EF2A1557991A8C3328D8123501872E497F1405_RuntimeMethod_var);
		Transaction1559_t864BB56C9C305CF06F46ABA5BD1C50F1B983FF17* L_74 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75;
		L_75 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(5 /* System.Byte[] Nethereum.Model.SignedTransaction::GetRLPEncoded() */, L_74);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_76;
		L_76 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_75, (bool)0, NULL);
		V_4 = L_76;
		goto IL_01fc;
	}

IL_0172:
	{
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_77 = ___1_transaction;
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_78;
		L_78 = CallInput_get_GasPrice_mCB6E5240F55080A0B4F7B4E1067495CB83BA527B_inline(L_77, NULL);
		V_8 = L_78;
		bool L_79;
		L_79 = Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_inline((&V_0), Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		if (L_79)
		{
			goto IL_01bd;
		}
	}
	{
		LegacyTransactionSigner_t79F388EF4219EA442310B574B7BD4A666C6D0950* L_80 = __this->____legacyTransactionSigner_0;
		Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* L_81 = ___0_account;
		String_t* L_82;
		L_82 = Account_get_PrivateKey_mD9DC77BD871288862E657C76E141ED1642A474D5_inline(L_81, NULL);
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_83 = ___1_transaction;
		String_t* L_84;
		L_84 = CallInput_get_To_mE564AA7B4D78B890CF0407ED7257627DCD494EBB(L_83, NULL);
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_85 = V_3;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_86;
		L_86 = HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D(L_85, HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_RuntimeMethod_var);
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_87 = V_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_88;
		L_88 = HexRPCType_1_op_Implicit_m1D51D1B0E1293F9D9BB9AB6AA705F2582826C75C(L_87, HexRPCType_1_op_Implicit_m1D51D1B0E1293F9D9BB9AB6AA705F2582826C75C_RuntimeMethod_var);
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_89 = V_8;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_90;
		L_90 = HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D(L_89, HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_RuntimeMethod_var);
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_91 = V_2;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_92;
		L_92 = HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D(L_91, HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_RuntimeMethod_var);
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_93 = ___1_transaction;
		String_t* L_94;
		L_94 = CallInput_get_Data_mF97203DF5052D5FB6436FDECE1D9E414DA3F9D2D(L_93, NULL);
		String_t* L_95;
		L_95 = LegacyTransactionSigner_SignTransaction_m493AB802D55FFCF302B75441E32C572FBF1E9B17(L_80, L_82, L_84, L_86, L_88, L_90, L_92, L_94, NULL);
		V_4 = L_95;
		goto IL_01fc;
	}

IL_01bd:
	{
		LegacyTransactionSigner_t79F388EF4219EA442310B574B7BD4A666C6D0950* L_96 = __this->____legacyTransactionSigner_0;
		Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* L_97 = ___0_account;
		String_t* L_98;
		L_98 = Account_get_PrivateKey_mD9DC77BD871288862E657C76E141ED1642A474D5_inline(L_97, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_99;
		L_99 = Nullable_1_get_Value_m5D4AFF8301193978BFBA2F1470C7BCF86A8BCCAE((&V_0), Nullable_1_get_Value_m5D4AFF8301193978BFBA2F1470C7BCF86A8BCCAE_RuntimeMethod_var);
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_100 = ___1_transaction;
		String_t* L_101;
		L_101 = CallInput_get_To_mE564AA7B4D78B890CF0407ED7257627DCD494EBB(L_100, NULL);
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_102 = V_3;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_103;
		L_103 = HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D(L_102, HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_RuntimeMethod_var);
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_104 = V_1;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_105;
		L_105 = HexRPCType_1_op_Implicit_m1D51D1B0E1293F9D9BB9AB6AA705F2582826C75C(L_104, HexRPCType_1_op_Implicit_m1D51D1B0E1293F9D9BB9AB6AA705F2582826C75C_RuntimeMethod_var);
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_106 = V_8;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_107;
		L_107 = HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D(L_106, HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_RuntimeMethod_var);
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_108 = V_2;
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_109;
		L_109 = HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D(L_108, HexRPCType_1_get_Value_m31A3180F85285A38ED4FCF3AC6598BEB46BAB23D_RuntimeMethod_var);
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_110 = ___1_transaction;
		String_t* L_111;
		L_111 = CallInput_get_Data_mF97203DF5052D5FB6436FDECE1D9E414DA3F9D2D(L_110, NULL);
		String_t* L_112;
		L_112 = LegacyTransactionSigner_SignTransaction_m8C14099903324E61BE044ACD8C7EFB335AC246C9(L_96, L_98, L_99, L_101, L_103, L_105, L_107, L_109, L_111, NULL);
		V_4 = L_112;
	}

IL_01fc:
	{
		String_t* L_113 = V_4;
		return L_113;
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
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager::.ctor(Nethereum.JsonRpc.Client.IClient,Nethereum.Web3.Accounts.Account,System.Nullable`1<System.Numerics.BigInteger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountSignerTransactionManager__ctor_mB493E92EF6ECAC12838043088EF0CB24D35DB9D7 (AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* __this, RuntimeObject* ___0_rpcClient, Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* ___1_account, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___2_overridingAccountChainId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccountOfflineTransactionSigner_t27B036ED22C52CD7649744E61CD66C415EF8AF6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* G_B5_0 = NULL;
	AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* G_B5_1 = NULL;
	Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* G_B4_0 = NULL;
	AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* G_B4_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ((SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var))->___DEFAULT_GAS_LIMIT_3;
		__this->___U3CDefaultGasU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CDefaultGasU3Ek__BackingField_12))->____bits_7), (void*)NULL);
		TransactionManagerBase__ctor_m914B98A4962785C7D826655DDB15B9618A7FD377(__this, NULL);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_inline((&___2_overridingAccountChainId), Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* L_2 = ___1_account;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_3;
		L_3 = Account_get_ChainId_m9CE472C7BD92D76DC225D3EF96A589DCBF34A360_inline(L_2, NULL);
		TransactionManagerBase_set_ChainId_m3F1421151360D50ACD69BD373C205A5E1565434E_inline(__this, L_3, NULL);
		goto IL_002f;
	}

IL_0028:
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_4 = ___2_overridingAccountChainId;
		TransactionManagerBase_set_ChainId_m3F1421151360D50ACD69BD373C205A5E1565434E_inline(__this, L_4, NULL);
	}

IL_002f:
	{
		Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* L_5 = ___1_account;
		Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* L_6 = L_5;
		G_B4_0 = L_6;
		G_B4_1 = __this;
		if (L_6)
		{
			G_B5_0 = L_6;
			G_B5_1 = __this;
			goto IL_0040;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA96CA46B70C016F40F353768035703DBC688F153)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccountSignerTransactionManager__ctor_mB493E92EF6ECAC12838043088EF0CB24D35DB9D7_RuntimeMethod_var)));
	}

IL_0040:
	{
		TransactionManagerBase_set_Account_mC173C6D17C15593909D309673E74BAB9D3E237F1_inline(G_B5_1, G_B5_0, NULL);
		RuntimeObject* L_8 = ___0_rpcClient;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(16 /* System.Void Nethereum.RPC.TransactionManagers.TransactionManagerBase::set_Client(Nethereum.JsonRpc.Client.IClient) */, __this, L_8);
		AccountOfflineTransactionSigner_t27B036ED22C52CD7649744E61CD66C415EF8AF6E* L_9 = (AccountOfflineTransactionSigner_t27B036ED22C52CD7649744E61CD66C415EF8AF6E*)il2cpp_codegen_object_new(AccountOfflineTransactionSigner_t27B036ED22C52CD7649744E61CD66C415EF8AF6E_il2cpp_TypeInfo_var);
		AccountOfflineTransactionSigner__ctor_mE3402592824BB4C3E136242456C514691F3867BB(L_9, NULL);
		__this->____transactionSigner_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____transactionSigner_11), (void*)L_9);
		return;
	}
}
// System.Numerics.BigInteger Nethereum.Web3.Accounts.AccountSignerTransactionManager::get_DefaultGas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F AccountSignerTransactionManager_get_DefaultGas_m78B4B03F379223D689814D6C6CA61F693E03C6C9 (AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = __this->___U3CDefaultGasU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager::set_DefaultGas(System.Numerics.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AccountSignerTransactionManager_set_DefaultGas_m601806CCD127A84CC201A5F89ED1FC4A7DD106B7 (AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* __this, BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___0_value, const RuntimeMethod* method) 
{
	{
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_0 = ___0_value;
		__this->___U3CDefaultGasU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CDefaultGasU3Ek__BackingField_12))->____bits_7), (void*)NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager::SendTransactionAsync(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* AccountSignerTransactionManager_SendTransactionAsync_m2E5E57CC38F2B987C5A4274818009E990AF5A0B5 (AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* __this, TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* ___0_transactionInput, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_m912144C2465BBE9A217097BD9DD9379DEB5DF381_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D(AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D_RuntimeMethod_var);
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
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_1 = ___0_transactionInput;
		(&V_0)->___transactionInput_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___transactionInput_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_2 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_m912144C2465BBE9A217097BD9DD9379DEB5DF381(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_m912144C2465BBE9A217097BD9DD9379DEB5DF381_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_3 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E(L_3, AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager::SignTransactionAsync(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* AccountSignerTransactionManager_SignTransactionAsync_mF54371279D364AD3CE881EBCD146636BD1656F0A (AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* __this, TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* ___0_transaction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_mD283710835D331ECE1B7FDE8879DB67FCDE29A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D(AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D_RuntimeMethod_var);
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
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_1 = ___0_transaction;
		(&V_0)->___transaction_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___transaction_3), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_2 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_mD283710835D331ECE1B7FDE8879DB67FCDE29A77(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_mD283710835D331ECE1B7FDE8879DB67FCDE29A77_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_3 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E(L_3, AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var);
		return L_4;
	}
}
// System.String Nethereum.Web3.Accounts.AccountSignerTransactionManager::SignTransaction(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AccountSignerTransactionManager_SignTransaction_mA9757FD32C153C6200D3EFC8907D0F5A2A6DA3C7 (AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* __this, TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* ___0_transaction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_0 = ___0_transaction;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral840D94CDC6A5AD28D5CB4F7047FAB75458D55B82)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AccountSignerTransactionManager_SignTransaction_mA9757FD32C153C6200D3EFC8907D0F5A2A6DA3C7_RuntimeMethod_var)));
	}

IL_000e:
	{
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_2 = ___0_transaction;
		TransactionManagerBase_SetDefaultGasIfNotSet_m5AEC162C02F9801C9A1EDD4E5AA64264A56D67A9(__this, L_2, NULL);
		AccountOfflineTransactionSigner_t27B036ED22C52CD7649744E61CD66C415EF8AF6E* L_3 = __this->____transactionSigner_11;
		RuntimeObject* L_4;
		L_4 = TransactionManagerBase_get_Account_m723835CC7E2DCA78E31EC272E55A543B5EF333F9_inline(__this, NULL);
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_5 = ___0_transaction;
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_6;
		L_6 = TransactionManagerBase_get_ChainId_m3872C1FB94230DD60C6FDC17995CE2A069F694AB_inline(__this, NULL);
		String_t* L_7;
		L_7 = AccountOfflineTransactionSigner_SignTransaction_m57613942CB3553A61494F911182BE39C23D44DB9(L_3, ((Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D*)CastclassClass((RuntimeObject*)L_4, Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D_il2cpp_TypeInfo_var)), L_5, L_6, NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task`1<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager::SignTransactionRetrievingNextNonceAsync(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* AccountSignerTransactionManager_SignTransactionRetrievingNextNonceAsync_mCFA6B101B49768964B8A1985268190FCF30960AB (AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* __this, TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* ___0_transaction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m4D9C081FB8940E6A6FA61D3CB0277C9BDB85BB52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D(AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D_RuntimeMethod_var);
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
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_1 = ___0_transaction;
		(&V_0)->___transaction_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___transaction_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_2 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m4D9C081FB8940E6A6FA61D3CB0277C9BDB85BB52(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m4D9C081FB8940E6A6FA61D3CB0277C9BDB85BB52_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_3 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E(L_3, AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<Nethereum.Hex.HexTypes.HexBigInteger> Nethereum.Web3.Accounts.AccountSignerTransactionManager::GetNonceAsync(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t090886E71122196EFD9A94467E467FC25376F7AE* AccountSignerTransactionManager_GetNonceAsync_m27A3478C5E6F5681D7AACE75147C76A34B58BEB4 (AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* __this, TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* ___0_transaction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m310E3082F896A2EA219B90D85FD5DEB882BEF0A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462_mDEF6F203051BDD97886ED15AF075A721EB26E405_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m78C3431C4BFC0F5D4FF57955FC9B827B8442BBA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m310E3082F896A2EA219B90D85FD5DEB882BEF0A2(AsyncTaskMethodBuilder_1_Create_m310E3082F896A2EA219B90D85FD5DEB882BEF0A2_RuntimeMethod_var);
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
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_1 = ___0_transaction;
		(&V_0)->___transaction_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___transaction_3), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314* L_2 = (AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462_mDEF6F203051BDD97886ED15AF075A721EB26E405(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462_mDEF6F203051BDD97886ED15AF075A721EB26E405_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314* L_3 = (AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t090886E71122196EFD9A94467E467FC25376F7AE* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m78C3431C4BFC0F5D4FF57955FC9B827B8442BBA8(L_3, AsyncTaskMethodBuilder_1_get_Task_m78C3431C4BFC0F5D4FF57955FC9B827B8442BBA8_RuntimeMethod_var);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<System.String> Nethereum.Web3.Accounts.AccountSignerTransactionManager::SignAndSendTransactionAsync(Nethereum.RPC.Eth.DTOs.TransactionInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* AccountSignerTransactionManager_SignAndSendTransactionAsync_m91A636543091D1AFC1CF5D246480DBC8B34E1578 (AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* __this, TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* ___0_transaction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B_mB6F5AC2A77CC19739679462165A4E5DBC8C27FCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D(AsyncTaskMethodBuilder_1_Create_mDEA9352DE851695421F6488EC71FDD8FA221422D_RuntimeMethod_var);
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
		TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_1 = ___0_transaction;
		(&V_0)->___transaction_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___transaction_3), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_2 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B_mB6F5AC2A77CC19739679462165A4E5DBC8C27FCD(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B_mB6F5AC2A77CC19739679462165A4E5DBC8C27FCD_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_3 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E(L_3, AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var);
		return L_4;
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
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNonceAsyncU3Ed__12_MoveNext_mC7141CD258AA084F34534C0262923162B97F741F (U3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195_TisU3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462_m96F2AF80C7A8572186D18D460581A68BF3488CA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m0DA781182F7BDD715BB40C4EB5468D33105B9390_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m25128B609BEAC7C193798013688B89F33267E731_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m8711E39129F29F95D6AEC02DF7D90CB31E10FF00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m4368644F058B59DD4E18EB8352DD2BF895C2E86C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexRPCType_1_op_Equality_mC3A87099DAFB6C109637B611558A892934121788_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAccount_t2D498E1E6AF11CFDB79F07A7D78532E396F852D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INonceService_tB8D5E1FA020A2292091853A4C76384B94AFC7F6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InMemoryNonceService_t488B8489597A7B61513513D0D73434DA4C2692F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m342E8ED9121C0E690F5A24C7B1CAF4A2B06A389A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* V_1 = NULL;
	HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* V_2 = NULL;
	HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* V_3 = NULL;
	ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_1_t54BF6E9D9C600508578354F7A21369CA90DF263F V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_1 = __this->___U3CU3E4__this_2;
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
			AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_3 = V_1;
			RuntimeObject* L_4;
			L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(15 /* Nethereum.JsonRpc.Client.IClient Nethereum.RPC.TransactionManagers.TransactionManagerBase::get_Client() */, L_3);
			if (L_4)
			{
				goto IL_0027_1;
			}
		}
		{
			NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_5 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
			NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27E3B43A48A6965D728D3AF11F4F01BE2BDE92C2)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetNonceAsyncU3Ed__12_MoveNext_mC7141CD258AA084F34534C0262923162B97F741F_RuntimeMethod_var)));
		}

IL_0027_1:
		{
			TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_6 = __this->___transaction_3;
			if (L_6)
			{
				goto IL_003a_1;
			}
		}
		{
			ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
			ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral840D94CDC6A5AD28D5CB4F7047FAB75458D55B82)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetNonceAsyncU3Ed__12_MoveNext_mC7141CD258AA084F34534C0262923162B97F741F_RuntimeMethod_var)));
		}

IL_003a_1:
		{
			TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_8 = __this->___transaction_3;
			HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_9;
			L_9 = TransactionInput_get_Nonce_m6896F658F684EE32D0082439E84AC3B132C8AAF0_inline(L_8, NULL);
			V_3 = L_9;
			HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_10 = V_3;
			bool L_11;
			L_11 = HexRPCType_1_op_Equality_mC3A87099DAFB6C109637B611558A892934121788(L_10, (HexRPCType_1_t0AEB726E19D5EA8BB4CC3B441C661B409A663DE0*)NULL, HexRPCType_1_op_Equality_mC3A87099DAFB6C109637B611558A892934121788_RuntimeMethod_var);
			if (!L_11)
			{
				goto IL_0106_1;
			}
		}
		{
			AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_12 = V_1;
			RuntimeObject* L_13;
			L_13 = TransactionManagerBase_get_Account_m723835CC7E2DCA78E31EC272E55A543B5EF333F9_inline(L_12, NULL);
			RuntimeObject* L_14;
			L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Nethereum.RPC.NonceServices.INonceService Nethereum.RPC.Accounts.IAccount::get_NonceService() */, IAccount_t2D498E1E6AF11CFDB79F07A7D78532E396F852D0_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0080_1;
			}
		}
		{
			AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_15 = V_1;
			RuntimeObject* L_16;
			L_16 = TransactionManagerBase_get_Account_m723835CC7E2DCA78E31EC272E55A543B5EF333F9_inline(L_15, NULL);
			AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_17 = V_1;
			RuntimeObject* L_18;
			L_18 = TransactionManagerBase_get_Account_m723835CC7E2DCA78E31EC272E55A543B5EF333F9_inline(L_17, NULL);
			String_t* L_19;
			L_19 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Nethereum.RPC.Accounts.IAccount::get_Address() */, IAccount_t2D498E1E6AF11CFDB79F07A7D78532E396F852D0_il2cpp_TypeInfo_var, L_18);
			AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_20 = V_1;
			RuntimeObject* L_21;
			L_21 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(15 /* Nethereum.JsonRpc.Client.IClient Nethereum.RPC.TransactionManagers.TransactionManagerBase::get_Client() */, L_20);
			InMemoryNonceService_t488B8489597A7B61513513D0D73434DA4C2692F6* L_22 = (InMemoryNonceService_t488B8489597A7B61513513D0D73434DA4C2692F6*)il2cpp_codegen_object_new(InMemoryNonceService_t488B8489597A7B61513513D0D73434DA4C2692F6_il2cpp_TypeInfo_var);
			InMemoryNonceService__ctor_mB36F1BC6D2C26E9FCD90F7586624E7C8D4059CB3(L_22, L_19, L_21, NULL);
			InterfaceActionInvoker1< RuntimeObject* >::Invoke(3 /* System.Void Nethereum.RPC.Accounts.IAccount::set_NonceService(Nethereum.RPC.NonceServices.INonceService) */, IAccount_t2D498E1E6AF11CFDB79F07A7D78532E396F852D0_il2cpp_TypeInfo_var, L_16, L_22);
		}

IL_0080_1:
		{
			AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_23 = V_1;
			RuntimeObject* L_24;
			L_24 = TransactionManagerBase_get_Account_m723835CC7E2DCA78E31EC272E55A543B5EF333F9_inline(L_23, NULL);
			RuntimeObject* L_25;
			L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Nethereum.RPC.NonceServices.INonceService Nethereum.RPC.Accounts.IAccount::get_NonceService() */, IAccount_t2D498E1E6AF11CFDB79F07A7D78532E396F852D0_il2cpp_TypeInfo_var, L_24);
			AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_26 = V_1;
			RuntimeObject* L_27;
			L_27 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(15 /* Nethereum.JsonRpc.Client.IClient Nethereum.RPC.TransactionManagers.TransactionManagerBase::get_Client() */, L_26);
			InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Nethereum.RPC.NonceServices.INonceService::set_Client(Nethereum.JsonRpc.Client.IClient) */, INonceService_tB8D5E1FA020A2292091853A4C76384B94AFC7F6D_il2cpp_TypeInfo_var, L_25, L_27);
			AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_28 = V_1;
			RuntimeObject* L_29;
			L_29 = TransactionManagerBase_get_Account_m723835CC7E2DCA78E31EC272E55A543B5EF333F9_inline(L_28, NULL);
			RuntimeObject* L_30;
			L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Nethereum.RPC.NonceServices.INonceService Nethereum.RPC.Accounts.IAccount::get_NonceService() */, IAccount_t2D498E1E6AF11CFDB79F07A7D78532E396F852D0_il2cpp_TypeInfo_var, L_29);
			Task_1_t090886E71122196EFD9A94467E467FC25376F7AE* L_31;
			L_31 = InterfaceFuncInvoker0< Task_1_t090886E71122196EFD9A94467E467FC25376F7AE* >::Invoke(1 /* System.Threading.Tasks.Task`1<Nethereum.Hex.HexTypes.HexBigInteger> Nethereum.RPC.NonceServices.INonceService::GetNextNonceAsync() */, INonceService_tB8D5E1FA020A2292091853A4C76384B94AFC7F6D_il2cpp_TypeInfo_var, L_30);
			ConfiguredTaskAwaitable_1_t54BF6E9D9C600508578354F7A21369CA90DF263F L_32;
			L_32 = Task_1_ConfigureAwait_m342E8ED9121C0E690F5A24C7B1CAF4A2B06A389A(L_31, (bool)0, Task_1_ConfigureAwait_m342E8ED9121C0E690F5A24C7B1CAF4A2B06A389A_RuntimeMethod_var);
			V_5 = L_32;
			ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195 L_33;
			L_33 = ConfiguredTaskAwaitable_1_GetAwaiter_m25128B609BEAC7C193798013688B89F33267E731_inline((&V_5), ConfiguredTaskAwaitable_1_GetAwaiter_m25128B609BEAC7C193798013688B89F33267E731_RuntimeMethod_var);
			V_4 = L_33;
			bool L_34;
			L_34 = ConfiguredTaskAwaiter_get_IsCompleted_m4368644F058B59DD4E18EB8352DD2BF895C2E86C((&V_4), ConfiguredTaskAwaiter_get_IsCompleted_m4368644F058B59DD4E18EB8352DD2BF895C2E86C_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_00fe_1;
			}
		}
		{
			int32_t L_35 = 0;
			V_0 = L_35;
			__this->___U3CU3E1__state_0 = L_35;
			ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195 L_36 = V_4;
			__this->___U3CU3Eu__1_4 = L_36;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314* L_37 = (AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195_TisU3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462_m96F2AF80C7A8572186D18D460581A68BF3488CA0(L_37, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195_TisU3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462_m96F2AF80C7A8572186D18D460581A68BF3488CA0_RuntimeMethod_var);
			goto IL_0137;
		}

IL_00e1_1:
		{
			ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195 L_38 = __this->___U3CU3Eu__1_4;
			V_4 = L_38;
			ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195* L_39 = (ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195*)(&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_39, sizeof(ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195));
			int32_t L_40 = (-1);
			V_0 = L_40;
			__this->___U3CU3E1__state_0 = L_40;
		}

IL_00fe_1:
		{
			HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_41;
			L_41 = ConfiguredTaskAwaiter_GetResult_m8711E39129F29F95D6AEC02DF7D90CB31E10FF00((&V_4), ConfiguredTaskAwaiter_GetResult_m8711E39129F29F95D6AEC02DF7D90CB31E10FF00_RuntimeMethod_var);
			V_3 = L_41;
		}

IL_0106_1:
		{
			HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_42 = V_3;
			V_2 = L_42;
			goto IL_0123;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_010a;
		}
		throw e;
	}

CATCH_010a:
	{// begin catch(System.Exception)
		Exception_t* L_43 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_6 = L_43;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314* L_44 = (AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_45 = V_6;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_1_SetException_mD776015CBCD1AEBA1B0265663096BFCCEB1D0505(L_44, L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mD776015CBCD1AEBA1B0265663096BFCCEB1D0505_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0137;
	}// end catch (depth: 1)

IL_0123:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314* L_46 = (AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314*)(&__this->___U3CU3Et__builder_1);
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_47 = V_2;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetResult_m0DA781182F7BDD715BB40C4EB5468D33105B9390(L_46, L_47, AsyncTaskMethodBuilder_1_SetResult_m0DA781182F7BDD715BB40C4EB5468D33105B9390_RuntimeMethod_var);
	}

IL_0137:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetNonceAsyncU3Ed__12_MoveNext_mC7141CD258AA084F34534C0262923162B97F741F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462*>(__this + _offset);
	U3CGetNonceAsyncU3Ed__12_MoveNext_mC7141CD258AA084F34534C0262923162B97F741F(_thisAdjusted, method);
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<GetNonceAsync>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetNonceAsyncU3Ed__12_SetStateMachine_mB0CBD5F4FAA0DBF7DAF29034A28C43E8B610FFD2 (U3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mF4666048C1F1ED8CD3297DCB6F730CC548B7691D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314* L_0 = (AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t30CB83ADD53C4B22CD6E361EE102F9A984ED6314_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetStateMachine_mF4666048C1F1ED8CD3297DCB6F730CC548B7691D(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mF4666048C1F1ED8CD3297DCB6F730CC548B7691D_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetNonceAsyncU3Ed__12_SetStateMachine_mB0CBD5F4FAA0DBF7DAF29034A28C43E8B610FFD2_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetNonceAsyncU3Ed__12_t1A4069E62CA2D0C60C734947C3EB784648C5B462*>(__this + _offset);
	U3CGetNonceAsyncU3Ed__12_SetStateMachine_mB0CBD5F4FAA0DBF7DAF29034A28C43E8B610FFD2(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SendTransactionAsync>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendTransactionAsyncU3Ed__8_MoveNext_mBDE405890CA8396D1A499E8F9FDA0543DD0D5626 (U3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_mE24AAA4440D80FDCEB1199CD5D38C4FC817D63CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_mD8408ADFF5DF9937F0596EC3FFBD3BBDEFEBF79B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* V_1 = NULL;
	String_t* V_2 = NULL;
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006d_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00d7_1;
			}
		}
		{
			TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_4 = __this->___transactionInput_2;
			if (L_4)
			{
				goto IL_002b_1;
			}
		}
		{
			ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
			ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6AFF7E3020187A288091C0A65BD9980824997BF4)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendTransactionAsyncU3Ed__8_MoveNext_mBDE405890CA8396D1A499E8F9FDA0543DD0D5626_RuntimeMethod_var)));
		}

IL_002b_1:
		{
			AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_6 = V_1;
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
			L_7 = TransactionManagerBase_EnsureChainIdAndChainFeatureIsSetAsync_m81211D12CE9C761EB2EB013251AF1D3FAB8DF07D(L_6, NULL);
			ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_8;
			L_8 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_7, (bool)0, NULL);
			V_4 = L_8;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_9;
			L_9 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_4), NULL);
			V_3 = L_9;
			bool L_10;
			L_10 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_3), NULL);
			if (L_10)
			{
				goto IL_0089_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_12 = V_3;
			__this->___U3CU3Eu__1_4 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_13 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_mD8408ADFF5DF9937F0596EC3FFBD3BBDEFEBF79B(L_13, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_mD8408ADFF5DF9937F0596EC3FFBD3BBDEFEBF79B_RuntimeMethod_var);
			goto IL_012b;
		}

IL_006d_1:
		{
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_14 = __this->___U3CU3Eu__1_4;
			V_3 = L_14;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_15 = (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*)(&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_15, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
		}

IL_0089_1:
		{
			ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_3), NULL);
			AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_17 = V_1;
			TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_18 = __this->___transactionInput_2;
			Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_19;
			L_19 = AccountSignerTransactionManager_SignAndSendTransactionAsync_m91A636543091D1AFC1CF5D246480DBC8B34E1578(L_17, L_18, NULL);
			ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC L_20;
			L_20 = Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8(L_19, (bool)0, Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8_RuntimeMethod_var);
			V_6 = L_20;
			ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 L_21;
			L_21 = ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_inline((&V_6), ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_RuntimeMethod_var);
			V_5 = L_21;
			bool L_22;
			L_22 = ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1((&V_5), ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_00f4_1;
			}
		}
		{
			int32_t L_23 = 1;
			V_0 = L_23;
			__this->___U3CU3E1__state_0 = L_23;
			ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 L_24 = V_5;
			__this->___U3CU3Eu__2_5 = L_24;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_25 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_mE24AAA4440D80FDCEB1199CD5D38C4FC817D63CD(L_25, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E_mE24AAA4440D80FDCEB1199CD5D38C4FC817D63CD_RuntimeMethod_var);
			goto IL_012b;
		}

IL_00d7_1:
		{
			ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 L_26 = __this->___U3CU3Eu__2_5;
			V_5 = L_26;
			ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5* L_27 = (ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5*)(&__this->___U3CU3Eu__2_5);
			il2cpp_codegen_initobj(L_27, sizeof(ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5));
			int32_t L_28 = (-1);
			V_0 = L_28;
			__this->___U3CU3E1__state_0 = L_28;
		}

IL_00f4_1:
		{
			String_t* L_29;
			L_29 = ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8((&V_5), ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8_RuntimeMethod_var);
			V_2 = L_29;
			goto IL_0117;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00fe;
		}
		throw e;
	}

CATCH_00fe:
	{// begin catch(System.Exception)
		Exception_t* L_30 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_30;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_31 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_32 = V_7;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C(L_31, L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_012b;
	}// end catch (depth: 1)

IL_0117:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_33 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&__this->___U3CU3Et__builder_1);
		String_t* L_34 = V_2;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E(L_33, L_34, AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var);
	}

IL_012b:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendTransactionAsyncU3Ed__8_MoveNext_mBDE405890CA8396D1A499E8F9FDA0543DD0D5626_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E*>(__this + _offset);
	U3CSendTransactionAsyncU3Ed__8_MoveNext_mBDE405890CA8396D1A499E8F9FDA0543DD0D5626(_thisAdjusted, method);
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SendTransactionAsync>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendTransactionAsyncU3Ed__8_SetStateMachine_mF9E4219B591D981CE4639A2E9A629E75BCD2FF98 (U3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_0 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendTransactionAsyncU3Ed__8_SetStateMachine_mF9E4219B591D981CE4639A2E9A629E75BCD2FF98_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendTransactionAsyncU3Ed__8_tC456CB4B61E239E965E800D727B3C3078DDEB54E*>(__this + _offset);
	U3CSendTransactionAsyncU3Ed__8_SetStateMachine_mF9E4219B591D981CE4639A2E9A629E75BCD2FF98(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignAndSendTransactionAsyncU3Ed__13_MoveNext_m6A7FD777B6C8AF57B9EB94CC1E01E4916B87DD1A (U3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B_mC23987D9AA5CDA93CD69E5128D99D00F068B9B15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EthSendRawTransaction_tC85D4CAD6B297971F6DEF6456CD7440F06A8BA83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAccount_t2D498E1E6AF11CFDB79F07A7D78532E396F852D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00c4_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0136_1;
			}
		}
		{
			AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_4 = V_1;
			RuntimeObject* L_5;
			L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(15 /* Nethereum.JsonRpc.Client.IClient Nethereum.RPC.TransactionManagers.TransactionManagerBase::get_Client() */, L_4);
			if (L_5)
			{
				goto IL_002e_1;
			}
		}
		{
			NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_6 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
			NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27E3B43A48A6965D728D3AF11F4F01BE2BDE92C2)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSignAndSendTransactionAsyncU3Ed__13_MoveNext_m6A7FD777B6C8AF57B9EB94CC1E01E4916B87DD1A_RuntimeMethod_var)));
		}

IL_002e_1:
		{
			TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_7 = __this->___transaction_3;
			if (L_7)
			{
				goto IL_0041_1;
			}
		}
		{
			ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_8 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
			ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral840D94CDC6A5AD28D5CB4F7047FAB75458D55B82)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSignAndSendTransactionAsyncU3Ed__13_MoveNext_m6A7FD777B6C8AF57B9EB94CC1E01E4916B87DD1A_RuntimeMethod_var)));
		}

IL_0041_1:
		{
			TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_9 = __this->___transaction_3;
			String_t* L_10;
			L_10 = CallInput_get_From_m0E827978D276DECD603396D4AC4369ACE95C601B(L_9, NULL);
			AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_11 = V_1;
			RuntimeObject* L_12;
			L_12 = TransactionManagerBase_get_Account_m723835CC7E2DCA78E31EC272E55A543B5EF333F9_inline(L_11, NULL);
			String_t* L_13;
			L_13 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Nethereum.RPC.Accounts.IAccount::get_Address() */, IAccount_t2D498E1E6AF11CFDB79F07A7D78532E396F852D0_il2cpp_TypeInfo_var, L_12);
			bool L_14;
			L_14 = AddressExtensions_IsTheSameAddress_m5366CF742A45B864A6D59F8040E77A7927A4B831(L_10, L_13, NULL);
			if (L_14)
			{
				goto IL_0069_1;
			}
		}
		{
			Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
			Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91FED74CEF757F8D31B0BF529905C1E65F8D981C)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSignAndSendTransactionAsyncU3Ed__13_MoveNext_m6A7FD777B6C8AF57B9EB94CC1E01E4916B87DD1A_RuntimeMethod_var)));
		}

IL_0069_1:
		{
			AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_16 = V_1;
			RuntimeObject* L_17;
			L_17 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(15 /* Nethereum.JsonRpc.Client.IClient Nethereum.RPC.TransactionManagers.TransactionManagerBase::get_Client() */, L_16);
			EthSendRawTransaction_tC85D4CAD6B297971F6DEF6456CD7440F06A8BA83* L_18 = (EthSendRawTransaction_tC85D4CAD6B297971F6DEF6456CD7440F06A8BA83*)il2cpp_codegen_object_new(EthSendRawTransaction_tC85D4CAD6B297971F6DEF6456CD7440F06A8BA83_il2cpp_TypeInfo_var);
			EthSendRawTransaction__ctor_mB1C17273E27D5F5A47D1801B620BB920F2F4BA23(L_18, L_17, NULL);
			__this->___U3CethSendTransactionU3E5__2_4 = L_18;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CethSendTransactionU3E5__2_4), (void*)L_18);
			AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_19 = V_1;
			TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_20 = __this->___transaction_3;
			Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_21;
			L_21 = AccountSignerTransactionManager_SignTransactionRetrievingNextNonceAsync_mCFA6B101B49768964B8A1985268190FCF30960AB(L_19, L_20, NULL);
			ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC L_22;
			L_22 = Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8(L_21, (bool)0, Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8_RuntimeMethod_var);
			V_5 = L_22;
			ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 L_23;
			L_23 = ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_inline((&V_5), ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_RuntimeMethod_var);
			V_4 = L_23;
			bool L_24;
			L_24 = ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1((&V_4), ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_00e1_1;
			}
		}
		{
			int32_t L_25 = 0;
			V_0 = L_25;
			__this->___U3CU3E1__state_0 = L_25;
			ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 L_26 = V_4;
			__this->___U3CU3Eu__1_5 = L_26;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_27 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B_mC23987D9AA5CDA93CD69E5128D99D00F068B9B15(L_27, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B_mC23987D9AA5CDA93CD69E5128D99D00F068B9B15_RuntimeMethod_var);
			goto IL_0198;
		}

IL_00c4_1:
		{
			ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 L_28 = __this->___U3CU3Eu__1_5;
			V_4 = L_28;
			ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5* L_29 = (ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5*)(&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_29, sizeof(ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
		}

IL_00e1_1:
		{
			String_t* L_31;
			L_31 = ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8((&V_4), ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8_RuntimeMethod_var);
			V_3 = L_31;
			EthSendRawTransaction_tC85D4CAD6B297971F6DEF6456CD7440F06A8BA83* L_32 = __this->___U3CethSendTransactionU3E5__2_4;
			String_t* L_33 = V_3;
			il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
			String_t* L_34;
			L_34 = HexByteConvertorExtensions_EnsureHexPrefix_m19AD0DDEC70CED3CA428D91D7B270C5B18E09F7B(L_33, NULL);
			Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_35;
			L_35 = EthSendRawTransaction_SendRequestAsync_m1A836ADACCDCB9CC4D2023BF18291D2236D9EA29(L_32, L_34, NULL, NULL);
			ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC L_36;
			L_36 = Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8(L_35, (bool)0, Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8_RuntimeMethod_var);
			V_5 = L_36;
			ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 L_37;
			L_37 = ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_inline((&V_5), ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_RuntimeMethod_var);
			V_4 = L_37;
			bool L_38;
			L_38 = ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1((&V_4), ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1_RuntimeMethod_var);
			if (L_38)
			{
				goto IL_0153_1;
			}
		}
		{
			int32_t L_39 = 1;
			V_0 = L_39;
			__this->___U3CU3E1__state_0 = L_39;
			ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 L_40 = V_4;
			__this->___U3CU3Eu__1_5 = L_40;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_41 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B_mC23987D9AA5CDA93CD69E5128D99D00F068B9B15(L_41, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B_mC23987D9AA5CDA93CD69E5128D99D00F068B9B15_RuntimeMethod_var);
			goto IL_0198;
		}

IL_0136_1:
		{
			ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 L_42 = __this->___U3CU3Eu__1_5;
			V_4 = L_42;
			ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5* L_43 = (ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5*)(&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_43, sizeof(ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5));
			int32_t L_44 = (-1);
			V_0 = L_44;
			__this->___U3CU3E1__state_0 = L_44;
		}

IL_0153_1:
		{
			String_t* L_45;
			L_45 = ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8((&V_4), ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8_RuntimeMethod_var);
			V_2 = L_45;
			goto IL_017d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_015d;
		}
		throw e;
	}

CATCH_015d:
	{// begin catch(System.Exception)
		Exception_t* L_46 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_6 = L_46;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CethSendTransactionU3E5__2_4 = (EthSendRawTransaction_tC85D4CAD6B297971F6DEF6456CD7440F06A8BA83*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CethSendTransactionU3E5__2_4), (void*)(EthSendRawTransaction_tC85D4CAD6B297971F6DEF6456CD7440F06A8BA83*)NULL);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_47 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_48 = V_6;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C(L_47, L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0198;
	}// end catch (depth: 1)

IL_017d:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CethSendTransactionU3E5__2_4 = (EthSendRawTransaction_tC85D4CAD6B297971F6DEF6456CD7440F06A8BA83*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CethSendTransactionU3E5__2_4), (void*)(EthSendRawTransaction_tC85D4CAD6B297971F6DEF6456CD7440F06A8BA83*)NULL);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_49 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&__this->___U3CU3Et__builder_1);
		String_t* L_50 = V_2;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E(L_49, L_50, AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var);
	}

IL_0198:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignAndSendTransactionAsyncU3Ed__13_MoveNext_m6A7FD777B6C8AF57B9EB94CC1E01E4916B87DD1A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B*>(__this + _offset);
	U3CSignAndSendTransactionAsyncU3Ed__13_MoveNext_m6A7FD777B6C8AF57B9EB94CC1E01E4916B87DD1A(_thisAdjusted, method);
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignAndSendTransactionAsync>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignAndSendTransactionAsyncU3Ed__13_SetStateMachine_mB8740431C99F9F86C6B13410AD60842DCE655885 (U3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_0 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignAndSendTransactionAsyncU3Ed__13_SetStateMachine_mB8740431C99F9F86C6B13410AD60842DCE655885_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSignAndSendTransactionAsyncU3Ed__13_t840AD0AB3A4B205852540AA0050A270FEEE85B3B*>(__this + _offset);
	U3CSignAndSendTransactionAsyncU3Ed__13_SetStateMachine_mB8740431C99F9F86C6B13410AD60842DCE655885(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignTransactionAsyncU3Ed__9_MoveNext_mC5BFA4C030B5086EDC1E8A771FDD16D2B0544B35 (U3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_mDC77E3C08C42618F9C4094DED4E56AED39E446EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_m4756F1CFA850ABDDEB7CB1D0BF3800481DF32FEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* V_1 = NULL;
	String_t* V_2 = NULL;
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_005a_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00c4_1;
			}
		}
		{
			AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_4 = V_1;
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
			L_5 = TransactionManagerBase_EnsureChainIdAndChainFeatureIsSetAsync_m81211D12CE9C761EB2EB013251AF1D3FAB8DF07D(L_4, NULL);
			ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_6;
			L_6 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_5, (bool)0, NULL);
			V_4 = L_6;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_7;
			L_7 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_4), NULL);
			V_3 = L_7;
			bool L_8;
			L_8 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_3), NULL);
			if (L_8)
			{
				goto IL_0076_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_10 = V_3;
			__this->___U3CU3Eu__1_4 = L_10;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_11 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_m4756F1CFA850ABDDEB7CB1D0BF3800481DF32FEF(L_11, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_m4756F1CFA850ABDDEB7CB1D0BF3800481DF32FEF_RuntimeMethod_var);
			goto IL_0118;
		}

IL_005a_1:
		{
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_12 = __this->___U3CU3Eu__1_4;
			V_3 = L_12;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_13 = (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*)(&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_13, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
		}

IL_0076_1:
		{
			ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_3), NULL);
			AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_15 = V_1;
			TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_16 = __this->___transaction_3;
			Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_17;
			L_17 = AccountSignerTransactionManager_SignTransactionRetrievingNextNonceAsync_mCFA6B101B49768964B8A1985268190FCF30960AB(L_15, L_16, NULL);
			ConfiguredTaskAwaitable_1_t5D41ABD05FA368A9CDB3329C907B4DCD69A7A2CC L_18;
			L_18 = Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8(L_17, (bool)0, Task_1_ConfigureAwait_mAC8032B38D47D60D57BF1E421E6774C1C50A0CB8_RuntimeMethod_var);
			V_6 = L_18;
			ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 L_19;
			L_19 = ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_inline((&V_6), ConfiguredTaskAwaitable_1_GetAwaiter_mC383D8B5E3F54D598A9E5121F4705FF46889A617_RuntimeMethod_var);
			V_5 = L_19;
			bool L_20;
			L_20 = ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1((&V_5), ConfiguredTaskAwaiter_get_IsCompleted_mAC1C73BA777A087D963C01165753A73AC932B5A1_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_00e1_1;
			}
		}
		{
			int32_t L_21 = 1;
			V_0 = L_21;
			__this->___U3CU3E1__state_0 = L_21;
			ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 L_22 = V_5;
			__this->___U3CU3Eu__2_5 = L_22;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_23 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_mDC77E3C08C42618F9C4094DED4E56AED39E446EF(L_23, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892_mDC77E3C08C42618F9C4094DED4E56AED39E446EF_RuntimeMethod_var);
			goto IL_0118;
		}

IL_00c4_1:
		{
			ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5 L_24 = __this->___U3CU3Eu__2_5;
			V_5 = L_24;
			ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5* L_25 = (ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5*)(&__this->___U3CU3Eu__2_5);
			il2cpp_codegen_initobj(L_25, sizeof(ConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5));
			int32_t L_26 = (-1);
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
		}

IL_00e1_1:
		{
			String_t* L_27;
			L_27 = ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8((&V_5), ConfiguredTaskAwaiter_GetResult_m09C74DFD8415A124C885DF96C8F7CE7D85EED9E8_RuntimeMethod_var);
			V_2 = L_27;
			goto IL_0104;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00eb;
		}
		throw e;
	}

CATCH_00eb:
	{// begin catch(System.Exception)
		Exception_t* L_28 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_7 = L_28;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_29 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_30 = V_7;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C(L_29, L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0118;
	}// end catch (depth: 1)

IL_0104:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_31 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&__this->___U3CU3Et__builder_1);
		String_t* L_32 = V_2;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E(L_31, L_32, AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var);
	}

IL_0118:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignTransactionAsyncU3Ed__9_MoveNext_mC5BFA4C030B5086EDC1E8A771FDD16D2B0544B35_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892*>(__this + _offset);
	U3CSignTransactionAsyncU3Ed__9_MoveNext_mC5BFA4C030B5086EDC1E8A771FDD16D2B0544B35(_thisAdjusted, method);
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignTransactionAsyncU3Ed__9_SetStateMachine_m8170B6476B6905976D983242DC3AA24C86C2B88E (U3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_0 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignTransactionAsyncU3Ed__9_SetStateMachine_m8170B6476B6905976D983242DC3AA24C86C2B88E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSignTransactionAsyncU3Ed__9_tD2071BC6EC438D4BBA5BFC1818AC524B7BEA8892*>(__this + _offset);
	U3CSignTransactionAsyncU3Ed__9_SetStateMachine_m8170B6476B6905976D983242DC3AA24C86C2B88E(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_MoveNext_mEBF4AA6183735D902E8EF344A1CAC537C3545B66 (U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m948377EA496F01B068E1DDF5F62DDF2983B49A88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m1DA80056E554ED675CA93BF37424210F8179D498_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m25128B609BEAC7C193798013688B89F33267E731_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m8711E39129F29F95D6AEC02DF7D90CB31E10FF00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m4368644F058B59DD4E18EB8352DD2BF895C2E86C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAccount_t2D498E1E6AF11CFDB79F07A7D78532E396F852D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m342E8ED9121C0E690F5A24C7B1CAF4A2B06A389A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* V_1 = NULL;
	String_t* V_2 = NULL;
	HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* V_3 = NULL;
	ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_1_t54BF6E9D9C600508578354F7A21369CA90DF263F V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_6;
	memset((&V_6), 0, sizeof(V_6));
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00a0_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0118_1;
			}
		}
		{
			TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_4 = __this->___transaction_2;
			if (L_4)
			{
				goto IL_002e_1;
			}
		}
		{
			ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
			ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral840D94CDC6A5AD28D5CB4F7047FAB75458D55B82)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_MoveNext_mEBF4AA6183735D902E8EF344A1CAC537C3545B66_RuntimeMethod_var)));
		}

IL_002e_1:
		{
			TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_6 = __this->___transaction_2;
			String_t* L_7;
			L_7 = CallInput_get_From_m0E827978D276DECD603396D4AC4369ACE95C601B(L_6, NULL);
			AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_8 = V_1;
			RuntimeObject* L_9;
			L_9 = TransactionManagerBase_get_Account_m723835CC7E2DCA78E31EC272E55A543B5EF333F9_inline(L_8, NULL);
			String_t* L_10;
			L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Nethereum.RPC.Accounts.IAccount::get_Address() */, IAccount_t2D498E1E6AF11CFDB79F07A7D78532E396F852D0_il2cpp_TypeInfo_var, L_9);
			bool L_11;
			L_11 = AddressExtensions_IsTheSameAddress_m5366CF742A45B864A6D59F8040E77A7927A4B831(L_7, L_10, NULL);
			if (L_11)
			{
				goto IL_0056_1;
			}
		}
		{
			Exception_t* L_12 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
			Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91FED74CEF757F8D31B0BF529905C1E65F8D981C)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_MoveNext_mEBF4AA6183735D902E8EF344A1CAC537C3545B66_RuntimeMethod_var)));
		}

IL_0056_1:
		{
			AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_13 = V_1;
			TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_14 = __this->___transaction_2;
			Task_1_t090886E71122196EFD9A94467E467FC25376F7AE* L_15;
			L_15 = AccountSignerTransactionManager_GetNonceAsync_m27A3478C5E6F5681D7AACE75147C76A34B58BEB4(L_13, L_14, NULL);
			ConfiguredTaskAwaitable_1_t54BF6E9D9C600508578354F7A21369CA90DF263F L_16;
			L_16 = Task_1_ConfigureAwait_m342E8ED9121C0E690F5A24C7B1CAF4A2B06A389A(L_15, (bool)0, Task_1_ConfigureAwait_m342E8ED9121C0E690F5A24C7B1CAF4A2B06A389A_RuntimeMethod_var);
			V_5 = L_16;
			ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195 L_17;
			L_17 = ConfiguredTaskAwaitable_1_GetAwaiter_m25128B609BEAC7C193798013688B89F33267E731_inline((&V_5), ConfiguredTaskAwaitable_1_GetAwaiter_m25128B609BEAC7C193798013688B89F33267E731_RuntimeMethod_var);
			V_4 = L_17;
			bool L_18;
			L_18 = ConfiguredTaskAwaiter_get_IsCompleted_m4368644F058B59DD4E18EB8352DD2BF895C2E86C((&V_4), ConfiguredTaskAwaiter_get_IsCompleted_m4368644F058B59DD4E18EB8352DD2BF895C2E86C_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_00bd_1;
			}
		}
		{
			int32_t L_19 = 0;
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
			ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195 L_20 = V_4;
			__this->___U3CU3Eu__1_4 = L_20;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_21 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m948377EA496F01B068E1DDF5F62DDF2983B49A88(L_21, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m948377EA496F01B068E1DDF5F62DDF2983B49A88_RuntimeMethod_var);
			goto IL_0178;
		}

IL_00a0_1:
		{
			ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195 L_22 = __this->___U3CU3Eu__1_4;
			V_4 = L_22;
			ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195* L_23 = (ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195*)(&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_23, sizeof(ConfiguredTaskAwaiter_t3B00E713E0AD212DFA2622AE6A78C331C8B3E195));
			int32_t L_24 = (-1);
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
		}

IL_00bd_1:
		{
			HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_25;
			L_25 = ConfiguredTaskAwaiter_GetResult_m8711E39129F29F95D6AEC02DF7D90CB31E10FF00((&V_4), ConfiguredTaskAwaiter_GetResult_m8711E39129F29F95D6AEC02DF7D90CB31E10FF00_RuntimeMethod_var);
			V_3 = L_25;
			TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_26 = __this->___transaction_2;
			HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_27 = V_3;
			TransactionInput_set_Nonce_mF84D9D70D26C5A85E999ECC65F64B35E6E6D0626_inline(L_26, L_27, NULL);
			AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_28 = V_1;
			TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_29 = __this->___transaction_2;
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
			L_30 = TransactionManagerBase_SetTransactionFeesOrPricingAsync_mF2C7624EA76D10856545B910B11C64E322217DBB(L_28, L_29, NULL);
			ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_31;
			L_31 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_30, (bool)0, NULL);
			V_7 = L_31;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_32;
			L_32 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_7), NULL);
			V_6 = L_32;
			bool L_33;
			L_33 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_6), NULL);
			if (L_33)
			{
				goto IL_0135_1;
			}
		}
		{
			int32_t L_34 = 1;
			V_0 = L_34;
			__this->___U3CU3E1__state_0 = L_34;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_35 = V_6;
			__this->___U3CU3Eu__2_5 = L_35;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_5))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_36 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m1DA80056E554ED675CA93BF37424210F8179D498(L_36, (&V_6), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B_m1DA80056E554ED675CA93BF37424210F8179D498_RuntimeMethod_var);
			goto IL_0178;
		}

IL_0118_1:
		{
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_37 = __this->___U3CU3Eu__2_5;
			V_6 = L_37;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_38 = (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*)(&__this->___U3CU3Eu__2_5);
			il2cpp_codegen_initobj(L_38, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
			int32_t L_39 = (-1);
			V_0 = L_39;
			__this->___U3CU3E1__state_0 = L_39;
		}

IL_0135_1:
		{
			ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_6), NULL);
			AccountSignerTransactionManager_t2B1843E55E9E2DE674F038D4C774AC84871046F5* L_40 = V_1;
			TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* L_41 = __this->___transaction_2;
			String_t* L_42;
			L_42 = AccountSignerTransactionManager_SignTransaction_mA9757FD32C153C6200D3EFC8907D0F5A2A6DA3C7(L_40, L_41, NULL);
			V_2 = L_42;
			goto IL_0164;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_014b;
		}
		throw e;
	}

CATCH_014b:
	{// begin catch(System.Exception)
		Exception_t* L_43 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_8 = L_43;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_44 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_45 = V_8;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C(L_44, L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0178;
	}// end catch (depth: 1)

IL_0164:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_46 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&__this->___U3CU3Et__builder_1);
		String_t* L_47 = V_2;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E(L_46, L_47, AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var);
	}

IL_0178:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_MoveNext_mEBF4AA6183735D902E8EF344A1CAC537C3545B66_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B*>(__this + _offset);
	U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_MoveNext_mEBF4AA6183735D902E8EF344A1CAC537C3545B66(_thisAdjusted, method);
}
// System.Void Nethereum.Web3.Accounts.AccountSignerTransactionManager/<SignTransactionRetrievingNextNonceAsync>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_SetStateMachine_m0F720D642807FB88B08AD5243968697DFED505B3 (U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_0 = (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_SetStateMachine_m0F720D642807FB88B08AD5243968697DFED505B3_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_tED10F86D9BF49F3F825BF4474ACCA2E02E50804B*>(__this + _offset);
	U3CSignTransactionRetrievingNextNonceAsyncU3Ed__11_SetStateMachine_m0F720D642807FB88B08AD5243968697DFED505B3(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Account_set_PrivateKey_m23C2E03847B487901115CCC6961D425EF9AA7108_inline (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPrivateKeyU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPrivateKeyU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Account_set_Address_mB454771613D142C123086030A3B467CA274A6E17_inline (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CAddressU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAddressU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Account_set_PublicKey_m4BEA14A8EB8D5D0CD002FEF320A8E9AFB4DDDB88_inline (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPublicKeyU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPublicKeyU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Account_set_AccountSigningService_mD744940F52AA986C72DE82670932459623476AAE_inline (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CAccountSigningServiceU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAccountSigningServiceU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 Account_get_ChainId_m9CE472C7BD92D76DC225D3EF96A589DCBF34A360_inline (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CChainIdU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Account_set_TransactionManager_m8E50BAC031AE822FF0F29C909207A7B684E4A3F4_inline (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTransactionManagerU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTransactionManagerU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Account_get_Address_m640C6E09FD63581B3444F408B2B7CBB7CAD2EFC5_inline (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAddressU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Account_get_TransactionManager_mBCAE205C985A72F40A3E014B54E9759432A5258C_inline (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTransactionManagerU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CallInput_set_From_m2774FB54F7108125227102BBFCAF284439023064_inline (CallInput_t134727ED6D63AA0F8722CB06FEC85207CC5D3F9C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->____from_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____from_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* TransactionInput_get_Nonce_m6896F658F684EE32D0082439E84AC3B132C8AAF0_inline (TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* __this, const RuntimeMethod* method) 
{
	{
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_0 = __this->___U3CNonceU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* CallInput_get_Gas_m09A9CF512CFABF7076567743AACD5877595F681C_inline (CallInput_t134727ED6D63AA0F8722CB06FEC85207CC5D3F9C* __this, const RuntimeMethod* method) 
{
	{
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_0 = __this->___U3CGasU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* CallInput_get_Value_m28727CA48965FA13A86086553D7865768C7CF2F4_inline (CallInput_t134727ED6D63AA0F8722CB06FEC85207CC5D3F9C* __this, const RuntimeMethod* method) 
{
	{
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_0 = __this->___U3CValueU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* CallInput_get_Type_m5AC7217846BC3240AB103B0C45DF168662ADF311_inline (CallInput_t134727ED6D63AA0F8722CB06FEC85207CC5D3F9C* __this, const RuntimeMethod* method) 
{
	{
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_0 = __this->___U3CTypeU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* CallInput_get_MaxPriorityFeePerGas_m76DC2A7004C6DB0487342B98D71A1B519F2AA655_inline (CallInput_t134727ED6D63AA0F8722CB06FEC85207CC5D3F9C* __this, const RuntimeMethod* method) 
{
	{
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_0 = __this->___U3CMaxPriorityFeePerGasU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* CallInput_get_MaxFeePerGas_m7F2F78062F61F145F95095D15F4D2FB8B130E58E_inline (CallInput_t134727ED6D63AA0F8722CB06FEC85207CC5D3F9C* __this, const RuntimeMethod* method) 
{
	{
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_0 = __this->___U3CMaxFeePerGasU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t4E11F5D2075471CC5269E680568592D8D061C750* TransactionInput_get_AccessList_m451849F30B6AF12301B961B43B901E5E923C371F_inline (TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4E11F5D2075471CC5269E680568592D8D061C750* L_0 = __this->___U3CAccessListU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Account_get_PrivateKey_mD9DC77BD871288862E657C76E141ED1642A474D5_inline (Account_tD493E58E98C0261E8E072DEBC105984B98C20A0D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPrivateKeyU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* CallInput_get_GasPrice_mCB6E5240F55080A0B4F7B4E1067495CB83BA527B_inline (CallInput_t134727ED6D63AA0F8722CB06FEC85207CC5D3F9C* __this, const RuntimeMethod* method) 
{
	{
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_0 = __this->___U3CGasPriceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransactionManagerBase_set_ChainId_m3F1421151360D50ACD69BD373C205A5E1565434E_inline (TransactionManagerBase_t348BC050DA9D2D79FB1DB6FE3031B8E94B8C7ABC* __this, Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = ___0_value;
		__this->___U3CChainIdU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CChainIdU3Ek__BackingField_7))->___value_1))->____bits_7), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransactionManagerBase_set_Account_mC173C6D17C15593909D309673E74BAB9D3E237F1_inline (TransactionManagerBase_t348BC050DA9D2D79FB1DB6FE3031B8E94B8C7ABC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CAccountU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAccountU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TransactionManagerBase_get_Account_m723835CC7E2DCA78E31EC272E55A543B5EF333F9_inline (TransactionManagerBase_t348BC050DA9D2D79FB1DB6FE3031B8E94B8C7ABC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAccountU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 TransactionManagerBase_get_ChainId_m3872C1FB94230DD60C6FDC17995CE2A069F694AB_inline (TransactionManagerBase_t348BC050DA9D2D79FB1DB6FE3031B8E94B8C7ABC* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72 L_0 = __this->___U3CChainIdU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_0 = __this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransactionInput_set_Nonce_mF84D9D70D26C5A85E999ECC65F64B35E6E6D0626_inline (TransactionInput_t1B3DDEE42CE0171754109975B2FEF1C660E20EF2* __this, HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* ___0_value, const RuntimeMethod* method) 
{
	{
		HexBigInteger_tFD9189302CC4BD35091F94D48E460B5D2D5CA811* L_0 = ___0_value;
		__this->___U3CNonceU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNonceU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mEA238C926B5B43884A3B41439F8EC114CC3CEA07_gshared_inline (Nullable_1_t4926B6730CE7D5D65A9903F48CFD632867A41E72* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue_0;
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
