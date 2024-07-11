﻿#include "pch-cpp.hpp"

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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<Amazon.Runtime.Metric,System.Collections.Generic.List`1<Amazon.Runtime.IMetricsTiming>>
struct Dictionary_2_tEE1955C2F363A8974309F7AA1B3F41C8CC360FDE;
// System.Collections.Generic.Dictionary`2<Amazon.Runtime.Metric,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t5B9E0E286EC298C9E8AE8469E4E87343A2AD2C4A;
// System.Collections.Generic.Dictionary`2<Amazon.Runtime.Metric,System.Int64>
struct Dictionary_2_t4958449F5D5820516203D35F6D499192859B168B;
// System.Collections.Generic.Dictionary`2<Amazon.Runtime.Metric,Amazon.Runtime.Internal.Util.Timing>
struct Dictionary_2_t7CCB1499C1EA9F0F64AEE02C50CA92FA5A373297;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,Amazon.RegionEndpoint>
struct Dictionary_2_t45C8B0CC8C8BD1C10D23FBBB56BDF6DF0FE27376;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_tF42287527472FA89789873F068A87C60A00EC7D3;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>
struct Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>
struct Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.String,System.String>
struct Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_tC0A12A847AF97F369A5CE9A0CCE71CE18EE1440E;
// System.Collections.Generic.IComparer`1<System.String>
struct IComparer_1_tFF82757E61ADB2F43ADCC4569ED37780CD25F77C;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Linq.IOrderedEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IOrderedEnumerable_1_t7606BFE46AACEA1EDC5F775FB6D59D7D505BFD60;
// System.Linq.IOrderedEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IOrderedEnumerable_1_t6A7028C7CA011CD0D96850847C38AA479786EB7C;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_t0E680E8E1A4A676334F2A0C9A6F9B93135A65EAC;
// System.Linq.IOrderedEnumerable`1<System.String>
struct IOrderedEnumerable_1_tCA2A9103AFD3840344CBF518E55C59ACD725552C;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.String,Amazon.Runtime.ParameterValue>
struct KeyCollection_t597373788155FCAF5651D985D2E6C34261FCBAA6;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t53AF86BBB805E94F10CAA9B43984EA7E6D7802E2;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981;
// System.Collections.Generic.List`1<Amazon.Runtime.Internal.Util.MetricError>
struct List_1_t03616FD22E5C15FE5C17BB12C0539BF694587FD3;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>
struct SortedDictionary_2_t988B01B17248124FE8F06E2783DC4D609EF0DE2E;
// System.Collections.Generic.SortedDictionary`2<System.String,System.String>
struct SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.String,Amazon.Runtime.ParameterValue>>
struct TreeSet_1_t9280D44DF69C63A2DC42C3F8E7DB3114AF0C7D70;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct TreeSet_1_tDA45F3E533BFF5C5B658B65637864286B43BA688;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.String,Amazon.Runtime.ParameterValue>
struct ValueCollection_t3E83033D4FE02181A2795D2023478F89FAC2DBB1;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t85701C476E14C33298DBCC71B6EDB93924F2AD33;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_tEA2EBC56D51C33037B041DD38F518261CEE2C84C;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
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
// Amazon.Runtime.Internal.Auth.AWS4Signer
struct AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1;
// Amazon.Runtime.Internal.Auth.AWS4SigningResult
struct AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6;
// Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper
struct AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844;
// Amazon.Runtime.Internal.Auth.AWS4aSigningResult
struct AWS4aSigningResult_tD9FA43298C4810E05A386E1011E2DCE2BBF244EA;
// Amazon.Runtime.AWSCommonRuntimeException
struct AWSCommonRuntimeException_t69928B720B1D9FDA4D0A9672BD1B3E4E97EA4A7B;
// Amazon.Runtime.Internal.Auth.AWSSigningResultBase
struct AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3;
// Amazon.Runtime.Internal.Auth.AbstractAWSSigner
struct AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898;
// Amazon.Runtime.AmazonClientException
struct AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.CultureAwareComparer
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.IO.Compression.DeflateStream
struct DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// Amazon.Runtime.Internal.Compression.GZipCompression
struct GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3;
// System.IO.Compression.GZipStream
struct GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0;
// Amazon.Internal.GetEndpointForServiceOptions
struct GetEndpointForServiceOptions_tCF2CF093692A49CABF3EA5D41829227D6D5F0210;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// Amazon.Runtime.SharedInterfaces.IAWSSigV4aProvider
struct IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D;
// Amazon.Runtime.IClientConfig
struct IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA;
// Amazon.Runtime.Internal.Compression.ICompressionAlgorithm
struct ICompressionAlgorithm_tF4AD274C794BFCC03E9413F6604BC03E31441F9F;
// Amazon.Util.ICryptoUtil
struct ICryptoUtil_tEA2F437D9B00B90C615A408DF8D65EFA801E9ABC;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Amazon.Internal.IRegionEndpointProvider
struct IRegionEndpointProvider_t05F3F16F716D065A2E6E96A0C3EE92E504C333D1;
// Amazon.Runtime.Internal.IRequest
struct IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95;
// Amazon.Util.Internal.ITypeInfo
struct ITypeInfo_tF4E624CDB82C663F64B1C1A8E9ED4D0EBFD80059;
// Amazon.Runtime.ImmutableCredentials
struct ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Amazon.Runtime.Internal.Auth.NullSigner
struct NullSigner_t87F092C8606EB3746ED9A27D06CEF80438299B09;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
// Amazon.Runtime.Internal.ParameterCollection
struct ParameterCollection_t83FCEAC6D1D9F537507E97CA698B4D654F8D7002;
// Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape
struct PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906;
// Amazon.Runtime.Endpoints.PropertyBag
struct PropertyBag_t3FA9985EE74917513A8D871F7431C78AAE8E8B19;
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906;
// Amazon.RegionEndpoint
struct RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1;
// Amazon.Runtime.Internal.Util.RequestMetrics
struct RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// Amazon.Runtime.Internal.Endpoints.StandardLibrary.URL
struct URL_t92AB86E6F8BBA73DA424FA54062CDE906DEE1275;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Amazon.Runtime.Internal.Auth.AWS4Signer/<>c
struct U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854;
// Amazon.Util.CryptoUtilFactory/CryptoUtil
struct CryptoUtil_t13570CB5CB1744BBAC1B24F4DD536266584BF222;
// Amazon.RegionEndpoint/Endpoint
struct Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AWSCommonRuntimeException_t69928B720B1D9FDA4D0A9672BD1B3E4E97EA4A7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChunkedUploadWrapperStream_tBBA0F8ABE5C48A8B46C8F259EC7A8E9A04B6BA7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompressionEncodingAlgorithm_t47DCABEF31E4490A77CD3B37B987BC4F6B90CF1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CorrectClockSkew_t417A5F0CF8A11F92FD302BA5F80F17ACE7BE3C5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICryptoUtil_tEA2F437D9B00B90C615A408DF8D65EFA801E9ABC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITypeInfoU5BU5D_tE5089178CDADCFAADADC067B6A9883B5F7A5D526_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITypeInfo_tF4E624CDB82C663F64B1C1A8E9ED4D0EBFD80059_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeFactory_t6A59F41B2CC8D231822F8915CCA3DDF9D9505585_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral01EF5807833DD0FAAF85EE2CED5F1AA1DDB08692;
IL2CPP_EXTERN_C String_t* _stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A;
IL2CPP_EXTERN_C String_t* _stringLiteral08BFAB0C7A3D047B53E710D86A09A4946049B3FA;
IL2CPP_EXTERN_C String_t* _stringLiteral0E9C7EC66796179F504EE3E8DA0FCDDE429FCBEA;
IL2CPP_EXTERN_C String_t* _stringLiteral23BDE38FB8866776B1F53A1DE91E1567FADBA129;
IL2CPP_EXTERN_C String_t* _stringLiteral25FCC4380EC995860B706F5058E2DB90D8821836;
IL2CPP_EXTERN_C String_t* _stringLiteral292024B472EA7FC15E4F169AE8C4C7A6DEE900C7;
IL2CPP_EXTERN_C String_t* _stringLiteral2B43944E8CD0F7EFE14524530F40906E65A8FB9A;
IL2CPP_EXTERN_C String_t* _stringLiteral320CF2D23C507650897D6F1FDA7E9AA2C53C5DBC;
IL2CPP_EXTERN_C String_t* _stringLiteral3353E5A96E2E650A69A4720B16999C6F26194384;
IL2CPP_EXTERN_C String_t* _stringLiteral349C30776190825203D5D07031D5CE4046D257B9;
IL2CPP_EXTERN_C String_t* _stringLiteral37982402124BB488E04D03607DB86C153FF935B7;
IL2CPP_EXTERN_C String_t* _stringLiteral381B7C83B74E5866B084D94F2F697986A6FD36A8;
IL2CPP_EXTERN_C String_t* _stringLiteral3BDC2A3BF3E3C505BA95E684745BFD1081984CEE;
IL2CPP_EXTERN_C String_t* _stringLiteral3D82FDE4C847852D4BB70BD929BEE1EC32E8090F;
IL2CPP_EXTERN_C String_t* _stringLiteral3EBDBD8FCA12AE01917E5179BB979BD9077F8144;
IL2CPP_EXTERN_C String_t* _stringLiteral43B1425B3120ED4B8D4AD955B319BE8B5ACA487C;
IL2CPP_EXTERN_C String_t* _stringLiteral44621EB2592613282FDA2B9A8D681C8792AF62F0;
IL2CPP_EXTERN_C String_t* _stringLiteral48FDBA926702C37CD7BE2216A1E30639A0CDC219;
IL2CPP_EXTERN_C String_t* _stringLiteral4B90C69AB772FEB9CA85EF52AD6BAB193B721249;
IL2CPP_EXTERN_C String_t* _stringLiteral534F0070064CF7E71A3C1755BC6024BF5DD8E5BD;
IL2CPP_EXTERN_C String_t* _stringLiteral54410F787AFA08038634B055933A63784C4AD055;
IL2CPP_EXTERN_C String_t* _stringLiteral55F42690C3007F40BA0CED691725B5C6586ED068;
IL2CPP_EXTERN_C String_t* _stringLiteral5631253528ECF3FC5D242AF9194D0DCF69D28B51;
IL2CPP_EXTERN_C String_t* _stringLiteral582765B03715A02BBC7B5EED58622E5BC0125B11;
IL2CPP_EXTERN_C String_t* _stringLiteral58D5B924304A0C60C698FE13AFF2ABF25760EF02;
IL2CPP_EXTERN_C String_t* _stringLiteral5EE0B6856D8C417B721AA78EBAB7DEC28DAE5C81;
IL2CPP_EXTERN_C String_t* _stringLiteral6087570F9096503FEB39C184D67AB275B22C941C;
IL2CPP_EXTERN_C String_t* _stringLiteral630B0975C44597114E7F50A533BD3331291FD31E;
IL2CPP_EXTERN_C String_t* _stringLiteral712D2A1550F63E88E95C516CDB6DFA50E1DD6C49;
IL2CPP_EXTERN_C String_t* _stringLiteral71CC86A801ABF5E47BE371BDC47157B831DD2CA8;
IL2CPP_EXTERN_C String_t* _stringLiteral81CC9013E6F0A91BD9053995900587460A4095D5;
IL2CPP_EXTERN_C String_t* _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral9CD337B22835C324B3CCEC7101A6D1DE5586E821;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907;
IL2CPP_EXTERN_C String_t* _stringLiteralA3994FC70D3F6DF4468C430CAF31A859A1E63619;
IL2CPP_EXTERN_C String_t* _stringLiteralAFC4689783D4072D09122F37B42F19C630CE74AA;
IL2CPP_EXTERN_C String_t* _stringLiteralB03C358CB2986D2DDE67DBD4354355401D1C524D;
IL2CPP_EXTERN_C String_t* _stringLiteralB3AAC153B63A33D4143DD3E6F0D663AB6986F1CA;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCCD63AE8496DF16CA83A2973ACB14210B26FB7E1;
IL2CPP_EXTERN_C String_t* _stringLiteralCE2892956422830EFD61D6B1C95A865ED0BDFF66;
IL2CPP_EXTERN_C String_t* _stringLiteralD5F99667CFC6FB677E60C0535D5264678FD51040;
IL2CPP_EXTERN_C String_t* _stringLiteralD69F9EC21087D22656DA059773494239B182B120;
IL2CPP_EXTERN_C String_t* _stringLiteralE07E7303A625433AD6B384AD1F50C49B14516AE1;
IL2CPP_EXTERN_C String_t* _stringLiteralE705C6345C26AF82E64D22DBE44B2A3514F2F06F;
IL2CPP_EXTERN_C String_t* _stringLiteralF277F055431226806CAEBFFF8FD03D0158B95071;
IL2CPP_EXTERN_C String_t* _stringLiteralF27DF7441DC8B7CB1B7775A5C590B8FFB715B6C4;
IL2CPP_EXTERN_C String_t* _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2;
IL2CPP_EXTERN_C String_t* _stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A;
IL2CPP_EXTERN_C const RuntimeMethod* AWS4Signer_ValidateRequest_mD6EFDEE2E3263655266A2B1DC8C499D780F4DCFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AWS4aSignerCRTWrapper_Sign_mA9E2B8061AD6CF139B8F479686A8641DD08185DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AWS4aSignerCRTWrapper__ctor_m71F4CF8F8B66CAEC07E77AEEED6763651A8CE62E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CompressionFactory_GetCompressionAlgorithm_mA35202D3A7849629DC99ACE9B37069A9072F3D76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m3B24496B0D1EC19AA2B770FA28083DC3C4D562AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_mB613AACED96325CD27E4C5D9C1CB921B811FA225_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisString_t_TisString_t_m40B981D8BC975EB4FB16F2CFC3C9782D92493D2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m54CDADC1ABDA1680174C07D7C40BCFFF01CBD3E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m268F353D8C124F986AE459470FCC251B2EA733A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC990FB0E03FA8FDAC285C3527EB3BEC5360DBE86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF68441CB01F1EB7376781A5507B694D350B9B650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m97E5367CAD3EEC99224C6FB827C43089DDE9F995_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1DD9DCD8FD5763A2A6A5A9AE303917CE6E2F9C7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCE85239031A0ADFF8D5593BE928AA88206FA448D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9FDA52CF503CD6CB3DC83E644D5198749E838052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_Add_mB88EBE0176EBDF6DA9B6DB57D44ADC9452FF97D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2__ctor_m8A1D5D72525D91D72EA883A27A32189A838CB169_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCanonicalizeQueryParametersU3Eb__64_0_mED5C0A8E500049E49610B45CFC2393F2EBDBCCB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetParametersToCanonicalizeU3Eb__60_0_mA26684DE732700EB193EB2CF9E530A987D07DD6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetXAmzTrailerHeaderU3Eb__33_0_mB69F391E3874BE9D3C823E03144CB1F2FDA02D75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ITypeInfoU5BU5D_tE5089178CDADCFAADADC067B6A9883B5F7A5D526;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tEA2EBC56D51C33037B041DD38F518261CEE2C84C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.SortedDictionary`2<System.String,Amazon.Runtime.ParameterValue>
struct SortedDictionary_2_tCEABB58DDEF1F260999E350A84DB6BCB675DF2AF  : public RuntimeObject
{
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_t597373788155FCAF5651D985D2E6C34261FCBAA6* ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_t3E83033D4FE02181A2795D2023478F89FAC2DBB1* ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_t9280D44DF69C63A2DC42C3F8E7DB3114AF0C7D70* ____set_2;
};

// System.Collections.Generic.SortedDictionary`2<System.String,System.String>
struct SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE  : public RuntimeObject
{
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_t53AF86BBB805E94F10CAA9B43984EA7E6D7802E2* ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_t85701C476E14C33298DBCC71B6EDB93924F2AD33* ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_tDA45F3E533BFF5C5B658B65637864286B43BA688* ____set_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t5EAEA638D87F23FF9A3441A43F297B2CB1FA54C5  : public RuntimeObject
{
};

// Amazon.Runtime.Internal.Auth.AbstractAWSSigner
struct AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898  : public RuntimeObject
{
	// System.Boolean Amazon.Runtime.Internal.Auth.AbstractAWSSigner::<RequiresCredentials>k__BackingField
	bool ___U3CRequiresCredentialsU3Ek__BackingField_0;
};

// Amazon.Runtime.Internal.Compression.CompressionFactory
struct CompressionFactory_t6EF2F8FAD99F843BE862E0D4B7B57ADF5CC78EAC  : public RuntimeObject
{
};

// Amazon.Util.CryptoUtilFactory
struct CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
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

// Amazon.Runtime.Internal.Compression.GZipCompression
struct GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3  : public RuntimeObject
{
};

// Amazon.Internal.GetEndpointForServiceOptions
struct GetEndpointForServiceOptions_tCF2CF093692A49CABF3EA5D41829227D6D5F0210  : public RuntimeObject
{
	// System.Boolean Amazon.Internal.GetEndpointForServiceOptions::<DualStack>k__BackingField
	bool ___U3CDualStackU3Ek__BackingField_0;
	// System.Boolean Amazon.Internal.GetEndpointForServiceOptions::<FIPS>k__BackingField
	bool ___U3CFIPSU3Ek__BackingField_1;
};

// Amazon.Runtime.ImmutableCredentials
struct ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D  : public RuntimeObject
{
	// System.String Amazon.Runtime.ImmutableCredentials::<AccessKey>k__BackingField
	String_t* ___U3CAccessKeyU3Ek__BackingField_0;
	// System.String Amazon.Runtime.ImmutableCredentials::<SecretKey>k__BackingField
	String_t* ___U3CSecretKeyU3Ek__BackingField_1;
	// System.String Amazon.Runtime.ImmutableCredentials::<Token>k__BackingField
	String_t* ___U3CTokenU3Ek__BackingField_2;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape
struct PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906  : public RuntimeObject
{
	// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::<dnsSuffix>k__BackingField
	String_t* ___U3CdnsSuffixU3Ek__BackingField_1;
	// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::<dualStackDnsSuffix>k__BackingField
	String_t* ___U3CdualStackDnsSuffixU3Ek__BackingField_2;
	// System.Boolean Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::<supportsFIPS>k__BackingField
	bool ___U3CsupportsFIPSU3Ek__BackingField_3;
	// System.Boolean Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::<supportsDualStack>k__BackingField
	bool ___U3CsupportsDualStackU3Ek__BackingField_4;
	// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::<implicitGlobalRegion>k__BackingField
	String_t* ___U3CimplicitGlobalRegionU3Ek__BackingField_5;
};

// Amazon.Runtime.Endpoints.PropertyBag
struct PropertyBag_t3FA9985EE74917513A8D871F7431C78AAE8E8B19  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Amazon.Runtime.Endpoints.PropertyBag::properties
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___properties_0;
};

// Amazon.RegionEndpoint
struct RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1  : public RuntimeObject
{
	// System.String Amazon.RegionEndpoint::<SystemName>k__BackingField
	String_t* ___U3CSystemNameU3Ek__BackingField_4;
	// System.String Amazon.RegionEndpoint::<OriginalSystemName>k__BackingField
	String_t* ___U3COriginalSystemNameU3Ek__BackingField_5;
	// System.String Amazon.RegionEndpoint::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_6;
};

// Amazon.Runtime.Internal.Util.RequestMetrics
struct RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0  : public RuntimeObject
{
	// System.Object Amazon.Runtime.Internal.Util.RequestMetrics::metricsLock
	RuntimeObject* ___metricsLock_0;
	// System.Diagnostics.Stopwatch Amazon.Runtime.Internal.Util.RequestMetrics::stopWatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___stopWatch_1;
	// System.Collections.Generic.Dictionary`2<Amazon.Runtime.Metric,Amazon.Runtime.Internal.Util.Timing> Amazon.Runtime.Internal.Util.RequestMetrics::inFlightTimings
	Dictionary_2_t7CCB1499C1EA9F0F64AEE02C50CA92FA5A373297* ___inFlightTimings_2;
	// System.Collections.Generic.List`1<Amazon.Runtime.Internal.Util.MetricError> Amazon.Runtime.Internal.Util.RequestMetrics::errors
	List_1_t03616FD22E5C15FE5C17BB12C0539BF694587FD3* ___errors_3;
	// System.Collections.Generic.Dictionary`2<Amazon.Runtime.Metric,System.Collections.Generic.List`1<System.Object>> Amazon.Runtime.Internal.Util.RequestMetrics::<Properties>k__BackingField
	Dictionary_2_t5B9E0E286EC298C9E8AE8469E4E87343A2AD2C4A* ___U3CPropertiesU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<Amazon.Runtime.Metric,System.Collections.Generic.List`1<Amazon.Runtime.IMetricsTiming>> Amazon.Runtime.Internal.Util.RequestMetrics::<Timings>k__BackingField
	Dictionary_2_tEE1955C2F363A8974309F7AA1B3F41C8CC360FDE* ___U3CTimingsU3Ek__BackingField_5;
	// System.Collections.Generic.Dictionary`2<Amazon.Runtime.Metric,System.Int64> Amazon.Runtime.Internal.Util.RequestMetrics::<Counters>k__BackingField
	Dictionary_2_t4958449F5D5820516203D35F6D499192859B168B* ___U3CCountersU3Ek__BackingField_6;
	// System.Boolean Amazon.Runtime.Internal.Util.RequestMetrics::<IsEnabled>k__BackingField
	bool ___U3CIsEnabledU3Ek__BackingField_7;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06  : public RuntimeObject
{
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

// Amazon.Runtime.Internal.Auth.AWS4Signer/<>c
struct U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854  : public RuntimeObject
{
};

// Amazon.Util.CryptoUtilFactory/CryptoUtil
struct CryptoUtil_t13570CB5CB1744BBAC1B24F4DD536266584BF222  : public RuntimeObject
{
};

// Amazon.RegionEndpoint/Endpoint
struct Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3  : public RuntimeObject
{
	// System.String Amazon.RegionEndpoint/Endpoint::<Hostname>k__BackingField
	String_t* ___U3CHostnameU3Ek__BackingField_0;
	// System.String Amazon.RegionEndpoint/Endpoint::<DnsSuffix>k__BackingField
	String_t* ___U3CDnsSuffixU3Ek__BackingField_1;
	// System.String Amazon.RegionEndpoint/Endpoint::<AuthRegion>k__BackingField
	String_t* ___U3CAuthRegionU3Ek__BackingField_2;
	// System.String Amazon.RegionEndpoint/Endpoint::<SignatureVersionOverride>k__BackingField
	String_t* ___U3CSignatureVersionOverrideU3Ek__BackingField_3;
	// System.Boolean Amazon.RegionEndpoint/Endpoint::<Deprecated>k__BackingField
	bool ___U3CDeprecatedU3Ek__BackingField_4;
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

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// Amazon.Runtime.Internal.Auth.AWS4Signer
struct AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1  : public AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898
{
	// System.Boolean Amazon.Runtime.Internal.Auth.AWS4Signer::<SignPayload>k__BackingField
	bool ___U3CSignPayloadU3Ek__BackingField_3;
};

// Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper
struct AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844  : public AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// Amazon.Runtime.Internal.Auth.NullSigner
struct NullSigner_t87F092C8606EB3746ED9A27D06CEF80438299B09  : public AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898
{
};

// System.OrdinalComparer
struct OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170  : public StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06
{
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;
};

// Amazon.Runtime.Internal.ParameterCollection
struct ParameterCollection_t83FCEAC6D1D9F537507E97CA698B4D654F8D7002  : public SortedDictionary_2_tCEABB58DDEF1F260999E350A84DB6BCB675DF2AF
{
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

// Amazon.Runtime.Internal.Endpoints.StandardLibrary.URL
struct URL_t92AB86E6F8BBA73DA424FA54062CDE906DEE1275  : public PropertyBag_t3FA9985EE74917513A8D871F7431C78AAE8E8B19
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112
struct __StaticArrayInitTypeSizeU3D112_tB44F7DE1B3303001CB577B4DCC54C3DF9EEB0A6C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D112_tB44F7DE1B3303001CB577B4DCC54C3DF9EEB0A6C__padding[112];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t1D00FAC0014D48230C1A2D59C22F8B5AC1FB1868 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t1D00FAC0014D48230C1A2D59C22F8B5AC1FB1868__padding[16];
	};
};

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
};

// Amazon.Runtime.Internal.Auth.AWSSigningResultBase
struct AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3  : public RuntimeObject
{
	// System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::_awsAccessKeyId
	String_t* ____awsAccessKeyId_0;
	// System.DateTime Amazon.Runtime.Internal.Auth.AWSSigningResultBase::_originalDateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____originalDateTime_1;
	// System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::_signedHeaders
	String_t* ____signedHeaders_2;
	// System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::_scope
	String_t* ____scope_3;
};

// Amazon.Runtime.Internal.Auth.ClientProtocol
struct ClientProtocol_t0D74E985CAF9E9DA13B1D5E906B0998A306B19C4 
{
	// System.Int32 Amazon.Runtime.Internal.Auth.ClientProtocol::value__
	int32_t ___value___2;
};

// Amazon.Runtime.CompressionEncodingAlgorithm
struct CompressionEncodingAlgorithm_t47DCABEF31E4490A77CD3B37B987BC4F6B90CF1B 
{
	// System.Int32 Amazon.Runtime.CompressionEncodingAlgorithm::value__
	int32_t ___value___2;
};

// System.IO.Compression.CompressionMode
struct CompressionMode_t840C8957CF84ACFBF5C43E48AEAEB9DB5E64F3C5 
{
	// System.Int32 System.IO.Compression.CompressionMode::value__
	int32_t ___value___2;
};

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
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

// System.IO.Compression.GZipStream
struct GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::_deflateStream
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* ____deflateStream_4;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// Amazon.Runtime.Metric
struct Metric_t44868AD9A76CC395BDCAA36EBD0252BA904A41B7 
{
	// System.Int32 Amazon.Runtime.Metric::value__
	int32_t ___value___2;
};

// System.OrdinalCaseSensitiveComparer
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A  : public OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170
{
};

// System.OrdinalIgnoreCaseComparer
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0  : public OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Amazon.Runtime.SigningAlgorithm
struct SigningAlgorithm_t4BC52E0AE8BFD753D013BEFCE55EDCA83897D975 
{
	// System.Int32 Amazon.Runtime.SigningAlgorithm::value__
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

// Amazon.Runtime.Internal.Auth.AWS4SigningResult
struct AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6  : public AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3
{
	// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4SigningResult::_signingKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____signingKey_4;
	// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4SigningResult::_signature
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____signature_5;
};

// Amazon.Runtime.Internal.Auth.AWS4aSigningResult
struct AWS4aSigningResult_tD9FA43298C4810E05A386E1011E2DCE2BBF244EA  : public AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3
{
	// System.String Amazon.Runtime.Internal.Auth.AWS4aSigningResult::_signature
	String_t* ____signature_4;
};

// Amazon.Runtime.AmazonClientException
struct AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4  : public Exception_t
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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>
struct Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>
struct Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,System.String>
struct Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93  : public MulticastDelegate_t
{
};

// Amazon.Runtime.AWSCommonRuntimeException
struct AWSCommonRuntimeException_t69928B720B1D9FDA4D0A9672BD1B3E4E97EA4A7B  : public AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
	// System.String System.IO.FileNotFoundException::<FileName>k__BackingField
	String_t* ___U3CFileNameU3Ek__BackingField_18;
	// System.String System.IO.FileNotFoundException::<FusionLog>k__BackingField
	String_t* ___U3CFusionLogU3Ek__BackingField_19;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.HashSet`1<System.String>

// System.Collections.Generic.HashSet`1<System.String>

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_tEA2EBC56D51C33037B041DD38F518261CEE2C84C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>

// System.Collections.Generic.SortedDictionary`2<System.String,System.String>

// System.Collections.Generic.SortedDictionary`2<System.String,System.String>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t5EAEA638D87F23FF9A3441A43F297B2CB1FA54C5_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::356799970C4EB6868DD58B0BC235E79AF800B71A2DA92B1018D1C2BF86AAD560
	__StaticArrayInitTypeSizeU3D16_t1D00FAC0014D48230C1A2D59C22F8B5AC1FB1868 ___356799970C4EB6868DD58B0BC235E79AF800B71A2DA92B1018D1C2BF86AAD560_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112 <PrivateImplementationDetails>::C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82
	__StaticArrayInitTypeSizeU3D112_tB44F7DE1B3303001CB577B4DCC54C3DF9EEB0A6C ___C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_1;
};

// <PrivateImplementationDetails>

// Amazon.Runtime.Internal.Auth.AbstractAWSSigner

// Amazon.Runtime.Internal.Auth.AbstractAWSSigner

// Amazon.Runtime.Internal.Compression.CompressionFactory

// Amazon.Runtime.Internal.Compression.CompressionFactory

// Amazon.Util.CryptoUtilFactory
struct CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_StaticFields
{
	// Amazon.Util.CryptoUtilFactory/CryptoUtil Amazon.Util.CryptoUtilFactory::util
	CryptoUtil_t13570CB5CB1744BBAC1B24F4DD536266584BF222* ___util_0;
};

// Amazon.Util.CryptoUtilFactory

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

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

// Amazon.Runtime.Internal.Compression.GZipCompression

// Amazon.Runtime.Internal.Compression.GZipCompression

// Amazon.Internal.GetEndpointForServiceOptions

// Amazon.Internal.GetEndpointForServiceOptions

// Amazon.Runtime.ImmutableCredentials

// Amazon.Runtime.ImmutableCredentials

// Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape

// Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape

// Amazon.Runtime.Endpoints.PropertyBag

// Amazon.Runtime.Endpoints.PropertyBag

// Amazon.RegionEndpoint
struct RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,Amazon.RegionEndpoint> Amazon.RegionEndpoint::_hashBySystemName
	Dictionary_2_t45C8B0CC8C8BD1C10D23FBBB56BDF6DF0FE27376* ____hashBySystemName_0;
	// System.Threading.ReaderWriterLockSlim Amazon.RegionEndpoint::_regionEndpointOverrideLock
	ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* ____regionEndpointOverrideLock_1;
	// System.Collections.Generic.Dictionary`2<System.String,Amazon.RegionEndpoint> Amazon.RegionEndpoint::_hashRegionEndpointOverride
	Dictionary_2_t45C8B0CC8C8BD1C10D23FBBB56BDF6DF0FE27376* ____hashRegionEndpointOverride_2;
	// Amazon.Internal.IRegionEndpointProvider Amazon.RegionEndpoint::_regionEndpointProvider
	RuntimeObject* ____regionEndpointProvider_3;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USEast1Regional
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___USEast1Regional_7;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::AFSouth1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___AFSouth1_8;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APEast1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___APEast1_9;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APNortheast1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___APNortheast1_10;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APNortheast2
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___APNortheast2_11;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APNortheast3
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___APNortheast3_12;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APSouth1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___APSouth1_13;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APSouth2
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___APSouth2_14;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APSoutheast1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___APSoutheast1_15;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APSoutheast2
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___APSoutheast2_16;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APSoutheast3
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___APSoutheast3_17;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APSoutheast4
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___APSoutheast4_18;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::CACentral1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___CACentral1_19;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUCentral1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___EUCentral1_20;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUCentral2
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___EUCentral2_21;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUNorth1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___EUNorth1_22;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUSouth1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___EUSouth1_23;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUSouth2
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___EUSouth2_24;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUWest1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___EUWest1_25;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUWest2
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___EUWest2_26;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUWest3
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___EUWest3_27;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::ILCentral1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___ILCentral1_28;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::MECentral1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___MECentral1_29;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::MESouth1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___MESouth1_30;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::SAEast1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___SAEast1_31;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USEast1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___USEast1_32;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USEast2
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___USEast2_33;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USWest1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___USWest1_34;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USWest2
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___USWest2_35;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::CNNorth1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___CNNorth1_36;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::CNNorthWest1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___CNNorthWest1_37;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USGovCloudEast1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___USGovCloudEast1_38;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USGovCloudWest1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___USGovCloudWest1_39;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USIsoEast1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___USIsoEast1_40;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USIsoWest1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___USIsoWest1_41;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USIsobEast1
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___USIsobEast1_42;
};

// Amazon.RegionEndpoint

// Amazon.Runtime.Internal.Util.RequestMetrics

// Amazon.Runtime.Internal.Util.RequestMetrics

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields
{
	// System.CultureAwareComparer System.StringComparer::s_invariantCulture
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCulture_0;
	// System.CultureAwareComparer System.StringComparer::s_invariantCultureIgnoreCase
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCultureIgnoreCase_1;
	// System.OrdinalCaseSensitiveComparer System.StringComparer::s_ordinal
	OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* ___s_ordinal_2;
	// System.OrdinalIgnoreCaseComparer System.StringComparer::s_ordinalIgnoreCase
	OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* ___s_ordinalIgnoreCase_3;
};

// System.StringComparer

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

// Amazon.Runtime.Internal.Auth.AWS4Signer/<>c
struct U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields
{
	// Amazon.Runtime.Internal.Auth.AWS4Signer/<>c Amazon.Runtime.Internal.Auth.AWS4Signer/<>c::<>9
	U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854* ___U3CU3E9_0;
	// System.Func`2<System.String,System.String> Amazon.Runtime.Internal.Auth.AWS4Signer/<>c::<>9__33_0
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* ___U3CU3E9__33_0_1;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean> Amazon.Runtime.Internal.Auth.AWS4Signer/<>c::<>9__60_0
	Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* ___U3CU3E9__60_0_2;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String> Amazon.Runtime.Internal.Auth.AWS4Signer/<>c::<>9__64_0
	Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* ___U3CU3E9__64_0_3;
};

// Amazon.Runtime.Internal.Auth.AWS4Signer/<>c

// Amazon.Util.CryptoUtilFactory/CryptoUtil

// Amazon.Util.CryptoUtilFactory/CryptoUtil
struct CryptoUtil_t13570CB5CB1744BBAC1B24F4DD536266584BF222_ThreadStaticFields
{
	// System.Security.Cryptography.HashAlgorithm Amazon.Util.CryptoUtilFactory/CryptoUtil::_hashAlgorithm
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ____hashAlgorithm_0;
};

// Amazon.RegionEndpoint/Endpoint

// Amazon.RegionEndpoint/Endpoint

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Boolean>

// Amazon.Runtime.Internal.Auth.AWS4Signer
struct AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_StaticFields
{
	// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::TerminatorBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TerminatorBytes_1;
	// System.Collections.Generic.IEnumerable`1<System.String> Amazon.Runtime.Internal.Auth.AWS4Signer::_headersToIgnoreWhenSigning
	RuntimeObject* ____headersToIgnoreWhenSigning_2;
};

// Amazon.Runtime.Internal.Auth.AWS4Signer

// Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper
struct AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields
{
	// Amazon.Runtime.SharedInterfaces.IAWSSigV4aProvider Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::_awsSigV4AProvider
	RuntimeObject* ____awsSigV4AProvider_1;
	// System.Object Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::_lock
	RuntimeObject* ____lock_2;
};

// Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper

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

// Amazon.Runtime.Internal.Auth.NullSigner

// Amazon.Runtime.Internal.Auth.NullSigner

// Amazon.Runtime.Internal.ParameterCollection

// Amazon.Runtime.Internal.ParameterCollection

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// Amazon.Runtime.Internal.Endpoints.StandardLibrary.URL

// Amazon.Runtime.Internal.Endpoints.StandardLibrary.URL

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>

// Amazon.Runtime.Internal.Auth.AWSSigningResultBase

// Amazon.Runtime.Internal.Auth.AWSSigningResultBase

// Amazon.Runtime.Internal.Auth.ClientProtocol

// Amazon.Runtime.Internal.Auth.ClientProtocol

// Amazon.Runtime.CompressionEncodingAlgorithm

// Amazon.Runtime.CompressionEncodingAlgorithm

// System.IO.Compression.CompressionMode

// System.IO.Compression.CompressionMode

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;
};

// System.Reflection.ConstructorInfo

// Amazon.Runtime.CoreChecksumAlgorithm

// Amazon.Runtime.CoreChecksumAlgorithm

// System.IO.Compression.GZipStream

// System.IO.Compression.GZipStream

// System.IO.MemoryStream

// System.IO.MemoryStream

// Amazon.Runtime.Metric

// Amazon.Runtime.Metric

// System.OrdinalCaseSensitiveComparer

// System.OrdinalCaseSensitiveComparer

// System.OrdinalIgnoreCaseComparer

// System.OrdinalIgnoreCaseComparer

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Amazon.Runtime.SigningAlgorithm

// Amazon.Runtime.SigningAlgorithm

// Amazon.Runtime.Internal.Auth.AWS4SigningResult

// Amazon.Runtime.Internal.Auth.AWS4SigningResult

// Amazon.Runtime.Internal.Auth.AWS4aSigningResult

// Amazon.Runtime.Internal.Auth.AWS4aSigningResult

// Amazon.Runtime.AmazonClientException

// Amazon.Runtime.AmazonClientException

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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>

// System.Func`2<System.String,System.String>

// System.Func`2<System.String,System.String>

// Amazon.Runtime.AWSCommonRuntimeException

// Amazon.Runtime.AWSCommonRuntimeException

// System.ArgumentException

// System.ArgumentException

// System.IO.FileNotFoundException

// System.IO.FileNotFoundException
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
// Amazon.Util.Internal.ITypeInfo[]
struct ITypeInfoU5BU5D_tE5089178CDADCFAADADC067B6A9883B5F7A5D526  : public RuntimeArray
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
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 m_Items[1];

	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisRuntimeObject_TisRuntimeObject_m95A8A4774C308571D7F63FEFC3313E6ACE9C8049_gshared (RuntimeObject* ___0_source, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___1_keySelector, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2__ctor_m1FA7B8F7C5DA4606E8EAAD9092053B40011385FE_gshared (SortedDictionary_2_t988B01B17248124FE8F06E2783DC4D609EF0DE2E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared (RuntimeObject* ___0_source, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_Add_mAE72A2CFC4B2E9B084A29EB709742CDCDB01FFE9_gshared (SortedDictionary_2_t988B01B17248124FE8F06E2783DC4D609EF0DE2E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mBB573574300333BD47817899B4148E16A322891F_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m192C3D32AF3678C97E6520292F2C32629E9A905B_gshared (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m8DDAFA7A565FBEEB8C312BF1E890AB978D3760AE_gshared_inline (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_item, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m999A10C26DDF74143AD155662D58037B37AB83F7_gshared (Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m04F511EE83DC4DFCD2F669E1C86C444367FD332B_gshared (RuntimeObject* ___0_source, Func_2_t9364FA627D95BAC4CDA1FB83D8857B61F71B1858* ___1_predicate, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Collections.Generic.IComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_mB4374397C5D0A36112594A8DE09568697F7A84A5_gshared (RuntimeObject* ___0_source, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___1_keySelector, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* Enumerable_ToList_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m3BA59800A952CF71A84F1FB9561C897AE9CD052B_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4 List_1_GetEnumerator_mF067420DAFF52D4C46250012FBE1232F35652C7B_gshared (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m15BC821D90EEF37AE31290902208CC60804BC19E_gshared (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_gshared_inline (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39_gshared (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Endpoints.PropertyBag::set_Item(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_set_Item_m19423CF8F7B071D6C0F86D4DE985FAEF62F39EAA (PropertyBag_t3FA9985EE74917513A8D871F7431C78AAE8E8B19* __this, String_t* ___0_propertyName, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Object Amazon.Runtime.Endpoints.PropertyBag::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBag_get_Item_m7D5860AB2B24ACA3E8611432FCFFE7EDD0699647 (PropertyBag_t3FA9985EE74917513A8D871F7431C78AAE8E8B19* __this, String_t* ___0_propertyName, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Endpoints.PropertyBag::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag__ctor_mA73C1F9100FD91E9EF3A37609166CFE2516C518F (PropertyBag_t3FA9985EE74917513A8D871F7431C78AAE8E8B19* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Compression.GZipCompression::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipCompression__ctor_m83FF2D2567553F18BDEF89E9AE7E83867BF2F6B3 (GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m25053634B041374B528EB0F01612B072A9AF2E05 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_mFF3ECD9074856457C500AC6B4F80D833CCE487CF (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_mode, bool ___2_leaveOpen, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.ImmutableCredentials::get_AccessKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ImmutableCredentials_get_AccessKey_mBF672760A7AC36490FBC39823E6DEC97CC2C5B60_inline (ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* __this, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.ImmutableCredentials::get_SecretKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ImmutableCredentials_get_SecretKey_mA30FA197B4999D45EEAB0BACA81392FF0CF8CD53_inline (ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4aSignerCRTWrapper__ctor_m71F4CF8F8B66CAEC07E77AEEED6763651A8CE62E (AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844* __this, bool ___0_signPayload, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Auth.AbstractAWSSigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractAWSSigner__ctor_mB0D1954B89CFFB73FCB18CDC714E564DF63C72BE (AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// Amazon.Util.Internal.ITypeInfo Amazon.Runtime.Internal.ServiceClientHelpers::LoadTypeFromAssembly(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceClientHelpers_LoadTypeFromAssembly_m767AAA3813997DE155F25B7E10D2C55AA4CA8949 (String_t* ___0_assemblyName, String_t* ___1_className, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// Amazon.Util.Internal.ITypeInfo Amazon.Util.Internal.TypeFactory::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeFactory_GetTypeInfo_mC09B704DE5195BAA160F2CB16E0B54BD4808E085 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_parameters, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75 (RuntimeObject* ___0_provider, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.AWSCommonRuntimeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWSCommonRuntimeException__ctor_mCB730190C0F07458FB8CD4F6DDA91DF4CBB0F6C8 (AWSCommonRuntimeException_t69928B720B1D9FDA4D0A9672BD1B3E4E97EA4A7B* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::get_AccessKeyId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AWSSigningResultBase_get_AccessKeyId_m947D2F902046D8DB4834E852E81CADFDB6FFE164_inline (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::get_Scope()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AWSSigningResultBase_get_Scope_mF912EE682BAA82712229527CB1629FA8A6130118_inline (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2 (StringBuilder_t* __this, String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::get_SignedHeaders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AWSSigningResultBase_get_SignedHeaders_mC00B6C6690FA64D17BD34588537D2EB92547E641_inline (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132 (StringBuilder_t* __this, String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer__ctor_m91187CA260E8C13176F4CCC5260464DB04B61475 (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, bool ___0_signPayload, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::set_SignPayload(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AWS4Signer_set_SignPayload_m99608D12201744D0B14448FE2BEE6132DBA9016D_inline (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, bool ___0_value, const RuntimeMethod* method) ;
// Amazon.Runtime.Internal.Auth.AWS4SigningResult Amazon.Runtime.Internal.Auth.AWS4Signer::SignRequest(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* AWS4Signer_SignRequest_m99323436D7081D4DE35196DEEC413D7EEEFBB9ED (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, RuntimeObject* ___0_request, RuntimeObject* ___1_clientConfig, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___2_metrics, String_t* ___3_awsAccessKeyId, String_t* ___4_awsSecretAccessKey, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::ValidateRequest(Amazon.Runtime.Internal.IRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_ValidateRequest_mD6EFDEE2E3263655266A2B1DC8C499D780F4DCFC (RuntimeObject* ___0_request, const RuntimeMethod* method) ;
// System.DateTime Amazon.Runtime.Internal.Auth.AWS4Signer::InitializeHeaders(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AWS4Signer_InitializeHeaders_mE3737714CE93A28E74866026CCC40924371A6279 (RuntimeObject* ___0_headers, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___1_requestEndpoint, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::DetermineService(Amazon.Runtime.IClientConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_DetermineService_m6126B49E5B1045D2D39A916BDB72A37148C082AF (RuntimeObject* ___0_clientConfig, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::DetermineSigningRegion(Amazon.Runtime.IClientConfig,System.String,Amazon.RegionEndpoint,Amazon.Runtime.Internal.IRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_DetermineSigningRegion_m3D28209191EF6F4BC13908EAB71437327E802B17 (RuntimeObject* ___0_clientConfig, String_t* ___1_serviceName, RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___2_alternateEndpoint, RuntimeObject* ___3_request, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::SetXAmzTrailerHeader(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_SetXAmzTrailerHeader_mE382DAF83B9480C9D246CEE1D981E31933766077 (RuntimeObject* ___0_headers, RuntimeObject* ___1_trailingHeaders, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> Amazon.Runtime.Internal.Auth.AWS4Signer::GetParametersToCanonicalize(Amazon.Runtime.Internal.IRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* AWS4Signer_GetParametersToCanonicalize_m7DC2E3B03D9EEAE862055419329B0E1400D21C30 (RuntimeObject* ___0_request, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeQueryParameters(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeQueryParameters_m549B1209FBD3ED80F76482F6182235EA0EE41049 (RuntimeObject* ___0_parameters, const RuntimeMethod* method) ;
// System.Boolean Amazon.Runtime.Internal.Auth.AWS4Signer::get_SignPayload()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AWS4Signer_get_SignPayload_m019994B3575C8E063ADF85D02D1D48235AE93AC5_inline (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::SetRequestBodyHash(Amazon.Runtime.Internal.IRequest,System.Boolean,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_SetRequestBodyHash_mE429DAF7177761149D08472AA8F86E7A60B10594 (RuntimeObject* ___0_request, bool ___1_signPayload, String_t* ___2_chunkedBodyHash, int32_t ___3_signatureLength, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.Auth.AWS4Signer::SortAndPruneHeaders(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AWS4Signer_SortAndPruneHeaders_m56DE03A6A2F1B020B539DB8EBEBA0A3A60CE1DFC (RuntimeObject* ___0_requestHeaders, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeRequest(System.Uri,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeRequest_mABDD64D192C79A6C24D4FF53A7D115FD5CE28D7F (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_endpoint, String_t* ___1_resourcePath, String_t* ___2_httpMethod, RuntimeObject* ___3_sortedHeaders, String_t* ___4_canonicalQueryString, String_t* ___5_precomputedBodyHash, RuntimeObject* ___6_pathResources, bool ___7_doubleEncode, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Util.RequestMetrics::AddProperty(Amazon.Runtime.Metric,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestMetrics_AddProperty_mEEDDB74F30D1F338104E75C17D7DF4FEF0E07BDC (RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* __this, int32_t ___0_metric, RuntimeObject* ___1_property, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeHeaderNames(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeHeaderNames_mFF24FF56F0AE252D1D6DEF939458BC66F56D49FF (RuntimeObject* ___0_sortedHeaders, const RuntimeMethod* method) ;
// Amazon.Runtime.Internal.Auth.AWS4SigningResult Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeSignature(System.String,System.String,System.String,System.DateTime,System.String,System.String,System.String,Amazon.Runtime.Internal.Util.RequestMetrics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* AWS4Signer_ComputeSignature_m4DFBA05F1998120E914CD91D1BC68CF5574DA5C4 (String_t* ___0_awsAccessKey, String_t* ___1_awsSecretAccessKey, String_t* ___2_region, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___3_signedAt, String_t* ___4_service, String_t* ___5_signedHeaders, String_t* ___6_canonicalRequest, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___7_metrics, const RuntimeMethod* method) ;
// System.DateTime Amazon.Runtime.CorrectClockSkew::GetCorrectedUtcNowForEndpoint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D CorrectClockSkew_GetCorrectedUtcNowForEndpoint_mCE500BBE523341E24C6EB90B3B71FF9335A2D7A3 (String_t* ___0_endpoint, const RuntimeMethod* method) ;
// System.DateTime Amazon.Runtime.Internal.Auth.AWS4Signer::InitializeHeaders(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Uri,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AWS4Signer_InitializeHeaders_mB1983466AD9ED91C4CA510AEA2E942C67F3CE437 (RuntimeObject* ___0_headers, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___1_requestEndpoint, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___2_requestDateTime, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::CleanHeaders(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_CleanHeaders_mDE078CF20C077F281B1A9879869429E8C3DA7E1E (RuntimeObject* ___0_headers, const RuntimeMethod* method) ;
// System.String System.Uri::get_Host()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Host_m2C0E258C7DFF7A340049BE9BC08FF45E90988D8C (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Uri::get_IsDefaultPort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsDefaultPort_m1BFC89B27306852E9AFDEF92897FD52B0B3ECD06 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Int32 System.Uri::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Uri_get_Port_m7A1413AC9D9A2FC5DC8A7F89DF4A01ACA0241A02 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m27637E1131A10BED8A95639D64339023D5EBBF00 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6A29D0BC8A4BCF6079AD2737B4119D3802B41814 (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.String,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisString_t_TisString_t_m40B981D8BC975EB4FB16F2CFC3C9782D92493D2B (RuntimeObject* ___0_source, Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* ___1_keySelector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisRuntimeObject_m95A8A4774C308571D7F63FEFC3313E6ACE9C8049_gshared)(___0_source, ___1_keySelector, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___0_separator, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_value, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
inline bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline)(__this, method);
}
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.AmazonClientException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmazonClientException__ctor_mD79D13D6A21E949F64AF9554717EE6D525492D32 (AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::FormatDateTime(System.DateTime,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_FormatDateTime_m1DFE05164B31E3996F52E2A46146F37FFD8E7083 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_dt, String_t* ___1_formatString, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m0A69DC59537ACE5D88B174EE1098453E1276E53B (StringBuilder_t* __this, RuntimeObject* ___0_provider, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_ComputeHash_mB586790357AA02ACA787D309B13EE501CEA4729F (String_t* ___0_data, const RuntimeMethod* method) ;
// System.String Amazon.Util.AWSSDKUtils::ToHex(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSDKUtils_ToHex_mFD2A4519380CE6862DB14F693869B6A3B0E705F0 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, bool ___1_lowercase, const RuntimeMethod* method) ;
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComposeSigningKey(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_ComposeSigningKey_m46B94B52A6776A72226897D088AD32BCCA155945 (String_t* ___0_awsSecretAccessKey, String_t* ___1_region, String_t* ___2_date, String_t* ___3_service, const RuntimeMethod* method) ;
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeKeyedHash(Amazon.Runtime.SigningAlgorithm,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_ComputeKeyedHash_m24E0CFA1D3BC40CEBD6D8439375AE68C01FB26A1 (int32_t ___0_algorithm, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_key, String_t* ___2_data, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Auth.AWS4SigningResult::.ctor(System.String,System.DateTime,System.String,System.String,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4SigningResult__ctor_m51505F2656D83286A4936721C8403EF97531792F (AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* __this, String_t* ___0_awsAccessKeyId, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_signedAt, String_t* ___2_signedHeaders, String_t* ___3_scope, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_signingKey, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_signature, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeKeyedHash(Amazon.Runtime.SigningAlgorithm,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_ComputeKeyedHash_m21982238271887355FCD0EC929FEDF8CE6F7A33A (int32_t ___0_algorithm, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_data, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Boolean>::get_Value()
inline bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared)(__this, method);
}
// System.Int64 System.Int64::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int64_Parse_mAE2EACBD4520D1EEE5AA32B228D5DA2ED83DDDA5 (String_t* ___0_s, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Int64 Amazon.Runtime.Internal.Util.TrailingHeadersWrapperStream::CalculateLength(System.Collections.Generic.IDictionary`2<System.String,System.String>,Amazon.Runtime.CoreChecksumAlgorithm,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TrailingHeadersWrapperStream_CalculateLength_mB864D571B02159CA842BD3CE8DE650BFB2A1C99E (RuntimeObject* ___0_trailingHeaders, int32_t ___1_checksumAlgorithm, int64_t ___2_baseStreamLength, const RuntimeMethod* method) ;
// System.String System.Int64::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m5250B67D3E89B8EB829FB26136E744F1F141B7FD (int64_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::SetContentEncodingHeader(Amazon.Runtime.Internal.IRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_SetContentEncodingHeader_mB120192602F38D70BD77D4899A4F672A0BE18A97 (RuntimeObject* ___0_request, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::SetPayloadSignatureHeader(Amazon.Runtime.Internal.IRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_SetPayloadSignatureHeader_mDA2416F62340CA3656B2FE1877A989B5BBDF6F86 (RuntimeObject* ___0_request, String_t* ___1_payloadHash, const RuntimeMethod* method) ;
// System.Int64 Amazon.Runtime.Internal.Util.ChunkedUploadWrapperStream::ComputeChunkedContentLength(System.Int64,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.String>,Amazon.Runtime.CoreChecksumAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ChunkedUploadWrapperStream_ComputeChunkedContentLength_m818809A1BAF9AF4814B79C9C930B729D99BA481D (int64_t ___0_originalLength, int32_t ___1_signatureLength, RuntimeObject* ___2_trailingHeaders, int32_t ___3_trailingChecksum, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, bool, const RuntimeMethod*))Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared)(__this, ___0_value, method);
}
// System.Byte[] Amazon.Util.AWSSDKUtils::GetRequestPayloadBytes(Amazon.Runtime.Internal.IRequest,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWSSDKUtils_GetRequestPayloadBytes_m10D9DF6659E80792EC88A7DFA2ACD604DA2D0DFC (RuntimeObject* ___0_request, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___1_usesQueryString, const RuntimeMethod* method) ;
// Amazon.Util.ICryptoUtil Amazon.Util.CryptoUtilFactory::get_CryptoInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CryptoUtilFactory_get_CryptoInstance_m480B9CD3759DE30A1A6649129C17227BBBD0200F_inline (const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::SignBlob(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_SignBlob_m244BAA116D10B8F56DA06A1075AFDCA04CFDD2BB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, const RuntimeMethod* method) ;
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_ComputeHash_m3A156055C5E75B2D6D4EC32AD7CA16D1BE05645C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// Amazon.Internal.GetEndpointForServiceOptions Amazon.Internal.GetEndpointForServiceOptionsExtensions::ToGetEndpointForServiceOptions(Amazon.Runtime.IClientConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GetEndpointForServiceOptions_tCF2CF093692A49CABF3EA5D41829227D6D5F0210* GetEndpointForServiceOptionsExtensions_ToGetEndpointForServiceOptions_m2283A9443F0FB4E9BEAB69C5C81DAE5BFD058EF8 (RuntimeObject* ___0_config, const RuntimeMethod* method) ;
// Amazon.RegionEndpoint/Endpoint Amazon.RegionEndpoint::GetEndpointForService(System.String,Amazon.Internal.GetEndpointForServiceOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* RegionEndpoint_GetEndpointForService_mCA203A539CCB68EF369DB4E42B9680ADF3281F99 (RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* __this, String_t* ___0_serviceName, GetEndpointForServiceOptions_tCF2CF093692A49CABF3EA5D41829227D6D5F0210* ___1_options, const RuntimeMethod* method) ;
// System.String Amazon.RegionEndpoint/Endpoint::get_AuthRegion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Endpoint_get_AuthRegion_m8776838411D7CE0DA6A0C2DF25D428134AC38FB5_inline (Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* __this, const RuntimeMethod* method) ;
// System.String Amazon.RegionEndpoint::get_SystemName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RegionEndpoint_get_SystemName_m0D8EFA9B44103D15C2DF34060BF5B2439883EBBC_inline (RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* __this, const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.String Amazon.Util.AWSSDKUtils::DetermineRegion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSDKUtils_DetermineRegion_mB3987BEAEC9FD28AAB6786872EE317F7E6BE3467 (String_t* ___0_url, const RuntimeMethod* method) ;
// Amazon.RegionEndpoint Amazon.RegionEndpoint::GetRegionEndpointOverride(Amazon.RegionEndpoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* RegionEndpoint_GetRegionEndpointOverride_m35E252B7A7D8AB2E50BFDFBEB9FAC5BF606B173B (RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___0_regionEndpoint, const RuntimeMethod* method) ;
// System.String Amazon.Util.AWSSDKUtils::DetermineService(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSDKUtils_DetermineService_m064D59D89DBF00D45262B3A5C7B78B546FB78C8A (String_t* ___0_url, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeRequestHelper(System.Uri,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeRequestHelper_m46C16171BDE9A434F3F5F67077E5DFEACB5963C0 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_endpoint, String_t* ___1_resourcePath, String_t* ___2_httpMethod, RuntimeObject* ___3_sortedHeaders, String_t* ___4_canonicalQueryString, String_t* ___5_precomputedBodyHash, RuntimeObject* ___6_pathResources, bool ___7_doubleEncode, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.String Amazon.Util.AWSSDKUtils::CanonicalizeResourcePathV2(System.Uri,System.String,System.Boolean,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSDKUtils_CanonicalizeResourcePathV2_mDF32096996524E978839632DEE04084FB6DD58DB (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_endpoint, String_t* ___1_resourcePath, bool ___2_encode, RuntimeObject* ___3_pathResources, const RuntimeMethod* method) ;
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeHeaders(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeHeaders_m31F726AD26640DCF29279AF4FF32EA9DB6FC97F8 (RuntimeObject* ___0_sortedHeaders, const RuntimeMethod* method) ;
// System.StringComparer System.StringComparer::get_Ordinal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.SortedDictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
inline void SortedDictionary_2__ctor_m8A1D5D72525D91D72EA883A27A32189A838CB169 (SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE*, RuntimeObject*, const RuntimeMethod*))SortedDictionary_2__ctor_m1FA7B8F7C5DA4606E8EAAD9092053B40011385FE_gshared)(__this, ___0_comparer, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Boolean System.Linq.Enumerable::Contains<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33 (RuntimeObject* ___0_source, String_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared)(___0_source, ___1_value, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.SortedDictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void SortedDictionary_2_Add_mB88EBE0176EBDF6DA9B6DB57D44ADC9452FF97D0 (SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE*, String_t*, String_t*, const RuntimeMethod*))SortedDictionary_2_Add_mAE72A2CFC4B2E9B084A29EB709742CDCDB01FFE9_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 System.Linq.Enumerable::Count<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m3B24496B0D1EC19AA2B770FA28083DC3C4D562AB (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mBB573574300333BD47817899B4148E16A322891F_gshared)(___0_source, method);
}
// System.String Amazon.Util.AWSSDKUtils::CompressSpaces(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSDKUtils_CompressSpaces_m719A9C6A270511B137EC159FC5CE6EE7E3B2F9BE (String_t* ___0_data, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::.ctor()
inline void List_1__ctor_m9FDA52CF503CD6CB3DC83E644D5198749E838052 (List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981*, const RuntimeMethod*))List_1__ctor_m192C3D32AF3678C97E6520292F2C32629E9A905B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.String>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, String_t*, String_t*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Add(T)
inline void List_1_Add_m1DD9DCD8FD5763A2A6A5A9AE303917CE6E2F9C7E_inline (List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* __this, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981*, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A, const RuntimeMethod*))List_1_Add_m8DDAFA7A565FBEEB8C312BF1E890AB978D3760AE_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> Amazon.Runtime.Internal.ParameterCollection::GetSortedParametersList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* ParameterCollection_GetSortedParametersList_mEFE9FDF1F0E7D9119663D84EC862AA3A7376C741 (ParameterCollection_t83FCEAC6D1D9F537507E97CA698B4D654F8D7002* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m612313685E65C8F88E36E0730D48C7BA57EB3D9A (Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m999A10C26DDF74143AD155662D58037B37AB83F7_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m268F353D8C124F986AE459470FCC251B2EA733A2 (RuntimeObject* ___0_source, Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1*, const RuntimeMethod*))Enumerable_Where_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m04F511EE83DC4DFCD2F669E1C86C444367FD332B_gshared)(___0_source, ___1_predicate, method);
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeQueryParameters(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeQueryParameters_mCEE411D6BE73995FDA08C9015DC18FF67F155FF5 (RuntimeObject* ___0_parameters, bool ___1_uriEncodeParameters, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m48BD5538630AB90CAACF2ADC165985AB743A6C30 (Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Collections.Generic.IComparer`1<TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_mB613AACED96325CD27E4C5D9C1CB921B811FA225 (RuntimeObject* ___0_source, Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* ___1_keySelector, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088*, RuntimeObject*, const RuntimeMethod*))Enumerable_OrderBy_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_mB4374397C5D0A36112594A8DE09568697F7A84A5_gshared)(___0_source, ___1_keySelector, ___2_comparer, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* Enumerable_ToList_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m54CDADC1ABDA1680174C07D7C40BCFFF01CBD3E0 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m3BA59800A952CF71A84F1FB9561C897AE9CD052B_gshared)(___0_source, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator()
inline Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9 List_1_GetEnumerator_mCE85239031A0ADFF8D5593BE928AA88206FA448D (List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9 (*) (List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981*, const RuntimeMethod*))List_1_GetEnumerator_mF067420DAFF52D4C46250012FBE1232F35652C7B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Dispose()
inline void Enumerator_Dispose_mC990FB0E03FA8FDAC285C3527EB3BEC5360DBE86 (Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9*, const RuntimeMethod*))Enumerator_Dispose_m15BC821D90EEF37AE31290902208CC60804BC19E_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m97E5367CAD3EEC99224C6FB827C43089DDE9F995_inline (Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9*, const RuntimeMethod*))Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_gshared_inline)(__this, method);
}
// System.String Amazon.Util.AWSSDKUtils::UrlEncode(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSDKUtils_UrlEncode_mA1C6CD7D14F064E7424D62BCB1919DC44DF2BA5F (String_t* ___0_data, bool ___1_path, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::MoveNext()
inline bool Enumerator_MoveNext_mF68441CB01F1EB7376781A5507B694D350B9B650 (Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9*, const RuntimeMethod*))Enumerator_MoveNext_m7303D41C6A0DB6D9A9B9F5923546BF98515E7B39_gshared)(__this, method);
}
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
inline void HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10_gshared)(__this, ___0_comparer, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(T)
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB6F99B09FD58B97C1D0A2594F3BA51EB2C8244E3 (U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854* __this, const RuntimeMethod* method) ;
// System.Void Amazon.Runtime.Internal.Auth.AWSSigningResultBase::.ctor(System.String,System.DateTime,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWSSigningResultBase__ctor_mC6D5214AEA8373E5D67A3C51004B3F7BC800FF28 (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, String_t* ___0_awsAccessKeyId, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_signedAt, String_t* ___2_signedHeaders, String_t* ___3_scope, const RuntimeMethod* method) ;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartitionAttributesShape_get_name_mC4CFB4B716B9EC762C7918AD125076D89C10BDC3 (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_name_m7D218DC1E56A74C9B827CBE78E727B72AE57718E (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::get_dnsSuffix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartitionAttributesShape_get_dnsSuffix_mF02D5463D26245F5B47F1BE22686384F747037FA (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CdnsSuffixU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::set_dnsSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_dnsSuffix_m3218469A1544A6B2C1037CB934A2577954B197ED (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CdnsSuffixU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdnsSuffixU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::get_dualStackDnsSuffix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PartitionAttributesShape_get_dualStackDnsSuffix_mC058856B21FB662857B7D809DA58AF21672FE4CF (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CdualStackDnsSuffixU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::set_dualStackDnsSuffix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_dualStackDnsSuffix_mD89C08560E2E4659BAE0EC4C7012A280480267FD (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CdualStackDnsSuffixU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdualStackDnsSuffixU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Boolean Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::get_supportsFIPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartitionAttributesShape_get_supportsFIPS_mCD7909A9D1856996122DAD9439E615141D211DF2 (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CsupportsFIPSU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::set_supportsFIPS(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_supportsFIPS_mC6B71D245BB53B16511EE5705C0A1BB14861783B (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CsupportsFIPSU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::get_supportsDualStack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PartitionAttributesShape_get_supportsDualStack_mF31AE3BA3A11E9BE7BB75C21A81D929F3BFA2DD1 (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CsupportsDualStackU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::set_supportsDualStack(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_supportsDualStack_m81BC31AD4D7CE1CAF60145B9A1C84DEB71ECFB45 (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CsupportsDualStackU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::set_implicitGlobalRegion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartitionAttributesShape_set_implicitGlobalRegion_m594BD66240FD0C73C5D2382B49F917ABB5E0E1EB (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CimplicitGlobalRegionU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimplicitGlobalRegionU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.PartitionAttributesShape::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartitionAttributesShape__ctor_m379043E53865A2F61BD92EEF5EAE5FF94BDE4734 (PartitionAttributesShape_t258C0DC032D7A4A4295BFDED11209A8536798906* __this, const RuntimeMethod* method) 
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
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.URL::set_scheme(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void URL_set_scheme_m302233F0F6F4C23925251DAB1868D8C55BBB1766 (URL_t92AB86E6F8BBA73DA424FA54062CDE906DEE1275* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B90C69AB772FEB9CA85EF52AD6BAB193B721249);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_value;
		PropertyBag_set_Item_m19423CF8F7B071D6C0F86D4DE985FAEF62F39EAA(__this, _stringLiteral4B90C69AB772FEB9CA85EF52AD6BAB193B721249, L_0, NULL);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.URL::set_authority(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void URL_set_authority_m2E081C0082604F3D177E97EBCD169BF1129F8884 (URL_t92AB86E6F8BBA73DA424FA54062CDE906DEE1275* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71CC86A801ABF5E47BE371BDC47157B831DD2CA8);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_value;
		PropertyBag_set_Item_m19423CF8F7B071D6C0F86D4DE985FAEF62F39EAA(__this, _stringLiteral71CC86A801ABF5E47BE371BDC47157B831DD2CA8, L_0, NULL);
		return;
	}
}
// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.URL::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* URL_get_path_mF133D3B1C6E422AE1CB296EF2CA8A3B1FB02FB7E (URL_t92AB86E6F8BBA73DA424FA54062CDE906DEE1275* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = PropertyBag_get_Item_m7D5860AB2B24ACA3E8611432FCFFE7EDD0699647(__this, _stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A, NULL);
		return ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.URL::set_path(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void URL_set_path_m99228F9489AD095FEA515469C7604F30C38C8A34 (URL_t92AB86E6F8BBA73DA424FA54062CDE906DEE1275* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_value;
		PropertyBag_set_Item_m19423CF8F7B071D6C0F86D4DE985FAEF62F39EAA(__this, _stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A, L_0, NULL);
		return;
	}
}
// System.String Amazon.Runtime.Internal.Endpoints.StandardLibrary.URL::get_normalizedPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* URL_get_normalizedPath_mCB722780CC80FDD47EA11C9A2D6DA2E1CB63C582 (URL_t92AB86E6F8BBA73DA424FA54062CDE906DEE1275* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF27DF7441DC8B7CB1B7775A5C590B8FFB715B6C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = PropertyBag_get_Item_m7D5860AB2B24ACA3E8611432FCFFE7EDD0699647(__this, _stringLiteralF27DF7441DC8B7CB1B7775A5C590B8FFB715B6C4, NULL);
		return ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.URL::set_normalizedPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void URL_set_normalizedPath_mAFA40E07CB653DB9EB6B4BB047D6B9132A2E5AB5 (URL_t92AB86E6F8BBA73DA424FA54062CDE906DEE1275* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF27DF7441DC8B7CB1B7775A5C590B8FFB715B6C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_value;
		PropertyBag_set_Item_m19423CF8F7B071D6C0F86D4DE985FAEF62F39EAA(__this, _stringLiteralF27DF7441DC8B7CB1B7775A5C590B8FFB715B6C4, L_0, NULL);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.URL::set_isIp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void URL_set_isIp_m5EDB9DA801FAA6899DE58C48EEDB56556141C30E (URL_t92AB86E6F8BBA73DA424FA54062CDE906DEE1275* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B43944E8CD0F7EFE14524530F40906E65A8FB9A);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		PropertyBag_set_Item_m19423CF8F7B071D6C0F86D4DE985FAEF62F39EAA(__this, _stringLiteral2B43944E8CD0F7EFE14524530F40906E65A8FB9A, L_2, NULL);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Endpoints.StandardLibrary.URL::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void URL__ctor_m32A12D355D0770F5FF15A89E38ED8BAD6BBE0E6E (URL_t92AB86E6F8BBA73DA424FA54062CDE906DEE1275* __this, const RuntimeMethod* method) 
{
	{
		PropertyBag__ctor_mA73C1F9100FD91E9EF3A37609166CFE2516C518F(__this, NULL);
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
// Amazon.Runtime.Internal.Compression.ICompressionAlgorithm Amazon.Runtime.Internal.Compression.CompressionFactory::GetCompressionAlgorithm(Amazon.Runtime.CompressionEncodingAlgorithm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompressionFactory_GetCompressionAlgorithm_mA35202D3A7849629DC99ACE9B37069A9072F3D76 (int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_type;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000a;
		}
	}
	{
		GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3* L_1 = (GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3*)il2cpp_codegen_object_new(GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3_il2cpp_TypeInfo_var);
		GZipCompression__ctor_m83FF2D2567553F18BDEF89E9AE7E83867BF2F6B3(L_1, NULL);
		return L_1;
	}

IL_000a:
	{
		int32_t L_2 = ___0_type;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompressionEncodingAlgorithm_t47DCABEF31E4490A77CD3B37B987BC4F6B90CF1B_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE07E7303A625433AD6B384AD1F50C49B14516AE1)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CompressionFactory_GetCompressionAlgorithm_mA35202D3A7849629DC99ACE9B37069A9072F3D76_RuntimeMethod_var)));
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
// Amazon.Runtime.CompressionEncodingAlgorithm Amazon.Runtime.Internal.Compression.GZipCompression::get_AlgorithmId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipCompression_get_AlgorithmId_m0F29EA7FC5AC31F37D8417D473B9E2F80579A32A (GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(1);
	}
}
// System.Byte[] Amazon.Runtime.Internal.Compression.GZipCompression::Compress(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GZipCompression_Compress_mAA2B3C6C8E6F2A4D289F6E9BC5B121ED9E8E5E6A (GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_content, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
					if (!L_1)
					{
						goto IL_003d;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
				GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* L_4 = (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0*)il2cpp_codegen_object_new(GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_il2cpp_TypeInfo_var);
				GZipStream__ctor_m25053634B041374B528EB0F01612B072A9AF2E05(L_4, L_3, 1, NULL);
				V_1 = L_4;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0021_1:
					{// begin finally (depth: 2)
						{
							GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* L_5 = V_1;
							if (!L_5)
							{
								goto IL_002a_1;
							}
						}
						{
							GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* L_6 = V_1;
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
						}

IL_002a_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* L_7 = V_1;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_content;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_content;
					VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, ((int32_t)(((RuntimeArray*)L_9)->max_length)));
					GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* L_10 = V_1;
					VirtualActionInvoker0::Invoke(19 /* System.Void System.IO.Stream::Close() */, L_10);
					goto IL_002b_1;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_002b_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
				L_12 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(42 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_11);
				V_2 = L_12;
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		return L_13;
	}
}
// System.IO.Stream Amazon.Runtime.Internal.Compression.GZipCompression::GetCompressionStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* GZipCompression_GetCompressionStream_mAAAD680F7B1C17A27518EE961E780CAC386291ED (GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_inputStream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_inputStream;
		GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* L_1 = (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0*)il2cpp_codegen_object_new(GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_il2cpp_TypeInfo_var);
		GZipStream__ctor_mFF3ECD9074856457C500AC6B4F80D833CCE487CF(L_1, L_0, 1, (bool)1, NULL);
		return L_1;
	}
}
// System.Void Amazon.Runtime.Internal.Compression.GZipCompression::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipCompression__ctor_m83FF2D2567553F18BDEF89E9AE7E83867BF2F6B3 (GZipCompression_t56CD194260CA1D1C9E72D11D6A9DD1253E06ADE3* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Amazon.Runtime.Internal.Auth.AbstractAWSSigner::get_RequiresCredentials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AbstractAWSSigner_get_RequiresCredentials_mF7ACEB81E1218117E9E8DA4670E06591D2CF7F06 (AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CRequiresCredentialsU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AbstractAWSSigner::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,Amazon.Runtime.ImmutableCredentials)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractAWSSigner_Sign_m9AAC2804DCF1061876BD0CABF9F757EEEE3871CD (AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* __this, RuntimeObject* ___0_request, RuntimeObject* ___1_clientConfig, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___2_metrics, ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* ___3_credentials, const RuntimeMethod* method) 
{
	RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	RuntimeObject* G_B2_2 = NULL;
	AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* G_B2_3 = NULL;
	RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	RuntimeObject* G_B1_2 = NULL;
	AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* G_B3_1 = NULL;
	RuntimeObject* G_B3_2 = NULL;
	RuntimeObject* G_B3_3 = NULL;
	AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* G_B3_4 = NULL;
	String_t* G_B5_0 = NULL;
	RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* G_B5_1 = NULL;
	RuntimeObject* G_B5_2 = NULL;
	RuntimeObject* G_B5_3 = NULL;
	AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* G_B5_4 = NULL;
	String_t* G_B4_0 = NULL;
	RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* G_B4_1 = NULL;
	RuntimeObject* G_B4_2 = NULL;
	RuntimeObject* G_B4_3 = NULL;
	AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* G_B4_4 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* G_B6_2 = NULL;
	RuntimeObject* G_B6_3 = NULL;
	RuntimeObject* G_B6_4 = NULL;
	AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* G_B6_5 = NULL;
	{
		RuntimeObject* L_0 = ___0_request;
		RuntimeObject* L_1 = ___1_clientConfig;
		RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* L_2 = ___2_metrics;
		ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* L_3 = ___3_credentials;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		G_B1_3 = __this;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			G_B2_3 = __this;
			goto IL_000b;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0012;
	}

IL_000b:
	{
		ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* L_4 = ___3_credentials;
		String_t* L_5;
		L_5 = ImmutableCredentials_get_AccessKey_mBF672760A7AC36490FBC39823E6DEC97CC2C5B60_inline(L_4, NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0012:
	{
		ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* L_6 = ___3_credentials;
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
		G_B4_4 = G_B3_4;
		if (L_6)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			G_B5_3 = G_B3_3;
			G_B5_4 = G_B3_4;
			goto IL_0019;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		goto IL_0020;
	}

IL_0019:
	{
		ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* L_7 = ___3_credentials;
		String_t* L_8;
		L_8 = ImmutableCredentials_get_SecretKey_mA30FA197B4999D45EEAB0BACA81392FF0CF8CD53_inline(L_7, NULL);
		G_B6_0 = L_8;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
	}

IL_0020:
	{
		VirtualActionInvoker5< RuntimeObject*, RuntimeObject*, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0*, String_t*, String_t* >::Invoke(5 /* System.Void Amazon.Runtime.Internal.Auth.AbstractAWSSigner::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,System.String,System.String) */, G_B6_5, G_B6_4, G_B6_3, G_B6_2, G_B6_1, G_B6_0);
		return;
	}
}
// System.Threading.Tasks.Task Amazon.Runtime.Internal.Auth.AbstractAWSSigner::SignAsync(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,Amazon.Runtime.ImmutableCredentials,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AbstractAWSSigner_SignAsync_m74750EB9CCED33EF37FE38810F3C3682A64B4305 (AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* __this, RuntimeObject* ___0_request, RuntimeObject* ___1_clientConfig, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___2_metrics, ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* ___3_credentials, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___4_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_request;
		RuntimeObject* L_1 = ___1_clientConfig;
		RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* L_2 = ___2_metrics;
		ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* L_3 = ___3_credentials;
		VirtualActionInvoker4< RuntimeObject*, RuntimeObject*, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0*, ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* >::Invoke(6 /* System.Void Amazon.Runtime.Internal.Auth.AbstractAWSSigner::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,Amazon.Runtime.ImmutableCredentials) */, __this, L_0, L_1, L_2, L_3);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_4;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AbstractAWSSigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractAWSSigner__ctor_mB0D1954B89CFFB73FCB18CDC714E564DF63C72BE (AbstractAWSSigner_tD4A3F2EA49129DAAFEA002B3FBFC6898BB7AB898* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CRequiresCredentialsU3Ek__BackingField_0 = (bool)1;
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
// System.Void Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4aSignerCRTWrapper__ctor_m9642B14D9F5E67CEFB88130D1AFB642132DF3DCB (AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844* __this, const RuntimeMethod* method) 
{
	{
		AWS4aSignerCRTWrapper__ctor_m71F4CF8F8B66CAEC07E77AEEED6763651A8CE62E(__this, (bool)1, NULL);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4aSignerCRTWrapper__ctor_m71F4CF8F8B66CAEC07E77AEEED6763651A8CE62E (AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844* __this, bool ___0_signPayload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeInfoU5BU5D_tE5089178CDADCFAADADC067B6A9883B5F7A5D526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeInfo_tF4E624CDB82C663F64B1C1A8E9ED4D0EBFD80059_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeFactory_t6A59F41B2CC8D231822F8915CCA3DDF9D9505585_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5631253528ECF3FC5D242AF9194D0DCF69D28B51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81CC9013E6F0A91BD9053995900587460A4095D5);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		AbstractAWSSigner__ctor_mB0D1954B89CFFB73FCB18CDC714E564DF63C72BE(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____awsSigV4AProvider_1;
		if (L_0)
		{
			goto IL_009a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____lock_2;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0090:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0099;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0099:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
				RuntimeObject* L_5 = ((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____awsSigV4AProvider_1;
				if (L_5)
				{
					goto IL_008e_1;
				}
			}
			try
			{// begin try (depth: 2)
				RuntimeObject* L_6;
				L_6 = ServiceClientHelpers_LoadTypeFromAssembly_m767AAA3813997DE155F25B7E10D2C55AA4CA8949(_stringLiteral81CC9013E6F0A91BD9053995900587460A4095D5, _stringLiteral5631253528ECF3FC5D242AF9194D0DCF69D28B51, NULL);
				ITypeInfoU5BU5D_tE5089178CDADCFAADADC067B6A9883B5F7A5D526* L_7 = (ITypeInfoU5BU5D_tE5089178CDADCFAADADC067B6A9883B5F7A5D526*)(ITypeInfoU5BU5D_tE5089178CDADCFAADADC067B6A9883B5F7A5D526*)SZArrayNew(ITypeInfoU5BU5D_tE5089178CDADCFAADADC067B6A9883B5F7A5D526_il2cpp_TypeInfo_var, (uint32_t)1);
				ITypeInfoU5BU5D_tE5089178CDADCFAADADC067B6A9883B5F7A5D526* L_8 = L_7;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_10;
				L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
				il2cpp_codegen_runtime_class_init_inline(TypeFactory_t6A59F41B2CC8D231822F8915CCA3DDF9D9505585_il2cpp_TypeInfo_var);
				RuntimeObject* L_11;
				L_11 = TypeFactory_GetTypeInfo_mC09B704DE5195BAA160F2CB16E0B54BD4808E085(L_10, NULL);
				ArrayElementTypeCheck (L_8, L_11);
				(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
				ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_12;
				L_12 = InterfaceFuncInvoker1< ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*, ITypeInfoU5BU5D_tE5089178CDADCFAADADC067B6A9883B5F7A5D526* >::Invoke(7 /* System.Reflection.ConstructorInfo Amazon.Util.Internal.ITypeInfo::GetConstructor(Amazon.Util.Internal.ITypeInfo[]) */, ITypeInfo_tF4E624CDB82C663F64B1C1A8E9ED4D0EBFD80059_il2cpp_TypeInfo_var, L_6, L_8);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
				bool L_15 = ___0_signPayload;
				bool L_16 = L_15;
				RuntimeObject* L_17 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_16);
				ArrayElementTypeCheck (L_14, L_17);
				(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
				RuntimeObject* L_18;
				L_18 = ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE(L_12, L_14, NULL);
				il2cpp_codegen_runtime_class_init_inline(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
				((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____awsSigV4AProvider_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_18, IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var));
				Il2CppCodeGenWriteBarrier((void**)(&((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____awsSigV4AProvider_1), (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_18, IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var)));
				goto IL_009a;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0073_1;
				}
				throw e;
			}

CATCH_0073_1:
			{// begin catch(System.IO.FileNotFoundException)
				FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_19 = ((FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)IL2CPP_GET_ACTIVE_EXCEPTION(FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*));;
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
				CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_20;
				L_20 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21;
				L_21 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var)));
				String_t* L_22;
				L_22 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5F99667CFC6FB677E60C0535D5264678FD51040)), L_21, NULL);
				AWSCommonRuntimeException_t69928B720B1D9FDA4D0A9672BD1B3E4E97EA4A7B* L_23 = (AWSCommonRuntimeException_t69928B720B1D9FDA4D0A9672BD1B3E4E97EA4A7B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AWSCommonRuntimeException_t69928B720B1D9FDA4D0A9672BD1B3E4E97EA4A7B_il2cpp_TypeInfo_var)));
				AWSCommonRuntimeException__ctor_mCB730190C0F07458FB8CD4F6DDA91DF4CBB0F6C8(L_23, L_22, NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AWS4aSignerCRTWrapper__ctor_m71F4CF8F8B66CAEC07E77AEEED6763651A8CE62E_RuntimeMethod_var)));
			}// end catch (depth: 2)

IL_008e_1:
			{
				goto IL_009a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009a:
	{
		return;
	}
}
// Amazon.Runtime.Internal.Auth.ClientProtocol Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AWS4aSignerCRTWrapper_get_Protocol_mF45D8B3153CC3288C6776BAD905750A6BB161688 (AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____awsSigV4AProvider_1;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Amazon.Runtime.Internal.Auth.ClientProtocol Amazon.Runtime.SharedInterfaces.IAWSSigV4aProvider::get_Protocol() */, IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,Amazon.Runtime.ImmutableCredentials)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4aSignerCRTWrapper_Sign_m83E011E451FC62C903758754F945662C045EF2E7 (AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844* __this, RuntimeObject* ___0_request, RuntimeObject* ___1_clientConfig, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___2_metrics, ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* ___3_credentials, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____awsSigV4AProvider_1;
		RuntimeObject* L_1 = ___0_request;
		RuntimeObject* L_2 = ___1_clientConfig;
		RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* L_3 = ___2_metrics;
		ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* L_4 = ___3_credentials;
		InterfaceActionInvoker4< RuntimeObject*, RuntimeObject*, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0*, ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* >::Invoke(1 /* System.Void Amazon.Runtime.SharedInterfaces.IAWSSigV4aProvider::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,Amazon.Runtime.ImmutableCredentials) */, IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4aSignerCRTWrapper_Sign_mA9E2B8061AD6CF139B8F479686A8641DD08185DF (AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844* __this, RuntimeObject* ___0_request, RuntimeObject* ___1_clientConfig, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___2_metrics, String_t* ___3_awsAccessKeyId, String_t* ___4_awsSecretAccessKey, const RuntimeMethod* method) 
{
	{
		AWSCommonRuntimeException_t69928B720B1D9FDA4D0A9672BD1B3E4E97EA4A7B* L_0 = (AWSCommonRuntimeException_t69928B720B1D9FDA4D0A9672BD1B3E4E97EA4A7B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AWSCommonRuntimeException_t69928B720B1D9FDA4D0A9672BD1B3E4E97EA4A7B_il2cpp_TypeInfo_var)));
		AWSCommonRuntimeException__ctor_mCB730190C0F07458FB8CD4F6DDA91DF4CBB0F6C8(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF277F055431226806CAEBFFF8FD03D0158B95071)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AWS4aSignerCRTWrapper_Sign_mA9E2B8061AD6CF139B8F479686A8641DD08185DF_RuntimeMethod_var)));
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::SignChunk(System.IO.Stream,System.String,Amazon.Runtime.Internal.Auth.AWS4aSigningResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4aSignerCRTWrapper_SignChunk_m53B9AEE6BA13AD272CEBFF50F02A23BAACB48830 (AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_chunkBody, String_t* ___1_previousSignature, AWS4aSigningResult_tD9FA43298C4810E05A386E1011E2DCE2BBF244EA* ___2_headerSigningResult, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____awsSigV4AProvider_1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_chunkBody;
		String_t* L_2 = ___1_previousSignature;
		AWS4aSigningResult_tD9FA43298C4810E05A386E1011E2DCE2BBF244EA* L_3 = ___2_headerSigningResult;
		String_t* L_4;
		L_4 = InterfaceFuncInvoker3< String_t*, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, String_t*, AWS4aSigningResult_tD9FA43298C4810E05A386E1011E2DCE2BBF244EA* >::Invoke(2 /* System.String Amazon.Runtime.SharedInterfaces.IAWSSigV4aProvider::SignChunk(System.IO.Stream,System.String,Amazon.Runtime.Internal.Auth.AWS4aSigningResult) */, IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::SignTrailingHeaderChunk(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,Amazon.Runtime.Internal.Auth.AWS4aSigningResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4aSignerCRTWrapper_SignTrailingHeaderChunk_m0664FA819DC7B2B7C57BDB8B868E473FA63F7DB3 (AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844* __this, RuntimeObject* ___0_trailingHeaders, String_t* ___1_previousSignature, AWS4aSigningResult_tD9FA43298C4810E05A386E1011E2DCE2BBF244EA* ___2_headerSigningResult, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____awsSigV4AProvider_1;
		RuntimeObject* L_1 = ___0_trailingHeaders;
		String_t* L_2 = ___1_previousSignature;
		AWS4aSigningResult_tD9FA43298C4810E05A386E1011E2DCE2BBF244EA* L_3 = ___2_headerSigningResult;
		String_t* L_4;
		L_4 = InterfaceFuncInvoker3< String_t*, RuntimeObject*, String_t*, AWS4aSigningResult_tD9FA43298C4810E05A386E1011E2DCE2BBF244EA* >::Invoke(3 /* System.String Amazon.Runtime.SharedInterfaces.IAWSSigV4aProvider::SignTrailingHeaderChunk(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,Amazon.Runtime.Internal.Auth.AWS4aSigningResult) */, IAWSSigV4aProvider_tF0BEF4F4BBEF1A1BA18B6CE4F31EEE7E04E1CA8D_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4aSignerCRTWrapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4aSignerCRTWrapper__cctor_mFA0501F147D071B7874792A3C4605153D191DB28 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____lock_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_StaticFields*)il2cpp_codegen_static_fields_for(AWS4aSignerCRTWrapper_tC4397BB5EE992FC61BFE181FB5C27A2CE94D4844_il2cpp_TypeInfo_var))->____lock_2), (void*)L_0);
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
// System.String Amazon.Runtime.Internal.Auth.AWS4aSigningResult::get_Signature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4aSigningResult_get_Signature_mB2DA119F13CA7C9DDAB61C1AEB2848BB6BF821A0 (AWS4aSigningResult_tD9FA43298C4810E05A386E1011E2DCE2BBF244EA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____signature_4;
		return L_0;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4aSigningResult::get_ForAuthorizationHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4aSigningResult_get_ForAuthorizationHeader_m0488979CDF92B66580191C3CCC5D6C86004EA2B4 (AWS4aSigningResult_tD9FA43298C4810E05A386E1011E2DCE2BBF244EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01EF5807833DD0FAAF85EE2CED5F1AA1DDB08692);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D82FDE4C847852D4BB70BD929BEE1EC32E8090F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48FDBA926702C37CD7BE2216A1E30639A0CDC219);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54410F787AFA08038634B055933A63784C4AD055);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CD337B22835C324B3CCEC7101A6D1DE5586E821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB03C358CB2986D2DDE67DBD4354355401D1C524D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE2892956422830EFD61D6B1C95A865ED0BDFF66);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral01EF5807833DD0FAAF85EE2CED5F1AA1DDB08692, NULL);
		String_t* L_2;
		L_2 = AWSSigningResultBase_get_AccessKeyId_m947D2F902046D8DB4834E852E81CADFDB6FFE164_inline(__this, NULL);
		String_t* L_3;
		L_3 = AWSSigningResultBase_get_Scope_mF912EE682BAA82712229527CB1629FA8A6130118_inline(__this, NULL);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2(L_1, _stringLiteral54410F787AFA08038634B055933A63784C4AD055, _stringLiteral9CD337B22835C324B3CCEC7101A6D1DE5586E821, L_2, L_3, NULL);
		String_t* L_5;
		L_5 = AWSSigningResultBase_get_SignedHeaders_mC00B6C6690FA64D17BD34588537D2EB92547E641_inline(__this, NULL);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_4, _stringLiteralB03C358CB2986D2DDE67DBD4354355401D1C524D, _stringLiteral3D82FDE4C847852D4BB70BD929BEE1EC32E8090F, L_5, NULL);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::get_Signature() */, __this);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_6, _stringLiteral48FDBA926702C37CD7BE2216A1E30639A0CDC219, _stringLiteralCE2892956422830EFD61D6B1C95A865ED0BDFF66, L_7, NULL);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
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
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer__ctor_m2A75152CBA5B61526C86720CFFEEDA8BECE16A36 (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, const RuntimeMethod* method) 
{
	{
		AWS4Signer__ctor_m91187CA260E8C13176F4CCC5260464DB04B61475(__this, (bool)1, NULL);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer__ctor_m91187CA260E8C13176F4CCC5260464DB04B61475 (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, bool ___0_signPayload, const RuntimeMethod* method) 
{
	{
		AbstractAWSSigner__ctor_mB0D1954B89CFFB73FCB18CDC714E564DF63C72BE(__this, NULL);
		bool L_0 = ___0_signPayload;
		AWS4Signer_set_SignPayload_m99608D12201744D0B14448FE2BEE6132DBA9016D_inline(__this, L_0, NULL);
		return;
	}
}
// System.Boolean Amazon.Runtime.Internal.Auth.AWS4Signer::get_SignPayload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AWS4Signer_get_SignPayload_m019994B3575C8E063ADF85D02D1D48235AE93AC5 (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CSignPayloadU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::set_SignPayload(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_set_SignPayload_m99608D12201744D0B14448FE2BEE6132DBA9016D (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CSignPayloadU3Ek__BackingField_3 = L_0;
		return;
	}
}
// Amazon.Runtime.Internal.Auth.ClientProtocol Amazon.Runtime.Internal.Auth.AWS4Signer::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AWS4Signer_get_Protocol_mBD58EC0753A5CAC2F0B2573C1290B450C9B81440 (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(1);
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_Sign_m0FB5BD8B9F81600B0C7162102BC2F3379513B35B (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, RuntimeObject* ___0_request, RuntimeObject* ___1_clientConfig, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___2_metrics, String_t* ___3_awsAccessKeyId, String_t* ___4_awsSecretAccessKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		s_Il2CppMethodInitialized = true;
	}
	AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_request;
		RuntimeObject* L_1 = ___1_clientConfig;
		RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* L_2 = ___2_metrics;
		String_t* L_3 = ___3_awsAccessKeyId;
		String_t* L_4 = ___4_awsSecretAccessKey;
		AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* L_5;
		L_5 = AWS4Signer_SignRequest_m99323436D7081D4DE35196DEEC413D7EEEFBB9ED(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		RuntimeObject* L_6 = ___0_request;
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_6);
		AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* L_8 = V_0;
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::get_ForAuthorizationHeader() */, L_8);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_7, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_9);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,Amazon.Runtime.ImmutableCredentials)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_Sign_m17A1971DC80AC4117AC7499D572821C4217DB7D7 (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, RuntimeObject* ___0_request, RuntimeObject* ___1_clientConfig, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___2_metrics, ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* ___3_credentials, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_request;
		RuntimeObject* L_1 = ___1_clientConfig;
		RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* L_2 = ___2_metrics;
		ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* L_3 = ___3_credentials;
		String_t* L_4;
		L_4 = ImmutableCredentials_get_AccessKey_mBF672760A7AC36490FBC39823E6DEC97CC2C5B60_inline(L_3, NULL);
		ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* L_5 = ___3_credentials;
		String_t* L_6;
		L_6 = ImmutableCredentials_get_SecretKey_mA30FA197B4999D45EEAB0BACA81392FF0CF8CD53_inline(L_5, NULL);
		VirtualActionInvoker5< RuntimeObject*, RuntimeObject*, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0*, String_t*, String_t* >::Invoke(5 /* System.Void Amazon.Runtime.Internal.Auth.AbstractAWSSigner::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,System.String,System.String) */, __this, L_0, L_1, L_2, L_4, L_6);
		return;
	}
}
// Amazon.Runtime.Internal.Auth.AWS4SigningResult Amazon.Runtime.Internal.Auth.AWS4Signer::SignRequest(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* AWS4Signer_SignRequest_m99323436D7081D4DE35196DEEC413D7EEEFBB9ED (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, RuntimeObject* ___0_request, RuntimeObject* ___1_clientConfig, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___2_metrics, String_t* ___3_awsAccessKeyId, String_t* ___4_awsSecretAccessKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral292024B472EA7FC15E4F169AE8C4C7A6DEE900C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55F42690C3007F40BA0CED691725B5C6586ED068);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6087570F9096503FEB39C184D67AB275B22C941C);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* G_B3_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	String_t* G_B11_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_request;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		AWS4Signer_ValidateRequest_mD6EFDEE2E3263655266A2B1DC8C499D780F4DCFC(L_0, NULL);
		RuntimeObject* L_1 = ___0_request;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___0_request;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4;
		L_4 = InterfaceFuncInvoker0< Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(9 /* System.Uri Amazon.Runtime.Internal.IRequest::get_Endpoint() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_3);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = AWS4Signer_InitializeHeaders_mE3737714CE93A28E74866026CCC40924371A6279(L_2, L_4, NULL);
		V_0 = L_5;
		RuntimeObject* L_6 = ___0_request;
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(25 /* System.String Amazon.Runtime.Internal.IRequest::get_OverrideSigningServiceName() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_6);
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		if (!L_8)
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_9 = ___1_clientConfig;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = AWS4Signer_DetermineService_m6126B49E5B1045D2D39A916BDB72A37148C082AF(L_9, NULL);
		G_B3_0 = L_10;
		goto IL_0033;
	}

IL_002d:
	{
		RuntimeObject* L_11 = ___0_request;
		String_t* L_12;
		L_12 = InterfaceFuncInvoker0< String_t* >::Invoke(25 /* System.String Amazon.Runtime.Internal.IRequest::get_OverrideSigningServiceName() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_11);
		G_B3_0 = L_12;
	}

IL_0033:
	{
		V_1 = G_B3_0;
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral6087570F9096503FEB39C184D67AB275B22C941C, NULL);
		if (!L_14)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_15 = ___0_request;
		InterfaceActionInvoker1< bool >::Invoke(48 /* System.Void Amazon.Runtime.Internal.IRequest::set_UseDoubleEncoding(System.Boolean) */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_15, (bool)0);
	}

IL_0048:
	{
		RuntimeObject* L_16 = ___0_request;
		RuntimeObject* L_17 = ___1_clientConfig;
		RuntimeObject* L_18 = ___1_clientConfig;
		String_t* L_19;
		L_19 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Amazon.Runtime.IClientConfig::get_RegionEndpointServiceName() */, IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var, L_18);
		RuntimeObject* L_20 = ___0_request;
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_21;
		L_21 = InterfaceFuncInvoker0< RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* >::Invoke(29 /* Amazon.RegionEndpoint Amazon.Runtime.Internal.IRequest::get_AlternateEndpoint() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_20);
		RuntimeObject* L_22 = ___0_request;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_23;
		L_23 = AWS4Signer_DetermineSigningRegion_m3D28209191EF6F4BC13908EAB71437327E802B17(L_17, L_19, L_21, L_22, NULL);
		InterfaceActionInvoker1< String_t* >::Invoke(40 /* System.Void Amazon.Runtime.Internal.IRequest::set_DeterminedSigningRegion(System.String) */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_16, L_23);
		RuntimeObject* L_24 = ___0_request;
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_24);
		RuntimeObject* L_26 = ___0_request;
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(46 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_TrailingHeaders() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_26);
		AWS4Signer_SetXAmzTrailerHeader_mE382DAF83B9480C9D246CEE1D981E31933766077(L_25, L_27, NULL);
		RuntimeObject* L_28 = ___0_request;
		List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* L_29;
		L_29 = AWS4Signer_GetParametersToCanonicalize_m7DC2E3B03D9EEAE862055419329B0E1400D21C30(L_28, NULL);
		String_t* L_30;
		L_30 = AWS4Signer_CanonicalizeQueryParameters_m549B1209FBD3ED80F76482F6182235EA0EE41049(L_29, NULL);
		V_2 = L_30;
		RuntimeObject* L_31 = ___0_request;
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(46 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_TrailingHeaders() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_31);
		RuntimeObject* L_33 = L_32;
		G_B6_0 = L_33;
		if (L_33)
		{
			G_B7_0 = L_33;
			goto IL_008b;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0093;
	}

IL_008b:
	{
		int32_t L_34;
		L_34 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var, G_B7_0);
		G_B8_0 = ((((int32_t)L_34) > ((int32_t)0))? 1 : 0);
	}

IL_0093:
	{
		if (G_B8_0)
		{
			goto IL_009c;
		}
	}
	{
		G_B11_0 = _stringLiteral292024B472EA7FC15E4F169AE8C4C7A6DEE900C7;
		goto IL_00a1;
	}

IL_009c:
	{
		G_B11_0 = _stringLiteral55F42690C3007F40BA0CED691725B5C6586ED068;
	}

IL_00a1:
	{
		V_3 = G_B11_0;
		RuntimeObject* L_35 = ___0_request;
		bool L_36;
		L_36 = AWS4Signer_get_SignPayload_m019994B3575C8E063ADF85D02D1D48235AE93AC5_inline(__this, NULL);
		String_t* L_37 = V_3;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_38;
		L_38 = AWS4Signer_SetRequestBodyHash_mE429DAF7177761149D08472AA8F86E7A60B10594(L_35, L_36, L_37, ((int32_t)64), NULL);
		V_4 = L_38;
		RuntimeObject* L_39 = ___0_request;
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_39);
		RuntimeObject* L_41;
		L_41 = AWS4Signer_SortAndPruneHeaders_m56DE03A6A2F1B020B539DB8EBEBA0A3A60CE1DFC(L_40, NULL);
		V_5 = L_41;
		RuntimeObject* L_42 = ___0_request;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_43;
		L_43 = InterfaceFuncInvoker0< Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(9 /* System.Uri Amazon.Runtime.Internal.IRequest::get_Endpoint() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_42);
		RuntimeObject* L_44 = ___0_request;
		String_t* L_45;
		L_45 = InterfaceFuncInvoker0< String_t* >::Invoke(11 /* System.String Amazon.Runtime.Internal.IRequest::get_ResourcePath() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_44);
		RuntimeObject* L_46 = ___0_request;
		String_t* L_47;
		L_47 = InterfaceFuncInvoker0< String_t* >::Invoke(7 /* System.String Amazon.Runtime.Internal.IRequest::get_HttpMethod() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_46);
		RuntimeObject* L_48 = V_5;
		String_t* L_49 = V_2;
		String_t* L_50 = V_4;
		RuntimeObject* L_51 = ___0_request;
		RuntimeObject* L_52;
		L_52 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(13 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_PathResources() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_51);
		RuntimeObject* L_53 = ___0_request;
		bool L_54;
		L_54 = InterfaceFuncInvoker0< bool >::Invoke(47 /* System.Boolean Amazon.Runtime.Internal.IRequest::get_UseDoubleEncoding() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_53);
		String_t* L_55;
		L_55 = AWS4Signer_CanonicalizeRequest_mABDD64D192C79A6C24D4FF53A7D115FD5CE28D7F(L_43, L_45, L_47, L_48, L_49, L_50, L_52, L_54, NULL);
		V_6 = L_55;
		RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* L_56 = ___2_metrics;
		if (!L_56)
		{
			goto IL_00f7;
		}
	}
	{
		RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* L_57 = ___2_metrics;
		String_t* L_58 = V_6;
		RequestMetrics_AddProperty_mEEDDB74F30D1F338104E75C17D7DF4FEF0E07BDC(L_57, ((int32_t)18), L_58, NULL);
	}

IL_00f7:
	{
		String_t* L_59 = ___3_awsAccessKeyId;
		String_t* L_60 = ___4_awsSecretAccessKey;
		RuntimeObject* L_61 = ___0_request;
		String_t* L_62;
		L_62 = InterfaceFuncInvoker0< String_t* >::Invoke(39 /* System.String Amazon.Runtime.Internal.IRequest::get_DeterminedSigningRegion() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_61);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_63 = V_0;
		String_t* L_64 = V_1;
		RuntimeObject* L_65 = V_5;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_66;
		L_66 = AWS4Signer_CanonicalizeHeaderNames_mFF24FF56F0AE252D1D6DEF939458BC66F56D49FF(L_65, NULL);
		String_t* L_67 = V_6;
		RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* L_68 = ___2_metrics;
		AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* L_69;
		L_69 = AWS4Signer_ComputeSignature_m4DFBA05F1998120E914CD91D1BC68CF5574DA5C4(L_59, L_60, L_62, L_63, L_64, L_66, L_67, L_68, NULL);
		return L_69;
	}
}
// System.DateTime Amazon.Runtime.Internal.Auth.AWS4Signer::InitializeHeaders(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AWS4Signer_InitializeHeaders_mE3737714CE93A28E74866026CCC40924371A6279 (RuntimeObject* ___0_headers, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___1_requestEndpoint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CorrectClockSkew_t417A5F0CF8A11F92FD302BA5F80F17ACE7BE3C5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_headers;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = ___1_requestEndpoint;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_2 = ___1_requestEndpoint;
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		il2cpp_codegen_runtime_class_init_inline(CorrectClockSkew_t417A5F0CF8A11F92FD302BA5F80F17ACE7BE3C5A_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = CorrectClockSkew_GetCorrectedUtcNowForEndpoint_mCE500BBE523341E24C6EB90B3B71FF9335A2D7A3(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = AWS4Signer_InitializeHeaders_mB1983466AD9ED91C4CA510AEA2E942C67F3CE437(L_0, L_1, L_4, NULL);
		return L_5;
	}
}
// System.DateTime Amazon.Runtime.Internal.Auth.AWS4Signer::InitializeHeaders(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Uri,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D AWS4Signer_InitializeHeaders_mB1983466AD9ED91C4CA510AEA2E942C67F3CE437 (RuntimeObject* ___0_headers, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___1_requestEndpoint, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___2_requestDateTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral582765B03715A02BBC7B5EED58622E5BC0125B11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral712D2A1550F63E88E95C516CDB6DFA50E1DD6C49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE705C6345C26AF82E64D22DBE44B2A3514F2F06F);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		RuntimeObject* L_0 = ___0_headers;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		AWS4Signer_CleanHeaders_mDE078CF20C077F281B1A9879869429E8C3DA7E1E(L_0, NULL);
		RuntimeObject* L_1 = ___0_headers;
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::ContainsKey(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_1, _stringLiteralE705C6345C26AF82E64D22DBE44B2A3514F2F06F);
		if (L_2)
		{
			goto IL_0048;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_3 = ___1_requestEndpoint;
		String_t* L_4;
		L_4 = Uri_get_Host_m2C0E258C7DFF7A340049BE9BC08FF45E90988D8C(L_3, NULL);
		V_1 = L_4;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_5 = ___1_requestEndpoint;
		bool L_6;
		L_6 = Uri_get_IsDefaultPort_m1BFC89B27306852E9AFDEF92897FD52B0B3ECD06(L_5, NULL);
		if (L_6)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_7 = V_1;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_8 = ___1_requestEndpoint;
		int32_t L_9;
		L_9 = Uri_get_Port_m7A1413AC9D9A2FC5DC8A7F89DF4A01ACA0241A02(L_8, NULL);
		V_2 = L_9;
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_7, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_10, NULL);
		V_1 = L_11;
	}

IL_003c:
	{
		RuntimeObject* L_12 = ___0_headers;
		String_t* L_13 = V_1;
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::Add(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_12, _stringLiteralE705C6345C26AF82E64D22DBE44B2A3514F2F06F, L_13);
	}

IL_0048:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_14 = ___2_requestDateTime;
		V_0 = L_14;
		RuntimeObject* L_15 = ___0_headers;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_16;
		L_16 = DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9((&V_0), NULL);
		V_3 = L_16;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_17;
		L_17 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_18;
		L_18 = DateTime_ToString_m27637E1131A10BED8A95639D64339023D5EBBF00((&V_3), _stringLiteral582765B03715A02BBC7B5EED58622E5BC0125B11, L_17, NULL);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_15, _stringLiteral712D2A1550F63E88E95C516CDB6DFA50E1DD6C49, L_18);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_19 = V_0;
		return L_19;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::SetXAmzTrailerHeader(System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_SetXAmzTrailerHeader_mE382DAF83B9480C9D246CEE1D981E31933766077 (RuntimeObject* ___0_headers, RuntimeObject* ___1_trailingHeaders, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisString_t_TisString_t_m40B981D8BC975EB4FB16F2CFC3C9782D92493D2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetXAmzTrailerHeaderU3Eb__33_0_mB69F391E3874BE9D3C823E03144CB1F2FDA02D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37982402124BB488E04D03607DB86C153FF935B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	RuntimeObject* G_B5_4 = NULL;
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	RuntimeObject* G_B4_4 = NULL;
	{
		RuntimeObject* L_0 = ___1_trailingHeaders;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___1_trailingHeaders;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_000c;
		}
	}

IL_000b:
	{
		return;
	}

IL_000c:
	{
		RuntimeObject* L_3 = ___0_headers;
		RuntimeObject* L_4 = ___1_trailingHeaders;
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Keys() */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_4);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_6 = ((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9__33_0_1;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_7 = L_6;
		G_B4_0 = L_7;
		G_B4_1 = L_5;
		G_B4_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
		G_B4_3 = _stringLiteral37982402124BB488E04D03607DB86C153FF935B7;
		G_B4_4 = L_3;
		if (L_7)
		{
			G_B5_0 = L_7;
			G_B5_1 = L_5;
			G_B5_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
			G_B5_3 = _stringLiteral37982402124BB488E04D03607DB86C153FF935B7;
			G_B5_4 = L_3;
			goto IL_003c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854* L_8 = ((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_9 = (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*)il2cpp_codegen_object_new(Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		Func_2__ctor_m6A29D0BC8A4BCF6079AD2737B4119D3802B41814(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3CSetXAmzTrailerHeaderU3Eb__33_0_mB69F391E3874BE9D3C823E03144CB1F2FDA02D75_RuntimeMethod_var), NULL);
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_10 = L_9;
		((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9__33_0_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9__33_0_1), (void*)L_10);
		G_B5_0 = L_10;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
		G_B5_4 = G_B4_4;
	}

IL_003c:
	{
		RuntimeObject* L_11;
		L_11 = Enumerable_OrderBy_TisString_t_TisString_t_m40B981D8BC975EB4FB16F2CFC3C9782D92493D2B(G_B5_1, G_B5_0, Enumerable_OrderBy_TisString_t_TisString_t_m40B981D8BC975EB4FB16F2CFC3C9782D92493D2B_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_11, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		String_t* L_13;
		L_13 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(G_B5_2, L_12, NULL);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, G_B5_4, G_B5_3, L_13);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::CleanHeaders(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_CleanHeaders_mDE078CF20C077F281B1A9879869429E8C3DA7E1E (RuntimeObject* ___0_headers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349C30776190825203D5D07031D5CE4046D257B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFC4689783D4072D09122F37B42F19C630CE74AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_headers;
		bool L_1;
		L_1 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::Remove(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_0, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		RuntimeObject* L_2 = ___0_headers;
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::Remove(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_2, _stringLiteral349C30776190825203D5D07031D5CE4046D257B9);
		RuntimeObject* L_4 = ___0_headers;
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::ContainsKey(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_4, _stringLiteralAFC4689783D4072D09122F37B42F19C630CE74AA);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		RuntimeObject* L_6 = ___0_headers;
		RuntimeObject* L_7 = ___0_headers;
		String_t* L_8;
		L_8 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_7, _stringLiteralAFC4689783D4072D09122F37B42F19C630CE74AA);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_6, _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2, L_8);
		RuntimeObject* L_9 = ___0_headers;
		bool L_10;
		L_10 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::Remove(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_9, _stringLiteralAFC4689783D4072D09122F37B42F19C630CE74AA);
	}

IL_0047:
	{
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::ValidateRequest(Amazon.Runtime.Internal.IRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_ValidateRequest_mD6EFDEE2E3263655266A2B1DC8C499D780F4DCFC (RuntimeObject* ___0_request, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_0 = NULL;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_request;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1;
		L_1 = InterfaceFuncInvoker0< Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(9 /* System.Uri Amazon.Runtime.Internal.IRequest::get_Endpoint() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = ___0_request;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_3;
		L_3 = InterfaceFuncInvoker0< Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 >::Invoke(33 /* System.Nullable`1<System.Boolean> Amazon.Runtime.Internal.IRequest::get_DisablePayloadSigning() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
		bool L_4;
		L_4 = Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline((&V_1), Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_5 = V_0;
		String_t* L_6;
		L_6 = Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F(L_5, NULL);
		bool L_7;
		L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_6, _stringLiteralF27E4C631EBEFA337EC21BE8552E169C9DED78A2, NULL);
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4* L_8 = (AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AmazonClientException_tDB4B3AB1A608A3E6EDA922C4709B52923954E2D4_il2cpp_TypeInfo_var)));
		AmazonClientException__ctor_mD79D13D6A21E949F64AF9554717EE6D525492D32(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD69F9EC21087D22656DA059773494239B182B120)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AWS4Signer_ValidateRequest_mD6EFDEE2E3263655266A2B1DC8C499D780F4DCFC_RuntimeMethod_var)));
	}

IL_0034:
	{
		return;
	}
}
// Amazon.Runtime.Internal.Auth.AWS4SigningResult Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeSignature(System.String,System.String,System.String,System.DateTime,System.String,System.String,System.String,Amazon.Runtime.Internal.Util.RequestMetrics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* AWS4Signer_ComputeSignature_m4DFBA05F1998120E914CD91D1BC68CF5574DA5C4 (String_t* ___0_awsAccessKey, String_t* ___1_awsSecretAccessKey, String_t* ___2_region, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___3_signedAt, String_t* ___4_service, String_t* ___5_signedHeaders, String_t* ___6_canonicalRequest, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___7_metrics, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23BDE38FB8866776B1F53A1DE91E1567FADBA129);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25FCC4380EC995860B706F5058E2DB90D8821836);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral320CF2D23C507650897D6F1FDA7E9AA2C53C5DBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral381B7C83B74E5866B084D94F2F697986A6FD36A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral582765B03715A02BBC7B5EED58622E5BC0125B11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3AAC153B63A33D4143DD3E6F0D663AB6986F1CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCD63AE8496DF16CA83A2973ACB14210B26FB7E1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	StringBuilder_t* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	String_t* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___3_signedAt;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AWS4Signer_FormatDateTime_m1DFE05164B31E3996F52E2A46146F37FFD8E7083(L_0, _stringLiteral381B7C83B74E5866B084D94F2F697986A6FD36A8, NULL);
		V_0 = L_1;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = V_0;
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___2_region;
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		String_t* L_9 = ___4_service;
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		ArrayElementTypeCheck (L_10, _stringLiteral25FCC4380EC995860B706F5058E2DB90D8821836);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteral25FCC4380EC995860B706F5058E2DB90D8821836);
		String_t* L_11;
		L_11 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_2, _stringLiteralB3AAC153B63A33D4143DD3E6F0D663AB6986F1CA, L_10, NULL);
		V_1 = L_11;
		StringBuilder_t* L_12 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_12, NULL);
		V_2 = L_12;
		StringBuilder_t* L_13 = V_2;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
		L_14 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		ArrayElementTypeCheck (L_16, _stringLiteral320CF2D23C507650897D6F1FDA7E9AA2C53C5DBC);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral320CF2D23C507650897D6F1FDA7E9AA2C53C5DBC);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		ArrayElementTypeCheck (L_17, _stringLiteral23BDE38FB8866776B1F53A1DE91E1567FADBA129);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteral23BDE38FB8866776B1F53A1DE91E1567FADBA129);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_19 = ___3_signedAt;
		String_t* L_20;
		L_20 = AWS4Signer_FormatDateTime_m1DFE05164B31E3996F52E2A46146F37FFD8E7083(L_19, _stringLiteral582765B03715A02BBC7B5EED58622E5BC0125B11, NULL);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_18;
		String_t* L_22 = V_1;
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_AppendFormat_m0A69DC59537ACE5D88B174EE1098453E1276E53B(L_13, L_14, _stringLiteralCCD63AE8496DF16CA83A2973ACB14210B26FB7E1, L_21, NULL);
		String_t* L_24 = ___6_canonicalRequest;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = AWS4Signer_ComputeHash_mB586790357AA02ACA787D309B13EE501CEA4729F(L_24, NULL);
		V_3 = L_25;
		StringBuilder_t* L_26 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_3;
		il2cpp_codegen_runtime_class_init_inline(AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		String_t* L_28;
		L_28 = AWSSDKUtils_ToHex_mFD2A4519380CE6862DB14F693869B6A3B0E705F0(L_27, (bool)1, NULL);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, L_28, NULL);
		RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* L_30 = ___7_metrics;
		if (!L_30)
		{
			goto IL_009a;
		}
	}
	{
		RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* L_31 = ___7_metrics;
		StringBuilder_t* L_32 = V_2;
		RequestMetrics_AddProperty_mEEDDB74F30D1F338104E75C17D7DF4FEF0E07BDC(L_31, ((int32_t)17), L_32, NULL);
	}

IL_009a:
	{
		String_t* L_33 = ___1_awsSecretAccessKey;
		String_t* L_34 = ___2_region;
		String_t* L_35 = V_0;
		String_t* L_36 = ___4_service;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37;
		L_37 = AWS4Signer_ComposeSigningKey_m46B94B52A6776A72226897D088AD32BCCA155945(L_33, L_34, L_35, L_36, NULL);
		V_4 = L_37;
		StringBuilder_t* L_38 = V_2;
		String_t* L_39;
		L_39 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_38);
		V_5 = L_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_4;
		String_t* L_41 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
		L_42 = AWS4Signer_ComputeKeyedHash_m24E0CFA1D3BC40CEBD6D8439375AE68C01FB26A1(1, L_40, L_41, NULL);
		V_6 = L_42;
		String_t* L_43 = ___0_awsAccessKey;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_44 = ___3_signedAt;
		String_t* L_45 = ___5_signedHeaders;
		String_t* L_46 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_6;
		AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* L_49 = (AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6*)il2cpp_codegen_object_new(AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6_il2cpp_TypeInfo_var);
		AWS4SigningResult__ctor_m51505F2656D83286A4936721C8403EF97531792F(L_49, L_43, L_44, L_45, L_46, L_47, L_48, NULL);
		return L_49;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::FormatDateTime(System.DateTime,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_FormatDateTime_m1DFE05164B31E3996F52E2A46146F37FFD8E7083 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_dt, String_t* ___1_formatString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9((&___0_dt), NULL);
		V_0 = L_0;
		String_t* L_1 = ___1_formatString;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_3;
		L_3 = DateTime_ToString_m27637E1131A10BED8A95639D64339023D5EBBF00((&V_0), L_1, L_2, NULL);
		return L_3;
	}
}
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComposeSigningKey(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_ComposeSigningKey_m46B94B52A6776A72226897D088AD32BCCA155945 (String_t* ___0_awsSecretAccessKey, String_t* ___1_region, String_t* ___2_date, String_t* ___3_service, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral320CF2D23C507650897D6F1FDA7E9AA2C53C5DBC);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		V_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = V_0;
					if (!L_0)
					{
						goto IL_0073;
					}
				}
				{
					CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = V_0;
					CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = V_0;
					Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
				}

IL_0073:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			String_t* L_3 = ___0_awsSecretAccessKey;
			String_t* L_4;
			L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral320CF2D23C507650897D6F1FDA7E9AA2C53C5DBC, L_3, NULL);
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5;
			L_5 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_4, NULL);
			V_0 = L_5;
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
			L_6 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.Char[]) */, L_6, L_7);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_9;
			L_9 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_10 = ___2_date;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_9, L_10);
			il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
			L_12 = AWS4Signer_ComputeKeyedHash_m21982238271887355FCD0EC929FEDF8CE6F7A33A(1, L_8, L_11, NULL);
			V_1 = L_12;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_14;
			L_14 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_15 = ___1_region;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
			L_16 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_14, L_15);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
			L_17 = AWS4Signer_ComputeKeyedHash_m21982238271887355FCD0EC929FEDF8CE6F7A33A(1, L_13, L_16, NULL);
			V_2 = L_17;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_2;
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_19;
			L_19 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_20 = ___3_service;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
			L_21 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_19, L_20);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
			L_22 = AWS4Signer_ComputeKeyedHash_m21982238271887355FCD0EC929FEDF8CE6F7A33A(1, L_18, L_21, NULL);
			V_3 = L_22;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_3;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ((AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_StaticFields*)il2cpp_codegen_static_fields_for(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var))->___TerminatorBytes_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
			L_25 = AWS4Signer_ComputeKeyedHash_m21982238271887355FCD0EC929FEDF8CE6F7A33A(1, L_23, L_24, NULL);
			V_4 = L_25;
			goto IL_0074;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0074:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_4;
		return L_26;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::SetRequestBodyHash(Amazon.Runtime.Internal.IRequest,System.Boolean,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_SetRequestBodyHash_mE429DAF7177761149D08472AA8F86E7A60B10594 (RuntimeObject* ___0_request, bool ___1_signPayload, String_t* ___2_chunkedBodyHash, int32_t ___3_signatureLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChunkedUploadWrapperStream_tBBA0F8ABE5C48A8B46C8F259EC7A8E9A04B6BA7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoUtil_tEA2F437D9B00B90C615A408DF8D65EFA801E9ABC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08BFAB0C7A3D047B53E710D86A09A4946049B3FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349C30776190825203D5D07031D5CE4046D257B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral630B0975C44597114E7F50A533BD3331291FD31E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFC4689783D4072D09122F37B42F19C630CE74AA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t G_B3_0 = 0;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B22_0 = NULL;
	RuntimeObject* G_B22_1 = NULL;
	String_t* G_B21_0 = NULL;
	RuntimeObject* G_B21_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_request;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		L_1 = InterfaceFuncInvoker0< Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 >::Invoke(33 /* System.Nullable`1<System.Boolean> Amazon.Runtime.Internal.IRequest::get_DisablePayloadSigning() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_1), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		bool L_3 = ___1_signPayload;
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0024;
	}

IL_0016:
	{
		RuntimeObject* L_4 = ___0_request;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_5;
		L_5 = InterfaceFuncInvoker0< Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 >::Invoke(33 /* System.Nullable`1<System.Boolean> Amazon.Runtime.Internal.IRequest::get_DisablePayloadSigning() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
		bool L_6;
		L_6 = Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28((&V_1), Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		G_B3_0 = ((int32_t)(L_6));
	}

IL_0024:
	{
		if (!G_B3_0)
		{
			goto IL_00c8;
		}
	}
	{
		RuntimeObject* L_7 = ___0_request;
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(46 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_TrailingHeaders() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_7);
		RuntimeObject* L_9 = L_8;
		G_B5_0 = L_9;
		if (L_9)
		{
			G_B6_0 = L_9;
			goto IL_0036;
		}
	}
	{
		G_B7_0 = 0;
		goto IL_003e;
	}

IL_0036:
	{
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var, G_B6_0);
		G_B7_0 = ((((int32_t)L_10) > ((int32_t)0))? 1 : 0);
	}

IL_003e:
	{
		if (!G_B7_0)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_11 = ___0_request;
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_11);
		RuntimeObject* L_13 = ___0_request;
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_13);
		String_t* L_15;
		L_15 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_14, _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_12, _stringLiteralAFC4689783D4072D09122F37B42F19C630CE74AA, L_15);
		RuntimeObject* L_16 = ___0_request;
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_16);
		String_t* L_18;
		L_18 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_17, _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_19;
		L_19 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		int64_t L_20;
		L_20 = Int64_Parse_mAE2EACBD4520D1EEE5AA32B228D5DA2ED83DDDA5(L_18, L_19, NULL);
		V_2 = L_20;
		RuntimeObject* L_21 = ___0_request;
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_21);
		RuntimeObject* L_23 = ___0_request;
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(46 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_TrailingHeaders() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_23);
		RuntimeObject* L_25 = ___0_request;
		int32_t L_26;
		L_26 = InterfaceFuncInvoker0< int32_t >::Invoke(44 /* Amazon.Runtime.CoreChecksumAlgorithm Amazon.Runtime.Internal.IRequest::get_SelectedChecksum() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_25);
		int64_t L_27 = V_2;
		int64_t L_28;
		L_28 = TrailingHeadersWrapperStream_CalculateLength_mB864D571B02159CA842BD3CE8DE650BFB2A1C99E(L_24, L_26, L_27, NULL);
		V_3 = L_28;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_29;
		L_29 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_30;
		L_30 = Int64_ToString_m5250B67D3E89B8EB829FB26136E744F1F141B7FD((&V_3), L_29, NULL);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_22, _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2, L_30);
		RuntimeObject* L_31 = ___0_request;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		AWS4Signer_SetContentEncodingHeader_mB120192602F38D70BD77D4899A4F672A0BE18A97(L_31, NULL);
		RuntimeObject* L_32 = ___0_request;
		String_t* L_33;
		L_33 = AWS4Signer_SetPayloadSignatureHeader_mDA2416F62340CA3656B2FE1877A989B5BBDF6F86(L_32, _stringLiteral08BFAB0C7A3D047B53E710D86A09A4946049B3FA, NULL);
		return L_33;
	}

IL_00bc:
	{
		RuntimeObject* L_34 = ___0_request;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_35;
		L_35 = AWS4Signer_SetPayloadSignatureHeader_mDA2416F62340CA3656B2FE1877A989B5BBDF6F86(L_34, _stringLiteral630B0975C44597114E7F50A533BD3331291FD31E, NULL);
		return L_35;
	}

IL_00c8:
	{
		RuntimeObject* L_36 = ___0_request;
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_36);
		bool L_38;
		L_38 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_37, _stringLiteral349C30776190825203D5D07031D5CE4046D257B9, (&V_0));
		if (!L_38)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_39 = ___0_request;
		bool L_40;
		L_40 = InterfaceFuncInvoker0< bool >::Invoke(35 /* System.Boolean Amazon.Runtime.Internal.IRequest::get_UseChunkEncoding() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_39);
		if (L_40)
		{
			goto IL_00e6;
		}
	}
	{
		String_t* L_41 = V_0;
		return L_41;
	}

IL_00e6:
	{
		RuntimeObject* L_42 = ___0_request;
		bool L_43;
		L_43 = InterfaceFuncInvoker0< bool >::Invoke(35 /* System.Boolean Amazon.Runtime.Internal.IRequest::get_UseChunkEncoding() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_42);
		if (!L_43)
		{
			goto IL_017a;
		}
	}
	{
		String_t* L_44 = ___2_chunkedBodyHash;
		V_0 = L_44;
		RuntimeObject* L_45 = ___0_request;
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_45);
		bool L_47;
		L_47 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::ContainsKey(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_46, _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		if (!L_47)
		{
			goto IL_0172;
		}
	}
	{
		RuntimeObject* L_48 = ___0_request;
		RuntimeObject* L_49;
		L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_48);
		RuntimeObject* L_50 = ___0_request;
		RuntimeObject* L_51;
		L_51 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_50);
		String_t* L_52;
		L_52 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_51, _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_49, _stringLiteralAFC4689783D4072D09122F37B42F19C630CE74AA, L_52);
		RuntimeObject* L_53 = ___0_request;
		RuntimeObject* L_54;
		L_54 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_53);
		String_t* L_55;
		L_55 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_54, _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_56;
		L_56 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		int64_t L_57;
		L_57 = Int64_Parse_mAE2EACBD4520D1EEE5AA32B228D5DA2ED83DDDA5(L_55, L_56, NULL);
		V_4 = L_57;
		RuntimeObject* L_58 = ___0_request;
		RuntimeObject* L_59;
		L_59 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_58);
		int64_t L_60 = V_4;
		int32_t L_61 = ___3_signatureLength;
		RuntimeObject* L_62 = ___0_request;
		RuntimeObject* L_63;
		L_63 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(46 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_TrailingHeaders() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_62);
		RuntimeObject* L_64 = ___0_request;
		int32_t L_65;
		L_65 = InterfaceFuncInvoker0< int32_t >::Invoke(44 /* Amazon.Runtime.CoreChecksumAlgorithm Amazon.Runtime.Internal.IRequest::get_SelectedChecksum() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_64);
		il2cpp_codegen_runtime_class_init_inline(ChunkedUploadWrapperStream_tBBA0F8ABE5C48A8B46C8F259EC7A8E9A04B6BA7E_il2cpp_TypeInfo_var);
		int64_t L_66;
		L_66 = ChunkedUploadWrapperStream_ComputeChunkedContentLength_m818809A1BAF9AF4814B79C9C930B729D99BA481D(L_60, L_61, L_63, L_65, NULL);
		V_3 = L_66;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_67;
		L_67 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_68;
		L_68 = Int64_ToString_m5250B67D3E89B8EB829FB26136E744F1F141B7FD((&V_3), L_67, NULL);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_59, _stringLiteral86E7C0314F9CA521BDA0F361B0D90037E62E63C2, L_68);
	}

IL_0172:
	{
		RuntimeObject* L_69 = ___0_request;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		AWS4Signer_SetContentEncodingHeader_mB120192602F38D70BD77D4899A4F672A0BE18A97(L_69, NULL);
		goto IL_01b1;
	}

IL_017a:
	{
		RuntimeObject* L_70 = ___0_request;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_71;
		L_71 = InterfaceFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(21 /* System.IO.Stream Amazon.Runtime.Internal.IRequest::get_ContentStream() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_70);
		if (!L_71)
		{
			goto IL_018b;
		}
	}
	{
		RuntimeObject* L_72 = ___0_request;
		String_t* L_73;
		L_73 = InterfaceFuncInvoker0< String_t* >::Invoke(24 /* System.String Amazon.Runtime.Internal.IRequest::ComputeContentStreamHash() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_72);
		V_0 = L_73;
		goto IL_01b1;
	}

IL_018b:
	{
		RuntimeObject* L_74 = ___0_request;
		RuntimeObject* L_75 = ___0_request;
		bool L_76;
		L_76 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Amazon.Runtime.Internal.IRequest::get_UseQueryString() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_75);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_77), L_76, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78;
		L_78 = AWSSDKUtils_GetRequestPayloadBytes_m10D9DF6659E80792EC88A7DFA2ACD604DA2D0DFC(L_74, L_77, NULL);
		V_5 = L_78;
		il2cpp_codegen_runtime_class_init_inline(CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var);
		RuntimeObject* L_79;
		L_79 = CryptoUtilFactory_get_CryptoInstance_m480B9CD3759DE30A1A6649129C17227BBBD0200F_inline(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81;
		L_81 = InterfaceFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Byte[] Amazon.Util.ICryptoUtil::ComputeSHA256Hash(System.Byte[]) */, ICryptoUtil_tEA2F437D9B00B90C615A408DF8D65EFA801E9ABC_il2cpp_TypeInfo_var, L_79, L_80);
		String_t* L_82;
		L_82 = AWSSDKUtils_ToHex_mFD2A4519380CE6862DB14F693869B6A3B0E705F0(L_81, (bool)1, NULL);
		V_0 = L_82;
	}

IL_01b1:
	{
		RuntimeObject* L_83 = ___0_request;
		String_t* L_84 = V_0;
		String_t* L_85 = L_84;
		G_B21_0 = L_85;
		G_B21_1 = L_83;
		if (L_85)
		{
			G_B22_0 = L_85;
			G_B22_1 = L_83;
			goto IL_01bc;
		}
	}
	{
		G_B22_0 = _stringLiteral630B0975C44597114E7F50A533BD3331291FD31E;
		G_B22_1 = G_B21_1;
	}

IL_01bc:
	{
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_86;
		L_86 = AWS4Signer_SetPayloadSignatureHeader_mDA2416F62340CA3656B2FE1877A989B5BBDF6F86(G_B22_1, G_B22_0, NULL);
		return L_86;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::SetContentEncodingHeader(Amazon.Runtime.Internal.IRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer_SetContentEncodingHeader_mB120192602F38D70BD77D4899A4F672A0BE18A97 (RuntimeObject* ___0_request, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EBDBD8FCA12AE01917E5179BB979BD9077F8144);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44621EB2592613282FDA2B9A8D681C8792AF62F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EE0B6856D8C417B721AA78EBAB7DEC28DAE5C81);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_request;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_1, _stringLiteral3EBDBD8FCA12AE01917E5179BB979BD9077F8144, (&V_0));
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_3, _stringLiteral5EE0B6856D8C417B721AA78EBAB7DEC28DAE5C81, NULL);
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_5 = ___0_request;
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_5);
		String_t* L_7 = V_0;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, _stringLiteral44621EB2592613282FDA2B9A8D681C8792AF62F0, NULL);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_6, _stringLiteral3EBDBD8FCA12AE01917E5179BB979BD9077F8144, L_8);
	}

IL_003c:
	{
		return;
	}
}
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::SignBlob(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_SignBlob_m14AB2E6346C49F4DDD54C852F502F47475992F2D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, String_t* ___1_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_key;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_2 = ___1_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = AWS4Signer_SignBlob_m244BAA116D10B8F56DA06A1075AFDCA04CFDD2BB(L_0, L_3, NULL);
		return L_4;
	}
}
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::SignBlob(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_SignBlob_m244BAA116D10B8F56DA06A1075AFDCA04CFDD2BB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoUtil_tEA2F437D9B00B90C615A408DF8D65EFA801E9ABC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CryptoUtilFactory_get_CryptoInstance_m480B9CD3759DE30A1A6649129C17227BBBD0200F_inline(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_key;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Byte[] Amazon.Util.ICryptoUtil::HMACSignBinary(System.Byte[],System.Byte[],Amazon.Runtime.SigningAlgorithm) */, ICryptoUtil_tEA2F437D9B00B90C615A408DF8D65EFA801E9ABC_il2cpp_TypeInfo_var, L_0, L_1, L_2, 1);
		return L_3;
	}
}
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeKeyedHash(Amazon.Runtime.SigningAlgorithm,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_ComputeKeyedHash_m24E0CFA1D3BC40CEBD6D8439375AE68C01FB26A1 (int32_t ___0_algorithm, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_key, String_t* ___2_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_algorithm;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_key;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_3 = ___2_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = AWS4Signer_ComputeKeyedHash_m21982238271887355FCD0EC929FEDF8CE6F7A33A(L_0, L_1, L_4, NULL);
		return L_5;
	}
}
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeKeyedHash(Amazon.Runtime.SigningAlgorithm,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_ComputeKeyedHash_m21982238271887355FCD0EC929FEDF8CE6F7A33A (int32_t ___0_algorithm, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoUtil_tEA2F437D9B00B90C615A408DF8D65EFA801E9ABC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CryptoUtilFactory_get_CryptoInstance_m480B9CD3759DE30A1A6649129C17227BBBD0200F_inline(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___2_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_key;
		int32_t L_3 = ___0_algorithm;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Byte[] Amazon.Util.ICryptoUtil::HMACSignBinary(System.Byte[],System.Byte[],Amazon.Runtime.SigningAlgorithm) */, ICryptoUtil_tEA2F437D9B00B90C615A408DF8D65EFA801E9ABC_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_ComputeHash_mB586790357AA02ACA787D309B13EE501CEA4729F (String_t* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___0_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = AWS4Signer_ComputeHash_m3A156055C5E75B2D6D4EC32AD7CA16D1BE05645C(L_2, NULL);
		return L_3;
	}
}
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4Signer_ComputeHash_m3A156055C5E75B2D6D4EC32AD7CA16D1BE05645C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICryptoUtil_tEA2F437D9B00B90C615A408DF8D65EFA801E9ABC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CryptoUtilFactory_get_CryptoInstance_m480B9CD3759DE30A1A6649129C17227BBBD0200F_inline(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = InterfaceFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Byte[] Amazon.Util.ICryptoUtil::ComputeSHA256Hash(System.Byte[]) */, ICryptoUtil_tEA2F437D9B00B90C615A408DF8D65EFA801E9ABC_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::SetPayloadSignatureHeader(Amazon.Runtime.Internal.IRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_SetPayloadSignatureHeader_mDA2416F62340CA3656B2FE1877A989B5BBDF6F86 (RuntimeObject* ___0_request, String_t* ___1_payloadHash, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349C30776190825203D5D07031D5CE4046D257B9);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_request;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::ContainsKey(TKey) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_1, _stringLiteral349C30776190825203D5D07031D5CE4046D257B9);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_3 = ___0_request;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_3);
		String_t* L_5 = ___1_payloadHash;
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_4, _stringLiteral349C30776190825203D5D07031D5CE4046D257B9, L_5);
		goto IL_0036;
	}

IL_0025:
	{
		RuntimeObject* L_6 = ___0_request;
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Headers() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_6);
		String_t* L_8 = ___1_payloadHash;
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::Add(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_7, _stringLiteral349C30776190825203D5D07031D5CE4046D257B9, L_8);
	}

IL_0036:
	{
		String_t* L_9 = ___1_payloadHash;
		return L_9;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::DetermineSigningRegion(Amazon.Runtime.IClientConfig,System.String,Amazon.RegionEndpoint,Amazon.Runtime.Internal.IRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_DetermineSigningRegion_m3D28209191EF6F4BC13908EAB71437327E802B17 (RuntimeObject* ___0_clientConfig, String_t* ___1_serviceName, RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* ___2_alternateEndpoint, RuntimeObject* ___3_request, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* V_1 = NULL;
	Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* V_2 = NULL;
	String_t* V_3 = NULL;
	Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* V_4 = NULL;
	RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* V_5 = NULL;
	{
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_0 = ___2_alternateEndpoint;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_1 = ___2_alternateEndpoint;
		String_t* L_2 = ___1_serviceName;
		RuntimeObject* L_3 = ___0_clientConfig;
		GetEndpointForServiceOptions_tCF2CF093692A49CABF3EA5D41829227D6D5F0210* L_4;
		L_4 = GetEndpointForServiceOptionsExtensions_ToGetEndpointForServiceOptions_m2283A9443F0FB4E9BEAB69C5C81DAE5BFD058EF8(L_3, NULL);
		Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* L_5;
		L_5 = RegionEndpoint_GetEndpointForService_mCA203A539CCB68EF369DB4E42B9680ADF3281F99(L_1, L_2, L_4, NULL);
		V_2 = L_5;
		Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* L_6 = V_2;
		String_t* L_7;
		L_7 = Endpoint_get_AuthRegion_m8776838411D7CE0DA6A0C2DF25D428134AC38FB5_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_0020;
		}
	}
	{
		Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* L_8 = V_2;
		String_t* L_9;
		L_9 = Endpoint_get_AuthRegion_m8776838411D7CE0DA6A0C2DF25D428134AC38FB5_inline(L_8, NULL);
		return L_9;
	}

IL_0020:
	{
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_10 = ___2_alternateEndpoint;
		String_t* L_11;
		L_11 = RegionEndpoint_get_SystemName_m0D8EFA9B44103D15C2DF34060BF5B2439883EBBC_inline(L_10, NULL);
		return L_11;
	}

IL_0027:
	{
		RuntimeObject* L_12 = ___0_clientConfig;
		String_t* L_13;
		L_13 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String Amazon.Runtime.IClientConfig::get_AuthenticationRegion() */, IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var, L_12);
		V_0 = L_13;
		RuntimeObject* L_14 = ___3_request;
		if (!L_14)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_15 = ___3_request;
		String_t* L_16;
		L_16 = InterfaceFuncInvoker0< String_t* >::Invoke(37 /* System.String Amazon.Runtime.Internal.IRequest::get_AuthenticationRegion() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_15);
		if (!L_16)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_17 = ___3_request;
		String_t* L_18;
		L_18 = InterfaceFuncInvoker0< String_t* >::Invoke(37 /* System.String Amazon.Runtime.Internal.IRequest::get_AuthenticationRegion() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_17);
		V_0 = L_18;
	}

IL_0040:
	{
		String_t* L_19 = V_0;
		bool L_20;
		L_20 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_19, NULL);
		if (L_20)
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_21 = V_0;
		String_t* L_22;
		L_22 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_21, NULL);
		return L_22;
	}

IL_004f:
	{
		RuntimeObject* L_23 = ___0_clientConfig;
		String_t* L_24;
		L_24 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Amazon.Runtime.IClientConfig::get_ServiceURL() */, IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var, L_23);
		bool L_25;
		L_25 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_24, NULL);
		if (L_25)
		{
			goto IL_0077;
		}
	}
	{
		RuntimeObject* L_26 = ___0_clientConfig;
		String_t* L_27;
		L_27 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String Amazon.Runtime.IClientConfig::get_ServiceURL() */, IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var, L_26);
		il2cpp_codegen_runtime_class_init_inline(AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		String_t* L_28;
		L_28 = AWSSDKUtils_DetermineRegion_mB3987BEAEC9FD28AAB6786872EE317F7E6BE3467(L_27, NULL);
		V_3 = L_28;
		String_t* L_29 = V_3;
		bool L_30;
		L_30 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_29, NULL);
		if (L_30)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_31 = V_3;
		String_t* L_32;
		L_32 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_31, NULL);
		return L_32;
	}

IL_0077:
	{
		RuntimeObject* L_33 = ___0_clientConfig;
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_34;
		L_34 = InterfaceFuncInvoker0< RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* >::Invoke(0 /* Amazon.RegionEndpoint Amazon.Runtime.IClientConfig::get_RegionEndpoint() */, IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var, L_33);
		V_1 = L_34;
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_35 = V_1;
		if (!L_35)
		{
			goto IL_00c1;
		}
	}
	{
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_36 = V_1;
		String_t* L_37 = ___1_serviceName;
		RuntimeObject* L_38 = ___0_clientConfig;
		GetEndpointForServiceOptions_tCF2CF093692A49CABF3EA5D41829227D6D5F0210* L_39;
		L_39 = GetEndpointForServiceOptionsExtensions_ToGetEndpointForServiceOptions_m2283A9443F0FB4E9BEAB69C5C81DAE5BFD058EF8(L_38, NULL);
		Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* L_40;
		L_40 = RegionEndpoint_GetEndpointForService_mCA203A539CCB68EF369DB4E42B9680ADF3281F99(L_36, L_37, L_39, NULL);
		V_4 = L_40;
		Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* L_41 = V_4;
		String_t* L_42;
		L_42 = Endpoint_get_AuthRegion_m8776838411D7CE0DA6A0C2DF25D428134AC38FB5_inline(L_41, NULL);
		bool L_43;
		L_43 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_42, NULL);
		if (L_43)
		{
			goto IL_00a6;
		}
	}
	{
		Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* L_44 = V_4;
		String_t* L_45;
		L_45 = Endpoint_get_AuthRegion_m8776838411D7CE0DA6A0C2DF25D428134AC38FB5_inline(L_44, NULL);
		return L_45;
	}

IL_00a6:
	{
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_46 = V_1;
		il2cpp_codegen_runtime_class_init_inline(RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1_il2cpp_TypeInfo_var);
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_47;
		L_47 = RegionEndpoint_GetRegionEndpointOverride_m35E252B7A7D8AB2E50BFDFBEB9FAC5BF606B173B(L_46, NULL);
		V_5 = L_47;
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_48 = V_5;
		if (!L_48)
		{
			goto IL_00ba;
		}
	}
	{
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_49 = V_5;
		String_t* L_50;
		L_50 = RegionEndpoint_get_SystemName_m0D8EFA9B44103D15C2DF34060BF5B2439883EBBC_inline(L_49, NULL);
		return L_50;
	}

IL_00ba:
	{
		RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* L_51 = V_1;
		String_t* L_52;
		L_52 = RegionEndpoint_get_SystemName_m0D8EFA9B44103D15C2DF34060BF5B2439883EBBC_inline(L_51, NULL);
		return L_52;
	}

IL_00c1:
	{
		String_t* L_53 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_53;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::DetermineService(Amazon.Runtime.IClientConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_DetermineService_m6126B49E5B1045D2D39A916BDB72A37148C082AF (RuntimeObject* ___0_clientConfig, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_clientConfig;
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String Amazon.Runtime.IClientConfig::get_AuthenticationServiceName() */, IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var, L_0);
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_3 = ___0_clientConfig;
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(23 /* System.String Amazon.Runtime.IClientConfig::DetermineServiceURL() */, IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var, L_3);
		il2cpp_codegen_runtime_class_init_inline(AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = AWSSDKUtils_DetermineService_m064D59D89DBF00D45262B3A5C7B78B546FB78C8A(L_4, NULL);
		return L_5;
	}

IL_0019:
	{
		RuntimeObject* L_6 = ___0_clientConfig;
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String Amazon.Runtime.IClientConfig::get_AuthenticationServiceName() */, IClientConfig_tA59D99604B00463A96D5449379F88B317D1FEBDA_il2cpp_TypeInfo_var, L_6);
		return L_7;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeRequest(System.Uri,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeRequest_mABDD64D192C79A6C24D4FF53A7D115FD5CE28D7F (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_endpoint, String_t* ___1_resourcePath, String_t* ___2_httpMethod, RuntimeObject* ___3_sortedHeaders, String_t* ___4_canonicalQueryString, String_t* ___5_precomputedBodyHash, RuntimeObject* ___6_pathResources, bool ___7_doubleEncode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___0_endpoint;
		String_t* L_1 = ___1_resourcePath;
		String_t* L_2 = ___2_httpMethod;
		RuntimeObject* L_3 = ___3_sortedHeaders;
		String_t* L_4 = ___4_canonicalQueryString;
		String_t* L_5 = ___5_precomputedBodyHash;
		RuntimeObject* L_6 = ___6_pathResources;
		bool L_7 = ___7_doubleEncode;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = AWS4Signer_CanonicalizeRequestHelper_m46C16171BDE9A434F3F5F67077E5DFEACB5963C0(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeRequestHelper(System.Uri,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeRequestHelper_m46C16171BDE9A434F3F5F67077E5DFEACB5963C0 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_endpoint, String_t* ___1_resourcePath, String_t* ___2_httpMethod, RuntimeObject* ___3_sortedHeaders, String_t* ___4_canonicalQueryString, String_t* ___5_precomputedBodyHash, RuntimeObject* ___6_pathResources, bool ___7_doubleEncode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral349C30776190825203D5D07031D5CE4046D257B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58D5B924304A0C60C698FE13AFF2ABF25760EF02);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		String_t* L_2 = ___2_httpMethod;
		StringBuilder_t* L_3;
		L_3 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_1, _stringLiteral58D5B924304A0C60C698FE13AFF2ABF25760EF02, L_2, NULL);
		StringBuilder_t* L_4 = V_0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_5 = ___0_endpoint;
		String_t* L_6 = ___1_resourcePath;
		bool L_7 = ___7_doubleEncode;
		RuntimeObject* L_8 = ___6_pathResources;
		il2cpp_codegen_runtime_class_init_inline(AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = AWSSDKUtils_CanonicalizeResourcePathV2_mDF32096996524E978839632DEE04084FB6DD58DB(L_5, L_6, L_7, L_8, NULL);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_4, _stringLiteral58D5B924304A0C60C698FE13AFF2ABF25760EF02, L_9, NULL);
		StringBuilder_t* L_11 = V_0;
		String_t* L_12 = ___4_canonicalQueryString;
		StringBuilder_t* L_13;
		L_13 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_11, _stringLiteral58D5B924304A0C60C698FE13AFF2ABF25760EF02, L_12, NULL);
		StringBuilder_t* L_14 = V_0;
		RuntimeObject* L_15 = ___3_sortedHeaders;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = AWS4Signer_CanonicalizeHeaders_m31F726AD26640DCF29279AF4FF32EA9DB6FC97F8(L_15, NULL);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_14, _stringLiteral58D5B924304A0C60C698FE13AFF2ABF25760EF02, L_16, NULL);
		StringBuilder_t* L_18 = V_0;
		RuntimeObject* L_19 = ___3_sortedHeaders;
		String_t* L_20;
		L_20 = AWS4Signer_CanonicalizeHeaderNames_mFF24FF56F0AE252D1D6DEF939458BC66F56D49FF(L_19, NULL);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_18, _stringLiteral58D5B924304A0C60C698FE13AFF2ABF25760EF02, L_20, NULL);
		String_t* L_22 = ___5_precomputedBodyHash;
		if (!L_22)
		{
			goto IL_006b;
		}
	}
	{
		StringBuilder_t* L_23 = V_0;
		String_t* L_24 = ___5_precomputedBodyHash;
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, L_24, NULL);
		goto IL_0082;
	}

IL_006b:
	{
		RuntimeObject* L_26 = ___3_sortedHeaders;
		bool L_27;
		L_27 = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_26, _stringLiteral349C30776190825203D5D07031D5CE4046D257B9, (&V_1));
		if (!L_27)
		{
			goto IL_0082;
		}
	}
	{
		StringBuilder_t* L_28 = V_0;
		String_t* L_29 = V_1;
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, L_29, NULL);
	}

IL_0082:
	{
		StringBuilder_t* L_31 = V_0;
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
		return L_32;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.Auth.AWS4Signer::SortAndPruneHeaders(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AWS4Signer_SortAndPruneHeaders_m56DE03A6A2F1B020B539DB8EBEBA0A3A60CE1DFC (RuntimeObject* ___0_requestHeaders, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_Add_mB88EBE0176EBDF6DA9B6DB57D44ADC9452FF97D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2__ctor_m8A1D5D72525D91D72EA883A27A32189A838CB169_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_0;
		L_0 = StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline(NULL);
		SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* L_1 = (SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE*)il2cpp_codegen_object_new(SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE_il2cpp_TypeInfo_var);
		SortedDictionary_2__ctor_m8A1D5D72525D91D72EA883A27A32189A838CB169(L_1, L_0, SortedDictionary_2__ctor_m8A1D5D72525D91D72EA883A27A32189A838CB169_RuntimeMethod_var);
		V_0 = L_1;
		RuntimeObject* L_2 = ___0_requestHeaders;
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_005a;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_005a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0047_1;
			}

IL_0014_1:
			{
				RuntimeObject* L_6 = V_1;
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_7;
				L_7 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
				RuntimeObject* L_8 = ((AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_StaticFields*)il2cpp_codegen_static_fields_for(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var))->____headersToIgnoreWhenSigning_2;
				String_t* L_9;
				L_9 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				bool L_10;
				L_10 = Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33(L_8, L_9, Enumerable_Contains_TisString_t_m903B1A64070B00925A8E4E7979330AA7D7B0FB33_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0047_1;
				}
			}
			{
				SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* L_11 = V_0;
				String_t* L_12;
				L_12 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_13;
				L_13 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_12, NULL);
				String_t* L_14;
				L_14 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				SortedDictionary_2_Add_mB88EBE0176EBDF6DA9B6DB57D44ADC9452FF97D0(L_11, L_13, L_14, SortedDictionary_2_Add_mB88EBE0176EBDF6DA9B6DB57D44ADC9452FF97D0_RuntimeMethod_var);
			}

IL_0047_1:
			{
				RuntimeObject* L_15 = V_1;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_005b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		SortedDictionary_2_t88BC45D286B79E3CA4D6095540E2E1E8333E70FE* L_17 = V_0;
		return L_17;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeHeaders(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeHeaders_m31F726AD26640DCF29279AF4FF32EA9DB6FC97F8 (RuntimeObject* ___0_sortedHeaders, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m3B24496B0D1EC19AA2B770FA28083DC3C4D562AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* G_B7_0 = NULL;
	StringBuilder_t* G_B7_1 = NULL;
	String_t* G_B6_0 = NULL;
	StringBuilder_t* G_B6_1 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t* G_B8_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_sortedHeaders;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_sortedHeaders;
		int32_t L_2;
		L_2 = Enumerable_Count_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m3B24496B0D1EC19AA2B770FA28083DC3C4D562AB(L_1, Enumerable_Count_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m3B24496B0D1EC19AA2B770FA28083DC3C4D562AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0011;
		}
	}

IL_000b:
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_3;
	}

IL_0011:
	{
		StringBuilder_t* L_4 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_4, NULL);
		V_0 = L_4;
		RuntimeObject* L_5 = ___0_sortedHeaders;
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_1;
					if (!L_7)
					{
						goto IL_0084;
					}
				}
				{
					RuntimeObject* L_8 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0084:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0071_1;
			}

IL_0020_1:
			{
				RuntimeObject* L_9 = V_1;
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_10;
				L_10 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_9);
				V_2 = L_10;
				StringBuilder_t* L_11 = V_0;
				String_t* L_12;
				L_12 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_13;
				L_13 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_12, NULL);
				StringBuilder_t* L_14;
				L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_13, NULL);
				StringBuilder_t* L_15 = V_0;
				StringBuilder_t* L_16;
				L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
				StringBuilder_t* L_17 = V_0;
				String_t* L_18;
				L_18 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
				String_t* L_19;
				L_19 = AWSSDKUtils_CompressSpaces_m719A9C6A270511B137EC159FC5CE6EE7E3B2F9BE(L_18, NULL);
				String_t* L_20 = L_19;
				G_B6_0 = L_20;
				G_B6_1 = L_17;
				if (L_20)
				{
					G_B7_0 = L_20;
					G_B7_1 = L_17;
					goto IL_005a_1;
				}
			}
			{
				G_B8_0 = ((String_t*)(NULL));
				G_B8_1 = G_B6_1;
				goto IL_005f_1;
			}

IL_005a_1:
			{
				String_t* L_21;
				L_21 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(G_B7_0, NULL);
				G_B8_0 = L_21;
				G_B8_1 = G_B7_1;
			}

IL_005f_1:
			{
				StringBuilder_t* L_22;
				L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B8_1, G_B8_0, NULL);
				StringBuilder_t* L_23 = V_0;
				StringBuilder_t* L_24;
				L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
			}

IL_0071_1:
			{
				RuntimeObject* L_25 = V_1;
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0085;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0085:
	{
		StringBuilder_t* L_27 = V_0;
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
		return L_28;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeHeaderNames(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeHeaderNames_mFF24FF56F0AE252D1D6DEF939458BC66F56D49FF (RuntimeObject* ___0_sortedHeaders, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_sortedHeaders;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0048:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_0051;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0051:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003e_1;
			}

IL_000f_1:
			{
				RuntimeObject* L_5 = V_1;
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_6;
				L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_5);
				V_2 = L_6;
				StringBuilder_t* L_7 = V_0;
				int32_t L_8;
				L_8 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_7, NULL);
				if ((((int32_t)L_8) <= ((int32_t)0)))
				{
					goto IL_002b_1;
				}
			}
			{
				StringBuilder_t* L_9 = V_0;
				StringBuilder_t* L_10;
				L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, NULL);
			}

IL_002b_1:
			{
				StringBuilder_t* L_11 = V_0;
				String_t* L_12;
				L_12 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_13;
				L_13 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_12, NULL);
				StringBuilder_t* L_14;
				L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, L_13, NULL);
			}

IL_003e_1:
			{
				RuntimeObject* L_15 = V_1;
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0052;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0052:
	{
		StringBuilder_t* L_17 = V_0;
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		return L_18;
	}
}
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> Amazon.Runtime.Internal.Auth.AWS4Signer::GetParametersToCanonicalize(Amazon.Runtime.Internal.IRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* AWS4Signer_GetParametersToCanonicalize_m7DC2E3B03D9EEAE862055419329B0E1400D21C30 (RuntimeObject* ___0_request, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m268F353D8C124F986AE459470FCC251B2EA733A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1DD9DCD8FD5763A2A6A5A9AE303917CE6E2F9C7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9FDA52CF503CD6CB3DC83E644D5198749E838052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetParametersToCanonicalizeU3Eb__60_0_mA26684DE732700EB193EB2CF9E530A987D07DD6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_3;
	memset((&V_3), 0, sizeof(V_3));
	Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* G_B15_0 = NULL;
	List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* G_B15_1 = NULL;
	Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* G_B14_0 = NULL;
	List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* G_B14_1 = NULL;
	{
		List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* L_0 = (List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981*)il2cpp_codegen_object_new(List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981_il2cpp_TypeInfo_var);
		List_1__ctor_m9FDA52CF503CD6CB3DC83E644D5198749E838052(L_0, List_1__ctor_m9FDA52CF503CD6CB3DC83E644D5198749E838052_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_request;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_SubResources() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_3 = ___0_request;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_SubResources() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var, L_4);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_6 = ___0_request;
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_SubResources() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_6);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_7);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_1;
					if (!L_9)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_10 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004a_1;
			}

IL_002a_1:
			{
				RuntimeObject* L_11 = V_1;
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_12;
				L_12 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_11);
				V_2 = L_12;
				List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* L_13 = V_0;
				String_t* L_14;
				L_14 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_15;
				L_15 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_16;
				memset((&L_16), 0, sizeof(L_16));
				KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B((&L_16), L_14, L_15, /*hidden argument*/KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B_RuntimeMethod_var);
				List_1_Add_m1DD9DCD8FD5763A2A6A5A9AE303917CE6E2F9C7E_inline(L_13, L_16, List_1_Add_m1DD9DCD8FD5763A2A6A5A9AE303917CE6E2F9C7E_RuntimeMethod_var);
			}

IL_004a_1:
			{
				RuntimeObject* L_17 = V_1;
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_002a_1;
				}
			}
			{
				goto IL_005e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		RuntimeObject* L_19 = ___0_request;
		bool L_20;
		L_20 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Amazon.Runtime.Internal.IRequest::get_UseQueryString() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_19);
		if (!L_20)
		{
			goto IL_00ea;
		}
	}
	{
		RuntimeObject* L_21 = ___0_request;
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Parameters() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_21);
		if (!L_22)
		{
			goto IL_00ea;
		}
	}
	{
		RuntimeObject* L_23 = ___0_request;
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.Generic.IDictionary`2<System.String,System.String> Amazon.Runtime.Internal.IRequest::get_Parameters() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_23);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, ICollection_1_t04D2931D016C60E8ED72CC2FBCEBBD24785F8A66_il2cpp_TypeInfo_var, L_24);
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_00ea;
		}
	}
	{
		RuntimeObject* L_26 = ___0_request;
		ParameterCollection_t83FCEAC6D1D9F537507E97CA698B4D654F8D7002* L_27;
		L_27 = InterfaceFuncInvoker0< ParameterCollection_t83FCEAC6D1D9F537507E97CA698B4D654F8D7002* >::Invoke(5 /* Amazon.Runtime.Internal.ParameterCollection Amazon.Runtime.Internal.IRequest::get_ParameterCollection() */, IRequest_t6D189B87D63D0416609FC0E3ACC6C1BB0FF5CE95_il2cpp_TypeInfo_var, L_26);
		List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* L_28;
		L_28 = ParameterCollection_GetSortedParametersList_mEFE9FDF1F0E7D9119663D84EC862AA3A7376C741(L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* L_29 = ((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9__60_0_2;
		Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* L_30 = L_29;
		G_B14_0 = L_30;
		G_B14_1 = L_28;
		if (L_30)
		{
			G_B15_0 = L_30;
			G_B15_1 = L_28;
			goto IL_00a9;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854* L_31 = ((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* L_32 = (Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1*)il2cpp_codegen_object_new(Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1_il2cpp_TypeInfo_var);
		Func_2__ctor_m612313685E65C8F88E36E0730D48C7BA57EB3D9A(L_32, L_31, (intptr_t)((void*)U3CU3Ec_U3CGetParametersToCanonicalizeU3Eb__60_0_mA26684DE732700EB193EB2CF9E530A987D07DD6A_RuntimeMethod_var), NULL);
		Func_2_t2A92972CAFF31538EA20B33D9A243AF2AE85D6D1* L_33 = L_32;
		((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9__60_0_2 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9__60_0_2), (void*)L_33);
		G_B15_0 = L_33;
		G_B15_1 = G_B14_1;
	}

IL_00a9:
	{
		RuntimeObject* L_34;
		L_34 = Enumerable_Where_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m268F353D8C124F986AE459470FCC251B2EA733A2(G_B15_1, G_B15_0, Enumerable_Where_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m268F353D8C124F986AE459470FCC251B2EA733A2_RuntimeMethod_var);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_34);
		V_1 = L_35;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e0:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_36 = V_1;
					if (!L_36)
					{
						goto IL_00e9;
					}
				}
				{
					RuntimeObject* L_37 = V_1;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_37);
				}

IL_00e9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d6_1;
			}

IL_00b6_1:
			{
				RuntimeObject* L_38 = V_1;
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_39;
				L_39 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_38);
				V_3 = L_39;
				List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* L_40 = V_0;
				String_t* L_41;
				L_41 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_3), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_42;
				L_42 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_3), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_43;
				memset((&L_43), 0, sizeof(L_43));
				KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B((&L_43), L_41, L_42, /*hidden argument*/KeyValuePair_2__ctor_mC76BE8DEB14377BA47C72BDFC7D0BBD37330F36B_RuntimeMethod_var);
				List_1_Add_m1DD9DCD8FD5763A2A6A5A9AE303917CE6E2F9C7E_inline(L_40, L_43, List_1_Add_m1DD9DCD8FD5763A2A6A5A9AE303917CE6E2F9C7E_RuntimeMethod_var);
			}

IL_00d6_1:
			{
				RuntimeObject* L_44 = V_1;
				bool L_45;
				L_45 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_44);
				if (L_45)
				{
					goto IL_00b6_1;
				}
			}
			{
				goto IL_00ea;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ea:
	{
		List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* L_46 = V_0;
		return L_46;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeQueryParameters(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeQueryParameters_m549B1209FBD3ED80F76482F6182235EA0EE41049 (RuntimeObject* ___0_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_parameters;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AWS4Signer_CanonicalizeQueryParameters_mCEE411D6BE73995FDA08C9015DC18FF67F155FF5(L_0, (bool)1, NULL);
		return L_1;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::CanonicalizeQueryParameters(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_CanonicalizeQueryParameters_mCEE411D6BE73995FDA08C9015DC18FF67F155FF5 (RuntimeObject* ___0_parameters, bool ___1_uriEncodeParameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_mB613AACED96325CD27E4C5D9C1CB921B811FA225_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m54CDADC1ABDA1680174C07D7C40BCFFF01CBD3E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC990FB0E03FA8FDAC285C3527EB3BEC5360DBE86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF68441CB01F1EB7376781A5507B694D350B9B650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m97E5367CAD3EEC99224C6FB827C43089DDE9F995_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCE85239031A0ADFF8D5593BE928AA88206FA448D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCanonicalizeQueryParametersU3Eb__64_0_mED5C0A8E500049E49610B45CFC2393F2EBDBCCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43B1425B3120ED4B8D4AD955B319BE8B5ACA487C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_parameters;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_0009:
	{
		RuntimeObject* L_2 = ___0_parameters;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* L_3 = ((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9__64_0_3;
		Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = L_2;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = L_2;
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854* L_5 = ((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* L_6 = (Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088*)il2cpp_codegen_object_new(Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088_il2cpp_TypeInfo_var);
		Func_2__ctor_m48BD5538630AB90CAACF2ADC165985AB743A6C30(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CCanonicalizeQueryParametersU3Eb__64_0_mED5C0A8E500049E49610B45CFC2393F2EBDBCCB5_RuntimeMethod_var), NULL);
		Func_2_t0FD9221539E762B3867B2E3B6D6B3F90C6483088* L_7 = L_6;
		((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9__64_0_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9__64_0_3), (void*)L_7);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
	}

IL_0029:
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_8;
		L_8 = StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline(NULL);
		RuntimeObject* L_9;
		L_9 = Enumerable_OrderBy_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_mB613AACED96325CD27E4C5D9C1CB921B811FA225(G_B4_1, G_B4_0, L_8, Enumerable_OrderBy_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_TisString_t_mB613AACED96325CD27E4C5D9C1CB921B811FA225_RuntimeMethod_var);
		List_1_t87A1ED4D78ECE907C8318C622227761AB2DBF981* L_10;
		L_10 = Enumerable_ToList_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m54CDADC1ABDA1680174C07D7C40BCFFF01CBD3E0(L_9, Enumerable_ToList_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m54CDADC1ABDA1680174C07D7C40BCFFF01CBD3E0_RuntimeMethod_var);
		StringBuilder_t* L_11 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_11, NULL);
		V_0 = L_11;
		Enumerator_t56DF6B4C5C84FBA76A0479A13290DF8C9C1E42D9 L_12;
		L_12 = List_1_GetEnumerator_mCE85239031A0ADFF8D5593BE928AA88206FA448D(L_10, List_1_GetEnumerator_mCE85239031A0ADFF8D5593BE928AA88206FA448D_RuntimeMethod_var);
		V_1 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC990FB0E03FA8FDAC285C3527EB3BEC5360DBE86((&V_1), Enumerator_Dispose_mC990FB0E03FA8FDAC285C3527EB3BEC5360DBE86_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00dc_1;
			}

IL_0049_1:
			{
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_13;
				L_13 = Enumerator_get_Current_m97E5367CAD3EEC99224C6FB827C43089DDE9F995_inline((&V_1), Enumerator_get_Current_m97E5367CAD3EEC99224C6FB827C43089DDE9F995_RuntimeMethod_var);
				V_2 = L_13;
				String_t* L_14;
				L_14 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				V_3 = L_14;
				String_t* L_15;
				L_15 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				V_4 = L_15;
				StringBuilder_t* L_16 = V_0;
				int32_t L_17;
				L_17 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_16, NULL);
				if ((((int32_t)L_17) <= ((int32_t)0)))
				{
					goto IL_0077_1;
				}
			}
			{
				StringBuilder_t* L_18 = V_0;
				StringBuilder_t* L_19;
				L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, NULL);
			}

IL_0077_1:
			{
				bool L_20 = ___1_uriEncodeParameters;
				if (!L_20)
				{
					goto IL_00b5_1;
				}
			}
			{
				String_t* L_21 = V_4;
				bool L_22;
				L_22 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_21, NULL);
				if (!L_22)
				{
					goto IL_0098_1;
				}
			}
			{
				StringBuilder_t* L_23 = V_0;
				String_t* L_24 = V_3;
				il2cpp_codegen_runtime_class_init_inline(AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
				String_t* L_25;
				L_25 = AWSSDKUtils_UrlEncode_mA1C6CD7D14F064E7424D62BCB1919DC44DF2BA5F(L_24, (bool)0, NULL);
				StringBuilder_t* L_26;
				L_26 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_23, _stringLiteral43B1425B3120ED4B8D4AD955B319BE8B5ACA487C, L_25, NULL);
				goto IL_00dc_1;
			}

IL_0098_1:
			{
				StringBuilder_t* L_27 = V_0;
				String_t* L_28 = V_3;
				il2cpp_codegen_runtime_class_init_inline(AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
				String_t* L_29;
				L_29 = AWSSDKUtils_UrlEncode_mA1C6CD7D14F064E7424D62BCB1919DC44DF2BA5F(L_28, (bool)0, NULL);
				String_t* L_30 = V_4;
				String_t* L_31;
				L_31 = AWSSDKUtils_UrlEncode_mA1C6CD7D14F064E7424D62BCB1919DC44DF2BA5F(L_30, (bool)0, NULL);
				StringBuilder_t* L_32;
				L_32 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_27, _stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A, L_29, L_31, NULL);
				goto IL_00dc_1;
			}

IL_00b5_1:
			{
				String_t* L_33 = V_4;
				bool L_34;
				L_34 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_33, NULL);
				if (!L_34)
				{
					goto IL_00cd_1;
				}
			}
			{
				StringBuilder_t* L_35 = V_0;
				String_t* L_36 = V_3;
				StringBuilder_t* L_37;
				L_37 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_35, _stringLiteral43B1425B3120ED4B8D4AD955B319BE8B5ACA487C, L_36, NULL);
				goto IL_00dc_1;
			}

IL_00cd_1:
			{
				StringBuilder_t* L_38 = V_0;
				String_t* L_39 = V_3;
				String_t* L_40 = V_4;
				StringBuilder_t* L_41;
				L_41 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_38, _stringLiteral0236BACCD260A20F0738D0E7EDBB60850D17B36A, L_39, L_40, NULL);
			}

IL_00dc_1:
			{
				bool L_42;
				L_42 = Enumerator_MoveNext_mF68441CB01F1EB7376781A5507B694D350B9B650((&V_1), Enumerator_MoveNext_mF68441CB01F1EB7376781A5507B694D350B9B650_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_0049_1;
				}
			}
			{
				goto IL_00f8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f8:
	{
		StringBuilder_t* L_43 = V_0;
		String_t* L_44;
		L_44 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_43);
		return L_44;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4Signer__cctor_mCD3188812F0115243904EF57DD194F1B5A6764D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E9C7EC66796179F504EE3E8DA0FCDDE429FCBEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25FCC4380EC995860B706F5058E2DB90D8821836);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3353E5A96E2E650A69A4720B16999C6F26194384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral534F0070064CF7E71A3C1755BC6024BF5DD8E5BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3994FC70D3F6DF4468C430CAF31A859A1E63619);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteral25FCC4380EC995860B706F5058E2DB90D8821836);
		((AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_StaticFields*)il2cpp_codegen_static_fields_for(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var))->___TerminatorBytes_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_StaticFields*)il2cpp_codegen_static_fields_for(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var))->___TerminatorBytes_1), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_2;
		L_2 = StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline(NULL);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_3 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F(L_3, L_2, HashSet_1__ctor_m795438439D8E973F4069A442EFA458942BCD5B3F_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_4 = L_3;
		bool L_5;
		L_5 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_4, _stringLiteral3353E5A96E2E650A69A4720B16999C6F26194384, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_6 = L_4;
		bool L_7;
		L_7 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_6, _stringLiteral0E9C7EC66796179F504EE3E8DA0FCDDE429FCBEA, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_8 = L_6;
		bool L_9;
		L_9 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_8, _stringLiteral534F0070064CF7E71A3C1755BC6024BF5DD8E5BD, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_10 = L_8;
		bool L_11;
		L_11 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_10, _stringLiteralA3994FC70D3F6DF4468C430CAF31A859A1E63619, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		((AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_StaticFields*)il2cpp_codegen_static_fields_for(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var))->____headersToIgnoreWhenSigning_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_StaticFields*)il2cpp_codegen_static_fields_for(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var))->____headersToIgnoreWhenSigning_2), (void*)L_10);
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
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m80BC8D2D1F958144E8E8BD8DF899C2DD2A6422DD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854* L_0 = (U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854*)il2cpp_codegen_object_new(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB6F99B09FD58B97C1D0A2594F3BA51EB2C8244E3(L_0, NULL);
		((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.AWS4Signer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB6F99B09FD58B97C1D0A2594F3BA51EB2C8244E3 (U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer/<>c::<SetXAmzTrailerHeader>b__33_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CSetXAmzTrailerHeaderU3Eb__33_0_mB69F391E3874BE9D3C823E03144CB1F2FDA02D75 (U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_key;
		return L_0;
	}
}
// System.Boolean Amazon.Runtime.Internal.Auth.AWS4Signer/<>c::<GetParametersToCanonicalize>b__60_0(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetParametersToCanonicalizeU3Eb__60_0_mA26684DE732700EB193EB2CF9E530A987D07DD6A (U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854* __this, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ___0_queryParameter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&___0_queryParameter), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		return (bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer/<>c::<CanonicalizeQueryParameters>b__64_0(System.Collections.Generic.KeyValuePair`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCanonicalizeQueryParametersU3Eb__64_0_mED5C0A8E500049E49610B45CFC2393F2EBDBCCB5 (U3CU3Ec_tFD6B5AAAC95F6F2E08BD40ADE3832B8D717FB854* __this, KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ___0_kvp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&___0_kvp), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
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
// System.Void Amazon.Runtime.Internal.Auth.AWS4SigningResult::.ctor(System.String,System.DateTime,System.String,System.String,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWS4SigningResult__ctor_m51505F2656D83286A4936721C8403EF97531792F (AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* __this, String_t* ___0_awsAccessKeyId, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_signedAt, String_t* ___2_signedHeaders, String_t* ___3_scope, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_signingKey, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_signature, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_awsAccessKeyId;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___1_signedAt;
		String_t* L_2 = ___2_signedHeaders;
		String_t* L_3 = ___3_scope;
		AWSSigningResultBase__ctor_mC6D5214AEA8373E5D67A3C51004B3F7BC800FF28(__this, L_0, L_1, L_2, L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_signingKey;
		__this->____signingKey_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____signingKey_4), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___5_signature;
		__this->____signature_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____signature_5), (void*)L_5);
		return;
	}
}
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4SigningResult::GetSigningKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AWS4SigningResult_GetSigningKey_m504B4F5F9D0EEEB0FE2EC6ECE62EABC98FA3749C (AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____signingKey_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____signingKey_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_2, (RuntimeArray*)L_3, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		return L_4;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4SigningResult::get_Signature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4SigningResult_get_Signature_mD6A9FEB602F7A05C22AB432F22094073F1295D2A (AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____signature_5;
		il2cpp_codegen_runtime_class_init_inline(AWSSDKUtils_t5A33A4E4727A44C5D536D03E178A07EEE7A709EF_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AWSSDKUtils_ToHex_mFD2A4519380CE6862DB14F693869B6A3B0E705F0(L_0, (bool)1, NULL);
		return L_1;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWS4SigningResult::get_ForAuthorizationHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4SigningResult_get_ForAuthorizationHeader_mBFA882919446478ADAB263A30C4F62B5824FA4D0 (AWS4SigningResult_tB3F80747BB285C9B0F7A17B12607E98E039C4BA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BDC2A3BF3E3C505BA95E684745BFD1081984CEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D82FDE4C847852D4BB70BD929BEE1EC32E8090F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48FDBA926702C37CD7BE2216A1E30639A0CDC219);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54410F787AFA08038634B055933A63784C4AD055);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CD337B22835C324B3CCEC7101A6D1DE5586E821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB03C358CB2986D2DDE67DBD4354355401D1C524D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE2892956422830EFD61D6B1C95A865ED0BDFF66);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral3BDC2A3BF3E3C505BA95E684745BFD1081984CEE, NULL);
		String_t* L_2;
		L_2 = AWSSigningResultBase_get_AccessKeyId_m947D2F902046D8DB4834E852E81CADFDB6FFE164_inline(__this, NULL);
		String_t* L_3;
		L_3 = AWSSigningResultBase_get_Scope_mF912EE682BAA82712229527CB1629FA8A6130118_inline(__this, NULL);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_AppendFormat_m40962B9C5B41720C6424721E526C0D99D95112A2(L_1, _stringLiteral54410F787AFA08038634B055933A63784C4AD055, _stringLiteral9CD337B22835C324B3CCEC7101A6D1DE5586E821, L_2, L_3, NULL);
		String_t* L_5;
		L_5 = AWSSigningResultBase_get_SignedHeaders_mC00B6C6690FA64D17BD34588537D2EB92547E641_inline(__this, NULL);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_4, _stringLiteralB03C358CB2986D2DDE67DBD4354355401D1C524D, _stringLiteral3D82FDE4C847852D4BB70BD929BEE1EC32E8090F, L_5, NULL);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::get_Signature() */, __this);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_6, _stringLiteral48FDBA926702C37CD7BE2216A1E30639A0CDC219, _stringLiteralCE2892956422830EFD61D6B1C95A865ED0BDFF66, L_7, NULL);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
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
// System.Void Amazon.Runtime.Internal.Auth.AWSSigningResultBase::.ctor(System.String,System.DateTime,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AWSSigningResultBase__ctor_mC6D5214AEA8373E5D67A3C51004B3F7BC800FF28 (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, String_t* ___0_awsAccessKeyId, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_signedAt, String_t* ___2_signedHeaders, String_t* ___3_scope, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_awsAccessKeyId;
		__this->____awsAccessKeyId_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____awsAccessKeyId_0), (void*)L_0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___1_signedAt;
		__this->____originalDateTime_1 = L_1;
		String_t* L_2 = ___2_signedHeaders;
		__this->____signedHeaders_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____signedHeaders_2), (void*)L_2);
		String_t* L_3 = ___3_scope;
		__this->____scope_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____scope_3), (void*)L_3);
		return;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::get_AccessKeyId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSigningResultBase_get_AccessKeyId_m947D2F902046D8DB4834E852E81CADFDB6FFE164 (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____awsAccessKeyId_0;
		return L_0;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::get_ISO8601DateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSigningResultBase_get_ISO8601DateTime_m9BC3F8A2DA8604E7F826D73781C8E145D3014DFD (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral582765B03715A02BBC7B5EED58622E5BC0125B11);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->____originalDateTime_1;
		il2cpp_codegen_runtime_class_init_inline(AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = AWS4Signer_FormatDateTime_m1DFE05164B31E3996F52E2A46146F37FFD8E7083(L_0, _stringLiteral582765B03715A02BBC7B5EED58622E5BC0125B11, NULL);
		return L_1;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::get_SignedHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSigningResultBase_get_SignedHeaders_mC00B6C6690FA64D17BD34588537D2EB92547E641 (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____signedHeaders_2;
		return L_0;
	}
}
// System.String Amazon.Runtime.Internal.Auth.AWSSigningResultBase::get_Scope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSigningResultBase_get_Scope_mF912EE682BAA82712229527CB1629FA8A6130118 (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____scope_3;
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
// System.Void Amazon.Runtime.Internal.Auth.NullSigner::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullSigner_Sign_m30258E0EC75C982C730BDE2113B7AA54BF82BF58 (NullSigner_t87F092C8606EB3746ED9A27D06CEF80438299B09* __this, RuntimeObject* ___0_request, RuntimeObject* ___1_clientConfig, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___2_metrics, String_t* ___3_awsAccessKeyId, String_t* ___4_awsSecretAccessKey, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Amazon.Runtime.Internal.Auth.NullSigner::Sign(Amazon.Runtime.Internal.IRequest,Amazon.Runtime.IClientConfig,Amazon.Runtime.Internal.Util.RequestMetrics,Amazon.Runtime.ImmutableCredentials)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullSigner_Sign_mE81B04BDC1492AF7849FFDE962CD400C8E62FADA (NullSigner_t87F092C8606EB3746ED9A27D06CEF80438299B09* __this, RuntimeObject* ___0_request, RuntimeObject* ___1_clientConfig, RequestMetrics_t95DC653E0DD1F0BFBB7A40AE7725DE9C0BA6D0A0* ___2_metrics, ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* ___3_credentials, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Amazon.Runtime.Internal.Auth.ClientProtocol Amazon.Runtime.Internal.Auth.NullSigner::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullSigner_get_Protocol_mDB4F4C063DB942B5AB81AA59CD9F8E32D3D7264D (NullSigner_t87F092C8606EB3746ED9A27D06CEF80438299B09* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(2);
	}
}
// System.Void Amazon.Runtime.Internal.Auth.NullSigner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullSigner__ctor_m530DF8D2C1939A860728DFC52DF4C8CEF3FA6C41 (NullSigner_t87F092C8606EB3746ED9A27D06CEF80438299B09* __this, const RuntimeMethod* method) 
{
	{
		AbstractAWSSigner__ctor_mB0D1954B89CFFB73FCB18CDC714E564DF63C72BE(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ImmutableCredentials_get_AccessKey_mBF672760A7AC36490FBC39823E6DEC97CC2C5B60_inline (ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAccessKeyU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ImmutableCredentials_get_SecretKey_mA30FA197B4999D45EEAB0BACA81392FF0CF8CD53_inline (ImmutableCredentials_t20F26830AEF4C9021AA24C0970E1D9FBFF34279D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSecretKeyU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AWSSigningResultBase_get_AccessKeyId_m947D2F902046D8DB4834E852E81CADFDB6FFE164_inline (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____awsAccessKeyId_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AWSSigningResultBase_get_Scope_mF912EE682BAA82712229527CB1629FA8A6130118_inline (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____scope_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AWSSigningResultBase_get_SignedHeaders_mC00B6C6690FA64D17BD34588537D2EB92547E641_inline (AWSSigningResultBase_t415171FF4AB2C44288C2A269939BF3D63FFA18B3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____signedHeaders_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AWS4Signer_set_SignPayload_m99608D12201744D0B14448FE2BEE6132DBA9016D_inline (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CSignPayloadU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AWS4Signer_get_SignPayload_m019994B3575C8E063ADF85D02D1D48235AE93AC5_inline (AWS4Signer_t0161629F5345364A4DC50C5CFB14CFC2CBFE9CF1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CSignPayloadU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CryptoUtilFactory_get_CryptoInstance_m480B9CD3759DE30A1A6649129C17227BBBD0200F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var);
		CryptoUtil_t13570CB5CB1744BBAC1B24F4DD536266584BF222* L_0 = ((CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_StaticFields*)il2cpp_codegen_static_fields_for(CryptoUtilFactory_tEAF28D84DAF8D88372B5AE11C6042482DE4FFA8E_il2cpp_TypeInfo_var))->___util_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Endpoint_get_AuthRegion_m8776838411D7CE0DA6A0C2DF25D428134AC38FB5_inline (Endpoint_t0F23E015FDD330736B75DAFB15AA7F91497854F3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAuthRegionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RegionEndpoint_get_SystemName_m0D8EFA9B44103D15C2DF34060BF5B2439883EBBC_inline (RegionEndpoint_tDA5A44B1471EF8D48E96851B5A518775330D1CE1* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSystemNameU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_Ordinal_m77A8C28E78759556E06A6925E949737A45599E26_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_ordinal_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_ordinalIgnoreCase_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m8DDAFA7A565FBEEB8C312BF1E890AB978D3760AE_gshared_inline (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_item, const RuntimeMethod* method) 
{
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_6 = V_0;
		int32_t L_7 = V_1;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)L_8);
		return;
	}

IL_0034:
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_9 = ___0_item;
		((  void (*) (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_m2E99DFD369025C91E4B23FA90EE17A41271106A4_gshared_inline (Enumerator_t81E3046D0BB629D86FAC325CBBF319731C3E36A4* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = __this->____current_3;
		return L_0;
	}
}
