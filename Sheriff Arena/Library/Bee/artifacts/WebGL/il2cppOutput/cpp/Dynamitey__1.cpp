#include "pch-cpp.hpp"

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

// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`2<System.Runtime.CompilerServices.CallSiteBinder,System.Runtime.CompilerServices.CallSite>>
struct CacheDict_2_t51D4B7C0FC5BE04893EE3AD20CA06419A2F6C532;
// System.Runtime.CompilerServices.CallSite`1<<>A`17<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_t1BC205DD3B79347DE9565E08DBE59C50D8882026;
// System.Runtime.CompilerServices.CallSite`1<<>A`18<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_tFC6CF9923C44E705632FB596CC7E5D92D4B5E42B;
// System.Runtime.CompilerServices.CallSite`1<<>F`18<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_tF1F5DBD040108CEAF1CE399C359642877099695A;
// System.Runtime.CompilerServices.CallSite`1<<>F`19<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_t961FAC41CABC3C2EFC502CE01B0336601D07C67D;
// System.Runtime.CompilerServices.CallSite`1<System.Action`10<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_tD0C28735D1408FB97C003E7FB573D328CEC64DEA;
// System.Runtime.CompilerServices.CallSite`1<System.Action`11<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_t89E77D5078E05DA5FBF5ED1F15657B2A6F1DB63E;
// System.Runtime.CompilerServices.CallSite`1<System.Action`12<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_t95ABDACB5C636C88E1A41D455339DC04D97B91C5;
// System.Runtime.CompilerServices.CallSite`1<System.Action`13<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_tF361F7608D31729C2E6B23BC0906F5A1A6E48464;
// System.Runtime.CompilerServices.CallSite`1<System.Action`14<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_t9BDA48FF2F82A4E7FAF8AF2C943970FA13F42487;
// System.Runtime.CompilerServices.CallSite`1<System.Action`15<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_t75A6460755B7023715235A89919789842BE5F15B;
// System.Runtime.CompilerServices.CallSite`1<System.Action`16<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_tB4D74BBE5E948DE1F534B79F77A46E4000B6F094;
// System.Runtime.CompilerServices.CallSite`1<System.Action`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Object>>
struct CallSite_1_tB6FB66A80DB17763551C54C486FE5355859D0388;
// System.Runtime.CompilerServices.CallSite`1<System.Action`4<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object>>
struct CallSite_1_t42B42DC1BE1A1122753E3B41CB4C764D4DC626DE;
// System.Runtime.CompilerServices.CallSite`1<System.Action`5<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_tB98140E6192B559D3938C0074AF448DD38E2EF98;
// System.Runtime.CompilerServices.CallSite`1<System.Action`6<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_tC8736518C349CB6B2FD733E5A45C8A1773D9ECF1;
// System.Runtime.CompilerServices.CallSite`1<System.Action`7<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_t573C659BBEFF7DD6FD5A1BA73D42CBF6996A2F66;
// System.Runtime.CompilerServices.CallSite`1<System.Action`8<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_t288911616D5E7830BDBB4955F2AECA3104EC43B3;
// System.Runtime.CompilerServices.CallSite`1<System.Action`9<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_tEB4A220DD0AA901D245B3CCA5BAD3C0A46251BA9;
// System.Runtime.CompilerServices.CallSite`1<System.Func`10<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_t68073181FE65FB8A5CEA1AB8FC2A9E0E92FD7BEA;
// System.Runtime.CompilerServices.CallSite`1<System.Func`11<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_t117886D3F66BEC85C5294F86673474C0F5BA6EB3;
// System.Runtime.CompilerServices.CallSite`1<System.Func`12<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_t99EE35EDBCE15759EF57FA7552916216A28E206A;
// System.Runtime.CompilerServices.CallSite`1<System.Func`13<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_tED78AE80BE741B2832A4CB3E731CA29550182F75;
// System.Runtime.CompilerServices.CallSite`1<System.Func`14<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_t08C874B4515EB52AE1E99358E76E0C89ABF22A70;
// System.Runtime.CompilerServices.CallSite`1<System.Func`15<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_tA1A401A50D6F53888FC1B9B06647445780B51B87;
// System.Runtime.CompilerServices.CallSite`1<System.Func`16<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_tF8B06DF53D207B0A5F0B949FBFE568DF46F9E364;
// System.Runtime.CompilerServices.CallSite`1<System.Func`17<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_t2FB2969EBB88AAF14FC58DB0CFA75246286F398D;
// System.Runtime.CompilerServices.CallSite`1<System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Collections.Generic.IList`1<System.Type>>>
struct CallSite_1_t08E2DD601A1F45A70F279694431BBEAC2A9B6860;
// System.Runtime.CompilerServices.CallSite`1<System.Func`4<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object>>
struct CallSite_1_tAE0C20B82A89B7BB706AC7FB6A61D843B1E0550C;
// System.Runtime.CompilerServices.CallSite`1<System.Func`5<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_t297C82C7931E3CC8CCA8F6EAF4F1A1CBEC46C9C2;
// System.Runtime.CompilerServices.CallSite`1<System.Func`6<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_t196BCC8B831DCFD8184983FAE61803D10A1A251E;
// System.Runtime.CompilerServices.CallSite`1<System.Func`7<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_t81EDE248266D9795CA0D9B01E19EB2B0224FF212;
// System.Runtime.CompilerServices.CallSite`1<System.Func`8<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_tCBCD14F8BDBF25FB296387455B5C3F2218B51F7F;
// System.Runtime.CompilerServices.CallSite`1<System.Func`9<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>>
struct CallSite_1_t1DBD7620771D64803728FD010DFCD0734794BCBB;
// System.Runtime.CompilerServices.CallSite`1<System.Object>
struct CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_tF42287527472FA89789873F068A87C60A00EC7D3;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Object>
struct Func_2_t4A01D2AA8192C3CEBF056C3C8E056D02A2E65D94;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>
struct Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B;
// System.Func`2<Dynamitey.DynamicObjects.FauxType,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_tE0CD4277724BFD2E4034DD2248C4744F355414DF;
// System.Func`2<System.Reflection.MemberInfo,System.Type>
struct Func_2_t204C3EA5E87F5C75AEBFB3A6905D13C36E6D77ED;
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.String,Dynamitey.InvokeMemberName>
struct Func_2_t1C4C4826AAEE2546A0B758C64907B4F17F52D7DB;
// System.Func`2<System.Type,Dynamitey.InvokeContext>
struct Func_2_t2E1096262AB59EC17ECDF994BF3F265F9AFF719E;
// System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Collections.Generic.IList`1<System.Type>>
struct Func_3_t3CEC7A6511B4D5CE29409D3111C2104016115D96;
// System.Func`3<System.Object,System.Object,Dynamitey.InvokeContext>
struct Func_3_t44251101DD0306EB864A4BCA47B8A83C5A538613;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566;
// System.Func`3<System.String,System.Type[],Dynamitey.InvokeMemberName>
struct Func_3_tB9572AF27A112C8867960178BAE296CD9C03DE10;
// System.Func`3<System.String,System.Object,Dynamitey.InvokeArg>
struct Func_3_t5756650A727B10760AF253CD0397F47DDA93DA0D;
// System.Func`3<System.String,System.Object,System.Object>
struct Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0;
// System.Func`3<System.Type,System.Object,Dynamitey.InvokeContext>
struct Func_3_t7D8D71FEB104A9B9BA06D7CAB2B1D9F507C2C438;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IDictionary`2<System.String,System.Type>
struct IDictionary_2_t9222FF77FD169B7564BBDA58BE88E87907959D49;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerable_1_t1F32F711C91AEBCFA4770668CA067447D2A4F665;
// System.Collections.Generic.IEnumerable`1<Dynamitey.DynamicObjects.FauxType>
struct IEnumerable_1_tADEEF1ED52CC75FB4F1CF3AF6D9802B1A262F59D;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_t9BFC4EA32B04B96A5BB13A056B7E299ADC431143;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t913F242211877D391217C9D75152235266FDAF10;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB;
// System.Collections.Generic.IList`1<System.Type>
struct IList_1_t421C938039F8E10BD0A70BD6EBF5552B97B1D3F1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<Dynamitey.DynamicObjects.FauxType>
struct List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Collections.Generic.IList`1<System.Type>>[]
struct Func_3U5BU5D_tCE6F2C7E4825CDDD1BF5569C7ED1266E00D6DC36;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_tB0707823AD77DFC250A1B32BFDE51BCC2B93F6B1;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Dynamitey.DynamicObjects.FauxType[]
struct FauxTypeU5BU5D_tB282B1E2D60B569101A9B95FC8A5EB5B6D77D9C3;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Dynamitey.DynamicObjects.AggreType
struct AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF;
// System.Reflection.Assembly
struct Assembly_t;
// Dynamitey.DynamicObjects.BaseDictionary
struct BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50;
// Dynamitey.DynamicObjects.BaseForwarder
struct BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD;
// Dynamitey.DynamicObjects.BaseObject
struct BaseObject_t25653403C4D95C64840D5F2ADF5290D36025FB04;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Dynamic.CallInfo
struct CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC;
// System.Runtime.CompilerServices.CallSite
struct CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF;
// System.Runtime.CompilerServices.CallSiteBinder
struct CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Dynamitey.DynamicObjects.Dictionary
struct Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD;
// System.Dynamic.DynamicObject
struct DynamicObject_tD0DC19F06E5F1E72197D131DB0CE792102F6DD69;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// Dynamitey.DynamicObjects.FauxType
struct FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86;
// Dynamitey.DynamicObjects.Get
struct Get_tB559CB2E572ECAB626FF27F8463C2E55DF640A21;
// System.Dynamic.GetIndexBinder
struct GetIndexBinder_t1D53762D30B3AF1DABB042424B93BE4726D176E2;
// System.Dynamic.GetMemberBinder
struct GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Dynamitey.DynamicObjects.IEquivalentType
struct IEquivalentType_t33B5C606F9F867E9CE74E9DB45C40696D8343636;
// Dynamitey.InvokeArg
struct InvokeArg_tE827CC3B458B4D4169D7BC9EE005167217A19F03;
// System.Dynamic.InvokeBinder
struct InvokeBinder_tC5AB6E0A532F16789BA5B26EA123C0DD75F8D44B;
// Dynamitey.InvokeContext
struct InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB;
// System.Dynamic.InvokeMemberBinder
struct InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE;
// Dynamitey.InvokeMemberName
struct InvokeMemberName_t15017A0A53860EC61EE428B9C66FE4B2EBFF9F72;
// System.Linq.Expressions.LabelTarget
struct LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5;
// Dynamitey.DynamicObjects.LateType
struct LateType_tA079B0D243F1D6F188FB9C7EBB8D629524DF4758;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// Dynamitey.DynamicObjects.PropretySpecType
struct PropretySpecType_t1AF7BB23D8D79BB759AEEFDD2887CB627D331972;
// Dynamitey.DynamicObjects.RealType
struct RealType_tB10C428C5A3138D31306D717B61BD9DB5D94D6E2;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// Dynamitey.DynamicObjects.RegexMatch
struct RegexMatch_t17D190C75B8B6217F657D4BD019C2F72D28D5EA8;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Dynamic.SetIndexBinder
struct SetIndexBinder_t89B08F3E4022E4855941688FDEB172820F355898;
// System.Dynamic.SetMemberBinder
struct SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F;
// System.String
struct String_t;
// Dynamitey.String_OR_InvokeMemberName
struct String_OR_InvokeMemberName_t6EF40A30315B5B7E1DC61E408E133EE42AA72ACD;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Dynamitey.DynamicObjects.AggreType/<>c
struct U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7;
// Dynamitey.DynamicObjects.BaseDictionary/<>c
struct U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983;
// Dynamitey.DynamicObjects.BaseForwarder/AddRemoveMarker
struct AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE;
// Dynamitey.DynamicObjects.BaseObject/<>c
struct U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_tE0DE36700D110F4D267B26686541ABCF9588A6DD;
// Dynamitey.DynamicObjects.LateType/MissingTypeException
struct MissingTypeException_t1E17592BE936E2955F2DF09792F124CB43E7A7F3;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// Dynamitey.Internal.Optimization.Util/<>c
struct U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02;

IL2CPP_EXTERN_C RuntimeClass* AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FauxTypeU5BU5D_tB282B1E2D60B569101A9B95FC8A5EB5B6D77D9C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t204C3EA5E87F5C75AEBFB3A6905D13C36E6D77ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t4A01D2AA8192C3CEBF056C3C8E056D02A2E65D94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE0CD4277724BFD2E4034DD2248C4744F355414DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t7FAFDB77857BA6F1396E710E9F065944B2183233_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t9222FF77FD169B7564BBDA58BE88E87907959D49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t1F32F711C91AEBCFA4770668CA067447D2A4F665_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEquivalentType_t33B5C606F9F867E9CE74E9DB45C40696D8343636_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Invocation_tC90ECCB31F666B45C74B4B46C0B511123549B280_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokeArg_tE827CC3B458B4D4169D7BC9EE005167217A19F03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokeHelper_tA25ABC5A6EC0BD7ED13472FE1C2F0860DFF00285_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokeMemberName_t15017A0A53860EC61EE428B9C66FE4B2EBFF9F72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingTypeException_t1E17592BE936E2955F2DF09792F124CB43E7A7F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RealType_tB10C428C5A3138D31306D717B61BD9DB5D94D6E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeInfoU5BU5D_t1DFAC07F3379698BE8870D7D24D55C4C1AC5FD29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral338D5E4AE706E512E35E1465CB650855F31990DD;
IL2CPP_EXTERN_C String_t* _stringLiteral41EB7338111709DC5E46F0211FFBFE58571FEA59;
IL2CPP_EXTERN_C String_t* _stringLiteral4F2AE0F8116A589D6CEEBB73DD63F49B8D58E21C;
IL2CPP_EXTERN_C String_t* _stringLiteral5548A8DDDD64722139CF874E322F3F45EA36C975;
IL2CPP_EXTERN_C String_t* _stringLiteralA18A4AE569C5BE88A9C406093C040EFEBFF78C5E;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisFauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86_mE478842AF508E12F2A140B55980C2C9D03DD8D8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CallSite_1_Create_m2ADA39A0277EC8AE511F2EDD854A6D8B4177A98E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisType_t_m73AC0FF907FFC6B1E9B1C9E8804176B00EB92517_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisString_t_mC58E08B0186F31393203A866448A3AAA85C67544_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisType_t_mD8A85ED5733DC32184233D1882A8CBD751581690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Distinct_TisString_t_m1E99E758E2A5605D0EE48F5715C69AF1096BF99B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Empty_TisMemberInfo_t_m25BAFD2F6D0B64D99A07C8770CB779A4ECB34418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Empty_TisString_t_mBCB5B53D37C4DA21A03B6730942638F3E389DD63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Repeat_TisString_t_m291B65F038E32131C2534140BBAC0A121AA9BC64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisFauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86_TisType_t_mECA1F4E2FB1C9E14D74F3DA06119450F92657C7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisMemberInfo_t_TisType_t_m02A4A1586E121F208524412843D2E73E75B82ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisKeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_TisString_t_TisRuntimeObject_mD331ACC85009F2F37195D718970488D86AA211FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Zip_TisString_t_TisRuntimeObject_TisRuntimeObject_mE8E2428182274C3BC87CEAA55024E87CA88FC522_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0C7004ACD74285B480FA6DE748AC5A260A415ED1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD6E325FCC3C2467FAF1C23BFE4666CFDF00CB0A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0CA2399ADC967AC7554F9FDB9679FDE2A848B5D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBC2EB7D8749DC009864CA4499CBE1D84C113A877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAD58F87B7555C5070EBC1CD56E47C3F31A178B17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC76F3D6F8869AD0D1C9E09E20DE482F801DACD84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LateType_FindType_mC4CD0E09B1D384E02DE1454E1039F640C4145229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LateType_get_CallTarget_m27ED5931441061DF8F4A8651FBE37A7728FE4B2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m6D75A0E374C1D91A18F1B72A1C70632B8C12DA7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mFDD370E143C78AA5DA55A6DD602C5B96A81B5341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m918D30D75664D37434BD6DE15A1FC487617724D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m30603AACB4C3760ED1E30E53E123FDDB1A5647B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEC612F84FB94B6F1C05FE389B40AC2BF5AECCC59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1ECCAADF7DB1972688A2B429816CF4E0581D4E2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB8AB20FCB8FF55B260DB5C27CA726B641F38F31B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Count_mA3AE220565D02224E32753A0186DC33E5C7DD388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetContainedTypesU3Eb__8_0_m5844074FBBEACADA0A42E55CE66BE5FB61CF9F5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CNameArgsIfNecessaryU3Eb__3_0_m2FFA46107FD0A9A291EC8E334637E70C8C9671C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CTryTypeForNameU3Eb__1_0_mD1E5F245135B305940B842169956BA1EBFBD83EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__1_0_m38863A1CCCF725744ADEAA7D7FAFAA1732DA399D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__1_1_m2BC358719CD036899D7533D07BA3FA1290EF9A71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Util__cctor_m847DF00D2CC9463E295327A4CDDAA2108C74A0DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CompilerGeneratedAttribute_t0153EC5D2142E566E2D896C49F598756BCAEE771_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Delegate_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IList_1_t421C938039F8E10BD0A70BD6EBF5552B97B1D3F1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_tB0707823AD77DFC250A1B32BFDE51BCC2B93F6B1;
struct FauxTypeU5BU5D_tB282B1E2D60B569101A9B95FC8A5EB5B6D77D9C3;
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct TypeInfoU5BU5D_t1DFAC07F3379698BE8870D7D24D55C4C1AC5FD29;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Linq.EmptyEnumerable`1<System.Object>
struct EmptyEnumerable_1_t8C8873EF4F89FB0F86D91BA5B4D640E3A23AD28E  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<Dynamitey.DynamicObjects.FauxType>
struct List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FauxTypeU5BU5D_tB282B1E2D60B569101A9B95FC8A5EB5B6D77D9C3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* ____items_1;
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

// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
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

// System.Dynamic.CallInfo
struct CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC  : public RuntimeObject
{
	// System.Int32 System.Dynamic.CallInfo::<ArgumentCount>k__BackingField
	int32_t ___U3CArgumentCountU3Ek__BackingField_0;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> System.Dynamic.CallInfo::<ArgumentNames>k__BackingField
	ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C* ___U3CArgumentNamesU3Ek__BackingField_1;
};

// System.Runtime.CompilerServices.CallSite
struct CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF  : public RuntimeObject
{
	// System.Runtime.CompilerServices.CallSiteBinder System.Runtime.CompilerServices.CallSite::_binder
	CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* ____binder_1;
	// System.Boolean System.Runtime.CompilerServices.CallSite::_match
	bool ____match_2;
};

// System.Runtime.CompilerServices.CallSiteBinder
struct CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> System.Runtime.CompilerServices.CallSiteBinder::Cache
	Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5* ___Cache_0;
};

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
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

// System.Dynamic.DynamicObject
struct DynamicObject_tD0DC19F06E5F1E72197D131DB0CE792102F6DD69  : public RuntimeObject
{
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// Dynamitey.DynamicObjects.FauxType
struct FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86  : public RuntimeObject
{
};

// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E  : public RuntimeObject
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.GroupCollection::_match
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ____match_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.GroupCollection::_captureMap
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____captureMap_1;
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::_groups
	GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9* ____groups_2;
};

// Dynamitey.Invocation
struct Invocation_tC90ECCB31F666B45C74B4B46C0B511123549B280  : public RuntimeObject
{
};

// Dynamitey.InvokeArg
struct InvokeArg_tE827CC3B458B4D4169D7BC9EE005167217A19F03  : public RuntimeObject
{
	// System.String Dynamitey.InvokeArg::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.Object Dynamitey.InvokeArg::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_2;
};

// Dynamitey.InvokeContext
struct InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB  : public RuntimeObject
{
	// System.Object Dynamitey.InvokeContext::<Target>k__BackingField
	RuntimeObject* ___U3CTargetU3Ek__BackingField_3;
	// System.Type Dynamitey.InvokeContext::<Context>k__BackingField
	Type_t* ___U3CContextU3Ek__BackingField_4;
	// System.Boolean Dynamitey.InvokeContext::<StaticContext>k__BackingField
	bool ___U3CStaticContextU3Ek__BackingField_5;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Dynamitey.Internal.Compat.Net40
struct Net40_t17706B1D01133EF7F08737CD77364BBB4A876ECA  : public RuntimeObject
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

// Dynamitey.String_OR_InvokeMemberName
struct String_OR_InvokeMemberName_t6EF40A30315B5B7E1DC61E408E133EE42AA72ACD  : public RuntimeObject
{
	// System.String Dynamitey.String_OR_InvokeMemberName::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Type[] Dynamitey.String_OR_InvokeMemberName::<GenericArgs>k__BackingField
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___U3CGenericArgsU3Ek__BackingField_1;
	// System.Boolean Dynamitey.String_OR_InvokeMemberName::<IsSpecialName>k__BackingField
	bool ___U3CIsSpecialNameU3Ek__BackingField_2;
};

// Dynamitey.Internal.Optimization.Util
struct Util_tFE0568E8D35D4CEF45D5A217111021A24C257964  : public RuntimeObject
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

// Dynamitey.DynamicObjects.AggreType/<>c
struct U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7  : public RuntimeObject
{
};

// Dynamitey.DynamicObjects.BaseDictionary/<>c
struct U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983  : public RuntimeObject
{
};

// Dynamitey.DynamicObjects.BaseForwarder/<>o__13
struct U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81  : public RuntimeObject
{
};

// Dynamitey.DynamicObjects.BaseForwarder/AddRemoveMarker
struct AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE  : public RuntimeObject
{
	// System.Object Dynamitey.DynamicObjects.BaseForwarder/AddRemoveMarker::<Delegate>k__BackingField
	RuntimeObject* ___U3CDelegateU3Ek__BackingField_0;
	// System.Boolean Dynamitey.DynamicObjects.BaseForwarder/AddRemoveMarker::<IsAdding>k__BackingField
	bool ___U3CIsAddingU3Ek__BackingField_1;
};

// Dynamitey.DynamicObjects.BaseObject/<>c
struct U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89  : public RuntimeObject
{
};

// Dynamitey.Internal.Optimization.InvokeHelper/<>o__64
struct U3CU3Eo__64_t8A2A3FD3DA7F0A8A933C8BCD8F82720A9C41A855  : public RuntimeObject
{
};

// Dynamitey.Internal.Optimization.InvokeHelper/<>o__65
struct U3CU3Eo__65_tBA7AF47A241824FF0A165C992DC2D5EB36AB6C43  : public RuntimeObject
{
};

// Dynamitey.Internal.Optimization.Util/<>c
struct U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.CallSite`1<System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Collections.Generic.IList`1<System.Type>>>
struct CallSite_1_t08E2DD601A1F45A70F279694431BBEAC2A9B6860  : public CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF
{
	// T System.Runtime.CompilerServices.CallSite`1::Target
	Func_3_t3CEC7A6511B4D5CE29409D3111C2104016115D96* ___Target_3;
	// T[] System.Runtime.CompilerServices.CallSite`1::Rules
	Func_3U5BU5D_tCE6F2C7E4825CDDD1BF5569C7ED1266E00D6DC36* ___Rules_4;
};

// System.Collections.Generic.List`1/Enumerator<Dynamitey.DynamicObjects.FauxType>
struct Enumerator_t80594C126F155C439A40B9A6FDC709616B9908AB 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Type>
struct Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Type_t* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// Dynamitey.DynamicObjects.AggreType
struct AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF  : public FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86
{
	// System.Collections.Generic.List`1<Dynamitey.DynamicObjects.FauxType> Dynamitey.DynamicObjects.AggreType::Types
	List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9* ___Types_0;
};

// Dynamitey.DynamicObjects.BaseObject
struct BaseObject_t25653403C4D95C64840D5F2ADF5290D36025FB04  : public DynamicObject_tD0DC19F06E5F1E72197D131DB0CE792102F6DD69
{
	// Dynamitey.DynamicObjects.FauxType Dynamitey.DynamicObjects.BaseObject::<Dynamitey.DynamicObjects.IEquivalentType.EquivalentType>k__BackingField
	FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* ___U3CDynamitey_DynamicObjects_IEquivalentType_EquivalentTypeU3Ek__BackingField_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Dynamic.DynamicMetaObjectBinder
struct DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF  : public CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F
{
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

// System.Reflection.EventInfo
struct EventInfo_t  : public MemberInfo_t
{
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_tE0DE36700D110F4D267B26686541ABCF9588A6DD* ___cached_add_event_0;
};

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
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

// Dynamitey.InvokeMemberName
struct InvokeMemberName_t15017A0A53860EC61EE428B9C66FE4B2EBFF9F72  : public String_OR_InvokeMemberName_t6EF40A30315B5B7E1DC61E408E133EE42AA72ACD
{
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String System.ComponentModel.PropertyChangedEventArgs::_propertyName
	String_t* ____propertyName_1;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// Dynamitey.DynamicObjects.PropretySpecType
struct PropretySpecType_t1AF7BB23D8D79BB759AEEFDD2887CB627D331972  : public FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86
{
	// System.Collections.Generic.IDictionary`2<System.String,System.Type> Dynamitey.DynamicObjects.PropretySpecType::<PropertySpec>k__BackingField
	RuntimeObject* ___U3CPropertySpecU3Ek__BackingField_0;
};

// Dynamitey.DynamicObjects.RealType
struct RealType_tB10C428C5A3138D31306D717B61BD9DB5D94D6E2  : public FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86
{
	// System.Type Dynamitey.DynamicObjects.RealType::TargetType
	Type_t* ___TargetType_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
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

// Dynamitey.DynamicObjects.BaseDictionary
struct BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50  : public BaseObject_t25653403C4D95C64840D5F2ADF5290D36025FB04
{
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Dynamitey.DynamicObjects.BaseDictionary::_dictionary
	RuntimeObject* ____dictionary_1;
	// System.ComponentModel.PropertyChangedEventHandler Dynamitey.DynamicObjects.BaseDictionary::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_2;
};

// Dynamitey.DynamicObjects.BaseForwarder
struct BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD  : public BaseObject_t25653403C4D95C64840D5F2ADF5290D36025FB04
{
	// System.Object Dynamitey.DynamicObjects.BaseForwarder::<Target>k__BackingField
	RuntimeObject* ___U3CTargetU3Ek__BackingField_1;
};

// Microsoft.CSharp.RuntimeBinder.CSharpBinderFlags
struct CSharpBinderFlags_t4A9B166D8F9481A2B42CB65CF8D4BFDDCC7495FA 
{
	// System.Int32 Microsoft.CSharp.RuntimeBinder.CSharpBinderFlags::value__
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

// System.Dynamic.GetIndexBinder
struct GetIndexBinder_t1D53762D30B3AF1DABB042424B93BE4726D176E2  : public DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF
{
	// System.Dynamic.CallInfo System.Dynamic.GetIndexBinder::<CallInfo>k__BackingField
	CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* ___U3CCallInfoU3Ek__BackingField_2;
};

// System.Dynamic.GetMemberBinder
struct GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3  : public DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF
{
	// System.String System.Dynamic.GetMemberBinder::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Boolean System.Dynamic.GetMemberBinder::<IgnoreCase>k__BackingField
	bool ___U3CIgnoreCaseU3Ek__BackingField_3;
};

// System.Dynamic.InvokeBinder
struct InvokeBinder_tC5AB6E0A532F16789BA5B26EA123C0DD75F8D44B  : public DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF
{
	// System.Dynamic.CallInfo System.Dynamic.InvokeBinder::<CallInfo>k__BackingField
	CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* ___U3CCallInfoU3Ek__BackingField_2;
};

// System.Dynamic.InvokeMemberBinder
struct InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE  : public DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF
{
	// System.String System.Dynamic.InvokeMemberBinder::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Boolean System.Dynamic.InvokeMemberBinder::<IgnoreCase>k__BackingField
	bool ___U3CIgnoreCaseU3Ek__BackingField_3;
	// System.Dynamic.CallInfo System.Dynamic.InvokeMemberBinder::<CallInfo>k__BackingField
	CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* ___U3CCallInfoU3Ek__BackingField_4;
};

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// Dynamitey.DynamicObjects.RegexMatch
struct RegexMatch_t17D190C75B8B6217F657D4BD019C2F72D28D5EA8  : public BaseObject_t25653403C4D95C64840D5F2ADF5290D36025FB04
{
	// System.Text.RegularExpressions.Match Dynamitey.DynamicObjects.RegexMatch::_match
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ____match_1;
	// System.Text.RegularExpressions.Regex Dynamitey.DynamicObjects.RegexMatch::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_2;
};

// System.Text.RegularExpressions.RegexOptions
struct RegexOptions_tE9DA9C4DF8FB26DD1C7E0F8AA022C1164A423F6B 
{
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Dynamic.SetIndexBinder
struct SetIndexBinder_t89B08F3E4022E4855941688FDEB172820F355898  : public DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF
{
	// System.Dynamic.CallInfo System.Dynamic.SetIndexBinder::<CallInfo>k__BackingField
	CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* ___U3CCallInfoU3Ek__BackingField_2;
};

// System.Dynamic.SetMemberBinder
struct SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F  : public DynamicMetaObjectBinder_tB890C4A527623C1A79882F0343D043461A6207FF
{
	// System.String System.Dynamic.SetMemberBinder::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
	// System.Boolean System.Dynamic.SetMemberBinder::<IgnoreCase>k__BackingField
	bool ___U3CIgnoreCaseU3Ek__BackingField_3;
};

// Dynamitey.DynamicObjects.Dictionary
struct Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD  : public BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50
{
};

// Dynamitey.DynamicObjects.Get
struct Get_tB559CB2E572ECAB626FF27F8463C2E55DF640A21  : public BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD
{
};

// Dynamitey.DynamicObjects.LateType
struct LateType_tA079B0D243F1D6F188FB9C7EBB8D629524DF4758  : public BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD
{
	// System.String Dynamitey.DynamicObjects.LateType::TypeName
	String_t* ___TypeName_2;
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

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

// Microsoft.CSharp.RuntimeBinder.RuntimeBinderException
struct RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// Dynamitey.DynamicObjects.LateType/MissingTypeException
struct MissingTypeException_t1E17592BE936E2955F2DF09792F124CB43E7A7F3  : public Exception_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Object>
struct Func_2_t4A01D2AA8192C3CEBF056C3C8E056D02A2E65D94  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>
struct Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B  : public MulticastDelegate_t
{
};

// System.Func`2<Dynamitey.DynamicObjects.FauxType,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_tE0CD4277724BFD2E4034DD2248C4744F355414DF  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.MemberInfo,System.Type>
struct Func_2_t204C3EA5E87F5C75AEBFB3A6905D13C36E6D77ED  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<System.Type,Dynamitey.InvokeContext>
struct Func_2_t2E1096262AB59EC17ECDF994BF3F265F9AFF719E  : public MulticastDelegate_t
{
};

// System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Collections.Generic.IList`1<System.Type>>
struct Func_3_t3CEC7A6511B4D5CE29409D3111C2104016115D96  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566  : public MulticastDelegate_t
{
};

// System.Func`3<System.String,System.Type[],Dynamitey.InvokeMemberName>
struct Func_3_tB9572AF27A112C8867960178BAE296CD9C03DE10  : public MulticastDelegate_t
{
};

// System.Func`3<System.String,System.Object,System.Object>
struct Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0  : public MulticastDelegate_t
{
};

// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA  : public MulticastDelegate_t
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Linq.EmptyEnumerable`1<System.Object>
struct EmptyEnumerable_1_t8C8873EF4F89FB0F86D91BA5B4D640E3A23AD28E_StaticFields
{
	// TElement[] System.Linq.EmptyEnumerable`1::Instance
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Instance_0;
};

// System.Linq.EmptyEnumerable`1<System.Object>

// System.Collections.Generic.List`1<Dynamitey.DynamicObjects.FauxType>
struct List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FauxTypeU5BU5D_tB282B1E2D60B569101A9B95FC8A5EB5B6D77D9C3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Dynamitey.DynamicObjects.FauxType>

// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Reflection.MemberInfo>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.Type>
struct List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Type>

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>

// System.Reflection.Assembly

// System.Reflection.Assembly

// System.Dynamic.CallInfo

// System.Dynamic.CallInfo

// System.Runtime.CompilerServices.CallSite
struct CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`2<System.Runtime.CompilerServices.CallSiteBinder,System.Runtime.CompilerServices.CallSite>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.CompilerServices.CallSite::s_siteCtors
	CacheDict_2_t51D4B7C0FC5BE04893EE3AD20CA06419A2F6C532* ___s_siteCtors_0;
};

// System.Runtime.CompilerServices.CallSite

// System.Runtime.CompilerServices.CallSiteBinder
struct CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F_StaticFields
{
	// System.Linq.Expressions.LabelTarget System.Runtime.CompilerServices.CallSiteBinder::<UpdateLabel>k__BackingField
	LabelTarget_t8082D0D35E4D9BE77C683DCDF2AB10DA5C0EB9C5* ___U3CUpdateLabelU3Ek__BackingField_1;
};

// System.Runtime.CompilerServices.CallSiteBinder

// System.Text.RegularExpressions.Capture

// System.Text.RegularExpressions.Capture

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

// System.Dynamic.DynamicObject

// System.Dynamic.DynamicObject

// Dynamitey.DynamicObjects.FauxType

// Dynamitey.DynamicObjects.FauxType

// System.Text.RegularExpressions.GroupCollection

// System.Text.RegularExpressions.GroupCollection

// Dynamitey.Invocation
struct Invocation_tC90ECCB31F666B45C74B4B46C0B511123549B280_StaticFields
{
	// System.String Dynamitey.Invocation::ExplicitConvertBinderName
	String_t* ___ExplicitConvertBinderName_0;
	// System.String Dynamitey.Invocation::ImplicitConvertBinderName
	String_t* ___ImplicitConvertBinderName_1;
	// System.String Dynamitey.Invocation::IndexBinderName
	String_t* ___IndexBinderName_2;
	// System.String Dynamitey.Invocation::ConstructorBinderName
	String_t* ___ConstructorBinderName_3;
};

// Dynamitey.Invocation

// Dynamitey.InvokeArg
struct InvokeArg_tE827CC3B458B4D4169D7BC9EE005167217A19F03_StaticFields
{
	// System.Func`3<System.String,System.Object,Dynamitey.InvokeArg> Dynamitey.InvokeArg::Create
	Func_3_t5756650A727B10760AF253CD0397F47DDA93DA0D* ___Create_0;
};

// Dynamitey.InvokeArg

// Dynamitey.InvokeContext
struct InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB_StaticFields
{
	// System.Func`3<System.Object,System.Object,Dynamitey.InvokeContext> Dynamitey.InvokeContext::CreateContext
	Func_3_t44251101DD0306EB864A4BCA47B8A83C5A538613* ___CreateContext_0;
	// System.Func`2<System.Type,Dynamitey.InvokeContext> Dynamitey.InvokeContext::CreateStatic
	Func_2_t2E1096262AB59EC17ECDF994BF3F265F9AFF719E* ___CreateStatic_1;
	// System.Func`3<System.Type,System.Object,Dynamitey.InvokeContext> Dynamitey.InvokeContext::CreateStaticWithContext
	Func_3_t7D8D71FEB104A9B9BA06D7CAB2B1D9F507C2C438* ___CreateStaticWithContext_2;
};

// Dynamitey.InvokeContext

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// Dynamitey.Internal.Compat.Net40

// Dynamitey.Internal.Compat.Net40

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Dynamitey.String_OR_InvokeMemberName

// Dynamitey.String_OR_InvokeMemberName

// Dynamitey.Internal.Optimization.Util
struct Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_StaticFields
{
	// System.Boolean Dynamitey.Internal.Optimization.Util::IsMono
	bool ___IsMono_0;
};

// Dynamitey.Internal.Optimization.Util

// Dynamitey.DynamicObjects.AggreType/<>c
struct U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7_StaticFields
{
	// Dynamitey.DynamicObjects.AggreType/<>c Dynamitey.DynamicObjects.AggreType/<>c::<>9
	U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7* ___U3CU3E9_0;
	// System.Func`2<Dynamitey.DynamicObjects.FauxType,System.Collections.Generic.IEnumerable`1<System.Type>> Dynamitey.DynamicObjects.AggreType/<>c::<>9__8_0
	Func_2_tE0CD4277724BFD2E4034DD2248C4744F355414DF* ___U3CU3E9__8_0_1;
};

// Dynamitey.DynamicObjects.AggreType/<>c

// Dynamitey.DynamicObjects.BaseDictionary/<>c
struct U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_StaticFields
{
	// Dynamitey.DynamicObjects.BaseDictionary/<>c Dynamitey.DynamicObjects.BaseDictionary/<>c::<>9
	U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983* ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String> Dynamitey.DynamicObjects.BaseDictionary/<>c::<>9__1_0
	Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* ___U3CU3E9__1_0_1;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Object> Dynamitey.DynamicObjects.BaseDictionary/<>c::<>9__1_1
	Func_2_t4A01D2AA8192C3CEBF056C3C8E056D02A2E65D94* ___U3CU3E9__1_1_2;
};

// Dynamitey.DynamicObjects.BaseDictionary/<>c

// Dynamitey.DynamicObjects.BaseForwarder/<>o__13
struct U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_StaticFields
{
	// System.Runtime.CompilerServices.CallSite`1<System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Collections.Generic.IList`1<System.Type>>> Dynamitey.DynamicObjects.BaseForwarder/<>o__13::<>p__0
	CallSite_1_t08E2DD601A1F45A70F279694431BBEAC2A9B6860* ___U3CU3Ep__0_0;
	// System.Runtime.CompilerServices.CallSite`1<System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Collections.Generic.IList`1<System.Type>>> Dynamitey.DynamicObjects.BaseForwarder/<>o__13::<>p__1
	CallSite_1_t08E2DD601A1F45A70F279694431BBEAC2A9B6860* ___U3CU3Ep__1_1;
};

// Dynamitey.DynamicObjects.BaseForwarder/<>o__13

// Dynamitey.DynamicObjects.BaseForwarder/AddRemoveMarker

// Dynamitey.DynamicObjects.BaseForwarder/AddRemoveMarker

// Dynamitey.DynamicObjects.BaseObject/<>c
struct U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89_StaticFields
{
	// Dynamitey.DynamicObjects.BaseObject/<>c Dynamitey.DynamicObjects.BaseObject/<>c::<>9
	U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89* ___U3CU3E9_0;
	// System.Func`2<System.Reflection.MemberInfo,System.Type> Dynamitey.DynamicObjects.BaseObject/<>c::<>9__1_0
	Func_2_t204C3EA5E87F5C75AEBFB3A6905D13C36E6D77ED* ___U3CU3E9__1_0_1;
};

// Dynamitey.DynamicObjects.BaseObject/<>c

// Dynamitey.Internal.Optimization.InvokeHelper/<>o__64
struct U3CU3Eo__64_t8A2A3FD3DA7F0A8A933C8BCD8F82720A9C41A855_StaticFields
{
	// System.Runtime.CompilerServices.CallSite`1<System.Func`4<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__64::<>p__0
	CallSite_1_tAE0C20B82A89B7BB706AC7FB6A61D843B1E0550C* ___U3CU3Ep__0_0;
	// System.Runtime.CompilerServices.CallSite`1<System.Func`5<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__64::<>p__1
	CallSite_1_t297C82C7931E3CC8CCA8F6EAF4F1A1CBEC46C9C2* ___U3CU3Ep__1_1;
	// System.Runtime.CompilerServices.CallSite`1<System.Func`6<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__64::<>p__2
	CallSite_1_t196BCC8B831DCFD8184983FAE61803D10A1A251E* ___U3CU3Ep__2_2;
	// System.Runtime.CompilerServices.CallSite`1<System.Func`7<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__64::<>p__3
	CallSite_1_t81EDE248266D9795CA0D9B01E19EB2B0224FF212* ___U3CU3Ep__3_3;
	// System.Runtime.CompilerServices.CallSite`1<System.Func`8<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__64::<>p__4
	CallSite_1_tCBCD14F8BDBF25FB296387455B5C3F2218B51F7F* ___U3CU3Ep__4_4;
	// System.Runtime.CompilerServices.CallSite`1<System.Func`9<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__64::<>p__5
	CallSite_1_t1DBD7620771D64803728FD010DFCD0734794BCBB* ___U3CU3Ep__5_5;
	// System.Runtime.CompilerServices.CallSite`1<System.Func`10<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__64::<>p__6
	CallSite_1_t68073181FE65FB8A5CEA1AB8FC2A9E0E92FD7BEA* ___U3CU3Ep__6_6;
	// System.Runtime.CompilerServices.CallSite`1<System.Func`11<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__64::<>p__7
	CallSite_1_t117886D3F66BEC85C5294F86673474C0F5BA6EB3* ___U3CU3Ep__7_7;
	// System.Runtime.CompilerServices.CallSite`1<System.Func`12<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__64::<>p__8
	CallSite_1_t99EE35EDBCE15759EF57FA7552916216A28E206A* ___U3CU3Ep__8_8;
	// System.Runtime.CompilerServices.CallSite`1<System.Func`13<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__64::<>p__9
	CallSite_1_tED78AE80BE741B2832A4CB3E731CA29550182F75* ___U3CU3Ep__9_9;
	// System.Runtime.CompilerServices.CallSite`1<System.Func`14<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__64::<>p__10
	CallSite_1_t08C874B4515EB52AE1E99358E76E0C89ABF22A70* ___U3CU3Ep__10_10;
	// System.Runtime.CompilerServices.CallSite`1<System.Func`15<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__64::<>p__11
	CallSite_1_tA1A401A50D6F53888FC1B9B06647445780B51B87* ___U3CU3Ep__11_11;
	// System.Runtime.CompilerServices.CallSite`1<System.Func`16<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__64::<>p__12
	CallSite_1_tF8B06DF53D207B0A5F0B949FBFE568DF46F9E364* ___U3CU3Ep__12_12;
	// System.Runtime.CompilerServices.CallSite`1<System.Func`17<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__64::<>p__13
	CallSite_1_t2FB2969EBB88AAF14FC58DB0CFA75246286F398D* ___U3CU3Ep__13_13;
	// System.Runtime.CompilerServices.CallSite`1<<>F`18<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__64::<>p__14
	CallSite_1_tF1F5DBD040108CEAF1CE399C359642877099695A* ___U3CU3Ep__14_14;
	// System.Runtime.CompilerServices.CallSite`1<<>F`19<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__64::<>p__15
	CallSite_1_t961FAC41CABC3C2EFC502CE01B0336601D07C67D* ___U3CU3Ep__15_15;
};

// Dynamitey.Internal.Optimization.InvokeHelper/<>o__64

// Dynamitey.Internal.Optimization.InvokeHelper/<>o__65
struct U3CU3Eo__65_tBA7AF47A241824FF0A165C992DC2D5EB36AB6C43_StaticFields
{
	// System.Runtime.CompilerServices.CallSite`1<System.Action`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__65::<>p__0
	CallSite_1_tB6FB66A80DB17763551C54C486FE5355859D0388* ___U3CU3Ep__0_0;
	// System.Runtime.CompilerServices.CallSite`1<System.Action`4<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__65::<>p__1
	CallSite_1_t42B42DC1BE1A1122753E3B41CB4C764D4DC626DE* ___U3CU3Ep__1_1;
	// System.Runtime.CompilerServices.CallSite`1<System.Action`5<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__65::<>p__2
	CallSite_1_tB98140E6192B559D3938C0074AF448DD38E2EF98* ___U3CU3Ep__2_2;
	// System.Runtime.CompilerServices.CallSite`1<System.Action`6<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__65::<>p__3
	CallSite_1_tC8736518C349CB6B2FD733E5A45C8A1773D9ECF1* ___U3CU3Ep__3_3;
	// System.Runtime.CompilerServices.CallSite`1<System.Action`7<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__65::<>p__4
	CallSite_1_t573C659BBEFF7DD6FD5A1BA73D42CBF6996A2F66* ___U3CU3Ep__4_4;
	// System.Runtime.CompilerServices.CallSite`1<System.Action`8<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__65::<>p__5
	CallSite_1_t288911616D5E7830BDBB4955F2AECA3104EC43B3* ___U3CU3Ep__5_5;
	// System.Runtime.CompilerServices.CallSite`1<System.Action`9<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__65::<>p__6
	CallSite_1_tEB4A220DD0AA901D245B3CCA5BAD3C0A46251BA9* ___U3CU3Ep__6_6;
	// System.Runtime.CompilerServices.CallSite`1<System.Action`10<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__65::<>p__7
	CallSite_1_tD0C28735D1408FB97C003E7FB573D328CEC64DEA* ___U3CU3Ep__7_7;
	// System.Runtime.CompilerServices.CallSite`1<System.Action`11<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__65::<>p__8
	CallSite_1_t89E77D5078E05DA5FBF5ED1F15657B2A6F1DB63E* ___U3CU3Ep__8_8;
	// System.Runtime.CompilerServices.CallSite`1<System.Action`12<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__65::<>p__9
	CallSite_1_t95ABDACB5C636C88E1A41D455339DC04D97B91C5* ___U3CU3Ep__9_9;
	// System.Runtime.CompilerServices.CallSite`1<System.Action`13<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__65::<>p__10
	CallSite_1_tF361F7608D31729C2E6B23BC0906F5A1A6E48464* ___U3CU3Ep__10_10;
	// System.Runtime.CompilerServices.CallSite`1<System.Action`14<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__65::<>p__11
	CallSite_1_t9BDA48FF2F82A4E7FAF8AF2C943970FA13F42487* ___U3CU3Ep__11_11;
	// System.Runtime.CompilerServices.CallSite`1<System.Action`15<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__65::<>p__12
	CallSite_1_t75A6460755B7023715235A89919789842BE5F15B* ___U3CU3Ep__12_12;
	// System.Runtime.CompilerServices.CallSite`1<System.Action`16<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__65::<>p__13
	CallSite_1_tB4D74BBE5E948DE1F534B79F77A46E4000B6F094* ___U3CU3Ep__13_13;
	// System.Runtime.CompilerServices.CallSite`1<<>A`17<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__65::<>p__14
	CallSite_1_t1BC205DD3B79347DE9565E08DBE59C50D8882026* ___U3CU3Ep__14_14;
	// System.Runtime.CompilerServices.CallSite`1<<>A`18<System.Runtime.CompilerServices.CallSite,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>> Dynamitey.Internal.Optimization.InvokeHelper/<>o__65::<>p__15
	CallSite_1_tFC6CF9923C44E705632FB596CC7E5D92D4B5E42B* ___U3CU3Ep__15_15;
};

// Dynamitey.Internal.Optimization.InvokeHelper/<>o__65

// Dynamitey.Internal.Optimization.Util/<>c
struct U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02_StaticFields
{
	// Dynamitey.Internal.Optimization.Util/<>c Dynamitey.Internal.Optimization.Util/<>c::<>9
	U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02* ___U3CU3E9_0;
	// System.Func`3<System.String,System.Object,System.Object> Dynamitey.Internal.Optimization.Util/<>c::<>9__3_0
	Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* ___U3CU3E9__3_0_1;
};

// Dynamitey.Internal.Optimization.Util/<>c

// System.Runtime.CompilerServices.CallSite`1<System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Collections.Generic.IList`1<System.Type>>>
struct CallSite_1_t08E2DD601A1F45A70F279694431BBEAC2A9B6860_StaticFields
{
	// T System.Runtime.CompilerServices.CallSite`1::s_cachedUpdate
	Func_3_t3CEC7A6511B4D5CE29409D3111C2104016115D96* ___s_cachedUpdate_5;
	// T modreq(System.Runtime.CompilerServices.IsVolatile) System.Runtime.CompilerServices.CallSite`1::s_cachedNoMatch
	Func_3_t3CEC7A6511B4D5CE29409D3111C2104016115D96* ___s_cachedNoMatch_6;
};

// System.Runtime.CompilerServices.CallSite`1<System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Collections.Generic.IList`1<System.Type>>>

// System.Collections.Generic.List`1/Enumerator<Dynamitey.DynamicObjects.FauxType>

// System.Collections.Generic.List`1/Enumerator<Dynamitey.DynamicObjects.FauxType>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Type>

// System.Collections.Generic.List`1/Enumerator<System.Type>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>

// Dynamitey.DynamicObjects.AggreType

// Dynamitey.DynamicObjects.AggreType

// Dynamitey.DynamicObjects.BaseObject

// Dynamitey.DynamicObjects.BaseObject

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Reflection.EventInfo

// System.Reflection.EventInfo

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
};

// System.Text.RegularExpressions.Group

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Dynamitey.InvokeMemberName
struct InvokeMemberName_t15017A0A53860EC61EE428B9C66FE4B2EBFF9F72_StaticFields
{
	// System.Func`3<System.String,System.Type[],Dynamitey.InvokeMemberName> Dynamitey.InvokeMemberName::Create
	Func_3_tB9572AF27A112C8867960178BAE296CD9C03DE10* ___Create_3;
	// System.Func`2<System.String,Dynamitey.InvokeMemberName> Dynamitey.InvokeMemberName::CreateSpecialName
	Func_2_t1C4C4826AAEE2546A0B758C64907B4F17F52D7DB* ___CreateSpecialName_4;
};

// Dynamitey.InvokeMemberName

// System.ComponentModel.PropertyChangedEventArgs

// System.ComponentModel.PropertyChangedEventArgs

// System.Reflection.PropertyInfo

// System.Reflection.PropertyInfo

// Dynamitey.DynamicObjects.PropretySpecType

// Dynamitey.DynamicObjects.PropretySpecType

// Dynamitey.DynamicObjects.RealType

// Dynamitey.DynamicObjects.RealType

// System.Void

// System.Void

// Dynamitey.DynamicObjects.BaseDictionary

// Dynamitey.DynamicObjects.BaseDictionary

// Dynamitey.DynamicObjects.BaseForwarder

// Dynamitey.DynamicObjects.BaseForwarder

// Microsoft.CSharp.RuntimeBinder.CSharpBinderFlags

// Microsoft.CSharp.RuntimeBinder.CSharpBinderFlags

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Dynamic.GetIndexBinder

// System.Dynamic.GetIndexBinder

// System.Dynamic.GetMemberBinder

// System.Dynamic.GetMemberBinder

// System.Dynamic.InvokeBinder

// System.Dynamic.InvokeBinder

// System.Dynamic.InvokeMemberBinder

// System.Dynamic.InvokeMemberBinder

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// System.Text.RegularExpressions.Match

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// Dynamitey.DynamicObjects.RegexMatch

// Dynamitey.DynamicObjects.RegexMatch

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Dynamic.SetIndexBinder

// System.Dynamic.SetIndexBinder

// System.Dynamic.SetMemberBinder

// System.Dynamic.SetMemberBinder

// Dynamitey.DynamicObjects.Dictionary

// Dynamitey.DynamicObjects.Dictionary

// Dynamitey.DynamicObjects.Get

// Dynamitey.DynamicObjects.Get

// Dynamitey.DynamicObjects.LateType

// Dynamitey.DynamicObjects.LateType

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.Text.RegularExpressions.Regex

// Microsoft.CSharp.RuntimeBinder.RuntimeBinderException

// Microsoft.CSharp.RuntimeBinder.RuntimeBinderException

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

// Dynamitey.DynamicObjects.LateType/MissingTypeException

// Dynamitey.DynamicObjects.LateType/MissingTypeException

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Object>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Object>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>

// System.Func`2<Dynamitey.DynamicObjects.FauxType,System.Collections.Generic.IEnumerable`1<System.Type>>

// System.Func`2<Dynamitey.DynamicObjects.FauxType,System.Collections.Generic.IEnumerable`1<System.Type>>

// System.Func`2<System.Reflection.MemberInfo,System.Type>

// System.Func`2<System.Reflection.MemberInfo,System.Type>

// System.Func`2<System.Object,System.Object>

// System.Func`2<System.Object,System.Object>

// System.Func`2<System.Type,Dynamitey.InvokeContext>

// System.Func`2<System.Type,Dynamitey.InvokeContext>

// System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Collections.Generic.IList`1<System.Type>>

// System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Collections.Generic.IList`1<System.Type>>

// System.Func`3<System.Object,System.Object,System.Object>

// System.Func`3<System.Object,System.Object,System.Object>

// System.Func`3<System.String,System.Type[],Dynamitey.InvokeMemberName>

// System.Func`3<System.String,System.Type[],Dynamitey.InvokeMemberName>

// System.Func`3<System.String,System.Object,System.Object>

// System.Func`3<System.String,System.Object,System.Object>

// System.ComponentModel.PropertyChangedEventHandler

// System.ComponentModel.PropertyChangedEventHandler

// System.Reflection.TypeInfo

// System.Reflection.TypeInfo
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_tB0707823AD77DFC250A1B32BFDE51BCC2B93F6B1  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 m_Items[1];

	inline KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.TypeInfo[]
struct TypeInfoU5BU5D_t1DFAC07F3379698BE8870D7D24D55C4C1AC5FD29  : public RuntimeArray
{
	ALIGN_FIELD (8) TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* m_Items[1];

	inline TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053  : public RuntimeArray
{
	ALIGN_FIELD (8) MemberInfo_t* m_Items[1];

	inline MemberInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Dynamitey.DynamicObjects.FauxType[]
struct FauxTypeU5BU5D_tB282B1E2D60B569101A9B95FC8A5EB5B6D77D9C3  : public RuntimeArray
{
	ALIGN_FIELD (8) FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* m_Items[1];

	inline FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Repeat<System.Object>(TResult,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Repeat_TisRuntimeObject_mD7DCB0335A84950713EA4495E4027B2AD78CF5C3_gshared (RuntimeObject* ___0_element, int32_t ___1_count, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33_gshared (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method) ;
// System.Void System.Func`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m7A3CDF8CC909FAEEA005D42C71F113B505F766DD_gshared (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Zip<System.Object,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TFirst>,System.Collections.Generic.IEnumerable`1<TSecond>,System.Func`3<TFirst,TSecond,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Zip_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m83BE556CE5CE4D1AD788BFE815FF55DEA0EEE7FD_gshared (RuntimeObject* ___0_first, RuntimeObject* ___1_second, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___2_resultSelector, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared (Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* Enumerable_ToDictionary_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_TisRuntimeObject_mFAD38355767A6BC98DB0AF76ADAB9AEDE1A401CB_gshared (RuntimeObject* ___0_source, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___1_keySelector, Func_2_tF42287527472FA89789873F068A87C60A00EC7D3* ___2_elementSelector, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Distinct_TisRuntimeObject_mBCF33F5AD0A25B1E57B46FF34330DF74278ADB9E_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.CallSite`1<T> System.Runtime.CompilerServices.CallSite`1<System.Object>::Create(System.Runtime.CompilerServices.CallSiteBinder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallSite_1_t8003A47F608763107DBCC0D06FFD87AE4EE7BA98* CallSite_1_Create_m96936720C342472E6485A9CE9F8112C93F765C7C_gshared (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* ___0_binder, const RuntimeMethod* method) ;
// TResult System.Func`3<System.Object,System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___0_source, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___1_selector, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared (RuntimeObject* ___0_source, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Empty_TisRuntimeObject_mA90CDE158774C34A28C07CEEA9E9EA2A61618238_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mC89216034DEE8779F1AC2D0A984C0ADE855BED00_gshared (RuntimeObject* ___0_source, Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1* ___1_selector, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;

// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsNotPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsNotPublic_mD0DAE7364A17F0DFC839891331B5F3F4AA6E42B3 (Type_t* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.CustomAttributeExtensions::IsDefined(System.Reflection.MemberInfo,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomAttributeExtensions_IsDefined_mB5EEDAA1B9B5AD75378F5157CD1B85EC5BE2C5ED (MemberInfo_t* ___0_element, Type_t* ___1_attributeType, bool ___2_inherit, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> System.Dynamic.CallInfo::get_ArgumentNames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C* CallInfo_get_ArgumentNames_m9F82072D6C372A2C68C3845B8E78A454050C47D3_inline (CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::get_Count()
inline int32_t ReadOnlyCollection_1_get_Count_mA3AE220565D02224E32753A0186DC33E5C7DD388 (ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C_gshared)(__this, method);
}
// System.Int32 System.Dynamic.CallInfo::get_ArgumentCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CallInfo_get_ArgumentCount_mCA87B8CEE4F758AE8591FF2DB27FAA902635EB46_inline (CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Repeat<System.String>(TResult,System.Int32)
inline RuntimeObject* Enumerable_Repeat_TisString_t_m291B65F038E32131C2534140BBAC0A121AA9BC64 (String_t* ___0_element, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (String_t*, int32_t, const RuntimeMethod*))Enumerable_Repeat_TisRuntimeObject_mD7DCB0335A84950713EA4495E4027B2AD78CF5C3_gshared)(___0_element, ___1_count, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Concat_TisString_t_mC58E08B0186F31393203A866448A3AAA85C67544 (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33_gshared)(___0_first, ___1_second, method);
}
// System.Void System.Func`3<System.String,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_mCC90F3D93F52D198EA218CEB0C2779FCCB02DE12 (Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m7A3CDF8CC909FAEEA005D42C71F113B505F766DD_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Zip<System.String,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TFirst>,System.Collections.Generic.IEnumerable`1<TSecond>,System.Func`3<TFirst,TSecond,TResult>)
inline RuntimeObject* Enumerable_Zip_TisString_t_TisRuntimeObject_TisRuntimeObject_mE8E2428182274C3BC87CEAA55024E87CA88FC522 (RuntimeObject* ___0_first, RuntimeObject* ___1_second, Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* ___2_resultSelector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0*, const RuntimeMethod*))Enumerable_Zip_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m83BE556CE5CE4D1AD788BFE815FF55DEA0EEE7FD_gshared)(___0_first, ___1_second, ___2_resultSelector, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.Boolean Dynamitey.InvokeContext::get_StaticContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InvokeContext_get_StaticContext_m84CC0E18F0736302B746CA4991CB5C61FCE96A4B_inline (InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB* __this, const RuntimeMethod* method) ;
// System.Type Dynamitey.InvokeContext::get_Context()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* InvokeContext_get_Context_m28D3B3A67DD5FC3434A75DF7CD9B7C5B3E019EB2_inline (InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB* __this, const RuntimeMethod* method) ;
// System.Type Dynamitey.Internal.Optimization.Util::FixContext(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Util_FixContext_m7A268B4DB6153ED092CC8182E0A473236DEDBBAB (Type_t* ___0_context, const RuntimeMethod* method) ;
// System.Object Dynamitey.InvokeContext::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InvokeContext_get_Target_m1FA7638D265F7FDF62F42516F1EAA986BFB123AF_inline (InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean Dynamitey.DynamicObjects.BaseObject::TryTypeForName(System.String,System.Type&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseObject_TryTypeForName_m43167E1F0D4748B4EE892E3E4767C7CDD6F2DF80 (BaseObject_t25653403C4D95C64840D5F2ADF5290D36025FB04* __this, String_t* ___0_binderName, Type_t** ___1_type, const RuntimeMethod* method) ;
// System.Void Dynamitey.DynamicObjects.Dictionary::.ctor(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary__ctor_m55C09C5FEF27D2782CA244B495A2C0CF22068962 (Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD* __this, RuntimeObject* ___0_dict, const RuntimeMethod* method) ;
// System.Object Dynamitey.Dynamic::CoerceConvert(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dynamic_CoerceConvert_m2B1AEC3F9140E403439BA7208420C27E952B1AC8 (RuntimeObject* ___0_target, Type_t* ___1_type, const RuntimeMethod* method) ;
// System.Void Dynamitey.DynamicObjects.BaseForwarder/AddRemoveMarker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddRemoveMarker__ctor_mEE553E49428A5A7C86E5EE5E2E38541C1E7A3422 (AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Object Dynamitey.Dynamic::InvokeConstructor(System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dynamic_InvokeConstructor_mFD18DE93E68EECB04EBEE2F168D2BE59563AE2CC (Type_t* ___0_type, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.String Dynamitey.InvokeArg::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InvokeArg_get_Name_m46EDE7CD9DA74A941868836CDF54792F478D6529_inline (InvokeArg_tE827CC3B458B4D4169D7BC9EE005167217A19F03* __this, const RuntimeMethod* method) ;
// System.Object Dynamitey.InvokeArg::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InvokeArg_get_Value_m1C6508974F896248BC4CC6AD96BB64FED504F835_inline (InvokeArg_tE827CC3B458B4D4169D7BC9EE005167217A19F03* __this, const RuntimeMethod* method) ;
// System.Void Dynamitey.Internal.Optimization.Util/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mED20E417F33228C7F82C40A88E5890A7DE4F9FE5 (U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Dynamitey.InvokeArg::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokeArg__ctor_m80945CD7E21FCE809386E73624DC1CC87D038D19 (InvokeArg_tE827CC3B458B4D4169D7BC9EE005167217A19F03* __this, String_t* ___0_name, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_DefaultThreadCurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_DefaultThreadCurrentCulture_m047EEE26F61C62245F728F7BBF2C661432A88DC3 (const RuntimeMethod* method) ;
// System.Void Dynamitey.DynamicObjects.BaseObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject__ctor_mCA94140D9F8DD12D04F46A46BE11CFA22B64B3AE (BaseObject_t25653403C4D95C64840D5F2ADF5290D36025FB04* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4F049E2C488DF6CAE688DA027C6FC95F6174AC4C (Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m59B880D6D1D92F980BCA3712F85A9945AD311F96 (Func_2_t4A01D2AA8192C3CEBF056C3C8E056D02A2E65D94* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t4A01D2AA8192C3CEBF056C3C8E056D02A2E65D94*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m60F64297108A01DFB5663C9BA121893957855907_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
inline Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* Enumerable_ToDictionary_TisKeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_TisString_t_TisRuntimeObject_mD331ACC85009F2F37195D718970488D86AA211FD (RuntimeObject* ___0_source, Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* ___1_keySelector, Func_2_t4A01D2AA8192C3CEBF056C3C8E056D02A2E65D94* ___2_elementSelector, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* (*) (RuntimeObject*, Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B*, Func_2_t4A01D2AA8192C3CEBF056C3C8E056D02A2E65D94*, const RuntimeMethod*))Enumerable_ToDictionary_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_TisRuntimeObject_mFAD38355767A6BC98DB0AF76ADAB9AEDE1A401CB_gshared)(___0_source, ___1_keySelector, ___2_elementSelector, method);
}
// System.Collections.Generic.IEnumerable`1<System.String> System.Dynamic.DynamicObject::GetDynamicMemberNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DynamicObject_GetDynamicMemberNames_mEF4E8037197C0DB45BB654687E97B7BF94C28852 (DynamicObject_tD0DC19F06E5F1E72197D131DB0CE792102F6DD69* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Distinct_TisString_t_m1E99E758E2A5605D0EE48F5715C69AF1096BF99B (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Distinct_TisRuntimeObject_mBCF33F5AD0A25B1E57B46FF34330DF74278ADB9E_gshared)(___0_source, method);
}
// System.String System.Dynamic.GetMemberBinder::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GetMemberBinder_get_Name_mCE0671772897ED1E0575E3BE2C06CAB8D52019C4_inline (GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* __this, const RuntimeMethod* method) ;
// System.Boolean Dynamitey.Internal.Optimization.Util::MassageResultBasedOnInterface(Dynamitey.DynamicObjects.BaseObject,System.String,System.Boolean,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Util_MassageResultBasedOnInterface_mEBA4F7D82F8A2553C3FF2722CB13C9345157175C (BaseObject_t25653403C4D95C64840D5F2ADF5290D36025FB04* ___0_target, String_t* ___1_binderName, bool ___2_resultFound, RuntimeObject** ___3_result, const RuntimeMethod* method) ;
// System.String System.Dynamic.InvokeMemberBinder::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InvokeMemberBinder_get_Name_m17B9EDADDC4EF3BF49C34A34D65D0D0ACF5EB9A8_inline (InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* __this, const RuntimeMethod* method) ;
// System.Dynamic.CallInfo System.Dynamic.InvokeMemberBinder::get_CallInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* InvokeMemberBinder_get_CallInfo_m8776D2724544514F1B807F0BF73C38283C61432C_inline (InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared)(___0_source, method);
}
// System.Object Dynamitey.Internal.Optimization.InvokeHelper::InvokeMethodDelegate(System.Object,System.Delegate,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InvokeHelper_InvokeMethodDelegate_mFC2D5D40CE3622DA995AA57B191845575EDD1D01 (RuntimeObject* ___0_target, Delegate_t* ___1_tFunc, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.Object[] Dynamitey.Internal.Optimization.Util::NameArgsIfNecessary(System.Dynamic.CallInfo,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Util_NameArgsIfNecessary_m4ED60446AB2EC21EE4BC77EBE6162F3EAD7FFD73 (CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* ___0_callInfo, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Object Dynamitey.Dynamic::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dynamic_Invoke_m522AF8A8214C34FFC8B62A9EF266038442D9E148 (RuntimeObject* ___0_target, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.String System.Dynamic.SetMemberBinder::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SetMemberBinder_get_Name_mE683668DE73BFB110F155E377E26B506960A7B42_inline (SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F* __this, const RuntimeMethod* method) ;
// System.Void Dynamitey.DynamicObjects.BaseDictionary::SetProperty(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDictionary_SetProperty_m110913D1116E8BBCF893C4FC9CF8C0147F8B6A2A (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean Dynamitey.DynamicObjects.BaseDictionary::TryGetValue(System.String,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDictionary_TryGetValue_m26105E32F99AABDCC4544154D93C8DEFF36B5EE8 (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, String_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Boolean Dynamitey.DynamicObjects.BaseDictionary::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDictionary_Remove_m8253CAB6689C30745FB17F209CEF1B149746F0CB (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.PropertyChangedEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyChangedEventArgs__ctor_mE3C901440BE057E5F17062BA316019C0B53A39B5 (PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* __this, String_t* ___0_propertyName, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.PropertyChangedEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangedEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PropertyChangedEventHandler_Invoke_m040B3056C279FDDC4EC678519D5D415771905298_inline (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* __this, RuntimeObject* ___0_sender, PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* ___1_e, const RuntimeMethod* method) ;
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7 (RuntimeObject* ___0_objA, RuntimeObject* ___1_objB, const RuntimeMethod* method) ;
// System.Boolean Dynamitey.DynamicObjects.BaseDictionary::Equals(Dynamitey.DynamicObjects.Dictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDictionary_Equals_m3987FDE4356ADAEFA286C92DAA427946A8F0F49F (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD* ___0_other, const RuntimeMethod* method) ;
// System.Void Dynamitey.DynamicObjects.BaseDictionary/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m954ABE34C7BFD237EF868A1C842961F860E0C885 (U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983* __this, const RuntimeMethod* method) ;
// System.Void Dynamitey.DynamicObjects.BaseForwarder::set_Target(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseForwarder_set_Target_mC74CA9B8B90361064A8A0D8D1364309D483C048A_inline (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.String> Dynamitey.Dynamic::GetMemberNames(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dynamic_GetMemberNames_m76EE907A535CCB21FF9A045AFBC2843F59F5CCE6 (RuntimeObject* ___0_target, bool ___1_dynamicOnly, const RuntimeMethod* method) ;
// System.Object Dynamitey.DynamicObjects.BaseForwarder::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseForwarder_get_Target_m7BF2CB975DB08AADAC16D6609F9EB4B93008D855_inline (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, const RuntimeMethod* method) ;
// System.Boolean Dynamitey.Dynamic::InvokeIsEvent(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dynamic_InvokeIsEvent_m96091BDE3009C1B77C7AE5B0C6CCC7AE76849620 (RuntimeObject* ___0_target, String_t* ___1_name, const RuntimeMethod* method) ;
// System.Object Dynamitey.Dynamic::InvokeGet(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dynamic_InvokeGet_m380CCA014FE3D60D245D555B1FED8911D3D05699 (RuntimeObject* ___0_target, String_t* ___1_name, const RuntimeMethod* method) ;
// System.Dynamic.CallInfo System.Dynamic.InvokeBinder::get_CallInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* InvokeBinder_get_CallInfo_m96F6E83E1F2E1027808B19E01A285B08E07BCA79_inline (InvokeBinder_tC5AB6E0A532F16789BA5B26EA123C0DD75F8D44B* __this, const RuntimeMethod* method) ;
// System.Void Dynamitey.Dynamic::InvokeAction(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dynamic_InvokeAction_mB4A4311D81149CC0A4470AF27D523CE7F82218D3 (RuntimeObject* ___0_target, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.CallSiteBinder Microsoft.CSharp.RuntimeBinder.Binder::Convert(Microsoft.CSharp.RuntimeBinder.CSharpBinderFlags,System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* Binder_Convert_m3CD7C4B493AE6978964AC63603D14542AF256A1C (int32_t ___0_flags, Type_t* ___1_type, Type_t* ___2_context, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.CallSite`1<T> System.Runtime.CompilerServices.CallSite`1<System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Collections.Generic.IList`1<System.Type>>>::Create(System.Runtime.CompilerServices.CallSiteBinder)
inline CallSite_1_t08E2DD601A1F45A70F279694431BBEAC2A9B6860* CallSite_1_Create_m2ADA39A0277EC8AE511F2EDD854A6D8B4177A98E (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* ___0_binder, const RuntimeMethod* method)
{
	return ((  CallSite_1_t08E2DD601A1F45A70F279694431BBEAC2A9B6860* (*) (CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F*, const RuntimeMethod*))CallSite_1_Create_m96936720C342472E6485A9CE9F8112C93F765C7C_gshared)(___0_binder, method);
}
// TResult System.Func`3<System.Runtime.CompilerServices.CallSite,System.Object,System.Collections.Generic.IList`1<System.Type>>::Invoke(T1,T2)
inline RuntimeObject* Func_3_Invoke_m8C259D3724480970753252E3AA79B56E3B43955C_inline (Func_3_t3CEC7A6511B4D5CE29409D3111C2104016115D96* __this, CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_3_t3CEC7A6511B4D5CE29409D3111C2104016115D96*, CallSite_t7E03097DD9D28AA5BB84A32493F38B8AF731B5AF*, RuntimeObject*, const RuntimeMethod*))Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>)
inline TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// TResult System.Func`3<System.String,System.Type[],Dynamitey.InvokeMemberName>::Invoke(T1,T2)
inline InvokeMemberName_t15017A0A53860EC61EE428B9C66FE4B2EBFF9F72* Func_3_Invoke_m314A658720125ADEBFBA6ABB3839753D7D6F0F32_inline (Func_3_tB9572AF27A112C8867960178BAE296CD9C03DE10* __this, String_t* ___0_arg1, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___1_arg2, const RuntimeMethod* method)
{
	return ((  InvokeMemberName_t15017A0A53860EC61EE428B9C66FE4B2EBFF9F72* (*) (Func_3_tB9572AF27A112C8867960178BAE296CD9C03DE10*, String_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*, const RuntimeMethod*))Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// System.Object Dynamitey.Dynamic::InvokeMember(System.Object,Dynamitey.String_OR_InvokeMemberName,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dynamic_InvokeMember_m0AC5B1FCDCE0726769DADC97E92D130EE58BCE99 (RuntimeObject* ___0_target, String_OR_InvokeMemberName_t6EF40A30315B5B7E1DC61E408E133EE42AA72ACD* ___1_name, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.Void Dynamitey.Dynamic::InvokeMemberAction(System.Object,Dynamitey.String_OR_InvokeMemberName,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dynamic_InvokeMemberAction_m4D965979F0EE81DB7448B578F0BFD81955920BC0 (RuntimeObject* ___0_target, String_OR_InvokeMemberName_t6EF40A30315B5B7E1DC61E408E133EE42AA72ACD* ___1_name, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.Boolean Dynamitey.DynamicObjects.BaseForwarder/AddRemoveMarker::get_IsAdding()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AddRemoveMarker_get_IsAdding_mC96816002E139136EF319DED9E1B1BAFDE607A32_inline (AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE* __this, const RuntimeMethod* method) ;
// System.Object Dynamitey.DynamicObjects.BaseForwarder/AddRemoveMarker::get_Delegate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AddRemoveMarker_get_Delegate_mDB26A638B2C00F48C6136C98953946E831EC4297_inline (AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE* __this, const RuntimeMethod* method) ;
// System.Void Dynamitey.Dynamic::InvokeAddAssignMember(System.Object,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dynamic_InvokeAddAssignMember_m9D207231D71BEAF63774003B5DFEE5A9D0350394 (RuntimeObject* ___0_target, String_t* ___1_name, RuntimeObject* ___2_value, const RuntimeMethod* method) ;
// System.Void Dynamitey.Dynamic::InvokeSubtractAssignMember(System.Object,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dynamic_InvokeSubtractAssignMember_mBE5E4A53DCF844EDF1643EE14CCE48B5BE64C903 (RuntimeObject* ___0_target, String_t* ___1_name, RuntimeObject* ___2_value, const RuntimeMethod* method) ;
// System.Object Dynamitey.Dynamic::InvokeSet(System.Object,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dynamic_InvokeSet_mFC4739F453D39553B72EF140D0A58BA1A6483C1B (RuntimeObject* ___0_target, String_t* ___1_name, RuntimeObject* ___2_value, const RuntimeMethod* method) ;
// System.Dynamic.CallInfo System.Dynamic.GetIndexBinder::get_CallInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* GetIndexBinder_get_CallInfo_m4F37AEAD31CBC4CD7CC2A3773A5318AFD78A5531_inline (GetIndexBinder_t1D53762D30B3AF1DABB042424B93BE4726D176E2* __this, const RuntimeMethod* method) ;
// System.Object Dynamitey.Dynamic::InvokeGetIndex(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dynamic_InvokeGetIndex_m408BD7DD67403BE3861593630D567D6543F99EA2 (RuntimeObject* ___0_target, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_indexes, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33 (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33_gshared)(___0_first, ___1_second, method);
}
// System.Dynamic.CallInfo System.Dynamic.SetIndexBinder::get_CallInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* SetIndexBinder_get_CallInfo_m8F235FA11DE5093DC60516A0809D4279DAA21682_inline (SetIndexBinder_t89B08F3E4022E4855941688FDEB172820F355898* __this, const RuntimeMethod* method) ;
// System.Object Dynamitey.Dynamic::InvokeSetIndex(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dynamic_InvokeSetIndex_m86A576D187E38707E9169C03C8FC5E7414144350 (RuntimeObject* ___0_target, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_indexesThenValue, const RuntimeMethod* method) ;
// System.Boolean Dynamitey.DynamicObjects.BaseForwarder::Equals(Dynamitey.DynamicObjects.BaseForwarder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseForwarder_Equals_mF7D033DFA66245C28F5BFEC1678BD8B6816DAFE8 (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* ___0_other, const RuntimeMethod* method) ;
// System.Void System.Dynamic.DynamicObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicObject__ctor_m9F66B57E58703941DCACBC2126F03F8E85ECF1F0 (DynamicObject_tD0DC19F06E5F1E72197D131DB0CE792102F6DD69* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Reflection.MemberInfo,System.Type>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mECF144539CFF1B94B4035D26F2D8708CF4ECE358 (Func_2_t204C3EA5E87F5C75AEBFB3A6905D13C36E6D77ED* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t204C3EA5E87F5C75AEBFB3A6905D13C36E6D77ED*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Reflection.MemberInfo,System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisMemberInfo_t_TisType_t_m02A4A1586E121F208524412843D2E73E75B82ECE (RuntimeObject* ___0_source, Func_2_t204C3EA5E87F5C75AEBFB3A6905D13C36E6D77ED* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t204C3EA5E87F5C75AEBFB3A6905D13C36E6D77ED*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___0_source, ___1_selector, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___0_source, method);
}
// System.Boolean System.Linq.Enumerable::Any<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisType_t_m73AC0FF907FFC6B1E9B1C9E8804176B00EB92517 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared)(___0_source, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
inline Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82 List_1_GetEnumerator_mEC612F84FB94B6F1C05FE389B40AC2BF5AECCC59 (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82 (*) (List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Type>::Dispose()
inline void Enumerator_Dispose_m0C7004ACD74285B480FA6DE748AC5A260A415ED1 (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Type>::get_Current()
inline Type_t* Enumerator_get_Current_mC76F3D6F8869AD0D1C9E09E20DE482F801DACD84_inline (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Type>::MoveNext()
inline bool Enumerator_MoveNext_mBC2EB7D8749DC009864CA4499CBE1D84C113A877 (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Dynamitey.DynamicObjects.BaseObject/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE93462627F8F7AF395BA5C116F9CF4A843973223 (U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89* __this, const RuntimeMethod* method) ;
// System.Void Dynamitey.DynamicObjects.BaseDictionary::.ctor(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDictionary__ctor_mF1E9CB68404F41DD8DD8039778D5207DDD9804F6 (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, RuntimeObject* ___0_dict, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Dynamitey.DynamicObjects.Dictionary::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_GetEnumerator_mAC7BAB687876B5EE263FF7737760CBF4FB66682D (Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.ICollection`1<System.String> Dynamitey.DynamicObjects.BaseDictionary::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseDictionary_get_Keys_mFDA630D46CE7360F35ED298724BCBE0228221B12 (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, const RuntimeMethod* method) ;
// System.Void Dynamitey.DynamicObjects.RealType::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealType__ctor_m16F971E6BB0C3B06AABC26BBAC6540A05D8BC397 (RealType_tB10C428C5A3138D31306D717B61BD9DB5D94D6E2* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisType_t_mD8A85ED5733DC32184233D1882A8CBD751581690 (RuntimeObject* ___0_source, Type_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Type_t*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mBCDB5870C52FC5BD2B6AE472A749FC03B9CF8958_gshared)(___0_source, ___1_value, method);
}
// System.Void Dynamitey.DynamicObjects.FauxType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FauxType__ctor_m70E5F130AA844B69B6F674DC2E542AC1370E7560 (FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.String,System.Type> Dynamitey.DynamicObjects.PropretySpecType::get_PropertySpec()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PropretySpecType_get_PropertySpec_mA23BCEF96F67214A9008858B95088EC8F7C842D3_inline (PropretySpecType_t1AF7BB23D8D79BB759AEEFDD2887CB627D331972* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty<System.Reflection.MemberInfo>()
inline RuntimeObject* Enumerable_Empty_TisMemberInfo_t_m25BAFD2F6D0B64D99A07C8770CB779A4ECB34418_inline (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Enumerable_Empty_TisRuntimeObject_mA90CDE158774C34A28C07CEEA9E9EA2A61618238_gshared_inline)(method);
}
// System.Reflection.MemberInfo[] System.Type::GetMember(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* Type_GetMember_mC4456D1BA93A44CF021059F6D46237C0740A6229 (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T[] System.Array::Empty<Dynamitey.DynamicObjects.FauxType>()
inline FauxTypeU5BU5D_tB282B1E2D60B569101A9B95FC8A5EB5B6D77D9C3* Array_Empty_TisFauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86_mE478842AF508E12F2A140B55980C2C9D03DD8D8E_inline (const RuntimeMethod* method)
{
	return ((  FauxTypeU5BU5D_tB282B1E2D60B569101A9B95FC8A5EB5B6D77D9C3* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void Dynamitey.DynamicObjects.AggreType::.ctor(Dynamitey.DynamicObjects.FauxType[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggreType__ctor_m74294A579D6D6F9737AB84EA5BAC5175E20103E2 (AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF* __this, FauxTypeU5BU5D_tB282B1E2D60B569101A9B95FC8A5EB5B6D77D9C3* ___0_types, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Dynamitey.DynamicObjects.FauxType>::.ctor()
inline void List_1__ctor_mB8AB20FCB8FF55B260DB5C27CA726B641F38F31B (List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Dynamitey.DynamicObjects.FauxType>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m6D75A0E374C1D91A18F1B72A1C70632B8C12DA7E (List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// Dynamitey.DynamicObjects.FauxType Dynamitey.DynamicObjects.FauxType::op_Implicit(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* FauxType_op_Implicit_m1690569FA4FF36FAAFE15CD92D12CF6BC7C1C654 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Dynamitey.DynamicObjects.FauxType>::Add(T)
inline void List_1_Add_m918D30D75664D37434BD6DE15A1FC487617724D1_inline (List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9* __this, FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9*, FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void Dynamitey.DynamicObjects.AggreType::AddType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggreType_AddType_m9677F1373C344E6640BA238357E0491ADB30CA25 (AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Dynamitey.DynamicObjects.FauxType>::GetEnumerator()
inline Enumerator_t80594C126F155C439A40B9A6FDC709616B9908AB List_1_GetEnumerator_m30603AACB4C3760ED1E30E53E123FDDB1A5647B2 (List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t80594C126F155C439A40B9A6FDC709616B9908AB (*) (List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Dynamitey.DynamicObjects.FauxType>::Dispose()
inline void Enumerator_Dispose_mD6E325FCC3C2467FAF1C23BFE4666CFDF00CB0A5 (Enumerator_t80594C126F155C439A40B9A6FDC709616B9908AB* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t80594C126F155C439A40B9A6FDC709616B9908AB*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Dynamitey.DynamicObjects.FauxType>::get_Current()
inline FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* Enumerator_get_Current_mAD58F87B7555C5070EBC1CD56E47C3F31A178B17_inline (Enumerator_t80594C126F155C439A40B9A6FDC709616B9908AB* __this, const RuntimeMethod* method)
{
	return ((  FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* (*) (Enumerator_t80594C126F155C439A40B9A6FDC709616B9908AB*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Dynamitey.DynamicObjects.AggreType::AddType(Dynamitey.DynamicObjects.FauxType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggreType_AddType_m948250E70995BEBB2B5C950B219018EDC39A0CA6 (AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF* __this, FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Dynamitey.DynamicObjects.FauxType>::MoveNext()
inline bool Enumerator_MoveNext_m0CA2399ADC967AC7554F9FDB9679FDE2A848B5D9 (Enumerator_t80594C126F155C439A40B9A6FDC709616B9908AB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t80594C126F155C439A40B9A6FDC709616B9908AB*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::.ctor()
inline void List_1__ctor_m1ECCAADF7DB1972688A2B429816CF4E0581D4E2A (List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mFDD370E143C78AA5DA55A6DD602C5B96A81B5341 (List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// System.Void System.Func`2<Dynamitey.DynamicObjects.FauxType,System.Collections.Generic.IEnumerable`1<System.Type>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mDC20CF396957A059D6BEA95C5091BF8C94442517 (Func_2_tE0CD4277724BFD2E4034DD2248C4744F355414DF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE0CD4277724BFD2E4034DD2248C4744F355414DF*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<Dynamitey.DynamicObjects.FauxType,System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
inline RuntimeObject* Enumerable_SelectMany_TisFauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86_TisType_t_mECA1F4E2FB1C9E14D74F3DA06119450F92657C7F (RuntimeObject* ___0_source, Func_2_tE0CD4277724BFD2E4034DD2248C4744F355414DF* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE0CD4277724BFD2E4034DD2248C4744F355414DF*, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mC89216034DEE8779F1AC2D0A984C0ADE855BED00_gshared)(___0_source, ___1_selector, method);
}
// System.Void Dynamitey.DynamicObjects.AggreType/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC358945CC445BA002EB18512EDCB4E6C9ED27DA9 (U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7* __this, const RuntimeMethod* method) ;
// System.Void Dynamitey.DynamicObjects.BaseForwarder::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseForwarder__ctor_mC1CE32A7957DF803603B04117FC6944A51B2B40F (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
// System.Boolean Dynamitey.DynamicObjects.BaseForwarder::TryGetMember(System.Dynamic.GetMemberBinder,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseForwarder_TryGetMember_mD29DE161C4067D632C274F194CA44C0A3CDEF1E4 (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* ___0_binder, RuntimeObject** ___1_result, const RuntimeMethod* method) ;
// System.Boolean Dynamitey.DynamicObjects.BaseForwarder::TryInvokeMember(System.Dynamic.InvokeMemberBinder,System.Object[],System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseForwarder_TryInvokeMember_mF75EA8004A05D0426647BEBDA14AE1A534DAC1B8 (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* ___0_binder, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, RuntimeObject** ___2_result, const RuntimeMethod* method) ;
// System.Boolean Dynamitey.DynamicObjects.BaseForwarder::TryGetIndex(System.Dynamic.GetIndexBinder,System.Object[],System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseForwarder_TryGetIndex_mB0CF1194A6773CC89C942B7323DCAC534942CCD3 (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, GetIndexBinder_t1D53762D30B3AF1DABB042424B93BE4726D176E2* ___0_binder, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_indexes, RuntimeObject** ___2_result, const RuntimeMethod* method) ;
// System.Type Dynamitey.DynamicObjects.LateType::FindType(System.String,System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* LateType_FindType_mC4CD0E09B1D384E02DE1454E1039F640C4145229 (String_t* ___0_typeName, Assembly_t* ___1_assembly, const RuntimeMethod* method) ;
// System.Void Dynamitey.DynamicObjects.LateType/MissingTypeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingTypeException__ctor_mF4F862104A8DC77EBD4577706C8573DD83AB02D3 (MissingTypeException_t1E17592BE936E2955F2DF09792F124CB43E7A7F3* __this, String_t* ___0_typename, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Type,Dynamitey.InvokeContext>::Invoke(T)
inline InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB* Func_2_Invoke_mDD9F5B920BC963820F00D3C9791F2BE9BFBEF609_inline (Func_2_t2E1096262AB59EC17ECDF994BF3F265F9AFF719E* __this, Type_t* ___0_arg, const RuntimeMethod* method)
{
	return ((  InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB* (*) (Func_2_t2E1096262AB59EC17ECDF994BF3F265F9AFF719E*, Type_t*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___0_arg, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty<System.String>()
inline RuntimeObject* Enumerable_Empty_TisString_t_mBCB5B53D37C4DA21A03B6730942638F3E389DD63_inline (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Enumerable_Empty_TisRuntimeObject_mA90CDE158774C34A28C07CEEA9E9EA2A61618238_gshared_inline)(method);
}
// System.String[] System.Text.RegularExpressions.Regex::GetGroupNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Regex_GetGroupNames_m4D44BE23A7B0E9EB6E071215D54588ADCDF8B37C (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Group_t26371E9136D6F43782C487B63C67C5FC4F472881* GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A (GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* __this, String_t* ___0_groupname, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
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
// System.Void Dynamitey.Internal.Optimization.Util::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Util__cctor_m847DF00D2CC9463E295327A4CDDAA2108C74A0DA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util__cctor_m847DF00D2CC9463E295327A4CDDAA2108C74A0DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA18A4AE569C5BE88A9C406093C040EFEBFF78C5E);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_0;
		L_0 = il2cpp_codegen_get_type(_stringLiteralA18A4AE569C5BE88A9C406093C040EFEBFF78C5E, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, Util__cctor_m847DF00D2CC9463E295327A4CDDAA2108C74A0DA_RuntimeMethod_var);
		((Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_StaticFields*)il2cpp_codegen_static_fields_for(Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var))->___IsMono_0 = (bool)((!(((RuntimeObject*)(Type_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		return;
	}
}
// System.Boolean Dynamitey.Internal.Optimization.Util::IsAnonymousType(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Util_IsAnonymousType_m9B4B3AB6EE7C470276AC10EB9973C2C1CADBBFFB (RuntimeObject* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompilerGeneratedAttribute_t0153EC5D2142E566E2D896C49F598756BCAEE771_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* V_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_target;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_target;
		Type_t* L_2 = ((Type_t*)IsInstClass((RuntimeObject*)L_1, Type_t_il2cpp_TypeInfo_var));
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_3 = ___0_target;
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		G_B4_0 = L_4;
	}

IL_0015:
	{
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_5;
		L_5 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(G_B4_0, NULL);
		V_0 = L_5;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_6 = V_0;
		bool L_7;
		L_7 = Type_get_IsNotPublic_mD0DAE7364A17F0DFC839891331B5F3F4AA6E42B3(L_6, NULL);
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_8 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (CompilerGeneratedAttribute_t0153EC5D2142E566E2D896C49F598756BCAEE771_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = CustomAttributeExtensions_IsDefined_mB5EEDAA1B9B5AD75378F5157CD1B85EC5BE2C5ED(L_8, L_10, (bool)0, NULL);
		return L_11;
	}

IL_0035:
	{
		return (bool)0;
	}
}
// System.Object[] Dynamitey.Internal.Optimization.Util::NameArgsIfNecessary(System.Dynamic.CallInfo,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Util_NameArgsIfNecessary_m4ED60446AB2EC21EE4BC77EBE6162F3EAD7FFD73 (CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* ___0_callInfo, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisString_t_mC58E08B0186F31393203A866448A3AAA85C67544_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Repeat_TisString_t_m291B65F038E32131C2534140BBAC0A121AA9BC64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Zip_TisString_t_TisRuntimeObject_TisRuntimeObject_mE8E2428182274C3BC87CEAA55024E87CA88FC522_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Count_mA3AE220565D02224E32753A0186DC33E5C7DD388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CNameArgsIfNecessaryU3Eb__3_0_m2FFA46107FD0A9A291EC8E334637E70C8C9671C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* G_B4_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_1 = NULL;
	RuntimeObject* G_B4_2 = NULL;
	Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* G_B3_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_1 = NULL;
	RuntimeObject* G_B3_2 = NULL;
	{
		CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* L_0 = ___0_callInfo;
		ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C* L_1;
		L_1 = CallInfo_get_ArgumentNames_m9F82072D6C372A2C68C3845B8E78A454050C47D3_inline(L_0, NULL);
		int32_t L_2;
		L_2 = ReadOnlyCollection_1_get_Count_mA3AE220565D02224E32753A0186DC33E5C7DD388(L_1, ReadOnlyCollection_1_get_Count_mA3AE220565D02224E32753A0186DC33E5C7DD388_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		V_0 = L_3;
		goto IL_0061;
	}

IL_0011:
	{
		CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* L_4 = ___0_callInfo;
		int32_t L_5;
		L_5 = CallInfo_get_ArgumentCount_mCA87B8CEE4F758AE8591FF2DB27FAA902635EB46_inline(L_4, NULL);
		CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* L_6 = ___0_callInfo;
		ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C* L_7;
		L_7 = CallInfo_get_ArgumentNames_m9F82072D6C372A2C68C3845B8E78A454050C47D3_inline(L_6, NULL);
		int32_t L_8;
		L_8 = ReadOnlyCollection_1_get_Count_mA3AE220565D02224E32753A0186DC33E5C7DD388(L_7, ReadOnlyCollection_1_get_Count_mA3AE220565D02224E32753A0186DC33E5C7DD388_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, L_8));
		int32_t L_9 = V_1;
		RuntimeObject* L_10;
		L_10 = Enumerable_Repeat_TisString_t_m291B65F038E32131C2534140BBAC0A121AA9BC64((String_t*)NULL, L_9, Enumerable_Repeat_TisString_t_m291B65F038E32131C2534140BBAC0A121AA9BC64_RuntimeMethod_var);
		CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* L_11 = ___0_callInfo;
		ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C* L_12;
		L_12 = CallInfo_get_ArgumentNames_m9F82072D6C372A2C68C3845B8E78A454050C47D3_inline(L_11, NULL);
		RuntimeObject* L_13;
		L_13 = Enumerable_Concat_TisString_t_mC58E08B0186F31393203A866448A3AAA85C67544(L_10, L_12, Enumerable_Concat_TisString_t_mC58E08B0186F31393203A866448A3AAA85C67544_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02_il2cpp_TypeInfo_var);
		Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* L_15 = ((U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1;
		Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* L_16 = L_15;
		G_B3_0 = L_16;
		G_B3_1 = L_14;
		G_B3_2 = L_13;
		if (L_16)
		{
			G_B4_0 = L_16;
			G_B4_1 = L_14;
			G_B4_2 = L_13;
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02_il2cpp_TypeInfo_var);
		U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02* L_17 = ((U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* L_18 = (Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0*)il2cpp_codegen_object_new(Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0_il2cpp_TypeInfo_var);
		Func_3__ctor_mCC90F3D93F52D198EA218CEB0C2779FCCB02DE12(L_18, L_17, (intptr_t)((void*)U3CU3Ec_U3CNameArgsIfNecessaryU3Eb__3_0_m2FFA46107FD0A9A291EC8E334637E70C8C9671C1_RuntimeMethod_var), NULL);
		Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* L_19 = L_18;
		((U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1), (void*)L_19);
		G_B4_0 = L_19;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0056:
	{
		RuntimeObject* L_20;
		L_20 = Enumerable_Zip_TisString_t_TisRuntimeObject_TisRuntimeObject_mE8E2428182274C3BC87CEAA55024E87CA88FC522(G_B4_2, (RuntimeObject*)G_B4_1, G_B4_0, Enumerable_Zip_TisString_t_TisRuntimeObject_TisRuntimeObject_mE8E2428182274C3BC87CEAA55024E87CA88FC522_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21;
		L_21 = Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D(L_20, Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_RuntimeMethod_var);
		V_0 = L_21;
	}

IL_0061:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = V_0;
		return L_22;
	}
}
// System.Object Dynamitey.Internal.Optimization.Util::GetTargetContext(System.Object,System.Type&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Util_GetTargetContext_m0109DB550F657C687469DE491832DE56F415F752 (RuntimeObject* ___0_target, Type_t** ___1_context, bool* ___2_staticContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB* V_0 = NULL;
	Type_t* G_B4_0 = NULL;
	Type_t** G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	Type_t** G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_target;
		V_0 = ((InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB*)IsInstClass((RuntimeObject*)L_0, InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB_il2cpp_TypeInfo_var));
		bool* L_1 = ___2_staticContext;
		*((int8_t*)L_1) = (int8_t)0;
		InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		bool* L_3 = ___2_staticContext;
		InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB* L_4 = V_0;
		bool L_5;
		L_5 = InvokeContext_get_StaticContext_m84CC0E18F0736302B746CA4991CB5C61FCE96A4B_inline(L_4, NULL);
		*((int8_t*)L_3) = (int8_t)L_5;
		Type_t** L_6 = ___1_context;
		InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB* L_7 = V_0;
		Type_t* L_8;
		L_8 = InvokeContext_get_Context_m28D3B3A67DD5FC3434A75DF7CD9B7C5B3E019EB2_inline(L_7, NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_8);
		Type_t** L_9 = ___1_context;
		Type_t** L_10 = ___1_context;
		Type_t* L_11 = *((Type_t**)L_10);
		il2cpp_codegen_runtime_class_init_inline(Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Util_FixContext_m7A268B4DB6153ED092CC8182E0A473236DEDBBAB(L_11, NULL);
		*((RuntimeObject**)L_9) = (RuntimeObject*)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)(RuntimeObject*)L_12);
		InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB* L_13 = V_0;
		RuntimeObject* L_14;
		L_14 = InvokeContext_get_Target_m1FA7638D265F7FDF62F42516F1EAA986BFB123AF_inline(L_13, NULL);
		return L_14;
	}

IL_002d:
	{
		Type_t** L_15 = ___1_context;
		RuntimeObject* L_16 = ___0_target;
		Type_t* L_17 = ((Type_t*)IsInstClass((RuntimeObject*)L_16, Type_t_il2cpp_TypeInfo_var));
		G_B3_0 = L_17;
		G_B3_1 = L_15;
		if (L_17)
		{
			G_B4_0 = L_17;
			G_B4_1 = L_15;
			goto IL_003e;
		}
	}
	{
		RuntimeObject* L_18 = ___0_target;
		Type_t* L_19;
		L_19 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_18, NULL);
		G_B4_0 = L_19;
		G_B4_1 = G_B3_1;
	}

IL_003e:
	{
		*((RuntimeObject**)G_B4_1) = (RuntimeObject*)G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)G_B4_1, (void*)(RuntimeObject*)G_B4_0);
		Type_t** L_20 = ___1_context;
		Type_t** L_21 = ___1_context;
		Type_t* L_22 = *((Type_t**)L_21);
		il2cpp_codegen_runtime_class_init_inline(Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Util_FixContext_m7A268B4DB6153ED092CC8182E0A473236DEDBBAB(L_22, NULL);
		*((RuntimeObject**)L_20) = (RuntimeObject*)L_23;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_20, (void*)(RuntimeObject*)L_23);
		RuntimeObject* L_24 = ___0_target;
		return L_24;
	}
}
// System.Type Dynamitey.Internal.Optimization.Util::FixContext(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Util_FixContext_m7A268B4DB6153ED092CC8182E0A473236DEDBBAB (Type_t* ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_context;
		bool L_1;
		L_1 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		return L_3;
	}

IL_0013:
	{
		Type_t* L_4 = ___0_context;
		return L_4;
	}
}
// System.Boolean Dynamitey.Internal.Optimization.Util::MassageResultBasedOnInterface(Dynamitey.DynamicObjects.BaseObject,System.String,System.Boolean,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Util_MassageResultBasedOnInterface_mEBA4F7D82F8A2553C3FF2722CB13C9345157175C (BaseObject_t25653403C4D95C64840D5F2ADF5290D36025FB04* ___0_target, String_t* ___1_binderName, bool ___2_resultFound, RuntimeObject** ___3_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject** L_0 = ___3_result;
		RuntimeObject* L_1 = *((RuntimeObject**)L_0);
		if (!((AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE*)IsInstClass((RuntimeObject*)L_1, AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE_il2cpp_TypeInfo_var)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		BaseObject_t25653403C4D95C64840D5F2ADF5290D36025FB04* L_2 = ___0_target;
		String_t* L_3 = ___1_binderName;
		bool L_4;
		L_4 = BaseObject_TryTypeForName_m43167E1F0D4748B4EE892E3E4767C7CDD6F2DF80(L_2, L_3, (&V_0), NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)1;
	}

IL_0027:
	{
		bool L_9 = ___2_resultFound;
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		RuntimeObject** L_10 = ___3_result;
		RuntimeObject* L_11 = *((RuntimeObject**)L_10);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject** L_12 = ___3_result;
		RuntimeObject* L_13 = *((RuntimeObject**)L_12);
		if (((BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50*)IsInstClass((RuntimeObject*)L_13, BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_004c;
		}
	}
	{
		Type_t* L_15 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_15) == ((RuntimeObject*)(Type_t*)L_17))))
		{
			goto IL_005c;
		}
	}

IL_004c:
	{
		RuntimeObject** L_18 = ___3_result;
		RuntimeObject** L_19 = ___3_result;
		RuntimeObject* L_20 = *((RuntimeObject**)L_19);
		Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD* L_21 = (Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD*)il2cpp_codegen_object_new(Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD_il2cpp_TypeInfo_var);
		Dictionary__ctor_m55C09C5FEF27D2782CA244B495A2C0CF22068962(L_21, ((RuntimeObject*)Castclass((RuntimeObject*)L_20, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var)), NULL);
		*((RuntimeObject**)L_18) = (RuntimeObject*)L_21;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_18, (void*)(RuntimeObject*)L_21);
		goto IL_00ab;
	}

IL_005c:
	{
		bool L_22 = V_1;
		if (!L_22)
		{
			goto IL_00ab;
		}
	}
	{
		RuntimeObject** L_23 = ___3_result;
		RuntimeObject** L_24 = ___3_result;
		RuntimeObject* L_25 = *((RuntimeObject**)L_24);
		Type_t* L_26 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		RuntimeObject* L_27;
		L_27 = Dynamic_CoerceConvert_m2B1AEC3F9140E403439BA7208420C27E952B1AC8(L_25, L_26, NULL);
		*((RuntimeObject**)L_23) = (RuntimeObject*)L_27;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_23, (void*)(RuntimeObject*)L_27);
		goto IL_00ab;
	}

IL_006b:
	{
		RuntimeObject** L_28 = ___3_result;
		*((RuntimeObject**)L_28) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_28, (void*)(RuntimeObject*)NULL);
		bool L_29 = V_1;
		if (L_29)
		{
			goto IL_0073;
		}
	}
	{
		return (bool)0;
	}

IL_0073:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Delegate_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_32;
		L_32 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_31, NULL);
		Type_t* L_33 = V_0;
		bool L_34;
		L_34 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(31 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_32, L_33);
		if (!L_34)
		{
			goto IL_0091;
		}
	}
	{
		RuntimeObject** L_35 = ___3_result;
		AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE* L_36 = (AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE*)il2cpp_codegen_object_new(AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE_il2cpp_TypeInfo_var);
		AddRemoveMarker__ctor_mEE553E49428A5A7C86E5EE5E2E38541C1E7A3422(L_36, NULL);
		*((RuntimeObject**)L_35) = (RuntimeObject*)L_36;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_35, (void*)(RuntimeObject*)L_36);
	}

IL_0091:
	{
		Type_t* L_37 = V_0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_38;
		L_38 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_37, NULL);
		bool L_39;
		L_39 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_38, NULL);
		if (!L_39)
		{
			goto IL_00ab;
		}
	}
	{
		RuntimeObject** L_40 = ___3_result;
		Type_t* L_41 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42;
		L_42 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Dynamic_InvokeConstructor_mFD18DE93E68EECB04EBEE2F168D2BE59563AE2CC(L_41, L_42, NULL);
		*((RuntimeObject**)L_40) = (RuntimeObject*)L_43;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_40, (void*)(RuntimeObject*)L_43);
	}

IL_00ab:
	{
		return (bool)1;
	}
}
// System.Object[] Dynamitey.Internal.Optimization.Util::GetArgsAndNames(System.Object[],System.String[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Util_GetArgsAndNames_m8816F5BEF9DDA3D9ECEC821A1DE4C67724592471 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** ___1_argNames, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokeArg_tE827CC3B458B4D4169D7BC9EE005167217A19F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_args;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		___0_args = L_1;
	}

IL_000b:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** L_2 = ___1_argNames;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_4);
		V_0 = (bool)0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = ___0_args;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		V_1 = L_6;
		V_2 = 0;
		goto IL_0060;
	}

IL_0024:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = ___0_args;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		V_4 = (String_t*)NULL;
		RuntimeObject* L_11 = V_3;
		if (!((InvokeArg_tE827CC3B458B4D4169D7BC9EE005167217A19F03*)IsInstClass((RuntimeObject*)L_11, InvokeArg_tE827CC3B458B4D4169D7BC9EE005167217A19F03_il2cpp_TypeInfo_var)))
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_12 = V_3;
		String_t* L_13;
		L_13 = InvokeArg_get_Name_m46EDE7CD9DA74A941868836CDF54792F478D6529_inline(((InvokeArg_tE827CC3B458B4D4169D7BC9EE005167217A19F03*)CastclassClass((RuntimeObject*)L_12, InvokeArg_tE827CC3B458B4D4169D7BC9EE005167217A19F03_il2cpp_TypeInfo_var)), NULL);
		V_4 = L_13;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		int32_t L_15 = V_2;
		RuntimeObject* L_16 = V_3;
		RuntimeObject* L_17;
		L_17 = InvokeArg_get_Value_m1C6508974F896248BC4CC6AD96BB64FED504F835_inline(((InvokeArg_tE827CC3B458B4D4169D7BC9EE005167217A19F03*)CastclassClass((RuntimeObject*)L_16, InvokeArg_tE827CC3B458B4D4169D7BC9EE005167217A19F03_il2cpp_TypeInfo_var)), NULL);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (RuntimeObject*)L_17);
		V_0 = (bool)1;
		goto IL_0056;
	}

IL_0052:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = V_1;
		int32_t L_19 = V_2;
		RuntimeObject* L_20 = V_3;
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19), (RuntimeObject*)L_20);
	}

IL_0056:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** L_21 = ___1_argNames;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = *((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248**)L_21);
		int32_t L_23 = V_2;
		String_t* L_24 = V_4;
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23), (String_t*)L_24);
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0060:
	{
		int32_t L_26 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = ___0_args;
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		bool L_28 = V_0;
		if (L_28)
		{
			goto IL_006c;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** L_29 = ___1_argNames;
		*((RuntimeObject**)L_29) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_29, (void*)(RuntimeObject*)NULL);
	}

IL_006c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_1;
		return L_30;
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
// System.Void Dynamitey.Internal.Optimization.Util/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6FFDFA090858ABA77BEFF414237269C599C5A5E7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02* L_0 = (U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02*)il2cpp_codegen_object_new(U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mED20E417F33228C7F82C40A88E5890A7DE4F9FE5(L_0, NULL);
		((U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Dynamitey.Internal.Optimization.Util/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mED20E417F33228C7F82C40A88E5890A7DE4F9FE5 (U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object Dynamitey.Internal.Optimization.Util/<>c::<NameArgsIfNecessary>b__3_0(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CNameArgsIfNecessaryU3Eb__3_0_m2FFA46107FD0A9A291EC8E334637E70C8C9671C1 (U3CU3Ec_t4D78AEEC9EB50863CE833F573CD2346B8ED78D02* __this, String_t* ___0_n, RuntimeObject* ___1_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokeArg_tE827CC3B458B4D4169D7BC9EE005167217A19F03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_n;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___0_n;
		RuntimeObject* L_2 = ___1_v;
		InvokeArg_tE827CC3B458B4D4169D7BC9EE005167217A19F03* L_3 = (InvokeArg_tE827CC3B458B4D4169D7BC9EE005167217A19F03*)il2cpp_codegen_object_new(InvokeArg_tE827CC3B458B4D4169D7BC9EE005167217A19F03_il2cpp_TypeInfo_var);
		InvokeArg__ctor_m80945CD7E21FCE809386E73624DC1CC87D038D19(L_3, L_1, L_2, NULL);
		return L_3;
	}

IL_000b:
	{
		RuntimeObject* L_4 = ___1_v;
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
// System.Globalization.CultureInfo Dynamitey.Internal.Compat.Net40::GetDefaultThreadCurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* Net40_GetDefaultThreadCurrentCulture_m788A4BCB0DF3DD0E1CD3CD4FB3B0D483BB329589 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_DefaultThreadCurrentCulture_m047EEE26F61C62245F728F7BBF2C661432A88DC3(NULL);
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
// System.Void Dynamitey.DynamicObjects.BaseDictionary::.ctor(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDictionary__ctor_mF1E9CB68404F41DD8DD8039778D5207DDD9804F6 (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, RuntimeObject* ___0_dict, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToDictionary_TisKeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_TisString_t_TisRuntimeObject_mD331ACC85009F2F37195D718970488D86AA211FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t4A01D2AA8192C3CEBF056C3C8E056D02A2E65D94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__1_0_m38863A1CCCF725744ADEAA7D7FAFAA1732DA399D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__1_1_m2BC358719CD036899D7533D07BA3FA1290EF9A71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* G_B6_2 = NULL;
	Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* G_B5_2 = NULL;
	Func_2_t4A01D2AA8192C3CEBF056C3C8E056D02A2E65D94* G_B8_0 = NULL;
	Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* G_B8_1 = NULL;
	RuntimeObject* G_B8_2 = NULL;
	BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* G_B8_3 = NULL;
	Func_2_t4A01D2AA8192C3CEBF056C3C8E056D02A2E65D94* G_B7_0 = NULL;
	Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* G_B7_1 = NULL;
	RuntimeObject* G_B7_2 = NULL;
	BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* G_B7_3 = NULL;
	{
		BaseObject__ctor_mCA94140D9F8DD12D04F46A46BE11CFA22B64B3AE(__this, NULL);
		RuntimeObject* L_0 = ___0_dict;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_1, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		__this->____dictionary_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dictionary_1), (void*)L_1);
		return;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_dict;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_3 = ___0_dict;
		__this->____dictionary_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dictionary_1), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_3, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var)));
		return;
	}

IL_002a:
	{
		RuntimeObject* L_4 = ___0_dict;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_il2cpp_TypeInfo_var);
		Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* L_5 = ((U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* L_6 = L_5;
		G_B5_0 = L_6;
		G_B5_1 = L_4;
		G_B5_2 = __this;
		if (L_6)
		{
			G_B6_0 = L_6;
			G_B6_1 = L_4;
			G_B6_2 = __this;
			goto IL_004b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_il2cpp_TypeInfo_var);
		U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983* L_7 = ((U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* L_8 = (Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B*)il2cpp_codegen_object_new(Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B_il2cpp_TypeInfo_var);
		Func_2__ctor_m4F049E2C488DF6CAE688DA027C6FC95F6174AC4C(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__1_0_m38863A1CCCF725744ADEAA7D7FAFAA1732DA399D_RuntimeMethod_var), NULL);
		Func_2_tCB5E9F24E1D4A5E6665E1C163977F878E203DD5B* L_9 = L_8;
		((U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_9);
		G_B6_0 = L_9;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_004b:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_il2cpp_TypeInfo_var);
		Func_2_t4A01D2AA8192C3CEBF056C3C8E056D02A2E65D94* L_10 = ((U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_2;
		Func_2_t4A01D2AA8192C3CEBF056C3C8E056D02A2E65D94* L_11 = L_10;
		G_B7_0 = L_11;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		if (L_11)
		{
			G_B8_0 = L_11;
			G_B8_1 = G_B6_0;
			G_B8_2 = G_B6_1;
			G_B8_3 = G_B6_2;
			goto IL_006a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_il2cpp_TypeInfo_var);
		U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983* L_12 = ((U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t4A01D2AA8192C3CEBF056C3C8E056D02A2E65D94* L_13 = (Func_2_t4A01D2AA8192C3CEBF056C3C8E056D02A2E65D94*)il2cpp_codegen_object_new(Func_2_t4A01D2AA8192C3CEBF056C3C8E056D02A2E65D94_il2cpp_TypeInfo_var);
		Func_2__ctor_m59B880D6D1D92F980BCA3712F85A9945AD311F96(L_13, L_12, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__1_1_m2BC358719CD036899D7533D07BA3FA1290EF9A71_RuntimeMethod_var), NULL);
		Func_2_t4A01D2AA8192C3CEBF056C3C8E056D02A2E65D94* L_14 = L_13;
		((U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_il2cpp_TypeInfo_var))->___U3CU3E9__1_1_2), (void*)L_14);
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_006a:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_15;
		L_15 = Enumerable_ToDictionary_TisKeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_TisString_t_TisRuntimeObject_mD331ACC85009F2F37195D718970488D86AA211FD(G_B8_2, G_B8_1, G_B8_0, Enumerable_ToDictionary_TisKeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_TisString_t_TisRuntimeObject_mD331ACC85009F2F37195D718970488D86AA211FD_RuntimeMethod_var);
		G_B8_3->____dictionary_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_3->____dictionary_1), (void*)L_15);
		return;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseDictionary::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDictionary_get_IsReadOnly_m1BA3DF4E89F2A911DAB75FAAA9CE5632390F8FAD (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Collections.Generic.ICollection`1<System.String> Dynamitey.DynamicObjects.BaseDictionary::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseDictionary_get_Keys_mFDA630D46CE7360F35ED298724BCBE0228221B12 (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____dictionary_1;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Keys() */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.Generic.ICollection`1<System.Object> Dynamitey.DynamicObjects.BaseDictionary::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseDictionary_get_Values_m016C895C294CA74AF4836319E4F045F500691CD6 (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____dictionary_1;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Values() */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Dynamitey.DynamicObjects.BaseDictionary::GetDynamicMemberNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseDictionary_GetDynamicMemberNames_mC1FF7D48BAA1EE35043BBEFB731C5BD532426B5F (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisString_t_mC58E08B0186F31393203A866448A3AAA85C67544_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Distinct_TisString_t_m1E99E758E2A5605D0EE48F5715C69AF1096BF99B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = DynamicObject_GetDynamicMemberNames_mEF4E8037197C0DB45BB654687E97B7BF94C28852(__this, NULL);
		RuntimeObject* L_1 = __this->____dictionary_1;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Keys() */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3;
		L_3 = Enumerable_Concat_TisString_t_mC58E08B0186F31393203A866448A3AAA85C67544(L_0, L_2, Enumerable_Concat_TisString_t_mC58E08B0186F31393203A866448A3AAA85C67544_RuntimeMethod_var);
		RuntimeObject* L_4;
		L_4 = Enumerable_Distinct_TisString_t_m1E99E758E2A5605D0EE48F5715C69AF1096BF99B(L_3, Enumerable_Distinct_TisString_t_m1E99E758E2A5605D0EE48F5715C69AF1096BF99B_RuntimeMethod_var);
		return L_4;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseDictionary::TryGetMember(System.Dynamic.GetMemberBinder,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDictionary_TryGetMember_m2AA3815C0009FEB3766FA4EF1CF88D6838BD3E7F (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* ___0_binder, RuntimeObject** ___1_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____dictionary_1;
		GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* L_1 = ___0_binder;
		String_t* L_2;
		L_2 = GetMemberBinder_get_Name_mCE0671772897ED1E0575E3BE2C06CAB8D52019C4_inline(L_1, NULL);
		RuntimeObject** L_3 = ___1_result;
		bool L_4;
		L_4 = InterfaceFuncInvoker2< bool, String_t*, RuntimeObject** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0, L_2, L_3);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* L_5 = ___0_binder;
		String_t* L_6;
		L_6 = GetMemberBinder_get_Name_mCE0671772897ED1E0575E3BE2C06CAB8D52019C4_inline(L_5, NULL);
		RuntimeObject** L_7 = ___1_result;
		il2cpp_codegen_runtime_class_init_inline(Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Util_MassageResultBasedOnInterface_mEBA4F7D82F8A2553C3FF2722CB13C9345157175C(__this, L_6, (bool)1, L_7, NULL);
		return L_8;
	}

IL_0023:
	{
		RuntimeObject** L_9 = ___1_result;
		*((RuntimeObject**)L_9) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)(RuntimeObject*)NULL);
		GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* L_10 = ___0_binder;
		String_t* L_11;
		L_11 = GetMemberBinder_get_Name_mCE0671772897ED1E0575E3BE2C06CAB8D52019C4_inline(L_10, NULL);
		RuntimeObject** L_12 = ___1_result;
		il2cpp_codegen_runtime_class_init_inline(Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Util_MassageResultBasedOnInterface_mEBA4F7D82F8A2553C3FF2722CB13C9345157175C(__this, L_11, (bool)0, L_12, NULL);
		return L_13;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseDictionary::TryInvokeMember(System.Dynamic.InvokeMemberBinder,System.Object[],System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDictionary_TryInvokeMember_m746F27C5C7FB85D652AE07FAAB03355E28F3D5C3 (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* ___0_binder, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, RuntimeObject** ___2_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokeHelper_tA25ABC5A6EC0BD7ED13472FE1C2F0860DFF00285_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->____dictionary_1;
		InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* L_1 = ___0_binder;
		String_t* L_2;
		L_2 = InvokeMemberBinder_get_Name_m17B9EDADDC4EF3BF49C34A34D65D0D0ACF5EB9A8_inline(L_1, NULL);
		RuntimeObject** L_3 = ___2_result;
		bool L_4;
		L_4 = InterfaceFuncInvoker2< bool, String_t*, RuntimeObject** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0, L_2, L_3);
		if (!L_4)
		{
			goto IL_0074;
		}
	}
	{
		RuntimeObject** L_5 = ___2_result;
		RuntimeObject* L_6 = *((RuntimeObject**)L_5);
		V_0 = ((Delegate_t*)IsInstClass((RuntimeObject*)L_6, Delegate_t_il2cpp_TypeInfo_var));
		RuntimeObject** L_7 = ___2_result;
		RuntimeObject* L_8 = *((RuntimeObject**)L_7);
		if (L_8)
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* L_9 = ___0_binder;
		CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* L_10;
		L_10 = InvokeMemberBinder_get_CallInfo_m8776D2724544514F1B807F0BF73C38283C61432C_inline(L_9, NULL);
		ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C* L_11;
		L_11 = CallInfo_get_ArgumentNames_m9F82072D6C372A2C68C3845B8E78A454050C47D3_inline(L_10, NULL);
		bool L_12;
		L_12 = Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D(L_11, Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_0048;
		}
	}
	{
		Delegate_t* L_13 = V_0;
		if (!L_13)
		{
			goto IL_0048;
		}
	}
	try
	{// begin try (depth: 1)
		RuntimeObject** L_14 = ___2_result;
		Delegate_t* L_15 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(InvokeHelper_tA25ABC5A6EC0BD7ED13472FE1C2F0860DFF00285_il2cpp_TypeInfo_var);
		RuntimeObject* L_17;
		L_17 = InvokeHelper_InvokeMethodDelegate_mFC2D5D40CE3622DA995AA57B191845575EDD1D01(__this, L_15, L_16, NULL);
		*((RuntimeObject**)L_14) = (RuntimeObject*)L_17;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_14, (void*)(RuntimeObject*)L_17);
		goto IL_0065;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0043;
		}
		throw e;
	}

CATCH_0043:
	{// begin catch(Microsoft.CSharp.RuntimeBinder.RuntimeBinderException)
		RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8* L_18 = ((RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*));;
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0083;
	}// end catch (depth: 1)

IL_0048:
	{
	}
	try
	{// begin try (depth: 1)
		RuntimeObject** L_19 = ___2_result;
		RuntimeObject** L_20 = ___2_result;
		RuntimeObject* L_21 = *((RuntimeObject**)L_20);
		InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* L_22 = ___0_binder;
		CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* L_23;
		L_23 = InvokeMemberBinder_get_CallInfo_m8776D2724544514F1B807F0BF73C38283C61432C_inline(L_22, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25;
		L_25 = Util_NameArgsIfNecessary_m4ED60446AB2EC21EE4BC77EBE6162F3EAD7FFD73(L_23, L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		RuntimeObject* L_26;
		L_26 = Dynamic_Invoke_m522AF8A8214C34FFC8B62A9EF266038442D9E148(L_21, L_25, NULL);
		*((RuntimeObject**)L_19) = (RuntimeObject*)L_26;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_19, (void*)(RuntimeObject*)L_26);
		goto IL_0065;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0060;
		}
		throw e;
	}

CATCH_0060:
	{// begin catch(Microsoft.CSharp.RuntimeBinder.RuntimeBinderException)
		RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8* L_27 = ((RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*));;
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0083;
	}// end catch (depth: 1)

IL_0065:
	{
		InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* L_28 = ___0_binder;
		String_t* L_29;
		L_29 = InvokeMemberBinder_get_Name_m17B9EDADDC4EF3BF49C34A34D65D0D0ACF5EB9A8_inline(L_28, NULL);
		RuntimeObject** L_30 = ___2_result;
		il2cpp_codegen_runtime_class_init_inline(Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Util_MassageResultBasedOnInterface_mEBA4F7D82F8A2553C3FF2722CB13C9345157175C(__this, L_29, (bool)1, L_30, NULL);
		return L_31;
	}

IL_0074:
	{
		InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* L_32 = ___0_binder;
		String_t* L_33;
		L_33 = InvokeMemberBinder_get_Name_m17B9EDADDC4EF3BF49C34A34D65D0D0ACF5EB9A8_inline(L_32, NULL);
		RuntimeObject** L_34 = ___2_result;
		il2cpp_codegen_runtime_class_init_inline(Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Util_MassageResultBasedOnInterface_mEBA4F7D82F8A2553C3FF2722CB13C9345157175C(__this, L_33, (bool)0, L_34, NULL);
		return L_35;
	}

IL_0083:
	{
		bool L_36 = V_1;
		return L_36;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseDictionary::TrySetMember(System.Dynamic.SetMemberBinder,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDictionary_TrySetMember_m01AE29517FCECF56202E16EB981422E153226759 (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F* ___0_binder, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F* L_0 = ___0_binder;
		String_t* L_1;
		L_1 = SetMemberBinder_get_Name_mE683668DE73BFB110F155E377E26B506960A7B42_inline(L_0, NULL);
		RuntimeObject* L_2 = ___1_value;
		BaseDictionary_SetProperty_m110913D1116E8BBCF893C4FC9CF8C0147F8B6A2A(__this, L_1, L_2, NULL);
		return (bool)1;
	}
}
// System.Void Dynamitey.DynamicObjects.BaseDictionary::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDictionary_Add_mD4C37C28B7D12861AF60347CCB6DD052DD370BAD (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&___0_item), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		RuntimeObject* L_1;
		L_1 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&___0_item), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		BaseDictionary_SetProperty_m110913D1116E8BBCF893C4FC9CF8C0147F8B6A2A(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseDictionary::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDictionary_Contains_m62B11A78B8A9AADC1214169F51BBD2926699E8DB (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t7FAFDB77857BA6F1396E710E9F065944B2183233_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____dictionary_1;
		KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_1 = ___0_item;
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Contains(T) */, ICollection_1_t7FAFDB77857BA6F1396E710E9F065944B2183233_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void Dynamitey.DynamicObjects.BaseDictionary::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDictionary_CopyTo_m360F372EC0467EA6FE92FD6A87431AAECCA49CBD (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, KeyValuePair_2U5BU5D_tB0707823AD77DFC250A1B32BFDE51BCC2B93F6B1* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t7FAFDB77857BA6F1396E710E9F065944B2183233_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____dictionary_1;
		KeyValuePair_2U5BU5D_tB0707823AD77DFC250A1B32BFDE51BCC2B93F6B1* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_tB0707823AD77DFC250A1B32BFDE51BCC2B93F6B1*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CopyTo(T[],System.Int32) */, ICollection_1_t7FAFDB77857BA6F1396E710E9F065944B2183233_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseDictionary::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDictionary_Remove_m4012A644BF5C14477B9AAF3165AF5916C3823988 (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&___0_item), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		bool L_1;
		L_1 = BaseDictionary_TryGetValue_m26105E32F99AABDCC4544154D93C8DEFF36B5EE8(__this, L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&___0_item), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		RuntimeObject* L_3 = V_0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)L_3))))
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4;
		L_4 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&___0_item), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		bool L_5;
		L_5 = BaseDictionary_Remove_m8253CAB6689C30745FB17F209CEF1B149746F0CB(__this, L_4, NULL);
	}

IL_0029:
	{
		return (bool)0;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseDictionary::ContainsKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDictionary_ContainsKey_m2BCBF8FC2386CACAE4793B15A0FB1AAFE4ED8A48 (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____dictionary_1;
		String_t* L_1 = ___0_key;
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::ContainsKey(TKey) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void Dynamitey.DynamicObjects.BaseDictionary::Add(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDictionary_Add_mCC17B594967BC0BFA8A9FC04ED92FB97EA438BB2 (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		BaseDictionary_SetProperty_m110913D1116E8BBCF893C4FC9CF8C0147F8B6A2A(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseDictionary::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDictionary_Remove_m8253CAB6689C30745FB17F209CEF1B149746F0CB (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____dictionary_1;
		String_t* L_1 = ___0_key;
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::Remove(TKey) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0, L_1);
		String_t* L_3 = ___0_key;
		VirtualActionInvoker1< String_t* >::Invoke(32 /* System.Void Dynamitey.DynamicObjects.BaseDictionary::OnPropertyChanged(System.String) */, __this, L_3);
		return L_2;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseDictionary::TryGetValue(System.String,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDictionary_TryGetValue_m26105E32F99AABDCC4544154D93C8DEFF36B5EE8 (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, String_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____dictionary_1;
		String_t* L_1 = ___0_key;
		RuntimeObject** L_2 = ___1_value;
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, String_t*, RuntimeObject** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Void Dynamitey.DynamicObjects.BaseDictionary::SetProperty(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDictionary_SetProperty_m110913D1116E8BBCF893C4FC9CF8C0147F8B6A2A (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____dictionary_1;
		String_t* L_1 = ___0_key;
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, String_t*, RuntimeObject** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0, L_1, (&V_0));
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_3 = ___1_value;
		RuntimeObject* L_4 = V_0;
		if ((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)L_4)))
		{
			goto IL_0028;
		}
	}

IL_0014:
	{
		RuntimeObject* L_5 = __this->____dictionary_1;
		String_t* L_6 = ___0_key;
		RuntimeObject* L_7 = ___1_value;
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		String_t* L_8 = ___0_key;
		VirtualActionInvoker1< String_t* >::Invoke(32 /* System.Void Dynamitey.DynamicObjects.BaseDictionary::OnPropertyChanged(System.String) */, __this, L_8);
	}

IL_0028:
	{
		return;
	}
}
// System.Void Dynamitey.DynamicObjects.BaseDictionary::OnPropertyChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseDictionary_OnPropertyChanged_m6ACC087AF2E5E3529954AFF8C5695173C8EFDD3F (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral338D5E4AE706E512E35E1465CB650855F31990DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_0 = __this->___PropertyChanged_2;
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_1 = __this->___PropertyChanged_2;
		String_t* L_2 = ___0_key;
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_3 = (PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321*)il2cpp_codegen_object_new(PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321_il2cpp_TypeInfo_var);
		PropertyChangedEventArgs__ctor_mE3C901440BE057E5F17062BA316019C0B53A39B5(L_3, L_2, NULL);
		PropertyChangedEventHandler_Invoke_m040B3056C279FDDC4EC678519D5D415771905298_inline(L_1, __this, L_3, NULL);
		PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* L_4 = __this->___PropertyChanged_2;
		PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* L_5 = (PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321*)il2cpp_codegen_object_new(PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321_il2cpp_TypeInfo_var);
		PropertyChangedEventArgs__ctor_mE3C901440BE057E5F17062BA316019C0B53A39B5(L_5, _stringLiteral338D5E4AE706E512E35E1465CB650855F31990DD, NULL);
		PropertyChangedEventHandler_Invoke_m040B3056C279FDDC4EC678519D5D415771905298_inline(L_4, __this, L_5, NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseDictionary::Equals(Dynamitey.DynamicObjects.Dictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDictionary_Equals_m3987FDE4356ADAEFA286C92DAA427946A8F0F49F (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD* ___0_other, const RuntimeMethod* method) 
{
	{
		Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD* L_1 = ___0_other;
		if ((!(((RuntimeObject*)(BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50*)__this) == ((RuntimeObject*)(Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD* L_2 = ___0_other;
		RuntimeObject* L_3 = ((BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50*)L_2)->____dictionary_1;
		RuntimeObject* L_4 = __this->____dictionary_1;
		bool L_5;
		L_5 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_3, L_4, NULL);
		return L_5;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseDictionary::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseDictionary_Equals_m23C7203CB3ECEE3236805CCF32BC414641A594D9 (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_obj;
		if ((!(((RuntimeObject*)(BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50*)__this) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		RuntimeObject* L_2 = ___0_obj;
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		if ((((RuntimeObject*)(Type_t*)L_3) == ((RuntimeObject*)(Type_t*)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_6 = __this->____dictionary_1;
		RuntimeObject* L_7 = ___0_obj;
		bool L_8;
		L_8 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_6, L_7);
		return L_8;
	}

IL_002a:
	{
		RuntimeObject* L_9 = ___0_obj;
		bool L_10;
		L_10 = BaseDictionary_Equals_m3987FDE4356ADAEFA286C92DAA427946A8F0F49F(__this, ((Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD*)CastclassClass((RuntimeObject*)((Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD*)CastclassClass((RuntimeObject*)L_9, Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD_il2cpp_TypeInfo_var)), Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD_il2cpp_TypeInfo_var)), NULL);
		return L_10;
	}
}
// System.Int32 Dynamitey.DynamicObjects.BaseDictionary::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseDictionary_GetHashCode_mE1A4ACA5C4A86934BD5010912FCC4CE5BA20CAB5 (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____dictionary_1;
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.String Dynamitey.DynamicObjects.BaseDictionary::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseDictionary_ToString_mDE64D15EEBD7D2EC3A312FE6F8C0973DFC836F47 (BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____dictionary_1;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
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
// System.Void Dynamitey.DynamicObjects.BaseDictionary/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2574F61253DB08AB059F2CEC6F42C2CCDB4B532C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983* L_0 = (U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983*)il2cpp_codegen_object_new(U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m954ABE34C7BFD237EF868A1C842961F860E0C885(L_0, NULL);
		((U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Dynamitey.DynamicObjects.BaseDictionary/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m954ABE34C7BFD237EF868A1C842961F860E0C885 (U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Dynamitey.DynamicObjects.BaseDictionary/<>c::<.ctor>b__1_0(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3C_ctorU3Eb__1_0_m38863A1CCCF725744ADEAA7D7FAFAA1732DA399D (U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983* __this, KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ___0_k, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&___0_k), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		return L_0;
	}
}
// System.Object Dynamitey.DynamicObjects.BaseDictionary/<>c::<.ctor>b__1_1(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_ctorU3Eb__1_1_m2BC358719CD036899D7533D07BA3FA1290EF9A71 (U3CU3Ec_tD40C2C98D5990ABB10AA928EB7D42AFD327EC983* __this, KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&___0_v), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
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
// System.Void Dynamitey.DynamicObjects.BaseForwarder::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseForwarder__ctor_mC1CE32A7957DF803603B04117FC6944A51B2B40F (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) 
{
	{
		BaseObject__ctor_mCA94140D9F8DD12D04F46A46BE11CFA22B64B3AE(__this, NULL);
		RuntimeObject* L_0 = ___0_target;
		BaseForwarder_set_Target_mC74CA9B8B90361064A8A0D8D1364309D483C048A_inline(__this, L_0, NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Dynamitey.DynamicObjects.BaseForwarder::GetDynamicMemberNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseForwarder_GetDynamicMemberNames_m1F5687613F112DD626BC2B57D377177E9D6DDDA0 (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = Dynamic_GetMemberNames_m76EE907A535CCB21FF9A045AFBC2843F59F5CCE6(L_0, (bool)1, NULL);
		bool L_2;
		L_2 = Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D(L_1, Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Dynamic_GetMemberNames_m76EE907A535CCB21FF9A045AFBC2843F59F5CCE6(L_3, (bool)0, NULL);
		return L_4;
	}

IL_0020:
	{
		RuntimeObject* L_5;
		L_5 = DynamicObject_GetDynamicMemberNames_mEF4E8037197C0DB45BB654687E97B7BF94C28852(__this, NULL);
		return L_5;
	}
}
// System.Object Dynamitey.DynamicObjects.BaseForwarder::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseForwarder_get_Target_m7BF2CB975DB08AADAC16D6609F9EB4B93008D855 (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTargetU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Dynamitey.DynamicObjects.BaseForwarder::set_Target(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseForwarder_set_Target_mC74CA9B8B90361064A8A0D8D1364309D483C048A (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTargetU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseForwarder_get_CallTarget_mAC686F65AE3ACB4FCECF5EB051423BBFE1A85C88 (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = BaseForwarder_get_Target_m7BF2CB975DB08AADAC16D6609F9EB4B93008D855_inline(__this, NULL);
		return L_0;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseForwarder::TryGetMember(System.Dynamic.GetMemberBinder,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseForwarder_TryGetMember_mD29DE161C4067D632C274F194CA44C0A3CDEF1E4 (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* ___0_binder, RuntimeObject** ___1_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		RuntimeObject** L_1 = ___1_result;
		*((RuntimeObject**)L_1) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)NULL);
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* L_3 = ___0_binder;
		String_t* L_4;
		L_4 = GetMemberBinder_get_Name_mCE0671772897ED1E0575E3BE2C06CAB8D52019C4_inline(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Dynamic_InvokeIsEvent_m96091BDE3009C1B77C7AE5B0C6CCC7AE76849620(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject** L_6 = ___1_result;
		AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE* L_7 = (AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE*)il2cpp_codegen_object_new(AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE_il2cpp_TypeInfo_var);
		AddRemoveMarker__ctor_mEE553E49428A5A7C86E5EE5E2E38541C1E7A3422(L_7, NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_7);
		return (bool)1;
	}

IL_0029:
	{
	}
	try
	{// begin try (depth: 1)
		RuntimeObject** L_8 = ___1_result;
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* L_10 = ___0_binder;
		String_t* L_11;
		L_11 = GetMemberBinder_get_Name_mCE0671772897ED1E0575E3BE2C06CAB8D52019C4_inline(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		RuntimeObject* L_12;
		L_12 = Dynamic_InvokeGet_m380CCA014FE3D60D245D555B1FED8911D3D05699(L_9, L_11, NULL);
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_12);
		goto IL_0047;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003f;
		}
		throw e;
	}

CATCH_003f:
	{// begin catch(Microsoft.CSharp.RuntimeBinder.RuntimeBinderException)
		RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8* L_13 = ((RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*));;
		RuntimeObject** L_14 = ___1_result;
		*((RuntimeObject**)L_14) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_14, (void*)(RuntimeObject*)NULL);
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0049;
	}// end catch (depth: 1)

IL_0047:
	{
		return (bool)1;
	}

IL_0049:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseForwarder::TryInvoke(System.Dynamic.InvokeBinder,System.Object[],System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseForwarder_TryInvoke_m87AFFCA7FA7578DA44CA0BC69A9626D0F883F0CD (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, InvokeBinder_tC5AB6E0A532F16789BA5B26EA123C0DD75F8D44B* ___0_binder, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, RuntimeObject** ___2_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		RuntimeObject** L_1 = ___2_result;
		*((RuntimeObject**)L_1) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)NULL);
		return (bool)0;
	}

IL_000d:
	{
		InvokeBinder_tC5AB6E0A532F16789BA5B26EA123C0DD75F8D44B* L_2 = ___0_binder;
		CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* L_3;
		L_3 = InvokeBinder_get_CallInfo_m96F6E83E1F2E1027808B19E01A285B08E07BCA79_inline(L_2, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Util_NameArgsIfNecessary_m4ED60446AB2EC21EE4BC77EBE6162F3EAD7FFD73(L_3, L_4, NULL);
		V_0 = L_5;
	}
	try
	{// begin try (depth: 1)
		RuntimeObject** L_6 = ___2_result;
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = Dynamic_Invoke_m522AF8A8214C34FFC8B62A9EF266038442D9E148(L_7, L_8, NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_9);
		goto IL_0043;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002a;
		}
		throw e;
	}

CATCH_002a:
	{// begin catch(Microsoft.CSharp.RuntimeBinder.RuntimeBinderException)
		{
			RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8* L_10 = ((RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*));;
			RuntimeObject** L_11 = ___2_result;
			*((RuntimeObject**)L_11) = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)(RuntimeObject*)NULL);
		}
		try
		{// begin try (depth: 2)
			RuntimeObject* L_12;
			L_12 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = V_0;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var)));
			Dynamic_InvokeAction_mB4A4311D81149CC0A4470AF27D523CE7F82218D3(L_12, L_13, NULL);
			goto IL_0041;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_003c;
			}
			throw e;
		}

CATCH_003c:
		{// begin catch(Microsoft.CSharp.RuntimeBinder.RuntimeBinderException)
			RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8* L_14 = ((RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*));;
			V_1 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0045;
		}// end catch (depth: 2)

IL_0041:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0043;
		}
	}// end catch (depth: 1)

IL_0043:
	{
		return (bool)1;
	}

IL_0045:
	{
		bool L_15 = V_1;
		return L_15;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseForwarder::TryInvokeMember(System.Dynamic.InvokeMemberBinder,System.Object[],System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseForwarder_TryInvokeMember_mF75EA8004A05D0426647BEBDA14AE1A534DAC1B8 (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* ___0_binder, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, RuntimeObject** ___2_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallSite_1_Create_m2ADA39A0277EC8AE511F2EDD854A6D8B4177A98E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t421C938039F8E10BD0A70BD6EBF5552B97B1D3F1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokeMemberName_t15017A0A53860EC61EE428B9C66FE4B2EBFF9F72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41EB7338111709DC5E46F0211FFBFE58571FEA59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F2AE0F8116A589D6CEEBB73DD63F49B8D58E21C);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_1 = NULL;
	InvokeMemberName_t15017A0A53860EC61EE428B9C66FE4B2EBFF9F72* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		RuntimeObject** L_1 = ___2_result;
		*((RuntimeObject**)L_1) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)NULL);
		return (bool)0;
	}

IL_000d:
	{
		InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* L_2 = ___0_binder;
		CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* L_3;
		L_3 = InvokeMemberBinder_get_CallInfo_m8776D2724544514F1B807F0BF73C38283C61432C_inline(L_2, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Util_NameArgsIfNecessary_m4ED60446AB2EC21EE4BC77EBE6162F3EAD7FFD73(L_3, L_4, NULL);
		V_0 = L_5;
		V_1 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL;
	}
	try
	{// begin try (depth: 1)
		{
			CallSite_1_t08E2DD601A1F45A70F279694431BBEAC2A9B6860* L_6 = ((U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_il2cpp_TypeInfo_var))->___U3CU3Ep__0_0;
			if (L_6)
			{
				goto IL_0047_1;
			}
		}
		{
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (IList_1_t421C938039F8E10BD0A70BD6EBF5552B97B1D3F1_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD_0_0_0_var) };
			Type_t* L_10;
			L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
			CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* L_11;
			L_11 = Binder_Convert_m3CD7C4B493AE6978964AC63603D14542AF256A1C(0, L_8, L_10, NULL);
			CallSite_1_t08E2DD601A1F45A70F279694431BBEAC2A9B6860* L_12;
			L_12 = CallSite_1_Create_m2ADA39A0277EC8AE511F2EDD854A6D8B4177A98E(L_11, CallSite_1_Create_m2ADA39A0277EC8AE511F2EDD854A6D8B4177A98E_RuntimeMethod_var);
			((U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_il2cpp_TypeInfo_var))->___U3CU3Ep__0_0 = L_12;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_il2cpp_TypeInfo_var))->___U3CU3Ep__0_0), (void*)L_12);
		}

IL_0047_1:
		{
			CallSite_1_t08E2DD601A1F45A70F279694431BBEAC2A9B6860* L_13 = ((U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_il2cpp_TypeInfo_var))->___U3CU3Ep__0_0;
			Func_3_t3CEC7A6511B4D5CE29409D3111C2104016115D96* L_14 = L_13->___Target_3;
			CallSite_1_t08E2DD601A1F45A70F279694431BBEAC2A9B6860* L_15 = ((U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_il2cpp_TypeInfo_var))->___U3CU3Ep__0_0;
			InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* L_16 = ___0_binder;
			il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
			RuntimeObject* L_17;
			L_17 = Dynamic_InvokeGet_m380CCA014FE3D60D245D555B1FED8911D3D05699(L_16, _stringLiteral4F2AE0F8116A589D6CEEBB73DD63F49B8D58E21C, NULL);
			RuntimeObject* L_18;
			L_18 = Func_3_Invoke_m8C259D3724480970753252E3AA79B56E3B43955C_inline(L_14, L_15, L_17, NULL);
			V_3 = L_18;
			RuntimeObject* L_19 = V_3;
			if (!L_19)
			{
				goto IL_0071_1;
			}
		}
		{
			RuntimeObject* L_20 = V_3;
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_21;
			L_21 = Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89(L_20, Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89_RuntimeMethod_var);
			V_1 = L_21;
		}

IL_0071_1:
		{
			goto IL_0078;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0073;
		}
		throw e;
	}

CATCH_0073:
	{// begin catch(Microsoft.CSharp.RuntimeBinder.RuntimeBinderException)
		RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8* L_22 = ((RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*));;
		V_1 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0078;
	}// end catch (depth: 1)

IL_0078:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_23 = V_1;
		if (L_23)
		{
			goto IL_00da;
		}
	}
	try
	{// begin try (depth: 1)
		{
			CallSite_1_t08E2DD601A1F45A70F279694431BBEAC2A9B6860* L_24 = ((U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_il2cpp_TypeInfo_var))->___U3CU3Ep__1_1;
			if (L_24)
			{
				goto IL_00a6_1;
			}
		}
		{
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (IList_1_t421C938039F8E10BD0A70BD6EBF5552B97B1D3F1_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_26;
			L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD_0_0_0_var) };
			Type_t* L_28;
			L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
			CallSiteBinder_tAFC922BA1DD2D1AEF6BC2742E0E375F936D5059F* L_29;
			L_29 = Binder_Convert_m3CD7C4B493AE6978964AC63603D14542AF256A1C(0, L_26, L_28, NULL);
			CallSite_1_t08E2DD601A1F45A70F279694431BBEAC2A9B6860* L_30;
			L_30 = CallSite_1_Create_m2ADA39A0277EC8AE511F2EDD854A6D8B4177A98E(L_29, CallSite_1_Create_m2ADA39A0277EC8AE511F2EDD854A6D8B4177A98E_RuntimeMethod_var);
			((U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_il2cpp_TypeInfo_var))->___U3CU3Ep__1_1 = L_30;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_il2cpp_TypeInfo_var))->___U3CU3Ep__1_1), (void*)L_30);
		}

IL_00a6_1:
		{
			CallSite_1_t08E2DD601A1F45A70F279694431BBEAC2A9B6860* L_31 = ((U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_il2cpp_TypeInfo_var))->___U3CU3Ep__1_1;
			Func_3_t3CEC7A6511B4D5CE29409D3111C2104016115D96* L_32 = L_31->___Target_3;
			CallSite_1_t08E2DD601A1F45A70F279694431BBEAC2A9B6860* L_33 = ((U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Eo__13_tBFA9C69B29C06C545921B720D5B6E0A6AF180C81_il2cpp_TypeInfo_var))->___U3CU3Ep__1_1;
			InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* L_34 = ___0_binder;
			il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
			RuntimeObject* L_35;
			L_35 = Dynamic_InvokeGet_m380CCA014FE3D60D245D555B1FED8911D3D05699(L_34, _stringLiteral41EB7338111709DC5E46F0211FFBFE58571FEA59, NULL);
			RuntimeObject* L_36;
			L_36 = Func_3_Invoke_m8C259D3724480970753252E3AA79B56E3B43955C_inline(L_32, L_33, L_35, NULL);
			V_4 = L_36;
			RuntimeObject* L_37 = V_4;
			if (!L_37)
			{
				goto IL_00d3_1;
			}
		}
		{
			RuntimeObject* L_38 = V_4;
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_39;
			L_39 = Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89(L_38, Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89_RuntimeMethod_var);
			V_1 = L_39;
		}

IL_00d3_1:
		{
			goto IL_00da;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{// begin catch(Microsoft.CSharp.RuntimeBinder.RuntimeBinderException)
		RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8* L_40 = ((RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*));;
		V_1 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00da;
	}// end catch (depth: 1)

IL_00da:
	{
		il2cpp_codegen_runtime_class_init_inline(InvokeMemberName_t15017A0A53860EC61EE428B9C66FE4B2EBFF9F72_il2cpp_TypeInfo_var);
		Func_3_tB9572AF27A112C8867960178BAE296CD9C03DE10* L_41 = ((InvokeMemberName_t15017A0A53860EC61EE428B9C66FE4B2EBFF9F72_StaticFields*)il2cpp_codegen_static_fields_for(InvokeMemberName_t15017A0A53860EC61EE428B9C66FE4B2EBFF9F72_il2cpp_TypeInfo_var))->___Create_3;
		InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* L_42 = ___0_binder;
		String_t* L_43;
		L_43 = InvokeMemberBinder_get_Name_m17B9EDADDC4EF3BF49C34A34D65D0D0ACF5EB9A8_inline(L_42, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_44 = V_1;
		InvokeMemberName_t15017A0A53860EC61EE428B9C66FE4B2EBFF9F72* L_45;
		L_45 = Func_3_Invoke_m314A658720125ADEBFBA6ABB3839753D7D6F0F32_inline(L_41, L_43, L_44, NULL);
		V_2 = L_45;
	}
	try
	{// begin try (depth: 1)
		RuntimeObject** L_46 = ___2_result;
		RuntimeObject* L_47;
		L_47 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		InvokeMemberName_t15017A0A53860EC61EE428B9C66FE4B2EBFF9F72* L_48 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_49 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		RuntimeObject* L_50;
		L_50 = Dynamic_InvokeMember_m0AC5B1FCDCE0726769DADC97E92D130EE58BCE99(L_47, L_48, L_49, NULL);
		*((RuntimeObject**)L_46) = (RuntimeObject*)L_50;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_46, (void*)(RuntimeObject*)L_50);
		goto IL_0118;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00fd;
		}
		throw e;
	}

CATCH_00fd:
	{// begin catch(Microsoft.CSharp.RuntimeBinder.RuntimeBinderException)
		{
			RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8* L_51 = ((RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*));;
			RuntimeObject** L_52 = ___2_result;
			*((RuntimeObject**)L_52) = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_52, (void*)(RuntimeObject*)NULL);
		}
		try
		{// begin try (depth: 2)
			RuntimeObject* L_53;
			L_53 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
			InvokeMemberName_t15017A0A53860EC61EE428B9C66FE4B2EBFF9F72* L_54 = V_2;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55 = V_0;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var)));
			Dynamic_InvokeMemberAction_m4D965979F0EE81DB7448B578F0BFD81955920BC0(L_53, L_54, L_55, NULL);
			goto IL_0116;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0110;
			}
			throw e;
		}

CATCH_0110:
		{// begin catch(Microsoft.CSharp.RuntimeBinder.RuntimeBinderException)
			RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8* L_56 = ((RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*));;
			V_5 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_011a;
		}// end catch (depth: 2)

IL_0116:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0118;
		}
	}// end catch (depth: 1)

IL_0118:
	{
		return (bool)1;
	}

IL_011a:
	{
		bool L_57 = V_5;
		return L_57;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseForwarder::TrySetMember(System.Dynamic.SetMemberBinder,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseForwarder_TrySetMember_mC559A42413957F8BFC20E824F150BE70E77449B5 (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F* ___0_binder, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F* L_2 = ___0_binder;
		String_t* L_3;
		L_3 = SetMemberBinder_get_Name_mE683668DE73BFB110F155E377E26B506960A7B42_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Dynamic_InvokeIsEvent_m96091BDE3009C1B77C7AE5B0C6CCC7AE76849620(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_5 = ___1_value;
		if (!((AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE*)IsInstClass((RuntimeObject*)L_5, AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE_il2cpp_TypeInfo_var)))
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_6 = ___1_value;
		V_0 = ((AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE*)IsInstClass((RuntimeObject*)L_6, AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE_il2cpp_TypeInfo_var));
		AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE* L_7 = V_0;
		bool L_8;
		L_8 = AddRemoveMarker_get_IsAdding_mC96816002E139136EF319DED9E1B1BAFDE607A32_inline(L_7, NULL);
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F* L_10 = ___0_binder;
		String_t* L_11;
		L_11 = SetMemberBinder_get_Name_mE683668DE73BFB110F155E377E26B506960A7B42_inline(L_10, NULL);
		AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE* L_12 = V_0;
		RuntimeObject* L_13;
		L_13 = AddRemoveMarker_get_Delegate_mDB26A638B2C00F48C6136C98953946E831EC4297_inline(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		Dynamic_InvokeAddAssignMember_m9D207231D71BEAF63774003B5DFEE5A9D0350394(L_9, L_11, L_13, NULL);
		goto IL_0064;
	}

IL_004d:
	{
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F* L_15 = ___0_binder;
		String_t* L_16;
		L_16 = SetMemberBinder_get_Name_mE683668DE73BFB110F155E377E26B506960A7B42_inline(L_15, NULL);
		AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE* L_17 = V_0;
		RuntimeObject* L_18;
		L_18 = AddRemoveMarker_get_Delegate_mDB26A638B2C00F48C6136C98953946E831EC4297_inline(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		Dynamic_InvokeSubtractAssignMember_mBE5E4A53DCF844EDF1643EE14CCE48B5BE64C903(L_14, L_16, L_18, NULL);
	}

IL_0064:
	{
		return (bool)1;
	}

IL_0066:
	{
	}
	try
	{// begin try (depth: 1)
		RuntimeObject* L_19;
		L_19 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F* L_20 = ___0_binder;
		String_t* L_21;
		L_21 = SetMemberBinder_get_Name_mE683668DE73BFB110F155E377E26B506960A7B42_inline(L_20, NULL);
		RuntimeObject* L_22 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		RuntimeObject* L_23;
		L_23 = Dynamic_InvokeSet_mFC4739F453D39553B72EF140D0A58BA1A6483C1B(L_19, L_21, L_22, NULL);
		V_1 = (bool)1;
		goto IL_0083;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007e;
		}
		throw e;
	}

CATCH_007e:
	{// begin catch(Microsoft.CSharp.RuntimeBinder.RuntimeBinderException)
		RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8* L_24 = ((RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*));;
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0083;
	}// end catch (depth: 1)

IL_0083:
	{
		bool L_25 = V_1;
		return L_25;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseForwarder::TryGetIndex(System.Dynamic.GetIndexBinder,System.Object[],System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseForwarder_TryGetIndex_mB0CF1194A6773CC89C942B7323DCAC534942CCD3 (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, GetIndexBinder_t1D53762D30B3AF1DABB042424B93BE4726D176E2* ___0_binder, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_indexes, RuntimeObject** ___2_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		RuntimeObject** L_1 = ___2_result;
		*((RuntimeObject**)L_1) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)NULL);
		return (bool)0;
	}

IL_000d:
	{
		GetIndexBinder_t1D53762D30B3AF1DABB042424B93BE4726D176E2* L_2 = ___0_binder;
		CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* L_3;
		L_3 = GetIndexBinder_get_CallInfo_m4F37AEAD31CBC4CD7CC2A3773A5318AFD78A5531_inline(L_2, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___1_indexes;
		il2cpp_codegen_runtime_class_init_inline(Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Util_NameArgsIfNecessary_m4ED60446AB2EC21EE4BC77EBE6162F3EAD7FFD73(L_3, L_4, NULL);
		V_0 = L_5;
	}
	try
	{// begin try (depth: 1)
		RuntimeObject** L_6 = ___2_result;
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = Dynamic_InvokeGetIndex_m408BD7DD67403BE3861593630D567D6543F99EA2(L_7, L_8, NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_9);
		V_1 = (bool)1;
		goto IL_0034;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002c;
		}
		throw e;
	}

CATCH_002c:
	{// begin catch(Microsoft.CSharp.RuntimeBinder.RuntimeBinderException)
		RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8* L_10 = ((RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*));;
		RuntimeObject** L_11 = ___2_result;
		*((RuntimeObject**)L_11) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)(RuntimeObject*)NULL);
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0034;
	}// end catch (depth: 1)

IL_0034:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseForwarder::TrySetIndex(System.Dynamic.SetIndexBinder,System.Object[],System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseForwarder_TrySetIndex_m24DAB854482D782DFD36DBEA1C80282E58C60B36 (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, SetIndexBinder_t89B08F3E4022E4855941688FDEB172820F355898* ___0_binder, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_indexes, RuntimeObject* ___2_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_indexes;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		RuntimeObject* L_4 = ___2_value;
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		RuntimeObject* L_5;
		L_5 = Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33((RuntimeObject*)L_1, (RuntimeObject*)L_3, Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D(L_5, Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_RuntimeMethod_var);
		V_0 = L_6;
		SetIndexBinder_t89B08F3E4022E4855941688FDEB172820F355898* L_7 = ___0_binder;
		CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* L_8;
		L_8 = SetIndexBinder_get_CallInfo_m8F235FA11DE5093DC60516A0809D4279DAA21682_inline(L_7, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = Util_NameArgsIfNecessary_m4ED60446AB2EC21EE4BC77EBE6162F3EAD7FFD73(L_8, L_9, NULL);
		V_1 = L_10;
	}
	try
	{// begin try (depth: 1)
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		RuntimeObject* L_13;
		L_13 = Dynamic_InvokeSetIndex_m86A576D187E38707E9169C03C8FC5E7414144350(L_11, L_12, NULL);
		V_2 = (bool)1;
		goto IL_0043;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003e;
		}
		throw e;
	}

CATCH_003e:
	{// begin catch(Microsoft.CSharp.RuntimeBinder.RuntimeBinderException)
		RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8* L_14 = ((RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*));;
		V_2 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0043;
	}// end catch (depth: 1)

IL_0043:
	{
		bool L_15 = V_2;
		return L_15;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseForwarder::Equals(Dynamitey.DynamicObjects.BaseForwarder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseForwarder_Equals_mF7D033DFA66245C28F5BFEC1678BD8B6816DAFE8 (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* ___0_other, const RuntimeMethod* method) 
{
	{
		BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_000d:
	{
		BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* L_2 = ___0_other;
		if ((!(((RuntimeObject*)(BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD*)__this) == ((RuntimeObject*)(BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD*)L_2))))
		{
			goto IL_0013;
		}
	}
	{
		return (bool)1;
	}

IL_0013:
	{
		BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* L_3 = ___0_other;
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, L_3);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		bool L_6;
		L_6 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseForwarder::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseForwarder_Equals_m68A8BCFA820F013F50F67DC5866BCB8DDBD31353 (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_obj;
		if ((!(((RuntimeObject*)(BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD*)__this) == ((RuntimeObject*)(RuntimeObject*)L_2))))
		{
			goto IL_0013;
		}
	}
	{
		return (bool)1;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___0_obj;
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		if ((((RuntimeObject*)(Type_t*)L_4) == ((RuntimeObject*)(Type_t*)L_6)))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}

IL_0027:
	{
		RuntimeObject* L_7 = ___0_obj;
		bool L_8;
		L_8 = BaseForwarder_Equals_mF7D033DFA66245C28F5BFEC1678BD8B6816DAFE8(__this, ((BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD*)CastclassClass((RuntimeObject*)L_7, BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD_il2cpp_TypeInfo_var)), NULL);
		return L_8;
	}
}
// System.Int32 Dynamitey.DynamicObjects.BaseForwarder::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseForwarder_GetHashCode_m899F581FA67C697B0471348F61146E190A0D6508 (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		return L_2;
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
// System.Object Dynamitey.DynamicObjects.BaseForwarder/AddRemoveMarker::get_Delegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AddRemoveMarker_get_Delegate_mDB26A638B2C00F48C6136C98953946E831EC4297 (AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CDelegateU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseForwarder/AddRemoveMarker::get_IsAdding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AddRemoveMarker_get_IsAdding_mC96816002E139136EF319DED9E1B1BAFDE607A32 (AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsAddingU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Dynamitey.DynamicObjects.BaseForwarder/AddRemoveMarker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddRemoveMarker__ctor_mEE553E49428A5A7C86E5EE5E2E38541C1E7A3422 (AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE* __this, const RuntimeMethod* method) 
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
// System.Void Dynamitey.DynamicObjects.BaseObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject__ctor_mCA94140D9F8DD12D04F46A46BE11CFA22B64B3AE (BaseObject_t25653403C4D95C64840D5F2ADF5290D36025FB04* __this, const RuntimeMethod* method) 
{
	{
		DynamicObject__ctor_m9F66B57E58703941DCACBC2126F03F8E85ECF1F0(__this, NULL);
		return;
	}
}
// System.Boolean Dynamitey.DynamicObjects.BaseObject::TryTypeForName(System.String,System.Type&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseObject_TryTypeForName_m43167E1F0D4748B4EE892E3E4767C7CDD6F2DF80 (BaseObject_t25653403C4D95C64840D5F2ADF5290D36025FB04* __this, String_t* ___0_binderName, Type_t** ___1_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisType_t_m73AC0FF907FFC6B1E9B1C9E8804176B00EB92517_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisMemberInfo_t_TisType_t_m02A4A1586E121F208524412843D2E73E75B82ECE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0C7004ACD74285B480FA6DE748AC5A260A415ED1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBC2EB7D8749DC009864CA4499CBE1D84C113A877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC76F3D6F8869AD0D1C9E09E20DE482F801DACD84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t204C3EA5E87F5C75AEBFB3A6905D13C36E6D77ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEquivalentType_t33B5C606F9F867E9CE74E9DB45C40696D8343636_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEC612F84FB94B6F1C05FE389B40AC2BF5AECCC59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CTryTypeForNameU3Eb__1_0_mD1E5F245135B305940B842169956BA1EBFBD83EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* V_1 = NULL;
	Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Type_t* V_3 = NULL;
	Func_2_t204C3EA5E87F5C75AEBFB3A6905D13C36E6D77ED* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t204C3EA5E87F5C75AEBFB3A6905D13C36E6D77ED* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		V_0 = __this;
		Type_t** L_0 = ___1_type;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		RuntimeObject* L_1 = V_0;
		FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* L_2;
		L_2 = InterfaceFuncInvoker0< FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* >::Invoke(0 /* Dynamitey.DynamicObjects.FauxType Dynamitey.DynamicObjects.IEquivalentType::get_EquivalentType() */, IEquivalentType_t33B5C606F9F867E9CE74E9DB45C40696D8343636_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		RuntimeObject* L_3 = V_0;
		FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* L_4;
		L_4 = InterfaceFuncInvoker0< FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* >::Invoke(0 /* Dynamitey.DynamicObjects.FauxType Dynamitey.DynamicObjects.IEquivalentType::get_EquivalentType() */, IEquivalentType_t33B5C606F9F867E9CE74E9DB45C40696D8343636_il2cpp_TypeInfo_var, L_3);
		String_t* L_5 = ___0_binderName;
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker1< RuntimeObject*, String_t* >::Invoke(4 /* System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Dynamitey.DynamicObjects.FauxType::GetMember(System.String) */, L_4, L_5);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89_il2cpp_TypeInfo_var);
		Func_2_t204C3EA5E87F5C75AEBFB3A6905D13C36E6D77ED* L_7 = ((U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Func_2_t204C3EA5E87F5C75AEBFB3A6905D13C36E6D77ED* L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89_il2cpp_TypeInfo_var);
		U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89* L_9 = ((U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t204C3EA5E87F5C75AEBFB3A6905D13C36E6D77ED* L_10 = (Func_2_t204C3EA5E87F5C75AEBFB3A6905D13C36E6D77ED*)il2cpp_codegen_object_new(Func_2_t204C3EA5E87F5C75AEBFB3A6905D13C36E6D77ED_il2cpp_TypeInfo_var);
		Func_2__ctor_mECF144539CFF1B94B4035D26F2D8708CF4ECE358(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3CTryTypeForNameU3Eb__1_0_mD1E5F245135B305940B842169956BA1EBFBD83EC_RuntimeMethod_var), NULL);
		Func_2_t204C3EA5E87F5C75AEBFB3A6905D13C36E6D77ED* L_11 = L_10;
		((U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_11);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
	}

IL_003a:
	{
		RuntimeObject* L_12;
		L_12 = Enumerable_Select_TisMemberInfo_t_TisType_t_m02A4A1586E121F208524412843D2E73E75B82ECE(G_B4_1, G_B4_0, Enumerable_Select_TisMemberInfo_t_TisType_t_m02A4A1586E121F208524412843D2E73E75B82ECE_RuntimeMethod_var);
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_13;
		L_13 = Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E(L_12, Enumerable_ToList_TisType_t_m3125955DBCA26A14A2096CCD57F9CC3B200EB81E_RuntimeMethod_var);
		V_1 = L_13;
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_14 = V_1;
		bool L_15;
		L_15 = Enumerable_Any_TisType_t_m73AC0FF907FFC6B1E9B1C9E8804176B00EB92517(L_14, Enumerable_Any_TisType_t_m73AC0FF907FFC6B1E9B1C9E8804176B00EB92517_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_004f;
		}
	}
	{
		return (bool)0;
	}

IL_004f:
	{
		List_1_t4B77DB8D00EC6CC4705EB5F2FCC506472734EA72* L_16 = V_1;
		Enumerator_tFB039FFDFD6F1B1FDE7236B0014E2C263445BB82 L_17;
		L_17 = List_1_GetEnumerator_mEC612F84FB94B6F1C05FE389B40AC2BF5AECCC59(L_16, List_1_GetEnumerator_mEC612F84FB94B6F1C05FE389B40AC2BF5AECCC59_RuntimeMethod_var);
		V_2 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0094:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0C7004ACD74285B480FA6DE748AC5A260A415ED1((&V_2), Enumerator_Dispose_m0C7004ACD74285B480FA6DE748AC5A260A415ED1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0089_1;
			}

IL_0058_1:
			{
				Type_t* L_18;
				L_18 = Enumerator_get_Current_mC76F3D6F8869AD0D1C9E09E20DE482F801DACD84_inline((&V_2), Enumerator_get_Current_mC76F3D6F8869AD0D1C9E09E20DE482F801DACD84_RuntimeMethod_var);
				V_3 = L_18;
				Type_t** L_19 = ___1_type;
				Type_t* L_20 = *((Type_t**)L_19);
				if (!L_20)
				{
					goto IL_0078_1;
				}
			}
			{
				Type_t** L_21 = ___1_type;
				Type_t* L_22 = *((Type_t**)L_21);
				String_t* L_23;
				L_23 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Reflection.MemberInfo::get_Name() */, L_22);
				Type_t* L_24 = V_3;
				String_t* L_25;
				L_25 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Reflection.MemberInfo::get_Name() */, L_24);
				bool L_26;
				L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, L_25, NULL);
				if (!L_26)
				{
					goto IL_007d_1;
				}
			}

IL_0078_1:
			{
				Type_t** L_27 = ___1_type;
				Type_t* L_28 = V_3;
				*((RuntimeObject**)L_27) = (RuntimeObject*)L_28;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_27, (void*)(RuntimeObject*)L_28);
				goto IL_0089_1;
			}

IL_007d_1:
			{
				Type_t** L_29 = ___1_type;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_31;
				L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
				*((RuntimeObject**)L_29) = (RuntimeObject*)L_31;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_29, (void*)(RuntimeObject*)L_31);
			}

IL_0089_1:
			{
				bool L_32;
				L_32 = Enumerator_MoveNext_mBC2EB7D8749DC009864CA4499CBE1D84C113A877((&V_2), Enumerator_MoveNext_mBC2EB7D8749DC009864CA4499CBE1D84C113A877_RuntimeMethod_var);
				if (L_32)
				{
					goto IL_0058_1;
				}
			}
			{
				goto IL_00a2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
		return (bool)1;
	}
}
// Dynamitey.DynamicObjects.FauxType Dynamitey.DynamicObjects.BaseObject::Dynamitey.DynamicObjects.IEquivalentType.get_EquivalentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* BaseObject_Dynamitey_DynamicObjects_IEquivalentType_get_EquivalentType_m7481B48C3BEFDF3D4E3D2957E02BC37D1F085AC1 (BaseObject_t25653403C4D95C64840D5F2ADF5290D36025FB04* __this, const RuntimeMethod* method) 
{
	{
		FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* L_0 = __this->___U3CDynamitey_DynamicObjects_IEquivalentType_EquivalentTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Dynamitey.DynamicObjects.BaseObject::Dynamitey.DynamicObjects.IEquivalentType.set_EquivalentType(Dynamitey.DynamicObjects.FauxType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseObject_Dynamitey_DynamicObjects_IEquivalentType_set_EquivalentType_m087E3D3ED9041C4B2EFA6813547B2C9336671ADF (BaseObject_t25653403C4D95C64840D5F2ADF5290D36025FB04* __this, FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* ___0_value, const RuntimeMethod* method) 
{
	{
		FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* L_0 = ___0_value;
		__this->___U3CDynamitey_DynamicObjects_IEquivalentType_EquivalentTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDynamitey_DynamicObjects_IEquivalentType_EquivalentTypeU3Ek__BackingField_0), (void*)L_0);
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
// System.Void Dynamitey.DynamicObjects.BaseObject/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7BEF04E94CBD36EF14592C1CB3ADE882E93EB201 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89* L_0 = (U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89*)il2cpp_codegen_object_new(U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE93462627F8F7AF395BA5C116F9CF4A843973223(L_0, NULL);
		((U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Dynamitey.DynamicObjects.BaseObject/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE93462627F8F7AF395BA5C116F9CF4A843973223 (U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Type Dynamitey.DynamicObjects.BaseObject/<>c::<TryTypeForName>b__1_0(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* U3CU3Ec_U3CTryTypeForNameU3Eb__1_0_mD1E5F245135B305940B842169956BA1EBFBD83EC (U3CU3Ec_tA1ADE4C23A55EBE6DE5651F53D8CDD772F5DFC89* __this, MemberInfo_t* ___0_it, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemberInfo_t* V_0 = NULL;
	PropertyInfo_t* V_1 = NULL;
	MethodInfo_t* V_2 = NULL;
	EventInfo_t* V_3 = NULL;
	TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* V_4 = NULL;
	{
		MemberInfo_t* L_0 = ___0_it;
		V_0 = L_0;
		MemberInfo_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		MemberInfo_t* L_2 = V_0;
		PropertyInfo_t* L_3 = ((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_2, PropertyInfo_t_il2cpp_TypeInfo_var));
		V_1 = L_3;
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		MemberInfo_t* L_4 = V_0;
		MethodInfo_t* L_5 = ((MethodInfo_t*)IsInstClass((RuntimeObject*)L_4, MethodInfo_t_il2cpp_TypeInfo_var));
		V_2 = L_5;
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		MemberInfo_t* L_6 = V_0;
		EventInfo_t* L_7 = ((EventInfo_t*)IsInstClass((RuntimeObject*)L_6, EventInfo_t_il2cpp_TypeInfo_var));
		V_3 = L_7;
		if (L_7)
		{
			goto IL_003e;
		}
	}
	{
		MemberInfo_t* L_8 = V_0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_9 = ((TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D*)IsInstClass((RuntimeObject*)L_8, TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D_il2cpp_TypeInfo_var));
		V_4 = L_9;
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		goto IL_0045;
	}

IL_0030:
	{
		PropertyInfo_t* L_10 = V_1;
		Type_t* L_11;
		L_11 = VirtualFuncInvoker0< Type_t* >::Invoke(25 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_10);
		return L_11;
	}

IL_0037:
	{
		MethodInfo_t* L_12 = V_2;
		Type_t* L_13;
		L_13 = VirtualFuncInvoker0< Type_t* >::Invoke(54 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_12);
		return L_13;
	}

IL_003e:
	{
		EventInfo_t* L_14 = V_3;
		Type_t* L_15;
		L_15 = VirtualFuncInvoker0< Type_t* >::Invoke(34 /* System.Type System.Reflection.EventInfo::get_EventHandlerType() */, L_14);
		return L_15;
	}

IL_0045:
	{
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_16 = V_4;
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(39 /* System.Type System.Type::get_UnderlyingSystemType() */, L_16);
		return L_17;
	}

IL_004d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		return L_19;
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
// System.Void Dynamitey.DynamicObjects.Dictionary::.ctor(System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary__ctor_m55C09C5FEF27D2782CA244B495A2C0CF22068962 (Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD* __this, RuntimeObject* ___0_dict, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_dict;
		BaseDictionary__ctor_mF1E9CB68404F41DD8DD8039778D5207DDD9804F6(__this, L_0, NULL);
		return;
	}
}
// System.Int32 Dynamitey.DynamicObjects.Dictionary::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_get_Count_m70FBD6BC96193341E8C8A1A1A6E75539B72C7F6C (Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t7FAFDB77857BA6F1396E710E9F065944B2183233_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50*)__this)->____dictionary_1;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count() */, ICollection_1_t7FAFDB77857BA6F1396E710E9F065944B2183233_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Dynamitey.DynamicObjects.Dictionary::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_GetEnumerator_mAC7BAB687876B5EE263FF7737760CBF4FB66682D (Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1F32F711C91AEBCFA4770668CA067447D2A4F665_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50*)__this)->____dictionary_1;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t1F32F711C91AEBCFA4770668CA067447D2A4F665_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator Dynamitey.DynamicObjects.Dictionary::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_System_Collections_IEnumerable_GetEnumerator_m793E601F808CB177C7170924331399197FFA3E0F (Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = Dictionary_GetEnumerator_mAC7BAB687876B5EE263FF7737760CBF4FB66682D(__this, NULL);
		return L_0;
	}
}
// System.Void Dynamitey.DynamicObjects.Dictionary::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_Clear_mA871E4DCA260D9C8620E8133B5193FD5111FDC04 (Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t7FAFDB77857BA6F1396E710E9F065944B2183233_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = BaseDictionary_get_Keys_mFDA630D46CE7360F35ED298724BCBE0228221B12(__this, NULL);
		RuntimeObject* L_1 = ((BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50*)__this)->____dictionary_1;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Clear() */, ICollection_1_t7FAFDB77857BA6F1396E710E9F065944B2183233_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_0);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_003a;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_003a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0027_1;
			}

IL_0019_1:
			{
				RuntimeObject* L_5 = V_0;
				String_t* L_6;
				L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				String_t* L_7 = V_1;
				VirtualActionInvoker1< String_t* >::Invoke(32 /* System.Void Dynamitey.DynamicObjects.BaseDictionary::OnPropertyChanged(System.String) */, __this, L_7);
			}

IL_0027_1:
			{
				RuntimeObject* L_8 = V_0;
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		return;
	}
}
// System.Object Dynamitey.DynamicObjects.Dictionary::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_get_Item_m99BB39DF6F09D3B451AEFCE9352AB847F6B0C924 (Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((BaseDictionary_t2C250574A93C0E3B341746897FEDBE3168EADA50*)__this)->____dictionary_1;
		String_t* L_1 = ___0_key;
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(TKey) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void Dynamitey.DynamicObjects.Dictionary::set_Item(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_set_Item_m5D7B40BEC172C5380301D4AEB76FD4AE6318A4C8 (Dictionary_t56309A97A421E811DA50458799D84BAC7EA48CDD* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_key;
		RuntimeObject* L_1 = ___1_value;
		BaseDictionary_SetProperty_m110913D1116E8BBCF893C4FC9CF8C0147F8B6A2A(__this, L_0, L_1, NULL);
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
// Dynamitey.DynamicObjects.FauxType Dynamitey.DynamicObjects.FauxType::op_Implicit(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* FauxType_op_Implicit_m1690569FA4FF36FAAFE15CD92D12CF6BC7C1C654 (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealType_tB10C428C5A3138D31306D717B61BD9DB5D94D6E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_type;
		RealType_tB10C428C5A3138D31306D717B61BD9DB5D94D6E2* L_1 = (RealType_tB10C428C5A3138D31306D717B61BD9DB5D94D6E2*)il2cpp_codegen_object_new(RealType_tB10C428C5A3138D31306D717B61BD9DB5D94D6E2_il2cpp_TypeInfo_var);
		RealType__ctor_m16F971E6BB0C3B06AABC26BBAC6540A05D8BC397(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Boolean Dynamitey.DynamicObjects.FauxType::ContainsType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FauxType_ContainsType_m13F537F9A294718D50E552718C47D13E469C2584 (FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisType_t_mD8A85ED5733DC32184233D1882A8CBD751581690_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0;
		L_0 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(5 /* System.Type[] Dynamitey.DynamicObjects.FauxType::GetContainedTypes() */, __this);
		Type_t* L_1 = ___0_type;
		bool L_2;
		L_2 = Enumerable_Contains_TisType_t_mD8A85ED5733DC32184233D1882A8CBD751581690((RuntimeObject*)L_0, L_1, Enumerable_Contains_TisType_t_mD8A85ED5733DC32184233D1882A8CBD751581690_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Dynamitey.DynamicObjects.FauxType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FauxType__ctor_m70E5F130AA844B69B6F674DC2E542AC1370E7560 (FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* __this, const RuntimeMethod* method) 
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
// System.Collections.Generic.IDictionary`2<System.String,System.Type> Dynamitey.DynamicObjects.PropretySpecType::get_PropertySpec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropretySpecType_get_PropertySpec_mA23BCEF96F67214A9008858B95088EC8F7C842D3 (PropretySpecType_t1AF7BB23D8D79BB759AEEFDD2887CB627D331972* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CPropertySpecU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Dynamitey.DynamicObjects.PropretySpecType::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropretySpecType__ctor_mE727B64C12661821D8DB345ADB2DD8021DCAD4F4 (PropretySpecType_t1AF7BB23D8D79BB759AEEFDD2887CB627D331972* __this, RuntimeObject* ___0_propertySpec, const RuntimeMethod* method) 
{
	{
		FauxType__ctor_m70E5F130AA844B69B6F674DC2E542AC1370E7560(__this, NULL);
		RuntimeObject* L_0 = ___0_propertySpec;
		__this->___U3CPropertySpecU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertySpecU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Dynamitey.DynamicObjects.PropretySpecType::GetMember(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropretySpecType_GetMember_m4E23EB99A7652FD3C5106914106F24FCA29DDE6E (PropretySpecType_t1AF7BB23D8D79BB759AEEFDD2887CB627D331972* __this, String_t* ___0_binderName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Empty_TisMemberInfo_t_m25BAFD2F6D0B64D99A07C8770CB779A4ECB34418_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9222FF77FD169B7564BBDA58BE88E87907959D49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeInfoU5BU5D_t1DFAC07F3379698BE8870D7D24D55C4C1AC5FD29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = PropretySpecType_get_PropertySpec_mA23BCEF96F67214A9008858B95088EC8F7C842D3_inline(__this, NULL);
		String_t* L_1 = ___0_binderName;
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, String_t*, Type_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Type>::TryGetValue(TKey,TValue&) */, IDictionary_2_t9222FF77FD169B7564BBDA58BE88E87907959D49_il2cpp_TypeInfo_var, L_0, L_1, (&V_0));
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		TypeInfoU5BU5D_t1DFAC07F3379698BE8870D7D24D55C4C1AC5FD29* L_3 = (TypeInfoU5BU5D_t1DFAC07F3379698BE8870D7D24D55C4C1AC5FD29*)(TypeInfoU5BU5D_t1DFAC07F3379698BE8870D7D24D55C4C1AC5FD29*)SZArrayNew(TypeInfoU5BU5D_t1DFAC07F3379698BE8870D7D24D55C4C1AC5FD29_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeInfoU5BU5D_t1DFAC07F3379698BE8870D7D24D55C4C1AC5FD29* L_4 = L_3;
		Type_t* L_5 = V_0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_6;
		L_6 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_5, NULL);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D*)L_6);
		return (RuntimeObject*)L_4;
	}

IL_0020:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Empty_TisMemberInfo_t_m25BAFD2F6D0B64D99A07C8770CB779A4ECB34418_inline(Enumerable_Empty_TisMemberInfo_t_m25BAFD2F6D0B64D99A07C8770CB779A4ECB34418_RuntimeMethod_var);
		return L_7;
	}
}
// System.Type[] Dynamitey.DynamicObjects.PropretySpecType::GetContainedTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* PropretySpecType_GetContainedTypes_mC89B997CFAED6081C7886B3BAFBA435CC65A5483 (PropretySpecType_t1AF7BB23D8D79BB759AEEFDD2887CB627D331972* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)0);
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
// System.Void Dynamitey.DynamicObjects.RealType::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealType__ctor_m16F971E6BB0C3B06AABC26BBAC6540A05D8BC397 (RealType_tB10C428C5A3138D31306D717B61BD9DB5D94D6E2* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	{
		FauxType__ctor_m70E5F130AA844B69B6F674DC2E542AC1370E7560(__this, NULL);
		Type_t* L_0 = ___0_type;
		__this->___TargetType_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TargetType_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Dynamitey.DynamicObjects.RealType::GetMember(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RealType_GetMember_mDFD37F7D5989817CEF88E10FEB16B7F0EDC26A26 (RealType_tB10C428C5A3138D31306D717B61BD9DB5D94D6E2* __this, String_t* ___0_binderName, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___TargetType_0;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_1;
		L_1 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_0, NULL);
		String_t* L_2 = ___0_binderName;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_3;
		L_3 = Type_GetMember_mC4456D1BA93A44CF021059F6D46237C0740A6229(L_1, L_2, NULL);
		return (RuntimeObject*)L_3;
	}
}
// System.Type[] Dynamitey.DynamicObjects.RealType::GetContainedTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* RealType_GetContainedTypes_mDF0FD2236E39840C48564F98A3102BF6230D8AD7 (RealType_tB10C428C5A3138D31306D717B61BD9DB5D94D6E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = L_0;
		Type_t* L_2 = __this->___TargetType_0;
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_2);
		return L_1;
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
// Dynamitey.DynamicObjects.AggreType Dynamitey.DynamicObjects.AggreType::MakeTypeAppendable(Dynamitey.DynamicObjects.IEquivalentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF* AggreType_MakeTypeAppendable_m7B81B69985CC2C071897443154865E0F71FECE12 (RuntimeObject* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisFauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86_mE478842AF508E12F2A140B55980C2C9D03DD8D8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FauxTypeU5BU5D_tB282B1E2D60B569101A9B95FC8A5EB5B6D77D9C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEquivalentType_t33B5C606F9F867E9CE74E9DB45C40696D8343636_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_type;
		FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* L_1;
		L_1 = InterfaceFuncInvoker0< FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* >::Invoke(0 /* Dynamitey.DynamicObjects.FauxType Dynamitey.DynamicObjects.IEquivalentType::get_EquivalentType() */, IEquivalentType_t33B5C606F9F867E9CE74E9DB45C40696D8343636_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_2 = ___0_type;
		FauxTypeU5BU5D_tB282B1E2D60B569101A9B95FC8A5EB5B6D77D9C3* L_3;
		L_3 = Array_Empty_TisFauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86_mE478842AF508E12F2A140B55980C2C9D03DD8D8E_inline(Array_Empty_TisFauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86_mE478842AF508E12F2A140B55980C2C9D03DD8D8E_RuntimeMethod_var);
		AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF* L_4 = (AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF*)il2cpp_codegen_object_new(AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF_il2cpp_TypeInfo_var);
		AggreType__ctor_m74294A579D6D6F9737AB84EA5BAC5175E20103E2(L_4, L_3, NULL);
		InterfaceActionInvoker1< FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* >::Invoke(1 /* System.Void Dynamitey.DynamicObjects.IEquivalentType::set_EquivalentType(Dynamitey.DynamicObjects.FauxType) */, IEquivalentType_t33B5C606F9F867E9CE74E9DB45C40696D8343636_il2cpp_TypeInfo_var, L_2, L_4);
	}

IL_0018:
	{
		RuntimeObject* L_5 = ___0_type;
		FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* L_6;
		L_6 = InterfaceFuncInvoker0< FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* >::Invoke(0 /* Dynamitey.DynamicObjects.FauxType Dynamitey.DynamicObjects.IEquivalentType::get_EquivalentType() */, IEquivalentType_t33B5C606F9F867E9CE74E9DB45C40696D8343636_il2cpp_TypeInfo_var, L_5);
		if (((AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF*)IsInstClass((RuntimeObject*)L_6, AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF_il2cpp_TypeInfo_var)))
		{
			goto IL_003f;
		}
	}
	{
		RuntimeObject* L_7 = ___0_type;
		FauxTypeU5BU5D_tB282B1E2D60B569101A9B95FC8A5EB5B6D77D9C3* L_8 = (FauxTypeU5BU5D_tB282B1E2D60B569101A9B95FC8A5EB5B6D77D9C3*)(FauxTypeU5BU5D_tB282B1E2D60B569101A9B95FC8A5EB5B6D77D9C3*)SZArrayNew(FauxTypeU5BU5D_tB282B1E2D60B569101A9B95FC8A5EB5B6D77D9C3_il2cpp_TypeInfo_var, (uint32_t)1);
		FauxTypeU5BU5D_tB282B1E2D60B569101A9B95FC8A5EB5B6D77D9C3* L_9 = L_8;
		RuntimeObject* L_10 = ___0_type;
		FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* L_11;
		L_11 = InterfaceFuncInvoker0< FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* >::Invoke(0 /* Dynamitey.DynamicObjects.FauxType Dynamitey.DynamicObjects.IEquivalentType::get_EquivalentType() */, IEquivalentType_t33B5C606F9F867E9CE74E9DB45C40696D8343636_il2cpp_TypeInfo_var, L_10);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86*)L_11);
		AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF* L_12 = (AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF*)il2cpp_codegen_object_new(AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF_il2cpp_TypeInfo_var);
		AggreType__ctor_m74294A579D6D6F9737AB84EA5BAC5175E20103E2(L_12, L_9, NULL);
		InterfaceActionInvoker1< FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* >::Invoke(1 /* System.Void Dynamitey.DynamicObjects.IEquivalentType::set_EquivalentType(Dynamitey.DynamicObjects.FauxType) */, IEquivalentType_t33B5C606F9F867E9CE74E9DB45C40696D8343636_il2cpp_TypeInfo_var, L_7, L_12);
	}

IL_003f:
	{
		RuntimeObject* L_13 = ___0_type;
		FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* L_14;
		L_14 = InterfaceFuncInvoker0< FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* >::Invoke(0 /* Dynamitey.DynamicObjects.FauxType Dynamitey.DynamicObjects.IEquivalentType::get_EquivalentType() */, IEquivalentType_t33B5C606F9F867E9CE74E9DB45C40696D8343636_il2cpp_TypeInfo_var, L_13);
		return ((AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF*)CastclassClass((RuntimeObject*)L_14, AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF_il2cpp_TypeInfo_var));
	}
}
// System.Void Dynamitey.DynamicObjects.AggreType::.ctor(Dynamitey.DynamicObjects.FauxType[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggreType__ctor_m74294A579D6D6F9737AB84EA5BAC5175E20103E2 (AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF* __this, FauxTypeU5BU5D_tB282B1E2D60B569101A9B95FC8A5EB5B6D77D9C3* ___0_types, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m6D75A0E374C1D91A18F1B72A1C70632B8C12DA7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB8AB20FCB8FF55B260DB5C27CA726B641F38F31B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9* L_0 = (List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9*)il2cpp_codegen_object_new(List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9_il2cpp_TypeInfo_var);
		List_1__ctor_mB8AB20FCB8FF55B260DB5C27CA726B641F38F31B(L_0, List_1__ctor_mB8AB20FCB8FF55B260DB5C27CA726B641F38F31B_RuntimeMethod_var);
		__this->___Types_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Types_0), (void*)L_0);
		FauxType__ctor_m70E5F130AA844B69B6F674DC2E542AC1370E7560(__this, NULL);
		List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9* L_1 = __this->___Types_0;
		FauxTypeU5BU5D_tB282B1E2D60B569101A9B95FC8A5EB5B6D77D9C3* L_2 = ___0_types;
		List_1_AddRange_m6D75A0E374C1D91A18F1B72A1C70632B8C12DA7E(L_1, (RuntimeObject*)L_2, List_1_AddRange_m6D75A0E374C1D91A18F1B72A1C70632B8C12DA7E_RuntimeMethod_var);
		return;
	}
}
// System.Void Dynamitey.DynamicObjects.AggreType::AddType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggreType_AddType_m9677F1373C344E6640BA238357E0491ADB30CA25 (AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m918D30D75664D37434BD6DE15A1FC487617724D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_type;
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(6 /* System.Boolean Dynamitey.DynamicObjects.FauxType::ContainsType(System.Type) */, __this, L_0);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9* L_2 = __this->___Types_0;
		Type_t* L_3 = ___0_type;
		FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* L_4;
		L_4 = FauxType_op_Implicit_m1690569FA4FF36FAAFE15CD92D12CF6BC7C1C654(L_3, NULL);
		List_1_Add_m918D30D75664D37434BD6DE15A1FC487617724D1_inline(L_2, L_4, List_1_Add_m918D30D75664D37434BD6DE15A1FC487617724D1_RuntimeMethod_var);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Dynamitey.DynamicObjects.AggreType::AddType(Dynamitey.DynamicObjects.FauxType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggreType_AddType_m948250E70995BEBB2B5C950B219018EDC39A0CA6 (AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF* __this, FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD6E325FCC3C2467FAF1C23BFE4666CFDF00CB0A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0CA2399ADC967AC7554F9FDB9679FDE2A848B5D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAD58F87B7555C5070EBC1CD56E47C3F31A178B17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m918D30D75664D37434BD6DE15A1FC487617724D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m30603AACB4C3760ED1E30E53E123FDDB1A5647B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RealType_tB10C428C5A3138D31306D717B61BD9DB5D94D6E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	int32_t V_1 = 0;
	Type_t* V_2 = NULL;
	Enumerator_t80594C126F155C439A40B9A6FDC709616B9908AB V_3;
	memset((&V_3), 0, sizeof(V_3));
	FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* V_4 = NULL;
	{
		FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* L_0 = ___0_type;
		if (!((RealType_tB10C428C5A3138D31306D717B61BD9DB5D94D6E2*)IsInstClass((RuntimeObject*)L_0, RealType_tB10C428C5A3138D31306D717B61BD9DB5D94D6E2_il2cpp_TypeInfo_var)))
		{
			goto IL_0029;
		}
	}
	{
		FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* L_1 = ___0_type;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2;
		L_2 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(5 /* System.Type[] Dynamitey.DynamicObjects.FauxType::GetContainedTypes() */, L_1);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0022;
	}

IL_0013:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		Type_t* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		Type_t* L_7 = V_2;
		AggreType_AddType_m9677F1373C344E6640BA238357E0491ADB30CA25(__this, L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0022:
	{
		int32_t L_9 = V_1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0029:
	{
		FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* L_11 = ___0_type;
		if (!((AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF*)IsInstClass((RuntimeObject*)L_11, AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF_il2cpp_TypeInfo_var)))
		{
			goto IL_006e;
		}
	}
	{
		FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* L_12 = ___0_type;
		List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9* L_13 = ((AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF*)CastclassClass((RuntimeObject*)L_12, AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF_il2cpp_TypeInfo_var))->___Types_0;
		Enumerator_t80594C126F155C439A40B9A6FDC709616B9908AB L_14;
		L_14 = List_1_GetEnumerator_m30603AACB4C3760ED1E30E53E123FDDB1A5647B2(L_13, List_1_GetEnumerator_m30603AACB4C3760ED1E30E53E123FDDB1A5647B2_RuntimeMethod_var);
		V_3 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD6E325FCC3C2467FAF1C23BFE4666CFDF00CB0A5((&V_3), Enumerator_Dispose_mD6E325FCC3C2467FAF1C23BFE4666CFDF00CB0A5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0055_1;
			}

IL_0044_1:
			{
				FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* L_15;
				L_15 = Enumerator_get_Current_mAD58F87B7555C5070EBC1CD56E47C3F31A178B17_inline((&V_3), Enumerator_get_Current_mAD58F87B7555C5070EBC1CD56E47C3F31A178B17_RuntimeMethod_var);
				V_4 = L_15;
				FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* L_16 = V_4;
				AggreType_AddType_m948250E70995BEBB2B5C950B219018EDC39A0CA6(__this, L_16, NULL);
			}

IL_0055_1:
			{
				bool L_17;
				L_17 = Enumerator_MoveNext_m0CA2399ADC967AC7554F9FDB9679FDE2A848B5D9((&V_3), Enumerator_MoveNext_m0CA2399ADC967AC7554F9FDB9679FDE2A848B5D9_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_0044_1;
				}
			}
			{
				goto IL_007a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9* L_18 = __this->___Types_0;
		FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* L_19 = ___0_type;
		List_1_Add_m918D30D75664D37434BD6DE15A1FC487617724D1_inline(L_18, L_19, List_1_Add_m918D30D75664D37434BD6DE15A1FC487617724D1_RuntimeMethod_var);
	}

IL_007a:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Dynamitey.DynamicObjects.AggreType::GetMember(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AggreType_GetMember_m88E4BBA3862B035147EE130A2EC96F8961786A8D (AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF* __this, String_t* ___0_binderName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD6E325FCC3C2467FAF1C23BFE4666CFDF00CB0A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0CA2399ADC967AC7554F9FDB9679FDE2A848B5D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAD58F87B7555C5070EBC1CD56E47C3F31A178B17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mFDD370E143C78AA5DA55A6DD602C5B96A81B5341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m30603AACB4C3760ED1E30E53E123FDDB1A5647B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1ECCAADF7DB1972688A2B429816CF4E0581D4E2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4* V_0 = NULL;
	Enumerator_t80594C126F155C439A40B9A6FDC709616B9908AB V_1;
	memset((&V_1), 0, sizeof(V_1));
	FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* V_2 = NULL;
	{
		List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4* L_0 = (List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4*)il2cpp_codegen_object_new(List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4_il2cpp_TypeInfo_var);
		List_1__ctor_m1ECCAADF7DB1972688A2B429816CF4E0581D4E2A(L_0, List_1__ctor_m1ECCAADF7DB1972688A2B429816CF4E0581D4E2A_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9* L_1 = __this->___Types_0;
		Enumerator_t80594C126F155C439A40B9A6FDC709616B9908AB L_2;
		L_2 = List_1_GetEnumerator_m30603AACB4C3760ED1E30E53E123FDDB1A5647B2(L_1, List_1_GetEnumerator_m30603AACB4C3760ED1E30E53E123FDDB1A5647B2_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD6E325FCC3C2467FAF1C23BFE4666CFDF00CB0A5((&V_1), Enumerator_Dispose_mD6E325FCC3C2467FAF1C23BFE4666CFDF00CB0A5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0029_1;
			}

IL_0014_1:
			{
				FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* L_3;
				L_3 = Enumerator_get_Current_mAD58F87B7555C5070EBC1CD56E47C3F31A178B17_inline((&V_1), Enumerator_get_Current_mAD58F87B7555C5070EBC1CD56E47C3F31A178B17_RuntimeMethod_var);
				V_2 = L_3;
				List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4* L_4 = V_0;
				FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* L_5 = V_2;
				String_t* L_6 = ___0_binderName;
				RuntimeObject* L_7;
				L_7 = VirtualFuncInvoker1< RuntimeObject*, String_t* >::Invoke(4 /* System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Dynamitey.DynamicObjects.FauxType::GetMember(System.String) */, L_5, L_6);
				List_1_AddRange_mFDD370E143C78AA5DA55A6DD602C5B96A81B5341(L_4, L_7, List_1_AddRange_mFDD370E143C78AA5DA55A6DD602C5B96A81B5341_RuntimeMethod_var);
			}

IL_0029_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_m0CA2399ADC967AC7554F9FDB9679FDE2A848B5D9((&V_1), Enumerator_MoveNext_m0CA2399ADC967AC7554F9FDB9679FDE2A848B5D9_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4* L_9 = V_0;
		return L_9;
	}
}
// System.Type[] Dynamitey.DynamicObjects.AggreType::GetContainedTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* AggreType_GetContainedTypes_m80637E99DB3988B9136FCD162F7D50A5DA7AB4DD (AggreType_tF794D8EBAABBBB7C6470FF1C348846404BE374EF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisFauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86_TisType_t_mECA1F4E2FB1C9E14D74F3DA06119450F92657C7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE0CD4277724BFD2E4034DD2248C4744F355414DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetContainedTypesU3Eb__8_0_m5844074FBBEACADA0A42E55CE66BE5FB61CF9F5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tE0CD4277724BFD2E4034DD2248C4744F355414DF* G_B2_0 = NULL;
	List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9* G_B2_1 = NULL;
	Func_2_tE0CD4277724BFD2E4034DD2248C4744F355414DF* G_B1_0 = NULL;
	List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9* G_B1_1 = NULL;
	{
		List_1_tB0A2BA931EE299261EDB197919839AEBC06E82C9* L_0 = __this->___Types_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7_il2cpp_TypeInfo_var);
		Func_2_tE0CD4277724BFD2E4034DD2248C4744F355414DF* L_1 = ((U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1;
		Func_2_tE0CD4277724BFD2E4034DD2248C4744F355414DF* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7_il2cpp_TypeInfo_var);
		U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7* L_3 = ((U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tE0CD4277724BFD2E4034DD2248C4744F355414DF* L_4 = (Func_2_tE0CD4277724BFD2E4034DD2248C4744F355414DF*)il2cpp_codegen_object_new(Func_2_tE0CD4277724BFD2E4034DD2248C4744F355414DF_il2cpp_TypeInfo_var);
		Func_2__ctor_mDC20CF396957A059D6BEA95C5091BF8C94442517(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CGetContainedTypesU3Eb__8_0_m5844074FBBEACADA0A42E55CE66BE5FB61CF9F5B_RuntimeMethod_var), NULL);
		Func_2_tE0CD4277724BFD2E4034DD2248C4744F355414DF* L_5 = L_4;
		((U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_SelectMany_TisFauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86_TisType_t_mECA1F4E2FB1C9E14D74F3DA06119450F92657C7F(G_B2_1, G_B2_0, Enumerable_SelectMany_TisFauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86_TisType_t_mECA1F4E2FB1C9E14D74F3DA06119450F92657C7F_RuntimeMethod_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7;
		L_7 = Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89(L_6, Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89_RuntimeMethod_var);
		return L_7;
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
// System.Void Dynamitey.DynamicObjects.AggreType/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m49C41CF5BCC5FABD46D8D15F9501CB54C5C1A4C3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7* L_0 = (U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7*)il2cpp_codegen_object_new(U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC358945CC445BA002EB18512EDCB4E6C9ED27DA9(L_0, NULL);
		((U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Dynamitey.DynamicObjects.AggreType/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC358945CC445BA002EB18512EDCB4E6C9ED27DA9 (U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> Dynamitey.DynamicObjects.AggreType/<>c::<GetContainedTypes>b__8_0(Dynamitey.DynamicObjects.FauxType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetContainedTypesU3Eb__8_0_m5844074FBBEACADA0A42E55CE66BE5FB61CF9F5B (U3CU3Ec_tEBF55671D07E232850720C58B1D698DA5AF051B7* __this, FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* ___0_it, const RuntimeMethod* method) 
{
	{
		FauxType_t2DACED3CFF2DA73CFE700FBB6179601DE66C8F86* L_0 = ___0_it;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1;
		L_1 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(5 /* System.Type[] Dynamitey.DynamicObjects.FauxType::GetContainedTypes() */, L_0);
		return (RuntimeObject*)L_1;
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
// System.Void Dynamitey.DynamicObjects.Get::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Get__ctor_m619B7215425FED39144AC2D49D06538E1E6B010B (Get_tB559CB2E572ECAB626FF27F8463C2E55DF640A21* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_target;
		BaseForwarder__ctor_mC1CE32A7957DF803603B04117FC6944A51B2B40F(__this, L_0, NULL);
		return;
	}
}
// System.Boolean Dynamitey.DynamicObjects.Get::TryGetMember(System.Dynamic.GetMemberBinder,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Get_TryGetMember_m2716AE7FD3AFE66540F3015B5CEAB79F7FFEE1FE (Get_tB559CB2E572ECAB626FF27F8463C2E55DF640A21* __this, GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* ___0_binder, RuntimeObject** ___1_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* L_0 = ___0_binder;
		RuntimeObject** L_1 = ___1_result;
		bool L_2;
		L_2 = BaseForwarder_TryGetMember_mD29DE161C4067D632C274F194CA44C0A3CDEF1E4(__this, L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* L_3 = ___0_binder;
		String_t* L_4;
		L_4 = GetMemberBinder_get_Name_mCE0671772897ED1E0575E3BE2C06CAB8D52019C4_inline(L_3, NULL);
		RuntimeObject** L_5 = ___1_result;
		il2cpp_codegen_runtime_class_init_inline(Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Util_MassageResultBasedOnInterface_mEBA4F7D82F8A2553C3FF2722CB13C9345157175C(__this, L_4, (bool)1, L_5, NULL);
		return L_6;
	}

IL_0019:
	{
		return (bool)0;
	}
}
// System.Boolean Dynamitey.DynamicObjects.Get::TryInvokeMember(System.Dynamic.InvokeMemberBinder,System.Object[],System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Get_TryInvokeMember_mDA7BCD744A8C05D1030DADB19318F1481DD4839E (Get_tB559CB2E572ECAB626FF27F8463C2E55DF640A21* __this, InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* ___0_binder, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, RuntimeObject** ___2_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokeHelper_tA25ABC5A6EC0BD7ED13472FE1C2F0860DFF00285_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* L_0 = ___0_binder;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		RuntimeObject** L_2 = ___2_result;
		bool L_3;
		L_3 = BaseForwarder_TryInvokeMember_mF75EA8004A05D0426647BEBDA14AE1A534DAC1B8(__this, L_0, L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_0076;
		}
	}
	try
	{// begin try (depth: 1)
		RuntimeObject** L_4 = ___2_result;
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(21 /* System.Object Dynamitey.DynamicObjects.BaseForwarder::get_CallTarget() */, __this);
		InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* L_6 = ___0_binder;
		String_t* L_7;
		L_7 = InvokeMemberBinder_get_Name_m17B9EDADDC4EF3BF49C34A34D65D0D0ACF5EB9A8_inline(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = Dynamic_InvokeGet_m380CCA014FE3D60D245D555B1FED8911D3D05699(L_5, L_7, NULL);
		*((RuntimeObject**)L_4) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_8);
		goto IL_0025;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0020;
		}
		throw e;
	}

CATCH_0020:
	{// begin catch(Microsoft.CSharp.RuntimeBinder.RuntimeBinderException)
		RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8* L_9 = ((RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*));;
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0085;
	}// end catch (depth: 1)

IL_0025:
	{
		RuntimeObject** L_10 = ___2_result;
		RuntimeObject* L_11 = *((RuntimeObject**)L_10);
		if (L_11)
		{
			goto IL_002b;
		}
	}
	{
		return (bool)0;
	}

IL_002b:
	{
		RuntimeObject** L_12 = ___2_result;
		RuntimeObject* L_13 = *((RuntimeObject**)L_12);
		V_0 = ((Delegate_t*)IsInstClass((RuntimeObject*)L_13, Delegate_t_il2cpp_TypeInfo_var));
		InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* L_14 = ___0_binder;
		CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* L_15;
		L_15 = InvokeMemberBinder_get_CallInfo_m8776D2724544514F1B807F0BF73C38283C61432C_inline(L_14, NULL);
		ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C* L_16;
		L_16 = CallInfo_get_ArgumentNames_m9F82072D6C372A2C68C3845B8E78A454050C47D3_inline(L_15, NULL);
		bool L_17;
		L_17 = Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D(L_16, Enumerable_Any_TisString_t_mC987364A59B030AB37F7C2A7889F2944BAE7956D_RuntimeMethod_var);
		if (L_17)
		{
			goto IL_0059;
		}
	}
	{
		Delegate_t* L_18 = V_0;
		if (!L_18)
		{
			goto IL_0059;
		}
	}
	try
	{// begin try (depth: 1)
		RuntimeObject** L_19 = ___2_result;
		Delegate_t* L_20 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(InvokeHelper_tA25ABC5A6EC0BD7ED13472FE1C2F0860DFF00285_il2cpp_TypeInfo_var);
		RuntimeObject* L_22;
		L_22 = InvokeHelper_InvokeMethodDelegate_mFC2D5D40CE3622DA995AA57B191845575EDD1D01(__this, L_20, L_21, NULL);
		*((RuntimeObject**)L_19) = (RuntimeObject*)L_22;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_19, (void*)(RuntimeObject*)L_22);
		goto IL_0059;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0054;
		}
		throw e;
	}

CATCH_0054:
	{// begin catch(Microsoft.CSharp.RuntimeBinder.RuntimeBinderException)
		RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8* L_23 = ((RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*));;
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0085;
	}// end catch (depth: 1)

IL_0059:
	{
	}
	try
	{// begin try (depth: 1)
		RuntimeObject** L_24 = ___2_result;
		RuntimeObject** L_25 = ___2_result;
		RuntimeObject* L_26 = *((RuntimeObject**)L_25);
		InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* L_27 = ___0_binder;
		CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* L_28;
		L_28 = InvokeMemberBinder_get_CallInfo_m8776D2724544514F1B807F0BF73C38283C61432C_inline(L_27, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30;
		L_30 = Util_NameArgsIfNecessary_m4ED60446AB2EC21EE4BC77EBE6162F3EAD7FFD73(L_28, L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		RuntimeObject* L_31;
		L_31 = Dynamic_Invoke_m522AF8A8214C34FFC8B62A9EF266038442D9E148(L_26, L_30, NULL);
		*((RuntimeObject**)L_24) = (RuntimeObject*)L_31;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_24, (void*)(RuntimeObject*)L_31);
		goto IL_0076;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0071;
		}
		throw e;
	}

CATCH_0071:
	{// begin catch(Microsoft.CSharp.RuntimeBinder.RuntimeBinderException)
		RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8* L_32 = ((RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeBinderException_t783814124323CA1C4DFFB690F2EC2ED5475837E8*));;
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0085;
	}// end catch (depth: 1)

IL_0076:
	{
		InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* L_33 = ___0_binder;
		String_t* L_34;
		L_34 = InvokeMemberBinder_get_Name_m17B9EDADDC4EF3BF49C34A34D65D0D0ACF5EB9A8_inline(L_33, NULL);
		RuntimeObject** L_35 = ___2_result;
		il2cpp_codegen_runtime_class_init_inline(Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Util_MassageResultBasedOnInterface_mEBA4F7D82F8A2553C3FF2722CB13C9345157175C(__this, L_34, (bool)1, L_35, NULL);
		return L_36;
	}

IL_0085:
	{
		bool L_37 = V_1;
		return L_37;
	}
}
// System.Boolean Dynamitey.DynamicObjects.Get::TryGetIndex(System.Dynamic.GetIndexBinder,System.Object[],System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Get_TryGetIndex_mAFD25B2FC1E85F6110AAA931C14D23A7BC4A0DF1 (Get_tB559CB2E572ECAB626FF27F8463C2E55DF640A21* __this, GetIndexBinder_t1D53762D30B3AF1DABB042424B93BE4726D176E2* ___0_binder, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_indexes, RuntimeObject** ___2_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Invocation_tC90ECCB31F666B45C74B4B46C0B511123549B280_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GetIndexBinder_t1D53762D30B3AF1DABB042424B93BE4726D176E2* L_0 = ___0_binder;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_indexes;
		RuntimeObject** L_2 = ___2_result;
		bool L_3;
		L_3 = BaseForwarder_TryGetIndex_mB0CF1194A6773CC89C942B7323DCAC534942CCD3(__this, L_0, L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Invocation_tC90ECCB31F666B45C74B4B46C0B511123549B280_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Invocation_tC90ECCB31F666B45C74B4B46C0B511123549B280_StaticFields*)il2cpp_codegen_static_fields_for(Invocation_tC90ECCB31F666B45C74B4B46C0B511123549B280_il2cpp_TypeInfo_var))->___IndexBinderName_2;
		RuntimeObject** L_5 = ___2_result;
		il2cpp_codegen_runtime_class_init_inline(Util_tFE0568E8D35D4CEF45D5A217111021A24C257964_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Util_MassageResultBasedOnInterface_mEBA4F7D82F8A2553C3FF2722CB13C9345157175C(__this, L_4, (bool)1, L_5, NULL);
		return L_6;
	}

IL_0019:
	{
		return (bool)0;
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
// System.Void Dynamitey.DynamicObjects.LateType::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LateType__ctor_mDE5C0BFE082BE77337ACA906F63CC925A5046942 (LateType_tA079B0D243F1D6F188FB9C7EBB8D629524DF4758* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_type;
		BaseForwarder__ctor_mC1CE32A7957DF803603B04117FC6944A51B2B40F(__this, L_0, NULL);
		return;
	}
}
// System.Type Dynamitey.DynamicObjects.LateType::FindType(System.String,System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* LateType_FindType_mC4CD0E09B1D384E02DE1454E1039F640C4145229 (String_t* ___0_typeName, Assembly_t* ___1_assembly, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LateType_FindType_mC4CD0E09B1D384E02DE1454E1039F640C4145229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			Assembly_t* L_0 = ___1_assembly;
			if (!L_0)
			{
				goto IL_000e_1;
			}
		}
		{
			Assembly_t* L_1 = ___1_assembly;
			String_t* L_2 = ___0_typeName;
			Type_t* L_3;
			L_3 = VirtualFuncInvoker2< Type_t*, String_t*, bool >::Invoke(19 /* System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean) */, L_1, L_2, (bool)0);
			V_0 = L_3;
			goto IL_001d;
		}

IL_000e_1:
		{
			String_t* L_4 = ___0_typeName;
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_5;
			L_5 = il2cpp_codegen_get_type(L_4, (bool)0, Type_GetType_m50BCE4A0EB39D97381431E6CC2576C50DCE69C67_RuntimeMethod_var, LateType_FindType_mC4CD0E09B1D384E02DE1454E1039F640C4145229_RuntimeMethod_var);
			V_0 = L_5;
			goto IL_001d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0018;
		}
		throw e;
	}

CATCH_0018:
	{// begin catch(System.Object)
		RuntimeObject* L_6 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		V_0 = (Type_t*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_001d;
	}// end catch (depth: 1)

IL_001d:
	{
		Type_t* L_7 = V_0;
		return L_7;
	}
}
// System.Void Dynamitey.DynamicObjects.LateType::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LateType__ctor_mE24E72CFB95DB3923BFD0C6F7751C189E767FE9D (LateType_tA079B0D243F1D6F188FB9C7EBB8D629524DF4758* __this, String_t* ___0_typeName, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_typeName;
		Type_t* L_1;
		L_1 = LateType_FindType_mC4CD0E09B1D384E02DE1454E1039F640C4145229(L_0, (Assembly_t*)NULL, NULL);
		BaseForwarder__ctor_mC1CE32A7957DF803603B04117FC6944A51B2B40F(__this, L_1, NULL);
		String_t* L_2 = ___0_typeName;
		__this->___TypeName_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeName_2), (void*)L_2);
		return;
	}
}
// System.Object Dynamitey.DynamicObjects.LateType::get_CallTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LateType_get_CallTarget_m27ED5931441061DF8F4A8651FBE37A7728FE4B2A (LateType_tA079B0D243F1D6F188FB9C7EBB8D629524DF4758* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = BaseForwarder_get_Target_m7BF2CB975DB08AADAC16D6609F9EB4B93008D855_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = __this->___TypeName_2;
		MissingTypeException_t1E17592BE936E2955F2DF09792F124CB43E7A7F3* L_2 = (MissingTypeException_t1E17592BE936E2955F2DF09792F124CB43E7A7F3*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingTypeException_t1E17592BE936E2955F2DF09792F124CB43E7A7F3_il2cpp_TypeInfo_var)));
		MissingTypeException__ctor_mF4F862104A8DC77EBD4577706C8573DD83AB02D3(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LateType_get_CallTarget_m27ED5931441061DF8F4A8651FBE37A7728FE4B2A_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_runtime_class_init_inline(InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB_il2cpp_TypeInfo_var);
		Func_2_t2E1096262AB59EC17ECDF994BF3F265F9AFF719E* L_3 = ((InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB_StaticFields*)il2cpp_codegen_static_fields_for(InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB_il2cpp_TypeInfo_var))->___CreateStatic_1;
		RuntimeObject* L_4;
		L_4 = BaseForwarder_get_Target_m7BF2CB975DB08AADAC16D6609F9EB4B93008D855_inline(__this, NULL);
		InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB* L_5;
		L_5 = Func_2_Invoke_mDD9F5B920BC963820F00D3C9791F2BE9BFBEF609_inline(L_3, ((Type_t*)CastclassClass((RuntimeObject*)L_4, Type_t_il2cpp_TypeInfo_var)), NULL);
		return L_5;
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
// System.Void Dynamitey.DynamicObjects.LateType/MissingTypeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingTypeException__ctor_mF4F862104A8DC77EBD4577706C8573DD83AB02D3 (MissingTypeException_t1E17592BE936E2955F2DF09792F124CB43E7A7F3* __this, String_t* ___0_typename, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5548A8DDDD64722139CF874E322F3F45EA36C975);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_typename;
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral5548A8DDDD64722139CF874E322F3F45EA36C975, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_1, NULL);
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
// System.Void Dynamitey.DynamicObjects.RegexMatch::.ctor(System.Text.RegularExpressions.Match,System.Text.RegularExpressions.Regex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexMatch__ctor_mBECCFB326059A36BA4DF1C6675EBDEB3D03A1EDB (RegexMatch_t17D190C75B8B6217F657D4BD019C2F72D28D5EA8* __this, Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___0_match, Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___1_regex, const RuntimeMethod* method) 
{
	{
		BaseObject__ctor_mCA94140D9F8DD12D04F46A46BE11CFA22B64B3AE(__this, NULL);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_0 = ___0_match;
		__this->____match_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____match_1), (void*)L_0);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_1 = ___1_regex;
		__this->____regex_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____regex_2), (void*)L_1);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Dynamitey.DynamicObjects.RegexMatch::GetDynamicMemberNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RegexMatch_GetDynamicMemberNames_m3F5D4071DE0724F643D818377CDD7A6CF6241DA2 (RegexMatch_t17D190C75B8B6217F657D4BD019C2F72D28D5EA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Empty_TisString_t_mBCB5B53D37C4DA21A03B6730942638F3E389DD63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = __this->____regex_2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = Enumerable_Empty_TisString_t_mBCB5B53D37C4DA21A03B6730942638F3E389DD63_inline(Enumerable_Empty_TisString_t_mBCB5B53D37C4DA21A03B6730942638F3E389DD63_RuntimeMethod_var);
		return L_1;
	}

IL_000e:
	{
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_2 = __this->____regex_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = Regex_GetGroupNames_m4D44BE23A7B0E9EB6E071215D54588ADCDF8B37C(L_2, NULL);
		return (RuntimeObject*)L_3;
	}
}
// System.Boolean Dynamitey.DynamicObjects.RegexMatch::TryGetMember(System.Dynamic.GetMemberBinder,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexMatch_TryGetMember_mF0CA6710A992470C31AB651459906381B2EA72DC (RegexMatch_t17D190C75B8B6217F657D4BD019C2F72D28D5EA8* __this, GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* ___0_binder, RuntimeObject** ___1_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_0 = __this->____match_1;
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_1;
		L_1 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_0);
		GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* L_2 = ___0_binder;
		String_t* L_3;
		L_3 = GetMemberBinder_get_Name_mCE0671772897ED1E0575E3BE2C06CAB8D52019C4_inline(L_2, NULL);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_4;
		L_4 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_1, L_3, NULL);
		V_0 = L_4;
		GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* L_5 = ___0_binder;
		String_t* L_6;
		L_6 = GetMemberBinder_get_Name_mCE0671772897ED1E0575E3BE2C06CAB8D52019C4_inline(L_5, NULL);
		bool L_7;
		L_7 = BaseObject_TryTypeForName_m43167E1F0D4748B4EE892E3E4767C7CDD6F2DF80(__this, L_6, (&V_1), NULL);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		V_1 = L_9;
	}

IL_0032:
	{
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_10 = V_0;
		bool L_11;
		L_11 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_10, NULL);
		if (L_11)
		{
			goto IL_0059;
		}
	}
	{
		RuntimeObject** L_12 = ___1_result;
		*((RuntimeObject**)L_12) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)NULL);
		Type_t* L_13 = V_1;
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_14;
		L_14 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_13, NULL);
		bool L_15;
		L_15 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_14, NULL);
		if (!L_15)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject** L_16 = ___1_result;
		Type_t* L_17 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18;
		L_18 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		RuntimeObject* L_19;
		L_19 = Dynamic_InvokeConstructor_mFD18DE93E68EECB04EBEE2F168D2BE59563AE2CC(L_17, L_18, NULL);
		*((RuntimeObject**)L_16) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_19);
	}

IL_0057:
	{
		return (bool)1;
	}

IL_0059:
	{
		RuntimeObject** L_20 = ___1_result;
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_21 = V_0;
		String_t* L_22;
		L_22 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_21, NULL);
		Type_t* L_23 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Dynamic_t9706D0413CC9BBD6769AA06EB01DFDEE25600D56_il2cpp_TypeInfo_var);
		RuntimeObject* L_24;
		L_24 = Dynamic_CoerceConvert_m2B1AEC3F9140E403439BA7208420C27E952B1AC8(L_22, L_23, NULL);
		*((RuntimeObject**)L_20) = (RuntimeObject*)L_24;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_20, (void*)(RuntimeObject*)L_24);
		return (bool)1;
	}
}
// System.String Dynamitey.DynamicObjects.RegexMatch::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegexMatch_ToString_mA8C4763736E69DB2260D79258502A3F0AB655AD4 (RegexMatch_t17D190C75B8B6217F657D4BD019C2F72D28D5EA8* __this, const RuntimeMethod* method) 
{
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_0 = __this->____match_1;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C* CallInfo_get_ArgumentNames_m9F82072D6C372A2C68C3845B8E78A454050C47D3_inline (CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C* L_0 = __this->___U3CArgumentNamesU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CallInfo_get_ArgumentCount_mCA87B8CEE4F758AE8591FF2DB27FAA902635EB46_inline (CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CArgumentCountU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool InvokeContext_get_StaticContext_m84CC0E18F0736302B746CA4991CB5C61FCE96A4B_inline (InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CStaticContextU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* InvokeContext_get_Context_m28D3B3A67DD5FC3434A75DF7CD9B7C5B3E019EB2_inline (InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CContextU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InvokeContext_get_Target_m1FA7638D265F7FDF62F42516F1EAA986BFB123AF_inline (InvokeContext_t9D9EBC0BB114FC433A413F5B49669736A3F09DBB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTargetU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InvokeArg_get_Name_m46EDE7CD9DA74A941868836CDF54792F478D6529_inline (InvokeArg_tE827CC3B458B4D4169D7BC9EE005167217A19F03* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InvokeArg_get_Value_m1C6508974F896248BC4CC6AD96BB64FED504F835_inline (InvokeArg_tE827CC3B458B4D4169D7BC9EE005167217A19F03* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CValueU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GetMemberBinder_get_Name_mCE0671772897ED1E0575E3BE2C06CAB8D52019C4_inline (GetMemberBinder_t8D02CC2255370A525D6657487C0A7EB1DDD225B3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InvokeMemberBinder_get_Name_m17B9EDADDC4EF3BF49C34A34D65D0D0ACF5EB9A8_inline (InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* InvokeMemberBinder_get_CallInfo_m8776D2724544514F1B807F0BF73C38283C61432C_inline (InvokeMemberBinder_tC905DDA179A04ABDC74A71733841A11AA210CFBE* __this, const RuntimeMethod* method) 
{
	{
		CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* L_0 = __this->___U3CCallInfoU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SetMemberBinder_get_Name_mE683668DE73BFB110F155E377E26B506960A7B42_inline (SetMemberBinder_t0D70ED9A9888FF8074796DF76600BDBA3104C55F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PropertyChangedEventHandler_Invoke_m040B3056C279FDDC4EC678519D5D415771905298_inline (PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* __this, RuntimeObject* ___0_sender, PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, PropertyChangedEventArgs_tFA01343D8F2BD799951B40A3EBF4A6B38EE63321*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseForwarder_set_Target_mC74CA9B8B90361064A8A0D8D1364309D483C048A_inline (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CTargetU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTargetU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseForwarder_get_Target_m7BF2CB975DB08AADAC16D6609F9EB4B93008D855_inline (BaseForwarder_tEC9EF52008A9D6647D8B3EE3E0E6B0FEBD317FFD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CTargetU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* InvokeBinder_get_CallInfo_m96F6E83E1F2E1027808B19E01A285B08E07BCA79_inline (InvokeBinder_tC5AB6E0A532F16789BA5B26EA123C0DD75F8D44B* __this, const RuntimeMethod* method) 
{
	{
		CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* L_0 = __this->___U3CCallInfoU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AddRemoveMarker_get_IsAdding_mC96816002E139136EF319DED9E1B1BAFDE607A32_inline (AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsAddingU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AddRemoveMarker_get_Delegate_mDB26A638B2C00F48C6136C98953946E831EC4297_inline (AddRemoveMarker_tDFBE706E6A4BFD96ED6E5F7A9ACA76FBB21768BE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CDelegateU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* GetIndexBinder_get_CallInfo_m4F37AEAD31CBC4CD7CC2A3773A5318AFD78A5531_inline (GetIndexBinder_t1D53762D30B3AF1DABB042424B93BE4726D176E2* __this, const RuntimeMethod* method) 
{
	{
		CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* L_0 = __this->___U3CCallInfoU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* SetIndexBinder_get_CallInfo_m8F235FA11DE5093DC60516A0809D4279DAA21682_inline (SetIndexBinder_t89B08F3E4022E4855941688FDEB172820F355898* __this, const RuntimeMethod* method) 
{
	{
		CallInfo_t2D0A2BFF0C0D77C63D7976C13466AC98CE8C51BC* L_0 = __this->___U3CCallInfoU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PropretySpecType_get_PropertySpec_mA23BCEF96F67214A9008858B95088EC8F7C842D3_inline (PropretySpecType_t1AF7BB23D8D79BB759AEEFDD2887CB627D331972* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CPropertySpecU3Ek__BackingField_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Empty_TisRuntimeObject_mA90CDE158774C34A28C07CEEA9E9EA2A61618238_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyEnumerable_1_t8C8873EF4F89FB0F86D91BA5B4D640E3A23AD28E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Instance_0;
		return (RuntimeObject*)L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
