﻿#include "pch-cpp.hpp"

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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>
struct CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71;
// Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>
struct CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// Nethereum.KeyStore.KeyStoreServiceBase`1<System.Object>
struct KeyStoreServiceBase_1_tAA205757F5772BB1467212A323C7EB74B028149B;
// Nethereum.KeyStore.KeyStoreServiceBase`1<Nethereum.KeyStore.Model.ScryptParams>
struct KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0;
// Nethereum.KeyStore.Model.KeyStore`1<System.Object>
struct KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017;
// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>
struct KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// Nethereum.KeyStore.Model.CipherParams
struct CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0;
// Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO
struct CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase
struct CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65;
// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO
struct CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// Nethereum.KeyStore.Crypto.DecryptionException
struct DecryptionException_t475B93777EFB780713433EEB8305E4BDCCF42738;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// Org.BouncyCastle.Crypto.IBufferedCipher
struct IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_tE4751F03244264E12A0669633A68076FD032E2CF;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1;
// Org.BouncyCastle.Crypto.IMac
struct IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992;
// Nethereum.KeyStore.Crypto.IRandomBytesGenerator
struct IRandomBytesGenerator_t1F462553AFAA1536F25BD0E9056E28C8D88BA68B;
// Org.BouncyCastle.Crypto.Prng.IRandomGenerator
struct IRandomGenerator_t50CA6B7268CF1B6ED0762EB5808373C32743C8F1;
// Nethereum.KeyStore.Model.KdfParams
struct KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB;
// Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO
struct KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13;
// Org.BouncyCastle.Crypto.Digests.KeccakDigest
struct KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC;
// Nethereum.KeyStore.Crypto.KeyStoreCrypto
struct KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E;
// Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase
struct KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958;
// Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO
struct KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367;
// Nethereum.KeyStore.KeyStoreScryptService
struct KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D;
// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1;
// Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator
struct Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D;
// Nethereum.KeyStore.Crypto.RandomBytesGenerator
struct RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Nethereum.KeyStore.Model.ScryptParams
struct ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779;
// Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO
struct ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076;
// Org.BouncyCastle.Crypto.Digests.Sha256Digest
struct Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CipherUtilities_tDA37832A133C3F502C98888EA1477FBA0EF5F8F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecryptionException_t475B93777EFB780713433EEB8305E4BDCCF42738_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterUtilities_t2330968701206F630234AD4A65667E7CAEE14EAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral423ACA01AC170A50869ECDEF572CD96995576718;
IL2CPP_EXTERN_C String_t* _stringLiteral90AF97DD8EF1877A399A4D1D1AF32DE07CB7CA27;
IL2CPP_EXTERN_C String_t* _stringLiteralAC78E78B6EC5C50ADC67D977E0F4C67424995CE6;
IL2CPP_EXTERN_C String_t* _stringLiteralB144512DA9AA6B91993CE8E07E163EA3FF0A440A;
IL2CPP_EXTERN_C String_t* _stringLiteralB7248681F5E1332CF3625028F368C8C55C58D51C;
IL2CPP_EXTERN_C String_t* _stringLiteralDEF710A7FE8B1F687BE0C4888B5002E9635CE519;
IL2CPP_EXTERN_C String_t* _stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1__ctor_m032DF032DB563EE333F936B18490F15E5857964A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_CipherText_m0D0D495D51ACCBD21C7BA3075D96E6E9E4A6BE0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_Cipher_m7BA1B867E8E4C8833CEE05C3143DE335A621F2A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_Kdf_mAB4E9A63B906AD0CEDA894E615BF3CAB540B80D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_get_Mac_m397668EA83950C2D02123C4FCBC665015AD1ACD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_set_CipherParams_mE008C30F61B193220181F8571E9B22669BC1C7E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_set_CipherText_mAB2EA2B19CDD9767567825024156FC1357581C78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_set_Cipher_m3A8287A23B23E90E4D269C6BAB72FD92C7AD59FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_set_Kdf_m2F4F184EA3A7B6112EF18F1FBA70CFF2140270E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_set_Kdfparams_m496DF4ECF94CFBFC730A619DFF35E8536275BFAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CryptoInfo_1_set_Mac_m57B69D5B6017597A4263D7C4130DF4E5E81AE667_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisKeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367_mC72C249C6450475F026EE89BE5DFFEEF5045F885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreCrypto_GenerateDerivedScryptKey_mD84A7413EE9B46393273F5D0B8E928AFFDD4F372_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreCrypto_ValidateMac_m50D46430C5F2BF65B89B4AA49C96E62788EC5D01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreScryptService_DecryptKeyStore_m97CE221D0D9D9ED305FD4B0843F9D62209E72909_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStoreServiceBase_1__ctor_m1DBE46B208189092A8D3C1548EF21969F6920922_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1__ctor_m2ECFC2CB0B05408465002F720B7142EA3F0E6B17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_get_Address_m2BD758087730CB1C5A6D149E0C7A1C1A88904161_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_get_Id_mB084F9AF1D51C89CFC94FC9F4F1BD68173BA4A4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_get_Version_mC58350AE7F50E7EF46D94FCDD702B34039265C35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_set_Address_m06D4182B667F0FA9DBB10640DF9FED69E2E61140_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_set_Crypto_m6C695CA8B0703EF97A90EAFE827F14ECE34A2BF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_set_Id_m9F9D3D789C8BEFD5EF221C06A2512457D5598B49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyStore_1_set_Version_mCC41748FB655953DC784DEDAF0A9F1D7C9C915E8_RuntimeMethod_var;
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
struct U3CModuleU3E_t98C2BB310ADDE387BEBAB023CDCD1CFDAD43BEDA 
{
};

// Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>
struct CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71  : public RuntimeObject
{
	// System.String Nethereum.KeyStore.Model.CryptoInfo`1::<Cipher>k__BackingField
	String_t* ___U3CCipherU3Ek__BackingField_0;
	// System.String Nethereum.KeyStore.Model.CryptoInfo`1::<CipherText>k__BackingField
	String_t* ___U3CCipherTextU3Ek__BackingField_1;
	// Nethereum.KeyStore.Model.CipherParams Nethereum.KeyStore.Model.CryptoInfo`1::<CipherParams>k__BackingField
	CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* ___U3CCipherParamsU3Ek__BackingField_2;
	// System.String Nethereum.KeyStore.Model.CryptoInfo`1::<Kdf>k__BackingField
	String_t* ___U3CKdfU3Ek__BackingField_3;
	// System.String Nethereum.KeyStore.Model.CryptoInfo`1::<Mac>k__BackingField
	String_t* ___U3CMacU3Ek__BackingField_4;
	// TKdfParams Nethereum.KeyStore.Model.CryptoInfo`1::<Kdfparams>k__BackingField
	RuntimeObject* ___U3CKdfparamsU3Ek__BackingField_5;
};

// Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>
struct CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C  : public RuntimeObject
{
	// System.String Nethereum.KeyStore.Model.CryptoInfo`1::<Cipher>k__BackingField
	String_t* ___U3CCipherU3Ek__BackingField_0;
	// System.String Nethereum.KeyStore.Model.CryptoInfo`1::<CipherText>k__BackingField
	String_t* ___U3CCipherTextU3Ek__BackingField_1;
	// Nethereum.KeyStore.Model.CipherParams Nethereum.KeyStore.Model.CryptoInfo`1::<CipherParams>k__BackingField
	CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* ___U3CCipherParamsU3Ek__BackingField_2;
	// System.String Nethereum.KeyStore.Model.CryptoInfo`1::<Kdf>k__BackingField
	String_t* ___U3CKdfU3Ek__BackingField_3;
	// System.String Nethereum.KeyStore.Model.CryptoInfo`1::<Mac>k__BackingField
	String_t* ___U3CMacU3Ek__BackingField_4;
	// TKdfParams Nethereum.KeyStore.Model.CryptoInfo`1::<Kdfparams>k__BackingField
	ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* ___U3CKdfparamsU3Ek__BackingField_5;
};

// Nethereum.KeyStore.KeyStoreServiceBase`1<Nethereum.KeyStore.Model.ScryptParams>
struct KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0  : public RuntimeObject
{
	// Nethereum.KeyStore.Crypto.KeyStoreCrypto Nethereum.KeyStore.KeyStoreServiceBase`1::KeyStoreCrypto
	KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* ___KeyStoreCrypto_0;
	// Nethereum.KeyStore.Crypto.IRandomBytesGenerator Nethereum.KeyStore.KeyStoreServiceBase`1::RandomBytesGenerator
	RuntimeObject* ___RandomBytesGenerator_1;
};

// Nethereum.KeyStore.Model.KeyStore`1<System.Object>
struct KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017  : public RuntimeObject
{
	// Nethereum.KeyStore.Model.CryptoInfo`1<TKdfParams> Nethereum.KeyStore.Model.KeyStore`1::<Crypto>k__BackingField
	CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* ___U3CCryptoU3Ek__BackingField_0;
	// System.String Nethereum.KeyStore.Model.KeyStore`1::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_1;
	// System.String Nethereum.KeyStore.Model.KeyStore`1::<Address>k__BackingField
	String_t* ___U3CAddressU3Ek__BackingField_2;
	// System.Int32 Nethereum.KeyStore.Model.KeyStore`1::<Version>k__BackingField
	int32_t ___U3CVersionU3Ek__BackingField_3;
};

// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>
struct KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E  : public RuntimeObject
{
	// Nethereum.KeyStore.Model.CryptoInfo`1<TKdfParams> Nethereum.KeyStore.Model.KeyStore`1::<Crypto>k__BackingField
	CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* ___U3CCryptoU3Ek__BackingField_0;
	// System.String Nethereum.KeyStore.Model.KeyStore`1::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_1;
	// System.String Nethereum.KeyStore.Model.KeyStore`1::<Address>k__BackingField
	String_t* ___U3CAddressU3Ek__BackingField_2;
	// System.Int32 Nethereum.KeyStore.Model.KeyStore`1::<Version>k__BackingField
	int32_t ___U3CVersionU3Ek__BackingField_3;
};

// Nethereum.KeyStore.Model.CipherParams
struct CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0  : public RuntimeObject
{
	// System.String Nethereum.KeyStore.Model.CipherParams::<Iv>k__BackingField
	String_t* ___U3CIvU3Ek__BackingField_0;
};

// Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO
struct CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C  : public RuntimeObject
{
	// System.String Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO::<iv>k__BackingField
	String_t* ___U3CivU3Ek__BackingField_0;
};

// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase
struct CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65  : public RuntimeObject
{
	// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::<cipher>k__BackingField
	String_t* ___U3CcipherU3Ek__BackingField_0;
	// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::<cipherText>k__BackingField
	String_t* ___U3CcipherTextU3Ek__BackingField_1;
	// Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::<cipherparams>k__BackingField
	CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* ___U3CcipherparamsU3Ek__BackingField_2;
	// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::<kdf>k__BackingField
	String_t* ___U3CkdfU3Ek__BackingField_3;
	// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::<mac>k__BackingField
	String_t* ___U3CmacU3Ek__BackingField_4;
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

// Org.BouncyCastle.Crypto.Digests.GeneralDigest
struct GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.GeneralDigest::xBuf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___xBuf_0;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.GeneralDigest::xBufOff
	int32_t ___xBufOff_1;
	// System.Int64 Org.BouncyCastle.Crypto.Digests.GeneralDigest::byteCount
	int64_t ___byteCount_2;
};

// Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser
struct JsonKeyStoreScryptSerialiser_t527A36BD8AB4E3C5573349D68CCC35AC56B7A6FC  : public RuntimeObject
{
};

// Nethereum.KeyStore.Model.KdfParams
struct KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB  : public RuntimeObject
{
	// System.Int32 Nethereum.KeyStore.Model.KdfParams::<Dklen>k__BackingField
	int32_t ___U3CDklenU3Ek__BackingField_0;
	// System.String Nethereum.KeyStore.Model.KdfParams::<Salt>k__BackingField
	String_t* ___U3CSaltU3Ek__BackingField_1;
};

// Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO
struct KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13  : public RuntimeObject
{
	// System.Int32 Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::<dklen>k__BackingField
	int32_t ___U3CdklenU3Ek__BackingField_0;
	// System.String Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::<salt>k__BackingField
	String_t* ___U3CsaltU3Ek__BackingField_1;
};

// Org.BouncyCastle.Crypto.Digests.KeccakDigest
struct KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8  : public RuntimeObject
{
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.KeccakDigest::state
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___state_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.KeccakDigest::dataQueue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dataQueue_2;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::rate
	int32_t ___rate_3;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::bitsInQueue
	int32_t ___bitsInQueue_4;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::fixedOutputLength
	int32_t ___fixedOutputLength_5;
	// System.Boolean Org.BouncyCastle.Crypto.Digests.KeccakDigest::squeezing
	bool ___squeezing_6;
};

// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::key
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key_0;
};

// Nethereum.KeyStore.Crypto.KeyStoreCrypto
struct KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E  : public RuntimeObject
{
};

// Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase
struct KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958  : public RuntimeObject
{
	// System.String Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.String Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::<address>k__BackingField
	String_t* ___U3CaddressU3Ek__BackingField_1;
	// System.Int32 Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::<version>k__BackingField
	int32_t ___U3CversionU3Ek__BackingField_2;
};

// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::parameters
	RuntimeObject* ___parameters_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::iv
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv_1;
};

// Org.BouncyCastle.Crypto.PbeParametersGenerator
struct PbeParametersGenerator_t52F4B2C45D5DF5393DAF81BA17BA7CE1BA770D9E  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.PbeParametersGenerator::mPassword
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mPassword_0;
	// System.Byte[] Org.BouncyCastle.Crypto.PbeParametersGenerator::mSalt
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mSalt_1;
	// System.Int32 Org.BouncyCastle.Crypto.PbeParametersGenerator::mIterationCount
	int32_t ___mIterationCount_2;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

// Nethereum.KeyStore.Crypto.RandomBytesGenerator
struct RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B  : public RuntimeObject
{
};

// Nethereum.KeyStore.Crypto.ScryptNet
struct ScryptNet_t51830A58E0C438BED96AEFA18ACA6EE151F48727  : public RuntimeObject
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

// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO
struct CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B  : public CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65
{
	// Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO::<kdfparams>k__BackingField
	ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* ___U3CkdfparamsU3Ek__BackingField_5;
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

// Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO
struct KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367  : public KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958
{
	// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO::<crypto>k__BackingField
	CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* ___U3CcryptoU3Ek__BackingField_3;
};

// Nethereum.KeyStore.KeyStoreScryptService
struct KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D  : public KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0
{
};

// Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator
struct Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D  : public PbeParametersGenerator_t52F4B2C45D5DF5393DAF81BA17BA7CE1BA770D9E
{
	// Org.BouncyCastle.Crypto.IMac Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator::hMac
	RuntimeObject* ___hMac_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator::state
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___state_4;
};

// Nethereum.KeyStore.Model.ScryptParams
struct ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779  : public KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB
{
	// System.Int32 Nethereum.KeyStore.Model.ScryptParams::<N>k__BackingField
	int32_t ___U3CNU3Ek__BackingField_2;
	// System.Int32 Nethereum.KeyStore.Model.ScryptParams::<R>k__BackingField
	int32_t ___U3CRU3Ek__BackingField_3;
	// System.Int32 Nethereum.KeyStore.Model.ScryptParams::<P>k__BackingField
	int32_t ___U3CPU3Ek__BackingField_4;
};

// Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO
struct ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61  : public KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13
{
	// System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::<n>k__BackingField
	int32_t ___U3CnU3Ek__BackingField_2;
	// System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::<r>k__BackingField
	int32_t ___U3CrU3Ek__BackingField_3;
	// System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::<p>k__BackingField
	int32_t ___U3CpU3Ek__BackingField_4;
};

// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076  : public Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8
{
	// Org.BouncyCastle.Crypto.Prng.IRandomGenerator Org.BouncyCastle.Security.SecureRandom::generator
	RuntimeObject* ___generator_7;
};

// Org.BouncyCastle.Crypto.Digests.Sha256Digest
struct Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A  : public GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7
{
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H1
	uint32_t ___H1_3;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H2
	uint32_t ___H2_4;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H3
	uint32_t ___H3_5;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H4
	uint32_t ___H4_6;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H5
	uint32_t ___H5_7;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H6
	uint32_t ___H6_8;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H7
	uint32_t ___H7_9;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::H8
	uint32_t ___H8_10;
	// System.UInt32[] Org.BouncyCastle.Crypto.Digests.Sha256Digest::X
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___X_11;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha256Digest::xOff
	int32_t ___xOff_12;
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

// Nethereum.KeyStore.Crypto.DecryptionException
struct DecryptionException_t475B93777EFB780713433EEB8305E4BDCCF42738  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// <Module>

// <Module>

// Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>

// Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>

// Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>

// Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>

// Nethereum.KeyStore.KeyStoreServiceBase`1<Nethereum.KeyStore.Model.ScryptParams>

// Nethereum.KeyStore.KeyStoreServiceBase`1<Nethereum.KeyStore.Model.ScryptParams>

// Nethereum.KeyStore.Model.KeyStore`1<System.Object>

// Nethereum.KeyStore.Model.KeyStore`1<System.Object>

// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>

// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>

// Nethereum.KeyStore.Model.CipherParams

// Nethereum.KeyStore.Model.CipherParams

// Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO

// Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO

// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase

// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase

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

// Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser

// Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser

// Nethereum.KeyStore.Model.KdfParams

// Nethereum.KeyStore.Model.KdfParams

// Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO

// Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO

// Org.BouncyCastle.Crypto.Digests.KeccakDigest
struct KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_StaticFields
{
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.KeccakDigest::KeccakRoundConstants
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___KeccakRoundConstants_0;
};

// Org.BouncyCastle.Crypto.Digests.KeccakDigest

// Org.BouncyCastle.Crypto.Parameters.KeyParameter

// Org.BouncyCastle.Crypto.Parameters.KeyParameter

// Nethereum.KeyStore.Crypto.KeyStoreCrypto

// Nethereum.KeyStore.Crypto.KeyStoreCrypto

// Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase

// Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase

// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV

// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV

// Org.BouncyCastle.Crypto.PbeParametersGenerator

// Org.BouncyCastle.Crypto.PbeParametersGenerator

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// Nethereum.KeyStore.Crypto.RandomBytesGenerator
struct RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_StaticFields
{
	// Org.BouncyCastle.Security.SecureRandom Nethereum.KeyStore.Crypto.RandomBytesGenerator::Random
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___Random_0;
};

// Nethereum.KeyStore.Crypto.RandomBytesGenerator

// Nethereum.KeyStore.Crypto.ScryptNet

// Nethereum.KeyStore.Crypto.ScryptNet

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

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

// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO

// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO

// Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO

// Nethereum.KeyStore.KeyStoreScryptService

// Nethereum.KeyStore.KeyStoreScryptService

// Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator

// Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator

// Nethereum.KeyStore.Model.ScryptParams

// Nethereum.KeyStore.Model.ScryptParams

// Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO

// Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO

// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_StaticFields
{
	// System.Int64 Org.BouncyCastle.Security.SecureRandom::counter
	int64_t ___counter_5;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Security.SecureRandom::master
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___master_6;
	// System.Double Org.BouncyCastle.Security.SecureRandom::DoubleScale
	double ___DoubleScale_8;
};

// Org.BouncyCastle.Security.SecureRandom

// Org.BouncyCastle.Crypto.Digests.Sha256Digest
struct Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_StaticFields
{
	// System.UInt32[] Org.BouncyCastle.Crypto.Digests.Sha256Digest::K
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___K_13;
};

// Org.BouncyCastle.Crypto.Digests.Sha256Digest

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Nethereum.KeyStore.Crypto.DecryptionException

// Nethereum.KeyStore.Crypto.DecryptionException

// System.ArgumentException

// System.ArgumentException

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


// System.Void Nethereum.KeyStore.KeyStoreServiceBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreServiceBase_1__ctor_m36A9B780F55EDC9AC4A3344AF79E02500B3AB7E0_gshared (KeyStoreServiceBase_1_tAA205757F5772BB1467212A323C7EB74B028149B* __this, const RuntimeMethod* method) ;
// Nethereum.KeyStore.Model.CryptoInfo`1<TKdfParams> Nethereum.KeyStore.Model.KeyStore`1<System.Object>::get_Crypto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* KeyStore_1_get_Crypto_m362D6AF9A7BF2BF3B219D424C1032FA41E8E6C38_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::get_Mac()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfo_1_get_Mac_m055A7202D58A9C26ACE8916AA09E61188A5DDECD_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) ;
// Nethereum.KeyStore.Model.CipherParams Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::get_CipherParams()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* CryptoInfo_1_get_CipherParams_mEFD7BECC8575B9293B4AED072809D6633279DACF_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::get_CipherText()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfo_1_get_CipherText_m8420F5C90CAE65A1937800647E74C598DAB22A8A_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) ;
// TKdfParams Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::get_Kdfparams()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CryptoInfo_1_get_Kdfparams_m5E9AD76074E8F4BFBA54C9536B34974011401AC9_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.KeyStore`1<System.Object>::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KeyStore_1_get_Address_m5F5EA6C9152DC138F05852DB6B99403272396FA9_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.KeyStore`1<System.Object>::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KeyStore_1_get_Id_mA2BB933706FD75C2E8C1B9F68E7A69B95C90E8BE_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, const RuntimeMethod* method) ;
// System.Int32 Nethereum.KeyStore.Model.KeyStore`1<System.Object>::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyStore_1_get_Version_mD84F708EDB5D57EE21AC2D13ACDDE79797ECF8D9_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::get_Cipher()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfo_1_get_Cipher_m9B49A00BF1810DCCCB16A7B10F530B3D7497E002_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::get_Kdf()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfo_1_get_Kdf_m2D86721BF4AD889D24466A95184E47CDB2A57DC2_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KeyStore`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStore_1__ctor_mE7E4BA95341698B0C1612BC2A25F3745126A66D5_gshared (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KeyStore`1<System.Object>::set_Address(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStore_1_set_Address_mA07ED729404AE5235478AD487878BA0E586F17C1_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KeyStore`1<System.Object>::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStore_1_set_Id_m3420C8176B12F55B174C71505E14F217DD006A09_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KeyStore`1<System.Object>::set_Version(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStore_1_set_Version_mBCC01AB392E374F30A4C64911F11270F953CDFD7_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfo_1__ctor_m260289CE9EE4D93680D7C93DD53A131AA0E62955_gshared (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KeyStore`1<System.Object>::set_Crypto(Nethereum.KeyStore.Model.CryptoInfo`1<TKdfParams>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStore_1_set_Crypto_mEB8BE7B51499176BE67A3A002F266A770B50259E_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::set_Cipher(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_Cipher_m04CD908F1C173EA7292CC67031546B4A15AA4186_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::set_CipherText(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_CipherText_m76F538CAC717AE7BC894683B6DA9EAAA9DB6FE96_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::set_Kdf(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_Kdf_mF7677CA999DA927074A8807A8C0F33AC03242CEA_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::set_Mac(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_Mac_mB9D282B2388CFEABBCF79168151FC856FD0A87DE_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::set_Kdfparams(TKdfParams)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_Kdfparams_mCF71DADA258CB5683877958BB3500389739E05A2_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<System.Object>::set_CipherParams(Nethereum.KeyStore.Model.CipherParams)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_CipherParams_m61BF691E694BFDFD0D0943CF2EB9A2D8BF8BD4F0_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* ___0_value, const RuntimeMethod* method) ;

// System.Void Nethereum.KeyStore.KeyStoreServiceBase`1<Nethereum.KeyStore.Model.ScryptParams>::.ctor()
inline void KeyStoreServiceBase_1__ctor_m1DBE46B208189092A8D3C1548EF21969F6920922 (KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0* __this, const RuntimeMethod* method)
{
	((  void (*) (KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0*, const RuntimeMethod*))KeyStoreServiceBase_1__ctor_m36A9B780F55EDC9AC4A3344AF79E02500B3AB7E0_gshared)(__this, method);
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GetPasswordAsBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GetPasswordAsBytes_mA2E8301D37E8A83B376BAF88F222636728A9AF93 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, String_t* ___0_password, const RuntimeMethod* method) ;
// System.Int32 Nethereum.KeyStore.Model.ScryptParams::get_N()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParams_get_N_mE57FDEFFC05A1BEE6E1D2AEC8E0768206BEE49E2_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) ;
// System.Int32 Nethereum.KeyStore.Model.ScryptParams::get_R()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParams_get_R_mBBE1A0B0B5E9B5E32A3E798FAC0766775DDF186E_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) ;
// System.Int32 Nethereum.KeyStore.Model.ScryptParams::get_P()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParams_get_P_mF431C35431D06FDC71DF89E3BCA31DB14A9C880E_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) ;
// System.Int32 Nethereum.KeyStore.Model.KdfParams::get_Dklen()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KdfParams_get_Dklen_m1E5547E75FFAD02C826CFDC8CD09AC6EAEEBDB14_inline (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GenerateDerivedScryptKey(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateDerivedScryptKey_mD84A7413EE9B46393273F5D0B8E928AFFDD4F372 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_password, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_salt, int32_t ___2_n, int32_t ___3_r, int32_t ___4_p, int32_t ___5_dkLen, bool ___6_checkRandN, const RuntimeMethod* method) ;
// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams> Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::DeserialiseScrypt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* JsonKeyStoreScryptSerialiser_DeserialiseScrypt_m444B7A8F3A8E09938DAF4264B6A809D3281F20FF (String_t* ___0_json, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::SerialiseScrypt(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonKeyStoreScryptSerialiser_SerialiseScrypt_m021A1C32895A9DB278D67F315F4ACBCBC2944944 (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* ___0_scryptKeyStore, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// Nethereum.KeyStore.Model.CryptoInfo`1<TKdfParams> Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>::get_Crypto()
inline CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* __this, const RuntimeMethod* method)
{
	return ((  CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* (*) (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E*, const RuntimeMethod*))KeyStore_1_get_Crypto_m362D6AF9A7BF2BF3B219D424C1032FA41E8E6C38_gshared_inline)(__this, method);
}
// System.String Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::get_Mac()
inline String_t* CryptoInfo_1_get_Mac_m397668EA83950C2D02123C4FCBC665015AD1ACD8_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, const RuntimeMethod*))CryptoInfo_1_get_Mac_m055A7202D58A9C26ACE8916AA09E61188A5DDECD_gshared_inline)(__this, method);
}
// System.Byte[] Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::HexToByteArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE (String_t* ___0_value, const RuntimeMethod* method) ;
// Nethereum.KeyStore.Model.CipherParams Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::get_CipherParams()
inline CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, const RuntimeMethod* method)
{
	return ((  CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, const RuntimeMethod*))CryptoInfo_1_get_CipherParams_mEFD7BECC8575B9293B4AED072809D6633279DACF_gshared_inline)(__this, method);
}
// System.String Nethereum.KeyStore.Model.CipherParams::get_Iv()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CipherParams_get_Iv_mACA12BCFA8DA0C8DF791A05028119A5A14F4CBC4_inline (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* __this, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::get_CipherText()
inline String_t* CryptoInfo_1_get_CipherText_m0D0D495D51ACCBD21C7BA3075D96E6E9E4A6BE0B_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, const RuntimeMethod*))CryptoInfo_1_get_CipherText_m8420F5C90CAE65A1937800647E74C598DAB22A8A_gshared_inline)(__this, method);
}
// TKdfParams Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::get_Kdfparams()
inline ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, const RuntimeMethod* method)
{
	return ((  ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, const RuntimeMethod*))CryptoInfo_1_get_Kdfparams_m5E9AD76074E8F4BFBA54C9536B34974011401AC9_gshared_inline)(__this, method);
}
// System.String Nethereum.KeyStore.Model.KdfParams::get_Salt()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KdfParams_get_Salt_mBC1DA50823694582BA754AAAB3F2C098C024205B_inline (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::DecryptScrypt(System.String,System.Byte[],System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_DecryptScrypt_m828C9ED4E8F3A128B449D0AA91CC498B2EBE6524 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, String_t* ___0_password, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_mac, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_iv, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_cipherText, int32_t ___4_n, int32_t ___5_p, int32_t ___6_r, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_salt, int32_t ___8_dklen, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String Nethereum.Hex.HexConvertors.Extensions.HexByteConvertorExtensions::ToHex(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, bool ___1_prefix, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CipherParams::set_Iv(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CipherParams_set_Iv_mE77D6319BE01333E7B3F6F7F98453DABAE5BB6C6_inline (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KdfParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KdfParams__ctor_m39CCECF77A608644CB36BBBA3081362363BFF843 (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherParamsDTO__ctor_m3A7C44114C8F04E69B34C05E366716D7C18066BB (CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_cipherparams(Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_cipherparams_mE014108E074C5803596A0CE491004920054A7A86_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoDTOBase__ctor_m37903E098FB857B1E4AD7CF702F9B6ACA53A6789 (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParamsDTO__ctor_m44F6BFB85D6013B5CC771EF78AB158D283A58CDD (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO::set_kdfparams(Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoScryptDTO_set_kdfparams_mD261CED055A2C04A72FAFF40AE3C420DFAC1483B_inline (CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* __this, ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* ___0_value, const RuntimeMethod* method) ;
// Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::MapModelToDTO(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* JsonKeyStoreScryptSerialiser_MapModelToDTO_m74227D5A6398A22F0C248CE67F7B734EB2FCAFC8 (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* ___0_scryptKeyStore, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO>(System.String)
inline KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* JsonConvert_DeserializeObject_TisKeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367_mC72C249C6450475F026EE89BE5DFFEEF5045F885 (String_t* ___0_value, const RuntimeMethod* method)
{
	return ((  KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared)(___0_value, method);
}
// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams> Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::MapDTOToModel(Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* JsonKeyStoreScryptSerialiser_MapDTOToModel_mA7AA3E2107425F4077076092C1DBBAA8F0690AF2 (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* ___0_dto, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreScryptDTO__ctor_m92B3E01F3801D999CDFF37E7D28A10EA14421472 (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* __this, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>::get_Address()
inline String_t* KeyStore_1_get_Address_m2BD758087730CB1C5A6D149E0C7A1C1A88904161_inline (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E*, const RuntimeMethod*))KeyStore_1_get_Address_m5F5EA6C9152DC138F05852DB6B99403272396FA9_gshared_inline)(__this, method);
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::set_address(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStoreDTOBase_set_address_m4E71FF95A9D7900DD962E9C8EDA24D1053EC5C5D_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>::get_Id()
inline String_t* KeyStore_1_get_Id_mB084F9AF1D51C89CFC94FC9F4F1BD68173BA4A4C_inline (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E*, const RuntimeMethod*))KeyStore_1_get_Id_mA2BB933706FD75C2E8C1B9F68E7A69B95C90E8BE_gshared_inline)(__this, method);
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStoreDTOBase_set_id_m764A98BA5E66E066334464B230ED752BA37A1905_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>::get_Version()
inline int32_t KeyStore_1_get_Version_mC58350AE7F50E7EF46D94FCDD702B34039265C35_inline (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E*, const RuntimeMethod*))KeyStore_1_get_Version_mD84F708EDB5D57EE21AC2D13ACDDE79797ECF8D9_gshared_inline)(__this, method);
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::set_version(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStoreDTOBase_set_version_m8891C2744FDC8C814E198F4C66AF3F1E87F0180F_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO::get_crypto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* __this, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::get_Cipher()
inline String_t* CryptoInfo_1_get_Cipher_m7BA1B867E8E4C8833CEE05C3143DE335A621F2A5_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, const RuntimeMethod*))CryptoInfo_1_get_Cipher_m9B49A00BF1810DCCCB16A7B10F530B3D7497E002_gshared_inline)(__this, method);
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_cipher(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_cipher_m577997203D05BD47C1F03175A176CEE47468A563_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_cipherText(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_cipherText_m100CA8B4796B16C2C927A56C894D18F3B354DC03_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::get_Kdf()
inline String_t* CryptoInfo_1_get_Kdf_mAB4E9A63B906AD0CEDA894E615BF3CAB540B80D1_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, const RuntimeMethod*))CryptoInfo_1_get_Kdf_m2D86721BF4AD889D24466A95184E47CDB2A57DC2_gshared_inline)(__this, method);
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_kdf(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_kdf_m0CE24ACCEAD963F6D649715EFAB53CE0B3BD7F54_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_mac(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_mac_m8C7197F81B08179424DDC30A8D72413D82D3CC54_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO::get_kdfparams()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline (CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::set_r(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParamsDTO_set_r_m9EA349D301AF31CBC06A4204807852BC10B8772B_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::set_n(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParamsDTO_set_n_mF43334DBC344EFF9F8DCED73543A5A25847A6A55_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::set_p(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParamsDTO_set_p_m2A2C1324B4C9F90F65E916EB957EDB148865DF45_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::set_dklen(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KdfParamsDTO_set_dklen_mA75B7F4B76A3E1E4D4D3F7C139F0CF15A097A0A6_inline (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::set_salt(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KdfParamsDTO_set_salt_m1D5465724D0D2EC60A15AE7671FC6AC7266052F2_inline (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_cipherparams()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* CryptoInfoDTOBase_get_cipherparams_mE9D29F3332F2FC754DE4C29BC8C183F08A389F77_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO::set_iv(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CipherParamsDTO_set_iv_mAA82EE8F95D570A32B28DDB5D137E452547E1447_inline (CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>::.ctor()
inline void KeyStore_1__ctor_m2ECFC2CB0B05408465002F720B7142EA3F0E6B17 (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* __this, const RuntimeMethod* method)
{
	((  void (*) (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E*, const RuntimeMethod*))KeyStore_1__ctor_mE7E4BA95341698B0C1612BC2A25F3745126A66D5_gshared)(__this, method);
}
// System.String Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::get_address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KeyStoreDTOBase_get_address_m0134A1C538EC96FD7F883CF2B69E95EA0CAB0FD3_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>::set_Address(System.String)
inline void KeyStore_1_set_Address_m06D4182B667F0FA9DBB10640DF9FED69E2E61140_inline (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E*, String_t*, const RuntimeMethod*))KeyStore_1_set_Address_mA07ED729404AE5235478AD487878BA0E586F17C1_gshared_inline)(__this, ___0_value, method);
}
// System.String Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KeyStoreDTOBase_get_id_mFDCD569677A39C6B99970D2C598D7587EFB2E77C_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>::set_Id(System.String)
inline void KeyStore_1_set_Id_m9F9D3D789C8BEFD5EF221C06A2512457D5598B49_inline (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E*, String_t*, const RuntimeMethod*))KeyStore_1_set_Id_m3420C8176B12F55B174C71505E14F217DD006A09_gshared_inline)(__this, ___0_value, method);
}
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::get_version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyStoreDTOBase_get_version_m7F00B43A9B900EE11DDA1E69DB08CCB03C5BE9ED_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>::set_Version(System.Int32)
inline void KeyStore_1_set_Version_mCC41748FB655953DC784DEDAF0A9F1D7C9C915E8_inline (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E*, int32_t, const RuntimeMethod*))KeyStore_1_set_Version_mBCC01AB392E374F30A4C64911F11270F953CDFD7_gshared_inline)(__this, ___0_value, method);
}
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::.ctor()
inline void CryptoInfo_1__ctor_m032DF032DB563EE333F936B18490F15E5857964A (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, const RuntimeMethod*))CryptoInfo_1__ctor_m260289CE9EE4D93680D7C93DD53A131AA0E62955_gshared)(__this, method);
}
// System.Void Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>::set_Crypto(Nethereum.KeyStore.Model.CryptoInfo`1<TKdfParams>)
inline void KeyStore_1_set_Crypto_m6C695CA8B0703EF97A90EAFE827F14ECE34A2BF0_inline (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* __this, CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E*, CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, const RuntimeMethod*))KeyStore_1_set_Crypto_mEB8BE7B51499176BE67A3A002F266A770B50259E_gshared_inline)(__this, ___0_value, method);
}
// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_cipher()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_cipher_mC2254AEF9DABAE8647851B32135596ED041004D7_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::set_Cipher(System.String)
inline void CryptoInfo_1_set_Cipher_m3A8287A23B23E90E4D269C6BAB72FD92C7AD59FF_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, String_t*, const RuntimeMethod*))CryptoInfo_1_set_Cipher_m04CD908F1C173EA7292CC67031546B4A15AA4186_gshared_inline)(__this, ___0_value, method);
}
// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_cipherText()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_cipherText_mCA4F7FEE19C44BB4E20FF7B4D06E6F9832CC2DEF_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::set_CipherText(System.String)
inline void CryptoInfo_1_set_CipherText_mAB2EA2B19CDD9767567825024156FC1357581C78_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, String_t*, const RuntimeMethod*))CryptoInfo_1_set_CipherText_m76F538CAC717AE7BC894683B6DA9EAAA9DB6FE96_gshared_inline)(__this, ___0_value, method);
}
// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_kdf()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_kdf_m37F91BCF553659BC936ACA04FBE68BAD0AD09703_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::set_Kdf(System.String)
inline void CryptoInfo_1_set_Kdf_m2F4F184EA3A7B6112EF18F1FBA70CFF2140270E0_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, String_t*, const RuntimeMethod*))CryptoInfo_1_set_Kdf_mF7677CA999DA927074A8807A8C0F33AC03242CEA_gshared_inline)(__this, ___0_value, method);
}
// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_mac()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_mac_m832D5DAE6B8D34645CB12D6C1EF621E8247053DB_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::set_Mac(System.String)
inline void CryptoInfo_1_set_Mac_m57B69D5B6017597A4263D7C4130DF4E5E81AE667_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, String_t*, const RuntimeMethod*))CryptoInfo_1_set_Mac_mB9D282B2388CFEABBCF79168151FC856FD0A87DE_gshared_inline)(__this, ___0_value, method);
}
// System.Void Nethereum.KeyStore.Model.ScryptParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParams__ctor_m5DC4BDC83AC01594CA6FCBED4B0AE865F33229FD (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::set_Kdfparams(TKdfParams)
inline void CryptoInfo_1_set_Kdfparams_m496DF4ECF94CFBFC730A619DFF35E8536275BFAB_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779*, const RuntimeMethod*))CryptoInfo_1_set_Kdfparams_mCF71DADA258CB5683877958BB3500389739E05A2_gshared_inline)(__this, ___0_value, method);
}
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::get_r()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParamsDTO_get_r_mD2EED1B5689E035883BB29D9BD1A8B303412DF65_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.ScryptParams::set_R(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParams_set_R_m9AD9236A19430A9B44EFA3301D417E7F665FDAAE_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::get_n()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParamsDTO_get_n_m3FF77C12A496BB3D66BDB6EDB8DAF21525CE2AB8_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.ScryptParams::set_N(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParams_set_N_mD7A43E5EAAB1D1C3D9AFE496F7ED17549AC7D670_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::get_p()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParamsDTO_get_p_m19884391C68271FF5FB3BEF1CF2935DE29E834F1_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.ScryptParams::set_P(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParams_set_P_m54B8987AEE116A5F01F276FB41F5B7BD6CE93FD7_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::get_dklen()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KdfParamsDTO_get_dklen_mF4F94F51F353F4A8CF43F2D9BD782FB90FF8142D_inline (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KdfParams::set_Dklen(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KdfParams_set_Dklen_m8873AE7294C28118FDADC3F76AB3FCCA12ED0A9E_inline (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.String Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::get_salt()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KdfParamsDTO_get_salt_m6238900E8629F7663690AD6E1E4C2FF99E8F35ED_inline (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.KdfParams::set_Salt(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KdfParams_set_Salt_m578F3DA59E3C91B1C70F13793C6926210CE139F7_inline (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CipherParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherParams__ctor_m6EF7551DAA09455A6D0CB9B5E98BA76CCD98072A (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Model.CryptoInfo`1<Nethereum.KeyStore.Model.ScryptParams>::set_CipherParams(Nethereum.KeyStore.Model.CipherParams)
inline void CryptoInfo_1_set_CipherParams_mE008C30F61B193220181F8571E9B22669BC1C7E4_inline (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* __this, CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*, CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0*, const RuntimeMethod*))CryptoInfo_1_set_CipherParams_m61BF691E694BFDFD0D0943CF2EB9A2D8BF8BD4F0_gshared_inline)(__this, ___0_value, method);
}
// System.String Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO::get_iv()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CipherParamsDTO_get_iv_m9A9BB6EC013B70B8EE1542B30F8644D520FEE92C_inline (CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreDTOBase__ctor_m0D44032DCB424D46C0967E5AE492860854200F0F (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoScryptDTO__ctor_m4D5FE44A524F51AB6585157B0D17B6B135ECB074 (CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* __this, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO::set_crypto(Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStoreScryptDTO_set_crypto_m6B338293B428CD65FBC9511AF668A777FDA99892_inline (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* __this, CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* ___0_value, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KdfParamsDTO__ctor_m33FABA503A55656C7E129E3D0EBCC23D1C6348A3 (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.ScryptNet::CryptoScrypt(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ScryptNet_CryptoScrypt_m5AAEB7E15BBC29209AB45FA6EB93C8602A7BF7F8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_password, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_salt, int32_t ___2_N, int32_t ___3_r, int32_t ___4_p, int32_t ___5_dkLen, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__ctor_m1D83E44DC559F9E747241A63E130AF770D442FCF (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, int32_t ___0_bitLength, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::CalculateKeccakHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_CalculateKeccakHash_mC8A981BED599BCAE5AC30BF291A2E96620C1B35B (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Security.ParameterUtilities::CreateKeyParameter(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* ParameterUtilities_CreateKeyParameter_m503070D02626F2E547CED69879BB7A359ED9ED19 (String_t* ___0_algorithm, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_keyBytes, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::.ctor(Org.BouncyCastle.Crypto.ICipherParameters,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParametersWithIV__ctor_mC1B4901D3CEBECE5903FE14597AA0701B7B7C994 (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, RuntimeObject* ___0_parameters, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_iv, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.IBufferedCipher Org.BouncyCastle.Security.CipherUtilities::GetCipher(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CipherUtilities_GetCipher_m120CBF0B698B4B035A827FF2E710AD7B170DC615 (String_t* ___0_algorithm, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::Decrypt(System.Byte[],System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_Decrypt_m69545AE305F21FD8AEA6EB106CE35AF55812E0DA (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mac, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_iv, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_cipherText, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_derivedKey, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.KeyStoreCrypto::ValidateMac(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreCrypto_ValidateMac_m50D46430C5F2BF65B89B4AA49C96E62788EC5D01 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mac, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_cipherText, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_derivedKey, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GenerateAesCtrCipher(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateAesCtrCipher_mAEAC7F39874147CD2A0A3E3FD499934FFAEA0991 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_iv, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_encryptKey, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_input, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GenerateMac(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateMac_mC6C9A66E314C1298593041FE80E0037FB4ECAF99 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_derivedKey, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_cipherText, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.DecryptionException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecryptionException__ctor_m77BC09FFF4E1BA18CF1E1F7CF0342BC72A274097 (DecryptionException_t475B93777EFB780713433EEB8305E4BDCCF42738* __this, String_t* ___0_msg, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.RandomBytesGenerator::GenerateRandomBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RandomBytesGenerator_GenerateRandomBytes_m295AE07A9AEDFF1967610054AD8FC24EC08A7FA9 (RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B* __this, int32_t ___0_size, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Security.SecureRandom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureRandom__ctor_m1FB3C478CD5CC4CDF68C981D8F5F89FC8EF8CC68 (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha256Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha256Digest__ctor_m6A98252E0DAF748D5D1BDBCDA91042301B1657D8 (Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Generators.Pkcs5S2ParametersGenerator::.ctor(Org.BouncyCastle.Crypto.IDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pkcs5S2ParametersGenerator__ctor_m43D8AC42079DF38586045859373DF2C8825A6C71 (Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D* __this, RuntimeObject* ___0_digest, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::GetKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16 (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* __this, const RuntimeMethod* method) ;
// System.Byte[] Nethereum.KeyStore.Crypto.ScryptNet::SingleIterationPBKDF2(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ScryptNet_SingleIterationPBKDF2_m5C15EBEBF23B38F84C60D6690A18031F501F6790 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_P, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_S, int32_t ___2_dkLen, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::SMix(System.Byte*,System.Int32,System.Int32,System.UInt32*,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_SMix_m14952E992EC6AEEB26E9D84AE1C6471C1546F246 (uint8_t* ___0_B, int32_t ___1_r, int32_t ___2_N, uint32_t* ___3_V, uint32_t* ___4_XY, const RuntimeMethod* method) ;
// System.UInt32 Nethereum.KeyStore.Crypto.ScryptNet::R(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F (uint32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::BulkCopy(System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_BulkCopy_m02C41323623B15BE75F69BAF6CC1B679B5CFBC29 (void* ___0_dst, void* ___1_src, int32_t ___2_len, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::BulkXor(System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_BulkXor_m605660F65DADB0766CF15C6AF95602335E0DB7BA (void* ___0_dst, void* ___1_src, int32_t ___2_len, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::Salsa208(System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_Salsa208_m4646DF9B913D1A96DC008CCAABAF2B9300C9A512 (uint32_t* ___0_B, const RuntimeMethod* method) ;
// System.UInt32 Nethereum.KeyStore.Crypto.ScryptNet::Decode32(System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ScryptNet_Decode32_m72CB0DD11562278FED4B6622F7819E3810D93B3E (uint8_t* ___0_p, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::BlockMix(System.UInt32*,System.UInt32*,System.UInt32*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_BlockMix_mE84FDFD2F76264C25F3C74C5EA9C89242C417798 (uint32_t* ___0_Bin, uint32_t* ___1_Bout, uint32_t* ___2_X, int32_t ___3_r, const RuntimeMethod* method) ;
// System.Int64 Nethereum.KeyStore.Crypto.ScryptNet::Integerify(System.UInt32*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ScryptNet_Integerify_m7CC0659FA5AED6CE8D42793C7D98F527E72B75B4 (uint32_t* ___0_B, int32_t ___1_r, const RuntimeMethod* method) ;
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::Encode32(System.Byte*,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_Encode32_mE2F354CEBB2F7B991142868DA0B05DC287079389 (uint8_t* ___0_p, uint32_t ___1_x, const RuntimeMethod* method) ;
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
// System.Void Nethereum.KeyStore.KeyStoreScryptService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreScryptService__ctor_mE569E0226BEA6594C280E2F2CE16C21C87C956E5 (KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreServiceBase_1__ctor_m1DBE46B208189092A8D3C1548EF21969F6920922_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyStoreServiceBase_1__ctor_m1DBE46B208189092A8D3C1548EF21969F6920922(__this, KeyStoreServiceBase_1__ctor_m1DBE46B208189092A8D3C1548EF21969F6920922_RuntimeMethod_var);
		return;
	}
}
// System.Byte[] Nethereum.KeyStore.KeyStoreScryptService::GenerateDerivedKey(System.String,System.Byte[],Nethereum.KeyStore.Model.ScryptParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreScryptService_GenerateDerivedKey_mA5067DA8F651D23C272DEA33D511463D9057FF40 (KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* __this, String_t* ___0_password, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_salt, ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* ___2_kdfParams, const RuntimeMethod* method) 
{
	{
		KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* L_0 = ((KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0*)__this)->___KeyStoreCrypto_0;
		KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* L_1 = ((KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0*)__this)->___KeyStoreCrypto_0;
		String_t* L_2 = ___0_password;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = KeyStoreCrypto_GetPasswordAsBytes_mA2E8301D37E8A83B376BAF88F222636728A9AF93(L_1, L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_salt;
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_5 = ___2_kdfParams;
		int32_t L_6;
		L_6 = ScryptParams_get_N_mE57FDEFFC05A1BEE6E1D2AEC8E0768206BEE49E2_inline(L_5, NULL);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_7 = ___2_kdfParams;
		int32_t L_8;
		L_8 = ScryptParams_get_R_mBBE1A0B0B5E9B5E32A3E798FAC0766775DDF186E_inline(L_7, NULL);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_9 = ___2_kdfParams;
		int32_t L_10;
		L_10 = ScryptParams_get_P_mF431C35431D06FDC71DF89E3BCA31DB14A9C880E_inline(L_9, NULL);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_11 = ___2_kdfParams;
		int32_t L_12;
		L_12 = KdfParams_get_Dklen_m1E5547E75FFAD02C826CFDC8CD09AC6EAEEBDB14_inline(L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = KeyStoreCrypto_GenerateDerivedScryptKey_mD84A7413EE9B46393273F5D0B8E928AFFDD4F372(L_0, L_3, L_4, L_6, L_8, L_10, L_12, (bool)0, NULL);
		return L_13;
	}
}
// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams> Nethereum.KeyStore.KeyStoreScryptService::DeserializeKeyStoreFromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* KeyStoreScryptService_DeserializeKeyStoreFromJson_mBF41D80D7E551C8750D75C84298C872ED83C36CA (KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* __this, String_t* ___0_json, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_json;
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_1;
		L_1 = JsonKeyStoreScryptSerialiser_DeserialiseScrypt_m444B7A8F3A8E09938DAF4264B6A809D3281F20FF(L_0, NULL);
		return L_1;
	}
}
// System.String Nethereum.KeyStore.KeyStoreScryptService::SerializeKeyStoreToJson(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStoreScryptService_SerializeKeyStoreToJson_m782AE252062D9372F3FB3AA790371C195D405E90 (KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* __this, KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* ___0_keyStore, const RuntimeMethod* method) 
{
	{
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_0 = ___0_keyStore;
		String_t* L_1;
		L_1 = JsonKeyStoreScryptSerialiser_SerialiseScrypt_m021A1C32895A9DB278D67F315F4ACBCBC2944944(L_0, NULL);
		return L_1;
	}
}
// System.Byte[] Nethereum.KeyStore.KeyStoreScryptService::DecryptKeyStore(System.String,Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreScryptService_DecryptKeyStore_m97CE221D0D9D9ED305FD4B0843F9D62209E72909 (KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* __this, String_t* ___0_password, KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* ___1_keyStore, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_CipherText_m0D0D495D51ACCBD21C7BA3075D96E6E9E4A6BE0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Mac_m397668EA83950C2D02123C4FCBC665015AD1ACD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_password;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreScryptService_DecryptKeyStore_m97CE221D0D9D9ED305FD4B0843F9D62209E72909_RuntimeMethod_var)));
	}

IL_000e:
	{
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_2 = ___1_keyStore;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB144512DA9AA6B91993CE8E07E163EA3FF0A440A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreScryptService_DecryptKeyStore_m97CE221D0D9D9ED305FD4B0843F9D62209E72909_RuntimeMethod_var)));
	}

IL_001c:
	{
		KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* L_4 = ((KeyStoreServiceBase_1_t83E72AC62855C439A5D01F4E5A00BB6BCA2150D0*)__this)->___KeyStoreCrypto_0;
		String_t* L_5 = ___0_password;
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_6 = ___1_keyStore;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_7;
		L_7 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_6, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		String_t* L_8;
		L_8 = CryptoInfo_1_get_Mac_m397668EA83950C2D02123C4FCBC665015AD1ACD8_inline(L_7, CryptoInfo_1_get_Mac_m397668EA83950C2D02123C4FCBC665015AD1ACD8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_8, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_10 = ___1_keyStore;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_11;
		L_11 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_10, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* L_12;
		L_12 = CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_inline(L_11, CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_RuntimeMethod_var);
		String_t* L_13;
		L_13 = CipherParams_get_Iv_mACA12BCFA8DA0C8DF791A05028119A5A14F4CBC4_inline(L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_13, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_15 = ___1_keyStore;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_16;
		L_16 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_15, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		String_t* L_17;
		L_17 = CryptoInfo_1_get_CipherText_m0D0D495D51ACCBD21C7BA3075D96E6E9E4A6BE0B_inline(L_16, CryptoInfo_1_get_CipherText_m0D0D495D51ACCBD21C7BA3075D96E6E9E4A6BE0B_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_17, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_19 = ___1_keyStore;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_20;
		L_20 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_19, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_21;
		L_21 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_20, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		int32_t L_22;
		L_22 = ScryptParams_get_N_mE57FDEFFC05A1BEE6E1D2AEC8E0768206BEE49E2_inline(L_21, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_23 = ___1_keyStore;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_24;
		L_24 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_23, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_25;
		L_25 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_24, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		int32_t L_26;
		L_26 = ScryptParams_get_P_mF431C35431D06FDC71DF89E3BCA31DB14A9C880E_inline(L_25, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_27 = ___1_keyStore;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_28;
		L_28 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_27, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_29;
		L_29 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_28, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		int32_t L_30;
		L_30 = ScryptParams_get_R_mBBE1A0B0B5E9B5E32A3E798FAC0766775DDF186E_inline(L_29, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_31 = ___1_keyStore;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_32;
		L_32 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_31, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_33;
		L_33 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_32, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		String_t* L_34;
		L_34 = KdfParams_get_Salt_mBC1DA50823694582BA754AAAB3F2C098C024205B_inline(L_33, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = HexByteConvertorExtensions_HexToByteArray_mA40AD99B044580B8EE1D0823D17132DBC197A6CE(L_34, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_36 = ___1_keyStore;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_37;
		L_37 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_36, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_38;
		L_38 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_37, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		int32_t L_39;
		L_39 = KdfParams_get_Dklen_m1E5547E75FFAD02C826CFDC8CD09AC6EAEEBDB14_inline(L_38, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40;
		L_40 = KeyStoreCrypto_DecryptScrypt_m828C9ED4E8F3A128B449D0AA91CC498B2EBE6524(L_4, L_5, L_9, L_14, L_18, L_22, L_26, L_30, L_35, L_39, NULL);
		return L_40;
	}
}
// System.String Nethereum.KeyStore.KeyStoreScryptService::GetKdfType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStoreScryptService_GetKdfType_m8636618BBCB5C14E23C53B98FFE54644B5A455E7 (KeyStoreScryptService_t5E11C3101843C81986E57C88931237320ADB065D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEF710A7FE8B1F687BE0C4888B5002E9635CE519);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralDEF710A7FE8B1F687BE0C4888B5002E9635CE519;
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
// System.Void Nethereum.KeyStore.Model.CipherParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherParams__ctor_m6EF7551DAA09455A6D0CB9B5E98BA76CCD98072A (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Nethereum.KeyStore.Model.CipherParams::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherParams__ctor_mF3F9808A4E1C650EE3E5E10FB57455CC5FD5E58E (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_iv, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_iv;
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_0, (bool)0, NULL);
		CipherParams_set_Iv_mE77D6319BE01333E7B3F6F7F98453DABAE5BB6C6_inline(__this, L_1, NULL);
		return;
	}
}
// System.String Nethereum.KeyStore.Model.CipherParams::get_Iv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CipherParams_get_Iv_mACA12BCFA8DA0C8DF791A05028119A5A14F4CBC4 (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CIvU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.Model.CipherParams::set_Iv(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherParams_set_Iv_mE77D6319BE01333E7B3F6F7F98453DABAE5BB6C6 (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CIvU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIvU3Ek__BackingField_0), (void*)L_0);
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
// System.Int32 Nethereum.KeyStore.Model.KdfParams::get_Dklen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KdfParams_get_Dklen_m1E5547E75FFAD02C826CFDC8CD09AC6EAEEBDB14 (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDklenU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.Model.KdfParams::set_Dklen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KdfParams_set_Dklen_m8873AE7294C28118FDADC3F76AB3FCCA12ED0A9E (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CDklenU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String Nethereum.KeyStore.Model.KdfParams::get_Salt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KdfParams_get_Salt_mBC1DA50823694582BA754AAAB3F2C098C024205B (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSaltU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.Model.KdfParams::set_Salt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KdfParams_set_Salt_m578F3DA59E3C91B1C70F13793C6926210CE139F7 (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CSaltU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSaltU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.KeyStore.Model.KdfParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KdfParams__ctor_m39CCECF77A608644CB36BBBA3081362363BFF843 (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, const RuntimeMethod* method) 
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
// System.Int32 Nethereum.KeyStore.Model.ScryptParams::get_N()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScryptParams_get_N_mE57FDEFFC05A1BEE6E1D2AEC8E0768206BEE49E2 (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CNU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.Model.ScryptParams::set_N(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParams_set_N_mD7A43E5EAAB1D1C3D9AFE496F7ED17549AC7D670 (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CNU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 Nethereum.KeyStore.Model.ScryptParams::get_R()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScryptParams_get_R_mBBE1A0B0B5E9B5E32A3E798FAC0766775DDF186E (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CRU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.Model.ScryptParams::set_R(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParams_set_R_m9AD9236A19430A9B44EFA3301D417E7F665FDAAE (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CRU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 Nethereum.KeyStore.Model.ScryptParams::get_P()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScryptParams_get_P_mF431C35431D06FDC71DF89E3BCA31DB14A9C880E (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.Model.ScryptParams::set_P(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParams_set_P_m54B8987AEE116A5F01F276FB41F5B7BD6CE93FD7 (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CPU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Nethereum.KeyStore.Model.ScryptParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParams__ctor_m5DC4BDC83AC01594CA6FCBED4B0AE865F33229FD (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) 
{
	{
		KdfParams__ctor_m39CCECF77A608644CB36BBBA3081362363BFF843(__this, NULL);
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
// System.String Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO::get_iv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CipherParamsDTO_get_iv_m9A9BB6EC013B70B8EE1542B30F8644D520FEE92C (CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CivU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO::set_iv(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherParamsDTO_set_iv_mAA82EE8F95D570A32B28DDB5D137E452547E1447 (CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CivU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CivU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherParamsDTO__ctor_m3A7C44114C8F04E69B34C05E366716D7C18066BB (CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* __this, const RuntimeMethod* method) 
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
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoDTOBase__ctor_m37903E098FB857B1E4AD7CF702F9B6ACA53A6789 (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* L_0 = (CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C*)il2cpp_codegen_object_new(CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C_il2cpp_TypeInfo_var);
		CipherParamsDTO__ctor_m3A7C44114C8F04E69B34C05E366716D7C18066BB(L_0, NULL);
		CryptoInfoDTOBase_set_cipherparams_mE014108E074C5803596A0CE491004920054A7A86_inline(__this, L_0, NULL);
		return;
	}
}
// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_cipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_cipher_mC2254AEF9DABAE8647851B32135596ED041004D7 (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CcipherU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_cipher(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_cipher_m577997203D05BD47C1F03175A176CEE47468A563 (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CcipherU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcipherU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_cipherText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_cipherText_mCA4F7FEE19C44BB4E20FF7B4D06E6F9832CC2DEF (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CcipherTextU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_cipherText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_cipherText_m100CA8B4796B16C2C927A56C894D18F3B354DC03 (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CcipherTextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcipherTextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_cipherparams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* CryptoInfoDTOBase_get_cipherparams_mE9D29F3332F2FC754DE4C29BC8C183F08A389F77 (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	{
		CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* L_0 = __this->___U3CcipherparamsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_cipherparams(Nethereum.KeyStore.JsonDeserialisation.CipherParamsDTO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_cipherparams_mE014108E074C5803596A0CE491004920054A7A86 (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* ___0_value, const RuntimeMethod* method) 
{
	{
		CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* L_0 = ___0_value;
		__this->___U3CcipherparamsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcipherparamsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_kdf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_kdf_m37F91BCF553659BC936ACA04FBE68BAD0AD09703 (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CkdfU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_kdf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_kdf_m0CE24ACCEAD963F6D649715EFAB53CE0B3BD7F54 (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CkdfU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkdfU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::get_mac()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_mac_m832D5DAE6B8D34645CB12D6C1EF621E8247053DB (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CmacU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoDTOBase::set_mac(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_mac_m8C7197F81B08179424DDC30A8D72413D82D3CC54 (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CmacU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmacU3Ek__BackingField_4), (void*)L_0);
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
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoScryptDTO__ctor_m4D5FE44A524F51AB6585157B0D17B6B135ECB074 (CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CryptoInfoDTOBase__ctor_m37903E098FB857B1E4AD7CF702F9B6ACA53A6789(__this, NULL);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_0 = (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61*)il2cpp_codegen_object_new(ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61_il2cpp_TypeInfo_var);
		ScryptParamsDTO__ctor_m44F6BFB85D6013B5CC771EF78AB158D283A58CDD(L_0, NULL);
		CryptoInfoScryptDTO_set_kdfparams_mD261CED055A2C04A72FAFF40AE3C420DFAC1483B_inline(__this, L_0, NULL);
		return;
	}
}
// Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO::get_kdfparams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A (CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* __this, const RuntimeMethod* method) 
{
	{
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_0 = __this->___U3CkdfparamsU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO::set_kdfparams(Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoInfoScryptDTO_set_kdfparams_mD261CED055A2C04A72FAFF40AE3C420DFAC1483B (CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* __this, ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* ___0_value, const RuntimeMethod* method) 
{
	{
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_0 = ___0_value;
		__this->___U3CkdfparamsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkdfparamsU3Ek__BackingField_5), (void*)L_0);
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
// System.String Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::SerialiseScrypt(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonKeyStoreScryptSerialiser_SerialiseScrypt_m021A1C32895A9DB278D67F315F4ACBCBC2944944 (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* ___0_scryptKeyStore, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_0 = ___0_scryptKeyStore;
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_1;
		L_1 = JsonKeyStoreScryptSerialiser_MapModelToDTO_m74227D5A6398A22F0C248CE67F7B734EB2FCAFC8(L_0, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_2 = ___0_scryptKeyStore;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonConvert_SerializeObject_m277670BD344964CB2A61751E5A3D62DB5B1321C7(L_2, NULL);
		return L_3;
	}
}
// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams> Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::DeserialiseScrypt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* JsonKeyStoreScryptSerialiser_DeserialiseScrypt_m444B7A8F3A8E09938DAF4264B6A809D3281F20FF (String_t* ___0_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisKeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367_mC72C249C6450475F026EE89BE5DFFEEF5045F885_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_json;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_1;
		L_1 = JsonConvert_DeserializeObject_TisKeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367_mC72C249C6450475F026EE89BE5DFFEEF5045F885(L_0, JsonConvert_DeserializeObject_TisKeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367_mC72C249C6450475F026EE89BE5DFFEEF5045F885_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_2;
		L_2 = JsonKeyStoreScryptSerialiser_MapDTOToModel_mA7AA3E2107425F4077076092C1DBBAA8F0690AF2(L_1, NULL);
		return L_2;
	}
}
// Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::MapModelToDTO(Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* JsonKeyStoreScryptSerialiser_MapModelToDTO_m74227D5A6398A22F0C248CE67F7B734EB2FCAFC8 (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* ___0_scryptKeyStore, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_CipherText_m0D0D495D51ACCBD21C7BA3075D96E6E9E4A6BE0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Cipher_m7BA1B867E8E4C8833CEE05C3143DE335A621F2A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Kdf_mAB4E9A63B906AD0CEDA894E615BF3CAB540B80D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Mac_m397668EA83950C2D02123C4FCBC665015AD1ACD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_get_Address_m2BD758087730CB1C5A6D149E0C7A1C1A88904161_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_get_Id_mB084F9AF1D51C89CFC94FC9F4F1BD68173BA4A4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_get_Version_mC58350AE7F50E7EF46D94FCDD702B34039265C35_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_0 = (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367*)il2cpp_codegen_object_new(KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367_il2cpp_TypeInfo_var);
		KeyStoreScryptDTO__ctor_m92B3E01F3801D999CDFF37E7D28A10EA14421472(L_0, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_1 = L_0;
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_2 = ___0_scryptKeyStore;
		String_t* L_3;
		L_3 = KeyStore_1_get_Address_m2BD758087730CB1C5A6D149E0C7A1C1A88904161_inline(L_2, KeyStore_1_get_Address_m2BD758087730CB1C5A6D149E0C7A1C1A88904161_RuntimeMethod_var);
		KeyStoreDTOBase_set_address_m4E71FF95A9D7900DD962E9C8EDA24D1053EC5C5D_inline(L_1, L_3, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_4 = L_1;
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_5 = ___0_scryptKeyStore;
		String_t* L_6;
		L_6 = KeyStore_1_get_Id_mB084F9AF1D51C89CFC94FC9F4F1BD68173BA4A4C_inline(L_5, KeyStore_1_get_Id_mB084F9AF1D51C89CFC94FC9F4F1BD68173BA4A4C_RuntimeMethod_var);
		KeyStoreDTOBase_set_id_m764A98BA5E66E066334464B230ED752BA37A1905_inline(L_4, L_6, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_7 = L_4;
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_8 = ___0_scryptKeyStore;
		int32_t L_9;
		L_9 = KeyStore_1_get_Version_mC58350AE7F50E7EF46D94FCDD702B34039265C35_inline(L_8, KeyStore_1_get_Version_mC58350AE7F50E7EF46D94FCDD702B34039265C35_RuntimeMethod_var);
		KeyStoreDTOBase_set_version_m8891C2744FDC8C814E198F4C66AF3F1E87F0180F_inline(L_7, L_9, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_10 = L_7;
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_11;
		L_11 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_10, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_12 = ___0_scryptKeyStore;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_13;
		L_13 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_12, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		String_t* L_14;
		L_14 = CryptoInfo_1_get_Cipher_m7BA1B867E8E4C8833CEE05C3143DE335A621F2A5_inline(L_13, CryptoInfo_1_get_Cipher_m7BA1B867E8E4C8833CEE05C3143DE335A621F2A5_RuntimeMethod_var);
		CryptoInfoDTOBase_set_cipher_m577997203D05BD47C1F03175A176CEE47468A563_inline(L_11, L_14, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_15 = L_10;
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_16;
		L_16 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_15, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_17 = ___0_scryptKeyStore;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_18;
		L_18 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_17, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		String_t* L_19;
		L_19 = CryptoInfo_1_get_CipherText_m0D0D495D51ACCBD21C7BA3075D96E6E9E4A6BE0B_inline(L_18, CryptoInfo_1_get_CipherText_m0D0D495D51ACCBD21C7BA3075D96E6E9E4A6BE0B_RuntimeMethod_var);
		CryptoInfoDTOBase_set_cipherText_m100CA8B4796B16C2C927A56C894D18F3B354DC03_inline(L_16, L_19, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_20 = L_15;
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_21;
		L_21 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_20, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_22 = ___0_scryptKeyStore;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_23;
		L_23 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_22, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		String_t* L_24;
		L_24 = CryptoInfo_1_get_Kdf_mAB4E9A63B906AD0CEDA894E615BF3CAB540B80D1_inline(L_23, CryptoInfo_1_get_Kdf_mAB4E9A63B906AD0CEDA894E615BF3CAB540B80D1_RuntimeMethod_var);
		CryptoInfoDTOBase_set_kdf_m0CE24ACCEAD963F6D649715EFAB53CE0B3BD7F54_inline(L_21, L_24, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_25 = L_20;
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_26;
		L_26 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_25, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_27 = ___0_scryptKeyStore;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_28;
		L_28 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_27, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		String_t* L_29;
		L_29 = CryptoInfo_1_get_Mac_m397668EA83950C2D02123C4FCBC665015AD1ACD8_inline(L_28, CryptoInfo_1_get_Mac_m397668EA83950C2D02123C4FCBC665015AD1ACD8_RuntimeMethod_var);
		CryptoInfoDTOBase_set_mac_m8C7197F81B08179424DDC30A8D72413D82D3CC54_inline(L_26, L_29, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_30 = L_25;
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_31;
		L_31 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_30, NULL);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_32;
		L_32 = CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline(L_31, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_33 = ___0_scryptKeyStore;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_34;
		L_34 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_33, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_35;
		L_35 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_34, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		int32_t L_36;
		L_36 = ScryptParams_get_R_mBBE1A0B0B5E9B5E32A3E798FAC0766775DDF186E_inline(L_35, NULL);
		ScryptParamsDTO_set_r_m9EA349D301AF31CBC06A4204807852BC10B8772B_inline(L_32, L_36, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_37 = L_30;
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_38;
		L_38 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_37, NULL);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_39;
		L_39 = CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline(L_38, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_40 = ___0_scryptKeyStore;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_41;
		L_41 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_40, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_42;
		L_42 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_41, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		int32_t L_43;
		L_43 = ScryptParams_get_N_mE57FDEFFC05A1BEE6E1D2AEC8E0768206BEE49E2_inline(L_42, NULL);
		ScryptParamsDTO_set_n_mF43334DBC344EFF9F8DCED73543A5A25847A6A55_inline(L_39, L_43, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_44 = L_37;
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_45;
		L_45 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_44, NULL);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_46;
		L_46 = CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline(L_45, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_47 = ___0_scryptKeyStore;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_48;
		L_48 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_47, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_49;
		L_49 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_48, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		int32_t L_50;
		L_50 = ScryptParams_get_P_mF431C35431D06FDC71DF89E3BCA31DB14A9C880E_inline(L_49, NULL);
		ScryptParamsDTO_set_p_m2A2C1324B4C9F90F65E916EB957EDB148865DF45_inline(L_46, L_50, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_51 = L_44;
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_52;
		L_52 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_51, NULL);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_53;
		L_53 = CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline(L_52, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_54 = ___0_scryptKeyStore;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_55;
		L_55 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_54, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_56;
		L_56 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_55, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		int32_t L_57;
		L_57 = KdfParams_get_Dklen_m1E5547E75FFAD02C826CFDC8CD09AC6EAEEBDB14_inline(L_56, NULL);
		KdfParamsDTO_set_dklen_mA75B7F4B76A3E1E4D4D3F7C139F0CF15A097A0A6_inline(L_53, L_57, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_58 = L_51;
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_59;
		L_59 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_58, NULL);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_60;
		L_60 = CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline(L_59, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_61 = ___0_scryptKeyStore;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_62;
		L_62 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_61, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_63;
		L_63 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_62, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		String_t* L_64;
		L_64 = KdfParams_get_Salt_mBC1DA50823694582BA754AAAB3F2C098C024205B_inline(L_63, NULL);
		KdfParamsDTO_set_salt_m1D5465724D0D2EC60A15AE7671FC6AC7266052F2_inline(L_60, L_64, NULL);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_65 = L_58;
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_66;
		L_66 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_65, NULL);
		CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* L_67;
		L_67 = CryptoInfoDTOBase_get_cipherparams_mE9D29F3332F2FC754DE4C29BC8C183F08A389F77_inline(L_66, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_68 = ___0_scryptKeyStore;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_69;
		L_69 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_68, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* L_70;
		L_70 = CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_inline(L_69, CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_RuntimeMethod_var);
		String_t* L_71;
		L_71 = CipherParams_get_Iv_mACA12BCFA8DA0C8DF791A05028119A5A14F4CBC4_inline(L_70, NULL);
		CipherParamsDTO_set_iv_mAA82EE8F95D570A32B28DDB5D137E452547E1447_inline(L_67, L_71, NULL);
		return L_65;
	}
}
// Nethereum.KeyStore.Model.KeyStore`1<Nethereum.KeyStore.Model.ScryptParams> Nethereum.KeyStore.JsonDeserialisation.JsonKeyStoreScryptSerialiser::MapDTOToModel(Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* JsonKeyStoreScryptSerialiser_MapDTOToModel_mA7AA3E2107425F4077076092C1DBBAA8F0690AF2 (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* ___0_dto, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1__ctor_m032DF032DB563EE333F936B18490F15E5857964A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_set_CipherParams_mE008C30F61B193220181F8571E9B22669BC1C7E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_set_CipherText_mAB2EA2B19CDD9767567825024156FC1357581C78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_set_Cipher_m3A8287A23B23E90E4D269C6BAB72FD92C7AD59FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_set_Kdf_m2F4F184EA3A7B6112EF18F1FBA70CFF2140270E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_set_Kdfparams_m496DF4ECF94CFBFC730A619DFF35E8536275BFAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_set_Mac_m57B69D5B6017597A4263D7C4130DF4E5E81AE667_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1__ctor_m2ECFC2CB0B05408465002F720B7142EA3F0E6B17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_set_Address_m06D4182B667F0FA9DBB10640DF9FED69E2E61140_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_set_Crypto_m6C695CA8B0703EF97A90EAFE827F14ECE34A2BF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_set_Id_m9F9D3D789C8BEFD5EF221C06A2512457D5598B49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_set_Version_mCC41748FB655953DC784DEDAF0A9F1D7C9C915E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_0 = (KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E*)il2cpp_codegen_object_new(KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E_il2cpp_TypeInfo_var);
		KeyStore_1__ctor_m2ECFC2CB0B05408465002F720B7142EA3F0E6B17(L_0, KeyStore_1__ctor_m2ECFC2CB0B05408465002F720B7142EA3F0E6B17_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_1 = L_0;
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_2 = ___0_dto;
		String_t* L_3;
		L_3 = KeyStoreDTOBase_get_address_m0134A1C538EC96FD7F883CF2B69E95EA0CAB0FD3_inline(L_2, NULL);
		KeyStore_1_set_Address_m06D4182B667F0FA9DBB10640DF9FED69E2E61140_inline(L_1, L_3, KeyStore_1_set_Address_m06D4182B667F0FA9DBB10640DF9FED69E2E61140_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_4 = L_1;
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_5 = ___0_dto;
		String_t* L_6;
		L_6 = KeyStoreDTOBase_get_id_mFDCD569677A39C6B99970D2C598D7587EFB2E77C_inline(L_5, NULL);
		KeyStore_1_set_Id_m9F9D3D789C8BEFD5EF221C06A2512457D5598B49_inline(L_4, L_6, KeyStore_1_set_Id_m9F9D3D789C8BEFD5EF221C06A2512457D5598B49_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_7 = L_4;
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_8 = ___0_dto;
		int32_t L_9;
		L_9 = KeyStoreDTOBase_get_version_m7F00B43A9B900EE11DDA1E69DB08CCB03C5BE9ED_inline(L_8, NULL);
		KeyStore_1_set_Version_mCC41748FB655953DC784DEDAF0A9F1D7C9C915E8_inline(L_7, L_9, KeyStore_1_set_Version_mCC41748FB655953DC784DEDAF0A9F1D7C9C915E8_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_10 = L_7;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_11 = (CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C*)il2cpp_codegen_object_new(CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C_il2cpp_TypeInfo_var);
		CryptoInfo_1__ctor_m032DF032DB563EE333F936B18490F15E5857964A(L_11, CryptoInfo_1__ctor_m032DF032DB563EE333F936B18490F15E5857964A_RuntimeMethod_var);
		KeyStore_1_set_Crypto_m6C695CA8B0703EF97A90EAFE827F14ECE34A2BF0_inline(L_10, L_11, KeyStore_1_set_Crypto_m6C695CA8B0703EF97A90EAFE827F14ECE34A2BF0_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_12 = L_10;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_13;
		L_13 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_12, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_14 = ___0_dto;
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_15;
		L_15 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_14, NULL);
		String_t* L_16;
		L_16 = CryptoInfoDTOBase_get_cipher_mC2254AEF9DABAE8647851B32135596ED041004D7_inline(L_15, NULL);
		CryptoInfo_1_set_Cipher_m3A8287A23B23E90E4D269C6BAB72FD92C7AD59FF_inline(L_13, L_16, CryptoInfo_1_set_Cipher_m3A8287A23B23E90E4D269C6BAB72FD92C7AD59FF_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_17 = L_12;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_18;
		L_18 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_17, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_19 = ___0_dto;
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_20;
		L_20 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_19, NULL);
		String_t* L_21;
		L_21 = CryptoInfoDTOBase_get_cipherText_mCA4F7FEE19C44BB4E20FF7B4D06E6F9832CC2DEF_inline(L_20, NULL);
		CryptoInfo_1_set_CipherText_mAB2EA2B19CDD9767567825024156FC1357581C78_inline(L_18, L_21, CryptoInfo_1_set_CipherText_mAB2EA2B19CDD9767567825024156FC1357581C78_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_22 = L_17;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_23;
		L_23 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_22, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_24 = ___0_dto;
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_25;
		L_25 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_24, NULL);
		String_t* L_26;
		L_26 = CryptoInfoDTOBase_get_kdf_m37F91BCF553659BC936ACA04FBE68BAD0AD09703_inline(L_25, NULL);
		CryptoInfo_1_set_Kdf_m2F4F184EA3A7B6112EF18F1FBA70CFF2140270E0_inline(L_23, L_26, CryptoInfo_1_set_Kdf_m2F4F184EA3A7B6112EF18F1FBA70CFF2140270E0_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_27 = L_22;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_28;
		L_28 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_27, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_29 = ___0_dto;
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_30;
		L_30 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_29, NULL);
		String_t* L_31;
		L_31 = CryptoInfoDTOBase_get_mac_m832D5DAE6B8D34645CB12D6C1EF621E8247053DB_inline(L_30, NULL);
		CryptoInfo_1_set_Mac_m57B69D5B6017597A4263D7C4130DF4E5E81AE667_inline(L_28, L_31, CryptoInfo_1_set_Mac_m57B69D5B6017597A4263D7C4130DF4E5E81AE667_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_32 = L_27;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_33;
		L_33 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_32, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_34 = (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779*)il2cpp_codegen_object_new(ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779_il2cpp_TypeInfo_var);
		ScryptParams__ctor_m5DC4BDC83AC01594CA6FCBED4B0AE865F33229FD(L_34, NULL);
		CryptoInfo_1_set_Kdfparams_m496DF4ECF94CFBFC730A619DFF35E8536275BFAB_inline(L_33, L_34, CryptoInfo_1_set_Kdfparams_m496DF4ECF94CFBFC730A619DFF35E8536275BFAB_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_35 = L_32;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_36;
		L_36 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_35, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_37;
		L_37 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_36, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_38 = ___0_dto;
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_39;
		L_39 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_38, NULL);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_40;
		L_40 = CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline(L_39, NULL);
		int32_t L_41;
		L_41 = ScryptParamsDTO_get_r_mD2EED1B5689E035883BB29D9BD1A8B303412DF65_inline(L_40, NULL);
		ScryptParams_set_R_m9AD9236A19430A9B44EFA3301D417E7F665FDAAE_inline(L_37, L_41, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_42 = L_35;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_43;
		L_43 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_42, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_44;
		L_44 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_43, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_45 = ___0_dto;
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_46;
		L_46 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_45, NULL);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_47;
		L_47 = CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline(L_46, NULL);
		int32_t L_48;
		L_48 = ScryptParamsDTO_get_n_m3FF77C12A496BB3D66BDB6EDB8DAF21525CE2AB8_inline(L_47, NULL);
		ScryptParams_set_N_mD7A43E5EAAB1D1C3D9AFE496F7ED17549AC7D670_inline(L_44, L_48, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_49 = L_42;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_50;
		L_50 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_49, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_51;
		L_51 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_50, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_52 = ___0_dto;
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_53;
		L_53 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_52, NULL);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_54;
		L_54 = CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline(L_53, NULL);
		int32_t L_55;
		L_55 = ScryptParamsDTO_get_p_m19884391C68271FF5FB3BEF1CF2935DE29E834F1_inline(L_54, NULL);
		ScryptParams_set_P_m54B8987AEE116A5F01F276FB41F5B7BD6CE93FD7_inline(L_51, L_55, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_56 = L_49;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_57;
		L_57 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_56, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_58;
		L_58 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_57, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_59 = ___0_dto;
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_60;
		L_60 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_59, NULL);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_61;
		L_61 = CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline(L_60, NULL);
		int32_t L_62;
		L_62 = KdfParamsDTO_get_dklen_mF4F94F51F353F4A8CF43F2D9BD782FB90FF8142D_inline(L_61, NULL);
		KdfParams_set_Dklen_m8873AE7294C28118FDADC3F76AB3FCCA12ED0A9E_inline(L_58, L_62, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_63 = L_56;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_64;
		L_64 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_63, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* L_65;
		L_65 = CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_inline(L_64, CryptoInfo_1_get_Kdfparams_mE3E88B4C88F4EBC0FF5B18B3AFB5A2DA02B8C0FB_RuntimeMethod_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_66 = ___0_dto;
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_67;
		L_67 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_66, NULL);
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_68;
		L_68 = CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline(L_67, NULL);
		String_t* L_69;
		L_69 = KdfParamsDTO_get_salt_m6238900E8629F7663690AD6E1E4C2FF99E8F35ED_inline(L_68, NULL);
		KdfParams_set_Salt_m578F3DA59E3C91B1C70F13793C6926210CE139F7_inline(L_65, L_69, NULL);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_70 = L_63;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_71;
		L_71 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_70, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* L_72 = (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0*)il2cpp_codegen_object_new(CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0_il2cpp_TypeInfo_var);
		CipherParams__ctor_m6EF7551DAA09455A6D0CB9B5E98BA76CCD98072A(L_72, NULL);
		CryptoInfo_1_set_CipherParams_mE008C30F61B193220181F8571E9B22669BC1C7E4_inline(L_71, L_72, CryptoInfo_1_set_CipherParams_mE008C30F61B193220181F8571E9B22669BC1C7E4_RuntimeMethod_var);
		KeyStore_1_t9D9272DA6894A4CF82466E75DF9A0E2C4292240E* L_73 = L_70;
		CryptoInfo_1_t681277F72DAB921FC77395614B9516F204C82A3C* L_74;
		L_74 = KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_inline(L_73, KeyStore_1_get_Crypto_mD267969A713F8ED379295C8D465D5AA657426229_RuntimeMethod_var);
		CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* L_75;
		L_75 = CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_inline(L_74, CryptoInfo_1_get_CipherParams_mCE5052AB3E08620D0675291DD4A9F0B453F1DC37_RuntimeMethod_var);
		KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* L_76 = ___0_dto;
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_77;
		L_77 = KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline(L_76, NULL);
		CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* L_78;
		L_78 = CryptoInfoDTOBase_get_cipherparams_mE9D29F3332F2FC754DE4C29BC8C183F08A389F77_inline(L_77, NULL);
		String_t* L_79;
		L_79 = CipherParamsDTO_get_iv_m9A9BB6EC013B70B8EE1542B30F8644D520FEE92C_inline(L_78, NULL);
		CipherParams_set_Iv_mE77D6319BE01333E7B3F6F7F98453DABAE5BB6C6_inline(L_75, L_79, NULL);
		return L_73;
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
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::get_dklen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KdfParamsDTO_get_dklen_mF4F94F51F353F4A8CF43F2D9BD782FB90FF8142D (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdklenU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::set_dklen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KdfParamsDTO_set_dklen_mA75B7F4B76A3E1E4D4D3F7C139F0CF15A097A0A6 (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CdklenU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::get_salt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KdfParamsDTO_get_salt_m6238900E8629F7663690AD6E1E4C2FF99E8F35ED (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CsaltU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::set_salt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KdfParamsDTO_set_salt_m1D5465724D0D2EC60A15AE7671FC6AC7266052F2 (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CsaltU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsaltU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KdfParamsDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KdfParamsDTO__ctor_m33FABA503A55656C7E129E3D0EBCC23D1C6348A3 (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, const RuntimeMethod* method) 
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
// System.String Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStoreDTOBase_get_id_mFDCD569677A39C6B99970D2C598D7587EFB2E77C (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreDTOBase_set_id_m764A98BA5E66E066334464B230ED752BA37A1905 (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::get_address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStoreDTOBase_get_address_m0134A1C538EC96FD7F883CF2B69E95EA0CAB0FD3 (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CaddressU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::set_address(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreDTOBase_set_address_m4E71FF95A9D7900DD962E9C8EDA24D1053EC5C5D (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CaddressU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaddressU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyStoreDTOBase_get_version_m7F00B43A9B900EE11DDA1E69DB08CCB03C5BE9ED (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CversionU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::set_version(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreDTOBase_set_version_m8891C2744FDC8C814E198F4C66AF3F1E87F0180F (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CversionU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreDTOBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreDTOBase__ctor_m0D44032DCB424D46C0967E5AE492860854200F0F (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) 
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
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreScryptDTO__ctor_m92B3E01F3801D999CDFF37E7D28A10EA14421472 (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyStoreDTOBase__ctor_m0D44032DCB424D46C0967E5AE492860854200F0F(__this, NULL);
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_0 = (CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B*)il2cpp_codegen_object_new(CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B_il2cpp_TypeInfo_var);
		CryptoInfoScryptDTO__ctor_m4D5FE44A524F51AB6585157B0D17B6B135ECB074(L_0, NULL);
		KeyStoreScryptDTO_set_crypto_m6B338293B428CD65FBC9511AF668A777FDA99892_inline(__this, L_0, NULL);
		return;
	}
}
// Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO::get_crypto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* __this, const RuntimeMethod* method) 
{
	{
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_0 = __this->___U3CcryptoU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.KeyStoreScryptDTO::set_crypto(Nethereum.KeyStore.JsonDeserialisation.CryptoInfoScryptDTO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreScryptDTO_set_crypto_m6B338293B428CD65FBC9511AF668A777FDA99892 (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* __this, CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* ___0_value, const RuntimeMethod* method) 
{
	{
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_0 = ___0_value;
		__this->___U3CcryptoU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcryptoU3Ek__BackingField_3), (void*)L_0);
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
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::get_n()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScryptParamsDTO_get_n_m3FF77C12A496BB3D66BDB6EDB8DAF21525CE2AB8 (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CnU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::set_n(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParamsDTO_set_n_mF43334DBC344EFF9F8DCED73543A5A25847A6A55 (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CnU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::get_r()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScryptParamsDTO_get_r_mD2EED1B5689E035883BB29D9BD1A8B303412DF65 (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CrU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::set_r(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParamsDTO_set_r_m9EA349D301AF31CBC06A4204807852BC10B8772B (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CrU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::get_p()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScryptParamsDTO_get_p_m19884391C68271FF5FB3BEF1CF2935DE29E834F1 (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CpU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::set_p(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParamsDTO_set_p_m2A2C1324B4C9F90F65E916EB957EDB148865DF45 (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CpU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Nethereum.KeyStore.JsonDeserialisation.ScryptParamsDTO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptParamsDTO__ctor_m44F6BFB85D6013B5CC771EF78AB158D283A58CDD (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) 
{
	{
		KdfParamsDTO__ctor_m33FABA503A55656C7E129E3D0EBCC23D1C6348A3(__this, NULL);
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
// System.Void Nethereum.KeyStore.Crypto.DecryptionException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecryptionException__ctor_m77BC09FFF4E1BA18CF1E1F7CF0342BC72A274097 (DecryptionException_t475B93777EFB780713433EEB8305E4BDCCF42738* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
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
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GenerateDerivedScryptKey(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateDerivedScryptKey_mD84A7413EE9B46393273F5D0B8E928AFFDD4F372 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_password, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_salt, int32_t ___2_n, int32_t ___3_r, int32_t ___4_p, int32_t ___5_dkLen, bool ___6_checkRandN, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___6_checkRandN;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = ___3_r;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = ___2_n;
		if ((((int32_t)L_2) < ((int32_t)((int32_t)65536))))
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral90AF97DD8EF1877A399A4D1D1AF32DE07CB7CA27)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreCrypto_GenerateDerivedScryptKey_mD84A7413EE9B46393273F5D0B8E928AFFDD4F372_RuntimeMethod_var)));
	}

IL_001c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_password;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___1_salt;
		int32_t L_6 = ___2_n;
		int32_t L_7 = ___3_r;
		int32_t L_8 = ___4_p;
		int32_t L_9 = ___5_dkLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = ScryptNet_CryptoScrypt_m5AAEB7E15BBC29209AB45FA6EB93C8602A7BF7F8(L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GenerateCipherKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateCipherKey_m343F6812E73E26C26D086556CCC3D0022D717864 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_derivedKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_derivedKey;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_1, (RuntimeArray*)L_2, ((int32_t)16), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::CalculateKeccakHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_CalculateKeccakHash_mC8A981BED599BCAE5AC30BF291A2E96620C1B35B (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* L_0 = (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8*)il2cpp_codegen_object_new(KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var);
		KeccakDigest__ctor_m1D83E44DC559F9E747241A63E130AF770D442FCF(L_0, ((int32_t)256), NULL);
		KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* L_1 = L_0;
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::GetDigestSize() */, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* L_4 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_value;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_value;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(14 /* System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8;
		L_8 = VirtualFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(15 /* System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::DoFinal(System.Byte[],System.Int32) */, L_4, L_7, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		return L_9;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GenerateMac(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateMac_mC6C9A66E314C1298593041FE80E0037FB4ECAF99 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_derivedKey, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_cipherText, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_cipherText;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)16), ((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_derivedKey;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, ((int32_t)16), (RuntimeArray*)L_3, 0, ((int32_t)16), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_cipherText;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_cipherText;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, ((int32_t)16), ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = KeyStoreCrypto_CalculateKeccakHash_mC8A981BED599BCAE5AC30BF291A2E96620C1B35B(__this, L_7, NULL);
		return L_8;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GenerateAesCtrCipher(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GenerateAesCtrCipher_mAEAC7F39874147CD2A0A3E3FD499934FFAEA0991 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_iv, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_encryptKey, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CipherUtilities_tDA37832A133C3F502C98888EA1477FBA0EF5F8F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterUtilities_t2330968701206F630234AD4A65667E7CAEE14EAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral423ACA01AC170A50869ECDEF572CD96995576718);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC78E78B6EC5C50ADC67D977E0F4C67424995CE6);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_encryptKey;
		il2cpp_codegen_runtime_class_init_inline(ParameterUtilities_t2330968701206F630234AD4A65667E7CAEE14EAF_il2cpp_TypeInfo_var);
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_1;
		L_1 = ParameterUtilities_CreateKeyParameter_m503070D02626F2E547CED69879BB7A359ED9ED19(_stringLiteral423ACA01AC170A50869ECDEF572CD96995576718, L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_iv;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_3 = (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)il2cpp_codegen_object_new(ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		ParametersWithIV__ctor_mC1B4901D3CEBECE5903FE14597AA0701B7B7C994(L_3, L_1, L_2, NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(CipherUtilities_tDA37832A133C3F502C98888EA1477FBA0EF5F8F8_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = CipherUtilities_GetCipher_m120CBF0B698B4B035A827FF2E710AD7B170DC615(_stringLiteralAC78E78B6EC5C50ADC67D977E0F4C67424995CE6, NULL);
		RuntimeObject* L_5 = L_4;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_6 = V_0;
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(0 /* System.Void Org.BouncyCastle.Crypto.IBufferedCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var, L_5, (bool)1, L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___2_input;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = InterfaceFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Byte[] Org.BouncyCastle.Crypto.IBufferedCipher::DoFinal(System.Byte[]) */, IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var, L_5, L_7);
		return L_8;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::DecryptScrypt(System.String,System.Byte[],System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_DecryptScrypt_m828C9ED4E8F3A128B449D0AA91CC498B2EBE6524 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, String_t* ___0_password, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_mac, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_iv, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_cipherText, int32_t ___4_n, int32_t ___5_p, int32_t ___6_r, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_salt, int32_t ___8_dklen, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___0_password;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = KeyStoreCrypto_GetPasswordAsBytes_mA2E8301D37E8A83B376BAF88F222636728A9AF93(__this, L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___7_salt;
		int32_t L_3 = ___4_n;
		int32_t L_4 = ___6_r;
		int32_t L_5 = ___5_p;
		int32_t L_6 = ___8_dklen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = KeyStoreCrypto_GenerateDerivedScryptKey_mD84A7413EE9B46393273F5D0B8E928AFFDD4F372(__this, L_1, L_2, L_3, L_4, L_5, L_6, (bool)0, NULL);
		V_0 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___1_mac;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_iv;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___3_cipherText;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = KeyStoreCrypto_Decrypt_m69545AE305F21FD8AEA6EB106CE35AF55812E0DA(__this, L_8, L_9, L_10, L_11, NULL);
		return L_12;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::Decrypt(System.Byte[],System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_Decrypt_m69545AE305F21FD8AEA6EB106CE35AF55812E0DA (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mac, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_iv, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_cipherText, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_derivedKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_mac;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___2_cipherText;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___3_derivedKey;
		KeyStoreCrypto_ValidateMac_m50D46430C5F2BF65B89B4AA49C96E62788EC5D01(__this, L_0, L_1, L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___3_derivedKey;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_4, (RuntimeArray*)L_5, ((int32_t)16), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_iv;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___2_cipherText;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = KeyStoreCrypto_GenerateAesCtrCipher_mAEAC7F39874147CD2A0A3E3FD499934FFAEA0991(__this, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// System.Void Nethereum.KeyStore.Crypto.KeyStoreCrypto::ValidateMac(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreCrypto_ValidateMac_m50D46430C5F2BF65B89B4AA49C96E62788EC5D01 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mac, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_cipherText, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_derivedKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___2_derivedKey;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_cipherText;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = KeyStoreCrypto_GenerateMac_mC6C9A66E314C1298593041FE80E0037FB4ECAF99(__this, L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(HexByteConvertorExtensions_tC0594D62AB8C3331B8A790727E460C934AF8AB5F_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_2, (bool)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_mac;
		String_t* L_5;
		L_5 = HexByteConvertorExtensions_ToHex_mDCE719D58DDD16697D7C10ABF42854AB11454CEC(L_4, (bool)0, NULL);
		bool L_6;
		L_6 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		DecryptionException_t475B93777EFB780713433EEB8305E4BDCCF42738* L_7 = (DecryptionException_t475B93777EFB780713433EEB8305E4BDCCF42738*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecryptionException_t475B93777EFB780713433EEB8305E4BDCCF42738_il2cpp_TypeInfo_var)));
		DecryptionException__ctor_m77BC09FFF4E1BA18CF1E1F7CF0342BC72A274097(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB7248681F5E1332CF3625028F368C8C55C58D51C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyStoreCrypto_ValidateMac_m50D46430C5F2BF65B89B4AA49C96E62788EC5D01_RuntimeMethod_var)));
	}

IL_0027:
	{
		return;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.KeyStoreCrypto::GetPasswordAsBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyStoreCrypto_GetPasswordAsBytes_mA2E8301D37E8A83B376BAF88F222636728A9AF93 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, String_t* ___0_password, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___0_password;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Nethereum.KeyStore.Crypto.KeyStoreCrypto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStoreCrypto__ctor_mCD1EE469A35D2E0310F6AA84268229B1BB8F8354 (KeyStoreCrypto_t13198E602204E5B7FA50F0FD80DDE807CF190E1E* __this, const RuntimeMethod* method) 
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
// System.Byte[] Nethereum.KeyStore.Crypto.RandomBytesGenerator::GenerateRandomInitialisationVector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RandomBytesGenerator_GenerateRandomInitialisationVector_m0F3A6A3E966BC2F7E8CD4F5AC11A995078E8A223 (RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = RandomBytesGenerator_GenerateRandomBytes_m295AE07A9AEDFF1967610054AD8FC24EC08A7FA9(__this, ((int32_t)16), NULL);
		return L_0;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.RandomBytesGenerator::GenerateRandomSalt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RandomBytesGenerator_GenerateRandomSalt_m90B6D9D48D6302C09A213727920A2830FDB5E162 (RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = RandomBytesGenerator_GenerateRandomBytes_m295AE07A9AEDFF1967610054AD8FC24EC08A7FA9(__this, ((int32_t)32), NULL);
		return L_0;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.RandomBytesGenerator::GenerateRandomBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RandomBytesGenerator_GenerateRandomBytes_m295AE07A9AEDFF1967610054AD8FC24EC08A7FA9 (RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		int32_t L_0 = ___0_size;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_il2cpp_TypeInfo_var);
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_2 = ((RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_StaticFields*)il2cpp_codegen_static_fields_for(RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_il2cpp_TypeInfo_var))->___Random_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_2, L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		return L_4;
	}
}
// System.Void Nethereum.KeyStore.Crypto.RandomBytesGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomBytesGenerator__ctor_mB18EF14C65706EA148601B97467C13BA91F5345C (RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Nethereum.KeyStore.Crypto.RandomBytesGenerator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomBytesGenerator__cctor_mEEEC7489161C8F174027D07573589D55C9CE453F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_0 = (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076*)il2cpp_codegen_object_new(SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		SecureRandom__ctor_m1FB3C478CD5CC4CDF68C981D8F5F89FC8EF8CC68(L_0, NULL);
		((RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_StaticFields*)il2cpp_codegen_static_fields_for(RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_il2cpp_TypeInfo_var))->___Random_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_StaticFields*)il2cpp_codegen_static_fields_for(RandomBytesGenerator_tAA8B79104E991227AFAB52C768F6E154CC5F405B_il2cpp_TypeInfo_var))->___Random_0), (void*)L_0);
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
// System.Byte[] Nethereum.KeyStore.Crypto.ScryptNet::SingleIterationPBKDF2(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ScryptNet_SingleIterationPBKDF2_m5C15EBEBF23B38F84C60D6690A18031F501F6790 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_P, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_S, int32_t ___2_dkLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A* L_0 = (Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A*)il2cpp_codegen_object_new(Sha256Digest_tCC0D8AA2A66BB611E6FF294526E586D7F2D2A17A_il2cpp_TypeInfo_var);
		Sha256Digest__ctor_m6A98252E0DAF748D5D1BDBCDA91042301B1657D8(L_0, NULL);
		Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D* L_1 = (Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D*)il2cpp_codegen_object_new(Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D_il2cpp_TypeInfo_var);
		Pkcs5S2ParametersGenerator__ctor_m43D8AC42079DF38586045859373DF2C8825A6C71(L_1, L_0, NULL);
		Pkcs5S2ParametersGenerator_tE5BBDC0AE2D0221B1A624EEF05C6138A727DE36D* L_2 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_P;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_S;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.PbeParametersGenerator::Init(System.Byte[],System.Byte[],System.Int32) */, L_2, L_3, L_4, 1);
		int32_t L_5 = ___2_dkLen;
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(5 /* Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.PbeParametersGenerator::GenerateDerivedMacParameters(System.Int32) */, L_2, ((int32_t)il2cpp_codegen_multiply(L_5, 8)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_6, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		return L_7;
	}
}
// System.Byte[] Nethereum.KeyStore.Crypto.ScryptNet::CryptoScrypt(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ScryptNet_CryptoScrypt_m5AAEB7E15BBC29209AB45FA6EB93C8602A7BF7F8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_password, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_salt, int32_t ___2_N, int32_t ___3_r, int32_t ___4_p, int32_t ___5_dkLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	void* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	void* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	int32_t V_7 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B6_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B5_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B7_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B8_0 = NULL;
	{
		int32_t L_0 = ___3_r;
		int32_t L_1 = ___4_p;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)128), L_0)), L_1)), ((int32_t)63))));
		V_0 = L_2;
		int32_t L_3 = ___3_r;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)256), L_3)), ((int32_t)63))));
		int32_t L_5 = ___3_r;
		int32_t L_6 = ___2_N;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)128), L_5)), L_6)), ((int32_t)63))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_password;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___1_salt;
		int32_t L_11 = ___4_p;
		int32_t L_12 = ___3_r;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = ScryptNet_SingleIterationPBKDF2_m5C15EBEBF23B38F84C60D6690A18031F501F6790(L_9, L_10, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)128))), L_12)), NULL);
		V_0 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14;
		V_2 = L_15;
		G_B1_0 = L_7;
		G_B1_1 = L_4;
		if (!L_15)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_4;
			goto IL_0057;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_2;
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		if (((int32_t)(((RuntimeArray*)L_16)->max_length)))
		{
			G_B3_0 = G_B1_0;
			G_B3_1 = G_B1_1;
			goto IL_005c;
		}
	}

IL_0057:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		G_B4_0 = G_B2_0;
		G_B4_1 = G_B2_1;
		goto IL_0065;
	}

IL_005c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_2;
		V_1 = (uint8_t*)((uintptr_t)((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))));
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
	}

IL_0065:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = G_B4_0;
		V_4 = L_18;
		G_B5_0 = G_B4_1;
		if (!L_18)
		{
			G_B6_0 = G_B4_1;
			goto IL_0070;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_4;
		G_B6_0 = G_B5_0;
		if (((int32_t)(((RuntimeArray*)L_19)->max_length)))
		{
			G_B7_0 = G_B5_0;
			goto IL_0075;
		}
	}

IL_0070:
	{
		V_3 = (void*)((uintptr_t)0);
		G_B8_0 = G_B6_0;
		goto IL_007f;
	}

IL_0075:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_4;
		V_3 = (void*)((uintptr_t)((L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))));
		G_B8_0 = G_B7_0;
	}

IL_007f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = G_B8_0;
		V_6 = L_21;
		if (!L_21)
		{
			goto IL_008a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_6;
		if (((int32_t)(((RuntimeArray*)L_22)->max_length)))
		{
			goto IL_0090;
		}
	}

IL_008a:
	{
		V_5 = (void*)((uintptr_t)0);
		goto IL_009b;
	}

IL_0090:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_6;
		V_5 = (void*)((uintptr_t)((L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))));
	}

IL_009b:
	{
		V_7 = 0;
		goto IL_00bd;
	}

IL_00a0:
	{
		uint8_t* L_24 = V_1;
		int32_t L_25 = V_7;
		int32_t L_26 = ___3_r;
		int32_t L_27 = ___3_r;
		int32_t L_28 = ___2_N;
		void* L_29 = V_3;
		void* L_30 = V_5;
		ScryptNet_SMix_m14952E992EC6AEEB26E9D84AE1C6471C1546F246((uint8_t*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_24, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_25, ((int32_t)128))), L_26))))), L_27, L_28, (uint32_t*)L_29, (uint32_t*)L_30, NULL);
		int32_t L_31 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00bd:
	{
		int32_t L_32 = V_7;
		int32_t L_33 = ___4_p;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_00a0;
		}
	}
	{
		V_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___0_password;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_0;
		int32_t L_36 = ___5_dkLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37;
		L_37 = ScryptNet_SingleIterationPBKDF2_m5C15EBEBF23B38F84C60D6690A18031F501F6790(L_34, L_35, L_36, NULL);
		return L_37;
	}
}
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::BulkCopy(System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_BulkCopy_m02C41323623B15BE75F69BAF6CC1B679B5CFBC29 (void* ___0_dst, void* ___1_src, int32_t ___2_len, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		void* L_0 = ___0_dst;
		V_0 = (uint8_t*)L_0;
		void* L_1 = ___1_src;
		V_1 = (uint8_t*)L_1;
		goto IL_0017;
	}

IL_0006:
	{
		uint8_t* L_2 = V_0;
		uint8_t* L_3 = V_1;
		int64_t L_4 = *((int64_t*)L_3);
		*((int64_t*)L_2) = (int64_t)L_4;
		uint8_t* L_5 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, 8));
		uint8_t* L_6 = V_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, 8));
		int32_t L_7 = ___2_len;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_7, 8));
	}

IL_0017:
	{
		int32_t L_8 = ___2_len;
		if ((((int32_t)L_8) >= ((int32_t)8)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_9 = ___2_len;
		if ((((int32_t)L_9) < ((int32_t)4)))
		{
			goto IL_0030;
		}
	}
	{
		uint8_t* L_10 = V_0;
		uint8_t* L_11 = V_1;
		int32_t L_12 = *((uint32_t*)L_11);
		*((int32_t*)L_10) = (int32_t)L_12;
		uint8_t* L_13 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, 4));
		uint8_t* L_14 = V_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_14, 4));
		int32_t L_15 = ___2_len;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_15, 4));
	}

IL_0030:
	{
		int32_t L_16 = ___2_len;
		if ((((int32_t)L_16) < ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		uint8_t* L_17 = V_0;
		uint8_t* L_18 = V_1;
		int32_t L_19 = *((uint16_t*)L_18);
		*((int16_t*)L_17) = (int16_t)L_19;
		uint8_t* L_20 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, 2));
		uint8_t* L_21 = V_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, 2));
		int32_t L_22 = ___2_len;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_22, 2));
	}

IL_0045:
	{
		int32_t L_23 = ___2_len;
		if ((((int32_t)L_23) < ((int32_t)1)))
		{
			goto IL_004d;
		}
	}
	{
		uint8_t* L_24 = V_0;
		uint8_t* L_25 = V_1;
		int32_t L_26 = (*(L_25));
		*((int8_t*)L_24) = (int8_t)L_26;
	}

IL_004d:
	{
		return;
	}
}
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::BulkXor(System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_BulkXor_m605660F65DADB0766CF15C6AF95602335E0DB7BA (void* ___0_dst, void* ___1_src, int32_t ___2_len, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	{
		void* L_0 = ___0_dst;
		V_0 = (uint8_t*)L_0;
		void* L_1 = ___1_src;
		V_1 = (uint8_t*)L_1;
		goto IL_001a;
	}

IL_0006:
	{
		uint8_t* L_2 = V_0;
		uint8_t* L_3 = L_2;
		int64_t L_4 = *((int64_t*)L_3);
		uint8_t* L_5 = V_1;
		int64_t L_6 = *((int64_t*)L_5);
		*((int64_t*)L_3) = (int64_t)((int64_t)(L_4^L_6));
		uint8_t* L_7 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, 8));
		uint8_t* L_8 = V_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, 8));
		int32_t L_9 = ___2_len;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_9, 8));
	}

IL_001a:
	{
		int32_t L_10 = ___2_len;
		if ((((int32_t)L_10) >= ((int32_t)8)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_11 = ___2_len;
		if ((((int32_t)L_11) < ((int32_t)4)))
		{
			goto IL_0036;
		}
	}
	{
		uint8_t* L_12 = V_0;
		uint8_t* L_13 = L_12;
		int32_t L_14 = *((uint32_t*)L_13);
		uint8_t* L_15 = V_1;
		int32_t L_16 = *((uint32_t*)L_15);
		*((int32_t*)L_13) = (int32_t)((int32_t)(L_14^L_16));
		uint8_t* L_17 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, 4));
		uint8_t* L_18 = V_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, 4));
		int32_t L_19 = ___2_len;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_19, 4));
	}

IL_0036:
	{
		int32_t L_20 = ___2_len;
		if ((((int32_t)L_20) < ((int32_t)2)))
		{
			goto IL_004f;
		}
	}
	{
		uint8_t* L_21 = V_0;
		uint8_t* L_22 = L_21;
		int32_t L_23 = *((uint16_t*)L_22);
		uint8_t* L_24 = V_1;
		int32_t L_25 = *((uint16_t*)L_24);
		*((int16_t*)L_22) = (int16_t)((int32_t)(uint16_t)((int32_t)(L_23^L_25)));
		uint8_t* L_26 = V_0;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_26, 2));
		uint8_t* L_27 = V_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_27, 2));
		int32_t L_28 = ___2_len;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_28, 2));
	}

IL_004f:
	{
		int32_t L_29 = ___2_len;
		if ((((int32_t)L_29) < ((int32_t)1)))
		{
			goto IL_005b;
		}
	}
	{
		uint8_t* L_30 = V_0;
		uint8_t* L_31 = L_30;
		int32_t L_32 = (*(L_31));
		uint8_t* L_33 = V_1;
		int32_t L_34 = (*(L_33));
		*((int8_t*)L_31) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_32^L_34)));
	}

IL_005b:
	{
		return;
	}
}
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::Encode32(System.Byte*,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_Encode32_mE2F354CEBB2F7B991142868DA0B05DC287079389 (uint8_t* ___0_p, uint32_t ___1_x, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_p;
		uint32_t L_1 = ___1_x;
		*((int8_t*)L_0) = (int8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_1&((int32_t)255))));
		uint8_t* L_2 = ___0_p;
		uint32_t L_3 = ___1_x;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, 1))) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_3>>8))&((int32_t)255))));
		uint8_t* L_4 = ___0_p;
		uint32_t L_5 = ___1_x;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, 2))) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_5>>((int32_t)16)))&((int32_t)255))));
		uint8_t* L_6 = ___0_p;
		uint32_t L_7 = ___1_x;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, 3))) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((uint32_t)L_7>>((int32_t)24)))&((int32_t)255))));
		return;
	}
}
// System.UInt32 Nethereum.KeyStore.Crypto.ScryptNet::Decode32(System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ScryptNet_Decode32_m72CB0DD11562278FED4B6622F7819E3810D93B3E (uint8_t* ___0_p, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_p;
		int32_t L_1 = (*(L_0));
		uint8_t* L_2 = ___0_p;
		int32_t L_3 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, 1))));
		uint8_t* L_4 = ___0_p;
		int32_t L_5 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, 2))));
		uint8_t* L_6 = ___0_p;
		int32_t L_7 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, 3))));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(L_3<<8)))), ((int32_t)(L_5<<((int32_t)16))))), ((int32_t)(L_7<<((int32_t)24)))));
	}
}
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::Salsa208(System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_Salsa208_m4646DF9B913D1A96DC008CCAABAF2B9300C9A512 (uint32_t* ___0_B, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	int32_t V_16 = 0;
	{
		uint32_t* L_0 = ___0_B;
		int32_t L_1 = (*(L_0));
		V_0 = L_1;
		uint32_t* L_2 = ___0_B;
		int32_t L_3 = (*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, 4))));
		V_1 = L_3;
		uint32_t* L_4 = ___0_B;
		int32_t L_5 = (*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4))))));
		V_2 = L_5;
		uint32_t* L_6 = ___0_B;
		int32_t L_7 = (*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 4))))));
		V_3 = L_7;
		uint32_t* L_8 = ___0_B;
		int32_t L_9 = (*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), 4))))));
		V_4 = L_9;
		uint32_t* L_10 = ___0_B;
		int32_t L_11 = (*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)5), 4))))));
		V_5 = L_11;
		uint32_t* L_12 = ___0_B;
		int32_t L_13 = (*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)6), 4))))));
		V_6 = L_13;
		uint32_t* L_14 = ___0_B;
		int32_t L_15 = (*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)7), 4))))));
		V_7 = L_15;
		uint32_t* L_16 = ___0_B;
		int32_t L_17 = (*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)8), 4))))));
		V_8 = L_17;
		uint32_t* L_18 = ___0_B;
		int32_t L_19 = (*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)9)), 4))))));
		V_9 = L_19;
		uint32_t* L_20 = ___0_B;
		int32_t L_21 = (*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)10)), 4))))));
		V_10 = L_21;
		uint32_t* L_22 = ___0_B;
		int32_t L_23 = (*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)11)), 4))))));
		V_11 = L_23;
		uint32_t* L_24 = ___0_B;
		int32_t L_25 = (*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)12)), 4))))));
		V_12 = L_25;
		uint32_t* L_26 = ___0_B;
		int32_t L_27 = (*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)13)), 4))))));
		V_13 = L_27;
		uint32_t* L_28 = ___0_B;
		int32_t L_29 = (*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)14)), 4))))));
		V_14 = L_29;
		uint32_t* L_30 = ___0_B;
		int32_t L_31 = (*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)15)), 4))))));
		V_15 = L_31;
		V_16 = 0;
		goto IL_0291;
	}

IL_0093:
	{
		uint32_t L_32 = V_4;
		uint32_t L_33 = V_0;
		uint32_t L_34 = V_12;
		uint32_t L_35;
		L_35 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)L_34)), 7, NULL);
		V_4 = ((int32_t)((int32_t)L_32^(int32_t)L_35));
		uint32_t L_36 = V_8;
		uint32_t L_37 = V_4;
		uint32_t L_38 = V_0;
		uint32_t L_39;
		L_39 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_38)), ((int32_t)9), NULL);
		V_8 = ((int32_t)((int32_t)L_36^(int32_t)L_39));
		uint32_t L_40 = V_12;
		uint32_t L_41 = V_8;
		uint32_t L_42 = V_4;
		uint32_t L_43;
		L_43 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)L_42)), ((int32_t)13), NULL);
		V_12 = ((int32_t)((int32_t)L_40^(int32_t)L_43));
		uint32_t L_44 = V_0;
		uint32_t L_45 = V_12;
		uint32_t L_46 = V_8;
		uint32_t L_47;
		L_47 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)L_46)), ((int32_t)18), NULL);
		V_0 = ((int32_t)((int32_t)L_44^(int32_t)L_47));
		uint32_t L_48 = V_9;
		uint32_t L_49 = V_5;
		uint32_t L_50 = V_1;
		uint32_t L_51;
		L_51 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)L_50)), 7, NULL);
		V_9 = ((int32_t)((int32_t)L_48^(int32_t)L_51));
		uint32_t L_52 = V_13;
		uint32_t L_53 = V_9;
		uint32_t L_54 = V_5;
		uint32_t L_55;
		L_55 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)L_54)), ((int32_t)9), NULL);
		V_13 = ((int32_t)((int32_t)L_52^(int32_t)L_55));
		uint32_t L_56 = V_1;
		uint32_t L_57 = V_13;
		uint32_t L_58 = V_9;
		uint32_t L_59;
		L_59 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)L_58)), ((int32_t)13), NULL);
		V_1 = ((int32_t)((int32_t)L_56^(int32_t)L_59));
		uint32_t L_60 = V_5;
		uint32_t L_61 = V_1;
		uint32_t L_62 = V_13;
		uint32_t L_63;
		L_63 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)L_62)), ((int32_t)18), NULL);
		V_5 = ((int32_t)((int32_t)L_60^(int32_t)L_63));
		uint32_t L_64 = V_14;
		uint32_t L_65 = V_10;
		uint32_t L_66 = V_6;
		uint32_t L_67;
		L_67 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)L_66)), 7, NULL);
		V_14 = ((int32_t)((int32_t)L_64^(int32_t)L_67));
		uint32_t L_68 = V_2;
		uint32_t L_69 = V_14;
		uint32_t L_70 = V_10;
		uint32_t L_71;
		L_71 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)L_70)), ((int32_t)9), NULL);
		V_2 = ((int32_t)((int32_t)L_68^(int32_t)L_71));
		uint32_t L_72 = V_6;
		uint32_t L_73 = V_2;
		uint32_t L_74 = V_14;
		uint32_t L_75;
		L_75 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)L_74)), ((int32_t)13), NULL);
		V_6 = ((int32_t)((int32_t)L_72^(int32_t)L_75));
		uint32_t L_76 = V_10;
		uint32_t L_77 = V_6;
		uint32_t L_78 = V_2;
		uint32_t L_79;
		L_79 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)L_78)), ((int32_t)18), NULL);
		V_10 = ((int32_t)((int32_t)L_76^(int32_t)L_79));
		uint32_t L_80 = V_3;
		uint32_t L_81 = V_15;
		uint32_t L_82 = V_11;
		uint32_t L_83;
		L_83 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)L_82)), 7, NULL);
		V_3 = ((int32_t)((int32_t)L_80^(int32_t)L_83));
		uint32_t L_84 = V_7;
		uint32_t L_85 = V_3;
		uint32_t L_86 = V_15;
		uint32_t L_87;
		L_87 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)L_86)), ((int32_t)9), NULL);
		V_7 = ((int32_t)((int32_t)L_84^(int32_t)L_87));
		uint32_t L_88 = V_11;
		uint32_t L_89 = V_7;
		uint32_t L_90 = V_3;
		uint32_t L_91;
		L_91 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)L_90)), ((int32_t)13), NULL);
		V_11 = ((int32_t)((int32_t)L_88^(int32_t)L_91));
		uint32_t L_92 = V_15;
		uint32_t L_93 = V_11;
		uint32_t L_94 = V_7;
		uint32_t L_95;
		L_95 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)L_94)), ((int32_t)18), NULL);
		V_15 = ((int32_t)((int32_t)L_92^(int32_t)L_95));
		uint32_t L_96 = V_1;
		uint32_t L_97 = V_0;
		uint32_t L_98 = V_3;
		uint32_t L_99;
		L_99 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)L_98)), 7, NULL);
		V_1 = ((int32_t)((int32_t)L_96^(int32_t)L_99));
		uint32_t L_100 = V_2;
		uint32_t L_101 = V_1;
		uint32_t L_102 = V_0;
		uint32_t L_103;
		L_103 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)L_102)), ((int32_t)9), NULL);
		V_2 = ((int32_t)((int32_t)L_100^(int32_t)L_103));
		uint32_t L_104 = V_3;
		uint32_t L_105 = V_2;
		uint32_t L_106 = V_1;
		uint32_t L_107;
		L_107 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)L_106)), ((int32_t)13), NULL);
		V_3 = ((int32_t)((int32_t)L_104^(int32_t)L_107));
		uint32_t L_108 = V_0;
		uint32_t L_109 = V_3;
		uint32_t L_110 = V_2;
		uint32_t L_111;
		L_111 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)L_110)), ((int32_t)18), NULL);
		V_0 = ((int32_t)((int32_t)L_108^(int32_t)L_111));
		uint32_t L_112 = V_6;
		uint32_t L_113 = V_5;
		uint32_t L_114 = V_4;
		uint32_t L_115;
		L_115 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)L_114)), 7, NULL);
		V_6 = ((int32_t)((int32_t)L_112^(int32_t)L_115));
		uint32_t L_116 = V_7;
		uint32_t L_117 = V_6;
		uint32_t L_118 = V_5;
		uint32_t L_119;
		L_119 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)L_118)), ((int32_t)9), NULL);
		V_7 = ((int32_t)((int32_t)L_116^(int32_t)L_119));
		uint32_t L_120 = V_4;
		uint32_t L_121 = V_7;
		uint32_t L_122 = V_6;
		uint32_t L_123;
		L_123 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)L_122)), ((int32_t)13), NULL);
		V_4 = ((int32_t)((int32_t)L_120^(int32_t)L_123));
		uint32_t L_124 = V_5;
		uint32_t L_125 = V_4;
		uint32_t L_126 = V_7;
		uint32_t L_127;
		L_127 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_125, (int32_t)L_126)), ((int32_t)18), NULL);
		V_5 = ((int32_t)((int32_t)L_124^(int32_t)L_127));
		uint32_t L_128 = V_11;
		uint32_t L_129 = V_10;
		uint32_t L_130 = V_9;
		uint32_t L_131;
		L_131 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)L_130)), 7, NULL);
		V_11 = ((int32_t)((int32_t)L_128^(int32_t)L_131));
		uint32_t L_132 = V_8;
		uint32_t L_133 = V_11;
		uint32_t L_134 = V_10;
		uint32_t L_135;
		L_135 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)L_134)), ((int32_t)9), NULL);
		V_8 = ((int32_t)((int32_t)L_132^(int32_t)L_135));
		uint32_t L_136 = V_9;
		uint32_t L_137 = V_8;
		uint32_t L_138 = V_11;
		uint32_t L_139;
		L_139 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)L_138)), ((int32_t)13), NULL);
		V_9 = ((int32_t)((int32_t)L_136^(int32_t)L_139));
		uint32_t L_140 = V_10;
		uint32_t L_141 = V_9;
		uint32_t L_142 = V_8;
		uint32_t L_143;
		L_143 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)L_142)), ((int32_t)18), NULL);
		V_10 = ((int32_t)((int32_t)L_140^(int32_t)L_143));
		uint32_t L_144 = V_12;
		uint32_t L_145 = V_15;
		uint32_t L_146 = V_14;
		uint32_t L_147;
		L_147 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_145, (int32_t)L_146)), 7, NULL);
		V_12 = ((int32_t)((int32_t)L_144^(int32_t)L_147));
		uint32_t L_148 = V_13;
		uint32_t L_149 = V_12;
		uint32_t L_150 = V_15;
		uint32_t L_151;
		L_151 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_149, (int32_t)L_150)), ((int32_t)9), NULL);
		V_13 = ((int32_t)((int32_t)L_148^(int32_t)L_151));
		uint32_t L_152 = V_14;
		uint32_t L_153 = V_13;
		uint32_t L_154 = V_12;
		uint32_t L_155;
		L_155 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_153, (int32_t)L_154)), ((int32_t)13), NULL);
		V_14 = ((int32_t)((int32_t)L_152^(int32_t)L_155));
		uint32_t L_156 = V_15;
		uint32_t L_157 = V_14;
		uint32_t L_158 = V_13;
		uint32_t L_159;
		L_159 = ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F(((int32_t)il2cpp_codegen_add((int32_t)L_157, (int32_t)L_158)), ((int32_t)18), NULL);
		V_15 = ((int32_t)((int32_t)L_156^(int32_t)L_159));
		int32_t L_160 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_160, 2));
	}

IL_0291:
	{
		int32_t L_161 = V_16;
		if ((((int32_t)L_161) < ((int32_t)8)))
		{
			goto IL_0093;
		}
	}
	{
		uint32_t* L_162 = ___0_B;
		uint32_t* L_163 = L_162;
		int32_t L_164 = (*(L_163));
		uint32_t L_165 = V_0;
		*((int32_t*)L_163) = (int32_t)((int32_t)il2cpp_codegen_add(L_164, (int32_t)L_165));
		uint32_t* L_166 = ___0_B;
		uint32_t* L_167 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_166, 4));
		int32_t L_168 = (*(L_167));
		uint32_t L_169 = V_1;
		*((int32_t*)L_167) = (int32_t)((int32_t)il2cpp_codegen_add(L_168, (int32_t)L_169));
		uint32_t* L_170 = ___0_B;
		uint32_t* L_171 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_170, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4))));
		int32_t L_172 = (*(L_171));
		uint32_t L_173 = V_2;
		*((int32_t*)L_171) = (int32_t)((int32_t)il2cpp_codegen_add(L_172, (int32_t)L_173));
		uint32_t* L_174 = ___0_B;
		uint32_t* L_175 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_174, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), 4))));
		int32_t L_176 = (*(L_175));
		uint32_t L_177 = V_3;
		*((int32_t*)L_175) = (int32_t)((int32_t)il2cpp_codegen_add(L_176, (int32_t)L_177));
		uint32_t* L_178 = ___0_B;
		uint32_t* L_179 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_178, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), 4))));
		int32_t L_180 = (*(L_179));
		uint32_t L_181 = V_4;
		*((int32_t*)L_179) = (int32_t)((int32_t)il2cpp_codegen_add(L_180, (int32_t)L_181));
		uint32_t* L_182 = ___0_B;
		uint32_t* L_183 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_182, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)5), 4))));
		int32_t L_184 = (*(L_183));
		uint32_t L_185 = V_5;
		*((int32_t*)L_183) = (int32_t)((int32_t)il2cpp_codegen_add(L_184, (int32_t)L_185));
		uint32_t* L_186 = ___0_B;
		uint32_t* L_187 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_186, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)6), 4))));
		int32_t L_188 = (*(L_187));
		uint32_t L_189 = V_6;
		*((int32_t*)L_187) = (int32_t)((int32_t)il2cpp_codegen_add(L_188, (int32_t)L_189));
		uint32_t* L_190 = ___0_B;
		uint32_t* L_191 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_190, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)7), 4))));
		int32_t L_192 = (*(L_191));
		uint32_t L_193 = V_7;
		*((int32_t*)L_191) = (int32_t)((int32_t)il2cpp_codegen_add(L_192, (int32_t)L_193));
		uint32_t* L_194 = ___0_B;
		uint32_t* L_195 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_194, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)8), 4))));
		int32_t L_196 = (*(L_195));
		uint32_t L_197 = V_8;
		*((int32_t*)L_195) = (int32_t)((int32_t)il2cpp_codegen_add(L_196, (int32_t)L_197));
		uint32_t* L_198 = ___0_B;
		uint32_t* L_199 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_198, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)9)), 4))));
		int32_t L_200 = (*(L_199));
		uint32_t L_201 = V_9;
		*((int32_t*)L_199) = (int32_t)((int32_t)il2cpp_codegen_add(L_200, (int32_t)L_201));
		uint32_t* L_202 = ___0_B;
		uint32_t* L_203 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_202, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)10)), 4))));
		int32_t L_204 = (*(L_203));
		uint32_t L_205 = V_10;
		*((int32_t*)L_203) = (int32_t)((int32_t)il2cpp_codegen_add(L_204, (int32_t)L_205));
		uint32_t* L_206 = ___0_B;
		uint32_t* L_207 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_206, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)11)), 4))));
		int32_t L_208 = (*(L_207));
		uint32_t L_209 = V_11;
		*((int32_t*)L_207) = (int32_t)((int32_t)il2cpp_codegen_add(L_208, (int32_t)L_209));
		uint32_t* L_210 = ___0_B;
		uint32_t* L_211 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_210, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)12)), 4))));
		int32_t L_212 = (*(L_211));
		uint32_t L_213 = V_12;
		*((int32_t*)L_211) = (int32_t)((int32_t)il2cpp_codegen_add(L_212, (int32_t)L_213));
		uint32_t* L_214 = ___0_B;
		uint32_t* L_215 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_214, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)13)), 4))));
		int32_t L_216 = (*(L_215));
		uint32_t L_217 = V_13;
		*((int32_t*)L_215) = (int32_t)((int32_t)il2cpp_codegen_add(L_216, (int32_t)L_217));
		uint32_t* L_218 = ___0_B;
		uint32_t* L_219 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_218, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)14)), 4))));
		int32_t L_220 = (*(L_219));
		uint32_t L_221 = V_14;
		*((int32_t*)L_219) = (int32_t)((int32_t)il2cpp_codegen_add(L_220, (int32_t)L_221));
		uint32_t* L_222 = ___0_B;
		uint32_t* L_223 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_222, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)15)), 4))));
		int32_t L_224 = (*(L_223));
		uint32_t L_225 = V_15;
		*((int32_t*)L_223) = (int32_t)((int32_t)il2cpp_codegen_add(L_224, (int32_t)L_225));
		return;
	}
}
// System.UInt32 Nethereum.KeyStore.Crypto.ScryptNet::R(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ScryptNet_R_m9E8C102693F79682D8F38D6C78FD97B721CBEE2F (uint32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		uint32_t L_2 = ___0_a;
		int32_t L_3 = ___1_b;
		return ((int32_t)(((int32_t)((int32_t)L_0<<((int32_t)(L_1&((int32_t)31)))))|((int32_t)((uint32_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::BlockMix(System.UInt32*,System.UInt32*,System.UInt32*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_BlockMix_mE84FDFD2F76264C25F3C74C5EA9C89242C417798 (uint32_t* ___0_Bin, uint32_t* ___1_Bout, uint32_t* ___2_X, int32_t ___3_r, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t* L_0 = ___2_X;
		uint32_t* L_1 = ___0_Bin;
		int32_t L_2 = ___3_r;
		ScryptNet_BulkCopy_m02C41323623B15BE75F69BAF6CC1B679B5CFBC29((void*)L_0, (void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_2)), 1)), ((int32_t)16)))), 4))))), ((int32_t)64), NULL);
		V_0 = 0;
		goto IL_0078;
	}

IL_001a:
	{
		uint32_t* L_3 = ___2_X;
		uint32_t* L_4 = ___0_Bin;
		int32_t L_5 = V_0;
		ScryptNet_BulkXor_m605660F65DADB0766CF15C6AF95602335E0DB7BA((void*)L_3, (void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)16)))), 4))))), ((int32_t)64), NULL);
		uint32_t* L_6 = ___2_X;
		ScryptNet_Salsa208_m4646DF9B913D1A96DC008CCAABAF2B9300C9A512(L_6, NULL);
		uint32_t* L_7 = ___1_Bout;
		int32_t L_8 = V_0;
		uint32_t* L_9 = ___2_X;
		ScryptNet_BulkCopy_m02C41323623B15BE75F69BAF6CC1B679B5CFBC29((void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(L_8, 8))), 4))))), (void*)L_9, ((int32_t)64), NULL);
		uint32_t* L_10 = ___2_X;
		uint32_t* L_11 = ___0_Bin;
		int32_t L_12 = V_0;
		ScryptNet_BulkXor_m605660F65DADB0766CF15C6AF95602335E0DB7BA((void*)L_10, (void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)16))), ((int32_t)16)))), 4))))), ((int32_t)64), NULL);
		uint32_t* L_13 = ___2_X;
		ScryptNet_Salsa208_m4646DF9B913D1A96DC008CCAABAF2B9300C9A512(L_13, NULL);
		uint32_t* L_14 = ___1_Bout;
		int32_t L_15 = V_0;
		int32_t L_16 = ___3_r;
		uint32_t* L_17 = ___2_X;
		ScryptNet_BulkCopy_m02C41323623B15BE75F69BAF6CC1B679B5CFBC29((void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_15, 8)), ((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)16)))))), 4))))), (void*)L_17, ((int32_t)64), NULL);
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 2));
	}

IL_0078:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = ___3_r;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_20)))))
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.Int64 Nethereum.KeyStore.Crypto.ScryptNet::Integerify(System.UInt32*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ScryptNet_Integerify_m7CC0659FA5AED6CE8D42793C7D98F527E72B75B4 (uint32_t* ___0_B, int32_t ___1_r, const RuntimeMethod* method) 
{
	uint32_t* V_0 = NULL;
	{
		uint32_t* L_0 = ___0_B;
		int32_t L_1 = ___1_r;
		V_0 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(2, L_1)), 1)), ((int32_t)64)))));
		uint32_t* L_2 = V_0;
		int32_t L_3 = (*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_2, 4))));
		uint32_t* L_4 = V_0;
		int32_t L_5 = (*(L_4));
		return ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)((uint32_t)L_3))<<((int32_t)32))), ((int64_t)(uint64_t)((uint32_t)L_5))));
	}
}
// System.Void Nethereum.KeyStore.Crypto.ScryptNet::SMix(System.Byte*,System.Int32,System.Int32,System.UInt32*,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScryptNet_SMix_m14952E992EC6AEEB26E9D84AE1C6471C1546F246 (uint8_t* ___0_B, int32_t ___1_r, int32_t ___2_N, uint32_t* ___3_V, uint32_t* ___4_XY, const RuntimeMethod* method) 
{
	uint32_t* V_0 = NULL;
	uint32_t* V_1 = NULL;
	uint32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	int32_t V_5 = 0;
	int64_t V_6 = 0;
	int32_t V_7 = 0;
	{
		uint32_t* L_0 = ___4_XY;
		V_0 = L_0;
		uint32_t* L_1 = ___4_XY;
		int32_t L_2 = ___1_r;
		V_1 = (uint32_t*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_2))), 4)))));
		uint32_t* L_3 = ___4_XY;
		int32_t L_4 = ___1_r;
		V_2 = (uint32_t*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_multiply(((int32_t)64), L_4))), 4)))));
		V_3 = 0;
		goto IL_0035;
	}

IL_001f:
	{
		uint32_t* L_5 = V_0;
		int32_t L_6 = V_3;
		uint8_t* L_7 = ___0_B;
		int32_t L_8 = V_3;
		uint32_t L_9;
		L_9 = ScryptNet_Decode32_m72CB0DD11562278FED4B6622F7819E3810D93B3E((uint8_t*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, ((int32_t)il2cpp_codegen_multiply(4, L_8))))), NULL);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4))))) = (int32_t)L_9;
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0035:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = ___1_r;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_12)))))
		{
			goto IL_001f;
		}
	}
	{
		V_4 = ((int64_t)0);
		goto IL_0096;
	}

IL_0042:
	{
		uint32_t* L_13 = ___3_V;
		int64_t L_14 = V_4;
		int32_t L_15 = ___1_r;
		uint32_t* L_16 = V_0;
		int32_t L_17 = ___1_r;
		ScryptNet_BulkCopy_m02C41323623B15BE75F69BAF6CC1B679B5CFBC29((void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(L_14, ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_15))))), ((int64_t)4))))))), (void*)L_16, ((int32_t)il2cpp_codegen_multiply(((int32_t)128), L_17)), NULL);
		uint32_t* L_18 = V_0;
		uint32_t* L_19 = V_1;
		uint32_t* L_20 = V_2;
		int32_t L_21 = ___1_r;
		ScryptNet_BlockMix_mE84FDFD2F76264C25F3C74C5EA9C89242C417798(L_18, L_19, L_20, L_21, NULL);
		uint32_t* L_22 = ___3_V;
		int64_t L_23 = V_4;
		int32_t L_24 = ___1_r;
		uint32_t* L_25 = V_1;
		int32_t L_26 = ___1_r;
		ScryptNet_BulkCopy_m02C41323623B15BE75F69BAF6CC1B679B5CFBC29((void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add(L_23, ((int64_t)1))), ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_24))))), ((int64_t)4))))))), (void*)L_25, ((int32_t)il2cpp_codegen_multiply(((int32_t)128), L_26)), NULL);
		uint32_t* L_27 = V_1;
		uint32_t* L_28 = V_0;
		uint32_t* L_29 = V_2;
		int32_t L_30 = ___1_r;
		ScryptNet_BlockMix_mE84FDFD2F76264C25F3C74C5EA9C89242C417798(L_27, L_28, L_29, L_30, NULL);
		int64_t L_31 = V_4;
		V_4 = ((int64_t)il2cpp_codegen_add(L_31, ((int64_t)2)));
	}

IL_0096:
	{
		int64_t L_32 = V_4;
		int32_t L_33 = ___2_N;
		if ((((int64_t)L_32) < ((int64_t)((int64_t)L_33))))
		{
			goto IL_0042;
		}
	}
	{
		V_5 = 0;
		goto IL_010d;
	}

IL_00a1:
	{
		uint32_t* L_34 = V_0;
		int32_t L_35 = ___1_r;
		int64_t L_36;
		L_36 = ScryptNet_Integerify_m7CC0659FA5AED6CE8D42793C7D98F527E72B75B4(L_34, L_35, NULL);
		int32_t L_37 = ___2_N;
		V_6 = ((int64_t)(L_36&((int64_t)((int32_t)il2cpp_codegen_subtract(L_37, 1)))));
		uint32_t* L_38 = V_0;
		uint32_t* L_39 = ___3_V;
		int64_t L_40 = V_6;
		int32_t L_41 = ___1_r;
		int32_t L_42 = ___1_r;
		ScryptNet_BulkXor_m605660F65DADB0766CF15C6AF95602335E0DB7BA((void*)L_38, (void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(L_40, ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_41))))), ((int64_t)4))))))), ((int32_t)il2cpp_codegen_multiply(((int32_t)128), L_42)), NULL);
		uint32_t* L_43 = V_0;
		uint32_t* L_44 = V_1;
		uint32_t* L_45 = V_2;
		int32_t L_46 = ___1_r;
		ScryptNet_BlockMix_mE84FDFD2F76264C25F3C74C5EA9C89242C417798(L_43, L_44, L_45, L_46, NULL);
		uint32_t* L_47 = V_1;
		int32_t L_48 = ___1_r;
		int64_t L_49;
		L_49 = ScryptNet_Integerify_m7CC0659FA5AED6CE8D42793C7D98F527E72B75B4(L_47, L_48, NULL);
		int32_t L_50 = ___2_N;
		V_6 = ((int64_t)(L_49&((int64_t)((int32_t)il2cpp_codegen_subtract(L_50, 1)))));
		uint32_t* L_51 = V_1;
		uint32_t* L_52 = ___3_V;
		int64_t L_53 = V_6;
		int32_t L_54 = ___1_r;
		int32_t L_55 = ___1_r;
		ScryptNet_BulkXor_m605660F65DADB0766CF15C6AF95602335E0DB7BA((void*)L_51, (void*)((uintptr_t)((uint32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_multiply(L_53, ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_54))))), ((int64_t)4))))))), ((int32_t)il2cpp_codegen_multiply(((int32_t)128), L_55)), NULL);
		uint32_t* L_56 = V_1;
		uint32_t* L_57 = V_0;
		uint32_t* L_58 = V_2;
		int32_t L_59 = ___1_r;
		ScryptNet_BlockMix_mE84FDFD2F76264C25F3C74C5EA9C89242C417798(L_56, L_57, L_58, L_59, NULL);
		int32_t L_60 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_60, 2));
	}

IL_010d:
	{
		int32_t L_61 = V_5;
		int32_t L_62 = ___2_N;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_00a1;
		}
	}
	{
		V_7 = 0;
		goto IL_0131;
	}

IL_0117:
	{
		uint8_t* L_63 = ___0_B;
		int32_t L_64 = V_7;
		uint32_t* L_65 = V_0;
		int32_t L_66 = V_7;
		int32_t L_67 = (*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_65, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_66), 4))))));
		ScryptNet_Encode32_mE2F354CEBB2F7B991142868DA0B05DC287079389((uint8_t*)((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_63, ((int32_t)il2cpp_codegen_multiply(4, L_64))))), L_67, NULL);
		int32_t L_68 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_0131:
	{
		int32_t L_69 = V_7;
		int32_t L_70 = ___1_r;
		if ((((int32_t)L_69) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)32), L_70)))))
		{
			goto IL_0117;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParams_get_N_mE57FDEFFC05A1BEE6E1D2AEC8E0768206BEE49E2_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CNU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParams_get_R_mBBE1A0B0B5E9B5E32A3E798FAC0766775DDF186E_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CRU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParams_get_P_mF431C35431D06FDC71DF89E3BCA31DB14A9C880E_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KdfParams_get_Dklen_m1E5547E75FFAD02C826CFDC8CD09AC6EAEEBDB14_inline (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDklenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CipherParams_get_Iv_mACA12BCFA8DA0C8DF791A05028119A5A14F4CBC4_inline (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CIvU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KdfParams_get_Salt_mBC1DA50823694582BA754AAAB3F2C098C024205B_inline (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSaltU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CipherParams_set_Iv_mE77D6319BE01333E7B3F6F7F98453DABAE5BB6C6_inline (CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CIvU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIvU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_cipherparams_mE014108E074C5803596A0CE491004920054A7A86_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* ___0_value, const RuntimeMethod* method) 
{
	{
		CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* L_0 = ___0_value;
		__this->___U3CcipherparamsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcipherparamsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoScryptDTO_set_kdfparams_mD261CED055A2C04A72FAFF40AE3C420DFAC1483B_inline (CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* __this, ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* ___0_value, const RuntimeMethod* method) 
{
	{
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_0 = ___0_value;
		__this->___U3CkdfparamsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkdfparamsU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStoreDTOBase_set_address_m4E71FF95A9D7900DD962E9C8EDA24D1053EC5C5D_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CaddressU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CaddressU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStoreDTOBase_set_id_m764A98BA5E66E066334464B230ED752BA37A1905_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStoreDTOBase_set_version_m8891C2744FDC8C814E198F4C66AF3F1E87F0180F_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CversionU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* KeyStoreScryptDTO_get_crypto_m2DBF86D6C6F20BAD45B2518EBFCA912E58B3714B_inline (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* __this, const RuntimeMethod* method) 
{
	{
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_0 = __this->___U3CcryptoU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_cipher_m577997203D05BD47C1F03175A176CEE47468A563_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CcipherU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcipherU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_cipherText_m100CA8B4796B16C2C927A56C894D18F3B354DC03_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CcipherTextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcipherTextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_kdf_m0CE24ACCEAD963F6D649715EFAB53CE0B3BD7F54_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CkdfU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CkdfU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfoDTOBase_set_mac_m8C7197F81B08179424DDC30A8D72413D82D3CC54_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CmacU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmacU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* CryptoInfoScryptDTO_get_kdfparams_m88558053C3D05D95A823EC4DB490A6F85518808A_inline (CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* __this, const RuntimeMethod* method) 
{
	{
		ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* L_0 = __this->___U3CkdfparamsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParamsDTO_set_r_m9EA349D301AF31CBC06A4204807852BC10B8772B_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CrU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParamsDTO_set_n_mF43334DBC344EFF9F8DCED73543A5A25847A6A55_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CnU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParamsDTO_set_p_m2A2C1324B4C9F90F65E916EB957EDB148865DF45_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CpU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KdfParamsDTO_set_dklen_mA75B7F4B76A3E1E4D4D3F7C139F0CF15A097A0A6_inline (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CdklenU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KdfParamsDTO_set_salt_m1D5465724D0D2EC60A15AE7671FC6AC7266052F2_inline (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CsaltU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsaltU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* CryptoInfoDTOBase_get_cipherparams_mE9D29F3332F2FC754DE4C29BC8C183F08A389F77_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	{
		CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* L_0 = __this->___U3CcipherparamsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CipherParamsDTO_set_iv_mAA82EE8F95D570A32B28DDB5D137E452547E1447_inline (CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CivU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CivU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KeyStoreDTOBase_get_address_m0134A1C538EC96FD7F883CF2B69E95EA0CAB0FD3_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CaddressU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KeyStoreDTOBase_get_id_mFDCD569677A39C6B99970D2C598D7587EFB2E77C_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyStoreDTOBase_get_version_m7F00B43A9B900EE11DDA1E69DB08CCB03C5BE9ED_inline (KeyStoreDTOBase_tBE0BC003910AEE92B4E39867D64D56257D625958* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CversionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_cipher_mC2254AEF9DABAE8647851B32135596ED041004D7_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CcipherU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_cipherText_mCA4F7FEE19C44BB4E20FF7B4D06E6F9832CC2DEF_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CcipherTextU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_kdf_m37F91BCF553659BC936ACA04FBE68BAD0AD09703_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CkdfU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfoDTOBase_get_mac_m832D5DAE6B8D34645CB12D6C1EF621E8247053DB_inline (CryptoInfoDTOBase_t9695AE63D6CF8B4C98005150E73C364F908CCE65* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CmacU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParamsDTO_get_r_mD2EED1B5689E035883BB29D9BD1A8B303412DF65_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CrU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParams_set_R_m9AD9236A19430A9B44EFA3301D417E7F665FDAAE_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CRU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParamsDTO_get_n_m3FF77C12A496BB3D66BDB6EDB8DAF21525CE2AB8_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CnU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParams_set_N_mD7A43E5EAAB1D1C3D9AFE496F7ED17549AC7D670_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CNU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScryptParamsDTO_get_p_m19884391C68271FF5FB3BEF1CF2935DE29E834F1_inline (ScryptParamsDTO_t583BD7AE47D64F55062155BD56ABC33CACD43A61* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CpU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScryptParams_set_P_m54B8987AEE116A5F01F276FB41F5B7BD6CE93FD7_inline (ScryptParams_t726B4E9D971CAD900021454087B9F8F3BCEDA779* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CPU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KdfParamsDTO_get_dklen_mF4F94F51F353F4A8CF43F2D9BD782FB90FF8142D_inline (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdklenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KdfParams_set_Dklen_m8873AE7294C28118FDADC3F76AB3FCCA12ED0A9E_inline (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CDklenU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KdfParamsDTO_get_salt_m6238900E8629F7663690AD6E1E4C2FF99E8F35ED_inline (KdfParamsDTO_t38C93B787E1889F76C714E252FC804B4F2111B13* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CsaltU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KdfParams_set_Salt_m578F3DA59E3C91B1C70F13793C6926210CE139F7_inline (KdfParams_tE21CEECE223CEE451078BD19224DE57A274B94DB* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CSaltU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSaltU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CipherParamsDTO_get_iv_m9A9BB6EC013B70B8EE1542B30F8644D520FEE92C_inline (CipherParamsDTO_t6848CC759BEF4476BC72F94928C229D2A867375C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CivU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStoreScryptDTO_set_crypto_m6B338293B428CD65FBC9511AF668A777FDA99892_inline (KeyStoreScryptDTO_tDAEE91253C293207EBE72B480E3AE068BF3B9367* __this, CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* ___0_value, const RuntimeMethod* method) 
{
	{
		CryptoInfoScryptDTO_t2483C3DCC12F1B00CA64B28C22E1AB14D91B7D4B* L_0 = ___0_value;
		__this->___U3CcryptoU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcryptoU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* KeyStore_1_get_Crypto_m362D6AF9A7BF2BF3B219D424C1032FA41E8E6C38_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, const RuntimeMethod* method) 
{
	{
		CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* L_0 = __this->___U3CCryptoU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfo_1_get_Mac_m055A7202D58A9C26ACE8916AA09E61188A5DDECD_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMacU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* CryptoInfo_1_get_CipherParams_mEFD7BECC8575B9293B4AED072809D6633279DACF_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) 
{
	{
		CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* L_0 = __this->___U3CCipherParamsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfo_1_get_CipherText_m8420F5C90CAE65A1937800647E74C598DAB22A8A_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCipherTextU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CryptoInfo_1_get_Kdfparams_m5E9AD76074E8F4BFBA54C9536B34974011401AC9_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CKdfparamsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KeyStore_1_get_Address_m5F5EA6C9152DC138F05852DB6B99403272396FA9_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAddressU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KeyStore_1_get_Id_mA2BB933706FD75C2E8C1B9F68E7A69B95C90E8BE_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyStore_1_get_Version_mD84F708EDB5D57EE21AC2D13ACDDE79797ECF8D9_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CVersionU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfo_1_get_Cipher_m9B49A00BF1810DCCCB16A7B10F530B3D7497E002_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCipherU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* CryptoInfo_1_get_Kdf_m2D86721BF4AD889D24466A95184E47CDB2A57DC2_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CKdfU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStore_1_set_Address_mA07ED729404AE5235478AD487878BA0E586F17C1_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CAddressU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAddressU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStore_1_set_Id_m3420C8176B12F55B174C71505E14F217DD006A09_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStore_1_set_Version_mBCC01AB392E374F30A4C64911F11270F953CDFD7_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CVersionU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyStore_1_set_Crypto_mEB8BE7B51499176BE67A3A002F266A770B50259E_gshared_inline (KeyStore_1_t344ADC07D7DB3D4C541CC8196FD858AC44652017* __this, CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* ___0_value, const RuntimeMethod* method) 
{
	{
		CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* L_0 = ___0_value;
		__this->___U3CCryptoU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCryptoU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_Cipher_m04CD908F1C173EA7292CC67031546B4A15AA4186_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CCipherU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCipherU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_CipherText_m76F538CAC717AE7BC894683B6DA9EAAA9DB6FE96_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CCipherTextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCipherTextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_Kdf_mF7677CA999DA927074A8807A8C0F33AC03242CEA_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CKdfU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKdfU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_Mac_mB9D282B2388CFEABBCF79168151FC856FD0A87DE_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CMacU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMacU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_Kdfparams_mCF71DADA258CB5683877958BB3500389739E05A2_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CKdfparamsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKdfparamsU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CryptoInfo_1_set_CipherParams_m61BF691E694BFDFD0D0943CF2EB9A2D8BF8BD4F0_gshared_inline (CryptoInfo_1_t85A4283B82F5564411304E844288BF3FABBC5E71* __this, CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* ___0_value, const RuntimeMethod* method) 
{
	{
		CipherParams_tF68327EFDABCE6C6434B5BA8BBA14358BE5F2FE0* L_0 = ___0_value;
		__this->___U3CCipherParamsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCipherParamsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
