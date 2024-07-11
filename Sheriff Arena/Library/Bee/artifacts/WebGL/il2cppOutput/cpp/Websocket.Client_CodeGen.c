﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Websocket.Client.DisconnectionInfo::.ctor(Websocket.Client.DisconnectionType,System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus>,System.String,System.String,System.Exception)
extern void DisconnectionInfo__ctor_mB493E23643DA0B6623DC74005C943BA03D022061 (void);
// 0x00000002 System.Exception Websocket.Client.DisconnectionInfo::get_Exception()
extern void DisconnectionInfo_get_Exception_m846A7CB4528DAA213D9085BB1018578A7ED80664 (void);
// 0x00000003 System.Boolean Websocket.Client.DisconnectionInfo::get_CancelReconnection()
extern void DisconnectionInfo_get_CancelReconnection_mFD188EB4E65E6CBF98BFF415872E413A6CAB72BC (void);
// 0x00000004 System.Boolean Websocket.Client.DisconnectionInfo::get_CancelClosing()
extern void DisconnectionInfo_get_CancelClosing_m33E4A1A3E3C0C5481367AD2F8FF1EF41BF875554 (void);
// 0x00000005 Websocket.Client.DisconnectionInfo Websocket.Client.DisconnectionInfo::Create(Websocket.Client.DisconnectionType,System.Net.WebSockets.WebSocket,System.Exception)
extern void DisconnectionInfo_Create_mD979C5C4C224AA4B2A6E2FBFD3AEF27F2556CFF2 (void);
// 0x00000006 System.Void Websocket.Client.ResponseMessage::.ctor(System.Byte[],System.String,System.Net.WebSockets.WebSocketMessageType)
extern void ResponseMessage__ctor_mD5A15F7056A4BE3E22570C47D6F5C2F7E78AE1CA (void);
// 0x00000007 System.String Websocket.Client.ResponseMessage::get_Text()
extern void ResponseMessage_get_Text_m51F3F4069B69D3482A6C2C83F5175CFF2B4EE781 (void);
// 0x00000008 System.Byte[] Websocket.Client.ResponseMessage::get_Binary()
extern void ResponseMessage_get_Binary_m1404849586CCAB5A37A684FC04D526441B778D8F (void);
// 0x00000009 System.Net.WebSockets.WebSocketMessageType Websocket.Client.ResponseMessage::get_MessageType()
extern void ResponseMessage_get_MessageType_m9323E327E5343EBD7C65509A11E222896510F74E (void);
// 0x0000000A System.String Websocket.Client.ResponseMessage::ToString()
extern void ResponseMessage_ToString_mB1E30FDBC76A8CB08155B2A413EE7FFBD432D94B (void);
// 0x0000000B Websocket.Client.ResponseMessage Websocket.Client.ResponseMessage::TextMessage(System.String)
extern void ResponseMessage_TextMessage_m7949796B4C4B2F390319ECCF1C70A4897F23C8DF (void);
// 0x0000000C Websocket.Client.ResponseMessage Websocket.Client.ResponseMessage::BinaryMessage(System.Byte[])
extern void ResponseMessage_BinaryMessage_m61A9FF561E5AB114A84BA3C9CA77F288536CDDBE (void);
// 0x0000000D System.Void Websocket.Client.WebsocketClient::.ctor(System.Uri,System.Func`1<System.Net.WebSockets.ClientWebSocket>)
extern void WebsocketClient__ctor_mB9E5352B3049DEDF9D248F1D39CB11F3FBFF26A8 (void);
// 0x0000000E System.Void Websocket.Client.WebsocketClient::.ctor(System.Uri,System.Func`3<System.Uri,System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocket>>)
extern void WebsocketClient__ctor_mA062792FC3BC65F9F0CB2D4A9D30F3FBE3D49855 (void);
// 0x0000000F System.IObservable`1<Websocket.Client.ResponseMessage> Websocket.Client.WebsocketClient::get_MessageReceived()
extern void WebsocketClient_get_MessageReceived_m16EA9CA66DCAB2075EE49BFDA8BD57FEA8C2BD43 (void);
// 0x00000010 System.IObservable`1<Websocket.Client.DisconnectionInfo> Websocket.Client.WebsocketClient::get_DisconnectionHappened()
extern void WebsocketClient_get_DisconnectionHappened_m3B73867C50CE5D02F7B257F14DA784A8888952D9 (void);
// 0x00000011 System.Nullable`1<System.TimeSpan> Websocket.Client.WebsocketClient::get_ReconnectTimeout()
extern void WebsocketClient_get_ReconnectTimeout_m8C98B1C90D7E54B5E3102EAB54587BC6B44DBDCE (void);
// 0x00000012 System.Void Websocket.Client.WebsocketClient::set_ReconnectTimeout(System.Nullable`1<System.TimeSpan>)
extern void WebsocketClient_set_ReconnectTimeout_m4C639C864C4B1304B28B3FADA5B73C9BD1B306B4 (void);
// 0x00000013 System.Nullable`1<System.TimeSpan> Websocket.Client.WebsocketClient::get_ErrorReconnectTimeout()
extern void WebsocketClient_get_ErrorReconnectTimeout_mA96398A61B595B11D4891F1AF00C3D05D0F66CE9 (void);
// 0x00000014 System.Boolean Websocket.Client.WebsocketClient::get_IsReconnectionEnabled()
extern void WebsocketClient_get_IsReconnectionEnabled_m820F94468AAB461B38D6F0CAA8B3D3374488A65B (void);
// 0x00000015 System.String Websocket.Client.WebsocketClient::get_Name()
extern void WebsocketClient_get_Name_mD2CFEABFCD4E6249BB6D1B44C01846211CC86C77 (void);
// 0x00000016 System.Boolean Websocket.Client.WebsocketClient::get_IsStarted()
extern void WebsocketClient_get_IsStarted_mBA899C61212E974A8775F5192D20D4EED5BF00BF (void);
// 0x00000017 System.Void Websocket.Client.WebsocketClient::set_IsStarted(System.Boolean)
extern void WebsocketClient_set_IsStarted_m1CBC1DCBA30D8DCABE8110CBD36CEA2832806657 (void);
// 0x00000018 System.Boolean Websocket.Client.WebsocketClient::get_IsRunning()
extern void WebsocketClient_get_IsRunning_m60FE24C93375C9AA4F3C3A9544ED7CDEC0BB4139 (void);
// 0x00000019 System.Void Websocket.Client.WebsocketClient::set_IsRunning(System.Boolean)
extern void WebsocketClient_set_IsRunning_m9ED1492FB34FC7150704094A4B5092C813BBA6C4 (void);
// 0x0000001A System.Boolean Websocket.Client.WebsocketClient::get_IsTextMessageConversionEnabled()
extern void WebsocketClient_get_IsTextMessageConversionEnabled_mC5860972C1177205DCB56BB52129A53B8CFF0F25 (void);
// 0x0000001B System.Text.Encoding Websocket.Client.WebsocketClient::get_MessageEncoding()
extern void WebsocketClient_get_MessageEncoding_m45E115B1EBF4E3A47361C7474CEFF158B87AD637 (void);
// 0x0000001C System.Void Websocket.Client.WebsocketClient::set_MessageEncoding(System.Text.Encoding)
extern void WebsocketClient_set_MessageEncoding_m02130BA771A898603A1776EEC47AE6FAB19F26AB (void);
// 0x0000001D System.Void Websocket.Client.WebsocketClient::Dispose()
extern void WebsocketClient_Dispose_mB94B51B709728AB1DE3EAEF38B65F8629779C529 (void);
// 0x0000001E System.Threading.Tasks.Task Websocket.Client.WebsocketClient::Start()
extern void WebsocketClient_Start_m38748137001926A559052C9BA7ADB1D066FB2DF5 (void);
// 0x0000001F System.Threading.Tasks.Task`1<System.Boolean> Websocket.Client.WebsocketClient::Stop(System.Net.WebSockets.WebSocketCloseStatus,System.String)
extern void WebsocketClient_Stop_m2C94F134B6F9246C22D6F2B438A829FAFE5176C9 (void);
// 0x00000020 System.Func`3<System.Uri,System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocket>> Websocket.Client.WebsocketClient::GetClientFactory(System.Func`1<System.Net.WebSockets.ClientWebSocket>)
extern void WebsocketClient_GetClientFactory_mBBC2B402EC58D992CA21C6FA83ED726F86A667B9 (void);
// 0x00000021 System.Threading.Tasks.Task Websocket.Client.WebsocketClient::StartInternal(System.Boolean)
extern void WebsocketClient_StartInternal_m2EEF8455653E0393BA2AF6E963C644DA3B36E2BC (void);
// 0x00000022 System.Threading.Tasks.Task`1<System.Boolean> Websocket.Client.WebsocketClient::StopInternal(System.Net.WebSockets.WebSocket,System.Net.WebSockets.WebSocketCloseStatus,System.String,System.Nullable`1<System.Threading.CancellationToken>,System.Boolean,System.Boolean)
extern void WebsocketClient_StopInternal_m11C53248F6E07F1DD0FC8F3BE67290EC8331714B (void);
// 0x00000023 System.Threading.Tasks.Task Websocket.Client.WebsocketClient::StartClient(System.Uri,System.Threading.CancellationToken,Websocket.Client.ReconnectionType,System.Boolean)
extern void WebsocketClient_StartClient_m4AB22128883C939574B76C2FD8464D9A2CAA241C (void);
// 0x00000024 System.Boolean Websocket.Client.WebsocketClient::IsClientConnected()
extern void WebsocketClient_IsClientConnected_m06821CC3E093BFFD0EC7BA07E076147EA675D431 (void);
// 0x00000025 System.Threading.Tasks.Task Websocket.Client.WebsocketClient::Listen(System.Net.WebSockets.WebSocket,System.Threading.CancellationToken)
extern void WebsocketClient_Listen_m0929546D53D05946A990E48DB7CDF1F978BDF954 (void);
// 0x00000026 System.Boolean Websocket.Client.WebsocketClient::ShouldIgnoreReconnection(System.Net.WebSockets.WebSocket)
extern void WebsocketClient_ShouldIgnoreReconnection_mF1C27EEAB6739248B00D9F524589DF667D1F30E1 (void);
// 0x00000027 System.Text.Encoding Websocket.Client.WebsocketClient::GetEncoding()
extern void WebsocketClient_GetEncoding_mCC58674FBEF2231B016227C9DBAF2921DFF37BDA (void);
// 0x00000028 System.String Websocket.Client.WebsocketClient::L(System.String)
extern void WebsocketClient_L_m2FA98E6AF7BF6D8063FD870CE309D5C1E7A600C7 (void);
// 0x00000029 Websocket.Client.Logging.ILog Websocket.Client.WebsocketClient::GetLogger()
extern void WebsocketClient_GetLogger_m8F836197E6E2E18E72EE3EF1FCF5C97D29F0D76B (void);
// 0x0000002A Websocket.Client.DisconnectionType Websocket.Client.WebsocketClient::TranslateTypeToDisconnection(Websocket.Client.ReconnectionType)
extern void WebsocketClient_TranslateTypeToDisconnection_m34260BC0BB8D95672DDD1B57B99F73D2D9BCA6E7 (void);
// 0x0000002B System.Threading.Tasks.Task Websocket.Client.WebsocketClient::ReconnectSynchronized(Websocket.Client.ReconnectionType,System.Boolean,System.Exception)
extern void WebsocketClient_ReconnectSynchronized_m66C24EA4CEE9A749C0D38827DCC21F43118D739D (void);
// 0x0000002C System.Threading.Tasks.Task Websocket.Client.WebsocketClient::Reconnect(Websocket.Client.ReconnectionType,System.Boolean,System.Exception)
extern void WebsocketClient_Reconnect_m88B4D48459E91A618867619C2E0C799CB7B4978A (void);
// 0x0000002D System.Void Websocket.Client.WebsocketClient::ActivateLastChance()
extern void WebsocketClient_ActivateLastChance_m77FA4CB3D228763DD3D9B761BBEE30EF7D19515B (void);
// 0x0000002E System.Void Websocket.Client.WebsocketClient::DeactivateLastChance()
extern void WebsocketClient_DeactivateLastChance_m752286707E433333A2174A31328A8E53F5D51A12 (void);
// 0x0000002F System.Void Websocket.Client.WebsocketClient::LastChance(System.Object)
extern void WebsocketClient_LastChance_m2D56E7E08425075ACAD86765A61CA3D8E4DF92A1 (void);
// 0x00000030 System.Void Websocket.Client.WebsocketClient::Send(System.String)
extern void WebsocketClient_Send_mEC22B056CDE68AC3E135353FB37863EF2D9A93BA (void);
// 0x00000031 System.Threading.Tasks.Task Websocket.Client.WebsocketClient::SendTextFromQueue()
extern void WebsocketClient_SendTextFromQueue_mC2829FA38EB6BD5DDBA16D9C3973ADCEDB298D8C (void);
// 0x00000032 System.Threading.Tasks.Task Websocket.Client.WebsocketClient::SendBinaryFromQueue()
extern void WebsocketClient_SendBinaryFromQueue_mC79EA95EA8AF70542605E2788D11D81FDC8D5B77 (void);
// 0x00000033 System.Void Websocket.Client.WebsocketClient::StartBackgroundThreadForSendingText()
extern void WebsocketClient_StartBackgroundThreadForSendingText_mA6C4ADAD93CD64E41B9B2B675627954AD02FC929 (void);
// 0x00000034 System.Void Websocket.Client.WebsocketClient::StartBackgroundThreadForSendingBinary()
extern void WebsocketClient_StartBackgroundThreadForSendingBinary_m7C4AF98B2D92DCF72AA0E631457C4EC67C5EBF34 (void);
// 0x00000035 System.Threading.Tasks.Task Websocket.Client.WebsocketClient::SendInternalSynchronized(System.String)
extern void WebsocketClient_SendInternalSynchronized_m5F78A8DC72E253067EA28D03C08F8B2B5CF2FA5B (void);
// 0x00000036 System.Threading.Tasks.Task Websocket.Client.WebsocketClient::SendInternal(System.String)
extern void WebsocketClient_SendInternal_m5DAF0706DCBB474D5D10615265C0960440B85A03 (void);
// 0x00000037 System.Threading.Tasks.Task Websocket.Client.WebsocketClient::SendInternalSynchronized(System.ArraySegment`1<System.Byte>)
extern void WebsocketClient_SendInternalSynchronized_m487FFCB253FE139E7A47E938FD6CDA10BACF61F5 (void);
// 0x00000038 System.Threading.Tasks.Task Websocket.Client.WebsocketClient::SendInternal(System.ArraySegment`1<System.Byte>)
extern void WebsocketClient_SendInternal_m8E4EEA73D2259B5145FB8C01A79FCBBED534603D (void);
// 0x00000039 System.Void Websocket.Client.WebsocketClient::.cctor()
extern void WebsocketClient__cctor_mFE6E849D4288EFF63C63B14B6732956F9D4E70BE (void);
// 0x0000003A System.Threading.Tasks.Task Websocket.Client.WebsocketClient::<StartBackgroundThreadForSendingText>b__95_0(System.Object)
extern void WebsocketClient_U3CStartBackgroundThreadForSendingTextU3Eb__95_0_m4DDFB4738301D3AB470C719EC938E5236B3D4CE6 (void);
// 0x0000003B System.Threading.Tasks.Task Websocket.Client.WebsocketClient::<StartBackgroundThreadForSendingBinary>b__96_0(System.Object)
extern void WebsocketClient_U3CStartBackgroundThreadForSendingBinaryU3Eb__96_0_m20478B361FB45EF6F203AB33841F212A84EBE187 (void);
// 0x0000003C System.Void Websocket.Client.WebsocketClient/<>c::.cctor()
extern void U3CU3Ec__cctor_m33DB2B76C6C2FFAAF936105F3C1CB0E968B1564B (void);
// 0x0000003D System.Void Websocket.Client.WebsocketClient/<>c::.ctor()
extern void U3CU3Ec__ctor_mA97C6611CB6BE62A5CB64A88E44240B54593FC05 (void);
// 0x0000003E System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocket> Websocket.Client.WebsocketClient/<>c::<.ctor>b__17_0(System.Uri,System.Threading.CancellationToken)
extern void U3CU3Ec_U3C_ctorU3Eb__17_0_m07D0D5E46B8819707D2DB98C8F8E510C415E7D51 (void);
// 0x0000003F System.Void Websocket.Client.WebsocketClient/<>c/<<-ctor>b__17_0>d::MoveNext()
extern void U3CU3CU2DctorU3Eb__17_0U3Ed_MoveNext_mBE45F72B5E5089DE22018FC3B2BFD564DD2A7786 (void);
// 0x00000040 System.Void Websocket.Client.WebsocketClient/<>c/<<-ctor>b__17_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CU2DctorU3Eb__17_0U3Ed_SetStateMachine_mE7F759508A14BAE74C0E770FDF4319F39F4EC280 (void);
// 0x00000041 System.Void Websocket.Client.WebsocketClient/<>c__DisplayClass65_0::.ctor()
extern void U3CU3Ec__DisplayClass65_0__ctor_m29E2BB4107478DC1E9CE0000622A1E2A8A53DC01 (void);
// 0x00000042 System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocket> Websocket.Client.WebsocketClient/<>c__DisplayClass65_0::<GetClientFactory>b__0(System.Uri,System.Threading.CancellationToken)
extern void U3CU3Ec__DisplayClass65_0_U3CGetClientFactoryU3Eb__0_m3660CE83080B242B6BCB74AD24F3D4BB9ED1BB01 (void);
// 0x00000043 System.Void Websocket.Client.WebsocketClient/<>c__DisplayClass65_0/<<GetClientFactory>b__0>d::MoveNext()
extern void U3CU3CGetClientFactoryU3Eb__0U3Ed_MoveNext_m465FC5AA0B42FE084F6728AF6C59ECE3E4F05872 (void);
// 0x00000044 System.Void Websocket.Client.WebsocketClient/<>c__DisplayClass65_0/<<GetClientFactory>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CU3CGetClientFactoryU3Eb__0U3Ed_SetStateMachine_m2A6B90900F639DCC373B55B189AA300D3114EC0B (void);
// 0x00000045 System.Void Websocket.Client.WebsocketClient/<Listen>d__70::MoveNext()
extern void U3CListenU3Ed__70_MoveNext_m8E393B773A4CA82DD43785427543A4F65CAAFF5A (void);
// 0x00000046 System.Void Websocket.Client.WebsocketClient/<Listen>d__70::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CListenU3Ed__70_SetStateMachine_mB6742E1775045A4C002477CE6E41C6015E0118D3 (void);
// 0x00000047 System.Void Websocket.Client.WebsocketClient/<Reconnect>d__81::MoveNext()
extern void U3CReconnectU3Ed__81_MoveNext_m8D94D1DD6447DF4BED4F82E2A8D3C5FCAF1A7F28 (void);
// 0x00000048 System.Void Websocket.Client.WebsocketClient/<Reconnect>d__81::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReconnectU3Ed__81_SetStateMachine_m27503E6A5277C01CC955B94EA0500FB08F039B08 (void);
// 0x00000049 System.Void Websocket.Client.WebsocketClient/<ReconnectSynchronized>d__80::MoveNext()
extern void U3CReconnectSynchronizedU3Ed__80_MoveNext_mC968F5873C97BCD432F9C2E4CB7EC7A09370377F (void);
// 0x0000004A System.Void Websocket.Client.WebsocketClient/<ReconnectSynchronized>d__80::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReconnectSynchronizedU3Ed__80_SetStateMachine_mF9354B6602497BB1F6C1623FA3E29A4CCF389390 (void);
// 0x0000004B System.Void Websocket.Client.WebsocketClient/<SendBinaryFromQueue>d__94::MoveNext()
extern void U3CSendBinaryFromQueueU3Ed__94_MoveNext_m17B95D8B2626BE6C81D1AD4DA978C95C956A0343 (void);
// 0x0000004C System.Void Websocket.Client.WebsocketClient/<SendBinaryFromQueue>d__94::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendBinaryFromQueueU3Ed__94_SetStateMachine_mD561A63A8ED2310D9445EB025A25332D751ED492 (void);
// 0x0000004D System.Void Websocket.Client.WebsocketClient/<SendInternal>d__100::MoveNext()
extern void U3CSendInternalU3Ed__100_MoveNext_mF0E5A1CCEABA15708F25A4649E61D995D99CF763 (void);
// 0x0000004E System.Void Websocket.Client.WebsocketClient/<SendInternal>d__100::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendInternalU3Ed__100_SetStateMachine_m914E35B119D82E78E5A8D72B5297BCA569920BF1 (void);
// 0x0000004F System.Void Websocket.Client.WebsocketClient/<SendInternal>d__98::MoveNext()
extern void U3CSendInternalU3Ed__98_MoveNext_mE6E21994848C8DF33CA9FDC6B0735BCB1B77D510 (void);
// 0x00000050 System.Void Websocket.Client.WebsocketClient/<SendInternal>d__98::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendInternalU3Ed__98_SetStateMachine_mE80D35DA97A529642BEA617C52E4F04B6C2928EA (void);
// 0x00000051 System.Void Websocket.Client.WebsocketClient/<SendInternalSynchronized>d__97::MoveNext()
extern void U3CSendInternalSynchronizedU3Ed__97_MoveNext_m04E69B42F151B325364C186DFC51C589714BF6F0 (void);
// 0x00000052 System.Void Websocket.Client.WebsocketClient/<SendInternalSynchronized>d__97::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendInternalSynchronizedU3Ed__97_SetStateMachine_m4242466071C03A156B5E0B1C6670EFCBE82D9C9B (void);
// 0x00000053 System.Void Websocket.Client.WebsocketClient/<SendInternalSynchronized>d__99::MoveNext()
extern void U3CSendInternalSynchronizedU3Ed__99_MoveNext_mE2D1A84845FE4B68827201F980F8DC9EA5B73D06 (void);
// 0x00000054 System.Void Websocket.Client.WebsocketClient/<SendInternalSynchronized>d__99::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendInternalSynchronizedU3Ed__99_SetStateMachine_m6441A6B91F9D6C23C9EAB0F1305F1B7BA2EFD114 (void);
// 0x00000055 System.Void Websocket.Client.WebsocketClient/<SendTextFromQueue>d__93::MoveNext()
extern void U3CSendTextFromQueueU3Ed__93_MoveNext_mE7B0DDC455524536DE4D4EA6EED4B90FDBDD25C9 (void);
// 0x00000056 System.Void Websocket.Client.WebsocketClient/<SendTextFromQueue>d__93::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendTextFromQueueU3Ed__93_SetStateMachine_m013BEA605FAE72F6437C6F3A0DECDED6547B37BF (void);
// 0x00000057 System.Void Websocket.Client.WebsocketClient/<StartClient>d__68::MoveNext()
extern void U3CStartClientU3Ed__68_MoveNext_m208BA890C5A3B21FF6A93F70B8530B62BF74A2E9 (void);
// 0x00000058 System.Void Websocket.Client.WebsocketClient/<StartClient>d__68::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CStartClientU3Ed__68_SetStateMachine_m13B838DE27DAABDF13D39197DEE404D7B3BCC705 (void);
// 0x00000059 System.Void Websocket.Client.WebsocketClient/<StartInternal>d__66::MoveNext()
extern void U3CStartInternalU3Ed__66_MoveNext_mBB65D40C3752ED30B6968C6B7ED6190A1CEC9517 (void);
// 0x0000005A System.Void Websocket.Client.WebsocketClient/<StartInternal>d__66::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CStartInternalU3Ed__66_SetStateMachine_m2EC84F2AF51710A1F13782C23850AAF5CDC6FF0E (void);
// 0x0000005B System.Void Websocket.Client.WebsocketClient/<Stop>d__63::MoveNext()
extern void U3CStopU3Ed__63_MoveNext_m9AB00B0971EC4A8D4454BD7FF5ADA133C21740E4 (void);
// 0x0000005C System.Void Websocket.Client.WebsocketClient/<Stop>d__63::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CStopU3Ed__63_SetStateMachine_mE3CFA16BEC8F720A8997BA15A8DC4B45FDC33B9E (void);
// 0x0000005D System.Void Websocket.Client.WebsocketClient/<StopInternal>d__67::MoveNext()
extern void U3CStopInternalU3Ed__67_MoveNext_m815586EEF9FE8090BC13FA4F191F7D50BF3EB5B2 (void);
// 0x0000005E System.Void Websocket.Client.WebsocketClient/<StopInternal>d__67::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CStopInternalU3Ed__67_SetStateMachine_m34024C47BE48B30FB31C5A0B3CF4A08703D7E33E (void);
// 0x0000005F System.Boolean Websocket.Client.Logging.ILog::Log(Websocket.Client.Logging.LogLevel,System.Func`1<System.String>,System.Exception,System.Object[])
// 0x00000060 Websocket.Client.Logging.Logger Websocket.Client.Logging.ILogProvider::GetLogger(System.String)
// 0x00000061 System.Boolean Websocket.Client.Logging.LogExtensions::IsDebugEnabled(Websocket.Client.Logging.ILog)
extern void LogExtensions_IsDebugEnabled_mCAC658966588FEEE5153851E3E5CEB6EAD2BA53C (void);
// 0x00000062 System.Boolean Websocket.Client.Logging.LogExtensions::IsErrorEnabled(Websocket.Client.Logging.ILog)
extern void LogExtensions_IsErrorEnabled_m4A305E565BC023151DBC70BBBAED80FC10AAB3D9 (void);
// 0x00000063 System.Boolean Websocket.Client.Logging.LogExtensions::IsInfoEnabled(Websocket.Client.Logging.ILog)
extern void LogExtensions_IsInfoEnabled_mE8761ED9F072BE8E1564B4C9D88E5BC3DD3FF658 (void);
// 0x00000064 System.Boolean Websocket.Client.Logging.LogExtensions::IsTraceEnabled(Websocket.Client.Logging.ILog)
extern void LogExtensions_IsTraceEnabled_mFC010BF18EFF9F640D474BF0464C184DE7CBD443 (void);
// 0x00000065 System.Void Websocket.Client.Logging.LogExtensions::Debug(Websocket.Client.Logging.ILog,System.String)
extern void LogExtensions_Debug_m656714A00C3DC3422AB51444CB372DC9CCEA5AE0 (void);
// 0x00000066 System.Void Websocket.Client.Logging.LogExtensions::Error(Websocket.Client.Logging.ILog,System.Exception,System.String,System.Object[])
extern void LogExtensions_Error_m2298BB09E98DCE19BA715342E518CD6B59BFB171 (void);
// 0x00000067 System.Void Websocket.Client.Logging.LogExtensions::ErrorException(Websocket.Client.Logging.ILog,System.String,System.Exception,System.Object[])
extern void LogExtensions_ErrorException_m3C05A62F25C55DEDCFE727B1D2EF0595365D669F (void);
// 0x00000068 System.Void Websocket.Client.Logging.LogExtensions::Info(Websocket.Client.Logging.ILog,System.String)
extern void LogExtensions_Info_m1484B5077C0E14B1F753ABF8EF1727EA9CC7518C (void);
// 0x00000069 System.Void Websocket.Client.Logging.LogExtensions::Trace(Websocket.Client.Logging.ILog,System.String)
extern void LogExtensions_Trace_m7B3671886866E57DF504410C0893750D273B33F0 (void);
// 0x0000006A System.Void Websocket.Client.Logging.LogExtensions::GuardAgainstNullLogger(Websocket.Client.Logging.ILog)
extern void LogExtensions_GuardAgainstNullLogger_m7E651A6757E496C68AA2DC293063D9A197EC00F2 (void);
// 0x0000006B System.Func`1<T> Websocket.Client.Logging.LogExtensions::AsFunc(T)
// 0x0000006C T Websocket.Client.Logging.LogExtensions::Return(T)
// 0x0000006D System.Func`1<System.String> Websocket.Client.Logging.LogExtensions::WrapLogSafeInternal(Websocket.Client.Logging.LoggerExecutionWrapper,System.Func`1<System.String>)
extern void LogExtensions_WrapLogSafeInternal_mE719B778E86091656A00612EB3B5A1791FE4527F (void);
// 0x0000006E System.Void Websocket.Client.Logging.LogExtensions::.cctor()
extern void LogExtensions__cctor_m8D59C018C54273C593907105EB88D86E65B1204B (void);
// 0x0000006F System.Void Websocket.Client.Logging.LogExtensions/<>c::.cctor()
extern void U3CU3Ec__cctor_mD8815347AA01A4EE4F4AFB31E355B8BF92C3D759 (void);
// 0x00000070 System.Void Websocket.Client.Logging.LogExtensions/<>c::.ctor()
extern void U3CU3Ec__ctor_m1882E7DA3AA34EE06F6E7CB91B5714F6ACC8C929 (void);
// 0x00000071 System.String Websocket.Client.Logging.LogExtensions/<>c::<WrapLogSafeInternal>b__48_1()
extern void U3CU3Ec_U3CWrapLogSafeInternalU3Eb__48_1_mF1A0C8677AFAA8709202204851A1217867971D52 (void);
// 0x00000072 System.Void Websocket.Client.Logging.LogExtensions/<>c__DisplayClass48_0::.ctor()
extern void U3CU3Ec__DisplayClass48_0__ctor_mD3700E6BF5A4721121CF848393C415F20A81E039 (void);
// 0x00000073 System.String Websocket.Client.Logging.LogExtensions/<>c__DisplayClass48_0::<WrapLogSafeInternal>b__0()
extern void U3CU3Ec__DisplayClass48_0_U3CWrapLogSafeInternalU3Eb__0_mBF3C75555488F1EDEF4450BDCF5F0030E158E1C1 (void);
// 0x00000074 System.Void Websocket.Client.Logging.LogProvider::.cctor()
extern void LogProvider__cctor_mDCA1038CE6E93EBE5FCAA9383B67023184317D90 (void);
// 0x00000075 System.Boolean Websocket.Client.Logging.LogProvider::get_IsDisabled()
extern void LogProvider_get_IsDisabled_mBAC69566AC26D7906C65BD554778F849A12979F9 (void);
// 0x00000076 System.Void Websocket.Client.Logging.LogProvider::set_IsDisabled(System.Boolean)
extern void LogProvider_set_IsDisabled_m9C0F14DB8EE1BC73EB0983131579013282886DBE (void);
// 0x00000077 Websocket.Client.Logging.ILogProvider Websocket.Client.Logging.LogProvider::get_CurrentLogProvider()
extern void LogProvider_get_CurrentLogProvider_m7D06BBF2DFBC13B571E3A45C55CFB9D731FC4916 (void);
// 0x00000078 Websocket.Client.Logging.ILog Websocket.Client.Logging.LogProvider::GetCurrentClassLogger()
extern void LogProvider_GetCurrentClassLogger_m1F55E16ECAC60254069E96E7BADEE9F667745E21 (void);
// 0x00000079 Websocket.Client.Logging.ILog Websocket.Client.Logging.LogProvider::GetLogger(System.Type,System.String)
extern void LogProvider_GetLogger_m8258D52AC0A7C497BFEFB54DB4BD5E566C6C2539 (void);
// 0x0000007A Websocket.Client.Logging.ILog Websocket.Client.Logging.LogProvider::GetLogger(System.String)
extern void LogProvider_GetLogger_mDE39D10E7B93852C955B54F9D993FBD4FF0B5C2E (void);
// 0x0000007B Websocket.Client.Logging.ILogProvider Websocket.Client.Logging.LogProvider::ResolveLogProvider()
extern void LogProvider_ResolveLogProvider_m14F86D1BB2B76BA61E0A6F2CCA653EE3B3A84066 (void);
// 0x0000007C Websocket.Client.Logging.ILogProvider Websocket.Client.Logging.LogProvider::ForceResolveLogProvider()
extern void LogProvider_ForceResolveLogProvider_mDB8CF8459C68996504CDACB670B540521E918F7F (void);
// 0x0000007D System.Void Websocket.Client.Logging.LogProvider/IsLoggerAvailable::.ctor(System.Object,System.IntPtr)
extern void IsLoggerAvailable__ctor_m11E6C06A9359F06DDCEF3DAA12455A20C21F1740 (void);
// 0x0000007E System.Boolean Websocket.Client.Logging.LogProvider/IsLoggerAvailable::Invoke()
extern void IsLoggerAvailable_Invoke_mE376410EBA9D5B2D7E8AE32AD2E7E5F707E675DA (void);
// 0x0000007F System.Void Websocket.Client.Logging.LogProvider/CreateLogProvider::.ctor(System.Object,System.IntPtr)
extern void CreateLogProvider__ctor_m9221CE593EBF37E127B09672A0912067B782038C (void);
// 0x00000080 Websocket.Client.Logging.ILogProvider Websocket.Client.Logging.LogProvider/CreateLogProvider::Invoke()
extern void CreateLogProvider_Invoke_m8387357C7BC8F5F7EA7A95C11B75B86BACE38004 (void);
// 0x00000081 System.Boolean Websocket.Client.Logging.LogProvider/NoOpLogger::Log(Websocket.Client.Logging.LogLevel,System.Func`1<System.String>,System.Exception,System.Object[])
extern void NoOpLogger_Log_mF4432CD5CFB3D096AEE4CD8B8838BFB5413EA4C0 (void);
// 0x00000082 System.Void Websocket.Client.Logging.LogProvider/NoOpLogger::.ctor()
extern void NoOpLogger__ctor_m0FB12529814EA03BEFFF01C05BC7B10FE8EE7AAB (void);
// 0x00000083 System.Void Websocket.Client.Logging.LogProvider/NoOpLogger::.cctor()
extern void NoOpLogger__cctor_mCDCE9CC1D86FE5D0CE76D0F60EB4228061DE31EB (void);
// 0x00000084 System.Void Websocket.Client.Logging.LogProvider/<>c::.cctor()
extern void U3CU3Ec__cctor_m69449AD0FE24D658DD618359266A10D297993205 (void);
// 0x00000085 System.Void Websocket.Client.Logging.LogProvider/<>c::.ctor()
extern void U3CU3Ec__ctor_m6BDCCB8354C90D78428CEA0D6AE6D08F0A331603 (void);
// 0x00000086 Websocket.Client.Logging.ILogProvider Websocket.Client.Logging.LogProvider/<>c::<.cctor>b__3_0()
extern void U3CU3Ec_U3C_cctorU3Eb__3_0_mC5E22D88D1F5C02D26CF13A86BB4FEB9517B4A63 (void);
// 0x00000087 Websocket.Client.Logging.ILogProvider Websocket.Client.Logging.LogProvider/<>c::<.cctor>b__3_1()
extern void U3CU3Ec_U3C_cctorU3Eb__3_1_m4F4B894EC67FF23A78E572AFE4E6451108597963 (void);
// 0x00000088 Websocket.Client.Logging.ILogProvider Websocket.Client.Logging.LogProvider/<>c::<.cctor>b__3_2()
extern void U3CU3Ec_U3C_cctorU3Eb__3_2_m58B23ECB016E5610862FDCA08B2AECC33B0EA831 (void);
// 0x00000089 Websocket.Client.Logging.ILogProvider Websocket.Client.Logging.LogProvider/<>c::<.cctor>b__3_3()
extern void U3CU3Ec_U3C_cctorU3Eb__3_3_m6AF588AF1A2D0874B5288B7438E90CFA6DB00B21 (void);
// 0x0000008A System.Boolean Websocket.Client.Logging.LogProvider/<>c::<GetLogger>b__16_0()
extern void U3CU3Ec_U3CGetLoggerU3Eb__16_0_m011143298A690C923E9AC484D29C747FED104963 (void);
// 0x0000008B System.Void Websocket.Client.Logging.Logger::.ctor(System.Object,System.IntPtr)
extern void Logger__ctor_m60EA8570DB3CAF4438C63E213A68D69D24EF007A (void);
// 0x0000008C System.Boolean Websocket.Client.Logging.Logger::Invoke(Websocket.Client.Logging.LogLevel,System.Func`1<System.String>,System.Exception,System.Object[])
extern void Logger_Invoke_mD7AB5B341875CDA8B781C5AB4EE10D6AADF33FAC (void);
// 0x0000008D System.Void Websocket.Client.Logging.LoggerExecutionWrapper::.ctor(Websocket.Client.Logging.Logger,System.Func`1<System.Boolean>)
extern void LoggerExecutionWrapper__ctor_m910D86080936823E515F1AFD421195297B8E0C73 (void);
// 0x0000008E Websocket.Client.Logging.Logger Websocket.Client.Logging.LoggerExecutionWrapper::get_WrappedLogger()
extern void LoggerExecutionWrapper_get_WrappedLogger_m77C71670707929ACA9D835B7BA72D374E53F32C6 (void);
// 0x0000008F System.Boolean Websocket.Client.Logging.LoggerExecutionWrapper::Log(Websocket.Client.Logging.LogLevel,System.Func`1<System.String>,System.Exception,System.Object[])
extern void LoggerExecutionWrapper_Log_mEBEF90A6FEC45743D5224C0798EC3FF449CC4C79 (void);
// 0x00000090 System.Boolean Websocket.Client.Logging.LoggerExecutionWrapper/ICallSiteExtension::Log(Websocket.Client.Logging.Logger,Websocket.Client.Logging.LogLevel,System.Func`1<System.String>,System.Exception,System.Object[])
// 0x00000091 System.Boolean Websocket.Client.Logging.LoggerExecutionWrapper/CallSiteExtension::Websocket.Client.Logging.LoggerExecutionWrapper.ICallSiteExtension.Log(Websocket.Client.Logging.Logger,Websocket.Client.Logging.LogLevel,System.Func`1<System.String>,System.Exception,System.Object[])
extern void CallSiteExtension_Websocket_Client_Logging_LoggerExecutionWrapper_ICallSiteExtension_Log_m54143D0B787E7E2F5521CBC50A869882DB2342D2 (void);
// 0x00000092 System.Void Websocket.Client.Logging.LoggerExecutionWrapper/CallSiteExtension::.ctor()
extern void CallSiteExtension__ctor_m8A50048FAC66C767D917CD47E290C27BA980350F (void);
// 0x00000093 System.Void Websocket.Client.Logging.LoggerExecutionWrapper/<>c::.cctor()
extern void U3CU3Ec__cctor_m6E57DF997FF43B0A31A818FBE01F958496FFD269 (void);
// 0x00000094 System.Void Websocket.Client.Logging.LoggerExecutionWrapper/<>c::.ctor()
extern void U3CU3Ec__ctor_m51168F5CF016138EA19FB8B92B732984A87CC91F (void);
// 0x00000095 System.Boolean Websocket.Client.Logging.LoggerExecutionWrapper/<>c::<.ctor>b__4_0()
extern void U3CU3Ec_U3C_ctorU3Eb__4_0_m44FDA83332336D0F20DD2BDFB0689A9A2C8FD7E6 (void);
// 0x00000096 System.String Websocket.Client.Logging.LoggerExecutionWrapper/<>c::<Log>b__8_1()
extern void U3CU3Ec_U3CLogU3Eb__8_1_mF579F106367BD95EA92358FCDB74A72EF814FFAA (void);
// 0x00000097 System.Void Websocket.Client.Logging.LoggerExecutionWrapper/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m41321B76B3AC4906401085E2E498C6F3A232ADBC (void);
// 0x00000098 System.String Websocket.Client.Logging.LoggerExecutionWrapper/<>c__DisplayClass8_0::<Log>b__0()
extern void U3CU3Ec__DisplayClass8_0_U3CLogU3Eb__0_m193DADA5B152A6A4FBD4EAD3F75E1A57F587D129 (void);
// 0x00000099 System.Void Websocket.Client.Logging.LogProviders.DisposableAction::.ctor(System.Action)
extern void DisposableAction__ctor_mEAC707008FCA2FA39B069222C7790338D4F79488 (void);
// 0x0000009A System.Void Websocket.Client.Logging.LogProviders.DisposableAction::Dispose()
extern void DisposableAction_Dispose_mAC63CE10C852289069E5DC46C6A42C61C1C940DD (void);
// 0x0000009B System.Void Websocket.Client.Logging.LogProviders.LibLogException::.ctor(System.String)
extern void LibLogException__ctor_m8C721441399593D2A70B770788190E5FC4D742FB (void);
// 0x0000009C System.Void Websocket.Client.Logging.LogProviders.LibLogException::.ctor(System.String,System.Exception)
extern void LibLogException__ctor_m171B1F93DFC1222D41851F372EC6574C9D6A70E9 (void);
// 0x0000009D System.Void Websocket.Client.Logging.LogProviders.Log4NetLogProvider::.ctor()
extern void Log4NetLogProvider__ctor_m5920F04A32A6F06673F683575F7BC571C747CEC1 (void);
// 0x0000009E System.Boolean Websocket.Client.Logging.LogProviders.Log4NetLogProvider::get_ProviderIsAvailableOverride()
extern void Log4NetLogProvider_get_ProviderIsAvailableOverride_m91A420B952EDEBBA26CCF73EFC2689E996372EDC (void);
// 0x0000009F Websocket.Client.Logging.Logger Websocket.Client.Logging.LogProviders.Log4NetLogProvider::GetLogger(System.String)
extern void Log4NetLogProvider_GetLogger_m62AFAB78BC71FAC04D541E7A7238D9BC45A77EC2 (void);
// 0x000000A0 System.Boolean Websocket.Client.Logging.LogProviders.Log4NetLogProvider::IsLoggerAvailable()
extern void Log4NetLogProvider_IsLoggerAvailable_m55FE21DCE7C17831E244494E7F3D41587D007025 (void);
// 0x000000A1 Websocket.Client.Logging.LogProviders.LogProviderBase/OpenNdc Websocket.Client.Logging.LogProviders.Log4NetLogProvider::GetOpenNdcMethod()
extern void Log4NetLogProvider_GetOpenNdcMethod_mEF1372731A7C1BD857E361219052CA95F5EF8B71 (void);
// 0x000000A2 Websocket.Client.Logging.LogProviders.LogProviderBase/OpenMdc Websocket.Client.Logging.LogProviders.Log4NetLogProvider::GetOpenMdcMethod()
extern void Log4NetLogProvider_GetOpenMdcMethod_m5DE31BF3196AEB308C91AEEC04DF23E91C45DCC5 (void);
// 0x000000A3 System.Type Websocket.Client.Logging.LogProviders.Log4NetLogProvider::GetLogManagerType()
extern void Log4NetLogProvider_GetLogManagerType_m53331C0CB25D57A972247A109D7A0A6E6E4F6AD7 (void);
// 0x000000A4 System.Func`2<System.String,System.Object> Websocket.Client.Logging.LogProviders.Log4NetLogProvider::GetGetLoggerMethodCall()
extern void Log4NetLogProvider_GetGetLoggerMethodCall_mE70A8FCAA425E6FD5B31094A6F4EC2D252D9C6D4 (void);
// 0x000000A5 System.Void Websocket.Client.Logging.LogProviders.Log4NetLogProvider::.cctor()
extern void Log4NetLogProvider__cctor_mBCEE156EB872C5B5FAE8D2F9F087B0A37B377E52 (void);
// 0x000000A6 System.Void Websocket.Client.Logging.LogProviders.Log4NetLogProvider/Log4NetLogger::.ctor(System.Object)
extern void Log4NetLogger__ctor_m5A599977A59078581580A8E5CF40EAB369C2228F (void);
// 0x000000A7 System.Boolean Websocket.Client.Logging.LogProviders.Log4NetLogProvider/Log4NetLogger::Initialize()
extern void Log4NetLogger_Initialize_m0DA95F2AD581EDB8458D4C4D578BC2CC87574CB9 (void);
// 0x000000A8 System.Action`2<System.Object,System.Object> Websocket.Client.Logging.LogProviders.Log4NetLogProvider/Log4NetLogger::GetLogDelegate(System.Type,System.Type,System.Linq.Expressions.UnaryExpression,System.Linq.Expressions.ParameterExpression)
extern void Log4NetLogger_GetLogDelegate_m7A1910C072B463D74C3CE3400D0B29D8E53B46C1 (void);
// 0x000000A9 System.Func`6<System.Object,System.Type,System.Object,System.String,System.Exception,System.Object> Websocket.Client.Logging.LogProviders.Log4NetLogProvider/Log4NetLogger::GetCreateLoggingEvent(System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.UnaryExpression,System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.UnaryExpression,System.Type)
extern void Log4NetLogger_GetCreateLoggingEvent_m195362B332241BED08E6FD87FBF8F5CC883BA97E (void);
// 0x000000AA System.Func`3<System.Object,System.Object,System.Boolean> Websocket.Client.Logging.LogProviders.Log4NetLogProvider/Log4NetLogger::GetIsEnabledFor(System.Type,System.Type,System.Linq.Expressions.UnaryExpression,System.Linq.Expressions.UnaryExpression,System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.ParameterExpression)
extern void Log4NetLogger_GetIsEnabledFor_mDE698763D5CAE40A39581814598E3C609EFB316E (void);
// 0x000000AB System.Action`3<System.Object,System.String,System.Object> Websocket.Client.Logging.LogProviders.Log4NetLogProvider/Log4NetLogger::GetLoggingEventPropertySetter(System.Type)
extern void Log4NetLogger_GetLoggingEventPropertySetter_mCC6D319908CA4223D2EC13452E4B8B2388E5C894 (void);
// 0x000000AC System.Boolean Websocket.Client.Logging.LogProviders.Log4NetLogProvider/Log4NetLogger::Log(Websocket.Client.Logging.LogLevel,System.Func`1<System.String>,System.Exception,System.Object[])
extern void Log4NetLogger_Log_m13D14C4A4431BDD787195A9DF08ADF4207A0C761 (void);
// 0x000000AD System.Void Websocket.Client.Logging.LogProviders.Log4NetLogProvider/Log4NetLogger::PopulateProperties(System.Object,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>)
extern void Log4NetLogger_PopulateProperties_m4D84A8131183E0701555A294045ADC95D1FD786A (void);
// 0x000000AE System.Boolean Websocket.Client.Logging.LogProviders.Log4NetLogProvider/Log4NetLogger::IsLogLevelEnable(Websocket.Client.Logging.LogLevel)
extern void Log4NetLogger_IsLogLevelEnable_m78416315AB604D1E3713670E612626D1C75D72A4 (void);
// 0x000000AF System.Object Websocket.Client.Logging.LogProviders.Log4NetLogProvider/Log4NetLogger::TranslateLevel(Websocket.Client.Logging.LogLevel)
extern void Log4NetLogger_TranslateLevel_m7E311B637A57747A2FE2D8456616DABC118A62C5 (void);
// 0x000000B0 System.Void Websocket.Client.Logging.LogProviders.Log4NetLogProvider/Log4NetLogger::.cctor()
extern void Log4NetLogger__cctor_m0FFF6380742C797E8C1B0D337C3A14C5EBE776BE (void);
// 0x000000B1 System.Void Websocket.Client.Logging.LogProviders.Log4NetLogProvider/Log4NetLogger/<>c::.cctor()
extern void U3CU3Ec__cctor_m35818EBCCC98BC1A422A69E3AABE48451C5EA0F5 (void);
// 0x000000B2 System.Void Websocket.Client.Logging.LogProviders.Log4NetLogProvider/Log4NetLogger/<>c::.ctor()
extern void U3CU3Ec__ctor_m40B5332D38D7BA318619D6B601C7119858F78E4D (void);
// 0x000000B3 System.Boolean Websocket.Client.Logging.LogProviders.Log4NetLogProvider/Log4NetLogger/<>c::<Initialize>b__14_0(System.Reflection.FieldInfo)
extern void U3CU3Ec_U3CInitializeU3Eb__14_0_mE39E698955D3D211450A91F4B6DDDBC34570162E (void);
// 0x000000B4 System.Boolean Websocket.Client.Logging.LogProviders.Log4NetLogProvider/Log4NetLogger/<>c::<Initialize>b__14_1(System.Reflection.FieldInfo)
extern void U3CU3Ec_U3CInitializeU3Eb__14_1_m50C14E80467A69AF8D31E7DDFE897E22D7AA12D0 (void);
// 0x000000B5 System.Boolean Websocket.Client.Logging.LogProviders.Log4NetLogProvider/Log4NetLogger/<>c::<Initialize>b__14_2(System.Reflection.FieldInfo)
extern void U3CU3Ec_U3CInitializeU3Eb__14_2_m84314E02D8E087F1980B094041C0032A1E4F5F59 (void);
// 0x000000B6 System.Boolean Websocket.Client.Logging.LogProviders.Log4NetLogProvider/Log4NetLogger/<>c::<Initialize>b__14_3(System.Reflection.FieldInfo)
extern void U3CU3Ec_U3CInitializeU3Eb__14_3_m5BECFA7F7DC3FE866F2369C9DBF94518ADE6A0FF (void);
// 0x000000B7 System.Boolean Websocket.Client.Logging.LogProviders.Log4NetLogProvider/Log4NetLogger/<>c::<Initialize>b__14_4(System.Reflection.FieldInfo)
extern void U3CU3Ec_U3CInitializeU3Eb__14_4_m8FD1272B693A465C87B21D176303D07F67132FAC (void);
// 0x000000B8 System.Boolean Websocket.Client.Logging.LogProviders.Log4NetLogProvider/Log4NetLogger/<>c::<Initialize>b__14_5(System.Reflection.FieldInfo)
extern void U3CU3Ec_U3CInitializeU3Eb__14_5_m455D8C87D9B464A180EE1BFA9BABB2A9D55E0FE0 (void);
// 0x000000B9 System.Collections.Generic.KeyValuePair`2<System.String,System.Object> Websocket.Client.Logging.LogProviders.Log4NetLogProvider/Log4NetLogger/<>c::<PopulateProperties>b__20_0(System.String,System.Object)
extern void U3CU3Ec_U3CPopulatePropertiesU3Eb__20_0_mA3CC35E73FD1CE4A08C3CC80C37F71A1DB836816 (void);
// 0x000000BA System.Void Websocket.Client.Logging.LogProviders.Log4NetLogProvider/<>c__DisplayClass11_0::.ctor()
extern void U3CU3Ec__DisplayClass11_0__ctor_m412F57EA8D28694D58A6F319C7554FA8EB705D78 (void);
// 0x000000BB System.Object Websocket.Client.Logging.LogProviders.Log4NetLogProvider/<>c__DisplayClass11_0::<GetGetLoggerMethodCall>b__0(System.String)
extern void U3CU3Ec__DisplayClass11_0_U3CGetGetLoggerMethodCallU3Eb__0_m4F3C655F27560C8E8EE302C8EAF76A9802515145 (void);
// 0x000000BC System.Void Websocket.Client.Logging.LogProviders.Log4NetLogProvider/<>c__DisplayClass9_0::.ctor()
extern void U3CU3Ec__DisplayClass9_0__ctor_m7EF809EEDF50F4769F2FF478B60FABD16027C0E2 (void);
// 0x000000BD System.IDisposable Websocket.Client.Logging.LogProviders.Log4NetLogProvider/<>c__DisplayClass9_0::<GetOpenMdcMethod>b__0(System.String,System.Object,System.Boolean)
extern void U3CU3Ec__DisplayClass9_0_U3CGetOpenMdcMethodU3Eb__0_m587329CC3E2B6F64EDAD724E3E0E506B2298787C (void);
// 0x000000BE System.Void Websocket.Client.Logging.LogProviders.Log4NetLogProvider/<>c__DisplayClass9_1::.ctor()
extern void U3CU3Ec__DisplayClass9_1__ctor_m2261F88E40C7D38165F11D844EDF8C3105BDB412 (void);
// 0x000000BF System.Void Websocket.Client.Logging.LogProviders.Log4NetLogProvider/<>c__DisplayClass9_1::<GetOpenMdcMethod>b__1()
extern void U3CU3Ec__DisplayClass9_1_U3CGetOpenMdcMethodU3Eb__1_m0506E98A2358353CF3B19802C71D413481A2D653 (void);
// 0x000000C0 System.Func`1<System.String> Websocket.Client.Logging.LogProviders.LogMessageFormatter::SimulateStructuredLogging(System.Func`1<System.String>,System.Object[])
extern void LogMessageFormatter_SimulateStructuredLogging_m47743ADDA3AAB510824F28A4536CCB884ABC5390 (void);
// 0x000000C1 System.String Websocket.Client.Logging.LogProviders.LogMessageFormatter::ReplaceFirst(System.String,System.String,System.String)
extern void LogMessageFormatter_ReplaceFirst_mEF1514BB6C2DA40153BD5320509258D2D8A9C55C (void);
// 0x000000C2 System.String Websocket.Client.Logging.LogProviders.LogMessageFormatter::FormatStructuredMessage(System.String,System.Object[],System.Collections.Generic.IEnumerable`1<System.String>&)
extern void LogMessageFormatter_FormatStructuredMessage_m6620C979307FDEAD0FDFBA63567BCB59D6DB77BC (void);
// 0x000000C3 System.Void Websocket.Client.Logging.LogProviders.LogMessageFormatter::.cctor()
extern void LogMessageFormatter__cctor_m465AA695DCF0558AFC2D8ECF7BF976F6053B0739 (void);
// 0x000000C4 System.Void Websocket.Client.Logging.LogProviders.LogMessageFormatter/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_mFDD8F6BD2238B61FD14ED9AFC8A9F5D8B5D459B2 (void);
// 0x000000C5 System.String Websocket.Client.Logging.LogProviders.LogMessageFormatter/<>c__DisplayClass1_0::<SimulateStructuredLogging>b__0()
extern void U3CU3Ec__DisplayClass1_0_U3CSimulateStructuredLoggingU3Eb__0_m803FE27631666019767052E7BECE7FE367DC18AD (void);
// 0x000000C6 System.Void Websocket.Client.Logging.LogProviders.LogProviderBase::.ctor()
extern void LogProviderBase__ctor_m3648276D4C4F6241F9B553B8BFC54ABFAA0840F3 (void);
// 0x000000C7 Websocket.Client.Logging.Logger Websocket.Client.Logging.LogProviders.LogProviderBase::GetLogger(System.String)
// 0x000000C8 Websocket.Client.Logging.LogProviders.LogProviderBase/OpenNdc Websocket.Client.Logging.LogProviders.LogProviderBase::GetOpenNdcMethod()
extern void LogProviderBase_GetOpenNdcMethod_m960B33CAE13791297DE107A80C2DD69738C574B4 (void);
// 0x000000C9 Websocket.Client.Logging.LogProviders.LogProviderBase/OpenMdc Websocket.Client.Logging.LogProviders.LogProviderBase::GetOpenMdcMethod()
extern void LogProviderBase_GetOpenMdcMethod_mC503F6E4FCEB45919E49E1EAE7E3B6AACF7B23D9 (void);
// 0x000000CA System.Type Websocket.Client.Logging.LogProviders.LogProviderBase::FindType(System.String,System.String)
extern void LogProviderBase_FindType_mC77517BDF338743CD7540F157076F044CF4F4C9A (void);
// 0x000000CB System.Type Websocket.Client.Logging.LogProviders.LogProviderBase::FindType(System.String,System.Collections.Generic.IReadOnlyList`1<System.String>)
extern void LogProviderBase_FindType_mF184A881434E6468FD9CA2A906512E17839CE2FE (void);
// 0x000000CC System.Void Websocket.Client.Logging.LogProviders.LogProviderBase::.cctor()
extern void LogProviderBase__cctor_mE9AD588D51BFB92FEF4D280DFCD00CBE333EF525 (void);
// 0x000000CD System.Void Websocket.Client.Logging.LogProviders.LogProviderBase/OpenNdc::.ctor(System.Object,System.IntPtr)
extern void OpenNdc__ctor_m23F38FEF91F2FEB0BCE4A94A45479255BDDB6AD5 (void);
// 0x000000CE System.IDisposable Websocket.Client.Logging.LogProviders.LogProviderBase/OpenNdc::Invoke(System.String)
extern void OpenNdc_Invoke_mBF0B0AE63D1ACC7494132A5F9639B067A95118FE (void);
// 0x000000CF System.Void Websocket.Client.Logging.LogProviders.LogProviderBase/OpenMdc::.ctor(System.Object,System.IntPtr)
extern void OpenMdc__ctor_m8B98BC8B077ACA6E77019A4895802B2D1F3ADD15 (void);
// 0x000000D0 System.IDisposable Websocket.Client.Logging.LogProviders.LogProviderBase/OpenMdc::Invoke(System.String,System.Object,System.Boolean)
extern void OpenMdc_Invoke_mC4023EB1EF6E7DF4E62007000C8E4A409390E167 (void);
// 0x000000D1 System.Void Websocket.Client.Logging.LogProviders.LogProviderBase/<>c::.cctor()
extern void U3CU3Ec__cctor_mFF2CAFB865B6A85C22951E4FF261871E15478EAE (void);
// 0x000000D2 System.Void Websocket.Client.Logging.LogProviders.LogProviderBase/<>c::.ctor()
extern void U3CU3Ec__ctor_m45FA43BA8232067545C38FDE7517D0FA4DA27DC1 (void);
// 0x000000D3 System.IDisposable Websocket.Client.Logging.LogProviders.LogProviderBase/<>c::<GetOpenNdcMethod>b__8_0(System.String)
extern void U3CU3Ec_U3CGetOpenNdcMethodU3Eb__8_0_mFE681F56D4D9803FD6D1F24983512A5EBF219550 (void);
// 0x000000D4 System.IDisposable Websocket.Client.Logging.LogProviders.LogProviderBase/<>c::<GetOpenMdcMethod>b__9_0(System.String,System.Object,System.Boolean)
extern void U3CU3Ec_U3CGetOpenMdcMethodU3Eb__9_0_m7CBBF1E07983EBFF91B1D9352243843F4782C6DA (void);
// 0x000000D5 System.Boolean Websocket.Client.Logging.LogProviders.LogProviderBase/<>c::<FindType>b__13_1(System.Type)
extern void U3CU3Ec_U3CFindTypeU3Eb__13_1_m4CEDADC3A1D6E36198FF5211CAF9EC2EE9C9BF08 (void);
// 0x000000D6 System.Void Websocket.Client.Logging.LogProviders.LogProviderBase/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_m977B57A448391A63682467A07F1AD96F7245BAB7 (void);
// 0x000000D7 System.Type Websocket.Client.Logging.LogProviders.LogProviderBase/<>c__DisplayClass13_0::<FindType>b__0(System.String)
extern void U3CU3Ec__DisplayClass13_0_U3CFindTypeU3Eb__0_m601D70FAA65911A812118774CE77E8853ADB4ABA (void);
// 0x000000D8 System.Void Websocket.Client.Logging.LogProviders.LoupeLogProvider::.ctor()
extern void LoupeLogProvider__ctor_mF636A64551A025C3434C3453DC7D3DE14A1F134F (void);
// 0x000000D9 System.Boolean Websocket.Client.Logging.LogProviders.LoupeLogProvider::get_ProviderIsAvailableOverride()
extern void LoupeLogProvider_get_ProviderIsAvailableOverride_m91F8F367240A2647EA2DDB7C8991881810407355 (void);
// 0x000000DA Websocket.Client.Logging.Logger Websocket.Client.Logging.LogProviders.LoupeLogProvider::GetLogger(System.String)
extern void LoupeLogProvider_GetLogger_m3178858BF24940298FD7B8352A8ACFDD925697C8 (void);
// 0x000000DB System.Boolean Websocket.Client.Logging.LogProviders.LoupeLogProvider::IsLoggerAvailable()
extern void LoupeLogProvider_IsLoggerAvailable_mD96468C0D4B076D539D104A47F75754FC7D7E17A (void);
// 0x000000DC System.Type Websocket.Client.Logging.LogProviders.LoupeLogProvider::GetTypeFromCoreOrFrameworkDll(System.String)
extern void LoupeLogProvider_GetTypeFromCoreOrFrameworkDll_m7C3A08779E0B1668443067CC1EE5091887EA9696 (void);
// 0x000000DD System.Type Websocket.Client.Logging.LogProviders.LoupeLogProvider::GetLogManagerType()
extern void LoupeLogProvider_GetLogManagerType_mD6B82FC7ED3E87A8A34726BCC5457B2E17F6CF30 (void);
// 0x000000DE Websocket.Client.Logging.LogProviders.LoupeLogProvider/WriteDelegate Websocket.Client.Logging.LogProviders.LoupeLogProvider::GetLogWriteDelegate()
extern void LoupeLogProvider_GetLogWriteDelegate_mBE2EF3B78499A7E41C91581E50C4BB09AB2F2ECE (void);
// 0x000000DF System.Void Websocket.Client.Logging.LogProviders.LoupeLogProvider::.cctor()
extern void LoupeLogProvider__cctor_mAE39F96AC31AE5B97E13B79CB1EC44C3DE62FE51 (void);
// 0x000000E0 System.Void Websocket.Client.Logging.LogProviders.LoupeLogProvider/WriteDelegate::.ctor(System.Object,System.IntPtr)
extern void WriteDelegate__ctor_m45B48D81B8B1DF74D05B6E024389B3B31DFCB7BD (void);
// 0x000000E1 System.Void Websocket.Client.Logging.LogProviders.LoupeLogProvider/WriteDelegate::Invoke(System.Int32,System.String,System.Int32,System.Exception,System.Boolean,System.Int32,System.String,System.String,System.String,System.String,System.Object[])
extern void WriteDelegate_Invoke_mD778CD9BE383B75AA32DD8E6A6609E2AF262C351 (void);
// 0x000000E2 System.Void Websocket.Client.Logging.LogProviders.LoupeLogProvider/LoupeLogger::.ctor(System.String,Websocket.Client.Logging.LogProviders.LoupeLogProvider/WriteDelegate)
extern void LoupeLogger__ctor_m8F54B299741784514AD7FA4C8679FF663B5DCD65 (void);
// 0x000000E3 System.Boolean Websocket.Client.Logging.LogProviders.LoupeLogProvider/LoupeLogger::Log(Websocket.Client.Logging.LogLevel,System.Func`1<System.String>,System.Exception,System.Object[])
extern void LoupeLogger_Log_m41C9F98EF56AE673AAE7B5F06AACA05A95139A7F (void);
// 0x000000E4 System.Int32 Websocket.Client.Logging.LogProviders.LoupeLogProvider/LoupeLogger::ToLogMessageSeverity(Websocket.Client.Logging.LogLevel)
extern void LoupeLogger_ToLogMessageSeverity_mB2CA228DA2F22C03E4E14095E989E5A2C8893C5F (void);
// 0x000000E5 System.Void Websocket.Client.Logging.LogProviders.NLogLogProvider::.ctor()
extern void NLogLogProvider__ctor_m200D192F4239262971B1498232DEDD960EC12941 (void);
// 0x000000E6 System.Void Websocket.Client.Logging.LogProviders.NLogLogProvider::.cctor()
extern void NLogLogProvider__cctor_m3AED7B9F2394B9F0337AEDA0E30132433040EB89 (void);
// 0x000000E7 System.Boolean Websocket.Client.Logging.LogProviders.NLogLogProvider::get_ProviderIsAvailableOverride()
extern void NLogLogProvider_get_ProviderIsAvailableOverride_m3545A4BE6C98B4F741CB3ED8CECC459C71900C94 (void);
// 0x000000E8 System.Void Websocket.Client.Logging.LogProviders.NLogLogProvider::set_ProviderIsAvailableOverride(System.Boolean)
extern void NLogLogProvider_set_ProviderIsAvailableOverride_m304A40B56D1943540B5154E51B5AFF235B7D90DB (void);
// 0x000000E9 Websocket.Client.Logging.Logger Websocket.Client.Logging.LogProviders.NLogLogProvider::GetLogger(System.String)
extern void NLogLogProvider_GetLogger_m628D8DD44D4B4FDADF2CB3C81748CBD7B501EBFA (void);
// 0x000000EA System.Boolean Websocket.Client.Logging.LogProviders.NLogLogProvider::IsLoggerAvailable()
extern void NLogLogProvider_IsLoggerAvailable_m269FCEDD95B9E4CE01B535A9AFE4D66F88B47AE4 (void);
// 0x000000EB Websocket.Client.Logging.LogProviders.LogProviderBase/OpenNdc Websocket.Client.Logging.LogProviders.NLogLogProvider::GetOpenNdcMethod()
extern void NLogLogProvider_GetOpenNdcMethod_m6B024CD182461926E2C4D436EE7D5355396CBE12 (void);
// 0x000000EC Websocket.Client.Logging.LogProviders.LogProviderBase/OpenMdc Websocket.Client.Logging.LogProviders.NLogLogProvider::GetOpenMdcMethod()
extern void NLogLogProvider_GetOpenMdcMethod_m3C56DA3A763C8D48FE75231404AD3E047FE779D4 (void);
// 0x000000ED System.Type Websocket.Client.Logging.LogProviders.NLogLogProvider::GetLogManagerType()
extern void NLogLogProvider_GetLogManagerType_m661A4F69F9D00F01DB3F39DD49FC9E8D6E48EC57 (void);
// 0x000000EE System.Func`2<System.String,System.Object> Websocket.Client.Logging.LogProviders.NLogLogProvider::GetGetLoggerMethodCall()
extern void NLogLogProvider_GetGetLoggerMethodCall_m557943EE382120E314C10B6F878D20F328607F2F (void);
// 0x000000EF System.Void Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger::.ctor(System.Object)
extern void NLogLogger__ctor_m9EDA1ADD96FD5EA536A386308707CE1977D484A9 (void);
// 0x000000F0 System.Boolean Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger::Initialize()
extern void NLogLogger_Initialize_m04E0FA541452199CD1A124751C47F4A1205E7EBF (void);
// 0x000000F1 Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/IsEnabledDelegate Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger::GetIsEnabledDelegate(System.Type,System.String)
extern void NLogLogger_GetIsEnabledDelegate_mAF276EB748B4D43ACDF7BF208CD4A0D284ECCB43 (void);
// 0x000000F2 Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/LoggerNameDelegate Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger::GetLoggerNameDelegate(System.Type)
extern void NLogLogger_GetLoggerNameDelegate_m269A29AF63F371A449A30E766B6DA20A8A172417 (void);
// 0x000000F3 Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/LogDelegate Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger::GetLogDelegate(System.Type,System.String)
extern void NLogLogger_GetLogDelegate_m84D11AD48E2DC9788D1468D5E259BCA4175781AE (void);
// 0x000000F4 Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/LogEventDelegate Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger::GetLogEventDelegate(System.Type,System.Type)
extern void NLogLogger_GetLogEventDelegate_m2C2629501FE422C3FB632B6435AFC245B4BBCA49 (void);
// 0x000000F5 Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/LogExceptionDelegate Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger::GetLogExceptionDelegate(System.Type,System.String)
extern void NLogLogger_GetLogExceptionDelegate_m66BD0428DF781BD636422B0397887D602A5D67E2 (void);
// 0x000000F6 System.Boolean Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger::Log(Websocket.Client.Logging.LogLevel,System.Func`1<System.String>,System.Exception,System.Object[])
extern void NLogLogger_Log_m931A26FB64575588C8A0620816CDF05FE97CE0C9 (void);
// 0x000000F7 System.Boolean Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger::LogException(Websocket.Client.Logging.LogLevel,System.Func`1<System.String>,System.Exception)
extern void NLogLogger_LogException_mB03C1EE870873ED3738756C4A99E1191C385DB6E (void);
// 0x000000F8 System.Boolean Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger::IsLogLevelEnable(Websocket.Client.Logging.LogLevel)
extern void NLogLogger_IsLogLevelEnable_mF453C0E45C459417A6EFEE470AAAB13CAB0F6AC5 (void);
// 0x000000F9 System.Object Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger::TranslateLevel(Websocket.Client.Logging.LogLevel)
extern void NLogLogger_TranslateLevel_mDB4A67BAF3D8C999D73AD4433D005BB133B46603 (void);
// 0x000000FA System.Boolean Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger::IsStructuredLoggingEnabled()
extern void NLogLogger_IsStructuredLoggingEnabled_m77EFBE8C6046DACB326A66B31EAF62E239CAA12B (void);
// 0x000000FB System.Void Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger::.cctor()
extern void NLogLogger__cctor_m088C5B4D406B2EFE3F9F24C04EB3FC204B71DF42 (void);
// 0x000000FC System.Void Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/LoggerNameDelegate::.ctor(System.Object,System.IntPtr)
extern void LoggerNameDelegate__ctor_m5B143CB56093EA8B0FF0B5B3DFF764B65FEDD37F (void);
// 0x000000FD System.String Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/LoggerNameDelegate::Invoke(System.Object)
extern void LoggerNameDelegate_Invoke_m8BDC77D5487C9930754C47F904C329DC7881518A (void);
// 0x000000FE System.Void Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/LogEventDelegate::.ctor(System.Object,System.IntPtr)
extern void LogEventDelegate__ctor_m436ED118C8F2A660B402E8E1EE4F349AD7CCACB6 (void);
// 0x000000FF System.Void Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/LogEventDelegate::Invoke(System.Object,System.Type,System.Object)
extern void LogEventDelegate_Invoke_m3527F7083C8349A28355DE64570098150A2E94CE (void);
// 0x00000100 System.Void Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/IsEnabledDelegate::.ctor(System.Object,System.IntPtr)
extern void IsEnabledDelegate__ctor_mE36C12A47E4D1E00F7AA71B621FAED9991608B00 (void);
// 0x00000101 System.Boolean Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/IsEnabledDelegate::Invoke(System.Object)
extern void IsEnabledDelegate_Invoke_m030306C1CF885C10966770E35E3563D7472F4FAC (void);
// 0x00000102 System.Void Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/LogDelegate::.ctor(System.Object,System.IntPtr)
extern void LogDelegate__ctor_m181A09A5CF923142AFC56C8413D44AE99F5A3D4A (void);
// 0x00000103 System.Void Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/LogDelegate::Invoke(System.Object,System.String)
extern void LogDelegate_Invoke_m3446FCE9D42C983D2E9DA0FD04E87B43BDA3C35F (void);
// 0x00000104 System.Void Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/LogExceptionDelegate::.ctor(System.Object,System.IntPtr)
extern void LogExceptionDelegate__ctor_m044542B20728589D3E757BBDDF64036AAF978CFC (void);
// 0x00000105 System.Void Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/LogExceptionDelegate::Invoke(System.Object,System.String,System.Exception)
extern void LogExceptionDelegate_Invoke_m942806817CACA9805660EAE50CF0EE5C19C1C37F (void);
// 0x00000106 System.Void Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/<>c::.cctor()
extern void U3CU3Ec__cctor_mE95474F1AB61FBC55A9EDC1AEDCBB9ACB98BA47D (void);
// 0x00000107 System.Void Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/<>c::.ctor()
extern void U3CU3Ec__ctor_m5199A5BD9460DB53066F829E18E2397416F12221 (void);
// 0x00000108 System.Boolean Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/<>c::<Initialize>b__37_0(System.Reflection.FieldInfo)
extern void U3CU3Ec_U3CInitializeU3Eb__37_0_m502229B4B8930BB4DEEFE6F8194FE5385ED63307 (void);
// 0x00000109 System.Boolean Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/<>c::<Initialize>b__37_1(System.Reflection.FieldInfo)
extern void U3CU3Ec_U3CInitializeU3Eb__37_1_mF3179EA293B339DC06C3024CE66FD9830F0982C6 (void);
// 0x0000010A System.Boolean Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/<>c::<Initialize>b__37_2(System.Reflection.FieldInfo)
extern void U3CU3Ec_U3CInitializeU3Eb__37_2_m14C3C122F509DF376211BEF684680315B6B831DA (void);
// 0x0000010B System.Boolean Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/<>c::<Initialize>b__37_3(System.Reflection.FieldInfo)
extern void U3CU3Ec_U3CInitializeU3Eb__37_3_m4CF94E16608B62FF111BF003E41D1555645BEC67 (void);
// 0x0000010C System.Boolean Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/<>c::<Initialize>b__37_4(System.Reflection.FieldInfo)
extern void U3CU3Ec_U3CInitializeU3Eb__37_4_m29776BEEE60D5A9E7190A29B327ECE3B8C8F2965 (void);
// 0x0000010D System.Boolean Websocket.Client.Logging.LogProviders.NLogLogProvider/NLogLogger/<>c::<Initialize>b__37_5(System.Reflection.FieldInfo)
extern void U3CU3Ec_U3CInitializeU3Eb__37_5_mB07037B5C0F536D45E6A711708B4FB4307052FD4 (void);
// 0x0000010E System.Void Websocket.Client.Logging.LogProviders.NLogLogProvider/<>c__DisplayClass10_0::.ctor()
extern void U3CU3Ec__DisplayClass10_0__ctor_m0C356A9F35FECAFB43502A368B55F4978BE1E661 (void);
// 0x0000010F System.IDisposable Websocket.Client.Logging.LogProviders.NLogLogProvider/<>c__DisplayClass10_0::<GetOpenMdcMethod>b__0(System.String,System.Object,System.Boolean)
extern void U3CU3Ec__DisplayClass10_0_U3CGetOpenMdcMethodU3Eb__0_mF857542EE4D84F9A47B47502EEC91CE0B0718586 (void);
// 0x00000110 System.Void Websocket.Client.Logging.LogProviders.NLogLogProvider/<>c__DisplayClass10_1::.ctor()
extern void U3CU3Ec__DisplayClass10_1__ctor_m002210874CF64D5774E322566F4C78B617138502 (void);
// 0x00000111 System.IDisposable Websocket.Client.Logging.LogProviders.NLogLogProvider/<>c__DisplayClass10_1::<GetOpenMdcMethod>b__1(System.String,System.Object,System.Boolean)
extern void U3CU3Ec__DisplayClass10_1_U3CGetOpenMdcMethodU3Eb__1_mE12238737412A0AD85D8E1AD252900A310B0A376 (void);
// 0x00000112 System.Void Websocket.Client.Logging.LogProviders.NLogLogProvider/<>c__DisplayClass10_2::.ctor()
extern void U3CU3Ec__DisplayClass10_2__ctor_m9AAC8D4F00685FD3A268C8095C22CA6FECF09EE8 (void);
// 0x00000113 System.Void Websocket.Client.Logging.LogProviders.NLogLogProvider/<>c__DisplayClass10_2::<GetOpenMdcMethod>b__2()
extern void U3CU3Ec__DisplayClass10_2_U3CGetOpenMdcMethodU3Eb__2_mFB8829FC03AD114684A9606330A26EB7958FC4D6 (void);
// 0x00000114 System.Void Websocket.Client.Logging.LogProviders.SerilogLogProvider::.ctor()
extern void SerilogLogProvider__ctor_m183B7B03AECAA3D6303511A87168F8B3671A5969 (void);
// 0x00000115 System.Boolean Websocket.Client.Logging.LogProviders.SerilogLogProvider::get_ProviderIsAvailableOverride()
extern void SerilogLogProvider_get_ProviderIsAvailableOverride_m6A63ABF5752694B0D8266A5ABE52DE9938424F62 (void);
// 0x00000116 Websocket.Client.Logging.Logger Websocket.Client.Logging.LogProviders.SerilogLogProvider::GetLogger(System.String)
extern void SerilogLogProvider_GetLogger_m5816EF560E9839ECCF43EE15525CB7C6B087E12A (void);
// 0x00000117 System.Boolean Websocket.Client.Logging.LogProviders.SerilogLogProvider::IsLoggerAvailable()
extern void SerilogLogProvider_IsLoggerAvailable_m29C965C3913B89AEA4FC95613E77767540CDB4DD (void);
// 0x00000118 Websocket.Client.Logging.LogProviders.LogProviderBase/OpenNdc Websocket.Client.Logging.LogProviders.SerilogLogProvider::GetOpenNdcMethod()
extern void SerilogLogProvider_GetOpenNdcMethod_m41340483F1AAE06A78A91C505E34184AAED0280A (void);
// 0x00000119 Websocket.Client.Logging.LogProviders.LogProviderBase/OpenMdc Websocket.Client.Logging.LogProviders.SerilogLogProvider::GetOpenMdcMethod()
extern void SerilogLogProvider_GetOpenMdcMethod_m728B8A6A6CA65C7D2CF030A1B935768097488DE3 (void);
// 0x0000011A System.Func`4<System.String,System.Object,System.Boolean,System.IDisposable> Websocket.Client.Logging.LogProviders.SerilogLogProvider::GetPushProperty()
extern void SerilogLogProvider_GetPushProperty_m05CCC43A16FE16723C308926DC7B3A0CFC1BC010 (void);
// 0x0000011B System.Type Websocket.Client.Logging.LogProviders.SerilogLogProvider::GetLogManagerType()
extern void SerilogLogProvider_GetLogManagerType_m419D9F54EF0EC26A0AE6CD987493588C139A08B4 (void);
// 0x0000011C System.Func`2<System.String,System.Object> Websocket.Client.Logging.LogProviders.SerilogLogProvider::GetForContextMethodCall()
extern void SerilogLogProvider_GetForContextMethodCall_m534AB14DE61D6DC2CA9BB31EE3EF409E9AE6307F (void);
// 0x0000011D System.Void Websocket.Client.Logging.LogProviders.SerilogLogProvider::.cctor()
extern void SerilogLogProvider__cctor_m9DD19EEEF06AB56D9E2D23F7817BE17AF806FECB (void);
// 0x0000011E System.Void Websocket.Client.Logging.LogProviders.SerilogLogProvider/SerilogLogger::.ctor(System.Object)
extern void SerilogLogger__ctor_m54D48DAB6A6AAFBF178C800A78BC582B02832B0F (void);
// 0x0000011F System.Boolean Websocket.Client.Logging.LogProviders.SerilogLogProvider/SerilogLogger::Initialize()
extern void SerilogLogger_Initialize_m0EFB75605CFB4607D3337838F7933AF9D91EF64A (void);
// 0x00000120 System.Boolean Websocket.Client.Logging.LogProviders.SerilogLogProvider/SerilogLogger::Log(Websocket.Client.Logging.LogLevel,System.Func`1<System.String>,System.Exception,System.Object[])
extern void SerilogLogger_Log_m7F9EA68C5405F8A8388FC0BFFDA4718808100148 (void);
// 0x00000121 System.Void Websocket.Client.Logging.LogProviders.SerilogLogProvider/SerilogLogger::LogMessage(System.Object,System.Func`1<System.String>,System.Object[])
extern void SerilogLogger_LogMessage_mE6D96C51D6B841948D97BA247914957CEF21E753 (void);
// 0x00000122 System.Void Websocket.Client.Logging.LogProviders.SerilogLogProvider/SerilogLogger::LogException(System.Object,System.Func`1<System.String>,System.Exception,System.Object[])
extern void SerilogLogger_LogException_m67EC404DE5EB7EDF25034E7DBE148DDA673FF21E (void);
// 0x00000123 System.Object Websocket.Client.Logging.LogProviders.SerilogLogProvider/SerilogLogger::TranslateLevel(Websocket.Client.Logging.LogLevel)
extern void SerilogLogger_TranslateLevel_mFCF1408CCEBA6EA50756658BCB5D302AD29707D2 (void);
// 0x00000124 System.Void Websocket.Client.Logging.LogProviders.SerilogLogProvider/SerilogLogger::.cctor()
extern void SerilogLogger__cctor_mC49E5C96B46AD96A335F6D52297934B9314F49F7 (void);
// 0x00000125 System.Void Websocket.Client.Logging.LogProviders.SerilogLogProvider/<>c::.cctor()
extern void U3CU3Ec__cctor_mA19D0A795E0CFA59D522BC1BD0E4F66B254069BD (void);
// 0x00000126 System.Void Websocket.Client.Logging.LogProviders.SerilogLogProvider/<>c::.ctor()
extern void U3CU3Ec__ctor_mA7F3C4FE9395D291D29E2B01235D86E3D94FA050 (void);
// 0x00000127 System.IDisposable Websocket.Client.Logging.LogProviders.SerilogLogProvider/<>c::<GetOpenNdcMethod>b__9_0(System.String)
extern void U3CU3Ec_U3CGetOpenNdcMethodU3Eb__9_0_m01D531DC53BC555126558F3C6B137F8509DD2ACB (void);
// 0x00000128 System.IDisposable Websocket.Client.Logging.LogProviders.SerilogLogProvider/<>c::<GetOpenMdcMethod>b__10_0(System.String,System.Object,System.Boolean)
extern void U3CU3Ec_U3CGetOpenMdcMethodU3Eb__10_0_mDEDA2C5A5DD293BDBE46957DAD012556B1AF1358 (void);
// 0x00000129 System.Void Websocket.Client.Logging.LogProviders.SerilogLogProvider/<>c__DisplayClass11_0::.ctor()
extern void U3CU3Ec__DisplayClass11_0__ctor_m5C2FF9AE9C3C6F8F136D422063A505BE51B4D28F (void);
// 0x0000012A System.IDisposable Websocket.Client.Logging.LogProviders.SerilogLogProvider/<>c__DisplayClass11_0::<GetPushProperty>b__0(System.String,System.Object,System.Boolean)
extern void U3CU3Ec__DisplayClass11_0_U3CGetPushPropertyU3Eb__0_m3A3F7FD774FA841568A2D3C6B74742222CE98DD6 (void);
// 0x0000012B System.Void Websocket.Client.Logging.LogProviders.SerilogLogProvider/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_m9DF4904A65FDCB4E6C0C5967511BA07BED55FD4E (void);
// 0x0000012C System.Object Websocket.Client.Logging.LogProviders.SerilogLogProvider/<>c__DisplayClass13_0::<GetForContextMethodCall>b__0(System.String)
extern void U3CU3Ec__DisplayClass13_0_U3CGetForContextMethodCallU3Eb__0_mE33DD60E72665FED995654045AC3B3ECFA01A84E (void);
// 0x0000012D System.Void Websocket.Client.Logging.LogProviders.TraceEventTypeValues::.cctor()
extern void TraceEventTypeValues__cctor_mD4B73619C30C68D39C66D916CD6B58625BAA507E (void);
// 0x0000012E System.Reflection.ConstructorInfo Websocket.Client.Logging.LogProviders.TypeExtensions::GetConstructorPortable(System.Type,System.Type[])
extern void TypeExtensions_GetConstructorPortable_m097FA6AB2DF737129AADAF6A7D78F9899DE5C1FC (void);
// 0x0000012F System.Reflection.MethodInfo Websocket.Client.Logging.LogProviders.TypeExtensions::GetMethod(System.Type,System.String,System.Type[])
extern void TypeExtensions_GetMethod_m0D6A8E3FC4CC27EDBD789A3981C6B86872D5A6E9 (void);
// 0x00000130 System.Void Websocket.Client.Validations.Validations::ValidateInput(System.String,System.String)
extern void Validations_ValidateInput_m99A3BD7C33334D944E779BC5FE95975D3EE9DC3D (void);
// 0x00000131 System.Void Websocket.Client.Validations.Validations::ValidateInput(T,System.String)
// 0x00000132 System.Void Websocket.Client.Threading.WebsocketAsyncLock::.ctor()
extern void WebsocketAsyncLock__ctor_mBC565BA4732DF9BAD41FF8181427D2F6BF14C026 (void);
// 0x00000133 System.Threading.Tasks.Task`1<System.IDisposable> Websocket.Client.Threading.WebsocketAsyncLock::LockAsync()
extern void WebsocketAsyncLock_LockAsync_m2845213676CACE305FB0DC6B544062E6D6319D5A (void);
// 0x00000134 System.Void Websocket.Client.Threading.WebsocketAsyncLock/Releaser::.ctor(System.Threading.SemaphoreSlim)
extern void Releaser__ctor_m797A117B4890972BA97BBD2492BEB1BD75E5437F (void);
// 0x00000135 System.Void Websocket.Client.Threading.WebsocketAsyncLock/Releaser::Dispose()
extern void Releaser_Dispose_m08A294686BD15A31C473FCC051E949806C24D95C (void);
// 0x00000136 System.Void Websocket.Client.Threading.WebsocketAsyncLock/<>c::.cctor()
extern void U3CU3Ec__cctor_m170B5F566C8035EFA1FCE8E2C1D3B76423C45170 (void);
// 0x00000137 System.Void Websocket.Client.Threading.WebsocketAsyncLock/<>c::.ctor()
extern void U3CU3Ec__ctor_mD3B00C3B8EBDE59E41ED25B20F508F5E6CE15096 (void);
// 0x00000138 System.IDisposable Websocket.Client.Threading.WebsocketAsyncLock/<>c::<LockAsync>b__5_0(System.Threading.Tasks.Task,System.Object)
extern void U3CU3Ec_U3CLockAsyncU3Eb__5_0_mFDEA7F1743876D9459DEEAE7AA9DF96C89F9E932 (void);
// 0x00000139 System.Void Websocket.Client.Models.ReconnectionInfo::.ctor(Websocket.Client.ReconnectionType)
extern void ReconnectionInfo__ctor_mB23EA6D1CBCCDABB60FA3B7523D4FCF21D4E5E3F (void);
// 0x0000013A Websocket.Client.Models.ReconnectionInfo Websocket.Client.Models.ReconnectionInfo::Create(Websocket.Client.ReconnectionType)
extern void ReconnectionInfo_Create_mF02570B61F881D610611E60E27C51AA887FC4BFF (void);
// 0x0000013B System.Void Websocket.Client.Exceptions.WebsocketBadInputException::.ctor(System.String)
extern void WebsocketBadInputException__ctor_m0C3D6EA3F0105AA7937C5E140092AC98240FA936 (void);
// 0x0000013C System.Void Websocket.Client.Exceptions.WebsocketException::.ctor(System.String)
extern void WebsocketException__ctor_mEE893B0625E61A83AA93471AD38A693B1FF9C2BE (void);
// 0x0000013D System.Void Websocket.Client.Exceptions.WebsocketException::.ctor(System.String,System.Exception)
extern void WebsocketException__ctor_mA5B520A54A17400BD1508011989E5CC3237F8A7F (void);
static Il2CppMethodPointer s_methodPointers[317] = 
{
	DisconnectionInfo__ctor_mB493E23643DA0B6623DC74005C943BA03D022061,
	DisconnectionInfo_get_Exception_m846A7CB4528DAA213D9085BB1018578A7ED80664,
	DisconnectionInfo_get_CancelReconnection_mFD188EB4E65E6CBF98BFF415872E413A6CAB72BC,
	DisconnectionInfo_get_CancelClosing_m33E4A1A3E3C0C5481367AD2F8FF1EF41BF875554,
	DisconnectionInfo_Create_mD979C5C4C224AA4B2A6E2FBFD3AEF27F2556CFF2,
	ResponseMessage__ctor_mD5A15F7056A4BE3E22570C47D6F5C2F7E78AE1CA,
	ResponseMessage_get_Text_m51F3F4069B69D3482A6C2C83F5175CFF2B4EE781,
	ResponseMessage_get_Binary_m1404849586CCAB5A37A684FC04D526441B778D8F,
	ResponseMessage_get_MessageType_m9323E327E5343EBD7C65509A11E222896510F74E,
	ResponseMessage_ToString_mB1E30FDBC76A8CB08155B2A413EE7FFBD432D94B,
	ResponseMessage_TextMessage_m7949796B4C4B2F390319ECCF1C70A4897F23C8DF,
	ResponseMessage_BinaryMessage_m61A9FF561E5AB114A84BA3C9CA77F288536CDDBE,
	WebsocketClient__ctor_mB9E5352B3049DEDF9D248F1D39CB11F3FBFF26A8,
	WebsocketClient__ctor_mA062792FC3BC65F9F0CB2D4A9D30F3FBE3D49855,
	WebsocketClient_get_MessageReceived_m16EA9CA66DCAB2075EE49BFDA8BD57FEA8C2BD43,
	WebsocketClient_get_DisconnectionHappened_m3B73867C50CE5D02F7B257F14DA784A8888952D9,
	WebsocketClient_get_ReconnectTimeout_m8C98B1C90D7E54B5E3102EAB54587BC6B44DBDCE,
	WebsocketClient_set_ReconnectTimeout_m4C639C864C4B1304B28B3FADA5B73C9BD1B306B4,
	WebsocketClient_get_ErrorReconnectTimeout_mA96398A61B595B11D4891F1AF00C3D05D0F66CE9,
	WebsocketClient_get_IsReconnectionEnabled_m820F94468AAB461B38D6F0CAA8B3D3374488A65B,
	WebsocketClient_get_Name_mD2CFEABFCD4E6249BB6D1B44C01846211CC86C77,
	WebsocketClient_get_IsStarted_mBA899C61212E974A8775F5192D20D4EED5BF00BF,
	WebsocketClient_set_IsStarted_m1CBC1DCBA30D8DCABE8110CBD36CEA2832806657,
	WebsocketClient_get_IsRunning_m60FE24C93375C9AA4F3C3A9544ED7CDEC0BB4139,
	WebsocketClient_set_IsRunning_m9ED1492FB34FC7150704094A4B5092C813BBA6C4,
	WebsocketClient_get_IsTextMessageConversionEnabled_mC5860972C1177205DCB56BB52129A53B8CFF0F25,
	WebsocketClient_get_MessageEncoding_m45E115B1EBF4E3A47361C7474CEFF158B87AD637,
	WebsocketClient_set_MessageEncoding_m02130BA771A898603A1776EEC47AE6FAB19F26AB,
	WebsocketClient_Dispose_mB94B51B709728AB1DE3EAEF38B65F8629779C529,
	WebsocketClient_Start_m38748137001926A559052C9BA7ADB1D066FB2DF5,
	WebsocketClient_Stop_m2C94F134B6F9246C22D6F2B438A829FAFE5176C9,
	WebsocketClient_GetClientFactory_mBBC2B402EC58D992CA21C6FA83ED726F86A667B9,
	WebsocketClient_StartInternal_m2EEF8455653E0393BA2AF6E963C644DA3B36E2BC,
	WebsocketClient_StopInternal_m11C53248F6E07F1DD0FC8F3BE67290EC8331714B,
	WebsocketClient_StartClient_m4AB22128883C939574B76C2FD8464D9A2CAA241C,
	WebsocketClient_IsClientConnected_m06821CC3E093BFFD0EC7BA07E076147EA675D431,
	WebsocketClient_Listen_m0929546D53D05946A990E48DB7CDF1F978BDF954,
	WebsocketClient_ShouldIgnoreReconnection_mF1C27EEAB6739248B00D9F524589DF667D1F30E1,
	WebsocketClient_GetEncoding_mCC58674FBEF2231B016227C9DBAF2921DFF37BDA,
	WebsocketClient_L_m2FA98E6AF7BF6D8063FD870CE309D5C1E7A600C7,
	WebsocketClient_GetLogger_m8F836197E6E2E18E72EE3EF1FCF5C97D29F0D76B,
	WebsocketClient_TranslateTypeToDisconnection_m34260BC0BB8D95672DDD1B57B99F73D2D9BCA6E7,
	WebsocketClient_ReconnectSynchronized_m66C24EA4CEE9A749C0D38827DCC21F43118D739D,
	WebsocketClient_Reconnect_m88B4D48459E91A618867619C2E0C799CB7B4978A,
	WebsocketClient_ActivateLastChance_m77FA4CB3D228763DD3D9B761BBEE30EF7D19515B,
	WebsocketClient_DeactivateLastChance_m752286707E433333A2174A31328A8E53F5D51A12,
	WebsocketClient_LastChance_m2D56E7E08425075ACAD86765A61CA3D8E4DF92A1,
	WebsocketClient_Send_mEC22B056CDE68AC3E135353FB37863EF2D9A93BA,
	WebsocketClient_SendTextFromQueue_mC2829FA38EB6BD5DDBA16D9C3973ADCEDB298D8C,
	WebsocketClient_SendBinaryFromQueue_mC79EA95EA8AF70542605E2788D11D81FDC8D5B77,
	WebsocketClient_StartBackgroundThreadForSendingText_mA6C4ADAD93CD64E41B9B2B675627954AD02FC929,
	WebsocketClient_StartBackgroundThreadForSendingBinary_m7C4AF98B2D92DCF72AA0E631457C4EC67C5EBF34,
	WebsocketClient_SendInternalSynchronized_m5F78A8DC72E253067EA28D03C08F8B2B5CF2FA5B,
	WebsocketClient_SendInternal_m5DAF0706DCBB474D5D10615265C0960440B85A03,
	WebsocketClient_SendInternalSynchronized_m487FFCB253FE139E7A47E938FD6CDA10BACF61F5,
	WebsocketClient_SendInternal_m8E4EEA73D2259B5145FB8C01A79FCBBED534603D,
	WebsocketClient__cctor_mFE6E849D4288EFF63C63B14B6732956F9D4E70BE,
	WebsocketClient_U3CStartBackgroundThreadForSendingTextU3Eb__95_0_m4DDFB4738301D3AB470C719EC938E5236B3D4CE6,
	WebsocketClient_U3CStartBackgroundThreadForSendingBinaryU3Eb__96_0_m20478B361FB45EF6F203AB33841F212A84EBE187,
	U3CU3Ec__cctor_m33DB2B76C6C2FFAAF936105F3C1CB0E968B1564B,
	U3CU3Ec__ctor_mA97C6611CB6BE62A5CB64A88E44240B54593FC05,
	U3CU3Ec_U3C_ctorU3Eb__17_0_m07D0D5E46B8819707D2DB98C8F8E510C415E7D51,
	U3CU3CU2DctorU3Eb__17_0U3Ed_MoveNext_mBE45F72B5E5089DE22018FC3B2BFD564DD2A7786,
	U3CU3CU2DctorU3Eb__17_0U3Ed_SetStateMachine_mE7F759508A14BAE74C0E770FDF4319F39F4EC280,
	U3CU3Ec__DisplayClass65_0__ctor_m29E2BB4107478DC1E9CE0000622A1E2A8A53DC01,
	U3CU3Ec__DisplayClass65_0_U3CGetClientFactoryU3Eb__0_m3660CE83080B242B6BCB74AD24F3D4BB9ED1BB01,
	U3CU3CGetClientFactoryU3Eb__0U3Ed_MoveNext_m465FC5AA0B42FE084F6728AF6C59ECE3E4F05872,
	U3CU3CGetClientFactoryU3Eb__0U3Ed_SetStateMachine_m2A6B90900F639DCC373B55B189AA300D3114EC0B,
	U3CListenU3Ed__70_MoveNext_m8E393B773A4CA82DD43785427543A4F65CAAFF5A,
	U3CListenU3Ed__70_SetStateMachine_mB6742E1775045A4C002477CE6E41C6015E0118D3,
	U3CReconnectU3Ed__81_MoveNext_m8D94D1DD6447DF4BED4F82E2A8D3C5FCAF1A7F28,
	U3CReconnectU3Ed__81_SetStateMachine_m27503E6A5277C01CC955B94EA0500FB08F039B08,
	U3CReconnectSynchronizedU3Ed__80_MoveNext_mC968F5873C97BCD432F9C2E4CB7EC7A09370377F,
	U3CReconnectSynchronizedU3Ed__80_SetStateMachine_mF9354B6602497BB1F6C1623FA3E29A4CCF389390,
	U3CSendBinaryFromQueueU3Ed__94_MoveNext_m17B95D8B2626BE6C81D1AD4DA978C95C956A0343,
	U3CSendBinaryFromQueueU3Ed__94_SetStateMachine_mD561A63A8ED2310D9445EB025A25332D751ED492,
	U3CSendInternalU3Ed__100_MoveNext_mF0E5A1CCEABA15708F25A4649E61D995D99CF763,
	U3CSendInternalU3Ed__100_SetStateMachine_m914E35B119D82E78E5A8D72B5297BCA569920BF1,
	U3CSendInternalU3Ed__98_MoveNext_mE6E21994848C8DF33CA9FDC6B0735BCB1B77D510,
	U3CSendInternalU3Ed__98_SetStateMachine_mE80D35DA97A529642BEA617C52E4F04B6C2928EA,
	U3CSendInternalSynchronizedU3Ed__97_MoveNext_m04E69B42F151B325364C186DFC51C589714BF6F0,
	U3CSendInternalSynchronizedU3Ed__97_SetStateMachine_m4242466071C03A156B5E0B1C6670EFCBE82D9C9B,
	U3CSendInternalSynchronizedU3Ed__99_MoveNext_mE2D1A84845FE4B68827201F980F8DC9EA5B73D06,
	U3CSendInternalSynchronizedU3Ed__99_SetStateMachine_m6441A6B91F9D6C23C9EAB0F1305F1B7BA2EFD114,
	U3CSendTextFromQueueU3Ed__93_MoveNext_mE7B0DDC455524536DE4D4EA6EED4B90FDBDD25C9,
	U3CSendTextFromQueueU3Ed__93_SetStateMachine_m013BEA605FAE72F6437C6F3A0DECDED6547B37BF,
	U3CStartClientU3Ed__68_MoveNext_m208BA890C5A3B21FF6A93F70B8530B62BF74A2E9,
	U3CStartClientU3Ed__68_SetStateMachine_m13B838DE27DAABDF13D39197DEE404D7B3BCC705,
	U3CStartInternalU3Ed__66_MoveNext_mBB65D40C3752ED30B6968C6B7ED6190A1CEC9517,
	U3CStartInternalU3Ed__66_SetStateMachine_m2EC84F2AF51710A1F13782C23850AAF5CDC6FF0E,
	U3CStopU3Ed__63_MoveNext_m9AB00B0971EC4A8D4454BD7FF5ADA133C21740E4,
	U3CStopU3Ed__63_SetStateMachine_mE3CFA16BEC8F720A8997BA15A8DC4B45FDC33B9E,
	U3CStopInternalU3Ed__67_MoveNext_m815586EEF9FE8090BC13FA4F191F7D50BF3EB5B2,
	U3CStopInternalU3Ed__67_SetStateMachine_m34024C47BE48B30FB31C5A0B3CF4A08703D7E33E,
	NULL,
	NULL,
	LogExtensions_IsDebugEnabled_mCAC658966588FEEE5153851E3E5CEB6EAD2BA53C,
	LogExtensions_IsErrorEnabled_m4A305E565BC023151DBC70BBBAED80FC10AAB3D9,
	LogExtensions_IsInfoEnabled_mE8761ED9F072BE8E1564B4C9D88E5BC3DD3FF658,
	LogExtensions_IsTraceEnabled_mFC010BF18EFF9F640D474BF0464C184DE7CBD443,
	LogExtensions_Debug_m656714A00C3DC3422AB51444CB372DC9CCEA5AE0,
	LogExtensions_Error_m2298BB09E98DCE19BA715342E518CD6B59BFB171,
	LogExtensions_ErrorException_m3C05A62F25C55DEDCFE727B1D2EF0595365D669F,
	LogExtensions_Info_m1484B5077C0E14B1F753ABF8EF1727EA9CC7518C,
	LogExtensions_Trace_m7B3671886866E57DF504410C0893750D273B33F0,
	LogExtensions_GuardAgainstNullLogger_m7E651A6757E496C68AA2DC293063D9A197EC00F2,
	NULL,
	NULL,
	LogExtensions_WrapLogSafeInternal_mE719B778E86091656A00612EB3B5A1791FE4527F,
	LogExtensions__cctor_m8D59C018C54273C593907105EB88D86E65B1204B,
	U3CU3Ec__cctor_mD8815347AA01A4EE4F4AFB31E355B8BF92C3D759,
	U3CU3Ec__ctor_m1882E7DA3AA34EE06F6E7CB91B5714F6ACC8C929,
	U3CU3Ec_U3CWrapLogSafeInternalU3Eb__48_1_mF1A0C8677AFAA8709202204851A1217867971D52,
	U3CU3Ec__DisplayClass48_0__ctor_mD3700E6BF5A4721121CF848393C415F20A81E039,
	U3CU3Ec__DisplayClass48_0_U3CWrapLogSafeInternalU3Eb__0_mBF3C75555488F1EDEF4450BDCF5F0030E158E1C1,
	LogProvider__cctor_mDCA1038CE6E93EBE5FCAA9383B67023184317D90,
	LogProvider_get_IsDisabled_mBAC69566AC26D7906C65BD554778F849A12979F9,
	LogProvider_set_IsDisabled_m9C0F14DB8EE1BC73EB0983131579013282886DBE,
	LogProvider_get_CurrentLogProvider_m7D06BBF2DFBC13B571E3A45C55CFB9D731FC4916,
	LogProvider_GetCurrentClassLogger_m1F55E16ECAC60254069E96E7BADEE9F667745E21,
	LogProvider_GetLogger_m8258D52AC0A7C497BFEFB54DB4BD5E566C6C2539,
	LogProvider_GetLogger_mDE39D10E7B93852C955B54F9D993FBD4FF0B5C2E,
	LogProvider_ResolveLogProvider_m14F86D1BB2B76BA61E0A6F2CCA653EE3B3A84066,
	LogProvider_ForceResolveLogProvider_mDB8CF8459C68996504CDACB670B540521E918F7F,
	IsLoggerAvailable__ctor_m11E6C06A9359F06DDCEF3DAA12455A20C21F1740,
	IsLoggerAvailable_Invoke_mE376410EBA9D5B2D7E8AE32AD2E7E5F707E675DA,
	CreateLogProvider__ctor_m9221CE593EBF37E127B09672A0912067B782038C,
	CreateLogProvider_Invoke_m8387357C7BC8F5F7EA7A95C11B75B86BACE38004,
	NoOpLogger_Log_mF4432CD5CFB3D096AEE4CD8B8838BFB5413EA4C0,
	NoOpLogger__ctor_m0FB12529814EA03BEFFF01C05BC7B10FE8EE7AAB,
	NoOpLogger__cctor_mCDCE9CC1D86FE5D0CE76D0F60EB4228061DE31EB,
	U3CU3Ec__cctor_m69449AD0FE24D658DD618359266A10D297993205,
	U3CU3Ec__ctor_m6BDCCB8354C90D78428CEA0D6AE6D08F0A331603,
	U3CU3Ec_U3C_cctorU3Eb__3_0_mC5E22D88D1F5C02D26CF13A86BB4FEB9517B4A63,
	U3CU3Ec_U3C_cctorU3Eb__3_1_m4F4B894EC67FF23A78E572AFE4E6451108597963,
	U3CU3Ec_U3C_cctorU3Eb__3_2_m58B23ECB016E5610862FDCA08B2AECC33B0EA831,
	U3CU3Ec_U3C_cctorU3Eb__3_3_m6AF588AF1A2D0874B5288B7438E90CFA6DB00B21,
	U3CU3Ec_U3CGetLoggerU3Eb__16_0_m011143298A690C923E9AC484D29C747FED104963,
	Logger__ctor_m60EA8570DB3CAF4438C63E213A68D69D24EF007A,
	Logger_Invoke_mD7AB5B341875CDA8B781C5AB4EE10D6AADF33FAC,
	LoggerExecutionWrapper__ctor_m910D86080936823E515F1AFD421195297B8E0C73,
	LoggerExecutionWrapper_get_WrappedLogger_m77C71670707929ACA9D835B7BA72D374E53F32C6,
	LoggerExecutionWrapper_Log_mEBEF90A6FEC45743D5224C0798EC3FF449CC4C79,
	NULL,
	CallSiteExtension_Websocket_Client_Logging_LoggerExecutionWrapper_ICallSiteExtension_Log_m54143D0B787E7E2F5521CBC50A869882DB2342D2,
	CallSiteExtension__ctor_m8A50048FAC66C767D917CD47E290C27BA980350F,
	U3CU3Ec__cctor_m6E57DF997FF43B0A31A818FBE01F958496FFD269,
	U3CU3Ec__ctor_m51168F5CF016138EA19FB8B92B732984A87CC91F,
	U3CU3Ec_U3C_ctorU3Eb__4_0_m44FDA83332336D0F20DD2BDFB0689A9A2C8FD7E6,
	U3CU3Ec_U3CLogU3Eb__8_1_mF579F106367BD95EA92358FCDB74A72EF814FFAA,
	U3CU3Ec__DisplayClass8_0__ctor_m41321B76B3AC4906401085E2E498C6F3A232ADBC,
	U3CU3Ec__DisplayClass8_0_U3CLogU3Eb__0_m193DADA5B152A6A4FBD4EAD3F75E1A57F587D129,
	DisposableAction__ctor_mEAC707008FCA2FA39B069222C7790338D4F79488,
	DisposableAction_Dispose_mAC63CE10C852289069E5DC46C6A42C61C1C940DD,
	LibLogException__ctor_m8C721441399593D2A70B770788190E5FC4D742FB,
	LibLogException__ctor_m171B1F93DFC1222D41851F372EC6574C9D6A70E9,
	Log4NetLogProvider__ctor_m5920F04A32A6F06673F683575F7BC571C747CEC1,
	Log4NetLogProvider_get_ProviderIsAvailableOverride_m91A420B952EDEBBA26CCF73EFC2689E996372EDC,
	Log4NetLogProvider_GetLogger_m62AFAB78BC71FAC04D541E7A7238D9BC45A77EC2,
	Log4NetLogProvider_IsLoggerAvailable_m55FE21DCE7C17831E244494E7F3D41587D007025,
	Log4NetLogProvider_GetOpenNdcMethod_mEF1372731A7C1BD857E361219052CA95F5EF8B71,
	Log4NetLogProvider_GetOpenMdcMethod_m5DE31BF3196AEB308C91AEEC04DF23E91C45DCC5,
	Log4NetLogProvider_GetLogManagerType_m53331C0CB25D57A972247A109D7A0A6E6E4F6AD7,
	Log4NetLogProvider_GetGetLoggerMethodCall_mE70A8FCAA425E6FD5B31094A6F4EC2D252D9C6D4,
	Log4NetLogProvider__cctor_mBCEE156EB872C5B5FAE8D2F9F087B0A37B377E52,
	Log4NetLogger__ctor_m5A599977A59078581580A8E5CF40EAB369C2228F,
	Log4NetLogger_Initialize_m0DA95F2AD581EDB8458D4C4D578BC2CC87574CB9,
	Log4NetLogger_GetLogDelegate_m7A1910C072B463D74C3CE3400D0B29D8E53B46C1,
	Log4NetLogger_GetCreateLoggingEvent_m195362B332241BED08E6FD87FBF8F5CC883BA97E,
	Log4NetLogger_GetIsEnabledFor_mDE698763D5CAE40A39581814598E3C609EFB316E,
	Log4NetLogger_GetLoggingEventPropertySetter_mCC6D319908CA4223D2EC13452E4B8B2388E5C894,
	Log4NetLogger_Log_m13D14C4A4431BDD787195A9DF08ADF4207A0C761,
	Log4NetLogger_PopulateProperties_m4D84A8131183E0701555A294045ADC95D1FD786A,
	Log4NetLogger_IsLogLevelEnable_m78416315AB604D1E3713670E612626D1C75D72A4,
	Log4NetLogger_TranslateLevel_m7E311B637A57747A2FE2D8456616DABC118A62C5,
	Log4NetLogger__cctor_m0FFF6380742C797E8C1B0D337C3A14C5EBE776BE,
	U3CU3Ec__cctor_m35818EBCCC98BC1A422A69E3AABE48451C5EA0F5,
	U3CU3Ec__ctor_m40B5332D38D7BA318619D6B601C7119858F78E4D,
	U3CU3Ec_U3CInitializeU3Eb__14_0_mE39E698955D3D211450A91F4B6DDDBC34570162E,
	U3CU3Ec_U3CInitializeU3Eb__14_1_m50C14E80467A69AF8D31E7DDFE897E22D7AA12D0,
	U3CU3Ec_U3CInitializeU3Eb__14_2_m84314E02D8E087F1980B094041C0032A1E4F5F59,
	U3CU3Ec_U3CInitializeU3Eb__14_3_m5BECFA7F7DC3FE866F2369C9DBF94518ADE6A0FF,
	U3CU3Ec_U3CInitializeU3Eb__14_4_m8FD1272B693A465C87B21D176303D07F67132FAC,
	U3CU3Ec_U3CInitializeU3Eb__14_5_m455D8C87D9B464A180EE1BFA9BABB2A9D55E0FE0,
	U3CU3Ec_U3CPopulatePropertiesU3Eb__20_0_mA3CC35E73FD1CE4A08C3CC80C37F71A1DB836816,
	U3CU3Ec__DisplayClass11_0__ctor_m412F57EA8D28694D58A6F319C7554FA8EB705D78,
	U3CU3Ec__DisplayClass11_0_U3CGetGetLoggerMethodCallU3Eb__0_m4F3C655F27560C8E8EE302C8EAF76A9802515145,
	U3CU3Ec__DisplayClass9_0__ctor_m7EF809EEDF50F4769F2FF478B60FABD16027C0E2,
	U3CU3Ec__DisplayClass9_0_U3CGetOpenMdcMethodU3Eb__0_m587329CC3E2B6F64EDAD724E3E0E506B2298787C,
	U3CU3Ec__DisplayClass9_1__ctor_m2261F88E40C7D38165F11D844EDF8C3105BDB412,
	U3CU3Ec__DisplayClass9_1_U3CGetOpenMdcMethodU3Eb__1_m0506E98A2358353CF3B19802C71D413481A2D653,
	LogMessageFormatter_SimulateStructuredLogging_m47743ADDA3AAB510824F28A4536CCB884ABC5390,
	LogMessageFormatter_ReplaceFirst_mEF1514BB6C2DA40153BD5320509258D2D8A9C55C,
	LogMessageFormatter_FormatStructuredMessage_m6620C979307FDEAD0FDFBA63567BCB59D6DB77BC,
	LogMessageFormatter__cctor_m465AA695DCF0558AFC2D8ECF7BF976F6053B0739,
	U3CU3Ec__DisplayClass1_0__ctor_mFDD8F6BD2238B61FD14ED9AFC8A9F5D8B5D459B2,
	U3CU3Ec__DisplayClass1_0_U3CSimulateStructuredLoggingU3Eb__0_m803FE27631666019767052E7BECE7FE367DC18AD,
	LogProviderBase__ctor_m3648276D4C4F6241F9B553B8BFC54ABFAA0840F3,
	NULL,
	LogProviderBase_GetOpenNdcMethod_m960B33CAE13791297DE107A80C2DD69738C574B4,
	LogProviderBase_GetOpenMdcMethod_mC503F6E4FCEB45919E49E1EAE7E3B6AACF7B23D9,
	LogProviderBase_FindType_mC77517BDF338743CD7540F157076F044CF4F4C9A,
	LogProviderBase_FindType_mF184A881434E6468FD9CA2A906512E17839CE2FE,
	LogProviderBase__cctor_mE9AD588D51BFB92FEF4D280DFCD00CBE333EF525,
	OpenNdc__ctor_m23F38FEF91F2FEB0BCE4A94A45479255BDDB6AD5,
	OpenNdc_Invoke_mBF0B0AE63D1ACC7494132A5F9639B067A95118FE,
	OpenMdc__ctor_m8B98BC8B077ACA6E77019A4895802B2D1F3ADD15,
	OpenMdc_Invoke_mC4023EB1EF6E7DF4E62007000C8E4A409390E167,
	U3CU3Ec__cctor_mFF2CAFB865B6A85C22951E4FF261871E15478EAE,
	U3CU3Ec__ctor_m45FA43BA8232067545C38FDE7517D0FA4DA27DC1,
	U3CU3Ec_U3CGetOpenNdcMethodU3Eb__8_0_mFE681F56D4D9803FD6D1F24983512A5EBF219550,
	U3CU3Ec_U3CGetOpenMdcMethodU3Eb__9_0_m7CBBF1E07983EBFF91B1D9352243843F4782C6DA,
	U3CU3Ec_U3CFindTypeU3Eb__13_1_m4CEDADC3A1D6E36198FF5211CAF9EC2EE9C9BF08,
	U3CU3Ec__DisplayClass13_0__ctor_m977B57A448391A63682467A07F1AD96F7245BAB7,
	U3CU3Ec__DisplayClass13_0_U3CFindTypeU3Eb__0_m601D70FAA65911A812118774CE77E8853ADB4ABA,
	LoupeLogProvider__ctor_mF636A64551A025C3434C3453DC7D3DE14A1F134F,
	LoupeLogProvider_get_ProviderIsAvailableOverride_m91F8F367240A2647EA2DDB7C8991881810407355,
	LoupeLogProvider_GetLogger_m3178858BF24940298FD7B8352A8ACFDD925697C8,
	LoupeLogProvider_IsLoggerAvailable_mD96468C0D4B076D539D104A47F75754FC7D7E17A,
	LoupeLogProvider_GetTypeFromCoreOrFrameworkDll_m7C3A08779E0B1668443067CC1EE5091887EA9696,
	LoupeLogProvider_GetLogManagerType_mD6B82FC7ED3E87A8A34726BCC5457B2E17F6CF30,
	LoupeLogProvider_GetLogWriteDelegate_mBE2EF3B78499A7E41C91581E50C4BB09AB2F2ECE,
	LoupeLogProvider__cctor_mAE39F96AC31AE5B97E13B79CB1EC44C3DE62FE51,
	WriteDelegate__ctor_m45B48D81B8B1DF74D05B6E024389B3B31DFCB7BD,
	WriteDelegate_Invoke_mD778CD9BE383B75AA32DD8E6A6609E2AF262C351,
	LoupeLogger__ctor_m8F54B299741784514AD7FA4C8679FF663B5DCD65,
	LoupeLogger_Log_m41C9F98EF56AE673AAE7B5F06AACA05A95139A7F,
	LoupeLogger_ToLogMessageSeverity_mB2CA228DA2F22C03E4E14095E989E5A2C8893C5F,
	NLogLogProvider__ctor_m200D192F4239262971B1498232DEDD960EC12941,
	NLogLogProvider__cctor_m3AED7B9F2394B9F0337AEDA0E30132433040EB89,
	NLogLogProvider_get_ProviderIsAvailableOverride_m3545A4BE6C98B4F741CB3ED8CECC459C71900C94,
	NLogLogProvider_set_ProviderIsAvailableOverride_m304A40B56D1943540B5154E51B5AFF235B7D90DB,
	NLogLogProvider_GetLogger_m628D8DD44D4B4FDADF2CB3C81748CBD7B501EBFA,
	NLogLogProvider_IsLoggerAvailable_m269FCEDD95B9E4CE01B535A9AFE4D66F88B47AE4,
	NLogLogProvider_GetOpenNdcMethod_m6B024CD182461926E2C4D436EE7D5355396CBE12,
	NLogLogProvider_GetOpenMdcMethod_m3C56DA3A763C8D48FE75231404AD3E047FE779D4,
	NLogLogProvider_GetLogManagerType_m661A4F69F9D00F01DB3F39DD49FC9E8D6E48EC57,
	NLogLogProvider_GetGetLoggerMethodCall_m557943EE382120E314C10B6F878D20F328607F2F,
	NLogLogger__ctor_m9EDA1ADD96FD5EA536A386308707CE1977D484A9,
	NLogLogger_Initialize_m04E0FA541452199CD1A124751C47F4A1205E7EBF,
	NLogLogger_GetIsEnabledDelegate_mAF276EB748B4D43ACDF7BF208CD4A0D284ECCB43,
	NLogLogger_GetLoggerNameDelegate_m269A29AF63F371A449A30E766B6DA20A8A172417,
	NLogLogger_GetLogDelegate_m84D11AD48E2DC9788D1468D5E259BCA4175781AE,
	NLogLogger_GetLogEventDelegate_m2C2629501FE422C3FB632B6435AFC245B4BBCA49,
	NLogLogger_GetLogExceptionDelegate_m66BD0428DF781BD636422B0397887D602A5D67E2,
	NLogLogger_Log_m931A26FB64575588C8A0620816CDF05FE97CE0C9,
	NLogLogger_LogException_mB03C1EE870873ED3738756C4A99E1191C385DB6E,
	NLogLogger_IsLogLevelEnable_mF453C0E45C459417A6EFEE470AAAB13CAB0F6AC5,
	NLogLogger_TranslateLevel_mDB4A67BAF3D8C999D73AD4433D005BB133B46603,
	NLogLogger_IsStructuredLoggingEnabled_m77EFBE8C6046DACB326A66B31EAF62E239CAA12B,
	NLogLogger__cctor_m088C5B4D406B2EFE3F9F24C04EB3FC204B71DF42,
	LoggerNameDelegate__ctor_m5B143CB56093EA8B0FF0B5B3DFF764B65FEDD37F,
	LoggerNameDelegate_Invoke_m8BDC77D5487C9930754C47F904C329DC7881518A,
	LogEventDelegate__ctor_m436ED118C8F2A660B402E8E1EE4F349AD7CCACB6,
	LogEventDelegate_Invoke_m3527F7083C8349A28355DE64570098150A2E94CE,
	IsEnabledDelegate__ctor_mE36C12A47E4D1E00F7AA71B621FAED9991608B00,
	IsEnabledDelegate_Invoke_m030306C1CF885C10966770E35E3563D7472F4FAC,
	LogDelegate__ctor_m181A09A5CF923142AFC56C8413D44AE99F5A3D4A,
	LogDelegate_Invoke_m3446FCE9D42C983D2E9DA0FD04E87B43BDA3C35F,
	LogExceptionDelegate__ctor_m044542B20728589D3E757BBDDF64036AAF978CFC,
	LogExceptionDelegate_Invoke_m942806817CACA9805660EAE50CF0EE5C19C1C37F,
	U3CU3Ec__cctor_mE95474F1AB61FBC55A9EDC1AEDCBB9ACB98BA47D,
	U3CU3Ec__ctor_m5199A5BD9460DB53066F829E18E2397416F12221,
	U3CU3Ec_U3CInitializeU3Eb__37_0_m502229B4B8930BB4DEEFE6F8194FE5385ED63307,
	U3CU3Ec_U3CInitializeU3Eb__37_1_mF3179EA293B339DC06C3024CE66FD9830F0982C6,
	U3CU3Ec_U3CInitializeU3Eb__37_2_m14C3C122F509DF376211BEF684680315B6B831DA,
	U3CU3Ec_U3CInitializeU3Eb__37_3_m4CF94E16608B62FF111BF003E41D1555645BEC67,
	U3CU3Ec_U3CInitializeU3Eb__37_4_m29776BEEE60D5A9E7190A29B327ECE3B8C8F2965,
	U3CU3Ec_U3CInitializeU3Eb__37_5_mB07037B5C0F536D45E6A711708B4FB4307052FD4,
	U3CU3Ec__DisplayClass10_0__ctor_m0C356A9F35FECAFB43502A368B55F4978BE1E661,
	U3CU3Ec__DisplayClass10_0_U3CGetOpenMdcMethodU3Eb__0_mF857542EE4D84F9A47B47502EEC91CE0B0718586,
	U3CU3Ec__DisplayClass10_1__ctor_m002210874CF64D5774E322566F4C78B617138502,
	U3CU3Ec__DisplayClass10_1_U3CGetOpenMdcMethodU3Eb__1_mE12238737412A0AD85D8E1AD252900A310B0A376,
	U3CU3Ec__DisplayClass10_2__ctor_m9AAC8D4F00685FD3A268C8095C22CA6FECF09EE8,
	U3CU3Ec__DisplayClass10_2_U3CGetOpenMdcMethodU3Eb__2_mFB8829FC03AD114684A9606330A26EB7958FC4D6,
	SerilogLogProvider__ctor_m183B7B03AECAA3D6303511A87168F8B3671A5969,
	SerilogLogProvider_get_ProviderIsAvailableOverride_m6A63ABF5752694B0D8266A5ABE52DE9938424F62,
	SerilogLogProvider_GetLogger_m5816EF560E9839ECCF43EE15525CB7C6B087E12A,
	SerilogLogProvider_IsLoggerAvailable_m29C965C3913B89AEA4FC95613E77767540CDB4DD,
	SerilogLogProvider_GetOpenNdcMethod_m41340483F1AAE06A78A91C505E34184AAED0280A,
	SerilogLogProvider_GetOpenMdcMethod_m728B8A6A6CA65C7D2CF030A1B935768097488DE3,
	SerilogLogProvider_GetPushProperty_m05CCC43A16FE16723C308926DC7B3A0CFC1BC010,
	SerilogLogProvider_GetLogManagerType_m419D9F54EF0EC26A0AE6CD987493588C139A08B4,
	SerilogLogProvider_GetForContextMethodCall_m534AB14DE61D6DC2CA9BB31EE3EF409E9AE6307F,
	SerilogLogProvider__cctor_m9DD19EEEF06AB56D9E2D23F7817BE17AF806FECB,
	SerilogLogger__ctor_m54D48DAB6A6AAFBF178C800A78BC582B02832B0F,
	SerilogLogger_Initialize_m0EFB75605CFB4607D3337838F7933AF9D91EF64A,
	SerilogLogger_Log_m7F9EA68C5405F8A8388FC0BFFDA4718808100148,
	SerilogLogger_LogMessage_mE6D96C51D6B841948D97BA247914957CEF21E753,
	SerilogLogger_LogException_m67EC404DE5EB7EDF25034E7DBE148DDA673FF21E,
	SerilogLogger_TranslateLevel_mFCF1408CCEBA6EA50756658BCB5D302AD29707D2,
	SerilogLogger__cctor_mC49E5C96B46AD96A335F6D52297934B9314F49F7,
	U3CU3Ec__cctor_mA19D0A795E0CFA59D522BC1BD0E4F66B254069BD,
	U3CU3Ec__ctor_mA7F3C4FE9395D291D29E2B01235D86E3D94FA050,
	U3CU3Ec_U3CGetOpenNdcMethodU3Eb__9_0_m01D531DC53BC555126558F3C6B137F8509DD2ACB,
	U3CU3Ec_U3CGetOpenMdcMethodU3Eb__10_0_mDEDA2C5A5DD293BDBE46957DAD012556B1AF1358,
	U3CU3Ec__DisplayClass11_0__ctor_m5C2FF9AE9C3C6F8F136D422063A505BE51B4D28F,
	U3CU3Ec__DisplayClass11_0_U3CGetPushPropertyU3Eb__0_m3A3F7FD774FA841568A2D3C6B74742222CE98DD6,
	U3CU3Ec__DisplayClass13_0__ctor_m9DF4904A65FDCB4E6C0C5967511BA07BED55FD4E,
	U3CU3Ec__DisplayClass13_0_U3CGetForContextMethodCallU3Eb__0_mE33DD60E72665FED995654045AC3B3ECFA01A84E,
	TraceEventTypeValues__cctor_mD4B73619C30C68D39C66D916CD6B58625BAA507E,
	TypeExtensions_GetConstructorPortable_m097FA6AB2DF737129AADAF6A7D78F9899DE5C1FC,
	TypeExtensions_GetMethod_m0D6A8E3FC4CC27EDBD789A3981C6B86872D5A6E9,
	Validations_ValidateInput_m99A3BD7C33334D944E779BC5FE95975D3EE9DC3D,
	NULL,
	WebsocketAsyncLock__ctor_mBC565BA4732DF9BAD41FF8181427D2F6BF14C026,
	WebsocketAsyncLock_LockAsync_m2845213676CACE305FB0DC6B544062E6D6319D5A,
	Releaser__ctor_m797A117B4890972BA97BBD2492BEB1BD75E5437F,
	Releaser_Dispose_m08A294686BD15A31C473FCC051E949806C24D95C,
	U3CU3Ec__cctor_m170B5F566C8035EFA1FCE8E2C1D3B76423C45170,
	U3CU3Ec__ctor_mD3B00C3B8EBDE59E41ED25B20F508F5E6CE15096,
	U3CU3Ec_U3CLockAsyncU3Eb__5_0_mFDEA7F1743876D9459DEEAE7AA9DF96C89F9E932,
	ReconnectionInfo__ctor_mB23EA6D1CBCCDABB60FA3B7523D4FCF21D4E5E3F,
	ReconnectionInfo_Create_mF02570B61F881D610611E60E27C51AA887FC4BFF,
	WebsocketBadInputException__ctor_m0C3D6EA3F0105AA7937C5E140092AC98240FA936,
	WebsocketException__ctor_mEE893B0625E61A83AA93471AD38A693B1FF9C2BE,
	WebsocketException__ctor_mA5B520A54A17400BD1508011989E5CC3237F8A7F,
};
extern void U3CU3CU2DctorU3Eb__17_0U3Ed_MoveNext_mBE45F72B5E5089DE22018FC3B2BFD564DD2A7786_AdjustorThunk (void);
extern void U3CU3CU2DctorU3Eb__17_0U3Ed_SetStateMachine_mE7F759508A14BAE74C0E770FDF4319F39F4EC280_AdjustorThunk (void);
extern void U3CU3CGetClientFactoryU3Eb__0U3Ed_MoveNext_m465FC5AA0B42FE084F6728AF6C59ECE3E4F05872_AdjustorThunk (void);
extern void U3CU3CGetClientFactoryU3Eb__0U3Ed_SetStateMachine_m2A6B90900F639DCC373B55B189AA300D3114EC0B_AdjustorThunk (void);
extern void U3CListenU3Ed__70_MoveNext_m8E393B773A4CA82DD43785427543A4F65CAAFF5A_AdjustorThunk (void);
extern void U3CListenU3Ed__70_SetStateMachine_mB6742E1775045A4C002477CE6E41C6015E0118D3_AdjustorThunk (void);
extern void U3CReconnectU3Ed__81_MoveNext_m8D94D1DD6447DF4BED4F82E2A8D3C5FCAF1A7F28_AdjustorThunk (void);
extern void U3CReconnectU3Ed__81_SetStateMachine_m27503E6A5277C01CC955B94EA0500FB08F039B08_AdjustorThunk (void);
extern void U3CReconnectSynchronizedU3Ed__80_MoveNext_mC968F5873C97BCD432F9C2E4CB7EC7A09370377F_AdjustorThunk (void);
extern void U3CReconnectSynchronizedU3Ed__80_SetStateMachine_mF9354B6602497BB1F6C1623FA3E29A4CCF389390_AdjustorThunk (void);
extern void U3CSendBinaryFromQueueU3Ed__94_MoveNext_m17B95D8B2626BE6C81D1AD4DA978C95C956A0343_AdjustorThunk (void);
extern void U3CSendBinaryFromQueueU3Ed__94_SetStateMachine_mD561A63A8ED2310D9445EB025A25332D751ED492_AdjustorThunk (void);
extern void U3CSendInternalU3Ed__100_MoveNext_mF0E5A1CCEABA15708F25A4649E61D995D99CF763_AdjustorThunk (void);
extern void U3CSendInternalU3Ed__100_SetStateMachine_m914E35B119D82E78E5A8D72B5297BCA569920BF1_AdjustorThunk (void);
extern void U3CSendInternalU3Ed__98_MoveNext_mE6E21994848C8DF33CA9FDC6B0735BCB1B77D510_AdjustorThunk (void);
extern void U3CSendInternalU3Ed__98_SetStateMachine_mE80D35DA97A529642BEA617C52E4F04B6C2928EA_AdjustorThunk (void);
extern void U3CSendInternalSynchronizedU3Ed__97_MoveNext_m04E69B42F151B325364C186DFC51C589714BF6F0_AdjustorThunk (void);
extern void U3CSendInternalSynchronizedU3Ed__97_SetStateMachine_m4242466071C03A156B5E0B1C6670EFCBE82D9C9B_AdjustorThunk (void);
extern void U3CSendInternalSynchronizedU3Ed__99_MoveNext_mE2D1A84845FE4B68827201F980F8DC9EA5B73D06_AdjustorThunk (void);
extern void U3CSendInternalSynchronizedU3Ed__99_SetStateMachine_m6441A6B91F9D6C23C9EAB0F1305F1B7BA2EFD114_AdjustorThunk (void);
extern void U3CSendTextFromQueueU3Ed__93_MoveNext_mE7B0DDC455524536DE4D4EA6EED4B90FDBDD25C9_AdjustorThunk (void);
extern void U3CSendTextFromQueueU3Ed__93_SetStateMachine_m013BEA605FAE72F6437C6F3A0DECDED6547B37BF_AdjustorThunk (void);
extern void U3CStartClientU3Ed__68_MoveNext_m208BA890C5A3B21FF6A93F70B8530B62BF74A2E9_AdjustorThunk (void);
extern void U3CStartClientU3Ed__68_SetStateMachine_m13B838DE27DAABDF13D39197DEE404D7B3BCC705_AdjustorThunk (void);
extern void U3CStartInternalU3Ed__66_MoveNext_mBB65D40C3752ED30B6968C6B7ED6190A1CEC9517_AdjustorThunk (void);
extern void U3CStartInternalU3Ed__66_SetStateMachine_m2EC84F2AF51710A1F13782C23850AAF5CDC6FF0E_AdjustorThunk (void);
extern void U3CStopU3Ed__63_MoveNext_m9AB00B0971EC4A8D4454BD7FF5ADA133C21740E4_AdjustorThunk (void);
extern void U3CStopU3Ed__63_SetStateMachine_mE3CFA16BEC8F720A8997BA15A8DC4B45FDC33B9E_AdjustorThunk (void);
extern void U3CStopInternalU3Ed__67_MoveNext_m815586EEF9FE8090BC13FA4F191F7D50BF3EB5B2_AdjustorThunk (void);
extern void U3CStopInternalU3Ed__67_SetStateMachine_m34024C47BE48B30FB31C5A0B3CF4A08703D7E33E_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[30] = 
{
	{ 0x0600003F, U3CU3CU2DctorU3Eb__17_0U3Ed_MoveNext_mBE45F72B5E5089DE22018FC3B2BFD564DD2A7786_AdjustorThunk },
	{ 0x06000040, U3CU3CU2DctorU3Eb__17_0U3Ed_SetStateMachine_mE7F759508A14BAE74C0E770FDF4319F39F4EC280_AdjustorThunk },
	{ 0x06000043, U3CU3CGetClientFactoryU3Eb__0U3Ed_MoveNext_m465FC5AA0B42FE084F6728AF6C59ECE3E4F05872_AdjustorThunk },
	{ 0x06000044, U3CU3CGetClientFactoryU3Eb__0U3Ed_SetStateMachine_m2A6B90900F639DCC373B55B189AA300D3114EC0B_AdjustorThunk },
	{ 0x06000045, U3CListenU3Ed__70_MoveNext_m8E393B773A4CA82DD43785427543A4F65CAAFF5A_AdjustorThunk },
	{ 0x06000046, U3CListenU3Ed__70_SetStateMachine_mB6742E1775045A4C002477CE6E41C6015E0118D3_AdjustorThunk },
	{ 0x06000047, U3CReconnectU3Ed__81_MoveNext_m8D94D1DD6447DF4BED4F82E2A8D3C5FCAF1A7F28_AdjustorThunk },
	{ 0x06000048, U3CReconnectU3Ed__81_SetStateMachine_m27503E6A5277C01CC955B94EA0500FB08F039B08_AdjustorThunk },
	{ 0x06000049, U3CReconnectSynchronizedU3Ed__80_MoveNext_mC968F5873C97BCD432F9C2E4CB7EC7A09370377F_AdjustorThunk },
	{ 0x0600004A, U3CReconnectSynchronizedU3Ed__80_SetStateMachine_mF9354B6602497BB1F6C1623FA3E29A4CCF389390_AdjustorThunk },
	{ 0x0600004B, U3CSendBinaryFromQueueU3Ed__94_MoveNext_m17B95D8B2626BE6C81D1AD4DA978C95C956A0343_AdjustorThunk },
	{ 0x0600004C, U3CSendBinaryFromQueueU3Ed__94_SetStateMachine_mD561A63A8ED2310D9445EB025A25332D751ED492_AdjustorThunk },
	{ 0x0600004D, U3CSendInternalU3Ed__100_MoveNext_mF0E5A1CCEABA15708F25A4649E61D995D99CF763_AdjustorThunk },
	{ 0x0600004E, U3CSendInternalU3Ed__100_SetStateMachine_m914E35B119D82E78E5A8D72B5297BCA569920BF1_AdjustorThunk },
	{ 0x0600004F, U3CSendInternalU3Ed__98_MoveNext_mE6E21994848C8DF33CA9FDC6B0735BCB1B77D510_AdjustorThunk },
	{ 0x06000050, U3CSendInternalU3Ed__98_SetStateMachine_mE80D35DA97A529642BEA617C52E4F04B6C2928EA_AdjustorThunk },
	{ 0x06000051, U3CSendInternalSynchronizedU3Ed__97_MoveNext_m04E69B42F151B325364C186DFC51C589714BF6F0_AdjustorThunk },
	{ 0x06000052, U3CSendInternalSynchronizedU3Ed__97_SetStateMachine_m4242466071C03A156B5E0B1C6670EFCBE82D9C9B_AdjustorThunk },
	{ 0x06000053, U3CSendInternalSynchronizedU3Ed__99_MoveNext_mE2D1A84845FE4B68827201F980F8DC9EA5B73D06_AdjustorThunk },
	{ 0x06000054, U3CSendInternalSynchronizedU3Ed__99_SetStateMachine_m6441A6B91F9D6C23C9EAB0F1305F1B7BA2EFD114_AdjustorThunk },
	{ 0x06000055, U3CSendTextFromQueueU3Ed__93_MoveNext_mE7B0DDC455524536DE4D4EA6EED4B90FDBDD25C9_AdjustorThunk },
	{ 0x06000056, U3CSendTextFromQueueU3Ed__93_SetStateMachine_m013BEA605FAE72F6437C6F3A0DECDED6547B37BF_AdjustorThunk },
	{ 0x06000057, U3CStartClientU3Ed__68_MoveNext_m208BA890C5A3B21FF6A93F70B8530B62BF74A2E9_AdjustorThunk },
	{ 0x06000058, U3CStartClientU3Ed__68_SetStateMachine_m13B838DE27DAABDF13D39197DEE404D7B3BCC705_AdjustorThunk },
	{ 0x06000059, U3CStartInternalU3Ed__66_MoveNext_mBB65D40C3752ED30B6968C6B7ED6190A1CEC9517_AdjustorThunk },
	{ 0x0600005A, U3CStartInternalU3Ed__66_SetStateMachine_m2EC84F2AF51710A1F13782C23850AAF5CDC6FF0E_AdjustorThunk },
	{ 0x0600005B, U3CStopU3Ed__63_MoveNext_m9AB00B0971EC4A8D4454BD7FF5ADA133C21740E4_AdjustorThunk },
	{ 0x0600005C, U3CStopU3Ed__63_SetStateMachine_mE3CFA16BEC8F720A8997BA15A8DC4B45FDC33B9E_AdjustorThunk },
	{ 0x0600005D, U3CStopInternalU3Ed__67_MoveNext_m815586EEF9FE8090BC13FA4F191F7D50BF3EB5B2_AdjustorThunk },
	{ 0x0600005E, U3CStopInternalU3Ed__67_SetStateMachine_m34024C47BE48B30FB31C5A0B3CF4A08703D7E33E_AdjustorThunk },
};
static const int32_t s_InvokerIndices[317] = 
{
	605,
	6603,
	6509,
	6509,
	8187,
	1852,
	6603,
	6603,
	6568,
	6603,
	9516,
	9516,
	3184,
	3184,
	6603,
	6603,
	6370,
	5300,
	6370,
	6509,
	6603,
	6509,
	5401,
	6509,
	5401,
	6509,
	6603,
	5495,
	6734,
	6603,
	2543,
	9516,
	4873,
	287,
	1082,
	6509,
	2562,
	4001,
	6603,
	4896,
	9906,
	4591,
	1576,
	1576,
	6734,
	6734,
	5495,
	5495,
	6603,
	6603,
	6734,
	6734,
	4896,
	4896,
	4848,
	4848,
	9934,
	4896,
	4896,
	9934,
	6734,
	2562,
	6734,
	5495,
	6734,
	2562,
	6734,
	5495,
	6734,
	5495,
	6734,
	5495,
	6734,
	5495,
	6734,
	5495,
	6734,
	5495,
	6734,
	5495,
	6734,
	5495,
	6734,
	5495,
	6734,
	5495,
	6734,
	5495,
	6734,
	5495,
	6734,
	5495,
	6734,
	5495,
	0,
	0,
	9267,
	9267,
	9267,
	9267,
	9049,
	7901,
	7901,
	9049,
	9049,
	9756,
	0,
	0,
	8821,
	9934,
	9934,
	6734,
	6603,
	6734,
	6603,
	9934,
	9883,
	9748,
	9906,
	9906,
	8821,
	9516,
	9906,
	9906,
	3179,
	6509,
	3179,
	6603,
	726,
	6734,
	9934,
	9934,
	6734,
	6603,
	6603,
	6603,
	6603,
	6509,
	3179,
	726,
	3184,
	6603,
	726,
	0,
	403,
	6734,
	9934,
	6734,
	6509,
	6603,
	6734,
	6603,
	5495,
	6734,
	5495,
	3184,
	6734,
	9883,
	4896,
	9883,
	6603,
	6603,
	9906,
	9906,
	9934,
	5495,
	9883,
	7773,
	7358,
	7080,
	9516,
	726,
	1854,
	3969,
	4890,
	9934,
	9934,
	6734,
	4001,
	4001,
	4001,
	4001,
	4001,
	4001,
	1923,
	6734,
	4896,
	6734,
	1615,
	6734,
	6734,
	8821,
	8217,
	8212,
	9934,
	6734,
	6603,
	6734,
	0,
	6603,
	6603,
	8821,
	8821,
	9934,
	3179,
	4896,
	3179,
	1615,
	9934,
	6734,
	4896,
	1615,
	4001,
	6734,
	4896,
	6734,
	9883,
	4896,
	9883,
	9516,
	9906,
	9906,
	9934,
	3179,
	25,
	3184,
	726,
	9379,
	6734,
	9934,
	9883,
	9748,
	4896,
	9883,
	6603,
	6603,
	9906,
	9906,
	5495,
	9883,
	8821,
	9516,
	8821,
	8821,
	8821,
	726,
	1408,
	3969,
	4890,
	9883,
	9934,
	3179,
	4896,
	3179,
	1854,
	3179,
	4001,
	3179,
	3184,
	3179,
	1854,
	9934,
	6734,
	4001,
	4001,
	4001,
	4001,
	4001,
	4001,
	6734,
	1615,
	6734,
	1615,
	6734,
	6734,
	6734,
	9883,
	4896,
	9883,
	6603,
	6603,
	9906,
	9906,
	9906,
	9934,
	5495,
	9883,
	726,
	1854,
	1316,
	9510,
	9934,
	9934,
	6734,
	4896,
	1615,
	6734,
	1615,
	6734,
	4896,
	9934,
	8821,
	8217,
	9049,
	0,
	6734,
	6603,
	5495,
	6734,
	9934,
	6734,
	2569,
	5464,
	9510,
	5495,
	5495,
	3184,
};
static const Il2CppTokenRangePair s_rgctxIndices[2] = 
{
	{ 0x0600006B, { 0, 4 } },
	{ 0x06000131, { 4, 1 } },
};
extern const uint32_t g_rgctx_T_tECF42FFD657988FA9A452FAA79DBFF04FDDC2084;
extern const uint32_t g_rgctx_LogExtensions_Return_TisT_tECF42FFD657988FA9A452FAA79DBFF04FDDC2084_m78FEA8B33B1E023D0F0B2037E167FF21D671B560;
extern const uint32_t g_rgctx_Func_1_t1B07296F150A1D739310503BEB61C038D02C7C12;
extern const uint32_t g_rgctx_Func_1__ctor_m18D6DF613F1D3594B6AFFBCA8672FF95818DCBD0;
extern const uint32_t g_rgctx_T_t86B169729871B9679AB295A4576455D1D6998363;
static const Il2CppRGCTXDefinition s_rgctxValues[5] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tECF42FFD657988FA9A452FAA79DBFF04FDDC2084 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LogExtensions_Return_TisT_tECF42FFD657988FA9A452FAA79DBFF04FDDC2084_m78FEA8B33B1E023D0F0B2037E167FF21D671B560 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_1_t1B07296F150A1D739310503BEB61C038D02C7C12 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_1__ctor_m18D6DF613F1D3594B6AFFBCA8672FF95818DCBD0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t86B169729871B9679AB295A4576455D1D6998363 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Websocket_Client_CodeGenModule;
const Il2CppCodeGenModule g_Websocket_Client_CodeGenModule = 
{
	"Websocket.Client.dll",
	317,
	s_methodPointers,
	30,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	2,
	s_rgctxIndices,
	5,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
