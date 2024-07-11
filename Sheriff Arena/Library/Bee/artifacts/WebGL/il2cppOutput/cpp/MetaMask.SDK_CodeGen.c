﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String MetaMask.IAppConfig::get_AppName()
// 0x00000002 System.String MetaMask.IAppConfig::get_AppUrl()
// 0x00000003 System.String MetaMask.IAppConfig::get_AppIcon()
// 0x00000004 MetaMask.IMetaMaskEventsHandler MetaMask.IMetaMaskEvents::get_Events()
// 0x00000005 System.Void MetaMask.IMetaMaskEventsHandler::add_StartConnecting(System.EventHandler`1<MetaMask.MetaMaskConnectEventArgs>)
// 0x00000006 System.Void MetaMask.IMetaMaskEventsHandler::remove_StartConnecting(System.EventHandler`1<MetaMask.MetaMaskConnectEventArgs>)
// 0x00000007 System.Void MetaMask.IMetaMaskEventsHandler::add_WalletReady(System.EventHandler)
// 0x00000008 System.Void MetaMask.IMetaMaskEventsHandler::remove_WalletReady(System.EventHandler)
// 0x00000009 System.Void MetaMask.IMetaMaskEventsHandler::add_WalletPaused(System.EventHandler)
// 0x0000000A System.Void MetaMask.IMetaMaskEventsHandler::remove_WalletPaused(System.EventHandler)
// 0x0000000B System.Void MetaMask.IMetaMaskEventsHandler::add_WalletConnected(System.EventHandler)
// 0x0000000C System.Void MetaMask.IMetaMaskEventsHandler::remove_WalletConnected(System.EventHandler)
// 0x0000000D System.Void MetaMask.IMetaMaskEventsHandler::add_WalletDisconnected(System.EventHandler)
// 0x0000000E System.Void MetaMask.IMetaMaskEventsHandler::remove_WalletDisconnected(System.EventHandler)
// 0x0000000F System.Void MetaMask.IMetaMaskEventsHandler::add_ChainIdChanged(System.EventHandler)
// 0x00000010 System.Void MetaMask.IMetaMaskEventsHandler::remove_ChainIdChanged(System.EventHandler)
// 0x00000011 System.Void MetaMask.IMetaMaskEventsHandler::add_AccountChanged(System.EventHandler)
// 0x00000012 System.Void MetaMask.IMetaMaskEventsHandler::remove_AccountChanged(System.EventHandler)
// 0x00000013 System.Void MetaMask.IMetaMaskEventsHandler::add_WalletAuthorized(System.EventHandler)
// 0x00000014 System.Void MetaMask.IMetaMaskEventsHandler::remove_WalletAuthorized(System.EventHandler)
// 0x00000015 System.Void MetaMask.IMetaMaskEventsHandler::add_WalletUnauthorized(System.EventHandler)
// 0x00000016 System.Void MetaMask.IMetaMaskEventsHandler::remove_WalletUnauthorized(System.EventHandler)
// 0x00000017 System.Void MetaMask.IMetaMaskEventsHandler::add_EthereumRequestResultReceived(System.EventHandler`1<MetaMask.MetaMaskEthereumRequestResultEventArgs>)
// 0x00000018 System.Void MetaMask.IMetaMaskEventsHandler::remove_EthereumRequestResultReceived(System.EventHandler`1<MetaMask.MetaMaskEthereumRequestResultEventArgs>)
// 0x00000019 System.Void MetaMask.IMetaMaskEventsHandler::add_EthereumRequestFailed(System.EventHandler`1<MetaMask.MetaMaskEthereumRequestFailedEventArgs>)
// 0x0000001A System.Void MetaMask.IMetaMaskEventsHandler::remove_EthereumRequestFailed(System.EventHandler`1<MetaMask.MetaMaskEthereumRequestFailedEventArgs>)
// 0x0000001B System.Void MetaMask.MetaMaskEthereumRequestResultEventArgs::.ctor(MetaMask.Models.MetaMaskSubmittedRequest,System.String)
extern void MetaMaskEthereumRequestResultEventArgs__ctor_mD1FBF765D764EC8AEFEF55ABE52CCC393D0B3B57 (void);
// 0x0000001C System.Void MetaMask.MetaMaskEthereumRequestFailedEventArgs::.ctor(MetaMask.Models.MetaMaskSubmittedRequest,evm.net.Models.JsonRpcError)
extern void MetaMaskEthereumRequestFailedEventArgs__ctor_m4789BDE41741770C4C9FF98F03365C401DBAB7AD (void);
// 0x0000001D System.Void MetaMask.MetaMaskConnectEventArgs::.ctor(System.String,System.String)
extern void MetaMaskConnectEventArgs__ctor_m6C51589DB44AF7BBD5111770ADE3D35D83F705CB (void);
// 0x0000001E System.Void MetaMask.IMetaMaskProvider::add_EthereumEventReceived(System.EventHandler`1<MetaMask.Providers.JsonRpcEventArgs>)
// 0x0000001F System.Void MetaMask.IMetaMaskProvider::remove_EthereumEventReceived(System.EventHandler`1<MetaMask.Providers.JsonRpcEventArgs>)
// 0x00000020 System.Void MetaMask.IMetaMaskProvider::add_EthereumRequestReceived(System.EventHandler`1<MetaMask.Providers.JsonRpcEventArgs>)
// 0x00000021 System.Void MetaMask.IMetaMaskProvider::remove_EthereumRequestReceived(System.EventHandler`1<MetaMask.Providers.JsonRpcEventArgs>)
// 0x00000022 System.Void MetaMask.IMetaMaskProvider::add_ProviderConnected(System.EventHandler)
// 0x00000023 System.Void MetaMask.IMetaMaskProvider::remove_ProviderConnected(System.EventHandler)
// 0x00000024 System.Void MetaMask.IMetaMaskProvider::add_OtpReceived(System.EventHandler`1<System.Int32>)
// 0x00000025 System.Void MetaMask.IMetaMaskProvider::remove_OtpReceived(System.EventHandler`1<System.Int32>)
// 0x00000026 System.Void MetaMask.IMetaMaskProvider::add_WalletPaused(System.EventHandler)
// 0x00000027 System.Void MetaMask.IMetaMaskProvider::remove_WalletPaused(System.EventHandler)
// 0x00000028 System.Void MetaMask.IMetaMaskProvider::add_WalletAuthorized(System.EventHandler)
// 0x00000029 System.Void MetaMask.IMetaMaskProvider::remove_WalletAuthorized(System.EventHandler)
// 0x0000002A System.Void MetaMask.IMetaMaskProvider::add_WalletUnauthorized(System.EventHandler)
// 0x0000002B System.Void MetaMask.IMetaMaskProvider::remove_WalletUnauthorized(System.EventHandler)
// 0x0000002C MetaMask.Providers.ProviderValidator/ValidateProvider MetaMask.IMetaMaskProvider::get_ProviderValidator()
// 0x0000002D System.Void MetaMask.IMetaMaskProvider::set_ProviderValidator(MetaMask.Providers.ProviderValidator/ValidateProvider)
// 0x0000002E MetaMask.Providers.ProviderValidator/ResetProviderValidator MetaMask.IMetaMaskProvider::get_ProviderValidatorReset()
// 0x0000002F System.Void MetaMask.IMetaMaskProvider::set_ProviderValidatorReset(MetaMask.Providers.ProviderValidator/ResetProviderValidator)
// 0x00000030 MetaMask.Transports.TransportMode MetaMask.IMetaMaskProvider::get_ConnectionMode()
// 0x00000031 System.Void MetaMask.IMetaMaskProvider::set_ConnectionMode(MetaMask.Transports.TransportMode)
// 0x00000032 MetaMask.MetaMaskSession MetaMask.IMetaMaskProvider::get_Session()
// 0x00000033 System.String MetaMask.IMetaMaskProvider::get_AnalyticsPlatform()
// 0x00000034 System.Void MetaMask.IMetaMaskProvider::set_AnalyticsPlatform(System.String)
// 0x00000035 System.Boolean MetaMask.IMetaMaskProvider::get_HasSession()
// 0x00000036 System.Void MetaMask.IMetaMaskProvider::SendMessage(System.Object)
// 0x00000037 System.Void MetaMask.IMetaMaskProvider::FlushMessages()
// 0x00000038 System.Void MetaMask.IMetaMaskProvider::ClearSession()
// 0x00000039 System.Void MetaMask.IMetaMaskProvider::SaveSession()
// 0x0000003A System.Void MetaMask.IMetaMaskProvider::ReloadNewSession()
// 0x0000003B System.Void MetaMask.IMetaMaskProvider::Connect(System.Boolean)
// 0x0000003C System.Void MetaMask.IMetaMaskProvider::Disconnect()
// 0x0000003D System.Boolean MetaMask.MetaMaskDataManager::get_Encrypt()
extern void MetaMaskDataManager_get_Encrypt_m1FFE3B6FAEB9727BFA1B073256A463E5E39E06A2 (void);
// 0x0000003E System.Void MetaMask.MetaMaskDataManager::set_Encrypt(System.Boolean)
extern void MetaMaskDataManager_set_Encrypt_m532DA0730A01BB7585343D56949C6F74EAAE14DD (void);
// 0x0000003F System.String MetaMask.MetaMaskDataManager::get_Password()
extern void MetaMaskDataManager_get_Password_m8E3E20CB7817726463E85028CD480EA4C2E9EAF1 (void);
// 0x00000040 System.Void MetaMask.MetaMaskDataManager::set_Password(System.String)
extern void MetaMaskDataManager_set_Password_m76C3277373C35FA391E2882196250551D344ABD0 (void);
// 0x00000041 MetaMask.IO.IMetaMaskPersistentStorage MetaMask.MetaMaskDataManager::get_Storage()
extern void MetaMaskDataManager_get_Storage_mFF2618299FAE5C63761D3ACC3FA467588C566E96 (void);
// 0x00000042 System.Security.Cryptography.SymmetricAlgorithm MetaMask.MetaMaskDataManager::get_Algorithm()
extern void MetaMaskDataManager_get_Algorithm_m0103203955FC5CDC33F5D6C0E034551B2C210A26 (void);
// 0x00000043 System.Void MetaMask.MetaMaskDataManager::.ctor(MetaMask.IO.IMetaMaskPersistentStorage,System.Boolean,System.String)
extern void MetaMaskDataManager__ctor_m15B1D1F73F1CB81D7DB57B6D40BB74DE43016268 (void);
// 0x00000044 System.Void MetaMask.MetaMaskDataManager::Delete(System.String)
extern void MetaMaskDataManager_Delete_m1D98F52AB7CB58BE2ACE591AB76654038CAB93BF (void);
// 0x00000045 System.Void MetaMask.MetaMaskDataManager::Save(System.String,System.Object)
extern void MetaMaskDataManager_Save_m28C82FD98E49810F3FC45BEF3D88DE8190D67BAA (void);
// 0x00000046 T MetaMask.MetaMaskDataManager::Load(System.String,T)
// 0x00000047 T MetaMask.MetaMaskDataManager::LoadInto(System.String,T)
// 0x00000048 System.Byte[] MetaMask.MetaMaskDataManager::PrepareEncryptPassword()
extern void MetaMaskDataManager_PrepareEncryptPassword_mA89161D911942638E41D6CFEBFB27462BCE2903C (void);
// 0x00000049 System.Void MetaMask.MetaMaskDataManager::PrepareDecryptPassword(System.Byte[])
extern void MetaMaskDataManager_PrepareDecryptPassword_mB18A6FBB28CFA9DC9AAE7D25B115E49DB902E0ED (void);
// 0x0000004A System.Security.Cryptography.CryptoStream MetaMask.MetaMaskDataManager::GetCryptoStream(System.IO.Stream,System.Security.Cryptography.CryptoStreamMode)
extern void MetaMaskDataManager_GetCryptoStream_m323B97D7990775A92ACAD73F9A363EAB020068E3 (void);
// 0x0000004B System.String MetaMask.MetaMaskDataManager::RandomString(System.Int32)
extern void MetaMaskDataManager_RandomString_m6D654E7556F4ECDFBE1C84E4122792FC9605835A (void);
// 0x0000004C MetaMask.MetaMaskSessionData MetaMask.MetaMaskSession::get_Data()
extern void MetaMaskSession_get_Data_mBA1CB9E45692BDC6B32108546094DAF5A99B4894 (void);
// 0x0000004D MetaMask.Cryptography.IEciesProvider MetaMask.MetaMaskSession::get_EciesProvider()
extern void MetaMaskSession_get_EciesProvider_m77153E46A157380F842B47249C4D880E3EE3A3AE (void);
// 0x0000004E System.String MetaMask.MetaMaskSession::get_PublicKey()
extern void MetaMaskSession_get_PublicKey_m7211334495FE42A544FFE438145184A88B1FC096 (void);
// 0x0000004F System.DateTime MetaMask.MetaMaskSession::get_LastActive()
extern void MetaMaskSession_get_LastActive_m4C1B6BCCC91F0A667E7BFA583CB8F5FD72C85CA5 (void);
// 0x00000050 System.Void MetaMask.MetaMaskSession::.ctor(MetaMask.Cryptography.IEciesProvider,MetaMask.MetaMaskSessionData)
extern void MetaMaskSession__ctor_mCFBD14A57D7C754D61FB54A789226E675F32799E (void);
// 0x00000051 MetaMask.Models.MetaMaskMessage MetaMask.MetaMaskSession::PrepareMessage(System.Object,System.Boolean,System.String)
extern void MetaMaskSession_PrepareMessage_m64DB1A38849E1A2C2FEB761A0B0EA1879417EDC1 (void);
// 0x00000052 System.String MetaMask.MetaMaskSession::EncryptMessage(System.Object,System.String)
extern void MetaMaskSession_EncryptMessage_m4AF83E7E0BABA56D5F521FBC40EC0CA5741252CA (void);
// 0x00000053 System.String MetaMask.MetaMaskSession::DecryptMessage(System.String)
extern void MetaMaskSession_DecryptMessage_mE27DD58EC72A323C90290E67D274F244658CBBEA (void);
// 0x00000054 System.String MetaMask.MetaMaskSessionData::get_AppName()
extern void MetaMaskSessionData_get_AppName_mF61ECDE45E13B2C64CB9120C468AD88DDBF93B15 (void);
// 0x00000055 System.Void MetaMask.MetaMaskSessionData::set_AppName(System.String)
extern void MetaMaskSessionData_set_AppName_mCF0B994EA248F127A68746C31654260FA3AA6EB0 (void);
// 0x00000056 System.String MetaMask.MetaMaskSessionData::get_AppUrl()
extern void MetaMaskSessionData_get_AppUrl_m6EAD566AF2087EFEB03002E85E9E26BD3F684659 (void);
// 0x00000057 System.Void MetaMask.MetaMaskSessionData::set_AppUrl(System.String)
extern void MetaMaskSessionData_set_AppUrl_mB127BBADDB091FF921853B3BA1554DC4E18092CA (void);
// 0x00000058 System.String MetaMask.MetaMaskSessionData::get_AppIcon()
extern void MetaMaskSessionData_get_AppIcon_m75DFD33E987BD92EFA1F370D70A6DAA5655392DB (void);
// 0x00000059 System.Void MetaMask.MetaMaskSessionData::set_AppIcon(System.String)
extern void MetaMaskSessionData_set_AppIcon_m6A0445DEA8B793995FBDD469ED4998E71E040B3A (void);
// 0x0000005A System.String MetaMask.MetaMaskSessionData::get_ChannelId()
extern void MetaMaskSessionData_get_ChannelId_m07545E7B9EB85CB30C30726406928C7BB211DE94 (void);
// 0x0000005B System.Void MetaMask.MetaMaskSessionData::set_ChannelId(System.String)
extern void MetaMaskSessionData_set_ChannelId_m37057F37D72CE9442101DEEB864C57CC53F90861 (void);
// 0x0000005C System.DateTime MetaMask.MetaMaskSessionData::get_LastActive()
extern void MetaMaskSessionData_get_LastActive_mD0BC6FD83BC057F15AB5B442308539F57B1D5FD0 (void);
// 0x0000005D System.Void MetaMask.MetaMaskSessionData::set_LastActive(System.DateTime)
extern void MetaMaskSessionData_set_LastActive_mDA1E597A2729F8CD8F049B4C821CA6B9CF3FEF10 (void);
// 0x0000005E System.Void MetaMask.MetaMaskSessionData::.ctor()
extern void MetaMaskSessionData__ctor_m4DA7CBEB17597B94644D0612BB8942376491093E (void);
// 0x0000005F System.Void MetaMask.MetaMaskSessionData::.ctor(MetaMask.IAppConfig)
extern void MetaMaskSessionData__ctor_mF69187B26F0A88BB7FF93F554C48C041B07789F2 (void);
// 0x00000060 System.String MetaMask.MetaMaskWallet::get_Version()
extern void MetaMaskWallet_get_Version_m53022DFDB1DAAF53A85F2F92759EC555C81E074D (void);
// 0x00000061 System.String MetaMask.MetaMaskWallet::get_Source()
extern void MetaMaskWallet_get_Source_m9E3B255E4E293D76134E8B7B42345A519B7E5E96 (void);
// 0x00000062 System.Void MetaMask.MetaMaskWallet::set_Source(System.String)
extern void MetaMaskWallet_set_Source_m628E080565EC7E8D7B87F1D84CE81A7C153F613E (void);
// 0x00000063 System.Boolean MetaMask.MetaMaskWallet::get_Connecting()
extern void MetaMaskWallet_get_Connecting_mC0B9BA55349BC9E3040C85B56FAA6C73AAA9DFDA (void);
// 0x00000064 MetaMask.IMetaMaskEventsHandler MetaMask.MetaMaskWallet::get_Events()
extern void MetaMaskWallet_get_Events_mF8657BB4FF551E8AE6A4836463F572ADAB7E9407 (void);
// 0x00000065 System.Void MetaMask.MetaMaskWallet::add_StartConnecting(System.EventHandler`1<MetaMask.MetaMaskConnectEventArgs>)
extern void MetaMaskWallet_add_StartConnecting_mC27B0E4A6141B53371D35BD52F2A4C2CE375ECD9 (void);
// 0x00000066 System.Void MetaMask.MetaMaskWallet::remove_StartConnecting(System.EventHandler`1<MetaMask.MetaMaskConnectEventArgs>)
extern void MetaMaskWallet_remove_StartConnecting_m95A401B01451AB70F74AFDE799F0720EE21AD283 (void);
// 0x00000067 System.Void MetaMask.MetaMaskWallet::add_WalletReady(System.EventHandler)
extern void MetaMaskWallet_add_WalletReady_mF974C7682B8B2D56D8E5FC364DDB00653574EAEA (void);
// 0x00000068 System.Void MetaMask.MetaMaskWallet::remove_WalletReady(System.EventHandler)
extern void MetaMaskWallet_remove_WalletReady_m6CEBD4176001DF530DEF0AF66C30C244EEEA57B5 (void);
// 0x00000069 System.Void MetaMask.MetaMaskWallet::add_WalletPaused(System.EventHandler)
extern void MetaMaskWallet_add_WalletPaused_m881A3BF46CC170553031B77C6075E5BFFF40FBCD (void);
// 0x0000006A System.Void MetaMask.MetaMaskWallet::remove_WalletPaused(System.EventHandler)
extern void MetaMaskWallet_remove_WalletPaused_mD91203B94D7DD828ED6FF6786DCA0717D06CA9E6 (void);
// 0x0000006B System.Void MetaMask.MetaMaskWallet::add_WalletConnected(System.EventHandler)
extern void MetaMaskWallet_add_WalletConnected_m411EB11DF190681A9058FCAEB23021AEF9ABB5B6 (void);
// 0x0000006C System.Void MetaMask.MetaMaskWallet::remove_WalletConnected(System.EventHandler)
extern void MetaMaskWallet_remove_WalletConnected_m6F6A732F926CB53D3C266CE710858C89680D3A56 (void);
// 0x0000006D System.Void MetaMask.MetaMaskWallet::add_WalletDisconnected(System.EventHandler)
extern void MetaMaskWallet_add_WalletDisconnected_mF66208E421842825F555D8D70663597A73AE3CBE (void);
// 0x0000006E System.Void MetaMask.MetaMaskWallet::remove_WalletDisconnected(System.EventHandler)
extern void MetaMaskWallet_remove_WalletDisconnected_mB677D049836658F9660E5C5A1078D8BD56C34BBD (void);
// 0x0000006F System.Void MetaMask.MetaMaskWallet::add_ChainIdChanged(System.EventHandler)
extern void MetaMaskWallet_add_ChainIdChanged_mA710B3BD464651EFDCD3B0CEF3E81BAB3B6AF07E (void);
// 0x00000070 System.Void MetaMask.MetaMaskWallet::remove_ChainIdChanged(System.EventHandler)
extern void MetaMaskWallet_remove_ChainIdChanged_mA60DB59545EF35A81A964B5D8FF971139ABEFA72 (void);
// 0x00000071 System.Void MetaMask.MetaMaskWallet::add_AccountChanged(System.EventHandler)
extern void MetaMaskWallet_add_AccountChanged_mB6F2BA2743B6924E620E6B0D6DBE2A78F0A84CEB (void);
// 0x00000072 System.Void MetaMask.MetaMaskWallet::remove_AccountChanged(System.EventHandler)
extern void MetaMaskWallet_remove_AccountChanged_m1C9CE7233989F40D8C19C849A79F841ED743E68B (void);
// 0x00000073 System.Void MetaMask.MetaMaskWallet::add_WalletAuthorized(System.EventHandler)
extern void MetaMaskWallet_add_WalletAuthorized_m8BBDEBC0C5DF2D7B46BB624ACA7E268F617762DC (void);
// 0x00000074 System.Void MetaMask.MetaMaskWallet::remove_WalletAuthorized(System.EventHandler)
extern void MetaMaskWallet_remove_WalletAuthorized_mD43995E72DFB190CEA4C724C02F8F4F7CDA02ED9 (void);
// 0x00000075 System.Void MetaMask.MetaMaskWallet::add_WalletUnauthorized(System.EventHandler)
extern void MetaMaskWallet_add_WalletUnauthorized_mD26D919E3E768EE9427448F2A85C05257CA276D3 (void);
// 0x00000076 System.Void MetaMask.MetaMaskWallet::remove_WalletUnauthorized(System.EventHandler)
extern void MetaMaskWallet_remove_WalletUnauthorized_mAB3E758D79F45F496517496BEA5EC4F58E95B1E3 (void);
// 0x00000077 System.Void MetaMask.MetaMaskWallet::add_EthereumRequestResultReceived(System.EventHandler`1<MetaMask.MetaMaskEthereumRequestResultEventArgs>)
extern void MetaMaskWallet_add_EthereumRequestResultReceived_m25050BFE57219C063A4044AE817E06269F277A4A (void);
// 0x00000078 System.Void MetaMask.MetaMaskWallet::remove_EthereumRequestResultReceived(System.EventHandler`1<MetaMask.MetaMaskEthereumRequestResultEventArgs>)
extern void MetaMaskWallet_remove_EthereumRequestResultReceived_m3C4D350D873866A109E0AB5BD6ACD424F4DF8E9E (void);
// 0x00000079 System.Void MetaMask.MetaMaskWallet::add_EthereumRequestFailed(System.EventHandler`1<MetaMask.MetaMaskEthereumRequestFailedEventArgs>)
extern void MetaMaskWallet_add_EthereumRequestFailed_mE2FD4C0053B5C90FA61EFD02112466158EBD54D2 (void);
// 0x0000007A System.Void MetaMask.MetaMaskWallet::remove_EthereumRequestFailed(System.EventHandler`1<MetaMask.MetaMaskEthereumRequestFailedEventArgs>)
extern void MetaMaskWallet_remove_EthereumRequestFailed_mFCF53DE6EAB3BA47A02697E150CCDC2A58AF9E1F (void);
// 0x0000007B System.String MetaMask.MetaMaskWallet::get_analyticsPlatform()
extern void MetaMaskWallet_get_analyticsPlatform_m551AACEE8C8540C297B92A511F2B7FA857B55896 (void);
// 0x0000007C System.String MetaMask.MetaMaskWallet::get_ConnectMethod()
extern void MetaMaskWallet_get_ConnectMethod_m8C73956E3B90D78F4045309B51C8EF5F08588B72 (void);
// 0x0000007D MetaMask.IMetaMaskProvider MetaMask.MetaMaskWallet::get_ProviderEngine()
extern void MetaMaskWallet_get_ProviderEngine_mF6BED74CA270E6D35B861BE47653606B13434FEA (void);
// 0x0000007E MetaMask.MetaMaskSession MetaMask.MetaMaskWallet::get_Session()
extern void MetaMaskWallet_get_Session_m147EE31A2439F2E238DEA5037940F40995FA77F1 (void);
// 0x0000007F MetaMask.Transports.IMetaMaskTransport MetaMask.MetaMaskWallet::get_Transport()
extern void MetaMaskWallet_get_Transport_mDE3F8C79FB01DA271C2DBA4D7BEA0746B9DFB28B (void);
// 0x00000080 System.Void MetaMask.MetaMaskWallet::set_Transport(MetaMask.Transports.IMetaMaskTransport)
extern void MetaMaskWallet_set_Transport_mC3BD5449567FAA9741EB7068124D491429792E7E (void);
// 0x00000081 evm.net.IProvider MetaMask.MetaMaskWallet::get_FallbackProvider()
extern void MetaMaskWallet_get_FallbackProvider_m594963582A750A00A77975C12E85DB89F9020E06 (void);
// 0x00000082 System.Void MetaMask.MetaMaskWallet::set_FallbackProvider(evm.net.IProvider)
extern void MetaMaskWallet_set_FallbackProvider_m760233D4E3D66BD3BCCDEB479C8EDF1ED27486D3 (void);
// 0x00000083 System.String MetaMask.MetaMaskWallet::get_UserAgent()
extern void MetaMaskWallet_get_UserAgent_mE8FAC56DA25F12FA115C340409D632662FAA5574 (void);
// 0x00000084 System.Void MetaMask.MetaMaskWallet::set_UserAgent(System.String)
extern void MetaMaskWallet_set_UserAgent_m23727017F7D2B1F8F7D3898CE53A67B2E2111BD1 (void);
// 0x00000085 System.DateTime MetaMask.MetaMaskWallet::get_LastActive()
extern void MetaMaskWallet_get_LastActive_m4A778BC5DCBD86DC4878EC27EAE82B89CA85D152 (void);
// 0x00000086 System.String MetaMask.MetaMaskWallet::get_SelectedAddress()
extern void MetaMaskWallet_get_SelectedAddress_m637D43EE04F36F4D6E1D7A2708ED89F6086277D5 (void);
// 0x00000087 System.Int64 MetaMask.MetaMaskWallet::get_ChainId()
extern void MetaMaskWallet_get_ChainId_m4AC55A1B076364659969CCBE278A5B16A2D25030 (void);
// 0x00000088 System.String MetaMask.MetaMaskWallet::get_SelectedChainId()
extern void MetaMaskWallet_get_SelectedChainId_m298BC7AA9B0E8B6F45B23758A7AA21B61C7A5568 (void);
// 0x00000089 System.String MetaMask.MetaMaskWallet::get_WalletPublicKey()
extern void MetaMaskWallet_get_WalletPublicKey_mFD685EA028537DDEC1D20AC118D55BE93134590D (void);
// 0x0000008A System.Boolean MetaMask.MetaMaskWallet::get_IsConnected()
extern void MetaMaskWallet_get_IsConnected_m51D4D15E83DAFC2003CF45D6C962355C250B8FDF (void);
// 0x0000008B System.String MetaMask.MetaMaskWallet::get_AppIcon()
extern void MetaMaskWallet_get_AppIcon_mD1C8D34D28199E713A7B59DC590B87E88FDE6524 (void);
// 0x0000008C MetaMask.Models.MetaMaskOriginatorInfo MetaMask.MetaMaskWallet::get_OriginatorInfo()
extern void MetaMaskWallet_get_OriginatorInfo_m9355A9D8005170FB1F98BCB8F8569D1DF4E4E455 (void);
// 0x0000008D System.Boolean MetaMask.MetaMaskWallet::get_IsPaused()
extern void MetaMaskWallet_get_IsPaused_m115DE3F84E712F85A74C04DED399F867B627D14E (void);
// 0x0000008E System.Boolean MetaMask.MetaMaskWallet::get_IsAuthorized()
extern void MetaMaskWallet_get_IsAuthorized_mDD54A106E7C5E31C894EF945F276156F51D6B5B7 (void);
// 0x0000008F System.Boolean MetaMask.MetaMaskWallet::get_HasSession()
extern void MetaMaskWallet_get_HasSession_m74471808EF479F31D70CA508BB5DF3AE88EED3D7 (void);
// 0x00000090 MetaMask.Models.ConnectionContext MetaMask.MetaMaskWallet::get_ConnectionContext()
extern void MetaMaskWallet_get_ConnectionContext_mB391890BBECC9AE812FCBCB0679F4A760F7BD589 (void);
// 0x00000091 System.Void MetaMask.MetaMaskWallet::.ctor(MetaMask.MetaMaskDataManager,MetaMask.Transports.IMetaMaskTransport,MetaMask.IMetaMaskProvider)
extern void MetaMaskWallet__ctor_m10884CAFA2567C9A1B52F6FF3FA8C73E9937D36C (void);
// 0x00000092 System.Void MetaMask.MetaMaskWallet::.ctor(MetaMask.MetaMaskDataManager,MetaMask.IAppConfig,MetaMask.Cryptography.IEciesProvider,MetaMask.Transports.IMetaMaskTransport,MetaMask.Sockets.IMetaMaskSocketWrapper,System.String)
extern void MetaMaskWallet__ctor_m2DB959B597ABA4DB551F842B7C069F7493DCE9D9 (void);
// 0x00000093 System.Void MetaMask.MetaMaskWallet::.ctor(MetaMask.MetaMaskSession,MetaMask.Transports.IMetaMaskTransport,MetaMask.Sockets.IMetaMaskSocketWrapper,System.String)
extern void MetaMaskWallet__ctor_m5F9742DBD670C6B83C1F1827F9E4BCAB4111858D (void);
// 0x00000094 T MetaMask.MetaMaskWallet::DeserializeObject(System.String)
// 0x00000095 System.Void MetaMask.MetaMaskWallet::OnWalletPaused(System.Object,System.EventArgs)
extern void MetaMaskWallet_OnWalletPaused_m2B87E05E85BEC29F2CFF299356C29C0F976F3069 (void);
// 0x00000096 System.String MetaMask.MetaMaskWallet::FetchAssemblyVersion()
extern void MetaMaskWallet_FetchAssemblyVersion_m1A9BF84D969FC518A81C6309561424D5A7835AA3 (void);
// 0x00000097 System.Void MetaMask.MetaMaskWallet::SendValidationRequest(System.String)
extern void MetaMaskWallet_SendValidationRequest_mA117FE9E9E1E63073104F930FA3F7CF0B27A86FB (void);
// 0x00000098 System.Void MetaMask.MetaMaskWallet::ConnectAndSignFallback(System.String,System.Threading.Tasks.Task`1<System.Boolean>)
extern void MetaMaskWallet_ConnectAndSignFallback_mCA0D95761F3B4A1404E79ACFCB3740BDC5941B8F (void);
// 0x00000099 System.Void MetaMask.MetaMaskWallet::OnConnectionValidateProviderConnection()
extern void MetaMaskWallet_OnConnectionValidateProviderConnection_m284E084317A8BFF8C9389E3EC22D5B3F4EADE0A7 (void);
// 0x0000009A System.Void MetaMask.MetaMaskWallet::OnResumeValidateProviderConnection()
extern void MetaMaskWallet_OnResumeValidateProviderConnection_mFDC0F1DEB58A27BE8773D2F9BA0EC010417801C9 (void);
// 0x0000009B System.Threading.Tasks.Task MetaMask.MetaMaskWallet::ValidateProviderConnection()
extern void MetaMaskWallet_ValidateProviderConnection_m3E91A3693EEA874D9F4667D95D2CB917B070646E (void);
// 0x0000009C System.Void MetaMask.MetaMaskWallet::OnWalletAuthorized(System.Object,System.EventArgs)
extern void MetaMaskWallet_OnWalletAuthorized_m506ACAA0982CA7B448ED5CD934936F42260559F3 (void);
// 0x0000009D System.Void MetaMask.MetaMaskWallet::OnOtpReceived(System.Object,System.Int32)
extern void MetaMaskWallet_OnOtpReceived_m39F525DF2AE8E4EFC35DCFC7631D56CE41F00C1E (void);
// 0x0000009E System.Void MetaMask.MetaMaskWallet::OnWalletUnauthorized(System.Object,System.EventArgs)
extern void MetaMaskWallet_OnWalletUnauthorized_mDE5E2F3C5CDBAAB9D424C9BFEC83D464AA0A0389 (void);
// 0x0000009F System.Void MetaMask.MetaMaskWallet::ValidateChainAndSelectedAccounts()
extern void MetaMaskWallet_ValidateChainAndSelectedAccounts_m7E536124705DA5FEF648B8E29889F3509499AEF6 (void);
// 0x000000A0 System.Void MetaMask.MetaMaskWallet::RequestChainId()
extern void MetaMaskWallet_RequestChainId_m50947FFB11CFBCAB85989EA2CC3FDB565DA47C5B (void);
// 0x000000A1 System.Void MetaMask.MetaMaskWallet::ValidateAccountsKnown()
extern void MetaMaskWallet_ValidateAccountsKnown_mA9BB3FFE1F54B4431A09DE837055A33CAC9E679A (void);
// 0x000000A2 System.Void MetaMask.MetaMaskWallet::OnEthereumRequestReceived(System.Object,MetaMask.Providers.JsonRpcEventArgs)
extern void MetaMaskWallet_OnEthereumRequestReceived_m40F480B35FB64376D33BAB2B7BB74E5A44BAA4A7 (void);
// 0x000000A3 System.Void MetaMask.MetaMaskWallet::OnEthereumEventReceived(System.Object,MetaMask.Providers.JsonRpcEventArgs)
extern void MetaMaskWallet_OnEthereumEventReceived_m48B902F148C1ACB31826C2A1AA14FDC8C54A796A (void);
// 0x000000A4 System.Void MetaMask.MetaMaskWallet::OnAccountsChanged(System.String[],System.Boolean)
extern void MetaMaskWallet_OnAccountsChanged_m117BF3B39083FE630BB81D6324375D488A0B060D (void);
// 0x000000A5 System.Void MetaMask.MetaMaskWallet::OnChainIdChanged(MetaMask.Models.ChainData)
extern void MetaMaskWallet_OnChainIdChanged_m8CF16D3D0A4BB342B72BD18E96466052FA5FB994 (void);
// 0x000000A6 System.Void MetaMask.MetaMaskWallet::SendEthereumRequest(System.String,MetaMask.Models.MetaMaskEthereumRequest,System.Boolean)
extern void MetaMaskWallet_SendEthereumRequest_mCDBD4E831DDAEBEE6A65B5C9BC57FD1753936AD7 (void);
// 0x000000A7 System.Boolean MetaMask.MetaMaskWallet::ShouldOpenMM(System.String)
extern void MetaMaskWallet_ShouldOpenMM_mD150DBF56B63DB3720CDBF387877DEA5A705E06F (void);
// 0x000000A8 System.Threading.Tasks.Task MetaMask.MetaMaskWallet::WaitForWalletReady()
extern void MetaMaskWallet_WaitForWalletReady_m703D90BD90F616FD3D952E34AB74F0095B9FAF74 (void);
// 0x000000A9 System.Threading.Tasks.Task`1<TR> MetaMask.MetaMaskWallet::Request(MetaMask.Models.MetaMaskEthereumRequest)
// 0x000000AA System.Void MetaMask.MetaMaskWallet::ClearSession()
extern void MetaMaskWallet_ClearSession_mB87C93D057968F198547480AE4609CAF58801C8C (void);
// 0x000000AB System.Void MetaMask.MetaMaskWallet::ClearValidateTask()
extern void MetaMaskWallet_ClearValidateTask_mA5A8C5C7FA4C6C8B9D8C4DEEFE11A76E57CAB5F2 (void);
// 0x000000AC System.Threading.Tasks.Task`1<System.String> MetaMask.MetaMaskWallet::ConnectAndSign(System.String)
extern void MetaMaskWallet_ConnectAndSign_m65C662FDF2AF076E22CAF2580B1D6AE17E326CF4 (void);
// 0x000000AD System.Void MetaMask.MetaMaskWallet::Connect()
extern void MetaMaskWallet_Connect_m3D235DB9E819B096589C053CC3517E2A780BEF4D (void);
// 0x000000AE System.Void MetaMask.MetaMaskWallet::SetupProviderEvents()
extern void MetaMaskWallet_SetupProviderEvents_m466A46ADA6D3EE3D3E318E0EEB5974C8B284A961 (void);
// 0x000000AF System.Void MetaMask.MetaMaskWallet::OnProviderEngineConnected(System.Object,System.EventArgs)
extern void MetaMaskWallet_OnProviderEngineConnected_mC1774478824B3D6715E9C0EF191238226579369C (void);
// 0x000000B0 System.Void MetaMask.MetaMaskWallet::SaveConnectionUrl(System.Boolean)
extern void MetaMaskWallet_SaveConnectionUrl_mEFE719CA043CDCA44F784D73027E34AC9FC68B62 (void);
// 0x000000B1 System.Void MetaMask.MetaMaskWallet::Disconnect()
extern void MetaMaskWallet_Disconnect_mA74AB1FB1FAC6EDC3816A82BEEC08FF7578AD09E (void);
// 0x000000B2 System.Void MetaMask.MetaMaskWallet::Dispose()
extern void MetaMaskWallet_Dispose_mA94CEB36CC3FE2ED08DE3E1174011A356232B71A (void);
// 0x000000B3 System.Void MetaMask.MetaMaskWallet::SaveSession()
extern void MetaMaskWallet_SaveSession_mD477B54EE9AD7ED50C4970E70B1B2303863DF080 (void);
// 0x000000B4 System.Void MetaMask.MetaMaskWallet::AddJsonConverter(Newtonsoft.Json.JsonConverter)
extern void MetaMaskWallet_AddJsonConverter_mFD63D9FEE987957DD9E2D614EB29C2E0658B5085 (void);
// 0x000000B5 System.String MetaMask.MetaMaskWallet::get_ConnectedAddress()
extern void MetaMaskWallet_get_ConnectedAddress_m2A9B021E8B94B96BFBFAA629E9A75A368132371F (void);
// 0x000000B6 System.Threading.Tasks.Task`1<System.Object> MetaMask.MetaMaskWallet::Request(MetaMask.Models.MetaMaskEthereumRequest)
extern void MetaMaskWallet_Request_m6EA88F22BEAA81D80CE81F9FA9D749B0497BD98B (void);
// 0x000000B7 System.Object MetaMask.MetaMaskWallet::Request(System.String,System.Object[])
extern void MetaMaskWallet_Request_mA262524154453ED54A79F6BCC4337CBF457D1132 (void);
// 0x000000B8 System.Threading.Tasks.Task`1<TR> MetaMask.MetaMaskWallet::Request(System.String,System.Object[])
// 0x000000B9 MetaMask.Models.BatchRequester MetaMask.MetaMaskWallet::BatchRequests()
extern void MetaMaskWallet_BatchRequests_m8A41F9EC0E23D83C6904B8BA01420A93496F1105 (void);
// 0x000000BA System.Void MetaMask.MetaMaskWallet::EndSession(System.Boolean)
extern void MetaMaskWallet_EndSession_m6B746FBA1355802B4E896299F99873B6325E09B6 (void);
// 0x000000BB System.Void MetaMask.MetaMaskWallet::.cctor()
extern void MetaMaskWallet__cctor_m3BC0796C59380C19A221C1E77C6CB581BB530ADB (void);
// 0x000000BC System.Void MetaMask.MetaMaskWallet/<>c__DisplayClass123_0::.ctor()
extern void U3CU3Ec__DisplayClass123_0__ctor_m0304815599E96EB178E35FF6A3A25F9E600B88F0 (void);
// 0x000000BD System.Void MetaMask.MetaMaskWallet/<>c__DisplayClass123_0::<OnConnectionValidateProviderConnection>g__ErrorResponse|0(System.Object,MetaMask.MetaMaskEthereumRequestFailedEventArgs)
extern void U3CU3Ec__DisplayClass123_0_U3COnConnectionValidateProviderConnectionU3Eg__ErrorResponseU7C0_m38E54700D4882EC45A6E08F86442C7D23C4BD040 (void);
// 0x000000BE System.Void MetaMask.MetaMaskWallet/<>c__DisplayClass123_0::<OnConnectionValidateProviderConnection>g__ResultResponse|1(System.Object,MetaMask.MetaMaskEthereumRequestResultEventArgs)
extern void U3CU3Ec__DisplayClass123_0_U3COnConnectionValidateProviderConnectionU3Eg__ResultResponseU7C1_mF35349C0AE55E734D735440EF8DEF022989FC8A2 (void);
// 0x000000BF System.Void MetaMask.MetaMaskWallet/<>c__DisplayClass124_0::.ctor()
extern void U3CU3Ec__DisplayClass124_0__ctor_m5DD22EBBF460B158333D55E08489C2DF6E592616 (void);
// 0x000000C0 System.Void MetaMask.MetaMaskWallet/<>c__DisplayClass124_0::<OnResumeValidateProviderConnection>g__ErrorResponse|0(System.Object,MetaMask.MetaMaskEthereumRequestFailedEventArgs)
extern void U3CU3Ec__DisplayClass124_0_U3COnResumeValidateProviderConnectionU3Eg__ErrorResponseU7C0_mE190F7077685A92495DA5DE56422B0C004D5C93B (void);
// 0x000000C1 System.Void MetaMask.MetaMaskWallet/<>c__DisplayClass124_0::<OnResumeValidateProviderConnection>g__ResultResponse|1(System.Object,MetaMask.MetaMaskEthereumRequestResultEventArgs)
extern void U3CU3Ec__DisplayClass124_0_U3COnResumeValidateProviderConnectionU3Eg__ResultResponseU7C1_m7D88089854CA97C618BD6A4917F8F79FFFE97E29 (void);
// 0x000000C2 System.Void MetaMask.MetaMaskWallet/<>c__DisplayClass138_0::.ctor()
extern void U3CU3Ec__DisplayClass138_0__ctor_m91CCF4B2B66BF1B8CA91AF8F8DA085369F730ADA (void);
// 0x000000C3 System.Void MetaMask.MetaMaskWallet/<>c__DisplayClass138_0::<WaitForWalletReady>g__OnWalletReady|0(System.Object,System.EventArgs)
extern void U3CU3Ec__DisplayClass138_0_U3CWaitForWalletReadyU3Eg__OnWalletReadyU7C0_m77A45283696297C20DB943FBFD2FA77874F84D2E (void);
// 0x000000C4 System.Void MetaMask.MetaMaskWallet/<>c__DisplayClass138_0::<WaitForWalletReady>g__OnUnauthorizedHandler|1(System.Object,System.EventArgs)
extern void U3CU3Ec__DisplayClass138_0_U3CWaitForWalletReadyU3Eg__OnUnauthorizedHandlerU7C1_m0C813C306D26A5B35CF55D007A42160B71B2FC08 (void);
// 0x000000C5 System.Void MetaMask.MetaMaskWallet/<>c__DisplayClass139_0`1::.ctor()
// 0x000000C6 System.Void MetaMask.MetaMaskWallet/<>c__DisplayClass139_0`1::<Request>g__ErrorResponse|0(System.Object,MetaMask.MetaMaskEthereumRequestFailedEventArgs)
// 0x000000C7 System.Void MetaMask.MetaMaskWallet/<>c__DisplayClass139_0`1::<Request>g__ResultResponse|1(System.Object,MetaMask.MetaMaskEthereumRequestResultEventArgs)
// 0x000000C8 System.Void MetaMask.MetaMaskWallet/<ConnectAndSign>d__142::MoveNext()
extern void U3CConnectAndSignU3Ed__142_MoveNext_m692A80856BA26EDA7D3B1769475B4DFE0005A144 (void);
// 0x000000C9 System.Void MetaMask.MetaMaskWallet/<ConnectAndSign>d__142::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CConnectAndSignU3Ed__142_SetStateMachine_m9BAD673500762F3086BC565A1D40A3565BF1BAF6 (void);
// 0x000000CA System.Void MetaMask.MetaMaskWallet/<ConnectAndSignFallback>d__122::MoveNext()
extern void U3CConnectAndSignFallbackU3Ed__122_MoveNext_m02DD7E66685E54868E49BAEAA3ECEDAA087169D3 (void);
// 0x000000CB System.Void MetaMask.MetaMaskWallet/<ConnectAndSignFallback>d__122::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CConnectAndSignFallbackU3Ed__122_SetStateMachine_m07B3EACCCE63D69D2A543E35FA04C5F27917609A (void);
// 0x000000CC System.Void MetaMask.MetaMaskWallet/<OnWalletAuthorized>d__126::MoveNext()
extern void U3COnWalletAuthorizedU3Ed__126_MoveNext_mC5E9B318A751FFC6DBFEDEDE1B99E7B33BDD4DD5 (void);
// 0x000000CD System.Void MetaMask.MetaMaskWallet/<OnWalletAuthorized>d__126::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3COnWalletAuthorizedU3Ed__126_SetStateMachine_m110B87D0D7F7E90A05127523A896FB4B93A48EE5 (void);
// 0x000000CE System.Void MetaMask.MetaMaskWallet/<ValidateProviderConnection>d__125::MoveNext()
extern void U3CValidateProviderConnectionU3Ed__125_MoveNext_m7C09779520F5A8A5B55DBDA89F2AD88DA2BFF5CD (void);
// 0x000000CF System.Void MetaMask.MetaMaskWallet/<ValidateProviderConnection>d__125::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CValidateProviderConnectionU3Ed__125_SetStateMachine_mDD1948F4B3E7BA9F45C3CA8B1E006CEA88462CC0 (void);
// 0x000000D0 System.Boolean MetaMask.ReflectionExtensions::IsTupleType(System.Type)
extern void ReflectionExtensions_IsTupleType_m3687B33418D900018C0B5C910DEC270A7F9B4E20 (void);
// 0x000000D1 System.Void MetaMask.RpcMethods::.cctor()
extern void RpcMethods__cctor_m4D2C32E59D534EA8C7FC6DD03718AB48DD41EB3F (void);
// 0x000000D2 MetaMask.Transports.TransportMode MetaMask.Transports.IMetaMaskTransport::get_ConnectionMode()
// 0x000000D3 System.Void MetaMask.Transports.IMetaMaskTransport::set_ConnectionMode(MetaMask.Transports.TransportMode)
// 0x000000D4 System.Void MetaMask.Transports.IMetaMaskTransport::Initialize()
// 0x000000D5 System.Void MetaMask.Transports.IMetaMaskTransport::UpdateUrls(System.String,System.String)
// 0x000000D6 System.Void MetaMask.Transports.IMetaMaskTransport::OnConnectRequest()
// 0x000000D7 System.Void MetaMask.Transports.IMetaMaskTransport::OnRequest(System.String,MetaMask.Models.MetaMaskEthereumRequest)
// 0x000000D8 System.Void MetaMask.Transports.IMetaMaskTransport::OnOTPCode(System.Int32)
// 0x000000D9 System.Void MetaMask.Transports.IMetaMaskTransport::OnFailure(System.Exception)
// 0x000000DA System.Void MetaMask.Transports.IMetaMaskTransport::OnSuccess()
// 0x000000DB System.Void MetaMask.Transports.IMetaMaskTransport::OnDisconnect()
// 0x000000DC System.Boolean MetaMask.IO.IMetaMaskPersistentStorage::Exists(System.String)
// 0x000000DD System.Void MetaMask.IO.IMetaMaskPersistentStorage::Write(System.String,System.String)
// 0x000000DE System.String MetaMask.IO.IMetaMaskPersistentStorage::Read(System.String)
// 0x000000DF System.Void MetaMask.IO.IMetaMaskPersistentStorage::Delete(System.String)
// 0x000000E0 System.Void MetaMask.Sockets.IMetaMaskSocketWrapper::add_Connected(System.EventHandler)
// 0x000000E1 System.Void MetaMask.Sockets.IMetaMaskSocketWrapper::remove_Connected(System.EventHandler)
// 0x000000E2 System.Void MetaMask.Sockets.IMetaMaskSocketWrapper::add_Disconnected(System.EventHandler)
// 0x000000E3 System.Void MetaMask.Sockets.IMetaMaskSocketWrapper::remove_Disconnected(System.EventHandler)
// 0x000000E4 System.Void MetaMask.Sockets.IMetaMaskSocketWrapper::Initialize(System.String,MetaMask.Sockets.MetaMaskSocketOptions)
// 0x000000E5 System.Threading.Tasks.Task MetaMask.Sockets.IMetaMaskSocketWrapper::ConnectAsync()
// 0x000000E6 System.Threading.Tasks.Task MetaMask.Sockets.IMetaMaskSocketWrapper::DisconnectAsync()
// 0x000000E7 System.Void MetaMask.Sockets.IMetaMaskSocketWrapper::Emit(System.String,System.Object[])
// 0x000000E8 System.Void MetaMask.Sockets.IMetaMaskSocketWrapper::On(System.String,System.Action`1<System.String>)
// 0x000000E9 System.Void MetaMask.Sockets.IMetaMaskSocketWrapper::Off(System.String,System.Action`1<System.String>)
// 0x000000EA System.Threading.Tasks.Task`1<System.ValueTuple`3<System.String,System.Boolean,System.String>> MetaMask.Sockets.IMetaMaskSocketWrapper::SendWebRequest(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
// 0x000000EB System.Collections.Generic.Dictionary`2<System.String,System.String> MetaMask.Sockets.MetaMaskSocketOptions::get_ExtraHeaders()
extern void MetaMaskSocketOptions_get_ExtraHeaders_m7E795D8AC39E5DFEB6203163B7C09913C044204E (void);
// 0x000000EC System.Void MetaMask.Sockets.MetaMaskSocketOptions::set_ExtraHeaders(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern void MetaMaskSocketOptions_set_ExtraHeaders_m15F5809238060F57CFC889C636ADE96EF59776A1 (void);
// 0x000000ED System.Void MetaMask.Sockets.MetaMaskSocketOptions::.ctor()
extern void MetaMaskSocketOptions__ctor_m811B4823873E5266FC487C34025D7B56D91A2489 (void);
// 0x000000EE System.Void MetaMask.Providers.BaseProvider::add_EthereumEventReceived(System.EventHandler`1<MetaMask.Providers.JsonRpcEventArgs>)
// 0x000000EF System.Void MetaMask.Providers.BaseProvider::remove_EthereumEventReceived(System.EventHandler`1<MetaMask.Providers.JsonRpcEventArgs>)
// 0x000000F0 System.Void MetaMask.Providers.BaseProvider::add_EthereumRequestReceived(System.EventHandler`1<MetaMask.Providers.JsonRpcEventArgs>)
// 0x000000F1 System.Void MetaMask.Providers.BaseProvider::remove_EthereumRequestReceived(System.EventHandler`1<MetaMask.Providers.JsonRpcEventArgs>)
// 0x000000F2 System.Void MetaMask.Providers.BaseProvider::add_ProviderConnected(System.EventHandler)
// 0x000000F3 System.Void MetaMask.Providers.BaseProvider::remove_ProviderConnected(System.EventHandler)
// 0x000000F4 System.Void MetaMask.Providers.BaseProvider::add_OtpReceived(System.EventHandler`1<System.Int32>)
extern void BaseProvider_add_OtpReceived_mC8C87CADE41A1E7DF7DAC93A6A51C21A15E47705 (void);
// 0x000000F5 System.Void MetaMask.Providers.BaseProvider::remove_OtpReceived(System.EventHandler`1<System.Int32>)
extern void BaseProvider_remove_OtpReceived_mFA08B125F0BCFA440174FBC6285BF932612241E0 (void);
// 0x000000F6 System.Void MetaMask.Providers.BaseProvider::add_WalletPaused(System.EventHandler)
extern void BaseProvider_add_WalletPaused_mDD0F5867F78D2A6A98CFFE28637E91E2C48BA57B (void);
// 0x000000F7 System.Void MetaMask.Providers.BaseProvider::remove_WalletPaused(System.EventHandler)
extern void BaseProvider_remove_WalletPaused_mCB6333DA1DA2E80A6673B4CD385C2C49BF6EF01E (void);
// 0x000000F8 System.Void MetaMask.Providers.BaseProvider::add_WalletAuthorized(System.EventHandler)
extern void BaseProvider_add_WalletAuthorized_mE6C0552B142BA367C5B18737F4CAC15542FD0936 (void);
// 0x000000F9 System.Void MetaMask.Providers.BaseProvider::remove_WalletAuthorized(System.EventHandler)
extern void BaseProvider_remove_WalletAuthorized_m745A92CB4D5D4CC7B513D1DB809197B513EAAE8A (void);
// 0x000000FA System.Void MetaMask.Providers.BaseProvider::add_WalletUnauthorized(System.EventHandler)
extern void BaseProvider_add_WalletUnauthorized_m469923320FBC2BAFFE545FF44554D91782708FE4 (void);
// 0x000000FB System.Void MetaMask.Providers.BaseProvider::remove_WalletUnauthorized(System.EventHandler)
extern void BaseProvider_remove_WalletUnauthorized_mFFCCFCCC34D443098AB4DF2C94868B176F34C056 (void);
// 0x000000FC MetaMask.Providers.ProviderValidator/ValidateProvider MetaMask.Providers.BaseProvider::get_ProviderValidator()
extern void BaseProvider_get_ProviderValidator_m26C8FB3B2B723FDBA500E9070A100FD38C4AD7E9 (void);
// 0x000000FD System.Void MetaMask.Providers.BaseProvider::set_ProviderValidator(MetaMask.Providers.ProviderValidator/ValidateProvider)
extern void BaseProvider_set_ProviderValidator_m6A58B5A03CBD76ED004CC41583A82DE4AA1E10DD (void);
// 0x000000FE MetaMask.Providers.ProviderValidator/ResetProviderValidator MetaMask.Providers.BaseProvider::get_ProviderValidatorReset()
extern void BaseProvider_get_ProviderValidatorReset_m74976B36C1A1713602DF2D46B22AD000DB8AC9DE (void);
// 0x000000FF System.Void MetaMask.Providers.BaseProvider::set_ProviderValidatorReset(MetaMask.Providers.ProviderValidator/ResetProviderValidator)
extern void BaseProvider_set_ProviderValidatorReset_mF503DBB7A99DDF9775C44C3F732FD8E2C6D6C0C2 (void);
// 0x00000100 MetaMask.Transports.TransportMode MetaMask.Providers.BaseProvider::get_ConnectionMode()
extern void BaseProvider_get_ConnectionMode_m00CA4411CBD7445E6A3A706D2B094DA73E91AC2E (void);
// 0x00000101 System.Void MetaMask.Providers.BaseProvider::set_ConnectionMode(MetaMask.Transports.TransportMode)
extern void BaseProvider_set_ConnectionMode_m5D2E323F4D4314501556166A8A62E393FA04D06B (void);
// 0x00000102 MetaMask.MetaMaskSession MetaMask.Providers.BaseProvider::get_Session()
extern void BaseProvider_get_Session_m4A0A55437F53F6DE9D8D817A7D1CEBB63D434214 (void);
// 0x00000103 System.Void MetaMask.Providers.BaseProvider::set_Session(MetaMask.MetaMaskSession)
extern void BaseProvider_set_Session_m9321023802984F64AAE1E54B5EE0D479EBC3C3F8 (void);
// 0x00000104 System.String MetaMask.Providers.BaseProvider::get_AnalyticsPlatform()
extern void BaseProvider_get_AnalyticsPlatform_mC25853BC502B7F4739B8F815303BCA2802CC962A (void);
// 0x00000105 System.Void MetaMask.Providers.BaseProvider::set_AnalyticsPlatform(System.String)
extern void BaseProvider_set_AnalyticsPlatform_m014B0BB139E99DB8FC147DDA91A59BA6630887F1 (void);
// 0x00000106 System.Void MetaMask.Providers.BaseProvider::OnWalletAuthorized()
extern void BaseProvider_OnWalletAuthorized_m5135BEF6422A9C806F435AA953D304914374CB50 (void);
// 0x00000107 System.Void MetaMask.Providers.BaseProvider::OnWalletUnauthorized()
extern void BaseProvider_OnWalletUnauthorized_mD8E62BA1B4308A037D80DD787B726494C0F3900E (void);
// 0x00000108 System.Void MetaMask.Providers.BaseProvider::OnOtpReceived(System.Int32)
extern void BaseProvider_OnOtpReceived_m8F8E1AF35DE36CBFA5CB8794CE93E5F62A183C15 (void);
// 0x00000109 System.Void MetaMask.Providers.BaseProvider::OnWalletPaused()
extern void BaseProvider_OnWalletPaused_m9F7B70648CBF88CBBD8E585A21D810D3C5398456 (void);
// 0x0000010A System.Boolean MetaMask.Providers.BaseProvider::get_HasSession()
// 0x0000010B System.Void MetaMask.Providers.BaseProvider::SendMessage(System.Object)
// 0x0000010C System.Void MetaMask.Providers.BaseProvider::FlushMessages()
extern void BaseProvider_FlushMessages_m19DC88E351F7278B3B0B2FF117626640DCDAE542 (void);
// 0x0000010D System.Void MetaMask.Providers.BaseProvider::ClearSession()
// 0x0000010E System.Void MetaMask.Providers.BaseProvider::SaveSession()
// 0x0000010F System.Void MetaMask.Providers.BaseProvider::ReloadNewSession()
// 0x00000110 System.Void MetaMask.Providers.BaseProvider::LoadOrCreateSession(MetaMask.IAppConfig,MetaMask.Cryptography.IEciesProvider)
// 0x00000111 System.Void MetaMask.Providers.BaseProvider::Connect(System.Boolean)
// 0x00000112 System.Void MetaMask.Providers.BaseProvider::Disconnect()
// 0x00000113 System.Void MetaMask.Providers.BaseProvider::DoDispose()
// 0x00000114 System.Void MetaMask.Providers.BaseProvider::Dispose()
extern void BaseProvider_Dispose_m627F16080B81E636763CC52DE24F17436222B580 (void);
// 0x00000115 System.Void MetaMask.Providers.BaseProvider::.ctor()
extern void BaseProvider__ctor_m66622FDF74C1DB378A4571D521BF9AAC7D2F7475 (void);
// 0x00000116 System.Void MetaMask.Providers.BaseProvider::.cctor()
extern void BaseProvider__cctor_m13BE69EAF08A8A5B7843879C419F3A1C33BF84BA (void);
// 0x00000117 System.String MetaMask.Providers.EncryptedProvider::get_WalletPublicKey()
extern void EncryptedProvider_get_WalletPublicKey_mB728A8D676782A2896E18DA06C3E5390A38D0FBC (void);
// 0x00000118 System.Boolean MetaMask.Providers.EncryptedProvider::get_HasSession()
extern void EncryptedProvider_get_HasSession_m4B22238DA1FE76EEFAEF0632B926B67A2E090B85 (void);
// 0x00000119 System.Void MetaMask.Providers.EncryptedProvider::.ctor(MetaMask.IAppConfig,MetaMask.Cryptography.IEciesProvider,MetaMask.MetaMaskDataManager)
extern void EncryptedProvider__ctor_m9EF8EB7D4EB54BEF39A9EF2C9ED7996E552E91F3 (void);
// 0x0000011A System.Void MetaMask.Providers.EncryptedProvider::ReloadNewSession()
extern void EncryptedProvider_ReloadNewSession_mC3A694F495CD6A254862B4E66FD1B04E023E58D0 (void);
// 0x0000011B System.Void MetaMask.Providers.EncryptedProvider::LoadOrCreateSession(MetaMask.IAppConfig,MetaMask.Cryptography.IEciesProvider)
extern void EncryptedProvider_LoadOrCreateSession_m0A3BCCF9FBF18D2F8168EB5700B4619C670FE9C3 (void);
// 0x0000011C System.Void MetaMask.Providers.EncryptedProvider::ClearSession()
extern void EncryptedProvider_ClearSession_mF8E775D350F7B513F027EAFF25132F506351C4A1 (void);
// 0x0000011D System.Void MetaMask.Providers.EncryptedProvider::SaveSession()
extern void EncryptedProvider_SaveSession_mCAD188697AEC6924B569A11E9397F9F26F5D8389 (void);
// 0x0000011E System.Threading.Tasks.Task MetaMask.Providers.EncryptedProvider::OnEncryptedMessage(System.String)
// 0x0000011F System.Void MetaMask.Providers.EncryptedProvider::ExchangeKeys(System.Boolean)
// 0x00000120 System.Void MetaMask.Providers.EncryptedProvider::BeginHandshake()
// 0x00000121 System.Void MetaMask.Providers.EncryptedProvider::SynAckKeyExchange(System.String)
// 0x00000122 System.Void MetaMask.Providers.EncryptedProvider::OnMessageReceived(System.String)
extern void EncryptedProvider_OnMessageReceived_mD18CE8A54A20CEC396A44B2B049168669BC83150 (void);
// 0x00000123 System.Threading.Tasks.Task MetaMask.Providers.EncryptedProvider::HandleEncryptedMessage(System.String)
extern void EncryptedProvider_HandleEncryptedMessage_m81082F578109039BE19B505998C06605A4599B22 (void);
// 0x00000124 System.Threading.Tasks.Task MetaMask.Providers.EncryptedProvider::HandleResponseWithTypes(System.String,System.Action`1<TKeyType>,System.Func`2<TEncrytpedType,System.Threading.Tasks.Task>)
// 0x00000125 System.Void MetaMask.Providers.EncryptedProvider::HandleKeyExchangeMessage(MetaMask.Models.KeyExchangeMessage)
extern void EncryptedProvider_HandleKeyExchangeMessage_m6DA2E7E36F56A1A32AF42BA57FB8A67DAF69A28B (void);
// 0x00000126 System.Void MetaMask.Providers.EncryptedProvider::<OnMessageReceived>b__18_0(MetaMask.Models.MetaMaskMessage`1<MetaMask.Models.KeyExchangeMessage>)
extern void EncryptedProvider_U3COnMessageReceivedU3Eb__18_0_m79C6DA57B7E8B3D5C029BD147E8043005FF1C98F (void);
// 0x00000127 System.Threading.Tasks.Task MetaMask.Providers.EncryptedProvider::<OnMessageReceived>b__18_1(MetaMask.Models.MetaMaskMessage`1<System.String>)
extern void EncryptedProvider_U3COnMessageReceivedU3Eb__18_1_m071013FB1BCA0347D3D52709B76F99D28151571B (void);
// 0x00000128 System.Void MetaMask.Providers.EncryptedProvider::<OnMessageReceived>b__18_2(MetaMask.Models.MetaMaskMessage`1<MetaMask.Models.KeyExchangeMessage>[])
extern void EncryptedProvider_U3COnMessageReceivedU3Eb__18_2_m8448F34AE932273A6EA0ACAA524A0D6F7915D228 (void);
// 0x00000129 System.Threading.Tasks.Task MetaMask.Providers.EncryptedProvider::<OnMessageReceived>b__18_3(MetaMask.Models.MetaMaskMessage`1<System.String>[])
extern void EncryptedProvider_U3COnMessageReceivedU3Eb__18_3_m48F06004C8A5C951A554ECD5C1A89FD85E59A41D (void);
// 0x0000012A System.Threading.Tasks.Task MetaMask.Providers.EncryptedProvider::<OnMessageReceived>b__18_4(MetaMask.Models.MetaMaskMessage`1<System.String>)
extern void EncryptedProvider_U3COnMessageReceivedU3Eb__18_4_m1B07564F36DA0B1DBC1DD348EA47B5EC0588AE6E (void);
// 0x0000012B System.Void MetaMask.Providers.EncryptedProvider/<HandleEncryptedMessage>d__19::MoveNext()
extern void U3CHandleEncryptedMessageU3Ed__19_MoveNext_m00B38121B6605A3BC1AAE08BC6A19FABEF4FD78F (void);
// 0x0000012C System.Void MetaMask.Providers.EncryptedProvider/<HandleEncryptedMessage>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CHandleEncryptedMessageU3Ed__19_SetStateMachine_m8F5D8259E60F17D80B9A2B697D96C69557DB587F (void);
// 0x0000012D System.Void MetaMask.Providers.EncryptedProvider/<HandleResponseWithTypes>d__20`2::MoveNext()
// 0x0000012E System.Void MetaMask.Providers.EncryptedProvider/<HandleResponseWithTypes>d__20`2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x0000012F System.Void MetaMask.Providers.EncryptedProvider/<OnMessageReceived>d__18::MoveNext()
extern void U3COnMessageReceivedU3Ed__18_MoveNext_mECF017A78D92C7ADC6A51823A2CE3A29221990B6 (void);
// 0x00000130 System.Void MetaMask.Providers.EncryptedProvider/<OnMessageReceived>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3COnMessageReceivedU3Ed__18_SetStateMachine_mC5D463B1A1AF0204F6C7D0DC188D27642397A946 (void);
// 0x00000131 evm.net.Models.JsonRpcPayload MetaMask.Providers.JsonRpcEventArgs::get_Payload()
extern void JsonRpcEventArgs_get_Payload_m8C201445A0829DF6903C2F43EDE26B42F469FD06 (void);
// 0x00000132 System.String MetaMask.Providers.JsonRpcEventArgs::get_Json()
extern void JsonRpcEventArgs_get_Json_m87B4C8FBB4362B35A4603C1036B4A01D26CFEFA6 (void);
// 0x00000133 System.Void MetaMask.Providers.JsonRpcEventArgs::.ctor(evm.net.Models.JsonRpcPayload,System.String)
extern void JsonRpcEventArgs__ctor_mF548255FAB0EE80B543CE45A10C651DF1061CF6A (void);
// 0x00000134 System.Void MetaMask.Providers.ProviderValidator::.ctor()
extern void ProviderValidator__ctor_m572462C5D7AA102FD7F01F7E8ABADBD457D66F72 (void);
// 0x00000135 System.Void MetaMask.Providers.ProviderValidator/ValidateProvider::.ctor(System.Object,System.IntPtr)
extern void ValidateProvider__ctor_m89C8697C33710AA3923CF5C82E2E16D0D5C16DE4 (void);
// 0x00000136 System.Threading.Tasks.Task MetaMask.Providers.ProviderValidator/ValidateProvider::Invoke()
extern void ValidateProvider_Invoke_m30C15CD4AD459B83B517AB487A1DB96E38DC4624 (void);
// 0x00000137 System.IAsyncResult MetaMask.Providers.ProviderValidator/ValidateProvider::BeginInvoke(System.AsyncCallback,System.Object)
extern void ValidateProvider_BeginInvoke_m6C3F0C67C9AEB18E23B7D5FC54402D49E8A7B5C1 (void);
// 0x00000138 System.Threading.Tasks.Task MetaMask.Providers.ProviderValidator/ValidateProvider::EndInvoke(System.IAsyncResult)
extern void ValidateProvider_EndInvoke_m4DA8D75B7E5DF1A3925FF1B02AB9943F9C31E46F (void);
// 0x00000139 System.Void MetaMask.Providers.ProviderValidator/ResetProviderValidator::.ctor(System.Object,System.IntPtr)
extern void ResetProviderValidator__ctor_mEE0CC546681F3EEA323605AD87344EB454361FEC (void);
// 0x0000013A System.Void MetaMask.Providers.ProviderValidator/ResetProviderValidator::Invoke()
extern void ResetProviderValidator_Invoke_m7857255A7EBFB477E731CF1863D9658A886228FC (void);
// 0x0000013B System.IAsyncResult MetaMask.Providers.ProviderValidator/ResetProviderValidator::BeginInvoke(System.AsyncCallback,System.Object)
extern void ResetProviderValidator_BeginInvoke_mE542F60112DC0D368884BA6A143F38ED1235DF2D (void);
// 0x0000013C System.Void MetaMask.Providers.ProviderValidator/ResetProviderValidator::EndInvoke(System.IAsyncResult)
extern void ResetProviderValidator_EndInvoke_mDD914A025D3217224B734CBF558F8D4D00A6EEA9 (void);
// 0x0000013D System.Boolean MetaMask.Providers.WebsocketProvider::get_SocketConnected()
extern void WebsocketProvider_get_SocketConnected_mA38E20746A5FD85F5203759C1DACD6F5690C20DB (void);
// 0x0000013E System.Void MetaMask.Providers.WebsocketProvider::set_SocketConnected(System.Boolean)
extern void WebsocketProvider_set_SocketConnected_m6D6CD474BCCE7CA2E528806EADE8CFCE7AEB6C7E (void);
// 0x0000013F System.String MetaMask.Providers.WebsocketProvider::get_AppIcon()
extern void WebsocketProvider_get_AppIcon_m5C0E34F0B4C5D41BAF75750712CED74AEF5B68CF (void);
// 0x00000140 MetaMask.Models.MetaMaskOriginatorInfo MetaMask.Providers.WebsocketProvider::get_OriginatorInfo()
extern void WebsocketProvider_get_OriginatorInfo_mB0124B7C3E9A8A19CDF67EF0EDE33E8A1BAA48F2 (void);
// 0x00000141 System.String MetaMask.Providers.WebsocketProvider::get_UserAgent()
extern void WebsocketProvider_get_UserAgent_m8A52305006B277AE3B8AA63F9FEF59038B738862 (void);
// 0x00000142 System.Void MetaMask.Providers.WebsocketProvider::set_UserAgent(System.String)
extern void WebsocketProvider_set_UserAgent_m5BA8AB71D34618913A65902EDE6F2BD324A58639 (void);
// 0x00000143 System.Void MetaMask.Providers.WebsocketProvider::.ctor(MetaMask.IAppConfig,MetaMask.Cryptography.IEciesProvider,MetaMask.MetaMaskDataManager,MetaMask.Sockets.IMetaMaskSocketWrapper,System.String)
extern void WebsocketProvider__ctor_m36C42E38F1397F4135852DEC7EF05CE5E160DA31 (void);
// 0x00000144 System.Void MetaMask.Providers.WebsocketProvider::add_EthereumEventReceived(System.EventHandler`1<MetaMask.Providers.JsonRpcEventArgs>)
extern void WebsocketProvider_add_EthereumEventReceived_mA04F72C79CAFC4508F221FA32634D7CA2D731E34 (void);
// 0x00000145 System.Void MetaMask.Providers.WebsocketProvider::remove_EthereumEventReceived(System.EventHandler`1<MetaMask.Providers.JsonRpcEventArgs>)
extern void WebsocketProvider_remove_EthereumEventReceived_m1DFE579D3B6893DB6DC7D7FE42A0D8D8225B7A1F (void);
// 0x00000146 System.Void MetaMask.Providers.WebsocketProvider::add_EthereumRequestReceived(System.EventHandler`1<MetaMask.Providers.JsonRpcEventArgs>)
extern void WebsocketProvider_add_EthereumRequestReceived_m4E7C63B5A115DDFD844F54AC1C26266EEE3CA0D9 (void);
// 0x00000147 System.Void MetaMask.Providers.WebsocketProvider::remove_EthereumRequestReceived(System.EventHandler`1<MetaMask.Providers.JsonRpcEventArgs>)
extern void WebsocketProvider_remove_EthereumRequestReceived_mE3ABD6881E08DC2AB9C865FBF451C5247EC5DCF8 (void);
// 0x00000148 System.Void MetaMask.Providers.WebsocketProvider::add_ProviderConnected(System.EventHandler)
extern void WebsocketProvider_add_ProviderConnected_m704D78E0C4F26B27ECB5A9BB62AE09813ADC9351 (void);
// 0x00000149 System.Void MetaMask.Providers.WebsocketProvider::remove_ProviderConnected(System.EventHandler)
extern void WebsocketProvider_remove_ProviderConnected_m1032DC4E87F7D8641BDFA589B470A0528C28C8AF (void);
// 0x0000014A System.Void MetaMask.Providers.WebsocketProvider::SendMessage(System.Object)
extern void WebsocketProvider_SendMessage_mD47C045848B8728418E5161624A32606C8050AE7 (void);
// 0x0000014B System.Void MetaMask.Providers.WebsocketProvider::Connect(System.Boolean)
extern void WebsocketProvider_Connect_m41248EDFD271360A6574FFF41A212CC3A09AD3F1 (void);
// 0x0000014C System.Void MetaMask.Providers.WebsocketProvider::Disconnect()
extern void WebsocketProvider_Disconnect_m22BAD0BD67FCD914764E3D698F7AD68382F2C70C (void);
// 0x0000014D System.Void MetaMask.Providers.WebsocketProvider::DoDispose()
extern void WebsocketProvider_DoDispose_m82FD092712D86CDD185D19CD29A36F8255BB07FA (void);
// 0x0000014E System.Void MetaMask.Providers.WebsocketProvider::OnSocketConnected(System.Object,System.EventArgs)
extern void WebsocketProvider_OnSocketConnected_m33163A7D7D4EEACA8376A1DBDDF171D797617AA5 (void);
// 0x0000014F System.Void MetaMask.Providers.WebsocketProvider::JoinChannel(System.String)
extern void WebsocketProvider_JoinChannel_mE15F1591DBD2B979F3871FB72CEEF83EF4AF0DE4 (void);
// 0x00000150 System.Void MetaMask.Providers.WebsocketProvider::OnClientsConnected(System.String)
extern void WebsocketProvider_OnClientsConnected_mC24DAC76535D444E99B90D59D27B5F04C7868035 (void);
// 0x00000151 System.Void MetaMask.Providers.WebsocketProvider::OnClientsDisconnected(System.String)
extern void WebsocketProvider_OnClientsDisconnected_m5E20876CC5991AB1C4352B5201AE6A3731D2875D (void);
// 0x00000152 System.Void MetaMask.Providers.WebsocketProvider::OnClientsWaitingToJoin(System.String)
extern void WebsocketProvider_OnClientsWaitingToJoin_mC03B24CF9B20C4725F6163DE93310288DF67143C (void);
// 0x00000153 System.Threading.Tasks.Task MetaMask.Providers.WebsocketProvider::OnEncryptedMessage(System.String)
extern void WebsocketProvider_OnEncryptedMessage_mF0BC63E1A71BDE5CB0FF34F3D57C43492CB19994 (void);
// 0x00000154 System.Void MetaMask.Providers.WebsocketProvider::SendMessage(System.Object,System.Boolean)
extern void WebsocketProvider_SendMessage_m025A6D8CC4D1AB5A370A59100084F7B0B5842AD4 (void);
// 0x00000155 System.Void MetaMask.Providers.WebsocketProvider::ExchangeKeys(System.Boolean)
extern void WebsocketProvider_ExchangeKeys_mE0B727E59867D2D04AB3D2F7F3FEAC4FDCD92643 (void);
// 0x00000156 System.Void MetaMask.Providers.WebsocketProvider::BeginHandshake()
extern void WebsocketProvider_BeginHandshake_m81EB1440A205285F88A5C8781A9BDF2743C0D2DB (void);
// 0x00000157 System.Void MetaMask.Providers.WebsocketProvider::SendOriginatorInfo()
extern void WebsocketProvider_SendOriginatorInfo_m72EAC8114DFD53FE9B1CAC3B2AE01F176F446BDB (void);
// 0x00000158 System.Void MetaMask.Providers.WebsocketProvider::SynAckKeyExchange(System.String)
extern void WebsocketProvider_SynAckKeyExchange_m2C8C1196781F897026EB988605F55529F5A01352 (void);
// 0x00000159 System.Void MetaMask.Providers.WebsocketProvider::SendAnalytics(System.String)
extern void WebsocketProvider_SendAnalytics_mF08401E390AFD1A22E1C07F27E010F2C1AFF0F76 (void);
// 0x0000015A System.Void MetaMask.Providers.WebsocketProvider::OnSocketDisconnected(System.Object,System.EventArgs)
extern void WebsocketProvider_OnSocketDisconnected_m1B17D8B1976576AE195318990D810B7FF46EF4E0 (void);
// 0x0000015B System.Void MetaMask.Providers.WebsocketProvider::LeaveChannel()
extern void WebsocketProvider_LeaveChannel_m52D411912B41B1DE6C450FD81208776814CDCEA5 (void);
// 0x0000015C System.Void MetaMask.Providers.WebsocketProvider::LeaveChannel(System.String)
extern void WebsocketProvider_LeaveChannel_m1DEF86EC023E677455CDCF5FB86C0DD417B71F19 (void);
// 0x0000015D System.Void MetaMask.Providers.WebsocketProvider::ClearSession()
extern void WebsocketProvider_ClearSession_m3AF1EE26C010EFDD1E1C8E94E8B92A3FB3FA3096 (void);
// 0x0000015E System.Void MetaMask.Providers.WebsocketProvider::OnWalletAuthorized()
extern void WebsocketProvider_OnWalletAuthorized_mD8B9FA9E20943B9DB5D7BBB4114D5642DA6A7A0B (void);
// 0x0000015F System.Void MetaMask.Providers.WebsocketProvider::OnWalletUnauthorized()
extern void WebsocketProvider_OnWalletUnauthorized_m80B097D02E80B06F79ABB728BE8539CF84911BEA (void);
// 0x00000160 System.Void MetaMask.Providers.WebsocketProvider::<OnSocketConnected>b__45_0(System.Object,System.EventArgs)
extern void WebsocketProvider_U3COnSocketConnectedU3Eb__45_0_mD94AAE8212E44BA56F7C00E73B1E9E6FFDE5B93D (void);
// 0x00000161 MetaMask.Providers.ProviderValidator/ValidateProvider MetaMask.Providers.WebsocketProvider::<>n__0()
extern void WebsocketProvider_U3CU3En__0_m81775BA2E4D2B801618EAC359311921B445878AD (void);
// 0x00000162 System.Void MetaMask.Providers.WebsocketProvider/<OnEncryptedMessage>d__50::MoveNext()
extern void U3COnEncryptedMessageU3Ed__50_MoveNext_mF1E4809C96A2F846CCEB503B9E7B9D1420473F5D (void);
// 0x00000163 System.Void MetaMask.Providers.WebsocketProvider/<OnEncryptedMessage>d__50::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3COnEncryptedMessageU3Ed__50_SetStateMachine_mBF13382E7274256BA154D6C504189F2B3310A259 (void);
// 0x00000164 System.Void MetaMask.Providers.WebsocketProvider/<SendAnalytics>d__56::MoveNext()
extern void U3CSendAnalyticsU3Ed__56_MoveNext_m3693FAB65D89A580A866ECC3CD10C4A71F32E063 (void);
// 0x00000165 System.Void MetaMask.Providers.WebsocketProvider/<SendAnalytics>d__56::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendAnalyticsU3Ed__56_SetStateMachine_mE4F8958ABD1AC468913C0337D91A5712CB00B905 (void);
// 0x00000166 System.Void MetaMask.Models.AnalyticsResponse::.ctor()
extern void AnalyticsResponse__ctor_mF5193952D02D06511B142838E03064F4EF495A7B (void);
// 0x00000167 System.Void MetaMask.Models.BatchRequester::.cctor()
extern void BatchRequester__cctor_m4E900018E54FDF25B69896F78812DD4ED0B02D31 (void);
// 0x00000168 System.Void MetaMask.Models.BatchRequester::.ctor(MetaMask.MetaMaskWallet)
extern void BatchRequester__ctor_mAC10B76D88A8B1931DE47AC1BDB910588DD053D9 (void);
// 0x00000169 System.Threading.Tasks.Task`1<TR> MetaMask.Models.BatchRequester::Request(System.String,System.Object[])
// 0x0000016A System.Type MetaMask.Models.BatchRequester::BuildTupleType(System.Type[])
extern void BatchRequester_BuildTupleType_mEFFA2CDDE77F13BF651AD5719673F19AE95DEF97 (void);
// 0x0000016B System.Type MetaMask.Models.BatchRequester::BuildResponseTupleType()
extern void BatchRequester_BuildResponseTupleType_mC036460EA55642BD53C1D3B54C41AE4DB377ACDD (void);
// 0x0000016C System.Void MetaMask.Models.BatchRequester::ProcessResponses(System.Object,System.Type,System.Int32)
extern void BatchRequester_ProcessResponses_m2537E1A029B2521413395D8FFB37A3C017F6F1AF (void);
// 0x0000016D System.Threading.Tasks.Task MetaMask.Models.BatchRequester::Send()
extern void BatchRequester_Send_m8989DECEC61D43AFD15BD4B8E7CBB6BA08AD35F2 (void);
// 0x0000016E System.Int64 MetaMask.Models.BatchRequester::get_ChainId()
extern void BatchRequester_get_ChainId_m50D0692FB7B0728D9AC13787F64062AE6DDB83DE (void);
// 0x0000016F System.String MetaMask.Models.BatchRequester::get_ConnectedAddress()
extern void BatchRequester_get_ConnectedAddress_m346FF8C7DDEDD292384D833D82CE0D4C04D65EBC (void);
// 0x00000170 System.Object MetaMask.Models.BatchRequester::Request(System.String,System.Object[])
extern void BatchRequester_Request_m95E62B52615D97D6C937744F3EFD78F349F635CA (void);
// 0x00000171 System.Void MetaMask.Models.BatchRequester/BatchedRequest::.ctor()
extern void BatchedRequest__ctor_m0CA881AEF26BA6B918F2D22893074F5C9BDC03B2 (void);
// 0x00000172 System.Void MetaMask.Models.BatchRequester/TupleConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern void TupleConverter_WriteJson_m339CE309BDB16A5FB280A4D7E7CB98E1D5CA5AC2 (void);
// 0x00000173 System.Object MetaMask.Models.BatchRequester/TupleConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern void TupleConverter_ReadJson_m27355AC872509F5ED1522FAA9E3585A1B964DB28 (void);
// 0x00000174 System.Boolean MetaMask.Models.BatchRequester/TupleConverter::CanConvert(System.Type)
extern void TupleConverter_CanConvert_m8A69E061A8CBC31457F60E8AAA2390F31F19667D (void);
// 0x00000175 System.Void MetaMask.Models.BatchRequester/TupleConverter::.ctor()
extern void TupleConverter__ctor_m57760EEB7FBEB98B16FCC08F8E9ED955F5784955 (void);
// 0x00000176 System.Void MetaMask.Models.BatchRequester/<>c::.cctor()
extern void U3CU3Ec__cctor_m86EB739FC474BD30C88AC31E94A76CB4B0C45E63 (void);
// 0x00000177 System.Void MetaMask.Models.BatchRequester/<>c::.ctor()
extern void U3CU3Ec__ctor_m64372B7F7FC51E82AF333AF057AF06BF8A47CADC (void);
// 0x00000178 System.Type MetaMask.Models.BatchRequester/<>c::<BuildResponseTupleType>b__8_0(MetaMask.Models.BatchRequester/BatchedRequest)
extern void U3CU3Ec_U3CBuildResponseTupleTypeU3Eb__8_0_mFDB50A063042DE238D908D2248818E16D0327769 (void);
// 0x00000179 System.Boolean MetaMask.Models.BatchRequester/<>c::<Send>b__10_0(System.Reflection.MethodInfo)
extern void U3CU3Ec_U3CSendU3Eb__10_0_mF884DDA7D421890ED40C5D73FD9B5BA876E81556 (void);
// 0x0000017A System.Void MetaMask.Models.BatchRequester/<>c__DisplayClass6_0`1::.ctor()
// 0x0000017B System.Void MetaMask.Models.BatchRequester/<>c__DisplayClass6_0`1::<Request>b__0(System.Object)
// 0x0000017C System.Void MetaMask.Models.BatchRequester/<Send>d__10::MoveNext()
extern void U3CSendU3Ed__10_MoveNext_m474DAC6233B53554611E5D4970060614399E121F (void);
// 0x0000017D System.Void MetaMask.Models.BatchRequester/<Send>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendU3Ed__10_SetStateMachine_mA18200B6A89CAE2A13313058FFC7BAFAAFFD4B3E (void);
// 0x0000017E System.Void MetaMask.Models.ChainData::.ctor()
extern void ChainData__ctor_mC0758C1D44AF475C4509A768F82FF5F0705648B8 (void);
// 0x0000017F System.Object MetaMask.Models.ISerializerCallback::OnSerialize()
// 0x00000180 System.Void MetaMask.Models.KeyExchangeMessage::.ctor()
extern void KeyExchangeMessage__ctor_m88DDD3B077846CA0ACA67BA9A4BD6C2E1B491EA0 (void);
// 0x00000181 System.Void MetaMask.Models.KeyExchangeMessage::.ctor(System.String)
extern void KeyExchangeMessage__ctor_mCC488DA0360BCB49E3A8C824ADADCD58B3AC2FB3 (void);
// 0x00000182 System.Void MetaMask.Models.KeyExchangeMessage::.ctor(System.String,System.String)
extern void KeyExchangeMessage__ctor_m260D93F17323C2FE5053D976CF55F18F5B34F62D (void);
// 0x00000183 System.Void MetaMask.Models.MetaMaskDataMessage::.ctor()
extern void MetaMaskDataMessage__ctor_mB8A91DF8043DE63350D56FAA46F696AE8794D7DA (void);
// 0x00000184 System.Void MetaMask.Models.MetaMaskMessage::.ctor()
extern void MetaMaskMessage__ctor_m46BAFCE56FE96C106122521C1A2D09E86E48CCE4 (void);
// 0x00000185 System.Void MetaMask.Models.MetaMaskPing::.ctor()
extern void MetaMaskPing__ctor_mEED32CB14D035F829CF9A439AEC712CAAE55D120 (void);
// 0x00000186 System.Void MetaMask.Models.MetaMaskTypedDataMessage`1::.ctor()
// 0x00000187 System.Void MetaMask.Models.OtpAnswerMessage::.ctor()
extern void OtpAnswerMessage__ctor_mA3E1A57315193757DAA261DB01FA11679C125916 (void);
// 0x00000188 System.Void MetaMask.Models.TypedMessage::.ctor()
extern void TypedMessage__ctor_m943BECE8DD87F31A6217D0A965DF65E481D4F3F6 (void);
// 0x00000189 System.Void MetaMask.Models.MetaMaskMessage`1::.ctor()
// 0x0000018A System.Void MetaMask.Models.MetaMaskAnalyticsInfo::.ctor()
extern void MetaMaskAnalyticsInfo__ctor_mA4C36700B88E23D4FCF3D376F11068E310EBAC84 (void);
// 0x0000018B System.Void MetaMask.Models.MetaMaskEthereumRequest::.ctor()
extern void MetaMaskEthereumRequest__ctor_m37F23129326A5669550314E0440FCB80A5E92B22 (void);
// 0x0000018C System.Void MetaMask.Models.MetaMaskOriginatorInfo::.ctor()
extern void MetaMaskOriginatorInfo__ctor_mB8D09869CA7B3351B13DE0B9E75DE25F02413817 (void);
// 0x0000018D System.Void MetaMask.Models.MetaMaskRequestInfo::.ctor()
extern void MetaMaskRequestInfo__ctor_m3D97B08608BA8326D7B33377F5D785A7BC85DF5F (void);
// 0x0000018E System.Void MetaMask.Models.MetaMaskSubmittedRequest::.ctor()
extern void MetaMaskSubmittedRequest__ctor_m36510FBA7152C69B8B7E0189B4EFCCCB7B10CE29 (void);
// 0x0000018F System.Object MetaMask.Models.MetaMaskTransaction::OnSerialize()
extern void MetaMaskTransaction_OnSerialize_m49F3C689252CC2C391AFA104248CA64F816B82E9 (void);
// 0x00000190 System.Void MetaMask.Models.MetaMaskTransaction::.ctor()
extern void MetaMaskTransaction__ctor_m804274461D42536EE0F00E53DA6CFF59F0BA4654 (void);
// 0x00000191 System.String[] MetaMask.Models.ProviderState::get_Accounts()
extern void ProviderState_get_Accounts_m8997858D69DEE1E8F9136E03B1A7EE719FF7105B (void);
// 0x00000192 System.Void MetaMask.Models.ProviderState::set_Accounts(System.String[])
extern void ProviderState_set_Accounts_m1BD80BB558C87E0872A25921839EAA2B4C003B03 (void);
// 0x00000193 System.String MetaMask.Models.ProviderState::get_ChainId()
extern void ProviderState_get_ChainId_mFEDAC7770ABA17B8DED07E3AB4D26B8992173073 (void);
// 0x00000194 System.Void MetaMask.Models.ProviderState::set_ChainId(System.String)
extern void ProviderState_set_ChainId_m24533F567E84987C8E37D38EB0284C311B119002 (void);
// 0x00000195 System.Void MetaMask.Models.ProviderState::.ctor()
extern void ProviderState__ctor_mED564DD95E499AE6384C6421E755E66C4F7AE19E (void);
// 0x00000196 System.Void MetaMask.Logging.IMetaMaskLogger::Log(System.Object)
// 0x00000197 System.Void MetaMask.Logging.IMetaMaskLogger::LogWarning(System.Object)
// 0x00000198 System.Void MetaMask.Logging.IMetaMaskLogger::LogError(System.Object)
// 0x00000199 System.Void MetaMask.Logging.IMetaMaskLogger::LogException(System.Exception)
// 0x0000019A System.Void MetaMask.Logging.MetaMaskDebug::Log(System.Object)
extern void MetaMaskDebug_Log_m1247617BCEC7E01F25E383FEEC9392A3D635235D (void);
// 0x0000019B System.Void MetaMask.Logging.MetaMaskDebug::LogWarning(System.Object)
extern void MetaMaskDebug_LogWarning_m821F49F27B08D1DA3F700CD6293EAD266BCC94C8 (void);
// 0x0000019C System.Void MetaMask.Logging.MetaMaskDebug::LogError(System.Object)
extern void MetaMaskDebug_LogError_m2C1F76A55AD81E06BEF8712702A1D92349E54FFE (void);
// 0x0000019D System.Void MetaMask.Logging.MetaMaskDebug::LogException(System.Exception)
extern void MetaMaskDebug_LogException_m628BDEB03940853C8A700DBA8459B492B8C1AF71 (void);
// 0x0000019E System.String MetaMask.Cryptography.HexByteConvertorExtensions::ToHex(System.Byte[],System.Boolean)
extern void HexByteConvertorExtensions_ToHex_mB679B33C862C17E664E7EF900B8FC82C120F9A5A (void);
// 0x0000019F System.Boolean MetaMask.Cryptography.HexByteConvertorExtensions::HasHexPrefix(System.String)
extern void HexByteConvertorExtensions_HasHexPrefix_mE9FD302F402825889FE17DFBE80BBF578E92356D (void);
// 0x000001A0 System.Boolean MetaMask.Cryptography.HexByteConvertorExtensions::IsHex(System.String)
extern void HexByteConvertorExtensions_IsHex_mD449AD5A0D07AD0B303218D5A79DAA65E7F42A62 (void);
// 0x000001A1 System.String MetaMask.Cryptography.HexByteConvertorExtensions::RemoveHexPrefix(System.String)
extern void HexByteConvertorExtensions_RemoveHexPrefix_m251EC7005782D25808168BEB0C15F9BF9B7623C2 (void);
// 0x000001A2 System.Boolean MetaMask.Cryptography.HexByteConvertorExtensions::IsTheSameHex(System.String,System.String)
extern void HexByteConvertorExtensions_IsTheSameHex_mA9CAA4647BD582DE505ED83DEEAE41221CBA5F8E (void);
// 0x000001A3 System.String MetaMask.Cryptography.HexByteConvertorExtensions::EnsureHexPrefix(System.String)
extern void HexByteConvertorExtensions_EnsureHexPrefix_mE23E331E69ADCB6B864E2BB340906276DD04EF4D (void);
// 0x000001A4 System.String[] MetaMask.Cryptography.HexByteConvertorExtensions::EnsureHexPrefix(System.String[])
extern void HexByteConvertorExtensions_EnsureHexPrefix_m98D08735FBC6D69BBD329101FB39817B8084F137 (void);
// 0x000001A5 System.String MetaMask.Cryptography.HexByteConvertorExtensions::ToHexCompact(System.Byte[])
extern void HexByteConvertorExtensions_ToHexCompact_m80D518D51F835C977EDBC340EF069F5185FC7E74 (void);
// 0x000001A6 System.String MetaMask.Cryptography.HexByteConvertorExtensions::ToHexCompact(System.String)
extern void HexByteConvertorExtensions_ToHexCompact_m3E2445380C8CBCBEA84553908D781CCA0D6DFC97 (void);
// 0x000001A7 System.Byte[] MetaMask.Cryptography.HexByteConvertorExtensions::HexToByteArrayInternal(System.String)
extern void HexByteConvertorExtensions_HexToByteArrayInternal_m95669A648F95F468BFA17CB9C807E4564261F4C2 (void);
// 0x000001A8 System.Byte[] MetaMask.Cryptography.HexByteConvertorExtensions::HexToByteArray(System.String)
extern void HexByteConvertorExtensions_HexToByteArray_m30C93FA9860006CE3A213C8D79C43EDEAA70F2A0 (void);
// 0x000001A9 System.Byte MetaMask.Cryptography.HexByteConvertorExtensions::FromCharacterToByte(System.Char,System.Int32,System.Int32)
extern void HexByteConvertorExtensions_FromCharacterToByte_m16B4760BCC4CBFAE181D66D2640827372BFB54D7 (void);
// 0x000001AA System.Void MetaMask.Cryptography.HexByteConvertorExtensions::.cctor()
extern void HexByteConvertorExtensions__cctor_m55845859AFD29745899D82F4EA759610795917B1 (void);
// 0x000001AB System.Void MetaMask.Cryptography.HexByteConvertorExtensions/<>c::.cctor()
extern void U3CU3Ec__cctor_m1DC9983E2A315C52D8340F61A60CD9D271D93F8E (void);
// 0x000001AC System.Void MetaMask.Cryptography.HexByteConvertorExtensions/<>c::.ctor()
extern void U3CU3Ec__ctor_mABE70BEC41F15C29A6EC56E717487BDA8F559681 (void);
// 0x000001AD System.String MetaMask.Cryptography.HexByteConvertorExtensions/<>c::<ToHex>b__1_0(System.Byte)
extern void U3CU3Ec_U3CToHexU3Eb__1_0_m4108DBD5461E4AF9C53EEE68195FA02E723D01F8 (void);
// 0x000001AE System.String MetaMask.Cryptography.IEciesProvider::GeneratePrivateKey()
// 0x000001AF System.String MetaMask.Cryptography.IEciesProvider::GetPublicKey(System.String)
// 0x000001B0 System.String MetaMask.Cryptography.IEciesProvider::Encrypt(System.String,System.String)
// 0x000001B1 System.String MetaMask.Cryptography.IEciesProvider::Decrypt(System.String,System.String)
// 0x000001B2 System.Threading.Tasks.Task`1<MetaMask.Contracts.ERC1155> MetaMask.Contracts.ERC1155::DeployNew(System.String)
// 0x000001B3 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC1155::BalanceOf(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x000001B4 System.Threading.Tasks.Task`1<System.Numerics.BigInteger[]> MetaMask.Contracts.ERC1155::BalanceOfBatch(evm.net.Models.EvmAddress[],System.Numerics.BigInteger[])
// 0x000001B5 System.Threading.Tasks.Task`1<System.Boolean> MetaMask.Contracts.ERC1155::IsApprovedForAll(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress)
// 0x000001B6 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC1155::SafeBatchTransferFrom(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress,System.Numerics.BigInteger[],System.Numerics.BigInteger[],System.Byte[])
// 0x000001B7 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC1155::SafeTransferFrom(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Byte[])
// 0x000001B8 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC1155::SetApprovalForAll(evm.net.Models.EvmAddress,System.Boolean)
// 0x000001B9 System.Threading.Tasks.Task`1<System.Boolean> MetaMask.Contracts.ERC1155::SupportsInterface(System.Byte[])
// 0x000001BA System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC1155::Uri(System.Numerics.BigInteger)
// 0x000001BB System.Void MetaMask.Contracts.ERC1155Backing::.ctor(evm.net.IProvider,evm.net.Models.EvmAddress,System.Type)
extern void ERC1155Backing__ctor_m735EC650F9D23D9C2D7A66913223B4E54219C10C (void);
// 0x000001BC System.Threading.Tasks.Task`1<MetaMask.Contracts.ERC1155> MetaMask.Contracts.ERC1155Backing::DeployNew(System.String)
extern void ERC1155Backing_DeployNew_mAACF65964628E46E6DB0AD0329C29A7773CAEC4C (void);
// 0x000001BD System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC1155Backing::BalanceOf(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC1155Backing_BalanceOf_mD1BCDD6419CFD0F7188896CA1926C9245C441D91 (void);
// 0x000001BE System.Threading.Tasks.Task`1<System.Numerics.BigInteger[]> MetaMask.Contracts.ERC1155Backing::BalanceOfBatch(evm.net.Models.EvmAddress[],System.Numerics.BigInteger[])
extern void ERC1155Backing_BalanceOfBatch_m45FD8C5382634261EFE6CF3B10D0FFD3560E130C (void);
// 0x000001BF System.Threading.Tasks.Task`1<System.Boolean> MetaMask.Contracts.ERC1155Backing::IsApprovedForAll(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress)
extern void ERC1155Backing_IsApprovedForAll_m64A29156AABEABFC05FB69A14D465605B413EE56 (void);
// 0x000001C0 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC1155Backing::SafeBatchTransferFrom(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress,System.Numerics.BigInteger[],System.Numerics.BigInteger[],System.Byte[])
extern void ERC1155Backing_SafeBatchTransferFrom_m8C075EEB4FDAEAACCB60CFF375BABC1C35EBD44F (void);
// 0x000001C1 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC1155Backing::SafeTransferFrom(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress,System.Numerics.BigInteger,System.Numerics.BigInteger,System.Byte[])
extern void ERC1155Backing_SafeTransferFrom_mB8C7EEE7E2F726F3A678E527B696208CF439EB72 (void);
// 0x000001C2 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC1155Backing::SetApprovalForAll(evm.net.Models.EvmAddress,System.Boolean)
extern void ERC1155Backing_SetApprovalForAll_mA7482EF44CF96ED494541D696F4130946B4A05CA (void);
// 0x000001C3 System.Threading.Tasks.Task`1<System.Boolean> MetaMask.Contracts.ERC1155Backing::SupportsInterface(System.Byte[])
extern void ERC1155Backing_SupportsInterface_m9FEB2F7197BC9AF90F55CC62A31342D8990F63BB (void);
// 0x000001C4 System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC1155Backing::Uri(System.Numerics.BigInteger)
extern void ERC1155Backing_Uri_m93B410B4419D5C02D8F6740DA86F91E76EA0B114 (void);
// 0x000001C5 System.Threading.Tasks.Task`1<MetaMask.Contracts.ERC20> MetaMask.Contracts.ERC20::DeployNew(System.String,System.String)
// 0x000001C6 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20::Allowance(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress)
// 0x000001C7 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20::Approve(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x000001C8 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20::BalanceOf(evm.net.Models.EvmAddress)
// 0x000001C9 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20::Decimals()
// 0x000001CA System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20::DecreaseAllowance(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x000001CB System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20::IncreaseAllowance(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x000001CC System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC20::Name()
// 0x000001CD System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC20::Symbol()
// 0x000001CE System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20::TotalSupply()
// 0x000001CF System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20::Transfer(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x000001D0 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20::TransferFrom(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x000001D1 System.Void MetaMask.Contracts.ERC20Backing::.ctor(evm.net.IProvider,evm.net.Models.EvmAddress,System.Type)
extern void ERC20Backing__ctor_m482B1238ABB62660A39533D58A2AFD40B51EA4FF (void);
// 0x000001D2 System.Threading.Tasks.Task`1<MetaMask.Contracts.ERC20> MetaMask.Contracts.ERC20Backing::DeployNew(System.String,System.String)
extern void ERC20Backing_DeployNew_m0C0DA41D0545A62EDC8114E27B6339D05126ED10 (void);
// 0x000001D3 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20Backing::Allowance(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress)
extern void ERC20Backing_Allowance_m27F61360021780EE7D5C6A1CE3939A483F167033 (void);
// 0x000001D4 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20Backing::Approve(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC20Backing_Approve_mB4C186DE7ABFD529294324B4A7D270C82EECD189 (void);
// 0x000001D5 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20Backing::BalanceOf(evm.net.Models.EvmAddress)
extern void ERC20Backing_BalanceOf_m2C3885CA0367D3BFFB2643D4022E866453A5A2BE (void);
// 0x000001D6 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20Backing::Decimals()
extern void ERC20Backing_Decimals_mB0AA8D7CEEAFABB4009BB592DECDFD286FA9A95B (void);
// 0x000001D7 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20Backing::DecreaseAllowance(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC20Backing_DecreaseAllowance_m8D8153D11D7872348E29B24D7F6A99F3A6BC0D38 (void);
// 0x000001D8 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20Backing::IncreaseAllowance(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC20Backing_IncreaseAllowance_mE73CE6EE2224BF9FC3FDB822A226B84F5FBFA800 (void);
// 0x000001D9 System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC20Backing::Name()
extern void ERC20Backing_Name_mEFD3B540A4CD1CD8996D82813717CA244DA52418 (void);
// 0x000001DA System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC20Backing::Symbol()
extern void ERC20Backing_Symbol_mC6CD3A22AE953BE35563D8E916AF9825314A105F (void);
// 0x000001DB System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20Backing::TotalSupply()
extern void ERC20Backing_TotalSupply_mDF6B82786FD8AAC4E9010443E017EB01F819BE6B (void);
// 0x000001DC System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20Backing::Transfer(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC20Backing_Transfer_m442BD2F80BD0CB66700AB75833F151DE480F2860 (void);
// 0x000001DD System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20Backing::TransferFrom(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC20Backing_TransferFrom_m6B3822FF51DF0CF08009F15E3446D00C8830992E (void);
// 0x000001DE System.Threading.Tasks.Task`1<MetaMask.Contracts.ERC20PresetFixedSupply> MetaMask.Contracts.ERC20PresetFixedSupply::DeployNew(System.String,System.String,System.Numerics.BigInteger,evm.net.Models.EvmAddress)
// 0x000001DF System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20PresetFixedSupply::Allowance(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress)
// 0x000001E0 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetFixedSupply::Approve(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x000001E1 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20PresetFixedSupply::BalanceOf(evm.net.Models.EvmAddress)
// 0x000001E2 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetFixedSupply::Burn(System.Numerics.BigInteger)
// 0x000001E3 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetFixedSupply::BurnFrom(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x000001E4 System.Threading.Tasks.Task`1<System.UInt16> MetaMask.Contracts.ERC20PresetFixedSupply::Decimals()
// 0x000001E5 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetFixedSupply::DecreaseAllowance(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x000001E6 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetFixedSupply::IncreaseAllowance(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x000001E7 System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC20PresetFixedSupply::Name()
// 0x000001E8 System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC20PresetFixedSupply::Symbol()
// 0x000001E9 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20PresetFixedSupply::TotalSupply()
// 0x000001EA System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetFixedSupply::Transfer(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x000001EB System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetFixedSupply::TransferFrom(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x000001EC System.Void MetaMask.Contracts.ERC20PresetFixedSupplyBacking::.ctor(evm.net.IProvider,evm.net.Models.EvmAddress,System.Type)
extern void ERC20PresetFixedSupplyBacking__ctor_mC2CDEDFBCB7E7C3B4A76B26A6D9B098C7A1FAC7C (void);
// 0x000001ED System.Threading.Tasks.Task`1<MetaMask.Contracts.ERC20PresetFixedSupply> MetaMask.Contracts.ERC20PresetFixedSupplyBacking::DeployNew(System.String,System.String,System.Numerics.BigInteger,evm.net.Models.EvmAddress)
extern void ERC20PresetFixedSupplyBacking_DeployNew_m316B1915526A50DD4CB50FE66270B227CF34D329 (void);
// 0x000001EE System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20PresetFixedSupplyBacking::Allowance(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress)
extern void ERC20PresetFixedSupplyBacking_Allowance_mC002A90342CF9815F2FA8211F58497BDA1C7B5A4 (void);
// 0x000001EF System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetFixedSupplyBacking::Approve(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC20PresetFixedSupplyBacking_Approve_mD2EFCA14F34774FE4DDB6ECC98EF7A8D3F5ACD39 (void);
// 0x000001F0 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20PresetFixedSupplyBacking::BalanceOf(evm.net.Models.EvmAddress)
extern void ERC20PresetFixedSupplyBacking_BalanceOf_m2B025A974FB562AFB65B3212F67DE859DE788B29 (void);
// 0x000001F1 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetFixedSupplyBacking::Burn(System.Numerics.BigInteger)
extern void ERC20PresetFixedSupplyBacking_Burn_mAC7FF19B1D37A7EE02495F37C292F77EE671EDC5 (void);
// 0x000001F2 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetFixedSupplyBacking::BurnFrom(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC20PresetFixedSupplyBacking_BurnFrom_mE1DDD95E688BDAB24A60CD51EE9DF33DD0176963 (void);
// 0x000001F3 System.Threading.Tasks.Task`1<System.UInt16> MetaMask.Contracts.ERC20PresetFixedSupplyBacking::Decimals()
extern void ERC20PresetFixedSupplyBacking_Decimals_m4A02BBEA982E7F47B949189BD34C0C11C5A8FF71 (void);
// 0x000001F4 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetFixedSupplyBacking::DecreaseAllowance(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC20PresetFixedSupplyBacking_DecreaseAllowance_m8535522A2A008508D0A683E4E5EB853E08C5A906 (void);
// 0x000001F5 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetFixedSupplyBacking::IncreaseAllowance(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC20PresetFixedSupplyBacking_IncreaseAllowance_m773B8A16AC5D72767B64E99266376455F5862772 (void);
// 0x000001F6 System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC20PresetFixedSupplyBacking::Name()
extern void ERC20PresetFixedSupplyBacking_Name_m9408BFB9B3768385F7D7DDC152187841EDE1A4CC (void);
// 0x000001F7 System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC20PresetFixedSupplyBacking::Symbol()
extern void ERC20PresetFixedSupplyBacking_Symbol_m6E6D71427BEDF1065B014DDAB1FC0972D5BA2C7E (void);
// 0x000001F8 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20PresetFixedSupplyBacking::TotalSupply()
extern void ERC20PresetFixedSupplyBacking_TotalSupply_mF448BB994160E6689F9E91C7F9B8EB1489268B34 (void);
// 0x000001F9 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetFixedSupplyBacking::Transfer(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC20PresetFixedSupplyBacking_Transfer_m4FA4AC5193930E9B4642C027437C9F7968F6A38F (void);
// 0x000001FA System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetFixedSupplyBacking::TransferFrom(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC20PresetFixedSupplyBacking_TransferFrom_mBD96DE5948605A3C6B2CCAC3B1D1F62AE0869058 (void);
// 0x000001FB System.Threading.Tasks.Task`1<MetaMask.Contracts.ERC20PresetMinterPauser> MetaMask.Contracts.ERC20PresetMinterPauser::DeployNew(System.String,System.String)
// 0x000001FC System.Threading.Tasks.Task`1<evm.net.Models.HexString> MetaMask.Contracts.ERC20PresetMinterPauser::DEFAULT_ADMIN_ROLE()
// 0x000001FD System.Threading.Tasks.Task`1<evm.net.Models.HexString> MetaMask.Contracts.ERC20PresetMinterPauser::MINTER_ROLE()
// 0x000001FE System.Threading.Tasks.Task`1<evm.net.Models.HexString> MetaMask.Contracts.ERC20PresetMinterPauser::PAUSER_ROLE()
// 0x000001FF System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20PresetMinterPauser::Allowance(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress)
// 0x00000200 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauser::Approve(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x00000201 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20PresetMinterPauser::BalanceOf(evm.net.Models.EvmAddress)
// 0x00000202 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauser::Burn(System.Numerics.BigInteger)
// 0x00000203 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauser::BurnFrom(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x00000204 System.Threading.Tasks.Task`1<System.UInt16> MetaMask.Contracts.ERC20PresetMinterPauser::Decimals()
// 0x00000205 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauser::DecreaseAllowance(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x00000206 System.Threading.Tasks.Task`1<evm.net.Models.HexString> MetaMask.Contracts.ERC20PresetMinterPauser::GetRoleAdmin(evm.net.Models.HexString)
// 0x00000207 System.Threading.Tasks.Task`1<evm.net.Models.EvmAddress> MetaMask.Contracts.ERC20PresetMinterPauser::GetRoleMember(evm.net.Models.HexString,System.Numerics.BigInteger)
// 0x00000208 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20PresetMinterPauser::GetRoleMemberCount(evm.net.Models.HexString)
// 0x00000209 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauser::GrantRole(evm.net.Models.HexString,evm.net.Models.EvmAddress)
// 0x0000020A System.Threading.Tasks.Task`1<System.Boolean> MetaMask.Contracts.ERC20PresetMinterPauser::HasRole(evm.net.Models.HexString,evm.net.Models.EvmAddress)
// 0x0000020B System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauser::IncreaseAllowance(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x0000020C System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauser::Mint(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x0000020D System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC20PresetMinterPauser::Name()
// 0x0000020E System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauser::Pause()
// 0x0000020F System.Threading.Tasks.Task`1<System.Boolean> MetaMask.Contracts.ERC20PresetMinterPauser::Paused()
// 0x00000210 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauser::RenounceRole(evm.net.Models.HexString,evm.net.Models.EvmAddress)
// 0x00000211 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauser::RevokeRole(evm.net.Models.HexString,evm.net.Models.EvmAddress)
// 0x00000212 System.Threading.Tasks.Task`1<System.Boolean> MetaMask.Contracts.ERC20PresetMinterPauser::SupportsInterface(System.Byte[])
// 0x00000213 System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC20PresetMinterPauser::Symbol()
// 0x00000214 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20PresetMinterPauser::TotalSupply()
// 0x00000215 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauser::Transfer(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x00000216 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauser::TransferFrom(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x00000217 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauser::Unpause()
// 0x00000218 System.Void MetaMask.Contracts.ERC20PresetMinterPauserBacking::.ctor(evm.net.IProvider,evm.net.Models.EvmAddress,System.Type)
extern void ERC20PresetMinterPauserBacking__ctor_m15AA5DACFF9543693D3393CB63049BDAB9A0E916 (void);
// 0x00000219 System.Threading.Tasks.Task`1<MetaMask.Contracts.ERC20PresetMinterPauser> MetaMask.Contracts.ERC20PresetMinterPauserBacking::DeployNew(System.String,System.String)
extern void ERC20PresetMinterPauserBacking_DeployNew_m8DDA22A562006AAEC5CB5BBDE43B467E536097FC (void);
// 0x0000021A System.Threading.Tasks.Task`1<evm.net.Models.HexString> MetaMask.Contracts.ERC20PresetMinterPauserBacking::DEFAULT_ADMIN_ROLE()
extern void ERC20PresetMinterPauserBacking_DEFAULT_ADMIN_ROLE_mDEA1F67CBA7C3918442881EAAA3D1155D0A039A3 (void);
// 0x0000021B System.Threading.Tasks.Task`1<evm.net.Models.HexString> MetaMask.Contracts.ERC20PresetMinterPauserBacking::MINTER_ROLE()
extern void ERC20PresetMinterPauserBacking_MINTER_ROLE_m59213C7304A6B29E87113A9FF45D6F9EA07894C3 (void);
// 0x0000021C System.Threading.Tasks.Task`1<evm.net.Models.HexString> MetaMask.Contracts.ERC20PresetMinterPauserBacking::PAUSER_ROLE()
extern void ERC20PresetMinterPauserBacking_PAUSER_ROLE_m5C8EF26FDC7901E621D425337E84B25BCACB85AE (void);
// 0x0000021D System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20PresetMinterPauserBacking::Allowance(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress)
extern void ERC20PresetMinterPauserBacking_Allowance_mAD21FF05FACD418A75A9538AC59482EFD73B2900 (void);
// 0x0000021E System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauserBacking::Approve(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC20PresetMinterPauserBacking_Approve_m417DE0FCA10E875D51937066416B34DD18A7F447 (void);
// 0x0000021F System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20PresetMinterPauserBacking::BalanceOf(evm.net.Models.EvmAddress)
extern void ERC20PresetMinterPauserBacking_BalanceOf_m0646C552694CBD4D24E8503AAA27E9D18BC02C74 (void);
// 0x00000220 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauserBacking::Burn(System.Numerics.BigInteger)
extern void ERC20PresetMinterPauserBacking_Burn_mCF1EA920B58946E1784650FDCE73C25AEED2E922 (void);
// 0x00000221 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauserBacking::BurnFrom(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC20PresetMinterPauserBacking_BurnFrom_m5004CF01A810E09E098801A861BFD4065ACCBE85 (void);
// 0x00000222 System.Threading.Tasks.Task`1<System.UInt16> MetaMask.Contracts.ERC20PresetMinterPauserBacking::Decimals()
extern void ERC20PresetMinterPauserBacking_Decimals_m2D369DFCC626AF926237E1DEDD95B89EC2EA9EB5 (void);
// 0x00000223 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauserBacking::DecreaseAllowance(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC20PresetMinterPauserBacking_DecreaseAllowance_mDF84DBAA40D103F3981F0E80E2B6B88E4CB7E94F (void);
// 0x00000224 System.Threading.Tasks.Task`1<evm.net.Models.HexString> MetaMask.Contracts.ERC20PresetMinterPauserBacking::GetRoleAdmin(evm.net.Models.HexString)
extern void ERC20PresetMinterPauserBacking_GetRoleAdmin_mD59084B05A9B15B795616829774CFB9672E56F39 (void);
// 0x00000225 System.Threading.Tasks.Task`1<evm.net.Models.EvmAddress> MetaMask.Contracts.ERC20PresetMinterPauserBacking::GetRoleMember(evm.net.Models.HexString,System.Numerics.BigInteger)
extern void ERC20PresetMinterPauserBacking_GetRoleMember_mCE7852614CAE2913CE06008F508F55FF3CE364A4 (void);
// 0x00000226 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20PresetMinterPauserBacking::GetRoleMemberCount(evm.net.Models.HexString)
extern void ERC20PresetMinterPauserBacking_GetRoleMemberCount_mEE2A033B77DFBB55FECE5C8E1B0AA550AD753576 (void);
// 0x00000227 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauserBacking::GrantRole(evm.net.Models.HexString,evm.net.Models.EvmAddress)
extern void ERC20PresetMinterPauserBacking_GrantRole_mED474347CE64AF10FEA1A58610811C3DF6584AFE (void);
// 0x00000228 System.Threading.Tasks.Task`1<System.Boolean> MetaMask.Contracts.ERC20PresetMinterPauserBacking::HasRole(evm.net.Models.HexString,evm.net.Models.EvmAddress)
extern void ERC20PresetMinterPauserBacking_HasRole_mF39C64F0E6F27919942BC58972144BF1CB1382AA (void);
// 0x00000229 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauserBacking::IncreaseAllowance(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC20PresetMinterPauserBacking_IncreaseAllowance_mC985FF01702222E688832849D4056A3D4F1D07DB (void);
// 0x0000022A System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauserBacking::Mint(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC20PresetMinterPauserBacking_Mint_mA7683E154C34FD93B6B8D90E1F8560E8C58ED5FA (void);
// 0x0000022B System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC20PresetMinterPauserBacking::Name()
extern void ERC20PresetMinterPauserBacking_Name_m7D0A106D68F9D519059E89F13FDC705D6133D857 (void);
// 0x0000022C System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauserBacking::Pause()
extern void ERC20PresetMinterPauserBacking_Pause_m0F00DEA5B5A7DF906CED730582E440CAB4F4EDB9 (void);
// 0x0000022D System.Threading.Tasks.Task`1<System.Boolean> MetaMask.Contracts.ERC20PresetMinterPauserBacking::Paused()
extern void ERC20PresetMinterPauserBacking_Paused_m109EE24FA1CD0792BC5F9E4FE8FA8265E16F3DD2 (void);
// 0x0000022E System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauserBacking::RenounceRole(evm.net.Models.HexString,evm.net.Models.EvmAddress)
extern void ERC20PresetMinterPauserBacking_RenounceRole_mE6458D9935BFCC5600E985449A4935EFAEFD66A1 (void);
// 0x0000022F System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauserBacking::RevokeRole(evm.net.Models.HexString,evm.net.Models.EvmAddress)
extern void ERC20PresetMinterPauserBacking_RevokeRole_mC553B0B464B2CE4487B88F22CD6F69D06B12F104 (void);
// 0x00000230 System.Threading.Tasks.Task`1<System.Boolean> MetaMask.Contracts.ERC20PresetMinterPauserBacking::SupportsInterface(System.Byte[])
extern void ERC20PresetMinterPauserBacking_SupportsInterface_mEDBFCEDC61483645F394153BCBEF19C55B899C34 (void);
// 0x00000231 System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC20PresetMinterPauserBacking::Symbol()
extern void ERC20PresetMinterPauserBacking_Symbol_m9F3CBF3020F37ECD0081604303041B8DCD676C79 (void);
// 0x00000232 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC20PresetMinterPauserBacking::TotalSupply()
extern void ERC20PresetMinterPauserBacking_TotalSupply_m49FF78E8D0625F3BF23B3839EFDF871EEE65CAC0 (void);
// 0x00000233 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauserBacking::Transfer(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC20PresetMinterPauserBacking_Transfer_m0AE975AD78A961E9695B9AEBBB5659824FB84DA6 (void);
// 0x00000234 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauserBacking::TransferFrom(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC20PresetMinterPauserBacking_TransferFrom_mAB553953A748113697DF722F4B62518769C222AB (void);
// 0x00000235 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC20PresetMinterPauserBacking::Unpause()
extern void ERC20PresetMinterPauserBacking_Unpause_mC633CD153EAE93509917830E4F7833794C6F9953 (void);
// 0x00000236 System.Threading.Tasks.Task`1<MetaMask.Contracts.ERC721> MetaMask.Contracts.ERC721::DeployNew(System.String,System.String)
// 0x00000237 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721::Approve(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x00000238 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC721::BalanceOf(evm.net.Models.EvmAddress)
// 0x00000239 System.Threading.Tasks.Task`1<evm.net.Models.EvmAddress> MetaMask.Contracts.ERC721::GetApproved(System.Numerics.BigInteger)
// 0x0000023A System.Threading.Tasks.Task`1<System.Boolean> MetaMask.Contracts.ERC721::IsApprovedForAll(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress)
// 0x0000023B System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC721::Name()
// 0x0000023C System.Threading.Tasks.Task`1<evm.net.Models.EvmAddress> MetaMask.Contracts.ERC721::OwnerOf(System.Numerics.BigInteger)
// 0x0000023D System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721::SafeTransferFrom(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x0000023E System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721::SafeTransferFrom(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress,System.Numerics.BigInteger,System.Byte[])
// 0x0000023F System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721::SetApprovalForAll(evm.net.Models.EvmAddress,System.Boolean)
// 0x00000240 System.Threading.Tasks.Task`1<System.Boolean> MetaMask.Contracts.ERC721::SupportsInterface(System.Byte[])
// 0x00000241 System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC721::Symbol()
// 0x00000242 System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC721::TokenURI(System.Numerics.BigInteger)
// 0x00000243 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721::TransferFrom(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x00000244 System.Void MetaMask.Contracts.ERC721Backing::.ctor(evm.net.IProvider,evm.net.Models.EvmAddress,System.Type)
extern void ERC721Backing__ctor_m848D85F4FFE85CC3B8431DA35C287D674C0E028C (void);
// 0x00000245 System.Threading.Tasks.Task`1<MetaMask.Contracts.ERC721> MetaMask.Contracts.ERC721Backing::DeployNew(System.String,System.String)
extern void ERC721Backing_DeployNew_m9F02BEC48DE95D1A8D385179F2D5A60448C5482B (void);
// 0x00000246 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721Backing::Approve(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC721Backing_Approve_mDBA6702E2A5346EA5477778770014897D0D392B6 (void);
// 0x00000247 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC721Backing::BalanceOf(evm.net.Models.EvmAddress)
extern void ERC721Backing_BalanceOf_m7AA1BCA099AB2C395BBF9BBEBAB3C71CADA7D256 (void);
// 0x00000248 System.Threading.Tasks.Task`1<evm.net.Models.EvmAddress> MetaMask.Contracts.ERC721Backing::GetApproved(System.Numerics.BigInteger)
extern void ERC721Backing_GetApproved_m801341715C31A748EE9279170D313BCB69A2CEC1 (void);
// 0x00000249 System.Threading.Tasks.Task`1<System.Boolean> MetaMask.Contracts.ERC721Backing::IsApprovedForAll(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress)
extern void ERC721Backing_IsApprovedForAll_m6E51D0C149149E77DB0156A9090B0B8E829CE534 (void);
// 0x0000024A System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC721Backing::Name()
extern void ERC721Backing_Name_mD7D3131005BB2F9D8037C53088813BE462415284 (void);
// 0x0000024B System.Threading.Tasks.Task`1<evm.net.Models.EvmAddress> MetaMask.Contracts.ERC721Backing::OwnerOf(System.Numerics.BigInteger)
extern void ERC721Backing_OwnerOf_mB8445470636FE0774A144CB11AF8EBBF55EFFEBF (void);
// 0x0000024C System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721Backing::SafeTransferFrom(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC721Backing_SafeTransferFrom_m0ED63CF136CF17F33FF06A0019ED90E99E0FBA84 (void);
// 0x0000024D System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721Backing::SafeTransferFrom(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress,System.Numerics.BigInteger,System.Byte[])
extern void ERC721Backing_SafeTransferFrom_mB314CC032A268D7B4C71DC3B2073FA2134544086 (void);
// 0x0000024E System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721Backing::SetApprovalForAll(evm.net.Models.EvmAddress,System.Boolean)
extern void ERC721Backing_SetApprovalForAll_mE5F20A590EB1C2B91F8BA3C2735ECF7D8C917202 (void);
// 0x0000024F System.Threading.Tasks.Task`1<System.Boolean> MetaMask.Contracts.ERC721Backing::SupportsInterface(System.Byte[])
extern void ERC721Backing_SupportsInterface_mCA394D4B0B02B68C3CFD635DD280A2EE499A889B (void);
// 0x00000250 System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC721Backing::Symbol()
extern void ERC721Backing_Symbol_m28B52EE381277B52C9229B6CFC72E22D1920DA87 (void);
// 0x00000251 System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC721Backing::TokenURI(System.Numerics.BigInteger)
extern void ERC721Backing_TokenURI_mED011FAF446D6BE617851F5C69073E622BFE0222 (void);
// 0x00000252 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721Backing::TransferFrom(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC721Backing_TransferFrom_m4728F56F876E16491EA3829EE0D9775AF2F6C095 (void);
// 0x00000253 System.Threading.Tasks.Task`1<MetaMask.Contracts.ERC721PresetMinterPauserAutoId> MetaMask.Contracts.ERC721PresetMinterPauserAutoId::DeployNew(System.String,System.String,System.String)
// 0x00000254 System.Threading.Tasks.Task`1<evm.net.Models.HexString> MetaMask.Contracts.ERC721PresetMinterPauserAutoId::DEFAULT_ADMIN_ROLE()
// 0x00000255 System.Threading.Tasks.Task`1<evm.net.Models.HexString> MetaMask.Contracts.ERC721PresetMinterPauserAutoId::MINTER_ROLE()
// 0x00000256 System.Threading.Tasks.Task`1<evm.net.Models.HexString> MetaMask.Contracts.ERC721PresetMinterPauserAutoId::PAUSER_ROLE()
// 0x00000257 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721PresetMinterPauserAutoId::Burn(System.Numerics.BigInteger)
// 0x00000258 System.Threading.Tasks.Task`1<evm.net.Models.HexString> MetaMask.Contracts.ERC721PresetMinterPauserAutoId::GetRoleAdmin(evm.net.Models.HexString)
// 0x00000259 System.Threading.Tasks.Task`1<evm.net.Models.EvmAddress> MetaMask.Contracts.ERC721PresetMinterPauserAutoId::GetRoleMember(evm.net.Models.HexString,System.Numerics.BigInteger)
// 0x0000025A System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC721PresetMinterPauserAutoId::GetRoleMemberCount(evm.net.Models.HexString)
// 0x0000025B System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721PresetMinterPauserAutoId::GrantRole(evm.net.Models.HexString,evm.net.Models.EvmAddress)
// 0x0000025C System.Threading.Tasks.Task`1<System.Boolean> MetaMask.Contracts.ERC721PresetMinterPauserAutoId::HasRole(evm.net.Models.HexString,evm.net.Models.EvmAddress)
// 0x0000025D System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721PresetMinterPauserAutoId::Mint(evm.net.Models.EvmAddress)
// 0x0000025E System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721PresetMinterPauserAutoId::Pause()
// 0x0000025F System.Threading.Tasks.Task`1<System.Boolean> MetaMask.Contracts.ERC721PresetMinterPauserAutoId::Paused()
// 0x00000260 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721PresetMinterPauserAutoId::RenounceRole(evm.net.Models.HexString,evm.net.Models.EvmAddress)
// 0x00000261 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721PresetMinterPauserAutoId::RevokeRole(evm.net.Models.HexString,evm.net.Models.EvmAddress)
// 0x00000262 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC721PresetMinterPauserAutoId::TokenByIndex(System.Numerics.BigInteger)
// 0x00000263 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC721PresetMinterPauserAutoId::TokenOfOwnerByIndex(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
// 0x00000264 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC721PresetMinterPauserAutoId::TotalSupply()
// 0x00000265 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721PresetMinterPauserAutoId::Unpause()
// 0x00000266 System.Void MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::.ctor(evm.net.IProvider,evm.net.Models.EvmAddress,System.Type)
extern void ERC721PresetMinterPauserAutoIdBacking__ctor_mA455FF1C6B7DF003BEFD3A04927D6CD0DC2A6A04 (void);
// 0x00000267 System.Threading.Tasks.Task`1<MetaMask.Contracts.ERC721PresetMinterPauserAutoId> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::DeployNew(System.String,System.String,System.String)
extern void ERC721PresetMinterPauserAutoIdBacking_DeployNew_m512F0F645008448E5F25E647C15FB17A9CF4E79A (void);
// 0x00000268 System.Threading.Tasks.Task`1<evm.net.Models.HexString> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::DEFAULT_ADMIN_ROLE()
extern void ERC721PresetMinterPauserAutoIdBacking_DEFAULT_ADMIN_ROLE_m0ADAFBCC3FE0840997846A870C4B81CA08A64DEA (void);
// 0x00000269 System.Threading.Tasks.Task`1<evm.net.Models.HexString> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::MINTER_ROLE()
extern void ERC721PresetMinterPauserAutoIdBacking_MINTER_ROLE_m523D176AD9E582882A3F20ABB4E0CAE89ADDE25D (void);
// 0x0000026A System.Threading.Tasks.Task`1<evm.net.Models.HexString> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::PAUSER_ROLE()
extern void ERC721PresetMinterPauserAutoIdBacking_PAUSER_ROLE_mCED4E8A11DBC566FB140953861007669D4AA1830 (void);
// 0x0000026B System.Threading.Tasks.Task`1<MetaMask.Contracts.ERC721> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::DeployNew(System.String,System.String)
extern void ERC721PresetMinterPauserAutoIdBacking_DeployNew_m64F0EEC53DED430D0DA8EBCA240B78E458B8ED3D (void);
// 0x0000026C System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::Approve(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC721PresetMinterPauserAutoIdBacking_Approve_m828911E0538187C625366AE04CAB7F745F3CFC10 (void);
// 0x0000026D System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::BalanceOf(evm.net.Models.EvmAddress)
extern void ERC721PresetMinterPauserAutoIdBacking_BalanceOf_mB742DAD16ED85A6751E8A1F0A003D603048A2185 (void);
// 0x0000026E System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::Burn(System.Numerics.BigInteger)
extern void ERC721PresetMinterPauserAutoIdBacking_Burn_mFF27E3B4897CCCF2F4EE1EE1072665F7576DEF1F (void);
// 0x0000026F System.Threading.Tasks.Task`1<evm.net.Models.EvmAddress> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::GetApproved(System.Numerics.BigInteger)
extern void ERC721PresetMinterPauserAutoIdBacking_GetApproved_m990728148EA46B920D193FB9CB45837079B2B636 (void);
// 0x00000270 System.Threading.Tasks.Task`1<evm.net.Models.HexString> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::GetRoleAdmin(evm.net.Models.HexString)
extern void ERC721PresetMinterPauserAutoIdBacking_GetRoleAdmin_mE95DBD62685F7F7C674C17AB6D74CAE247951A3F (void);
// 0x00000271 System.Threading.Tasks.Task`1<evm.net.Models.EvmAddress> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::GetRoleMember(evm.net.Models.HexString,System.Numerics.BigInteger)
extern void ERC721PresetMinterPauserAutoIdBacking_GetRoleMember_mA454A1386BB9517632A272FCCFCFEEC44F89EDC6 (void);
// 0x00000272 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::GetRoleMemberCount(evm.net.Models.HexString)
extern void ERC721PresetMinterPauserAutoIdBacking_GetRoleMemberCount_m0D6C029BF4F1E738766A650A13791FD0B1CE5152 (void);
// 0x00000273 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::GrantRole(evm.net.Models.HexString,evm.net.Models.EvmAddress)
extern void ERC721PresetMinterPauserAutoIdBacking_GrantRole_m109FBEADCECF5C0FF72804C2A01733E1C597647F (void);
// 0x00000274 System.Threading.Tasks.Task`1<System.Boolean> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::HasRole(evm.net.Models.HexString,evm.net.Models.EvmAddress)
extern void ERC721PresetMinterPauserAutoIdBacking_HasRole_m67056AAEF792C1103F4B3E284C5EE56C12F26849 (void);
// 0x00000275 System.Threading.Tasks.Task`1<System.Boolean> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::IsApprovedForAll(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress)
extern void ERC721PresetMinterPauserAutoIdBacking_IsApprovedForAll_m9DF1327119CCE081459DE7AD6431361C6B24B1A6 (void);
// 0x00000276 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::Mint(evm.net.Models.EvmAddress)
extern void ERC721PresetMinterPauserAutoIdBacking_Mint_m89E0CB2819ABFB216CE233B5C46F37D2267560A4 (void);
// 0x00000277 System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::Name()
extern void ERC721PresetMinterPauserAutoIdBacking_Name_m4E3FE56B3177D7DC67F39E78BFE36579E533DC82 (void);
// 0x00000278 System.Threading.Tasks.Task`1<evm.net.Models.EvmAddress> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::OwnerOf(System.Numerics.BigInteger)
extern void ERC721PresetMinterPauserAutoIdBacking_OwnerOf_m456047E9EC0AA99359AB1D4CAB027FD319AC3409 (void);
// 0x00000279 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::Pause()
extern void ERC721PresetMinterPauserAutoIdBacking_Pause_mAE02D83482A98483B7F9851E4DBB7190ABA4639C (void);
// 0x0000027A System.Threading.Tasks.Task`1<System.Boolean> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::Paused()
extern void ERC721PresetMinterPauserAutoIdBacking_Paused_m921506277EDF7BAD27B25C432C8CB7B4656777EA (void);
// 0x0000027B System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::RenounceRole(evm.net.Models.HexString,evm.net.Models.EvmAddress)
extern void ERC721PresetMinterPauserAutoIdBacking_RenounceRole_m79EDC1E4E8CC8A712A0E1737F57A24FCA8719092 (void);
// 0x0000027C System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::RevokeRole(evm.net.Models.HexString,evm.net.Models.EvmAddress)
extern void ERC721PresetMinterPauserAutoIdBacking_RevokeRole_m23B2C0F6C20703E3F68D7C13B1D21A0DE3CA55E2 (void);
// 0x0000027D System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::SafeTransferFrom(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC721PresetMinterPauserAutoIdBacking_SafeTransferFrom_m0B1C9A9A58B4188EC8B2D8287C953FE1058113B1 (void);
// 0x0000027E System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::SafeTransferFrom(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress,System.Numerics.BigInteger,System.Byte[])
extern void ERC721PresetMinterPauserAutoIdBacking_SafeTransferFrom_mF2FA2721802A810D57EFA9F56348D582FEF3A983 (void);
// 0x0000027F System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::SetApprovalForAll(evm.net.Models.EvmAddress,System.Boolean)
extern void ERC721PresetMinterPauserAutoIdBacking_SetApprovalForAll_m6B7CCD3AD78C55C58AD76946907B2F6CDB2FC52B (void);
// 0x00000280 System.Threading.Tasks.Task`1<System.Boolean> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::SupportsInterface(System.Byte[])
extern void ERC721PresetMinterPauserAutoIdBacking_SupportsInterface_mB7EE2045A2FA3B6019C337747E48E3E0C22DF7A4 (void);
// 0x00000281 System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::Symbol()
extern void ERC721PresetMinterPauserAutoIdBacking_Symbol_m5F1D4215E232BDFEB07B79DBED36688C4B74376C (void);
// 0x00000282 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::TokenByIndex(System.Numerics.BigInteger)
extern void ERC721PresetMinterPauserAutoIdBacking_TokenByIndex_mEC96CB884FCDBD42801D2F7B66F7A156CBD8F4B5 (void);
// 0x00000283 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::TokenOfOwnerByIndex(evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC721PresetMinterPauserAutoIdBacking_TokenOfOwnerByIndex_m659A2BFAF5FAA52879FC0B722471DC2DB9BA57FF (void);
// 0x00000284 System.Threading.Tasks.Task`1<System.String> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::TokenURI(System.Numerics.BigInteger)
extern void ERC721PresetMinterPauserAutoIdBacking_TokenURI_m3C2D326B199B64834F2C3F3C435FC86F96294DAB (void);
// 0x00000285 System.Threading.Tasks.Task`1<System.Numerics.BigInteger> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::TotalSupply()
extern void ERC721PresetMinterPauserAutoIdBacking_TotalSupply_m9CC7A380D966B2F09435E20B29A760E3CF1C0D1F (void);
// 0x00000286 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::TransferFrom(evm.net.Models.EvmAddress,evm.net.Models.EvmAddress,System.Numerics.BigInteger)
extern void ERC721PresetMinterPauserAutoIdBacking_TransferFrom_m3CB70D049D064EBEF669F5E24C18A2D3B197AB9E (void);
// 0x00000287 System.Threading.Tasks.Task`1<evm.net.Models.Transaction> MetaMask.Contracts.ERC721PresetMinterPauserAutoIdBacking::Unpause()
extern void ERC721PresetMinterPauserAutoIdBacking_Unpause_m554D311870D35FC8819A74649B3A6631858C0316 (void);
static Il2CppMethodPointer s_methodPointers[647] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MetaMaskEthereumRequestResultEventArgs__ctor_mD1FBF765D764EC8AEFEF55ABE52CCC393D0B3B57,
	MetaMaskEthereumRequestFailedEventArgs__ctor_m4789BDE41741770C4C9FF98F03365C401DBAB7AD,
	MetaMaskConnectEventArgs__ctor_m6C51589DB44AF7BBD5111770ADE3D35D83F705CB,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MetaMaskDataManager_get_Encrypt_m1FFE3B6FAEB9727BFA1B073256A463E5E39E06A2,
	MetaMaskDataManager_set_Encrypt_m532DA0730A01BB7585343D56949C6F74EAAE14DD,
	MetaMaskDataManager_get_Password_m8E3E20CB7817726463E85028CD480EA4C2E9EAF1,
	MetaMaskDataManager_set_Password_m76C3277373C35FA391E2882196250551D344ABD0,
	MetaMaskDataManager_get_Storage_mFF2618299FAE5C63761D3ACC3FA467588C566E96,
	MetaMaskDataManager_get_Algorithm_m0103203955FC5CDC33F5D6C0E034551B2C210A26,
	MetaMaskDataManager__ctor_m15B1D1F73F1CB81D7DB57B6D40BB74DE43016268,
	MetaMaskDataManager_Delete_m1D98F52AB7CB58BE2ACE591AB76654038CAB93BF,
	MetaMaskDataManager_Save_m28C82FD98E49810F3FC45BEF3D88DE8190D67BAA,
	NULL,
	NULL,
	MetaMaskDataManager_PrepareEncryptPassword_mA89161D911942638E41D6CFEBFB27462BCE2903C,
	MetaMaskDataManager_PrepareDecryptPassword_mB18A6FBB28CFA9DC9AAE7D25B115E49DB902E0ED,
	MetaMaskDataManager_GetCryptoStream_m323B97D7990775A92ACAD73F9A363EAB020068E3,
	MetaMaskDataManager_RandomString_m6D654E7556F4ECDFBE1C84E4122792FC9605835A,
	MetaMaskSession_get_Data_mBA1CB9E45692BDC6B32108546094DAF5A99B4894,
	MetaMaskSession_get_EciesProvider_m77153E46A157380F842B47249C4D880E3EE3A3AE,
	MetaMaskSession_get_PublicKey_m7211334495FE42A544FFE438145184A88B1FC096,
	MetaMaskSession_get_LastActive_m4C1B6BCCC91F0A667E7BFA583CB8F5FD72C85CA5,
	MetaMaskSession__ctor_mCFBD14A57D7C754D61FB54A789226E675F32799E,
	MetaMaskSession_PrepareMessage_m64DB1A38849E1A2C2FEB761A0B0EA1879417EDC1,
	MetaMaskSession_EncryptMessage_m4AF83E7E0BABA56D5F521FBC40EC0CA5741252CA,
	MetaMaskSession_DecryptMessage_mE27DD58EC72A323C90290E67D274F244658CBBEA,
	MetaMaskSessionData_get_AppName_mF61ECDE45E13B2C64CB9120C468AD88DDBF93B15,
	MetaMaskSessionData_set_AppName_mCF0B994EA248F127A68746C31654260FA3AA6EB0,
	MetaMaskSessionData_get_AppUrl_m6EAD566AF2087EFEB03002E85E9E26BD3F684659,
	MetaMaskSessionData_set_AppUrl_mB127BBADDB091FF921853B3BA1554DC4E18092CA,
	MetaMaskSessionData_get_AppIcon_m75DFD33E987BD92EFA1F370D70A6DAA5655392DB,
	MetaMaskSessionData_set_AppIcon_m6A0445DEA8B793995FBDD469ED4998E71E040B3A,
	MetaMaskSessionData_get_ChannelId_m07545E7B9EB85CB30C30726406928C7BB211DE94,
	MetaMaskSessionData_set_ChannelId_m37057F37D72CE9442101DEEB864C57CC53F90861,
	MetaMaskSessionData_get_LastActive_mD0BC6FD83BC057F15AB5B442308539F57B1D5FD0,
	MetaMaskSessionData_set_LastActive_mDA1E597A2729F8CD8F049B4C821CA6B9CF3FEF10,
	MetaMaskSessionData__ctor_m4DA7CBEB17597B94644D0612BB8942376491093E,
	MetaMaskSessionData__ctor_mF69187B26F0A88BB7FF93F554C48C041B07789F2,
	MetaMaskWallet_get_Version_m53022DFDB1DAAF53A85F2F92759EC555C81E074D,
	MetaMaskWallet_get_Source_m9E3B255E4E293D76134E8B7B42345A519B7E5E96,
	MetaMaskWallet_set_Source_m628E080565EC7E8D7B87F1D84CE81A7C153F613E,
	MetaMaskWallet_get_Connecting_mC0B9BA55349BC9E3040C85B56FAA6C73AAA9DFDA,
	MetaMaskWallet_get_Events_mF8657BB4FF551E8AE6A4836463F572ADAB7E9407,
	MetaMaskWallet_add_StartConnecting_mC27B0E4A6141B53371D35BD52F2A4C2CE375ECD9,
	MetaMaskWallet_remove_StartConnecting_m95A401B01451AB70F74AFDE799F0720EE21AD283,
	MetaMaskWallet_add_WalletReady_mF974C7682B8B2D56D8E5FC364DDB00653574EAEA,
	MetaMaskWallet_remove_WalletReady_m6CEBD4176001DF530DEF0AF66C30C244EEEA57B5,
	MetaMaskWallet_add_WalletPaused_m881A3BF46CC170553031B77C6075E5BFFF40FBCD,
	MetaMaskWallet_remove_WalletPaused_mD91203B94D7DD828ED6FF6786DCA0717D06CA9E6,
	MetaMaskWallet_add_WalletConnected_m411EB11DF190681A9058FCAEB23021AEF9ABB5B6,
	MetaMaskWallet_remove_WalletConnected_m6F6A732F926CB53D3C266CE710858C89680D3A56,
	MetaMaskWallet_add_WalletDisconnected_mF66208E421842825F555D8D70663597A73AE3CBE,
	MetaMaskWallet_remove_WalletDisconnected_mB677D049836658F9660E5C5A1078D8BD56C34BBD,
	MetaMaskWallet_add_ChainIdChanged_mA710B3BD464651EFDCD3B0CEF3E81BAB3B6AF07E,
	MetaMaskWallet_remove_ChainIdChanged_mA60DB59545EF35A81A964B5D8FF971139ABEFA72,
	MetaMaskWallet_add_AccountChanged_mB6F2BA2743B6924E620E6B0D6DBE2A78F0A84CEB,
	MetaMaskWallet_remove_AccountChanged_m1C9CE7233989F40D8C19C849A79F841ED743E68B,
	MetaMaskWallet_add_WalletAuthorized_m8BBDEBC0C5DF2D7B46BB624ACA7E268F617762DC,
	MetaMaskWallet_remove_WalletAuthorized_mD43995E72DFB190CEA4C724C02F8F4F7CDA02ED9,
	MetaMaskWallet_add_WalletUnauthorized_mD26D919E3E768EE9427448F2A85C05257CA276D3,
	MetaMaskWallet_remove_WalletUnauthorized_mAB3E758D79F45F496517496BEA5EC4F58E95B1E3,
	MetaMaskWallet_add_EthereumRequestResultReceived_m25050BFE57219C063A4044AE817E06269F277A4A,
	MetaMaskWallet_remove_EthereumRequestResultReceived_m3C4D350D873866A109E0AB5BD6ACD424F4DF8E9E,
	MetaMaskWallet_add_EthereumRequestFailed_mE2FD4C0053B5C90FA61EFD02112466158EBD54D2,
	MetaMaskWallet_remove_EthereumRequestFailed_mFCF53DE6EAB3BA47A02697E150CCDC2A58AF9E1F,
	MetaMaskWallet_get_analyticsPlatform_m551AACEE8C8540C297B92A511F2B7FA857B55896,
	MetaMaskWallet_get_ConnectMethod_m8C73956E3B90D78F4045309B51C8EF5F08588B72,
	MetaMaskWallet_get_ProviderEngine_mF6BED74CA270E6D35B861BE47653606B13434FEA,
	MetaMaskWallet_get_Session_m147EE31A2439F2E238DEA5037940F40995FA77F1,
	MetaMaskWallet_get_Transport_mDE3F8C79FB01DA271C2DBA4D7BEA0746B9DFB28B,
	MetaMaskWallet_set_Transport_mC3BD5449567FAA9741EB7068124D491429792E7E,
	MetaMaskWallet_get_FallbackProvider_m594963582A750A00A77975C12E85DB89F9020E06,
	MetaMaskWallet_set_FallbackProvider_m760233D4E3D66BD3BCCDEB479C8EDF1ED27486D3,
	MetaMaskWallet_get_UserAgent_mE8FAC56DA25F12FA115C340409D632662FAA5574,
	MetaMaskWallet_set_UserAgent_m23727017F7D2B1F8F7D3898CE53A67B2E2111BD1,
	MetaMaskWallet_get_LastActive_m4A778BC5DCBD86DC4878EC27EAE82B89CA85D152,
	MetaMaskWallet_get_SelectedAddress_m637D43EE04F36F4D6E1D7A2708ED89F6086277D5,
	MetaMaskWallet_get_ChainId_m4AC55A1B076364659969CCBE278A5B16A2D25030,
	MetaMaskWallet_get_SelectedChainId_m298BC7AA9B0E8B6F45B23758A7AA21B61C7A5568,
	MetaMaskWallet_get_WalletPublicKey_mFD685EA028537DDEC1D20AC118D55BE93134590D,
	MetaMaskWallet_get_IsConnected_m51D4D15E83DAFC2003CF45D6C962355C250B8FDF,
	MetaMaskWallet_get_AppIcon_mD1C8D34D28199E713A7B59DC590B87E88FDE6524,
	MetaMaskWallet_get_OriginatorInfo_m9355A9D8005170FB1F98BCB8F8569D1DF4E4E455,
	MetaMaskWallet_get_IsPaused_m115DE3F84E712F85A74C04DED399F867B627D14E,
	MetaMaskWallet_get_IsAuthorized_mDD54A106E7C5E31C894EF945F276156F51D6B5B7,
	MetaMaskWallet_get_HasSession_m74471808EF479F31D70CA508BB5DF3AE88EED3D7,
	MetaMaskWallet_get_ConnectionContext_mB391890BBECC9AE812FCBCB0679F4A760F7BD589,
	MetaMaskWallet__ctor_m10884CAFA2567C9A1B52F6FF3FA8C73E9937D36C,
	MetaMaskWallet__ctor_m2DB959B597ABA4DB551F842B7C069F7493DCE9D9,
	MetaMaskWallet__ctor_m5F9742DBD670C6B83C1F1827F9E4BCAB4111858D,
	NULL,
	MetaMaskWallet_OnWalletPaused_m2B87E05E85BEC29F2CFF299356C29C0F976F3069,
	MetaMaskWallet_FetchAssemblyVersion_m1A9BF84D969FC518A81C6309561424D5A7835AA3,
	MetaMaskWallet_SendValidationRequest_mA117FE9E9E1E63073104F930FA3F7CF0B27A86FB,
	MetaMaskWallet_ConnectAndSignFallback_mCA0D95761F3B4A1404E79ACFCB3740BDC5941B8F,
	MetaMaskWallet_OnConnectionValidateProviderConnection_m284E084317A8BFF8C9389E3EC22D5B3F4EADE0A7,
	MetaMaskWallet_OnResumeValidateProviderConnection_mFDC0F1DEB58A27BE8773D2F9BA0EC010417801C9,
	MetaMaskWallet_ValidateProviderConnection_m3E91A3693EEA874D9F4667D95D2CB917B070646E,
	MetaMaskWallet_OnWalletAuthorized_m506ACAA0982CA7B448ED5CD934936F42260559F3,
	MetaMaskWallet_OnOtpReceived_m39F525DF2AE8E4EFC35DCFC7631D56CE41F00C1E,
	MetaMaskWallet_OnWalletUnauthorized_mDE5E2F3C5CDBAAB9D424C9BFEC83D464AA0A0389,
	MetaMaskWallet_ValidateChainAndSelectedAccounts_m7E536124705DA5FEF648B8E29889F3509499AEF6,
	MetaMaskWallet_RequestChainId_m50947FFB11CFBCAB85989EA2CC3FDB565DA47C5B,
	MetaMaskWallet_ValidateAccountsKnown_mA9BB3FFE1F54B4431A09DE837055A33CAC9E679A,
	MetaMaskWallet_OnEthereumRequestReceived_m40F480B35FB64376D33BAB2B7BB74E5A44BAA4A7,
	MetaMaskWallet_OnEthereumEventReceived_m48B902F148C1ACB31826C2A1AA14FDC8C54A796A,
	MetaMaskWallet_OnAccountsChanged_m117BF3B39083FE630BB81D6324375D488A0B060D,
	MetaMaskWallet_OnChainIdChanged_m8CF16D3D0A4BB342B72BD18E96466052FA5FB994,
	MetaMaskWallet_SendEthereumRequest_mCDBD4E831DDAEBEE6A65B5C9BC57FD1753936AD7,
	MetaMaskWallet_ShouldOpenMM_mD150DBF56B63DB3720CDBF387877DEA5A705E06F,
	MetaMaskWallet_WaitForWalletReady_m703D90BD90F616FD3D952E34AB74F0095B9FAF74,
	NULL,
	MetaMaskWallet_ClearSession_mB87C93D057968F198547480AE4609CAF58801C8C,
	MetaMaskWallet_ClearValidateTask_mA5A8C5C7FA4C6C8B9D8C4DEEFE11A76E57CAB5F2,
	MetaMaskWallet_ConnectAndSign_m65C662FDF2AF076E22CAF2580B1D6AE17E326CF4,
	MetaMaskWallet_Connect_m3D235DB9E819B096589C053CC3517E2A780BEF4D,
	MetaMaskWallet_SetupProviderEvents_m466A46ADA6D3EE3D3E318E0EEB5974C8B284A961,
	MetaMaskWallet_OnProviderEngineConnected_mC1774478824B3D6715E9C0EF191238226579369C,
	MetaMaskWallet_SaveConnectionUrl_mEFE719CA043CDCA44F784D73027E34AC9FC68B62,
	MetaMaskWallet_Disconnect_mA74AB1FB1FAC6EDC3816A82BEEC08FF7578AD09E,
	MetaMaskWallet_Dispose_mA94CEB36CC3FE2ED08DE3E1174011A356232B71A,
	MetaMaskWallet_SaveSession_mD477B54EE9AD7ED50C4970E70B1B2303863DF080,
	MetaMaskWallet_AddJsonConverter_mFD63D9FEE987957DD9E2D614EB29C2E0658B5085,
	MetaMaskWallet_get_ConnectedAddress_m2A9B021E8B94B96BFBFAA629E9A75A368132371F,
	MetaMaskWallet_Request_m6EA88F22BEAA81D80CE81F9FA9D749B0497BD98B,
	MetaMaskWallet_Request_mA262524154453ED54A79F6BCC4337CBF457D1132,
	NULL,
	MetaMaskWallet_BatchRequests_m8A41F9EC0E23D83C6904B8BA01420A93496F1105,
	MetaMaskWallet_EndSession_m6B746FBA1355802B4E896299F99873B6325E09B6,
	MetaMaskWallet__cctor_m3BC0796C59380C19A221C1E77C6CB581BB530ADB,
	U3CU3Ec__DisplayClass123_0__ctor_m0304815599E96EB178E35FF6A3A25F9E600B88F0,
	U3CU3Ec__DisplayClass123_0_U3COnConnectionValidateProviderConnectionU3Eg__ErrorResponseU7C0_m38E54700D4882EC45A6E08F86442C7D23C4BD040,
	U3CU3Ec__DisplayClass123_0_U3COnConnectionValidateProviderConnectionU3Eg__ResultResponseU7C1_mF35349C0AE55E734D735440EF8DEF022989FC8A2,
	U3CU3Ec__DisplayClass124_0__ctor_m5DD22EBBF460B158333D55E08489C2DF6E592616,
	U3CU3Ec__DisplayClass124_0_U3COnResumeValidateProviderConnectionU3Eg__ErrorResponseU7C0_mE190F7077685A92495DA5DE56422B0C004D5C93B,
	U3CU3Ec__DisplayClass124_0_U3COnResumeValidateProviderConnectionU3Eg__ResultResponseU7C1_m7D88089854CA97C618BD6A4917F8F79FFFE97E29,
	U3CU3Ec__DisplayClass138_0__ctor_m91CCF4B2B66BF1B8CA91AF8F8DA085369F730ADA,
	U3CU3Ec__DisplayClass138_0_U3CWaitForWalletReadyU3Eg__OnWalletReadyU7C0_m77A45283696297C20DB943FBFD2FA77874F84D2E,
	U3CU3Ec__DisplayClass138_0_U3CWaitForWalletReadyU3Eg__OnUnauthorizedHandlerU7C1_m0C813C306D26A5B35CF55D007A42160B71B2FC08,
	NULL,
	NULL,
	NULL,
	U3CConnectAndSignU3Ed__142_MoveNext_m692A80856BA26EDA7D3B1769475B4DFE0005A144,
	U3CConnectAndSignU3Ed__142_SetStateMachine_m9BAD673500762F3086BC565A1D40A3565BF1BAF6,
	U3CConnectAndSignFallbackU3Ed__122_MoveNext_m02DD7E66685E54868E49BAEAA3ECEDAA087169D3,
	U3CConnectAndSignFallbackU3Ed__122_SetStateMachine_m07B3EACCCE63D69D2A543E35FA04C5F27917609A,
	U3COnWalletAuthorizedU3Ed__126_MoveNext_mC5E9B318A751FFC6DBFEDEDE1B99E7B33BDD4DD5,
	U3COnWalletAuthorizedU3Ed__126_SetStateMachine_m110B87D0D7F7E90A05127523A896FB4B93A48EE5,
	U3CValidateProviderConnectionU3Ed__125_MoveNext_m7C09779520F5A8A5B55DBDA89F2AD88DA2BFF5CD,
	U3CValidateProviderConnectionU3Ed__125_SetStateMachine_mDD1948F4B3E7BA9F45C3CA8B1E006CEA88462CC0,
	ReflectionExtensions_IsTupleType_m3687B33418D900018C0B5C910DEC270A7F9B4E20,
	RpcMethods__cctor_m4D2C32E59D534EA8C7FC6DD03718AB48DD41EB3F,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MetaMaskSocketOptions_get_ExtraHeaders_m7E795D8AC39E5DFEB6203163B7C09913C044204E,
	MetaMaskSocketOptions_set_ExtraHeaders_m15F5809238060F57CFC889C636ADE96EF59776A1,
	MetaMaskSocketOptions__ctor_m811B4823873E5266FC487C34025D7B56D91A2489,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	BaseProvider_add_OtpReceived_mC8C87CADE41A1E7DF7DAC93A6A51C21A15E47705,
	BaseProvider_remove_OtpReceived_mFA08B125F0BCFA440174FBC6285BF932612241E0,
	BaseProvider_add_WalletPaused_mDD0F5867F78D2A6A98CFFE28637E91E2C48BA57B,
	BaseProvider_remove_WalletPaused_mCB6333DA1DA2E80A6673B4CD385C2C49BF6EF01E,
	BaseProvider_add_WalletAuthorized_mE6C0552B142BA367C5B18737F4CAC15542FD0936,
	BaseProvider_remove_WalletAuthorized_m745A92CB4D5D4CC7B513D1DB809197B513EAAE8A,
	BaseProvider_add_WalletUnauthorized_m469923320FBC2BAFFE545FF44554D91782708FE4,
	BaseProvider_remove_WalletUnauthorized_mFFCCFCCC34D443098AB4DF2C94868B176F34C056,
	BaseProvider_get_ProviderValidator_m26C8FB3B2B723FDBA500E9070A100FD38C4AD7E9,
	BaseProvider_set_ProviderValidator_m6A58B5A03CBD76ED004CC41583A82DE4AA1E10DD,
	BaseProvider_get_ProviderValidatorReset_m74976B36C1A1713602DF2D46B22AD000DB8AC9DE,
	BaseProvider_set_ProviderValidatorReset_mF503DBB7A99DDF9775C44C3F732FD8E2C6D6C0C2,
	BaseProvider_get_ConnectionMode_m00CA4411CBD7445E6A3A706D2B094DA73E91AC2E,
	BaseProvider_set_ConnectionMode_m5D2E323F4D4314501556166A8A62E393FA04D06B,
	BaseProvider_get_Session_m4A0A55437F53F6DE9D8D817A7D1CEBB63D434214,
	BaseProvider_set_Session_m9321023802984F64AAE1E54B5EE0D479EBC3C3F8,
	BaseProvider_get_AnalyticsPlatform_mC25853BC502B7F4739B8F815303BCA2802CC962A,
	BaseProvider_set_AnalyticsPlatform_m014B0BB139E99DB8FC147DDA91A59BA6630887F1,
	BaseProvider_OnWalletAuthorized_m5135BEF6422A9C806F435AA953D304914374CB50,
	BaseProvider_OnWalletUnauthorized_mD8E62BA1B4308A037D80DD787B726494C0F3900E,
	BaseProvider_OnOtpReceived_m8F8E1AF35DE36CBFA5CB8794CE93E5F62A183C15,
	BaseProvider_OnWalletPaused_m9F7B70648CBF88CBBD8E585A21D810D3C5398456,
	NULL,
	NULL,
	BaseProvider_FlushMessages_m19DC88E351F7278B3B0B2FF117626640DCDAE542,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	BaseProvider_Dispose_m627F16080B81E636763CC52DE24F17436222B580,
	BaseProvider__ctor_m66622FDF74C1DB378A4571D521BF9AAC7D2F7475,
	BaseProvider__cctor_m13BE69EAF08A8A5B7843879C419F3A1C33BF84BA,
	EncryptedProvider_get_WalletPublicKey_mB728A8D676782A2896E18DA06C3E5390A38D0FBC,
	EncryptedProvider_get_HasSession_m4B22238DA1FE76EEFAEF0632B926B67A2E090B85,
	EncryptedProvider__ctor_m9EF8EB7D4EB54BEF39A9EF2C9ED7996E552E91F3,
	EncryptedProvider_ReloadNewSession_mC3A694F495CD6A254862B4E66FD1B04E023E58D0,
	EncryptedProvider_LoadOrCreateSession_m0A3BCCF9FBF18D2F8168EB5700B4619C670FE9C3,
	EncryptedProvider_ClearSession_mF8E775D350F7B513F027EAFF25132F506351C4A1,
	EncryptedProvider_SaveSession_mCAD188697AEC6924B569A11E9397F9F26F5D8389,
	NULL,
	NULL,
	NULL,
	NULL,
	EncryptedProvider_OnMessageReceived_mD18CE8A54A20CEC396A44B2B049168669BC83150,
	EncryptedProvider_HandleEncryptedMessage_m81082F578109039BE19B505998C06605A4599B22,
	NULL,
	EncryptedProvider_HandleKeyExchangeMessage_m6DA2E7E36F56A1A32AF42BA57FB8A67DAF69A28B,
	EncryptedProvider_U3COnMessageReceivedU3Eb__18_0_m79C6DA57B7E8B3D5C029BD147E8043005FF1C98F,
	EncryptedProvider_U3COnMessageReceivedU3Eb__18_1_m071013FB1BCA0347D3D52709B76F99D28151571B,
	EncryptedProvider_U3COnMessageReceivedU3Eb__18_2_m8448F34AE932273A6EA0ACAA524A0D6F7915D228,
	EncryptedProvider_U3COnMessageReceivedU3Eb__18_3_m48F06004C8A5C951A554ECD5C1A89FD85E59A41D,
	EncryptedProvider_U3COnMessageReceivedU3Eb__18_4_m1B07564F36DA0B1DBC1DD348EA47B5EC0588AE6E,
	U3CHandleEncryptedMessageU3Ed__19_MoveNext_m00B38121B6605A3BC1AAE08BC6A19FABEF4FD78F,
	U3CHandleEncryptedMessageU3Ed__19_SetStateMachine_m8F5D8259E60F17D80B9A2B697D96C69557DB587F,
	NULL,
	NULL,
	U3COnMessageReceivedU3Ed__18_MoveNext_mECF017A78D92C7ADC6A51823A2CE3A29221990B6,
	U3COnMessageReceivedU3Ed__18_SetStateMachine_mC5D463B1A1AF0204F6C7D0DC188D27642397A946,
	JsonRpcEventArgs_get_Payload_m8C201445A0829DF6903C2F43EDE26B42F469FD06,
	JsonRpcEventArgs_get_Json_m87B4C8FBB4362B35A4603C1036B4A01D26CFEFA6,
	JsonRpcEventArgs__ctor_mF548255FAB0EE80B543CE45A10C651DF1061CF6A,
	ProviderValidator__ctor_m572462C5D7AA102FD7F01F7E8ABADBD457D66F72,
	ValidateProvider__ctor_m89C8697C33710AA3923CF5C82E2E16D0D5C16DE4,
	ValidateProvider_Invoke_m30C15CD4AD459B83B517AB487A1DB96E38DC4624,
	ValidateProvider_BeginInvoke_m6C3F0C67C9AEB18E23B7D5FC54402D49E8A7B5C1,
	ValidateProvider_EndInvoke_m4DA8D75B7E5DF1A3925FF1B02AB9943F9C31E46F,
	ResetProviderValidator__ctor_mEE0CC546681F3EEA323605AD87344EB454361FEC,
	ResetProviderValidator_Invoke_m7857255A7EBFB477E731CF1863D9658A886228FC,
	ResetProviderValidator_BeginInvoke_mE542F60112DC0D368884BA6A143F38ED1235DF2D,
	ResetProviderValidator_EndInvoke_mDD914A025D3217224B734CBF558F8D4D00A6EEA9,
	WebsocketProvider_get_SocketConnected_mA38E20746A5FD85F5203759C1DACD6F5690C20DB,
	WebsocketProvider_set_SocketConnected_m6D6CD474BCCE7CA2E528806EADE8CFCE7AEB6C7E,
	WebsocketProvider_get_AppIcon_m5C0E34F0B4C5D41BAF75750712CED74AEF5B68CF,
	WebsocketProvider_get_OriginatorInfo_mB0124B7C3E9A8A19CDF67EF0EDE33E8A1BAA48F2,
	WebsocketProvider_get_UserAgent_m8A52305006B277AE3B8AA63F9FEF59038B738862,
	WebsocketProvider_set_UserAgent_m5BA8AB71D34618913A65902EDE6F2BD324A58639,
	WebsocketProvider__ctor_m36C42E38F1397F4135852DEC7EF05CE5E160DA31,
	WebsocketProvider_add_EthereumEventReceived_mA04F72C79CAFC4508F221FA32634D7CA2D731E34,
	WebsocketProvider_remove_EthereumEventReceived_m1DFE579D3B6893DB6DC7D7FE42A0D8D8225B7A1F,
	WebsocketProvider_add_EthereumRequestReceived_m4E7C63B5A115DDFD844F54AC1C26266EEE3CA0D9,
	WebsocketProvider_remove_EthereumRequestReceived_mE3ABD6881E08DC2AB9C865FBF451C5247EC5DCF8,
	WebsocketProvider_add_ProviderConnected_m704D78E0C4F26B27ECB5A9BB62AE09813ADC9351,
	WebsocketProvider_remove_ProviderConnected_m1032DC4E87F7D8641BDFA589B470A0528C28C8AF,
	WebsocketProvider_SendMessage_mD47C045848B8728418E5161624A32606C8050AE7,
	WebsocketProvider_Connect_m41248EDFD271360A6574FFF41A212CC3A09AD3F1,
	WebsocketProvider_Disconnect_m22BAD0BD67FCD914764E3D698F7AD68382F2C70C,
	WebsocketProvider_DoDispose_m82FD092712D86CDD185D19CD29A36F8255BB07FA,
	WebsocketProvider_OnSocketConnected_m33163A7D7D4EEACA8376A1DBDDF171D797617AA5,
	WebsocketProvider_JoinChannel_mE15F1591DBD2B979F3871FB72CEEF83EF4AF0DE4,
	WebsocketProvider_OnClientsConnected_mC24DAC76535D444E99B90D59D27B5F04C7868035,
	WebsocketProvider_OnClientsDisconnected_m5E20876CC5991AB1C4352B5201AE6A3731D2875D,
	WebsocketProvider_OnClientsWaitingToJoin_mC03B24CF9B20C4725F6163DE93310288DF67143C,
	WebsocketProvider_OnEncryptedMessage_mF0BC63E1A71BDE5CB0FF34F3D57C43492CB19994,
	WebsocketProvider_SendMessage_m025A6D8CC4D1AB5A370A59100084F7B0B5842AD4,
	WebsocketProvider_ExchangeKeys_mE0B727E59867D2D04AB3D2F7F3FEAC4FDCD92643,
	WebsocketProvider_BeginHandshake_m81EB1440A205285F88A5C8781A9BDF2743C0D2DB,
	WebsocketProvider_SendOriginatorInfo_m72EAC8114DFD53FE9B1CAC3B2AE01F176F446BDB,
	WebsocketProvider_SynAckKeyExchange_m2C8C1196781F897026EB988605F55529F5A01352,
	WebsocketProvider_SendAnalytics_mF08401E390AFD1A22E1C07F27E010F2C1AFF0F76,
	WebsocketProvider_OnSocketDisconnected_m1B17D8B1976576AE195318990D810B7FF46EF4E0,
	WebsocketProvider_LeaveChannel_m52D411912B41B1DE6C450FD81208776814CDCEA5,
	WebsocketProvider_LeaveChannel_m1DEF86EC023E677455CDCF5FB86C0DD417B71F19,
	WebsocketProvider_ClearSession_m3AF1EE26C010EFDD1E1C8E94E8B92A3FB3FA3096,
	WebsocketProvider_OnWalletAuthorized_mD8B9FA9E20943B9DB5D7BBB4114D5642DA6A7A0B,
	WebsocketProvider_OnWalletUnauthorized_m80B097D02E80B06F79ABB728BE8539CF84911BEA,
	WebsocketProvider_U3COnSocketConnectedU3Eb__45_0_mD94AAE8212E44BA56F7C00E73B1E9E6FFDE5B93D,
	WebsocketProvider_U3CU3En__0_m81775BA2E4D2B801618EAC359311921B445878AD,
	U3COnEncryptedMessageU3Ed__50_MoveNext_mF1E4809C96A2F846CCEB503B9E7B9D1420473F5D,
	U3COnEncryptedMessageU3Ed__50_SetStateMachine_mBF13382E7274256BA154D6C504189F2B3310A259,
	U3CSendAnalyticsU3Ed__56_MoveNext_m3693FAB65D89A580A866ECC3CD10C4A71F32E063,
	U3CSendAnalyticsU3Ed__56_SetStateMachine_mE4F8958ABD1AC468913C0337D91A5712CB00B905,
	AnalyticsResponse__ctor_mF5193952D02D06511B142838E03064F4EF495A7B,
	BatchRequester__cctor_m4E900018E54FDF25B69896F78812DD4ED0B02D31,
	BatchRequester__ctor_mAC10B76D88A8B1931DE47AC1BDB910588DD053D9,
	NULL,
	BatchRequester_BuildTupleType_mEFFA2CDDE77F13BF651AD5719673F19AE95DEF97,
	BatchRequester_BuildResponseTupleType_mC036460EA55642BD53C1D3B54C41AE4DB377ACDD,
	BatchRequester_ProcessResponses_m2537E1A029B2521413395D8FFB37A3C017F6F1AF,
	BatchRequester_Send_m8989DECEC61D43AFD15BD4B8E7CBB6BA08AD35F2,
	BatchRequester_get_ChainId_m50D0692FB7B0728D9AC13787F64062AE6DDB83DE,
	BatchRequester_get_ConnectedAddress_m346FF8C7DDEDD292384D833D82CE0D4C04D65EBC,
	BatchRequester_Request_m95E62B52615D97D6C937744F3EFD78F349F635CA,
	BatchedRequest__ctor_m0CA881AEF26BA6B918F2D22893074F5C9BDC03B2,
	TupleConverter_WriteJson_m339CE309BDB16A5FB280A4D7E7CB98E1D5CA5AC2,
	TupleConverter_ReadJson_m27355AC872509F5ED1522FAA9E3585A1B964DB28,
	TupleConverter_CanConvert_m8A69E061A8CBC31457F60E8AAA2390F31F19667D,
	TupleConverter__ctor_m57760EEB7FBEB98B16FCC08F8E9ED955F5784955,
	U3CU3Ec__cctor_m86EB739FC474BD30C88AC31E94A76CB4B0C45E63,
	U3CU3Ec__ctor_m64372B7F7FC51E82AF333AF057AF06BF8A47CADC,
	U3CU3Ec_U3CBuildResponseTupleTypeU3Eb__8_0_mFDB50A063042DE238D908D2248818E16D0327769,
	U3CU3Ec_U3CSendU3Eb__10_0_mF884DDA7D421890ED40C5D73FD9B5BA876E81556,
	NULL,
	NULL,
	U3CSendU3Ed__10_MoveNext_m474DAC6233B53554611E5D4970060614399E121F,
	U3CSendU3Ed__10_SetStateMachine_mA18200B6A89CAE2A13313058FFC7BAFAAFFD4B3E,
	ChainData__ctor_mC0758C1D44AF475C4509A768F82FF5F0705648B8,
	NULL,
	KeyExchangeMessage__ctor_m88DDD3B077846CA0ACA67BA9A4BD6C2E1B491EA0,
	KeyExchangeMessage__ctor_mCC488DA0360BCB49E3A8C824ADADCD58B3AC2FB3,
	KeyExchangeMessage__ctor_m260D93F17323C2FE5053D976CF55F18F5B34F62D,
	MetaMaskDataMessage__ctor_mB8A91DF8043DE63350D56FAA46F696AE8794D7DA,
	MetaMaskMessage__ctor_m46BAFCE56FE96C106122521C1A2D09E86E48CCE4,
	MetaMaskPing__ctor_mEED32CB14D035F829CF9A439AEC712CAAE55D120,
	NULL,
	OtpAnswerMessage__ctor_mA3E1A57315193757DAA261DB01FA11679C125916,
	TypedMessage__ctor_m943BECE8DD87F31A6217D0A965DF65E481D4F3F6,
	NULL,
	MetaMaskAnalyticsInfo__ctor_mA4C36700B88E23D4FCF3D376F11068E310EBAC84,
	MetaMaskEthereumRequest__ctor_m37F23129326A5669550314E0440FCB80A5E92B22,
	MetaMaskOriginatorInfo__ctor_mB8D09869CA7B3351B13DE0B9E75DE25F02413817,
	MetaMaskRequestInfo__ctor_m3D97B08608BA8326D7B33377F5D785A7BC85DF5F,
	MetaMaskSubmittedRequest__ctor_m36510FBA7152C69B8B7E0189B4EFCCCB7B10CE29,
	MetaMaskTransaction_OnSerialize_m49F3C689252CC2C391AFA104248CA64F816B82E9,
	MetaMaskTransaction__ctor_m804274461D42536EE0F00E53DA6CFF59F0BA4654,
	ProviderState_get_Accounts_m8997858D69DEE1E8F9136E03B1A7EE719FF7105B,
	ProviderState_set_Accounts_m1BD80BB558C87E0872A25921839EAA2B4C003B03,
	ProviderState_get_ChainId_mFEDAC7770ABA17B8DED07E3AB4D26B8992173073,
	ProviderState_set_ChainId_m24533F567E84987C8E37D38EB0284C311B119002,
	ProviderState__ctor_mED564DD95E499AE6384C6421E755E66C4F7AE19E,
	NULL,
	NULL,
	NULL,
	NULL,
	MetaMaskDebug_Log_m1247617BCEC7E01F25E383FEEC9392A3D635235D,
	MetaMaskDebug_LogWarning_m821F49F27B08D1DA3F700CD6293EAD266BCC94C8,
	MetaMaskDebug_LogError_m2C1F76A55AD81E06BEF8712702A1D92349E54FFE,
	MetaMaskDebug_LogException_m628BDEB03940853C8A700DBA8459B492B8C1AF71,
	HexByteConvertorExtensions_ToHex_mB679B33C862C17E664E7EF900B8FC82C120F9A5A,
	HexByteConvertorExtensions_HasHexPrefix_mE9FD302F402825889FE17DFBE80BBF578E92356D,
	HexByteConvertorExtensions_IsHex_mD449AD5A0D07AD0B303218D5A79DAA65E7F42A62,
	HexByteConvertorExtensions_RemoveHexPrefix_m251EC7005782D25808168BEB0C15F9BF9B7623C2,
	HexByteConvertorExtensions_IsTheSameHex_mA9CAA4647BD582DE505ED83DEEAE41221CBA5F8E,
	HexByteConvertorExtensions_EnsureHexPrefix_mE23E331E69ADCB6B864E2BB340906276DD04EF4D,
	HexByteConvertorExtensions_EnsureHexPrefix_m98D08735FBC6D69BBD329101FB39817B8084F137,
	HexByteConvertorExtensions_ToHexCompact_m80D518D51F835C977EDBC340EF069F5185FC7E74,
	HexByteConvertorExtensions_ToHexCompact_m3E2445380C8CBCBEA84553908D781CCA0D6DFC97,
	HexByteConvertorExtensions_HexToByteArrayInternal_m95669A648F95F468BFA17CB9C807E4564261F4C2,
	HexByteConvertorExtensions_HexToByteArray_m30C93FA9860006CE3A213C8D79C43EDEAA70F2A0,
	HexByteConvertorExtensions_FromCharacterToByte_m16B4760BCC4CBFAE181D66D2640827372BFB54D7,
	HexByteConvertorExtensions__cctor_m55845859AFD29745899D82F4EA759610795917B1,
	U3CU3Ec__cctor_m1DC9983E2A315C52D8340F61A60CD9D271D93F8E,
	U3CU3Ec__ctor_mABE70BEC41F15C29A6EC56E717487BDA8F559681,
	U3CU3Ec_U3CToHexU3Eb__1_0_m4108DBD5461E4AF9C53EEE68195FA02E723D01F8,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ERC1155Backing__ctor_m735EC650F9D23D9C2D7A66913223B4E54219C10C,
	ERC1155Backing_DeployNew_mAACF65964628E46E6DB0AD0329C29A7773CAEC4C,
	ERC1155Backing_BalanceOf_mD1BCDD6419CFD0F7188896CA1926C9245C441D91,
	ERC1155Backing_BalanceOfBatch_m45FD8C5382634261EFE6CF3B10D0FFD3560E130C,
	ERC1155Backing_IsApprovedForAll_m64A29156AABEABFC05FB69A14D465605B413EE56,
	ERC1155Backing_SafeBatchTransferFrom_m8C075EEB4FDAEAACCB60CFF375BABC1C35EBD44F,
	ERC1155Backing_SafeTransferFrom_mB8C7EEE7E2F726F3A678E527B696208CF439EB72,
	ERC1155Backing_SetApprovalForAll_mA7482EF44CF96ED494541D696F4130946B4A05CA,
	ERC1155Backing_SupportsInterface_m9FEB2F7197BC9AF90F55CC62A31342D8990F63BB,
	ERC1155Backing_Uri_m93B410B4419D5C02D8F6740DA86F91E76EA0B114,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ERC20Backing__ctor_m482B1238ABB62660A39533D58A2AFD40B51EA4FF,
	ERC20Backing_DeployNew_m0C0DA41D0545A62EDC8114E27B6339D05126ED10,
	ERC20Backing_Allowance_m27F61360021780EE7D5C6A1CE3939A483F167033,
	ERC20Backing_Approve_mB4C186DE7ABFD529294324B4A7D270C82EECD189,
	ERC20Backing_BalanceOf_m2C3885CA0367D3BFFB2643D4022E866453A5A2BE,
	ERC20Backing_Decimals_mB0AA8D7CEEAFABB4009BB592DECDFD286FA9A95B,
	ERC20Backing_DecreaseAllowance_m8D8153D11D7872348E29B24D7F6A99F3A6BC0D38,
	ERC20Backing_IncreaseAllowance_mE73CE6EE2224BF9FC3FDB822A226B84F5FBFA800,
	ERC20Backing_Name_mEFD3B540A4CD1CD8996D82813717CA244DA52418,
	ERC20Backing_Symbol_mC6CD3A22AE953BE35563D8E916AF9825314A105F,
	ERC20Backing_TotalSupply_mDF6B82786FD8AAC4E9010443E017EB01F819BE6B,
	ERC20Backing_Transfer_m442BD2F80BD0CB66700AB75833F151DE480F2860,
	ERC20Backing_TransferFrom_m6B3822FF51DF0CF08009F15E3446D00C8830992E,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ERC20PresetFixedSupplyBacking__ctor_mC2CDEDFBCB7E7C3B4A76B26A6D9B098C7A1FAC7C,
	ERC20PresetFixedSupplyBacking_DeployNew_m316B1915526A50DD4CB50FE66270B227CF34D329,
	ERC20PresetFixedSupplyBacking_Allowance_mC002A90342CF9815F2FA8211F58497BDA1C7B5A4,
	ERC20PresetFixedSupplyBacking_Approve_mD2EFCA14F34774FE4DDB6ECC98EF7A8D3F5ACD39,
	ERC20PresetFixedSupplyBacking_BalanceOf_m2B025A974FB562AFB65B3212F67DE859DE788B29,
	ERC20PresetFixedSupplyBacking_Burn_mAC7FF19B1D37A7EE02495F37C292F77EE671EDC5,
	ERC20PresetFixedSupplyBacking_BurnFrom_mE1DDD95E688BDAB24A60CD51EE9DF33DD0176963,
	ERC20PresetFixedSupplyBacking_Decimals_m4A02BBEA982E7F47B949189BD34C0C11C5A8FF71,
	ERC20PresetFixedSupplyBacking_DecreaseAllowance_m8535522A2A008508D0A683E4E5EB853E08C5A906,
	ERC20PresetFixedSupplyBacking_IncreaseAllowance_m773B8A16AC5D72767B64E99266376455F5862772,
	ERC20PresetFixedSupplyBacking_Name_m9408BFB9B3768385F7D7DDC152187841EDE1A4CC,
	ERC20PresetFixedSupplyBacking_Symbol_m6E6D71427BEDF1065B014DDAB1FC0972D5BA2C7E,
	ERC20PresetFixedSupplyBacking_TotalSupply_mF448BB994160E6689F9E91C7F9B8EB1489268B34,
	ERC20PresetFixedSupplyBacking_Transfer_m4FA4AC5193930E9B4642C027437C9F7968F6A38F,
	ERC20PresetFixedSupplyBacking_TransferFrom_mBD96DE5948605A3C6B2CCAC3B1D1F62AE0869058,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ERC20PresetMinterPauserBacking__ctor_m15AA5DACFF9543693D3393CB63049BDAB9A0E916,
	ERC20PresetMinterPauserBacking_DeployNew_m8DDA22A562006AAEC5CB5BBDE43B467E536097FC,
	ERC20PresetMinterPauserBacking_DEFAULT_ADMIN_ROLE_mDEA1F67CBA7C3918442881EAAA3D1155D0A039A3,
	ERC20PresetMinterPauserBacking_MINTER_ROLE_m59213C7304A6B29E87113A9FF45D6F9EA07894C3,
	ERC20PresetMinterPauserBacking_PAUSER_ROLE_m5C8EF26FDC7901E621D425337E84B25BCACB85AE,
	ERC20PresetMinterPauserBacking_Allowance_mAD21FF05FACD418A75A9538AC59482EFD73B2900,
	ERC20PresetMinterPauserBacking_Approve_m417DE0FCA10E875D51937066416B34DD18A7F447,
	ERC20PresetMinterPauserBacking_BalanceOf_m0646C552694CBD4D24E8503AAA27E9D18BC02C74,
	ERC20PresetMinterPauserBacking_Burn_mCF1EA920B58946E1784650FDCE73C25AEED2E922,
	ERC20PresetMinterPauserBacking_BurnFrom_m5004CF01A810E09E098801A861BFD4065ACCBE85,
	ERC20PresetMinterPauserBacking_Decimals_m2D369DFCC626AF926237E1DEDD95B89EC2EA9EB5,
	ERC20PresetMinterPauserBacking_DecreaseAllowance_mDF84DBAA40D103F3981F0E80E2B6B88E4CB7E94F,
	ERC20PresetMinterPauserBacking_GetRoleAdmin_mD59084B05A9B15B795616829774CFB9672E56F39,
	ERC20PresetMinterPauserBacking_GetRoleMember_mCE7852614CAE2913CE06008F508F55FF3CE364A4,
	ERC20PresetMinterPauserBacking_GetRoleMemberCount_mEE2A033B77DFBB55FECE5C8E1B0AA550AD753576,
	ERC20PresetMinterPauserBacking_GrantRole_mED474347CE64AF10FEA1A58610811C3DF6584AFE,
	ERC20PresetMinterPauserBacking_HasRole_mF39C64F0E6F27919942BC58972144BF1CB1382AA,
	ERC20PresetMinterPauserBacking_IncreaseAllowance_mC985FF01702222E688832849D4056A3D4F1D07DB,
	ERC20PresetMinterPauserBacking_Mint_mA7683E154C34FD93B6B8D90E1F8560E8C58ED5FA,
	ERC20PresetMinterPauserBacking_Name_m7D0A106D68F9D519059E89F13FDC705D6133D857,
	ERC20PresetMinterPauserBacking_Pause_m0F00DEA5B5A7DF906CED730582E440CAB4F4EDB9,
	ERC20PresetMinterPauserBacking_Paused_m109EE24FA1CD0792BC5F9E4FE8FA8265E16F3DD2,
	ERC20PresetMinterPauserBacking_RenounceRole_mE6458D9935BFCC5600E985449A4935EFAEFD66A1,
	ERC20PresetMinterPauserBacking_RevokeRole_mC553B0B464B2CE4487B88F22CD6F69D06B12F104,
	ERC20PresetMinterPauserBacking_SupportsInterface_mEDBFCEDC61483645F394153BCBEF19C55B899C34,
	ERC20PresetMinterPauserBacking_Symbol_m9F3CBF3020F37ECD0081604303041B8DCD676C79,
	ERC20PresetMinterPauserBacking_TotalSupply_m49FF78E8D0625F3BF23B3839EFDF871EEE65CAC0,
	ERC20PresetMinterPauserBacking_Transfer_m0AE975AD78A961E9695B9AEBBB5659824FB84DA6,
	ERC20PresetMinterPauserBacking_TransferFrom_mAB553953A748113697DF722F4B62518769C222AB,
	ERC20PresetMinterPauserBacking_Unpause_mC633CD153EAE93509917830E4F7833794C6F9953,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ERC721Backing__ctor_m848D85F4FFE85CC3B8431DA35C287D674C0E028C,
	ERC721Backing_DeployNew_m9F02BEC48DE95D1A8D385179F2D5A60448C5482B,
	ERC721Backing_Approve_mDBA6702E2A5346EA5477778770014897D0D392B6,
	ERC721Backing_BalanceOf_m7AA1BCA099AB2C395BBF9BBEBAB3C71CADA7D256,
	ERC721Backing_GetApproved_m801341715C31A748EE9279170D313BCB69A2CEC1,
	ERC721Backing_IsApprovedForAll_m6E51D0C149149E77DB0156A9090B0B8E829CE534,
	ERC721Backing_Name_mD7D3131005BB2F9D8037C53088813BE462415284,
	ERC721Backing_OwnerOf_mB8445470636FE0774A144CB11AF8EBBF55EFFEBF,
	ERC721Backing_SafeTransferFrom_m0ED63CF136CF17F33FF06A0019ED90E99E0FBA84,
	ERC721Backing_SafeTransferFrom_mB314CC032A268D7B4C71DC3B2073FA2134544086,
	ERC721Backing_SetApprovalForAll_mE5F20A590EB1C2B91F8BA3C2735ECF7D8C917202,
	ERC721Backing_SupportsInterface_mCA394D4B0B02B68C3CFD635DD280A2EE499A889B,
	ERC721Backing_Symbol_m28B52EE381277B52C9229B6CFC72E22D1920DA87,
	ERC721Backing_TokenURI_mED011FAF446D6BE617851F5C69073E622BFE0222,
	ERC721Backing_TransferFrom_m4728F56F876E16491EA3829EE0D9775AF2F6C095,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ERC721PresetMinterPauserAutoIdBacking__ctor_mA455FF1C6B7DF003BEFD3A04927D6CD0DC2A6A04,
	ERC721PresetMinterPauserAutoIdBacking_DeployNew_m512F0F645008448E5F25E647C15FB17A9CF4E79A,
	ERC721PresetMinterPauserAutoIdBacking_DEFAULT_ADMIN_ROLE_m0ADAFBCC3FE0840997846A870C4B81CA08A64DEA,
	ERC721PresetMinterPauserAutoIdBacking_MINTER_ROLE_m523D176AD9E582882A3F20ABB4E0CAE89ADDE25D,
	ERC721PresetMinterPauserAutoIdBacking_PAUSER_ROLE_mCED4E8A11DBC566FB140953861007669D4AA1830,
	ERC721PresetMinterPauserAutoIdBacking_DeployNew_m64F0EEC53DED430D0DA8EBCA240B78E458B8ED3D,
	ERC721PresetMinterPauserAutoIdBacking_Approve_m828911E0538187C625366AE04CAB7F745F3CFC10,
	ERC721PresetMinterPauserAutoIdBacking_BalanceOf_mB742DAD16ED85A6751E8A1F0A003D603048A2185,
	ERC721PresetMinterPauserAutoIdBacking_Burn_mFF27E3B4897CCCF2F4EE1EE1072665F7576DEF1F,
	ERC721PresetMinterPauserAutoIdBacking_GetApproved_m990728148EA46B920D193FB9CB45837079B2B636,
	ERC721PresetMinterPauserAutoIdBacking_GetRoleAdmin_mE95DBD62685F7F7C674C17AB6D74CAE247951A3F,
	ERC721PresetMinterPauserAutoIdBacking_GetRoleMember_mA454A1386BB9517632A272FCCFCFEEC44F89EDC6,
	ERC721PresetMinterPauserAutoIdBacking_GetRoleMemberCount_m0D6C029BF4F1E738766A650A13791FD0B1CE5152,
	ERC721PresetMinterPauserAutoIdBacking_GrantRole_m109FBEADCECF5C0FF72804C2A01733E1C597647F,
	ERC721PresetMinterPauserAutoIdBacking_HasRole_m67056AAEF792C1103F4B3E284C5EE56C12F26849,
	ERC721PresetMinterPauserAutoIdBacking_IsApprovedForAll_m9DF1327119CCE081459DE7AD6431361C6B24B1A6,
	ERC721PresetMinterPauserAutoIdBacking_Mint_m89E0CB2819ABFB216CE233B5C46F37D2267560A4,
	ERC721PresetMinterPauserAutoIdBacking_Name_m4E3FE56B3177D7DC67F39E78BFE36579E533DC82,
	ERC721PresetMinterPauserAutoIdBacking_OwnerOf_m456047E9EC0AA99359AB1D4CAB027FD319AC3409,
	ERC721PresetMinterPauserAutoIdBacking_Pause_mAE02D83482A98483B7F9851E4DBB7190ABA4639C,
	ERC721PresetMinterPauserAutoIdBacking_Paused_m921506277EDF7BAD27B25C432C8CB7B4656777EA,
	ERC721PresetMinterPauserAutoIdBacking_RenounceRole_m79EDC1E4E8CC8A712A0E1737F57A24FCA8719092,
	ERC721PresetMinterPauserAutoIdBacking_RevokeRole_m23B2C0F6C20703E3F68D7C13B1D21A0DE3CA55E2,
	ERC721PresetMinterPauserAutoIdBacking_SafeTransferFrom_m0B1C9A9A58B4188EC8B2D8287C953FE1058113B1,
	ERC721PresetMinterPauserAutoIdBacking_SafeTransferFrom_mF2FA2721802A810D57EFA9F56348D582FEF3A983,
	ERC721PresetMinterPauserAutoIdBacking_SetApprovalForAll_m6B7CCD3AD78C55C58AD76946907B2F6CDB2FC52B,
	ERC721PresetMinterPauserAutoIdBacking_SupportsInterface_mB7EE2045A2FA3B6019C337747E48E3E0C22DF7A4,
	ERC721PresetMinterPauserAutoIdBacking_Symbol_m5F1D4215E232BDFEB07B79DBED36688C4B74376C,
	ERC721PresetMinterPauserAutoIdBacking_TokenByIndex_mEC96CB884FCDBD42801D2F7B66F7A156CBD8F4B5,
	ERC721PresetMinterPauserAutoIdBacking_TokenOfOwnerByIndex_m659A2BFAF5FAA52879FC0B722471DC2DB9BA57FF,
	ERC721PresetMinterPauserAutoIdBacking_TokenURI_m3C2D326B199B64834F2C3F3C435FC86F96294DAB,
	ERC721PresetMinterPauserAutoIdBacking_TotalSupply_m9CC7A380D966B2F09435E20B29A760E3CF1C0D1F,
	ERC721PresetMinterPauserAutoIdBacking_TransferFrom_m3CB70D049D064EBEF669F5E24C18A2D3B197AB9E,
	ERC721PresetMinterPauserAutoIdBacking_Unpause_m554D311870D35FC8819A74649B3A6631858C0316,
};
extern void U3CConnectAndSignU3Ed__142_MoveNext_m692A80856BA26EDA7D3B1769475B4DFE0005A144_AdjustorThunk (void);
extern void U3CConnectAndSignU3Ed__142_SetStateMachine_m9BAD673500762F3086BC565A1D40A3565BF1BAF6_AdjustorThunk (void);
extern void U3CConnectAndSignFallbackU3Ed__122_MoveNext_m02DD7E66685E54868E49BAEAA3ECEDAA087169D3_AdjustorThunk (void);
extern void U3CConnectAndSignFallbackU3Ed__122_SetStateMachine_m07B3EACCCE63D69D2A543E35FA04C5F27917609A_AdjustorThunk (void);
extern void U3COnWalletAuthorizedU3Ed__126_MoveNext_mC5E9B318A751FFC6DBFEDEDE1B99E7B33BDD4DD5_AdjustorThunk (void);
extern void U3COnWalletAuthorizedU3Ed__126_SetStateMachine_m110B87D0D7F7E90A05127523A896FB4B93A48EE5_AdjustorThunk (void);
extern void U3CValidateProviderConnectionU3Ed__125_MoveNext_m7C09779520F5A8A5B55DBDA89F2AD88DA2BFF5CD_AdjustorThunk (void);
extern void U3CValidateProviderConnectionU3Ed__125_SetStateMachine_mDD1948F4B3E7BA9F45C3CA8B1E006CEA88462CC0_AdjustorThunk (void);
extern void U3CHandleEncryptedMessageU3Ed__19_MoveNext_m00B38121B6605A3BC1AAE08BC6A19FABEF4FD78F_AdjustorThunk (void);
extern void U3CHandleEncryptedMessageU3Ed__19_SetStateMachine_m8F5D8259E60F17D80B9A2B697D96C69557DB587F_AdjustorThunk (void);
extern void U3COnMessageReceivedU3Ed__18_MoveNext_mECF017A78D92C7ADC6A51823A2CE3A29221990B6_AdjustorThunk (void);
extern void U3COnMessageReceivedU3Ed__18_SetStateMachine_mC5D463B1A1AF0204F6C7D0DC188D27642397A946_AdjustorThunk (void);
extern void U3COnEncryptedMessageU3Ed__50_MoveNext_mF1E4809C96A2F846CCEB503B9E7B9D1420473F5D_AdjustorThunk (void);
extern void U3COnEncryptedMessageU3Ed__50_SetStateMachine_mBF13382E7274256BA154D6C504189F2B3310A259_AdjustorThunk (void);
extern void U3CSendAnalyticsU3Ed__56_MoveNext_m3693FAB65D89A580A866ECC3CD10C4A71F32E063_AdjustorThunk (void);
extern void U3CSendAnalyticsU3Ed__56_SetStateMachine_mE4F8958ABD1AC468913C0337D91A5712CB00B905_AdjustorThunk (void);
extern void U3CSendU3Ed__10_MoveNext_m474DAC6233B53554611E5D4970060614399E121F_AdjustorThunk (void);
extern void U3CSendU3Ed__10_SetStateMachine_mA18200B6A89CAE2A13313058FFC7BAFAAFFD4B3E_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[18] = 
{
	{ 0x060000C8, U3CConnectAndSignU3Ed__142_MoveNext_m692A80856BA26EDA7D3B1769475B4DFE0005A144_AdjustorThunk },
	{ 0x060000C9, U3CConnectAndSignU3Ed__142_SetStateMachine_m9BAD673500762F3086BC565A1D40A3565BF1BAF6_AdjustorThunk },
	{ 0x060000CA, U3CConnectAndSignFallbackU3Ed__122_MoveNext_m02DD7E66685E54868E49BAEAA3ECEDAA087169D3_AdjustorThunk },
	{ 0x060000CB, U3CConnectAndSignFallbackU3Ed__122_SetStateMachine_m07B3EACCCE63D69D2A543E35FA04C5F27917609A_AdjustorThunk },
	{ 0x060000CC, U3COnWalletAuthorizedU3Ed__126_MoveNext_mC5E9B318A751FFC6DBFEDEDE1B99E7B33BDD4DD5_AdjustorThunk },
	{ 0x060000CD, U3COnWalletAuthorizedU3Ed__126_SetStateMachine_m110B87D0D7F7E90A05127523A896FB4B93A48EE5_AdjustorThunk },
	{ 0x060000CE, U3CValidateProviderConnectionU3Ed__125_MoveNext_m7C09779520F5A8A5B55DBDA89F2AD88DA2BFF5CD_AdjustorThunk },
	{ 0x060000CF, U3CValidateProviderConnectionU3Ed__125_SetStateMachine_mDD1948F4B3E7BA9F45C3CA8B1E006CEA88462CC0_AdjustorThunk },
	{ 0x0600012B, U3CHandleEncryptedMessageU3Ed__19_MoveNext_m00B38121B6605A3BC1AAE08BC6A19FABEF4FD78F_AdjustorThunk },
	{ 0x0600012C, U3CHandleEncryptedMessageU3Ed__19_SetStateMachine_m8F5D8259E60F17D80B9A2B697D96C69557DB587F_AdjustorThunk },
	{ 0x0600012F, U3COnMessageReceivedU3Ed__18_MoveNext_mECF017A78D92C7ADC6A51823A2CE3A29221990B6_AdjustorThunk },
	{ 0x06000130, U3COnMessageReceivedU3Ed__18_SetStateMachine_mC5D463B1A1AF0204F6C7D0DC188D27642397A946_AdjustorThunk },
	{ 0x06000162, U3COnEncryptedMessageU3Ed__50_MoveNext_mF1E4809C96A2F846CCEB503B9E7B9D1420473F5D_AdjustorThunk },
	{ 0x06000163, U3COnEncryptedMessageU3Ed__50_SetStateMachine_mBF13382E7274256BA154D6C504189F2B3310A259_AdjustorThunk },
	{ 0x06000164, U3CSendAnalyticsU3Ed__56_MoveNext_m3693FAB65D89A580A866ECC3CD10C4A71F32E063_AdjustorThunk },
	{ 0x06000165, U3CSendAnalyticsU3Ed__56_SetStateMachine_mE4F8958ABD1AC468913C0337D91A5712CB00B905_AdjustorThunk },
	{ 0x0600017C, U3CSendU3Ed__10_MoveNext_m474DAC6233B53554611E5D4970060614399E121F_AdjustorThunk },
	{ 0x0600017D, U3CSendU3Ed__10_SetStateMachine_mA18200B6A89CAE2A13313058FFC7BAFAAFFD4B3E_AdjustorThunk },
};
static const int32_t s_InvokerIndices[647] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	3184,
	3184,
	3184,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6509,
	5401,
	6603,
	5495,
	6603,
	6603,
	1804,
	5495,
	3184,
	0,
	0,
	6603,
	5495,
	2565,
	9510,
	6603,
	6603,
	6603,
	6526,
	3184,
	1604,
	2569,
	4896,
	6603,
	5495,
	6603,
	5495,
	6603,
	5495,
	6603,
	5495,
	6526,
	5423,
	6734,
	5495,
	9906,
	9906,
	9756,
	6509,
	6603,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	6603,
	6603,
	6603,
	6603,
	6603,
	5495,
	6603,
	5495,
	6603,
	5495,
	6526,
	6603,
	6569,
	6603,
	6603,
	6509,
	6603,
	6603,
	6509,
	6509,
	6509,
	6568,
	1854,
	370,
	1316,
	0,
	3184,
	9906,
	5495,
	3184,
	6734,
	6734,
	6603,
	3184,
	3177,
	3184,
	6734,
	6734,
	6734,
	3184,
	3184,
	3166,
	5495,
	1849,
	4001,
	6603,
	0,
	6734,
	6734,
	4896,
	6734,
	6734,
	3184,
	5401,
	6734,
	6734,
	6734,
	9756,
	6603,
	4896,
	2569,
	0,
	6603,
	5401,
	9934,
	6734,
	3184,
	3184,
	6734,
	3184,
	3184,
	6734,
	3184,
	3184,
	0,
	0,
	0,
	6734,
	5495,
	6734,
	5495,
	6734,
	5495,
	6734,
	5495,
	9267,
	9934,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6603,
	5495,
	6734,
	0,
	0,
	0,
	0,
	0,
	0,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	6603,
	5495,
	6603,
	5495,
	6568,
	5464,
	6603,
	5495,
	6603,
	5495,
	6734,
	6734,
	5464,
	6734,
	0,
	0,
	6734,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	6734,
	6734,
	9934,
	6603,
	6509,
	1854,
	6734,
	3184,
	6734,
	6734,
	0,
	0,
	0,
	0,
	5495,
	4896,
	0,
	5495,
	5495,
	4896,
	5495,
	4896,
	4896,
	6734,
	5495,
	0,
	0,
	6734,
	5495,
	6603,
	6603,
	3184,
	6734,
	3179,
	6603,
	2569,
	4896,
	3179,
	6734,
	2569,
	5495,
	6509,
	5401,
	6603,
	6603,
	6603,
	5495,
	680,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	5495,
	5401,
	6734,
	6734,
	3184,
	5495,
	5495,
	5495,
	5495,
	4896,
	3166,
	5401,
	6734,
	6734,
	5495,
	5495,
	3184,
	6734,
	5495,
	6734,
	6734,
	6734,
	3184,
	6603,
	6734,
	5495,
	6734,
	5495,
	6734,
	9934,
	5495,
	0,
	4896,
	6603,
	1852,
	6603,
	6569,
	6603,
	2569,
	6734,
	1854,
	1112,
	4001,
	6734,
	9934,
	6734,
	4896,
	4001,
	0,
	0,
	6734,
	5495,
	6734,
	0,
	6734,
	5495,
	3184,
	6734,
	6734,
	6734,
	0,
	6734,
	6734,
	0,
	6734,
	6734,
	6734,
	6734,
	6734,
	6603,
	6734,
	6603,
	5495,
	6603,
	5495,
	6734,
	0,
	0,
	0,
	0,
	9756,
	9756,
	9756,
	9756,
	8810,
	9267,
	9267,
	9516,
	8589,
	9516,
	9516,
	9516,
	9516,
	9516,
	9516,
	8026,
	9934,
	9934,
	6734,
	4873,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1854,
	4896,
	2560,
	2569,
	2569,
	588,
	571,
	2561,
	4896,
	4872,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1854,
	2569,
	2569,
	2560,
	4896,
	6603,
	2560,
	2560,
	6603,
	6603,
	6603,
	2560,
	1614,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1854,
	1099,
	2569,
	2560,
	4896,
	4872,
	2560,
	6603,
	2560,
	2560,
	6603,
	6603,
	6603,
	2560,
	1614,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1854,
	2569,
	6603,
	6603,
	6603,
	2569,
	2560,
	4896,
	4872,
	2560,
	6603,
	2560,
	4896,
	2560,
	4896,
	2569,
	2569,
	2560,
	2560,
	6603,
	6603,
	6603,
	2569,
	2569,
	4896,
	6603,
	6603,
	2560,
	1614,
	6603,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1854,
	2569,
	2560,
	4896,
	4872,
	2569,
	6603,
	4872,
	1614,
	1099,
	2561,
	4896,
	6603,
	4872,
	1614,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1854,
	1619,
	6603,
	6603,
	6603,
	2569,
	2560,
	4896,
	4872,
	4872,
	4896,
	2560,
	4896,
	2569,
	2569,
	2569,
	4896,
	6603,
	4872,
	6603,
	6603,
	2569,
	2569,
	1614,
	1099,
	2561,
	4896,
	6603,
	4872,
	2560,
	4872,
	6603,
	1614,
	6603,
};
static const Il2CppTokenRangePair s_rgctxIndices[10] = 
{
	{ 0x02000010, { 15, 6 } },
	{ 0x0200001F, { 22, 9 } },
	{ 0x0200002D, { 38, 3 } },
	{ 0x06000046, { 0, 2 } },
	{ 0x06000047, { 2, 1 } },
	{ 0x06000094, { 3, 1 } },
	{ 0x060000A9, { 4, 10 } },
	{ 0x060000B8, { 14, 1 } },
	{ 0x06000124, { 21, 1 } },
	{ 0x06000169, { 31, 7 } },
};
extern const uint32_t g_rgctx_JsonConvert_DeserializeObject_TisT_tAACB6565AE9201C6F5492D2D41F71BF910638E2D_m9FDC5BEE62067653696FB07D1DC8B294AB422CF1;
extern const uint32_t g_rgctx_T_tAACB6565AE9201C6F5492D2D41F71BF910638E2D;
extern const uint32_t g_rgctx_T_tA3D0C2F66DB6958C9ECC8BD3C8F54FD13195EE3E;
extern const uint32_t g_rgctx_JsonConvert_DeserializeObject_TisT_t2AE65244662412CF22B9BEE12BC9881160A2BE1A_mBF8ADAB078BE754ACDC4F9A198164D484FBF9CAA;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass139_0_1_t8F13C97B8BD8082C384C37FBAB9F7482B368086A;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass139_0_1__ctor_m9B773FFA736FC70DDF6807B8B2E26A9116B08623;
extern const uint32_t g_rgctx_IProvider_Request_TisTR_t855CCBAF3780DED9CF952085A9AD6556D2FDF889_mCAC321D0FBACE71D4FE1C8D5E9F9BB48114E91B4;
extern const uint32_t g_rgctx_TR_t855CCBAF3780DED9CF952085A9AD6556D2FDF889;
extern const uint32_t g_rgctx_Task_1_t0156450E573053062DC87937B9536988D1AAA128;
extern const uint32_t g_rgctx_TaskCompletionSource_1_tE3944F294EC4F0C04D986A401AA2A63E3402F7CA;
extern const uint32_t g_rgctx_TaskCompletionSource_1__ctor_m56A9DE931CFD37A3B62DE0DF517DC8E479C4AF64;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass139_0_1_U3CRequestU3Eg__ErrorResponseU7C0_mBF21FF3173A5CE288B7CD39723D5035531ED614E;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass139_0_1_U3CRequestU3Eg__ResultResponseU7C1_m55480419A4F65C309F4E3773C9AE5D485C3C075F;
extern const uint32_t g_rgctx_TaskCompletionSource_1_get_Task_m08D404D68ADDB09D572AF12DA536D282B17D8F44;
extern const uint32_t g_rgctx_MetaMaskWallet_Request_TisTR_tE93748D2A35018E864EF508A55BA073A993E650D_mD1F8AE3FE7AD4780E3DA8B2068195E6802C57431;
extern const uint32_t g_rgctx_TaskCompletionSource_1_t7405EFD772ECB9CD2AA2AAF9D8D9AB7F307D10A3;
extern const uint32_t g_rgctx_TaskCompletionSource_1_TrySetException_m220C69B52D9B21E3CE8B3625B37E01A4435451B0;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass139_0_1_U3CRequestU3Eg__ErrorResponseU7C0_m8E7AB2FA49978088392491235D683D13B627225B;
extern const uint32_t g_rgctx_MetaMaskWallet_DeserializeObject_TisJsonRpcResult_1_tE8EED01451698AEAE8887D88072D3B5C3B144370_m27864A4536EED487F178FF78C13925789A1BA354;
extern const uint32_t g_rgctx_TaskCompletionSource_1_TrySetResult_m525A16BD91440AE9DBC4523D02C1806AF52D6110;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass139_0_1_U3CRequestU3Eg__ResultResponseU7C1_m23E00C8F589936DC2B0FF15373D3571474099CD4;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_Start_TisU3CHandleResponseWithTypesU3Ed__20_2_t029DCE7D7B8BD21E38B09B4E424498303ED4BAAE_m2922A2EC6666CB331B6699F519369B9D458425E2;
extern const uint32_t g_rgctx_JsonConvert_DeserializeObject_TisTKeyType_tFB314210432A9F7CADB0C9B29E45795613BC07E4_m308F366AD63597C4E0EF44AE4D3C19BD3985F951;
extern const uint32_t g_rgctx_TKeyType_tFB314210432A9F7CADB0C9B29E45795613BC07E4;
extern const uint32_t g_rgctx_Action_1_t4D44E4AD5D31935B6FB7A81348B566F9D96EABCA;
extern const uint32_t g_rgctx_Action_1_Invoke_m782802126E67367A35C56093F47BF9FB294A18AB;
extern const uint32_t g_rgctx_JsonConvert_DeserializeObject_TisTEncrytpedType_t8808627059B96E68D080448781411773A1CF4365_mA69144FB7108BFAD3B6E308CAD4757D83013E03B;
extern const uint32_t g_rgctx_TEncrytpedType_t8808627059B96E68D080448781411773A1CF4365;
extern const uint32_t g_rgctx_Func_2_t1D01701DC7ED8382E87CEA1BD217E379BA0566BF;
extern const uint32_t g_rgctx_Func_2_Invoke_mFDABA783F6B0D05F19AE8B80C8773DB9C7B0E6E6;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CHandleResponseWithTypesU3Ed__20_2_t0ED57876FDA8D6BD4A8BDF506DD9743DB85FE5B7_m28D34D51C089BB8340655FE7FD82D0D6637D96D9;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1_t7D93DC2348A4E80E23437CC4CDBEABFB7ED8B2AD;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1__ctor_mE517C63F9FE27FE4FCF276E54C04DCC5BE138AE2;
extern const uint32_t g_rgctx_TaskCompletionSource_1_t2E6953FB4C63B7D4D667EBDFF6BD9520E2AC8E03;
extern const uint32_t g_rgctx_TaskCompletionSource_1__ctor_m81600236D5F613C9979D8E74158DFDE9660773D3;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1_U3CRequestU3Eb__0_m13335E28307D90A8A49E344C8A825D5D7F4AAC77;
extern const uint32_t g_rgctx_TR_tA71B7108647C96DBEBAE141018925A236D2E75C9;
extern const uint32_t g_rgctx_TaskCompletionSource_1_get_Task_m0B306CC333531ED65B837053B44674F1820C9732;
extern const uint32_t g_rgctx_TR_t59FD859B97563A68A4A7321E2689B886BFE984BF;
extern const uint32_t g_rgctx_TaskCompletionSource_1_t6CD200A6E995325F337AB8326496AD878DDD1A1A;
extern const uint32_t g_rgctx_TaskCompletionSource_1_TrySetResult_m1D7AA46D6AB163FA940EF359B7DC2C1B6F10B6AD;
static const Il2CppRGCTXDefinition s_rgctxValues[41] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeObject_TisT_tAACB6565AE9201C6F5492D2D41F71BF910638E2D_m9FDC5BEE62067653696FB07D1DC8B294AB422CF1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tAACB6565AE9201C6F5492D2D41F71BF910638E2D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tA3D0C2F66DB6958C9ECC8BD3C8F54FD13195EE3E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeObject_TisT_t2AE65244662412CF22B9BEE12BC9881160A2BE1A_mBF8ADAB078BE754ACDC4F9A198164D484FBF9CAA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass139_0_1_t8F13C97B8BD8082C384C37FBAB9F7482B368086A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass139_0_1__ctor_m9B773FFA736FC70DDF6807B8B2E26A9116B08623 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IProvider_Request_TisTR_t855CCBAF3780DED9CF952085A9AD6556D2FDF889_mCAC321D0FBACE71D4FE1C8D5E9F9BB48114E91B4 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TR_t855CCBAF3780DED9CF952085A9AD6556D2FDF889 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Task_1_t0156450E573053062DC87937B9536988D1AAA128 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TaskCompletionSource_1_tE3944F294EC4F0C04D986A401AA2A63E3402F7CA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1__ctor_m56A9DE931CFD37A3B62DE0DF517DC8E479C4AF64 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass139_0_1_U3CRequestU3Eg__ErrorResponseU7C0_mBF21FF3173A5CE288B7CD39723D5035531ED614E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass139_0_1_U3CRequestU3Eg__ResultResponseU7C1_m55480419A4F65C309F4E3773C9AE5D485C3C075F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_get_Task_m08D404D68ADDB09D572AF12DA536D282B17D8F44 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MetaMaskWallet_Request_TisTR_tE93748D2A35018E864EF508A55BA073A993E650D_mD1F8AE3FE7AD4780E3DA8B2068195E6802C57431 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TaskCompletionSource_1_t7405EFD772ECB9CD2AA2AAF9D8D9AB7F307D10A3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_TrySetException_m220C69B52D9B21E3CE8B3625B37E01A4435451B0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass139_0_1_U3CRequestU3Eg__ErrorResponseU7C0_m8E7AB2FA49978088392491235D683D13B627225B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MetaMaskWallet_DeserializeObject_TisJsonRpcResult_1_tE8EED01451698AEAE8887D88072D3B5C3B144370_m27864A4536EED487F178FF78C13925789A1BA354 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_TrySetResult_m525A16BD91440AE9DBC4523D02C1806AF52D6110 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass139_0_1_U3CRequestU3Eg__ResultResponseU7C1_m23E00C8F589936DC2B0FF15373D3571474099CD4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_Start_TisU3CHandleResponseWithTypesU3Ed__20_2_t029DCE7D7B8BD21E38B09B4E424498303ED4BAAE_m2922A2EC6666CB331B6699F519369B9D458425E2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeObject_TisTKeyType_tFB314210432A9F7CADB0C9B29E45795613BC07E4_m308F366AD63597C4E0EF44AE4D3C19BD3985F951 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TKeyType_tFB314210432A9F7CADB0C9B29E45795613BC07E4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_1_t4D44E4AD5D31935B6FB7A81348B566F9D96EABCA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_1_Invoke_m782802126E67367A35C56093F47BF9FB294A18AB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeObject_TisTEncrytpedType_t8808627059B96E68D080448781411773A1CF4365_mA69144FB7108BFAD3B6E308CAD4757D83013E03B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEncrytpedType_t8808627059B96E68D080448781411773A1CF4365 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t1D01701DC7ED8382E87CEA1BD217E379BA0566BF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mFDABA783F6B0D05F19AE8B80C8773DB9C7B0E6E6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CHandleResponseWithTypesU3Ed__20_2_t0ED57876FDA8D6BD4A8BDF506DD9743DB85FE5B7_m28D34D51C089BB8340655FE7FD82D0D6637D96D9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1_t7D93DC2348A4E80E23437CC4CDBEABFB7ED8B2AD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1__ctor_mE517C63F9FE27FE4FCF276E54C04DCC5BE138AE2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TaskCompletionSource_1_t2E6953FB4C63B7D4D667EBDFF6BD9520E2AC8E03 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1__ctor_m81600236D5F613C9979D8E74158DFDE9660773D3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1_U3CRequestU3Eb__0_m13335E28307D90A8A49E344C8A825D5D7F4AAC77 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TR_tA71B7108647C96DBEBAE141018925A236D2E75C9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_get_Task_m0B306CC333531ED65B837053B44674F1820C9732 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TR_t59FD859B97563A68A4A7321E2689B886BFE984BF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TaskCompletionSource_1_t6CD200A6E995325F337AB8326496AD878DDD1A1A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_TrySetResult_m1D7AA46D6AB163FA940EF359B7DC2C1B6F10B6AD },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_MetaMask_SDK_CodeGenModule;
const Il2CppCodeGenModule g_MetaMask_SDK_CodeGenModule = 
{
	"MetaMask.SDK.dll",
	647,
	s_methodPointers,
	18,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	10,
	s_rgctxIndices,
	41,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
