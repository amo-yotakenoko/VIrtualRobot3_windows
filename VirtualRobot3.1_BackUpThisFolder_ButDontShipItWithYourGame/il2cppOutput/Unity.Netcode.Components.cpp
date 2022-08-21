#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.UInt64>
struct Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C;
// System.Action`3<System.Byte[],System.UInt64,Unity.Netcode.NetworkManager/ConnectionApprovedDelegate>
struct Action_3_t633DDC8B2D2934B3BCC509882151903CA95A6840;
// Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>
struct BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B;
// Unity.Netcode.BufferedLinearInterpolator`1<System.Single>
struct BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo[]>
struct Dictionary_2_t04BB274E1321E9A9FFE2C45EF5DC62AA12E85365;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>
struct Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A;
// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkClient>
struct Dictionary_2_t04CE97C57D2E25D600E03BF7F53BDCDDAC05C9DF;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient>
struct Dictionary_2_tD7776C25E1F5D1B8408431CA83EAAFFE3C4C9684;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64>
struct Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.HashSet`1<Unity.Netcode.NetworkObject>
struct HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337;
// System.Collections.Generic.HashSet`1<System.UInt64>
struct HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C;
// System.Collections.Generic.IEqualityComparer`1<System.UInt32>
struct IEqualityComparer_1_t0BB8211419723EB61BF19007AC9D62365E50500E;
// System.Collections.Generic.IReadOnlyList`1<System.UInt64>
struct IReadOnlyList_1_t1A3980B817C9C841FC942102C2A423C1AAD15C8E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct KeyCollection_t828BE28B5AD4F3C0D8AE018C5D91252F5D272E6B;
// System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem<UnityEngine.Quaternion>>
struct List_1_tFA2CB5ED2EFC227F0891419233849994F0527023;
// System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem<System.Single>>
struct List_1_tC5E70C02815274B3E9F30B1F906DFDC637B7975C;
// System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>>
struct List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E;
// System.Collections.Generic.List`1<System.Collections.Generic.HashSet`1<System.Int32>>
struct List_1_t498347DEA55185643F213F995B74FEE039FAD70F;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkBehaviour>
struct List_1_t77285321F3B26D7A49CBB0F92E556C36504A91F5;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkClient>
struct List_1_t57C6C818F7D91A7154A4799FE6DEFD3ACD6F39A5;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkDelivery>
struct List_1_t3ED220D424138331023A4D1C1B67E3C63A19761B;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkVariableBase>
struct List_1_tB6CC3AFBA7164AC34B1EF29A0A73721899567AE3;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284;
// Unity.Netcode.NetworkVariable`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>
struct NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9;
// Unity.Netcode.NetworkVariable`1/OnValueChangedDelegate<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>
struct OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F;
// Unity.Netcode.NetworkVariable`1/ReadDelegate`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState,Unity.Netcode.Components.NetworkTransform/NetworkTransformState>
struct ReadDelegate_1_tB5347E155082E972D88C8827FFC4468B889FBA06;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct ValueCollection_tF46BA59A103BBCF077A2A7517084776F6CDD8283;
// Unity.Netcode.NetworkVariable`1/WriteDelegate`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState,Unity.Netcode.Components.NetworkTransform/NetworkTransformState>
struct WriteDelegate_1_t83AD994FDBD5B0A1DF6B80718662FAC776936255;
// Unity.Netcode.BufferedLinearInterpolator`1<System.Single>[]
struct BufferedLinearInterpolator_1U5BU5D_t1D89DD17B35D6A24E7A5823776166B5A5DCF8F5A;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>[]
struct EntryU5BU5D_t13B5F17F7C1B328C6B687BAECF4A5B17473E98ED;
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
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
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Unity.Netcode.BufferedLinearInterpolatorFloat
struct BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524;
// Unity.Netcode.BufferedLinearInterpolatorQuaternion
struct BufferedLinearInterpolatorQuaternion_t33BA43A1A51A5C5000D00054578ECAAC53A2A516;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Unity.Netcode.CustomMessagingManager
struct CustomMessagingManager_t713DDF9DC30FAF5178913295556DD07C946A9746;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Unity.Netcode.INetworkMetrics
struct INetworkMetrics_tE2C13758A950A5C77D2682C15F47914B13AC1C41;
// Unity.Netcode.MessagingSystem
struct MessagingSystem_tE5E070D8EDEED13D4D0C9D518961289FB3EE1C5D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.Netcode.Components.NetworkAnimator
struct NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99;
// Unity.Netcode.NetworkBehaviour
struct NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE;
// Unity.Netcode.NetworkBehaviourUpdater
struct NetworkBehaviourUpdater_t215DD428092983D5AECE1BF5BA0576E5070F987C;
// Unity.Netcode.NetworkClient
struct NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64;
// Unity.Netcode.NetworkConfig
struct NetworkConfig_tBDA76D459879B7025939BE0E2AF6D82B4A925113;
// Unity.Netcode.NetworkManager
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468;
// Unity.Netcode.NetworkObject
struct NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366;
// Unity.Netcode.NetworkPrefabHandler
struct NetworkPrefabHandler_tDAE80C95FD27B1749A8657944402C831679B0AAE;
// Unity.Netcode.Components.NetworkRigidbody
struct NetworkRigidbody_tDE00ED9930D70F23E37F936A09818AEBA04090CA;
// Unity.Netcode.Components.NetworkRigidbody2D
struct NetworkRigidbody2D_tD143C2CDC083134827C7E3E21BD849BA1B7032EC;
// Unity.Netcode.NetworkSceneManager
struct NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC;
// Unity.Netcode.NetworkSpawnManager
struct NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D;
// Unity.Netcode.NetworkTickSystem
struct NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A;
// Unity.Netcode.NetworkTimeSystem
struct NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2;
// Unity.Netcode.Components.NetworkTransform
struct NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Unity.Netcode.SnapshotSystem
struct SnapshotSystem_tFAC349FA67C0900388CC30229DC17092ED5F0506;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Netcode.FastBufferReader/ReaderHandle
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8;
// Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6;
// Unity.Netcode.NetworkManager/RpcReceiveHandler
struct RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597;
// Unity.Netcode.NetworkObject/SpawnDelegate
struct SpawnDelegate_t54493DE8F3E71A9E28528811BBD80E50C09BFF57;
// Unity.Netcode.NetworkObject/VisibilityDelegate
struct VisibilityDelegate_t43869941CF7C26CBA2B0FEBB3E7A33BA67D3216A;
// Unity.Netcode.Components.NetworkTransform/OnClientRequestChangeDelegate
struct OnClientRequestChangeDelegate_t6B736624F278668F5B5AD070F02AB4AB013BC1C8;

IL2CPP_EXTERN_C RuntimeClass* AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferedLinearInterpolatorQuaternion_t33BA43A1A51A5C5000D00054578ECAAC53A2A516_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4;
IL2CPP_EXTERN_C String_t* _stringLiteral4A3EE3A5A6730B9781830A8F333C8E578CF053E4;
IL2CPP_EXTERN_C String_t* _stringLiteral7A29E47E81FADB27D64EF5255EF4CFCA1733DC0A;
IL2CPP_EXTERN_C String_t* _stringLiteralC9334F5F8D2DB5F73AF4D47E992E81FA30B96151;
IL2CPP_EXTERN_C String_t* _stringLiteralD3644D4C6725D39FCC5DA6CDF2342F4A22B34BC5;
IL2CPP_EXTERN_C String_t* _stringLiteralD71DEAB128B6EB84915F9EE4AE53F16C1449F651;
IL2CPP_EXTERN_C String_t* _stringLiteralDAC4C0AC7F2622E832E85C05D64A1F859A076611;
IL2CPP_EXTERN_C String_t* _stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6;
IL2CPP_EXTERN_C String_t* _stringLiteralED4946D13E7B430B0418B9CE7DF25016B4C9584E;
IL2CPP_EXTERN_C String_t* _stringLiteralF020DE21552295E96B1B430C34DE4C27171891D1;
IL2CPP_EXTERN_C String_t* _stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1_AddMeasurement_m7ECDD6542A70CBB3A21F25816AE5C7A3B2704889_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1_AddMeasurement_mEA6D11B1B5852A10BD5E02C26C475FC2E8317C01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1_GetInterpolatedValue_m7122EEDBDF0BFCAF1D2A7199A1D2D8DBB430C33E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1_GetInterpolatedValue_mABAA50082A53E38CA5B772C9C20CD0B892E4DF3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1_ResetTo_m50C7E395DAF04E486CA863CD4F6DB516FB9BC0EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1_ResetTo_m8C513E5B41DDB4AE43DC18ADC0100970B447B089_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1_Update_m651EFF6DFA7629076051163CCEBFA16AE3BF9758_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1_Update_mDECC3AC6FA3912CEFFA9A93770AD98907F555B55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1__ctor_mA0BC7D92ED97EFD8935D9E06FB9B9A1450C665EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedLinearInterpolator_1__ctor_mE66736084A3316EE84A37C67519971E73EBB6BF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16_mE600383BAC048BBF57439674380E8A8F4063AE56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE6DA9014FEE390D2DAA206752CA64A3D138C5F68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9995BC21C373E73740B6E320B559010C357248C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB84DE69348F61F10E484604391F19363B2C9D869_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadNetworkSerializable_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_m9E5053F0E1E0033526A340907D67601264D6DCFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadNetworkSerializable_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_mA375225F50F407A641429CEE94ED6D228F0650A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadNetworkSerializable_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m5A0B212660CAAA9CED758790ED5FD14DAF6D7F41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadNetworkSerializable_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_mF26F3155045A53BCCD398F3019FAC3340EDFE982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m66E2AA444E3D7FA5540201E563319F97DC0A2A40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValueSafe_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m65D5B17C9E42897A683FC7E5D8E65D5BEBA103C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCCC0AEC3625AD1F2B962276BCC40A93282FE7F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3BD7AB5985FCF1E3C818E0F32ABD84706A53BC07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteNetworkSerializable_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_mADBA4596B2E5BD8810FEEFFA4878F3FA13EC0821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteNetworkSerializable_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_m3A3826C6506DC2C0FF61454A19C4A121C4E71FA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteNetworkSerializable_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m8506D08FAFF00B0912CC852076DBF726F32C557A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteNetworkSerializable_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_m8AFA7DA487CB4E2C00725F67C9A90768008B807E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF1323B69B63D7207805FA651F0DDDB44C848B1B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValueSafe_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m43B787A9D8BFF0713DD22EDD0ACE8DCB1D0403C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC7B82585B9FE286D98075E718A95CD21D70180E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m53EDE2E29B562A2314E00496FF0FCA51CA81BC42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8B8FA25A1D47E810AB99990741511BA627E71775_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m278B39540B7AAE8E110125145779C92CAA00F97A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m34B8B3DE604987BC1B39961DCE4065FCE1F7562A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDB349D171938997F6579258324478F4C93CB90FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_mC3509D15EF631F1298D67639BE7F86AF1F2CDDD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m83B130C74A2A448FE48B0017E6115CD5E223885D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mE64EC0071C08805771A6A9E7AFDAD4E7DF0362E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_m0F1A77B518FF3B6029AC04F9B31930365D14D5C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkAnimator_SendAnimStateClientRpc__nhandler_m2A2CD27EA02D86D6701A7D099A3DA16CCB93AEBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkAnimator_SendAnimTriggerClientRpc__nhandler_m2A98A53C41D94C16BC96604BEE27D1C66D62648D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkAnimator_SendParamsClientRpc__nhandler_m308DA704619DAE0050312DEAE43781AF77C46AC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransform_CommitTransformServerRpc__nhandler_mD6B4681325D372BCF394CBCD045383D207A6DED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransform_OnNetworkStateChanged_m7D385806D635761F884FB823CF8967DF7AEDD3A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransform_SetStateServerRpc__nhandler_m29E26AF17DFD181CEEAF1857963BF770EFFC4D5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransform_SetState_m20C3E4A01A85F4D6A9BE2338DB8503984CAE1486_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTransform_Teleport_m8C6968BC5684EA8BE7634DB61CDAC3CEF4F7B41D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkVariableHelper_InitializeDelegates_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_m7640E43355A3FD97ACAAD486B5F467AED8351F4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkVariableHelper_InitializeDelegates_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_mC8F872902CFE4C2D6824709934FD86F65D69F691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkVariableHelper_InitializeDelegates_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m4F73BA15E594F6A99C1D094A00FAB8BD2F478C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkVariableHelper_InitializeDelegates_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_m445C118168A0AA8920F7E2EC33D68FF5BEC5D20D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkVariable_1__ctor_mBF40D1D921E135A48CD6178E8F6A0A9B5CF34298_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m9D3E39C05D6F69CFF5A2A4CD0034CDA830F7E2CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m2E107232031E57A2F8BF26712417E1BD4A0ABCDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_ArrayElementAsRef_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_m65A8930CB4E4BE8DA37FE6C27D40F1763DF732A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_t2AD68F1C718AFCCBF9CF62AEBEAD0439276E4E6E_m0342CC99129F356D8D8A3E08D40C0E5DF1DCABB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3DC6740E537B2EA979655D20EBEF3ED1A0DB1A29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22615F03667154E3694602654C53574FE60392F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCC82D066EA98DE5D307EBCDB576FD5EE6DFCEEC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_4__ctor_m356A659364AE3B804809D81AF42F1320F3F53FBC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6;

struct AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tACCCC5F21F758D54A253D61D08CAADD134BF4373 
{
};

// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t13B5F17F7C1B328C6B687BAECF4A5B17473E98ED* ____entries_1;
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
	KeyCollection_t828BE28B5AD4F3C0D8AE018C5D91252F5D272E6B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF46BA59A103BBCF077A2A7517084776F6CDD8283* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>>
struct List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BufferedLinearInterpolator_1U5BU5D_t1D89DD17B35D6A24E7A5823776166B5A5DCF8F5A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BufferedLinearInterpolator_1U5BU5D_t1D89DD17B35D6A24E7A5823776166B5A5DCF8F5A* ___s_emptyArray_5;
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

// UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02  : public RuntimeObject
{
	// System.String UnityEngine.AnimatorControllerParameter::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::m_Type
	int32_t ___m_Type_1;
	// System.Single UnityEngine.AnimatorControllerParameter::m_DefaultFloat
	float ___m_DefaultFloat_2;
	// System.Int32 UnityEngine.AnimatorControllerParameter::m_DefaultInt
	int32_t ___m_DefaultInt_3;
	// System.Boolean UnityEngine.AnimatorControllerParameter::m_DefaultBool
	bool ___m_DefaultBool_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_pinvoke
{
	char* ___m_Name_0;
	int32_t ___m_Type_1;
	float ___m_DefaultFloat_2;
	int32_t ___m_DefaultInt_3;
	int32_t ___m_DefaultBool_4;
};
// Native definition for COM marshalling of UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	int32_t ___m_Type_1;
	float ___m_DefaultFloat_2;
	int32_t ___m_DefaultInt_3;
	int32_t ___m_DefaultBool_4;
};
struct Il2CppArrayBounds;

// Unity.Netcode.NetworkVariableBase
struct NetworkVariableBase_t4A303BB3DF935B69594AD8D12B141AA1A1B8D63D  : public RuntimeObject
{
	// Unity.Netcode.NetworkBehaviour Unity.Netcode.NetworkVariableBase::m_NetworkBehaviour
	NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___m_NetworkBehaviour_1;
	// System.Boolean Unity.Netcode.NetworkVariableBase::m_IsDirty
	bool ___m_IsDirty_2;
	// System.String Unity.Netcode.NetworkVariableBase::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
	// Unity.Netcode.NetworkVariableReadPermission Unity.Netcode.NetworkVariableBase::ReadPerm
	int32_t ___ReadPerm_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem<System.Single>
struct BufferedItem_tBB083C3C10DB7BA1B48AF4106080595F672E2E00 
{
	// T Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem::Item
	float ___Item_0;
	// System.Double Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem::TimeSent
	double ___TimeSent_1;
};

// System.Collections.Generic.List`1/Enumerator<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>>
struct Enumerator_t8476784130A98A43A4B6C984AF72ADC69E01F56D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* ____current_3;
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

// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>
struct NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.UInt64>
struct Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint64_t ___value_1;
};

// System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>
struct ValueTuple_4_tA6BBB2A2AF4C95729A202670B298BBB74D2EF1AC 
{
	// T1 System.ValueTuple`4::Item1
	bool ___Item1_0;
	// T2 System.ValueTuple`4::Item2
	bool ___Item2_1;
	// T3 System.ValueTuple`4::Item3
	bool ___Item3_2;
	// T4 System.ValueTuple`4::Item4
	bool ___Item4_3;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
};

// UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD 
{
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_FullPath
	int32_t ___m_FullPath_0;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_UserName
	int32_t ___m_UserName_1;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_Name
	int32_t ___m_Name_2;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_HasFixedDuration
	bool ___m_HasFixedDuration_3;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_Duration
	float ___m_Duration_4;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_NormalizedTime
	float ___m_NormalizedTime_5;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_AnyState
	bool ___m_AnyState_6;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_TransitionType
	int32_t ___m_TransitionType_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};
// Native definition for COM marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Unity.Netcode.ClientRpcReceiveParams
struct ClientRpcReceiveParams_t590A38B21015F50FBD50F37EDE491B65E3519E6A 
{
	union
	{
		struct
		{
		};
		uint8_t ClientRpcReceiveParams_t590A38B21015F50FBD50F37EDE491B65E3519E6A__padding[1];
	};
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Unity.Netcode.FastBufferReader
struct FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 
{
	// Unity.Netcode.FastBufferReader/ReaderHandle* Unity.Netcode.FastBufferReader::Handle
	ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* ___Handle_0;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Unity.Netcode.NetworkTime
struct NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F 
{
	// System.Double Unity.Netcode.NetworkTime::m_TimeSec
	double ___m_TimeSec_0;
	// System.UInt32 Unity.Netcode.NetworkTime::m_TickRate
	uint32_t ___m_TickRate_1;
	// System.Double Unity.Netcode.NetworkTime::m_TickInterval
	double ___m_TickInterval_2;
	// System.Int32 Unity.Netcode.NetworkTime::m_CachedTick
	int32_t ___m_CachedTick_3;
	// System.Double Unity.Netcode.NetworkTime::m_CachedTickOffset
	double ___m_CachedTickOffset_4;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// Unity.Netcode.ServerRpcReceiveParams
struct ServerRpcReceiveParams_t13F450FA39CB2BE6C1DB10FFDC686A89EFC4EF95 
{
	// System.UInt64 Unity.Netcode.ServerRpcReceiveParams::SenderClientId
	uint64_t ___SenderClientId_0;
};

// Unity.Netcode.ServerRpcSendParams
struct ServerRpcSendParams_tD31A53960AABCA57F6D16BADB576E7DA50D50A4A 
{
	union
	{
		struct
		{
		};
		uint8_t ServerRpcSendParams_tD31A53960AABCA57F6D16BADB576E7DA50D50A4A__padding[1];
	};
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// Unity.Netcode.FastBufferReader/ReaderHandle
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8 
{
	// System.Byte* Unity.Netcode.FastBufferReader/ReaderHandle::BufferPointer
	uint8_t* ___BufferPointer_0;
	// System.Int32 Unity.Netcode.FastBufferReader/ReaderHandle::Position
	int32_t ___Position_1;
	// System.Int32 Unity.Netcode.FastBufferReader/ReaderHandle::Length
	int32_t ___Length_2;
	// Unity.Collections.Allocator Unity.Netcode.FastBufferReader/ReaderHandle::Allocator
	int32_t ___Allocator_3;
};

// Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6 
{
	// System.Byte* Unity.Netcode.FastBufferWriter/WriterHandle::BufferPointer
	uint8_t* ___BufferPointer_0;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::Position
	int32_t ___Position_1;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::Length
	int32_t ___Length_2;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::Capacity
	int32_t ___Capacity_3;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::MaxCapacity
	int32_t ___MaxCapacity_4;
	// Unity.Collections.Allocator Unity.Netcode.FastBufferWriter/WriterHandle::Allocator
	int32_t ___Allocator_5;
	// System.Boolean Unity.Netcode.FastBufferWriter/WriterHandle::BufferGrew
	bool ___BufferGrew_6;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6_marshaled_pinvoke
{
	uint8_t* ___BufferPointer_0;
	int32_t ___Position_1;
	int32_t ___Length_2;
	int32_t ___Capacity_3;
	int32_t ___MaxCapacity_4;
	int32_t ___Allocator_5;
	int32_t ___BufferGrew_6;
};
// Native definition for COM marshalling of Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6_marshaled_com
{
	uint8_t* ___BufferPointer_0;
	int32_t ___Position_1;
	int32_t ___Length_2;
	int32_t ___Capacity_3;
	int32_t ___MaxCapacity_4;
	int32_t ___Allocator_5;
	int32_t ___BufferGrew_6;
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

// Unity.Netcode.Components.NetworkAnimator/AnimationParamEnumWrapper
struct AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38 
{
	union
	{
		struct
		{
		};
		uint8_t AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38__padding[1];
	};
};

struct AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_StaticFields
{
	// System.Int32 Unity.Netcode.Components.NetworkAnimator/AnimationParamEnumWrapper::AnimatorControllerParameterInt
	int32_t ___AnimatorControllerParameterInt_0;
	// System.Int32 Unity.Netcode.Components.NetworkAnimator/AnimationParamEnumWrapper::AnimatorControllerParameterFloat
	int32_t ___AnimatorControllerParameterFloat_1;
	// System.Int32 Unity.Netcode.Components.NetworkAnimator/AnimationParamEnumWrapper::AnimatorControllerParameterBool
	int32_t ___AnimatorControllerParameterBool_2;
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

// Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache/<Value>e__FixedBuffer
struct U3CValueU3Ee__FixedBuffer_t8DB4126BBB87BAC82AD01EF4E31AB5612713F8A2 
{
	union
	{
		struct
		{
			// System.Byte Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache/<Value>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CValueU3Ee__FixedBuffer_t8DB4126BBB87BAC82AD01EF4E31AB5612713F8A2__padding[4];
	};
};

// Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem<UnityEngine.Quaternion>
struct BufferedItem_tA1A6B2F7AA138BFEEA7F95DAF9039D1C01B5B2C3 
{
	// T Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem::Item
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Item_0;
	// System.Double Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem::TimeSent
	double ___TimeSent_1;
};

// Unity.Netcode.BufferedLinearInterpolator`1<System.Single>
struct BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964  : public RuntimeObject
{
	// T Unity.Netcode.BufferedLinearInterpolator`1::m_InterpStartValue
	float ___m_InterpStartValue_1;
	// T Unity.Netcode.BufferedLinearInterpolator`1::m_CurrentInterpValue
	float ___m_CurrentInterpValue_2;
	// T Unity.Netcode.BufferedLinearInterpolator`1::m_InterpEndValue
	float ___m_InterpEndValue_3;
	// System.Double Unity.Netcode.BufferedLinearInterpolator`1::m_EndTimeConsumed
	double ___m_EndTimeConsumed_4;
	// System.Double Unity.Netcode.BufferedLinearInterpolator`1::m_StartTimeConsumed
	double ___m_StartTimeConsumed_5;
	// System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem<T>> Unity.Netcode.BufferedLinearInterpolator`1::m_Buffer
	List_1_tC5E70C02815274B3E9F30B1F906DFDC637B7975C* ___m_Buffer_6;
	// Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem<T> Unity.Netcode.BufferedLinearInterpolator`1::m_LastBufferedItemReceived
	BufferedItem_tBB083C3C10DB7BA1B48AF4106080595F672E2E00 ___m_LastBufferedItemReceived_8;
	// System.Int32 Unity.Netcode.BufferedLinearInterpolator`1::m_NbItemsReceivedThisFrame
	int32_t ___m_NbItemsReceivedThisFrame_9;
	// System.Int32 Unity.Netcode.BufferedLinearInterpolator`1::m_LifetimeConsumedCount
	int32_t ___m_LifetimeConsumedCount_10;
};

// Unity.Netcode.NetworkVariable`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>
struct NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9  : public NetworkVariableBase_t4A303BB3DF935B69594AD8D12B141AA1A1B8D63D
{
	// Unity.Netcode.NetworkVariable`1/OnValueChangedDelegate<T> Unity.Netcode.NetworkVariable`1::OnValueChanged
	OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F* ___OnValueChanged_7;
	// T Unity.Netcode.NetworkVariable`1::m_InternalValue
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___m_InternalValue_8;
};

struct NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9_StaticFields
{
	// Unity.Netcode.NetworkVariable`1/WriteDelegate`1<T,T> Unity.Netcode.NetworkVariable`1::Write
	WriteDelegate_1_t83AD994FDBD5B0A1DF6B80718662FAC776936255* ___Write_5;
	// Unity.Netcode.NetworkVariable`1/ReadDelegate`1<T,T> Unity.Netcode.NetworkVariable`1::Read
	ReadDelegate_1_tB5347E155082E972D88C8827FFC4468B889FBA06* ___Read_6;
};

// System.Nullable`1<Unity.Collections.NativeArray`1<System.UInt64>>
struct Nullable_1_tABEB3B55130E30F5C126E7166574311CECAF7CF1 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___value_1;
};

// System.Nullable`1<UnityEngine.Quaternion>
struct Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value_1;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// System.ValueTuple`3<UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3>
struct ValueTuple_3_tE39E42FC756887AF8710ED1B13FCC5F5409FABC4 
{
	// T1 System.ValueTuple`3::Item1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Item1_0;
	// T2 System.ValueTuple`3::Item2
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Item2_1;
	// T3 System.ValueTuple`3::Item3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Item3_2;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Netcode.ServerRpcParams
struct ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 
{
	// Unity.Netcode.ServerRpcSendParams Unity.Netcode.ServerRpcParams::Send
	ServerRpcSendParams_tD31A53960AABCA57F6D16BADB576E7DA50D50A4A ___Send_0;
	// Unity.Netcode.ServerRpcReceiveParams Unity.Netcode.ServerRpcParams::Receive
	ServerRpcReceiveParams_t13F450FA39CB2BE6C1DB10FFDC686A89EFC4EF95 ___Receive_1;
};

// Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache
struct AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F 
{
	// System.Int32 Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache::Hash
	int32_t ___Hash_0;
	// System.Int32 Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache::Type
	int32_t ___Type_1;
	// Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache/<Value>e__FixedBuffer Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache::Value
	U3CValueU3Ee__FixedBuffer_t8DB4126BBB87BAC82AD01EF4E31AB5612713F8A2 ___Value_2;
};

// Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>
struct BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B  : public RuntimeObject
{
	// T Unity.Netcode.BufferedLinearInterpolator`1::m_InterpStartValue
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_InterpStartValue_1;
	// T Unity.Netcode.BufferedLinearInterpolator`1::m_CurrentInterpValue
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_CurrentInterpValue_2;
	// T Unity.Netcode.BufferedLinearInterpolator`1::m_InterpEndValue
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_InterpEndValue_3;
	// System.Double Unity.Netcode.BufferedLinearInterpolator`1::m_EndTimeConsumed
	double ___m_EndTimeConsumed_4;
	// System.Double Unity.Netcode.BufferedLinearInterpolator`1::m_StartTimeConsumed
	double ___m_StartTimeConsumed_5;
	// System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem<T>> Unity.Netcode.BufferedLinearInterpolator`1::m_Buffer
	List_1_tFA2CB5ED2EFC227F0891419233849994F0527023* ___m_Buffer_6;
	// Unity.Netcode.BufferedLinearInterpolator`1/BufferedItem<T> Unity.Netcode.BufferedLinearInterpolator`1::m_LastBufferedItemReceived
	BufferedItem_tA1A6B2F7AA138BFEEA7F95DAF9039D1C01B5B2C3 ___m_LastBufferedItemReceived_8;
	// System.Int32 Unity.Netcode.BufferedLinearInterpolator`1::m_NbItemsReceivedThisFrame
	int32_t ___m_NbItemsReceivedThisFrame_9;
	// System.Int32 Unity.Netcode.BufferedLinearInterpolator`1::m_LifetimeConsumedCount
	int32_t ___m_LifetimeConsumedCount_10;
};

// Unity.Netcode.BufferedLinearInterpolatorFloat
struct BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524  : public BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964
{
};

// Unity.Netcode.ClientRpcSendParams
struct ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB 
{
	// System.Collections.Generic.IReadOnlyList`1<System.UInt64> Unity.Netcode.ClientRpcSendParams::TargetClientIds
	RuntimeObject* ___TargetClientIds_0;
	// System.Nullable`1<Unity.Collections.NativeArray`1<System.UInt64>> Unity.Netcode.ClientRpcSendParams::TargetClientIdsNativeArray
	Nullable_1_tABEB3B55130E30F5C126E7166574311CECAF7CF1 ___TargetClientIdsNativeArray_1;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.ClientRpcSendParams
struct ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB_marshaled_pinvoke
{
	RuntimeObject* ___TargetClientIds_0;
	Nullable_1_tABEB3B55130E30F5C126E7166574311CECAF7CF1 ___TargetClientIdsNativeArray_1;
};
// Native definition for COM marshalling of Unity.Netcode.ClientRpcSendParams
struct ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB_marshaled_com
{
	RuntimeObject* ___TargetClientIds_0;
	Nullable_1_tABEB3B55130E30F5C126E7166574311CECAF7CF1 ___TargetClientIdsNativeArray_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// Unity.Netcode.NetworkVariable`1/OnValueChangedDelegate<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>
struct OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F  : public MulticastDelegate_t
{
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.Netcode.BufferedLinearInterpolatorQuaternion
struct BufferedLinearInterpolatorQuaternion_t33BA43A1A51A5C5000D00054578ECAAC53A2A516  : public BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B
{
};

// Unity.Netcode.ClientRpcParams
struct ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 
{
	// Unity.Netcode.ClientRpcSendParams Unity.Netcode.ClientRpcParams::Send
	ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB ___Send_0;
	// Unity.Netcode.ClientRpcReceiveParams Unity.Netcode.ClientRpcParams::Receive
	ClientRpcReceiveParams_t590A38B21015F50FBD50F37EDE491B65E3519E6A ___Receive_1;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.ClientRpcParams
struct ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9_marshaled_pinvoke
{
	ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB_marshaled_pinvoke ___Send_0;
	ClientRpcReceiveParams_t590A38B21015F50FBD50F37EDE491B65E3519E6A ___Receive_1;
};
// Native definition for COM marshalling of Unity.Netcode.ClientRpcParams
struct ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9_marshaled_com
{
	ClientRpcSendParams_tC1017775A32BDDA8A8E19B4D68F72355E5BD6BEB_marshaled_com ___Send_0;
	ClientRpcReceiveParams_t590A38B21015F50FBD50F37EDE491B65E3519E6A ___Receive_1;
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.Netcode.Components.NetworkTransform/OnClientRequestChangeDelegate
struct OnClientRequestChangeDelegate_t6B736624F278668F5B5AD070F02AB4AB013BC1C8  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// Unity.Netcode.__RpcParams
struct __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E 
{
	// Unity.Netcode.ServerRpcParams Unity.Netcode.__RpcParams::Server
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___Server_0;
	// Unity.Netcode.ClientRpcParams Unity.Netcode.__RpcParams::Client
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 ___Client_1;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.__RpcParams
struct __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E_marshaled_pinvoke
{
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___Server_0;
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9_marshaled_pinvoke ___Client_1;
};
// Native definition for COM marshalling of Unity.Netcode.__RpcParams
struct __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E_marshaled_com
{
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___Server_0;
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9_marshaled_com ___Client_1;
};

// Unity.Netcode.NetworkBehaviour
struct NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.Netcode.NetworkBehaviour/__RpcExecStage Unity.Netcode.NetworkBehaviour::__rpc_exec_stage
	int32_t _____rpc_exec_stage_4;
	// Unity.Netcode.NetworkObject Unity.Netcode.NetworkBehaviour::m_NetworkObject
	NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* ___m_NetworkObject_5;
	// System.UInt16 Unity.Netcode.NetworkBehaviour::NetworkBehaviourIdCache
	uint16_t ___NetworkBehaviourIdCache_6;
	// System.Boolean Unity.Netcode.NetworkBehaviour::m_VarInit
	bool ___m_VarInit_7;
	// System.Collections.Generic.List`1<System.Collections.Generic.HashSet`1<System.Int32>> Unity.Netcode.NetworkBehaviour::m_DeliveryMappedNetworkVariableIndices
	List_1_t498347DEA55185643F213F995B74FEE039FAD70F* ___m_DeliveryMappedNetworkVariableIndices_8;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkDelivery> Unity.Netcode.NetworkBehaviour::m_DeliveryTypesForNetworkVariableGroups
	List_1_t3ED220D424138331023A4D1C1B67E3C63A19761B* ___m_DeliveryTypesForNetworkVariableGroups_9;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkVariableBase> Unity.Netcode.NetworkBehaviour::NetworkVariableFields
	List_1_tB6CC3AFBA7164AC34B1EF29A0A73721899567AE3* ___NetworkVariableFields_10;
	// System.Collections.Generic.List`1<System.Int32> Unity.Netcode.NetworkBehaviour::NetworkVariableIndexesToReset
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___NetworkVariableIndexesToReset_12;
	// System.Collections.Generic.HashSet`1<System.Int32> Unity.Netcode.NetworkBehaviour::NetworkVariableIndexesToResetSet
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___NetworkVariableIndexesToResetSet_13;
};

struct NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo[]> Unity.Netcode.NetworkBehaviour::s_FieldTypes
	Dictionary_2_t04BB274E1321E9A9FFE2C45EF5DC62AA12E85365* ___s_FieldTypes_11;
};

// Unity.Netcode.NetworkManager
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.Netcode.SnapshotSystem Unity.Netcode.NetworkManager::<SnapshotSystem>k__BackingField
	SnapshotSystem_tFAC349FA67C0900388CC30229DC17092ED5F0506* ___U3CSnapshotSystemU3Ek__BackingField_7;
	// Unity.Netcode.NetworkBehaviourUpdater Unity.Netcode.NetworkManager::<BehaviourUpdater>k__BackingField
	NetworkBehaviourUpdater_t215DD428092983D5AECE1BF5BA0576E5070F987C* ___U3CBehaviourUpdaterU3Ek__BackingField_8;
	// Unity.Netcode.MessagingSystem Unity.Netcode.NetworkManager::<MessagingSystem>k__BackingField
	MessagingSystem_tE5E070D8EDEED13D4D0C9D518961289FB3EE1C5D* ___U3CMessagingSystemU3Ek__BackingField_9;
	// Unity.Netcode.NetworkPrefabHandler Unity.Netcode.NetworkManager::m_PrefabHandler
	NetworkPrefabHandler_tDAE80C95FD27B1749A8657944402C831679B0AAE* ___m_PrefabHandler_10;
	// System.Boolean Unity.Netcode.NetworkManager::m_ShuttingDown
	bool ___m_ShuttingDown_11;
	// System.Boolean Unity.Netcode.NetworkManager::m_StopProcessingMessages
	bool ___m_StopProcessingMessages_12;
	// Unity.Netcode.NetworkTimeSystem Unity.Netcode.NetworkManager::<NetworkTimeSystem>k__BackingField
	NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* ___U3CNetworkTimeSystemU3Ek__BackingField_13;
	// Unity.Netcode.NetworkTickSystem Unity.Netcode.NetworkManager::<NetworkTickSystem>k__BackingField
	NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* ___U3CNetworkTickSystemU3Ek__BackingField_14;
	// System.Boolean Unity.Netcode.NetworkManager::DontDestroy
	bool ___DontDestroy_15;
	// System.Boolean Unity.Netcode.NetworkManager::RunInBackground
	bool ___RunInBackground_16;
	// Unity.Netcode.LogLevel Unity.Netcode.NetworkManager::LogLevel
	int32_t ___LogLevel_17;
	// Unity.Netcode.NetworkSpawnManager Unity.Netcode.NetworkManager::<SpawnManager>k__BackingField
	NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D* ___U3CSpawnManagerU3Ek__BackingField_19;
	// Unity.Netcode.CustomMessagingManager Unity.Netcode.NetworkManager::<CustomMessagingManager>k__BackingField
	CustomMessagingManager_t713DDF9DC30FAF5178913295556DD07C946A9746* ___U3CCustomMessagingManagerU3Ek__BackingField_20;
	// Unity.Netcode.NetworkSceneManager Unity.Netcode.NetworkManager::<SceneManager>k__BackingField
	NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC* ___U3CSceneManagerU3Ek__BackingField_21;
	// System.UInt64 Unity.Netcode.NetworkManager::ServerClientId
	uint64_t ___ServerClientId_22;
	// System.UInt64 Unity.Netcode.NetworkManager::m_LocalClientId
	uint64_t ___m_LocalClientId_23;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkClient> Unity.Netcode.NetworkManager::m_ConnectedClients
	Dictionary_2_t04CE97C57D2E25D600E03BF7F53BDCDDAC05C9DF* ___m_ConnectedClients_24;
	// System.UInt64 Unity.Netcode.NetworkManager::m_NextClientId
	uint64_t ___m_NextClientId_25;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64> Unity.Netcode.NetworkManager::m_ClientIdToTransportIdMap
	Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42* ___m_ClientIdToTransportIdMap_26;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64> Unity.Netcode.NetworkManager::m_TransportIdToClientIdMap
	Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42* ___m_TransportIdToClientIdMap_27;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkClient> Unity.Netcode.NetworkManager::m_ConnectedClientsList
	List_1_t57C6C818F7D91A7154A4799FE6DEFD3ACD6F39A5* ___m_ConnectedClientsList_28;
	// System.Collections.Generic.List`1<System.UInt64> Unity.Netcode.NetworkManager::m_ConnectedClientIds
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* ___m_ConnectedClientIds_29;
	// Unity.Netcode.NetworkClient Unity.Netcode.NetworkManager::<LocalClient>k__BackingField
	NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64* ___U3CLocalClientU3Ek__BackingField_30;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient> Unity.Netcode.NetworkManager::PendingClients
	Dictionary_2_tD7776C25E1F5D1B8408431CA83EAAFFE3C4C9684* ___PendingClients_31;
	// System.Boolean Unity.Netcode.NetworkManager::<IsServer>k__BackingField
	bool ___U3CIsServerU3Ek__BackingField_32;
	// System.Boolean Unity.Netcode.NetworkManager::<IsClient>k__BackingField
	bool ___U3CIsClientU3Ek__BackingField_33;
	// System.Boolean Unity.Netcode.NetworkManager::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_34;
	// System.Boolean Unity.Netcode.NetworkManager::<IsConnectedClient>k__BackingField
	bool ___U3CIsConnectedClientU3Ek__BackingField_35;
	// System.Action`1<System.UInt64> Unity.Netcode.NetworkManager::OnClientConnectedCallback
	Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C* ___OnClientConnectedCallback_36;
	// System.Action`1<System.UInt64> Unity.Netcode.NetworkManager::OnClientDisconnectCallback
	Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C* ___OnClientDisconnectCallback_37;
	// System.Action Unity.Netcode.NetworkManager::OnServerStarted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnServerStarted_38;
	// System.Action`3<System.Byte[],System.UInt64,Unity.Netcode.NetworkManager/ConnectionApprovedDelegate> Unity.Netcode.NetworkManager::ConnectionApprovalCallback
	Action_3_t633DDC8B2D2934B3BCC509882151903CA95A6840* ___ConnectionApprovalCallback_39;
	// Unity.Netcode.NetworkConfig Unity.Netcode.NetworkManager::NetworkConfig
	NetworkConfig_tBDA76D459879B7025939BE0E2AF6D82B4A925113* ___NetworkConfig_40;
	// System.String Unity.Netcode.NetworkManager::<ConnectedHostname>k__BackingField
	String_t* ___U3CConnectedHostnameU3Ek__BackingField_41;
	// Unity.Netcode.INetworkMetrics Unity.Netcode.NetworkManager::<NetworkMetrics>k__BackingField
	RuntimeObject* ___U3CNetworkMetricsU3Ek__BackingField_42;
};

struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler> Unity.Netcode.NetworkManager::__rpc_func_table
	Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* _____rpc_func_table_4;
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkManager::<Singleton>k__BackingField
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___U3CSingletonU3Ek__BackingField_18;
	// System.Action Unity.Netcode.NetworkManager::OnSingletonReady
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnSingletonReady_43;
};

// Unity.Netcode.NetworkObject
struct NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.UInt32 Unity.Netcode.NetworkObject::GlobalObjectIdHash
	uint32_t ___GlobalObjectIdHash_4;
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkObject::NetworkManagerOwner
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___NetworkManagerOwner_5;
	// System.UInt64 Unity.Netcode.NetworkObject::m_NetworkObjectId
	uint64_t ___m_NetworkObjectId_6;
	// System.UInt64 Unity.Netcode.NetworkObject::<NetworkObjectId>k__BackingField
	uint64_t ___U3CNetworkObjectIdU3Ek__BackingField_7;
	// System.Nullable`1<System.UInt64> Unity.Netcode.NetworkObject::OwnerClientIdInternal
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___OwnerClientIdInternal_8;
	// System.Boolean Unity.Netcode.NetworkObject::AlwaysReplicateAsRoot
	bool ___AlwaysReplicateAsRoot_9;
	// System.Boolean Unity.Netcode.NetworkObject::<IsPlayerObject>k__BackingField
	bool ___U3CIsPlayerObjectU3Ek__BackingField_10;
	// System.Boolean Unity.Netcode.NetworkObject::<IsSpawned>k__BackingField
	bool ___U3CIsSpawnedU3Ek__BackingField_11;
	// System.Nullable`1<System.Boolean> Unity.Netcode.NetworkObject::<IsSceneObject>k__BackingField
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CIsSceneObjectU3Ek__BackingField_12;
	// System.Boolean Unity.Netcode.NetworkObject::<DestroyWithScene>k__BackingField
	bool ___U3CDestroyWithSceneU3Ek__BackingField_13;
	// Unity.Netcode.NetworkObject/VisibilityDelegate Unity.Netcode.NetworkObject::CheckObjectVisibility
	VisibilityDelegate_t43869941CF7C26CBA2B0FEBB3E7A33BA67D3216A* ___CheckObjectVisibility_14;
	// Unity.Netcode.NetworkObject/SpawnDelegate Unity.Netcode.NetworkObject::IncludeTransformWhenSpawning
	SpawnDelegate_t54493DE8F3E71A9E28528811BBD80E50C09BFF57* ___IncludeTransformWhenSpawning_15;
	// System.Boolean Unity.Netcode.NetworkObject::DontDestroyWithOwner
	bool ___DontDestroyWithOwner_16;
	// System.Boolean Unity.Netcode.NetworkObject::AutoObjectParentSync
	bool ___AutoObjectParentSync_17;
	// System.Collections.Generic.HashSet`1<System.UInt64> Unity.Netcode.NetworkObject::Observers
	HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___Observers_18;
	// System.Boolean Unity.Netcode.NetworkObject::m_IsReparented
	bool ___m_IsReparented_19;
	// System.Nullable`1<System.UInt64> Unity.Netcode.NetworkObject::m_LatestParent
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___m_LatestParent_20;
	// UnityEngine.Transform Unity.Netcode.NetworkObject::m_CachedParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedParent_21;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkBehaviour> Unity.Netcode.NetworkObject::m_ChildNetworkBehaviours
	List_1_t77285321F3B26D7A49CBB0F92E556C36504A91F5* ___m_ChildNetworkBehaviours_23;
};

struct NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_StaticFields
{
	// System.Collections.Generic.HashSet`1<Unity.Netcode.NetworkObject> Unity.Netcode.NetworkObject::OrphanChildren
	HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337* ___OrphanChildren_22;
};

// Unity.Netcode.NetworkManager/RpcReceiveHandler
struct RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597  : public MulticastDelegate_t
{
};

// Unity.Netcode.Components.NetworkAnimator
struct NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99  : public NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE
{
	// UnityEngine.Animator Unity.Netcode.Components.NetworkAnimator::m_Animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_Animator_14;
	// System.UInt32 Unity.Netcode.Components.NetworkAnimator::m_ParameterSendBits
	uint32_t ___m_ParameterSendBits_15;
	// System.Single Unity.Netcode.Components.NetworkAnimator::m_SendRate
	float ___m_SendRate_16;
	// System.Int32 Unity.Netcode.Components.NetworkAnimator::m_TransitionHash
	int32_t ___m_TransitionHash_18;
	// System.Double Unity.Netcode.Components.NetworkAnimator::m_NextSendTime
	double ___m_NextSendTime_19;
	// System.Int32 Unity.Netcode.Components.NetworkAnimator::m_AnimationHash
	int32_t ___m_AnimationHash_20;
	// Unity.Netcode.FastBufferWriter Unity.Netcode.Components.NetworkAnimator::m_ParameterWriter
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___m_ParameterWriter_21;
	// Unity.Collections.NativeArray`1<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache> Unity.Netcode.Components.NetworkAnimator::m_CachedAnimatorParameters
	NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA ___m_CachedAnimatorParameters_22;
};

struct NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99_StaticFields
{
	// System.Int32 Unity.Netcode.Components.NetworkAnimator::K_MaxAnimationParams
	int32_t ___K_MaxAnimationParams_17;
};

// Unity.Netcode.Components.NetworkRigidbody
struct NetworkRigidbody_tDE00ED9930D70F23E37F936A09818AEBA04090CA  : public NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE
{
	// UnityEngine.Rigidbody Unity.Netcode.Components.NetworkRigidbody::m_Rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_Rigidbody_14;
	// Unity.Netcode.Components.NetworkTransform Unity.Netcode.Components.NetworkRigidbody::m_NetworkTransform
	NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* ___m_NetworkTransform_15;
	// System.Boolean Unity.Netcode.Components.NetworkRigidbody::m_OriginalKinematic
	bool ___m_OriginalKinematic_16;
	// UnityEngine.RigidbodyInterpolation Unity.Netcode.Components.NetworkRigidbody::m_OriginalInterpolation
	int32_t ___m_OriginalInterpolation_17;
	// System.Boolean Unity.Netcode.Components.NetworkRigidbody::m_IsAuthority
	bool ___m_IsAuthority_18;
};

// Unity.Netcode.Components.NetworkRigidbody2D
struct NetworkRigidbody2D_tD143C2CDC083134827C7E3E21BD849BA1B7032EC  : public NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE
{
	// UnityEngine.Rigidbody2D Unity.Netcode.Components.NetworkRigidbody2D::m_Rigidbody
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___m_Rigidbody_14;
	// Unity.Netcode.Components.NetworkTransform Unity.Netcode.Components.NetworkRigidbody2D::m_NetworkTransform
	NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* ___m_NetworkTransform_15;
	// System.Boolean Unity.Netcode.Components.NetworkRigidbody2D::m_OriginalKinematic
	bool ___m_OriginalKinematic_16;
	// UnityEngine.RigidbodyInterpolation2D Unity.Netcode.Components.NetworkRigidbody2D::m_OriginalInterpolation
	int32_t ___m_OriginalInterpolation_17;
	// System.Boolean Unity.Netcode.Components.NetworkRigidbody2D::m_IsAuthority
	bool ___m_IsAuthority_18;
};

// Unity.Netcode.Components.NetworkTransform
struct NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16  : public NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE
{
	// Unity.Netcode.Components.NetworkTransform/OnClientRequestChangeDelegate Unity.Netcode.Components.NetworkTransform::OnClientRequestChange
	OnClientRequestChangeDelegate_t6B736624F278668F5B5AD070F02AB4AB013BC1C8* ___OnClientRequestChange_17;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::SyncPositionX
	bool ___SyncPositionX_18;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::SyncPositionY
	bool ___SyncPositionY_19;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::SyncPositionZ
	bool ___SyncPositionZ_20;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::SyncRotAngleX
	bool ___SyncRotAngleX_21;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::SyncRotAngleY
	bool ___SyncRotAngleY_22;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::SyncRotAngleZ
	bool ___SyncRotAngleZ_23;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::SyncScaleX
	bool ___SyncScaleX_24;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::SyncScaleY
	bool ___SyncScaleY_25;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::SyncScaleZ
	bool ___SyncScaleZ_26;
	// System.Single Unity.Netcode.Components.NetworkTransform::PositionThreshold
	float ___PositionThreshold_27;
	// System.Single Unity.Netcode.Components.NetworkTransform::RotAngleThreshold
	float ___RotAngleThreshold_28;
	// System.Single Unity.Netcode.Components.NetworkTransform::ScaleThreshold
	float ___ScaleThreshold_29;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::InLocalSpace
	bool ___InLocalSpace_30;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::Interpolate
	bool ___Interpolate_31;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::CanCommitToTransform
	bool ___CanCommitToTransform_32;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::m_CachedIsServer
	bool ___m_CachedIsServer_33;
	// Unity.Netcode.NetworkManager Unity.Netcode.Components.NetworkTransform::m_CachedNetworkManager
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___m_CachedNetworkManager_34;
	// Unity.Netcode.NetworkVariable`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState> Unity.Netcode.Components.NetworkTransform::m_ReplicatedNetworkState
	NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9* ___m_ReplicatedNetworkState_35;
	// Unity.Netcode.Components.NetworkTransform/NetworkTransformState Unity.Netcode.Components.NetworkTransform::m_LocalAuthoritativeNetworkState
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___m_LocalAuthoritativeNetworkState_36;
	// Unity.Netcode.Components.NetworkTransform/NetworkTransformState Unity.Netcode.Components.NetworkTransform::m_PrevNetworkState
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___m_PrevNetworkState_37;
	// System.Boolean Unity.Netcode.Components.NetworkTransform::m_HasSentLastValue
	bool ___m_HasSentLastValue_39;
	// Unity.Netcode.BufferedLinearInterpolator`1<System.Single> Unity.Netcode.Components.NetworkTransform::m_PositionXInterpolator
	BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* ___m_PositionXInterpolator_40;
	// Unity.Netcode.BufferedLinearInterpolator`1<System.Single> Unity.Netcode.Components.NetworkTransform::m_PositionYInterpolator
	BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* ___m_PositionYInterpolator_41;
	// Unity.Netcode.BufferedLinearInterpolator`1<System.Single> Unity.Netcode.Components.NetworkTransform::m_PositionZInterpolator
	BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* ___m_PositionZInterpolator_42;
	// Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion> Unity.Netcode.Components.NetworkTransform::m_RotationInterpolator
	BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B* ___m_RotationInterpolator_43;
	// Unity.Netcode.BufferedLinearInterpolator`1<System.Single> Unity.Netcode.Components.NetworkTransform::m_ScaleXInterpolator
	BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* ___m_ScaleXInterpolator_44;
	// Unity.Netcode.BufferedLinearInterpolator`1<System.Single> Unity.Netcode.Components.NetworkTransform::m_ScaleYInterpolator
	BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* ___m_ScaleYInterpolator_45;
	// Unity.Netcode.BufferedLinearInterpolator`1<System.Single> Unity.Netcode.Components.NetworkTransform::m_ScaleZInterpolator
	BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* ___m_ScaleZInterpolator_46;
	// System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>> Unity.Netcode.Components.NetworkTransform::m_AllFloatInterpolators
	List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E* ___m_AllFloatInterpolators_47;
	// UnityEngine.Transform Unity.Netcode.Components.NetworkTransform::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_48;
	// System.Int32 Unity.Netcode.Components.NetworkTransform::m_LastSentTick
	int32_t ___m_LastSentTick_49;
	// Unity.Netcode.Components.NetworkTransform/NetworkTransformState Unity.Netcode.Components.NetworkTransform::m_LastSentState
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___m_LastSentState_50;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* m_Items[1];

	inline AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Void Unity.Netcode.NetworkVariableHelper::InitializeDelegates<Unity.Netcode.Components.NetworkAnimator/AnimationMessage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariableHelper_InitializeDelegates_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_m7640E43355A3FD97ACAAD486B5F467AED8351F4B_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkVariableHelper::InitializeDelegates<Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariableHelper_InitializeDelegates_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_mC8F872902CFE4C2D6824709934FD86F65D69F691_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkVariableHelper::InitializeDelegates<Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariableHelper_InitializeDelegates_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m4F73BA15E594F6A99C1D094A00FAB8BD2F478C65_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkVariableHelper::InitializeDelegates<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariableHelper_InitializeDelegates_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_m445C118168A0AA8920F7E2EC33D68FF5BEC5D20D_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolator_1__ctor_mE66736084A3316EE84A37C67519971E73EBB6BF3_gshared (BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolator_1__ctor_mA0BC7D92ED97EFD8935D9E06FB9B9A1450C665EA_gshared (BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m0F1A77B518FF3B6029AC04F9B31930365D14D5C3_gshared (NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m83B130C74A2A448FE48B0017E6115CD5E223885D_gshared (NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mE64EC0071C08805771A6A9E7AFDAD4E7DF0362E4_gshared (NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::EnumToInt<System.Int32Enum>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_EnumToInt_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m7FC8FD5E40D6A1FAA8F6E3BBD8237C3D8877A6E6_gshared (int32_t ___enumValue0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Single>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCC82D066EA98DE5D307EBCDB576FD5EE6DFCEEC9_gshared (void* ___destination0, int32_t ___index1, float ___value2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22615F03667154E3694602654C53574FE60392F0_gshared (void* ___destination0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Boolean>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3DC6740E537B2EA979655D20EBEF3ED1A0DB1A29_gshared (void* ___destination0, int32_t ___index1, bool ___value2, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_mC3509D15EF631F1298D67639BE7F86AF1F2CDDD4_gshared (NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA ___nativeArray0, const RuntimeMethod* method) ;
// T& Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ArrayElementAsRef<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* UnsafeUtility_ArrayElementAsRef_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_m65A8930CB4E4BE8DA37FE6C27D40F1763DF732A9_gshared (void* ___ptr0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteValueSafe<System.Boolean>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF1323B69B63D7207805FA651F0DDDB44C848B1B8_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, bool* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteValueSafe<System.Single>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC7B82585B9FE286D98075E718A95CD21D70180E4_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, float* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe<System.Boolean>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m66E2AA444E3D7FA5540201E563319F97DC0A2A40_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, bool* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe<System.Single>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCCC0AEC3625AD1F2B962276BCC40A93282FE7F49_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, float* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteNetworkSerializable<Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_WriteNetworkSerializable_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_m3A3826C6506DC2C0FF61454A19C4A121C4E71FA9_gshared (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteNetworkSerializable<Unity.Netcode.Components.NetworkAnimator/AnimationMessage>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_WriteNetworkSerializable_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_mADBA4596B2E5BD8810FEEFFA4878F3FA13EC0821_gshared (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteNetworkSerializable<Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_WriteNetworkSerializable_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m8506D08FAFF00B0912CC852076DBF726F32C557A_gshared (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5124CA0DFD4B9968298DB45CEDF7F4B7A1F7DF83_gshared (Dictionary_2_tC8FA8E0C06C3A9584490723EC95DC65E5AFFF71A* __this, uint32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::ReadNetworkSerializable<Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_ReadNetworkSerializable_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_mA375225F50F407A641429CEE94ED6D228F0650A9_gshared (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::ReadNetworkSerializable<Unity.Netcode.Components.NetworkAnimator/AnimationMessage>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_ReadNetworkSerializable_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_m9E5053F0E1E0033526A340907D67601264D6DCFE_gshared (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::ReadNetworkSerializable<Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_ReadNetworkSerializable_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m5A0B212660CAAA9CED758790ED5FD14DAF6D7F41_gshared (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteNetworkSerializable<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_WriteNetworkSerializable_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_m8AFA7DA487CB4E2C00725F67C9A90768008B807E_gshared (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::ResetTo(T,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolator_1_ResetTo_m50C7E395DAF04E486CA863CD4F6DB516FB9BC0EE_gshared (BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* __this, float ___targetValue0, double ___serverTime1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>::ResetTo(T,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolator_1_ResetTo_m8C513E5B41DDB4AE43DC18ADC0100970B447B089_gshared (BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetValue0, double ___serverTime1, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>::.ctor(T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_4__ctor_m356A659364AE3B804809D81AF42F1320F3F53FBC_gshared (ValueTuple_4_tA6BBB2A2AF4C95729A202670B298BBB74D2EF1AC* __this, bool ___item10, bool ___item21, bool ___item32, bool ___item43, const RuntimeMethod* method) ;
// T Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::GetInterpolatedValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BufferedLinearInterpolator_1_GetInterpolatedValue_mABAA50082A53E38CA5B772C9C20CD0B892E4DF3A_gshared_inline (BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* __this, const RuntimeMethod* method) ;
// T Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>::GetInterpolatedValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BufferedLinearInterpolator_1_GetInterpolatedValue_m7122EEDBDF0BFCAF1D2A7199A1D2D8DBB430C33E_gshared_inline (BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::AddMeasurement(T,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolator_1_AddMeasurement_mEA6D11B1B5852A10BD5E02C26C475FC2E8317C01_gshared (BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* __this, float ___newMeasurement0, double ___sentTime1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>::AddMeasurement(T,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolator_1_AddMeasurement_m7ECDD6542A70CBB3A21F25816AE5C7A3B2704889_gshared (BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___newMeasurement0, double ___sentTime1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkVariable`1/OnValueChangedDelegate<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate__ctor_mFD5FD05DE07CC5B982A25FBCF5B1921FDB69DE19_gshared (OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_gshared_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Vector3>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_gshared (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Quaternion>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9D3E39C05D6F69CFF5A2A4CD0034CDA830F7E2CF_gshared_inline (Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Quaternion>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Nullable_1_get_Value_m2E107232031E57A2F8BF26712417E1BD4A0ABCDC_gshared (Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteValueSafe<UnityEngine.Vector3>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m53EDE2E29B562A2314E00496FF0FCA51CA81BC42_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteValueSafe<UnityEngine.Quaternion>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m43B787A9D8BFF0713DD22EDD0ACE8DCB1D0403C7_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::Update(System.Single,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BufferedLinearInterpolator_1_Update_mDECC3AC6FA3912CEFFA9A93770AD98907F555B55_gshared (BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* __this, float ___deltaTime0, double ___renderTime1, double ___serverTime2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>::Update(System.Single,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BufferedLinearInterpolator_1_Update_m651EFF6DFA7629076051163CCEBFA16AE3BF9758_gshared (BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B* __this, float ___deltaTime0, double ___renderTime1, double ___serverTime2, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkVariable`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkVariable_1__ctor_mBF40D1D921E135A48CD6178E8F6A0A9B5CF34298_gshared (NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::ReadNetworkSerializable<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader_ReadNetworkSerializable_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_mF26F3155045A53BCCD398F3019FAC3340EDFE982_gshared (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe<UnityEngine.Vector3>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3BD7AB5985FCF1E3C818E0F32ABD84706A53BC07_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe<UnityEngine.Quaternion>(T&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m65D5B17C9E42897A683FC7E5D8E65D5BEBA103C5_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value0, const RuntimeMethod* method) ;

// System.Void Unity.Netcode.NetworkVariableHelper::InitializeDelegates<Unity.Netcode.Components.NetworkAnimator/AnimationMessage>()
inline void NetworkVariableHelper_InitializeDelegates_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_m7640E43355A3FD97ACAAD486B5F467AED8351F4B (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))NetworkVariableHelper_InitializeDelegates_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_m7640E43355A3FD97ACAAD486B5F467AED8351F4B_gshared)(method);
}
// System.Void Unity.Netcode.NetworkVariableHelper::InitializeDelegates<Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage>()
inline void NetworkVariableHelper_InitializeDelegates_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_mC8F872902CFE4C2D6824709934FD86F65D69F691 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))NetworkVariableHelper_InitializeDelegates_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_mC8F872902CFE4C2D6824709934FD86F65D69F691_gshared)(method);
}
// System.Void Unity.Netcode.NetworkVariableHelper::InitializeDelegates<Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage>()
inline void NetworkVariableHelper_InitializeDelegates_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m4F73BA15E594F6A99C1D094A00FAB8BD2F478C65 (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))NetworkVariableHelper_InitializeDelegates_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m4F73BA15E594F6A99C1D094A00FAB8BD2F478C65_gshared)(method);
}
// System.Void Unity.Netcode.NetworkVariableHelper::InitializeDelegates<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>()
inline void NetworkVariableHelper_InitializeDelegates_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_m445C118168A0AA8920F7E2EC33D68FF5BEC5D20D (const RuntimeMethod* method)
{
	((  void (*) (const RuntimeMethod*))NetworkVariableHelper_InitializeDelegates_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_m445C118168A0AA8920F7E2EC33D68FF5BEC5D20D_gshared)(method);
}
// System.Single UnityEngine.Mathf::LerpUnclamped(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF5A9A9AC62D7BAD992CEAB2E5B6A49F5D2B87700_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::.ctor()
inline void BufferedLinearInterpolator_1__ctor_mE66736084A3316EE84A37C67519971E73EBB6BF3 (BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* __this, const RuntimeMethod* method)
{
	((  void (*) (BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964*, const RuntimeMethod*))BufferedLinearInterpolator_1__ctor_mE66736084A3316EE84A37C67519971E73EBB6BF3_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::SlerpUnclamped(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_SlerpUnclamped_mB38920352A1B11369D782F78E183568CAFA82C0F (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>::.ctor()
inline void BufferedLinearInterpolator_1__ctor_mA0BC7D92ED97EFD8935D9E06FB9B9A1450C665EA (BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B* __this, const RuntimeMethod* method)
{
	((  void (*) (BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B*, const RuntimeMethod*))BufferedLinearInterpolator_1__ctor_mA0BC7D92ED97EFD8935D9E06FB9B9A1450C665EA_gshared)(__this, method);
}
// System.Void Unity.Netcode.Components.NetworkAnimator::ResetParameterOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_ResetParameterOptions_m331A8C73B6D106337D06E5F27B03804BDE483E2A (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, const RuntimeMethod* method) ;
// Unity.Netcode.LogLevel Unity.Netcode.NetworkLog::get_CurrentLogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkLog_get_CurrentLogLevel_m1A75EDDFE364E7C4969E362A8AF3F43F451EAE64 (const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkLog::LogInfoServer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkLog_LogInfoServer_mAAFDA58F3BA5689EDC65C2EA144EA27CF5143DCA (String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkBehaviour::get_IsServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_IsServer_m57CCCE498593E3A21E6B952AB9C4BAA482EB4CD6 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) ;
// Unity.Netcode.NetworkObject Unity.Netcode.NetworkBehaviour::get_NetworkObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* NetworkBehaviour_get_NetworkObject_m5B4FBD71361ED0640492D6AAB454C393E8394224 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkObject::get_IsSpawned()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkObject_get_IsSpawned_mDAF52C8099FE7F21C7AFF36622F74688E9E07CDA_inline (NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m0F1A77B518FF3B6029AC04F9B31930365D14D5C3 (NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m0F1A77B518FF3B6029AC04F9B31930365D14D5C3_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>::Dispose()
inline void NativeArray_1_Dispose_m83B130C74A2A448FE48B0017E6115CD5E223885D (NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA*, const RuntimeMethod*))NativeArray_1_Dispose_m83B130C74A2A448FE48B0017E6115CD5E223885D_gshared)(__this, method);
}
// System.Void Unity.Netcode.FastBufferWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimatorControllerParameter[] UnityEngine.Animator::get_parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mE64EC0071C08805771A6A9E7AFDAD4E7DF0362E4 (NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mE64EC0071C08805771A6A9E7AFDAD4E7DF0362E4_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Int32 UnityEngine.AnimatorControllerParameter::get_nameHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorControllerParameter_get_nameHash_m92DA605E70604B1BBFD5EA5AE0CD0311F21400EE (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurve(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurve_mE62E4CAE2725D8AD214D59FF459F63157818C7DF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) ;
// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorControllerParameter_get_type_mACEB110E346B27168F177E7A909CFB8586A2B966 (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::EnumToInt<UnityEngine.AnimatorControllerParameterType>(T)
inline int32_t UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_t2AD68F1C718AFCCBF9CF62AEBEAD0439276E4E6E_m0342CC99129F356D8D8A3E08D40C0E5DF1DCABB1 (int32_t ___enumValue0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, const RuntimeMethod*))UnsafeUtility_EnumToInt_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m7FC8FD5E40D6A1FAA8F6E3BBD8237C3D8877A6E6_gshared)(___enumValue0, method);
}
// System.Single UnityEngine.Animator::GetFloat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloat_mEFA968AD9EEB92E6A03AEEB968600798E61F9B1D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Single>(System.Void*,System.Int32,T)
inline void UnsafeUtility_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCC82D066EA98DE5D307EBCDB576FD5EE6DFCEEC9 (void* ___destination0, int32_t ___index1, float ___value2, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, float, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCC82D066EA98DE5D307EBCDB576FD5EE6DFCEEC9_gshared)(___destination0, ___index1, ___value2, method);
}
// System.Int32 UnityEngine.Animator::GetInteger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetInteger_mF4E1564D3791C968FA8952954B5AAC4C4E2C8B91 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int32>(System.Void*,System.Int32,T)
inline void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22615F03667154E3694602654C53574FE60392F0 (void* ___destination0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22615F03667154E3694602654C53574FE60392F0_gshared)(___destination0, ___index1, ___value2, method);
}
// System.Boolean UnityEngine.Animator::GetBool(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBool_mFEC9C0565C52965FBD5D6A02084484F00F8ECE2C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Boolean>(System.Void*,System.Int32,T)
inline void UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3DC6740E537B2EA979655D20EBEF3ED1A0DB1A29 (void* ___destination0, int32_t ___index1, bool ___value2, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, bool, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3DC6740E537B2EA979655D20EBEF3ED1A0DB1A29_gshared)(___destination0, ___index1, ___value2, method);
}
// System.Boolean Unity.Netcode.Components.NetworkAnimator::get_sendMessagesAllowed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkAnimator_get_sendMessagesAllowed_mBDFA350C7E37E3B0DA7386CF92862C4DC6C5019C (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkAnimator::CheckAnimStateChanged(System.Int32&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkAnimator_CheckAnimStateChanged_m27C178D6FEF7CDEC15C40428FBC5EA6763B6F147 (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, int32_t* ___stateHash0, float* ___normalizedTime1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkAnimator::CheckAndSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_CheckAndSend_m6EA32E824B76C8C6FCFC9F28DD499998F8542236 (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::Seek(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___where0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::Truncate(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_Truncate_m37769BA69463FC89CF72E53994AC55508087D7C5_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___where0, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkAnimator::WriteParameters(Unity.Netcode.FastBufferWriter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkAnimator_WriteParameters_mFA8B5C2533EF76E1E40E0EA2E9894E30A7DF4A32 (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, bool ___autoSend1, const RuntimeMethod* method) ;
// System.Byte[] Unity.Netcode.FastBufferWriter::ToArray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FastBufferWriter_ToArray_mC3A2B1C0D9DD5C11E08A371C70E600FC771B2E67_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkAnimator::SendAnimStateClientRpc(Unity.Netcode.Components.NetworkAnimator/AnimationMessage,Unity.Netcode.ClientRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_SendAnimStateClientRpc_mBF1048F721CFC149950A231ED4BC6083EA8EB75E (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 ___animSnapshot0, ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 ___clientRpcParams1, const RuntimeMethod* method) ;
// Unity.Netcode.NetworkManager Unity.Netcode.NetworkBehaviour::get_NetworkManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) ;
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkManager::get_ServerTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkManager_get_ServerTime_m1EB06367487A361578137D4E2D13917F86DDA471 (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Double Unity.Netcode.NetworkTime::get_Time()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetworkTime_get_Time_mDC7F8AB78A0D860B5D3BF62AF1E42724059F690B_inline (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkAnimator::SendParamsClientRpc(Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage,Unity.Netcode.ClientRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_SendParamsClientRpc_mA2953500C5E3CE1D39F7010D5D2BF7767EA77AAA (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A ___animSnapshot0, ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 ___clientRpcParams1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// UnityEngine.AnimatorTransitionInfo UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD Animator_GetAnimatorTransitionInfo_mAB532C0834DEF3685C6E16C82B7A93B8875FC542 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_fullPathHash_m3C358272C30F5AAE76547585AA6C3D866F6F77AE (AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkAnimator::GetParameterAutoSend(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkAnimator_GetParameterAutoSend_m7759306BEE1DD8C44AEBD5E8E3FEEA3FA8133280 (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_mC3509D15EF631F1298D67639BE7F86AF1F2CDDD4 (NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_mC3509D15EF631F1298D67639BE7F86AF1F2CDDD4_gshared)(___nativeArray0, method);
}
// T& Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ArrayElementAsRef<Unity.Netcode.Components.NetworkAnimator/AnimatorParamCache>(System.Void*,System.Int32)
inline AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* UnsafeUtility_ArrayElementAsRef_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_m65A8930CB4E4BE8DA37FE6C27D40F1763DF732A9 (void* ___ptr0, int32_t ___index1, const RuntimeMethod* method)
{
	return ((  AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ArrayElementAsRef_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_m65A8930CB4E4BE8DA37FE6C27D40F1763DF732A9_gshared)(___ptr0, ___index1, method);
}
// System.Void Unity.Netcode.BytePacker::WriteValuePacked(Unity.Netcode.FastBufferWriter,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BytePacker_WriteValuePacked_m0D4AE5A133595B059C397DFD8A06D1C5679A10ED_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint32_t ___value1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteValueSafe<System.Boolean>(T&)
inline void FastBufferWriter_WriteValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF1323B69B63D7207805FA651F0DDDB44C848B1B8_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, bool* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, bool*, const RuntimeMethod*))FastBufferWriter_WriteValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF1323B69B63D7207805FA651F0DDDB44C848B1B8_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Netcode.FastBufferWriter::WriteValueSafe<System.Single>(T&)
inline void FastBufferWriter_WriteValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC7B82585B9FE286D98075E718A95CD21D70180E4_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, float* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, float*, const RuntimeMethod*))FastBufferWriter_WriteValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC7B82585B9FE286D98075E718A95CD21D70180E4_gshared_inline)(__this, ___value0, method);
}
// System.Int32 Unity.Netcode.FastBufferWriter::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.ByteUnpacker::ReadValuePacked(Unity.Netcode.FastBufferReader,System.Int32&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteUnpacker_ReadValuePacked_m7A710DF5CB32B19D2256D9A7F44842F700D5FC46_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___reader0, int32_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetInteger(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_mE823EC7492A7FB266FA723C168226D17085DF3E8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe<System.Boolean>(T&)
inline void FastBufferReader_ReadValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m66E2AA444E3D7FA5540201E563319F97DC0A2A40_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, bool* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*, bool*, const RuntimeMethod*))FastBufferReader_ReadValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m66E2AA444E3D7FA5540201E563319F97DC0A2A40_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe<System.Single>(T&)
inline void FastBufferReader_ReadValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCCC0AEC3625AD1F2B962276BCC40A93282FE7F49_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, float* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*, float*, const RuntimeMethod*))FastBufferReader_ReadValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCCC0AEC3625AD1F2B962276BCC40A93282FE7F49_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, float ___value1, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::get_IsListening()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::get_IsServer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::get_IsHost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124 (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::.ctor(System.Int32,Unity.Collections.Allocator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4 (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___size0, int32_t ___allocator1, int32_t ___maxSize2, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteNetworkSerializable<Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage>(T&)
inline void FastBufferWriter_WriteNetworkSerializable_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_m3A3826C6506DC2C0FF61454A19C4A121C4E71FA9 (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A*, const RuntimeMethod*))FastBufferWriter_WriteNetworkSerializable_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_m3A3826C6506DC2C0FF61454A19C4A121C4E71FA9_gshared)(__this, ___value0, method);
}
// System.Void Unity.Netcode.NetworkBehaviour::__sendClientRpc(Unity.Netcode.FastBufferWriter,System.UInt32,Unity.Netcode.ClientRpcParams,Unity.Netcode.RpcDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour___sendClientRpc_m78D490ECE88AD695DC50B8195719FAC5E488E07B (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint32_t ___rpcMethodId1, ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 ___rpcParams2, int32_t ___delivery3, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::get_IsClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::.ctor(System.Byte*,Unity.Collections.Allocator,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferReader__ctor_mE38754ABA3478570D1E05407E02FDD418AF676BC (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, uint8_t* ___buffer0, int32_t ___allocator1, int32_t ___length2, int32_t ___offset3, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkAnimator::ReadParameters(Unity.Netcode.FastBufferReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_ReadParameters_m81D70BE256322547778017CFB4F619BFBECF5BEA (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___reader0, bool ___autoSend1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteNetworkSerializable<Unity.Netcode.Components.NetworkAnimator/AnimationMessage>(T&)
inline void FastBufferWriter_WriteNetworkSerializable_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_mADBA4596B2E5BD8810FEEFFA4878F3FA13EC0821 (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26*, const RuntimeMethod*))FastBufferWriter_WriteNetworkSerializable_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_mADBA4596B2E5BD8810FEEFFA4878F3FA13EC0821_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteNetworkSerializable<Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage>(T&)
inline void FastBufferWriter_WriteNetworkSerializable_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m8506D08FAFF00B0912CC852076DBF726F32C557A (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46*, const RuntimeMethod*))FastBufferWriter_WriteNetworkSerializable_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m8506D08FAFF00B0912CC852076DBF726F32C557A_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.Animator::ResetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m2DF2C6DE87314918C151616FD5C39EB93EE14011 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D9CACEFDE11FF9DB99207B5CBD251C1EC047939 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkAnimator::SetTrigger(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_SetTrigger_m347C98FBD6C575B71E4EBFD51FCE268CEFB72B2A (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, int32_t ___hash0, bool ___reset1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkAnimator::SendAnimTriggerClientRpc(Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage,Unity.Netcode.ClientRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_SendAnimTriggerClientRpc_m25CD0F1C781CF068DAC54DB7ACE64E3D9CF17779 (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46 ___animSnapshot0, ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 ___clientRpcParams1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkAnimator::ResetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_ResetTrigger_m1A16157A23E727CC57F8F7251A212AF04211CAE4 (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, int32_t ___hash0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour__ctor_m0BFD04A5D02376F13DD2E85274836CD4A3AD38E6 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkManager/RpcReceiveHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RpcReceiveHandler__ctor_m38D96DF14942B8B37F0A872B2C509A442F5F19B6 (RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>::Add(TKey,TValue)
inline void Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877 (Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* __this, uint32_t ___key0, RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD*, uint32_t, RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597*, const RuntimeMethod*))Dictionary_2_Add_m5124CA0DFD4B9968298DB45CEDF7F4B7A1F7DF83_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Unity.Netcode.FastBufferReader::ReadNetworkSerializable<Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage>(T&)
inline void FastBufferReader_ReadNetworkSerializable_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_mA375225F50F407A641429CEE94ED6D228F0650A9 (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A*, const RuntimeMethod*))FastBufferReader_ReadNetworkSerializable_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_mA375225F50F407A641429CEE94ED6D228F0650A9_gshared)(__this, ___value0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::ReadNetworkSerializable<Unity.Netcode.Components.NetworkAnimator/AnimationMessage>(T&)
inline void FastBufferReader_ReadNetworkSerializable_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_m9E5053F0E1E0033526A340907D67601264D6DCFE (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26*, const RuntimeMethod*))FastBufferReader_ReadNetworkSerializable_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_m9E5053F0E1E0033526A340907D67601264D6DCFE_gshared)(__this, ___value0, method);
}
// System.Void Unity.Netcode.FastBufferReader::ReadNetworkSerializable<Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage>(T&)
inline void FastBufferReader_ReadNetworkSerializable_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m5A0B212660CAAA9CED758790ED5FD14DAF6D7F41 (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46*, const RuntimeMethod*))FastBufferReader_ReadNetworkSerializable_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m5A0B212660CAAA9CED758790ED5FD14DAF6D7F41_gshared)(__this, ___value0, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<Unity.Netcode.Components.NetworkTransform>()
inline NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* Component_GetComponent_TisNetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16_mE600383BAC048BBF57439674380E8A8F4063AE56 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean Unity.Netcode.Components.NetworkRigidbody::get_HasAuthority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkRigidbody_get_HasAuthority_m2B03FC3EB3B589BC2DB2F6CB3BA6E79CF8817683 (NetworkRigidbody_tDE00ED9930D70F23E37F936A09818AEBA04090CA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkRigidbody::UpdateRigidbodyKinematicMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRigidbody_UpdateRigidbodyKinematicMode_m8B2572B1CE688AE59BFE39F01D201BB4722C7415 (NetworkRigidbody_tDE00ED9930D70F23E37F936A09818AEBA04090CA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.RigidbodyInterpolation UnityEngine.Rigidbody::get_interpolation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rigidbody_get_interpolation_mE508FC846FB031C118464637507C004408A32696 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_interpolation(UnityEngine.RigidbodyInterpolation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_interpolation_mC7D39114A7AC6ED0AB2B40FECA4E2ED3C1D7603C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean Unity.Netcode.NetworkBehaviour::get_IsSpawned()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_IsSpawned_m61C7DDBA4399DA812385A297821986D619423C96 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkRigidbody2D::get_HasAuthority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkRigidbody2D_get_HasAuthority_m2DC8D519315EE6A9AFC299AB93D56E18BDF1B3C5 (NetworkRigidbody2D_tD143C2CDC083134827C7E3E21BD849BA1B7032EC* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkRigidbody2D::UpdateRigidbodyKinematicMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRigidbody2D_UpdateRigidbodyKinematicMode_mF6C77332A2F335DFFE1EA3CF5ECD19560F1DD028 (NetworkRigidbody2D_tD143C2CDC083134827C7E3E21BD849BA1B7032EC* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rigidbody2D::get_isKinematic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody2D_get_isKinematic_m41BBC60A072047F850097C0391A002935DD277CB (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_isKinematic_m7C68AB4CFB6D301F0EDF0BFF66FB121ED3CC7853 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.RigidbodyInterpolation2D UnityEngine.Rigidbody2D::get_interpolation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rigidbody2D_get_interpolation_m3A85873C44DB8123E68DB38B1CC3DCF3FD2CD083 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_interpolation(UnityEngine.RigidbodyInterpolation2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_interpolation_m4914262B161A76DD061969667C0D412A8C93A994 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkTransform::ApplyTransformToNetworkState(Unity.Netcode.Components.NetworkTransform/NetworkTransformState&,System.Double,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransform_ApplyTransformToNetworkState_mD89BB6414765B7696FD836B546354B52B745F72E (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___networkState0, double ___dirtyTime1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transformToUse2, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform::TryCommit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_TryCommit_mA473B6BD3704178DEAB63931F58D62CC7BB7435B (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, bool ___isDirty0, const RuntimeMethod* method) ;
// System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean> Unity.Netcode.Components.NetworkTransform::ApplyTransformToNetworkStateWithInfo(Unity.Netcode.Components.NetworkTransform/NetworkTransformState&,System.Double,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_4_tA6BBB2A2AF4C95729A202670B298BBB74D2EF1AC NetworkTransform_ApplyTransformToNetworkStateWithInfo_m129F6631807CAA0D3614BFB761D26349DDE5E9ED (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___networkState0, double ___dirtyTime1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotAngles3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale4, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform::<TryCommit>g__Send|41_0(Unity.Netcode.Components.NetworkTransform/NetworkTransformState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_U3CTryCommitU3Eg__SendU7C41_0_mA1874B584F040881CD52AA7E85F869A53F70C7DE (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___stateToSend0, const RuntimeMethod* method) ;
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkManager::get_LocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkManager_get_LocalTime_m17506338EF54F39A0C27A56D822F17A112D49CC7 (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Netcode.NetworkTime::get_Tick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkTime_get_Tick_m1544072B4A5D9F6767E31A77EFB451B6B0F5B991_inline (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteNetworkSerializable<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>(T&)
inline void FastBufferWriter_WriteNetworkSerializable_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_m8AFA7DA487CB4E2C00725F67C9A90768008B807E (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*, const RuntimeMethod*))FastBufferWriter_WriteNetworkSerializable_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_m8AFA7DA487CB4E2C00725F67C9A90768008B807E_gshared)(__this, ___value0, method);
}
// System.Void Unity.Netcode.NetworkBehaviour::__sendServerRpc(Unity.Netcode.FastBufferWriter,System.UInt32,Unity.Netcode.ServerRpcParams,Unity.Netcode.RpcDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour___sendServerRpc_mE1E5BE25CC0FBB4480D6B8A9A7CE16D79C51D996 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint32_t ___rpcMethodId1, ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___rpcParams2, int32_t ___delivery3, const RuntimeMethod* method) ;
// System.UInt64 Unity.Netcode.NetworkBehaviour::get_OwnerClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetworkBehaviour_get_OwnerClientId_m59ED21DE97867ED0CAE0C553A2BBE369543360BF (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform::CommitLocallyAndReplicate(Unity.Netcode.Components.NetworkTransform/NetworkTransformState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_CommitLocallyAndReplicate_m87C9ED934B0157D0ABF57115ED1D53D2641DCEE3 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___networkState0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform::AddInterpolatedState(Unity.Netcode.Components.NetworkTransform/NetworkTransformState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_AddInterpolatedState_m349DB86EA15EB09A42211AEFE3F440B0F2CC86C8 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___newState0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::ResetTo(T,System.Double)
inline void BufferedLinearInterpolator_1_ResetTo_m50C7E395DAF04E486CA863CD4F6DB516FB9BC0EE (BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* __this, float ___targetValue0, double ___serverTime1, const RuntimeMethod* method)
{
	((  void (*) (BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964*, float, double, const RuntimeMethod*))BufferedLinearInterpolator_1_ResetTo_m50C7E395DAF04E486CA863CD4F6DB516FB9BC0EE_gshared)(__this, ___targetValue0, ___serverTime1, method);
}
// UnityEngine.Vector3 Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NetworkTransformState_get_Rotation_m46EE6E47371DEB9BA5F3EB307364DD0578918A8F (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>::ResetTo(T,System.Double)
inline void BufferedLinearInterpolator_1_ResetTo_m8C513E5B41DDB4AE43DC18ADC0100970B447B089 (BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetValue0, double ___serverTime1, const RuntimeMethod* method)
{
	((  void (*) (BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, double, const RuntimeMethod*))BufferedLinearInterpolator_1_ResetTo_m8C513E5B41DDB4AE43DC18ADC0100970B447B089_gshared)(__this, ___targetValue0, ___serverTime1, method);
}
// System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean> Unity.Netcode.Components.NetworkTransform::ApplyTransformToNetworkStateWithInfo(Unity.Netcode.Components.NetworkTransform/NetworkTransformState&,System.Double,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_4_tA6BBB2A2AF4C95729A202670B298BBB74D2EF1AC NetworkTransform_ApplyTransformToNetworkStateWithInfo_mE70B0FE565188A7A7FAD7BD79B3F1D4A9898C434 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___networkState0, double ___dirtyTime1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transformToUse2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_InLocalSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_InLocalSpace_m97EFBEEA87FCFF746BE37A23B9E4F26667687174 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_InLocalSpace(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_InLocalSpace_mD00CB59C2D2BB5E4E23582483B9D9927B55D2CC8 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasPositionX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasPositionX_m56DD5AC54908FA314A5DA409ED2D9F7F00C7C4DD (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasPositionY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasPositionY_mC1F10530374A7151FA9BEF0A32E8A73EFF75BD48 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasPositionZ(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasPositionZ_mD5785F0A569A6E65B78EE0E98F43AE0E4C0048D8 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasRotAngleX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasRotAngleX_mFD3487AA6A89AC649BCC11F35D8F304C0A9F8EF3 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasRotAngleY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasRotAngleY_m8706FE3EBF4726B0533FA4717A6089EDC473FC2C (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasRotAngleZ(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasRotAngleZ_m4B5C80348A28835BCA0E3E561F70FBF69072F528 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasScaleX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasScaleX_m4C1A8819BEB42604BED6E8F1D13C45A873E2E1D1 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasScaleY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasScaleY_m55D88DF7CF380773117F6132BF7A46B89C70D0AB (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasScaleZ(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasScaleZ_m96A06064AF420C4FBE9B3E40121905669A4FBAD2 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>::.ctor(T1,T2,T3,T4)
inline void ValueTuple_4__ctor_m356A659364AE3B804809D81AF42F1320F3F53FBC (ValueTuple_4_tA6BBB2A2AF4C95729A202670B298BBB74D2EF1AC* __this, bool ___item10, bool ___item21, bool ___item32, bool ___item43, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_4_tA6BBB2A2AF4C95729A202670B298BBB74D2EF1AC*, bool, bool, bool, bool, const RuntimeMethod*))ValueTuple_4__ctor_m356A659364AE3B804809D81AF42F1320F3F53FBC_gshared)(__this, ___item10, ___item21, ___item32, ___item43, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_IsTeleportingNextFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// T Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::GetInterpolatedValue()
inline float BufferedLinearInterpolator_1_GetInterpolatedValue_mABAA50082A53E38CA5B772C9C20CD0B892E4DF3A_inline (BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* __this, const RuntimeMethod* method)
{
	return ((  float (*) (BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964*, const RuntimeMethod*))BufferedLinearInterpolator_1_GetInterpolatedValue_mABAA50082A53E38CA5B772C9C20CD0B892E4DF3A_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NetworkTransformState_get_Position_m6EE3CD882D7AE5735F7CB7272B74697DB4F8C7A8 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// T Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>::GetInterpolatedValue()
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BufferedLinearInterpolator_1_GetInterpolatedValue_m7122EEDBDF0BFCAF1D2A7199A1D2D8DBB430C33E_inline (BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B* __this, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B*, const RuntimeMethod*))BufferedLinearInterpolator_1_GetInterpolatedValue_m7122EEDBDF0BFCAF1D2A7199A1D2D8DBB430C33E_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NetworkTransformState_get_Scale_m6DD817260F08350DBC11384C5BC478EAB014E26E (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_Position_mAEBD3398159EBAFE97778684A564240F87AFCA1C (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_Rotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_Rotation_m115F1F57926A230C34F2CBE817EE11D3E520351B (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_Scale_m6FF3625E2AE27323E1AD8174A4C28C7C4B8C9151 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasPositionX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasPositionX_m38C1D7FA45D4F042E1DF6DF427769E833DB1562B (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::AddMeasurement(T,System.Double)
inline void BufferedLinearInterpolator_1_AddMeasurement_mEA6D11B1B5852A10BD5E02C26C475FC2E8317C01 (BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* __this, float ___newMeasurement0, double ___sentTime1, const RuntimeMethod* method)
{
	((  void (*) (BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964*, float, double, const RuntimeMethod*))BufferedLinearInterpolator_1_AddMeasurement_mEA6D11B1B5852A10BD5E02C26C475FC2E8317C01_gshared)(__this, ___newMeasurement0, ___sentTime1, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasPositionY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasPositionY_mAE9F9A90D1BE78E78A7B06EBFD935553D7B5BC1A (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasPositionZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasPositionZ_m720D04DBA54389D30D834C4317BC520A023ED05A (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>::AddMeasurement(T,System.Double)
inline void BufferedLinearInterpolator_1_AddMeasurement_m7ECDD6542A70CBB3A21F25816AE5C7A3B2704889 (BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___newMeasurement0, double ___sentTime1, const RuntimeMethod* method)
{
	((  void (*) (BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, double, const RuntimeMethod*))BufferedLinearInterpolator_1_AddMeasurement_m7ECDD6542A70CBB3A21F25816AE5C7A3B2704889_gshared)(__this, ___newMeasurement0, ___sentTime1, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasScaleX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasScaleX_m62884CDB2892EBAA435E6B5990ED6E263813E27F (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasScaleY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasScaleY_m08BBB82139D65BFEB7A608F9CFC048E841ACA9DE (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasScaleZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasScaleZ_m4C1375674CCF760F831467D767B1CB24DB916F12 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m327C20CF784AABE55B9F10B1B296C38347595FAB (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, float ___duration3, bool ___depthTest4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.BufferedLinearInterpolatorFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolatorFloat__ctor_m694812EACC50BDD059E307A466E725E007AA6636 (BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.BufferedLinearInterpolatorQuaternion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolatorQuaternion__ctor_mD62ACE4858EF30ABDBB945CA521DF5B71A381152 (BufferedLinearInterpolatorQuaternion_t33BA43A1A51A5C5000D00054578ECAAC53A2A516* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>>::get_Count()
inline int32_t List_1_get_Count_mDB349D171938997F6579258324478F4C93CB90FA_inline (List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>>::Add(T)
inline void List_1_Add_m8B8FA25A1D47E810AB99990741511BA627E71775_inline (List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E* __this, BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E*, BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkVariable`1/OnValueChangedDelegate<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::.ctor(System.Object,System.IntPtr)
inline void OnValueChangedDelegate__ctor_mFD5FD05DE07CC5B982A25FBCF5B1921FDB69DE19 (OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F*, RuntimeObject*, intptr_t, const RuntimeMethod*))OnValueChangedDelegate__ctor_mFD5FD05DE07CC5B982A25FBCF5B1921FDB69DE19_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform::TryCommitTransformToServer(UnityEngine.Transform,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_TryCommitTransformToServer_m6EC66780853F1DCD7297AF4DDF0468B7D6A61BD5 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transformToCommit0, double ___dirtyTime1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_Initialize_m1C007AC47CC50EAC858D1CCA7B598A347AC96034 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform::ResetInterpolatedStateToCurrentAuthoritativeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_ResetInterpolatedStateToCurrentAuthoritativeState_m1137FDC8AC132A4BC02C80F537B88C4F68E18B98 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform::ApplyInterpolatedNetworkStateToTransform(Unity.Netcode.Components.NetworkTransform/NetworkTransformState,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_ApplyInterpolatedNetworkStateToTransform_m5488830F265BBF2CF5298541099EA2E9AB611FA2 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___networkState0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transformToUpdate1, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkBehaviour::get_IsOwner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_IsOwner_m2C408A356ACBD9AF0C991BF01B5F20C75891FAB3 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::get_IsConnectedClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsConnectedClient_m6A551DE92D70EFC1940AB427EA727968DA3C9A59_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.Vector3>::get_Value()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792 (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE*, const RuntimeMethod*))Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<UnityEngine.Quaternion>::get_HasValue()
inline bool Nullable_1_get_HasValue_m9D3E39C05D6F69CFF5A2A4CD0034CDA830F7E2CF_inline (Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25*, const RuntimeMethod*))Nullable_1_get_HasValue_m9D3E39C05D6F69CFF5A2A4CD0034CDA830F7E2CF_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.Quaternion>::get_Value()
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Nullable_1_get_Value_m2E107232031E57A2F8BF26712417E1BD4A0ABCDC (Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25* __this, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25*, const RuntimeMethod*))Nullable_1_get_Value_m2E107232031E57A2F8BF26712417E1BD4A0ABCDC_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform::SetStateServerRpc(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_SetStateServerRpc_m370797ABE81E0F2044CFEBC3EFB868E9158A00FF (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale2, bool ___shouldTeleport3, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_IsTeleportingNextFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_IsTeleportingNextFrame_m916BFF5B26DB5D75BFBC330F04466FED4AF2E7C4 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.UInt64 Unity.Netcode.NetworkManager::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetworkManager_get_LocalClientId_m1B93454E7949ACBF20043DCDD884F63E119E6577 (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteValueSafe<UnityEngine.Vector3>(T&)
inline void FastBufferWriter_WriteValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m53EDE2E29B562A2314E00496FF0FCA51CA81BC42_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))FastBufferWriter_WriteValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m53EDE2E29B562A2314E00496FF0FCA51CA81BC42_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Netcode.FastBufferWriter::WriteValueSafe<UnityEngine.Quaternion>(T&)
inline void FastBufferWriter_WriteValueSafe_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m43B787A9D8BFF0713DD22EDD0ACE8DCB1D0403C7_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, const RuntimeMethod*))FastBufferWriter_WriteValueSafe_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m43B787A9D8BFF0713DD22EDD0ACE8DCB1D0403C7_gshared_inline)(__this, ___value0, method);
}
// System.ValueTuple`3<UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3> Unity.Netcode.Components.NetworkTransform/OnClientRequestChangeDelegate::Invoke(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_3_tE39E42FC756887AF8710ED1B13FCC5F5409FABC4 OnClientRequestChangeDelegate_Invoke_m70587050315AEAB486DC53CBBA194371CC422530_inline (OnClientRequestChangeDelegate_t6B736624F278668F5B5AD070F02AB4AB013BC1C8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkTime::TimeTicksAgo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkTime_TimeTicksAgo_m3DE56CDB34180F78932D9A115AC6CE36578DA446 (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, int32_t ___ticks0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>>::GetEnumerator()
inline Enumerator_t8476784130A98A43A4B6C984AF72ADC69E01F56D List_1_GetEnumerator_m278B39540B7AAE8E110125145779C92CAA00F97A (List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8476784130A98A43A4B6C984AF72ADC69E01F56D (*) (List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>>::Dispose()
inline void Enumerator_Dispose_mE6DA9014FEE390D2DAA206752CA64A3D138C5F68 (Enumerator_t8476784130A98A43A4B6C984AF72ADC69E01F56D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8476784130A98A43A4B6C984AF72ADC69E01F56D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>>::get_Current()
inline BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* Enumerator_get_Current_mB84DE69348F61F10E484604391F19363B2C9D869_inline (Enumerator_t8476784130A98A43A4B6C984AF72ADC69E01F56D* __this, const RuntimeMethod* method)
{
	return ((  BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* (*) (Enumerator_t8476784130A98A43A4B6C984AF72ADC69E01F56D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// T Unity.Netcode.BufferedLinearInterpolator`1<System.Single>::Update(System.Single,System.Double,System.Double)
inline float BufferedLinearInterpolator_1_Update_mDECC3AC6FA3912CEFFA9A93770AD98907F555B55 (BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* __this, float ___deltaTime0, double ___renderTime1, double ___serverTime2, const RuntimeMethod* method)
{
	return ((  float (*) (BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964*, float, double, double, const RuntimeMethod*))BufferedLinearInterpolator_1_Update_mDECC3AC6FA3912CEFFA9A93770AD98907F555B55_gshared)(__this, ___deltaTime0, ___renderTime1, ___serverTime2, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>>::MoveNext()
inline bool Enumerator_MoveNext_m9995BC21C373E73740B6E320B559010C357248C2 (Enumerator_t8476784130A98A43A4B6C984AF72ADC69E01F56D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8476784130A98A43A4B6C984AF72ADC69E01F56D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T Unity.Netcode.BufferedLinearInterpolator`1<UnityEngine.Quaternion>::Update(System.Single,System.Double,System.Double)
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BufferedLinearInterpolator_1_Update_m651EFF6DFA7629076051163CCEBFA16AE3BF9758 (BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B* __this, float ___deltaTime0, double ___renderTime1, double ___serverTime2, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B*, float, double, double, const RuntimeMethod*))BufferedLinearInterpolator_1_Update_m651EFF6DFA7629076051163CCEBFA16AE3BF9758_gshared)(__this, ___deltaTime0, ___renderTime1, ___serverTime2, method);
}
// System.Void Unity.Netcode.Components.NetworkTransform::TryCommitValuesToServer(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_TryCommitValuesToServer_m0A76F11CA0211F44B6C7CDA122078AE0B35E5A06 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale2, double ___dirtyTime3, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkVariable`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::.ctor(T)
inline void NetworkVariable_1__ctor_mBF40D1D921E135A48CD6178E8F6A0A9B5CF34298 (NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___value0, const RuntimeMethod* method)
{
	((  void (*) (NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9*, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0, const RuntimeMethod*))NetworkVariable_1__ctor_mBF40D1D921E135A48CD6178E8F6A0A9B5CF34298_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Netcode.BufferedLinearInterpolator`1<System.Single>>::.ctor(System.Int32)
inline void List_1__ctor_m34B8B3DE604987BC1B39961DCE4065FCE1F7562A (List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void Unity.Netcode.Components.NetworkTransform::CommitTransformServerRpc(Unity.Netcode.Components.NetworkTransform/NetworkTransformState,Unity.Netcode.ServerRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_CommitTransformServerRpc_mFB5EC47FDDCF80B89F8A90F0634BA0E141AAF60D (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___networkState0, ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___serverParams1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::ReadNetworkSerializable<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>(T&)
inline void FastBufferReader_ReadNetworkSerializable_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_mF26F3155045A53BCCD398F3019FAC3340EDFE982 (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*, const RuntimeMethod*))FastBufferReader_ReadNetworkSerializable_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_mF26F3155045A53BCCD398F3019FAC3340EDFE982_gshared)(__this, ___value0, method);
}
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe<UnityEngine.Vector3>(T&)
inline void FastBufferReader_ReadValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3BD7AB5985FCF1E3C818E0F32ABD84706A53BC07_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))FastBufferReader_ReadValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3BD7AB5985FCF1E3C818E0F32ABD84706A53BC07_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Netcode.FastBufferReader::ReadValueSafe<UnityEngine.Quaternion>(T&)
inline void FastBufferReader_ReadValueSafe_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m65D5B17C9E42897A683FC7E5D8E65D5BEBA103C5_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value0, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, const RuntimeMethod*))FastBufferReader_ReadValueSafe_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m65D5B17C9E42897A683FC7E5D8E65D5BEBA103C5_gshared_inline)(__this, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasRotAngleX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasRotAngleX_m1C906A4534F5AF8B6648B87FB651D799E9818E81 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasRotAngleY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasRotAngleY_m725B8770DD0AB539D53748D175EC57D5C3ECB5EC (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasRotAngleZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasRotAngleZ_m0E8B47FF7B00F0AF937652726E9B3D47CBA254FE (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Int32 Unity.Netcode.FastBufferWriter::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.BytePacker::WriteUInt32Packed(Unity.Netcode.FastBufferWriter,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BytePacker_WriteUInt32Packed_mCAA2D429DC2E601669A6F8A34384F4AE06241A1F (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint32_t ___value1, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.ByteUnpacker::ReadUInt32Packed(Unity.Netcode.FastBufferReader,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteUnpacker_ReadUInt32Packed_mD21C95CCB8A42C0E2FFF73A0722DDA545A272282 (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___reader0, uint32_t* ___value1, const RuntimeMethod* method) ;
// System.Int64 Unity.Netcode.Arithmetic::ZigZagDecode(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Arithmetic_ZigZagDecode_m25A4918E5A6C2EFA14047C49C3ACFF68FA12FB3C (uint64_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.FastBufferWriter::TryBeginWriteInternal(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWriteInternal_m9DD6CDBDC49E5AF7A760EA05882BE4F52BEA1883_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___bytes0, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.FastBufferReader::TryBeginReadInternal(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginReadInternal_m5C597FDF5DF8DA7AE28A0A441AF6542DD05B05B1_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, int32_t ___bytes0, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::Grow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Grow_mAD43637D60A44A3D7DCEB09D0425822F6C2A23FB (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___additionalSizeRequired0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void <Module>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModuleU3E__cctor_m569BF63839A49900A3B30FAC9BD9D45C010DD1F1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkVariableHelper_InitializeDelegates_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_m7640E43355A3FD97ACAAD486B5F467AED8351F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkVariableHelper_InitializeDelegates_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_mC8F872902CFE4C2D6824709934FD86F65D69F691_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkVariableHelper_InitializeDelegates_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m4F73BA15E594F6A99C1D094A00FAB8BD2F478C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkVariableHelper_InitializeDelegates_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_m445C118168A0AA8920F7E2EC33D68FF5BEC5D20D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetworkVariableHelper_InitializeDelegates_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_m7640E43355A3FD97ACAAD486B5F467AED8351F4B(NetworkVariableHelper_InitializeDelegates_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_m7640E43355A3FD97ACAAD486B5F467AED8351F4B_RuntimeMethod_var);
		NetworkVariableHelper_InitializeDelegates_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_mC8F872902CFE4C2D6824709934FD86F65D69F691(NetworkVariableHelper_InitializeDelegates_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_mC8F872902CFE4C2D6824709934FD86F65D69F691_RuntimeMethod_var);
		NetworkVariableHelper_InitializeDelegates_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m4F73BA15E594F6A99C1D094A00FAB8BD2F478C65(NetworkVariableHelper_InitializeDelegates_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m4F73BA15E594F6A99C1D094A00FAB8BD2F478C65_RuntimeMethod_var);
		NetworkVariableHelper_InitializeDelegates_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_m445C118168A0AA8920F7E2EC33D68FF5BEC5D20D(NetworkVariableHelper_InitializeDelegates_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_m445C118168A0AA8920F7E2EC33D68FF5BEC5D20D_RuntimeMethod_var);
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
// System.Single Unity.Netcode.BufferedLinearInterpolatorFloat::InterpolateUnclamped(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BufferedLinearInterpolatorFloat_InterpolateUnclamped_m46BFD3F570015B1AF2E7B23DC2B584B54CE019D7 (BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524* __this, float ___start0, float ___end1, float ___time2, const RuntimeMethod* method) 
{
	{
		// return Mathf.LerpUnclamped(start, end, time);
		float L_0 = ___start0;
		float L_1 = ___end1;
		float L_2 = ___time2;
		float L_3;
		L_3 = Mathf_LerpUnclamped_mF5A9A9AC62D7BAD992CEAB2E5B6A49F5D2B87700_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Single Unity.Netcode.BufferedLinearInterpolatorFloat::Interpolate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BufferedLinearInterpolatorFloat_Interpolate_m3F99A060458073F922BB4898C97F78DBC554FF85 (BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524* __this, float ___start0, float ___end1, float ___time2, const RuntimeMethod* method) 
{
	{
		// return Mathf.Lerp(start, end, time);
		float L_0 = ___start0;
		float L_1 = ___end1;
		float L_2 = ___time2;
		float L_3;
		L_3 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void Unity.Netcode.BufferedLinearInterpolatorFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolatorFloat__ctor_m694812EACC50BDD059E307A466E725E007AA6636 (BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1__ctor_mE66736084A3316EE84A37C67519971E73EBB6BF3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BufferedLinearInterpolator_1__ctor_mE66736084A3316EE84A37C67519971E73EBB6BF3(__this, BufferedLinearInterpolator_1__ctor_mE66736084A3316EE84A37C67519971E73EBB6BF3_RuntimeMethod_var);
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
// UnityEngine.Quaternion Unity.Netcode.BufferedLinearInterpolatorQuaternion::InterpolateUnclamped(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BufferedLinearInterpolatorQuaternion_InterpolateUnclamped_mAFC0F1D67F0F8F0BAD3A729DE2CB6CD1CF40556D (BufferedLinearInterpolatorQuaternion_t33BA43A1A51A5C5000D00054578ECAAC53A2A516* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___start0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___end1, float ___time2, const RuntimeMethod* method) 
{
	{
		// return Quaternion.SlerpUnclamped(start, end, time);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___start0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___end1;
		float L_2 = ___time2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_SlerpUnclamped_mB38920352A1B11369D782F78E183568CAFA82C0F(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Quaternion Unity.Netcode.BufferedLinearInterpolatorQuaternion::Interpolate(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BufferedLinearInterpolatorQuaternion_Interpolate_m3E20D3C75C1DDB3F7AE39095A0A9D9133612B665 (BufferedLinearInterpolatorQuaternion_t33BA43A1A51A5C5000D00054578ECAAC53A2A516* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___start0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___end1, float ___time2, const RuntimeMethod* method) 
{
	{
		// return Quaternion.SlerpUnclamped(start, end, time);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___start0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___end1;
		float L_2 = ___time2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_SlerpUnclamped_mB38920352A1B11369D782F78E183568CAFA82C0F(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void Unity.Netcode.BufferedLinearInterpolatorQuaternion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedLinearInterpolatorQuaternion__ctor_mD62ACE4858EF30ABDBB945CA521DF5B71A381152 (BufferedLinearInterpolatorQuaternion_t33BA43A1A51A5C5000D00054578ECAAC53A2A516* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1__ctor_mA0BC7D92ED97EFD8935D9E06FB9B9A1450C665EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BufferedLinearInterpolator_1__ctor_mA0BC7D92ED97EFD8935D9E06FB9B9A1450C665EA(__this, BufferedLinearInterpolator_1__ctor_mA0BC7D92ED97EFD8935D9E06FB9B9A1450C665EA_RuntimeMethod_var);
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
// UnityEngine.Animator Unity.Netcode.Components.NetworkAnimator::get_Animator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* NetworkAnimator_get_Animator_m938DC1483338D629125D2CFFE6AB5ECF1AD7EF5D (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Animator; }
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___m_Animator_14;
		return L_0;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::set_Animator(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_set_Animator_mE4F1070B36B9377BF3929820F277CAB2222AE6C3 (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___value0, const RuntimeMethod* method) 
{
	{
		// m_Animator = value;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = ___value0;
		__this->___m_Animator_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Animator_14), (void*)L_0);
		// ResetParameterOptions();
		NetworkAnimator_ResetParameterOptions_m331A8C73B6D106337D06E5F27B03804BDE483E2A(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::SetParameterAutoSend(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_SetParameterAutoSend_mEB8C58DF3DE3007073ECF09B08F0DB091CDF9EB6 (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method) 
{
	{
		// if (value)
		bool L_0 = ___value1;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// m_ParameterSendBits |= (uint)(1 << index);
		uint32_t L_1 = __this->___m_ParameterSendBits_15;
		int32_t L_2 = ___index0;
		__this->___m_ParameterSendBits_15 = ((int32_t)((int32_t)L_1|((int32_t)(1<<((int32_t)(L_2&((int32_t)31)))))));
		return;
	}

IL_0017:
	{
		// m_ParameterSendBits &= (uint)(~(1 << index));
		uint32_t L_3 = __this->___m_ParameterSendBits_15;
		int32_t L_4 = ___index0;
		__this->___m_ParameterSendBits_15 = ((int32_t)((int32_t)L_3&((~((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))));
		// }
		return;
	}
}
// System.Boolean Unity.Netcode.Components.NetworkAnimator::GetParameterAutoSend(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkAnimator_GetParameterAutoSend_m7759306BEE1DD8C44AEBD5E8E3FEEA3FA8133280 (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// return (m_ParameterSendBits & (uint)(1 << index)) != 0;
		uint32_t L_0 = __this->___m_ParameterSendBits_15;
		int32_t L_1 = ___index0;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)(1<<((int32_t)(L_1&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Int32 Unity.Netcode.Components.NetworkAnimator::get_AnimationHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkAnimator_get_AnimationHash_mB338778F18E67834D12D3503D283751CEA09B6DA (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, const RuntimeMethod* method) 
{
	{
		// public int AnimationHash { get => m_AnimationHash; }
		int32_t L_0 = __this->___m_AnimationHash_20;
		return L_0;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::ResetParameterOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_ResetParameterOptions_m331A8C73B6D106337D06E5F27B03804BDE483E2A (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF020DE21552295E96B1B430C34DE4C27171891D1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (NetworkLog.CurrentLogLevel <= LogLevel.Developer)
		int32_t L_0;
		L_0 = NetworkLog_get_CurrentLogLevel_m1A75EDDFE364E7C4969E362A8AF3F43F451EAE64(NULL);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		// NetworkLog.LogInfoServer("ResetParameterOptions");
		NetworkLog_LogInfoServer_mAAFDA58F3BA5689EDC65C2EA144EA27CF5143DCA(_stringLiteralF020DE21552295E96B1B430C34DE4C27171891D1, NULL);
	}

IL_0012:
	{
		// m_ParameterSendBits = 0;
		__this->___m_ParameterSendBits_15 = 0;
		// }
		return;
	}
}
// System.Boolean Unity.Netcode.Components.NetworkAnimator::get_sendMessagesAllowed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkAnimator_get_sendMessagesAllowed_mBDFA350C7E37E3B0DA7386CF92862C4DC6C5019C (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, const RuntimeMethod* method) 
{
	{
		// return IsServer && NetworkObject.IsSpawned;
		bool L_0;
		L_0 = NetworkBehaviour_get_IsServer_m57CCCE498593E3A21E6B952AB9C4BAA482EB4CD6(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* L_1;
		L_1 = NetworkBehaviour_get_NetworkObject_m5B4FBD71361ED0640492D6AAB454C393E8394224(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = NetworkObject_get_IsSpawned_mDAF52C8099FE7F21C7AFF36622F74688E9E07CDA_inline(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_OnDestroy_m1935A887F4B47E4E0EFBAB888BD4613654C3D637 (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m83B130C74A2A448FE48B0017E6115CD5E223885D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_m0F1A77B518FF3B6029AC04F9B31930365D14D5C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CachedAnimatorParameters.IsCreated)
		NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA* L_0 = (&__this->___m_CachedAnimatorParameters_22);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m0F1A77B518FF3B6029AC04F9B31930365D14D5C3(L_0, NativeArray_1_get_IsCreated_m0F1A77B518FF3B6029AC04F9B31930365D14D5C3_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// m_CachedAnimatorParameters.Dispose();
		NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA* L_2 = (&__this->___m_CachedAnimatorParameters_22);
		NativeArray_1_Dispose_m83B130C74A2A448FE48B0017E6115CD5E223885D(L_2, NativeArray_1_Dispose_m83B130C74A2A448FE48B0017E6115CD5E223885D_RuntimeMethod_var);
	}

IL_0018:
	{
		// m_ParameterWriter.Dispose();
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_3 = (&__this->___m_ParameterWriter_21);
		FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE(L_3, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::OnNetworkSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_OnNetworkSpawn_m753EF78D7EAD8EBABBD3574C4865355411603DCF (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mE64EC0071C08805771A6A9E7AFDAD4E7DF0362E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_t2AD68F1C718AFCCBF9CF62AEBEAD0439276E4E6E_m0342CC99129F356D8D8A3E08D40C0E5DF1DCABB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3DC6740E537B2EA979655D20EBEF3ED1A0DB1A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22615F03667154E3694602654C53574FE60392F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCC82D066EA98DE5D307EBCDB576FD5EE6DFCEEC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* V_0 = NULL;
	int32_t V_1 = 0;
	AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* V_2 = NULL;
	AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	{
		// var parameters = m_Animator.parameters;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___m_Animator_14;
		NullCheck(L_0);
		AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* L_1;
		L_1 = Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B(L_0, NULL);
		V_0 = L_1;
		// m_CachedAnimatorParameters = new NativeArray<AnimatorParamCache>(parameters.Length, Allocator.Persistent);
		AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* L_2 = V_0;
		NullCheck(L_2);
		NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeArray_1__ctor_mE64EC0071C08805771A6A9E7AFDAD4E7DF0362E4((&L_3), ((int32_t)(((RuntimeArray*)L_2)->max_length)), 4, 1, /*hidden argument*/NativeArray_1__ctor_mE64EC0071C08805771A6A9E7AFDAD4E7DF0362E4_RuntimeMethod_var);
		__this->___m_CachedAnimatorParameters_22 = L_3;
		// m_AnimationHash = -1;
		__this->___m_AnimationHash_20 = (-1);
		// for (var i = 0; i < parameters.Length; i++)
		V_1 = 0;
		goto IL_0121;
	}

IL_002a:
	{
		// var parameter = parameters[i];
		AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		// if (m_Animator.IsParameterControlledByCurve(parameter.nameHash))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___m_Animator_14;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = AnimatorControllerParameter_get_nameHash_m92DA605E70604B1BBFD5EA5AE0CD0311F21400EE(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = Animator_IsParameterControlledByCurve_mE62E4CAE2725D8AD214D59FF459F63157818C7DF(L_8, L_10, NULL);
		if (L_11)
		{
			goto IL_011d;
		}
	}
	{
		// var cacheParam = new AnimatorParamCache();
		il2cpp_codegen_initobj((&V_3), sizeof(AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F));
		// cacheParam.Type = UnsafeUtility.EnumToInt(parameter.type);
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = AnimatorControllerParameter_get_type_mACEB110E346B27168F177E7A909CFB8586A2B966(L_12, NULL);
		int32_t L_14;
		L_14 = UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_t2AD68F1C718AFCCBF9CF62AEBEAD0439276E4E6E_m0342CC99129F356D8D8A3E08D40C0E5DF1DCABB1(L_13, UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_t2AD68F1C718AFCCBF9CF62AEBEAD0439276E4E6E_m0342CC99129F356D8D8A3E08D40C0E5DF1DCABB1_RuntimeMethod_var);
		(&V_3)->___Type_1 = L_14;
		// cacheParam.Hash = parameter.nameHash;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = AnimatorControllerParameter_get_nameHash_m92DA605E70604B1BBFD5EA5AE0CD0311F21400EE(L_15, NULL);
		(&V_3)->___Hash_0 = L_16;
		// switch (parameter.type)
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = AnimatorControllerParameter_get_type_mACEB110E346B27168F177E7A909CFB8586A2B966(L_17, NULL);
		V_7 = L_18;
		int32_t L_19 = V_7;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_19, 1)))
		{
			case 0:
			{
				goto IL_0094;
			}
			case 1:
			{
				goto IL_0110;
			}
			case 2:
			{
				goto IL_00be;
			}
			case 3:
			{
				goto IL_00e8;
			}
		}
	}
	{
		int32_t L_20 = V_7;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)9))))
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0110;
	}

IL_0094:
	{
		// var value = m_Animator.GetFloat(cacheParam.Hash);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21 = __this->___m_Animator_14;
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F L_22 = V_3;
		int32_t L_23 = L_22.___Hash_0;
		NullCheck(L_21);
		float L_24;
		L_24 = Animator_GetFloat_mEFA968AD9EEB92E6A03AEEB968600798E61F9B1D(L_21, L_23, NULL);
		V_4 = L_24;
		// UnsafeUtility.WriteArrayElement(cacheParam.Value, 0, value);
		U3CValueU3Ee__FixedBuffer_t8DB4126BBB87BAC82AD01EF4E31AB5612713F8A2* L_25 = (&(&V_3)->___Value_2);
		uint8_t* L_26 = (&L_25->___FixedElementField_0);
		float L_27 = V_4;
		UnsafeUtility_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCC82D066EA98DE5D307EBCDB576FD5EE6DFCEEC9((void*)((uintptr_t)L_26), 0, L_27, UnsafeUtility_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCC82D066EA98DE5D307EBCDB576FD5EE6DFCEEC9_RuntimeMethod_var);
		// break;
		goto IL_0110;
	}

IL_00be:
	{
		// var valueInt = m_Animator.GetInteger(cacheParam.Hash);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_28 = __this->___m_Animator_14;
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F L_29 = V_3;
		int32_t L_30 = L_29.___Hash_0;
		NullCheck(L_28);
		int32_t L_31;
		L_31 = Animator_GetInteger_mF4E1564D3791C968FA8952954B5AAC4C4E2C8B91(L_28, L_30, NULL);
		V_5 = L_31;
		// UnsafeUtility.WriteArrayElement(cacheParam.Value, 0, valueInt);
		U3CValueU3Ee__FixedBuffer_t8DB4126BBB87BAC82AD01EF4E31AB5612713F8A2* L_32 = (&(&V_3)->___Value_2);
		uint8_t* L_33 = (&L_32->___FixedElementField_0);
		int32_t L_34 = V_5;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22615F03667154E3694602654C53574FE60392F0((void*)((uintptr_t)L_33), 0, L_34, UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22615F03667154E3694602654C53574FE60392F0_RuntimeMethod_var);
		// break;
		goto IL_0110;
	}

IL_00e8:
	{
		// var valueBool = m_Animator.GetBool(cacheParam.Hash);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_35 = __this->___m_Animator_14;
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F L_36 = V_3;
		int32_t L_37 = L_36.___Hash_0;
		NullCheck(L_35);
		bool L_38;
		L_38 = Animator_GetBool_mFEC9C0565C52965FBD5D6A02084484F00F8ECE2C(L_35, L_37, NULL);
		V_6 = L_38;
		// UnsafeUtility.WriteArrayElement(cacheParam.Value, 0, valueBool);
		U3CValueU3Ee__FixedBuffer_t8DB4126BBB87BAC82AD01EF4E31AB5612713F8A2* L_39 = (&(&V_3)->___Value_2);
		uint8_t* L_40 = (&L_39->___FixedElementField_0);
		bool L_41 = V_6;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3DC6740E537B2EA979655D20EBEF3ED1A0DB1A29((void*)((uintptr_t)L_40), 0, L_41, UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3DC6740E537B2EA979655D20EBEF3ED1A0DB1A29_RuntimeMethod_var);
	}

IL_0110:
	{
		// m_CachedAnimatorParameters[i] = cacheParam;
		NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA* L_42 = (&__this->___m_CachedAnimatorParameters_22);
		int32_t L_43 = V_1;
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F L_44 = V_3;
		IL2CPP_NATIVEARRAY_SET_ITEM(AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F, (L_42)->___m_Buffer_0, L_43, (L_44));
	}

IL_011d:
	{
		// for (var i = 0; i < parameters.Length; i++)
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0121:
	{
		// for (var i = 0; i < parameters.Length; i++)
		int32_t L_46 = V_1;
		AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* L_47 = V_0;
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))
		{
			goto IL_002a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_FixedUpdate_m26A640CECB4B913CD352413A81D27F7B612945FC (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!sendMessagesAllowed)
		bool L_0;
		L_0 = NetworkAnimator_get_sendMessagesAllowed_mBDFA350C7E37E3B0DA7386CF92862C4DC6C5019C(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (!CheckAnimStateChanged(out stateHash, out normalizedTime))
		bool L_1;
		L_1 = NetworkAnimator_CheckAnimStateChanged_m27C178D6FEF7CDEC15C40428FBC5EA6763B6F147(__this, (&V_0), (&V_1), NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// CheckAndSend();
		NetworkAnimator_CheckAndSend_m6EA32E824B76C8C6FCFC9F28DD499998F8542236(__this, NULL);
		// return;
		return;
	}

IL_001c:
	{
		// var animMsg = new AnimationMessage();
		il2cpp_codegen_initobj((&V_2), sizeof(AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26));
		// animMsg.StateHash = stateHash;
		int32_t L_2 = V_0;
		(&V_2)->___StateHash_0 = L_2;
		// animMsg.NormalizedTime = normalizedTime;
		float L_3 = V_1;
		(&V_2)->___NormalizedTime_1 = L_3;
		// m_ParameterWriter.Seek(0);
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_4 = (&__this->___m_ParameterWriter_21);
		FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_4, 0, NULL);
		// m_ParameterWriter.Truncate();
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_5 = (&__this->___m_ParameterWriter_21);
		FastBufferWriter_Truncate_m37769BA69463FC89CF72E53994AC55508087D7C5_inline(L_5, (-1), NULL);
		// WriteParameters(m_ParameterWriter, false);
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_6 = __this->___m_ParameterWriter_21;
		bool L_7;
		L_7 = NetworkAnimator_WriteParameters_mFA8B5C2533EF76E1E40E0EA2E9894E30A7DF4A32(__this, L_6, (bool)0, NULL);
		// animMsg.Parameters = m_ParameterWriter.ToArray();
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_8 = (&__this->___m_ParameterWriter_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = FastBufferWriter_ToArray_mC3A2B1C0D9DD5C11E08A371C70E600FC771B2E67_inline(L_8, NULL);
		(&V_2)->___Parameters_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___Parameters_2), (void*)L_9);
		// SendAnimStateClientRpc(animMsg);
		AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 L_10 = V_2;
		il2cpp_codegen_initobj((&V_3), sizeof(ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9));
		ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 L_11 = V_3;
		NetworkAnimator_SendAnimStateClientRpc_mBF1048F721CFC149950A231ED4BC6083EA8EB75E(__this, L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::CheckAndSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_CheckAndSend_m6EA32E824B76C8C6FCFC9F28DD499998F8542236 (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A V_2;
	memset((&V_2), 0, sizeof(V_2));
	AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A V_3;
	memset((&V_3), 0, sizeof(V_3));
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var networkTime = NetworkManager.ServerTime.Time;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(__this, NULL);
		NullCheck(L_0);
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_1;
		L_1 = NetworkManager_get_ServerTime_m1EB06367487A361578137D4E2D13917F86DDA471(L_0, NULL);
		V_1 = L_1;
		double L_2;
		L_2 = NetworkTime_get_Time_mDC7F8AB78A0D860B5D3BF62AF1E42724059F690B_inline((&V_1), NULL);
		V_0 = L_2;
		// if (sendMessagesAllowed && m_SendRate != 0 && m_NextSendTime < networkTime)
		bool L_3;
		L_3 = NetworkAnimator_get_sendMessagesAllowed_mBDFA350C7E37E3B0DA7386CF92862C4DC6C5019C(__this, NULL);
		if (!L_3)
		{
			goto IL_0095;
		}
	}
	{
		float L_4 = __this->___m_SendRate_16;
		if ((((float)L_4) == ((float)(0.0f))))
		{
			goto IL_0095;
		}
	}
	{
		double L_5 = __this->___m_NextSendTime_19;
		double L_6 = V_0;
		if ((!(((double)L_5) < ((double)L_6))))
		{
			goto IL_0095;
		}
	}
	{
		// m_NextSendTime = networkTime + m_SendRate;
		double L_7 = V_0;
		float L_8 = __this->___m_SendRate_16;
		__this->___m_NextSendTime_19 = ((double)il2cpp_codegen_add(L_7, ((double)L_8)));
		// m_ParameterWriter.Seek(0);
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_9 = (&__this->___m_ParameterWriter_21);
		FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline(L_9, 0, NULL);
		// m_ParameterWriter.Truncate();
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_10 = (&__this->___m_ParameterWriter_21);
		FastBufferWriter_Truncate_m37769BA69463FC89CF72E53994AC55508087D7C5_inline(L_10, (-1), NULL);
		// if (WriteParameters(m_ParameterWriter, true))
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_11 = __this->___m_ParameterWriter_21;
		bool L_12;
		L_12 = NetworkAnimator_WriteParameters_mFA8B5C2533EF76E1E40E0EA2E9894E30A7DF4A32(__this, L_11, (bool)1, NULL);
		if (!L_12)
		{
			goto IL_0095;
		}
	}
	{
		// var animMsg = new AnimationParametersMessage()
		// {
		//     Parameters = m_ParameterWriter.ToArray()
		// };
		il2cpp_codegen_initobj((&V_3), sizeof(AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A));
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* L_13 = (&__this->___m_ParameterWriter_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = FastBufferWriter_ToArray_mC3A2B1C0D9DD5C11E08A371C70E600FC771B2E67_inline(L_13, NULL);
		(&V_3)->___Parameters_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___Parameters_0), (void*)L_14);
		AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A L_15 = V_3;
		V_2 = L_15;
		// SendParamsClientRpc(animMsg);
		AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A L_16 = V_2;
		il2cpp_codegen_initobj((&V_4), sizeof(ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9));
		ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 L_17 = V_4;
		NetworkAnimator_SendParamsClientRpc_mA2953500C5E3CE1D39F7010D5D2BF7767EA77AAA(__this, L_16, L_17, NULL);
	}

IL_0095:
	{
		// }
		return;
	}
}
// System.Boolean Unity.Netcode.Components.NetworkAnimator::CheckAnimStateChanged(System.Int32&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkAnimator_CheckAnimStateChanged_m27C178D6FEF7CDEC15C40428FBC5EA6763B6F147 (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, int32_t* ___stateHash0, float* ___normalizedTime1, const RuntimeMethod* method) 
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// stateHash = 0;
		int32_t* L_0 = ___stateHash0;
		*((int32_t*)L_0) = (int32_t)0;
		// normalizedTime = 0;
		float* L_1 = ___normalizedTime1;
		*((float*)L_1) = (float)(0.0f);
		// if (m_Animator.IsInTransition(0))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___m_Animator_14;
		NullCheck(L_2);
		bool L_3;
		L_3 = Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830(L_2, 0, NULL);
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		// AnimatorTransitionInfo tt = m_Animator.GetAnimatorTransitionInfo(0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___m_Animator_14;
		NullCheck(L_4);
		AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD L_5;
		L_5 = Animator_GetAnimatorTransitionInfo_mAB532C0834DEF3685C6E16C82B7A93B8875FC542(L_4, 0, NULL);
		V_1 = L_5;
		// if (tt.fullPathHash != m_TransitionHash)
		int32_t L_6;
		L_6 = AnimatorTransitionInfo_get_fullPathHash_m3C358272C30F5AAE76547585AA6C3D866F6F77AE((&V_1), NULL);
		int32_t L_7 = __this->___m_TransitionHash_18;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_004a;
		}
	}
	{
		// m_TransitionHash = tt.fullPathHash;
		int32_t L_8;
		L_8 = AnimatorTransitionInfo_get_fullPathHash_m3C358272C30F5AAE76547585AA6C3D866F6F77AE((&V_1), NULL);
		__this->___m_TransitionHash_18 = L_8;
		// m_AnimationHash = 0;
		__this->___m_AnimationHash_20 = 0;
		// return true;
		return (bool)1;
	}

IL_004a:
	{
		// return false;
		return (bool)0;
	}

IL_004c:
	{
		// AnimatorStateInfo st = m_Animator.GetCurrentAnimatorStateInfo(0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = __this->___m_Animator_14;
		NullCheck(L_9);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_10;
		L_10 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_9, 0, NULL);
		V_0 = L_10;
		// if (st.fullPathHash != m_AnimationHash)
		int32_t L_11;
		L_11 = AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F((&V_0), NULL);
		int32_t L_12 = __this->___m_AnimationHash_20;
		if ((((int32_t)L_11) == ((int32_t)L_12)))
		{
			goto IL_0098;
		}
	}
	{
		// if (m_AnimationHash != 0)
		int32_t L_13 = __this->___m_AnimationHash_20;
		if (!L_13)
		{
			goto IL_0082;
		}
	}
	{
		// stateHash = st.fullPathHash;
		int32_t* L_14 = ___stateHash0;
		int32_t L_15;
		L_15 = AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F((&V_0), NULL);
		*((int32_t*)L_14) = (int32_t)L_15;
		// normalizedTime = st.normalizedTime;
		float* L_16 = ___normalizedTime1;
		float L_17;
		L_17 = AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6((&V_0), NULL);
		*((float*)L_16) = (float)L_17;
	}

IL_0082:
	{
		// m_TransitionHash = 0;
		__this->___m_TransitionHash_18 = 0;
		// m_AnimationHash = st.fullPathHash;
		int32_t L_18;
		L_18 = AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F((&V_0), NULL);
		__this->___m_AnimationHash_20 = L_18;
		// return true;
		return (bool)1;
	}

IL_0098:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Netcode.Components.NetworkAnimator::WriteParameters(Unity.Netcode.FastBufferWriter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkAnimator_WriteParameters_mFA8B5C2533EF76E1E40E0EA2E9894E30A7DF4A32 (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, bool ___autoSend1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF1323B69B63D7207805FA651F0DDDB44C848B1B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC7B82585B9FE286D98075E718A95CD21D70180E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_mC3509D15EF631F1298D67639BE7F86AF1F2CDDD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_ArrayElementAsRef_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_m65A8930CB4E4BE8DA37FE6C27D40F1763DF732A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3DC6740E537B2EA979655D20EBEF3ED1A0DB1A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22615F03667154E3694602654C53574FE60392F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCC82D066EA98DE5D307EBCDB576FD5EE6DFCEEC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	void* V_4 = NULL;
	uint8_t* V_5 = NULL;
	bool V_6 = false;
	void* V_7 = NULL;
	float V_8 = 0.0f;
	void* V_9 = NULL;
	{
		// if (m_CachedAnimatorParameters == null)
		NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA L_0 = __this->___m_CachedAnimatorParameters_22;
		// for (int i = 0; i < m_CachedAnimatorParameters.Length; i++)
		V_0 = 0;
		goto IL_0109;
	}

IL_000e:
	{
		// if (autoSend && !GetParameterAutoSend(i))
		bool L_1 = ___autoSend1;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = V_0;
		bool L_3;
		L_3 = NetworkAnimator_GetParameterAutoSend_m7759306BEE1DD8C44AEBD5E8E3FEEA3FA8133280(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_0105;
		}
	}

IL_001d:
	{
		// ref var cacheValue = ref UnsafeUtility.ArrayElementAsRef<AnimatorParamCache>(m_CachedAnimatorParameters.GetUnsafePtr(), i);
		NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA L_4 = __this->___m_CachedAnimatorParameters_22;
		void* L_5;
		L_5 = NativeArrayUnsafeUtility_GetUnsafePtr_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_mC3509D15EF631F1298D67639BE7F86AF1F2CDDD4(L_4, NativeArrayUnsafeUtility_GetUnsafePtr_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_mC3509D15EF631F1298D67639BE7F86AF1F2CDDD4_RuntimeMethod_var);
		int32_t L_6 = V_0;
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* L_7;
		L_7 = UnsafeUtility_ArrayElementAsRef_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_m65A8930CB4E4BE8DA37FE6C27D40F1763DF732A9(L_5, L_6, UnsafeUtility_ArrayElementAsRef_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_m65A8930CB4E4BE8DA37FE6C27D40F1763DF732A9_RuntimeMethod_var);
		V_1 = L_7;
		// var hash = cacheValue.Hash;
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* L_8 = V_1;
		int32_t L_9 = L_8->___Hash_0;
		V_2 = L_9;
		// if (cacheValue.Type == AnimationParamEnumWrapper.AnimatorControllerParameterInt)
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* L_10 = V_1;
		int32_t L_11 = L_10->___Type_1;
		il2cpp_codegen_runtime_class_init_inline(AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_il2cpp_TypeInfo_var);
		int32_t L_12 = ((AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_StaticFields*)il2cpp_codegen_static_fields_for(AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_il2cpp_TypeInfo_var))->___AnimatorControllerParameterInt_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_007b;
		}
	}
	{
		// var valueInt = m_Animator.GetInteger(hash);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13 = __this->___m_Animator_14;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15;
		L_15 = Animator_GetInteger_mF4E1564D3791C968FA8952954B5AAC4C4E2C8B91(L_13, L_14, NULL);
		V_3 = L_15;
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* L_16 = V_1;
		U3CValueU3Ee__FixedBuffer_t8DB4126BBB87BAC82AD01EF4E31AB5612713F8A2* L_17 = (&L_16->___Value_2);
		uint8_t* L_18 = (&L_17->___FixedElementField_0);
		V_5 = L_18;
		// fixed (void* value = cacheValue.Value)
		uint8_t* L_19 = V_5;
		V_4 = (void*)((uintptr_t)L_19);
		// UnsafeUtility.WriteArrayElement(value, 0, valueInt);
		void* L_20 = V_4;
		int32_t L_21 = V_3;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22615F03667154E3694602654C53574FE60392F0(L_20, 0, L_21, UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22615F03667154E3694602654C53574FE60392F0_RuntimeMethod_var);
		// BytePacker.WriteValuePacked(writer, (uint)valueInt);
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_22 = ___writer0;
		int32_t L_23 = V_3;
		BytePacker_WriteValuePacked_m0D4AE5A133595B059C397DFD8A06D1C5679A10ED_inline(L_22, L_23, NULL);
		V_5 = (uint8_t*)((uintptr_t)0);
		goto IL_0105;
	}

IL_007b:
	{
		// else if (cacheValue.Type == AnimationParamEnumWrapper.AnimatorControllerParameterBool)
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* L_24 = V_1;
		int32_t L_25 = L_24->___Type_1;
		il2cpp_codegen_runtime_class_init_inline(AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_il2cpp_TypeInfo_var);
		int32_t L_26 = ((AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_StaticFields*)il2cpp_codegen_static_fields_for(AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_il2cpp_TypeInfo_var))->___AnimatorControllerParameterBool_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_00c1;
		}
	}
	{
		// var valueBool = m_Animator.GetBool(hash);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = __this->___m_Animator_14;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		bool L_29;
		L_29 = Animator_GetBool_mFEC9C0565C52965FBD5D6A02084484F00F8ECE2C(L_27, L_28, NULL);
		V_6 = L_29;
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* L_30 = V_1;
		U3CValueU3Ee__FixedBuffer_t8DB4126BBB87BAC82AD01EF4E31AB5612713F8A2* L_31 = (&L_30->___Value_2);
		uint8_t* L_32 = (&L_31->___FixedElementField_0);
		V_5 = L_32;
		// fixed (void* value = cacheValue.Value)
		uint8_t* L_33 = V_5;
		V_7 = (void*)((uintptr_t)L_33);
		// UnsafeUtility.WriteArrayElement(value, 0, valueBool);
		void* L_34 = V_7;
		bool L_35 = V_6;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3DC6740E537B2EA979655D20EBEF3ED1A0DB1A29(L_34, 0, L_35, UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3DC6740E537B2EA979655D20EBEF3ED1A0DB1A29_RuntimeMethod_var);
		// writer.WriteValueSafe(valueBool);
		FastBufferWriter_WriteValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF1323B69B63D7207805FA651F0DDDB44C848B1B8_inline((&___writer0), (&V_6), FastBufferWriter_WriteValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF1323B69B63D7207805FA651F0DDDB44C848B1B8_RuntimeMethod_var);
		V_5 = (uint8_t*)((uintptr_t)0);
		goto IL_0105;
	}

IL_00c1:
	{
		// else if (cacheValue.Type == AnimationParamEnumWrapper.AnimatorControllerParameterFloat)
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* L_36 = V_1;
		int32_t L_37 = L_36->___Type_1;
		il2cpp_codegen_runtime_class_init_inline(AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_il2cpp_TypeInfo_var);
		int32_t L_38 = ((AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_StaticFields*)il2cpp_codegen_static_fields_for(AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_il2cpp_TypeInfo_var))->___AnimatorControllerParameterFloat_1;
		if ((!(((uint32_t)L_37) == ((uint32_t)L_38))))
		{
			goto IL_0105;
		}
	}
	{
		// var valueFloat = m_Animator.GetFloat(hash);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_39 = __this->___m_Animator_14;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		float L_41;
		L_41 = Animator_GetFloat_mEFA968AD9EEB92E6A03AEEB968600798E61F9B1D(L_39, L_40, NULL);
		V_8 = L_41;
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* L_42 = V_1;
		U3CValueU3Ee__FixedBuffer_t8DB4126BBB87BAC82AD01EF4E31AB5612713F8A2* L_43 = (&L_42->___Value_2);
		uint8_t* L_44 = (&L_43->___FixedElementField_0);
		V_5 = L_44;
		// fixed (void* value = cacheValue.Value)
		uint8_t* L_45 = V_5;
		V_9 = (void*)((uintptr_t)L_45);
		// UnsafeUtility.WriteArrayElement(value, 0, valueFloat);
		void* L_46 = V_9;
		float L_47 = V_8;
		UnsafeUtility_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCC82D066EA98DE5D307EBCDB576FD5EE6DFCEEC9(L_46, 0, L_47, UnsafeUtility_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCC82D066EA98DE5D307EBCDB576FD5EE6DFCEEC9_RuntimeMethod_var);
		// writer.WriteValueSafe(valueFloat);
		FastBufferWriter_WriteValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC7B82585B9FE286D98075E718A95CD21D70180E4_inline((&___writer0), (&V_8), FastBufferWriter_WriteValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC7B82585B9FE286D98075E718A95CD21D70180E4_RuntimeMethod_var);
		V_5 = (uint8_t*)((uintptr_t)0);
	}

IL_0105:
	{
		// for (int i = 0; i < m_CachedAnimatorParameters.Length; i++)
		int32_t L_48 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0109:
	{
		// for (int i = 0; i < m_CachedAnimatorParameters.Length; i++)
		int32_t L_49 = V_0;
		NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA* L_50 = (&__this->___m_CachedAnimatorParameters_22);
		int32_t L_51;
		L_51 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_50)->___m_Length_1);
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_000e;
		}
	}
	{
		// return writer.Length > 0;
		int32_t L_52;
		L_52 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline((&___writer0), NULL);
		return (bool)((((int32_t)L_52) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::ReadParameters(Unity.Netcode.FastBufferReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_ReadParameters_m81D70BE256322547778017CFB4F619BFBECF5BEA (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___reader0, bool ___autoSend1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m66E2AA444E3D7FA5540201E563319F97DC0A2A40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCCC0AEC3625AD1F2B962276BCC40A93282FE7F49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_mC3509D15EF631F1298D67639BE7F86AF1F2CDDD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_ArrayElementAsRef_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_m65A8930CB4E4BE8DA37FE6C27D40F1763DF732A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3DC6740E537B2EA979655D20EBEF3ED1A0DB1A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22615F03667154E3694602654C53574FE60392F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCC82D066EA98DE5D307EBCDB576FD5EE6DFCEEC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	void* V_4 = NULL;
	uint8_t* V_5 = NULL;
	bool V_6 = false;
	void* V_7 = NULL;
	float V_8 = 0.0f;
	void* V_9 = NULL;
	{
		// if (m_CachedAnimatorParameters == null)
		NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA L_0 = __this->___m_CachedAnimatorParameters_22;
		// for (int i = 0; i < m_CachedAnimatorParameters.Length; i++)
		V_0 = 0;
		goto IL_010a;
	}

IL_000e:
	{
		// if (autoSend && !GetParameterAutoSend(i))
		bool L_1 = ___autoSend1;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = V_0;
		bool L_3;
		L_3 = NetworkAnimator_GetParameterAutoSend_m7759306BEE1DD8C44AEBD5E8E3FEEA3FA8133280(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_0106;
		}
	}

IL_001d:
	{
		// ref var cacheValue = ref UnsafeUtility.ArrayElementAsRef<AnimatorParamCache>(m_CachedAnimatorParameters.GetUnsafePtr(), i);
		NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA L_4 = __this->___m_CachedAnimatorParameters_22;
		void* L_5;
		L_5 = NativeArrayUnsafeUtility_GetUnsafePtr_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_mC3509D15EF631F1298D67639BE7F86AF1F2CDDD4(L_4, NativeArrayUnsafeUtility_GetUnsafePtr_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_mC3509D15EF631F1298D67639BE7F86AF1F2CDDD4_RuntimeMethod_var);
		int32_t L_6 = V_0;
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* L_7;
		L_7 = UnsafeUtility_ArrayElementAsRef_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_m65A8930CB4E4BE8DA37FE6C27D40F1763DF732A9(L_5, L_6, UnsafeUtility_ArrayElementAsRef_TisAnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F_m65A8930CB4E4BE8DA37FE6C27D40F1763DF732A9_RuntimeMethod_var);
		V_1 = L_7;
		// var hash = cacheValue.Hash;
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* L_8 = V_1;
		int32_t L_9 = L_8->___Hash_0;
		V_2 = L_9;
		// if (cacheValue.Type == AnimationParamEnumWrapper.AnimatorControllerParameterInt)
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* L_10 = V_1;
		int32_t L_11 = L_10->___Type_1;
		il2cpp_codegen_runtime_class_init_inline(AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_il2cpp_TypeInfo_var);
		int32_t L_12 = ((AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_StaticFields*)il2cpp_codegen_static_fields_for(AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_il2cpp_TypeInfo_var))->___AnimatorControllerParameterInt_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_007c;
		}
	}
	{
		// ByteUnpacker.ReadValuePacked(reader, out int newValue);
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_13 = ___reader0;
		ByteUnpacker_ReadValuePacked_m7A710DF5CB32B19D2256D9A7F44842F700D5FC46_inline(L_13, (&V_3), NULL);
		// m_Animator.SetInteger(hash, newValue);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = __this->___m_Animator_14;
		int32_t L_15 = V_2;
		int32_t L_16 = V_3;
		NullCheck(L_14);
		Animator_SetInteger_mE823EC7492A7FB266FA723C168226D17085DF3E8(L_14, L_15, L_16, NULL);
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* L_17 = V_1;
		U3CValueU3Ee__FixedBuffer_t8DB4126BBB87BAC82AD01EF4E31AB5612713F8A2* L_18 = (&L_17->___Value_2);
		uint8_t* L_19 = (&L_18->___FixedElementField_0);
		V_5 = L_19;
		// fixed (void* value = cacheValue.Value)
		uint8_t* L_20 = V_5;
		V_4 = (void*)((uintptr_t)L_20);
		// UnsafeUtility.WriteArrayElement(value, 0, newValue);
		void* L_21 = V_4;
		int32_t L_22 = V_3;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22615F03667154E3694602654C53574FE60392F0(L_21, 0, L_22, UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22615F03667154E3694602654C53574FE60392F0_RuntimeMethod_var);
		V_5 = (uint8_t*)((uintptr_t)0);
		goto IL_0106;
	}

IL_007c:
	{
		// else if (cacheValue.Type == AnimationParamEnumWrapper.AnimatorControllerParameterBool)
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* L_23 = V_1;
		int32_t L_24 = L_23->___Type_1;
		il2cpp_codegen_runtime_class_init_inline(AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_il2cpp_TypeInfo_var);
		int32_t L_25 = ((AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_StaticFields*)il2cpp_codegen_static_fields_for(AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_il2cpp_TypeInfo_var))->___AnimatorControllerParameterBool_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00c2;
		}
	}
	{
		// reader.ReadValueSafe(out bool newBoolValue);
		FastBufferReader_ReadValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m66E2AA444E3D7FA5540201E563319F97DC0A2A40_inline((&___reader0), (&V_6), FastBufferReader_ReadValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m66E2AA444E3D7FA5540201E563319F97DC0A2A40_RuntimeMethod_var);
		// m_Animator.SetBool(hash, newBoolValue);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_26 = __this->___m_Animator_14;
		int32_t L_27 = V_2;
		bool L_28 = V_6;
		NullCheck(L_26);
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_26, L_27, L_28, NULL);
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* L_29 = V_1;
		U3CValueU3Ee__FixedBuffer_t8DB4126BBB87BAC82AD01EF4E31AB5612713F8A2* L_30 = (&L_29->___Value_2);
		uint8_t* L_31 = (&L_30->___FixedElementField_0);
		V_5 = L_31;
		// fixed (void* value = cacheValue.Value)
		uint8_t* L_32 = V_5;
		V_7 = (void*)((uintptr_t)L_32);
		// UnsafeUtility.WriteArrayElement(value, 0, newBoolValue);
		void* L_33 = V_7;
		bool L_34 = V_6;
		UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3DC6740E537B2EA979655D20EBEF3ED1A0DB1A29(L_33, 0, L_34, UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m3DC6740E537B2EA979655D20EBEF3ED1A0DB1A29_RuntimeMethod_var);
		V_5 = (uint8_t*)((uintptr_t)0);
		goto IL_0106;
	}

IL_00c2:
	{
		// else if (cacheValue.Type == AnimationParamEnumWrapper.AnimatorControllerParameterFloat)
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* L_35 = V_1;
		int32_t L_36 = L_35->___Type_1;
		il2cpp_codegen_runtime_class_init_inline(AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_il2cpp_TypeInfo_var);
		int32_t L_37 = ((AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_StaticFields*)il2cpp_codegen_static_fields_for(AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_il2cpp_TypeInfo_var))->___AnimatorControllerParameterFloat_1;
		if ((!(((uint32_t)L_36) == ((uint32_t)L_37))))
		{
			goto IL_0106;
		}
	}
	{
		// reader.ReadValueSafe(out float newFloatValue);
		FastBufferReader_ReadValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCCC0AEC3625AD1F2B962276BCC40A93282FE7F49_inline((&___reader0), (&V_8), FastBufferReader_ReadValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCCC0AEC3625AD1F2B962276BCC40A93282FE7F49_RuntimeMethod_var);
		// m_Animator.SetFloat(hash, newFloatValue);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_38 = __this->___m_Animator_14;
		int32_t L_39 = V_2;
		float L_40 = V_8;
		NullCheck(L_38);
		Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5(L_38, L_39, L_40, NULL);
		AnimatorParamCache_t123EC70FDAF309B558891BE93EEDDC234492438F* L_41 = V_1;
		U3CValueU3Ee__FixedBuffer_t8DB4126BBB87BAC82AD01EF4E31AB5612713F8A2* L_42 = (&L_41->___Value_2);
		uint8_t* L_43 = (&L_42->___FixedElementField_0);
		V_5 = L_43;
		// fixed (void* value = cacheValue.Value)
		uint8_t* L_44 = V_5;
		V_9 = (void*)((uintptr_t)L_44);
		// UnsafeUtility.WriteArrayElement(value, 0, newFloatValue);
		void* L_45 = V_9;
		float L_46 = V_8;
		UnsafeUtility_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCC82D066EA98DE5D307EBCDB576FD5EE6DFCEEC9(L_45, 0, L_46, UnsafeUtility_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCC82D066EA98DE5D307EBCDB576FD5EE6DFCEEC9_RuntimeMethod_var);
		V_5 = (uint8_t*)((uintptr_t)0);
	}

IL_0106:
	{
		// for (int i = 0; i < m_CachedAnimatorParameters.Length; i++)
		int32_t L_47 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_010a:
	{
		// for (int i = 0; i < m_CachedAnimatorParameters.Length; i++)
		int32_t L_48 = V_0;
		NativeArray_1_t9EB6176F19F4C1CD58A2C270E2B06BD147E21FEA* L_49 = (&__this->___m_CachedAnimatorParameters_22);
		int32_t L_50;
		L_50 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_49)->___m_Length_1);
		if ((((int32_t)L_48) < ((int32_t)L_50)))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::SendParamsClientRpc(Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage,Unity.Netcode.ClientRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_SendParamsClientRpc_mA2953500C5E3CE1D39F7010D5D2BF7767EA77AAA (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A ___animSnapshot0, ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 ___clientRpcParams1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteNetworkSerializable_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_m3A3826C6506DC2C0FF61454A19C4A121C4E71FA9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 V_2;
	memset((&V_2), 0, sizeof(V_2));
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_3 = NULL;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(__this, NULL);
		V_3 = L_0;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1 = V_3;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_3;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		int32_t L_4 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)2)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_009d;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_5 = V_3;
		NullCheck(L_5);
		bool L_6;
		L_6 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_7 = V_3;
		NullCheck(L_7);
		bool L_8;
		L_8 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_7, NULL);
		if (!L_8)
		{
			goto IL_009d;
		}
	}

IL_0058:
	{
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_4), ((int32_t)1285), 2, ((int32_t)63985), NULL);
		FastBufferWriter_WriteNetworkSerializable_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_m3A3826C6506DC2C0FF61454A19C4A121C4E71FA9((&V_4), (&___animSnapshot0), FastBufferWriter_WriteNetworkSerializable_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_m3A3826C6506DC2C0FF61454A19C4A121C4E71FA9_RuntimeMethod_var);
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_4;
		ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 L_10 = ___clientRpcParams1;
		NetworkBehaviour___sendClientRpc_m78D490ECE88AD695DC50B8195719FAC5E488E07B(__this, L_9, ((int32_t)1675020617), L_10, ((int32_t)0), NULL);
		FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_4), NULL);
	}

IL_009d:
	{
		int32_t L_11 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)L_11) == ((int32_t)((int32_t)2)))? 1 : 0))
		{
			goto IL_00cc;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_12 = V_3;
		NullCheck(L_12);
		bool L_13;
		L_13 = NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline(L_12, NULL);
		if (L_13)
		{
			goto IL_00cd;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_14 = V_3;
		NullCheck(L_14);
		bool L_15;
		L_15 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_14, NULL);
		if (L_15)
		{
			goto IL_00cd;
		}
	}

IL_00cc:
	{
		return;
	}

IL_00cd:
	{
		// if (animSnapshot.Parameters != null)
		AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A L_16 = ___animSnapshot0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16.___Parameters_0;
		if (!L_17)
		{
			goto IL_010f;
		}
	}
	{
		// fixed (byte* parameters = animSnapshot.Parameters)
		AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A L_18 = ___animSnapshot0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = L_18.___Parameters_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = L_19;
		V_1 = L_20;
		if (!L_20)
		{
			goto IL_00e5;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_1;
		NullCheck(L_21);
		if (((int32_t)(((RuntimeArray*)L_21)->max_length)))
		{
			goto IL_00ea;
		}
	}

IL_00e5:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_00f3;
	}

IL_00ea:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_1;
		NullCheck(L_22);
		V_0 = (uint8_t*)((uintptr_t)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_00f3:
	{
		// var reader = new FastBufferReader(parameters, Allocator.None, animSnapshot.Parameters.Length);
		uint8_t* L_23 = V_0;
		AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A L_24 = ___animSnapshot0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = L_24.___Parameters_0;
		NullCheck(L_25);
		FastBufferReader__ctor_mE38754ABA3478570D1E05407E02FDD418AF676BC((&V_2), L_23, 1, ((int32_t)(((RuntimeArray*)L_25)->max_length)), 0, NULL);
		// ReadParameters(reader, true);
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_26 = V_2;
		NetworkAnimator_ReadParameters_m81D70BE256322547778017CFB4F619BFBECF5BEA(__this, L_26, (bool)1, NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_010f:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::SendAnimStateClientRpc(Unity.Netcode.Components.NetworkAnimator/AnimationMessage,Unity.Netcode.ClientRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_SendAnimStateClientRpc_mBF1048F721CFC149950A231ED4BC6083EA8EB75E (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 ___animSnapshot0, ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 ___clientRpcParams1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteNetworkSerializable_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_mADBA4596B2E5BD8810FEEFFA4878F3FA13EC0821_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 V_2;
	memset((&V_2), 0, sizeof(V_2));
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_3 = NULL;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(__this, NULL);
		V_3 = L_0;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1 = V_3;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_3;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		int32_t L_4 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)2)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_009d;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_5 = V_3;
		NullCheck(L_5);
		bool L_6;
		L_6 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_7 = V_3;
		NullCheck(L_7);
		bool L_8;
		L_8 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_7, NULL);
		if (!L_8)
		{
			goto IL_009d;
		}
	}

IL_0058:
	{
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_4), ((int32_t)1285), 2, ((int32_t)63985), NULL);
		FastBufferWriter_WriteNetworkSerializable_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_mADBA4596B2E5BD8810FEEFFA4878F3FA13EC0821((&V_4), (&___animSnapshot0), FastBufferWriter_WriteNetworkSerializable_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_mADBA4596B2E5BD8810FEEFFA4878F3FA13EC0821_RuntimeMethod_var);
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_4;
		ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 L_10 = ___clientRpcParams1;
		NetworkBehaviour___sendClientRpc_m78D490ECE88AD695DC50B8195719FAC5E488E07B(__this, L_9, ((int32_t)1069363937), L_10, ((int32_t)0), NULL);
		FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_4), NULL);
	}

IL_009d:
	{
		int32_t L_11 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)L_11) == ((int32_t)((int32_t)2)))? 1 : 0))
		{
			goto IL_00cc;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_12 = V_3;
		NullCheck(L_12);
		bool L_13;
		L_13 = NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline(L_12, NULL);
		if (L_13)
		{
			goto IL_00cd;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_14 = V_3;
		NullCheck(L_14);
		bool L_15;
		L_15 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_14, NULL);
		if (L_15)
		{
			goto IL_00cd;
		}
	}

IL_00cc:
	{
		return;
	}

IL_00cd:
	{
		// if (animSnapshot.StateHash != 0)
		AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 L_16 = ___animSnapshot0;
		int32_t L_17 = L_16.___StateHash_0;
		if (!L_17)
		{
			goto IL_00fa;
		}
	}
	{
		// m_AnimationHash = animSnapshot.StateHash;
		AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 L_18 = ___animSnapshot0;
		int32_t L_19 = L_18.___StateHash_0;
		__this->___m_AnimationHash_20 = L_19;
		// m_Animator.Play(animSnapshot.StateHash, 0, animSnapshot.NormalizedTime);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_20 = __this->___m_Animator_14;
		AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 L_21 = ___animSnapshot0;
		int32_t L_22 = L_21.___StateHash_0;
		AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 L_23 = ___animSnapshot0;
		float L_24 = L_23.___NormalizedTime_1;
		NullCheck(L_20);
		Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD(L_20, L_22, 0, L_24, NULL);
	}

IL_00fa:
	{
		// if (animSnapshot.Parameters != null && animSnapshot.Parameters.Length != 0)
		AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 L_25 = ___animSnapshot0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = L_25.___Parameters_2;
		if (!L_26)
		{
			goto IL_0144;
		}
	}
	{
		AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 L_27 = ___animSnapshot0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = L_27.___Parameters_2;
		NullCheck(L_28);
		if (!(((RuntimeArray*)L_28)->max_length))
		{
			goto IL_0144;
		}
	}
	{
		// fixed (byte* parameters = animSnapshot.Parameters)
		AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 L_29 = ___animSnapshot0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = L_29.___Parameters_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = L_30;
		V_1 = L_31;
		if (!L_31)
		{
			goto IL_011a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_1;
		NullCheck(L_32);
		if (((int32_t)(((RuntimeArray*)L_32)->max_length)))
		{
			goto IL_011f;
		}
	}

IL_011a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0128;
	}

IL_011f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_1;
		NullCheck(L_33);
		V_0 = (uint8_t*)((uintptr_t)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0128:
	{
		// var reader = new FastBufferReader(parameters, Allocator.None, animSnapshot.Parameters.Length);
		uint8_t* L_34 = V_0;
		AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 L_35 = ___animSnapshot0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = L_35.___Parameters_2;
		NullCheck(L_36);
		FastBufferReader__ctor_mE38754ABA3478570D1E05407E02FDD418AF676BC((&V_2), L_34, 1, ((int32_t)(((RuntimeArray*)L_36)->max_length)), 0, NULL);
		// ReadParameters(reader, false);
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_37 = V_2;
		NetworkAnimator_ReadParameters_m81D70BE256322547778017CFB4F619BFBECF5BEA(__this, L_37, (bool)0, NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_0144:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::SendAnimTriggerClientRpc(Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage,Unity.Netcode.ClientRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_SendAnimTriggerClientRpc_m25CD0F1C781CF068DAC54DB7ACE64E3D9CF17779 (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46 ___animSnapshot0, ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 ___clientRpcParams1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteNetworkSerializable_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m8506D08FAFF00B0912CC852076DBF726F32C557A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(__this, NULL);
		V_0 = L_0;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		int32_t L_4 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)2)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_009d;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_7, NULL);
		if (!L_8)
		{
			goto IL_009d;
		}
	}

IL_0058:
	{
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_1), ((int32_t)1285), 2, ((int32_t)63985), NULL);
		FastBufferWriter_WriteNetworkSerializable_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m8506D08FAFF00B0912CC852076DBF726F32C557A((&V_1), (&___animSnapshot0), FastBufferWriter_WriteNetworkSerializable_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m8506D08FAFF00B0912CC852076DBF726F32C557A_RuntimeMethod_var);
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_1;
		ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 L_10 = ___clientRpcParams1;
		NetworkBehaviour___sendClientRpc_m78D490ECE88AD695DC50B8195719FAC5E488E07B(__this, L_9, ((int32_t)-2064519732), L_10, ((int32_t)0), NULL);
		FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_1), NULL);
	}

IL_009d:
	{
		int32_t L_11 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)L_11) == ((int32_t)((int32_t)2)))? 1 : 0))
		{
			goto IL_00cc;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_12 = V_0;
		NullCheck(L_12);
		bool L_13;
		L_13 = NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline(L_12, NULL);
		if (L_13)
		{
			goto IL_00cd;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_14, NULL);
		if (L_15)
		{
			goto IL_00cd;
		}
	}

IL_00cc:
	{
		return;
	}

IL_00cd:
	{
		// if (animSnapshot.Reset)
		AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46 L_16 = ___animSnapshot0;
		bool L_17 = L_16.___Reset_1;
		if (!L_17)
		{
			goto IL_00e8;
		}
	}
	{
		// m_Animator.ResetTrigger(animSnapshot.Hash);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18 = __this->___m_Animator_14;
		AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46 L_19 = ___animSnapshot0;
		int32_t L_20 = L_19.___Hash_0;
		NullCheck(L_18);
		Animator_ResetTrigger_m2DF2C6DE87314918C151616FD5C39EB93EE14011(L_18, L_20, NULL);
		return;
	}

IL_00e8:
	{
		// m_Animator.SetTrigger(animSnapshot.Hash);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21 = __this->___m_Animator_14;
		AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46 L_22 = ___animSnapshot0;
		int32_t L_23 = L_22.___Hash_0;
		NullCheck(L_21);
		Animator_SetTrigger_m2D9CACEFDE11FF9DB99207B5CBD251C1EC047939(L_21, L_23, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_SetTrigger_m1AD7AE79824CE65A249DF53165787336FAFDC4D1 (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, String_t* ___triggerName0, const RuntimeMethod* method) 
{
	{
		// SetTrigger(Animator.StringToHash(triggerName));
		String_t* L_0 = ___triggerName0;
		int32_t L_1;
		L_1 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(L_0, NULL);
		NetworkAnimator_SetTrigger_m347C98FBD6C575B71E4EBFD51FCE268CEFB72B2A(__this, L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::SetTrigger(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_SetTrigger_m347C98FBD6C575B71E4EBFD51FCE268CEFB72B2A (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, int32_t ___hash0, bool ___reset1, const RuntimeMethod* method) 
{
	AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var animMsg = new AnimationTriggerMessage();
		il2cpp_codegen_initobj((&V_0), sizeof(AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46));
		// animMsg.Hash = hash;
		int32_t L_0 = ___hash0;
		(&V_0)->___Hash_0 = L_0;
		// animMsg.Reset = reset;
		bool L_1 = ___reset1;
		(&V_0)->___Reset_1 = L_1;
		// if (IsServer)
		bool L_2;
		L_2 = NetworkBehaviour_get_IsServer_m57CCCE498593E3A21E6B952AB9C4BAA482EB4CD6(__this, NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// SendAnimTriggerClientRpc(animMsg);
		AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46 L_3 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9));
		ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 L_4 = V_1;
		NetworkAnimator_SendAnimTriggerClientRpc_m25CD0F1C781CF068DAC54DB7ACE64E3D9CF17779(__this, L_3, L_4, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_ResetTrigger_m6399ADAFCDD5C477E8E2A19538E54097BA39E2C5 (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, String_t* ___triggerName0, const RuntimeMethod* method) 
{
	{
		// ResetTrigger(Animator.StringToHash(triggerName));
		String_t* L_0 = ___triggerName0;
		int32_t L_1;
		L_1 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(L_0, NULL);
		NetworkAnimator_ResetTrigger_m1A16157A23E727CC57F8F7251A212AF04211CAE4(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::ResetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_ResetTrigger_m1A16157A23E727CC57F8F7251A212AF04211CAE4 (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, int32_t ___hash0, const RuntimeMethod* method) 
{
	{
		// SetTrigger(hash, true);
		int32_t L_0 = ___hash0;
		NetworkAnimator_SetTrigger_m347C98FBD6C575B71E4EBFD51FCE268CEFB72B2A(__this, L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator__ctor_mA582414D2F0E47B0B31212C6E2DA10202742D47F (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float m_SendRate = 0.1f;
		__this->___m_SendRate_16 = (0.100000001f);
		// private FastBufferWriter m_ParameterWriter = new FastBufferWriter(K_MaxAnimationParams * sizeof(float), Allocator.Persistent);
		il2cpp_codegen_runtime_class_init_inline(NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99_il2cpp_TypeInfo_var);
		int32_t L_0 = ((NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99_StaticFields*)il2cpp_codegen_static_fields_for(NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99_il2cpp_TypeInfo_var))->___K_MaxAnimationParams_17;
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_1;
		memset((&L_1), 0, sizeof(L_1));
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&L_1), ((int32_t)il2cpp_codegen_multiply(L_0, 4)), 4, (-1), /*hidden argument*/NULL);
		__this->___m_ParameterWriter_21 = L_1;
		il2cpp_codegen_runtime_class_init_inline(NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		NetworkBehaviour__ctor_m0BFD04A5D02376F13DD2E85274836CD4A3AD38E6(__this, NULL);
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator__cctor_m5591DD83D5C5F7046B4CC6E87C6568E2F67A594A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkAnimator_SendAnimStateClientRpc__nhandler_m2A2CD27EA02D86D6701A7D099A3DA16CCB93AEBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkAnimator_SendAnimTriggerClientRpc__nhandler_m2A98A53C41D94C16BC96604BEE27D1C66D62648D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkAnimator_SendParamsClientRpc__nhandler_m308DA704619DAE0050312DEAE43781AF77C46AC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* L_0 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->_____rpc_func_table_4;
		RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* L_1 = (RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597*)il2cpp_codegen_object_new(RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RpcReceiveHandler__ctor_m38D96DF14942B8B37F0A872B2C509A442F5F19B6(L_1, NULL, (intptr_t)((void*)NetworkAnimator_SendParamsClientRpc__nhandler_m308DA704619DAE0050312DEAE43781AF77C46AC2_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877(L_0, ((int32_t)1675020617), L_1, Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* L_2 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->_____rpc_func_table_4;
		RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* L_3 = (RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597*)il2cpp_codegen_object_new(RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RpcReceiveHandler__ctor_m38D96DF14942B8B37F0A872B2C509A442F5F19B6(L_3, NULL, (intptr_t)((void*)NetworkAnimator_SendAnimStateClientRpc__nhandler_m2A2CD27EA02D86D6701A7D099A3DA16CCB93AEBB_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877(L_2, ((int32_t)1069363937), L_3, Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* L_4 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->_____rpc_func_table_4;
		RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* L_5 = (RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597*)il2cpp_codegen_object_new(RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		RpcReceiveHandler__ctor_m38D96DF14942B8B37F0A872B2C509A442F5F19B6(L_5, NULL, (intptr_t)((void*)NetworkAnimator_SendAnimTriggerClientRpc__nhandler_m2A98A53C41D94C16BC96604BEE27D1C66D62648D_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877(L_4, ((int32_t)-2064519732), L_5, Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		// public static int K_MaxAnimationParams = 32;
		((NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99_StaticFields*)il2cpp_codegen_static_fields_for(NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99_il2cpp_TypeInfo_var))->___K_MaxAnimationParams_17 = ((int32_t)32);
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::SendParamsClientRpc__nhandler(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_SendParamsClientRpc__nhandler_m308DA704619DAE0050312DEAE43781AF77C46AC2 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___target0, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___reader1, __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E ___rpcParams2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadNetworkSerializable_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_mA375225F50F407A641429CEE94ED6D228F0650A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A V_1;
	memset((&V_1), 0, sizeof(V_1));
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_0 = ___target0;
			NullCheck(L_0);
			NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1;
			L_1 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(L_0, NULL);
			V_0 = L_1;
			NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0022_1;
			}
		}
		{
			NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3 = V_0;
			NullCheck(L_3);
			bool L_4;
			L_4 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_3, NULL);
			if (L_4)
			{
				goto IL_0023_1;
			}
		}

IL_0022_1:
		{
			return;
		}

IL_0023_1:
		{
			FastBufferReader_ReadNetworkSerializable_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_mA375225F50F407A641429CEE94ED6D228F0650A9((&___reader1), (&V_1), FastBufferReader_ReadNetworkSerializable_TisAnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_mA375225F50F407A641429CEE94ED6D228F0650A9_RuntimeMethod_var);
			__RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E L_5 = ___rpcParams2;
			ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 L_6 = L_5.___Client_1;
			V_2 = L_6;
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_7 = ___target0;
			NullCheck(L_7);
			L_7->_____rpc_exec_stage_4 = ((int32_t)2);
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_8 = ___target0;
			AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A L_9 = V_1;
			ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 L_10 = V_2;
			NullCheck(((NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99*)CastclassClass((RuntimeObject*)L_8, NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99_il2cpp_TypeInfo_var)));
			NetworkAnimator_SendParamsClientRpc_mA2953500C5E3CE1D39F7010D5D2BF7767EA77AAA(((NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99*)CastclassClass((RuntimeObject*)L_8, NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99_il2cpp_TypeInfo_var)), L_9, L_10, NULL);
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_11 = ___target0;
			NullCheck(L_11);
			L_11->_____rpc_exec_stage_4 = ((int32_t)0);
			goto IL_0090;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0069;
		}
		throw e;
	}

CATCH_0069:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_12 = V_3;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Exception::ToString() */, L_12);
		String_t* L_14;
		L_14 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4A3EE3A5A6730B9781830A8F333C8E578CF053E4)), L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_14, NULL);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_15 = ___target0;
		NullCheck(L_15);
		L_15->_____rpc_exec_stage_4 = ((int32_t)0);
	}// end catch (depth: 1)

IL_0090:
	{
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::SendAnimStateClientRpc__nhandler(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_SendAnimStateClientRpc__nhandler_m2A2CD27EA02D86D6701A7D099A3DA16CCB93AEBB (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___target0, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___reader1, __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E ___rpcParams2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadNetworkSerializable_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_m9E5053F0E1E0033526A340907D67601264D6DCFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_0 = ___target0;
			NullCheck(L_0);
			NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1;
			L_1 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(L_0, NULL);
			V_0 = L_1;
			NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0022_1;
			}
		}
		{
			NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3 = V_0;
			NullCheck(L_3);
			bool L_4;
			L_4 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_3, NULL);
			if (L_4)
			{
				goto IL_0023_1;
			}
		}

IL_0022_1:
		{
			return;
		}

IL_0023_1:
		{
			FastBufferReader_ReadNetworkSerializable_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_m9E5053F0E1E0033526A340907D67601264D6DCFE((&___reader1), (&V_1), FastBufferReader_ReadNetworkSerializable_TisAnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_m9E5053F0E1E0033526A340907D67601264D6DCFE_RuntimeMethod_var);
			__RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E L_5 = ___rpcParams2;
			ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 L_6 = L_5.___Client_1;
			V_2 = L_6;
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_7 = ___target0;
			NullCheck(L_7);
			L_7->_____rpc_exec_stage_4 = ((int32_t)2);
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_8 = ___target0;
			AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 L_9 = V_1;
			ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 L_10 = V_2;
			NullCheck(((NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99*)CastclassClass((RuntimeObject*)L_8, NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99_il2cpp_TypeInfo_var)));
			NetworkAnimator_SendAnimStateClientRpc_mBF1048F721CFC149950A231ED4BC6083EA8EB75E(((NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99*)CastclassClass((RuntimeObject*)L_8, NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99_il2cpp_TypeInfo_var)), L_9, L_10, NULL);
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_11 = ___target0;
			NullCheck(L_11);
			L_11->_____rpc_exec_stage_4 = ((int32_t)0);
			goto IL_0090;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0069;
		}
		throw e;
	}

CATCH_0069:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_12 = V_3;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Exception::ToString() */, L_12);
		String_t* L_14;
		L_14 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4A3EE3A5A6730B9781830A8F333C8E578CF053E4)), L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_14, NULL);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_15 = ___target0;
		NullCheck(L_15);
		L_15->_____rpc_exec_stage_4 = ((int32_t)0);
	}// end catch (depth: 1)

IL_0090:
	{
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkAnimator::SendAnimTriggerClientRpc__nhandler(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkAnimator_SendAnimTriggerClientRpc__nhandler_m2A98A53C41D94C16BC96604BEE27D1C66D62648D (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___target0, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___reader1, __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E ___rpcParams2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadNetworkSerializable_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m5A0B212660CAAA9CED758790ED5FD14DAF6D7F41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_0 = ___target0;
			NullCheck(L_0);
			NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1;
			L_1 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(L_0, NULL);
			V_0 = L_1;
			NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0022_1;
			}
		}
		{
			NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3 = V_0;
			NullCheck(L_3);
			bool L_4;
			L_4 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_3, NULL);
			if (L_4)
			{
				goto IL_0023_1;
			}
		}

IL_0022_1:
		{
			return;
		}

IL_0023_1:
		{
			FastBufferReader_ReadNetworkSerializable_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m5A0B212660CAAA9CED758790ED5FD14DAF6D7F41((&___reader1), (&V_1), FastBufferReader_ReadNetworkSerializable_TisAnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_m5A0B212660CAAA9CED758790ED5FD14DAF6D7F41_RuntimeMethod_var);
			__RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E L_5 = ___rpcParams2;
			ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 L_6 = L_5.___Client_1;
			V_2 = L_6;
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_7 = ___target0;
			NullCheck(L_7);
			L_7->_____rpc_exec_stage_4 = ((int32_t)2);
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_8 = ___target0;
			AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46 L_9 = V_1;
			ClientRpcParams_t601849CAFBF3D524390FCD760D36C67665ECACB9 L_10 = V_2;
			NullCheck(((NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99*)CastclassClass((RuntimeObject*)L_8, NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99_il2cpp_TypeInfo_var)));
			NetworkAnimator_SendAnimTriggerClientRpc_m25CD0F1C781CF068DAC54DB7ACE64E3D9CF17779(((NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99*)CastclassClass((RuntimeObject*)L_8, NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99_il2cpp_TypeInfo_var)), L_9, L_10, NULL);
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_11 = ___target0;
			NullCheck(L_11);
			L_11->_____rpc_exec_stage_4 = ((int32_t)0);
			goto IL_0090;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0069;
		}
		throw e;
	}

CATCH_0069:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_12 = V_3;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Exception::ToString() */, L_12);
		String_t* L_14;
		L_14 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4A3EE3A5A6730B9781830A8F333C8E578CF053E4)), L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_14, NULL);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_15 = ___target0;
		NullCheck(L_15);
		L_15->_____rpc_exec_stage_4 = ((int32_t)0);
	}// end catch (depth: 1)

IL_0090:
	{
		return;
	}
}
// System.String Unity.Netcode.Components.NetworkAnimator::__getTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkAnimator___getTypeName_mEBD598974065D0E5E97834570F204802F9BCA044 (NetworkAnimator_t394FEAA3D2F6FC7E195C4E6BCD1012290E23AC99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9334F5F8D2DB5F73AF4D47E992E81FA30B96151);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralC9334F5F8D2DB5F73AF4D47E992E81FA30B96151;
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
// Conversion methods for marshalling of: Unity.Netcode.Components.NetworkAnimator/AnimationMessage
IL2CPP_EXTERN_C void AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_marshal_pinvoke(const AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26& unmarshaled, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_marshaled_pinvoke& marshaled)
{
	marshaled.___StateHash_0 = unmarshaled.___StateHash_0;
	marshaled.___NormalizedTime_1 = unmarshaled.___NormalizedTime_1;
	marshaled.___Parameters_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___Parameters_2);
}
IL2CPP_EXTERN_C void AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_marshal_pinvoke_back(const AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_marshaled_pinvoke& marshaled, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledStateHash_temp_0 = 0;
	unmarshaledStateHash_temp_0 = marshaled.___StateHash_0;
	unmarshaled.___StateHash_0 = unmarshaledStateHash_temp_0;
	float unmarshaledNormalizedTime_temp_1 = 0.0f;
	unmarshaledNormalizedTime_temp_1 = marshaled.___NormalizedTime_1;
	unmarshaled.___NormalizedTime_1 = unmarshaledNormalizedTime_temp_1;
	unmarshaled.___Parameters_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Parameters_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Parameters_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Parameters_2));
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Components.NetworkAnimator/AnimationMessage
IL2CPP_EXTERN_C void AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_marshal_pinvoke_cleanup(AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Parameters_2);
	marshaled.___Parameters_2 = NULL;
}
// Conversion methods for marshalling of: Unity.Netcode.Components.NetworkAnimator/AnimationMessage
IL2CPP_EXTERN_C void AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_marshal_com(const AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26& unmarshaled, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_marshaled_com& marshaled)
{
	marshaled.___StateHash_0 = unmarshaled.___StateHash_0;
	marshaled.___NormalizedTime_1 = unmarshaled.___NormalizedTime_1;
	marshaled.___Parameters_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___Parameters_2);
}
IL2CPP_EXTERN_C void AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_marshal_com_back(const AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_marshaled_com& marshaled, AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledStateHash_temp_0 = 0;
	unmarshaledStateHash_temp_0 = marshaled.___StateHash_0;
	unmarshaled.___StateHash_0 = unmarshaledStateHash_temp_0;
	float unmarshaledNormalizedTime_temp_1 = 0.0f;
	unmarshaledNormalizedTime_temp_1 = marshaled.___NormalizedTime_1;
	unmarshaled.___NormalizedTime_1 = unmarshaledNormalizedTime_temp_1;
	unmarshaled.___Parameters_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Parameters_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Parameters_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Parameters_2));
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Components.NetworkAnimator/AnimationMessage
IL2CPP_EXTERN_C void AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_marshal_com_cleanup(AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Parameters_2);
	marshaled.___Parameters_2 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage
IL2CPP_EXTERN_C void AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_marshal_pinvoke(const AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A& unmarshaled, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_marshaled_pinvoke& marshaled)
{
	marshaled.___Parameters_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___Parameters_0);
}
IL2CPP_EXTERN_C void AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_marshal_pinvoke_back(const AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_marshaled_pinvoke& marshaled, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___Parameters_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Parameters_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Parameters_0), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Parameters_0));
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage
IL2CPP_EXTERN_C void AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_marshal_pinvoke_cleanup(AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Parameters_0);
	marshaled.___Parameters_0 = NULL;
}
// Conversion methods for marshalling of: Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage
IL2CPP_EXTERN_C void AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_marshal_com(const AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A& unmarshaled, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_marshaled_com& marshaled)
{
	marshaled.___Parameters_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___Parameters_0);
}
IL2CPP_EXTERN_C void AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_marshal_com_back(const AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_marshaled_com& marshaled, AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___Parameters_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Parameters_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Parameters_0), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___Parameters_0));
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Components.NetworkAnimator/AnimationParametersMessage
IL2CPP_EXTERN_C void AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_marshal_com_cleanup(AnimationParametersMessage_t28D4D941C9D24EB041EAAD04914802983801E46A_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Parameters_0);
	marshaled.___Parameters_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage
IL2CPP_EXTERN_C void AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshal_pinvoke(const AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46& unmarshaled, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshaled_pinvoke& marshaled)
{
	marshaled.___Hash_0 = unmarshaled.___Hash_0;
	marshaled.___Reset_1 = static_cast<int32_t>(unmarshaled.___Reset_1);
}
IL2CPP_EXTERN_C void AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshal_pinvoke_back(const AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshaled_pinvoke& marshaled, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46& unmarshaled)
{
	int32_t unmarshaledHash_temp_0 = 0;
	unmarshaledHash_temp_0 = marshaled.___Hash_0;
	unmarshaled.___Hash_0 = unmarshaledHash_temp_0;
	bool unmarshaledReset_temp_1 = false;
	unmarshaledReset_temp_1 = static_cast<bool>(marshaled.___Reset_1);
	unmarshaled.___Reset_1 = unmarshaledReset_temp_1;
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage
IL2CPP_EXTERN_C void AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshal_pinvoke_cleanup(AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage
IL2CPP_EXTERN_C void AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshal_com(const AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46& unmarshaled, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshaled_com& marshaled)
{
	marshaled.___Hash_0 = unmarshaled.___Hash_0;
	marshaled.___Reset_1 = static_cast<int32_t>(unmarshaled.___Reset_1);
}
IL2CPP_EXTERN_C void AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshal_com_back(const AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshaled_com& marshaled, AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46& unmarshaled)
{
	int32_t unmarshaledHash_temp_0 = 0;
	unmarshaledHash_temp_0 = marshaled.___Hash_0;
	unmarshaled.___Hash_0 = unmarshaledHash_temp_0;
	bool unmarshaledReset_temp_1 = false;
	unmarshaledReset_temp_1 = static_cast<bool>(marshaled.___Reset_1);
	unmarshaled.___Reset_1 = unmarshaledReset_temp_1;
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage
IL2CPP_EXTERN_C void AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshal_com_cleanup(AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshaled_com& marshaled)
{
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
// System.Void Unity.Netcode.Components.NetworkAnimator/AnimationParamEnumWrapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationParamEnumWrapper__cctor_m0D9D4AAAEAF6DF909AA330E28D62416AE0A8A6B6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_t2AD68F1C718AFCCBF9CF62AEBEAD0439276E4E6E_m0342CC99129F356D8D8A3E08D40C0E5DF1DCABB1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AnimatorControllerParameterInt = UnsafeUtility.EnumToInt(AnimatorControllerParameterType.Int);
		int32_t L_0;
		L_0 = UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_t2AD68F1C718AFCCBF9CF62AEBEAD0439276E4E6E_m0342CC99129F356D8D8A3E08D40C0E5DF1DCABB1(3, UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_t2AD68F1C718AFCCBF9CF62AEBEAD0439276E4E6E_m0342CC99129F356D8D8A3E08D40C0E5DF1DCABB1_RuntimeMethod_var);
		((AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_StaticFields*)il2cpp_codegen_static_fields_for(AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_il2cpp_TypeInfo_var))->___AnimatorControllerParameterInt_0 = L_0;
		// AnimatorControllerParameterFloat = UnsafeUtility.EnumToInt(AnimatorControllerParameterType.Float);
		int32_t L_1;
		L_1 = UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_t2AD68F1C718AFCCBF9CF62AEBEAD0439276E4E6E_m0342CC99129F356D8D8A3E08D40C0E5DF1DCABB1(1, UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_t2AD68F1C718AFCCBF9CF62AEBEAD0439276E4E6E_m0342CC99129F356D8D8A3E08D40C0E5DF1DCABB1_RuntimeMethod_var);
		((AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_StaticFields*)il2cpp_codegen_static_fields_for(AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_il2cpp_TypeInfo_var))->___AnimatorControllerParameterFloat_1 = L_1;
		// AnimatorControllerParameterBool = UnsafeUtility.EnumToInt(AnimatorControllerParameterType.Bool);
		int32_t L_2;
		L_2 = UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_t2AD68F1C718AFCCBF9CF62AEBEAD0439276E4E6E_m0342CC99129F356D8D8A3E08D40C0E5DF1DCABB1(4, UnsafeUtility_EnumToInt_TisAnimatorControllerParameterType_t2AD68F1C718AFCCBF9CF62AEBEAD0439276E4E6E_m0342CC99129F356D8D8A3E08D40C0E5DF1DCABB1_RuntimeMethod_var);
		((AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_StaticFields*)il2cpp_codegen_static_fields_for(AnimationParamEnumWrapper_t9CEBF809D2669D955988E3F418202572D31F1D38_il2cpp_TypeInfo_var))->___AnimatorControllerParameterBool_2 = L_2;
		// }
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
// System.Boolean Unity.Netcode.Components.NetworkRigidbody::get_HasAuthority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkRigidbody_get_HasAuthority_m2B03FC3EB3B589BC2DB2F6CB3BA6E79CF8817683 (NetworkRigidbody_tDE00ED9930D70F23E37F936A09818AEBA04090CA* __this, const RuntimeMethod* method) 
{
	{
		// private bool HasAuthority => m_NetworkTransform.CanCommitToTransform;
		NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* L_0 = __this->___m_NetworkTransform_15;
		NullCheck(L_0);
		bool L_1 = L_0->___CanCommitToTransform_32;
		return L_1;
	}
}
// System.Void Unity.Netcode.Components.NetworkRigidbody::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRigidbody_Awake_mF5681DD674B04BE5CE26FFFB8DF95FAFE0A450D1 (NetworkRigidbody_tDE00ED9930D70F23E37F936A09818AEBA04090CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16_mE600383BAC048BBF57439674380E8A8F4063AE56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___m_Rigidbody_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Rigidbody_14), (void*)L_0);
		// m_NetworkTransform = GetComponent<NetworkTransform>();
		NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* L_1;
		L_1 = Component_GetComponent_TisNetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16_mE600383BAC048BBF57439674380E8A8F4063AE56(__this, Component_GetComponent_TisNetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16_mE600383BAC048BBF57439674380E8A8F4063AE56_RuntimeMethod_var);
		__this->___m_NetworkTransform_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NetworkTransform_15), (void*)L_1);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkRigidbody::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRigidbody_FixedUpdate_mF9C7B3B828E5B6E5BB369D838D563300BDDA3319 (NetworkRigidbody_tDE00ED9930D70F23E37F936A09818AEBA04090CA* __this, const RuntimeMethod* method) 
{
	{
		// if (NetworkManager.IsListening)
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// if (HasAuthority != m_IsAuthority)
		bool L_2;
		L_2 = NetworkRigidbody_get_HasAuthority_m2B03FC3EB3B589BC2DB2F6CB3BA6E79CF8817683(__this, NULL);
		bool L_3 = __this->___m_IsAuthority_18;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002d;
		}
	}
	{
		// m_IsAuthority = HasAuthority;
		bool L_4;
		L_4 = NetworkRigidbody_get_HasAuthority_m2B03FC3EB3B589BC2DB2F6CB3BA6E79CF8817683(__this, NULL);
		__this->___m_IsAuthority_18 = L_4;
		// UpdateRigidbodyKinematicMode();
		NetworkRigidbody_UpdateRigidbodyKinematicMode_m8B2572B1CE688AE59BFE39F01D201BB4722C7415(__this, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkRigidbody::UpdateRigidbodyKinematicMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRigidbody_UpdateRigidbodyKinematicMode_m8B2572B1CE688AE59BFE39F01D201BB4722C7415 (NetworkRigidbody_tDE00ED9930D70F23E37F936A09818AEBA04090CA* __this, const RuntimeMethod* method) 
{
	{
		// if (m_IsAuthority == false)
		bool L_0 = __this->___m_IsAuthority_18;
		if (L_0)
		{
			goto IL_0043;
		}
	}
	{
		// m_OriginalKinematic = m_Rigidbody.isKinematic;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___m_Rigidbody_14;
		NullCheck(L_1);
		bool L_2;
		L_2 = Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1(L_1, NULL);
		__this->___m_OriginalKinematic_16 = L_2;
		// m_Rigidbody.isKinematic = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___m_Rigidbody_14;
		NullCheck(L_3);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_3, (bool)1, NULL);
		// m_OriginalInterpolation = m_Rigidbody.interpolation;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___m_Rigidbody_14;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Rigidbody_get_interpolation_mE508FC846FB031C118464637507C004408A32696(L_4, NULL);
		__this->___m_OriginalInterpolation_17 = L_5;
		// m_Rigidbody.interpolation = RigidbodyInterpolation.None;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___m_Rigidbody_14;
		NullCheck(L_6);
		Rigidbody_set_interpolation_mC7D39114A7AC6ED0AB2B40FECA4E2ED3C1D7603C(L_6, 0, NULL);
		return;
	}

IL_0043:
	{
		// m_Rigidbody.isKinematic = m_OriginalKinematic;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___m_Rigidbody_14;
		bool L_8 = __this->___m_OriginalKinematic_16;
		NullCheck(L_7);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_7, L_8, NULL);
		// m_Rigidbody.interpolation = m_OriginalInterpolation;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___m_Rigidbody_14;
		int32_t L_10 = __this->___m_OriginalInterpolation_17;
		NullCheck(L_9);
		Rigidbody_set_interpolation_mC7D39114A7AC6ED0AB2B40FECA4E2ED3C1D7603C(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkRigidbody::OnNetworkSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRigidbody_OnNetworkSpawn_mD1FE79D0E89E4C68EEE4A932DE9ACC91AE3068DC (NetworkRigidbody_tDE00ED9930D70F23E37F936A09818AEBA04090CA* __this, const RuntimeMethod* method) 
{
	{
		// m_IsAuthority = HasAuthority;
		bool L_0;
		L_0 = NetworkRigidbody_get_HasAuthority_m2B03FC3EB3B589BC2DB2F6CB3BA6E79CF8817683(__this, NULL);
		__this->___m_IsAuthority_18 = L_0;
		// m_OriginalKinematic = m_Rigidbody.isKinematic;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___m_Rigidbody_14;
		NullCheck(L_1);
		bool L_2;
		L_2 = Rigidbody_get_isKinematic_mC20906CA5A89983DE06EAC6E3AFC5BC012F90CA1(L_1, NULL);
		__this->___m_OriginalKinematic_16 = L_2;
		// m_OriginalInterpolation = m_Rigidbody.interpolation;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___m_Rigidbody_14;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Rigidbody_get_interpolation_mE508FC846FB031C118464637507C004408A32696(L_3, NULL);
		__this->___m_OriginalInterpolation_17 = L_4;
		// UpdateRigidbodyKinematicMode();
		NetworkRigidbody_UpdateRigidbodyKinematicMode_m8B2572B1CE688AE59BFE39F01D201BB4722C7415(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkRigidbody::OnNetworkDespawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRigidbody_OnNetworkDespawn_m04BFF53FBB2593EDA62373A71EE488B52FD7CEFA (NetworkRigidbody_tDE00ED9930D70F23E37F936A09818AEBA04090CA* __this, const RuntimeMethod* method) 
{
	{
		// UpdateRigidbodyKinematicMode();
		NetworkRigidbody_UpdateRigidbodyKinematicMode_m8B2572B1CE688AE59BFE39F01D201BB4722C7415(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkRigidbody::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRigidbody__ctor_m81E3ABF684B33CF69BBCBEC3629B708B784C900D (NetworkRigidbody_tDE00ED9930D70F23E37F936A09818AEBA04090CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		NetworkBehaviour__ctor_m0BFD04A5D02376F13DD2E85274836CD4A3AD38E6(__this, NULL);
		return;
	}
}
// System.String Unity.Netcode.Components.NetworkRigidbody::__getTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkRigidbody___getTypeName_mDACCF8A24334A68AE01BB4784B5DADA77B5A1F5E (NetworkRigidbody_tDE00ED9930D70F23E37F936A09818AEBA04090CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED4946D13E7B430B0418B9CE7DF25016B4C9584E);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralED4946D13E7B430B0418B9CE7DF25016B4C9584E;
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
// System.Boolean Unity.Netcode.Components.NetworkRigidbody2D::get_HasAuthority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkRigidbody2D_get_HasAuthority_m2DC8D519315EE6A9AFC299AB93D56E18BDF1B3C5 (NetworkRigidbody2D_tD143C2CDC083134827C7E3E21BD849BA1B7032EC* __this, const RuntimeMethod* method) 
{
	{
		// private bool HasAuthority => m_NetworkTransform.CanCommitToTransform;
		NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* L_0 = __this->___m_NetworkTransform_15;
		NullCheck(L_0);
		bool L_1 = L_0->___CanCommitToTransform_32;
		return L_1;
	}
}
// System.Void Unity.Netcode.Components.NetworkRigidbody2D::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRigidbody2D_Awake_mFED0B49CC5F3172391A9762FDC809B5143B494EC (NetworkRigidbody2D_tD143C2CDC083134827C7E3E21BD849BA1B7032EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16_mE600383BAC048BBF57439674380E8A8F4063AE56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Rigidbody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___m_Rigidbody_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Rigidbody_14), (void*)L_0);
		// m_NetworkTransform = GetComponent<NetworkTransform>();
		NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* L_1;
		L_1 = Component_GetComponent_TisNetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16_mE600383BAC048BBF57439674380E8A8F4063AE56(__this, Component_GetComponent_TisNetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16_mE600383BAC048BBF57439674380E8A8F4063AE56_RuntimeMethod_var);
		__this->___m_NetworkTransform_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NetworkTransform_15), (void*)L_1);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkRigidbody2D::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRigidbody2D_FixedUpdate_m8964D347FC480E459D9B651036A7A49B5BF6CA62 (NetworkRigidbody2D_tD143C2CDC083134827C7E3E21BD849BA1B7032EC* __this, const RuntimeMethod* method) 
{
	{
		// if (IsSpawned)
		bool L_0;
		L_0 = NetworkBehaviour_get_IsSpawned_m61C7DDBA4399DA812385A297821986D619423C96(__this, NULL);
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// if (HasAuthority != m_IsAuthority)
		bool L_1;
		L_1 = NetworkRigidbody2D_get_HasAuthority_m2DC8D519315EE6A9AFC299AB93D56E18BDF1B3C5(__this, NULL);
		bool L_2 = __this->___m_IsAuthority_18;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0028;
		}
	}
	{
		// m_IsAuthority = HasAuthority;
		bool L_3;
		L_3 = NetworkRigidbody2D_get_HasAuthority_m2DC8D519315EE6A9AFC299AB93D56E18BDF1B3C5(__this, NULL);
		__this->___m_IsAuthority_18 = L_3;
		// UpdateRigidbodyKinematicMode();
		NetworkRigidbody2D_UpdateRigidbodyKinematicMode_mF6C77332A2F335DFFE1EA3CF5ECD19560F1DD028(__this, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkRigidbody2D::UpdateRigidbodyKinematicMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRigidbody2D_UpdateRigidbodyKinematicMode_mF6C77332A2F335DFFE1EA3CF5ECD19560F1DD028 (NetworkRigidbody2D_tD143C2CDC083134827C7E3E21BD849BA1B7032EC* __this, const RuntimeMethod* method) 
{
	{
		// if (m_IsAuthority == false)
		bool L_0 = __this->___m_IsAuthority_18;
		if (L_0)
		{
			goto IL_0043;
		}
	}
	{
		// m_OriginalKinematic = m_Rigidbody.isKinematic;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___m_Rigidbody_14;
		NullCheck(L_1);
		bool L_2;
		L_2 = Rigidbody2D_get_isKinematic_m41BBC60A072047F850097C0391A002935DD277CB(L_1, NULL);
		__this->___m_OriginalKinematic_16 = L_2;
		// m_Rigidbody.isKinematic = true;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___m_Rigidbody_14;
		NullCheck(L_3);
		Rigidbody2D_set_isKinematic_m7C68AB4CFB6D301F0EDF0BFF66FB121ED3CC7853(L_3, (bool)1, NULL);
		// m_OriginalInterpolation = m_Rigidbody.interpolation;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->___m_Rigidbody_14;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Rigidbody2D_get_interpolation_m3A85873C44DB8123E68DB38B1CC3DCF3FD2CD083(L_4, NULL);
		__this->___m_OriginalInterpolation_17 = L_5;
		// m_Rigidbody.interpolation = RigidbodyInterpolation2D.None;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = __this->___m_Rigidbody_14;
		NullCheck(L_6);
		Rigidbody2D_set_interpolation_m4914262B161A76DD061969667C0D412A8C93A994(L_6, 0, NULL);
		return;
	}

IL_0043:
	{
		// m_Rigidbody.isKinematic = m_OriginalKinematic;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_7 = __this->___m_Rigidbody_14;
		bool L_8 = __this->___m_OriginalKinematic_16;
		NullCheck(L_7);
		Rigidbody2D_set_isKinematic_m7C68AB4CFB6D301F0EDF0BFF66FB121ED3CC7853(L_7, L_8, NULL);
		// m_Rigidbody.interpolation = m_OriginalInterpolation;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_9 = __this->___m_Rigidbody_14;
		int32_t L_10 = __this->___m_OriginalInterpolation_17;
		NullCheck(L_9);
		Rigidbody2D_set_interpolation_m4914262B161A76DD061969667C0D412A8C93A994(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkRigidbody2D::OnNetworkSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRigidbody2D_OnNetworkSpawn_m3C909276CD7F027B4DDCF062DBE0591A159A70A2 (NetworkRigidbody2D_tD143C2CDC083134827C7E3E21BD849BA1B7032EC* __this, const RuntimeMethod* method) 
{
	{
		// m_IsAuthority = HasAuthority;
		bool L_0;
		L_0 = NetworkRigidbody2D_get_HasAuthority_m2DC8D519315EE6A9AFC299AB93D56E18BDF1B3C5(__this, NULL);
		__this->___m_IsAuthority_18 = L_0;
		// m_OriginalKinematic = m_Rigidbody.isKinematic;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___m_Rigidbody_14;
		NullCheck(L_1);
		bool L_2;
		L_2 = Rigidbody2D_get_isKinematic_m41BBC60A072047F850097C0391A002935DD277CB(L_1, NULL);
		__this->___m_OriginalKinematic_16 = L_2;
		// m_OriginalInterpolation = m_Rigidbody.interpolation;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___m_Rigidbody_14;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Rigidbody2D_get_interpolation_m3A85873C44DB8123E68DB38B1CC3DCF3FD2CD083(L_3, NULL);
		__this->___m_OriginalInterpolation_17 = L_4;
		// UpdateRigidbodyKinematicMode();
		NetworkRigidbody2D_UpdateRigidbodyKinematicMode_mF6C77332A2F335DFFE1EA3CF5ECD19560F1DD028(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkRigidbody2D::OnNetworkDespawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRigidbody2D_OnNetworkDespawn_m6BBC0B2DF3B488C3ED27AD9BF7882FA85BC708E1 (NetworkRigidbody2D_tD143C2CDC083134827C7E3E21BD849BA1B7032EC* __this, const RuntimeMethod* method) 
{
	{
		// UpdateRigidbodyKinematicMode();
		NetworkRigidbody2D_UpdateRigidbodyKinematicMode_mF6C77332A2F335DFFE1EA3CF5ECD19560F1DD028(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkRigidbody2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkRigidbody2D__ctor_mBB5D43763BD39451382269046F7DF3CB67AA3DD6 (NetworkRigidbody2D_tD143C2CDC083134827C7E3E21BD849BA1B7032EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		NetworkBehaviour__ctor_m0BFD04A5D02376F13DD2E85274836CD4A3AD38E6(__this, NULL);
		return;
	}
}
// System.String Unity.Netcode.Components.NetworkRigidbody2D::__getTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkRigidbody2D___getTypeName_mF9CECB5785BA868EB8E8B0F65DE2C69582750857 (NetworkRigidbody2D_tD143C2CDC083134827C7E3E21BD849BA1B7032EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3644D4C6725D39FCC5DA6CDF2342F4A22B34BC5);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralD3644D4C6725D39FCC5DA6CDF2342F4A22B34BC5;
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
// System.Void Unity.Netcode.Components.NetworkTransform::TryCommitTransformToServer(UnityEngine.Transform,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_TryCommitTransformToServer_m6EC66780853F1DCD7297AF4DDF0468B7D6A61BD5 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transformToCommit0, double ___dirtyTime1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// var isDirty = ApplyTransformToNetworkState(ref m_LocalAuthoritativeNetworkState, dirtyTime, transformToCommit);
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_0 = (&__this->___m_LocalAuthoritativeNetworkState_36);
		double L_1 = ___dirtyTime1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___transformToCommit0;
		bool L_3;
		L_3 = NetworkTransform_ApplyTransformToNetworkState_mD89BB6414765B7696FD836B546354B52B745F72E(__this, L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// TryCommit(isDirty);
		bool L_4 = V_0;
		NetworkTransform_TryCommit_mA473B6BD3704178DEAB63931F58D62CC7BB7435B(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::TryCommitValuesToServer(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_TryCommitValuesToServer_m0A76F11CA0211F44B6C7CDA122078AE0B35E5A06 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale2, double ___dirtyTime3, const RuntimeMethod* method) 
{
	ValueTuple_4_tA6BBB2A2AF4C95729A202670B298BBB74D2EF1AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var isDirty = ApplyTransformToNetworkStateWithInfo(ref m_LocalAuthoritativeNetworkState, dirtyTime, position, rotation, scale);
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_0 = (&__this->___m_LocalAuthoritativeNetworkState_36);
		double L_1 = ___dirtyTime3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___position0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___rotation1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___scale2;
		ValueTuple_4_tA6BBB2A2AF4C95729A202670B298BBB74D2EF1AC L_5;
		L_5 = NetworkTransform_ApplyTransformToNetworkStateWithInfo_m129F6631807CAA0D3614BFB761D26349DDE5E9ED(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		// TryCommit(isDirty.isDirty);
		ValueTuple_4_tA6BBB2A2AF4C95729A202670B298BBB74D2EF1AC L_6 = V_0;
		bool L_7 = L_6.___Item1_0;
		NetworkTransform_TryCommit_mA473B6BD3704178DEAB63931F58D62CC7BB7435B(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::TryCommit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_TryCommit_mA473B6BD3704178DEAB63931F58D62CC7BB7435B (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, bool ___isDirty0, const RuntimeMethod* method) 
{
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (isDirty)
		bool L_0 = ___isDirty0;
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		// Send(m_LocalAuthoritativeNetworkState);
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_1 = __this->___m_LocalAuthoritativeNetworkState_36;
		NetworkTransform_U3CTryCommitU3Eg__SendU7C41_0_mA1874B584F040881CD52AA7E85F869A53F70C7DE(__this, L_1, NULL);
		// m_HasSentLastValue = false;
		__this->___m_HasSentLastValue_39 = (bool)0;
		// m_LastSentTick = m_CachedNetworkManager.LocalTime.Tick;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = __this->___m_CachedNetworkManager_34;
		NullCheck(L_2);
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_3;
		L_3 = NetworkManager_get_LocalTime_m17506338EF54F39A0C27A56D822F17A112D49CC7(L_2, NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = NetworkTime_get_Tick_m1544072B4A5D9F6767E31A77EFB451B6B0F5B991_inline((&V_0), NULL);
		__this->___m_LastSentTick_49 = L_4;
		// m_LastSentState = m_LocalAuthoritativeNetworkState;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_5 = __this->___m_LocalAuthoritativeNetworkState_36;
		__this->___m_LastSentState_50 = L_5;
		return;
	}

IL_003c:
	{
		// else if (!m_HasSentLastValue && m_CachedNetworkManager.LocalTime.Tick >= m_LastSentTick + 1) // check for state.IsDirty since update can happen more than once per tick. No need for client, RPCs will just queue up
		bool L_6 = __this->___m_HasSentLastValue_39;
		if (L_6)
		{
			goto IL_0092;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_7 = __this->___m_CachedNetworkManager_34;
		NullCheck(L_7);
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_8;
		L_8 = NetworkManager_get_LocalTime_m17506338EF54F39A0C27A56D822F17A112D49CC7(L_7, NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = NetworkTime_get_Tick_m1544072B4A5D9F6767E31A77EFB451B6B0F5B991_inline((&V_0), NULL);
		int32_t L_10 = __this->___m_LastSentTick_49;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_add(L_10, 1)))))
		{
			goto IL_0092;
		}
	}
	{
		// m_LastSentState.SentTime = m_CachedNetworkManager.LocalTime.Time; // time 1+ tick later
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_11 = (&__this->___m_LastSentState_50);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_12 = __this->___m_CachedNetworkManager_34;
		NullCheck(L_12);
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_13;
		L_13 = NetworkManager_get_LocalTime_m17506338EF54F39A0C27A56D822F17A112D49CC7(L_12, NULL);
		V_0 = L_13;
		double L_14;
		L_14 = NetworkTime_get_Time_mDC7F8AB78A0D860B5D3BF62AF1E42724059F690B_inline((&V_0), NULL);
		L_11->___SentTime_21 = L_14;
		// Send(m_LastSentState);
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_15 = __this->___m_LastSentState_50;
		NetworkTransform_U3CTryCommitU3Eg__SendU7C41_0_mA1874B584F040881CD52AA7E85F869A53F70C7DE(__this, L_15, NULL);
		// m_HasSentLastValue = true;
		__this->___m_HasSentLastValue_39 = (bool)1;
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::CommitTransformServerRpc(Unity.Netcode.Components.NetworkTransform/NetworkTransformState,Unity.Netcode.ServerRpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_CommitTransformServerRpc_mFB5EC47FDDCF80B89F8A90F0634BA0E141AAF60D (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___networkState0, ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 ___serverParams1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteNetworkSerializable_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_m8AFA7DA487CB4E2C00725F67C9A90768008B807E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(__this, NULL);
		V_0 = L_0;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		int32_t L_4 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_009d;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_7, NULL);
		if (!L_8)
		{
			goto IL_009d;
		}
	}

IL_0058:
	{
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_1), ((int32_t)1285), 2, ((int32_t)63985), NULL);
		FastBufferWriter_WriteNetworkSerializable_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_m8AFA7DA487CB4E2C00725F67C9A90768008B807E((&V_1), (&___networkState0), FastBufferWriter_WriteNetworkSerializable_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_m8AFA7DA487CB4E2C00725F67C9A90768008B807E_RuntimeMethod_var);
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_9 = V_1;
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_10 = ___serverParams1;
		NetworkBehaviour___sendServerRpc_mE1E5BE25CC0FBB4480D6B8A9A7CE16D79C51D996(__this, L_9, ((int32_t)104221529), L_10, ((int32_t)0), NULL);
		FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_1), NULL);
	}

IL_009d:
	{
		int32_t L_11 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)L_11) == ((int32_t)((int32_t)1)))? 1 : 0))
		{
			goto IL_00cc;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_12 = V_0;
		NullCheck(L_12);
		bool L_13;
		L_13 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_12, NULL);
		if (L_13)
		{
			goto IL_00cd;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_14, NULL);
		if (L_15)
		{
			goto IL_00cd;
		}
	}

IL_00cc:
	{
		return;
	}

IL_00cd:
	{
		// if (serverParams.Receive.SenderClientId == OwnerClientId) // RPC call when not authorized to write could happen during the RTT interval during which a server's ownership change hasn't reached the client yet
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_16 = ___serverParams1;
		ServerRpcReceiveParams_t13F450FA39CB2BE6C1DB10FFDC686A89EFC4EF95 L_17 = L_16.___Receive_1;
		uint64_t L_18 = L_17.___SenderClientId_0;
		uint64_t L_19;
		L_19 = NetworkBehaviour_get_OwnerClientId_m59ED21DE97867ED0CAE0C553A2BBE369543360BF(__this, NULL);
		if ((!(((uint64_t)L_18) == ((uint64_t)L_19))))
		{
			goto IL_00e8;
		}
	}
	{
		// CommitLocallyAndReplicate(networkState);
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_20 = ___networkState0;
		NetworkTransform_CommitLocallyAndReplicate_m87C9ED934B0157D0ABF57115ED1D53D2641DCEE3(__this, L_20, NULL);
	}

IL_00e8:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::CommitLocallyAndReplicate(Unity.Netcode.Components.NetworkTransform/NetworkTransformState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_CommitLocallyAndReplicate_m87C9ED934B0157D0ABF57115ED1D53D2641DCEE3 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___networkState0, const RuntimeMethod* method) 
{
	{
		// m_ReplicatedNetworkState.Value = networkState;
		NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9* L_0 = __this->___m_ReplicatedNetworkState_35;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_1 = ___networkState0;
		NullCheck(L_0);
		VirtualActionInvoker1< NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 >::Invoke(15 /* System.Void Unity.Netcode.NetworkVariable`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::set_Value(T) */, L_0, L_1);
		// AddInterpolatedState(networkState);
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_2 = ___networkState0;
		NetworkTransform_AddInterpolatedState_m349DB86EA15EB09A42211AEFE3F440B0F2CC86C8(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::ResetInterpolatedStateToCurrentAuthoritativeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_ResetInterpolatedStateToCurrentAuthoritativeState_m1137FDC8AC132A4BC02C80F537B88C4F68E18B98 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1_ResetTo_m50C7E395DAF04E486CA863CD4F6DB516FB9BC0EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1_ResetTo_m8C513E5B41DDB4AE43DC18ADC0100970B447B089_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var serverTime = NetworkManager.ServerTime.Time;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(__this, NULL);
		NullCheck(L_0);
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_1;
		L_1 = NetworkManager_get_ServerTime_m1EB06367487A361578137D4E2D13917F86DDA471(L_0, NULL);
		V_1 = L_1;
		double L_2;
		L_2 = NetworkTime_get_Time_mDC7F8AB78A0D860B5D3BF62AF1E42724059F690B_inline((&V_1), NULL);
		V_0 = L_2;
		// m_PositionXInterpolator.ResetTo(m_LocalAuthoritativeNetworkState.PositionX, serverTime);
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_3 = __this->___m_PositionXInterpolator_40;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_4 = (&__this->___m_LocalAuthoritativeNetworkState_36);
		float L_5 = L_4->___PositionX_12;
		double L_6 = V_0;
		NullCheck(L_3);
		BufferedLinearInterpolator_1_ResetTo_m50C7E395DAF04E486CA863CD4F6DB516FB9BC0EE(L_3, L_5, L_6, BufferedLinearInterpolator_1_ResetTo_m50C7E395DAF04E486CA863CD4F6DB516FB9BC0EE_RuntimeMethod_var);
		// m_PositionYInterpolator.ResetTo(m_LocalAuthoritativeNetworkState.PositionY, serverTime);
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_7 = __this->___m_PositionYInterpolator_41;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_8 = (&__this->___m_LocalAuthoritativeNetworkState_36);
		float L_9 = L_8->___PositionY_13;
		double L_10 = V_0;
		NullCheck(L_7);
		BufferedLinearInterpolator_1_ResetTo_m50C7E395DAF04E486CA863CD4F6DB516FB9BC0EE(L_7, L_9, L_10, BufferedLinearInterpolator_1_ResetTo_m50C7E395DAF04E486CA863CD4F6DB516FB9BC0EE_RuntimeMethod_var);
		// m_PositionZInterpolator.ResetTo(m_LocalAuthoritativeNetworkState.PositionZ, serverTime);
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_11 = __this->___m_PositionZInterpolator_42;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_12 = (&__this->___m_LocalAuthoritativeNetworkState_36);
		float L_13 = L_12->___PositionZ_14;
		double L_14 = V_0;
		NullCheck(L_11);
		BufferedLinearInterpolator_1_ResetTo_m50C7E395DAF04E486CA863CD4F6DB516FB9BC0EE(L_11, L_13, L_14, BufferedLinearInterpolator_1_ResetTo_m50C7E395DAF04E486CA863CD4F6DB516FB9BC0EE_RuntimeMethod_var);
		// m_RotationInterpolator.ResetTo(Quaternion.Euler(m_LocalAuthoritativeNetworkState.Rotation), serverTime);
		BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B* L_15 = __this->___m_RotationInterpolator_43;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_16 = (&__this->___m_LocalAuthoritativeNetworkState_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = NetworkTransformState_get_Rotation_m46EE6E47371DEB9BA5F3EB307364DD0578918A8F(L_16, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_17, NULL);
		double L_19 = V_0;
		NullCheck(L_15);
		BufferedLinearInterpolator_1_ResetTo_m8C513E5B41DDB4AE43DC18ADC0100970B447B089(L_15, L_18, L_19, BufferedLinearInterpolator_1_ResetTo_m8C513E5B41DDB4AE43DC18ADC0100970B447B089_RuntimeMethod_var);
		// m_ScaleXInterpolator.ResetTo(m_LocalAuthoritativeNetworkState.ScaleX, serverTime);
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_20 = __this->___m_ScaleXInterpolator_44;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_21 = (&__this->___m_LocalAuthoritativeNetworkState_36);
		float L_22 = L_21->___ScaleX_18;
		double L_23 = V_0;
		NullCheck(L_20);
		BufferedLinearInterpolator_1_ResetTo_m50C7E395DAF04E486CA863CD4F6DB516FB9BC0EE(L_20, L_22, L_23, BufferedLinearInterpolator_1_ResetTo_m50C7E395DAF04E486CA863CD4F6DB516FB9BC0EE_RuntimeMethod_var);
		// m_ScaleYInterpolator.ResetTo(m_LocalAuthoritativeNetworkState.ScaleY, serverTime);
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_24 = __this->___m_ScaleYInterpolator_45;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_25 = (&__this->___m_LocalAuthoritativeNetworkState_36);
		float L_26 = L_25->___ScaleY_19;
		double L_27 = V_0;
		NullCheck(L_24);
		BufferedLinearInterpolator_1_ResetTo_m50C7E395DAF04E486CA863CD4F6DB516FB9BC0EE(L_24, L_26, L_27, BufferedLinearInterpolator_1_ResetTo_m50C7E395DAF04E486CA863CD4F6DB516FB9BC0EE_RuntimeMethod_var);
		// m_ScaleZInterpolator.ResetTo(m_LocalAuthoritativeNetworkState.ScaleZ, serverTime);
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_28 = __this->___m_ScaleZInterpolator_46;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_29 = (&__this->___m_LocalAuthoritativeNetworkState_36);
		float L_30 = L_29->___ScaleZ_20;
		double L_31 = V_0;
		NullCheck(L_28);
		BufferedLinearInterpolator_1_ResetTo_m50C7E395DAF04E486CA863CD4F6DB516FB9BC0EE(L_28, L_30, L_31, BufferedLinearInterpolator_1_ResetTo_m50C7E395DAF04E486CA863CD4F6DB516FB9BC0EE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Unity.Netcode.Components.NetworkTransform::ApplyTransformToNetworkState(Unity.Netcode.Components.NetworkTransform/NetworkTransformState&,System.Double,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransform_ApplyTransformToNetworkState_mD89BB6414765B7696FD836B546354B52B745F72E (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___networkState0, double ___dirtyTime1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transformToUse2, const RuntimeMethod* method) 
{
	{
		// return ApplyTransformToNetworkStateWithInfo(ref networkState, dirtyTime, transformToUse).isDirty;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_0 = ___networkState0;
		double L_1 = ___dirtyTime1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___transformToUse2;
		ValueTuple_4_tA6BBB2A2AF4C95729A202670B298BBB74D2EF1AC L_3;
		L_3 = NetworkTransform_ApplyTransformToNetworkStateWithInfo_mE70B0FE565188A7A7FAD7BD79B3F1D4A9898C434(__this, L_0, L_1, L_2, NULL);
		bool L_4 = L_3.___Item1_0;
		return L_4;
	}
}
// System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean> Unity.Netcode.Components.NetworkTransform::ApplyTransformToNetworkStateWithInfo(Unity.Netcode.Components.NetworkTransform/NetworkTransformState&,System.Double,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_4_tA6BBB2A2AF4C95729A202670B298BBB74D2EF1AC NetworkTransform_ApplyTransformToNetworkStateWithInfo_mE70B0FE565188A7A7FAD7BD79B3F1D4A9898C434 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___networkState0, double ___dirtyTime1, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transformToUse2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// var position = InLocalSpace ? transformToUse.localPosition : transformToUse.position;
		bool L_0 = __this->___InLocalSpace_30;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___transformToUse2;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0016;
	}

IL_0010:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___transformToUse2;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0016:
	{
		V_0 = G_B3_0;
		// var rotAngles = InLocalSpace ? transformToUse.localEulerAngles : transformToUse.eulerAngles;
		bool L_5 = __this->___InLocalSpace_30;
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___transformToUse2;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_6, NULL);
		G_B6_0 = L_7;
		goto IL_002d;
	}

IL_0027:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___transformToUse2;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_8, NULL);
		G_B6_0 = L_9;
	}

IL_002d:
	{
		V_1 = G_B6_0;
		// var scale = transformToUse.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ___transformToUse2;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_10, NULL);
		V_2 = L_11;
		// return ApplyTransformToNetworkStateWithInfo(ref networkState, dirtyTime, position, rotAngles, scale);
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_12 = ___networkState0;
		double L_13 = ___dirtyTime1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		ValueTuple_4_tA6BBB2A2AF4C95729A202670B298BBB74D2EF1AC L_17;
		L_17 = NetworkTransform_ApplyTransformToNetworkStateWithInfo_m129F6631807CAA0D3614BFB761D26349DDE5E9ED(__this, L_12, L_13, L_14, L_15, L_16, NULL);
		return L_17;
	}
}
// System.ValueTuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean> Unity.Netcode.Components.NetworkTransform::ApplyTransformToNetworkStateWithInfo(Unity.Netcode.Components.NetworkTransform/NetworkTransformState&,System.Double,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_4_tA6BBB2A2AF4C95729A202670B298BBB74D2EF1AC NetworkTransform_ApplyTransformToNetworkStateWithInfo_m129F6631807CAA0D3614BFB761D26349DDE5E9ED (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* ___networkState0, double ___dirtyTime1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotAngles3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_4__ctor_m356A659364AE3B804809D81AF42F1320F3F53FBC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// var isDirty = false;
		V_0 = (bool)0;
		// var isPositionDirty = false;
		V_1 = (bool)0;
		// var isRotationDirty = false;
		V_2 = (bool)0;
		// var isScaleDirty = false;
		V_3 = (bool)0;
		// if (InLocalSpace != networkState.InLocalSpace)
		bool L_0 = __this->___InLocalSpace_30;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_1 = ___networkState0;
		bool L_2;
		L_2 = NetworkTransformState_get_InLocalSpace_m97EFBEEA87FCFF746BE37A23B9E4F26667687174(L_1, NULL);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0024;
		}
	}
	{
		// networkState.InLocalSpace = InLocalSpace;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_3 = ___networkState0;
		bool L_4 = __this->___InLocalSpace_30;
		NetworkTransformState_set_InLocalSpace_mD00CB59C2D2BB5E4E23582483B9D9927B55D2CC8(L_3, L_4, NULL);
		// isDirty = true;
		V_0 = (bool)1;
	}

IL_0024:
	{
		// if (SyncPositionX &&
		//     Mathf.Abs(networkState.PositionX - position.x) > PositionThreshold)
		bool L_5 = __this->___SyncPositionX_18;
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_6 = ___networkState0;
		float L_7 = L_6->___PositionX_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___position2;
		float L_9 = L_8.___x_2;
		float L_10;
		L_10 = fabsf(((float)il2cpp_codegen_subtract(L_7, L_9)));
		float L_11 = __this->___PositionThreshold_27;
		if ((!(((float)L_10) > ((float)L_11))))
		{
			goto IL_005b;
		}
	}
	{
		// networkState.PositionX = position.x;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_12 = ___networkState0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___position2;
		float L_14 = L_13.___x_2;
		L_12->___PositionX_12 = L_14;
		// networkState.HasPositionX = true;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_15 = ___networkState0;
		NetworkTransformState_set_HasPositionX_m56DD5AC54908FA314A5DA409ED2D9F7F00C7C4DD(L_15, (bool)1, NULL);
		// isPositionDirty = true;
		V_1 = (bool)1;
	}

IL_005b:
	{
		// if (SyncPositionY &&
		//     Mathf.Abs(networkState.PositionY - position.y) > PositionThreshold)
		bool L_16 = __this->___SyncPositionY_19;
		if (!L_16)
		{
			goto IL_0092;
		}
	}
	{
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_17 = ___networkState0;
		float L_18 = L_17->___PositionY_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___position2;
		float L_20 = L_19.___y_3;
		float L_21;
		L_21 = fabsf(((float)il2cpp_codegen_subtract(L_18, L_20)));
		float L_22 = __this->___PositionThreshold_27;
		if ((!(((float)L_21) > ((float)L_22))))
		{
			goto IL_0092;
		}
	}
	{
		// networkState.PositionY = position.y;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_23 = ___networkState0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___position2;
		float L_25 = L_24.___y_3;
		L_23->___PositionY_13 = L_25;
		// networkState.HasPositionY = true;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_26 = ___networkState0;
		NetworkTransformState_set_HasPositionY_mC1F10530374A7151FA9BEF0A32E8A73EFF75BD48(L_26, (bool)1, NULL);
		// isPositionDirty = true;
		V_1 = (bool)1;
	}

IL_0092:
	{
		// if (SyncPositionZ &&
		//     Mathf.Abs(networkState.PositionZ - position.z) > PositionThreshold)
		bool L_27 = __this->___SyncPositionZ_20;
		if (!L_27)
		{
			goto IL_00c9;
		}
	}
	{
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_28 = ___networkState0;
		float L_29 = L_28->___PositionZ_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = ___position2;
		float L_31 = L_30.___z_4;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_29, L_31)));
		float L_33 = __this->___PositionThreshold_27;
		if ((!(((float)L_32) > ((float)L_33))))
		{
			goto IL_00c9;
		}
	}
	{
		// networkState.PositionZ = position.z;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_34 = ___networkState0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = ___position2;
		float L_36 = L_35.___z_4;
		L_34->___PositionZ_14 = L_36;
		// networkState.HasPositionZ = true;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_37 = ___networkState0;
		NetworkTransformState_set_HasPositionZ_mD5785F0A569A6E65B78EE0E98F43AE0E4C0048D8(L_37, (bool)1, NULL);
		// isPositionDirty = true;
		V_1 = (bool)1;
	}

IL_00c9:
	{
		// if (SyncRotAngleX &&
		//     Mathf.Abs(networkState.RotAngleX - rotAngles.x) > RotAngleThreshold)
		bool L_38 = __this->___SyncRotAngleX_21;
		if (!L_38)
		{
			goto IL_0102;
		}
	}
	{
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_39 = ___networkState0;
		float L_40 = L_39->___RotAngleX_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = ___rotAngles3;
		float L_42 = L_41.___x_2;
		float L_43;
		L_43 = fabsf(((float)il2cpp_codegen_subtract(L_40, L_42)));
		float L_44 = __this->___RotAngleThreshold_28;
		if ((!(((float)L_43) > ((float)L_44))))
		{
			goto IL_0102;
		}
	}
	{
		// networkState.RotAngleX = rotAngles.x;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_45 = ___networkState0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = ___rotAngles3;
		float L_47 = L_46.___x_2;
		L_45->___RotAngleX_15 = L_47;
		// networkState.HasRotAngleX = true;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_48 = ___networkState0;
		NetworkTransformState_set_HasRotAngleX_mFD3487AA6A89AC649BCC11F35D8F304C0A9F8EF3(L_48, (bool)1, NULL);
		// isRotationDirty = true;
		V_2 = (bool)1;
	}

IL_0102:
	{
		// if (SyncRotAngleY &&
		//     Mathf.Abs(networkState.RotAngleY - rotAngles.y) > RotAngleThreshold)
		bool L_49 = __this->___SyncRotAngleY_22;
		if (!L_49)
		{
			goto IL_013b;
		}
	}
	{
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_50 = ___networkState0;
		float L_51 = L_50->___RotAngleY_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = ___rotAngles3;
		float L_53 = L_52.___y_3;
		float L_54;
		L_54 = fabsf(((float)il2cpp_codegen_subtract(L_51, L_53)));
		float L_55 = __this->___RotAngleThreshold_28;
		if ((!(((float)L_54) > ((float)L_55))))
		{
			goto IL_013b;
		}
	}
	{
		// networkState.RotAngleY = rotAngles.y;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_56 = ___networkState0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = ___rotAngles3;
		float L_58 = L_57.___y_3;
		L_56->___RotAngleY_16 = L_58;
		// networkState.HasRotAngleY = true;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_59 = ___networkState0;
		NetworkTransformState_set_HasRotAngleY_m8706FE3EBF4726B0533FA4717A6089EDC473FC2C(L_59, (bool)1, NULL);
		// isRotationDirty = true;
		V_2 = (bool)1;
	}

IL_013b:
	{
		// if (SyncRotAngleZ &&
		//     Mathf.Abs(networkState.RotAngleZ - rotAngles.z) > RotAngleThreshold)
		bool L_60 = __this->___SyncRotAngleZ_23;
		if (!L_60)
		{
			goto IL_0174;
		}
	}
	{
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_61 = ___networkState0;
		float L_62 = L_61->___RotAngleZ_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = ___rotAngles3;
		float L_64 = L_63.___z_4;
		float L_65;
		L_65 = fabsf(((float)il2cpp_codegen_subtract(L_62, L_64)));
		float L_66 = __this->___RotAngleThreshold_28;
		if ((!(((float)L_65) > ((float)L_66))))
		{
			goto IL_0174;
		}
	}
	{
		// networkState.RotAngleZ = rotAngles.z;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_67 = ___networkState0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = ___rotAngles3;
		float L_69 = L_68.___z_4;
		L_67->___RotAngleZ_17 = L_69;
		// networkState.HasRotAngleZ = true;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_70 = ___networkState0;
		NetworkTransformState_set_HasRotAngleZ_m4B5C80348A28835BCA0E3E561F70FBF69072F528(L_70, (bool)1, NULL);
		// isRotationDirty = true;
		V_2 = (bool)1;
	}

IL_0174:
	{
		// if (SyncScaleX &&
		//     Mathf.Abs(networkState.ScaleX - scale.x) > ScaleThreshold)
		bool L_71 = __this->___SyncScaleX_24;
		if (!L_71)
		{
			goto IL_01ad;
		}
	}
	{
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_72 = ___networkState0;
		float L_73 = L_72->___ScaleX_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = ___scale4;
		float L_75 = L_74.___x_2;
		float L_76;
		L_76 = fabsf(((float)il2cpp_codegen_subtract(L_73, L_75)));
		float L_77 = __this->___ScaleThreshold_29;
		if ((!(((float)L_76) > ((float)L_77))))
		{
			goto IL_01ad;
		}
	}
	{
		// networkState.ScaleX = scale.x;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_78 = ___networkState0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = ___scale4;
		float L_80 = L_79.___x_2;
		L_78->___ScaleX_18 = L_80;
		// networkState.HasScaleX = true;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_81 = ___networkState0;
		NetworkTransformState_set_HasScaleX_m4C1A8819BEB42604BED6E8F1D13C45A873E2E1D1(L_81, (bool)1, NULL);
		// isScaleDirty = true;
		V_3 = (bool)1;
	}

IL_01ad:
	{
		// if (SyncScaleY &&
		//     Mathf.Abs(networkState.ScaleY - scale.y) > ScaleThreshold)
		bool L_82 = __this->___SyncScaleY_25;
		if (!L_82)
		{
			goto IL_01e6;
		}
	}
	{
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_83 = ___networkState0;
		float L_84 = L_83->___ScaleY_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = ___scale4;
		float L_86 = L_85.___y_3;
		float L_87;
		L_87 = fabsf(((float)il2cpp_codegen_subtract(L_84, L_86)));
		float L_88 = __this->___ScaleThreshold_29;
		if ((!(((float)L_87) > ((float)L_88))))
		{
			goto IL_01e6;
		}
	}
	{
		// networkState.ScaleY = scale.y;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_89 = ___networkState0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = ___scale4;
		float L_91 = L_90.___y_3;
		L_89->___ScaleY_19 = L_91;
		// networkState.HasScaleY = true;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_92 = ___networkState0;
		NetworkTransformState_set_HasScaleY_m55D88DF7CF380773117F6132BF7A46B89C70D0AB(L_92, (bool)1, NULL);
		// isScaleDirty = true;
		V_3 = (bool)1;
	}

IL_01e6:
	{
		// if (SyncScaleZ &&
		//     Mathf.Abs(networkState.ScaleZ - scale.z) > ScaleThreshold)
		bool L_93 = __this->___SyncScaleZ_26;
		if (!L_93)
		{
			goto IL_021f;
		}
	}
	{
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_94 = ___networkState0;
		float L_95 = L_94->___ScaleZ_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = ___scale4;
		float L_97 = L_96.___z_4;
		float L_98;
		L_98 = fabsf(((float)il2cpp_codegen_subtract(L_95, L_97)));
		float L_99 = __this->___ScaleThreshold_29;
		if ((!(((float)L_98) > ((float)L_99))))
		{
			goto IL_021f;
		}
	}
	{
		// networkState.ScaleZ = scale.z;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_100 = ___networkState0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = ___scale4;
		float L_102 = L_101.___z_4;
		L_100->___ScaleZ_20 = L_102;
		// networkState.HasScaleZ = true;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_103 = ___networkState0;
		NetworkTransformState_set_HasScaleZ_m96A06064AF420C4FBE9B3E40121905669A4FBAD2(L_103, (bool)1, NULL);
		// isScaleDirty = true;
		V_3 = (bool)1;
	}

IL_021f:
	{
		// isDirty |= isPositionDirty || isRotationDirty || isScaleDirty;
		bool L_104 = V_0;
		bool L_105 = V_1;
		bool L_106 = V_2;
		bool L_107 = V_3;
		V_0 = (bool)((int32_t)((int32_t)L_104|((int32_t)(((int32_t)((int32_t)L_105|(int32_t)L_106))|(int32_t)L_107))));
		// if (isDirty)
		bool L_108 = V_0;
		if (!L_108)
		{
			goto IL_0231;
		}
	}
	{
		// networkState.SentTime = dirtyTime;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_109 = ___networkState0;
		double L_110 = ___dirtyTime1;
		L_109->___SentTime_21 = L_110;
	}

IL_0231:
	{
		// return (isDirty, isPositionDirty, isRotationDirty, isScaleDirty);
		bool L_111 = V_0;
		bool L_112 = V_1;
		bool L_113 = V_2;
		bool L_114 = V_3;
		ValueTuple_4_tA6BBB2A2AF4C95729A202670B298BBB74D2EF1AC L_115;
		memset((&L_115), 0, sizeof(L_115));
		ValueTuple_4__ctor_m356A659364AE3B804809D81AF42F1320F3F53FBC((&L_115), L_111, L_112, L_113, L_114, /*hidden argument*/ValueTuple_4__ctor_m356A659364AE3B804809D81AF42F1320F3F53FBC_RuntimeMethod_var);
		return L_115;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::ApplyInterpolatedNetworkStateToTransform(Unity.Netcode.Components.NetworkTransform/NetworkTransformState,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_ApplyInterpolatedNetworkStateToTransform_m5488830F265BBF2CF5298541099EA2E9AB611FA2 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___networkState0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transformToUpdate1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1_GetInterpolatedValue_m7122EEDBDF0BFCAF1D2A7199A1D2D8DBB430C33E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1_GetInterpolatedValue_mABAA50082A53E38CA5B772C9C20CD0B892E4DF3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B10_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B8_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B9_0 = NULL;
	float G_B11_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B11_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B16_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B14_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B15_0 = NULL;
	float G_B17_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B17_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B22_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B20_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B21_0 = NULL;
	float G_B23_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B23_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B31_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B29_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B30_0 = NULL;
	float G_B32_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B32_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B37_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B35_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B36_0 = NULL;
	float G_B38_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B38_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B43_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B41_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B42_0 = NULL;
	float G_B44_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B44_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B49_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B47_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B48_0 = NULL;
	float G_B50_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B50_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B55_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B53_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B54_0 = NULL;
	float G_B56_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B56_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B61_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B59_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B60_0 = NULL;
	float G_B62_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B62_1 = NULL;
	{
		// m_PrevNetworkState = networkState;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_0 = ___networkState0;
		__this->___m_PrevNetworkState_37 = L_0;
		// var interpolatedPosition = InLocalSpace ? transformToUpdate.localPosition : transformToUpdate.position;
		bool L_1 = __this->___InLocalSpace_30;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___transformToUpdate1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		G_B3_0 = L_3;
		goto IL_001d;
	}

IL_0017:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___transformToUpdate1;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_4, NULL);
		G_B3_0 = L_5;
	}

IL_001d:
	{
		V_0 = G_B3_0;
		// var interpolatedRotAngles = InLocalSpace ? transformToUpdate.localEulerAngles : transformToUpdate.eulerAngles;
		bool L_6 = __this->___InLocalSpace_30;
		if (L_6)
		{
			goto IL_002e;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___transformToUpdate1;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_7, NULL);
		G_B6_0 = L_8;
		goto IL_0034;
	}

IL_002e:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___transformToUpdate1;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_9, NULL);
		G_B6_0 = L_10;
	}

IL_0034:
	{
		V_1 = G_B6_0;
		// var interpolatedScale = transformToUpdate.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = ___transformToUpdate1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_11, NULL);
		V_2 = L_12;
		// InLocalSpace = networkState.InLocalSpace;
		bool L_13;
		L_13 = NetworkTransformState_get_InLocalSpace_m97EFBEEA87FCFF746BE37A23B9E4F26667687174((&___networkState0), NULL);
		__this->___InLocalSpace_30 = L_13;
		// if (SyncPositionX)
		bool L_14 = __this->___SyncPositionX_18;
		if (!L_14)
		{
			goto IL_0082;
		}
	}
	{
		// interpolatedPosition.x = networkState.IsTeleportingNextFrame || !Interpolate ? networkState.Position.x : m_PositionXInterpolator.GetInterpolatedValue();
		bool L_15;
		L_15 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233((&___networkState0), NULL);
		G_B8_0 = (&V_0);
		if (L_15)
		{
			G_B10_0 = (&V_0);
			goto IL_0071;
		}
	}
	{
		bool L_16 = __this->___Interpolate_31;
		G_B9_0 = G_B8_0;
		if (!L_16)
		{
			G_B10_0 = G_B8_0;
			goto IL_0071;
		}
	}
	{
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_17 = __this->___m_PositionXInterpolator_40;
		NullCheck(L_17);
		float L_18;
		L_18 = BufferedLinearInterpolator_1_GetInterpolatedValue_mABAA50082A53E38CA5B772C9C20CD0B892E4DF3A_inline(L_17, BufferedLinearInterpolator_1_GetInterpolatedValue_mABAA50082A53E38CA5B772C9C20CD0B892E4DF3A_RuntimeMethod_var);
		G_B11_0 = L_18;
		G_B11_1 = G_B9_0;
		goto IL_007d;
	}

IL_0071:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = NetworkTransformState_get_Position_m6EE3CD882D7AE5735F7CB7272B74697DB4F8C7A8((&___networkState0), NULL);
		float L_20 = L_19.___x_2;
		G_B11_0 = L_20;
		G_B11_1 = G_B10_0;
	}

IL_007d:
	{
		G_B11_1->___x_2 = G_B11_0;
	}

IL_0082:
	{
		// if (SyncPositionY)
		bool L_21 = __this->___SyncPositionY_19;
		if (!L_21)
		{
			goto IL_00bb;
		}
	}
	{
		// interpolatedPosition.y = networkState.IsTeleportingNextFrame || !Interpolate ? networkState.Position.y : m_PositionYInterpolator.GetInterpolatedValue();
		bool L_22;
		L_22 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233((&___networkState0), NULL);
		G_B14_0 = (&V_0);
		if (L_22)
		{
			G_B16_0 = (&V_0);
			goto IL_00aa;
		}
	}
	{
		bool L_23 = __this->___Interpolate_31;
		G_B15_0 = G_B14_0;
		if (!L_23)
		{
			G_B16_0 = G_B14_0;
			goto IL_00aa;
		}
	}
	{
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_24 = __this->___m_PositionYInterpolator_41;
		NullCheck(L_24);
		float L_25;
		L_25 = BufferedLinearInterpolator_1_GetInterpolatedValue_mABAA50082A53E38CA5B772C9C20CD0B892E4DF3A_inline(L_24, BufferedLinearInterpolator_1_GetInterpolatedValue_mABAA50082A53E38CA5B772C9C20CD0B892E4DF3A_RuntimeMethod_var);
		G_B17_0 = L_25;
		G_B17_1 = G_B15_0;
		goto IL_00b6;
	}

IL_00aa:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = NetworkTransformState_get_Position_m6EE3CD882D7AE5735F7CB7272B74697DB4F8C7A8((&___networkState0), NULL);
		float L_27 = L_26.___y_3;
		G_B17_0 = L_27;
		G_B17_1 = G_B16_0;
	}

IL_00b6:
	{
		G_B17_1->___y_3 = G_B17_0;
	}

IL_00bb:
	{
		// if (SyncPositionZ)
		bool L_28 = __this->___SyncPositionZ_20;
		if (!L_28)
		{
			goto IL_00f4;
		}
	}
	{
		// interpolatedPosition.z = networkState.IsTeleportingNextFrame || !Interpolate ? networkState.Position.z : m_PositionZInterpolator.GetInterpolatedValue();
		bool L_29;
		L_29 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233((&___networkState0), NULL);
		G_B20_0 = (&V_0);
		if (L_29)
		{
			G_B22_0 = (&V_0);
			goto IL_00e3;
		}
	}
	{
		bool L_30 = __this->___Interpolate_31;
		G_B21_0 = G_B20_0;
		if (!L_30)
		{
			G_B22_0 = G_B20_0;
			goto IL_00e3;
		}
	}
	{
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_31 = __this->___m_PositionZInterpolator_42;
		NullCheck(L_31);
		float L_32;
		L_32 = BufferedLinearInterpolator_1_GetInterpolatedValue_mABAA50082A53E38CA5B772C9C20CD0B892E4DF3A_inline(L_31, BufferedLinearInterpolator_1_GetInterpolatedValue_mABAA50082A53E38CA5B772C9C20CD0B892E4DF3A_RuntimeMethod_var);
		G_B23_0 = L_32;
		G_B23_1 = G_B21_0;
		goto IL_00ef;
	}

IL_00e3:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = NetworkTransformState_get_Position_m6EE3CD882D7AE5735F7CB7272B74697DB4F8C7A8((&___networkState0), NULL);
		float L_34 = L_33.___z_4;
		G_B23_0 = L_34;
		G_B23_1 = G_B22_0;
	}

IL_00ef:
	{
		G_B23_1->___z_4 = G_B23_0;
	}

IL_00f4:
	{
		// if (SyncRotAngleX || SyncRotAngleY || SyncRotAngleZ)
		bool L_35 = __this->___SyncRotAngleX_21;
		if (L_35)
		{
			goto IL_010f;
		}
	}
	{
		bool L_36 = __this->___SyncRotAngleY_22;
		if (L_36)
		{
			goto IL_010f;
		}
	}
	{
		bool L_37 = __this->___SyncRotAngleZ_23;
		if (!L_37)
		{
			goto IL_01c0;
		}
	}

IL_010f:
	{
		// var eulerAngles = m_RotationInterpolator.GetInterpolatedValue().eulerAngles;
		BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B* L_38 = __this->___m_RotationInterpolator_43;
		NullCheck(L_38);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = BufferedLinearInterpolator_1_GetInterpolatedValue_m7122EEDBDF0BFCAF1D2A7199A1D2D8DBB430C33E_inline(L_38, BufferedLinearInterpolator_1_GetInterpolatedValue_m7122EEDBDF0BFCAF1D2A7199A1D2D8DBB430C33E_RuntimeMethod_var);
		V_4 = L_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_4), NULL);
		V_3 = L_40;
		// if (SyncRotAngleX)
		bool L_41 = __this->___SyncRotAngleX_21;
		if (!L_41)
		{
			goto IL_0158;
		}
	}
	{
		// interpolatedRotAngles.x = networkState.IsTeleportingNextFrame || !Interpolate ? networkState.Rotation.x : eulerAngles.x;
		bool L_42;
		L_42 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233((&___networkState0), NULL);
		G_B29_0 = (&V_1);
		if (L_42)
		{
			G_B31_0 = (&V_1);
			goto IL_0147;
		}
	}
	{
		bool L_43 = __this->___Interpolate_31;
		G_B30_0 = G_B29_0;
		if (!L_43)
		{
			G_B31_0 = G_B29_0;
			goto IL_0147;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_3;
		float L_45 = L_44.___x_2;
		G_B32_0 = L_45;
		G_B32_1 = G_B30_0;
		goto IL_0153;
	}

IL_0147:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = NetworkTransformState_get_Rotation_m46EE6E47371DEB9BA5F3EB307364DD0578918A8F((&___networkState0), NULL);
		float L_47 = L_46.___x_2;
		G_B32_0 = L_47;
		G_B32_1 = G_B31_0;
	}

IL_0153:
	{
		G_B32_1->___x_2 = G_B32_0;
	}

IL_0158:
	{
		// if (SyncRotAngleY)
		bool L_48 = __this->___SyncRotAngleY_22;
		if (!L_48)
		{
			goto IL_018c;
		}
	}
	{
		// interpolatedRotAngles.y = networkState.IsTeleportingNextFrame || !Interpolate ? networkState.Rotation.y : eulerAngles.y;
		bool L_49;
		L_49 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233((&___networkState0), NULL);
		G_B35_0 = (&V_1);
		if (L_49)
		{
			G_B37_0 = (&V_1);
			goto IL_017b;
		}
	}
	{
		bool L_50 = __this->___Interpolate_31;
		G_B36_0 = G_B35_0;
		if (!L_50)
		{
			G_B37_0 = G_B35_0;
			goto IL_017b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_3;
		float L_52 = L_51.___y_3;
		G_B38_0 = L_52;
		G_B38_1 = G_B36_0;
		goto IL_0187;
	}

IL_017b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = NetworkTransformState_get_Rotation_m46EE6E47371DEB9BA5F3EB307364DD0578918A8F((&___networkState0), NULL);
		float L_54 = L_53.___y_3;
		G_B38_0 = L_54;
		G_B38_1 = G_B37_0;
	}

IL_0187:
	{
		G_B38_1->___y_3 = G_B38_0;
	}

IL_018c:
	{
		// if (SyncRotAngleZ)
		bool L_55 = __this->___SyncRotAngleZ_23;
		if (!L_55)
		{
			goto IL_01c0;
		}
	}
	{
		// interpolatedRotAngles.z = networkState.IsTeleportingNextFrame || !Interpolate ? networkState.Rotation.z : eulerAngles.z;
		bool L_56;
		L_56 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233((&___networkState0), NULL);
		G_B41_0 = (&V_1);
		if (L_56)
		{
			G_B43_0 = (&V_1);
			goto IL_01af;
		}
	}
	{
		bool L_57 = __this->___Interpolate_31;
		G_B42_0 = G_B41_0;
		if (!L_57)
		{
			G_B43_0 = G_B41_0;
			goto IL_01af;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_3;
		float L_59 = L_58.___z_4;
		G_B44_0 = L_59;
		G_B44_1 = G_B42_0;
		goto IL_01bb;
	}

IL_01af:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = NetworkTransformState_get_Rotation_m46EE6E47371DEB9BA5F3EB307364DD0578918A8F((&___networkState0), NULL);
		float L_61 = L_60.___z_4;
		G_B44_0 = L_61;
		G_B44_1 = G_B43_0;
	}

IL_01bb:
	{
		G_B44_1->___z_4 = G_B44_0;
	}

IL_01c0:
	{
		// if (SyncScaleX)
		bool L_62 = __this->___SyncScaleX_24;
		if (!L_62)
		{
			goto IL_01f9;
		}
	}
	{
		// interpolatedScale.x = networkState.IsTeleportingNextFrame || !Interpolate ? networkState.Scale.x : m_ScaleXInterpolator.GetInterpolatedValue();
		bool L_63;
		L_63 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233((&___networkState0), NULL);
		G_B47_0 = (&V_2);
		if (L_63)
		{
			G_B49_0 = (&V_2);
			goto IL_01e8;
		}
	}
	{
		bool L_64 = __this->___Interpolate_31;
		G_B48_0 = G_B47_0;
		if (!L_64)
		{
			G_B49_0 = G_B47_0;
			goto IL_01e8;
		}
	}
	{
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_65 = __this->___m_ScaleXInterpolator_44;
		NullCheck(L_65);
		float L_66;
		L_66 = BufferedLinearInterpolator_1_GetInterpolatedValue_mABAA50082A53E38CA5B772C9C20CD0B892E4DF3A_inline(L_65, BufferedLinearInterpolator_1_GetInterpolatedValue_mABAA50082A53E38CA5B772C9C20CD0B892E4DF3A_RuntimeMethod_var);
		G_B50_0 = L_66;
		G_B50_1 = G_B48_0;
		goto IL_01f4;
	}

IL_01e8:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = NetworkTransformState_get_Scale_m6DD817260F08350DBC11384C5BC478EAB014E26E((&___networkState0), NULL);
		float L_68 = L_67.___x_2;
		G_B50_0 = L_68;
		G_B50_1 = G_B49_0;
	}

IL_01f4:
	{
		G_B50_1->___x_2 = G_B50_0;
	}

IL_01f9:
	{
		// if (SyncScaleY)
		bool L_69 = __this->___SyncScaleY_25;
		if (!L_69)
		{
			goto IL_0232;
		}
	}
	{
		// interpolatedScale.y = networkState.IsTeleportingNextFrame || !Interpolate ? networkState.Scale.y : m_ScaleYInterpolator.GetInterpolatedValue();
		bool L_70;
		L_70 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233((&___networkState0), NULL);
		G_B53_0 = (&V_2);
		if (L_70)
		{
			G_B55_0 = (&V_2);
			goto IL_0221;
		}
	}
	{
		bool L_71 = __this->___Interpolate_31;
		G_B54_0 = G_B53_0;
		if (!L_71)
		{
			G_B55_0 = G_B53_0;
			goto IL_0221;
		}
	}
	{
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_72 = __this->___m_ScaleYInterpolator_45;
		NullCheck(L_72);
		float L_73;
		L_73 = BufferedLinearInterpolator_1_GetInterpolatedValue_mABAA50082A53E38CA5B772C9C20CD0B892E4DF3A_inline(L_72, BufferedLinearInterpolator_1_GetInterpolatedValue_mABAA50082A53E38CA5B772C9C20CD0B892E4DF3A_RuntimeMethod_var);
		G_B56_0 = L_73;
		G_B56_1 = G_B54_0;
		goto IL_022d;
	}

IL_0221:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = NetworkTransformState_get_Scale_m6DD817260F08350DBC11384C5BC478EAB014E26E((&___networkState0), NULL);
		float L_75 = L_74.___y_3;
		G_B56_0 = L_75;
		G_B56_1 = G_B55_0;
	}

IL_022d:
	{
		G_B56_1->___y_3 = G_B56_0;
	}

IL_0232:
	{
		// if (SyncScaleZ)
		bool L_76 = __this->___SyncScaleZ_26;
		if (!L_76)
		{
			goto IL_026b;
		}
	}
	{
		// interpolatedScale.z = networkState.IsTeleportingNextFrame || !Interpolate ? networkState.Scale.z : m_ScaleZInterpolator.GetInterpolatedValue();
		bool L_77;
		L_77 = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233((&___networkState0), NULL);
		G_B59_0 = (&V_2);
		if (L_77)
		{
			G_B61_0 = (&V_2);
			goto IL_025a;
		}
	}
	{
		bool L_78 = __this->___Interpolate_31;
		G_B60_0 = G_B59_0;
		if (!L_78)
		{
			G_B61_0 = G_B59_0;
			goto IL_025a;
		}
	}
	{
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_79 = __this->___m_ScaleZInterpolator_46;
		NullCheck(L_79);
		float L_80;
		L_80 = BufferedLinearInterpolator_1_GetInterpolatedValue_mABAA50082A53E38CA5B772C9C20CD0B892E4DF3A_inline(L_79, BufferedLinearInterpolator_1_GetInterpolatedValue_mABAA50082A53E38CA5B772C9C20CD0B892E4DF3A_RuntimeMethod_var);
		G_B62_0 = L_80;
		G_B62_1 = G_B60_0;
		goto IL_0266;
	}

IL_025a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = NetworkTransformState_get_Scale_m6DD817260F08350DBC11384C5BC478EAB014E26E((&___networkState0), NULL);
		float L_82 = L_81.___z_4;
		G_B62_0 = L_82;
		G_B62_1 = G_B61_0;
	}

IL_0266:
	{
		G_B62_1->___z_4 = G_B62_0;
	}

IL_026b:
	{
		// if (SyncPositionX || SyncPositionY || SyncPositionZ)
		bool L_83 = __this->___SyncPositionX_18;
		if (L_83)
		{
			goto IL_0283;
		}
	}
	{
		bool L_84 = __this->___SyncPositionY_19;
		if (L_84)
		{
			goto IL_0283;
		}
	}
	{
		bool L_85 = __this->___SyncPositionZ_20;
		if (!L_85)
		{
			goto IL_02a7;
		}
	}

IL_0283:
	{
		// if (InLocalSpace)
		bool L_86 = __this->___InLocalSpace_30;
		if (!L_86)
		{
			goto IL_0294;
		}
	}
	{
		// transformToUpdate.localPosition = interpolatedPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87 = ___transformToUpdate1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = V_0;
		NullCheck(L_87);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_87, L_88, NULL);
		goto IL_029b;
	}

IL_0294:
	{
		// transformToUpdate.position = interpolatedPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89 = ___transformToUpdate1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = V_0;
		NullCheck(L_89);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_89, L_90, NULL);
	}

IL_029b:
	{
		// m_PrevNetworkState.Position = interpolatedPosition;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_91 = (&__this->___m_PrevNetworkState_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = V_0;
		NetworkTransformState_set_Position_mAEBD3398159EBAFE97778684A564240F87AFCA1C(L_91, L_92, NULL);
	}

IL_02a7:
	{
		// if (SyncRotAngleX || SyncRotAngleY || SyncRotAngleZ)
		bool L_93 = __this->___SyncRotAngleX_21;
		if (L_93)
		{
			goto IL_02bf;
		}
	}
	{
		bool L_94 = __this->___SyncRotAngleY_22;
		if (L_94)
		{
			goto IL_02bf;
		}
	}
	{
		bool L_95 = __this->___SyncRotAngleZ_23;
		if (!L_95)
		{
			goto IL_02ed;
		}
	}

IL_02bf:
	{
		// if (InLocalSpace)
		bool L_96 = __this->___InLocalSpace_30;
		if (!L_96)
		{
			goto IL_02d5;
		}
	}
	{
		// transformToUpdate.localRotation = Quaternion.Euler(interpolatedRotAngles);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_97 = ___transformToUpdate1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_99;
		L_99 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_98, NULL);
		NullCheck(L_97);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_97, L_99, NULL);
		goto IL_02e1;
	}

IL_02d5:
	{
		// transformToUpdate.rotation = Quaternion.Euler(interpolatedRotAngles);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_100 = ___transformToUpdate1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_102;
		L_102 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_101, NULL);
		NullCheck(L_100);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_100, L_102, NULL);
	}

IL_02e1:
	{
		// m_PrevNetworkState.Rotation = interpolatedRotAngles;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_103 = (&__this->___m_PrevNetworkState_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = V_1;
		NetworkTransformState_set_Rotation_m115F1F57926A230C34F2CBE817EE11D3E520351B(L_103, L_104, NULL);
	}

IL_02ed:
	{
		// if (SyncScaleX || SyncScaleY || SyncScaleZ)
		bool L_105 = __this->___SyncScaleX_24;
		if (L_105)
		{
			goto IL_0305;
		}
	}
	{
		bool L_106 = __this->___SyncScaleY_25;
		if (L_106)
		{
			goto IL_0305;
		}
	}
	{
		bool L_107 = __this->___SyncScaleZ_26;
		if (!L_107)
		{
			goto IL_0318;
		}
	}

IL_0305:
	{
		// transformToUpdate.localScale = interpolatedScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_108 = ___transformToUpdate1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = V_2;
		NullCheck(L_108);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_108, L_109, NULL);
		// m_PrevNetworkState.Scale = interpolatedScale;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_110 = (&__this->___m_PrevNetworkState_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = V_2;
		NetworkTransformState_set_Scale_m6FF3625E2AE27323E1AD8174A4C28C7C4B8C9151(L_110, L_111, NULL);
	}

IL_0318:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::AddInterpolatedState(Unity.Netcode.Components.NetworkTransform/NetworkTransformState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_AddInterpolatedState_m349DB86EA15EB09A42211AEFE3F440B0F2CC86C8 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___newState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1_AddMeasurement_m7ECDD6542A70CBB3A21F25816AE5C7A3B2704889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1_AddMeasurement_mEA6D11B1B5852A10BD5E02C26C475FC2E8317C01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// var sentTime = newState.SentTime;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_0 = ___newState0;
		double L_1 = L_0.___SentTime_21;
		V_0 = L_1;
		// if (newState.HasPositionX)
		bool L_2;
		L_2 = NetworkTransformState_get_HasPositionX_m38C1D7FA45D4F042E1DF6DF427769E833DB1562B((&___newState0), NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// m_PositionXInterpolator.AddMeasurement(newState.PositionX, sentTime);
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_3 = __this->___m_PositionXInterpolator_40;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_4 = ___newState0;
		float L_5 = L_4.___PositionX_12;
		double L_6 = V_0;
		NullCheck(L_3);
		BufferedLinearInterpolator_1_AddMeasurement_mEA6D11B1B5852A10BD5E02C26C475FC2E8317C01(L_3, L_5, L_6, BufferedLinearInterpolator_1_AddMeasurement_mEA6D11B1B5852A10BD5E02C26C475FC2E8317C01_RuntimeMethod_var);
	}

IL_0022:
	{
		// if (newState.HasPositionY)
		bool L_7;
		L_7 = NetworkTransformState_get_HasPositionY_mAE9F9A90D1BE78E78A7B06EBFD935553D7B5BC1A((&___newState0), NULL);
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		// m_PositionYInterpolator.AddMeasurement(newState.PositionY, sentTime);
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_8 = __this->___m_PositionYInterpolator_41;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_9 = ___newState0;
		float L_10 = L_9.___PositionY_13;
		double L_11 = V_0;
		NullCheck(L_8);
		BufferedLinearInterpolator_1_AddMeasurement_mEA6D11B1B5852A10BD5E02C26C475FC2E8317C01(L_8, L_10, L_11, BufferedLinearInterpolator_1_AddMeasurement_mEA6D11B1B5852A10BD5E02C26C475FC2E8317C01_RuntimeMethod_var);
	}

IL_003d:
	{
		// if (newState.HasPositionZ)
		bool L_12;
		L_12 = NetworkTransformState_get_HasPositionZ_m720D04DBA54389D30D834C4317BC520A023ED05A((&___newState0), NULL);
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		// m_PositionZInterpolator.AddMeasurement(newState.PositionZ, sentTime);
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_13 = __this->___m_PositionZInterpolator_42;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_14 = ___newState0;
		float L_15 = L_14.___PositionZ_14;
		double L_16 = V_0;
		NullCheck(L_13);
		BufferedLinearInterpolator_1_AddMeasurement_mEA6D11B1B5852A10BD5E02C26C475FC2E8317C01(L_13, L_15, L_16, BufferedLinearInterpolator_1_AddMeasurement_mEA6D11B1B5852A10BD5E02C26C475FC2E8317C01_RuntimeMethod_var);
	}

IL_0058:
	{
		// m_RotationInterpolator.AddMeasurement(Quaternion.Euler(newState.Rotation), sentTime);
		BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B* L_17 = __this->___m_RotationInterpolator_43;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = NetworkTransformState_get_Rotation_m46EE6E47371DEB9BA5F3EB307364DD0578918A8F((&___newState0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_18, NULL);
		double L_20 = V_0;
		NullCheck(L_17);
		BufferedLinearInterpolator_1_AddMeasurement_m7ECDD6542A70CBB3A21F25816AE5C7A3B2704889(L_17, L_19, L_20, BufferedLinearInterpolator_1_AddMeasurement_m7ECDD6542A70CBB3A21F25816AE5C7A3B2704889_RuntimeMethod_var);
		// if (newState.HasScaleX)
		bool L_21;
		L_21 = NetworkTransformState_get_HasScaleX_m62884CDB2892EBAA435E6B5990ED6E263813E27F((&___newState0), NULL);
		if (!L_21)
		{
			goto IL_008b;
		}
	}
	{
		// m_ScaleXInterpolator.AddMeasurement(newState.ScaleX, sentTime);
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_22 = __this->___m_ScaleXInterpolator_44;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_23 = ___newState0;
		float L_24 = L_23.___ScaleX_18;
		double L_25 = V_0;
		NullCheck(L_22);
		BufferedLinearInterpolator_1_AddMeasurement_mEA6D11B1B5852A10BD5E02C26C475FC2E8317C01(L_22, L_24, L_25, BufferedLinearInterpolator_1_AddMeasurement_mEA6D11B1B5852A10BD5E02C26C475FC2E8317C01_RuntimeMethod_var);
	}

IL_008b:
	{
		// if (newState.HasScaleY)
		bool L_26;
		L_26 = NetworkTransformState_get_HasScaleY_m08BBB82139D65BFEB7A608F9CFC048E841ACA9DE((&___newState0), NULL);
		if (!L_26)
		{
			goto IL_00a6;
		}
	}
	{
		// m_ScaleYInterpolator.AddMeasurement(newState.ScaleY, sentTime);
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_27 = __this->___m_ScaleYInterpolator_45;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_28 = ___newState0;
		float L_29 = L_28.___ScaleY_19;
		double L_30 = V_0;
		NullCheck(L_27);
		BufferedLinearInterpolator_1_AddMeasurement_mEA6D11B1B5852A10BD5E02C26C475FC2E8317C01(L_27, L_29, L_30, BufferedLinearInterpolator_1_AddMeasurement_mEA6D11B1B5852A10BD5E02C26C475FC2E8317C01_RuntimeMethod_var);
	}

IL_00a6:
	{
		// if (newState.HasScaleZ)
		bool L_31;
		L_31 = NetworkTransformState_get_HasScaleZ_m4C1375674CCF760F831467D767B1CB24DB916F12((&___newState0), NULL);
		if (!L_31)
		{
			goto IL_00c1;
		}
	}
	{
		// m_ScaleZInterpolator.AddMeasurement(newState.ScaleZ, sentTime);
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_32 = __this->___m_ScaleZInterpolator_46;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_33 = ___newState0;
		float L_34 = L_33.___ScaleZ_20;
		double L_35 = V_0;
		NullCheck(L_32);
		BufferedLinearInterpolator_1_AddMeasurement_mEA6D11B1B5852A10BD5E02C26C475FC2E8317C01(L_32, L_34, L_35, BufferedLinearInterpolator_1_AddMeasurement_mEA6D11B1B5852A10BD5E02C26C475FC2E8317C01_RuntimeMethod_var);
	}

IL_00c1:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::OnNetworkStateChanged(Unity.Netcode.Components.NetworkTransform/NetworkTransformState,Unity.Netcode.Components.NetworkTransform/NetworkTransformState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_OnNetworkStateChanged_m7D385806D635761F884FB823CF8967DF7AEDD3A1 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___oldState0, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___newState1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!NetworkObject.IsSpawned)
		NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* L_0;
		L_0 = NetworkBehaviour_get_NetworkObject_m5B4FBD71361ED0640492D6AAB454C393E8394224(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = NetworkObject_get_IsSpawned_mDAF52C8099FE7F21C7AFF36622F74688E9E07CDA_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (CanCommitToTransform)
		bool L_2 = __this->___CanCommitToTransform_32;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// Debug.DrawLine(newState.Position, newState.Position + Vector3.up + Vector3.left, Color.green, 10, false);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = NetworkTransformState_get_Position_m6EE3CD882D7AE5735F7CB7272B74697DB4F8C7A8((&___newState1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = NetworkTransformState_get_Position_m6EE3CD882D7AE5735F7CB7272B74697DB4F8C7A8((&___newState1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_6, L_7, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m327C20CF784AABE55B9F10B1B296C38347595FAB(L_3, L_8, L_9, (10.0f), (bool)0, NULL);
		// AddInterpolatedState(newState);
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_10 = ___newState1;
		NetworkTransform_AddInterpolatedState_m349DB86EA15EB09A42211AEFE3F440B0F2CC86C8(__this, L_10, NULL);
		// if (m_CachedNetworkManager.LogLevel == LogLevel.Developer)
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_11 = __this->___m_CachedNetworkManager_34;
		NullCheck(L_11);
		int32_t L_12 = L_11->___LogLevel_17;
		if (L_12)
		{
			goto IL_00ad;
		}
	}
	{
		// var pos = new Vector3(newState.PositionX, newState.PositionY, newState.PositionZ);
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_13 = ___newState1;
		float L_14 = L_13.___PositionX_12;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_15 = ___newState1;
		float L_16 = L_15.___PositionY_13;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_17 = ___newState1;
		float L_18 = L_17.___PositionZ_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), L_14, L_16, L_18, /*hidden argument*/NULL);
		// Debug.DrawLine(pos, pos + Vector3.up + Vector3.left * Random.Range(0.5f, 2f), Color.green, k_DebugDrawLineTime, false);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = L_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_20, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		float L_24;
		L_24 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.5f), (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_22, L_25, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m327C20CF784AABE55B9F10B1B296C38347595FAB(L_20, L_26, L_27, (10.0f), (bool)0, NULL);
	}

IL_00ad:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_Awake_m8B73D32E186892B6681D37F355FB1C8A810D30CE (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolatorQuaternion_t33BA43A1A51A5C5000D00054578ECAAC53A2A516_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8B8FA25A1D47E810AB99990741511BA627E71775_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDB349D171938997F6579258324478F4C93CB90FA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PositionXInterpolator = new BufferedLinearInterpolatorFloat();
		BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524* L_0 = (BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524*)il2cpp_codegen_object_new(BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BufferedLinearInterpolatorFloat__ctor_m694812EACC50BDD059E307A466E725E007AA6636(L_0, NULL);
		__this->___m_PositionXInterpolator_40 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PositionXInterpolator_40), (void*)L_0);
		// m_PositionYInterpolator = new BufferedLinearInterpolatorFloat();
		BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524* L_1 = (BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524*)il2cpp_codegen_object_new(BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BufferedLinearInterpolatorFloat__ctor_m694812EACC50BDD059E307A466E725E007AA6636(L_1, NULL);
		__this->___m_PositionYInterpolator_41 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PositionYInterpolator_41), (void*)L_1);
		// m_PositionZInterpolator = new BufferedLinearInterpolatorFloat();
		BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524* L_2 = (BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524*)il2cpp_codegen_object_new(BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BufferedLinearInterpolatorFloat__ctor_m694812EACC50BDD059E307A466E725E007AA6636(L_2, NULL);
		__this->___m_PositionZInterpolator_42 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PositionZInterpolator_42), (void*)L_2);
		// m_RotationInterpolator = new BufferedLinearInterpolatorQuaternion(); // rotation is a single Quaternion since each euler axis will affect the quaternion's final value
		BufferedLinearInterpolatorQuaternion_t33BA43A1A51A5C5000D00054578ECAAC53A2A516* L_3 = (BufferedLinearInterpolatorQuaternion_t33BA43A1A51A5C5000D00054578ECAAC53A2A516*)il2cpp_codegen_object_new(BufferedLinearInterpolatorQuaternion_t33BA43A1A51A5C5000D00054578ECAAC53A2A516_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BufferedLinearInterpolatorQuaternion__ctor_mD62ACE4858EF30ABDBB945CA521DF5B71A381152(L_3, NULL);
		__this->___m_RotationInterpolator_43 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RotationInterpolator_43), (void*)L_3);
		// m_ScaleXInterpolator = new BufferedLinearInterpolatorFloat();
		BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524* L_4 = (BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524*)il2cpp_codegen_object_new(BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BufferedLinearInterpolatorFloat__ctor_m694812EACC50BDD059E307A466E725E007AA6636(L_4, NULL);
		__this->___m_ScaleXInterpolator_44 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ScaleXInterpolator_44), (void*)L_4);
		// m_ScaleYInterpolator = new BufferedLinearInterpolatorFloat();
		BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524* L_5 = (BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524*)il2cpp_codegen_object_new(BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		BufferedLinearInterpolatorFloat__ctor_m694812EACC50BDD059E307A466E725E007AA6636(L_5, NULL);
		__this->___m_ScaleYInterpolator_45 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ScaleYInterpolator_45), (void*)L_5);
		// m_ScaleZInterpolator = new BufferedLinearInterpolatorFloat();
		BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524* L_6 = (BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524*)il2cpp_codegen_object_new(BufferedLinearInterpolatorFloat_t42CA5244328BFD2D629F1B1AABE1530651FA6524_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		BufferedLinearInterpolatorFloat__ctor_m694812EACC50BDD059E307A466E725E007AA6636(L_6, NULL);
		__this->___m_ScaleZInterpolator_46 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ScaleZInterpolator_46), (void*)L_6);
		// if (m_AllFloatInterpolators.Count == 0)
		List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E* L_7 = __this->___m_AllFloatInterpolators_47;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mDB349D171938997F6579258324478F4C93CB90FA_inline(L_7, List_1_get_Count_mDB349D171938997F6579258324478F4C93CB90FA_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_00c0;
		}
	}
	{
		// m_AllFloatInterpolators.Add(m_PositionXInterpolator);
		List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E* L_9 = __this->___m_AllFloatInterpolators_47;
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_10 = __this->___m_PositionXInterpolator_40;
		NullCheck(L_9);
		List_1_Add_m8B8FA25A1D47E810AB99990741511BA627E71775_inline(L_9, L_10, List_1_Add_m8B8FA25A1D47E810AB99990741511BA627E71775_RuntimeMethod_var);
		// m_AllFloatInterpolators.Add(m_PositionYInterpolator);
		List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E* L_11 = __this->___m_AllFloatInterpolators_47;
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_12 = __this->___m_PositionYInterpolator_41;
		NullCheck(L_11);
		List_1_Add_m8B8FA25A1D47E810AB99990741511BA627E71775_inline(L_11, L_12, List_1_Add_m8B8FA25A1D47E810AB99990741511BA627E71775_RuntimeMethod_var);
		// m_AllFloatInterpolators.Add(m_PositionZInterpolator);
		List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E* L_13 = __this->___m_AllFloatInterpolators_47;
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_14 = __this->___m_PositionZInterpolator_42;
		NullCheck(L_13);
		List_1_Add_m8B8FA25A1D47E810AB99990741511BA627E71775_inline(L_13, L_14, List_1_Add_m8B8FA25A1D47E810AB99990741511BA627E71775_RuntimeMethod_var);
		// m_AllFloatInterpolators.Add(m_ScaleXInterpolator);
		List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E* L_15 = __this->___m_AllFloatInterpolators_47;
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_16 = __this->___m_ScaleXInterpolator_44;
		NullCheck(L_15);
		List_1_Add_m8B8FA25A1D47E810AB99990741511BA627E71775_inline(L_15, L_16, List_1_Add_m8B8FA25A1D47E810AB99990741511BA627E71775_RuntimeMethod_var);
		// m_AllFloatInterpolators.Add(m_ScaleYInterpolator);
		List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E* L_17 = __this->___m_AllFloatInterpolators_47;
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_18 = __this->___m_ScaleYInterpolator_45;
		NullCheck(L_17);
		List_1_Add_m8B8FA25A1D47E810AB99990741511BA627E71775_inline(L_17, L_18, List_1_Add_m8B8FA25A1D47E810AB99990741511BA627E71775_RuntimeMethod_var);
		// m_AllFloatInterpolators.Add(m_ScaleZInterpolator);
		List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E* L_19 = __this->___m_AllFloatInterpolators_47;
		BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_20 = __this->___m_ScaleZInterpolator_46;
		NullCheck(L_19);
		List_1_Add_m8B8FA25A1D47E810AB99990741511BA627E71775_inline(L_19, L_20, List_1_Add_m8B8FA25A1D47E810AB99990741511BA627E71775_RuntimeMethod_var);
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::OnNetworkSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_OnNetworkSpawn_m92ADAFCF17DF55EABB67D1136271E14DCF67DCCB (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransform_OnNetworkStateChanged_m7D385806D635761F884FB823CF8967DF7AEDD3A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Transform = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___m_Transform_48 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Transform_48), (void*)L_0);
		// m_ReplicatedNetworkState.OnValueChanged += OnNetworkStateChanged;
		NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9* L_1 = __this->___m_ReplicatedNetworkState_35;
		NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9* L_2 = L_1;
		NullCheck(L_2);
		OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F* L_3 = L_2->___OnValueChanged_7;
		OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F* L_4 = (OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F*)il2cpp_codegen_object_new(OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		OnValueChangedDelegate__ctor_mFD5FD05DE07CC5B982A25FBCF5B1921FDB69DE19(L_4, __this, (intptr_t)((void*)NetworkTransform_OnNetworkStateChanged_m7D385806D635761F884FB823CF8967DF7AEDD3A1_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		NullCheck(L_2);
		L_2->___OnValueChanged_7 = ((OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F*)Castclass((RuntimeObject*)L_5, OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___OnValueChanged_7), (void*)((OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F*)Castclass((RuntimeObject*)L_5, OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F_il2cpp_TypeInfo_var)));
		// CanCommitToTransform = IsServer;
		bool L_6;
		L_6 = NetworkBehaviour_get_IsServer_m57CCCE498593E3A21E6B952AB9C4BAA482EB4CD6(__this, NULL);
		__this->___CanCommitToTransform_32 = L_6;
		// m_CachedIsServer = IsServer;
		bool L_7;
		L_7 = NetworkBehaviour_get_IsServer_m57CCCE498593E3A21E6B952AB9C4BAA482EB4CD6(__this, NULL);
		__this->___m_CachedIsServer_33 = L_7;
		// m_CachedNetworkManager = NetworkManager;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_8;
		L_8 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(__this, NULL);
		__this->___m_CachedNetworkManager_34 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CachedNetworkManager_34), (void*)L_8);
		// if (CanCommitToTransform)
		bool L_9 = __this->___CanCommitToTransform_32;
		if (!L_9)
		{
			goto IL_007e;
		}
	}
	{
		// TryCommitTransformToServer(m_Transform, m_CachedNetworkManager.LocalTime.Time);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___m_Transform_48;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_11 = __this->___m_CachedNetworkManager_34;
		NullCheck(L_11);
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_12;
		L_12 = NetworkManager_get_LocalTime_m17506338EF54F39A0C27A56D822F17A112D49CC7(L_11, NULL);
		V_0 = L_12;
		double L_13;
		L_13 = NetworkTime_get_Time_mDC7F8AB78A0D860B5D3BF62AF1E42724059F690B_inline((&V_0), NULL);
		NetworkTransform_TryCommitTransformToServer_m6EC66780853F1DCD7297AF4DDF0468B7D6A61BD5(__this, L_10, L_13, NULL);
	}

IL_007e:
	{
		// m_LocalAuthoritativeNetworkState = m_ReplicatedNetworkState.Value;
		NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9* L_14 = __this->___m_ReplicatedNetworkState_35;
		NullCheck(L_14);
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_15;
		L_15 = VirtualFuncInvoker0< NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 >::Invoke(14 /* T Unity.Netcode.NetworkVariable`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::get_Value() */, L_14);
		__this->___m_LocalAuthoritativeNetworkState_36 = L_15;
		// Initialize();
		NetworkTransform_Initialize_m1C007AC47CC50EAC858D1CCA7B598A347AC96034(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::OnNetworkDespawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_OnNetworkDespawn_mADDDA7BF4C53258A0CBFA12A2D041672D5C63B25 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransform_OnNetworkStateChanged_m7D385806D635761F884FB823CF8967DF7AEDD3A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ReplicatedNetworkState.OnValueChanged -= OnNetworkStateChanged;
		NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9* L_0 = __this->___m_ReplicatedNetworkState_35;
		NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9* L_1 = L_0;
		NullCheck(L_1);
		OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F* L_2 = L_1->___OnValueChanged_7;
		OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F* L_3 = (OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F*)il2cpp_codegen_object_new(OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		OnValueChangedDelegate__ctor_mFD5FD05DE07CC5B982A25FBCF5B1921FDB69DE19(L_3, __this, (intptr_t)((void*)NetworkTransform_OnNetworkStateChanged_m7D385806D635761F884FB823CF8967DF7AEDD3A1_RuntimeMethod_var), NULL);
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		NullCheck(L_1);
		L_1->___OnValueChanged_7 = ((OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F*)Castclass((RuntimeObject*)L_4, OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___OnValueChanged_7), (void*)((OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F*)Castclass((RuntimeObject*)L_4, OnValueChangedDelegate_t0C62ABD393FAA5D1C1AF244469C9FD78513B966F_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::OnGainedOwnership()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_OnGainedOwnership_m4B3246D3E1FBF3B94D6D209B9A276AD61A1C27A2 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, const RuntimeMethod* method) 
{
	{
		// Initialize();
		NetworkTransform_Initialize_m1C007AC47CC50EAC858D1CCA7B598A347AC96034(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::OnLostOwnership()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_OnLostOwnership_m9F058A10E9EA3776BA0E01F91BBDD8218B0BE72D (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, const RuntimeMethod* method) 
{
	{
		// Initialize();
		NetworkTransform_Initialize_m1C007AC47CC50EAC858D1CCA7B598A347AC96034(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_Initialize_m1C007AC47CC50EAC858D1CCA7B598A347AC96034 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, const RuntimeMethod* method) 
{
	{
		// ResetInterpolatedStateToCurrentAuthoritativeState(); // useful for late joining
		NetworkTransform_ResetInterpolatedStateToCurrentAuthoritativeState_m1137FDC8AC132A4BC02C80F537B88C4F68E18B98(__this, NULL);
		// if (CanCommitToTransform)
		bool L_0 = __this->___CanCommitToTransform_32;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// m_ReplicatedNetworkState.SetDirty(true);
		NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9* L_1 = __this->___m_ReplicatedNetworkState_35;
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Unity.Netcode.NetworkVariableBase::SetDirty(System.Boolean) */, L_1, (bool)1);
		return;
	}

IL_001b:
	{
		// ApplyInterpolatedNetworkStateToTransform(m_ReplicatedNetworkState.Value, m_Transform);
		NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9* L_2 = __this->___m_ReplicatedNetworkState_35;
		NullCheck(L_2);
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_3;
		L_3 = VirtualFuncInvoker0< NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 >::Invoke(14 /* T Unity.Netcode.NetworkVariable`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::get_Value() */, L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___m_Transform_48;
		NetworkTransform_ApplyInterpolatedNetworkStateToTransform_m5488830F265BBF2CF5298541099EA2E9AB611FA2(__this, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::SetState(System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Quaternion>,System.Nullable`1<UnityEngine.Vector3>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_SetState_m20C3E4A01A85F4D6A9BE2338DB8503984CAE1486 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___posIn0, Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25 ___rotIn1, Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___scaleIn2, bool ___shouldGhostsInterpolate3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m9D3E39C05D6F69CFF5A2A4CD0034CDA830F7E2CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m2E107232031E57A2F8BF26712417E1BD4A0ABCDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	{
		// if (!IsOwner)
		bool L_0;
		L_0 = NetworkBehaviour_get_IsOwner_m2C408A356ACBD9AF0C991BF01B5F20C75891FAB3(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new Exception("Trying to set a state on a not owned transform");
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD71DEAB128B6EB84915F9EE4AE53F16C1449F651)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkTransform_SetState_m20C3E4A01A85F4D6A9BE2338DB8503984CAE1486_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if (m_CachedNetworkManager && !(m_CachedNetworkManager.IsConnectedClient || m_CachedNetworkManager.IsListening))
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = __this->___m_CachedNetworkManager_34;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_4 = __this->___m_CachedNetworkManager_34;
		NullCheck(L_4);
		bool L_5;
		L_5 = NetworkManager_get_IsConnectedClient_m6A551DE92D70EFC1940AB427EA727968DA3C9A59_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_003b;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_6 = __this->___m_CachedNetworkManager_34;
		NullCheck(L_6);
		bool L_7;
		L_7 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_6, NULL);
		if (L_7)
		{
			goto IL_003b;
		}
	}
	{
		// return;
		return;
	}

IL_003b:
	{
		// Vector3 pos = posIn == null ? transform.position : (Vector3)posIn;
		bool L_8;
		L_8 = Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline((&___posIn0), Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792((&___posIn0), Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var);
		G_B9_0 = L_9;
		goto IL_0058;
	}

IL_004d:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		G_B9_0 = L_11;
	}

IL_0058:
	{
		V_0 = G_B9_0;
		// Quaternion rot = rotIn == null ? transform.rotation : (Quaternion)rotIn;
		bool L_12;
		L_12 = Nullable_1_get_HasValue_m9D3E39C05D6F69CFF5A2A4CD0034CDA830F7E2CF_inline((&___rotIn1), Nullable_1_get_HasValue_m9D3E39C05D6F69CFF5A2A4CD0034CDA830F7E2CF_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Nullable_1_get_Value_m2E107232031E57A2F8BF26712417E1BD4A0ABCDC((&___rotIn1), Nullable_1_get_Value_m2E107232031E57A2F8BF26712417E1BD4A0ABCDC_RuntimeMethod_var);
		G_B12_0 = L_13;
		goto IL_0076;
	}

IL_006b:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_14, NULL);
		G_B12_0 = L_15;
	}

IL_0076:
	{
		V_1 = G_B12_0;
		// Vector3 scale = scaleIn == null ? transform.localScale : (Vector3)scaleIn;
		bool L_16;
		L_16 = Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline((&___scaleIn2), Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_0089;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792((&___scaleIn2), Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var);
		G_B15_0 = L_17;
		goto IL_0094;
	}

IL_0089:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_18, NULL);
		G_B15_0 = L_19;
	}

IL_0094:
	{
		V_2 = G_B15_0;
		// if (!CanCommitToTransform)
		bool L_20 = __this->___CanCommitToTransform_32;
		if (L_20)
		{
			goto IL_00b1;
		}
	}
	{
		// if (!m_CachedIsServer)
		bool L_21 = __this->___m_CachedIsServer_33;
		if (L_21)
		{
			goto IL_00e2;
		}
	}
	{
		// SetStateServerRpc(pos, rot, scale, shouldGhostsInterpolate);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_2;
		bool L_25 = ___shouldGhostsInterpolate3;
		NetworkTransform_SetStateServerRpc_m370797ABE81E0F2044CFEBC3EFB868E9158A00FF(__this, L_22, L_23, L_24, L_25, NULL);
		return;
	}

IL_00b1:
	{
		// m_Transform.position = pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___m_Transform_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_0;
		NullCheck(L_26);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_26, L_27, NULL);
		// m_Transform.rotation = rot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->___m_Transform_48;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29 = V_1;
		NullCheck(L_28);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_28, L_29, NULL);
		// m_Transform.localScale = scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = __this->___m_Transform_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_2;
		NullCheck(L_30);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_30, L_31, NULL);
		// m_LocalAuthoritativeNetworkState.IsTeleportingNextFrame = shouldGhostsInterpolate;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_32 = (&__this->___m_LocalAuthoritativeNetworkState_36);
		bool L_33 = ___shouldGhostsInterpolate3;
		NetworkTransformState_set_IsTeleportingNextFrame_m916BFF5B26DB5D75BFBC330F04466FED4AF2E7C4(L_32, L_33, NULL);
	}

IL_00e2:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::SetStateServerRpc(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_SetStateServerRpc_m370797ABE81E0F2044CFEBC3EFB868E9158A00FF (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale2, bool ___shouldTeleport3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF1323B69B63D7207805FA651F0DDDB44C848B1B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m43B787A9D8BFF0713DD22EDD0ACE8DCB1D0403C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m53EDE2E29B562A2314E00496FF0FCA51CA81BC42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_1;
	memset((&V_1), 0, sizeof(V_1));
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0;
		L_0 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(__this, NULL);
		V_0 = L_0;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		int32_t L_4 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_010a;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0058;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_7, NULL);
		if (!L_8)
		{
			goto IL_010a;
		}
	}

IL_0058:
	{
		uint64_t L_9;
		L_9 = NetworkBehaviour_get_OwnerClientId_m59ED21DE97867ED0CAE0C553A2BBE369543360BF(__this, NULL);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_10 = V_0;
		NullCheck(L_10);
		uint64_t L_11;
		L_11 = NetworkManager_get_LocalClientId_m1B93454E7949ACBF20043DCDD884F63E119E6577(L_10, NULL);
		if (!((((int32_t)((((int64_t)L_9) == ((int64_t)L_11))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_009e;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___LogLevel_17;
		if (!((((int32_t)((((int32_t)L_13) > ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
		{
			goto IL_009c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6, NULL);
	}

IL_009c:
	{
		return;
	}

IL_009e:
	{
		FastBufferWriter__ctor_mC30559B2929B00FB14A14546F92426A19AB7FFC4((&V_1), ((int32_t)1285), 2, ((int32_t)63985), NULL);
		FastBufferWriter_WriteValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m53EDE2E29B562A2314E00496FF0FCA51CA81BC42_inline((&V_1), (&___pos0), FastBufferWriter_WriteValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m53EDE2E29B562A2314E00496FF0FCA51CA81BC42_RuntimeMethod_var);
		FastBufferWriter_WriteValueSafe_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m43B787A9D8BFF0713DD22EDD0ACE8DCB1D0403C7_inline((&V_1), (&___rot1), FastBufferWriter_WriteValueSafe_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m43B787A9D8BFF0713DD22EDD0ACE8DCB1D0403C7_RuntimeMethod_var);
		FastBufferWriter_WriteValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m53EDE2E29B562A2314E00496FF0FCA51CA81BC42_inline((&V_1), (&___scale2), FastBufferWriter_WriteValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m53EDE2E29B562A2314E00496FF0FCA51CA81BC42_RuntimeMethod_var);
		FastBufferWriter_WriteValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF1323B69B63D7207805FA651F0DDDB44C848B1B8_inline((&V_1), (&___shouldTeleport3), FastBufferWriter_WriteValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF1323B69B63D7207805FA651F0DDDB44C848B1B8_RuntimeMethod_var);
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_14 = V_1;
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_15 = V_2;
		NetworkBehaviour___sendServerRpc_mE1E5BE25CC0FBB4480D6B8A9A7CE16D79C51D996(__this, L_14, ((int32_t)640767722), L_15, ((int32_t)0), NULL);
		FastBufferWriter_Dispose_mD37E84164B321672C9DD7FED218D6802360660FE((&V_1), NULL);
	}

IL_010a:
	{
		int32_t L_16 = ((NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE*)__this)->_____rpc_exec_stage_4;
		if (!((((int32_t)L_16) == ((int32_t)((int32_t)1)))? 1 : 0))
		{
			goto IL_0139;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_17 = V_0;
		NullCheck(L_17);
		bool L_18;
		L_18 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_17, NULL);
		if (L_18)
		{
			goto IL_013a;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_19 = V_0;
		NullCheck(L_19);
		bool L_20;
		L_20 = NetworkManager_get_IsHost_mC1156B68C1D97048027559F64FB5C3413F16C124(L_19, NULL);
		if (L_20)
		{
			goto IL_013a;
		}
	}

IL_0139:
	{
		return;
	}

IL_013a:
	{
		// if (OnClientRequestChange != null)
		OnClientRequestChangeDelegate_t6B736624F278668F5B5AD070F02AB4AB013BC1C8* L_21 = __this->___OnClientRequestChange_17;
		if (!L_21)
		{
			goto IL_0168;
		}
	}
	{
		// (pos, rot, scale) = OnClientRequestChange(pos, rot, scale);
		OnClientRequestChangeDelegate_t6B736624F278668F5B5AD070F02AB4AB013BC1C8* L_22 = __this->___OnClientRequestChange_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___pos0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___rot1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___scale2;
		NullCheck(L_22);
		ValueTuple_3_tE39E42FC756887AF8710ED1B13FCC5F5409FABC4 L_26;
		L_26 = OnClientRequestChangeDelegate_Invoke_m70587050315AEAB486DC53CBBA194371CC422530_inline(L_22, L_23, L_24, L_25, NULL);
		ValueTuple_3_tE39E42FC756887AF8710ED1B13FCC5F5409FABC4 L_27 = L_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = L_27.___Item1_0;
		___pos0 = L_28;
		ValueTuple_3_tE39E42FC756887AF8710ED1B13FCC5F5409FABC4 L_29 = L_27;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = L_29.___Item2_1;
		___rot1 = L_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = L_29.___Item3_2;
		___scale2 = L_31;
	}

IL_0168:
	{
		// m_Transform.position = pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___m_Transform_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___pos0;
		NullCheck(L_32);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_32, L_33, NULL);
		// m_Transform.rotation = rot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->___m_Transform_48;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35 = ___rot1;
		NullCheck(L_34);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_34, L_35, NULL);
		// m_Transform.localScale = scale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = __this->___m_Transform_48;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___scale2;
		NullCheck(L_36);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_36, L_37, NULL);
		// m_LocalAuthoritativeNetworkState.IsTeleportingNextFrame = shouldTeleport;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_38 = (&__this->___m_LocalAuthoritativeNetworkState_36);
		bool L_39 = ___shouldTeleport3;
		NetworkTransformState_set_IsTeleportingNextFrame_m916BFF5B26DB5D75BFBC330F04466FED4AF2E7C4(L_38, L_39, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_Update_m97B051901829AC9D9DED2112DB90C450936DFF52 (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1_Update_m651EFF6DFA7629076051163CCEBFA16AE3BF9758_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedLinearInterpolator_1_Update_mDECC3AC6FA3912CEFFA9A93770AD98907F555B55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE6DA9014FEE390D2DAA206752CA64A3D138C5F68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9995BC21C373E73740B6E320B559010C357248C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB84DE69348F61F10E484604391F19363B2C9D869_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m278B39540B7AAE8E110125145779C92CAA00F97A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F V_2;
	memset((&V_2), 0, sizeof(V_2));
	double V_3 = 0.0;
	double V_4 = 0.0;
	Enumerator_t8476784130A98A43A4B6C984AF72ADC69E01F56D V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (!IsSpawned)
		bool L_0;
		L_0 = NetworkBehaviour_get_IsSpawned_m61C7DDBA4399DA812385A297821986D619423C96(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (CanCommitToTransform)
		bool L_1 = __this->___CanCommitToTransform_32;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// if (m_CachedIsServer)
		bool L_2 = __this->___m_CachedIsServer_33;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		// TryCommitTransformToServer(m_Transform, m_CachedNetworkManager.LocalTime.Time);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___m_Transform_48;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_4 = __this->___m_CachedNetworkManager_34;
		NullCheck(L_4);
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_5;
		L_5 = NetworkManager_get_LocalTime_m17506338EF54F39A0C27A56D822F17A112D49CC7(L_4, NULL);
		V_0 = L_5;
		double L_6;
		L_6 = NetworkTime_get_Time_mDC7F8AB78A0D860B5D3BF62AF1E42724059F690B_inline((&V_0), NULL);
		NetworkTransform_TryCommitTransformToServer_m6EC66780853F1DCD7297AF4DDF0468B7D6A61BD5(__this, L_3, L_6, NULL);
	}

IL_0038:
	{
		// m_PrevNetworkState = m_LocalAuthoritativeNetworkState;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_7 = __this->___m_LocalAuthoritativeNetworkState_36;
		__this->___m_PrevNetworkState_37 = L_7;
	}

IL_0044:
	{
		// if (m_CachedNetworkManager.IsConnectedClient || m_CachedNetworkManager.IsListening)
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_8 = __this->___m_CachedNetworkManager_34;
		NullCheck(L_8);
		bool L_9;
		L_9 = NetworkManager_get_IsConnectedClient_m6A551DE92D70EFC1940AB427EA727968DA3C9A59_inline(L_8, NULL);
		if (L_9)
		{
			goto IL_0061;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_10 = __this->___m_CachedNetworkManager_34;
		NullCheck(L_10);
		bool L_11;
		L_11 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_10, NULL);
		if (!L_11)
		{
			goto IL_00f5;
		}
	}

IL_0061:
	{
		// var cachedDeltaTime = Time.deltaTime;
		float L_12;
		L_12 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_1 = L_12;
		// var serverTime = NetworkManager.ServerTime;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_13;
		L_13 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(__this, NULL);
		NullCheck(L_13);
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_14;
		L_14 = NetworkManager_get_ServerTime_m1EB06367487A361578137D4E2D13917F86DDA471(L_13, NULL);
		V_2 = L_14;
		// var cachedServerTime = serverTime.Time;
		double L_15;
		L_15 = NetworkTime_get_Time_mDC7F8AB78A0D860B5D3BF62AF1E42724059F690B_inline((&V_2), NULL);
		V_3 = L_15;
		// var cachedRenderTime = serverTime.TimeTicksAgo(1).Time;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_16;
		L_16 = NetworkTime_TimeTicksAgo_m3DE56CDB34180F78932D9A115AC6CE36578DA446((&V_2), 1, NULL);
		V_0 = L_16;
		double L_17;
		L_17 = NetworkTime_get_Time_mDC7F8AB78A0D860B5D3BF62AF1E42724059F690B_inline((&V_0), NULL);
		V_4 = L_17;
		// foreach (var interpolator in m_AllFloatInterpolators)
		List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E* L_18 = __this->___m_AllFloatInterpolators_47;
		NullCheck(L_18);
		Enumerator_t8476784130A98A43A4B6C984AF72ADC69E01F56D L_19;
		L_19 = List_1_GetEnumerator_m278B39540B7AAE8E110125145779C92CAA00F97A(L_18, List_1_GetEnumerator_m278B39540B7AAE8E110125145779C92CAA00F97A_RuntimeMethod_var);
		V_5 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b8:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE6DA9014FEE390D2DAA206752CA64A3D138C5F68((&V_5), Enumerator_Dispose_mE6DA9014FEE390D2DAA206752CA64A3D138C5F68_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ad_1;
			}

IL_009c_1:
			{
				// foreach (var interpolator in m_AllFloatInterpolators)
				BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* L_20;
				L_20 = Enumerator_get_Current_mB84DE69348F61F10E484604391F19363B2C9D869_inline((&V_5), Enumerator_get_Current_mB84DE69348F61F10E484604391F19363B2C9D869_RuntimeMethod_var);
				// interpolator.Update(cachedDeltaTime, cachedRenderTime, cachedServerTime);
				float L_21 = V_1;
				double L_22 = V_4;
				double L_23 = V_3;
				NullCheck(L_20);
				float L_24;
				L_24 = BufferedLinearInterpolator_1_Update_mDECC3AC6FA3912CEFFA9A93770AD98907F555B55(L_20, L_21, L_22, L_23, BufferedLinearInterpolator_1_Update_mDECC3AC6FA3912CEFFA9A93770AD98907F555B55_RuntimeMethod_var);
			}

IL_00ad_1:
			{
				// foreach (var interpolator in m_AllFloatInterpolators)
				bool L_25;
				L_25 = Enumerator_MoveNext_m9995BC21C373E73740B6E320B559010C357248C2((&V_5), Enumerator_MoveNext_m9995BC21C373E73740B6E320B559010C357248C2_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_009c_1;
				}
			}
			{
				goto IL_00c6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c6:
	{
		// m_RotationInterpolator.Update(cachedDeltaTime, cachedRenderTime, cachedServerTime);
		BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B* L_26 = __this->___m_RotationInterpolator_43;
		float L_27 = V_1;
		double L_28 = V_4;
		double L_29 = V_3;
		NullCheck(L_26);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		L_30 = BufferedLinearInterpolator_1_Update_m651EFF6DFA7629076051163CCEBFA16AE3BF9758(L_26, L_27, L_28, L_29, BufferedLinearInterpolator_1_Update_m651EFF6DFA7629076051163CCEBFA16AE3BF9758_RuntimeMethod_var);
		// if (!CanCommitToTransform)
		bool L_31 = __this->___CanCommitToTransform_32;
		if (L_31)
		{
			goto IL_00f5;
		}
	}
	{
		// ApplyInterpolatedNetworkStateToTransform(m_ReplicatedNetworkState.Value, m_Transform);
		NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9* L_32 = __this->___m_ReplicatedNetworkState_35;
		NullCheck(L_32);
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_33;
		L_33 = VirtualFuncInvoker0< NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 >::Invoke(14 /* T Unity.Netcode.NetworkVariable`1<Unity.Netcode.Components.NetworkTransform/NetworkTransformState>::get_Value() */, L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->___m_Transform_48;
		NetworkTransform_ApplyInterpolatedNetworkStateToTransform_m5488830F265BBF2CF5298541099EA2E9AB611FA2(__this, L_33, L_34, NULL);
	}

IL_00f5:
	{
		// m_LocalAuthoritativeNetworkState.IsTeleportingNextFrame = false;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_35 = (&__this->___m_LocalAuthoritativeNetworkState_36);
		NetworkTransformState_set_IsTeleportingNextFrame_m916BFF5B26DB5D75BFBC330F04466FED4AF2E7C4(L_35, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::Teleport(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_Teleport_m8C6968BC5684EA8BE7634DB61CDAC3CEF4F7B41D (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newPosition0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___newRotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newScale2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!CanCommitToTransform)
		bool L_0 = __this->___CanCommitToTransform_32;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new Exception("Teleport not allowed");
		Exception_t* L_1 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7A29E47E81FADB27D64EF5255EF4CFCA1733DC0A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkTransform_Teleport_m8C6968BC5684EA8BE7634DB61CDAC3CEF4F7B41D_RuntimeMethod_var)));
	}

IL_0013:
	{
		// var newRotationEuler = newRotation.eulerAngles;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___newRotation1), NULL);
		V_0 = L_2;
		// var stateToSend = m_LocalAuthoritativeNetworkState;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_3 = __this->___m_LocalAuthoritativeNetworkState_36;
		V_1 = L_3;
		// stateToSend.IsTeleportingNextFrame = true;
		NetworkTransformState_set_IsTeleportingNextFrame_m916BFF5B26DB5D75BFBC330F04466FED4AF2E7C4((&V_1), (bool)1, NULL);
		// stateToSend.Position = newPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___newPosition0;
		NetworkTransformState_set_Position_mAEBD3398159EBAFE97778684A564240F87AFCA1C((&V_1), L_4, NULL);
		// stateToSend.Rotation = newRotationEuler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		NetworkTransformState_set_Rotation_m115F1F57926A230C34F2CBE817EE11D3E520351B((&V_1), L_5, NULL);
		// stateToSend.Scale = newScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___newScale2;
		NetworkTransformState_set_Scale_m6FF3625E2AE27323E1AD8174A4C28C7C4B8C9151((&V_1), L_6, NULL);
		// ApplyInterpolatedNetworkStateToTransform(stateToSend, transform);
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_7 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NetworkTransform_ApplyInterpolatedNetworkStateToTransform_m5488830F265BBF2CF5298541099EA2E9AB611FA2(__this, L_7, L_8, NULL);
		// m_LocalAuthoritativeNetworkState.IsTeleportingNextFrame = true;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_9 = (&__this->___m_LocalAuthoritativeNetworkState_36);
		NetworkTransformState_set_IsTeleportingNextFrame_m916BFF5B26DB5D75BFBC330F04466FED4AF2E7C4(L_9, (bool)1, NULL);
		// TryCommitValuesToServer(newPosition, newRotationEuler, newScale, m_CachedNetworkManager.LocalTime.Time);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___newPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___newScale2;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_13 = __this->___m_CachedNetworkManager_34;
		NullCheck(L_13);
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_14;
		L_14 = NetworkManager_get_LocalTime_m17506338EF54F39A0C27A56D822F17A112D49CC7(L_13, NULL);
		V_2 = L_14;
		double L_15;
		L_15 = NetworkTime_get_Time_mDC7F8AB78A0D860B5D3BF62AF1E42724059F690B_inline((&V_2), NULL);
		NetworkTransform_TryCommitValuesToServer_m0A76F11CA0211F44B6C7CDA122078AE0B35E5A06(__this, L_10, L_11, L_12, L_15, NULL);
		// m_LocalAuthoritativeNetworkState.IsTeleportingNextFrame = false;
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* L_16 = (&__this->___m_LocalAuthoritativeNetworkState_36);
		NetworkTransformState_set_IsTeleportingNextFrame_m916BFF5B26DB5D75BFBC330F04466FED4AF2E7C4(L_16, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform__ctor_mD4487552A83F1078565671D5222B9FD84517178E (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m34B8B3DE604987BC1B39961DCE4065FCE1F7562A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkVariable_1__ctor_mBF40D1D921E135A48CD6178E8F6A0A9B5CF34298_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public bool SyncPositionX = true, SyncPositionY = true, SyncPositionZ = true;
		__this->___SyncPositionX_18 = (bool)1;
		// public bool SyncPositionX = true, SyncPositionY = true, SyncPositionZ = true;
		__this->___SyncPositionY_19 = (bool)1;
		// public bool SyncPositionX = true, SyncPositionY = true, SyncPositionZ = true;
		__this->___SyncPositionZ_20 = (bool)1;
		// public bool SyncRotAngleX = true, SyncRotAngleY = true, SyncRotAngleZ = true;
		__this->___SyncRotAngleX_21 = (bool)1;
		// public bool SyncRotAngleX = true, SyncRotAngleY = true, SyncRotAngleZ = true;
		__this->___SyncRotAngleY_22 = (bool)1;
		// public bool SyncRotAngleX = true, SyncRotAngleY = true, SyncRotAngleZ = true;
		__this->___SyncRotAngleZ_23 = (bool)1;
		// public bool SyncScaleX = true, SyncScaleY = true, SyncScaleZ = true;
		__this->___SyncScaleX_24 = (bool)1;
		// public bool SyncScaleX = true, SyncScaleY = true, SyncScaleZ = true;
		__this->___SyncScaleY_25 = (bool)1;
		// public bool SyncScaleX = true, SyncScaleY = true, SyncScaleZ = true;
		__this->___SyncScaleZ_26 = (bool)1;
		// public float PositionThreshold = PositionThresholdDefault;
		__this->___PositionThreshold_27 = (0.00100000005f);
		// public float RotAngleThreshold = RotAngleThresholdDefault;
		__this->___RotAngleThreshold_28 = (0.00999999978f);
		// public float ScaleThreshold = ScaleThresholdDefault;
		__this->___ScaleThreshold_29 = (0.00999999978f);
		// public bool Interpolate = true;
		__this->___Interpolate_31 = (bool)1;
		// private readonly NetworkVariable<NetworkTransformState> m_ReplicatedNetworkState = new NetworkVariable<NetworkTransformState>(new NetworkTransformState());
		il2cpp_codegen_initobj((&V_0), sizeof(NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0));
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_0 = V_0;
		NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9* L_1 = (NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9*)il2cpp_codegen_object_new(NetworkVariable_1_t1DCFE6C85300293DA118E32853EA438EA583EEA9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NetworkVariable_1__ctor_mBF40D1D921E135A48CD6178E8F6A0A9B5CF34298(L_1, L_0, NetworkVariable_1__ctor_mBF40D1D921E135A48CD6178E8F6A0A9B5CF34298_RuntimeMethod_var);
		__this->___m_ReplicatedNetworkState_35 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReplicatedNetworkState_35), (void*)L_1);
		// private readonly List<BufferedLinearInterpolator<float>> m_AllFloatInterpolators = new List<BufferedLinearInterpolator<float>>(6);
		List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E* L_2 = (List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E*)il2cpp_codegen_object_new(List_1_t260B83A46A66C7E7C78B4235086A1647B0A9E13E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m34B8B3DE604987BC1B39961DCE4065FCE1F7562A(L_2, 6, List_1__ctor_m34B8B3DE604987BC1B39961DCE4065FCE1F7562A_RuntimeMethod_var);
		__this->___m_AllFloatInterpolators_47 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AllFloatInterpolators_47), (void*)L_2);
		il2cpp_codegen_runtime_class_init_inline(NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE_il2cpp_TypeInfo_var);
		NetworkBehaviour__ctor_m0BFD04A5D02376F13DD2E85274836CD4A3AD38E6(__this, NULL);
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::<TryCommit>g__Send|41_0(Unity.Netcode.Components.NetworkTransform/NetworkTransformState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_U3CTryCommitU3Eg__SendU7C41_0_mA1874B584F040881CD52AA7E85F869A53F70C7DE (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 ___stateToSend0, const RuntimeMethod* method) 
{
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_CachedIsServer)
		bool L_0 = __this->___m_CachedIsServer_33;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// CommitLocallyAndReplicate(stateToSend);
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_1 = ___stateToSend0;
		NetworkTransform_CommitLocallyAndReplicate_m87C9ED934B0157D0ABF57115ED1D53D2641DCEE3(__this, L_1, NULL);
		return;
	}

IL_0010:
	{
		// CommitTransformServerRpc(stateToSend);
		NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_2 = ___stateToSend0;
		il2cpp_codegen_initobj((&V_0), sizeof(ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558));
		ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_3 = V_0;
		NetworkTransform_CommitTransformServerRpc_mFB5EC47FDDCF80B89F8A90F0634BA0E141AAF60D(__this, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform__cctor_m8618A1D629E2770BC8C3567EB887EDED791D26EE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransform_CommitTransformServerRpc__nhandler_mD6B4681325D372BCF394CBCD045383D207A6DED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransform_SetStateServerRpc__nhandler_m29E26AF17DFD181CEEAF1857963BF770EFFC4D5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* L_0 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->_____rpc_func_table_4;
		RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* L_1 = (RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597*)il2cpp_codegen_object_new(RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RpcReceiveHandler__ctor_m38D96DF14942B8B37F0A872B2C509A442F5F19B6(L_1, NULL, (intptr_t)((void*)NetworkTransform_CommitTransformServerRpc__nhandler_mD6B4681325D372BCF394CBCD045383D207A6DED9_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877(L_0, ((int32_t)104221529), L_1, Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* L_2 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->_____rpc_func_table_4;
		RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597* L_3 = (RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597*)il2cpp_codegen_object_new(RpcReceiveHandler_tD64DF84AD49B52BBBF82E4B9E1249DE2FC63A597_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		RpcReceiveHandler__ctor_m38D96DF14942B8B37F0A872B2C509A442F5F19B6(L_3, NULL, (intptr_t)((void*)NetworkTransform_SetStateServerRpc__nhandler_m29E26AF17DFD181CEEAF1857963BF770EFFC4D5A_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877(L_2, ((int32_t)640767722), L_3, Dictionary_2_Add_m59EDE27DE933C2C8BFC6DB38D69B9A8AFFF2E877_RuntimeMethod_var);
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::CommitTransformServerRpc__nhandler(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_CommitTransformServerRpc__nhandler_mD6B4681325D372BCF394CBCD045383D207A6DED9 (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___target0, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___reader1, __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E ___rpcParams2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadNetworkSerializable_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_mF26F3155045A53BCCD398F3019FAC3340EDFE982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_0 = ___target0;
			NullCheck(L_0);
			NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1;
			L_1 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(L_0, NULL);
			V_0 = L_1;
			NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0022_1;
			}
		}
		{
			NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3 = V_0;
			NullCheck(L_3);
			bool L_4;
			L_4 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_3, NULL);
			if (L_4)
			{
				goto IL_0023_1;
			}
		}

IL_0022_1:
		{
			return;
		}

IL_0023_1:
		{
			FastBufferReader_ReadNetworkSerializable_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_mF26F3155045A53BCCD398F3019FAC3340EDFE982((&___reader1), (&V_1), FastBufferReader_ReadNetworkSerializable_TisNetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_mF26F3155045A53BCCD398F3019FAC3340EDFE982_RuntimeMethod_var);
			__RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E L_5 = ___rpcParams2;
			ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_6 = L_5.___Server_0;
			V_2 = L_6;
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_7 = ___target0;
			NullCheck(L_7);
			L_7->_____rpc_exec_stage_4 = ((int32_t)1);
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_8 = ___target0;
			NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 L_9 = V_1;
			ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_10 = V_2;
			NullCheck(((NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16*)CastclassClass((RuntimeObject*)L_8, NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16_il2cpp_TypeInfo_var)));
			NetworkTransform_CommitTransformServerRpc_mFB5EC47FDDCF80B89F8A90F0634BA0E141AAF60D(((NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16*)CastclassClass((RuntimeObject*)L_8, NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16_il2cpp_TypeInfo_var)), L_9, L_10, NULL);
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_11 = ___target0;
			NullCheck(L_11);
			L_11->_____rpc_exec_stage_4 = ((int32_t)0);
			goto IL_0090;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0069;
		}
		throw e;
	}

CATCH_0069:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_12 = V_3;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Exception::ToString() */, L_12);
		String_t* L_14;
		L_14 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4A3EE3A5A6730B9781830A8F333C8E578CF053E4)), L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_14, NULL);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_15 = ___target0;
		NullCheck(L_15);
		L_15->_____rpc_exec_stage_4 = ((int32_t)0);
	}// end catch (depth: 1)

IL_0090:
	{
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform::SetStateServerRpc__nhandler(Unity.Netcode.NetworkBehaviour,Unity.Netcode.FastBufferReader,Unity.Netcode.__RpcParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransform_SetStateServerRpc__nhandler_m29E26AF17DFD181CEEAF1857963BF770EFFC4D5A (NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* ___target0, FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___reader1, __RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E ___rpcParams2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m66E2AA444E3D7FA5540201E563319F97DC0A2A40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m65D5B17C9E42897A683FC7E5D8E65D5BEBA103C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3BD7AB5985FCF1E3C818E0F32ABD84706A53BC07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6);
		s_Il2CppMethodInitialized = true;
	}
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_0 = ___target0;
			NullCheck(L_0);
			NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1;
			L_1 = NetworkBehaviour_get_NetworkManager_mB42548F1F4877DC884DDBFF2F110F719D9EC8C57(L_0, NULL);
			V_0 = L_1;
			NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_2 = V_0;
			if (!L_2)
			{
				goto IL_0022_1;
			}
		}
		{
			NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3 = V_0;
			NullCheck(L_3);
			bool L_4;
			L_4 = NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline(L_3, NULL);
			if (L_4)
			{
				goto IL_0023_1;
			}
		}

IL_0022_1:
		{
			return;
		}

IL_0023_1:
		{
			__RpcParams_tA4F5B2601A930BA667C4084C62B0FA7CABA5980E L_5 = ___rpcParams2;
			ServerRpcParams_tA2B8E26BB420EE0CB740E586BF306E215A4D0558 L_6 = L_5.___Server_0;
			ServerRpcReceiveParams_t13F450FA39CB2BE6C1DB10FFDC686A89EFC4EF95 L_7 = L_6.___Receive_1;
			uint64_t L_8 = L_7.___SenderClientId_0;
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_9 = ___target0;
			NullCheck(L_9);
			uint64_t L_10;
			L_10 = NetworkBehaviour_get_OwnerClientId_m59ED21DE97867ED0CAE0C553A2BBE369543360BF(L_9, NULL);
			if (!((((int32_t)((((int64_t)L_8) == ((int64_t)L_10))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
			{
				goto IL_0070_1;
			}
		}
		{
			NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_11 = V_0;
			NullCheck(L_11);
			int32_t L_12 = L_11->___LogLevel_17;
			if (!((((int32_t)((((int32_t)L_12) > ((int32_t)((int32_t)1)))? 1 : 0)) == ((int32_t)((int32_t)0)))? 1 : 0))
			{
				goto IL_006e_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralE099A253855E797F1448A8DB485F8B202B9441C6, NULL);
		}

IL_006e_1:
		{
			return;
		}

IL_0070_1:
		{
			FastBufferReader_ReadValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3BD7AB5985FCF1E3C818E0F32ABD84706A53BC07_inline((&___reader1), (&V_1), FastBufferReader_ReadValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3BD7AB5985FCF1E3C818E0F32ABD84706A53BC07_RuntimeMethod_var);
			FastBufferReader_ReadValueSafe_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m65D5B17C9E42897A683FC7E5D8E65D5BEBA103C5_inline((&___reader1), (&V_2), FastBufferReader_ReadValueSafe_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m65D5B17C9E42897A683FC7E5D8E65D5BEBA103C5_RuntimeMethod_var);
			FastBufferReader_ReadValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3BD7AB5985FCF1E3C818E0F32ABD84706A53BC07_inline((&___reader1), (&V_3), FastBufferReader_ReadValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3BD7AB5985FCF1E3C818E0F32ABD84706A53BC07_RuntimeMethod_var);
			FastBufferReader_ReadValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m66E2AA444E3D7FA5540201E563319F97DC0A2A40_inline((&___reader1), (&V_4), FastBufferReader_ReadValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m66E2AA444E3D7FA5540201E563319F97DC0A2A40_RuntimeMethod_var);
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_13 = ___target0;
			NullCheck(L_13);
			L_13->_____rpc_exec_stage_4 = ((int32_t)1);
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_14 = ___target0;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = V_2;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_3;
			bool L_18 = V_4;
			NullCheck(((NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16*)CastclassClass((RuntimeObject*)L_14, NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16_il2cpp_TypeInfo_var)));
			NetworkTransform_SetStateServerRpc_m370797ABE81E0F2044CFEBC3EFB868E9158A00FF(((NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16*)CastclassClass((RuntimeObject*)L_14, NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16_il2cpp_TypeInfo_var)), L_15, L_16, L_17, L_18, NULL);
			NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_19 = ___target0;
			NullCheck(L_19);
			L_19->_____rpc_exec_stage_4 = ((int32_t)0);
			goto IL_0102;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00db;
		}
		throw e;
	}

CATCH_00db:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_20 = V_5;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Exception::ToString() */, L_20);
		String_t* L_22;
		L_22 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4A3EE3A5A6730B9781830A8F333C8E578CF053E4)), L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_22, NULL);
		NetworkBehaviour_t1F9CC6E5B76D29ECECBB61F02D8E8EDE24CDDDCE* L_23 = ___target0;
		NullCheck(L_23);
		L_23->_____rpc_exec_stage_4 = ((int32_t)0);
	}// end catch (depth: 1)

IL_0102:
	{
		return;
	}
}
// System.String Unity.Netcode.Components.NetworkTransform::__getTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkTransform___getTypeName_mF6FF3EB01A9D309D9114470FCFEF2F6905A799AE (NetworkTransform_tABF578C5916A078C0EB2BD2C030DD139EA388E16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAC4C0AC7F2622E832E85C05D64A1F859A076611);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralDAC4C0AC7F2622E832E85C05D64A1F859A076611;
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
ValueTuple_3_tE39E42FC756887AF8710ED1B13FCC5F5409FABC4 OnClientRequestChangeDelegate_Invoke_m70587050315AEAB486DC53CBBA194371CC422530_Multicast(OnClientRequestChangeDelegate_t6B736624F278668F5B5AD070F02AB4AB013BC1C8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	ValueTuple_3_tE39E42FC756887AF8710ED1B13FCC5F5409FABC4 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnClientRequestChangeDelegate_t6B736624F278668F5B5AD070F02AB4AB013BC1C8* currentDelegate = reinterpret_cast<OnClientRequestChangeDelegate_t6B736624F278668F5B5AD070F02AB4AB013BC1C8*>(delegatesToInvoke[i]);
		typedef ValueTuple_3_tE39E42FC756887AF8710ED1B13FCC5F5409FABC4 (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___pos0, ___rot1, ___scale2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
ValueTuple_3_tE39E42FC756887AF8710ED1B13FCC5F5409FABC4 OnClientRequestChangeDelegate_Invoke_m70587050315AEAB486DC53CBBA194371CC422530_Open(OnClientRequestChangeDelegate_t6B736624F278668F5B5AD070F02AB4AB013BC1C8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale2, const RuntimeMethod* method)
{
	typedef ValueTuple_3_tE39E42FC756887AF8710ED1B13FCC5F5409FABC4 (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___pos0, ___rot1, ___scale2, method);
}
ValueTuple_3_tE39E42FC756887AF8710ED1B13FCC5F5409FABC4 OnClientRequestChangeDelegate_Invoke_m70587050315AEAB486DC53CBBA194371CC422530_OpenStaticInvoker(OnClientRequestChangeDelegate_t6B736624F278668F5B5AD070F02AB4AB013BC1C8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< ValueTuple_3_tE39E42FC756887AF8710ED1B13FCC5F5409FABC4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, ___pos0, ___rot1, ___scale2);
}
ValueTuple_3_tE39E42FC756887AF8710ED1B13FCC5F5409FABC4 OnClientRequestChangeDelegate_Invoke_m70587050315AEAB486DC53CBBA194371CC422530_ClosedStaticInvoker(OnClientRequestChangeDelegate_t6B736624F278668F5B5AD070F02AB4AB013BC1C8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< ValueTuple_3_tE39E42FC756887AF8710ED1B13FCC5F5409FABC4, RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___pos0, ___rot1, ___scale2);
}
// System.Void Unity.Netcode.Components.NetworkTransform/OnClientRequestChangeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClientRequestChangeDelegate__ctor_m9F67DB69314B1AB2AFFBDACEBC8EFDD78318F6E3 (OnClientRequestChangeDelegate_t6B736624F278668F5B5AD070F02AB4AB013BC1C8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnClientRequestChangeDelegate_Invoke_m70587050315AEAB486DC53CBBA194371CC422530_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnClientRequestChangeDelegate_Invoke_m70587050315AEAB486DC53CBBA194371CC422530_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnClientRequestChangeDelegate_Invoke_m70587050315AEAB486DC53CBBA194371CC422530_Open;
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
	__this->___extra_arg_5 = (intptr_t)&OnClientRequestChangeDelegate_Invoke_m70587050315AEAB486DC53CBBA194371CC422530_Multicast;
}
// System.ValueTuple`3<UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3> Unity.Netcode.Components.NetworkTransform/OnClientRequestChangeDelegate::Invoke(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_3_tE39E42FC756887AF8710ED1B13FCC5F5409FABC4 OnClientRequestChangeDelegate_Invoke_m70587050315AEAB486DC53CBBA194371CC422530 (OnClientRequestChangeDelegate_t6B736624F278668F5B5AD070F02AB4AB013BC1C8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale2, const RuntimeMethod* method) 
{
	typedef ValueTuple_3_tE39E42FC756887AF8710ED1B13FCC5F5409FABC4 (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pos0, ___rot1, ___scale2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Netcode.Components.NetworkTransform/OnClientRequestChangeDelegate::BeginInvoke(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnClientRequestChangeDelegate_BeginInvoke_m1D4579C6158A6884E8A6411D627E0CE6265A4371 (OnClientRequestChangeDelegate_t6B736624F278668F5B5AD070F02AB4AB013BC1C8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___pos0);
	__d_args[1] = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &___rot1);
	__d_args[2] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___scale2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.ValueTuple`3<UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3> Unity.Netcode.Components.NetworkTransform/OnClientRequestChangeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_3_tE39E42FC756887AF8710ED1B13FCC5F5409FABC4 OnClientRequestChangeDelegate_EndInvoke_m6DC2A6D95944DDBA8C8F3D3402212DDE29AD9DE0 (OnClientRequestChangeDelegate_t6B736624F278668F5B5AD070F02AB4AB013BC1C8* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(ValueTuple_3_tE39E42FC756887AF8710ED1B13FCC5F5409FABC4*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_InLocalSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_InLocalSpace_m97EFBEEA87FCFF746BE37A23B9E4F26667687174 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) 
{
	{
		// get => (m_Bitset & (1 << k_InLocalSpaceBit)) != 0;
		uint16_t L_0 = __this->___m_Bitset_11;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_InLocalSpace_m97EFBEEA87FCFF746BE37A23B9E4F26667687174_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_InLocalSpace_m97EFBEEA87FCFF746BE37A23B9E4F26667687174(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_InLocalSpace(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_InLocalSpace_mD00CB59C2D2BB5E4E23582483B9D9927B55D2CC8 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_InLocalSpaceBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_InLocalSpaceBit)); }
		uint16_t L_1 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_1|1)));
		return;
	}

IL_0013:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_InLocalSpaceBit)); }
		uint16_t L_2 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_2&((int32_t)-2))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_InLocalSpace_mD00CB59C2D2BB5E4E23582483B9D9927B55D2CC8_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	NetworkTransformState_set_InLocalSpace_mD00CB59C2D2BB5E4E23582483B9D9927B55D2CC8(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasPositionX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasPositionX_m38C1D7FA45D4F042E1DF6DF427769E833DB1562B (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) 
{
	{
		// get => (m_Bitset & (1 << k_PositionXBit)) != 0;
		uint16_t L_0 = __this->___m_Bitset_11;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_HasPositionX_m38C1D7FA45D4F042E1DF6DF427769E833DB1562B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_HasPositionX_m38C1D7FA45D4F042E1DF6DF427769E833DB1562B(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasPositionX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasPositionX_m56DD5AC54908FA314A5DA409ED2D9F7F00C7C4DD (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_PositionXBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_PositionXBit)); }
		uint16_t L_1 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_1|2)));
		return;
	}

IL_0013:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_PositionXBit)); }
		uint16_t L_2 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_2&((int32_t)-3))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_HasPositionX_m56DD5AC54908FA314A5DA409ED2D9F7F00C7C4DD_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	NetworkTransformState_set_HasPositionX_m56DD5AC54908FA314A5DA409ED2D9F7F00C7C4DD(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasPositionY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasPositionY_mAE9F9A90D1BE78E78A7B06EBFD935553D7B5BC1A (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) 
{
	{
		// get => (m_Bitset & (1 << k_PositionYBit)) != 0;
		uint16_t L_0 = __this->___m_Bitset_11;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&4))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_HasPositionY_mAE9F9A90D1BE78E78A7B06EBFD935553D7B5BC1A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_HasPositionY_mAE9F9A90D1BE78E78A7B06EBFD935553D7B5BC1A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasPositionY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasPositionY_mC1F10530374A7151FA9BEF0A32E8A73EFF75BD48 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_PositionYBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_PositionYBit)); }
		uint16_t L_1 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_1|4)));
		return;
	}

IL_0013:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_PositionYBit)); }
		uint16_t L_2 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_2&((int32_t)-5))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_HasPositionY_mC1F10530374A7151FA9BEF0A32E8A73EFF75BD48_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	NetworkTransformState_set_HasPositionY_mC1F10530374A7151FA9BEF0A32E8A73EFF75BD48(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasPositionZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasPositionZ_m720D04DBA54389D30D834C4317BC520A023ED05A (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) 
{
	{
		// get => (m_Bitset & (1 << k_PositionZBit)) != 0;
		uint16_t L_0 = __this->___m_Bitset_11;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&8))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_HasPositionZ_m720D04DBA54389D30D834C4317BC520A023ED05A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_HasPositionZ_m720D04DBA54389D30D834C4317BC520A023ED05A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasPositionZ(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasPositionZ_mD5785F0A569A6E65B78EE0E98F43AE0E4C0048D8 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_PositionZBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_PositionZBit)); }
		uint16_t L_1 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_1|8)));
		return;
	}

IL_0013:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_PositionZBit)); }
		uint16_t L_2 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_2&((int32_t)-9))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_HasPositionZ_mD5785F0A569A6E65B78EE0E98F43AE0E4C0048D8_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	NetworkTransformState_set_HasPositionZ_mD5785F0A569A6E65B78EE0E98F43AE0E4C0048D8(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasRotAngleX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasRotAngleX_m1C906A4534F5AF8B6648B87FB651D799E9818E81 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) 
{
	{
		// get => (m_Bitset & (1 << k_RotAngleXBit)) != 0;
		uint16_t L_0 = __this->___m_Bitset_11;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_HasRotAngleX_m1C906A4534F5AF8B6648B87FB651D799E9818E81_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_HasRotAngleX_m1C906A4534F5AF8B6648B87FB651D799E9818E81(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasRotAngleX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasRotAngleX_mFD3487AA6A89AC649BCC11F35D8F304C0A9F8EF3 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_RotAngleXBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_RotAngleXBit)); }
		uint16_t L_1 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_1|((int32_t)16))));
		return;
	}

IL_0014:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_RotAngleXBit)); }
		uint16_t L_2 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_2&((int32_t)-17))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_HasRotAngleX_mFD3487AA6A89AC649BCC11F35D8F304C0A9F8EF3_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	NetworkTransformState_set_HasRotAngleX_mFD3487AA6A89AC649BCC11F35D8F304C0A9F8EF3(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasRotAngleY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasRotAngleY_m725B8770DD0AB539D53748D175EC57D5C3ECB5EC (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) 
{
	{
		// get => (m_Bitset & (1 << k_RotAngleYBit)) != 0;
		uint16_t L_0 = __this->___m_Bitset_11;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_HasRotAngleY_m725B8770DD0AB539D53748D175EC57D5C3ECB5EC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_HasRotAngleY_m725B8770DD0AB539D53748D175EC57D5C3ECB5EC(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasRotAngleY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasRotAngleY_m8706FE3EBF4726B0533FA4717A6089EDC473FC2C (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_RotAngleYBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_RotAngleYBit)); }
		uint16_t L_1 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_1|((int32_t)32))));
		return;
	}

IL_0014:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_RotAngleYBit)); }
		uint16_t L_2 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_2&((int32_t)-33))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_HasRotAngleY_m8706FE3EBF4726B0533FA4717A6089EDC473FC2C_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	NetworkTransformState_set_HasRotAngleY_m8706FE3EBF4726B0533FA4717A6089EDC473FC2C(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasRotAngleZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasRotAngleZ_m0E8B47FF7B00F0AF937652726E9B3D47CBA254FE (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) 
{
	{
		// get => (m_Bitset & (1 << k_RotAngleZBit)) != 0;
		uint16_t L_0 = __this->___m_Bitset_11;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_HasRotAngleZ_m0E8B47FF7B00F0AF937652726E9B3D47CBA254FE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_HasRotAngleZ_m0E8B47FF7B00F0AF937652726E9B3D47CBA254FE(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasRotAngleZ(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasRotAngleZ_m4B5C80348A28835BCA0E3E561F70FBF69072F528 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_RotAngleZBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_RotAngleZBit)); }
		uint16_t L_1 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_1|((int32_t)64))));
		return;
	}

IL_0014:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_RotAngleZBit)); }
		uint16_t L_2 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_2&((int32_t)-65))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_HasRotAngleZ_m4B5C80348A28835BCA0E3E561F70FBF69072F528_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	NetworkTransformState_set_HasRotAngleZ_m4B5C80348A28835BCA0E3E561F70FBF69072F528(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasScaleX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasScaleX_m62884CDB2892EBAA435E6B5990ED6E263813E27F (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) 
{
	{
		// get => (m_Bitset & (1 << k_ScaleXBit)) != 0;
		uint16_t L_0 = __this->___m_Bitset_11;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)128)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_HasScaleX_m62884CDB2892EBAA435E6B5990ED6E263813E27F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_HasScaleX_m62884CDB2892EBAA435E6B5990ED6E263813E27F(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasScaleX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasScaleX_m4C1A8819BEB42604BED6E8F1D13C45A873E2E1D1 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_ScaleXBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_ScaleXBit)); }
		uint16_t L_1 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_1|((int32_t)128))));
		return;
	}

IL_0017:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_ScaleXBit)); }
		uint16_t L_2 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_2&((int32_t)-129))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_HasScaleX_m4C1A8819BEB42604BED6E8F1D13C45A873E2E1D1_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	NetworkTransformState_set_HasScaleX_m4C1A8819BEB42604BED6E8F1D13C45A873E2E1D1(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasScaleY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasScaleY_m08BBB82139D65BFEB7A608F9CFC048E841ACA9DE (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) 
{
	{
		// get => (m_Bitset & (1 << k_ScaleYBit)) != 0;
		uint16_t L_0 = __this->___m_Bitset_11;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)256)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_HasScaleY_m08BBB82139D65BFEB7A608F9CFC048E841ACA9DE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_HasScaleY_m08BBB82139D65BFEB7A608F9CFC048E841ACA9DE(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasScaleY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasScaleY_m55D88DF7CF380773117F6132BF7A46B89C70D0AB (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_ScaleYBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_ScaleYBit)); }
		uint16_t L_1 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_1|((int32_t)256))));
		return;
	}

IL_0017:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_ScaleYBit)); }
		uint16_t L_2 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_2&((int32_t)-257))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_HasScaleY_m55D88DF7CF380773117F6132BF7A46B89C70D0AB_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	NetworkTransformState_set_HasScaleY_m55D88DF7CF380773117F6132BF7A46B89C70D0AB(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasScaleZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasScaleZ_m4C1375674CCF760F831467D767B1CB24DB916F12 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) 
{
	{
		// get => (m_Bitset & (1 << k_ScaleZBit)) != 0;
		uint16_t L_0 = __this->___m_Bitset_11;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)512)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_HasScaleZ_m4C1375674CCF760F831467D767B1CB24DB916F12_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_HasScaleZ_m4C1375674CCF760F831467D767B1CB24DB916F12(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_HasScaleZ(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_HasScaleZ_m96A06064AF420C4FBE9B3E40121905669A4FBAD2 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_ScaleZBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_ScaleZBit)); }
		uint16_t L_1 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_1|((int32_t)512))));
		return;
	}

IL_0017:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_ScaleZBit)); }
		uint16_t L_2 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_2&((int32_t)-513))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_HasScaleZ_m96A06064AF420C4FBE9B3E40121905669A4FBAD2_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	NetworkTransformState_set_HasScaleZ_m96A06064AF420C4FBE9B3E40121905669A4FBAD2(_thisAdjusted, ___value0, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_IsTeleportingNextFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) 
{
	{
		// get => (m_Bitset & (1 << k_TeleportingBit)) != 0;
		uint16_t L_0 = __this->___m_Bitset_11;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)1024)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	bool _returnValue;
	_returnValue = NetworkTransformState_get_IsTeleportingNextFrame_mE165AC8E2E423AA70047E5CFF5792B4065E1E233(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_IsTeleportingNextFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_IsTeleportingNextFrame_m916BFF5B26DB5D75BFBC330F04466FED4AF2E7C4 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_TeleportingBit)); }
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// if (value) { m_Bitset = (ushort)(m_Bitset | (1 << k_TeleportingBit)); }
		uint16_t L_1 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_1|((int32_t)1024))));
		return;
	}

IL_0017:
	{
		// else { m_Bitset = (ushort)(m_Bitset & ~(1 << k_TeleportingBit)); }
		uint16_t L_2 = __this->___m_Bitset_11;
		__this->___m_Bitset_11 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_2&((int32_t)-1025))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_IsTeleportingNextFrame_m916BFF5B26DB5D75BFBC330F04466FED4AF2E7C4_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	NetworkTransformState_set_IsTeleportingNextFrame_m916BFF5B26DB5D75BFBC330F04466FED4AF2E7C4(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector3 Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NetworkTransformState_get_Position_m6EE3CD882D7AE5735F7CB7272B74697DB4F8C7A8 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) 
{
	{
		// get { return new Vector3(PositionX, PositionY, PositionZ); }
		float L_0 = __this->___PositionX_12;
		float L_1 = __this->___PositionY_13;
		float L_2 = __this->___PositionZ_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NetworkTransformState_get_Position_m6EE3CD882D7AE5735F7CB7272B74697DB4F8C7A8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = NetworkTransformState_get_Position_m6EE3CD882D7AE5735F7CB7272B74697DB4F8C7A8(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_Position_mAEBD3398159EBAFE97778684A564240F87AFCA1C (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// PositionX = value.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1 = L_0.___x_2;
		__this->___PositionX_12 = L_1;
		// PositionY = value.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___value0;
		float L_3 = L_2.___y_3;
		__this->___PositionY_13 = L_3;
		// PositionZ = value.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = L_4.___z_4;
		__this->___PositionZ_14 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_Position_mAEBD3398159EBAFE97778684A564240F87AFCA1C_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	NetworkTransformState_set_Position_mAEBD3398159EBAFE97778684A564240F87AFCA1C(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector3 Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NetworkTransformState_get_Rotation_m46EE6E47371DEB9BA5F3EB307364DD0578918A8F (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) 
{
	{
		// get { return new Vector3(RotAngleX, RotAngleY, RotAngleZ); }
		float L_0 = __this->___RotAngleX_15;
		float L_1 = __this->___RotAngleY_16;
		float L_2 = __this->___RotAngleZ_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NetworkTransformState_get_Rotation_m46EE6E47371DEB9BA5F3EB307364DD0578918A8F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = NetworkTransformState_get_Rotation_m46EE6E47371DEB9BA5F3EB307364DD0578918A8F(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_Rotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_Rotation_m115F1F57926A230C34F2CBE817EE11D3E520351B (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// RotAngleX = value.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1 = L_0.___x_2;
		__this->___RotAngleX_15 = L_1;
		// RotAngleY = value.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___value0;
		float L_3 = L_2.___y_3;
		__this->___RotAngleY_16 = L_3;
		// RotAngleZ = value.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = L_4.___z_4;
		__this->___RotAngleZ_17 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_Rotation_m115F1F57926A230C34F2CBE817EE11D3E520351B_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	NetworkTransformState_set_Rotation_m115F1F57926A230C34F2CBE817EE11D3E520351B(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector3 Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NetworkTransformState_get_Scale_m6DD817260F08350DBC11384C5BC478EAB014E26E (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) 
{
	{
		// get { return new Vector3(ScaleX, ScaleY, ScaleZ); }
		float L_0 = __this->___ScaleX_18;
		float L_1 = __this->___ScaleY_19;
		float L_2 = __this->___ScaleZ_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NetworkTransformState_get_Scale_m6DD817260F08350DBC11384C5BC478EAB014E26E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = NetworkTransformState_get_Scale_m6DD817260F08350DBC11384C5BC478EAB014E26E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::set_Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_set_Scale_m6FF3625E2AE27323E1AD8174A4C28C7C4B8C9151 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// ScaleX = value.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1 = L_0.___x_2;
		__this->___ScaleX_18 = L_1;
		// ScaleY = value.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___value0;
		float L_3 = L_2.___y_3;
		__this->___ScaleY_19 = L_3;
		// ScaleZ = value.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = L_4.___z_4;
		__this->___ScaleZ_20 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_set_Scale_m6FF3625E2AE27323E1AD8174A4C28C7C4B8C9151_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	NetworkTransformState_set_Scale_m6FF3625E2AE27323E1AD8174A4C28C7C4B8C9151(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF5A9A9AC62D7BAD992CEAB2E5B6A49F5D2B87700_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_3))));
		goto IL_000b;
	}

IL_000b:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkObject_get_IsSpawned_mDAF52C8099FE7F21C7AFF36622F74688E9E07CDA_inline (NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsSpawned { get; internal set; }
		bool L_0 = __this->___U3CIsSpawnedU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_Seek_mB69BB80C6A754FCD31EEC11BF09B1E354AADA64E_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___where0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// where = Math.Min(where, Handle->Capacity);
		int32_t L_0 = ___where0;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_1 = __this->___Handle_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___Capacity_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_0, L_2, NULL);
		___where0 = L_3;
		// if (Handle->Position > Handle->Length && where < Handle->Position)
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_4 = __this->___Handle_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Position_1;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_6 = __this->___Handle_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Length_2;
		if ((((int32_t)L_5) <= ((int32_t)L_7)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_8 = ___where0;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_9 = __this->___Handle_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___Position_1;
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_004f;
		}
	}
	{
		// Handle->Length = Handle->Position;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_11 = __this->___Handle_0;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_12 = __this->___Handle_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___Position_1;
		NullCheck(L_11);
		L_11->___Length_2 = L_13;
	}

IL_004f:
	{
		// Handle->Position = where;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_14 = __this->___Handle_0;
		int32_t L_15 = ___where0;
		NullCheck(L_14);
		L_14->___Position_1 = L_15;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_Truncate_m37769BA69463FC89CF72E53994AC55508087D7C5_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___where0, const RuntimeMethod* method) 
{
	{
		// if (where == -1)
		int32_t L_0 = ___where0;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000c;
		}
	}
	{
		// where = Position;
		int32_t L_1;
		L_1 = FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline(__this, NULL);
		___where0 = L_1;
	}

IL_000c:
	{
		// if (Handle->Position > where)
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Position_1;
		int32_t L_4 = ___where0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0026;
		}
	}
	{
		// Handle->Position = where;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_5 = __this->___Handle_0;
		int32_t L_6 = ___where0;
		NullCheck(L_5);
		L_5->___Position_1 = L_6;
	}

IL_0026:
	{
		// if (Handle->Length > where)
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_7 = __this->___Handle_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___Length_2;
		int32_t L_9 = ___where0;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_0040;
		}
	}
	{
		// Handle->Length = where;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_10 = __this->___Handle_0;
		int32_t L_11 = ___where0;
		NullCheck(L_10);
		L_10->___Length_2 = L_11;
	}

IL_0040:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* FastBufferWriter_ToArray_mC3A2B1C0D9DD5C11E08A371C70E600FC771B2E67_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B4_0 = NULL;
	{
		// byte[] ret = new byte[Length];
		int32_t L_0;
		L_0 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		// fixed (byte* b = ret)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		V_1 = L_3;
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		G_B2_0 = G_B1_0;
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			G_B3_0 = G_B1_0;
			goto IL_001a;
		}
	}

IL_0015:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		G_B4_0 = G_B2_0;
		goto IL_0023;
	}

IL_001a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		NullCheck(L_5);
		V_0 = (uint8_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		// UnsafeUtility.MemCpy(b, Handle->BufferPointer, Length);
		uint8_t* L_6 = V_0;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_7 = __this->___Handle_0;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___BufferPointer_0;
		int32_t L_9;
		L_9 = FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline(__this, NULL);
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B((void*)L_6, (void*)L_8, ((int64_t)L_9), NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// return ret;
		return G_B4_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetworkTime_get_Time_mDC7F8AB78A0D860B5D3BF62AF1E42724059F690B_inline (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) 
{
	{
		// public double Time => m_TimeSec;
		double L_0 = __this->___m_TimeSec_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BytePacker_WriteValuePacked_m0D4AE5A133595B059C397DFD8A06D1C5679A10ED_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint32_t ___value1, const RuntimeMethod* method) 
{
	{
		// public static void WriteValuePacked(FastBufferWriter writer, uint value) => WriteUInt32Packed(writer, value);
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_0 = ___writer0;
		uint32_t L_1 = ___value1;
		BytePacker_WriteUInt32Packed_mCAA2D429DC2E601669A6F8A34384F4AE06241A1F(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Length_m7266B7D8C1D5C7C6876FBC287C06655EB9593396_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) 
{
	{
		// get => Handle->Position > Handle->Length ? Handle->Position : Handle->Length;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_2 = __this->___Handle_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___Length_2;
		if ((((int32_t)L_1) > ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_4 = __this->___Handle_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Length_2;
		return L_5;
	}

IL_0024:
	{
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_6 = __this->___Handle_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___Position_1;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ByteUnpacker_ReadValuePacked_m7A710DF5CB32B19D2256D9A7F44842F700D5FC46_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 ___reader0, int32_t* ___value1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		// ReadUInt32Packed(reader, out uint readValue);
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_0 = ___reader0;
		ByteUnpacker_ReadUInt32Packed_mD21C95CCB8A42C0E2FFF73A0722DDA545A272282(L_0, (&V_0), NULL);
		// value = (int)Arithmetic.ZigZagDecode(readValue);
		int32_t* L_1 = ___value1;
		uint32_t L_2 = V_0;
		int64_t L_3;
		L_3 = Arithmetic_ZigZagDecode_m25A4918E5A6C2EFA14047C49C3ACFF68FA12FB3C(((int64_t)(uint64_t)L_2), NULL);
		*((int32_t*)L_1) = (int32_t)((int32_t)L_3);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsListening_m6E683AF8D3D2D2716957B42C8CD8CD47EC3D688C_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsListening { get; internal set; }
		bool L_0 = __this->___U3CIsListeningU3Ek__BackingField_34;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsServer { get; internal set; }
		bool L_0 = __this->___U3CIsServerU3Ek__BackingField_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsClient_mC9E982EA43899619BFFAF01409F5BBD1FE020001_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsClient { get; internal set; }
		bool L_0 = __this->___U3CIsClientU3Ek__BackingField_33;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkTime_get_Tick_m1544072B4A5D9F6767E31A77EFB451B6B0F5B991_inline (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) 
{
	{
		// public int Tick => m_CachedTick;
		int32_t L_0 = __this->___m_CachedTick_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsConnectedClient_m6A551DE92D70EFC1940AB427EA727968DA3C9A59_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsConnectedClient { get; internal set; }
		bool L_0 = __this->___U3CIsConnectedClientU3Ek__BackingField_35;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_3_tE39E42FC756887AF8710ED1B13FCC5F5409FABC4 OnClientRequestChangeDelegate_Invoke_m70587050315AEAB486DC53CBBA194371CC422530_inline (OnClientRequestChangeDelegate_t6B736624F278668F5B5AD070F02AB4AB013BC1C8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale2, const RuntimeMethod* method) 
{
	typedef ValueTuple_3_tE39E42FC756887AF8710ED1B13FCC5F5409FABC4 (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___pos0, ___rot1, ___scale2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF1323B69B63D7207805FA651F0DDDB44C848B1B8_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, bool* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool* V_1 = NULL;
	bool* V_2 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(bool);
		V_0 = (int32_t)L_0;
		// if (!TryBeginWriteInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferWriter_TryBeginWriteInternal_m9DD6CDBDC49E5AF7A760EA05882BE4F52BEA1883_inline(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Writing past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_3 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF1323B69B63D7207805FA651F0DDDB44C848B1B8_RuntimeMethod_var)));
	}

IL_001b:
	{
		bool* L_4 = ___value0;
		V_2 = L_4;
		// fixed (T* ptr = &value)
		bool* L_5 = V_2;
		V_1 = (bool*)((uintptr_t)L_5);
		// UnsafeUtility.MemCpy(Handle->BufferPointer + Handle->Position, (byte*)ptr, len);
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_6 = (WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6*)__this->___Handle_0;
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->___BufferPointer_0;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_8 = (WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6*)__this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___Position_1;
		bool* L_10 = V_1;
		int32_t L_11 = V_0;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_9)), (void*)L_10, ((int64_t)L_11), NULL);
		V_2 = (bool*)((uintptr_t)0);
		// Handle->Position += len;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_12 = (WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6*)__this->___Handle_0;
		NullCheck(L_12);
		int32_t* L_13 = (int32_t*)(&L_12->___Position_1);
		int32_t* L_14 = L_13;
		int32_t L_15 = *((int32_t*)L_14);
		int32_t L_16 = V_0;
		*((int32_t*)L_14) = (int32_t)((int32_t)il2cpp_codegen_add(L_15, L_16));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC7B82585B9FE286D98075E718A95CD21D70180E4_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, float* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float* V_1 = NULL;
	float* V_2 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(float);
		V_0 = (int32_t)L_0;
		// if (!TryBeginWriteInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferWriter_TryBeginWriteInternal_m9DD6CDBDC49E5AF7A760EA05882BE4F52BEA1883_inline(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Writing past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_3 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC7B82585B9FE286D98075E718A95CD21D70180E4_RuntimeMethod_var)));
	}

IL_001b:
	{
		float* L_4 = ___value0;
		V_2 = L_4;
		// fixed (T* ptr = &value)
		float* L_5 = V_2;
		V_1 = (float*)((uintptr_t)L_5);
		// UnsafeUtility.MemCpy(Handle->BufferPointer + Handle->Position, (byte*)ptr, len);
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_6 = (WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6*)__this->___Handle_0;
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->___BufferPointer_0;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_8 = (WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6*)__this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___Position_1;
		float* L_10 = V_1;
		int32_t L_11 = V_0;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_9)), (void*)L_10, ((int64_t)L_11), NULL);
		V_2 = (float*)((uintptr_t)0);
		// Handle->Position += len;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_12 = (WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6*)__this->___Handle_0;
		NullCheck(L_12);
		int32_t* L_13 = (int32_t*)(&L_12->___Position_1);
		int32_t* L_14 = L_13;
		int32_t L_15 = *((int32_t*)L_14);
		int32_t L_16 = V_0;
		*((int32_t*)L_14) = (int32_t)((int32_t)il2cpp_codegen_add(L_15, L_16));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m66E2AA444E3D7FA5540201E563319F97DC0A2A40_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, bool* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool* V_1 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(bool);
		V_0 = (int32_t)L_0;
		// if (!TryBeginReadInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferReader_TryBeginReadInternal_m5C597FDF5DF8DA7AE28A0A441AF6542DD05B05B1_inline(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Reading past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_3 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadValueSafe_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m66E2AA444E3D7FA5540201E563319F97DC0A2A40_RuntimeMethod_var)));
	}

IL_001b:
	{
		bool* L_4 = ___value0;
		V_1 = L_4;
		// fixed (T* ptr = &value)
		bool* L_5 = V_1;
		// UnsafeUtility.MemCpy((byte*)ptr, Handle->BufferPointer + Handle->Position, len);
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_6 = (ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8*)__this->___Handle_0;
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->___BufferPointer_0;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_8 = (ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8*)__this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___Position_1;
		int32_t L_10 = V_0;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B((void*)((uintptr_t)L_5), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_9)), ((int64_t)L_10), NULL);
		V_1 = (bool*)((uintptr_t)0);
		// Handle->Position += len;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_11 = (ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8*)__this->___Handle_0;
		NullCheck(L_11);
		int32_t* L_12 = (int32_t*)(&L_11->___Position_1);
		int32_t* L_13 = L_12;
		int32_t L_14 = *((int32_t*)L_13);
		int32_t L_15 = V_0;
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add(L_14, L_15));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCCC0AEC3625AD1F2B962276BCC40A93282FE7F49_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, float* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float* V_1 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(float);
		V_0 = (int32_t)L_0;
		// if (!TryBeginReadInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferReader_TryBeginReadInternal_m5C597FDF5DF8DA7AE28A0A441AF6542DD05B05B1_inline(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Reading past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_3 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadValueSafe_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCCC0AEC3625AD1F2B962276BCC40A93282FE7F49_RuntimeMethod_var)));
	}

IL_001b:
	{
		float* L_4 = ___value0;
		V_1 = L_4;
		// fixed (T* ptr = &value)
		float* L_5 = V_1;
		// UnsafeUtility.MemCpy((byte*)ptr, Handle->BufferPointer + Handle->Position, len);
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_6 = (ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8*)__this->___Handle_0;
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->___BufferPointer_0;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_8 = (ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8*)__this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___Position_1;
		int32_t L_10 = V_0;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B((void*)((uintptr_t)L_5), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_9)), ((int64_t)L_10), NULL);
		V_1 = (float*)((uintptr_t)0);
		// Handle->Position += len;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_11 = (ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8*)__this->___Handle_0;
		NullCheck(L_11);
		int32_t* L_12 = (int32_t*)(&L_11->___Position_1);
		int32_t* L_13 = L_12;
		int32_t L_14 = *((int32_t*)L_13);
		int32_t L_15 = V_0;
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add(L_14, L_15));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BufferedLinearInterpolator_1_GetInterpolatedValue_mABAA50082A53E38CA5B772C9C20CD0B892E4DF3A_gshared_inline (BufferedLinearInterpolator_1_tB6E3B7211D2595E15BE86FB94F42A266D5C54964* __this, const RuntimeMethod* method) 
{
	{
		// return m_CurrentInterpValue;
		float L_0 = (float)__this->___m_CurrentInterpValue_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 BufferedLinearInterpolator_1_GetInterpolatedValue_m7122EEDBDF0BFCAF1D2A7199A1D2D8DBB430C33E_gshared_inline (BufferedLinearInterpolator_1_t2A7385D09F2F1D1F98AB7B51459D27DE8AEC9C8B* __this, const RuntimeMethod* method) 
{
	{
		// return m_CurrentInterpValue;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)__this->___m_CurrentInterpValue_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
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
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_gshared_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9D3E39C05D6F69CFF5A2A4CD0034CDA830F7E2CF_gshared_inline (Nullable_1_tC8106DB4DC621B5BCB8913A244640A1CEDF9DD25* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m53EDE2E29B562A2314E00496FF0FCA51CA81BC42_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* V_2 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		V_0 = (int32_t)L_0;
		// if (!TryBeginWriteInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferWriter_TryBeginWriteInternal_m9DD6CDBDC49E5AF7A760EA05882BE4F52BEA1883_inline(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Writing past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_3 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m53EDE2E29B562A2314E00496FF0FCA51CA81BC42_RuntimeMethod_var)));
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___value0;
		V_2 = L_4;
		// fixed (T* ptr = &value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = V_2;
		V_1 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((uintptr_t)L_5);
		// UnsafeUtility.MemCpy(Handle->BufferPointer + Handle->Position, (byte*)ptr, len);
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_6 = (WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6*)__this->___Handle_0;
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->___BufferPointer_0;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_8 = (WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6*)__this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___Position_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = V_1;
		int32_t L_11 = V_0;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_9)), (void*)L_10, ((int64_t)L_11), NULL);
		V_2 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((uintptr_t)0);
		// Handle->Position += len;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_12 = (WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6*)__this->___Handle_0;
		NullCheck(L_12);
		int32_t* L_13 = (int32_t*)(&L_12->___Position_1);
		int32_t* L_14 = L_13;
		int32_t L_15 = *((int32_t*)L_14);
		int32_t L_16 = V_0;
		*((int32_t*)L_14) = (int32_t)((int32_t)il2cpp_codegen_add(L_15, L_16));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValueSafe_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m43B787A9D8BFF0713DD22EDD0ACE8DCB1D0403C7_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* V_1 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* V_2 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		V_0 = (int32_t)L_0;
		// if (!TryBeginWriteInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferWriter_TryBeginWriteInternal_m9DD6CDBDC49E5AF7A760EA05882BE4F52BEA1883_inline(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Writing past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_3 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0792E4AFA7E48CD5B525E1E10BEB391BD861FCA4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_WriteValueSafe_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m43B787A9D8BFF0713DD22EDD0ACE8DCB1D0403C7_RuntimeMethod_var)));
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_4 = ___value0;
		V_2 = L_4;
		// fixed (T* ptr = &value)
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = V_2;
		V_1 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((uintptr_t)L_5);
		// UnsafeUtility.MemCpy(Handle->BufferPointer + Handle->Position, (byte*)ptr, len);
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_6 = (WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6*)__this->___Handle_0;
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->___BufferPointer_0;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_8 = (WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6*)__this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___Position_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_10 = V_1;
		int32_t L_11 = V_0;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_9)), (void*)L_10, ((int64_t)L_11), NULL);
		V_2 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((uintptr_t)0);
		// Handle->Position += len;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_12 = (WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6*)__this->___Handle_0;
		NullCheck(L_12);
		int32_t* L_13 = (int32_t*)(&L_12->___Position_1);
		int32_t* L_14 = L_13;
		int32_t L_15 = *((int32_t*)L_14);
		int32_t L_16 = V_0;
		*((int32_t*)L_14) = (int32_t)((int32_t)il2cpp_codegen_add(L_15, L_16));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3BD7AB5985FCF1E3C818E0F32ABD84706A53BC07_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* V_1 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		V_0 = (int32_t)L_0;
		// if (!TryBeginReadInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferReader_TryBeginReadInternal_m5C597FDF5DF8DA7AE28A0A441AF6542DD05B05B1_inline(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Reading past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_3 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadValueSafe_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m3BD7AB5985FCF1E3C818E0F32ABD84706A53BC07_RuntimeMethod_var)));
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___value0;
		V_1 = L_4;
		// fixed (T* ptr = &value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = V_1;
		// UnsafeUtility.MemCpy((byte*)ptr, Handle->BufferPointer + Handle->Position, len);
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_6 = (ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8*)__this->___Handle_0;
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->___BufferPointer_0;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_8 = (ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8*)__this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___Position_1;
		int32_t L_10 = V_0;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B((void*)((uintptr_t)L_5), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_9)), ((int64_t)L_10), NULL);
		V_1 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((uintptr_t)0);
		// Handle->Position += len;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_11 = (ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8*)__this->___Handle_0;
		NullCheck(L_11);
		int32_t* L_12 = (int32_t*)(&L_11->___Position_1);
		int32_t* L_13 = L_12;
		int32_t L_14 = *((int32_t*)L_13);
		int32_t L_15 = V_0;
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add(L_14, L_15));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValueSafe_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m65D5B17C9E42897A683FC7E5D8E65D5BEBA103C5_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* V_1 = NULL;
	{
		// int len = sizeof(T);
		uint32_t L_0 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		V_0 = (int32_t)L_0;
		// if (!TryBeginReadInternal(len))
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = FastBufferReader_TryBeginReadInternal_m5C597FDF5DF8DA7AE28A0A441AF6542DD05B05B1_inline(__this, L_1, NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new OverflowException("Reading past the end of the buffer");
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_3 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF21904EFB65D04E5663A3FC17AC50638F117D3DF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_ReadValueSafe_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m65D5B17C9E42897A683FC7E5D8E65D5BEBA103C5_RuntimeMethod_var)));
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_4 = ___value0;
		V_1 = L_4;
		// fixed (T* ptr = &value)
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_5 = V_1;
		// UnsafeUtility.MemCpy((byte*)ptr, Handle->BufferPointer + Handle->Position, len);
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_6 = (ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8*)__this->___Handle_0;
		NullCheck(L_6);
		uint8_t* L_7 = (uint8_t*)L_6->___BufferPointer_0;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_8 = (ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8*)__this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)L_8->___Position_1;
		int32_t L_10 = V_0;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B((void*)((uintptr_t)L_5), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, L_9)), ((int64_t)L_10), NULL);
		V_1 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((uintptr_t)0);
		// Handle->Position += len;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_11 = (ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8*)__this->___Handle_0;
		NullCheck(L_11);
		int32_t* L_12 = (int32_t*)(&L_11->___Position_1);
		int32_t* L_13 = L_12;
		int32_t L_14 = *((int32_t*)L_13);
		int32_t L_15 = V_0;
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add(L_14, L_15));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_get_Position_m87642B5268B41B7D15D4E628DF93A5B5776A4B05_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, const RuntimeMethod* method) 
{
	{
		// get => Handle->Position;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWriteInternal_m9DD6CDBDC49E5AF7A760EA05882BE4F52BEA1883_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___bytes0, const RuntimeMethod* method) 
{
	{
		// if (Handle->Position + bytes > Handle->Capacity)
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		int32_t L_2 = ___bytes0;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Capacity_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_4)))
		{
			goto IL_0059;
		}
	}
	{
		// if (Handle->Position + bytes > Handle->MaxCapacity)
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_5 = __this->___Handle_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___Position_1;
		int32_t L_7 = ___bytes0;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_8 = __this->___Handle_0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___MaxCapacity_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)L_9)))
		{
			goto IL_0036;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0036:
	{
		// if (Handle->Capacity < Handle->MaxCapacity)
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_10 = __this->___Handle_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Capacity_3;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_12 = __this->___Handle_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->___MaxCapacity_4;
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_0057;
		}
	}
	{
		// Grow(bytes);
		int32_t L_14 = ___bytes0;
		FastBufferWriter_Grow_mAD43637D60A44A3D7DCEB09D0425822F6C2A23FB(__this, L_14, NULL);
		goto IL_0059;
	}

IL_0057:
	{
		// return false;
		return (bool)0;
	}

IL_0059:
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginReadInternal_m5C597FDF5DF8DA7AE28A0A441AF6542DD05B05B1_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, int32_t ___bytes0, const RuntimeMethod* method) 
{
	{
		// if (Handle->Position + bytes > Handle->Length)
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Position_1;
		int32_t L_2 = ___bytes0;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_3 = __this->___Handle_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___Length_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, L_2))) <= ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001c:
	{
		// return true;
		return (bool)1;
	}
}
