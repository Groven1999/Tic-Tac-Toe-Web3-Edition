#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Net.Http.Headers.AuthenticationHeaderValue Nethereum.JsonRpc.Client.BasicAuthenticationHeaderHelper::GetBasicAuthenticationHeaderValueFromUri(System.Uri)
extern void BasicAuthenticationHeaderHelper_GetBasicAuthenticationHeaderValueFromUri_m779A851BB2D8D7444B898EB976E3219561B7D7E9 (void);
// 0x00000002 System.Int32 Nethereum.JsonRpc.Client.RpcClient::get_MaximumConnectionsPerServer()
extern void RpcClient_get_MaximumConnectionsPerServer_mB0183831D02E2202FEA24EA4EA9A9ED30BCD96B6 (void);
// 0x00000003 System.Void Nethereum.JsonRpc.Client.RpcClient::.ctor(System.Uri,System.Net.Http.Headers.AuthenticationHeaderValue,Newtonsoft.Json.JsonSerializerSettings,System.Net.Http.HttpClientHandler,Microsoft.Extensions.Logging.ILogger)
extern void RpcClient__ctor_mBFE198548929936548EF742AF25626EC2DC394F0 (void);
// 0x00000004 System.Net.Http.HttpMessageHandler Nethereum.JsonRpc.Client.RpcClient::GetDefaultHandler()
extern void RpcClient_GetDefaultHandler_mBDC8FF55336F102489406DE780FEBE67D7474431 (void);
// 0x00000005 System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage[]> Nethereum.JsonRpc.Client.RpcClient::SendAsync(Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage[])
extern void RpcClient_SendAsync_m56C0E0E53819EDFF4BDCB2E3F343D092D41506A9 (void);
// 0x00000006 System.Threading.Tasks.Task`1<Nethereum.JsonRpc.Client.RpcMessages.RpcResponseMessage> Nethereum.JsonRpc.Client.RpcClient::SendAsync(Nethereum.JsonRpc.Client.RpcMessages.RpcRequestMessage,System.String)
extern void RpcClient_SendAsync_mF2CF652D4B32B6911E90DDAB9E493E460849C495 (void);
// 0x00000007 System.Net.Http.HttpClient Nethereum.JsonRpc.Client.RpcClient::GetOrCreateHttpClient()
extern void RpcClient_GetOrCreateHttpClient_m5C494AE8B4284263F55FF362E355C86F0B9C0EE9 (void);
// 0x00000008 System.Net.Http.HttpClient Nethereum.JsonRpc.Client.RpcClient::GetClient()
extern void RpcClient_GetClient_mE2C06C9D85C2D83A7894B0AE4FA728B050FBE071 (void);
// 0x00000009 System.Void Nethereum.JsonRpc.Client.RpcClient::CreateNewRotatedHttpClient()
extern void RpcClient_CreateNewRotatedHttpClient_mF2EF1B76A03217EA1B53F717E714D3B22C587BFB (void);
// 0x0000000A System.Net.Http.HttpClient Nethereum.JsonRpc.Client.RpcClient::CreateNewHttpClient()
extern void RpcClient_CreateNewHttpClient_mF0B1AFF97DC71130036EA1DF542963D8C7AB8530 (void);
// 0x0000000B System.Void Nethereum.JsonRpc.Client.RpcClient::InitialiseHttpClient(System.Net.Http.HttpClient)
extern void RpcClient_InitialiseHttpClient_m14C651097EB1B25B6AA68A58FDB2036EE6CC71ED (void);
// 0x0000000C System.Void Nethereum.JsonRpc.Client.RpcClient::.cctor()
extern void RpcClient__cctor_m033A77C13C8D55AD99CCE2A6A7B5A9FDFB8CA0DA (void);
// 0x0000000D System.Void Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19::MoveNext()
extern void U3CSendAsyncU3Ed__19_MoveNext_m9F87DC02C68C7439558DE19E1FB1F1362AF18030 (void);
// 0x0000000E System.Void Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendAsyncU3Ed__19_SetStateMachine_mCF1507A272DCDF7F2CBDB4A2F120B4436405D8C5 (void);
// 0x0000000F System.Void Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__20::MoveNext()
extern void U3CSendAsyncU3Ed__20_MoveNext_m86C0036EBD8DD00717652F39013C482A222F99F5 (void);
// 0x00000010 System.Void Nethereum.JsonRpc.Client.RpcClient/<SendAsync>d__20::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendAsyncU3Ed__20_SetStateMachine_m84018050A0BD817BAACEA7CBE9B181E9FA6FE813 (void);
static Il2CppMethodPointer s_methodPointers[16] = 
{
	BasicAuthenticationHeaderHelper_GetBasicAuthenticationHeaderValueFromUri_m779A851BB2D8D7444B898EB976E3219561B7D7E9,
	RpcClient_get_MaximumConnectionsPerServer_mB0183831D02E2202FEA24EA4EA9A9ED30BCD96B6,
	RpcClient__ctor_mBFE198548929936548EF742AF25626EC2DC394F0,
	RpcClient_GetDefaultHandler_mBDC8FF55336F102489406DE780FEBE67D7474431,
	RpcClient_SendAsync_m56C0E0E53819EDFF4BDCB2E3F343D092D41506A9,
	RpcClient_SendAsync_mF2CF652D4B32B6911E90DDAB9E493E460849C495,
	RpcClient_GetOrCreateHttpClient_m5C494AE8B4284263F55FF362E355C86F0B9C0EE9,
	RpcClient_GetClient_mE2C06C9D85C2D83A7894B0AE4FA728B050FBE071,
	RpcClient_CreateNewRotatedHttpClient_mF2EF1B76A03217EA1B53F717E714D3B22C587BFB,
	RpcClient_CreateNewHttpClient_mF0B1AFF97DC71130036EA1DF542963D8C7AB8530,
	RpcClient_InitialiseHttpClient_m14C651097EB1B25B6AA68A58FDB2036EE6CC71ED,
	RpcClient__cctor_m033A77C13C8D55AD99CCE2A6A7B5A9FDFB8CA0DA,
	U3CSendAsyncU3Ed__19_MoveNext_m9F87DC02C68C7439558DE19E1FB1F1362AF18030,
	U3CSendAsyncU3Ed__19_SetStateMachine_mCF1507A272DCDF7F2CBDB4A2F120B4436405D8C5,
	U3CSendAsyncU3Ed__20_MoveNext_m86C0036EBD8DD00717652F39013C482A222F99F5,
	U3CSendAsyncU3Ed__20_SetStateMachine_m84018050A0BD817BAACEA7CBE9B181E9FA6FE813,
};
extern void U3CSendAsyncU3Ed__19_MoveNext_m9F87DC02C68C7439558DE19E1FB1F1362AF18030_AdjustorThunk (void);
extern void U3CSendAsyncU3Ed__19_SetStateMachine_mCF1507A272DCDF7F2CBDB4A2F120B4436405D8C5_AdjustorThunk (void);
extern void U3CSendAsyncU3Ed__20_MoveNext_m86C0036EBD8DD00717652F39013C482A222F99F5_AdjustorThunk (void);
extern void U3CSendAsyncU3Ed__20_SetStateMachine_m84018050A0BD817BAACEA7CBE9B181E9FA6FE813_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[4] = 
{
	{ 0x0600000D, U3CSendAsyncU3Ed__19_MoveNext_m9F87DC02C68C7439558DE19E1FB1F1362AF18030_AdjustorThunk },
	{ 0x0600000E, U3CSendAsyncU3Ed__19_SetStateMachine_mCF1507A272DCDF7F2CBDB4A2F120B4436405D8C5_AdjustorThunk },
	{ 0x0600000F, U3CSendAsyncU3Ed__20_MoveNext_m86C0036EBD8DD00717652F39013C482A222F99F5_AdjustorThunk },
	{ 0x06000010, U3CSendAsyncU3Ed__20_SetStateMachine_m84018050A0BD817BAACEA7CBE9B181E9FA6FE813_AdjustorThunk },
};
static const int32_t s_InvokerIndices[16] = 
{
	9516,
	9898,
	680,
	9906,
	4896,
	2569,
	6603,
	6603,
	6734,
	6603,
	5495,
	9934,
	6734,
	5495,
	6734,
	5495,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Nethereum_JsonRpc_RpcClient_CodeGenModule;
const Il2CppCodeGenModule g_Nethereum_JsonRpc_RpcClient_CodeGenModule = 
{
	"Nethereum.JsonRpc.RpcClient.dll",
	16,
	s_methodPointers,
	4,
	s_adjustorThunks,
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
