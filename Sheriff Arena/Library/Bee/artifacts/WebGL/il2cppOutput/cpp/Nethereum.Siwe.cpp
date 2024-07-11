#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Nethereum.Siwe.Core.SiweMessage>
struct ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566;
// System.Func`3<System.String,Nethereum.Siwe.Core.SiweMessage,Nethereum.Siwe.Core.SiweMessage>
struct Func_3_t35959B142F004146DE7B8D8892A22738FC96BD8B;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.String,Nethereum.Siwe.Core.SiweMessage>
struct Tables_t25CA3804A187E84B9AA433A2E2F093749832772A;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Collections.Generic.KeyValuePair`2<System.String,Nethereum.Siwe.Core.SiweMessage>[]
struct KeyValuePair_2U5BU5D_t04CB2432901076BA3EA70CC123436DCB5B9EEA5A;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Nethereum.Signer.Crypto.ECKey
struct ECKey_t15179DA21C4FF3FC07AB170ED70B8D9BD23729BB;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tDA1B83006F1148753A1AD7E3E8DDEBC85D3E6CD9;
// Nethereum.Signer.EthECKey
struct EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Nethereum.Siwe.UserServices.IEthereumUserService
struct IEthereumUserService_tCF87375A4C5BD1A728350AA8AB3DEFC9D3563AC1;
// Nethereum.Siwe.ISessionStorage
struct ISessionStorage_t12693EE39EDAC6A2C903AE5AC734CE3A05DE4997;
// Nethereum.Siwe.InMemorySessionNonceStorage
struct InMemorySessionNonceStorage_tDE40C69918600CD4559C1A8CE3E5C2199965B9C7;
// Nethereum.Signer.MessageSigner
struct MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.RefSafetyRulesAttribute
struct RefSafetyRulesAttribute_t8E8C5018502576B1E3B6C659791E7724E0BBC7C2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076;
// Nethereum.Util.Sha3Keccack
struct Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6;
// Nethereum.Siwe.Core.SiweMessage
struct SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061;
// Nethereum.Siwe.SiweMessageService
struct SiweMessageService_t838544F7F0302CB31EE8048198BC867608B4CC26;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Nethereum.Web3.Web3
struct Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253;
// Nethereum.Siwe.InMemorySessionNonceStorage/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t02BEDFB08217E2C8786FD7A440253DAA6C29C0C2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t35959B142F004146DE7B8D8892A22738FC96BD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEthereumUserService_tCF87375A4C5BD1A728350AA8AB3DEFC9D3563AC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISessionStorage_t12693EE39EDAC6A2C903AE5AC734CE3A05DE4997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InMemorySessionNonceStorage_tDE40C69918600CD4559C1A8CE3E5C2199965B9C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t02BEDFB08217E2C8786FD7A440253DAA6C29C0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral99C165894B2900048144F5DEF682937FE73CA541;
IL2CPP_EXTERN_C String_t* _stringLiteralC21E83BB887AEBA05F1BBB2021FD314F4A4B3282;
IL2CPP_EXTERN_C String_t* _stringLiteralE716B38B68345B15005CCBBF453BED97C3BA0C03;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_AddOrUpdate_m23F173F7A8ACC2FC721BD0DAF4A63D4B9AE7C8B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_ContainsKey_m177B013630B7A3A08608A5D6A1436717CEB77617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2__ctor_m4F920082C45C933F8013E904AF375B2EC44BFCE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_get_Item_m0845E597B81F262FF12B84C12D36CC1A17F93176_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SiweMessageService_AssignNewNonce_m675E2722A4DBAD867C155DAB6D3F18C18478C1DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CAddOrUpdateU3Eb__0_m5C6690E35B64E50BC6C3B5AE9E98507F74849DD8_RuntimeMethod_var;
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
struct U3CModuleU3E_tF51E77369C2BB7975E95567967481D83A1965B1C 
{
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Nethereum.Siwe.Core.SiweMessage>
struct ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t25CA3804A187E84B9AA433A2E2F093749832772A* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_t04CB2432901076BA3EA70CC123436DCB5B9EEA5A* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
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

// Nethereum.Siwe.InMemorySessionNonceStorage
struct InMemorySessionNonceStorage_tDE40C69918600CD4559C1A8CE3E5C2199965B9C7  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Nethereum.Siwe.Core.SiweMessage> Nethereum.Siwe.InMemorySessionNonceStorage::_messages
	ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688* ____messages_0;
};

// Nethereum.Signer.MessageSigner
struct MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A  : public RuntimeObject
{
};

// Nethereum.Siwe.RandomNonceBuilder
struct RandomNonceBuilder_tC2B8E1E8116A44956184FCC4399161E27B8131B7  : public RuntimeObject
{
};

// Nethereum.Util.Sha3Keccack
struct Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6  : public RuntimeObject
{
};

// Nethereum.Siwe.Core.SiweMessage
struct SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061  : public RuntimeObject
{
	// System.String Nethereum.Siwe.Core.SiweMessage::<Domain>k__BackingField
	String_t* ___U3CDomainU3Ek__BackingField_0;
	// System.String Nethereum.Siwe.Core.SiweMessage::<Address>k__BackingField
	String_t* ___U3CAddressU3Ek__BackingField_1;
	// System.String Nethereum.Siwe.Core.SiweMessage::<Statement>k__BackingField
	String_t* ___U3CStatementU3Ek__BackingField_2;
	// System.String Nethereum.Siwe.Core.SiweMessage::<Uri>k__BackingField
	String_t* ___U3CUriU3Ek__BackingField_3;
	// System.String Nethereum.Siwe.Core.SiweMessage::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_4;
	// System.String Nethereum.Siwe.Core.SiweMessage::<Nonce>k__BackingField
	String_t* ___U3CNonceU3Ek__BackingField_5;
	// System.String Nethereum.Siwe.Core.SiweMessage::<IssuedAt>k__BackingField
	String_t* ___U3CIssuedAtU3Ek__BackingField_6;
	// System.String Nethereum.Siwe.Core.SiweMessage::<ExpirationTime>k__BackingField
	String_t* ___U3CExpirationTimeU3Ek__BackingField_7;
	// System.String Nethereum.Siwe.Core.SiweMessage::<NotBefore>k__BackingField
	String_t* ___U3CNotBeforeU3Ek__BackingField_8;
	// System.String Nethereum.Siwe.Core.SiweMessage::<RequestId>k__BackingField
	String_t* ___U3CRequestIdU3Ek__BackingField_9;
	// System.String Nethereum.Siwe.Core.SiweMessage::<ChainId>k__BackingField
	String_t* ___U3CChainIdU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<System.String> Nethereum.Siwe.Core.SiweMessage::<Resources>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CResourcesU3Ek__BackingField_11;
};

// Nethereum.Siwe.SiweMessageService
struct SiweMessageService_t838544F7F0302CB31EE8048198BC867608B4CC26  : public RuntimeObject
{
	// Nethereum.Siwe.ISessionStorage Nethereum.Siwe.SiweMessageService::_sessionStorage
	RuntimeObject* ____sessionStorage_0;
	// Nethereum.Siwe.UserServices.IEthereumUserService Nethereum.Siwe.SiweMessageService::_ethereumUserService
	RuntimeObject* ____ethereumUserService_1;
	// Nethereum.Web3.Web3 Nethereum.Siwe.SiweMessageService::_web3
	Web3_t8AF9823770AC594F954F6DEBB87CE15A29780253* ____web3_2;
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

// Nethereum.Siwe.InMemorySessionNonceStorage/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t02BEDFB08217E2C8786FD7A440253DAA6C29C0C2  : public RuntimeObject
{
	// Nethereum.Siwe.Core.SiweMessage Nethereum.Siwe.InMemorySessionNonceStorage/<>c__DisplayClass1_0::siweMessage
	SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* ___siweMessage_0;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_38;
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

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tDA1B83006F1148753A1AD7E3E8DDEBC85D3E6CD9  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
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

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
struct RefSafetyRulesAttribute_t8E8C5018502576B1E3B6C659791E7724E0BBC7C2  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 System.Runtime.CompilerServices.RefSafetyRulesAttribute::Version
	int32_t ___Version_0;
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

// System.Func`3<System.String,Nethereum.Siwe.Core.SiweMessage,Nethereum.Siwe.Core.SiweMessage>
struct Func_3_t35959B142F004146DE7B8D8892A22738FC96BD8B  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Nethereum.Siwe.Core.SiweMessage>
struct ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Nethereum.Siwe.Core.SiweMessage>

// System.Attribute

// System.Attribute

// Nethereum.Signer.EthECKey
struct EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A_StaticFields
{
	// Org.BouncyCastle.Security.SecureRandom Nethereum.Signer.EthECKey::SecureRandom
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___SecureRandom_0;
	// System.Byte Nethereum.Signer.EthECKey::DEFAULT_PREFIX
	uint8_t ___DEFAULT_PREFIX_1;
};

// Nethereum.Signer.EthECKey

// Nethereum.Siwe.InMemorySessionNonceStorage

// Nethereum.Siwe.InMemorySessionNonceStorage

// Nethereum.Signer.MessageSigner

// Nethereum.Signer.MessageSigner

// Nethereum.Siwe.RandomNonceBuilder

// Nethereum.Siwe.RandomNonceBuilder

// Nethereum.Util.Sha3Keccack
struct Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_StaticFields
{
	// Nethereum.Util.Sha3Keccack Nethereum.Util.Sha3Keccack::<Current>k__BackingField
	Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* ___U3CCurrentU3Ek__BackingField_0;
};

// Nethereum.Util.Sha3Keccack

// Nethereum.Siwe.Core.SiweMessage

// Nethereum.Siwe.Core.SiweMessage

// Nethereum.Siwe.SiweMessageService

// Nethereum.Siwe.SiweMessageService

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Nethereum.Siwe.InMemorySessionNonceStorage/<>c__DisplayClass1_0

// Nethereum.Siwe.InMemorySessionNonceStorage/<>c__DisplayClass1_0

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

// Microsoft.CodeAnalysis.EmbeddedAttribute

// Microsoft.CodeAnalysis.EmbeddedAttribute

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

// System.Void

// System.Void

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Func`3<System.String,Nethereum.Siwe.Core.SiweMessage,Nethereum.Siwe.Core.SiweMessage>

// System.Func`3<System.String,Nethereum.Siwe.Core.SiweMessage,Nethereum.Siwe.Core.SiweMessage>
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Func`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m7A3CDF8CC909FAEEA005D42C71F113B505F766DD_gshared (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// TValue System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::AddOrUpdate(TKey,TValue,System.Func`3<TKey,TValue,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_AddOrUpdate_mB294AF963FB52DD33894F699B1CDF6484C2B948B_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_addValue, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___2_updateValueFactory, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentDictionary_2_ContainsKey_m9BDE52D83802C8E05ED223C1864017FB19B43DBC_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_get_Item_m138F439DD4E493B83DC1DED6C41C989C79615A22_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m0891574E19148D39C27C179BF2787093757C5F57_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Boolean>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B_gshared (bool ___0_result, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Siwe.InMemorySessionNonceStorage/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m05BD9A326885DCD42CC7A643F2E946D92C38CF4F (U3CU3Ec__DisplayClass1_0_t02BEDFB08217E2C8786FD7A440253DAA6C29C0C2* __this, const RuntimeMethod* method) ;
// System.String Nethereum.Siwe.Core.SiweMessage::get_Nonce()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SiweMessage_get_Nonce_m27B2C70ED0E9A064E1325FA9C1C9FD232779EADC_inline (SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* __this, const RuntimeMethod* method) ;
// System.Void System.Func`3<System.String,Nethereum.Siwe.Core.SiweMessage,Nethereum.Siwe.Core.SiweMessage>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m38CBDFE1AE6F2555330C4F222B917B4F86447377 (Func_3_t35959B142F004146DE7B8D8892A22738FC96BD8B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t35959B142F004146DE7B8D8892A22738FC96BD8B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m7A3CDF8CC909FAEEA005D42C71F113B505F766DD_gshared)(__this, ___0_object, ___1_method, method);
}
// TValue System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Nethereum.Siwe.Core.SiweMessage>::AddOrUpdate(TKey,TValue,System.Func`3<TKey,TValue,TValue>)
inline SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* ConcurrentDictionary_2_AddOrUpdate_m23F173F7A8ACC2FC721BD0DAF4A63D4B9AE7C8B4 (ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688* __this, String_t* ___0_key, SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* ___1_addValue, Func_3_t35959B142F004146DE7B8D8892A22738FC96BD8B* ___2_updateValueFactory, const RuntimeMethod* method)
{
	return ((  SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* (*) (ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688*, String_t*, SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061*, Func_3_t35959B142F004146DE7B8D8892A22738FC96BD8B*, const RuntimeMethod*))ConcurrentDictionary_2_AddOrUpdate_mB294AF963FB52DD33894F699B1CDF6484C2B948B_gshared)(__this, ___0_key, ___1_addValue, ___2_updateValueFactory, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Nethereum.Siwe.Core.SiweMessage>::ContainsKey(TKey)
inline bool ConcurrentDictionary_2_ContainsKey_m177B013630B7A3A08608A5D6A1436717CEB77617 (ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688*, String_t*, const RuntimeMethod*))ConcurrentDictionary_2_ContainsKey_m9BDE52D83802C8E05ED223C1864017FB19B43DBC_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Nethereum.Siwe.Core.SiweMessage>::get_Item(TKey)
inline SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* ConcurrentDictionary_2_get_Item_m0845E597B81F262FF12B84C12D36CC1A17F93176 (ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* (*) (ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688*, String_t*, const RuntimeMethod*))ConcurrentDictionary_2_get_Item_m138F439DD4E493B83DC1DED6C41C989C79615A22_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.String,Nethereum.Siwe.Core.SiweMessage>::.ctor()
inline void ConcurrentDictionary_2__ctor_m4F920082C45C933F8013E904AF375B2EC44BFCE2 (ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688*, const RuntimeMethod*))ConcurrentDictionary_2__ctor_m0891574E19148D39C27C179BF2787093757C5F57_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// Nethereum.Signer.EthECKey Nethereum.Signer.EthECKey::GenerateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* EthECKey_GenerateKey_mE7A4D60912964BDAF40694C6EE579B10BB30FCBD (const RuntimeMethod* method) ;
// System.String Nethereum.Signer.EthECKey::GetPrivateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EthECKey_GetPrivateKey_m02CD893B0AF1F09062864EE3CF1A8ECA01E7EC21 (EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.Signer.MessageSigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSigner__ctor_m67B284E6F6BABE98BB71F7B701A47D93F8DC3AC9 (MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A* __this, const RuntimeMethod* method) ;
// Nethereum.Util.Sha3Keccack Nethereum.Util.Sha3Keccack::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* Sha3Keccack_get_Current_mD6FFC538783F0A2C61503A659F979F136C302D91_inline (const RuntimeMethod* method) ;
// System.String Nethereum.Signer.MessageSigner::HashAndSign(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MessageSigner_HashAndSign_mEA018397F0F203BB98DEF630EA7E8753838A9865 (MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A* __this, String_t* ___0_plainMessage, String_t* ___1_privateKey, const RuntimeMethod* method) ;
// System.String Nethereum.Util.Sha3Keccack::CalculateHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Sha3Keccack_CalculateHash_mBF873E85E6ECCD02DAA0C4582456294476D50752 (Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.Siwe.InMemorySessionNonceStorage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InMemorySessionNonceStorage__ctor_m24DAEC4664BD4F9876CC98B5B33FE56934378D84 (InMemorySessionNonceStorage_tDE40C69918600CD4559C1A8CE3E5C2199965B9C7* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Boolean>(TResult)
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B (bool ___0_result, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (bool, const RuntimeMethod*))Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B_gshared)(___0_result, method);
}
// System.String Nethereum.Siwe.Core.SiweMessage::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SiweMessage_get_Address_mB6F34C59A101D2E17269E4B1487C16436450DB7C_inline (SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* __this, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Siwe.Core.SiweMessage::HasMessageDateStartedAndNotExpired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SiweMessage_HasMessageDateStartedAndNotExpired_mAFA06C4C6ADA64D289CAC8C7FEB1ABA8EDF55B8D (SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Nethereum.Siwe.RandomNonceBuilder::GenerateNewNonce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RandomNonceBuilder_GenerateNewNonce_mFB172A9B7BA24D6F52D78D7B3C035A0CB22F0D59 (const RuntimeMethod* method) ;
// System.Void Nethereum.Siwe.Core.SiweMessage::set_Nonce(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SiweMessage_set_Nonce_m4AD816B5BBD254F4D0D94D9229F3FD8C14C7FC69_inline (SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean Nethereum.Siwe.Core.SiweMessage::IsTheSame(Nethereum.Siwe.Core.SiweMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SiweMessage_IsTheSame_m9D2610045A30B4D313A60C759056FCD05B0746A9 (SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* __this, SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* ___0_other, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m02DA1F1550E85225001F4E8B3597579E4B17EE44 (EmbeddedAttribute_tDA1B83006F1148753A1AD7E3E8DDEBC85D3E6CD9* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefSafetyRulesAttribute__ctor_mACE1B779EC5DDB2AB6F0DCBA7B7AD6FB870A0F34 (RefSafetyRulesAttribute_t8E8C5018502576B1E3B6C659791E7724E0BBC7C2* __this, int32_t ___0_p, const RuntimeMethod* method) 
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
// System.Void Nethereum.Siwe.InMemorySessionNonceStorage::AddOrUpdate(Nethereum.Siwe.Core.SiweMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InMemorySessionNonceStorage_AddOrUpdate_m2768FEB89A66AFCA8F59882AC73847091C410BCF (InMemorySessionNonceStorage_tDE40C69918600CD4559C1A8CE3E5C2199965B9C7* __this, SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* ___0_siweMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_AddOrUpdate_m23F173F7A8ACC2FC721BD0DAF4A63D4B9AE7C8B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t35959B142F004146DE7B8D8892A22738FC96BD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CAddOrUpdateU3Eb__0_m5C6690E35B64E50BC6C3B5AE9E98507F74849DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t02BEDFB08217E2C8786FD7A440253DAA6C29C0C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t02BEDFB08217E2C8786FD7A440253DAA6C29C0C2* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t02BEDFB08217E2C8786FD7A440253DAA6C29C0C2* L_0 = (U3CU3Ec__DisplayClass1_0_t02BEDFB08217E2C8786FD7A440253DAA6C29C0C2*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t02BEDFB08217E2C8786FD7A440253DAA6C29C0C2_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1_0__ctor_m05BD9A326885DCD42CC7A643F2E946D92C38CF4F(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t02BEDFB08217E2C8786FD7A440253DAA6C29C0C2* L_1 = V_0;
		SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* L_2 = ___0_siweMessage;
		L_1->___siweMessage_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___siweMessage_0), (void*)L_2);
		ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688* L_3 = __this->____messages_0;
		U3CU3Ec__DisplayClass1_0_t02BEDFB08217E2C8786FD7A440253DAA6C29C0C2* L_4 = V_0;
		SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* L_5 = L_4->___siweMessage_0;
		String_t* L_6;
		L_6 = SiweMessage_get_Nonce_m27B2C70ED0E9A064E1325FA9C1C9FD232779EADC_inline(L_5, NULL);
		U3CU3Ec__DisplayClass1_0_t02BEDFB08217E2C8786FD7A440253DAA6C29C0C2* L_7 = V_0;
		SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* L_8 = L_7->___siweMessage_0;
		U3CU3Ec__DisplayClass1_0_t02BEDFB08217E2C8786FD7A440253DAA6C29C0C2* L_9 = V_0;
		Func_3_t35959B142F004146DE7B8D8892A22738FC96BD8B* L_10 = (Func_3_t35959B142F004146DE7B8D8892A22738FC96BD8B*)il2cpp_codegen_object_new(Func_3_t35959B142F004146DE7B8D8892A22738FC96BD8B_il2cpp_TypeInfo_var);
		Func_3__ctor_m38CBDFE1AE6F2555330C4F222B917B4F86447377(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CAddOrUpdateU3Eb__0_m5C6690E35B64E50BC6C3B5AE9E98507F74849DD8_RuntimeMethod_var), NULL);
		SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* L_11;
		L_11 = ConcurrentDictionary_2_AddOrUpdate_m23F173F7A8ACC2FC721BD0DAF4A63D4B9AE7C8B4(L_3, L_6, L_8, L_10, ConcurrentDictionary_2_AddOrUpdate_m23F173F7A8ACC2FC721BD0DAF4A63D4B9AE7C8B4_RuntimeMethod_var);
		return;
	}
}
// Nethereum.Siwe.Core.SiweMessage Nethereum.Siwe.InMemorySessionNonceStorage::GetSiweMessage(Nethereum.Siwe.Core.SiweMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* InMemorySessionNonceStorage_GetSiweMessage_m897E16DCCC1C1E47FD58E0346C6416CC5DC54797 (InMemorySessionNonceStorage_tDE40C69918600CD4559C1A8CE3E5C2199965B9C7* __this, SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* ___0_siweMesage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_ContainsKey_m177B013630B7A3A08608A5D6A1436717CEB77617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_get_Item_m0845E597B81F262FF12B84C12D36CC1A17F93176_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688* L_0 = __this->____messages_0;
		SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* L_1 = ___0_siweMesage;
		String_t* L_2;
		L_2 = SiweMessage_get_Nonce_m27B2C70ED0E9A064E1325FA9C1C9FD232779EADC_inline(L_1, NULL);
		bool L_3;
		L_3 = ConcurrentDictionary_2_ContainsKey_m177B013630B7A3A08608A5D6A1436717CEB77617(L_0, L_2, ConcurrentDictionary_2_ContainsKey_m177B013630B7A3A08608A5D6A1436717CEB77617_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688* L_4 = __this->____messages_0;
		SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* L_5 = ___0_siweMesage;
		String_t* L_6;
		L_6 = SiweMessage_get_Nonce_m27B2C70ED0E9A064E1325FA9C1C9FD232779EADC_inline(L_5, NULL);
		SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* L_7;
		L_7 = ConcurrentDictionary_2_get_Item_m0845E597B81F262FF12B84C12D36CC1A17F93176(L_4, L_6, ConcurrentDictionary_2_get_Item_m0845E597B81F262FF12B84C12D36CC1A17F93176_RuntimeMethod_var);
		return L_7;
	}

IL_0025:
	{
		return (SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061*)NULL;
	}
}
// System.Void Nethereum.Siwe.InMemorySessionNonceStorage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InMemorySessionNonceStorage__ctor_m24DAEC4664BD4F9876CC98B5B33FE56934378D84 (InMemorySessionNonceStorage_tDE40C69918600CD4559C1A8CE3E5C2199965B9C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2__ctor_m4F920082C45C933F8013E904AF375B2EC44BFCE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688* L_0 = (ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688*)il2cpp_codegen_object_new(ConcurrentDictionary_2_t166926F125ED9FC11442B68FB125E0E54516A688_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2__ctor_m4F920082C45C933F8013E904AF375B2EC44BFCE2(L_0, ConcurrentDictionary_2__ctor_m4F920082C45C933F8013E904AF375B2EC44BFCE2_RuntimeMethod_var);
		__this->____messages_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____messages_0), (void*)L_0);
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
// System.Void Nethereum.Siwe.InMemorySessionNonceStorage/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m05BD9A326885DCD42CC7A643F2E946D92C38CF4F (U3CU3Ec__DisplayClass1_0_t02BEDFB08217E2C8786FD7A440253DAA6C29C0C2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Nethereum.Siwe.Core.SiweMessage Nethereum.Siwe.InMemorySessionNonceStorage/<>c__DisplayClass1_0::<AddOrUpdate>b__0(System.String,Nethereum.Siwe.Core.SiweMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* U3CU3Ec__DisplayClass1_0_U3CAddOrUpdateU3Eb__0_m5C6690E35B64E50BC6C3B5AE9E98507F74849DD8 (U3CU3Ec__DisplayClass1_0_t02BEDFB08217E2C8786FD7A440253DAA6C29C0C2* __this, String_t* ___0_nonce, SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* ___1_oldSiweMessage, const RuntimeMethod* method) 
{
	{
		SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* L_0 = __this->___siweMessage_0;
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
// System.String Nethereum.Siwe.RandomNonceBuilder::GenerateNewNonce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RandomNonceBuilder_GenerateNewNonce_mFB172A9B7BA24D6F52D78D7B3C035A0CB22F0D59 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99C165894B2900048144F5DEF682937FE73CA541);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE716B38B68345B15005CCBBF453BED97C3BA0C03);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A* V_2 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_3 = L_0;
		String_t* L_1;
		L_1 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_3), _stringLiteral99C165894B2900048144F5DEF682937FE73CA541, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralE716B38B68345B15005CCBBF453BED97C3BA0C03, NULL);
		V_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A_il2cpp_TypeInfo_var);
		EthECKey_t42377CCE1B3D38D907F5BA978AE0DDF80536031A* L_3;
		L_3 = EthECKey_GenerateKey_mE7A4D60912964BDAF40694C6EE579B10BB30FCBD(NULL);
		String_t* L_4;
		L_4 = EthECKey_GetPrivateKey_m02CD893B0AF1F09062864EE3CF1A8ECA01E7EC21(L_3, NULL);
		V_1 = L_4;
		MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A* L_5 = (MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A*)il2cpp_codegen_object_new(MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A_il2cpp_TypeInfo_var);
		MessageSigner__ctor_m67B284E6F6BABE98BB71F7B701A47D93F8DC3AC9(L_5, NULL);
		V_2 = L_5;
		il2cpp_codegen_runtime_class_init_inline(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_6;
		L_6 = Sha3Keccack_get_Current_mD6FFC538783F0A2C61503A659F979F136C302D91_inline(NULL);
		MessageSigner_t67479BD55534DFFA08709C3D4AFD03F5518D742A* L_7 = V_2;
		String_t* L_8 = V_0;
		String_t* L_9 = V_1;
		String_t* L_10;
		L_10 = MessageSigner_HashAndSign_mEA018397F0F203BB98DEF630EA7E8753838A9865(L_7, L_8, L_9, NULL);
		String_t* L_11;
		L_11 = Sha3Keccack_CalculateHash_mBF873E85E6ECCD02DAA0C4582456294476D50752(L_6, L_10, NULL);
		return L_11;
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
// System.Void Nethereum.Siwe.SiweMessageService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SiweMessageService__ctor_m492572B3E6079309677204EAB0DB6A71A15C9057 (SiweMessageService_t838544F7F0302CB31EE8048198BC867608B4CC26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InMemorySessionNonceStorage_tDE40C69918600CD4559C1A8CE3E5C2199965B9C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		InMemorySessionNonceStorage_tDE40C69918600CD4559C1A8CE3E5C2199965B9C7* L_0 = (InMemorySessionNonceStorage_tDE40C69918600CD4559C1A8CE3E5C2199965B9C7*)il2cpp_codegen_object_new(InMemorySessionNonceStorage_tDE40C69918600CD4559C1A8CE3E5C2199965B9C7_il2cpp_TypeInfo_var);
		InMemorySessionNonceStorage__ctor_m24DAEC4664BD4F9876CC98B5B33FE56934378D84(L_0, NULL);
		__this->____sessionStorage_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sessionStorage_0), (void*)L_0);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> Nethereum.Siwe.SiweMessageService::IsUserAddressRegistered(Nethereum.Siwe.Core.SiweMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* SiweMessageService_IsUserAddressRegistered_m171C2536FFB58058B3E329A9A86CD17FA67A2A6E (SiweMessageService_t838544F7F0302CB31EE8048198BC867608B4CC26* __this, SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* ___0_siweMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEthereumUserService_tCF87375A4C5BD1A728350AA8AB3DEFC9D3563AC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____ethereumUserService_1;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_1;
		L_1 = Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B((bool)1, Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B_RuntimeMethod_var);
		return L_1;
	}

IL_000f:
	{
		RuntimeObject* L_2 = __this->____ethereumUserService_1;
		SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* L_3 = ___0_siweMessage;
		String_t* L_4;
		L_4 = SiweMessage_get_Address_mB6F34C59A101D2E17269E4B1487C16436450DB7C_inline(L_3, NULL);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_5;
		L_5 = InterfaceFuncInvoker1< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, String_t* >::Invoke(0 /* System.Threading.Tasks.Task`1<System.Boolean> Nethereum.Siwe.UserServices.IEthereumUserService::IsUserAddressRegistered(System.String) */, IEthereumUserService_tCF87375A4C5BD1A728350AA8AB3DEFC9D3563AC1_il2cpp_TypeInfo_var, L_2, L_4);
		return L_5;
	}
}
// System.Boolean Nethereum.Siwe.SiweMessageService::HasMessageDateStartedAndNotExpired(Nethereum.Siwe.Core.SiweMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SiweMessageService_HasMessageDateStartedAndNotExpired_m9989F63009EF8DAB9C5193FA5DFB445AA8B84D46 (SiweMessageService_t838544F7F0302CB31EE8048198BC867608B4CC26* __this, SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* ___0_siweMessage, const RuntimeMethod* method) 
{
	{
		SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* L_0 = ___0_siweMessage;
		bool L_1;
		L_1 = SiweMessage_HasMessageDateStartedAndNotExpired_mAFA06C4C6ADA64D289CAC8C7FEB1ABA8EDF55B8D(L_0, NULL);
		return L_1;
	}
}
// Nethereum.Siwe.Core.SiweMessage Nethereum.Siwe.SiweMessageService::AssignNewNonce(Nethereum.Siwe.Core.SiweMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* SiweMessageService_AssignNewNonce_m675E2722A4DBAD867C155DAB6D3F18C18478C1DB (SiweMessageService_t838544F7F0302CB31EE8048198BC867608B4CC26* __this, SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* ___0_siweMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISessionStorage_t12693EE39EDAC6A2C903AE5AC734CE3A05DE4997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* L_0 = ___0_siweMessage;
		String_t* L_1;
		L_1 = SiweMessage_get_Nonce_m27B2C70ED0E9A064E1325FA9C1C9FD232779EADC_inline(L_0, NULL);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* L_3 = ___0_siweMessage;
		String_t* L_4;
		L_4 = RandomNonceBuilder_GenerateNewNonce_mFB172A9B7BA24D6F52D78D7B3C035A0CB22F0D59(NULL);
		SiweMessage_set_Nonce_m4AD816B5BBD254F4D0D94D9229F3FD8C14C7FC69_inline(L_3, L_4, NULL);
		RuntimeObject* L_5 = __this->____sessionStorage_0;
		SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* L_6 = ___0_siweMessage;
		InterfaceActionInvoker1< SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* >::Invoke(0 /* System.Void Nethereum.Siwe.ISessionStorage::AddOrUpdate(Nethereum.Siwe.Core.SiweMessage) */, ISessionStorage_t12693EE39EDAC6A2C903AE5AC734CE3A05DE4997_il2cpp_TypeInfo_var, L_5, L_6);
		goto IL_0031;
	}

IL_0026:
	{
		Exception_t* L_7 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC21E83BB887AEBA05F1BBB2021FD314F4A4B3282)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SiweMessageService_AssignNewNonce_m675E2722A4DBAD867C155DAB6D3F18C18478C1DB_RuntimeMethod_var)));
	}

IL_0031:
	{
		SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* L_8 = ___0_siweMessage;
		return L_8;
	}
}
// System.Boolean Nethereum.Siwe.SiweMessageService::IsMessageTheSameAsSessionStored(Nethereum.Siwe.Core.SiweMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SiweMessageService_IsMessageTheSameAsSessionStored_mA74454F5F22046790803713650650DD5BEF14B9E (SiweMessageService_t838544F7F0302CB31EE8048198BC867608B4CC26* __this, SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* ___0_siweMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISessionStorage_t12693EE39EDAC6A2C903AE5AC734CE3A05DE4997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____sessionStorage_0;
		SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* L_1 = ___0_siweMessage;
		SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* L_2;
		L_2 = InterfaceFuncInvoker1< SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061*, SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* >::Invoke(1 /* Nethereum.Siwe.Core.SiweMessage Nethereum.Siwe.ISessionStorage::GetSiweMessage(Nethereum.Siwe.Core.SiweMessage) */, ISessionStorage_t12693EE39EDAC6A2C903AE5AC734CE3A05DE4997_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* L_4 = V_0;
		SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* L_5 = ___0_siweMessage;
		bool L_6;
		L_6 = SiweMessage_IsTheSame_m9D2610045A30B4D313A60C759056FCD05B0746A9(L_4, L_5, NULL);
		return L_6;
	}

IL_0018:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SiweMessage_get_Nonce_m27B2C70ED0E9A064E1325FA9C1C9FD232779EADC_inline (SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNonceU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* Sha3Keccack_get_Current_mD6FFC538783F0A2C61503A659F979F136C302D91_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var);
		Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6* L_0 = ((Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_StaticFields*)il2cpp_codegen_static_fields_for(Sha3Keccack_t8B3D17DEE632A97C106904848D7F8C61605425A6_il2cpp_TypeInfo_var))->___U3CCurrentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SiweMessage_get_Address_mB6F34C59A101D2E17269E4B1487C16436450DB7C_inline (SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAddressU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SiweMessage_set_Nonce_m4AD816B5BBD254F4D0D94D9229F3FD8C14C7FC69_inline (SiweMessage_t8B745CC71DC18EF3DAA51AB2EC6E6559D181D061* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNonceU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNonceU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
