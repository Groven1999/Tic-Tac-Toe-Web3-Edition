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

// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380;
// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver>
struct Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t106D4C1340745E38431865BBEA6AE170A4713431;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// Nethereum.Util.AddressUtil
struct AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A;
// System.Net.Http.Headers.AuthenticationHeaderValue
struct AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A;
// Nethereum.RPC.Eth.DTOs.BlockParameter
struct BlockParameter_t13CF5CC9CDE990ACD945748B2FA7F19EA0A06AD9;
// Nethereum.BlockchainProcessing.Services.BlockchainProcessingService
struct BlockchainProcessingService_tF452F872A6BCBDAB1DAA642B2F71B2F0BE165D24;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// Nethereum.RPC.DebugNode.DebugApiService
struct DebugApiService_tE10FEBC2C4ED3CF94BED98E9CE879AD882E18E3A;
// Nethereum.Contracts.Standards.ERC1155.ERC1155Service
struct ERC1155Service_t5929D51764AC25462FF1071BAA5AFD39D39AC0E4;
// Nethereum.Contracts.Standards.ERC1271.ERC1271Service
struct ERC1271Service_t5D362FEC8F9FB4A4A43BC1094CDC1E4EFE768893;
// Nethereum.Contracts.Standards.ERC20.ERC20Service
struct ERC20Service_tBAC6D3868CE498F01EA1A11F8850CE3724737332;
// Nethereum.Contracts.Standards.ERC721.ERC721Service
struct ERC721Service_tF8C45C07FEEFDEBBD4948DAC26C8BD00047C7EAA;
// Nethereum.Contracts.Services.EthApiContractService
struct EthApiContractService_t59E062A2A158CB66E96C7858A003A32427F337B5;
// Nethereum.RPC.FeeSuggestionService
struct FeeSuggestionService_tAE088089906388255787A65D7EBF04CA24F61ACA;
// System.Net.Http.HttpClient
struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42;
// System.Net.Http.HttpClientHandler
struct HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD;
// Nethereum.RPC.Accounts.IAccount
struct IAccount_t2D498E1E6AF11CFDB79F07A7D78532E396F852D0;
// Nethereum.RPC.AccountSigning.IAccountSigningService
struct IAccountSigningService_t6AE095CD4297AB3ED57A1F6B4ABEC8A9C5B684DC;
// Nethereum.BlockchainProcessing.Services.IBlockchainBlockProcessingService
struct IBlockchainBlockProcessingService_t6CBB4EF50D413AC31D7B93FD404D96FD7CA6C8D9;
// Nethereum.BlockchainProcessing.Services.IBlockchainLogProcessingService
struct IBlockchainLogProcessingService_t7953713B8516116C90B45F4B886E26CE501C19CF;
// Nethereum.BlockchainProcessing.Services.IBlockchainProcessingService
struct IBlockchainProcessingService_t11088E37F1860F2C2AD040779E500BE92B1E08EC;
// Nethereum.JsonRpc.Client.IClient
struct IClient_t3F4473F20A6C2C4B7F392E89E960C7F7D2792ABA;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t7EC502F5FCA86DD95579A92A1E0116BE32D6340B;
// Nethereum.RPC.DebugNode.IDebugApiService
struct IDebugApiService_tE46C4A7E843DAF29F5A349974F4F433066CF81BB;
// Nethereum.RPC.DebugNode.IDebugGetBadBlocks
struct IDebugGetBadBlocks_tAEAF63E3BF2B3897084C931661FD217B34CF0E51;
// Nethereum.RPC.DebugNode.IDebugGetRawBlock
struct IDebugGetRawBlock_t4334827CE45B4DBEF5F21FE2B394A6226E80831B;
// Nethereum.RPC.DebugNode.IDebugGetRawHeader
struct IDebugGetRawHeader_tB6F74923D359E8C6B48C8ECE697A78E7211E772B;
// Nethereum.RPC.DebugNode.IDebugGetRawReceipts
struct IDebugGetRawReceipts_tD6C26E8A4CA3C4284CEE341A39AAD271CB380410;
// Nethereum.RPC.DebugNode.IDebugGetRawTransaction
struct IDebugGetRawTransaction_tE4157204C3A2ADA00324347E479A471886BF3BFD;
// Nethereum.RPC.DebugNode.IDebugStorageRangeAt
struct IDebugStorageRangeAt_tA432E35597C87E399C519E3FBD65C9E3CD4EC255;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// Nethereum.RPC.Eth.IEthAccounts
struct IEthAccounts_t00546381284D96A6BFE1E34CA9EA01066FCE2819;
// Nethereum.RPC.Eth.Services.IEthApiBlockService
struct IEthApiBlockService_tDE24E9F997691035A6DE6DD5C7D60CD6FFFED796;
// Nethereum.RPC.Eth.Services.IEthApiCompilerService
struct IEthApiCompilerService_t21A90D2994D8E1BF7B8941C2037DF10DE51242AC;
// Nethereum.Contracts.Services.IEthApiContractService
struct IEthApiContractService_t13C3A411F7A2BF56D2D15CA1A9386FAF0EE30FFE;
// Nethereum.RPC.Eth.Services.IEthApiFilterService
struct IEthApiFilterService_t7FC961F91D2EDB9E547465D975C80EA4D3C0A117;
// Nethereum.RPC.Eth.Services.IEthApiMiningService
struct IEthApiMiningService_t6F3A7CBA6CD519192BECE73AD8195281D944416B;
// Nethereum.RPC.Eth.Services.IEthApiTransactionsService
struct IEthApiTransactionsService_t684CA7A5B2E064233016F734CC936F8BA278C99B;
// Nethereum.RPC.Eth.Services.IEthApiUncleService
struct IEthApiUncleService_t90FBF238AC2059D7B92F2810FD67D6D6E88AF831;
// Nethereum.RPC.Eth.IEthChainId
struct IEthChainId_t6F760A47BFCA5F57656DC498816F4C54D37C5522;
// Nethereum.RPC.Eth.ChainValidation.IEthChainProofValidationService
struct IEthChainProofValidationService_t1AE8DB0621189F5E275A823C09B416EA291ED5E2;
// Nethereum.RPC.Eth.IEthCoinBase
struct IEthCoinBase_tE799E14FD780B2C19DA572043A3ECE7746F462AD;
// Nethereum.RPC.Eth.IEthCreateAccessList
struct IEthCreateAccessList_tF506A08C22A9576C6CFC50CF7626BE76E5B533B7;
// Nethereum.RPC.Eth.Transactions.IEthFeeHistory
struct IEthFeeHistory_tA3BA01E561868B9B539D5D9854C9EF6A7AE390A9;
// Nethereum.RPC.Eth.IEthGasPrice
struct IEthGasPrice_tA3DD174251A19B128C6544CA281A2BD1042B85B4;
// Nethereum.RPC.Eth.IEthGetBalance
struct IEthGetBalance_tECB93783C8EF2253FC04F8528B370E8B8C718AB7;
// Nethereum.RPC.Eth.IEthGetCode
struct IEthGetCode_t3B50E9B3581622F9DA69B3351C51719655D894ED;
// Nethereum.Contracts.Services.IEthGetContractTransactionErrorReason
struct IEthGetContractTransactionErrorReason_t53F0793622ABBAC4EF249B61A98E83168A36A3F1;
// Nethereum.RPC.Eth.IEthGetProof
struct IEthGetProof_tC4A9005CB6B9AA0493D2D2DEC4D0546CBA02DC2B;
// Nethereum.RPC.Eth.IEthGetStorageAt
struct IEthGetStorageAt_t64D1336D1F0F7914CBE0BEA48E0D4C4135D25A9B;
// Nethereum.RPC.Eth.IEthProtocolVersion
struct IEthProtocolVersion_tAB6C87FA0CEFAA5948EFA49A991BCA6D5E5161FB;
// Nethereum.RPC.Eth.IEthSign
struct IEthSign_t44ACEA3A928C4FA5869E47B65D4D225485AFE387;
// Nethereum.RPC.Eth.IEthSyncing
struct IEthSyncing_t6A1F2AA50A134297DA89F36C7BAAAB44724A52DC;
// Nethereum.RPC.HostWallet.IHostWalletService
struct IHostWalletService_t6D1558919E6ABC8BF51FDFEB8AABD471916DCC98;
// Microsoft.Extensions.Logging.ILogger
struct ILogger_t1C0C2CD1CDFA86541C20F898F7581FB2CB04BFB4;
// System.Net.Http.IMonoHttpClientHandler
struct IMonoHttpClientHandler_t721CE15E0E80995BFB141B935E5CF97249F183CD;
// Nethereum.RPC.INetApiService
struct INetApiService_t6C6C7F68372F5FEF85A87C968FD961D987B351E2;
// Nethereum.RPC.Net.INetListening
struct INetListening_t19A4C1913D239058A7467FB65788C1C219E1A287;
// Nethereum.RPC.Net.INetPeerCount
struct INetPeerCount_t6E261E54667B8D42FA165AD6579BC556B373FDF4;
// Nethereum.RPC.Net.INetVersion
struct INetVersion_t584712674DA02D092BDF624FC052F49FEBE01ABD;
// Nethereum.RPC.IPersonalApiService
struct IPersonalApiService_tFBD2DC4B145D295AE5DCA5494C8682D71423953E;
// Nethereum.RPC.Personal.IPersonalListAccounts
struct IPersonalListAccounts_t006DC55E372EBC8E7A1D7B33FB11708C3E3891F2;
// Nethereum.RPC.Personal.IPersonalLockAccount
struct IPersonalLockAccount_t5097BB85E158B7F0015B46907631ED43EB25A1FC;
// Nethereum.RPC.Personal.IPersonalNewAccount
struct IPersonalNewAccount_t8329771EBE969460F1199F0E275E78CB37A701DC;
// Nethereum.RPC.Personal.IPersonalSignAndSendTransaction
struct IPersonalSignAndSendTransaction_t0A7E2E4D0BBE420937E2137C2576A925B4E75990;
// Nethereum.RPC.Personal.IPersonalUnlockAccount
struct IPersonalUnlockAccount_tEAF3990F3E6FFD461E700E597548595AD4183AEA;
// Newtonsoft.Json.Serialization.ISerializationBinder
struct ISerializationBinder_t3C8B850335FB40001C9201981439AE77B430031F;
// Nethereum.RPC.IShhApiService
struct IShhApiService_t24E0B92753B00B5C5E10FAB551824C7CD30B9CB7;
// Nethereum.RPC.Shh.IShhKeyPair
struct IShhKeyPair_t603624FEE6DCF5E24C559376D993BD22209BCB24;
// Nethereum.RPC.Shh.IShhMessageFilter
struct IShhMessageFilter_t14016D5789FED87660C7901A76DD3AA006A8182B;
// Nethereum.RPC.Shh.IShhPost
struct IShhPost_t3D39E685178B1344672E59F8D8299690FC26789B;
// Nethereum.RPC.Shh.IShhSymKey
struct IShhSymKey_tE95629D8ED1FBF375824A8DC86CD08078FA7B16F;
// Nethereum.RPC.Shh.IShhVersion
struct IShhVersion_tA39DCC8D4E4EFC2FEBBC1C9C489733481E08E523;
// Nethereum.Model.ISignature
struct ISignature_t8D666FE7BCEE464808213E78070E10D75CCBB91A;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t44C99CB7D5AB59A077F569914E56DAD66B5A41EF;
// Nethereum.RPC.TransactionManagers.ITransactionManager
struct ITransactionManager_t93C7C810748D626CB18E930ADCB2A2571F8426A1;
// Nethereum.RPC.TransactionReceipts.ITransactionReceiptService
struct ITransactionReceiptService_tFAFCA1B8790B067709343072CB3203D009EF61F5;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF;
// Nethereum.RPC.NetApiService
struct NetApiService_t90FE9D5D7662E4131A5F722B57B8DDF326514F96;
// Nethereum.RPC.PersonalApiService
struct PersonalApiService_tC10DBC037F65B1A149E47B653C05FCE16AFBA115;
// Nethereum.Contracts.Standards.ProofOfHumanity.ProofOfHumanityService
struct ProofOfHumanityService_t9FE5FAAF5CE7C444E3C02617BB45765D9D18E0EB;
// Nethereum.Model.RLPSignedDataHashBuilder
struct RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4;
// Nethereum.JsonRpc.Client.RequestInterceptor
struct RequestInterceptor_t0B0D2629DBFF7C5098B4B4C21BCA63444BD502F0;
// Nethereum.JsonRpc.Client.RpcClient
struct RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9;
// Nethereum.Util.Sha3Keccack
struct Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6;
// Nethereum.RPC.ShhApiService
struct ShhApiService_t80D6BECE4BFC36DD64EA5C1822EFA05F0F4A0E96;
// System.String
struct String_t;
// Nethereum.Util.UnitConversion
struct UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// Nethereum.Web3.Web3
struct Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlockchainProcessingService_tF452F872A6BCBDAB1DAA642B2F71B2F0BE165D24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugApiService_tE10FEBC2C4ED3CF94BED98E9CE879AD882E18E3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EthApiContractService_t59E062A2A158CB66E96C7858A003A32427F337B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FeeSuggestionService_tAE088089906388255787A65D7EBF04CA24F61ACA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAccount_t2D498E1E6AF11CFDB79F07A7D78532E396F852D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEthApiService_t7D25B9BDABE07D6FA9D4302926E7429B5F8C4D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITransactionManager_t93C7C810748D626CB18E930ADCB2A2571F8426A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetApiService_t90FE9D5D7662E4131A5F722B57B8DDF326514F96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PersonalApiService_tC10DBC037F65B1A149E47B653C05FCE16AFBA115_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShhApiService_t80D6BECE4BFC36DD64EA5C1822EFA05F0F4A0E96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3302094A260C9A22389159FCA73B11FB322D55D5 
{
};

// Nethereum.Util.AddressUtil
struct AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A  : public RuntimeObject
{
};

// System.Net.Http.Headers.AuthenticationHeaderValue
struct AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A  : public RuntimeObject
{
	// System.String System.Net.Http.Headers.AuthenticationHeaderValue::<Parameter>k__BackingField
	String_t* ___U3CParameterU3Ek__BackingField_0;
	// System.String System.Net.Http.Headers.AuthenticationHeaderValue::<Scheme>k__BackingField
	String_t* ___U3CSchemeU3Ek__BackingField_1;
};

// Nethereum.BlockchainProcessing.Services.BlockchainProcessingService
struct BlockchainProcessingService_tF452F872A6BCBDAB1DAA642B2F71B2F0BE165D24  : public RuntimeObject
{
	// Nethereum.Contracts.Services.IEthApiContractService Nethereum.BlockchainProcessing.Services.BlockchainProcessingService::_ethApiContractService
	RuntimeObject* ____ethApiContractService_0;
	// Nethereum.BlockchainProcessing.Services.IBlockchainLogProcessingService Nethereum.BlockchainProcessing.Services.BlockchainProcessingService::<Logs>k__BackingField
	RuntimeObject* ___U3CLogsU3Ek__BackingField_1;
	// Nethereum.BlockchainProcessing.Services.IBlockchainBlockProcessingService Nethereum.BlockchainProcessing.Services.BlockchainProcessingService::<Blocks>k__BackingField
	RuntimeObject* ___U3CBlocksU3Ek__BackingField_2;
};

// Nethereum.JsonRpc.Client.ClientBase
struct ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B  : public RuntimeObject
{
	// Nethereum.JsonRpc.Client.RequestInterceptor Nethereum.JsonRpc.Client.ClientBase::<OverridingRequestInterceptor>k__BackingField
	RequestInterceptor_t0B0D2629DBFF7C5098B4B4C21BCA63444BD502F0* ___U3COverridingRequestInterceptorU3Ek__BackingField_1;
};

// System.Net.Http.HttpMessageHandler
struct HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17  : public RuntimeObject
{
};

// Nethereum.RPC.RpcClientWrapper
struct RpcClientWrapper_t639264795AA92FB47F8CBBE7183EEBFE0A565854  : public RuntimeObject
{
	// Nethereum.JsonRpc.Client.IClient Nethereum.RPC.RpcClientWrapper::<Client>k__BackingField
	RuntimeObject* ___U3CClientU3Ek__BackingField_0;
};

// Nethereum.Util.Sha3Keccack
struct Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6  : public RuntimeObject
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

// Nethereum.Util.UnitConversion
struct UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823  : public RuntimeObject
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

// Nethereum.Web3.Web3
struct Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253  : public RuntimeObject
{
	// Nethereum.JsonRpc.Client.IClient Nethereum.Web3.Web3::<Client>k__BackingField
	RuntimeObject* ___U3CClientU3Ek__BackingField_3;
	// Nethereum.Contracts.Services.IEthApiContractService Nethereum.Web3.Web3::<Eth>k__BackingField
	RuntimeObject* ___U3CEthU3Ek__BackingField_4;
	// Nethereum.RPC.IShhApiService Nethereum.Web3.Web3::<Shh>k__BackingField
	RuntimeObject* ___U3CShhU3Ek__BackingField_5;
	// Nethereum.RPC.INetApiService Nethereum.Web3.Web3::<Net>k__BackingField
	RuntimeObject* ___U3CNetU3Ek__BackingField_6;
	// Nethereum.RPC.IPersonalApiService Nethereum.Web3.Web3::<Personal>k__BackingField
	RuntimeObject* ___U3CPersonalU3Ek__BackingField_7;
	// Nethereum.BlockchainProcessing.Services.IBlockchainProcessingService Nethereum.Web3.Web3::<Processing>k__BackingField
	RuntimeObject* ___U3CProcessingU3Ek__BackingField_8;
	// Nethereum.RPC.DebugNode.IDebugApiService Nethereum.Web3.Web3::<Debug>k__BackingField
	RuntimeObject* ___U3CDebugU3Ek__BackingField_9;
	// Nethereum.RPC.FeeSuggestionService Nethereum.Web3.Web3::<FeeSuggestion>k__BackingField
	FeeSuggestionService_tAE088089906388255787A65D7EBF04CA24F61ACA* ___U3CFeeSuggestionU3Ek__BackingField_10;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// Nethereum.RPC.DebugNode.DebugApiService
struct DebugApiService_tE10FEBC2C4ED3CF94BED98E9CE879AD882E18E3A  : public RpcClientWrapper_t639264795AA92FB47F8CBBE7183EEBFE0A565854
{
	// Nethereum.RPC.DebugNode.IDebugGetBadBlocks Nethereum.RPC.DebugNode.DebugApiService::<GetBadBlocks>k__BackingField
	RuntimeObject* ___U3CGetBadBlocksU3Ek__BackingField_1;
	// Nethereum.RPC.DebugNode.IDebugGetRawBlock Nethereum.RPC.DebugNode.DebugApiService::<GetRawBlock>k__BackingField
	RuntimeObject* ___U3CGetRawBlockU3Ek__BackingField_2;
	// Nethereum.RPC.DebugNode.IDebugGetRawHeader Nethereum.RPC.DebugNode.DebugApiService::<GetRawHeader>k__BackingField
	RuntimeObject* ___U3CGetRawHeaderU3Ek__BackingField_3;
	// Nethereum.RPC.DebugNode.IDebugGetRawReceipts Nethereum.RPC.DebugNode.DebugApiService::<GetRawReceipts>k__BackingField
	RuntimeObject* ___U3CGetRawReceiptsU3Ek__BackingField_4;
	// Nethereum.RPC.DebugNode.IDebugGetRawTransaction Nethereum.RPC.DebugNode.DebugApiService::<GetRawTransaction>k__BackingField
	RuntimeObject* ___U3CGetRawTransactionU3Ek__BackingField_5;
	// Nethereum.RPC.DebugNode.IDebugStorageRangeAt Nethereum.RPC.DebugNode.DebugApiService::<StorageRangeAt>k__BackingField
	RuntimeObject* ___U3CStorageRangeAtU3Ek__BackingField_6;
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

// Nethereum.RPC.EthApiService
struct EthApiService_tD9B555F28B0008E999D5B0EEC8A063418522921A  : public RpcClientWrapper_t639264795AA92FB47F8CBBE7183EEBFE0A565854
{
	// Nethereum.RPC.Eth.DTOs.BlockParameter Nethereum.RPC.EthApiService::_defaultBlock
	BlockParameter_t13CF5CC9CDE990ACD945748B2FA7F19EA0A06AD9* ____defaultBlock_1;
	// Nethereum.RPC.TransactionManagers.ITransactionManager Nethereum.RPC.EthApiService::_transactionManager
	RuntimeObject* ____transactionManager_2;
	// Nethereum.RPC.Eth.IEthChainId Nethereum.RPC.EthApiService::<ChainId>k__BackingField
	RuntimeObject* ___U3CChainIdU3Ek__BackingField_3;
	// Nethereum.RPC.Eth.IEthAccounts Nethereum.RPC.EthApiService::<Accounts>k__BackingField
	RuntimeObject* ___U3CAccountsU3Ek__BackingField_4;
	// Nethereum.RPC.Eth.IEthCoinBase Nethereum.RPC.EthApiService::<CoinBase>k__BackingField
	RuntimeObject* ___U3CCoinBaseU3Ek__BackingField_5;
	// Nethereum.RPC.Eth.IEthGasPrice Nethereum.RPC.EthApiService::<GasPrice>k__BackingField
	RuntimeObject* ___U3CGasPriceU3Ek__BackingField_6;
	// Nethereum.RPC.Eth.IEthGetBalance Nethereum.RPC.EthApiService::<GetBalance>k__BackingField
	RuntimeObject* ___U3CGetBalanceU3Ek__BackingField_7;
	// Nethereum.RPC.Eth.IEthGetCode Nethereum.RPC.EthApiService::<GetCode>k__BackingField
	RuntimeObject* ___U3CGetCodeU3Ek__BackingField_8;
	// Nethereum.RPC.Eth.IEthGetStorageAt Nethereum.RPC.EthApiService::<GetStorageAt>k__BackingField
	RuntimeObject* ___U3CGetStorageAtU3Ek__BackingField_9;
	// Nethereum.RPC.Eth.IEthProtocolVersion Nethereum.RPC.EthApiService::<ProtocolVersion>k__BackingField
	RuntimeObject* ___U3CProtocolVersionU3Ek__BackingField_10;
	// Nethereum.RPC.Eth.IEthSign Nethereum.RPC.EthApiService::<Sign>k__BackingField
	RuntimeObject* ___U3CSignU3Ek__BackingField_11;
	// Nethereum.RPC.Eth.IEthSyncing Nethereum.RPC.EthApiService::<Syncing>k__BackingField
	RuntimeObject* ___U3CSyncingU3Ek__BackingField_12;
	// Nethereum.RPC.Eth.Services.IEthApiTransactionsService Nethereum.RPC.EthApiService::<Transactions>k__BackingField
	RuntimeObject* ___U3CTransactionsU3Ek__BackingField_13;
	// Nethereum.RPC.Eth.Services.IEthApiUncleService Nethereum.RPC.EthApiService::<Uncles>k__BackingField
	RuntimeObject* ___U3CUnclesU3Ek__BackingField_14;
	// Nethereum.RPC.Eth.Services.IEthApiMiningService Nethereum.RPC.EthApiService::<Mining>k__BackingField
	RuntimeObject* ___U3CMiningU3Ek__BackingField_15;
	// Nethereum.RPC.Eth.Services.IEthApiBlockService Nethereum.RPC.EthApiService::<Blocks>k__BackingField
	RuntimeObject* ___U3CBlocksU3Ek__BackingField_16;
	// Nethereum.RPC.Eth.Services.IEthApiFilterService Nethereum.RPC.EthApiService::<Filters>k__BackingField
	RuntimeObject* ___U3CFiltersU3Ek__BackingField_17;
	// Nethereum.RPC.Eth.Transactions.IEthFeeHistory Nethereum.RPC.EthApiService::<FeeHistory>k__BackingField
	RuntimeObject* ___U3CFeeHistoryU3Ek__BackingField_18;
	// Nethereum.RPC.Eth.Services.IEthApiCompilerService Nethereum.RPC.EthApiService::<Compile>k__BackingField
	RuntimeObject* ___U3CCompileU3Ek__BackingField_19;
	// Nethereum.RPC.HostWallet.IHostWalletService Nethereum.RPC.EthApiService::<HostWallet>k__BackingField
	RuntimeObject* ___U3CHostWalletU3Ek__BackingField_20;
	// Nethereum.RPC.Eth.IEthGetProof Nethereum.RPC.EthApiService::<GetProof>k__BackingField
	RuntimeObject* ___U3CGetProofU3Ek__BackingField_21;
	// Nethereum.RPC.Eth.IEthCreateAccessList Nethereum.RPC.EthApiService::<CreateAccessList>k__BackingField
	RuntimeObject* ___U3CCreateAccessListU3Ek__BackingField_22;
	// Nethereum.RPC.Eth.ChainValidation.IEthChainProofValidationService Nethereum.RPC.EthApiService::<ChainProofValidation>k__BackingField
	RuntimeObject* ___U3CChainProofValidationU3Ek__BackingField_23;
	// Nethereum.RPC.AccountSigning.IAccountSigningService Nethereum.RPC.EthApiService::<AccountSigning>k__BackingField
	RuntimeObject* ___U3CAccountSigningU3Ek__BackingField_24;
};

// Nethereum.RPC.FeeSuggestionService
struct FeeSuggestionService_tAE088089906388255787A65D7EBF04CA24F61ACA  : public RpcClientWrapper_t639264795AA92FB47F8CBBE7183EEBFE0A565854
{
};

// Nethereum.RPC.NetApiService
struct NetApiService_t90FE9D5D7662E4131A5F722B57B8DDF326514F96  : public RpcClientWrapper_t639264795AA92FB47F8CBBE7183EEBFE0A565854
{
	// Nethereum.RPC.Net.INetListening Nethereum.RPC.NetApiService::<Listening>k__BackingField
	RuntimeObject* ___U3CListeningU3Ek__BackingField_1;
	// Nethereum.RPC.Net.INetPeerCount Nethereum.RPC.NetApiService::<PeerCount>k__BackingField
	RuntimeObject* ___U3CPeerCountU3Ek__BackingField_2;
	// Nethereum.RPC.Net.INetVersion Nethereum.RPC.NetApiService::<Version>k__BackingField
	RuntimeObject* ___U3CVersionU3Ek__BackingField_3;
};

// Nethereum.RPC.PersonalApiService
struct PersonalApiService_tC10DBC037F65B1A149E47B653C05FCE16AFBA115  : public RpcClientWrapper_t639264795AA92FB47F8CBBE7183EEBFE0A565854
{
	// Nethereum.RPC.Personal.IPersonalListAccounts Nethereum.RPC.PersonalApiService::<ListAccounts>k__BackingField
	RuntimeObject* ___U3CListAccountsU3Ek__BackingField_1;
	// Nethereum.RPC.Personal.IPersonalNewAccount Nethereum.RPC.PersonalApiService::<NewAccount>k__BackingField
	RuntimeObject* ___U3CNewAccountU3Ek__BackingField_2;
	// Nethereum.RPC.Personal.IPersonalUnlockAccount Nethereum.RPC.PersonalApiService::<UnlockAccount>k__BackingField
	RuntimeObject* ___U3CUnlockAccountU3Ek__BackingField_3;
	// Nethereum.RPC.Personal.IPersonalLockAccount Nethereum.RPC.PersonalApiService::<LockAccount>k__BackingField
	RuntimeObject* ___U3CLockAccountU3Ek__BackingField_4;
	// Nethereum.RPC.Personal.IPersonalSignAndSendTransaction Nethereum.RPC.PersonalApiService::<SignAndSendTransaction>k__BackingField
	RuntimeObject* ___U3CSignAndSendTransactionU3Ek__BackingField_5;
};

// Nethereum.RPC.ShhApiService
struct ShhApiService_t80D6BECE4BFC36DD64EA5C1822EFA05F0F4A0E96  : public RpcClientWrapper_t639264795AA92FB47F8CBBE7183EEBFE0A565854
{
	// Nethereum.RPC.Shh.IShhKeyPair Nethereum.RPC.ShhApiService::<KeyPair>k__BackingField
	RuntimeObject* ___U3CKeyPairU3Ek__BackingField_1;
	// Nethereum.RPC.Shh.IShhVersion Nethereum.RPC.ShhApiService::<Version>k__BackingField
	RuntimeObject* ___U3CVersionU3Ek__BackingField_2;
	// Nethereum.RPC.Shh.IShhSymKey Nethereum.RPC.ShhApiService::<SymKey>k__BackingField
	RuntimeObject* ___U3CSymKeyU3Ek__BackingField_3;
	// Nethereum.RPC.Shh.IShhMessageFilter Nethereum.RPC.ShhApiService::<MessageFilter>k__BackingField
	RuntimeObject* ___U3CMessageFilterU3Ek__BackingField_4;
	// Nethereum.RPC.Shh.IShhPost Nethereum.RPC.ShhApiService::<Post>k__BackingField
	RuntimeObject* ___U3CPostU3Ek__BackingField_5;
};

// Nethereum.Model.SignedLegacyTransactionBase
struct SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F  : public SignedTransaction_t397E604239E3BB0594398EFC6813192C24863818
{
	// Nethereum.Model.RLPSignedDataHashBuilder Nethereum.Model.SignedLegacyTransactionBase::<RlpSignerEncoder>k__BackingField
	RLPSignedDataHashBuilder_t056C8BC2756CCB3EDB33F58995EAAE59EF2887F4* ___U3CRlpSignerEncoderU3Ek__BackingField_1;
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

// System.Net.Http.ClientCertificateOption
struct ClientCertificateOption_t91349764AAC7F1EA1B8D9C551EB9CFE81E578813 
{
	// System.Int32 System.Net.Http.ClientCertificateOption::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.ConstructorHandling
struct ConstructorHandling_tBAFC8D79770520A5FE179D99B00E863ECFD41FBC 
{
	// System.Int32 Newtonsoft.Json.ConstructorHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.DateFormatHandling
struct DateFormatHandling_t572F7AE07F2480341B7A6A66E2B76630B513F797 
{
	// System.Int32 Newtonsoft.Json.DateFormatHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.DateParseHandling
struct DateParseHandling_t9C3D12600E1C83D014F016D8B1F88411FF41263C 
{
	// System.Int32 Newtonsoft.Json.DateParseHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.DateTimeZoneHandling
struct DateTimeZoneHandling_tC6052391FA7B95E92AFFABA381532EEFA193FB9F 
{
	// System.Int32 Newtonsoft.Json.DateTimeZoneHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.DefaultValueHandling
struct DefaultValueHandling_t996735A0C7CC889B941C53B522E62A988B47402A 
{
	// System.Int32 Newtonsoft.Json.DefaultValueHandling::value__
	int32_t ___value___2;
};

// Nethereum.Contracts.Services.EthApiContractService
struct EthApiContractService_t59E062A2A158CB66E96C7858A003A32427F337B5  : public EthApiService_tD9B555F28B0008E999D5B0EEC8A063418522921A
{
	// Nethereum.Contracts.Standards.ERC20.ERC20Service Nethereum.Contracts.Services.EthApiContractService::<ERC20>k__BackingField
	ERC20Service_tBAC6D3868CE498F01EA1A11F8850CE3724737332* ___U3CERC20U3Ek__BackingField_25;
	// Nethereum.Contracts.Standards.ERC721.ERC721Service Nethereum.Contracts.Services.EthApiContractService::<ERC721>k__BackingField
	ERC721Service_tF8C45C07FEEFDEBBD4948DAC26C8BD00047C7EAA* ___U3CERC721U3Ek__BackingField_26;
	// Nethereum.Contracts.Standards.ERC1155.ERC1155Service Nethereum.Contracts.Services.EthApiContractService::<ERC1155>k__BackingField
	ERC1155Service_t5929D51764AC25462FF1071BAA5AFD39D39AC0E4* ___U3CERC1155U3Ek__BackingField_27;
	// Nethereum.Contracts.Standards.ERC1271.ERC1271Service Nethereum.Contracts.Services.EthApiContractService::<ERC1271>k__BackingField
	ERC1271Service_t5D362FEC8F9FB4A4A43BC1094CDC1E4EFE768893* ___U3CERC1271U3Ek__BackingField_28;
	// Nethereum.Contracts.Standards.ProofOfHumanity.ProofOfHumanityService Nethereum.Contracts.Services.EthApiContractService::<ProofOfHumanity>k__BackingField
	ProofOfHumanityService_t9FE5FAAF5CE7C444E3C02617BB45765D9D18E0EB* ___U3CProofOfHumanityU3Ek__BackingField_29;
	// Nethereum.Contracts.Services.IEthGetContractTransactionErrorReason Nethereum.Contracts.Services.EthApiContractService::<GetContractTransactionErrorReason>k__BackingField
	RuntimeObject* ___U3CGetContractTransactionErrorReasonU3Ek__BackingField_30;
};

// Newtonsoft.Json.FloatFormatHandling
struct FloatFormatHandling_t6D69CDEC3FBD6B43B168CFE1033506CE3F50EE8C 
{
	// System.Int32 Newtonsoft.Json.FloatFormatHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.FloatParseHandling
struct FloatParseHandling_tB923F780A6087CF142D4D00486E840D870ECDA5D 
{
	// System.Int32 Newtonsoft.Json.FloatParseHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.Formatting
struct Formatting_t38B3D1A17CE6825AA2C906374AD2434FD10ED7EC 
{
	// System.Int32 Newtonsoft.Json.Formatting::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.MetadataPropertyHandling
struct MetadataPropertyHandling_tA3EC6C7A5429A693E0370D712C7850854F60B6B2 
{
	// System.Int32 Newtonsoft.Json.MetadataPropertyHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.MissingMemberHandling
struct MissingMemberHandling_tD1037A7561C66E2015BA288AF16A9F2DC9307FA5 
{
	// System.Int32 Newtonsoft.Json.MissingMemberHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.NullValueHandling
struct NullValueHandling_t4BDE6EFA837EAE85524EDF0FE21D0B9668F4FD6A 
{
	// System.Int32 Newtonsoft.Json.NullValueHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.ObjectCreationHandling
struct ObjectCreationHandling_tA895C8A4A1D7444BBEDD0E29D7490C625BF93131 
{
	// System.Int32 Newtonsoft.Json.ObjectCreationHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.PreserveReferencesHandling
struct PreserveReferencesHandling_t435BCAA15E433D8D2F5DB0D05A41E7E564671737 
{
	// System.Int32 Newtonsoft.Json.PreserveReferencesHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.ReferenceLoopHandling
struct ReferenceLoopHandling_t7D243173DF188E0478CF37E7C940CDDCAC1E0D20 
{
	// System.Int32 Newtonsoft.Json.ReferenceLoopHandling::value__
	int32_t ___value___2;
};

// Nethereum.JsonRpc.Client.RpcClient
struct RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9  : public ClientBase_t533FD421B82032ED1415E006F0925A0B7E6DB73B
{
	// System.Net.Http.Headers.AuthenticationHeaderValue Nethereum.JsonRpc.Client.RpcClient::_authHeaderValue
	AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* ____authHeaderValue_3;
	// System.Uri Nethereum.JsonRpc.Client.RpcClient::_baseUrl
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____baseUrl_4;
	// System.Net.Http.HttpClientHandler Nethereum.JsonRpc.Client.RpcClient::_httpClientHandler
	HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD* ____httpClientHandler_5;
	// Microsoft.Extensions.Logging.ILogger Nethereum.JsonRpc.Client.RpcClient::_log
	RuntimeObject* ____log_6;
	// Newtonsoft.Json.JsonSerializerSettings Nethereum.JsonRpc.Client.RpcClient::_jsonSerializerSettings
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ____jsonSerializerSettings_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Nethereum.JsonRpc.Client.RpcClient::_firstHttpClient
	bool ____firstHttpClient_8;
	// System.Net.Http.HttpClient Nethereum.JsonRpc.Client.RpcClient::_httpClient
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ____httpClient_9;
	// System.Net.Http.HttpClient Nethereum.JsonRpc.Client.RpcClient::_httpClient2
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ____httpClient2_10;
	// System.Boolean Nethereum.JsonRpc.Client.RpcClient::_rotateHttpClients
	bool ____rotateHttpClients_11;
	// System.DateTime Nethereum.JsonRpc.Client.RpcClient::_httpClientLastCreatedAt
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____httpClientLastCreatedAt_12;
	// System.Object Nethereum.JsonRpc.Client.RpcClient::_lockObject
	RuntimeObject* ____lockObject_13;
};

// Nethereum.Model.SignedLegacyTransaction
struct SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A  : public SignedLegacyTransactionBase_t8D2A778AD502B654B790EE7FC80805DE0927863F
{
};

// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.StringEscapeHandling
struct StringEscapeHandling_t6C5E715C7EA7676CB7369DBE8EB487724B07F354 
{
	// System.Int32 Newtonsoft.Json.StringEscapeHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.TypeNameAssemblyFormatHandling
struct TypeNameAssemblyFormatHandling_t9FB27147BC97FE6AB2CC242DA377B594D900491E 
{
	// System.Int32 Newtonsoft.Json.TypeNameAssemblyFormatHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.TypeNameHandling
struct TypeNameHandling_t4D77402771E5E38DE1AE390B60542985276D9D69 
{
	// System.Int32 Newtonsoft.Json.TypeNameHandling::value__
	int32_t ___value___2;
};

// System.UriIdnScope
struct UriIdnScope_t001CC97A6F977E9BB7DB855CC6BA415A7F47491F 
{
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;
};

// System.Uri/Flags
struct Flags_t47CF4DB4036A6A539AFA6EE39C75F772E865E897 
{
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;
};

// System.Nullable`1<Newtonsoft.Json.ConstructorHandling>
struct Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.Formatting>
struct Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling>
struct Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling>
struct Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling>
struct Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling>
struct Nullable_1_t762E380C63D6C0CB1E8ADBCADE57240FB061367F 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Net.Http.HttpClientHandler
struct HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD  : public HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17
{
	// System.Net.Http.IMonoHttpClientHandler System.Net.Http.HttpClientHandler::_delegatingHandler
	RuntimeObject* ____delegatingHandler_0;
	// System.Net.Http.ClientCertificateOption System.Net.Http.HttpClientHandler::_clientCertificateOptions
	int32_t ____clientCertificateOptions_1;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
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

// System.Nullable`1<System.Runtime.Serialization.StreamingContext>
struct Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___value_1;
};

// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF  : public RuntimeObject
{
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializerSettings::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_2;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_3;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializerSettings::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_4;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializerSettings::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_5;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_6;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializerSettings::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_7;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializerSettings::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_8;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_9;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializerSettings::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_10;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializerSettings::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_11;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_maxDepthSet
	bool ____maxDepthSet_12;
	// System.String Newtonsoft.Json.JsonSerializerSettings::_dateFormatString
	String_t* ____dateFormatString_13;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_dateFormatStringSet
	bool ____dateFormatStringSet_14;
	// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameAssemblyFormatHandling
	Nullable_1_t762E380C63D6C0CB1E8ADBCADE57240FB061367F ____typeNameAssemblyFormatHandling_15;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.JsonSerializerSettings::_defaultValueHandling
	Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 ____defaultValueHandling_16;
	// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling> Newtonsoft.Json.JsonSerializerSettings::_preserveReferencesHandling
	Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 ____preserveReferencesHandling_17;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.JsonSerializerSettings::_nullValueHandling
	Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 ____nullValueHandling_18;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.JsonSerializerSettings::_objectCreationHandling
	Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D ____objectCreationHandling_19;
	// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling> Newtonsoft.Json.JsonSerializerSettings::_missingMemberHandling
	Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 ____missingMemberHandling_20;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonSerializerSettings::_referenceLoopHandling
	Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 ____referenceLoopHandling_21;
	// System.Nullable`1<System.Runtime.Serialization.StreamingContext> Newtonsoft.Json.JsonSerializerSettings::_context
	Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A ____context_22;
	// System.Nullable`1<Newtonsoft.Json.ConstructorHandling> Newtonsoft.Json.JsonSerializerSettings::_constructorHandling
	Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 ____constructorHandling_23;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameHandling
	Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 ____typeNameHandling_24;
	// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling> Newtonsoft.Json.JsonSerializerSettings::_metadataPropertyHandling
	Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE ____metadataPropertyHandling_25;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_26;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializerSettings::<ContractResolver>k__BackingField
	RuntimeObject* ___U3CContractResolverU3Ek__BackingField_27;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializerSettings::<EqualityComparer>k__BackingField
	RuntimeObject* ___U3CEqualityComparerU3Ek__BackingField_28;
	// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver> Newtonsoft.Json.JsonSerializerSettings::<ReferenceResolverProvider>k__BackingField
	Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2* ___U3CReferenceResolverProviderU3Ek__BackingField_29;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializerSettings::<TraceWriter>k__BackingField
	RuntimeObject* ___U3CTraceWriterU3Ek__BackingField_30;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializerSettings::<SerializationBinder>k__BackingField
	RuntimeObject* ___U3CSerializationBinderU3Ek__BackingField_31;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializerSettings::<Error>k__BackingField
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___U3CErrorU3Ek__BackingField_32;
};

// <Module>

// <Module>

// Nethereum.Util.AddressUtil
struct AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A_StaticFields
{
	// Nethereum.Util.AddressUtil Nethereum.Util.AddressUtil::_current
	AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* ____current_0;
};

// Nethereum.Util.AddressUtil

// System.Net.Http.Headers.AuthenticationHeaderValue

// System.Net.Http.Headers.AuthenticationHeaderValue

// Nethereum.BlockchainProcessing.Services.BlockchainProcessingService

// Nethereum.BlockchainProcessing.Services.BlockchainProcessingService

// Nethereum.Util.Sha3Keccack
struct Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_StaticFields
{
	// Nethereum.Util.Sha3Keccack Nethereum.Util.Sha3Keccack::<Current>k__BackingField
	Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* ___U3CCurrentU3Ek__BackingField_0;
};

// Nethereum.Util.Sha3Keccack

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Nethereum.Util.UnitConversion
struct UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823_StaticFields
{
	// Nethereum.Util.UnitConversion Nethereum.Util.UnitConversion::_convert
	UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* ____convert_0;
};

// Nethereum.Util.UnitConversion

// Nethereum.Web3.Web3
struct Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253_StaticFields
{
	// Nethereum.Util.AddressUtil Nethereum.Web3.Web3::AddressUtil
	AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* ___AddressUtil_0;
	// Nethereum.Util.Sha3Keccack Nethereum.Web3.Web3::Sha3Keccack
	Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* ___Sha3Keccack_1;
	// Nethereum.Util.UnitConversion Nethereum.Web3.Web3::<Convert>k__BackingField
	UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* ___U3CConvertU3Ek__BackingField_2;
};

// Nethereum.Web3.Web3

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

// Nethereum.RPC.DebugNode.DebugApiService

// Nethereum.RPC.DebugNode.DebugApiService

// Nethereum.RPC.FeeSuggestionService

// Nethereum.RPC.FeeSuggestionService

// Nethereum.RPC.NetApiService

// Nethereum.RPC.NetApiService

// Nethereum.RPC.PersonalApiService

// Nethereum.RPC.PersonalApiService

// Nethereum.RPC.ShhApiService

// Nethereum.RPC.ShhApiService

// System.Void

// System.Void

// Nethereum.Contracts.Services.EthApiContractService

// Nethereum.Contracts.Services.EthApiContractService

// Nethereum.JsonRpc.Client.RpcClient
struct RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_StaticFields
{
	// System.Int32 Nethereum.JsonRpc.Client.RpcClient::<MaximumConnectionsPerServer>k__BackingField
	int32_t ___U3CMaximumConnectionsPerServerU3Ek__BackingField_2;
};

// Nethereum.JsonRpc.Client.RpcClient

// Nethereum.Model.SignedLegacyTransaction
struct SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields
{
	// System.Numerics.BigInteger Nethereum.Model.SignedLegacyTransaction::DEFAULT_GAS_PRICE
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___DEFAULT_GAS_PRICE_2;
	// System.Numerics.BigInteger Nethereum.Model.SignedLegacyTransaction::DEFAULT_GAS_LIMIT
	BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F ___DEFAULT_GAS_LIMIT_3;
};

// Nethereum.Model.SignedLegacyTransaction

// System.Net.Http.HttpClientHandler

// System.Net.Http.HttpClientHandler

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

// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_StaticFields
{
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::DefaultContext
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___DefaultContext_0;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::DefaultCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___DefaultCulture_1;
};

// Newtonsoft.Json.JsonSerializerSettings
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Web3::set_Client(Nethereum.JsonRpc.Client.IClient)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Web3_set_Client_m2F4E78BAA883694BE9FD23A9F2FA48A63B2AB4CE_inline (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Web3::InitialiseDefaultGasAndGasPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_InitialiseDefaultGasAndGasPrice_m14C5C860AB84A85B698E383FE6B35593CE8AA83D (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Web3::.ctor(Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3__ctor_m8A46147B6C0981FD8017924F694089FA78A068B5 (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_client, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Web3::set_TransactionManager(Nethereum.RPC.TransactionManagers.ITransactionManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_set_TransactionManager_m8375D66A514D3C2288D045BE8B75B327E8C064B4 (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// Nethereum.RPC.TransactionManagers.ITransactionManager Nethereum.Web3.Web3::get_TransactionManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Web3_get_TransactionManager_m97F530310C76FFAC7A4D6E5CCC23D2E5825C9F5B (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, const RuntimeMethod* method) ;
// Nethereum.JsonRpc.Client.IClient Nethereum.Web3.Web3::get_Client()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Web3_get_Client_mBBFB132EC428C89B1D5B18283D08FE521FBD2F0A_inline (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Web3::InitialiseDefaultRpcClient(System.String,Microsoft.Extensions.Logging.ILogger,System.Net.Http.Headers.AuthenticationHeaderValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_InitialiseDefaultRpcClient_m4A91D98CBF927F980490CC58F2EA93319AE2806E (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, String_t* ___0_url, RuntimeObject* ___1_log, AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* ___2_authenticationHeader, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Web3::.ctor(System.String,Microsoft.Extensions.Logging.ILogger,System.Net.Http.Headers.AuthenticationHeaderValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3__ctor_m01C0CFF6A7B2C95F6E9E17C6C632D20D56E3E6F8 (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, String_t* ___0_url, RuntimeObject* ___1_log, AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* ___2_authenticationHeader, const RuntimeMethod* method) ;
// Nethereum.Contracts.Services.IEthApiContractService Nethereum.Web3.Web3::get_Eth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Web3_get_Eth_m63D232C654BBA776B3406405BBF978BEABF7BB68_inline (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Contracts.Services.EthApiContractService::.ctor(Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EthApiContractService__ctor_m5C3C9B8788F13ABE39C122EE4ABF4EDE397096EF (EthApiContractService_t59E062A2A158CB66E96C7858A003A32427F337B5* __this, RuntimeObject* ___0_client, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Web3::set_Eth(Nethereum.Contracts.Services.IEthApiContractService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Web3_set_Eth_m57235E7B086CD2F25D6A3DC8CFEF049C9E08358A_inline (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.BlockchainProcessing.Services.BlockchainProcessingService::.ctor(Nethereum.Contracts.Services.IEthApiContractService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockchainProcessingService__ctor_m12CDF40ADB205BE9A6AC50FB0A73792EC22EB86C (BlockchainProcessingService_tF452F872A6BCBDAB1DAA642B2F71B2F0BE165D24* __this, RuntimeObject* ___0_ethApiContractService, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Web3::set_Processing(Nethereum.BlockchainProcessing.Services.IBlockchainProcessingService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Web3_set_Processing_m3B11C3AA24AB698D2117FDE5908C379DEC88DD4D_inline (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.RPC.ShhApiService::.ctor(Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShhApiService__ctor_m87B4E89B9189A02C5585DB4E6DAB03607B67752B (ShhApiService_t80D6BECE4BFC36DD64EA5C1822EFA05F0F4A0E96* __this, RuntimeObject* ___0_client, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Web3::set_Shh(Nethereum.RPC.IShhApiService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Web3_set_Shh_mE707B217043B4EE828C4F44881468CED39AEBAA4_inline (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.RPC.NetApiService::.ctor(Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetApiService__ctor_m9B2E6BF5D3463F0F7992F92AC1A611C74DD4655B (NetApiService_t90FE9D5D7662E4131A5F722B57B8DDF326514F96* __this, RuntimeObject* ___0_client, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Web3::set_Net(Nethereum.RPC.INetApiService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Web3_set_Net_m3EEC6DB979AA59F22642496F69B8B60F53D756AC_inline (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.RPC.PersonalApiService::.ctor(Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersonalApiService__ctor_m5B2D69E2276A5FDE3E2F6738BF52A73BAA4E3D7B (PersonalApiService_tC10DBC037F65B1A149E47B653C05FCE16AFBA115* __this, RuntimeObject* ___0_client, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Web3::set_Personal(Nethereum.RPC.IPersonalApiService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Web3_set_Personal_m05F9DDD799A979DE25C2AF61B048F8FCD4ADDD0D_inline (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.RPC.FeeSuggestionService::.ctor(Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeeSuggestionService__ctor_m57F55FE43F2789F03401028074B79B2806C14BAE (FeeSuggestionService_tAE088089906388255787A65D7EBF04CA24F61ACA* __this, RuntimeObject* ___0_client, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Web3::set_FeeSuggestion(Nethereum.RPC.FeeSuggestionService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Web3_set_FeeSuggestion_m5AE08C28ACC4CE6CE69860F37F25DF88BBB7E4BA_inline (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, FeeSuggestionService_tAE088089906388255787A65D7EBF04CA24F61ACA* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.RPC.DebugNode.DebugApiService::.ctor(Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugApiService__ctor_mAF73FB5FBFF1F549B849F3505488E69DD6598217 (DebugApiService_tE10FEBC2C4ED3CF94BED98E9CE879AD882E18E3A* __this, RuntimeObject* ___0_client, const RuntimeMethod* method) ;
// System.Void Nethereum.Web3.Web3::set_Debug(Nethereum.RPC.DebugNode.IDebugApiService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Web3_set_Debug_m9275DF4986DAD3FADDBD99CB7ADFB53AA62D114F_inline (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___0_uriString, const RuntimeMethod* method) ;
// System.Void Nethereum.JsonRpc.Client.RpcClient::.ctor(System.Uri,System.Net.Http.Headers.AuthenticationHeaderValue,Newtonsoft.Json.JsonSerializerSettings,System.Net.Http.HttpClientHandler,Microsoft.Extensions.Logging.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcClient__ctor_mBFE198548929936548EF742AF25626EC2DC394F0 (RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_baseUrl, AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* ___1_authHeaderValue, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___2_jsonSerializerSettings, HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD* ___3_httpClientHandler, RuntimeObject* ___4_log, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.AddressUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddressUtil__ctor_mFBD8B7B116001BE2851469A24B3C41095B7253B1 (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.Sha3Keccack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha3Keccack__ctor_m1A1B72B31D347C8FEEAB51607616A6C4992DE7D0 (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Util.UnitConversion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitConversion__ctor_m5E00A88113E7393DA8AA839644B151321771530E (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* __this, const RuntimeMethod* method) ;
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
// System.Void Nethereum.Web3.Web3::.ctor(Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3__ctor_m8A46147B6C0981FD8017924F694089FA78A068B5 (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_client, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_client;
		Web3_set_Client_m2F4E78BAA883694BE9FD23A9F2FA48A63B2AB4CE_inline(__this, L_0, NULL);
		VirtualActionInvoker0::Invoke(9 /* System.Void Nethereum.Web3.Web3::InitialiseInnerServices() */, __this);
		Web3_InitialiseDefaultGasAndGasPrice_m14C5C860AB84A85B698E383FE6B35593CE8AA83D(__this, NULL);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::.ctor(Nethereum.RPC.Accounts.IAccount,Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3__ctor_mC8177409C95BFF049BFE6EFDEBB6D9F9216588D3 (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_account, RuntimeObject* ___1_client, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAccount_t2D498E1E6AF11CFDB79F07A7D78532E396F852D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITransactionManager_t93C7C810748D626CB18E930ADCB2A2571F8426A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___1_client;
		Web3__ctor_m8A46147B6C0981FD8017924F694089FA78A068B5(__this, L_0, NULL);
		RuntimeObject* L_1 = ___0_account;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* Nethereum.RPC.TransactionManagers.ITransactionManager Nethereum.RPC.Accounts.IAccount::get_TransactionManager() */, IAccount_t2D498E1E6AF11CFDB79F07A7D78532E396F852D0_il2cpp_TypeInfo_var, L_1);
		Web3_set_TransactionManager_m8375D66A514D3C2288D045BE8B75B327E8C064B4(__this, L_2, NULL);
		RuntimeObject* L_3;
		L_3 = Web3_get_TransactionManager_m97F530310C76FFAC7A4D6E5CCC23D2E5825C9F5B(__this, NULL);
		RuntimeObject* L_4;
		L_4 = Web3_get_Client_mBBFB132EC428C89B1D5B18283D08FE521FBD2F0A_inline(__this, NULL);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Nethereum.RPC.TransactionManagers.ITransactionManager::set_Client(Nethereum.JsonRpc.Client.IClient) */, ITransactionManager_t93C7C810748D626CB18E930ADCB2A2571F8426A1_il2cpp_TypeInfo_var, L_3, L_4);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::.ctor(System.String,Microsoft.Extensions.Logging.ILogger,System.Net.Http.Headers.AuthenticationHeaderValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3__ctor_m01C0CFF6A7B2C95F6E9E17C6C632D20D56E3E6F8 (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, String_t* ___0_url, RuntimeObject* ___1_log, AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* ___2_authenticationHeader, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_url;
		RuntimeObject* L_1 = ___1_log;
		AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* L_2 = ___2_authenticationHeader;
		Web3_InitialiseDefaultRpcClient_m4A91D98CBF927F980490CC58F2EA93319AE2806E(__this, L_0, L_1, L_2, NULL);
		VirtualActionInvoker0::Invoke(9 /* System.Void Nethereum.Web3.Web3::InitialiseInnerServices() */, __this);
		Web3_InitialiseDefaultGasAndGasPrice_m14C5C860AB84A85B698E383FE6B35593CE8AA83D(__this, NULL);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::.ctor(Nethereum.RPC.Accounts.IAccount,System.String,Microsoft.Extensions.Logging.ILogger,System.Net.Http.Headers.AuthenticationHeaderValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3__ctor_m5425306F9B35BA3091F615B36468C5A4E1A3B842 (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_account, String_t* ___1_url, RuntimeObject* ___2_log, AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* ___3_authenticationHeader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAccount_t2D498E1E6AF11CFDB79F07A7D78532E396F852D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITransactionManager_t93C7C810748D626CB18E930ADCB2A2571F8426A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___1_url;
		RuntimeObject* L_1 = ___2_log;
		AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* L_2 = ___3_authenticationHeader;
		Web3__ctor_m01C0CFF6A7B2C95F6E9E17C6C632D20D56E3E6F8(__this, L_0, L_1, L_2, NULL);
		RuntimeObject* L_3 = ___0_account;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* Nethereum.RPC.TransactionManagers.ITransactionManager Nethereum.RPC.Accounts.IAccount::get_TransactionManager() */, IAccount_t2D498E1E6AF11CFDB79F07A7D78532E396F852D0_il2cpp_TypeInfo_var, L_3);
		Web3_set_TransactionManager_m8375D66A514D3C2288D045BE8B75B327E8C064B4(__this, L_4, NULL);
		RuntimeObject* L_5;
		L_5 = Web3_get_TransactionManager_m97F530310C76FFAC7A4D6E5CCC23D2E5825C9F5B(__this, NULL);
		RuntimeObject* L_6;
		L_6 = Web3_get_Client_mBBFB132EC428C89B1D5B18283D08FE521FBD2F0A_inline(__this, NULL);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Nethereum.RPC.TransactionManagers.ITransactionManager::set_Client(Nethereum.JsonRpc.Client.IClient) */, ITransactionManager_t93C7C810748D626CB18E930ADCB2A2571F8426A1_il2cpp_TypeInfo_var, L_5, L_6);
		return;
	}
}
// Nethereum.RPC.TransactionManagers.ITransactionManager Nethereum.Web3.Web3::get_TransactionManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Web3_get_TransactionManager_m97F530310C76FFAC7A4D6E5CCC23D2E5825C9F5B (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEthApiService_t7D25B9BDABE07D6FA9D4302926E7429B5F8C4D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Web3_get_Eth_m63D232C654BBA776B3406405BBF978BEABF7BB68_inline(__this, NULL);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* Nethereum.RPC.TransactionManagers.ITransactionManager Nethereum.RPC.IEthApiService::get_TransactionManager() */, IEthApiService_t7D25B9BDABE07D6FA9D4302926E7429B5F8C4D8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Nethereum.Web3.Web3::set_TransactionManager(Nethereum.RPC.TransactionManagers.ITransactionManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_set_TransactionManager_m8375D66A514D3C2288D045BE8B75B327E8C064B4 (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEthApiService_t7D25B9BDABE07D6FA9D4302926E7429B5F8C4D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Web3_get_Eth_m63D232C654BBA776B3406405BBF978BEABF7BB68_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_value;
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void Nethereum.RPC.IEthApiService::set_TransactionManager(Nethereum.RPC.TransactionManagers.ITransactionManager) */, IEthApiService_t7D25B9BDABE07D6FA9D4302926E7429B5F8C4D8E_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// Nethereum.JsonRpc.Client.IClient Nethereum.Web3.Web3::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Web3_get_Client_mBBFB132EC428C89B1D5B18283D08FE521FBD2F0A (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CClientU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Nethereum.Web3.Web3::set_Client(Nethereum.JsonRpc.Client.IClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_set_Client_m2F4E78BAA883694BE9FD23A9F2FA48A63B2AB4CE (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CClientU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// Nethereum.Contracts.Services.IEthApiContractService Nethereum.Web3.Web3::get_Eth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Web3_get_Eth_m63D232C654BBA776B3406405BBF978BEABF7BB68 (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CEthU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Nethereum.Web3.Web3::set_Eth(Nethereum.Contracts.Services.IEthApiContractService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_set_Eth_m57235E7B086CD2F25D6A3DC8CFEF049C9E08358A (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CEthU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEthU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::set_Shh(Nethereum.RPC.IShhApiService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_set_Shh_mE707B217043B4EE828C4F44881468CED39AEBAA4 (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CShhU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CShhU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::set_Net(Nethereum.RPC.INetApiService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_set_Net_m3EEC6DB979AA59F22642496F69B8B60F53D756AC (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CNetU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNetU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::set_Personal(Nethereum.RPC.IPersonalApiService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_set_Personal_m05F9DDD799A979DE25C2AF61B048F8FCD4ADDD0D (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CPersonalU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPersonalU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::set_Processing(Nethereum.BlockchainProcessing.Services.IBlockchainProcessingService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_set_Processing_m3B11C3AA24AB698D2117FDE5908C379DEC88DD4D (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CProcessingU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProcessingU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::set_Debug(Nethereum.RPC.DebugNode.IDebugApiService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_set_Debug_m9275DF4986DAD3FADDBD99CB7ADFB53AA62D114F (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CDebugU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDebugU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::set_FeeSuggestion(Nethereum.RPC.FeeSuggestionService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_set_FeeSuggestion_m5AE08C28ACC4CE6CE69860F37F25DF88BBB7E4BA (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, FeeSuggestionService_tAE088089906388255787A65D7EBF04CA24F61ACA* ___0_value, const RuntimeMethod* method) 
{
	{
		FeeSuggestionService_tAE088089906388255787A65D7EBF04CA24F61ACA* L_0 = ___0_value;
		__this->___U3CFeeSuggestionU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFeeSuggestionU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// Nethereum.RPC.TransactionReceipts.ITransactionReceiptService Nethereum.Web3.Web3::get_TransactionReceiptPolling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Web3_get_TransactionReceiptPolling_m3858CBD0A80D4E79F499B528939E1E42812F2D72 (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITransactionManager_t93C7C810748D626CB18E930ADCB2A2571F8426A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = Web3_get_TransactionManager_m97F530310C76FFAC7A4D6E5CCC23D2E5825C9F5B(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_000c:
	{
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* Nethereum.RPC.TransactionReceipts.ITransactionReceiptService Nethereum.RPC.TransactionManagers.ITransactionManager::get_TransactionReceiptService() */, ITransactionManager_t93C7C810748D626CB18E930ADCB2A2571F8426A1_il2cpp_TypeInfo_var, G_B2_0);
		return L_2;
	}
}
// System.Void Nethereum.Web3.Web3::InitialiseDefaultGasAndGasPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_InitialiseDefaultGasAndGasPrice_m14C5C860AB84A85B698E383FE6B35593CE8AA83D (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITransactionManager_t93C7C810748D626CB18E930ADCB2A2571F8426A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Web3_get_TransactionManager_m97F530310C76FFAC7A4D6E5CCC23D2E5825C9F5B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_1 = ((SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var))->___DEFAULT_GAS_LIMIT_3;
		InterfaceActionInvoker1< BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F >::Invoke(3 /* System.Void Nethereum.RPC.TransactionManagers.ITransactionManager::set_DefaultGas(System.Numerics.BigInteger) */, ITransactionManager_t93C7C810748D626CB18E930ADCB2A2571F8426A1_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2;
		L_2 = Web3_get_TransactionManager_m97F530310C76FFAC7A4D6E5CCC23D2E5825C9F5B(__this, NULL);
		BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F L_3 = ((SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_StaticFields*)il2cpp_codegen_static_fields_for(SignedLegacyTransaction_t02ADFFE26EEC9EC935D0F95A34C6616490DD342A_il2cpp_TypeInfo_var))->___DEFAULT_GAS_PRICE_2;
		InterfaceActionInvoker1< BigInteger_tF7779A0AA6D6B9BE0E0C1C293E7708765DEF7D0F >::Invoke(2 /* System.Void Nethereum.RPC.TransactionManagers.ITransactionManager::set_DefaultGasPrice(System.Numerics.BigInteger) */, ITransactionManager_t93C7C810748D626CB18E930ADCB2A2571F8426A1_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::InitialiseInnerServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_InitialiseInnerServices_m444F22E8033029801B02BDEA76C47D35274BEDF6 (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockchainProcessingService_tF452F872A6BCBDAB1DAA642B2F71B2F0BE165D24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugApiService_tE10FEBC2C4ED3CF94BED98E9CE879AD882E18E3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EthApiContractService_t59E062A2A158CB66E96C7858A003A32427F337B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeeSuggestionService_tAE088089906388255787A65D7EBF04CA24F61ACA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetApiService_t90FE9D5D7662E4131A5F722B57B8DDF326514F96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersonalApiService_tC10DBC037F65B1A149E47B653C05FCE16AFBA115_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShhApiService_t80D6BECE4BFC36DD64EA5C1822EFA05F0F4A0E96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Web3_get_Client_mBBFB132EC428C89B1D5B18283D08FE521FBD2F0A_inline(__this, NULL);
		EthApiContractService_t59E062A2A158CB66E96C7858A003A32427F337B5* L_1 = (EthApiContractService_t59E062A2A158CB66E96C7858A003A32427F337B5*)il2cpp_codegen_object_new(EthApiContractService_t59E062A2A158CB66E96C7858A003A32427F337B5_il2cpp_TypeInfo_var);
		EthApiContractService__ctor_m5C3C9B8788F13ABE39C122EE4ABF4EDE397096EF(L_1, L_0, NULL);
		Web3_set_Eth_m57235E7B086CD2F25D6A3DC8CFEF049C9E08358A_inline(__this, L_1, NULL);
		RuntimeObject* L_2;
		L_2 = Web3_get_Eth_m63D232C654BBA776B3406405BBF978BEABF7BB68_inline(__this, NULL);
		BlockchainProcessingService_tF452F872A6BCBDAB1DAA642B2F71B2F0BE165D24* L_3 = (BlockchainProcessingService_tF452F872A6BCBDAB1DAA642B2F71B2F0BE165D24*)il2cpp_codegen_object_new(BlockchainProcessingService_tF452F872A6BCBDAB1DAA642B2F71B2F0BE165D24_il2cpp_TypeInfo_var);
		BlockchainProcessingService__ctor_m12CDF40ADB205BE9A6AC50FB0A73792EC22EB86C(L_3, L_2, NULL);
		Web3_set_Processing_m3B11C3AA24AB698D2117FDE5908C379DEC88DD4D_inline(__this, L_3, NULL);
		RuntimeObject* L_4;
		L_4 = Web3_get_Client_mBBFB132EC428C89B1D5B18283D08FE521FBD2F0A_inline(__this, NULL);
		ShhApiService_t80D6BECE4BFC36DD64EA5C1822EFA05F0F4A0E96* L_5 = (ShhApiService_t80D6BECE4BFC36DD64EA5C1822EFA05F0F4A0E96*)il2cpp_codegen_object_new(ShhApiService_t80D6BECE4BFC36DD64EA5C1822EFA05F0F4A0E96_il2cpp_TypeInfo_var);
		ShhApiService__ctor_m87B4E89B9189A02C5585DB4E6DAB03607B67752B(L_5, L_4, NULL);
		Web3_set_Shh_mE707B217043B4EE828C4F44881468CED39AEBAA4_inline(__this, L_5, NULL);
		RuntimeObject* L_6;
		L_6 = Web3_get_Client_mBBFB132EC428C89B1D5B18283D08FE521FBD2F0A_inline(__this, NULL);
		NetApiService_t90FE9D5D7662E4131A5F722B57B8DDF326514F96* L_7 = (NetApiService_t90FE9D5D7662E4131A5F722B57B8DDF326514F96*)il2cpp_codegen_object_new(NetApiService_t90FE9D5D7662E4131A5F722B57B8DDF326514F96_il2cpp_TypeInfo_var);
		NetApiService__ctor_m9B2E6BF5D3463F0F7992F92AC1A611C74DD4655B(L_7, L_6, NULL);
		Web3_set_Net_m3EEC6DB979AA59F22642496F69B8B60F53D756AC_inline(__this, L_7, NULL);
		RuntimeObject* L_8;
		L_8 = Web3_get_Client_mBBFB132EC428C89B1D5B18283D08FE521FBD2F0A_inline(__this, NULL);
		PersonalApiService_tC10DBC037F65B1A149E47B653C05FCE16AFBA115* L_9 = (PersonalApiService_tC10DBC037F65B1A149E47B653C05FCE16AFBA115*)il2cpp_codegen_object_new(PersonalApiService_tC10DBC037F65B1A149E47B653C05FCE16AFBA115_il2cpp_TypeInfo_var);
		PersonalApiService__ctor_m5B2D69E2276A5FDE3E2F6738BF52A73BAA4E3D7B(L_9, L_8, NULL);
		Web3_set_Personal_m05F9DDD799A979DE25C2AF61B048F8FCD4ADDD0D_inline(__this, L_9, NULL);
		RuntimeObject* L_10;
		L_10 = Web3_get_Client_mBBFB132EC428C89B1D5B18283D08FE521FBD2F0A_inline(__this, NULL);
		FeeSuggestionService_tAE088089906388255787A65D7EBF04CA24F61ACA* L_11 = (FeeSuggestionService_tAE088089906388255787A65D7EBF04CA24F61ACA*)il2cpp_codegen_object_new(FeeSuggestionService_tAE088089906388255787A65D7EBF04CA24F61ACA_il2cpp_TypeInfo_var);
		FeeSuggestionService__ctor_m57F55FE43F2789F03401028074B79B2806C14BAE(L_11, L_10, NULL);
		Web3_set_FeeSuggestion_m5AE08C28ACC4CE6CE69860F37F25DF88BBB7E4BA_inline(__this, L_11, NULL);
		RuntimeObject* L_12;
		L_12 = Web3_get_Client_mBBFB132EC428C89B1D5B18283D08FE521FBD2F0A_inline(__this, NULL);
		DebugApiService_tE10FEBC2C4ED3CF94BED98E9CE879AD882E18E3A* L_13 = (DebugApiService_tE10FEBC2C4ED3CF94BED98E9CE879AD882E18E3A*)il2cpp_codegen_object_new(DebugApiService_tE10FEBC2C4ED3CF94BED98E9CE879AD882E18E3A_il2cpp_TypeInfo_var);
		DebugApiService__ctor_mAF73FB5FBFF1F549B849F3505488E69DD6598217(L_13, L_12, NULL);
		Web3_set_Debug_m9275DF4986DAD3FADDBD99CB7ADFB53AA62D114F_inline(__this, L_13, NULL);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::InitialiseDefaultRpcClient(System.String,Microsoft.Extensions.Logging.ILogger,System.Net.Http.Headers.AuthenticationHeaderValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3_InitialiseDefaultRpcClient_m4A91D98CBF927F980490CC58F2EA93319AE2806E (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, String_t* ___0_url, RuntimeObject* ___1_log, AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* ___2_authenticationHeader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_url;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_1, L_0, NULL);
		AuthenticationHeaderValue_t3C43E7065DF4664F8756000FA7D787EF0799860A* L_2 = ___2_authenticationHeader;
		RuntimeObject* L_3 = ___1_log;
		RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9* L_4 = (RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9*)il2cpp_codegen_object_new(RpcClient_t5D0D6587D5B97F32A5258A7EA3C5D61F441A07A9_il2cpp_TypeInfo_var);
		RpcClient__ctor_mBFE198548929936548EF742AF25626EC2DC394F0(L_4, L_1, L_2, (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*)NULL, (HttpClientHandler_t7D9EE7EA0696F7843BD008E618C49F95D99D5FAD*)NULL, L_3, NULL);
		Web3_set_Client_m2F4E78BAA883694BE9FD23A9F2FA48A63B2AB4CE_inline(__this, L_4, NULL);
		return;
	}
}
// System.Void Nethereum.Web3.Web3::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Web3__cctor_m58FD986B3F3C17573F8A3F37C211B4C9D4638185 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A* L_0 = (AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A*)il2cpp_codegen_object_new(AddressUtil_tC47DD49474C67CE4E31D86D55DB58DA498D1D00A_il2cpp_TypeInfo_var);
		AddressUtil__ctor_mFBD8B7B116001BE2851469A24B3C41095B7253B1(L_0, NULL);
		((Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253_StaticFields*)il2cpp_codegen_static_fields_for(Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253_il2cpp_TypeInfo_var))->___AddressUtil_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253_StaticFields*)il2cpp_codegen_static_fields_for(Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253_il2cpp_TypeInfo_var))->___AddressUtil_0), (void*)L_0);
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_1 = (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6*)il2cpp_codegen_object_new(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		Sha3Keccack__ctor_m1A1B72B31D347C8FEEAB51607616A6C4992DE7D0(L_1, NULL);
		((Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253_StaticFields*)il2cpp_codegen_static_fields_for(Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253_il2cpp_TypeInfo_var))->___Sha3Keccack_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253_StaticFields*)il2cpp_codegen_static_fields_for(Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253_il2cpp_TypeInfo_var))->___Sha3Keccack_1), (void*)L_1);
		UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823* L_2 = (UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823*)il2cpp_codegen_object_new(UnitConversion_tE11AB0CC2EB05A00243269513AFBCD2846009823_il2cpp_TypeInfo_var);
		UnitConversion__ctor_m5E00A88113E7393DA8AA839644B151321771530E(L_2, NULL);
		((Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253_StaticFields*)il2cpp_codegen_static_fields_for(Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253_il2cpp_TypeInfo_var))->___U3CConvertU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253_StaticFields*)il2cpp_codegen_static_fields_for(Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253_il2cpp_TypeInfo_var))->___U3CConvertU3Ek__BackingField_2), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Web3_set_Client_m2F4E78BAA883694BE9FD23A9F2FA48A63B2AB4CE_inline (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CClientU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Web3_get_Client_mBBFB132EC428C89B1D5B18283D08FE521FBD2F0A_inline (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CClientU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Web3_get_Eth_m63D232C654BBA776B3406405BBF978BEABF7BB68_inline (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CEthU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Web3_set_Eth_m57235E7B086CD2F25D6A3DC8CFEF049C9E08358A_inline (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CEthU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEthU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Web3_set_Processing_m3B11C3AA24AB698D2117FDE5908C379DEC88DD4D_inline (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CProcessingU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProcessingU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Web3_set_Shh_mE707B217043B4EE828C4F44881468CED39AEBAA4_inline (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CShhU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CShhU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Web3_set_Net_m3EEC6DB979AA59F22642496F69B8B60F53D756AC_inline (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CNetU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNetU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Web3_set_Personal_m05F9DDD799A979DE25C2AF61B048F8FCD4ADDD0D_inline (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CPersonalU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPersonalU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Web3_set_FeeSuggestion_m5AE08C28ACC4CE6CE69860F37F25DF88BBB7E4BA_inline (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, FeeSuggestionService_tAE088089906388255787A65D7EBF04CA24F61ACA* ___0_value, const RuntimeMethod* method) 
{
	{
		FeeSuggestionService_tAE088089906388255787A65D7EBF04CA24F61ACA* L_0 = ___0_value;
		__this->___U3CFeeSuggestionU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFeeSuggestionU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Web3_set_Debug_m9275DF4986DAD3FADDBD99CB7ADFB53AA62D114F_inline (Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CDebugU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDebugU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
