#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Func`2<UnityEngine.Color,System.Boolean>
struct Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67;
// System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,System.Boolean>
struct Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A;
// System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>
struct Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C;
// System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>
struct Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711;
// System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>
struct Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA;
// System.Func`2<System.Int32,System.Int32>
struct Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Object,System.Single>
struct Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12;
// System.Func`2<UnityEngine.EventSystems.RaycastResult,System.Boolean>
struct Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A;
// System.Func`2<UnityEngine.EventSystems.RaycastResult,System.Object>
struct Func_2_t79E53BCF06FE5729390C864BFB25BC7DF0AC911C;
// System.Func`2<UnityEngine.EventSystems.RaycastResult,System.Single>
struct Func_2_t0D2BF3C3B408C71A51F967263F59B027D3D8AB14;
// System.Func`2<System.Single,System.Boolean>
struct Func_2_t49E998685259ADE759F9329BF66F20DE8667006E;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>
struct Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D;
// System.Func`2<UnityEngine.Vector3,System.Boolean>
struct Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E;
// System.Func`2<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex,System.Boolean>
struct Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751;
// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Boolean>
struct Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B;
// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>
struct Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575;
// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Single>
struct Func_2_t09D2CFF52985BC10743D36B0C0CA5D35AFFACA40;
// System.Func`3<System.Object,System.Object,System.Int32>
struct Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D;
// System.Func`3<UnityEngine.Vector4,UnityEngine.Vector4,System.Int32>
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F;
// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Color>
struct IEnumerable_1_t30FBA3F0775777FD15679FBAE44B692629C5E6BB;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerable_1_t133C4F6184F4EFFAE7084D293093D6B6CF884215;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.StyleSelectorPart>
struct IEnumerable_1_tE925592D6CE31E7FA5349FCEE9007F3DF53409FD;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>
struct IEnumerable_1_t341BAB962495036CBB25700234AA71EAF80C6AE0;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>
struct IEnumerable_1_t90608AE7F6A3E51F5F5549CDFFE96BE08EAB62FB;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Color>
struct IEnumerator_1_tC880EC5644F413FB0DF632E7B8266215D8459084;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerator_1_t1A5C5ED517CC64B9A0A347D77BC57DC62242CC8A;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t736E9F8BD2FD38A5E9EA2E8A510AFED788D05010;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIElements.StyleSelectorPart>
struct IEnumerator_1_t4CA3732E083480E40018894623B3C184576E5EFD;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>
struct IEnumerator_1_tD1458B7D83AB52223A503862617A8A15E008EE1E;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>
struct IEnumerator_1_t4E5076BDD22FD35271F759AC8A6B6CA8DCBDB43A;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>
struct IEnumerator_1_tAA7163F8DC99653CE0EB9F8AD9ED6833C1950C7B;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Color>
struct Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC;
// System.Linq.Enumerable/Iterator`1<System.Int32>
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA;
// System.Linq.Enumerable/Iterator`1<System.Single>
struct Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>
struct Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E;
// System.Linq.Enumerable/Iterator`1<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>
struct Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex>
struct List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>
struct List_1_t9F15086189A9401719178EA3A7122587601C9F5C;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>
struct WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Single>
struct WhereSelectEnumerableIterator_2_tF7B17AE20C591499CCC69CF4CFEA521F28D66E94;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.EventSystems.RaycastResult,System.Object>
struct WhereSelectEnumerableIterator_2_tEB349E8AA526E775597D349A10304EDEF4747B19;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.EventSystems.RaycastResult,System.Single>
struct WhereSelectEnumerableIterator_2_tF4AF10C529A166B074CC041813A9BD2E7A909C8D;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>
struct WhereSelectEnumerableIterator_2_tDAAE6B90875269F423AAB700F4B1801707CB4BF7;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>
struct WhereSelectEnumerableIterator_2_t01745EDCF0CD81AE41BBDF06211970418430A543;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Single>
struct WhereSelectEnumerableIterator_2_t4D94FE494B201539A142AADFB74EE9CF6397CE85;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>
struct WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>
struct WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>
struct WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>
struct WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Single>
struct WhereSelectListIterator_2_tFE32164179EE37B666D799CFB7F5167FB4C464D9;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.EventSystems.RaycastResult,System.Object>
struct WhereSelectListIterator_2_t572AD77218706A60F85AFEF014049CA555658CE0;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.EventSystems.RaycastResult,System.Single>
struct WhereSelectListIterator_2_t7584EF4BED7AFCF6BAA4C5380C15B5820D66D44A;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>
struct WhereSelectListIterator_2_t5226C1D52FE78BEA0F91B9EEBBAA3092EE38AD0D;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>
struct WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Single>
struct WhereSelectListIterator_2_t9A9AD6E40B14772428EF9FB579A39CFC79FEE435;
// Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.NetworkBehaviourReference,Unity.Netcode.NetworkBehaviourReference>
struct WriteDelegate_1_tE41A3AA1BFC049E3DCA374AA32A2CADC10058F4D;
// Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.NetworkObjectReference,Unity.Netcode.NetworkObjectReference>
struct WriteDelegate_1_t2103D98064DB2ED30610D5209A0AB1545BB86071;
// Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkAnimator/AnimationMessage,Unity.Netcode.Components.NetworkAnimator/AnimationMessage>
struct WriteDelegate_1_tBAD71DFDB5D808250EB5989317C0A6EE737AF11D;
// Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage,Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage>
struct WriteDelegate_1_t10C95C4684CC6353E6B1DB7B4F9BC52EE9DAFA44;
// Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage,Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage>
struct WriteDelegate_1_tA0CAE9ADE960D1FA035320D86ADD542E4694828D;
// Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState,Unity.Netcode.Components.NetworkTransform/NetworkTransformState>
struct WriteDelegate_1_t83AD994FDBD5B0A1DF6B80718662FAC776936255;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex[]
struct ContourVertexU5BU5D_tABEF0F601200F755660C5757BBFFDA28CDEE3FDE;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7;
// UnityEngine.UIElements.StyleSelectorPart[]
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// UnityEngine.Rendering.VertexAttributeDescriptor[]
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping[]
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;
// UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile[]
struct SerializablePVProfileU5BU5D_tEEFF13FCDC8CC1E0DDA6EF7D0BE5548035514CA2;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Experimental.Rendering.ProbeReferenceVolumeProfile
struct ProbeReferenceVolumeProfile_t7E258E0C21DBA74C68F6F73D272EB9B56A15C7A5;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6;

IL2CPP_EXTERN_C RuntimeClass* AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkBehaviourReference_t0379C8F95B4B428FE10F98601188BF6420FA1986_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/Iterator`1<System.Int32>
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	int32_t ___current_2;
};

// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject* ___current_2;
};

// System.Linq.Enumerable/Iterator`1<System.Single>
struct Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	float ___current_2;
};

// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex>
struct List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ContourVertexU5BU5D_tABEF0F601200F755660C5757BBFFDA28CDEE3FDE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ContourVertexU5BU5D_tABEF0F601200F755660C5757BBFFDA28CDEE3FDE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8292C421BBB00D7661DC07462822936152BAB446_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>
struct List_1_t9F15086189A9401719178EA3A7122587601C9F5C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SerializablePVProfileU5BU5D_tEEFF13FCDC8CC1E0DDA6EF7D0BE5548035514CA2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9F15086189A9401719178EA3A7122587601C9F5C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SerializablePVProfileU5BU5D_tEEFF13FCDC8CC1E0DDA6EF7D0BE5548035514CA2* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

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

// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
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

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32>
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Single>
struct WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C  : public Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>
struct WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Single>
struct WhereSelectEnumerableIterator_2_tF7B17AE20C591499CCC69CF4CFEA521F28D66E94  : public Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.EventSystems.RaycastResult,System.Object>
struct WhereSelectEnumerableIterator_2_tEB349E8AA526E775597D349A10304EDEF4747B19  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t79E53BCF06FE5729390C864BFB25BC7DF0AC911C* ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.EventSystems.RaycastResult,System.Single>
struct WhereSelectEnumerableIterator_2_tF4AF10C529A166B074CC041813A9BD2E7A909C8D  : public Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t0D2BF3C3B408C71A51F967263F59B027D3D8AB14* ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>
struct WhereSelectEnumerableIterator_2_tDAAE6B90875269F423AAB700F4B1801707CB4BF7  : public Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D* ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>
struct WhereSelectEnumerableIterator_2_t01745EDCF0CD81AE41BBDF06211970418430A543  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Single>
struct WhereSelectEnumerableIterator_2_t4D94FE494B201539A142AADFB74EE9CF6397CE85  : public Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t09D2CFF52985BC10743D36B0C0CA5D35AFFACA40* ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;
};

// UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>
struct WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F 
{
	// T[] UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Data_0;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Start
	int32_t ___m_Start_1;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>
struct WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44 
{
	// T[] UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Data
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___m_Data_0;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Start
	int32_t ___m_Start_1;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>
struct WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87 
{
	// T[] UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Data
	LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___m_Data_0;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Start
	int32_t ___m_Start_1;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Length
	int32_t ___m_Length_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// Unity.Netcode.FastBufferWriter
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC 
{
	// Unity.Netcode.FastBufferWriter/WriterHandle* Unity.Netcode.FastBufferWriter::Handle
	WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* ___Handle_0;
};

struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticFields
{
	// System.Byte[] Unity.Netcode.FastBufferWriter::s_ByteArrayCache
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_ByteArrayCache_1;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.FastBufferWriter
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_marshaled_pinvoke
{
	WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* ___Handle_0;
};
// Native definition for COM marshalling of Unity.Netcode.FastBufferWriter
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_marshaled_com
{
	WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* ___Handle_0;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Unity.Netcode.NetworkObjectReference
struct NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD 
{
	// System.UInt64 Unity.Netcode.NetworkObjectReference::m_NetworkObjectId
	uint64_t ___m_NetworkObjectId_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	// System.String UnityEngine.UIElements.StyleSelectorPart::m_Value
	String_t* ___m_Value_0;
	// UnityEngine.UIElements.StyleSelectorType UnityEngine.UIElements.StyleSelectorPart::m_Type
	int32_t ___m_Type_1;
	// System.Object UnityEngine.UIElements.StyleSelectorPart::tempData
	RuntimeObject* ___tempData_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};

// UnityEngine.Rendering.Universal.LibTessDotNet.Vec3
struct Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB 
{
	// System.Single UnityEngine.Rendering.Universal.LibTessDotNet.Vec3::X
	float ___X_1;
	// System.Single UnityEngine.Rendering.Universal.LibTessDotNet.Vec3::Y
	float ___Y_2;
	// System.Single UnityEngine.Rendering.Universal.LibTessDotNet.Vec3::Z
	float ___Z_3;
};

struct Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB_StaticFields
{
	// UnityEngine.Rendering.Universal.LibTessDotNet.Vec3 UnityEngine.Rendering.Universal.LibTessDotNet.Vec3::Zero
	Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB ___Zero_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	// System.UInt16 UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::visibleLightIndex
	uint16_t ___visibleLightIndex_0;
	// System.UInt16 UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::lightBufferIndex
	uint16_t ___lightBufferIndex_1;
	// UnityEngine.Light UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::light
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};

struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_StaticFields
{
	// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32> UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::s_CompareByCookieSize
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByCookieSize_3;
	// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32> UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::s_CompareByBufferIndex
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByBufferIndex_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};

// Unity.Netcode.Components.NetworkAnimator/AnimationMessage
struct AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 
{
	// System.Int32 Unity.Netcode.Components.NetworkAnimator/AnimationMessage::StateHash
	int32_t ___StateHash_0;
	// System.Single Unity.Netcode.Components.NetworkAnimator/AnimationMessage::NormalizedTime
	float ___NormalizedTime_1;
	// System.Byte[] Unity.Netcode.Components.NetworkAnimator/AnimationMessage::Parameters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Parameters_2;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.Components.NetworkAnimator/AnimationMessage
struct AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_marshaled_pinvoke
{
	int32_t ___StateHash_0;
	float ___NormalizedTime_1;
	Il2CppSafeArray/*NONE*/* ___Parameters_2;
};
// Native definition for COM marshalling of Unity.Netcode.Components.NetworkAnimator/AnimationMessage
struct AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_marshaled_com
{
	int32_t ___StateHash_0;
	float ___NormalizedTime_1;
	Il2CppSafeArray/*NONE*/* ___Parameters_2;
};

// Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage
struct AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A 
{
	// System.Byte[] Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage::Parameters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Parameters_0;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage
struct AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___Parameters_0;
};
// Native definition for COM marshalling of Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage
struct AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___Parameters_0;
};

// Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage
struct AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46 
{
	// System.Int32 Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage::Hash
	int32_t ___Hash_0;
	// System.Boolean Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage::Reset
	bool ___Reset_1;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage
struct AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshaled_pinvoke
{
	int32_t ___Hash_0;
	int32_t ___Reset_1;
};
// Native definition for COM marshalling of Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage
struct AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshaled_com
{
	int32_t ___Hash_0;
	int32_t ___Reset_1;
};

// Unity.Netcode.Components.NetworkTransform/NetworkTransformState
struct NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 
{
	// System.UInt16 Unity.Netcode.Components.NetworkTransform/NetworkTransformState::m_Bitset
	uint16_t ___m_Bitset_11;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::PositionX
	float ___PositionX_12;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::PositionY
	float ___PositionY_13;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::PositionZ
	float ___PositionZ_14;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::RotAngleX
	float ___RotAngleX_15;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::RotAngleY
	float ___RotAngleY_16;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::RotAngleZ
	float ___RotAngleZ_17;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::ScaleX
	float ___ScaleX_18;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::ScaleY
	float ___ScaleY_19;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::ScaleZ
	float ___ScaleZ_20;
	// System.Double Unity.Netcode.Components.NetworkTransform/NetworkTransformState::SentTime
	double ___SentTime_21;
};

// UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile
struct SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 
{
	// System.String UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile::sceneGUID
	String_t* ___sceneGUID_0;
	// UnityEngine.Experimental.Rendering.ProbeReferenceVolumeProfile UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile::profile
	ProbeReferenceVolumeProfile_t7E258E0C21DBA74C68F6F73D272EB9B56A15C7A5* ___profile_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile
struct SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069_marshaled_pinvoke
{
	char* ___sceneGUID_0;
	ProbeReferenceVolumeProfile_t7E258E0C21DBA74C68F6F73D272EB9B56A15C7A5* ___profile_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile
struct SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069_marshaled_com
{
	Il2CppChar* ___sceneGUID_0;
	ProbeReferenceVolumeProfile_t7E258E0C21DBA74C68F6F73D272EB9B56A15C7A5* ___profile_1;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>
struct Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>
struct Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 ____current_3;
};

// System.Linq.Enumerable/Iterator`1<UnityEngine.Color>
struct Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___current_2;
};

// System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>
struct Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current_2;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>
struct WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Single>
struct WhereSelectListIterator_2_tFE32164179EE37B666D799CFB7F5167FB4C464D9  : public Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex
struct ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 
{
	// UnityEngine.Rendering.Universal.LibTessDotNet.Vec3 UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex::Position
	Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB ___Position_0;
	// System.Object UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex::Data
	RuntimeObject* ___Data_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex
struct ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32_marshaled_pinvoke
{
	Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB ___Position_0;
	Il2CppIUnknown* ___Data_1;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex
struct ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32_marshaled_com
{
	Vec3_t7EDAE0ABBD2BC4C43A47B8BEF6C079AB55FB0CBB ___Position_0;
	Il2CppIUnknown* ___Data_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
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

// Unity.Netcode.NetworkBehaviourReference
struct NetworkBehaviourReference_t0379C8F95B4B428FE10F98601188BF6420FA1986 
{
	// Unity.Netcode.NetworkObjectReference Unity.Netcode.NetworkBehaviourReference::m_NetworkObjectReference
	NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD ___m_NetworkObjectReference_0;
	// System.UInt16 Unity.Netcode.NetworkBehaviourReference::m_NetworkBehaviourId
	uint16_t ___m_NetworkBehaviourId_1;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex
struct LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB 
{
	// UnityEngine.Vector3 UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Color UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	// UnityEngine.Vector2 UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex::uv
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_2;
};

struct LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB_StaticFields
{
	// UnityEngine.Rendering.VertexAttributeDescriptor[] UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex::VertexLayout
	VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___VertexLayout_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex>
struct Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
struct Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ____current_3;
};

// System.Linq.Enumerable/Iterator`1<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>
struct Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB ___current_2;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Color>
struct WhereEnumerableIterator_1_tD5DEEFCB0EBA11A5D05945BBC8945CEC4E8BF89A  : public Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Vector3>
struct WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E  : public Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>
struct WhereSelectListIterator_2_t5226C1D52FE78BEA0F91B9EEBBAA3092EE38AD0D  : public Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>
struct WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Single>
struct WhereSelectListIterator_2_t9A9AD6E40B14772428EF9FB579A39CFC79FEE435  : public Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t09D2CFF52985BC10743D36B0C0CA5D35AFFACA40* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF ___enumerator_6;
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

// System.Func`2<UnityEngine.Color,System.Boolean>
struct Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,System.Boolean>
struct Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>
struct Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>
struct Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>
struct Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int32,System.Int32>
struct Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Single>
struct Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.EventSystems.RaycastResult,System.Boolean>
struct Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.EventSystems.RaycastResult,System.Object>
struct Func_2_t79E53BCF06FE5729390C864BFB25BC7DF0AC911C  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.EventSystems.RaycastResult,System.Single>
struct Func_2_t0D2BF3C3B408C71A51F967263F59B027D3D8AB14  : public MulticastDelegate_t
{
};

// System.Func`2<System.Single,System.Boolean>
struct Func_2_t49E998685259ADE759F9329BF66F20DE8667006E  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>
struct Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Vector3,System.Boolean>
struct Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex,System.Boolean>
struct Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Boolean>
struct Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>
struct Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Single>
struct Func_2_t09D2CFF52985BC10743D36B0C0CA5D35AFFACA40  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Object,System.Int32>
struct Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D  : public MulticastDelegate_t
{
};

// System.Func`3<UnityEngine.Vector4,UnityEngine.Vector4,System.Int32>
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F  : public MulticastDelegate_t
{
};

// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821  : public MulticastDelegate_t
{
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>
struct WhereEnumerableIterator_1_t127D736034FB83A06A795CA3061F61D58D3F8D08  : public Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>
struct WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D  : public Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>
struct WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE  : public Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>
struct WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4  : public Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.EventSystems.RaycastResult,System.Object>
struct WhereSelectListIterator_2_t572AD77218706A60F85AFEF014049CA555658CE0  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t79E53BCF06FE5729390C864BFB25BC7DF0AC911C* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.EventSystems.RaycastResult,System.Single>
struct WhereSelectListIterator_2_t7584EF4BED7AFCF6BAA4C5380C15B5820D66D44A  : public Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t0D2BF3C3B408C71A51F967263F59B027D3D8AB14* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C ___enumerator_6;
};

// Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.NetworkBehaviourReference,Unity.Netcode.NetworkBehaviourReference>
struct WriteDelegate_1_tE41A3AA1BFC049E3DCA374AA32A2CADC10058F4D  : public MulticastDelegate_t
{
};

// Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.NetworkObjectReference,Unity.Netcode.NetworkObjectReference>
struct WriteDelegate_1_t2103D98064DB2ED30610D5209A0AB1545BB86071  : public MulticastDelegate_t
{
};

// Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkAnimator/AnimationMessage,Unity.Netcode.Components.NetworkAnimator/AnimationMessage>
struct WriteDelegate_1_tBAD71DFDB5D808250EB5989317C0A6EE737AF11D  : public MulticastDelegate_t
{
};

// Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage,Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage>
struct WriteDelegate_1_t10C95C4684CC6353E6B1DB7B4F9BC52EE9DAFA44  : public MulticastDelegate_t
{
};

// Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage,Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage>
struct WriteDelegate_1_tA0CAE9ADE960D1FA035320D86ADD542E4694828D  : public MulticastDelegate_t
{
};

// Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState,Unity.Netcode.Components.NetworkTransform/NetworkTransformState>
struct WriteDelegate_1_t83AD994FDBD5B0A1DF6B80718662FAC776936255  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
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
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping[]
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263  : public RuntimeArray
{
	ALIGN_FIELD (8) LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 m_Items[1];

	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light_2), (void*)NULL);
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light_2), (void*)NULL);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_gshared_inline (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m82BE0507A1DA9D08D938DA9E39FDF6A7A0EE46F5_gshared (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_gshared_inline (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m22E22E0108683303C9E8F060E9C970D6AECF313C_gshared (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_gshared_inline (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0FB98E76EF31D74CB9CE48C358F363BE0F7140FB_gshared (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m1F9229882FB94FE6AA41B1F52EDB0EF1C7B4AFDC_gshared (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m9A414740AAF5B4A111E99A0C506E587A57CF66CC_gshared (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) ;
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkSlice_1_get_Item_m783DB056EE021A4EE7EC2F897995B304AE809A26_gshared (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_mD2C04FFEC216340A4A7CA384549FC1EECF4D3A9E_gshared (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::get_length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7BE927E44E56BA68DA59C46D3D58220BDFD9C16F_gshared_inline (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_mFE10EA30401E4B938E15FB616FBFA3C6D683FEA5_gshared (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_mA4A44C4AFD18F72335F5465BA427201C21F7CCD8_gshared (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* ___compare0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) ;
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___index0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared_inline (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) ;
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___index0, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare0, const RuntimeMethod* method) ;

// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex>::get_Current()
inline ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_inline (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* __this, const RuntimeMethod* method)
{
	return ((  ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 (*) (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*, const RuntimeMethod*))Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex>::MoveNext()
inline bool Enumerator_MoveNext_m82BE0507A1DA9D08D938DA9E39FDF6A7A0EE46F5 (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*, const RuntimeMethod*))Enumerator_MoveNext_m82BE0507A1DA9D08D938DA9E39FDF6A7A0EE46F5_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312 (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::get_Current()
inline RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_inline (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* __this, const RuntimeMethod* method)
{
	return ((  RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 (*) (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C*, const RuntimeMethod*))Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::MoveNext()
inline bool Enumerator_MoveNext_m22E22E0108683303C9E8F060E9C970D6AECF313C (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C*, const RuntimeMethod*))Enumerator_MoveNext_m22E22E0108683303C9E8F060E9C970D6AECF313C_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::get_Current()
inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::MoveNext()
inline bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>::get_Current()
inline SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_inline (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* __this, const RuntimeMethod* method)
{
	return ((  SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 (*) (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*, const RuntimeMethod*))Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>::MoveNext()
inline bool Enumerator_MoveNext_m0FB98E76EF31D74CB9CE48C358F363BE0F7140FB (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*, const RuntimeMethod*))Enumerator_MoveNext_m0FB98E76EF31D74CB9CE48C358F363BE0F7140FB_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::.ctor(T[],System.Int32,System.Int32)
inline void WorkSlice_1__ctor_m1F9229882FB94FE6AA41B1F52EDB0EF1C7B4AFDC (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m1F9229882FB94FE6AA41B1F52EDB0EF1C7B4AFDC_gshared)(__this, ___src0, ___srcStart1, ___srcLen2, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::.ctor(T[],System.Int32)
inline void WorkSlice_1__ctor_m9A414740AAF5B4A111E99A0C506E587A57CF66CC (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___src0, int32_t ___srcLen1, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m9A414740AAF5B4A111E99A0C506E587A57CF66CC_gshared)(__this, ___src0, ___srcLen1, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::get_Item(System.Int32)
inline RuntimeObject* WorkSlice_1_get_Item_m783DB056EE021A4EE7EC2F897995B304AE809A26 (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F*, int32_t, const RuntimeMethod*))WorkSlice_1_get_Item_m783DB056EE021A4EE7EC2F897995B304AE809A26_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::set_Item(System.Int32,T)
inline void WorkSlice_1_set_Item_mD2C04FFEC216340A4A7CA384549FC1EECF4D3A9E (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F*, int32_t, RuntimeObject*, const RuntimeMethod*))WorkSlice_1_set_Item_mD2C04FFEC216340A4A7CA384549FC1EECF4D3A9E_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::get_length()
inline int32_t WorkSlice_1_get_length_m7BE927E44E56BA68DA59C46D3D58220BDFD9C16F_inline (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F*, const RuntimeMethod*))WorkSlice_1_get_length_m7BE927E44E56BA68DA59C46D3D58220BDFD9C16F_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::get_capacity()
inline int32_t WorkSlice_1_get_capacity_mFE10EA30401E4B938E15FB616FBFA3C6D683FEA5 (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F*, const RuntimeMethod*))WorkSlice_1_get_capacity_mFE10EA30401E4B938E15FB616FBFA3C6D683FEA5_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::Sort(System.Func`3<T,T,System.Int32>)
inline void WorkSlice_1_Sort_mA4A44C4AFD18F72335F5465BA427201C21F7CCD8 (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* ___compare0, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F*, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, const RuntimeMethod*))WorkSlice_1_Sort_mA4A44C4AFD18F72335F5465BA427201C21F7CCD8_gshared)(__this, ___compare0, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::.ctor(T[],System.Int32,System.Int32)
inline void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_gshared)(__this, ___src0, ___srcStart1, ___srcLen2, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::.ctor(T[],System.Int32)
inline void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcLen1, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_gshared)(__this, ___src0, ___srcLen1, method);
}
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_Item(System.Int32)
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, int32_t, const RuntimeMethod*))WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
inline void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___index0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, int32_t, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_length()
inline int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_inline (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, const RuntimeMethod*))WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_capacity()
inline int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, const RuntimeMethod*))WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::Sort(System.Func`3<T,T,System.Int32>)
inline void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare0, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_gshared)(__this, ___compare0, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32,System.Int32)
inline void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared)(__this, ___src0, ___srcStart1, ___srcLen2, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32)
inline void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcLen1, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared)(__this, ___src0, ___srcLen1, method);
}
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_Item(System.Int32)
inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, int32_t, const RuntimeMethod*))WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::set_Item(System.Int32,T)
inline void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___index0, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___value1, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, int32_t, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_length()
inline int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, const RuntimeMethod*))WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_capacity()
inline int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, const RuntimeMethod*))WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::Sort(System.Func`3<T,T,System.Int32>)
inline void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare0, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared)(__this, ___compare0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m96BAED87987DAE93B4E6887AE45943A3E21D4E13_gshared (WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D* __this, RuntimeObject* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectEnumerableIterator_2_Clone_mC7E56BD61B2455925C350C460F2649317EA766E7_gshared (WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_3;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_2 = (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*)__this->___selector_5;
		WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D* L_3 = (WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D*, RuntimeObject*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m8E1E6EC7D7A52BC4CCF587115E0C3DEDB1D68D09_gshared (WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		((  void (*) (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mAFA6BD49EF447B55B348AE2F161C05BFE92FC7F6_gshared (WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___source_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)L_4);
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_7 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_8 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_11 = (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*)__this->___selector_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mCA64407851D78E9202A2FF794D8B0AFA724F8263_gshared (WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*, RuntimeObject*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m2E08505C4CB96CC2AD340B4A2B0D3BF0D6DA01F9_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectEnumerableIterator_2_Clone_m2ED927CF2549A759AE2454F97E33F05FA19B552E_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)__this->___selector_5;
		WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* L_3 = (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mD2A476DDFBA6E23D20625E4C1C35AC98DE5F19F2_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mC68F6626ADFD57493351521CE15400BBD158BC68_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___source_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)L_4);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_11 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mA93AACD32DB1D01903967A4CD1F5D74E84AA5F96_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mE8B29F90A4CD398E256C48F9451231F2EE02008E_gshared (WhereSelectEnumerableIterator_2_tF7B17AE20C591499CCC69CF4CFEA521F28D66E94* __this, RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Single>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* WhereSelectEnumerableIterator_2_Clone_mD3C803B488F94D24D9F129FD93E41274437E991E_gshared (WhereSelectEnumerableIterator_2_tF7B17AE20C591499CCC69CF4CFEA521F28D66E94* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* L_2 = (Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12*)__this->___selector_5;
		WhereSelectEnumerableIterator_2_tF7B17AE20C591499CCC69CF4CFEA521F28D66E94* L_3 = (WhereSelectEnumerableIterator_2_tF7B17AE20C591499CCC69CF4CFEA521F28D66E94*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectEnumerableIterator_2_tF7B17AE20C591499CCC69CF4CFEA521F28D66E94*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Single>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mC03D128C0216636BDA33DD30E366835164B2FEC3_gshared (WhereSelectEnumerableIterator_2_tF7B17AE20C591499CCC69CF4CFEA521F28D66E94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
		((  void (*) (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Single>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mC191409559A19D8A9E50612452F42848CBE42A9E_gshared (WhereSelectEnumerableIterator_2_tF7B17AE20C591499CCC69CF4CFEA521F28D66E94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___source_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)L_4);
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* L_11 = (Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		float L_13;
		L_13 = ((  float (*) (Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Single>::Dispose() */, (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Single>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mD90BB6C0B5510E39C91CC55D6DCA11BA47E9298C_gshared (WhereSelectEnumerableIterator_2_tF7B17AE20C591499CCC69CF4CFEA521F28D66E94* __this, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* L_1 = (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*, RuntimeObject*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.EventSystems.RaycastResult,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m1ED7C7B1EA3472A90F02F056CD3E51FC084B49B0_gshared (WhereSelectEnumerableIterator_2_tEB349E8AA526E775597D349A10304EDEF4747B19* __this, RuntimeObject* ___source0, Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* ___predicate1, Func_2_t79E53BCF06FE5729390C864BFB25BC7DF0AC911C* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t79E53BCF06FE5729390C864BFB25BC7DF0AC911C* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.EventSystems.RaycastResult,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectEnumerableIterator_2_Clone_mFA6B9431E1691CA440AA6C6FB600422E4DFFAB3F_gshared (WhereSelectEnumerableIterator_2_tEB349E8AA526E775597D349A10304EDEF4747B19* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_3;
		Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* L_1 = (Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*)__this->___predicate_4;
		Func_2_t79E53BCF06FE5729390C864BFB25BC7DF0AC911C* L_2 = (Func_2_t79E53BCF06FE5729390C864BFB25BC7DF0AC911C*)__this->___selector_5;
		WhereSelectEnumerableIterator_2_tEB349E8AA526E775597D349A10304EDEF4747B19* L_3 = (WhereSelectEnumerableIterator_2_tEB349E8AA526E775597D349A10304EDEF4747B19*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectEnumerableIterator_2_tEB349E8AA526E775597D349A10304EDEF4747B19*, RuntimeObject*, Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*, Func_2_t79E53BCF06FE5729390C864BFB25BC7DF0AC911C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.EventSystems.RaycastResult,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m1D67D77F4DA653DDED494D640F25D1AD77B42EAD_gshared (WhereSelectEnumerableIterator_2_tEB349E8AA526E775597D349A10304EDEF4747B19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.EventSystems.RaycastResult,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mC77C7A289DCB0BE46C40E70DE755720631C6BA75_gshared (WhereSelectEnumerableIterator_2_tEB349E8AA526E775597D349A10304EDEF4747B19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___source_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)L_4);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck(L_5);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_6;
		L_6 = InterfaceFuncInvoker0< RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* L_7 = (Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* L_8 = (Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*)__this->___predicate_4;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t79E53BCF06FE5729390C864BFB25BC7DF0AC911C* L_11 = (Func_2_t79E53BCF06FE5729390C864BFB25BC7DF0AC911C*)__this->___selector_5;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t79E53BCF06FE5729390C864BFB25BC7DF0AC911C*, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.EventSystems.RaycastResult,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m028B4CC12E9167BA4C739DF2B68CE061E37E8864_gshared (WhereSelectEnumerableIterator_2_tEB349E8AA526E775597D349A10304EDEF4747B19* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.EventSystems.RaycastResult,System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m4380A386A5702CFB1AD0B50378ED0A7211AF2FAE_gshared (WhereSelectEnumerableIterator_2_tF4AF10C529A166B074CC041813A9BD2E7A909C8D* __this, RuntimeObject* ___source0, Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* ___predicate1, Func_2_t0D2BF3C3B408C71A51F967263F59B027D3D8AB14* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t0D2BF3C3B408C71A51F967263F59B027D3D8AB14* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.EventSystems.RaycastResult,System.Single>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* WhereSelectEnumerableIterator_2_Clone_m182C91FDE2F832FEF93F8C73CA58FC4D648E71C2_gshared (WhereSelectEnumerableIterator_2_tF4AF10C529A166B074CC041813A9BD2E7A909C8D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_3;
		Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* L_1 = (Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*)__this->___predicate_4;
		Func_2_t0D2BF3C3B408C71A51F967263F59B027D3D8AB14* L_2 = (Func_2_t0D2BF3C3B408C71A51F967263F59B027D3D8AB14*)__this->___selector_5;
		WhereSelectEnumerableIterator_2_tF4AF10C529A166B074CC041813A9BD2E7A909C8D* L_3 = (WhereSelectEnumerableIterator_2_tF4AF10C529A166B074CC041813A9BD2E7A909C8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectEnumerableIterator_2_tF4AF10C529A166B074CC041813A9BD2E7A909C8D*, RuntimeObject*, Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*, Func_2_t0D2BF3C3B408C71A51F967263F59B027D3D8AB14*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.EventSystems.RaycastResult,System.Single>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m85A7C4F6FB58C6CD7A2A6496818D2A0548613732_gshared (WhereSelectEnumerableIterator_2_tF4AF10C529A166B074CC041813A9BD2E7A909C8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
		((  void (*) (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.EventSystems.RaycastResult,System.Single>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mCC1B6690DDBF0BE8F7620ADA2F6E266CBA4C8F29_gshared (WhereSelectEnumerableIterator_2_tF4AF10C529A166B074CC041813A9BD2E7A909C8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___source_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)L_4);
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck(L_5);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_6;
		L_6 = InterfaceFuncInvoker0< RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* L_7 = (Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* L_8 = (Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*)__this->___predicate_4;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t0D2BF3C3B408C71A51F967263F59B027D3D8AB14* L_11 = (Func_2_t0D2BF3C3B408C71A51F967263F59B027D3D8AB14*)__this->___selector_5;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_12 = V_1;
		NullCheck(L_11);
		float L_13;
		L_13 = ((  float (*) (Func_2_t0D2BF3C3B408C71A51F967263F59B027D3D8AB14*, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Single>::Dispose() */, (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.EventSystems.RaycastResult,System.Single>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m70D90C8F7370C86E8E237FB9A8626F21DA850997_gshared (WhereSelectEnumerableIterator_2_tF4AF10C529A166B074CC041813A9BD2E7A909C8D* __this, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* L_1 = (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*, RuntimeObject*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m67E0676B846F7D5D13322DFE2366E000F49CCE01_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, RuntimeObject* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectEnumerableIterator_2_Clone_m79D0125A1A65347F4522C73EA7D684850A856150_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* L_3 = (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586*, RuntimeObject*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m4059A77B770FEFC2E069A60DF9EE649B4D3C4DE5_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mF9058AE915E95BB4D1B6852E177B962E5C72041C_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___source_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.StyleSelectorPart>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)L_4);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck(L_5);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = InterfaceFuncInvoker0< StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.UIElements.StyleSelectorPart>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_11 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m7F40A08064DE17F179D3D40D6F7D38500D7167FE_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m2D38A8548FBF51B724154BC36BB7E161F8748F66_gshared (WhereSelectEnumerableIterator_2_tDAAE6B90875269F423AAB700F4B1801707CB4BF7* __this, RuntimeObject* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* WhereSelectEnumerableIterator_2_Clone_mE0BE79B900CB1A4FE85D079E6ACB0FF4EAFCCFD1_gshared (WhereSelectEnumerableIterator_2_tDAAE6B90875269F423AAB700F4B1801707CB4BF7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D* L_2 = (Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D*)__this->___selector_5;
		WhereSelectEnumerableIterator_2_tDAAE6B90875269F423AAB700F4B1801707CB4BF7* L_3 = (WhereSelectEnumerableIterator_2_tDAAE6B90875269F423AAB700F4B1801707CB4BF7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectEnumerableIterator_2_tDAAE6B90875269F423AAB700F4B1801707CB4BF7*, RuntimeObject*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m7BA76B5FA002C8D495AD5371AF10F8DC548370AC_gshared (WhereSelectEnumerableIterator_2_tDAAE6B90875269F423AAB700F4B1801707CB4BF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
		((  void (*) (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mD3DE56FD3F7851C819845CBC4ECF43DB3F89E06A_gshared (WhereSelectEnumerableIterator_2_tDAAE6B90875269F423AAB700F4B1801707CB4BF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___source_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UIElements.StyleSelectorPart>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)L_4);
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck(L_5);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = InterfaceFuncInvoker0< StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.UIElements.StyleSelectorPart>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D* L_11 = (Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		float L_13;
		L_13 = ((  float (*) (Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Single>::Dispose() */, (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m1B0CF8DBCCFA8140DE32F36AAF9F40920C370E57_gshared (WhereSelectEnumerableIterator_2_tDAAE6B90875269F423AAB700F4B1801707CB4BF7* __this, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* L_1 = (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*, RuntimeObject*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m4DCE03A8CD72D17DFF1C54E37FB9CB9171157B9F_gshared (WhereSelectEnumerableIterator_2_t01745EDCF0CD81AE41BBDF06211970418430A543* __this, RuntimeObject* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectEnumerableIterator_2_Clone_mDF613342651B82D6D9749C7DE3C3D2C1D31A49A2_gshared (WhereSelectEnumerableIterator_2_t01745EDCF0CD81AE41BBDF06211970418430A543* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_3;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* L_2 = (Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575*)__this->___selector_5;
		WhereSelectEnumerableIterator_2_t01745EDCF0CD81AE41BBDF06211970418430A543* L_3 = (WhereSelectEnumerableIterator_2_t01745EDCF0CD81AE41BBDF06211970418430A543*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectEnumerableIterator_2_t01745EDCF0CD81AE41BBDF06211970418430A543*, RuntimeObject*, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*, Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m5912DC383A1DCACE39B3A6CD7F04809C5007761C_gshared (WhereSelectEnumerableIterator_2_t01745EDCF0CD81AE41BBDF06211970418430A543* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m5E33A127B038D99BB720C2B796519E3DEF7BD165_gshared (WhereSelectEnumerableIterator_2_t01745EDCF0CD81AE41BBDF06211970418430A543* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___source_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)L_4);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck(L_5);
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_6;
		L_6 = InterfaceFuncInvoker0< SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_7 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_8 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* L_11 = (Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575*)__this->___selector_5;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m337CBE6A9545B4068339B6A02276FF7024B25C39_gshared (WhereSelectEnumerableIterator_2_t01745EDCF0CD81AE41BBDF06211970418430A543* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m6179D70E576305371685E1EA75EB8B9D0E0519B7_gshared (WhereSelectEnumerableIterator_2_t4D94FE494B201539A142AADFB74EE9CF6397CE85* __this, RuntimeObject* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_t09D2CFF52985BC10743D36B0C0CA5D35AFFACA40* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t09D2CFF52985BC10743D36B0C0CA5D35AFFACA40* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Single>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* WhereSelectEnumerableIterator_2_Clone_mB706B8417F17F60985D79D3E65D076B3E4997CB4_gshared (WhereSelectEnumerableIterator_2_t4D94FE494B201539A142AADFB74EE9CF6397CE85* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_3;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		Func_2_t09D2CFF52985BC10743D36B0C0CA5D35AFFACA40* L_2 = (Func_2_t09D2CFF52985BC10743D36B0C0CA5D35AFFACA40*)__this->___selector_5;
		WhereSelectEnumerableIterator_2_t4D94FE494B201539A142AADFB74EE9CF6397CE85* L_3 = (WhereSelectEnumerableIterator_2_t4D94FE494B201539A142AADFB74EE9CF6397CE85*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectEnumerableIterator_2_t4D94FE494B201539A142AADFB74EE9CF6397CE85*, RuntimeObject*, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*, Func_2_t09D2CFF52985BC10743D36B0C0CA5D35AFFACA40*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Single>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m9F987667CA9BF354470BF856CFE9646CEF50CBFC_gshared (WhereSelectEnumerableIterator_2_t4D94FE494B201539A142AADFB74EE9CF6397CE85* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)(RuntimeObject*)NULL);
		NullCheck((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
		((  void (*) (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Single>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m47CCE894586578A69FBF875F2B434063E0D287E7_gshared (WhereSelectEnumerableIterator_2_t4D94FE494B201539A142AADFB74EE9CF6397CE85* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___source_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_6), (void*)L_4);
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck(L_5);
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_6;
		L_6 = InterfaceFuncInvoker0< SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_7 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_8 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t09D2CFF52985BC10743D36B0C0CA5D35AFFACA40* L_11 = (Func_2_t09D2CFF52985BC10743D36B0C0CA5D35AFFACA40*)__this->___selector_5;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_12 = V_1;
		NullCheck(L_11);
		float L_13;
		L_13 = ((  float (*) (Func_2_t09D2CFF52985BC10743D36B0C0CA5D35AFFACA40*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->___enumerator_6;
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Single>::Dispose() */, (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Single>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mE1F2F0DBEDF5E55920FAB83EBC468F4A6C4BA4BA_gshared (WhereSelectEnumerableIterator_2_t4D94FE494B201539A142AADFB74EE9CF6397CE85* __this, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* L_1 = (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*, RuntimeObject*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m07CEFA408135109D80FBEDC2F24E897E22D5940B_gshared (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source0, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate1, Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC* WhereSelectListIterator_2_Clone_mA1AE1A51E11723EC85F03021507B3634C1D64580_gshared (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_0 = (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*)__this->___source_3;
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_1 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* L_2 = (Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C*)__this->___selector_5;
		WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D* L_3 = (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D*, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*, Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m8B6AB5314BB7E9C2FC62357670E901C0D40B0C25_gshared (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_3 = (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B L_4;
		L_4 = ((  Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B (*) (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Data_1), (void*)NULL);
		#endif
		((Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* L_5 = (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*)(&__this->___enumerator_6);
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_6;
		L_6 = Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_7 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_8 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C* L_11 = (Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C*)__this->___selector_5;
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_12 = V_1;
		NullCheck(L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (Func_2_t3C4A84767E4DCD110DE5829805AB451D74F7855C*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* L_14 = (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m82BE0507A1DA9D08D938DA9E39FDF6A7A0EE46F5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Color>::Dispose() */, (Iterator_1_tC459669F070C2AA0079C887B6B32DBAD31F39DEC*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Color>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mBA9EAF462530A792C1EBBA1A5B7D748399E500E4_gshared (WhereSelectListIterator_2_tFB269841B9C71C069BCAF4BFEF33E80FB330237D* __this, Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67* L_0 = ___predicate0;
		WhereEnumerableIterator_1_tD5DEEFCB0EBA11A5D05945BBC8945CEC4E8BF89A* L_1 = (WhereEnumerableIterator_1_tD5DEEFCB0EBA11A5D05945BBC8945CEC4E8BF89A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_tD5DEEFCB0EBA11A5D05945BBC8945CEC4E8BF89A*, RuntimeObject*, Func_2_tBD849D4F5EB84301B6ACA4A3842EDB2C52281F67*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mAE464B776609113368F58779356E9C6E3E0E2C63_gshared (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source0, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate1, Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* WhereSelectListIterator_2_Clone_mE32C10001585143D33C8C03C94D8B3FC38473618_gshared (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_0 = (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*)__this->___source_3;
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_1 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* L_2 = (Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711*)__this->___selector_5;
		WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE* L_3 = (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE*, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*, Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m27E92E918634190C912ACC889DFA23AF8ACB11C6_gshared (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_3 = (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B L_4;
		L_4 = ((  Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B (*) (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Data_1), (void*)NULL);
		#endif
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* L_5 = (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*)(&__this->___enumerator_6);
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_6;
		L_6 = Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_7 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_8 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711* L_11 = (Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711*)__this->___selector_5;
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_12 = V_1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Func_2_tD3AF230A7318BC7A365DE411E6145604C4EBA711*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* L_14 = (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m82BE0507A1DA9D08D938DA9E39FDF6A7A0EE46F5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Vector3>::Dispose() */, (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Vector3>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1C5509878B9B4DFBFC85E633339AC802F221ABB0_gshared (WhereSelectListIterator_2_t9864A5F01E8A24C4AEB99C342FF9C28E2D34ACBE* __this, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* L_1 = (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E*, RuntimeObject*, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6E8F7760564769AD34A7AA258C73A047CFE5AD9B_gshared (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4* __this, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* ___source0, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* ___predicate1, Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072* WhereSelectListIterator_2_Clone_mB3426B2435DB4C6FF9ED2D97EAEA54214C511BC6_gshared (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4* __this, const RuntimeMethod* method) 
{
	{
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_0 = (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*)__this->___source_3;
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_1 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* L_2 = (Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741*)__this->___selector_5;
		WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4* L_3 = (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4*, List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*, Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*, Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m5DDB57FD52DB3C0CEB20436C511C5C36D858C935_gshared (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535* L_3 = (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B L_4;
		L_4 = ((  Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B (*) (List_1_t6B6DC2938E9228A2348281CC1F7016D44F756535*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___Data_1), (void*)NULL);
		#endif
		((Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* L_5 = (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*)(&__this->___enumerator_6);
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_6;
		L_6 = Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_7 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A* L_8 = (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*)__this->___predicate_4;
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t57123E8F86B56CD1CE6F3584588E024A7EDB9F2A*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741* L_11 = (Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741*)__this->___selector_5;
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_12 = V_1;
		NullCheck(L_11);
		LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB L_13;
		L_13 = ((  LightMeshVertex_t5E886C7928458EB522BEB49D43C67ACC09EC7DCB (*) (Func_2_t98F1DDDE05B9CB9EF2FD1AB4F5D8DB9E28EA7741*, ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* L_14 = (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m82BE0507A1DA9D08D938DA9E39FDF6A7A0EE46F5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>::Dispose() */, (Iterator_1_t9A4945F6FFA0F2DC31A759BFF992128F450E7072*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Rendering.Universal.LibTessDotNet.ContourVertex,UnityEngine.Rendering.Universal.LightUtility/LightMeshVertex>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m8C11C42C5D6791545B8E6E5E688620AABF327963_gshared (WhereSelectListIterator_2_t9A1F8C74D04AACF859B5F42BB61A10CF9A26DBB4* __this, Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t127D736034FB83A06A795CA3061F61D58D3F8D08* L_1 = (WhereEnumerableIterator_1_t127D736034FB83A06A795CA3061F61D58D3F8D08*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t127D736034FB83A06A795CA3061F61D58D3F8D08*, RuntimeObject*, Func_2_t9F7EEE7245A2283B0621AEC2CA9258E827B66751*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m42B6E206A0E398E45DA94F8109B58ACE1749F6A4_gshared (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source0, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate1, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m89B70C1B596662479F7844116D9B99FE501BFD84_gshared (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, const RuntimeMethod* method) 
{
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___source_3;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_2 = (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*)__this->___selector_5;
		WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* L_3 = (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mA4673028DAC84866E54385B22CBEFC22D92BC9CD_gshared (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_4;
		L_4 = ((  Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* L_5 = (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*)(&__this->___enumerator_6);
		int32_t L_6;
		L_6 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_7 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_8 = (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*)__this->___predicate_4;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_11 = (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*)__this->___selector_5;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = ((  int32_t (*) (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* L_14 = (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32>::Dispose() */, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Int32>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2B1D8127CD81AE6BA9FA935CA573327EACB64820_gshared (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*, RuntimeObject*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mF22589DABD608C024E039C0F5DE9F457967EC3E8_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)__this->___selector_5;
		WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* L_3 = (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4609B745A7644E640F319C2651F1A97C2D304458_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_11 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA37F84C07852A5760237B9A50C373846A6528477_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Single>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m22BAFF678F9378729DD9E5551BBA6BA69FDEEF94_gshared (WhereSelectListIterator_2_tFE32164179EE37B666D799CFB7F5167FB4C464D9* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Single>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* WhereSelectListIterator_2_Clone_m29FF529DD718DD7EEFEE0E1128661AD8EF2C534E_gshared (WhereSelectListIterator_2_tFE32164179EE37B666D799CFB7F5167FB4C464D9* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* L_2 = (Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12*)__this->___selector_5;
		WhereSelectListIterator_2_tFE32164179EE37B666D799CFB7F5167FB4C464D9* L_3 = (WhereSelectListIterator_2_tFE32164179EE37B666D799CFB7F5167FB4C464D9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tFE32164179EE37B666D799CFB7F5167FB4C464D9*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Single>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m0B0C765BFD4BA1167D123810AF36952282481BA6_gshared (WhereSelectListIterator_2_tFE32164179EE37B666D799CFB7F5167FB4C464D9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* L_11 = (Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		float L_13;
		L_13 = ((  float (*) (Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Single>::Dispose() */, (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Single>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m4A3DB49D03860A66FF85F000DEB2E2D8688DAC49_gshared (WhereSelectListIterator_2_tFE32164179EE37B666D799CFB7F5167FB4C464D9* __this, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* L_1 = (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*, RuntimeObject*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.EventSystems.RaycastResult,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m7F23AAC9D6F8690037694166D72E0154EDFF5767_gshared (WhereSelectListIterator_2_t572AD77218706A60F85AFEF014049CA555658CE0* __this, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___source0, Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* ___predicate1, Func_2_t79E53BCF06FE5729390C864BFB25BC7DF0AC911C* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t79E53BCF06FE5729390C864BFB25BC7DF0AC911C* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.EventSystems.RaycastResult,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m82A562FE59E0A2918D7453B10AC2DC2F75DED293_gshared (WhereSelectListIterator_2_t572AD77218706A60F85AFEF014049CA555658CE0* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_0 = (List_1_t8292C421BBB00D7661DC07462822936152BAB446*)__this->___source_3;
		Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* L_1 = (Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*)__this->___predicate_4;
		Func_2_t79E53BCF06FE5729390C864BFB25BC7DF0AC911C* L_2 = (Func_2_t79E53BCF06FE5729390C864BFB25BC7DF0AC911C*)__this->___selector_5;
		WhereSelectListIterator_2_t572AD77218706A60F85AFEF014049CA555658CE0* L_3 = (WhereSelectListIterator_2_t572AD77218706A60F85AFEF014049CA555658CE0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t572AD77218706A60F85AFEF014049CA555658CE0*, List_1_t8292C421BBB00D7661DC07462822936152BAB446*, Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*, Func_2_t79E53BCF06FE5729390C864BFB25BC7DF0AC911C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.EventSystems.RaycastResult,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m7B1B7B406BFC5A67831D6485B38B2FE201FB0E98_gshared (WhereSelectListIterator_2_t572AD77218706A60F85AFEF014049CA555658CE0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_3 = (List_1_t8292C421BBB00D7661DC07462822936152BAB446*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C L_4;
		L_4 = ((  Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_GameObject_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___module_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* L_5 = (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C*)(&__this->___enumerator_6);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_6;
		L_6 = Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* L_7 = (Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* L_8 = (Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*)__this->___predicate_4;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t79E53BCF06FE5729390C864BFB25BC7DF0AC911C* L_11 = (Func_2_t79E53BCF06FE5729390C864BFB25BC7DF0AC911C*)__this->___selector_5;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t79E53BCF06FE5729390C864BFB25BC7DF0AC911C*, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* L_14 = (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m22E22E0108683303C9E8F060E9C970D6AECF313C(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.EventSystems.RaycastResult,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mEECCE6D68FBC46DCB131DCB511321A35F83905E5_gshared (WhereSelectListIterator_2_t572AD77218706A60F85AFEF014049CA555658CE0* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.EventSystems.RaycastResult,System.Single>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDBD890DDE11C0BAC7A6A190BED17095C5608D76D_gshared (WhereSelectListIterator_2_t7584EF4BED7AFCF6BAA4C5380C15B5820D66D44A* __this, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___source0, Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* ___predicate1, Func_2_t0D2BF3C3B408C71A51F967263F59B027D3D8AB14* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t0D2BF3C3B408C71A51F967263F59B027D3D8AB14* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.EventSystems.RaycastResult,System.Single>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* WhereSelectListIterator_2_Clone_mD64473462D53D1696EF0481890AB117BA232ECFC_gshared (WhereSelectListIterator_2_t7584EF4BED7AFCF6BAA4C5380C15B5820D66D44A* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_0 = (List_1_t8292C421BBB00D7661DC07462822936152BAB446*)__this->___source_3;
		Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* L_1 = (Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*)__this->___predicate_4;
		Func_2_t0D2BF3C3B408C71A51F967263F59B027D3D8AB14* L_2 = (Func_2_t0D2BF3C3B408C71A51F967263F59B027D3D8AB14*)__this->___selector_5;
		WhereSelectListIterator_2_t7584EF4BED7AFCF6BAA4C5380C15B5820D66D44A* L_3 = (WhereSelectListIterator_2_t7584EF4BED7AFCF6BAA4C5380C15B5820D66D44A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t7584EF4BED7AFCF6BAA4C5380C15B5820D66D44A*, List_1_t8292C421BBB00D7661DC07462822936152BAB446*, Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*, Func_2_t0D2BF3C3B408C71A51F967263F59B027D3D8AB14*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.EventSystems.RaycastResult,System.Single>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mC8222FFA0453527F20047E5F78C0144DECC7DE07_gshared (WhereSelectListIterator_2_t7584EF4BED7AFCF6BAA4C5380C15B5820D66D44A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_3 = (List_1_t8292C421BBB00D7661DC07462822936152BAB446*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C L_4;
		L_4 = ((  Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_GameObject_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___module_1), (void*)NULL);
		#endif
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* L_5 = (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C*)(&__this->___enumerator_6);
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_6;
		L_6 = Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* L_7 = (Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A* L_8 = (Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*)__this->___predicate_4;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t32966CE1031855FFBBCA1651A2D84FCC2914C30A*, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t0D2BF3C3B408C71A51F967263F59B027D3D8AB14* L_11 = (Func_2_t0D2BF3C3B408C71A51F967263F59B027D3D8AB14*)__this->___selector_5;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_12 = V_1;
		NullCheck(L_11);
		float L_13;
		L_13 = ((  float (*) (Func_2_t0D2BF3C3B408C71A51F967263F59B027D3D8AB14*, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* L_14 = (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m22E22E0108683303C9E8F060E9C970D6AECF313C(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Single>::Dispose() */, (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.EventSystems.RaycastResult,System.Single>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m6E3D90958FABB14FF1865651DF8BB9163DDEA3DF_gshared (WhereSelectListIterator_2_t7584EF4BED7AFCF6BAA4C5380C15B5820D66D44A* __this, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* L_1 = (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*, RuntimeObject*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m6D285DDC28CFAF8BDCF8C2ED06F9982D33D0342A_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* L_3 = (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9DBE2E1EDA00E9EBE1A6E90D5DA81A39E1CEBF37_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = ((  Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F (*) (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_11 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mE0E3E8BE8176B317F5FF0D03313F7D4DFE68681E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m76F902C34043369FDB8A537BDF0D659CCC5697A6_gshared (WhereSelectListIterator_2_t5226C1D52FE78BEA0F91B9EEBBAA3092EE38AD0D* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* WhereSelectListIterator_2_Clone_m2CA3D99FA9ADD7D33A0E32E7ABFE857D61CF43CC_gshared (WhereSelectListIterator_2_t5226C1D52FE78BEA0F91B9EEBBAA3092EE38AD0D* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D* L_2 = (Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D*)__this->___selector_5;
		WhereSelectListIterator_2_t5226C1D52FE78BEA0F91B9EEBBAA3092EE38AD0D* L_3 = (WhereSelectListIterator_2_t5226C1D52FE78BEA0F91B9EEBBAA3092EE38AD0D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t5226C1D52FE78BEA0F91B9EEBBAA3092EE38AD0D*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m736FB80CEB54C0ACCF7FFCE2824FB9B9AFAA43A7_gshared (WhereSelectListIterator_2_t5226C1D52FE78BEA0F91B9EEBBAA3092EE38AD0D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = ((  Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F (*) (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D* L_11 = (Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		float L_13;
		L_13 = ((  float (*) (Func_2_t1DF9A6EF4754198AEEA5C4062DCC2D163ACDDA9D*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Single>::Dispose() */, (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Single>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mE2ED70B04431A5B2283DADDC7DEB37DCF1978676_gshared (WhereSelectListIterator_2_t5226C1D52FE78BEA0F91B9EEBBAA3092EE38AD0D* __this, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* L_1 = (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*, RuntimeObject*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA8D2648DDE7F87217F910F975A085FD212F2F6A5_gshared (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m89B522BAE24867FCC8287422B3CD6B3E4DD1DAE0_gshared (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A* __this, const RuntimeMethod* method) 
{
	{
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_0 = (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*)__this->___source_3;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* L_2 = (Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575*)__this->___selector_5;
		WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A* L_3 = (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A*, List_1_t9F15086189A9401719178EA3A7122587601C9F5C*, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*, Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mFB9C45CEBAED3E2C325D5D59C257CAB6F743AA46_gshared (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_3 = (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF L_4;
		L_4 = ((  Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF (*) (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___sceneGUID_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___profile_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* L_5 = (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*)(&__this->___enumerator_6);
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_6;
		L_6 = Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_7 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_8 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575* L_11 = (Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575*)__this->___selector_5;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t4090BBC19EA26DCB6A0FB7D6E4181945F2BB4575*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* L_14 = (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m0FB98E76EF31D74CB9CE48C358F363BE0F7140FB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m072977E25657E836E04AE9F97F55D76809EF700A_gshared (WhereSelectListIterator_2_t2A0894CC42F838009ED4AA31C48037EFA6D10F4A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Single>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA4F3D4299937BBC4DAC822C12C2753CC4A1EBCD7_gshared (WhereSelectListIterator_2_t9A9AD6E40B14772428EF9FB579A39CFC79FEE435* __this, List_1_t9F15086189A9401719178EA3A7122587601C9F5C* ___source0, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* ___predicate1, Func_2_t09D2CFF52985BC10743D36B0C0CA5D35AFFACA40* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t09D2CFF52985BC10743D36B0C0CA5D35AFFACA40* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Single>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* WhereSelectListIterator_2_Clone_m189F1A6E1F13AD9265AB3BD452E2C4E8870CC674_gshared (WhereSelectListIterator_2_t9A9AD6E40B14772428EF9FB579A39CFC79FEE435* __this, const RuntimeMethod* method) 
{
	{
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_0 = (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*)__this->___source_3;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_1 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		Func_2_t09D2CFF52985BC10743D36B0C0CA5D35AFFACA40* L_2 = (Func_2_t09D2CFF52985BC10743D36B0C0CA5D35AFFACA40*)__this->___selector_5;
		WhereSelectListIterator_2_t9A9AD6E40B14772428EF9FB579A39CFC79FEE435* L_3 = (WhereSelectListIterator_2_t9A9AD6E40B14772428EF9FB579A39CFC79FEE435*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t9A9AD6E40B14772428EF9FB579A39CFC79FEE435*, List_1_t9F15086189A9401719178EA3A7122587601C9F5C*, Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*, Func_2_t09D2CFF52985BC10743D36B0C0CA5D35AFFACA40*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Single>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m7FAFE087210F33DDEBB787DDF82913000F0F3577_gshared (WhereSelectListIterator_2_t9A9AD6E40B14772428EF9FB579A39CFC79FEE435* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t9F15086189A9401719178EA3A7122587601C9F5C* L_3 = (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF L_4;
		L_4 = ((  Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF (*) (List_1_t9F15086189A9401719178EA3A7122587601C9F5C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___sceneGUID_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___profile_1), (void*)NULL);
		#endif
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* L_5 = (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*)(&__this->___enumerator_6);
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_6;
		L_6 = Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_7 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B* L_8 = (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*)__this->___predicate_4;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tEF41DB92623C36C4A991D9ED2AE430ECC020D65B*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t09D2CFF52985BC10743D36B0C0CA5D35AFFACA40* L_11 = (Func_2_t09D2CFF52985BC10743D36B0C0CA5D35AFFACA40*)__this->___selector_5;
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_12 = V_1;
		NullCheck(L_11);
		float L_13;
		L_13 = ((  float (*) (Func_2_t09D2CFF52985BC10743D36B0C0CA5D35AFFACA40*, SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___current_2 = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* L_14 = (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m0FB98E76EF31D74CB9CE48C358F363BE0F7140FB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Single>::Dispose() */, (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.Experimental.Rendering.ProbeVolumeSceneData/SerializablePVProfile,System.Single>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m58A3775AC0D6E5F568DF5C1516B10129B85ADA0E_gshared (WhereSelectListIterator_2_t9A9AD6E40B14772428EF9FB579A39CFC79FEE435* __this, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* L_1 = (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*, RuntimeObject*, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m9A414740AAF5B4A111E99A0C506E587A57CF66CC_gshared (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) 
{
	{
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___src0;
		int32_t L_1 = ___srcLen1;
		WorkSlice_1__ctor_m1F9229882FB94FE6AA41B1F52EDB0EF1C7B4AFDC(__this, L_0, 0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m9A414740AAF5B4A111E99A0C506E587A57CF66CC_AdjustorThunk (RuntimeObject* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___src0, int32_t ___srcLen1, const RuntimeMethod* method)
{
	WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F*>(__this + _offset);
	WorkSlice_1__ctor_m9A414740AAF5B4A111E99A0C506E587A57CF66CC(_thisAdjusted, ___src0, ___srcLen1, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m1F9229882FB94FE6AA41B1F52EDB0EF1C7B4AFDC_gshared (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* G_B2_0 = NULL;
	WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* G_B3_1 = NULL;
	{
		// m_Data = src;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___src0;
		__this->___m_Data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_0), (void*)L_0);
		// m_Start = srcStart;
		int32_t L_1 = ___srcStart1;
		__this->___m_Start_1 = L_1;
		// m_Length = (srcLen < 0) ? src.Length : Math.Min(srcLen, src.Length);
		int32_t L_2 = ___srcLen2;
		G_B1_0 = __this;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = ___srcLen2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___src0;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___src0;
		NullCheck(L_6);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		G_B3_1->___m_Length_2 = G_B3_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m1F9229882FB94FE6AA41B1F52EDB0EF1C7B4AFDC_AdjustorThunk (RuntimeObject* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method)
{
	WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F*>(__this + _offset);
	WorkSlice_1__ctor_m1F9229882FB94FE6AA41B1F52EDB0EF1C7B4AFDC(_thisAdjusted, ___src0, ___srcStart1, ___srcLen2, method);
}
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WorkSlice_1_get_Item_m783DB056EE021A4EE7EC2F897995B304AE809A26_gshared (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// get => m_Data[m_Start + index];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___index0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		RuntimeObject* L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* WorkSlice_1_get_Item_m783DB056EE021A4EE7EC2F897995B304AE809A26_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = WorkSlice_1_get_Item_m783DB056EE021A4EE7EC2F897995B304AE809A26(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_mD2C04FFEC216340A4A7CA384549FC1EECF4D3A9E_gshared (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		// set => m_Data[m_Start + index] = value;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___index0;
		RuntimeObject* L_3 = ___value1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (RuntimeObject*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_mD2C04FFEC216340A4A7CA384549FC1EECF4D3A9E_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F*>(__this + _offset);
	WorkSlice_1_set_Item_mD2C04FFEC216340A4A7CA384549FC1EECF4D3A9E(_thisAdjusted, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7BE927E44E56BA68DA59C46D3D58220BDFD9C16F_gshared (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_m7BE927E44E56BA68DA59C46D3D58220BDFD9C16F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_m7BE927E44E56BA68DA59C46D3D58220BDFD9C16F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_mFE10EA30401E4B938E15FB616FBFA3C6D683FEA5_gshared (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, const RuntimeMethod* method) 
{
	{
		// public int capacity => m_Data.Length;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->___m_Data_0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_mFE10EA30401E4B938E15FB616FBFA3C6D683FEA5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_mFE10EA30401E4B938E15FB616FBFA3C6D683FEA5(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<System.Object>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_mA4A44C4AFD18F72335F5465BA427201C21F7CCD8_gshared (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* ___compare0, const RuntimeMethod* method) 
{
	{
		// if (m_Length > 1)
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		// Sorting.QuickSort(m_Data, m_Start, m_Start + m_Length - 1, compare);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->___m_Data_0;
		int32_t L_2 = (int32_t)__this->___m_Start_1;
		int32_t L_3 = (int32_t)__this->___m_Start_1;
		int32_t L_4 = (int32_t)__this->___m_Length_2;
		Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* L_5 = ___compare0;
		((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_002a:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_mA4A44C4AFD18F72335F5465BA427201C21F7CCD8_AdjustorThunk (RuntimeObject* __this, Func_3_t8F3E514F3F44D98D0029402DBF664E587850807D* ___compare0, const RuntimeMethod* method)
{
	WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F*>(__this + _offset);
	WorkSlice_1_Sort_mA4A44C4AFD18F72335F5465BA427201C21F7CCD8(_thisAdjusted, ___compare0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) 
{
	{
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___src0;
		int32_t L_1 = ___srcLen1;
		WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF(__this, L_0, 0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C_AdjustorThunk (RuntimeObject* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcLen1, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C(_thisAdjusted, ___src0, ___srcLen1, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* G_B2_0 = NULL;
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* G_B3_1 = NULL;
	{
		// m_Data = src;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___src0;
		__this->___m_Data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_0), (void*)L_0);
		// m_Start = srcStart;
		int32_t L_1 = ___srcStart1;
		__this->___m_Start_1 = L_1;
		// m_Length = (srcLen < 0) ? src.Length : Math.Min(srcLen, src.Length);
		int32_t L_2 = ___srcLen2;
		G_B1_0 = __this;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = ___srcLen2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___src0;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001e:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = ___src0;
		NullCheck(L_6);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		G_B3_1->___m_Length_2 = G_B3_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF_AdjustorThunk (RuntimeObject* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF(_thisAdjusted, ___src0, ___srcStart1, ___srcLen2, method);
}
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// get => m_Data[m_Start + index];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___index0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 _returnValue;
	_returnValue = WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___index0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) 
{
	{
		// set => m_Data[m_Start + index] = value;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___index0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___value1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067(_thisAdjusted, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) 
{
	{
		// public int capacity => m_Data.Length;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)__this->___m_Data_0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_m514E3E1482974088A807521F9E2C481EB83C25F8(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Vector4>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_gshared (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare0, const RuntimeMethod* method) 
{
	{
		// if (m_Length > 1)
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		// Sorting.QuickSort(m_Data, m_Start, m_Start + m_Length - 1, compare);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)__this->___m_Data_0;
		int32_t L_2 = (int32_t)__this->___m_Start_1;
		int32_t L_3 = (int32_t)__this->___m_Start_1;
		int32_t L_4 = (int32_t)__this->___m_Length_2;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_5 = ___compare0;
		((  void (*) (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_002a:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D_AdjustorThunk (RuntimeObject* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___compare0, const RuntimeMethod* method)
{
	WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*>(__this + _offset);
	WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D(_thisAdjusted, ___compare0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcLen1, const RuntimeMethod* method) 
{
	{
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___src0;
		int32_t L_1 = ___srcLen1;
		WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0(__this, L_0, 0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_AdjustorThunk (RuntimeObject* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcLen1, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4(_thisAdjusted, ___src0, ___srcLen1, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B2_0 = NULL;
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B3_1 = NULL;
	{
		// m_Data = src;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___src0;
		__this->___m_Data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_0), (void*)L_0);
		// m_Start = srcStart;
		int32_t L_1 = ___srcStart1;
		__this->___m_Start_1 = L_1;
		// m_Length = (srcLen < 0) ? src.Length : Math.Min(srcLen, src.Length);
		int32_t L_2 = ___srcLen2;
		G_B1_0 = __this;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = ___srcLen2;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___src0;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001e:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_6 = ___src0;
		NullCheck(L_6);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		G_B3_1->___m_Length_2 = G_B3_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_AdjustorThunk (RuntimeObject* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___src0, int32_t ___srcStart1, int32_t ___srcLen2, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0(_thisAdjusted, ___src0, ___srcStart1, ___srcLen2, method);
}
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// get => m_Data[m_Start + index];
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___index0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 _returnValue;
	_returnValue = WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___index0, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___value1, const RuntimeMethod* method) 
{
	{
		// set => m_Data[m_Start + index] = value;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___index0;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_3 = ___value1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___value1, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663(_thisAdjusted, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		// public int capacity => m_Data.Length;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)__this->___m_Data_0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare0, const RuntimeMethod* method) 
{
	{
		// if (m_Length > 1)
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		// Sorting.QuickSort(m_Data, m_Start, m_Start + m_Length - 1, compare);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)__this->___m_Data_0;
		int32_t L_2 = (int32_t)__this->___m_Start_1;
		int32_t L_3 = (int32_t)__this->___m_Start_1;
		int32_t L_4 = (int32_t)__this->___m_Length_2;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_5 = ___compare0;
		((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_002a:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_AdjustorThunk (RuntimeObject* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___compare0, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584(_thisAdjusted, ___compare0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_1_Invoke_mD9991C3AA1E58CF165D6FF08796D33AC8D7A7C3F_Multicast(WriteDelegate_1_tE41A3AA1BFC049E3DCA374AA32A2CADC10058F4D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkBehaviourReference_t0379C8F95B4B428FE10F98601188BF6420FA1986* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_1_tE41A3AA1BFC049E3DCA374AA32A2CADC10058F4D* currentDelegate = reinterpret_cast<WriteDelegate_1_tE41A3AA1BFC049E3DCA374AA32A2CADC10058F4D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkBehaviourReference_t0379C8F95B4B428FE10F98601188BF6420FA1986*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_1_Invoke_mD9991C3AA1E58CF165D6FF08796D33AC8D7A7C3F_Open(WriteDelegate_1_tE41A3AA1BFC049E3DCA374AA32A2CADC10058F4D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkBehaviourReference_t0379C8F95B4B428FE10F98601188BF6420FA1986* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkBehaviourReference_t0379C8F95B4B428FE10F98601188BF6420FA1986*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteDelegate_1_Invoke_mD9991C3AA1E58CF165D6FF08796D33AC8D7A7C3F_OpenStaticInvoker(WriteDelegate_1_tE41A3AA1BFC049E3DCA374AA32A2CADC10058F4D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkBehaviourReference_t0379C8F95B4B428FE10F98601188BF6420FA1986* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkBehaviourReference_t0379C8F95B4B428FE10F98601188BF6420FA1986* >::Invoke(__this->___method_ptr_0, method, NULL, ___writer0, ___value1);
}
void WriteDelegate_1_Invoke_mD9991C3AA1E58CF165D6FF08796D33AC8D7A7C3F_ClosedStaticInvoker(WriteDelegate_1_tE41A3AA1BFC049E3DCA374AA32A2CADC10058F4D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkBehaviourReference_t0379C8F95B4B428FE10F98601188BF6420FA1986* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkBehaviourReference_t0379C8F95B4B428FE10F98601188BF6420FA1986* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___writer0, ___value1);
}
// System.Void Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.NetworkBehaviourReference,Unity.Netcode.NetworkBehaviourReference>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_1__ctor_m5B6F4B9F5F2016DB022E6EC08886B94C9A2C003C_gshared (WriteDelegate_1_tE41A3AA1BFC049E3DCA374AA32A2CADC10058F4D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_1_Invoke_mD9991C3AA1E58CF165D6FF08796D33AC8D7A7C3F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_1_Invoke_mD9991C3AA1E58CF165D6FF08796D33AC8D7A7C3F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_1_Invoke_mD9991C3AA1E58CF165D6FF08796D33AC8D7A7C3F_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_1_Invoke_mD9991C3AA1E58CF165D6FF08796D33AC8D7A7C3F_Multicast;
}
// System.Void Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.NetworkBehaviourReference,Unity.Netcode.NetworkBehaviourReference>::Invoke(Unity.Netcode.FastBufferWriter,TForMethod&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_1_Invoke_mD9991C3AA1E58CF165D6FF08796D33AC8D7A7C3F_gshared (WriteDelegate_1_tE41A3AA1BFC049E3DCA374AA32A2CADC10058F4D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkBehaviourReference_t0379C8F95B4B428FE10F98601188BF6420FA1986* ___value1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkBehaviourReference_t0379C8F95B4B428FE10F98601188BF6420FA1986*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.NetworkBehaviourReference,Unity.Netcode.NetworkBehaviourReference>::BeginInvoke(Unity.Netcode.FastBufferWriter,TForMethod&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteDelegate_1_BeginInvoke_m9EFCC6A68FE490E80150DA81692E0DC628D3AD50_gshared (WriteDelegate_1_tE41A3AA1BFC049E3DCA374AA32A2CADC10058F4D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkBehaviourReference_t0379C8F95B4B428FE10F98601188BF6420FA1986* ___value1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviourReference_t0379C8F95B4B428FE10F98601188BF6420FA1986_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___writer0);
	__d_args[1] = Box(NetworkBehaviourReference_t0379C8F95B4B428FE10F98601188BF6420FA1986_il2cpp_TypeInfo_var, &*___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.NetworkBehaviourReference,Unity.Netcode.NetworkBehaviourReference>::EndInvoke(TForMethod&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_1_EndInvoke_m9BED02BC985C16B35C57BBC346C938696EAE6D4B_gshared (WriteDelegate_1_tE41A3AA1BFC049E3DCA374AA32A2CADC10058F4D* __this, NetworkBehaviourReference_t0379C8F95B4B428FE10F98601188BF6420FA1986* ___value0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___value0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_1_Invoke_mAB1E3E09678E4DC87B733ED82010624AC5A4D22E_Multicast(WriteDelegate_1_t2103D98064DB2ED30610D5209A0AB1545BB86071* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_1_t2103D98064DB2ED30610D5209A0AB1545BB86071* currentDelegate = reinterpret_cast<WriteDelegate_1_t2103D98064DB2ED30610D5209A0AB1545BB86071*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_1_Invoke_mAB1E3E09678E4DC87B733ED82010624AC5A4D22E_Open(WriteDelegate_1_t2103D98064DB2ED30610D5209A0AB1545BB86071* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteDelegate_1_Invoke_mAB1E3E09678E4DC87B733ED82010624AC5A4D22E_OpenStaticInvoker(WriteDelegate_1_t2103D98064DB2ED30610D5209A0AB1545BB86071* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* >::Invoke(__this->___method_ptr_0, method, NULL, ___writer0, ___value1);
}
void WriteDelegate_1_Invoke_mAB1E3E09678E4DC87B733ED82010624AC5A4D22E_ClosedStaticInvoker(WriteDelegate_1_t2103D98064DB2ED30610D5209A0AB1545BB86071* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___writer0, ___value1);
}
// System.Void Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.NetworkObjectReference,Unity.Netcode.NetworkObjectReference>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_1__ctor_mC16C1E0E7CA27B0AC5C8118ED62B832F79C0C7B9_gshared (WriteDelegate_1_t2103D98064DB2ED30610D5209A0AB1545BB86071* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_1_Invoke_mAB1E3E09678E4DC87B733ED82010624AC5A4D22E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_1_Invoke_mAB1E3E09678E4DC87B733ED82010624AC5A4D22E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_1_Invoke_mAB1E3E09678E4DC87B733ED82010624AC5A4D22E_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_1_Invoke_mAB1E3E09678E4DC87B733ED82010624AC5A4D22E_Multicast;
}
// System.Void Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.NetworkObjectReference,Unity.Netcode.NetworkObjectReference>::Invoke(Unity.Netcode.FastBufferWriter,TForMethod&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_1_Invoke_mAB1E3E09678E4DC87B733ED82010624AC5A4D22E_gshared (WriteDelegate_1_t2103D98064DB2ED30610D5209A0AB1545BB86071* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* ___value1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.NetworkObjectReference,Unity.Netcode.NetworkObjectReference>::BeginInvoke(Unity.Netcode.FastBufferWriter,TForMethod&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteDelegate_1_BeginInvoke_mFFE9B825E1107B5ED9191BCB15B03340F6CD4769_gshared (WriteDelegate_1_t2103D98064DB2ED30610D5209A0AB1545BB86071* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* ___value1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___writer0);
	__d_args[1] = Box(NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD_il2cpp_TypeInfo_var, &*___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.NetworkObjectReference,Unity.Netcode.NetworkObjectReference>::EndInvoke(TForMethod&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_1_EndInvoke_mA10AE3BEB7BADDB172FAB488CBB5F11F7B1AED34_gshared (WriteDelegate_1_t2103D98064DB2ED30610D5209A0AB1545BB86071* __this, NetworkObjectReference_tDC1F1C3CC1E28DCB9229C36E30BB81F847CF77FD* ___value0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___value0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_1_Invoke_m574AA19309F3D97A50C4410924F9333DAD0167F7_Multicast(WriteDelegate_1_tBAD71DFDB5D808250EB5989317C0A6EE737AF11D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_1_tBAD71DFDB5D808250EB5989317C0A6EE737AF11D* currentDelegate = reinterpret_cast<WriteDelegate_1_tBAD71DFDB5D808250EB5989317C0A6EE737AF11D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_1_Invoke_m574AA19309F3D97A50C4410924F9333DAD0167F7_Open(WriteDelegate_1_tBAD71DFDB5D808250EB5989317C0A6EE737AF11D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteDelegate_1_Invoke_m574AA19309F3D97A50C4410924F9333DAD0167F7_OpenStaticInvoker(WriteDelegate_1_tBAD71DFDB5D808250EB5989317C0A6EE737AF11D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26* >::Invoke(__this->___method_ptr_0, method, NULL, ___writer0, ___value1);
}
void WriteDelegate_1_Invoke_m574AA19309F3D97A50C4410924F9333DAD0167F7_ClosedStaticInvoker(WriteDelegate_1_tBAD71DFDB5D808250EB5989317C0A6EE737AF11D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___writer0, ___value1);
}
// System.Void Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkAnimator/AnimationMessage,Unity.Netcode.Components.NetworkAnimator/AnimationMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_1__ctor_m277575A7A6E07AEF5C129127A646BF960AD30AD0_gshared (WriteDelegate_1_tBAD71DFDB5D808250EB5989317C0A6EE737AF11D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_1_Invoke_m574AA19309F3D97A50C4410924F9333DAD0167F7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_1_Invoke_m574AA19309F3D97A50C4410924F9333DAD0167F7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_1_Invoke_m574AA19309F3D97A50C4410924F9333DAD0167F7_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_1_Invoke_m574AA19309F3D97A50C4410924F9333DAD0167F7_Multicast;
}
// System.Void Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkAnimator/AnimationMessage,Unity.Netcode.Components.NetworkAnimator/AnimationMessage>::Invoke(Unity.Netcode.FastBufferWriter,TForMethod&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_1_Invoke_m574AA19309F3D97A50C4410924F9333DAD0167F7_gshared (WriteDelegate_1_tBAD71DFDB5D808250EB5989317C0A6EE737AF11D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26* ___value1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkAnimator/AnimationMessage,Unity.Netcode.Components.NetworkAnimator/AnimationMessage>::BeginInvoke(Unity.Netcode.FastBufferWriter,TForMethod&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteDelegate_1_BeginInvoke_m3A481FD033624F80DC3E5C92C50DECDEE4AD07D4_gshared (WriteDelegate_1_tBAD71DFDB5D808250EB5989317C0A6EE737AF11D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26* ___value1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___writer0);
	__d_args[1] = Box(AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_il2cpp_TypeInfo_var, &*___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkAnimator/AnimationMessage,Unity.Netcode.Components.NetworkAnimator/AnimationMessage>::EndInvoke(TForMethod&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_1_EndInvoke_m71E31D9859DD1E4F361780D3D8F40337A7F6384E_gshared (WriteDelegate_1_tBAD71DFDB5D808250EB5989317C0A6EE737AF11D* __this, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26* ___value0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___value0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_1_Invoke_m692C337CC98724B64F7069BA206053BB3AF8C3EF_Multicast(WriteDelegate_1_t10C95C4684CC6353E6B1DB7B4F9BC52EE9DAFA44* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_1_t10C95C4684CC6353E6B1DB7B4F9BC52EE9DAFA44* currentDelegate = reinterpret_cast<WriteDelegate_1_t10C95C4684CC6353E6B1DB7B4F9BC52EE9DAFA44*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_1_Invoke_m692C337CC98724B64F7069BA206053BB3AF8C3EF_Open(WriteDelegate_1_t10C95C4684CC6353E6B1DB7B4F9BC52EE9DAFA44* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteDelegate_1_Invoke_m692C337CC98724B64F7069BA206053BB3AF8C3EF_OpenStaticInvoker(WriteDelegate_1_t10C95C4684CC6353E6B1DB7B4F9BC52EE9DAFA44* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A* >::Invoke(__this->___method_ptr_0, method, NULL, ___writer0, ___value1);
}
void WriteDelegate_1_Invoke_m692C337CC98724B64F7069BA206053BB3AF8C3EF_ClosedStaticInvoker(WriteDelegate_1_t10C95C4684CC6353E6B1DB7B4F9BC52EE9DAFA44* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___writer0, ___value1);
}
// System.Void Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage,Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_1__ctor_m6382D348F7902AA49BF6B1C55D96B56969E6776B_gshared (WriteDelegate_1_t10C95C4684CC6353E6B1DB7B4F9BC52EE9DAFA44* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_1_Invoke_m692C337CC98724B64F7069BA206053BB3AF8C3EF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_1_Invoke_m692C337CC98724B64F7069BA206053BB3AF8C3EF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_1_Invoke_m692C337CC98724B64F7069BA206053BB3AF8C3EF_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_1_Invoke_m692C337CC98724B64F7069BA206053BB3AF8C3EF_Multicast;
}
// System.Void Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage,Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage>::Invoke(Unity.Netcode.FastBufferWriter,TForMethod&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_1_Invoke_m692C337CC98724B64F7069BA206053BB3AF8C3EF_gshared (WriteDelegate_1_t10C95C4684CC6353E6B1DB7B4F9BC52EE9DAFA44* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A* ___value1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage,Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage>::BeginInvoke(Unity.Netcode.FastBufferWriter,TForMethod&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteDelegate_1_BeginInvoke_mB999C5D8E055D1A1D4F9C0499BE9F886165C012A_gshared (WriteDelegate_1_t10C95C4684CC6353E6B1DB7B4F9BC52EE9DAFA44* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A* ___value1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___writer0);
	__d_args[1] = Box(AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_il2cpp_TypeInfo_var, &*___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage,Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage>::EndInvoke(TForMethod&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_1_EndInvoke_m11D8C9726F770919CE0B46674A0CDC58A981D0AE_gshared (WriteDelegate_1_t10C95C4684CC6353E6B1DB7B4F9BC52EE9DAFA44* __this, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A* ___value0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___value0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_1_Invoke_mF899FEC5CA33AB5C2C94EF9902194E9B0B920013_Multicast(WriteDelegate_1_tA0CAE9ADE960D1FA035320D86ADD542E4694828D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_1_tA0CAE9ADE960D1FA035320D86ADD542E4694828D* currentDelegate = reinterpret_cast<WriteDelegate_1_tA0CAE9ADE960D1FA035320D86ADD542E4694828D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_1_Invoke_mF899FEC5CA33AB5C2C94EF9902194E9B0B920013_Open(WriteDelegate_1_tA0CAE9ADE960D1FA035320D86ADD542E4694828D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteDelegate_1_Invoke_mF899FEC5CA33AB5C2C94EF9902194E9B0B920013_OpenStaticInvoker(WriteDelegate_1_tA0CAE9ADE960D1FA035320D86ADD542E4694828D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* >::Invoke(__this->___method_ptr_0, method, NULL, ___writer0, ___value1);
}
void WriteDelegate_1_Invoke_mF899FEC5CA33AB5C2C94EF9902194E9B0B920013_ClosedStaticInvoker(WriteDelegate_1_tA0CAE9ADE960D1FA035320D86ADD542E4694828D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___writer0, ___value1);
}
// System.Void Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage,Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_1__ctor_mDA40CBA414FE972163DF9B2ACE11EDD5AEDE32F0_gshared (WriteDelegate_1_tA0CAE9ADE960D1FA035320D86ADD542E4694828D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_1_Invoke_mF899FEC5CA33AB5C2C94EF9902194E9B0B920013_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_1_Invoke_mF899FEC5CA33AB5C2C94EF9902194E9B0B920013_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_1_Invoke_mF899FEC5CA33AB5C2C94EF9902194E9B0B920013_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_1_Invoke_mF899FEC5CA33AB5C2C94EF9902194E9B0B920013_Multicast;
}
// System.Void Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage,Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage>::Invoke(Unity.Netcode.FastBufferWriter,TForMethod&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_1_Invoke_mF899FEC5CA33AB5C2C94EF9902194E9B0B920013_gshared (WriteDelegate_1_tA0CAE9ADE960D1FA035320D86ADD542E4694828D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* ___value1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage,Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage>::BeginInvoke(Unity.Netcode.FastBufferWriter,TForMethod&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteDelegate_1_BeginInvoke_mA9AFB46B1598A6BAC2CB4CACCD0492E2E917E833_gshared (WriteDelegate_1_tA0CAE9ADE960D1FA035320D86ADD542E4694828D* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* ___value1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___writer0);
	__d_args[1] = Box(AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_il2cpp_TypeInfo_var, &*___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage,Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage>::EndInvoke(TForMethod&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_1_EndInvoke_mC2507118821F1A09520C98EFE5BA31F997847E34_gshared (WriteDelegate_1_tA0CAE9ADE960D1FA035320D86ADD542E4694828D* __this, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* ___value0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___value0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_1_Invoke_m81C47C9BC2F63E5509361788D8819ABBE500D4EC_Multicast(WriteDelegate_1_t83AD994FDBD5B0A1DF6B80718662FAC776936255* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_1_t83AD994FDBD5B0A1DF6B80718662FAC776936255* currentDelegate = reinterpret_cast<WriteDelegate_1_t83AD994FDBD5B0A1DF6B80718662FAC776936255*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteDelegate_1_Invoke_m81C47C9BC2F63E5509361788D8819ABBE500D4EC_Open(WriteDelegate_1_t83AD994FDBD5B0A1DF6B80718662FAC776936255* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteDelegate_1_Invoke_m81C47C9BC2F63E5509361788D8819ABBE500D4EC_OpenStaticInvoker(WriteDelegate_1_t83AD994FDBD5B0A1DF6B80718662FAC776936255* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* >::Invoke(__this->___method_ptr_0, method, NULL, ___writer0, ___value1);
}
void WriteDelegate_1_Invoke_m81C47C9BC2F63E5509361788D8819ABBE500D4EC_ClosedStaticInvoker(WriteDelegate_1_t83AD994FDBD5B0A1DF6B80718662FAC776936255* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___writer0, ___value1);
}
// System.Void Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState,Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_1__ctor_mDF93F675AB22964ADA066A1336CEFAD82BBFCCAF_gshared (WriteDelegate_1_t83AD994FDBD5B0A1DF6B80718662FAC776936255* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_1_Invoke_m81C47C9BC2F63E5509361788D8819ABBE500D4EC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_1_Invoke_m81C47C9BC2F63E5509361788D8819ABBE500D4EC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteDelegate_1_Invoke_m81C47C9BC2F63E5509361788D8819ABBE500D4EC_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WriteDelegate_1_Invoke_m81C47C9BC2F63E5509361788D8819ABBE500D4EC_Multicast;
}
// System.Void Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState,Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::Invoke(Unity.Netcode.FastBufferWriter,TForMethod&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_1_Invoke_m81C47C9BC2F63E5509361788D8819ABBE500D4EC_gshared (WriteDelegate_1_t83AD994FDBD5B0A1DF6B80718662FAC776936255* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState,Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::BeginInvoke(Unity.Netcode.FastBufferWriter,TForMethod&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteDelegate_1_BeginInvoke_m1F2F1EF35D0C0E2AB96FCFAF922BC9090DB3FF01_gshared (WriteDelegate_1_t83AD994FDBD5B0A1DF6B80718662FAC776936255* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___writer0);
	__d_args[1] = Box(NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_il2cpp_TypeInfo_var, &*___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState,Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::EndInvoke(TForMethod&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_1_EndInvoke_m0417DC59675C34F10416564A4BCBF18CBA9720FB_gshared (WriteDelegate_1_t83AD994FDBD5B0A1DF6B80718662FAC776936255* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___value0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 Enumerator_get_Current_m62BA50ABD827C8EEBE27A4A21F82B5C5232A0D23_gshared_inline (Enumerator_t701920BFBDC49914858A34B7DFD27EF224B0D59B* __this, const RuntimeMethod* method) 
{
	{
		ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32 L_0 = (ContourVertex_t58C64DD8B2209C868718C7B50657707A15EEEF32)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_gshared_inline (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* __this, const RuntimeMethod* method) 
{
	{
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) 
{
	{
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_0 = (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 Enumerator_get_Current_m5661C567390AAED2FB821A3F9FBEB975877DAE42_gshared_inline (Enumerator_tAB0652E7D04AE115BF3DB2733BD0236F6D2700AF* __this, const RuntimeMethod* method) 
{
	{
		SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069 L_0 = (SerializablePVProfile_tD3D31A9B22592CE78C6B023E2A4DD629680BD069)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7BE927E44E56BA68DA59C46D3D58220BDFD9C16F_gshared_inline (WorkSlice_1_t97A1836B7DFBD2E98CD23D78CDB44F1521D0A70F* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_mCDE5BAF472BC1BEBC9D091F532AC1A07D65DB0BC_gshared_inline (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
