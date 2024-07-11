#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
extern void EmbeddedAttribute__ctor_m02DA1F1550E85225001F4E8B3597579E4B17EE44 (void);
// 0x00000002 System.Void System.Runtime.CompilerServices.RefSafetyRulesAttribute::.ctor(System.Int32)
extern void RefSafetyRulesAttribute__ctor_mACE1B779EC5DDB2AB6F0DCBA7B7AD6FB870A0F34 (void);
// 0x00000003 System.Void Nethereum.Siwe.InMemorySessionNonceStorage::AddOrUpdate(Nethereum.Siwe.Core.SiweMessage)
extern void InMemorySessionNonceStorage_AddOrUpdate_m2768FEB89A66AFCA8F59882AC73847091C410BCF (void);
// 0x00000004 Nethereum.Siwe.Core.SiweMessage Nethereum.Siwe.InMemorySessionNonceStorage::GetSiweMessage(Nethereum.Siwe.Core.SiweMessage)
extern void InMemorySessionNonceStorage_GetSiweMessage_m897E16DCCC1C1E47FD58E0346C6416CC5DC54797 (void);
// 0x00000005 System.Void Nethereum.Siwe.InMemorySessionNonceStorage::.ctor()
extern void InMemorySessionNonceStorage__ctor_m24DAEC4664BD4F9876CC98B5B33FE56934378D84 (void);
// 0x00000006 System.Void Nethereum.Siwe.InMemorySessionNonceStorage/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_m05BD9A326885DCD42CC7A643F2E946D92C38CF4F (void);
// 0x00000007 Nethereum.Siwe.Core.SiweMessage Nethereum.Siwe.InMemorySessionNonceStorage/<>c__DisplayClass1_0::<AddOrUpdate>b__0(System.String,Nethereum.Siwe.Core.SiweMessage)
extern void U3CU3Ec__DisplayClass1_0_U3CAddOrUpdateU3Eb__0_m5C6690E35B64E50BC6C3B5AE9E98507F74849DD8 (void);
// 0x00000008 System.Void Nethereum.Siwe.ISessionStorage::AddOrUpdate(Nethereum.Siwe.Core.SiweMessage)
// 0x00000009 Nethereum.Siwe.Core.SiweMessage Nethereum.Siwe.ISessionStorage::GetSiweMessage(Nethereum.Siwe.Core.SiweMessage)
// 0x0000000A System.String Nethereum.Siwe.RandomNonceBuilder::GenerateNewNonce()
extern void RandomNonceBuilder_GenerateNewNonce_mFB172A9B7BA24D6F52D78D7B3C035A0CB22F0D59 (void);
// 0x0000000B System.Void Nethereum.Siwe.SiweMessageService::.ctor()
extern void SiweMessageService__ctor_m492572B3E6079309677204EAB0DB6A71A15C9057 (void);
// 0x0000000C System.Threading.Tasks.Task`1<System.Boolean> Nethereum.Siwe.SiweMessageService::IsUserAddressRegistered(Nethereum.Siwe.Core.SiweMessage)
extern void SiweMessageService_IsUserAddressRegistered_m171C2536FFB58058B3E329A9A86CD17FA67A2A6E (void);
// 0x0000000D System.Boolean Nethereum.Siwe.SiweMessageService::HasMessageDateStartedAndNotExpired(Nethereum.Siwe.Core.SiweMessage)
extern void SiweMessageService_HasMessageDateStartedAndNotExpired_m9989F63009EF8DAB9C5193FA5DFB445AA8B84D46 (void);
// 0x0000000E Nethereum.Siwe.Core.SiweMessage Nethereum.Siwe.SiweMessageService::AssignNewNonce(Nethereum.Siwe.Core.SiweMessage)
extern void SiweMessageService_AssignNewNonce_m675E2722A4DBAD867C155DAB6D3F18C18478C1DB (void);
// 0x0000000F System.Boolean Nethereum.Siwe.SiweMessageService::IsMessageTheSameAsSessionStored(Nethereum.Siwe.Core.SiweMessage)
extern void SiweMessageService_IsMessageTheSameAsSessionStored_mA74454F5F22046790803713650650DD5BEF14B9E (void);
// 0x00000010 System.Threading.Tasks.Task`1<System.Boolean> Nethereum.Siwe.UserServices.IEthereumUserService::IsUserAddressRegistered(System.String)
static Il2CppMethodPointer s_methodPointers[16] = 
{
	EmbeddedAttribute__ctor_m02DA1F1550E85225001F4E8B3597579E4B17EE44,
	RefSafetyRulesAttribute__ctor_mACE1B779EC5DDB2AB6F0DCBA7B7AD6FB870A0F34,
	InMemorySessionNonceStorage_AddOrUpdate_m2768FEB89A66AFCA8F59882AC73847091C410BCF,
	InMemorySessionNonceStorage_GetSiweMessage_m897E16DCCC1C1E47FD58E0346C6416CC5DC54797,
	InMemorySessionNonceStorage__ctor_m24DAEC4664BD4F9876CC98B5B33FE56934378D84,
	U3CU3Ec__DisplayClass1_0__ctor_m05BD9A326885DCD42CC7A643F2E946D92C38CF4F,
	U3CU3Ec__DisplayClass1_0_U3CAddOrUpdateU3Eb__0_m5C6690E35B64E50BC6C3B5AE9E98507F74849DD8,
	NULL,
	NULL,
	RandomNonceBuilder_GenerateNewNonce_mFB172A9B7BA24D6F52D78D7B3C035A0CB22F0D59,
	SiweMessageService__ctor_m492572B3E6079309677204EAB0DB6A71A15C9057,
	SiweMessageService_IsUserAddressRegistered_m171C2536FFB58058B3E329A9A86CD17FA67A2A6E,
	SiweMessageService_HasMessageDateStartedAndNotExpired_m9989F63009EF8DAB9C5193FA5DFB445AA8B84D46,
	SiweMessageService_AssignNewNonce_m675E2722A4DBAD867C155DAB6D3F18C18478C1DB,
	SiweMessageService_IsMessageTheSameAsSessionStored_mA74454F5F22046790803713650650DD5BEF14B9E,
	NULL,
};
static const int32_t s_InvokerIndices[16] = 
{
	6734,
	5464,
	5495,
	4896,
	6734,
	6734,
	2569,
	0,
	0,
	9906,
	6734,
	4896,
	4001,
	4896,
	4001,
	0,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Nethereum_Siwe_CodeGenModule;
const Il2CppCodeGenModule g_Nethereum_Siwe_CodeGenModule = 
{
	"Nethereum.Siwe.dll",
	16,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
