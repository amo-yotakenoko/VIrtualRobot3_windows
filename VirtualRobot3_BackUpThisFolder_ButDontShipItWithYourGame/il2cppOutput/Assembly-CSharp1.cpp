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

// System.Comparison`1<System.Object>
struct Comparison_1_tB56E8E7C2BF431D44E8EBD15EA3E6F41AAFF03D2;
// System.Comparison`1<System.String>
struct Comparison_1_t7EBC739A23D30086C8C7FD999344464ECAD45ABB;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Single>
struct KeyCollection_t4D241C20EE62BCA1232D2371439BDE98CDB43B73;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>
struct ValueCollection_tBDF019BF14989BB82B132CD749D27E07AB6E57A1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Single>[]
struct EntryU5BU5D_t51F1564643B0A19F04A1EA195903453FC21D830E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// UnityEngine.HingeJoint
struct HingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// end
struct end_tDD3367686B3440E44BAD14851F1ED58F8590CBC5;
// execution
struct execution_tF7399C7FC9B17C371DDAD512080EF16F510535E1;
// itemselect
struct itemselect_tD9D130EB5E787DBEC915E8AE169BC808DB2C15C9;
// math
struct math_t5073EA2BC76A7C2E0737C01C7BCF7DA8E0932614;
// misson
struct misson_tE35F9FCDC3926935096D22473095FE7579801E0D;
// player
struct player_tA80E0022C279849EE513BB6A4017ED62943ADC71;
// programblock
struct programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3;
// programblockproperty
struct programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63;
// robotBlock
struct robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9;
// robotblockdata
struct robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1;
// robotselect
struct robotselect_t0B0500EFF7DCB8EDFEBC7A307728C8AB90E53BB9;
// robottable
struct robottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D;
// save
struct save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC;
// servo
struct servo_tCF313257B5995D81652CB49BC8B6E39666E9AD98;
// stageselect
struct stageselect_tE665A7E52F8D9EC33BAA55E5A382C965241E1811;
// startblock
struct startblock_tBD5C23291F2047F5B1219E2A53154C671E3169DC;
// swich
struct swich_tED3711F0A89E2185E7FE1E24493DF1DB96DF90FC;
// titlecamera
struct titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D;
// tutorial
struct tutorial_t1F1611D4CF7705BAAF90F754A420AD55500FA99F;
// variables
struct variables_t3A18CB7A411573B064E656403C615084074FE63D;
// whileblock
struct whileblock_t0BBCEC21FB1F2674F833F551D913738092D7143E;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t85372BABF7066F7DF46B414EA94C5D42736A0E8D;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// programblocksave/programblockproperty
struct programblockproperty_t2BCDA5CD45C219084CD0446CE5F3DDBC1254E587;

IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t7EBC739A23D30086C8C7FD999344464ECAD45ABB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* variables_t3A18CB7A411573B064E656403C615084074FE63D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0A02F08F5C8411189B43E90868A2C6136E3A9F14;
IL2CPP_EXTERN_C String_t* _stringLiteral0A3ADB9136576319678DA759106D93A1CAB3D326;
IL2CPP_EXTERN_C String_t* _stringLiteral12163AB909551A0447E9B024DE557464EB0FE2F0;
IL2CPP_EXTERN_C String_t* _stringLiteral15B86A1C16305C5888786BF374E35F0ABB4044F7;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1DD1D980B722E2F9D713D1C3C669AE12A3DC0BFD;
IL2CPP_EXTERN_C String_t* _stringLiteral20D87BA4EE37D1A5D3AC4D9502E9929BA9F8D795;
IL2CPP_EXTERN_C String_t* _stringLiteral21BDAEC6CF9B1EA7BF1F769B844B830FEB156873;
IL2CPP_EXTERN_C String_t* _stringLiteral22BA8A117D106201EAAC6139A717D4FC4D9DEC5A;
IL2CPP_EXTERN_C String_t* _stringLiteral23A23D4B2C32D1BA8AAE3C37A173A2ACD553D4A3;
IL2CPP_EXTERN_C String_t* _stringLiteral240F08581B82AB6DE76295951D7DE37005D967FB;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral28A0662C1D75F6A45B7689E781183379ECEAC7CA;
IL2CPP_EXTERN_C String_t* _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F;
IL2CPP_EXTERN_C String_t* _stringLiteral29E43B6AFB342BC9C1549B18C2BF712C991FDDD1;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral2BA57791BAE44502293C8A4B600485817ADD058F;
IL2CPP_EXTERN_C String_t* _stringLiteral43B096CF6F72E47CD49136078669899171867B8C;
IL2CPP_EXTERN_C String_t* _stringLiteral448E201B3332EF539748ECA7BACE5ED9C8358814;
IL2CPP_EXTERN_C String_t* _stringLiteral4892C810EC90C99AE0237971E77ED7BD22D8E806;
IL2CPP_EXTERN_C String_t* _stringLiteral48BA8423A3ADC76C5733C0B8A2BA7DE29A20CAC4;
IL2CPP_EXTERN_C String_t* _stringLiteral4D29F7FE207105E0207D0267E68F48F34FAA2B22;
IL2CPP_EXTERN_C String_t* _stringLiteral50A8863477B395531AE591FC12CCA3FC439B5955;
IL2CPP_EXTERN_C String_t* _stringLiteral50DD561547D08136581711028213F4DCA7FDD7F8;
IL2CPP_EXTERN_C String_t* _stringLiteral5242CA2A57E7C342839B448D32292929AEB6029B;
IL2CPP_EXTERN_C String_t* _stringLiteral5329E4EA335D502C9D8FA5F86B60ABA4BFA95BCC;
IL2CPP_EXTERN_C String_t* _stringLiteral544D3EEC62A9634856AD5B296AC23A5284C8530C;
IL2CPP_EXTERN_C String_t* _stringLiteral5A86C5EFABF4E3FB687EBE684BB92428258D1AF4;
IL2CPP_EXTERN_C String_t* _stringLiteral5A9CC9DC59C3C46CEF4E23A8B1C0E7EFDDD73360;
IL2CPP_EXTERN_C String_t* _stringLiteral5C158AB4EE81430E5A9C4821E81EA81B61010BE2;
IL2CPP_EXTERN_C String_t* _stringLiteral60E8D3500F766ED764FB131C8383163A53369162;
IL2CPP_EXTERN_C String_t* _stringLiteral61A88EF487F99DCB9558AAAD39471532DEE75F42;
IL2CPP_EXTERN_C String_t* _stringLiteral64FE037FD423B6A375D4D07F76FCF5D8FC53FFD3;
IL2CPP_EXTERN_C String_t* _stringLiteral699DE12DC3094B06A5098E77FB1CDD72975B76A2;
IL2CPP_EXTERN_C String_t* _stringLiteral69BCC20E4200B84702A429B76222FB5A9E9FE54B;
IL2CPP_EXTERN_C String_t* _stringLiteral6AA97B5F2590892D57E0B9315B82C8BBC431958E;
IL2CPP_EXTERN_C String_t* _stringLiteral6DC155D688A77AB1B52A37CA6889F23C99502CFC;
IL2CPP_EXTERN_C String_t* _stringLiteral76752ECA7E2DE9C273C6EA646CC7CF3F182B95AF;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8BD3AEA3F9B139CA62B514916E57CA9F418AFEE3;
IL2CPP_EXTERN_C String_t* _stringLiteral8CF86DD974245D76B28A56DE81BFDABD3EDF63DE;
IL2CPP_EXTERN_C String_t* _stringLiteral8ED2D7BF70062A9BBDC81C142C3367C446A7481C;
IL2CPP_EXTERN_C String_t* _stringLiteral9199BA1F7F7B3398048A76001D9B3BDD977E67B7;
IL2CPP_EXTERN_C String_t* _stringLiteral9A4E9819A62B37CDEFDE754FE870C3E5B3F3B7C3;
IL2CPP_EXTERN_C String_t* _stringLiteral9AB9B21C957A123FF896A0ECF86032D49519CC33;
IL2CPP_EXTERN_C String_t* _stringLiteral9BC1D0330CFCB704F750E1E7B16022F507C9360D;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA787A9719F350E9E70731CDF89D931F4B3944138;
IL2CPP_EXTERN_C String_t* _stringLiteralA901806FDD83FD3A949A67529719D34FC36A3F95;
IL2CPP_EXTERN_C String_t* _stringLiteralAD522BF64F2D257409CB3BAC45086A2EA0B03C59;
IL2CPP_EXTERN_C String_t* _stringLiteralB046325452A2030018F7F10DA54EF183E8BD0416;
IL2CPP_EXTERN_C String_t* _stringLiteralB0B8F70D8F2E3EC6FCBA117B4B01ED3741F1B45D;
IL2CPP_EXTERN_C String_t* _stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F;
IL2CPP_EXTERN_C String_t* _stringLiteralBB95A8BDED8E863EA19239C49CB569B1A0A1C30D;
IL2CPP_EXTERN_C String_t* _stringLiteralC0C966CEEB9AAA93CD763DC9A83C5D79CBF560AB;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC1B8CE2076333139656A3669C7511B1EDC3242B3;
IL2CPP_EXTERN_C String_t* _stringLiteralC2C026B81D064382A99DEE6ABD5516938F8A482B;
IL2CPP_EXTERN_C String_t* _stringLiteralC3B9864A8EB7960F317069B1506F178F125AE2BF;
IL2CPP_EXTERN_C String_t* _stringLiteralC40308D9CD5308D1A688E021361D33153A012F11;
IL2CPP_EXTERN_C String_t* _stringLiteralC4F48A234338812C428DA2BA6D189CFDD37E88B4;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCF4386087FAB3E9B1AB569E7B30B8B58FC07803B;
IL2CPP_EXTERN_C String_t* _stringLiteralD03C3C7F3A363D2E45775B1A6E39D7D5E5BEA998;
IL2CPP_EXTERN_C String_t* _stringLiteralD100379D1CBD46F6170EFBFA2D6117321AD842E4;
IL2CPP_EXTERN_C String_t* _stringLiteralD1C13775314E0A5E8811673F98C7124312AFE76A;
IL2CPP_EXTERN_C String_t* _stringLiteralD6EC69BBD94B23C22148064344B02111815F29EF;
IL2CPP_EXTERN_C String_t* _stringLiteralD91D91C69FEAF4ABF12EB08057DF8942A89BDD4B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralDC591B96B12C5406D5295E31F5FDC9634D6725A4;
IL2CPP_EXTERN_C String_t* _stringLiteralDDF287A1A81ABE031A266689E5DBC5121B15AE01;
IL2CPP_EXTERN_C String_t* _stringLiteralDE2EB8C21234B60F56F47667B6AB28B8001924C0;
IL2CPP_EXTERN_C String_t* _stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125;
IL2CPP_EXTERN_C String_t* _stringLiteralE8243A6B217C824C56CFAF8DE26C0A7F156AF040;
IL2CPP_EXTERN_C String_t* _stringLiteralE83822A6AFFBBE0E3179F3D590E661D88BC3F7C3;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEF5E0B07E0212F7EE452093BD06D97584B339C62;
IL2CPP_EXTERN_C String_t* _stringLiteralF2730ADC3E3C8CE8F3A41BC7E5438AD14001A7E8;
IL2CPP_EXTERN_C String_t* _stringLiteralF29C60C5C9F5C4D8E2833F276FA6D79B12CE5B51;
IL2CPP_EXTERN_C String_t* _stringLiteralF538E9847209F874F87160C6388F0273ADE24D77;
IL2CPP_EXTERN_C String_t* _stringLiteralF82FAA612C2076227BCF36D5BEFA714C569F43EC;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFA8820B8503A0DF8EC4AFFB9970E4A5EB027D933;
IL2CPP_EXTERN_C String_t* _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisString_t_mD0D8463CA1520B9E2CB7A1C7E84DD30EE9D9CD1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Comparison_1__ctor_m64CA537CD79C3B4D4D21B2668784DC72AF0E47E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m1025822CFFC3A3C846267590775A843ED9532924_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m2437386FD2A3D00F29F9E6EA2DB01183C4C9C21C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisrobotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9_mB9323EE8D9058759682D53247CB54075C995D6F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_Tissave_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC_m358F055AC5E4516B6A1B52F340D1C0D882204AEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8E0289EE21A5628082748222E1FE2F52C0BB5D87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2CE67E373BDB82A6E6FBA950E28F917BB650DB6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m0D12A8E922828B1FBE6FCA8D404FDA65E0F78CDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m21F0F6BC1FCFC0FEE024B53453596D43D0BC472B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFB991F7C2A32C8DA7C4D2F522B9C69C36F7DF904_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5357493D8DA32113DC35EE95205D4E3D607C9F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF8B11007A1406BB1D35A3402AE0726AD8C4DAABA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_m88986FA73F2B6D6D5B41BEC8A6D02DA3C89E7E11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C_mD691563E795E39668B6EFEC64CF8C5ED0C1989DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mEC132E230E8EE882BFFCEF116997ADFBC3BFC1C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m901E6F3CDB43769BCA999C36538FE4ACA4AEB3A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisend_tDD3367686B3440E44BAD14851F1ED58F8590CBC5_mF5439E58A8A94ED724A75CBF77A7C7CA3A5B3C36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisexecution_tF7399C7FC9B17C371DDAD512080EF16F510535E1_mC83D9F629DC26E55359CB701968697DE16522990_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tismisson_tE35F9FCDC3926935096D22473095FE7579801E0D_m5306AE9C65B1A733A9B55E80229B446395EBD8EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisplayer_tA80E0022C279849EE513BB6A4017ED62943ADC71_m0697638C371A3C624D3003D829B9C6461AB27039_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisrobotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9_m19DEDA9E21A3DDA7EBA1A60326933869D30624BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisrobottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D_m55187337BCC0A473298878E02385B88922D1257F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tissave_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC_m20FC1E122B3749058E0E2DA07D0B9AC05B25CD71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tiswhileblock_t0BBCEC21FB1F2674F833F551D913738092D7143E_mF36C03117C1B745A456CCA5D1C830476B1653C85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_Tisprogramblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63_m14C686217C4CE7A5620A9BE68E36A6629B76F4F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_Tisrobotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1_m68BF27A9A0D16E29E946F12086E8B21C108C53B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_mAC8E6DFDCE301D5AAE4F1DF7835BF981868AFF78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m85FD3AD1E7C2C143E7D5491BBB781F1C3DA22B85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* robotselect_CompareLastWriteTime_mA9D4D5E15BB885021943C2801DCF8E2379630FD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* titlecamera_GameSceneLoaded_mCC1336E024ACA85DEF6D3CD510B11649F9960E24_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct  Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t51F1564643B0A19F04A1EA195903453FC21D830E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t4D241C20EE62BCA1232D2371439BDE98CDB43B73 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBDF019BF14989BB82B132CD749D27E07AB6E57A1 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423, ___entries_1)); }
	inline EntryU5BU5D_t51F1564643B0A19F04A1EA195903453FC21D830E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t51F1564643B0A19F04A1EA195903453FC21D830E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t51F1564643B0A19F04A1EA195903453FC21D830E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423, ___keys_7)); }
	inline KeyCollection_t4D241C20EE62BCA1232D2371439BDE98CDB43B73 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t4D241C20EE62BCA1232D2371439BDE98CDB43B73 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t4D241C20EE62BCA1232D2371439BDE98CDB43B73 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423, ___values_8)); }
	inline ValueCollection_tBDF019BF14989BB82B132CD749D27E07AB6E57A1 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBDF019BF14989BB82B132CD749D27E07AB6E57A1 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBDF019BF14989BB82B132CD749D27E07AB6E57A1 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct  KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D, ___dictionary_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Text.Encoding
struct  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct  Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	RuntimeObject * ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___currentKey_3)); }
	inline RuntimeObject * get_currentKey_3() const { return ___currentKey_3; }
	inline RuntimeObject ** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(RuntimeObject * value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentKey_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>
struct  Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	String_t* ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547, ___dictionary_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547, ___currentKey_3)); }
	inline String_t* get_currentKey_3() const { return ___currentKey_3; }
	inline String_t** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(String_t* value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentKey_3), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.JointMotor
struct  JointMotor_t17429B3F7BA8727FF15A83BFBB05744BDB0BD634 
{
public:
	// System.Single UnityEngine.JointMotor::m_TargetVelocity
	float ___m_TargetVelocity_0;
	// System.Single UnityEngine.JointMotor::m_Force
	float ___m_Force_1;
	// System.Int32 UnityEngine.JointMotor::m_FreeSpin
	int32_t ___m_FreeSpin_2;

public:
	inline static int32_t get_offset_of_m_TargetVelocity_0() { return static_cast<int32_t>(offsetof(JointMotor_t17429B3F7BA8727FF15A83BFBB05744BDB0BD634, ___m_TargetVelocity_0)); }
	inline float get_m_TargetVelocity_0() const { return ___m_TargetVelocity_0; }
	inline float* get_address_of_m_TargetVelocity_0() { return &___m_TargetVelocity_0; }
	inline void set_m_TargetVelocity_0(float value)
	{
		___m_TargetVelocity_0 = value;
	}

	inline static int32_t get_offset_of_m_Force_1() { return static_cast<int32_t>(offsetof(JointMotor_t17429B3F7BA8727FF15A83BFBB05744BDB0BD634, ___m_Force_1)); }
	inline float get_m_Force_1() const { return ___m_Force_1; }
	inline float* get_address_of_m_Force_1() { return &___m_Force_1; }
	inline void set_m_Force_1(float value)
	{
		___m_Force_1 = value;
	}

	inline static int32_t get_offset_of_m_FreeSpin_2() { return static_cast<int32_t>(offsetof(JointMotor_t17429B3F7BA8727FF15A83BFBB05744BDB0BD634, ___m_FreeSpin_2)); }
	inline int32_t get_m_FreeSpin_2() const { return ___m_FreeSpin_2; }
	inline int32_t* get_address_of_m_FreeSpin_2() { return &___m_FreeSpin_2; }
	inline void set_m_FreeSpin_2(int32_t value)
	{
		___m_FreeSpin_2 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct  Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// programblockproperty
struct  programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63  : public RuntimeObject
{
public:
	// System.String programblockproperty::blocktype
	String_t* ___blocktype_0;
	// UnityEngine.Vector3 programblockproperty::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// System.String programblockproperty::name
	String_t* ___name_2;
	// System.String[] programblockproperty::inputs
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___inputs_3;

public:
	inline static int32_t get_offset_of_blocktype_0() { return static_cast<int32_t>(offsetof(programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63, ___blocktype_0)); }
	inline String_t* get_blocktype_0() const { return ___blocktype_0; }
	inline String_t** get_address_of_blocktype_0() { return &___blocktype_0; }
	inline void set_blocktype_0(String_t* value)
	{
		___blocktype_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blocktype_0), (void*)value);
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_inputs_3() { return static_cast<int32_t>(offsetof(programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63, ___inputs_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_inputs_3() const { return ___inputs_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_inputs_3() { return &___inputs_3; }
	inline void set_inputs_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___inputs_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputs_3), (void*)value);
	}
};


// robotblockdata
struct  robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1  : public RuntimeObject
{
public:
	// System.String robotblockdata::blocktype
	String_t* ___blocktype_0;
	// UnityEngine.Vector3 robotblockdata::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion robotblockdata::angle
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___angle_2;
	// System.String robotblockdata::blockdata
	String_t* ___blockdata_3;

public:
	inline static int32_t get_offset_of_blocktype_0() { return static_cast<int32_t>(offsetof(robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1, ___blocktype_0)); }
	inline String_t* get_blocktype_0() const { return ___blocktype_0; }
	inline String_t** get_address_of_blocktype_0() { return &___blocktype_0; }
	inline void set_blocktype_0(String_t* value)
	{
		___blocktype_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blocktype_0), (void*)value);
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_angle_2() { return static_cast<int32_t>(offsetof(robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1, ___angle_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_angle_2() const { return ___angle_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_angle_2() { return &___angle_2; }
	inline void set_angle_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___angle_2 = value;
	}

	inline static int32_t get_offset_of_blockdata_3() { return static_cast<int32_t>(offsetof(robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1, ___blockdata_3)); }
	inline String_t* get_blockdata_3() const { return ___blockdata_3; }
	inline String_t** get_address_of_blockdata_3() { return &___blockdata_3; }
	inline void set_blockdata_3(String_t* value)
	{
		___blockdata_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blockdata_3), (void*)value);
	}
};


// UnityEngine.UI.InputField/CharacterValidation
struct  CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/ContentType
struct  ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/InputType
struct  InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/LineType
struct  LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// programblocksave/programblockproperty
struct  programblockproperty_t2BCDA5CD45C219084CD0446CE5F3DDBC1254E587  : public RuntimeObject
{
public:
	// System.String programblocksave/programblockproperty::blocktype
	String_t* ___blocktype_0;
	// UnityEngine.Vector3 programblocksave/programblockproperty::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;

public:
	inline static int32_t get_offset_of_blocktype_0() { return static_cast<int32_t>(offsetof(programblockproperty_t2BCDA5CD45C219084CD0446CE5F3DDBC1254E587, ___blocktype_0)); }
	inline String_t* get_blocktype_0() const { return ___blocktype_0; }
	inline String_t** get_address_of_blocktype_0() { return &___blocktype_0; }
	inline void set_blocktype_0(String_t* value)
	{
		___blocktype_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blocktype_0), (void*)value);
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(programblockproperty_t2BCDA5CD45C219084CD0446CE5F3DDBC1254E587, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Comparison`1<System.String>
struct  Comparison_1_t7EBC739A23D30086C8C7FD999344464ECAD45ABB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct  UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Joint
struct  Joint_t085126F36196FC982700F4EA8466CF10C90EC15E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.TextMesh
struct  TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.HingeJoint
struct  HingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C  : public Joint_t085126F36196FC982700F4EA8466CF10C90EC15E
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// end
struct  end_tDD3367686B3440E44BAD14851F1ED58F8590CBC5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject end::head
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___head_4;

public:
	inline static int32_t get_offset_of_head_4() { return static_cast<int32_t>(offsetof(end_tDD3367686B3440E44BAD14851F1ED58F8590CBC5, ___head_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_head_4() const { return ___head_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_head_4() { return &___head_4; }
	inline void set_head_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___head_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_4), (void*)value);
	}
};


// execution
struct  execution_tF7399C7FC9B17C371DDAD512080EF16F510535E1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject execution::executioning
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___executioning_4;
	// System.Boolean execution::continueing
	bool ___continueing_5;
	// System.Single execution::waitingtime
	float ___waitingtime_6;
	// System.Single execution::wait
	float ___wait_7;
	// math execution::math
	math_t5073EA2BC76A7C2E0737C01C7BCF7DA8E0932614 * ___math_8;
	// UnityEngine.GameObject execution::logtext
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___logtext_9;
	// System.Boolean execution::whilejumped
	bool ___whilejumped_10;
	// System.Boolean execution::ifelsejamped
	bool ___ifelsejamped_11;
	// System.Boolean execution::endpos
	bool ___endpos_12;

public:
	inline static int32_t get_offset_of_executioning_4() { return static_cast<int32_t>(offsetof(execution_tF7399C7FC9B17C371DDAD512080EF16F510535E1, ___executioning_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_executioning_4() const { return ___executioning_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_executioning_4() { return &___executioning_4; }
	inline void set_executioning_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___executioning_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___executioning_4), (void*)value);
	}

	inline static int32_t get_offset_of_continueing_5() { return static_cast<int32_t>(offsetof(execution_tF7399C7FC9B17C371DDAD512080EF16F510535E1, ___continueing_5)); }
	inline bool get_continueing_5() const { return ___continueing_5; }
	inline bool* get_address_of_continueing_5() { return &___continueing_5; }
	inline void set_continueing_5(bool value)
	{
		___continueing_5 = value;
	}

	inline static int32_t get_offset_of_waitingtime_6() { return static_cast<int32_t>(offsetof(execution_tF7399C7FC9B17C371DDAD512080EF16F510535E1, ___waitingtime_6)); }
	inline float get_waitingtime_6() const { return ___waitingtime_6; }
	inline float* get_address_of_waitingtime_6() { return &___waitingtime_6; }
	inline void set_waitingtime_6(float value)
	{
		___waitingtime_6 = value;
	}

	inline static int32_t get_offset_of_wait_7() { return static_cast<int32_t>(offsetof(execution_tF7399C7FC9B17C371DDAD512080EF16F510535E1, ___wait_7)); }
	inline float get_wait_7() const { return ___wait_7; }
	inline float* get_address_of_wait_7() { return &___wait_7; }
	inline void set_wait_7(float value)
	{
		___wait_7 = value;
	}

	inline static int32_t get_offset_of_math_8() { return static_cast<int32_t>(offsetof(execution_tF7399C7FC9B17C371DDAD512080EF16F510535E1, ___math_8)); }
	inline math_t5073EA2BC76A7C2E0737C01C7BCF7DA8E0932614 * get_math_8() const { return ___math_8; }
	inline math_t5073EA2BC76A7C2E0737C01C7BCF7DA8E0932614 ** get_address_of_math_8() { return &___math_8; }
	inline void set_math_8(math_t5073EA2BC76A7C2E0737C01C7BCF7DA8E0932614 * value)
	{
		___math_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___math_8), (void*)value);
	}

	inline static int32_t get_offset_of_logtext_9() { return static_cast<int32_t>(offsetof(execution_tF7399C7FC9B17C371DDAD512080EF16F510535E1, ___logtext_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_logtext_9() const { return ___logtext_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_logtext_9() { return &___logtext_9; }
	inline void set_logtext_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___logtext_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logtext_9), (void*)value);
	}

	inline static int32_t get_offset_of_whilejumped_10() { return static_cast<int32_t>(offsetof(execution_tF7399C7FC9B17C371DDAD512080EF16F510535E1, ___whilejumped_10)); }
	inline bool get_whilejumped_10() const { return ___whilejumped_10; }
	inline bool* get_address_of_whilejumped_10() { return &___whilejumped_10; }
	inline void set_whilejumped_10(bool value)
	{
		___whilejumped_10 = value;
	}

	inline static int32_t get_offset_of_ifelsejamped_11() { return static_cast<int32_t>(offsetof(execution_tF7399C7FC9B17C371DDAD512080EF16F510535E1, ___ifelsejamped_11)); }
	inline bool get_ifelsejamped_11() const { return ___ifelsejamped_11; }
	inline bool* get_address_of_ifelsejamped_11() { return &___ifelsejamped_11; }
	inline void set_ifelsejamped_11(bool value)
	{
		___ifelsejamped_11 = value;
	}

	inline static int32_t get_offset_of_endpos_12() { return static_cast<int32_t>(offsetof(execution_tF7399C7FC9B17C371DDAD512080EF16F510535E1, ___endpos_12)); }
	inline bool get_endpos_12() const { return ___endpos_12; }
	inline bool* get_address_of_endpos_12() { return &___endpos_12; }
	inline void set_endpos_12(bool value)
	{
		___endpos_12 = value;
	}
};


// itemselect
struct  itemselect_tD9D130EB5E787DBEC915E8AE169BC808DB2C15C9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] itemselect::gameobjects
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___gameobjects_4;
	// System.Single itemselect::select
	float ___select_5;
	// System.Single itemselect::start
	float ___start_6;
	// System.Single itemselect::target
	float ___target_7;
	// System.Single itemselect::time
	float ___time_8;
	// System.Single itemselect::speed
	float ___speed_9;
	// System.Single itemselect::size
	float ___size_10;
	// System.String itemselect::itemname
	String_t* ___itemname_11;
	// UnityEngine.UI.Text itemselect::blocktext
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___blocktext_12;

public:
	inline static int32_t get_offset_of_gameobjects_4() { return static_cast<int32_t>(offsetof(itemselect_tD9D130EB5E787DBEC915E8AE169BC808DB2C15C9, ___gameobjects_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_gameobjects_4() const { return ___gameobjects_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_gameobjects_4() { return &___gameobjects_4; }
	inline void set_gameobjects_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___gameobjects_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameobjects_4), (void*)value);
	}

	inline static int32_t get_offset_of_select_5() { return static_cast<int32_t>(offsetof(itemselect_tD9D130EB5E787DBEC915E8AE169BC808DB2C15C9, ___select_5)); }
	inline float get_select_5() const { return ___select_5; }
	inline float* get_address_of_select_5() { return &___select_5; }
	inline void set_select_5(float value)
	{
		___select_5 = value;
	}

	inline static int32_t get_offset_of_start_6() { return static_cast<int32_t>(offsetof(itemselect_tD9D130EB5E787DBEC915E8AE169BC808DB2C15C9, ___start_6)); }
	inline float get_start_6() const { return ___start_6; }
	inline float* get_address_of_start_6() { return &___start_6; }
	inline void set_start_6(float value)
	{
		___start_6 = value;
	}

	inline static int32_t get_offset_of_target_7() { return static_cast<int32_t>(offsetof(itemselect_tD9D130EB5E787DBEC915E8AE169BC808DB2C15C9, ___target_7)); }
	inline float get_target_7() const { return ___target_7; }
	inline float* get_address_of_target_7() { return &___target_7; }
	inline void set_target_7(float value)
	{
		___target_7 = value;
	}

	inline static int32_t get_offset_of_time_8() { return static_cast<int32_t>(offsetof(itemselect_tD9D130EB5E787DBEC915E8AE169BC808DB2C15C9, ___time_8)); }
	inline float get_time_8() const { return ___time_8; }
	inline float* get_address_of_time_8() { return &___time_8; }
	inline void set_time_8(float value)
	{
		___time_8 = value;
	}

	inline static int32_t get_offset_of_speed_9() { return static_cast<int32_t>(offsetof(itemselect_tD9D130EB5E787DBEC915E8AE169BC808DB2C15C9, ___speed_9)); }
	inline float get_speed_9() const { return ___speed_9; }
	inline float* get_address_of_speed_9() { return &___speed_9; }
	inline void set_speed_9(float value)
	{
		___speed_9 = value;
	}

	inline static int32_t get_offset_of_size_10() { return static_cast<int32_t>(offsetof(itemselect_tD9D130EB5E787DBEC915E8AE169BC808DB2C15C9, ___size_10)); }
	inline float get_size_10() const { return ___size_10; }
	inline float* get_address_of_size_10() { return &___size_10; }
	inline void set_size_10(float value)
	{
		___size_10 = value;
	}

	inline static int32_t get_offset_of_itemname_11() { return static_cast<int32_t>(offsetof(itemselect_tD9D130EB5E787DBEC915E8AE169BC808DB2C15C9, ___itemname_11)); }
	inline String_t* get_itemname_11() const { return ___itemname_11; }
	inline String_t** get_address_of_itemname_11() { return &___itemname_11; }
	inline void set_itemname_11(String_t* value)
	{
		___itemname_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemname_11), (void*)value);
	}

	inline static int32_t get_offset_of_blocktext_12() { return static_cast<int32_t>(offsetof(itemselect_tD9D130EB5E787DBEC915E8AE169BC808DB2C15C9, ___blocktext_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_blocktext_12() const { return ___blocktext_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_blocktext_12() { return &___blocktext_12; }
	inline void set_blocktext_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___blocktext_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blocktext_12), (void*)value);
	}
};


// misson
struct  misson_tE35F9FCDC3926935096D22473095FE7579801E0D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String misson::nowmission
	String_t* ___nowmission_4;
	// UnityEngine.GameObject misson::missionobj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___missionobj_5;
	// player misson::player
	player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * ___player_6;
	// UnityEngine.UI.Text misson::pausetext
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___pausetext_7;
	// UnityEngine.UI.Text misson::missiontime
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___missiontime_8;
	// UnityEngine.GameObject misson::cleareffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cleareffect_9;
	// UnityEngine.GameObject misson::effect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___effect_10;

public:
	inline static int32_t get_offset_of_nowmission_4() { return static_cast<int32_t>(offsetof(misson_tE35F9FCDC3926935096D22473095FE7579801E0D, ___nowmission_4)); }
	inline String_t* get_nowmission_4() const { return ___nowmission_4; }
	inline String_t** get_address_of_nowmission_4() { return &___nowmission_4; }
	inline void set_nowmission_4(String_t* value)
	{
		___nowmission_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nowmission_4), (void*)value);
	}

	inline static int32_t get_offset_of_missionobj_5() { return static_cast<int32_t>(offsetof(misson_tE35F9FCDC3926935096D22473095FE7579801E0D, ___missionobj_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_missionobj_5() const { return ___missionobj_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_missionobj_5() { return &___missionobj_5; }
	inline void set_missionobj_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___missionobj_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___missionobj_5), (void*)value);
	}

	inline static int32_t get_offset_of_player_6() { return static_cast<int32_t>(offsetof(misson_tE35F9FCDC3926935096D22473095FE7579801E0D, ___player_6)); }
	inline player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * get_player_6() const { return ___player_6; }
	inline player_tA80E0022C279849EE513BB6A4017ED62943ADC71 ** get_address_of_player_6() { return &___player_6; }
	inline void set_player_6(player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * value)
	{
		___player_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_6), (void*)value);
	}

	inline static int32_t get_offset_of_pausetext_7() { return static_cast<int32_t>(offsetof(misson_tE35F9FCDC3926935096D22473095FE7579801E0D, ___pausetext_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_pausetext_7() const { return ___pausetext_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_pausetext_7() { return &___pausetext_7; }
	inline void set_pausetext_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___pausetext_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pausetext_7), (void*)value);
	}

	inline static int32_t get_offset_of_missiontime_8() { return static_cast<int32_t>(offsetof(misson_tE35F9FCDC3926935096D22473095FE7579801E0D, ___missiontime_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_missiontime_8() const { return ___missiontime_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_missiontime_8() { return &___missiontime_8; }
	inline void set_missiontime_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___missiontime_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___missiontime_8), (void*)value);
	}

	inline static int32_t get_offset_of_cleareffect_9() { return static_cast<int32_t>(offsetof(misson_tE35F9FCDC3926935096D22473095FE7579801E0D, ___cleareffect_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cleareffect_9() const { return ___cleareffect_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cleareffect_9() { return &___cleareffect_9; }
	inline void set_cleareffect_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cleareffect_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cleareffect_9), (void*)value);
	}

	inline static int32_t get_offset_of_effect_10() { return static_cast<int32_t>(offsetof(misson_tE35F9FCDC3926935096D22473095FE7579801E0D, ___effect_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_effect_10() const { return ___effect_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_effect_10() { return &___effect_10; }
	inline void set_effect_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___effect_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___effect_10), (void*)value);
	}
};


// player
struct  player_tA80E0022C279849EE513BB6A4017ED62943ADC71  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform player::neck
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___neck_4;
	// itemselect player::itemselect
	itemselect_tD9D130EB5E787DBEC915E8AE169BC808DB2C15C9 * ___itemselect_5;
	// UnityEngine.GameObject player::previewobj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___previewobj_6;
	// System.Single player::neck_Y
	float ___neck_Y_7;
	// System.Int32 player::mode
	int32_t ___mode_8;
	// System.Boolean player::pause
	bool ___pause_9;
	// UnityEngine.GameObject player::pauseUi
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pauseUi_10;
	// UnityEngine.GameObject player::selectedblock
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___selectedblock_11;
	// UnityEngine.UI.Text player::blockdatatext
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___blockdatatext_12;
	// UnityEngine.GameObject player::applybutton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___applybutton_13;
	// UnityEngine.Camera player::playercamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___playercamera_14;
	// UnityEngine.GameObject player::programcamera
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___programcamera_15;
	// System.Single player::missontime
	float ___missontime_16;
	// System.Boolean player::clearflag
	bool ___clearflag_17;
	// System.String player::cameramode
	String_t* ___cameramode_18;
	// UnityEngine.Transform player::createframe
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___createframe_19;
	// UnityEngine.GameObject player::crosshair
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___crosshair_20;

public:
	inline static int32_t get_offset_of_neck_4() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___neck_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_neck_4() const { return ___neck_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_neck_4() { return &___neck_4; }
	inline void set_neck_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___neck_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neck_4), (void*)value);
	}

	inline static int32_t get_offset_of_itemselect_5() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___itemselect_5)); }
	inline itemselect_tD9D130EB5E787DBEC915E8AE169BC808DB2C15C9 * get_itemselect_5() const { return ___itemselect_5; }
	inline itemselect_tD9D130EB5E787DBEC915E8AE169BC808DB2C15C9 ** get_address_of_itemselect_5() { return &___itemselect_5; }
	inline void set_itemselect_5(itemselect_tD9D130EB5E787DBEC915E8AE169BC808DB2C15C9 * value)
	{
		___itemselect_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemselect_5), (void*)value);
	}

	inline static int32_t get_offset_of_previewobj_6() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___previewobj_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_previewobj_6() const { return ___previewobj_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_previewobj_6() { return &___previewobj_6; }
	inline void set_previewobj_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___previewobj_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previewobj_6), (void*)value);
	}

	inline static int32_t get_offset_of_neck_Y_7() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___neck_Y_7)); }
	inline float get_neck_Y_7() const { return ___neck_Y_7; }
	inline float* get_address_of_neck_Y_7() { return &___neck_Y_7; }
	inline void set_neck_Y_7(float value)
	{
		___neck_Y_7 = value;
	}

	inline static int32_t get_offset_of_mode_8() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___mode_8)); }
	inline int32_t get_mode_8() const { return ___mode_8; }
	inline int32_t* get_address_of_mode_8() { return &___mode_8; }
	inline void set_mode_8(int32_t value)
	{
		___mode_8 = value;
	}

	inline static int32_t get_offset_of_pause_9() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___pause_9)); }
	inline bool get_pause_9() const { return ___pause_9; }
	inline bool* get_address_of_pause_9() { return &___pause_9; }
	inline void set_pause_9(bool value)
	{
		___pause_9 = value;
	}

	inline static int32_t get_offset_of_pauseUi_10() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___pauseUi_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pauseUi_10() const { return ___pauseUi_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pauseUi_10() { return &___pauseUi_10; }
	inline void set_pauseUi_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pauseUi_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseUi_10), (void*)value);
	}

	inline static int32_t get_offset_of_selectedblock_11() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___selectedblock_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_selectedblock_11() const { return ___selectedblock_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_selectedblock_11() { return &___selectedblock_11; }
	inline void set_selectedblock_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___selectedblock_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedblock_11), (void*)value);
	}

	inline static int32_t get_offset_of_blockdatatext_12() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___blockdatatext_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_blockdatatext_12() const { return ___blockdatatext_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_blockdatatext_12() { return &___blockdatatext_12; }
	inline void set_blockdatatext_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___blockdatatext_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blockdatatext_12), (void*)value);
	}

	inline static int32_t get_offset_of_applybutton_13() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___applybutton_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_applybutton_13() const { return ___applybutton_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_applybutton_13() { return &___applybutton_13; }
	inline void set_applybutton_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___applybutton_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applybutton_13), (void*)value);
	}

	inline static int32_t get_offset_of_playercamera_14() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___playercamera_14)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_playercamera_14() const { return ___playercamera_14; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_playercamera_14() { return &___playercamera_14; }
	inline void set_playercamera_14(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___playercamera_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playercamera_14), (void*)value);
	}

	inline static int32_t get_offset_of_programcamera_15() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___programcamera_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_programcamera_15() const { return ___programcamera_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_programcamera_15() { return &___programcamera_15; }
	inline void set_programcamera_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___programcamera_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___programcamera_15), (void*)value);
	}

	inline static int32_t get_offset_of_missontime_16() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___missontime_16)); }
	inline float get_missontime_16() const { return ___missontime_16; }
	inline float* get_address_of_missontime_16() { return &___missontime_16; }
	inline void set_missontime_16(float value)
	{
		___missontime_16 = value;
	}

	inline static int32_t get_offset_of_clearflag_17() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___clearflag_17)); }
	inline bool get_clearflag_17() const { return ___clearflag_17; }
	inline bool* get_address_of_clearflag_17() { return &___clearflag_17; }
	inline void set_clearflag_17(bool value)
	{
		___clearflag_17 = value;
	}

	inline static int32_t get_offset_of_cameramode_18() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___cameramode_18)); }
	inline String_t* get_cameramode_18() const { return ___cameramode_18; }
	inline String_t** get_address_of_cameramode_18() { return &___cameramode_18; }
	inline void set_cameramode_18(String_t* value)
	{
		___cameramode_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameramode_18), (void*)value);
	}

	inline static int32_t get_offset_of_createframe_19() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___createframe_19)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_createframe_19() const { return ___createframe_19; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_createframe_19() { return &___createframe_19; }
	inline void set_createframe_19(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___createframe_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createframe_19), (void*)value);
	}

	inline static int32_t get_offset_of_crosshair_20() { return static_cast<int32_t>(offsetof(player_tA80E0022C279849EE513BB6A4017ED62943ADC71, ___crosshair_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_crosshair_20() const { return ___crosshair_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_crosshair_20() { return &___crosshair_20; }
	inline void set_crosshair_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___crosshair_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crosshair_20), (void*)value);
	}
};


// programblock
struct  programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject programblock::prev
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prev_4;
	// UnityEngine.GameObject programblock::next
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___next_5;
	// UnityEngine.Animator programblock::prevconnectpart
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___prevconnectpart_6;
	// UnityEngine.Animator programblock::nextconnectpart
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___nextconnectpart_7;
	// System.String programblock::blocktype
	String_t* ___blocktype_8;
	// UnityEngine.Vector3 programblock::connectpos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___connectpos_9;
	// UnityEngine.GameObject[] programblock::customobject
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___customobject_10;
	// System.Boolean programblock::grabing
	bool ___grabing_11;
	// UnityEngine.Vector3 programblock::move
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___move_12;

public:
	inline static int32_t get_offset_of_prev_4() { return static_cast<int32_t>(offsetof(programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3, ___prev_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prev_4() const { return ___prev_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prev_4() { return &___prev_4; }
	inline void set_prev_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prev_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prev_4), (void*)value);
	}

	inline static int32_t get_offset_of_next_5() { return static_cast<int32_t>(offsetof(programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3, ___next_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_next_5() const { return ___next_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_next_5() { return &___next_5; }
	inline void set_next_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___next_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_5), (void*)value);
	}

	inline static int32_t get_offset_of_prevconnectpart_6() { return static_cast<int32_t>(offsetof(programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3, ___prevconnectpart_6)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_prevconnectpart_6() const { return ___prevconnectpart_6; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_prevconnectpart_6() { return &___prevconnectpart_6; }
	inline void set_prevconnectpart_6(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___prevconnectpart_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prevconnectpart_6), (void*)value);
	}

	inline static int32_t get_offset_of_nextconnectpart_7() { return static_cast<int32_t>(offsetof(programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3, ___nextconnectpart_7)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_nextconnectpart_7() const { return ___nextconnectpart_7; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_nextconnectpart_7() { return &___nextconnectpart_7; }
	inline void set_nextconnectpart_7(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___nextconnectpart_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextconnectpart_7), (void*)value);
	}

	inline static int32_t get_offset_of_blocktype_8() { return static_cast<int32_t>(offsetof(programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3, ___blocktype_8)); }
	inline String_t* get_blocktype_8() const { return ___blocktype_8; }
	inline String_t** get_address_of_blocktype_8() { return &___blocktype_8; }
	inline void set_blocktype_8(String_t* value)
	{
		___blocktype_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blocktype_8), (void*)value);
	}

	inline static int32_t get_offset_of_connectpos_9() { return static_cast<int32_t>(offsetof(programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3, ___connectpos_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_connectpos_9() const { return ___connectpos_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_connectpos_9() { return &___connectpos_9; }
	inline void set_connectpos_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___connectpos_9 = value;
	}

	inline static int32_t get_offset_of_customobject_10() { return static_cast<int32_t>(offsetof(programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3, ___customobject_10)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_customobject_10() const { return ___customobject_10; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_customobject_10() { return &___customobject_10; }
	inline void set_customobject_10(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___customobject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customobject_10), (void*)value);
	}

	inline static int32_t get_offset_of_grabing_11() { return static_cast<int32_t>(offsetof(programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3, ___grabing_11)); }
	inline bool get_grabing_11() const { return ___grabing_11; }
	inline bool* get_address_of_grabing_11() { return &___grabing_11; }
	inline void set_grabing_11(bool value)
	{
		___grabing_11 = value;
	}

	inline static int32_t get_offset_of_move_12() { return static_cast<int32_t>(offsetof(programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3, ___move_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_move_12() const { return ___move_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_move_12() { return &___move_12; }
	inline void set_move_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___move_12 = value;
	}
};


// robotBlock
struct  robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> robotBlock::blockdata
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___blockdata_4;
	// System.String robotBlock::blocktext
	String_t* ___blocktext_5;

public:
	inline static int32_t get_offset_of_blockdata_4() { return static_cast<int32_t>(offsetof(robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9, ___blockdata_4)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_blockdata_4() const { return ___blockdata_4; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_blockdata_4() { return &___blockdata_4; }
	inline void set_blockdata_4(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___blockdata_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blockdata_4), (void*)value);
	}

	inline static int32_t get_offset_of_blocktext_5() { return static_cast<int32_t>(offsetof(robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9, ___blocktext_5)); }
	inline String_t* get_blocktext_5() const { return ___blocktext_5; }
	inline String_t** get_address_of_blocktext_5() { return &___blocktext_5; }
	inline void set_blocktext_5(String_t* value)
	{
		___blocktext_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blocktext_5), (void*)value);
	}
};


// robotselect
struct  robotselect_t0B0500EFF7DCB8EDFEBC7A307728C8AB90E53BB9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject robotselect::tablepre
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tablepre_4;
	// UnityEngine.GameObject robotselect::robots
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___robots_5;

public:
	inline static int32_t get_offset_of_tablepre_4() { return static_cast<int32_t>(offsetof(robotselect_t0B0500EFF7DCB8EDFEBC7A307728C8AB90E53BB9, ___tablepre_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_tablepre_4() const { return ___tablepre_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_tablepre_4() { return &___tablepre_4; }
	inline void set_tablepre_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___tablepre_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tablepre_4), (void*)value);
	}

	inline static int32_t get_offset_of_robots_5() { return static_cast<int32_t>(offsetof(robotselect_t0B0500EFF7DCB8EDFEBC7A307728C8AB90E53BB9, ___robots_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_robots_5() const { return ___robots_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_robots_5() { return &___robots_5; }
	inline void set_robots_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___robots_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___robots_5), (void*)value);
	}
};


// robottable
struct  robottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject robottable::spotlight
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spotlight_4;
	// System.String robottable::robottext
	String_t* ___robottext_5;

public:
	inline static int32_t get_offset_of_spotlight_4() { return static_cast<int32_t>(offsetof(robottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D, ___spotlight_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_spotlight_4() const { return ___spotlight_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_spotlight_4() { return &___spotlight_4; }
	inline void set_spotlight_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___spotlight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spotlight_4), (void*)value);
	}

	inline static int32_t get_offset_of_robottext_5() { return static_cast<int32_t>(offsetof(robottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D, ___robottext_5)); }
	inline String_t* get_robottext_5() const { return ___robottext_5; }
	inline String_t** get_address_of_robottext_5() { return &___robottext_5; }
	inline void set_robottext_5(String_t* value)
	{
		___robottext_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___robottext_5), (void*)value);
	}
};


// save
struct  save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String save::filename
	String_t* ___filename_4;
	// System.String save::allloadtext
	String_t* ___allloadtext_5;

public:
	inline static int32_t get_offset_of_filename_4() { return static_cast<int32_t>(offsetof(save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC, ___filename_4)); }
	inline String_t* get_filename_4() const { return ___filename_4; }
	inline String_t** get_address_of_filename_4() { return &___filename_4; }
	inline void set_filename_4(String_t* value)
	{
		___filename_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filename_4), (void*)value);
	}

	inline static int32_t get_offset_of_allloadtext_5() { return static_cast<int32_t>(offsetof(save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC, ___allloadtext_5)); }
	inline String_t* get_allloadtext_5() const { return ___allloadtext_5; }
	inline String_t** get_address_of_allloadtext_5() { return &___allloadtext_5; }
	inline void set_allloadtext_5(String_t* value)
	{
		___allloadtext_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allloadtext_5), (void*)value);
	}
};


// servo
struct  servo_tCF313257B5995D81652CB49BC8B6E39666E9AD98  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// robotBlock servo::robotBlock
	robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * ___robotBlock_4;
	// UnityEngine.HingeJoint servo::hinge
	HingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C * ___hinge_5;
	// System.Single servo::inputangle
	float ___inputangle_6;
	// System.Single servo::lastinputangle
	float ___lastinputangle_7;
	// System.Single servo::target
	float ___target_8;

public:
	inline static int32_t get_offset_of_robotBlock_4() { return static_cast<int32_t>(offsetof(servo_tCF313257B5995D81652CB49BC8B6E39666E9AD98, ___robotBlock_4)); }
	inline robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * get_robotBlock_4() const { return ___robotBlock_4; }
	inline robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 ** get_address_of_robotBlock_4() { return &___robotBlock_4; }
	inline void set_robotBlock_4(robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * value)
	{
		___robotBlock_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___robotBlock_4), (void*)value);
	}

	inline static int32_t get_offset_of_hinge_5() { return static_cast<int32_t>(offsetof(servo_tCF313257B5995D81652CB49BC8B6E39666E9AD98, ___hinge_5)); }
	inline HingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C * get_hinge_5() const { return ___hinge_5; }
	inline HingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C ** get_address_of_hinge_5() { return &___hinge_5; }
	inline void set_hinge_5(HingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C * value)
	{
		___hinge_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hinge_5), (void*)value);
	}

	inline static int32_t get_offset_of_inputangle_6() { return static_cast<int32_t>(offsetof(servo_tCF313257B5995D81652CB49BC8B6E39666E9AD98, ___inputangle_6)); }
	inline float get_inputangle_6() const { return ___inputangle_6; }
	inline float* get_address_of_inputangle_6() { return &___inputangle_6; }
	inline void set_inputangle_6(float value)
	{
		___inputangle_6 = value;
	}

	inline static int32_t get_offset_of_lastinputangle_7() { return static_cast<int32_t>(offsetof(servo_tCF313257B5995D81652CB49BC8B6E39666E9AD98, ___lastinputangle_7)); }
	inline float get_lastinputangle_7() const { return ___lastinputangle_7; }
	inline float* get_address_of_lastinputangle_7() { return &___lastinputangle_7; }
	inline void set_lastinputangle_7(float value)
	{
		___lastinputangle_7 = value;
	}

	inline static int32_t get_offset_of_target_8() { return static_cast<int32_t>(offsetof(servo_tCF313257B5995D81652CB49BC8B6E39666E9AD98, ___target_8)); }
	inline float get_target_8() const { return ___target_8; }
	inline float* get_address_of_target_8() { return &___target_8; }
	inline void set_target_8(float value)
	{
		___target_8 = value;
	}
};


// stageselect
struct  stageselect_tE665A7E52F8D9EC33BAA55E5A382C965241E1811  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// startblock
struct  startblock_tBD5C23291F2047F5B1219E2A53154C671E3169DC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject startblock::execution
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___execution_4;

public:
	inline static int32_t get_offset_of_execution_4() { return static_cast<int32_t>(offsetof(startblock_tBD5C23291F2047F5B1219E2A53154C671E3169DC, ___execution_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_execution_4() const { return ___execution_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_execution_4() { return &___execution_4; }
	inline void set_execution_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___execution_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___execution_4), (void*)value);
	}
};


// swich
struct  swich_tED3711F0A89E2185E7FE1E24493DF1DB96DF90FC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// programblock swich::programblock
	programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * ___programblock_4;
	// UnityEngine.GameObject swich::swichend
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___swichend_5;
	// UnityEngine.Transform swich::swichendconect
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___swichendconect_6;
	// UnityEngine.Transform swich::caseconect
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___caseconect_7;
	// System.Single swich::length
	float ___length_8;
	// UnityEngine.GameObject[] swich::cases
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___cases_9;

public:
	inline static int32_t get_offset_of_programblock_4() { return static_cast<int32_t>(offsetof(swich_tED3711F0A89E2185E7FE1E24493DF1DB96DF90FC, ___programblock_4)); }
	inline programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * get_programblock_4() const { return ___programblock_4; }
	inline programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 ** get_address_of_programblock_4() { return &___programblock_4; }
	inline void set_programblock_4(programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * value)
	{
		___programblock_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___programblock_4), (void*)value);
	}

	inline static int32_t get_offset_of_swichend_5() { return static_cast<int32_t>(offsetof(swich_tED3711F0A89E2185E7FE1E24493DF1DB96DF90FC, ___swichend_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_swichend_5() const { return ___swichend_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_swichend_5() { return &___swichend_5; }
	inline void set_swichend_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___swichend_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swichend_5), (void*)value);
	}

	inline static int32_t get_offset_of_swichendconect_6() { return static_cast<int32_t>(offsetof(swich_tED3711F0A89E2185E7FE1E24493DF1DB96DF90FC, ___swichendconect_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_swichendconect_6() const { return ___swichendconect_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_swichendconect_6() { return &___swichendconect_6; }
	inline void set_swichendconect_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___swichendconect_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swichendconect_6), (void*)value);
	}

	inline static int32_t get_offset_of_caseconect_7() { return static_cast<int32_t>(offsetof(swich_tED3711F0A89E2185E7FE1E24493DF1DB96DF90FC, ___caseconect_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_caseconect_7() const { return ___caseconect_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_caseconect_7() { return &___caseconect_7; }
	inline void set_caseconect_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___caseconect_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caseconect_7), (void*)value);
	}

	inline static int32_t get_offset_of_length_8() { return static_cast<int32_t>(offsetof(swich_tED3711F0A89E2185E7FE1E24493DF1DB96DF90FC, ___length_8)); }
	inline float get_length_8() const { return ___length_8; }
	inline float* get_address_of_length_8() { return &___length_8; }
	inline void set_length_8(float value)
	{
		___length_8 = value;
	}

	inline static int32_t get_offset_of_cases_9() { return static_cast<int32_t>(offsetof(swich_tED3711F0A89E2185E7FE1E24493DF1DB96DF90FC, ___cases_9)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_cases_9() const { return ___cases_9; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_cases_9() { return &___cases_9; }
	inline void set_cases_9(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___cases_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cases_9), (void*)value);
	}
};


// titlecamera
struct  titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single titlecamera::x
	float ___x_4;
	// System.Single titlecamera::y
	float ___y_5;
	// System.Single titlecamera::target
	float ___target_6;
	// System.Single titlecamera::target_y
	float ___target_y_7;
	// System.String titlecamera::loaddata
	String_t* ___loaddata_8;
	// System.String titlecamera::filename
	String_t* ___filename_9;
	// System.String titlecamera::stagename
	String_t* ___stagename_10;
	// UnityEngine.Transform titlecamera::robots
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___robots_11;
	// UnityEngine.Transform titlecamera::stages
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___stages_12;
	// System.Single titlecamera::cleardx
	float ___cleardx_13;
	// System.Single titlecamera::stagemaxselect
	float ___stagemaxselect_14;
	// System.Boolean titlecamera::isallclear
	bool ___isallclear_15;
	// System.String titlecamera::selectstage
	String_t* ___selectstage_16;
	// System.Single titlecamera::totaltime
	float ___totaltime_17;

public:
	inline static int32_t get_offset_of_x_4() { return static_cast<int32_t>(offsetof(titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D, ___x_4)); }
	inline float get_x_4() const { return ___x_4; }
	inline float* get_address_of_x_4() { return &___x_4; }
	inline void set_x_4(float value)
	{
		___x_4 = value;
	}

	inline static int32_t get_offset_of_y_5() { return static_cast<int32_t>(offsetof(titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D, ___y_5)); }
	inline float get_y_5() const { return ___y_5; }
	inline float* get_address_of_y_5() { return &___y_5; }
	inline void set_y_5(float value)
	{
		___y_5 = value;
	}

	inline static int32_t get_offset_of_target_6() { return static_cast<int32_t>(offsetof(titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D, ___target_6)); }
	inline float get_target_6() const { return ___target_6; }
	inline float* get_address_of_target_6() { return &___target_6; }
	inline void set_target_6(float value)
	{
		___target_6 = value;
	}

	inline static int32_t get_offset_of_target_y_7() { return static_cast<int32_t>(offsetof(titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D, ___target_y_7)); }
	inline float get_target_y_7() const { return ___target_y_7; }
	inline float* get_address_of_target_y_7() { return &___target_y_7; }
	inline void set_target_y_7(float value)
	{
		___target_y_7 = value;
	}

	inline static int32_t get_offset_of_loaddata_8() { return static_cast<int32_t>(offsetof(titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D, ___loaddata_8)); }
	inline String_t* get_loaddata_8() const { return ___loaddata_8; }
	inline String_t** get_address_of_loaddata_8() { return &___loaddata_8; }
	inline void set_loaddata_8(String_t* value)
	{
		___loaddata_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loaddata_8), (void*)value);
	}

	inline static int32_t get_offset_of_filename_9() { return static_cast<int32_t>(offsetof(titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D, ___filename_9)); }
	inline String_t* get_filename_9() const { return ___filename_9; }
	inline String_t** get_address_of_filename_9() { return &___filename_9; }
	inline void set_filename_9(String_t* value)
	{
		___filename_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filename_9), (void*)value);
	}

	inline static int32_t get_offset_of_stagename_10() { return static_cast<int32_t>(offsetof(titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D, ___stagename_10)); }
	inline String_t* get_stagename_10() const { return ___stagename_10; }
	inline String_t** get_address_of_stagename_10() { return &___stagename_10; }
	inline void set_stagename_10(String_t* value)
	{
		___stagename_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stagename_10), (void*)value);
	}

	inline static int32_t get_offset_of_robots_11() { return static_cast<int32_t>(offsetof(titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D, ___robots_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_robots_11() const { return ___robots_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_robots_11() { return &___robots_11; }
	inline void set_robots_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___robots_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___robots_11), (void*)value);
	}

	inline static int32_t get_offset_of_stages_12() { return static_cast<int32_t>(offsetof(titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D, ___stages_12)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_stages_12() const { return ___stages_12; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_stages_12() { return &___stages_12; }
	inline void set_stages_12(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___stages_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stages_12), (void*)value);
	}

	inline static int32_t get_offset_of_cleardx_13() { return static_cast<int32_t>(offsetof(titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D, ___cleardx_13)); }
	inline float get_cleardx_13() const { return ___cleardx_13; }
	inline float* get_address_of_cleardx_13() { return &___cleardx_13; }
	inline void set_cleardx_13(float value)
	{
		___cleardx_13 = value;
	}

	inline static int32_t get_offset_of_stagemaxselect_14() { return static_cast<int32_t>(offsetof(titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D, ___stagemaxselect_14)); }
	inline float get_stagemaxselect_14() const { return ___stagemaxselect_14; }
	inline float* get_address_of_stagemaxselect_14() { return &___stagemaxselect_14; }
	inline void set_stagemaxselect_14(float value)
	{
		___stagemaxselect_14 = value;
	}

	inline static int32_t get_offset_of_isallclear_15() { return static_cast<int32_t>(offsetof(titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D, ___isallclear_15)); }
	inline bool get_isallclear_15() const { return ___isallclear_15; }
	inline bool* get_address_of_isallclear_15() { return &___isallclear_15; }
	inline void set_isallclear_15(bool value)
	{
		___isallclear_15 = value;
	}

	inline static int32_t get_offset_of_selectstage_16() { return static_cast<int32_t>(offsetof(titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D, ___selectstage_16)); }
	inline String_t* get_selectstage_16() const { return ___selectstage_16; }
	inline String_t** get_address_of_selectstage_16() { return &___selectstage_16; }
	inline void set_selectstage_16(String_t* value)
	{
		___selectstage_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectstage_16), (void*)value);
	}

	inline static int32_t get_offset_of_totaltime_17() { return static_cast<int32_t>(offsetof(titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D, ___totaltime_17)); }
	inline float get_totaltime_17() const { return ___totaltime_17; }
	inline float* get_address_of_totaltime_17() { return &___totaltime_17; }
	inline void set_totaltime_17(float value)
	{
		___totaltime_17 = value;
	}
};


// tutorial
struct  tutorial_t1F1611D4CF7705BAAF90F754A420AD55500FA99F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text tutorial::textobj
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___textobj_4;
	// System.String tutorial::text
	String_t* ___text_5;
	// System.Int32 tutorial::count
	int32_t ___count_6;
	// System.Int32 tutorial::step
	int32_t ___step_7;
	// System.Single tutorial::wait
	float ___wait_8;
	// player tutorial::player
	player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * ___player_9;
	// UnityEngine.UI.RawImage tutorial::robotimage
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___robotimage_10;
	// UnityEngine.Texture2D[] tutorial::robotimages
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ___robotimages_11;

public:
	inline static int32_t get_offset_of_textobj_4() { return static_cast<int32_t>(offsetof(tutorial_t1F1611D4CF7705BAAF90F754A420AD55500FA99F, ___textobj_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_textobj_4() const { return ___textobj_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_textobj_4() { return &___textobj_4; }
	inline void set_textobj_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___textobj_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textobj_4), (void*)value);
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(tutorial_t1F1611D4CF7705BAAF90F754A420AD55500FA99F, ___text_5)); }
	inline String_t* get_text_5() const { return ___text_5; }
	inline String_t** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(String_t* value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_5), (void*)value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(tutorial_t1F1611D4CF7705BAAF90F754A420AD55500FA99F, ___count_6)); }
	inline int32_t get_count_6() const { return ___count_6; }
	inline int32_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(int32_t value)
	{
		___count_6 = value;
	}

	inline static int32_t get_offset_of_step_7() { return static_cast<int32_t>(offsetof(tutorial_t1F1611D4CF7705BAAF90F754A420AD55500FA99F, ___step_7)); }
	inline int32_t get_step_7() const { return ___step_7; }
	inline int32_t* get_address_of_step_7() { return &___step_7; }
	inline void set_step_7(int32_t value)
	{
		___step_7 = value;
	}

	inline static int32_t get_offset_of_wait_8() { return static_cast<int32_t>(offsetof(tutorial_t1F1611D4CF7705BAAF90F754A420AD55500FA99F, ___wait_8)); }
	inline float get_wait_8() const { return ___wait_8; }
	inline float* get_address_of_wait_8() { return &___wait_8; }
	inline void set_wait_8(float value)
	{
		___wait_8 = value;
	}

	inline static int32_t get_offset_of_player_9() { return static_cast<int32_t>(offsetof(tutorial_t1F1611D4CF7705BAAF90F754A420AD55500FA99F, ___player_9)); }
	inline player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * get_player_9() const { return ___player_9; }
	inline player_tA80E0022C279849EE513BB6A4017ED62943ADC71 ** get_address_of_player_9() { return &___player_9; }
	inline void set_player_9(player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * value)
	{
		___player_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_9), (void*)value);
	}

	inline static int32_t get_offset_of_robotimage_10() { return static_cast<int32_t>(offsetof(tutorial_t1F1611D4CF7705BAAF90F754A420AD55500FA99F, ___robotimage_10)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_robotimage_10() const { return ___robotimage_10; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_robotimage_10() { return &___robotimage_10; }
	inline void set_robotimage_10(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___robotimage_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___robotimage_10), (void*)value);
	}

	inline static int32_t get_offset_of_robotimages_11() { return static_cast<int32_t>(offsetof(tutorial_t1F1611D4CF7705BAAF90F754A420AD55500FA99F, ___robotimages_11)); }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* get_robotimages_11() const { return ___robotimages_11; }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316** get_address_of_robotimages_11() { return &___robotimages_11; }
	inline void set_robotimages_11(Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* value)
	{
		___robotimages_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___robotimages_11), (void*)value);
	}
};


// variables
struct  variables_t3A18CB7A411573B064E656403C615084074FE63D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct variables_t3A18CB7A411573B064E656403C615084074FE63D_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> variables::variable
	Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * ___variable_4;

public:
	inline static int32_t get_offset_of_variable_4() { return static_cast<int32_t>(offsetof(variables_t3A18CB7A411573B064E656403C615084074FE63D_StaticFields, ___variable_4)); }
	inline Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * get_variable_4() const { return ___variable_4; }
	inline Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 ** get_address_of_variable_4() { return &___variable_4; }
	inline void set_variable_4(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * value)
	{
		___variable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___variable_4), (void*)value);
	}
};


// whileblock
struct  whileblock_t0BBCEC21FB1F2674F833F551D913738092D7143E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform whileblock::connectend
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___connectend_4;
	// UnityEngine.GameObject whileblock::end
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___end_5;
	// UnityEngine.GameObject whileblock::elseif
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___elseif_6;
	// System.Single whileblock::height
	float ___height_7;
	// System.Single whileblock::target
	float ___target_8;
	// System.Int32 whileblock::looptimes
	int32_t ___looptimes_9;
	// System.Int32 whileblock::looptimescount
	int32_t ___looptimescount_10;

public:
	inline static int32_t get_offset_of_connectend_4() { return static_cast<int32_t>(offsetof(whileblock_t0BBCEC21FB1F2674F833F551D913738092D7143E, ___connectend_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_connectend_4() const { return ___connectend_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_connectend_4() { return &___connectend_4; }
	inline void set_connectend_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___connectend_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectend_4), (void*)value);
	}

	inline static int32_t get_offset_of_end_5() { return static_cast<int32_t>(offsetof(whileblock_t0BBCEC21FB1F2674F833F551D913738092D7143E, ___end_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_end_5() const { return ___end_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_end_5() { return &___end_5; }
	inline void set_end_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___end_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___end_5), (void*)value);
	}

	inline static int32_t get_offset_of_elseif_6() { return static_cast<int32_t>(offsetof(whileblock_t0BBCEC21FB1F2674F833F551D913738092D7143E, ___elseif_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_elseif_6() const { return ___elseif_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_elseif_6() { return &___elseif_6; }
	inline void set_elseif_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___elseif_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elseif_6), (void*)value);
	}

	inline static int32_t get_offset_of_height_7() { return static_cast<int32_t>(offsetof(whileblock_t0BBCEC21FB1F2674F833F551D913738092D7143E, ___height_7)); }
	inline float get_height_7() const { return ___height_7; }
	inline float* get_address_of_height_7() { return &___height_7; }
	inline void set_height_7(float value)
	{
		___height_7 = value;
	}

	inline static int32_t get_offset_of_target_8() { return static_cast<int32_t>(offsetof(whileblock_t0BBCEC21FB1F2674F833F551D913738092D7143E, ___target_8)); }
	inline float get_target_8() const { return ___target_8; }
	inline float* get_address_of_target_8() { return &___target_8; }
	inline void set_target_8(float value)
	{
		___target_8 = value;
	}

	inline static int32_t get_offset_of_looptimes_9() { return static_cast<int32_t>(offsetof(whileblock_t0BBCEC21FB1F2674F833F551D913738092D7143E, ___looptimes_9)); }
	inline int32_t get_looptimes_9() const { return ___looptimes_9; }
	inline int32_t* get_address_of_looptimes_9() { return &___looptimes_9; }
	inline void set_looptimes_9(int32_t value)
	{
		___looptimes_9 = value;
	}

	inline static int32_t get_offset_of_looptimescount_10() { return static_cast<int32_t>(offsetof(whileblock_t0BBCEC21FB1F2674F833F551D913738092D7143E, ___looptimescount_10)); }
	inline int32_t get_looptimescount_10() const { return ___looptimescount_10; }
	inline int32_t* get_address_of_looptimescount_10() { return &___looptimescount_10; }
	inline void set_looptimescount_10(int32_t value)
	{
		___looptimescount_10 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Dropdown
struct  Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;

public:
	inline static int32_t get_offset_of_m_Template_20() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Template_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Template_20() const { return ___m_Template_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Template_20() { return &___m_Template_20; }
	inline void set_m_Template_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Template_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Template_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionText_21() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionText_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_CaptionText_21() const { return ___m_CaptionText_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_CaptionText_21() { return &___m_CaptionText_21; }
	inline void set_m_CaptionText_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_CaptionText_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionText_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_22() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionImage_22)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_CaptionImage_22() const { return ___m_CaptionImage_22; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_CaptionImage_22() { return &___m_CaptionImage_22; }
	inline void set_m_CaptionImage_22(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_CaptionImage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionImage_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemText_23() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemText_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_ItemText_23() const { return ___m_ItemText_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_ItemText_23() { return &___m_ItemText_23; }
	inline void set_m_ItemText_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_ItemText_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemText_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemImage_24() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemImage_24)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_ItemImage_24() const { return ___m_ItemImage_24; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_ItemImage_24() { return &___m_ItemImage_24; }
	inline void set_m_ItemImage_24(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_ItemImage_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemImage_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Value_25() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Value_25)); }
	inline int32_t get_m_Value_25() const { return ___m_Value_25; }
	inline int32_t* get_address_of_m_Value_25() { return &___m_Value_25; }
	inline void set_m_Value_25(int32_t value)
	{
		___m_Value_25 = value;
	}

	inline static int32_t get_offset_of_m_Options_26() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Options_26)); }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * get_m_Options_26() const { return ___m_Options_26; }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 ** get_address_of_m_Options_26() { return &___m_Options_26; }
	inline void set_m_Options_26(OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * value)
	{
		___m_Options_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Options_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_OnValueChanged_27)); }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaFadeSpeed_28() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaFadeSpeed_28)); }
	inline float get_m_AlphaFadeSpeed_28() const { return ___m_AlphaFadeSpeed_28; }
	inline float* get_address_of_m_AlphaFadeSpeed_28() { return &___m_AlphaFadeSpeed_28; }
	inline void set_m_AlphaFadeSpeed_28(float value)
	{
		___m_AlphaFadeSpeed_28 = value;
	}

	inline static int32_t get_offset_of_m_Dropdown_29() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Dropdown_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Dropdown_29() const { return ___m_Dropdown_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Dropdown_29() { return &___m_Dropdown_29; }
	inline void set_m_Dropdown_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Dropdown_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dropdown_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Blocker_30() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Blocker_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Blocker_30() const { return ___m_Blocker_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Blocker_30() { return &___m_Blocker_30; }
	inline void set_m_Blocker_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Blocker_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Blocker_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_Items_31() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Items_31)); }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * get_m_Items_31() const { return ___m_Items_31; }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 ** get_address_of_m_Items_31() { return &___m_Items_31; }
	inline void set_m_Items_31(List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * value)
	{
		___m_Items_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_32() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaTweenRunner_32)); }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * get_m_AlphaTweenRunner_32() const { return ___m_AlphaTweenRunner_32; }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D ** get_address_of_m_AlphaTweenRunner_32() { return &___m_AlphaTweenRunner_32; }
	inline void set_m_AlphaTweenRunner_32(TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * value)
	{
		___m_AlphaTweenRunner_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AlphaTweenRunner_32), (void*)value);
	}

	inline static int32_t get_offset_of_validTemplate_33() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___validTemplate_33)); }
	inline bool get_validTemplate_33() const { return ___validTemplate_33; }
	inline bool* get_address_of_validTemplate_33() { return &___validTemplate_33; }
	inline void set_validTemplate_33(bool value)
	{
		___validTemplate_33 = value;
	}
};

struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields
{
public:
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * ___s_NoOptionData_34;

public:
	inline static int32_t get_offset_of_s_NoOptionData_34() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields, ___s_NoOptionData_34)); }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * get_s_NoOptionData_34() const { return ___s_NoOptionData_34; }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 ** get_address_of_s_NoOptionData_34() { return &___s_NoOptionData_34; }
	inline void set_s_NoOptionData_34(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * value)
	{
		___s_NoOptionData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NoOptionData_34), (void*)value);
	}
};


// UnityEngine.UI.InputField
struct  InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnEndEdit
	EndEditEvent_t85372BABF7066F7DF46B414EA94C5D42736A0E8D * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * ___m_OnSubmit_33;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * ___m_OnValueChanged_34;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * ___m_OnValidateInput_35;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CaretColor_36;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_38;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_39;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_40;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_41;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_42;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_44;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_45;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___caretRectTrans_46;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_CursorVerts_47;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_InputTextCache_48;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CachedInputRenderer_49;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_50;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_51;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_52;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_53;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_54;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_55;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_58;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_BlinkCoroutine_59;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_61;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_62;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DragCoroutine_63;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_64;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_65;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_66;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___m_WaitForSecondsRealtime_67;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_68;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ProcessingEvent_70;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TextComponent_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Placeholder_23)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnEndEdit_32)); }
	inline EndEditEvent_t85372BABF7066F7DF46B414EA94C5D42736A0E8D * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline EndEditEvent_t85372BABF7066F7DF46B414EA94C5D42736A0E8D ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(EndEditEvent_t85372BABF7066F7DF46B414EA94C5D42736A0E8D * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnSubmit_33() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnSubmit_33)); }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * get_m_OnSubmit_33() const { return ___m_OnSubmit_33; }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 ** get_address_of_m_OnSubmit_33() { return &___m_OnSubmit_33; }
	inline void set_m_OnSubmit_33(SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * value)
	{
		___m_OnSubmit_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnSubmit_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_34() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValueChanged_34)); }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * get_m_OnValueChanged_34() const { return ___m_OnValueChanged_34; }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 ** get_address_of_m_OnValueChanged_34() { return &___m_OnValueChanged_34; }
	inline void set_m_OnValueChanged_34(OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * value)
	{
		___m_OnValueChanged_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_35() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValidateInput_35)); }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * get_m_OnValidateInput_35() const { return ___m_OnValidateInput_35; }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F ** get_address_of_m_OnValidateInput_35() { return &___m_OnValidateInput_35; }
	inline void set_m_OnValidateInput_35(OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * value)
	{
		___m_OnValidateInput_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_36() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretColor_36)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CaretColor_36() const { return ___m_CaretColor_36; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CaretColor_36() { return &___m_CaretColor_36; }
	inline void set_m_CaretColor_36(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_37() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CustomCaretColor_37)); }
	inline bool get_m_CustomCaretColor_37() const { return ___m_CustomCaretColor_37; }
	inline bool* get_address_of_m_CustomCaretColor_37() { return &___m_CustomCaretColor_37; }
	inline void set_m_CustomCaretColor_37(bool value)
	{
		___m_CustomCaretColor_37 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_38() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_SelectionColor_38)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_38() const { return ___m_SelectionColor_38; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_38() { return &___m_SelectionColor_38; }
	inline void set_m_SelectionColor_38(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_38 = value;
	}

	inline static int32_t get_offset_of_m_Text_39() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Text_39)); }
	inline String_t* get_m_Text_39() const { return ___m_Text_39; }
	inline String_t** get_address_of_m_Text_39() { return &___m_Text_39; }
	inline void set_m_Text_39(String_t* value)
	{
		___m_Text_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_40() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretBlinkRate_40)); }
	inline float get_m_CaretBlinkRate_40() const { return ___m_CaretBlinkRate_40; }
	inline float* get_address_of_m_CaretBlinkRate_40() { return &___m_CaretBlinkRate_40; }
	inline void set_m_CaretBlinkRate_40(float value)
	{
		___m_CaretBlinkRate_40 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_41() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretWidth_41)); }
	inline int32_t get_m_CaretWidth_41() const { return ___m_CaretWidth_41; }
	inline int32_t* get_address_of_m_CaretWidth_41() { return &___m_CaretWidth_41; }
	inline void set_m_CaretWidth_41(int32_t value)
	{
		___m_CaretWidth_41 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_42() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ReadOnly_42)); }
	inline bool get_m_ReadOnly_42() const { return ___m_ReadOnly_42; }
	inline bool* get_address_of_m_ReadOnly_42() { return &___m_ReadOnly_42; }
	inline void set_m_ReadOnly_42(bool value)
	{
		___m_ReadOnly_42 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateOnSelect_43() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateOnSelect_43)); }
	inline bool get_m_ShouldActivateOnSelect_43() const { return ___m_ShouldActivateOnSelect_43; }
	inline bool* get_address_of_m_ShouldActivateOnSelect_43() { return &___m_ShouldActivateOnSelect_43; }
	inline void set_m_ShouldActivateOnSelect_43(bool value)
	{
		___m_ShouldActivateOnSelect_43 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_44() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretPosition_44)); }
	inline int32_t get_m_CaretPosition_44() const { return ___m_CaretPosition_44; }
	inline int32_t* get_address_of_m_CaretPosition_44() { return &___m_CaretPosition_44; }
	inline void set_m_CaretPosition_44(int32_t value)
	{
		___m_CaretPosition_44 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_45() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretSelectPosition_45)); }
	inline int32_t get_m_CaretSelectPosition_45() const { return ___m_CaretSelectPosition_45; }
	inline int32_t* get_address_of_m_CaretSelectPosition_45() { return &___m_CaretSelectPosition_45; }
	inline void set_m_CaretSelectPosition_45(int32_t value)
	{
		___m_CaretSelectPosition_45 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_46() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___caretRectTrans_46)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_caretRectTrans_46() const { return ___caretRectTrans_46; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_caretRectTrans_46() { return &___caretRectTrans_46; }
	inline void set_caretRectTrans_46(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___caretRectTrans_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_47() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CursorVerts_47)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_CursorVerts_47() const { return ___m_CursorVerts_47; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_CursorVerts_47() { return &___m_CursorVerts_47; }
	inline void set_m_CursorVerts_47(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_CursorVerts_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_48() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputTextCache_48)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_InputTextCache_48() const { return ___m_InputTextCache_48; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_InputTextCache_48() { return &___m_InputTextCache_48; }
	inline void set_m_InputTextCache_48(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_InputTextCache_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_49() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CachedInputRenderer_49)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CachedInputRenderer_49() const { return ___m_CachedInputRenderer_49; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CachedInputRenderer_49() { return &___m_CachedInputRenderer_49; }
	inline void set_m_CachedInputRenderer_49(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CachedInputRenderer_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_50() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_PreventFontCallback_50)); }
	inline bool get_m_PreventFontCallback_50() const { return ___m_PreventFontCallback_50; }
	inline bool* get_address_of_m_PreventFontCallback_50() { return &___m_PreventFontCallback_50; }
	inline void set_m_PreventFontCallback_50(bool value)
	{
		___m_PreventFontCallback_50 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_51() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Mesh_51)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_51() const { return ___m_Mesh_51; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_51() { return &___m_Mesh_51; }
	inline void set_m_Mesh_51(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_51), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_52() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AllowInput_52)); }
	inline bool get_m_AllowInput_52() const { return ___m_AllowInput_52; }
	inline bool* get_address_of_m_AllowInput_52() { return &___m_AllowInput_52; }
	inline void set_m_AllowInput_52(bool value)
	{
		___m_AllowInput_52 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_53() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateNextUpdate_53)); }
	inline bool get_m_ShouldActivateNextUpdate_53() const { return ___m_ShouldActivateNextUpdate_53; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_53() { return &___m_ShouldActivateNextUpdate_53; }
	inline void set_m_ShouldActivateNextUpdate_53(bool value)
	{
		___m_ShouldActivateNextUpdate_53 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_54() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_UpdateDrag_54)); }
	inline bool get_m_UpdateDrag_54() const { return ___m_UpdateDrag_54; }
	inline bool* get_address_of_m_UpdateDrag_54() { return &___m_UpdateDrag_54; }
	inline void set_m_UpdateDrag_54(bool value)
	{
		___m_UpdateDrag_54 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_55() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragPositionOutOfBounds_55)); }
	inline bool get_m_DragPositionOutOfBounds_55() const { return ___m_DragPositionOutOfBounds_55; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_55() { return &___m_DragPositionOutOfBounds_55; }
	inline void set_m_DragPositionOutOfBounds_55(bool value)
	{
		___m_DragPositionOutOfBounds_55 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_58() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretVisible_58)); }
	inline bool get_m_CaretVisible_58() const { return ___m_CaretVisible_58; }
	inline bool* get_address_of_m_CaretVisible_58() { return &___m_CaretVisible_58; }
	inline void set_m_CaretVisible_58(bool value)
	{
		___m_CaretVisible_58 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_59() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkCoroutine_59)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_BlinkCoroutine_59() const { return ___m_BlinkCoroutine_59; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_BlinkCoroutine_59() { return &___m_BlinkCoroutine_59; }
	inline void set_m_BlinkCoroutine_59(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_BlinkCoroutine_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_59), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_60() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkStartTime_60)); }
	inline float get_m_BlinkStartTime_60() const { return ___m_BlinkStartTime_60; }
	inline float* get_address_of_m_BlinkStartTime_60() { return &___m_BlinkStartTime_60; }
	inline void set_m_BlinkStartTime_60(float value)
	{
		___m_BlinkStartTime_60 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_61() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawStart_61)); }
	inline int32_t get_m_DrawStart_61() const { return ___m_DrawStart_61; }
	inline int32_t* get_address_of_m_DrawStart_61() { return &___m_DrawStart_61; }
	inline void set_m_DrawStart_61(int32_t value)
	{
		___m_DrawStart_61 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_62() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawEnd_62)); }
	inline int32_t get_m_DrawEnd_62() const { return ___m_DrawEnd_62; }
	inline int32_t* get_address_of_m_DrawEnd_62() { return &___m_DrawEnd_62; }
	inline void set_m_DrawEnd_62(int32_t value)
	{
		___m_DrawEnd_62 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_63() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragCoroutine_63)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DragCoroutine_63() const { return ___m_DragCoroutine_63; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DragCoroutine_63() { return &___m_DragCoroutine_63; }
	inline void set_m_DragCoroutine_63(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DragCoroutine_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_64() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OriginalText_64)); }
	inline String_t* get_m_OriginalText_64() const { return ___m_OriginalText_64; }
	inline String_t** get_address_of_m_OriginalText_64() { return &___m_OriginalText_64; }
	inline void set_m_OriginalText_64(String_t* value)
	{
		___m_OriginalText_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_64), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_65() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WasCanceled_65)); }
	inline bool get_m_WasCanceled_65() const { return ___m_WasCanceled_65; }
	inline bool* get_address_of_m_WasCanceled_65() { return &___m_WasCanceled_65; }
	inline void set_m_WasCanceled_65(bool value)
	{
		___m_WasCanceled_65 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_66() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HasDoneFocusTransition_66)); }
	inline bool get_m_HasDoneFocusTransition_66() const { return ___m_HasDoneFocusTransition_66; }
	inline bool* get_address_of_m_HasDoneFocusTransition_66() { return &___m_HasDoneFocusTransition_66; }
	inline void set_m_HasDoneFocusTransition_66(bool value)
	{
		___m_HasDoneFocusTransition_66 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_67() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WaitForSecondsRealtime_67)); }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * get_m_WaitForSecondsRealtime_67() const { return ___m_WaitForSecondsRealtime_67; }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 ** get_address_of_m_WaitForSecondsRealtime_67() { return &___m_WaitForSecondsRealtime_67; }
	inline void set_m_WaitForSecondsRealtime_67(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * value)
	{
		___m_WaitForSecondsRealtime_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_67), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_68() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TouchKeyboardAllowsInPlaceEditing_68)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_68() const { return ___m_TouchKeyboardAllowsInPlaceEditing_68; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_68() { return &___m_TouchKeyboardAllowsInPlaceEditing_68; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_68(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_68 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_70() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ProcessingEvent_70)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ProcessingEvent_70() const { return ___m_ProcessingEvent_70; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ProcessingEvent_70() { return &___m_ProcessingEvent_70; }
	inline void set_m_ProcessingEvent_70(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ProcessingEvent_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_70), (void*)value);
	}
};

struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.RawImage
struct  RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_UVRect_37;

public:
	inline static int32_t get_offset_of_m_Texture_36() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_Texture_36)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_36() const { return ___m_Texture_36; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_36() { return &___m_Texture_36; }
	inline void set_m_Texture_36(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_UVRect_37() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_UVRect_37)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_UVRect_37() const { return ___m_UVRect_37; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_UVRect_37() { return &___m_UVRect_37; }
	inline void set_m_UVRect_37(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_UVRect_37 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * m_Items[1];

public:
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1D9CF8FA99A277EE49BC3002FDEAACDCDB29803B_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * Dictionary_2_get_Keys_m14F0DE944E629ED442E40386FFE65268F5089A65_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031  KeyCollection_GetEnumerator_m0252B3E83A9B8FAD9CFCE377DF531358529B743B_gshared (KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mB302D9A2277C50A5968079E5246F09B080C7A9B3_gshared_inline (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3714ECE30727E77F475635710D707743B6D930E6_gshared (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m5440E65428351CA6F19B1804D172DCB5E9C59C98_gshared (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mDE1798563694D30022D3B7E1010347C573690B4A_gshared (Comparison_1_tB56E8E7C2BF431D44E8EBD15EA3E6F41AAFF03D2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Array::Sort<System.Object>(!!0[],System.Comparison`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRuntimeObject_m459F5F127261A79C7428278BEBB810214748BFA4_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, Comparison_1_tB56E8E7C2BF431D44E8EBD15EA3E6F41AAFF03D2 * ___comparison1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m5E241FA6C20E2C54A2317FEE950354EB3BCE4454_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m1F74BC3B29E63392FBC9312D0AE74CC7B1C143A5_gshared (String_t* ___json0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m02BDA2BE9BA7A8D6BB8554AE3E32ED6EF05EDC0C_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0D5E79E4791BE3CCC7AE1D28ABF1E8C187159A27_gshared (Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD * __this, const RuntimeMethod* method);

// System.Void robotBlock::textToDic(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void robotBlock_textToDic_m51C4B6FFA896AFE30187D811AD786753AEC39A6F (robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * __this, String_t* ___loadtext0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.String robotBlock::dicTotext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* robotBlock_dicTotext_m1249DF3E0B40F687AFEC0168CD2A27DE97C71982 (robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0)
inline String_t* Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mF3BA34126DA8AFA32D1E5285D842C5955C698F0D_gshared)(__this, ___key0, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Clear()
inline void Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_m8E0289EE21A5628082748222E1FE2F52C0BB5D87 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m1D9CF8FA99A277EE49BC3002FDEAACDCDB29803B_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count()
inline int32_t Dictionary_2_get_Count_m0D12A8E922828B1FBE6FCA8D404FDA65E0F78CDA (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * Dictionary_2_get_Keys_m21F0F6BC1FCFC0FEE024B53453596D43D0BC472B (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_get_Keys_m14F0DE944E629ED442E40386FFE65268F5089A65_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::GetEnumerator()
inline Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547  KeyCollection_GetEnumerator_mAC8E6DFDCE301D5AAE4F1DF7835BF981868AFF78 (KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547  (*) (KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D *, const RuntimeMethod*))KeyCollection_GetEnumerator_m0252B3E83A9B8FAD9CFCE377DF531358529B743B_gshared)(__this, method);
}
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::get_Current()
inline String_t* Enumerator_get_Current_mF8B11007A1406BB1D35A3402AE0726AD8C4DAABA_inline (Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 *, const RuntimeMethod*))Enumerator_get_Current_mB302D9A2277C50A5968079E5246F09B080C7A9B3_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_m5357493D8DA32113DC35EE95205D4E3D607C9F33 (Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 *, const RuntimeMethod*))Enumerator_MoveNext_m3714ECE30727E77F475635710D707743B6D930E6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_mFB991F7C2A32C8DA7C4D2F522B9C69C36F7DF904 (Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 *, const RuntimeMethod*))Enumerator_Dispose_m5440E65428351CA6F19B1804D172DCB5E9C59C98_gshared)(__this, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.String[] System.IO.Directory::GetFiles(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Directory_GetFiles_m832F37C2ABC12EEAB3B1736C5196C50C0B65C1DC (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Comparison`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m64CA537CD79C3B4D4D21B2668784DC72AF0E47E5 (Comparison_1_t7EBC739A23D30086C8C7FD999344464ECAD45ABB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t7EBC739A23D30086C8C7FD999344464ECAD45ABB *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mDE1798563694D30022D3B7E1010347C573690B4A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Array::Sort<System.String>(!!0[],System.Comparison`1<!!0>)
inline void Array_Sort_TisString_t_mD0D8463CA1520B9E2CB7A1C7E84DD30EE9D9CD1C (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___array0, Comparison_1_t7EBC739A23D30086C8C7FD999344464ECAD45ABB * ___comparison1, const RuntimeMethod* method)
{
	((  void (*) (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, Comparison_1_t7EBC739A23D30086C8C7FD999344464ECAD45ABB *, const RuntimeMethod*))Array_Sort_TisRuntimeObject_m459F5F127261A79C7428278BEBB810214748BFA4_gshared)(___array0, ___comparison1, method);
}
// System.Void System.Array::Reverse(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_mB87373AFAC1DBE600CAA60B79A985DD09555BF7D (RuntimeArray * ___array0, const RuntimeMethod* method);
// System.String System.IO.Path::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD (String_t* ___path0, const RuntimeMethod* method);
// System.String System.IO.Path::GetFileNameWithoutExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileNameWithoutExtension_m52BA8E84FC8949E8A9F60D024742189907B997D2 (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.String System.IO.File::ReadAllText(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_m3DAF033823BDCC9F8EA4E405C990FC4A7815F6B4 (String_t* ___path0, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m85FD3AD1E7C2C143E7D5491BBB781F1C3DA22B85 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m5E241FA6C20E2C54A2317FEE950354EB3BCE4454_gshared)(___original0, method);
}
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<robottable>()
inline robottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D * GameObject_GetComponent_Tisrobottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D_m55187337BCC0A473298878E02385B88922D1257F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  robottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void robotselect::robotload(System.String,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void robotselect_robotload_mC4C816AA06A6E5A81D5919DB0D2A5277DDB8AF94 (robotselect_t0B0500EFF7DCB8EDFEBC7A307728C8AB90E53BB9 * __this, String_t* ___allloadtext0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___table1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<save>()
inline save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * Component_GetComponent_Tissave_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC_m358F055AC5E4516B6A1B52F340D1C0D882204AEE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// UnityEngine.GameObject save::robotload(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * save_robotload_mBB589D6AF96D564B84D5988DA1C90CBC6B47EC68 (save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * __this, String_t* ___block0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.DateTime System.IO.File::GetLastWriteTime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  File_GetLastWriteTime_m7D296576EA8963D3044B663B4A6095D58C6CF9C5 (String_t* ___path0, const RuntimeMethod* method);
// System.Int32 System.DateTime::Compare(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_Compare_m1A3C6A911C83ED8490F5F39EE18F78979002063A (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___t10, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___t21, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method);
// System.Void save::programloadstart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void save_programloadstart_m8017B0703C2EBFE21CB8E2E98CD12B97D57E34BF (save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * __this, String_t* ___block0, const RuntimeMethod* method);
// System.String save::savestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* save_savestart_m6C94D16DCA72C8B5CB22DEE4696C6E8FF1937EE7 (save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * __this, const RuntimeMethod* method);
// System.String save::programsavestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* save_programsavestart_m7380CD7AE1A10AC7335C1DD257E5FC5439CDB520 (save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_set_systemCopyBuffer_m1C5EAC38441C94C430AA13DF9942E1786CFCAC95 (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllText_mA0528ED8C0C9B94864772B9036FC4B206682EE9C (String_t* ___path0, String_t* ___contents1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<programblock>()
inline programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Void programblock::conection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void programblock_conection_mABF0B9D5F8F3058689AD1413CBE5023756427567 (programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<programblockproperty>(System.String)
inline programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63 * JsonUtility_FromJson_Tisprogramblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63_m14C686217C4CE7A5620A9BE68E36A6629B76F4F5 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m1F74BC3B29E63392FBC9312D0AE74CC7B1C143A5_gshared)(___json0, method);
}
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120 (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m02BDA2BE9BA7A8D6BB8554AE3E32ED6EF05EDC0C_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.InputField>()
inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mEC132E230E8EE882BFFCEF116997ADFBC3BFC1C8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Dropdown>()
inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * GameObject_GetComponent_TisDropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_m88986FA73F2B6D6D5B41BEC8A6D02DA3C89E7E11 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_value_mE4418D205D53F8A3AD23B957D1A8CD71489CB3B9 (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void programblockproperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void programblockproperty__ctor_mD3942DC5A96EF0D29F352583D5EFB18A7068629D (programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63 * __this, const RuntimeMethod* method);
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Int32 UnityEngine.UI.Dropdown::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void robotblockdata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void robotblockdata__ctor_m098D0EEC911A25C24383D4EB9298ACFA0F6E8879 (robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<robotBlock>()
inline robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * GameObject_GetComponent_TisrobotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9_m19DEDA9E21A3DDA7EBA1A60326933869D30624BD (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m624247F6B1FDBD1B02C133B4878E4F3C8CEA30DA (RuntimeObject * ___obj0, bool ___prettyPrint1, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<robotblockdata>(System.String)
inline robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1 * JsonUtility_FromJson_Tisrobotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1_m68BF27A9A0D16E29E946F12086E8B21C108C53B9 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m1F74BC3B29E63392FBC9312D0AE74CC7B1C143A5_gshared)(___json0, method);
}
// !!0 UnityEngine.Component::GetComponent<robotBlock>()
inline robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * Component_GetComponent_TisrobotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9_mB9323EE8D9058759682D53247CB54075C995D6F4 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, String_t* ___n0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.HingeJoint>()
inline HingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C * GameObject_GetComponent_TisHingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C_mD691563E795E39668B6EFEC64CF8C5ED0C1989DB (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  HingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F (String_t* ___s0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.JointMotor UnityEngine.HingeJoint::get_motor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointMotor_t17429B3F7BA8727FF15A83BFBB05744BDB0BD634  HingeJoint_get_motor_m2F2B1F958E52A1B5232EB8B9420168DE6BC1D0D8 (HingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.JointMotor::set_force(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointMotor_set_force_mFF32AA267316F398D5E5A818433947A161BD10CD (JointMotor_t17429B3F7BA8727FF15A83BFBB05744BDB0BD634 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.JointMotor::set_targetVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointMotor_set_targetVelocity_m130563294B62E818C17FC9446E5F62DD371297BE (JointMotor_t17429B3F7BA8727FF15A83BFBB05744BDB0BD634 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.JointMotor::set_freeSpin(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointMotor_set_freeSpin_mC9B0F931BF0878FA3F99DB3EDEDA9C750ABA042E (JointMotor_t17429B3F7BA8727FF15A83BFBB05744BDB0BD634 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.HingeJoint::set_motor(UnityEngine.JointMotor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HingeJoint_set_motor_m0E70B6FCAABAF81A6066DCDD2771E292B6FC50E8 (HingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C * __this, JointMotor_t17429B3F7BA8727FF15A83BFBB05744BDB0BD634  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.HingeJoint::set_useMotor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HingeJoint_set_useMotor_mB7B5ABF943F918EFB7A05B7870D6434144779DA3 (HingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.TextMesh>()
inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m901E6F3CDB43769BCA999C36538FE4ACA4AEB3A9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471 (String_t* ___key0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_Instantiate_mADD3254CB5E6AB56FBB6964FE4B930F5187AB5AD (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<execution>()
inline execution_tF7399C7FC9B17C371DDAD512080EF16F510535E1 * GameObject_GetComponent_Tisexecution_tF7399C7FC9B17C371DDAD512080EF16F510535E1_mC83D9F629DC26E55359CB701968697DE16522990 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  execution_tF7399C7FC9B17C371DDAD512080EF16F510535E1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<programblock>()
inline programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * Component_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m2437386FD2A3D00F29F9E6EA2DB01183C4C9C21C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// System.Void swich::caseconection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void swich_caseconection_mECDAC516599C9CD166A599739547EE70EC49316D (swich_tED3711F0A89E2185E7FE1E24493DF1DB96DF90FC * __this, const RuntimeMethod* method);
// System.Void swich::setsize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void swich_setsize_m514CA1AE92ECE826A67D8A96675C1CF09E073BDD (swich_tED3711F0A89E2185E7FE1E24493DF1DB96DF90FC * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<whileblock>()
inline whileblock_t0BBCEC21FB1F2674F833F551D913738092D7143E * GameObject_GetComponent_Tiswhileblock_t0BBCEC21FB1F2674F833F551D913738092D7143E_mF36C03117C1B745A456CCA5D1C830476B1653C85 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  whileblock_t0BBCEC21FB1F2674F833F551D913738092D7143E * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0 (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m54990A485E2E66739E31090BDC3A4C01EF7729BA (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * ___value0, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::get_anyKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_anyKey_mF484987F7619AE4EB70CF96CB40AFBEF721986EB (const RuntimeMethod* method);
// System.Void titlecamera::setx(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void titlecamera_setx_m66AB99F2B9A4639E18C53CF69D788A2462D5BFC8 (titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___obj0, float ___x1, const RuntimeMethod* method);
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIUtility_get_systemCopyBuffer_m64CEF1CB0627F80D3CEEB458BA60DC9C1FA6141E (const RuntimeMethod* method);
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0 (const RuntimeMethod* method);
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75 (Guid_t * __this, const RuntimeMethod* method);
// System.Void titlecamera::gamestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void titlecamera_gamestart_mA0F379FA56741C2F18984E0D535E62C1FDF6766F (titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<misson>()
inline misson_tE35F9FCDC3926935096D22473095FE7579801E0D * GameObject_GetComponent_Tismisson_tE35F9FCDC3926935096D22473095FE7579801E0D_m5306AE9C65B1A733A9B55E80229B446395EBD8EC (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  misson_tE35F9FCDC3926935096D22473095FE7579801E0D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Void misson::missonchange(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void misson_missonchange_m06FEB0265C1BF8375EC029975A742BC23B7EEEE0 (misson_tE35F9FCDC3926935096D22473095FE7579801E0D * __this, String_t* ___missonname0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<save>()
inline save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * GameObject_GetComponent_Tissave_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC_m20FC1E122B3749058E0E2DA07D0B9AC05B25CD71 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Void save::allload(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void save_allload_mAC22A25C888E1C043512C2824951A1B14E20C982 (save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * __this, String_t* ___allloadtext0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::remove_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_remove_sceneLoaded_m69725C1E9ADF1E5FE760656AAC95054AC00AF97D (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3 (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<player>()
inline player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * GameObject_GetComponent_Tisplayer_tA80E0022C279849EE513BB6A4017ED62943ADC71_m0697638C371A3C624D3003D829B9C6461AB27039 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Void tutorial::say(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B (tutorial_t1F1611D4CF7705BAAF90F754A420AD55500FA99F * __this, String_t* ___speak0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.InputField>()
inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * Component_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m1025822CFFC3A3C846267590775A843ED9532924 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// System.Void misson::clear(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void misson_clear_mECCA7CC3A9D1F0FBA6C6E299C98081A77C817D6F (misson_tE35F9FCDC3926935096D22473095FE7579801E0D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___effectpos0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99 (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor()
inline void Dictionary_2__ctor_m2CE67E373BDB82A6E6FBA950E28F917BB650DB6B (Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 *, const RuntimeMethod*))Dictionary_2__ctor_m0D5E79E4791BE3CCC7AE1D28ABF1E8C187159A27_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<end>()
inline end_tDD3367686B3440E44BAD14851F1ED58F8590CBC5 * GameObject_GetComponent_Tisend_tDD3367686B3440E44BAD14851F1ED58F8590CBC5_mF5439E58A8A94ED724A75CBF77A7C7CA3A5B3C36 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  end_tDD3367686B3440E44BAD14851F1ED58F8590CBC5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void robotBlock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void robotBlock_Start_mDC99A7CAD3D8F794274822FBED7DCD12AE0E8BF3 (robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * __this, const RuntimeMethod* method)
{
	{
		// textToDic(blocktext);
		String_t* L_0 = __this->get_blocktext_5();
		robotBlock_textToDic_m51C4B6FFA896AFE30187D811AD786753AEC39A6F(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void robotBlock::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void robotBlock_Update_mB5A9FD0D88511267A464D8605A751CFE97D9770D (robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28A0662C1D75F6A45B7689E781183379ECEAC7CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48BA8423A3ADC76C5733C0B8A2BA7DE29A20CAC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50A8863477B395531AE591FC12CCA3FC439B5955);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A86C5EFABF4E3FB687EBE684BB92428258D1AF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.U))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)117), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// dicTotext();
		String_t* L_1;
		L_1 = robotBlock_dicTotext_m1249DF3E0B40F687AFEC0168CD2A27DE97C71982(__this, /*hidden argument*/NULL);
		// print("dictotext");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral28A0662C1D75F6A45B7689E781183379ECEAC7CA, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// if ((this.name == "motor" || this.name == "servo") && transform.childCount == 2)
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral48BA8423A3ADC76C5733C0B8A2BA7DE29A20CAC4, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003e;
		}
	}
	{
		String_t* L_4;
		L_4 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteral5A86C5EFABF4E3FB687EBE684BB92428258D1AF4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00b3;
		}
	}

IL_003e:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_00b3;
		}
	}
	{
		// if (blockdata["reverse"] == "0")
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_8 = __this->get_blockdata_4();
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B(L_8, _stringLiteral50A8863477B395531AE591FC12CCA3FC439B5955, /*hidden argument*/Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B_RuntimeMethod_var);
		bool L_10;
		L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_008e;
		}
	}
	{
		// transform.GetChild(1).localScale = new Vector3(1, 1, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_11, 1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_12, L_13, /*hidden argument*/NULL);
		// }
		return;
	}

IL_008e:
	{
		// transform.GetChild(1).localScale = new Vector3(-1, 1, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_14, 1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_15, L_16, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		// }
		return;
	}
}
// System.Void robotBlock::textToDic(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void robotBlock_textToDic_m51C4B6FFA896AFE30187D811AD786753AEC39A6F (robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * __this, String_t* ___loadtext0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8E0289EE21A5628082748222E1FE2F52C0BB5D87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// string[] keyvaluetext = loadtext.Split(',');
		String_t* L_0 = ___loadtext0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_0, L_2, /*hidden argument*/NULL);
		// blockdata.Clear();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_4 = __this->get_blockdata_4();
		NullCheck(L_4);
		Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A(L_4, /*hidden argument*/Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A_RuntimeMethod_var);
		// foreach (string item in keyvaluetext)
		V_0 = L_3;
		V_1 = 0;
		goto IL_005a;
	}

IL_0021:
	{
		// foreach (string item in keyvaluetext)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		// blockdata.Add(item.Split(':')[0], item.Split(':')[1]);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_9 = __this->get_blockdata_4();
		String_t* L_10 = V_2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_12 = L_11;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
		NullCheck(L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13;
		L_13 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_10, L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		String_t* L_16 = V_2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_17 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_18 = L_17;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
		NullCheck(L_16);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19;
		L_19 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_16, L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_20 = 1;
		String_t* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_9);
		Dictionary_2_Add_m8E0289EE21A5628082748222E1FE2F52C0BB5D87(L_9, L_15, L_21, /*hidden argument*/Dictionary_2_Add_m8E0289EE21A5628082748222E1FE2F52C0BB5D87_RuntimeMethod_var);
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_005a:
	{
		// foreach (string item in keyvaluetext)
		int32_t L_23 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_0021;
		}
	}
	{
		// }
		return;
	}
}
// System.String robotBlock::dicTotext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* robotBlock_dicTotext_m1249DF3E0B40F687AFEC0168CD2A27DE97C71982 (robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m0D12A8E922828B1FBE6FCA8D404FDA65E0F78CDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m21F0F6BC1FCFC0FEE024B53453596D43D0BC472B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFB991F7C2A32C8DA7C4D2F522B9C69C36F7DF904_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5357493D8DA32113DC35EE95205D4E3D607C9F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF8B11007A1406BB1D35A3402AE0726AD8C4DAABA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_mAC8E6DFDCE301D5AAE4F1DF7835BF981868AFF78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// string[] blockdatatextarr = new string[blockdata.Count];
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_blockdata_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m0D12A8E922828B1FBE6FCA8D404FDA65E0F78CDA(L_0, /*hidden argument*/Dictionary_2_get_Count_m0D12A8E922828B1FBE6FCA8D404FDA65E0F78CDA_RuntimeMethod_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// int a = 0;
		V_1 = 0;
		// foreach (var key in blockdata.Keys)
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = __this->get_blockdata_4();
		NullCheck(L_3);
		KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * L_4;
		L_4 = Dictionary_2_get_Keys_m21F0F6BC1FCFC0FEE024B53453596D43D0BC472B(L_3, /*hidden argument*/Dictionary_2_get_Keys_m21F0F6BC1FCFC0FEE024B53453596D43D0BC472B_RuntimeMethod_var);
		NullCheck(L_4);
		Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547  L_5;
		L_5 = KeyCollection_GetEnumerator_mAC8E6DFDCE301D5AAE4F1DF7835BF981868AFF78(L_4, /*hidden argument*/KeyCollection_GetEnumerator_mAC8E6DFDCE301D5AAE4F1DF7835BF981868AFF78_RuntimeMethod_var);
		V_2 = L_5;
	}

IL_0024:
	try
	{// begin try (depth: 1)
		{
			goto IL_004c;
		}

IL_0026:
		{
			// foreach (var key in blockdata.Keys)
			String_t* L_6;
			L_6 = Enumerator_get_Current_mF8B11007A1406BB1D35A3402AE0726AD8C4DAABA_inline((Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mF8B11007A1406BB1D35A3402AE0726AD8C4DAABA_RuntimeMethod_var);
			V_3 = L_6;
			// blockdatatextarr[a] = key + ":" + blockdata[key];
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = V_0;
			int32_t L_8 = V_1;
			String_t* L_9 = V_3;
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_10 = __this->get_blockdata_4();
			String_t* L_11 = V_3;
			NullCheck(L_10);
			String_t* L_12;
			L_12 = Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B(L_10, L_11, /*hidden argument*/Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B_RuntimeMethod_var);
			String_t* L_13;
			L_13 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_9, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_12, /*hidden argument*/NULL);
			NullCheck(L_7);
			ArrayElementTypeCheck (L_7, L_13);
			(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (String_t*)L_13);
			// a++;
			int32_t L_14 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		}

IL_004c:
		{
			// foreach (var key in blockdata.Keys)
			bool L_15;
			L_15 = Enumerator_MoveNext_m5357493D8DA32113DC35EE95205D4E3D607C9F33((Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m5357493D8DA32113DC35EE95205D4E3D607C9F33_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_0026;
			}
		}

IL_0055:
		{
			IL2CPP_LEAVE(0x65, FINALLY_0057);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0057;
	}

FINALLY_0057:
	{// begin finally (depth: 1)
		Enumerator_Dispose_mFB991F7C2A32C8DA7C4D2F522B9C69C36F7DF904((Enumerator_t02FBEF5309FE3C4F8A7A1140B9590258FF5FA547 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mFB991F7C2A32C8DA7C4D2F522B9C69C36F7DF904_RuntimeMethod_var);
		IL2CPP_END_FINALLY(87)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(87)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0065:
	{
		// return string.Join(",", blockdatatextarr);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = V_0;
		String_t* L_17;
		L_17 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Void robotBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void robotBlock__ctor_m17105656CCCC59D918B771CBA3EF945A862F35F0 (robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Dictionary<string, string> blockdata = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_0, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		__this->set_blockdata_4(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void robotblockdata::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void robotblockdata__ctor_m098D0EEC911A25C24383D4EB9298ACFA0F6E8879 (robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void robotselect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void robotselect_Start_m66DD96A6AB8E8B0A10820FF3C1A8427497D11107 (robotselect_t0B0500EFF7DCB8EDFEBC7A307728C8AB90E53BB9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisString_t_mD0D8463CA1520B9E2CB7A1C7E84DD30EE9D9CD1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1__ctor_m64CA537CD79C3B4D4D21B2668784DC72AF0E47E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t7EBC739A23D30086C8C7FD999344464ECAD45ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisrobottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D_m55187337BCC0A473298878E02385B88922D1257F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m85FD3AD1E7C2C143E7D5491BBB781F1C3DA22B85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral448E201B3332EF539748ECA7BACE5ED9C8358814);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CF86DD974245D76B28A56DE81BFDABD3EDF63DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&robotselect_CompareLastWriteTime_mA9D4D5E15BB885021943C2801DCF8E2379630FD4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_5 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_6 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_7 = NULL;
	{
		// print(Application.persistentDataPath);
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_0, /*hidden argument*/NULL);
		// var files = Directory.GetFiles(Application.persistentDataPath);
		String_t* L_1;
		L_1 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2;
		L_2 = Directory_GetFiles_m832F37C2ABC12EEAB3B1736C5196C50C0B65C1DC(L_1, /*hidden argument*/NULL);
		// Array.Sort(files, CompareLastWriteTime);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		Comparison_1_t7EBC739A23D30086C8C7FD999344464ECAD45ABB * L_4 = (Comparison_1_t7EBC739A23D30086C8C7FD999344464ECAD45ABB *)il2cpp_codegen_object_new(Comparison_1_t7EBC739A23D30086C8C7FD999344464ECAD45ABB_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m64CA537CD79C3B4D4D21B2668784DC72AF0E47E5(L_4, NULL, (intptr_t)((intptr_t)robotselect_CompareLastWriteTime_mA9D4D5E15BB885021943C2801DCF8E2379630FD4_RuntimeMethod_var), /*hidden argument*/Comparison_1__ctor_m64CA537CD79C3B4D4D21B2668784DC72AF0E47E5_RuntimeMethod_var);
		Array_Sort_TisString_t_mD0D8463CA1520B9E2CB7A1C7E84DD30EE9D9CD1C(L_3, L_4, /*hidden argument*/Array_Sort_TisString_t_mD0D8463CA1520B9E2CB7A1C7E84DD30EE9D9CD1C_RuntimeMethod_var);
		// Array.Reverse(files);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_3;
		Array_Reverse_mB87373AFAC1DBE600CAA60B79A985DD09555BF7D((RuntimeArray *)(RuntimeArray *)L_5, /*hidden argument*/NULL);
		// Vector3 tablepos = new Vector3(0, 0, 0);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// foreach (var file in files)
		V_1 = L_5;
		V_2 = 0;
		goto IL_0121;
	}

IL_004a:
	{
		// foreach (var file in files)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// if (System.IO.Path.GetExtension(file) == ".rbo")
		String_t* L_10 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteral448E201B3332EF539748ECA7BACE5ED9C8358814, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_011d;
		}
	}
	{
		// if (Path.GetFileNameWithoutExtension(file) != "")
		String_t* L_13 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = Path_GetFileNameWithoutExtension_m52BA8E84FC8949E8A9F60D024742189907B997D2(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_14, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_011d;
		}
	}
	{
		// string data = File.ReadAllText(file, System.Text.Encoding.UTF8);
		String_t* L_16 = V_3;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_17;
		L_17 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		String_t* L_18;
		L_18 = File_ReadAllText_m3DAF033823BDCC9F8EA4E405C990FC4A7815F6B4(L_16, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		// GameObject table = Instantiate(tablepre);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_tablepre_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m85FD3AD1E7C2C143E7D5491BBB781F1C3DA22B85(L_19, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m85FD3AD1E7C2C143E7D5491BBB781F1C3DA22B85_RuntimeMethod_var);
		V_5 = L_20;
		// GameObject robot = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_21, /*hidden argument*/NULL);
		V_6 = L_21;
		// robot.transform.position = table.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = V_6;
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = V_5;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_23, L_26, /*hidden argument*/NULL);
		// robot.transform.parent = table.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = V_6;
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = V_5;
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_28, L_30, /*hidden argument*/NULL);
		// table.GetComponent<robottable>().robottext = data;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = V_5;
		NullCheck(L_31);
		robottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D * L_32;
		L_32 = GameObject_GetComponent_Tisrobottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D_m55187337BCC0A473298878E02385B88922D1257F(L_31, /*hidden argument*/GameObject_GetComponent_Tisrobottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D_m55187337BCC0A473298878E02385B88922D1257F_RuntimeMethod_var);
		String_t* L_33 = V_4;
		NullCheck(L_32);
		L_32->set_robottext_5(L_33);
		// table.name = System.IO.Path.GetFileNameWithoutExtension(file);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = V_5;
		String_t* L_35 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_36;
		L_36 = Path_GetFileNameWithoutExtension_m52BA8E84FC8949E8A9F60D024742189907B997D2(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_34, L_36, /*hidden argument*/NULL);
		// robotload(data, robot);
		String_t* L_37 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = V_6;
		robotselect_robotload_mC4C816AA06A6E5A81D5919DB0D2A5277DDB8AF94(__this, L_37, L_38, /*hidden argument*/NULL);
		// tablepos.x += 5;
		float* L_39 = (&V_0)->get_address_of_x_2();
		float* L_40 = L_39;
		float L_41 = *((float*)L_40);
		*((float*)L_40) = (float)((float)il2cpp_codegen_add((float)L_41, (float)(5.0f)));
		// table.transform.parent = robots.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = V_5;
		NullCheck(L_42);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_42, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = __this->get_robots_5();
		NullCheck(L_44);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_43, L_45, /*hidden argument*/NULL);
		// table.transform.localPosition = tablepos;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = V_5;
		NullCheck(L_46);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48 = V_0;
		NullCheck(L_47);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_47, L_48, /*hidden argument*/NULL);
	}

IL_011d:
	{
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_0121:
	{
		// foreach (var file in files)
		int32_t L_50 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_51 = V_1;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length))))))
		{
			goto IL_004a;
		}
	}
	{
		// foreach (GameObject blockmark in GameObject.FindGameObjectsWithTag("blockmark"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_52;
		L_52 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral8CF86DD974245D76B28A56DE81BFDABD3EDF63DE, /*hidden argument*/NULL);
		V_7 = L_52;
		V_2 = 0;
		goto IL_0147;
	}

IL_013a:
	{
		// foreach (GameObject blockmark in GameObject.FindGameObjectsWithTag("blockmark"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_53 = V_7;
		int32_t L_54 = V_2;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		// Destroy(blockmark);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_56, /*hidden argument*/NULL);
		int32_t L_57 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
	}

IL_0147:
	{
		// foreach (GameObject blockmark in GameObject.FindGameObjectsWithTag("blockmark"))
		int32_t L_58 = V_2;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_59 = V_7;
		NullCheck(L_59);
		if ((((int32_t)L_58) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_59)->max_length))))))
		{
			goto IL_013a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void robotselect::robotload(System.String,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void robotselect_robotload_mC4C816AA06A6E5A81D5919DB0D2A5277DDB8AF94 (robotselect_t0B0500EFF7DCB8EDFEBC7A307728C8AB90E53BB9 * __this, String_t* ___allloadtext0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___table1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_Tissave_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC_m358F055AC5E4516B6A1B52F340D1C0D882204AEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF5E0B07E0212F7EE452093BD06D97584B339C62);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	String_t* V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	RuntimeObject* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var allload = allloadtext.Split('\n');
		String_t* L_0 = ___allloadtext0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// string type = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// Vector3 maxblock = new Vector3(100, 100, 100);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), (100.0f), (100.0f), (100.0f), /*hidden argument*/NULL);
		// Vector3 minblock = new Vector3(-100, -100, -100);
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), (-100.0f), (-100.0f), (-100.0f), /*hidden argument*/NULL);
		// for (int count = 0; count < allload.Length; count++)
		V_7 = 0;
		goto IL_0162;
	}

IL_004c:
	{
		// string load = allload[count];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_0;
		int32_t L_5 = V_7;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_8 = L_7;
		// if (load.Length != 0 && load[0] == ':')
		String_t* L_8 = V_8;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_006f;
		}
	}
	{
		String_t* L_10 = V_8;
		NullCheck(L_10);
		Il2CppChar L_11;
		L_11 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_10, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_006f;
		}
	}
	{
		// type = load;
		String_t* L_12 = V_8;
		V_1 = L_12;
		// continue;
		goto IL_015c;
	}

IL_006f:
	{
		// if (type.Trim() == ":robot")
		String_t* L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteralEF5E0B07E0212F7EE452093BD06D97584B339C62, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_015c;
		}
	}
	{
		// Transform robotblock = GetComponent<save>().robotload(load).transform;
		save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * L_16;
		L_16 = Component_GetComponent_Tissave_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC_m358F055AC5E4516B6A1B52F340D1C0D882204AEE(__this, /*hidden argument*/Component_GetComponent_Tissave_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC_m358F055AC5E4516B6A1B52F340D1C0D882204AEE_RuntimeMethod_var);
		String_t* L_17 = V_8;
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = save_robotload_mBB589D6AF96D564B84D5988DA1C90CBC6B47EC68(L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		// robotblock.parent = table.transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = L_19;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = ___table1;
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_20, L_22, /*hidden argument*/NULL);
		// Vector3 robotpos = robotblock.transform.position;
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_20, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		V_9 = L_24;
		// if (minblock.x < robotpos.x) minblock.x = robotpos.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = V_3;
		float L_26 = L_25.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_9;
		float L_28 = L_27.get_x_2();
		if ((!(((float)L_26) < ((float)L_28))))
		{
			goto IL_00cb;
		}
	}
	{
		// if (minblock.x < robotpos.x) minblock.x = robotpos.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_9;
		float L_30 = L_29.get_x_2();
		(&V_3)->set_x_2(L_30);
	}

IL_00cb:
	{
		// if (minblock.y < robotpos.y) minblock.y = robotpos.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_3;
		float L_32 = L_31.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_9;
		float L_34 = L_33.get_y_3();
		if ((!(((float)L_32) < ((float)L_34))))
		{
			goto IL_00e8;
		}
	}
	{
		// if (minblock.y < robotpos.y) minblock.y = robotpos.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = V_9;
		float L_36 = L_35.get_y_3();
		(&V_3)->set_y_3(L_36);
	}

IL_00e8:
	{
		// if (minblock.z < robotpos.z) minblock.z = robotpos.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = V_3;
		float L_38 = L_37.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = V_9;
		float L_40 = L_39.get_z_4();
		if ((!(((float)L_38) < ((float)L_40))))
		{
			goto IL_0105;
		}
	}
	{
		// if (minblock.z < robotpos.z) minblock.z = robotpos.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_9;
		float L_42 = L_41.get_z_4();
		(&V_3)->set_z_4(L_42);
	}

IL_0105:
	{
		// if (maxblock.x > robotpos.x) maxblock.x = robotpos.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = V_2;
		float L_44 = L_43.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = V_9;
		float L_46 = L_45.get_x_2();
		if ((!(((float)L_44) > ((float)L_46))))
		{
			goto IL_0122;
		}
	}
	{
		// if (maxblock.x > robotpos.x) maxblock.x = robotpos.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = V_9;
		float L_48 = L_47.get_x_2();
		(&V_2)->set_x_2(L_48);
	}

IL_0122:
	{
		// if (maxblock.y > robotpos.y) maxblock.y = robotpos.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49 = V_2;
		float L_50 = L_49.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = V_9;
		float L_52 = L_51.get_y_3();
		if ((!(((float)L_50) > ((float)L_52))))
		{
			goto IL_013f;
		}
	}
	{
		// if (maxblock.y > robotpos.y) maxblock.y = robotpos.y;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53 = V_9;
		float L_54 = L_53.get_y_3();
		(&V_2)->set_y_3(L_54);
	}

IL_013f:
	{
		// if (maxblock.z > robotpos.z) maxblock.z = robotpos.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = V_2;
		float L_56 = L_55.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57 = V_9;
		float L_58 = L_57.get_z_4();
		if ((!(((float)L_56) > ((float)L_58))))
		{
			goto IL_015c;
		}
	}
	{
		// if (maxblock.z > robotpos.z) maxblock.z = robotpos.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59 = V_9;
		float L_60 = L_59.get_z_4();
		(&V_2)->set_z_4(L_60);
	}

IL_015c:
	{
		// for (int count = 0; count < allload.Length; count++)
		int32_t L_61 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_0162:
	{
		// for (int count = 0; count < allload.Length; count++)
		int32_t L_62 = V_7;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_63 = V_0;
		NullCheck(L_63);
		if ((((int32_t)L_62) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_63)->max_length))))))
		{
			goto IL_004c;
		}
	}
	{
		// var movepos = table.transform.position - (minblock + maxblock) / 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = ___table1;
		NullCheck(L_64);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_65, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		L_69 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_67, L_68, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70;
		L_70 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_69, (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		L_71 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_66, L_70, /*hidden argument*/NULL);
		V_4 = L_71;
		// movepos.y = 1f;
		(&V_4)->set_y_3((1.0f));
		// foreach (Transform childTransform in table.transform)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72 = ___table1;
		NullCheck(L_72);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73;
		L_73 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_72, /*hidden argument*/NULL);
		NullCheck(L_73);
		RuntimeObject* L_74;
		L_74 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_73, /*hidden argument*/NULL);
		V_10 = L_74;
	}

IL_01a8:
	try
	{// begin try (depth: 1)
		{
			goto IL_01c8;
		}

IL_01aa:
		{
			// foreach (Transform childTransform in table.transform)
			RuntimeObject* L_75 = V_10;
			NullCheck(L_75);
			RuntimeObject * L_76;
			L_76 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_75);
			// childTransform.position += movepos;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_76, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			NullCheck(L_77);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78;
			L_78 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_77, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79 = V_4;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80;
			L_80 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_78, L_79, /*hidden argument*/NULL);
			NullCheck(L_77);
			Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_77, L_80, /*hidden argument*/NULL);
		}

IL_01c8:
		{
			// foreach (Transform childTransform in table.transform)
			RuntimeObject* L_81 = V_10;
			NullCheck(L_81);
			bool L_82;
			L_82 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_81);
			if (L_82)
			{
				goto IL_01aa;
			}
		}

IL_01d1:
		{
			IL2CPP_LEAVE(0x1E8, FINALLY_01d3);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01d3;
	}

FINALLY_01d3:
	{// begin finally (depth: 1)
		{
			RuntimeObject* L_83 = V_10;
			V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_83, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_84 = V_11;
			if (!L_84)
			{
				goto IL_01e7;
			}
		}

IL_01e0:
		{
			RuntimeObject* L_85 = V_11;
			NullCheck(L_85);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_85);
		}

IL_01e7:
		{
			IL2CPP_END_FINALLY(467)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(467)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1E8, IL_01e8)
	}

IL_01e8:
	{
		// Vector3 size = maxblock - minblock;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_88;
		L_88 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_86, L_87, /*hidden argument*/NULL);
		V_5 = L_88;
		// float scale = 0.25f / Mathf.Max(Mathf.Abs(size.x), Mathf.Abs(size.z));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89 = V_5;
		float L_90 = L_89.get_x_2();
		float L_91;
		L_91 = fabsf(L_90);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_92 = V_5;
		float L_93 = L_92.get_z_4();
		float L_94;
		L_94 = fabsf(L_93);
		float L_95;
		L_95 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_91, L_94, /*hidden argument*/NULL);
		V_6 = ((float)((float)(0.25f)/(float)L_95));
		// scale = Mathf.Clamp(scale, 0, 0.1f);
		float L_96 = V_6;
		float L_97;
		L_97 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_96, (0.0f), (0.100000001f), /*hidden argument*/NULL);
		V_6 = L_97;
		// table.transform.localScale = new Vector3(scale, scale, scale);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_98 = ___table1;
		NullCheck(L_98);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_99;
		L_99 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_98, /*hidden argument*/NULL);
		float L_100 = V_6;
		float L_101 = V_6;
		float L_102 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_103;
		memset((&L_103), 0, sizeof(L_103));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_103), L_100, L_101, L_102, /*hidden argument*/NULL);
		NullCheck(L_99);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_99, L_103, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void robotselect::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void robotselect_Update_m762A58C579E04D945975DECDDC22E01637EA102B (robotselect_t0B0500EFF7DCB8EDFEBC7A307728C8AB90E53BB9 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Int32 robotselect::CompareLastWriteTime(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t robotselect_CompareLastWriteTime_mA9D4D5E15BB885021943C2801DCF8E2379630FD4 (String_t* ___fileX0, String_t* ___fileY1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return DateTime.Compare(File.GetLastWriteTime(fileX), File.GetLastWriteTime(fileY));
		String_t* L_0 = ___fileX0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1;
		L_1 = File_GetLastWriteTime_m7D296576EA8963D3044B663B4A6095D58C6CF9C5(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___fileY1;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3;
		L_3 = File_GetLastWriteTime_m7D296576EA8963D3044B663B4A6095D58C6CF9C5(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = DateTime_Compare_m1A3C6A911C83ED8490F5F39EE18F78979002063A(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void robotselect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void robotselect__ctor_m1A3EAF1B778A886638295CD5AC97583C97AE8E2F (robotselect_t0B0500EFF7DCB8EDFEBC7A307728C8AB90E53BB9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void robottable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void robottable_Start_m957E96F87C6A4228C27BFC46A458503E3C626B75 (robottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void robottable::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void robottable_Update_m9ED4843F54A3B79CF400F38725BB9D53CCFAD69C (robottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// bool lighton = Mathf.Abs(Camera.main.transform.position.y - transform.position.y) < 4 && Mathf.Abs(Camera.main.transform.position.x - transform.position.x) < 4;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		float L_7;
		L_7 = fabsf(((float)il2cpp_codegen_subtract((float)L_3, (float)L_6)));
		if ((!(((float)L_7) < ((float)(4.0f)))))
		{
			goto IL_0064;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8;
		L_8 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_x_2();
		float L_15;
		L_15 = fabsf(((float)il2cpp_codegen_subtract((float)L_11, (float)L_14)));
		G_B3_0 = ((((float)L_15) < ((float)(4.0f)))? 1 : 0);
		goto IL_0065;
	}

IL_0064:
	{
		G_B3_0 = 0;
	}

IL_0065:
	{
		V_0 = (bool)G_B3_0;
		// spotlight.SetActive(lighton);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_spotlight_4();
		bool L_17 = V_0;
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, L_17, /*hidden argument*/NULL);
		// if (lighton)
		bool L_18 = V_0;
		if (!L_18)
		{
			goto IL_0095;
		}
	}
	{
		// transform.Rotate(0, 0, 15 * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_20;
		L_20 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_19, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)(15.0f), (float)L_20)), /*hidden argument*/NULL);
	}

IL_0095:
	{
		// }
		return;
	}
}
// System.Void robottable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void robottable__ctor_mAEE97B7449C078D0A4931650D224FF37E83C76B9 (robottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void save::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void save_Start_m13C7D9934BFAC85492A0E02053CE6FEDCE6FF691 (save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void save::allload(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void save_allload_mAC22A25C888E1C043512C2824951A1B14E20C982 (save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * __this, String_t* ___allloadtext0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22BA8A117D106201EAAC6139A717D4FC4D9DEC5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF5E0B07E0212F7EE452093BD06D97584B339C62);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		// var allload = allloadtext.Split('\n');
		String_t* L_0 = ___allloadtext0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// string type = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int count = 0; count < allload.Length; count++)
		V_2 = 0;
		goto IL_0073;
	}

IL_001c:
	{
		// string load = allload[count];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		// if (load != "" && load[0] == ':')
		String_t* L_8 = V_3;
		bool L_9;
		L_9 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_10 = V_3;
		NullCheck(L_10);
		Il2CppChar L_11;
		L_11 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_10, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_003c;
		}
	}
	{
		// type = load;
		String_t* L_12 = V_3;
		V_1 = L_12;
		// continue;
		goto IL_006f;
	}

IL_003c:
	{
		// if (type.Trim() == ":robot")
		String_t* L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteralEF5E0B07E0212F7EE452093BD06D97584B339C62, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0056;
		}
	}
	{
		// robotload(load);
		String_t* L_16 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = save_robotload_mBB589D6AF96D564B84D5988DA1C90CBC6B47EC68(__this, L_16, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// if (type.Trim() == ":program")
		String_t* L_18 = V_1;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_19, _stringLiteral22BA8A117D106201EAAC6139A717D4FC4D9DEC5A, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_006f;
		}
	}
	{
		// programloadstart(load);
		String_t* L_21 = V_3;
		save_programloadstart_m8017B0703C2EBFE21CB8E2E98CD12B97D57E34BF(__this, L_21, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// for (int count = 0; count < allload.Length; count++)
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0073:
	{
		// for (int count = 0; count < allload.Length; count++)
		int32_t L_23 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void save::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void save_Update_m87DD50F3CE528B2AC1C17572986B188154981604 (save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(KeyCode.Z))//allsave
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)122), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void save::savetofile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void save_savetofile_mD281D88D767CAD8AD829653751EEE4EF98EDBF22 (save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12163AB909551A0447E9B024DE557464EB0FE2F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral448E201B3332EF539748ECA7BACE5ED9C8358814);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral699DE12DC3094B06A5098E77FB1CDD72975B76A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA901806FDD83FD3A949A67529719D34FC36A3F95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3B9864A8EB7960F317069B1506F178F125AE2BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string savedatatext = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// savedatatext += ":robot\n" + savestart();
		String_t* L_0 = V_0;
		String_t* L_1;
		L_1 = save_savestart_m6C94D16DCA72C8B5CB22DEE4696C6E8FF1937EE7(__this, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_0, _stringLiteralA901806FDD83FD3A949A67529719D34FC36A3F95, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// savedatatext += ":program\n" + programsavestart();
		String_t* L_3 = V_0;
		String_t* L_4;
		L_4 = save_programsavestart_m7380CD7AE1A10AC7335C1DD257E5FC5439CDB520(__this, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_3, _stringLiteral12163AB909551A0447E9B024DE557464EB0FE2F0, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// GUIUtility.systemCopyBuffer = savedatatext;
		String_t* L_6 = V_0;
		GUIUtility_set_systemCopyBuffer_m1C5EAC38441C94C430AA13DF9942E1786CFCAC95(L_6, /*hidden argument*/NULL);
		// string path = Application.persistentDataPath + "/" + filename + ".rbo";
		String_t* L_7;
		L_7 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_8 = __this->get_filename_4();
		String_t* L_9;
		L_9 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_7, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_8, _stringLiteral448E201B3332EF539748ECA7BACE5ED9C8358814, /*hidden argument*/NULL);
		// File.WriteAllText(path, savedatatext);
		String_t* L_10 = L_9;
		String_t* L_11 = V_0;
		File_WriteAllText_mA0528ED8C0C9B94864772B9036FC4B206682EE9C(L_10, L_11, /*hidden argument*/NULL);
		// print(path + "?" + savedatatext + "?????");
		String_t* L_12 = V_0;
		String_t* L_13;
		L_13 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_10, _stringLiteral699DE12DC3094B06A5098E77FB1CDD72975B76A2, L_12, _stringLiteralC3B9864A8EB7960F317069B1506F178F125AE2BF, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void save::conections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void save_conections_m23F1361AB9D86E1D3B251E3469F8EC59B98ECBDA (save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AA97B5F2590892D57E0B9315B82C8BBC431958E);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var block in GameObject.FindGameObjectsWithTag("programblock"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral6AA97B5F2590892D57E0B9315B82C8BBC431958E, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0020;
	}

IL_000f:
	{
		// foreach (var block in GameObject.FindGameObjectsWithTag("programblock"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// block.GetComponent<programblock>().conection();
		NullCheck(L_4);
		programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * L_5;
		L_5 = GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8(L_4, /*hidden argument*/GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		NullCheck(L_5);
		programblock_conection_mABF0B9D5F8F3058689AD1413CBE5023756427567(L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0020:
	{
		// foreach (var block in GameObject.FindGameObjectsWithTag("programblock"))
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void save::programloadstart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void save_programloadstart_m8017B0703C2EBFE21CB8E2E98CD12B97D57E34BF (save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * __this, String_t* ___block0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_m88986FA73F2B6D6D5B41BEC8A6D02DA3C89E7E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mEC132E230E8EE882BFFCEF116997ADFBC3BFC1C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_Tisprogramblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63_m14C686217C4CE7A5620A9BE68E36A6629B76F4F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC591B96B12C5406D5295E31F5FDC9634D6725A4);
		s_Il2CppMethodInitialized = true;
	}
	programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63 * V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * V_8 = NULL;
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * V_9 = NULL;
	{
		// programblockproperty programblockproperty = JsonUtility.FromJson<programblockproperty>(block);
		String_t* L_0 = ___block0;
		programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63 * L_1;
		L_1 = JsonUtility_FromJson_Tisprogramblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63_m14C686217C4CE7A5620A9BE68E36A6629B76F4F5(L_0, /*hidden argument*/JsonUtility_FromJson_Tisprogramblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63_m14C686217C4CE7A5620A9BE68E36A6629B76F4F5_RuntimeMethod_var);
		V_0 = L_1;
		// GameObject programblock = (GameObject)Resources.Load(programblockproperty.name);
		programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_name_2();
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_4;
		L_4 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(L_3, /*hidden argument*/NULL);
		V_1 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)CastclassSealed((RuntimeObject*)L_4, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var));
		// string name = programblock.name;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		// programblock = Instantiate(programblock, new Vector3(0, 0, 0), Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_7, L_8, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		V_1 = L_10;
		// programblock.name = name;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_1;
		String_t* L_12 = V_2;
		NullCheck(L_11);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_11, L_12, /*hidden argument*/NULL);
		// programblock.transform.position = programblockproperty.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_1;
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63 * L_15 = V_0;
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = L_15->get_position_1();
		NullCheck(L_14);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_14, L_16, /*hidden argument*/NULL);
		// int fieldcount = 0;
		V_3 = 0;
		// for (int i = 0; i < programblock.transform.childCount; i++)
		V_4 = 0;
		goto IL_0149;
	}

IL_0061:
	{
		// if (programblock.transform.GetChild(i).name == "UI")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_1;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_4;
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_20, /*hidden argument*/NULL);
		bool L_22;
		L_22 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_21, _stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0143;
		}
	}
	{
		// var UI = programblock.transform.GetChild(i);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = V_1;
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		int32_t L_25 = V_4;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_24, L_25, /*hidden argument*/NULL);
		V_5 = L_26;
		// for (int j = 0; j < UI.transform.childCount; j++)
		V_6 = 0;
		goto IL_0130;
	}

IL_0099:
	{
		// if (UI.transform.transform.GetChild(j).tag == "programUI")
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = V_5;
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_28, /*hidden argument*/NULL);
		int32_t L_30 = V_6;
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_31, /*hidden argument*/NULL);
		bool L_33;
		L_33 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_32, _stringLiteralDC591B96B12C5406D5295E31F5FDC9634D6725A4, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_012a;
		}
	}
	{
		// var field = programblockproperty.inputs[fieldcount];
		programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63 * L_34 = V_0;
		NullCheck(L_34);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_34->get_inputs_3();
		int32_t L_36 = V_3;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		String_t* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_7 = L_38;
		// var inputfield = UI.transform.GetChild(j).gameObject.GetComponent<InputField>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39 = V_5;
		NullCheck(L_39);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_39, /*hidden argument*/NULL);
		int32_t L_41 = V_6;
		NullCheck(L_40);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_40, L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_44;
		L_44 = GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mEC132E230E8EE882BFFCEF116997ADFBC3BFC1C8(L_43, /*hidden argument*/GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mEC132E230E8EE882BFFCEF116997ADFBC3BFC1C8_RuntimeMethod_var);
		V_8 = L_44;
		// if (inputfield != null)
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_45 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_45, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_00f4;
		}
	}
	{
		// inputfield.text = field;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_47 = V_8;
		String_t* L_48 = V_7;
		NullCheck(L_47);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_47, L_48, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		// var dropdown = UI.transform.GetChild(j).gameObject.GetComponent<Dropdown>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49 = V_5;
		NullCheck(L_49);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_49, /*hidden argument*/NULL);
		int32_t L_51 = V_6;
		NullCheck(L_50);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_50, L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53;
		L_53 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_54;
		L_54 = GameObject_GetComponent_TisDropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_m88986FA73F2B6D6D5B41BEC8A6D02DA3C89E7E11(L_53, /*hidden argument*/GameObject_GetComponent_TisDropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_m88986FA73F2B6D6D5B41BEC8A6D02DA3C89E7E11_RuntimeMethod_var);
		V_9 = L_54;
		// if (dropdown != null)
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_55 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_55, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0126;
		}
	}
	{
		// dropdown.value = int.Parse(field);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_57 = V_9;
		String_t* L_58 = V_7;
		int32_t L_59;
		L_59 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_58, /*hidden argument*/NULL);
		NullCheck(L_57);
		Dropdown_set_value_mE4418D205D53F8A3AD23B957D1A8CD71489CB3B9(L_57, L_59, /*hidden argument*/NULL);
	}

IL_0126:
	{
		// fieldcount++;
		int32_t L_60 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_012a:
	{
		// for (int j = 0; j < UI.transform.childCount; j++)
		int32_t L_61 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_0130:
	{
		// for (int j = 0; j < UI.transform.childCount; j++)
		int32_t L_62 = V_6;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63 = V_5;
		NullCheck(L_63);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64;
		L_64 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_63, /*hidden argument*/NULL);
		NullCheck(L_64);
		int32_t L_65;
		L_65 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_64, /*hidden argument*/NULL);
		if ((((int32_t)L_62) < ((int32_t)L_65)))
		{
			goto IL_0099;
		}
	}

IL_0143:
	{
		// for (int i = 0; i < programblock.transform.childCount; i++)
		int32_t L_66 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_0149:
	{
		// for (int i = 0; i < programblock.transform.childCount; i++)
		int32_t L_67 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_68 = V_1;
		NullCheck(L_68);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_69;
		L_69 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_68, /*hidden argument*/NULL);
		NullCheck(L_69);
		int32_t L_70;
		L_70 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_69, /*hidden argument*/NULL);
		if ((((int32_t)L_67) < ((int32_t)L_70)))
		{
			goto IL_0061;
		}
	}
	{
		// }
		return;
	}
}
// System.String save::programsavestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* save_programsavestart_m7380CD7AE1A10AC7335C1DD257E5FC5439CDB520 (save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_m88986FA73F2B6D6D5B41BEC8A6D02DA3C89E7E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mEC132E230E8EE882BFFCEF116997ADFBC3BFC1C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AA97B5F2590892D57E0B9315B82C8BBC431958E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63 * V_4 = NULL;
	String_t* V_5 = NULL;
	bool V_6 = false;
	String_t* V_7 = NULL;
	int32_t V_8 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_9 = NULL;
	int32_t V_10 = 0;
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * V_11 = NULL;
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * V_12 = NULL;
	String_t* V_13 = NULL;
	String_t* V_14 = NULL;
	int32_t V_15 = 0;
	{
		// string savedata = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (var block in GameObject.FindGameObjectsWithTag("programblock"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral6AA97B5F2590892D57E0B9315B82C8BBC431958E, /*hidden argument*/NULL);
		V_1 = L_0;
		V_2 = 0;
		goto IL_01aa;
	}

IL_0018:
	{
		// foreach (var block in GameObject.FindGameObjectsWithTag("programblock"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		// programblockproperty property = new programblockproperty();
		programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63 * L_5 = (programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63 *)il2cpp_codegen_object_new(programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63_il2cpp_TypeInfo_var);
		programblockproperty__ctor_mD3942DC5A96EF0D29F352583D5EFB18A7068629D(L_5, /*hidden argument*/NULL);
		V_4 = L_5;
		// property.blocktype = block.GetComponent<programblock>().blocktype;
		programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63 * L_6 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_3;
		NullCheck(L_7);
		programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * L_8;
		L_8 = GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8(L_7, /*hidden argument*/GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_9 = L_8->get_blocktype_8();
		NullCheck(L_6);
		L_6->set_blocktype_0(L_9);
		// property.position = block.transform.position;
		programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63 * L_10 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_3;
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_position_1(L_13);
		// property.name = block.name;
		programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63 * L_14 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_3;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->set_name_2(L_16);
		// string UItexts = "";
		V_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// bool first = true;
		V_6 = (bool)1;
		// for (int i = 0; i < block.transform.childCount; i++)
		V_8 = 0;
		goto IL_0164;
	}

IL_0066:
	{
		// if (block.transform.GetChild(i).name == "UI")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_3;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_8;
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_20, /*hidden argument*/NULL);
		bool L_22;
		L_22 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_21, _stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_015e;
		}
	}
	{
		// var UI = block.transform.GetChild(i);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = V_3;
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		int32_t L_25 = V_8;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_24, L_25, /*hidden argument*/NULL);
		V_9 = L_26;
		// for (int j = 0; j < UI.transform.childCount; j++)
		V_10 = 0;
		goto IL_014b;
	}

IL_009e:
	{
		// var inputfield = UI.transform.GetChild(j).gameObject.GetComponent<InputField>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = V_9;
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_10;
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_28, L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_32;
		L_32 = GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mEC132E230E8EE882BFFCEF116997ADFBC3BFC1C8(L_31, /*hidden argument*/GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mEC132E230E8EE882BFFCEF116997ADFBC3BFC1C8_RuntimeMethod_var);
		V_11 = L_32;
		// if (inputfield != null)
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_33 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_33, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00ed;
		}
	}
	{
		// string UItext = inputfield.text;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_35 = V_11;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_35, /*hidden argument*/NULL);
		V_13 = L_36;
		// if (first)
		bool L_37 = V_6;
		if (!L_37)
		{
			goto IL_00d4;
		}
	}
	{
		// first = false;
		V_6 = (bool)0;
		// }
		goto IL_00e2;
	}

IL_00d4:
	{
		// UItexts += ",";
		String_t* L_38 = V_5;
		String_t* L_39;
		L_39 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_38, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, /*hidden argument*/NULL);
		V_5 = L_39;
	}

IL_00e2:
	{
		// UItexts += UItext;
		String_t* L_40 = V_5;
		String_t* L_41 = V_13;
		String_t* L_42;
		L_42 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_40, L_41, /*hidden argument*/NULL);
		V_5 = L_42;
	}

IL_00ed:
	{
		// var dropdown = UI.transform.GetChild(j).gameObject.GetComponent<Dropdown>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43 = V_9;
		NullCheck(L_43);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_43, /*hidden argument*/NULL);
		int32_t L_45 = V_10;
		NullCheck(L_44);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_44, L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47;
		L_47 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_48;
		L_48 = GameObject_GetComponent_TisDropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_m88986FA73F2B6D6D5B41BEC8A6D02DA3C89E7E11(L_47, /*hidden argument*/GameObject_GetComponent_TisDropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_m88986FA73F2B6D6D5B41BEC8A6D02DA3C89E7E11_RuntimeMethod_var);
		V_12 = L_48;
		// if (dropdown != null)
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_49 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_49, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0145;
		}
	}
	{
		// string UItext = dropdown.value.ToString();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_51 = V_12;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline(L_51, /*hidden argument*/NULL);
		V_15 = L_52;
		String_t* L_53;
		L_53 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_15), /*hidden argument*/NULL);
		V_14 = L_53;
		// if (first)
		bool L_54 = V_6;
		if (!L_54)
		{
			goto IL_012c;
		}
	}
	{
		// first = false;
		V_6 = (bool)0;
		// }
		goto IL_013a;
	}

IL_012c:
	{
		// UItexts += ",";
		String_t* L_55 = V_5;
		String_t* L_56;
		L_56 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_55, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, /*hidden argument*/NULL);
		V_5 = L_56;
	}

IL_013a:
	{
		// UItexts += UItext;
		String_t* L_57 = V_5;
		String_t* L_58 = V_14;
		String_t* L_59;
		L_59 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_57, L_58, /*hidden argument*/NULL);
		V_5 = L_59;
	}

IL_0145:
	{
		// for (int j = 0; j < UI.transform.childCount; j++)
		int32_t L_60 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_014b:
	{
		// for (int j = 0; j < UI.transform.childCount; j++)
		int32_t L_61 = V_10;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62 = V_9;
		NullCheck(L_62);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_62, /*hidden argument*/NULL);
		NullCheck(L_63);
		int32_t L_64;
		L_64 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_63, /*hidden argument*/NULL);
		if ((((int32_t)L_61) < ((int32_t)L_64)))
		{
			goto IL_009e;
		}
	}

IL_015e:
	{
		// for (int i = 0; i < block.transform.childCount; i++)
		int32_t L_65 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
	}

IL_0164:
	{
		// for (int i = 0; i < block.transform.childCount; i++)
		int32_t L_66 = V_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67 = V_3;
		NullCheck(L_67);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_68;
		L_68 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_67, /*hidden argument*/NULL);
		NullCheck(L_68);
		int32_t L_69;
		L_69 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_68, /*hidden argument*/NULL);
		if ((((int32_t)L_66) < ((int32_t)L_69)))
		{
			goto IL_0066;
		}
	}
	{
		// property.inputs = UItexts.Split(',');
		programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63 * L_70 = V_4;
		String_t* L_71 = V_5;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_72 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_73 = L_72;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_71);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_74;
		L_74 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_71, L_73, /*hidden argument*/NULL);
		NullCheck(L_70);
		L_70->set_inputs_3(L_74);
		// string jsonstr = JsonUtility.ToJson(property);
		programblockproperty_tED9138FE25BC0740BE0646D1A77BE615C6F3AE63 * L_75 = V_4;
		String_t* L_76;
		L_76 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_75, /*hidden argument*/NULL);
		V_7 = L_76;
		// savedata += jsonstr + "\n";
		String_t* L_77 = V_0;
		String_t* L_78 = V_7;
		String_t* L_79;
		L_79 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_77, L_78, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
		V_0 = L_79;
		int32_t L_80 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1));
	}

IL_01aa:
	{
		// foreach (var block in GameObject.FindGameObjectsWithTag("programblock"))
		int32_t L_81 = V_2;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_82 = V_1;
		NullCheck(L_82);
		if ((((int32_t)L_81) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_82)->max_length))))))
		{
			goto IL_0018;
		}
	}
	{
		// return savedata;
		String_t* L_83 = V_0;
		return L_83;
	}
}
// System.String save::savestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* save_savestart_m6C94D16DCA72C8B5CB22DEE4696C6E8FF1937EE7 (save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisrobotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9_m19DEDA9E21A3DDA7EBA1A60326933869D30624BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF29C60C5C9F5C4D8E2833F276FA6D79B12CE5B51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1 * V_4 = NULL;
	robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * V_5 = NULL;
	String_t* V_6 = NULL;
	{
		// string savedata = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (GameObject block in GameObject.FindGameObjectsWithTag("robotblock"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralF29C60C5C9F5C4D8E2833F276FA6D79B12CE5B51, /*hidden argument*/NULL);
		V_1 = L_0;
		V_2 = 0;
		goto IL_009e;
	}

IL_0018:
	{
		// foreach (GameObject block in GameObject.FindGameObjectsWithTag("robotblock"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		// robotblockdata robotblockdata = new robotblockdata();
		robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1 * L_5 = (robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1 *)il2cpp_codegen_object_new(robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1_il2cpp_TypeInfo_var);
		robotblockdata__ctor_m098D0EEC911A25C24383D4EB9298ACFA0F6E8879(L_5, /*hidden argument*/NULL);
		V_4 = L_5;
		// robotblockdata.blocktype = block.name;
		robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1 * L_6 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_3;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_blocktype_0(L_8);
		// robotblockdata.position = block.transform.localPosition;
		robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1 * L_9 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_3;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set_position_1(L_12);
		// robotblockdata.angle = block.transform.localRotation;
		robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1 * L_13 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_3;
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		L_13->set_angle_2(L_16);
		// robotBlock robotBlock = block.GetComponent<robotBlock>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_3;
		NullCheck(L_17);
		robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * L_18;
		L_18 = GameObject_GetComponent_TisrobotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9_m19DEDA9E21A3DDA7EBA1A60326933869D30624BD(L_17, /*hidden argument*/GameObject_GetComponent_TisrobotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9_m19DEDA9E21A3DDA7EBA1A60326933869D30624BD_RuntimeMethod_var);
		V_5 = L_18;
		// if (robotBlock == null)
		robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * L_19 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_19, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0074;
		}
	}
	{
		// robotblockdata.blockdata = "";
		robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1 * L_21 = V_4;
		NullCheck(L_21);
		L_21->set_blockdata_3(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// }
		goto IL_0082;
	}

IL_0074:
	{
		// robotblockdata.blockdata = robotBlock.dicTotext();
		robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1 * L_22 = V_4;
		robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * L_23 = V_5;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = robotBlock_dicTotext_m1249DF3E0B40F687AFEC0168CD2A27DE97C71982(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		L_22->set_blockdata_3(L_24);
	}

IL_0082:
	{
		// string savetext = JsonUtility.ToJson(robotblockdata, false);
		robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1 * L_25 = V_4;
		String_t* L_26;
		L_26 = JsonUtility_ToJson_m624247F6B1FDBD1B02C133B4878E4F3C8CEA30DA(L_25, (bool)0, /*hidden argument*/NULL);
		V_6 = L_26;
		// savedata += savetext + "\n";
		String_t* L_27 = V_0;
		String_t* L_28 = V_6;
		String_t* L_29;
		L_29 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_27, L_28, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
		V_0 = L_29;
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_009e:
	{
		// foreach (GameObject block in GameObject.FindGameObjectsWithTag("robotblock"))
		int32_t L_31 = V_2;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_32 = V_1;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_0018;
		}
	}
	{
		// return savedata;
		String_t* L_33 = V_0;
		return L_33;
	}
}
// System.Void save::loadstart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void save_loadstart_m09F578A2FDC1D70AC186BE78CB8BD8EC3CF26457 (save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * __this, String_t* ___loadtext0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// string[] blocks = loadtext.Split('\n');
		String_t* L_0 = ___loadtext0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_0, L_2, /*hidden argument*/NULL);
		// foreach (string block in blocks)
		V_0 = L_3;
		V_1 = 0;
		goto IL_0026;
	}

IL_0016:
	{
		// foreach (string block in blocks)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		// robotload(block);
		String_t* L_8 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = save_robotload_mBB589D6AF96D564B84D5988DA1C90CBC6B47EC68(__this, L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0026:
	{
		// foreach (string block in blocks)
		int32_t L_11 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject save::robotload(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * save_robotload_mBB589D6AF96D564B84D5988DA1C90CBC6B47EC68 (save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * __this, String_t* ___block0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisrobotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9_m19DEDA9E21A3DDA7EBA1A60326933869D30624BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_Tisrobotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1_m68BF27A9A0D16E29E946F12086E8B21C108C53B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A3ADB9136576319678DA759106D93A1CAB3D326);
		s_Il2CppMethodInitialized = true;
	}
	robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1 * V_0 = NULL;
	robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B2_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B1_0 = NULL;
	{
		// robotblockdata robotblockdata = JsonUtility.FromJson<robotblockdata>(block);
		String_t* L_0 = ___block0;
		robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1 * L_1;
		L_1 = JsonUtility_FromJson_Tisrobotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1_m68BF27A9A0D16E29E946F12086E8B21C108C53B9(L_0, /*hidden argument*/JsonUtility_FromJson_Tisrobotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1_m68BF27A9A0D16E29E946F12086E8B21C108C53B9_RuntimeMethod_var);
		V_0 = L_1;
		// GameObject prefab = (GameObject)Resources.Load("blocks/" + robotblockdata.blocktype);
		robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_blocktype_0();
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0A3ADB9136576319678DA759106D93A1CAB3D326, L_3, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_5;
		L_5 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(L_4, /*hidden argument*/NULL);
		// prefab = Instantiate(prefab, robotblockdata.position, robotblockdata.angle);
		robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1 * L_6 = V_0;
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = L_6->get_position_1();
		robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1 * L_8 = V_0;
		NullCheck(L_8);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = L_8->get_angle_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)CastclassSealed((RuntimeObject*)L_5, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)), L_7, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// prefab.name = robotblockdata.blocktype;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10;
		robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = L_12->get_blocktype_0();
		NullCheck(L_11);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_11, L_13, /*hidden argument*/NULL);
		// robotBlock robotBlock = prefab.GetComponent<robotBlock>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = L_11;
		NullCheck(L_14);
		robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * L_15;
		L_15 = GameObject_GetComponent_TisrobotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9_m19DEDA9E21A3DDA7EBA1A60326933869D30624BD(L_14, /*hidden argument*/GameObject_GetComponent_TisrobotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9_m19DEDA9E21A3DDA7EBA1A60326933869D30624BD_RuntimeMethod_var);
		V_1 = L_15;
		// if (robotBlock != null)
		robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * L_16 = V_1;
		bool L_17;
		L_17 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_16, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B1_0 = L_14;
		if (!L_17)
		{
			G_B2_0 = L_14;
			goto IL_0066;
		}
	}
	{
		// robotBlock.textToDic(robotblockdata.blockdata);
		robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * L_18 = V_1;
		robotblockdata_t6C2AA0FC5BE58BB918D6792D71A4E00AB3DD58D1 * L_19 = V_0;
		NullCheck(L_19);
		String_t* L_20 = L_19->get_blockdata_3();
		NullCheck(L_18);
		robotBlock_textToDic_m51C4B6FFA896AFE30187D811AD786753AEC39A6F(L_18, L_20, /*hidden argument*/NULL);
		// robotBlock.blocktext = robotBlock.dicTotext();
		robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * L_21 = V_1;
		robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * L_22 = V_1;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = robotBlock_dicTotext_m1249DF3E0B40F687AFEC0168CD2A27DE97C71982(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->set_blocktext_5(L_23);
		G_B2_0 = G_B1_0;
	}

IL_0066:
	{
		// return prefab;
		return G_B2_0;
	}
}
// System.Void save::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void save__ctor_mD18861C66A41975D7170A46FA4B46046DE7F7B09 (save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void servo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void servo_Start_m132860A7EC3B1B0A964CA417DD79B9EBC8996135 (servo_tCF313257B5995D81652CB49BC8B6E39666E9AD98 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisrobotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9_mB9323EE8D9058759682D53247CB54075C995D6F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C_mD691563E795E39668B6EFEC64CF8C5ED0C1989DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BD3AEA3F9B139CA62B514916E57CA9F418AFEE3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// robotBlock = GetComponent<robotBlock>();
		robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * L_0;
		L_0 = Component_GetComponent_TisrobotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9_mB9323EE8D9058759682D53247CB54075C995D6F4(__this, /*hidden argument*/Component_GetComponent_TisrobotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9_mB9323EE8D9058759682D53247CB54075C995D6F4_RuntimeMethod_var);
		__this->set_robotBlock_4(L_0);
		// hinge = transform.Find("conectparts").gameObject.GetComponent<HingeJoint>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_1, _stringLiteral8BD3AEA3F9B139CA62B514916E57CA9F418AFEE3, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		HingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C * L_4;
		L_4 = GameObject_GetComponent_TisHingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C_mD691563E795E39668B6EFEC64CF8C5ED0C1989DB(L_3, /*hidden argument*/GameObject_GetComponent_TisHingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C_mD691563E795E39668B6EFEC64CF8C5ED0C1989DB_RuntimeMethod_var);
		__this->set_hinge_5(L_4);
		// }
		return;
	}
}
// System.Void servo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void servo_Update_m3A37A57EE5BF9F435B6A9E91F147E727DDBF03B8 (servo_tCF313257B5995D81652CB49BC8B6E39666E9AD98 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50A8863477B395531AE591FC12CCA3FC439B5955);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	JointMotor_t17429B3F7BA8727FF15A83BFBB05744BDB0BD634  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float target = float.Parse(robotBlock.blockdata["angle"]);
		robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * L_0 = __this->get_robotBlock_4();
		NullCheck(L_0);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_1 = L_0->get_blockdata_4();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B(L_1, _stringLiteralFC341A1966AF28A9A7A26EDFB78ABBF7DE4D0E1F, /*hidden argument*/Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B_RuntimeMethod_var);
		float L_3;
		L_3 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (robotBlock.blockdata["reverse"] == "1")
		robotBlock_t550C74342CDEC8FB45777D04C5B382BDCDD3ECB9 * L_4 = __this->get_robotBlock_4();
		NullCheck(L_4);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_5 = L_4->get_blockdata_4();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B(L_5, _stringLiteral50A8863477B395531AE591FC12CCA3FC439B5955, /*hidden argument*/Dictionary_2_get_Item_mC446DE0A4ADE6CCB3DEBE59BA4BBF4F64040305B_RuntimeMethod_var);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		// target *= -1;
		float L_8 = V_0;
		V_0 = ((float)il2cpp_codegen_multiply((float)L_8, (float)(-1.0f)));
	}

IL_0044:
	{
		// inputangle += hinge.transform.localEulerAngles.z - lastinputangle;
		float L_9 = __this->get_inputangle_6();
		HingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C * L_10 = __this->get_hinge_5();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_z_4();
		float L_14 = __this->get_lastinputangle_7();
		__this->set_inputangle_6(((float)il2cpp_codegen_add((float)L_9, (float)((float)il2cpp_codegen_subtract((float)L_13, (float)L_14)))));
		// if (lastinputangle > 270 && hinge.transform.localEulerAngles.z < 90)
		float L_15 = __this->get_lastinputangle_7();
		if ((!(((float)L_15) > ((float)(270.0f)))))
		{
			goto IL_00a8;
		}
	}
	{
		HingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C * L_16 = __this->get_hinge_5();
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_z_4();
		if ((!(((float)L_19) < ((float)(90.0f)))))
		{
			goto IL_00a8;
		}
	}
	{
		// inputangle += 360;
		float L_20 = __this->get_inputangle_6();
		__this->set_inputangle_6(((float)il2cpp_codegen_add((float)L_20, (float)(360.0f))));
	}

IL_00a8:
	{
		// if (lastinputangle < 90 && hinge.transform.localEulerAngles.z > 270)
		float L_21 = __this->get_lastinputangle_7();
		if ((!(((float)L_21) < ((float)(90.0f)))))
		{
			goto IL_00e3;
		}
	}
	{
		HingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C * L_22 = __this->get_hinge_5();
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_z_4();
		if ((!(((float)L_25) > ((float)(270.0f)))))
		{
			goto IL_00e3;
		}
	}
	{
		// inputangle -= 360;
		float L_26 = __this->get_inputangle_6();
		__this->set_inputangle_6(((float)il2cpp_codegen_subtract((float)L_26, (float)(360.0f))));
	}

IL_00e3:
	{
		// JointMotor motor = hinge.motor;
		HingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C * L_27 = __this->get_hinge_5();
		NullCheck(L_27);
		JointMotor_t17429B3F7BA8727FF15A83BFBB05744BDB0BD634  L_28;
		L_28 = HingeJoint_get_motor_m2F2B1F958E52A1B5232EB8B9420168DE6BC1D0D8(L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		// motor.force = 3000;
		JointMotor_set_force_mFF32AA267316F398D5E5A818433947A161BD10CD((JointMotor_t17429B3F7BA8727FF15A83BFBB05744BDB0BD634 *)(&V_1), (3000.0f), /*hidden argument*/NULL);
		// motor.targetVelocity = Mathf.Clamp((target - inputangle) * 30, -500, 500);
		float L_29 = V_0;
		float L_30 = __this->get_inputangle_6();
		float L_31;
		L_31 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_29, (float)L_30)), (float)(30.0f))), (-500.0f), (500.0f), /*hidden argument*/NULL);
		JointMotor_set_targetVelocity_m130563294B62E818C17FC9446E5F62DD371297BE((JointMotor_t17429B3F7BA8727FF15A83BFBB05744BDB0BD634 *)(&V_1), L_31, /*hidden argument*/NULL);
		// lastinputangle = hinge.transform.localEulerAngles.z;
		HingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C * L_32 = __this->get_hinge_5();
		NullCheck(L_32);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_z_4();
		__this->set_lastinputangle_7(L_35);
		// motor.freeSpin = false;
		JointMotor_set_freeSpin_mC9B0F931BF0878FA3F99DB3EDEDA9C750ABA042E((JointMotor_t17429B3F7BA8727FF15A83BFBB05744BDB0BD634 *)(&V_1), (bool)0, /*hidden argument*/NULL);
		// hinge.motor = motor;
		HingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C * L_36 = __this->get_hinge_5();
		JointMotor_t17429B3F7BA8727FF15A83BFBB05744BDB0BD634  L_37 = V_1;
		NullCheck(L_36);
		HingeJoint_set_motor_m0E70B6FCAABAF81A6066DCDD2771E292B6FC50E8(L_36, L_37, /*hidden argument*/NULL);
		// hinge.useMotor = true;
		HingeJoint_t3D5CBCBF8CA6DDB94E9CFEE406492C6441D0479C * L_38 = __this->get_hinge_5();
		NullCheck(L_38);
		HingeJoint_set_useMotor_mB7B5ABF943F918EFB7A05B7870D6434144779DA3(L_38, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void servo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void servo__ctor_mF183ED1EB1A7BD3E629D98303A8B636021A1891A (servo_tCF313257B5995D81652CB49BC8B6E39666E9AD98 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void stageselect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageselect_Start_m5E450A4E0E9870B4FB3C55AAB9F99930DE33217A (stageselect_tE665A7E52F8D9EC33BAA55E5A382C965241E1811 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m901E6F3CDB43769BCA999C36538FE4ACA4AEB3A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral544D3EEC62A9634856AD5B296AC23A5284C8530C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6EC69BBD94B23C22148064344B02111815F29EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF82FAA612C2076227BCF36D5BEFA714C569F43EC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	String_t* V_2 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * V_3 = NULL;
	float V_4 = 0.0f;
	{
		// print(transform.childCount);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_0, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_3, /*hidden argument*/NULL);
		// for (int i = 0; i < transform.childCount; i++)
		V_0 = 0;
		goto IL_008b;
	}

IL_0019:
	{
		// GameObject misson = transform.GetChild(i).gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// string missonname = misson.name;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// if (missonname != "free")
		String_t* L_10 = V_2;
		bool L_11;
		L_11 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_10, _stringLiteralD6EC69BBD94B23C22148064344B02111815F29EF, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		// TextMesh iscleartext = misson.transform.GetChild(1).gameObject.GetComponent<TextMesh>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = V_1;
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_13, 1, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_16;
		L_16 = GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m901E6F3CDB43769BCA999C36538FE4ACA4AEB3A9(L_15, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m901E6F3CDB43769BCA999C36538FE4ACA4AEB3A9_RuntimeMethod_var);
		V_3 = L_16;
		// if (PlayerPrefs.HasKey(missonname))
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0087;
		}
	}
	{
		// iscleartext.text = "Highscore:" + PlayerPrefs.GetFloat(missonname).ToString("f1") + "s";
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_19 = V_3;
		String_t* L_20 = V_2;
		float L_21;
		L_21 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		String_t* L_22;
		L_22 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_4), _stringLiteral544D3EEC62A9634856AD5B296AC23A5284C8530C, /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralF82FAA612C2076227BCF36D5BEFA714C569F43EC, L_22, _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, /*hidden argument*/NULL);
		NullCheck(L_19);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_19, L_23, /*hidden argument*/NULL);
	}

IL_0087:
	{
		// for (int i = 0; i < transform.childCount; i++)
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_008b:
	{
		// for (int i = 0; i < transform.childCount; i++)
		int32_t L_25 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_26, /*hidden argument*/NULL);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_0019;
		}
	}
	{
		// }
		return;
	}
}
// System.Void stageselect::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageselect_Update_m0C5F7B1F0A3080EB1EB6683914C30F58DCAA7664 (stageselect_tE665A7E52F8D9EC33BAA55E5A382C965241E1811 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void stageselect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stageselect__ctor_mA340CD1DDBC5626DEB7D8DEF5FC6C75DCE03CA5F (stageselect_tE665A7E52F8D9EC33BAA55E5A382C965241E1811 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void startblock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void startblock_Start_mA920EA2CB3BAACA2B299E420522557788D2C5EDA (startblock_tBD5C23291F2047F5B1219E2A53154C671E3169DC * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void startblock::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void startblock_Update_m122BE6A7232F5B151DB993CBE10E8A1E56C5FABE (startblock_tBD5C23291F2047F5B1219E2A53154C671E3169DC * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void startblock::start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void startblock_start_mB3975E898459DFE7201DA97CF39808FA052D7C4E (startblock_tBD5C23291F2047F5B1219E2A53154C671E3169DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisexecution_tF7399C7FC9B17C371DDAD512080EF16F510535E1_mC83D9F629DC26E55359CB701968697DE16522990_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DC155D688A77AB1B52A37CA6889F23C99502CFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (execution != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_execution_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(execution);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_execution_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// execution = (GameObject)Instantiate(Resources.Load("execuiton"),
		//                                                         new Vector3(0.0f, 0.0f, 0.0f),
		//                                                         Quaternion.identity);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3;
		L_3 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral6DC155D688A77AB1B52A37CA6889F23C99502CFC, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_6;
		L_6 = Object_Instantiate_mADD3254CB5E6AB56FBB6964FE4B930F5187AB5AD(L_3, L_4, L_5, /*hidden argument*/NULL);
		__this->set_execution_4(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)CastclassSealed((RuntimeObject*)L_6, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)));
		// execution.GetComponent<execution>().executioning = this.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_execution_4();
		NullCheck(L_7);
		execution_tF7399C7FC9B17C371DDAD512080EF16F510535E1 * L_8;
		L_8 = GameObject_GetComponent_Tisexecution_tF7399C7FC9B17C371DDAD512080EF16F510535E1_mC83D9F629DC26E55359CB701968697DE16522990(L_7, /*hidden argument*/GameObject_GetComponent_Tisexecution_tF7399C7FC9B17C371DDAD512080EF16F510535E1_mC83D9F629DC26E55359CB701968697DE16522990_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->set_executioning_4(L_9);
		// }
		return;
	}
}
// System.Void startblock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void startblock__ctor_m6BB1478CC86D0D5986A1DC0922C3A6986C2E39C0 (startblock_tBD5C23291F2047F5B1219E2A53154C671E3169DC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void swich::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void swich_Start_m1AF0EA94CBEB8F2EE9AEFE77DECA2D5A89C87A1C (swich_tED3711F0A89E2185E7FE1E24493DF1DB96DF90FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m2437386FD2A3D00F29F9E6EA2DB01183C4C9C21C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// programblock = GetComponent<programblock>();
		programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * L_0;
		L_0 = Component_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m2437386FD2A3D00F29F9E6EA2DB01183C4C9C21C(__this, /*hidden argument*/Component_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m2437386FD2A3D00F29F9E6EA2DB01183C4C9C21C_RuntimeMethod_var);
		__this->set_programblock_4(L_0);
		// caseconection();
		swich_caseconection_mECDAC516599C9CD166A599739547EE70EC49316D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void swich::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void swich_Update_mD89F1F8E8DB563B16712B52AD3709F6E30F855DB (swich_tED3711F0A89E2185E7FE1E24493DF1DB96DF90FC * __this, const RuntimeMethod* method)
{
	{
		// setsize();
		swich_setsize_m514CA1AE92ECE826A67D8A96675C1CF09E073BDD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void swich::setsize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void swich_setsize_m514CA1AE92ECE826A67D8A96675C1CF09E073BDD (swich_tED3711F0A89E2185E7FE1E24493DF1DB96DF90FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tiswhileblock_t0BBCEC21FB1F2674F833F551D913738092D7143E_mF36C03117C1B745A456CCA5D1C830476B1653C85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	float V_4 = 0.0f;
	{
		// float caselengthmax = 0;
		V_0 = (0.0f);
		// float casewidemax = 0;
		V_1 = (0.0f);
		// cases = new GameObject[this.transform.childCount - 5];
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_0, /*hidden argument*/NULL);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)5)));
		__this->set_cases_9(L_2);
		// for (int i = 0; i < this.transform.childCount - 5; i++)
		V_2 = 0;
		goto IL_00a2;
	}

IL_0028:
	{
		// GameObject caseblock = transform.GetChild(i + 5).gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_4 = V_2;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_3, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)5)), /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		// cases[i] = caseblock;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_cases_9();
		int32_t L_8 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_9);
		// if (caseblock.transform.localPosition.z > casewidemax)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_3;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_z_4();
		float L_14 = V_1;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_0069;
		}
	}
	{
		// casewidemax = caseblock.transform.localPosition.z;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_3;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_z_4();
		V_1 = L_18;
	}

IL_0069:
	{
		// float endposx = caseblock.GetComponent<whileblock>().end.transform.position.x - this.transform.position.x;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = V_3;
		NullCheck(L_19);
		whileblock_t0BBCEC21FB1F2674F833F551D913738092D7143E * L_20;
		L_20 = GameObject_GetComponent_Tiswhileblock_t0BBCEC21FB1F2674F833F551D913738092D7143E_mF36C03117C1B745A456CCA5D1C830476B1653C85(L_19, /*hidden argument*/GameObject_GetComponent_Tiswhileblock_t0BBCEC21FB1F2674F833F551D913738092D7143E_mF36C03117C1B745A456CCA5D1C830476B1653C85_RuntimeMethod_var);
		NullCheck(L_20);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = L_20->get_end_5();
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_x_2();
		V_4 = ((float)il2cpp_codegen_subtract((float)L_24, (float)L_27));
		// if (endposx > caselengthmax)
		float L_28 = V_4;
		float L_29 = V_0;
		if ((!(((float)L_28) > ((float)L_29))))
		{
			goto IL_009e;
		}
	}
	{
		// caselengthmax = endposx;
		float L_30 = V_4;
		V_0 = L_30;
	}

IL_009e:
	{
		// for (int i = 0; i < this.transform.childCount - 5; i++)
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00a2:
	{
		// for (int i = 0; i < this.transform.childCount - 5; i++)
		int32_t L_32 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		int32_t L_34;
		L_34 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_33, /*hidden argument*/NULL);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)5)))))
		{
			goto IL_0028;
		}
	}
	{
		// length = caselengthmax + 1;
		float L_35 = V_0;
		__this->set_length_8(((float)il2cpp_codegen_add((float)L_35, (float)(1.0f))));
		// caseconect.localPosition = new Vector3(0, 0, casewidemax / 2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36 = __this->get_caseconect_7();
		float L_37 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_38), (0.0f), (0.0f), ((float)((float)L_37/(float)(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_36, L_38, /*hidden argument*/NULL);
		// caseconect.localScale = new Vector3(0.2f, 0.2f, casewidemax);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39 = __this->get_caseconect_7();
		float L_40 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_41), (0.200000003f), (0.200000003f), L_40, /*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_39, L_41, /*hidden argument*/NULL);
		// swichendconect.localPosition = new Vector3(length / 2, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42 = __this->get_swichendconect_6();
		float L_43 = __this->get_length_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_44), ((float)((float)L_43/(float)(2.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_42, L_44, /*hidden argument*/NULL);
		// swichendconect.localScale = new Vector3(length, 0.2f, 0.2f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45 = __this->get_swichendconect_6();
		float L_46 = __this->get_length_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_47), L_46, (0.200000003f), (0.200000003f), /*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_45, L_47, /*hidden argument*/NULL);
		// swichend.transform.localPosition = new Vector3(length, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = __this->get_swichend_5();
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_48, /*hidden argument*/NULL);
		float L_50 = __this->get_length_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_51), L_50, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_49, L_51, /*hidden argument*/NULL);
		// programblock.connectpos.x = length + 1.0f;
		programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * L_52 = __this->get_programblock_4();
		NullCheck(L_52);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_53 = L_52->get_address_of_connectpos_9();
		float L_54 = __this->get_length_8();
		L_53->set_x_2(((float)il2cpp_codegen_add((float)L_54, (float)(1.0f))));
		// swichendconect.localPosition = new Vector3(length / 2, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55 = __this->get_swichendconect_6();
		float L_56 = __this->get_length_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_57), ((float)((float)L_56/(float)(2.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_55);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_55, L_57, /*hidden argument*/NULL);
		// swichendconect.localScale = new Vector3(length, 0.2f, 0.2f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58 = __this->get_swichendconect_6();
		float L_59 = __this->get_length_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_60), L_59, (0.200000003f), (0.200000003f), /*hidden argument*/NULL);
		NullCheck(L_58);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_58, L_60, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void swich::caseconection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void swich_caseconection_mECDAC516599C9CD166A599739547EE70EC49316D (swich_tED3711F0A89E2185E7FE1E24493DF1DB96DF90FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69BCC20E4200B84702A429B76222FB5A9E9FE54B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AA97B5F2590892D57E0B9315B82C8BBC431958E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD03C3C7F3A363D2E45775B1A6E39D7D5E5BEA998);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	{
		// foreach (var block in GameObject.FindGameObjectsWithTag("programblock"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral6AA97B5F2590892D57E0B9315B82C8BBC431958E, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_011e;
	}

IL_0012:
	{
		// foreach (var block in GameObject.FindGameObjectsWithTag("programblock"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (block.GetComponent<programblock>().blocktype == "case")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_2;
		NullCheck(L_5);
		programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * L_6;
		L_6 = GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8(L_5, /*hidden argument*/GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		NullCheck(L_6);
		String_t* L_7 = L_6->get_blocktype_8();
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteralD03C3C7F3A363D2E45775B1A6E39D7D5E5BEA998, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_011a;
		}
	}
	{
		//                 if (Mathf.Abs(block.transform.position.x - 0.6f - this.transform.position.x) < 0.5f &&
		//                 Mathf.Abs(block.transform.position.y - this.transform.position.y) < 0.5f &&
		// block.transform.position.z > this.transform.position.z + 3
		//                 )
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_2;
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_x_2();
		float L_16;
		L_16 = fabsf(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_12, (float)(0.600000024f))), (float)L_15)));
		if ((!(((float)L_16) < ((float)(0.5f)))))
		{
			goto IL_011a;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_2;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_y_3();
		float L_24;
		L_24 = fabsf(((float)il2cpp_codegen_subtract((float)L_20, (float)L_23)));
		if ((!(((float)L_24) < ((float)(0.5f)))))
		{
			goto IL_011a;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = V_2;
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_z_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_z_4();
		if ((!(((float)L_28) > ((float)((float)il2cpp_codegen_add((float)L_31, (float)(3.0f)))))))
		{
			goto IL_011a;
		}
	}
	{
		// print("?????");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral69BCC20E4200B84702A429B76222FB5A9E9FE54B, /*hidden argument*/NULL);
		// block.transform.parent = this.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = V_2;
		NullCheck(L_32);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_32, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_33, L_34, /*hidden argument*/NULL);
		// block.GetComponent<programblock>().move = new Vector3(transform.position.x - block.transform.position.x + 0.6f, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = V_2;
		NullCheck(L_35);
		programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * L_36;
		L_36 = GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8(L_35, /*hidden argument*/GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_37, /*hidden argument*/NULL);
		float L_39 = L_38.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = V_2;
		NullCheck(L_40);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_41, /*hidden argument*/NULL);
		float L_43 = L_42.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_44), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_39, (float)L_43)), (float)(0.600000024f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_36);
		L_36->set_move_12(L_44);
	}

IL_011a:
	{
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_011e:
	{
		// foreach (var block in GameObject.FindGameObjectsWithTag("programblock"))
		int32_t L_46 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_47 = V_0;
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		// }
		return;
	}
}
// System.Void swich::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void swich__ctor_m849D50C327A56BA982F15874962BFFA02FBCB59E (swich_tED3711F0A89E2185E7FE1E24493DF1DB96DF90FC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void titlecamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void titlecamera_Start_m17AE5A150A544BD2DF14BD37399355391A552432 (titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral240F08581B82AB6DE76295951D7DE37005D967FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2C026B81D064382A99DEE6ABD5516938F8A482B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1C13775314E0A5E8811673F98C7124312AFE76A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6EC69BBD94B23C22148064344B02111815F29EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD91D91C69FEAF4ABF12EB08057DF8942A89BDD4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&titlecamera_GameSceneLoaded_mCC1336E024ACA85DEF6D3CD510B11649F9960E24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// SceneManager.sceneLoaded += GameSceneLoaded;
		UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * L_0 = (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *)il2cpp_codegen_object_new(UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0(L_0, __this, (intptr_t)((intptr_t)titlecamera_GameSceneLoaded_mCC1336E024ACA85DEF6D3CD510B11649F9960E24_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m54990A485E2E66739E31090BDC3A4C01EF7729BA(L_0, /*hidden argument*/NULL);
		// cleardx = 0;
		__this->set_cleardx_13((0.0f));
		// bool allclearflag = true;
		V_0 = (bool)1;
		// int stagecount = 0;
		V_1 = 0;
		// foreach (Transform stagesseach in stages)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_stages_12();
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_1, /*hidden argument*/NULL);
		V_2 = L_2;
	}

IL_002c:
	try
	{// begin try (depth: 1)
		{
			goto IL_00d9;
		}

IL_0031:
		{
			// foreach (Transform stagesseach in stages)
			RuntimeObject* L_3 = V_2;
			NullCheck(L_3);
			RuntimeObject * L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_3);
			V_3 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_4, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			// if (stagesseach.tag == "stages")
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = V_3;
			NullCheck(L_5);
			String_t* L_6;
			L_6 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_5, /*hidden argument*/NULL);
			bool L_7;
			L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteralD1C13775314E0A5E8811673F98C7124312AFE76A, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0053;
			}
		}

IL_004f:
		{
			// stagecount++;
			int32_t L_8 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		}

IL_0053:
		{
			// if (allclearflag)
			bool L_9 = V_0;
			if (!L_9)
			{
				goto IL_006c;
			}
		}

IL_0056:
		{
			// cleardx = stagesseach.transform.position.x;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = V_3;
			NullCheck(L_10);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
			L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
			L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
			float L_13 = L_12.get_x_2();
			__this->set_cleardx_13(L_13);
		}

IL_006c:
		{
			// print(stagesseach.name);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = V_3;
			NullCheck(L_14);
			String_t* L_15;
			L_15 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_14, /*hidden argument*/NULL);
			MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_15, /*hidden argument*/NULL);
			// if (stagesseach.name == "free" || stagesseach.tag != "stages")
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = V_3;
			NullCheck(L_16);
			String_t* L_17;
			L_17 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_16, /*hidden argument*/NULL);
			bool L_18;
			L_18 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_17, _stringLiteralD6EC69BBD94B23C22148064344B02111815F29EF, /*hidden argument*/NULL);
			if (L_18)
			{
				goto IL_00d9;
			}
		}

IL_0089:
		{
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = V_3;
			NullCheck(L_19);
			String_t* L_20;
			L_20 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_19, /*hidden argument*/NULL);
			bool L_21;
			L_21 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_20, _stringLiteralD1C13775314E0A5E8811673F98C7124312AFE76A, /*hidden argument*/NULL);
			if (L_21)
			{
				goto IL_00d9;
			}
		}

IL_009b:
		{
			// if (PlayerPrefs.HasKey(stagesseach.name))
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = V_3;
			NullCheck(L_22);
			String_t* L_23;
			L_23 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_22, /*hidden argument*/NULL);
			bool L_24;
			L_24 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(L_23, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_00c2;
			}
		}

IL_00a8:
		{
			// totaltime += PlayerPrefs.GetFloat(stagesseach.name);
			float L_25 = __this->get_totaltime_17();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = V_3;
			NullCheck(L_26);
			String_t* L_27;
			L_27 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_26, /*hidden argument*/NULL);
			float L_28;
			L_28 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(L_27, /*hidden argument*/NULL);
			__this->set_totaltime_17(((float)il2cpp_codegen_add((float)L_25, (float)L_28)));
			// }
			goto IL_00c4;
		}

IL_00c2:
		{
			// allclearflag = false;
			V_0 = (bool)0;
		}

IL_00c4:
		{
			// print("?????" + stagesseach.name);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = V_3;
			NullCheck(L_29);
			String_t* L_30;
			L_30 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_29, /*hidden argument*/NULL);
			String_t* L_31;
			L_31 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralC2C026B81D064382A99DEE6ABD5516938F8A482B, L_30, /*hidden argument*/NULL);
			MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_31, /*hidden argument*/NULL);
		}

IL_00d9:
		{
			// foreach (Transform stagesseach in stages)
			RuntimeObject* L_32 = V_2;
			NullCheck(L_32);
			bool L_33;
			L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_32);
			if (L_33)
			{
				goto IL_0031;
			}
		}

IL_00e4:
		{
			IL2CPP_LEAVE(0xFA, FINALLY_00e6);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e6;
	}

FINALLY_00e6:
	{// begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_2;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_4;
			if (!L_35)
			{
				goto IL_00f9;
			}
		}

IL_00f2:
		{
			RuntimeObject* L_36 = V_4;
			NullCheck(L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_36);
		}

IL_00f9:
		{
			IL2CPP_END_FINALLY(230)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(230)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xFA, IL_00fa)
	}

IL_00fa:
	{
		// print(cleardx + "?????");
		float* L_37 = __this->get_address_of_cleardx_13();
		String_t* L_38;
		L_38 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_37, /*hidden argument*/NULL);
		String_t* L_39;
		L_39 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_38, _stringLiteral240F08581B82AB6DE76295951D7DE37005D967FB, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_39, /*hidden argument*/NULL);
		// if (allclearflag)
		bool L_40 = V_0;
		if (!L_40)
		{
			goto IL_0138;
		}
	}
	{
		// print("?????????" + cleardx);
		float* L_41 = __this->get_address_of_cleardx_13();
		String_t* L_42;
		L_42 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_41, /*hidden argument*/NULL);
		String_t* L_43;
		L_43 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralD91D91C69FEAF4ABF12EB08057DF8942A89BDD4B, L_42, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_43, /*hidden argument*/NULL);
		// isallclear = true;
		__this->set_isallclear_15((bool)1);
	}

IL_0138:
	{
		// stagemaxselect = (stagecount - 1) * 5;
		int32_t L_44 = V_1;
		__this->set_stagemaxselect_14(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)1)), (int32_t)5)))));
		// if (isallclear)
		bool L_45 = __this->get_isallclear_15();
		if (!L_45)
		{
			goto IL_0169;
		}
	}
	{
		// stagemaxselect += 2 * 5;
		float L_46 = __this->get_stagemaxselect_14();
		__this->set_stagemaxselect_14(((float)il2cpp_codegen_add((float)L_46, (float)(10.0f))));
		// cleardx = 5;
		__this->set_cleardx_13((5.0f));
	}

IL_0169:
	{
		// }
		return;
	}
}
// System.Void titlecamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void titlecamera_Update_mEB0454A195818A4CB4E9ABDC5954F3A268327F5A (titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisrobottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D_m55187337BCC0A473298878E02385B88922D1257F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A02F08F5C8411189B43E90868A2C6136E3A9F14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76752ECA7E2DE9C273C6EA646CC7CF3F182B95AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BC1D0330CFCB704F750E1E7B16022F507C9360D);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Guid_t  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B7_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B15_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B14_0 = NULL;
	String_t* G_B16_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B51_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B50_0 = NULL;
	String_t* G_B52_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B62_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B61_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B63_0 = NULL;
	{
		// if (target == x && target_y == y)
		float L_0 = __this->get_target_6();
		float L_1 = __this->get_x_4();
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_028d;
		}
	}
	{
		float L_2 = __this->get_target_y_7();
		float L_3 = __this->get_y_5();
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_028d;
		}
	}
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_4;
		L_4 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)97), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00a3;
		}
	}
	{
		// target -= 5;
		float L_5 = __this->get_target_6();
		__this->set_target_6(((float)il2cpp_codegen_subtract((float)L_5, (float)(5.0f))));
		// if (target_y == 10 && (target > 0 && stages.transform.GetChild((int)(target / 5))?.gameObject.name == "allcleardoor"))
		float L_6 = __this->get_target_y_7();
		if ((!(((float)L_6) == ((float)(10.0f)))))
		{
			goto IL_00a3;
		}
	}
	{
		float L_7 = __this->get_target_6();
		if ((!(((float)L_7) > ((float)(0.0f)))))
		{
			goto IL_00a3;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_stages_12();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		float L_10 = __this->get_target_6();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_9, ((int32_t)((int32_t)((float)((float)L_10/(float)(5.0f))))), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = L_11;
		G_B6_0 = L_12;
		if (L_12)
		{
			G_B7_0 = L_12;
			goto IL_007b;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		goto IL_0085;
	}

IL_007b:
	{
		NullCheck(G_B7_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(G_B7_0, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_13, /*hidden argument*/NULL);
		G_B8_0 = L_14;
	}

IL_0085:
	{
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(G_B8_0, _stringLiteral0A02F08F5C8411189B43E90868A2C6136E3A9F14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00a3;
		}
	}
	{
		// target -= 5;
		float L_16 = __this->get_target_6();
		__this->set_target_6(((float)il2cpp_codegen_subtract((float)L_16, (float)(5.0f))));
	}

IL_00a3:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_17;
		L_17 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)100), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0125;
		}
	}
	{
		// target += 5;
		float L_18 = __this->get_target_6();
		__this->set_target_6(((float)il2cpp_codegen_add((float)L_18, (float)(5.0f))));
		// if (target_y == 10 && (target < stagemaxselect && stages.transform.GetChild((int)(target / 5))?.gameObject.name == "allcleardoor"))
		float L_19 = __this->get_target_y_7();
		if ((!(((float)L_19) == ((float)(10.0f)))))
		{
			goto IL_0125;
		}
	}
	{
		float L_20 = __this->get_target_6();
		float L_21 = __this->get_stagemaxselect_14();
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_0125;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = __this->get_stages_12();
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_22, /*hidden argument*/NULL);
		float L_24 = __this->get_target_6();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_23, ((int32_t)((int32_t)((float)((float)L_24/(float)(5.0f))))), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = L_25;
		G_B14_0 = L_26;
		if (L_26)
		{
			G_B15_0 = L_26;
			goto IL_00fd;
		}
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		goto IL_0107;
	}

IL_00fd:
	{
		NullCheck(G_B15_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(G_B15_0, /*hidden argument*/NULL);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_27, /*hidden argument*/NULL);
		G_B16_0 = L_28;
	}

IL_0107:
	{
		bool L_29;
		L_29 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(G_B16_0, _stringLiteral0A02F08F5C8411189B43E90868A2C6136E3A9F14, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0125;
		}
	}
	{
		// target += 5;
		float L_30 = __this->get_target_6();
		__this->set_target_6(((float)il2cpp_codegen_add((float)L_30, (float)(5.0f))));
	}

IL_0125:
	{
		// if (y == 0)//????
		float L_31 = __this->get_y_5();
		if ((!(((float)L_31) == ((float)(0.0f)))))
		{
			goto IL_014d;
		}
	}
	{
		// target = Mathf.Clamp(target, 0, 0);
		float L_32 = __this->get_target_6();
		float L_33;
		L_33 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_32, (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_target_6(L_33);
	}

IL_014d:
	{
		// if (y == 10)//stage
		float L_34 = __this->get_y_5();
		if ((!(((float)L_34) == ((float)(10.0f)))))
		{
			goto IL_0176;
		}
	}
	{
		// target = Mathf.Clamp(target, 0, stagemaxselect);
		float L_35 = __this->get_target_6();
		float L_36 = __this->get_stagemaxselect_14();
		float L_37;
		L_37 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_35, (0.0f), L_36, /*hidden argument*/NULL);
		__this->set_target_6(L_37);
	}

IL_0176:
	{
		// if (y == 20)//robot
		float L_38 = __this->get_y_5();
		if ((!(((float)L_38) == ((float)(20.0f)))))
		{
			goto IL_01a9;
		}
	}
	{
		// target = Mathf.Clamp(target, 0, (robots.childCount - 1) * 5);
		float L_39 = __this->get_target_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40 = __this->get_robots_11();
		NullCheck(L_40);
		int32_t L_41;
		L_41 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_40, /*hidden argument*/NULL);
		float L_42;
		L_42 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_39, (0.0f), ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1)), (int32_t)5)))), /*hidden argument*/NULL);
		__this->set_target_6(L_42);
	}

IL_01a9:
	{
		// bool ymove = false;
		V_1 = (bool)0;
		// if ((y == 0 && Input.anyKey) || Input.GetKey(KeyCode.W) || Input.GetKeyDown(KeyCode.Return))
		float L_43 = __this->get_y_5();
		if ((!(((float)L_43) == ((float)(0.0f)))))
		{
			goto IL_01bf;
		}
	}
	{
		bool L_44;
		L_44 = Input_get_anyKey_mF484987F7619AE4EB70CF96CB40AFBEF721986EB(/*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_01d1;
		}
	}

IL_01bf:
	{
		bool L_45;
		L_45 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)119), /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_01d1;
		}
	}
	{
		bool L_46;
		L_46 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)13), /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_01f7;
		}
	}

IL_01d1:
	{
		// if (selectstage != "celebration")
		String_t* L_47 = __this->get_selectstage_16();
		bool L_48;
		L_48 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_47, _stringLiteral76752ECA7E2DE9C273C6EA646CC7CF3F182B95AF, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_01f5;
		}
	}
	{
		// target_y += 10;
		float L_49 = __this->get_target_y_7();
		__this->set_target_y_7(((float)il2cpp_codegen_add((float)L_49, (float)(10.0f))));
	}

IL_01f5:
	{
		// ymove = true;
		V_1 = (bool)1;
	}

IL_01f7:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_50;
		L_50 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)115), /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0214;
		}
	}
	{
		// target_y -= 10;
		float L_51 = __this->get_target_y_7();
		__this->set_target_y_7(((float)il2cpp_codegen_subtract((float)L_51, (float)(10.0f))));
		// ymove = true;
		V_1 = (bool)1;
	}

IL_0214:
	{
		// if (ymove)
		bool L_52 = V_1;
		if (!L_52)
		{
			goto IL_028d;
		}
	}
	{
		// if (target_y == 0)//????
		float L_53 = __this->get_target_y_7();
		if ((!(((float)L_53) == ((float)(0.0f)))))
		{
			goto IL_022f;
		}
	}
	{
		// target = 0;
		__this->set_target_6((0.0f));
	}

IL_022f:
	{
		// if (target_y == 10)//stage
		float L_54 = __this->get_target_y_7();
		if ((!(((float)L_54) == ((float)(10.0f)))))
		{
			goto IL_0258;
		}
	}
	{
		// target = -stages.transform.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55 = __this->get_stages_12();
		NullCheck(L_55);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_56, /*hidden argument*/NULL);
		float L_58 = L_57.get_x_2();
		__this->set_target_6(((-L_58)));
	}

IL_0258:
	{
		// if (target_y == 20)//robot
		float L_59 = __this->get_target_y_7();
		if ((!(((float)L_59) == ((float)(20.0f)))))
		{
			goto IL_0281;
		}
	}
	{
		// target = -robots.transform.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60 = __this->get_robots_11();
		NullCheck(L_60);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61;
		L_61 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_60, /*hidden argument*/NULL);
		NullCheck(L_61);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_61, /*hidden argument*/NULL);
		float L_63 = L_62.get_x_2();
		__this->set_target_6(((-L_63)));
	}

IL_0281:
	{
		// x = target;
		float L_64 = __this->get_target_6();
		__this->set_x_4(L_64);
	}

IL_028d:
	{
		// y += Mathf.Clamp(target_y - y, -20 * Time.deltaTime, 20 * Time.deltaTime);
		float L_65 = __this->get_y_5();
		float L_66 = __this->get_target_y_7();
		float L_67 = __this->get_y_5();
		float L_68;
		L_68 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_69;
		L_69 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_70;
		L_70 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)L_66, (float)L_67)), ((float)il2cpp_codegen_multiply((float)(-20.0f), (float)L_68)), ((float)il2cpp_codegen_multiply((float)(20.0f), (float)L_69)), /*hidden argument*/NULL);
		__this->set_y_5(((float)il2cpp_codegen_add((float)L_65, (float)L_70)));
		// Vector3 posy = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_71;
		L_71 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_71);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		L_72 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_71, /*hidden argument*/NULL);
		V_0 = L_72;
		// posy.y = y + 2;
		float L_73 = __this->get_y_5();
		(&V_0)->set_y_3(((float)il2cpp_codegen_add((float)L_73, (float)(2.0f))));
		// transform.position = posy;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74;
		L_74 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75 = V_0;
		NullCheck(L_74);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_74, L_75, /*hidden argument*/NULL);
		// x += Mathf.Clamp(target - x, -15 * Time.deltaTime, 15 * Time.deltaTime);
		float L_76 = __this->get_x_4();
		float L_77 = __this->get_target_6();
		float L_78 = __this->get_x_4();
		float L_79;
		L_79 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_80;
		L_80 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_81;
		L_81 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)L_77, (float)L_78)), ((float)il2cpp_codegen_multiply((float)(-15.0f), (float)L_79)), ((float)il2cpp_codegen_multiply((float)(15.0f), (float)L_80)), /*hidden argument*/NULL);
		__this->set_x_4(((float)il2cpp_codegen_add((float)L_76, (float)L_81)));
		// if (y % 10 == 0)
		float L_82 = __this->get_y_5();
		if ((!(((float)(fmodf(L_82, (10.0f)))) == ((float)(0.0f)))))
		{
			goto IL_052f;
		}
	}
	{
		// if (target_y == 0)//????
		float L_83 = __this->get_target_y_7();
		if ((!(((float)L_83) == ((float)(0.0f)))))
		{
			goto IL_0357;
		}
	}
	{
		// setx(stages, cleardx);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_84 = __this->get_stages_12();
		float L_85 = __this->get_cleardx_13();
		titlecamera_setx_m66AB99F2B9A4639E18C53CF69D788A2462D5BFC8(__this, L_84, L_85, /*hidden argument*/NULL);
	}

IL_0357:
	{
		// if (target_y == 10)//????
		float L_86 = __this->get_target_y_7();
		if ((!(((float)L_86) == ((float)(10.0f)))))
		{
			goto IL_03ae;
		}
	}
	{
		// setx(stages, x);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_87 = __this->get_stages_12();
		float L_88 = __this->get_x_4();
		titlecamera_setx_m66AB99F2B9A4639E18C53CF69D788A2462D5BFC8(__this, L_87, L_88, /*hidden argument*/NULL);
		// selectstage = stages.transform.GetChild((int)(x / 5)).gameObject.name;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89 = __this->get_stages_12();
		NullCheck(L_89);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_90;
		L_90 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_89, /*hidden argument*/NULL);
		float L_91 = __this->get_x_4();
		NullCheck(L_90);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_92;
		L_92 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_90, ((int32_t)((int32_t)((float)((float)L_91/(float)(5.0f))))), /*hidden argument*/NULL);
		NullCheck(L_92);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_93;
		L_93 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_92, /*hidden argument*/NULL);
		NullCheck(L_93);
		String_t* L_94;
		L_94 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_93, /*hidden argument*/NULL);
		__this->set_selectstage_16(L_94);
		// print(selectstage);
		String_t* L_95 = __this->get_selectstage_16();
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_95, /*hidden argument*/NULL);
	}

IL_03ae:
	{
		// if (target_y == 20)//robot
		float L_96 = __this->get_target_y_7();
		if ((!(((float)L_96) == ((float)(20.0f)))))
		{
			goto IL_04a3;
		}
	}
	{
		// setx(robots, x);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_97 = __this->get_robots_11();
		float L_98 = __this->get_x_4();
		titlecamera_setx_m66AB99F2B9A4639E18C53CF69D788A2462D5BFC8(__this, L_97, L_98, /*hidden argument*/NULL);
		// if (Input.GetKey(KeyCode.LeftControl) && Input.GetKeyDown(KeyCode.C))
		bool L_99;
		L_99 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)306), /*hidden argument*/NULL);
		if (!L_99)
		{
			goto IL_0427;
		}
	}
	{
		bool L_100;
		L_100 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)99), /*hidden argument*/NULL);
		if (!L_100)
		{
			goto IL_0427;
		}
	}
	{
		// GUIUtility.systemCopyBuffer = robots.transform.GetChild((int)(target / 5))?.gameObject.GetComponent<robottable>().robottext;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_101 = __this->get_robots_11();
		NullCheck(L_101);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_102;
		L_102 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_101, /*hidden argument*/NULL);
		float L_103 = __this->get_target_6();
		NullCheck(L_102);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_104;
		L_104 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_102, ((int32_t)((int32_t)((float)((float)L_103/(float)(5.0f))))), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_105 = L_104;
		G_B50_0 = L_105;
		if (L_105)
		{
			G_B51_0 = L_105;
			goto IL_0409;
		}
	}
	{
		G_B52_0 = ((String_t*)(NULL));
		goto IL_0418;
	}

IL_0409:
	{
		NullCheck(G_B51_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_106;
		L_106 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(G_B51_0, /*hidden argument*/NULL);
		NullCheck(L_106);
		robottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D * L_107;
		L_107 = GameObject_GetComponent_Tisrobottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D_m55187337BCC0A473298878E02385B88922D1257F(L_106, /*hidden argument*/GameObject_GetComponent_Tisrobottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D_m55187337BCC0A473298878E02385B88922D1257F_RuntimeMethod_var);
		NullCheck(L_107);
		String_t* L_108 = L_107->get_robottext_5();
		G_B52_0 = L_108;
	}

IL_0418:
	{
		GUIUtility_set_systemCopyBuffer_m1C5EAC38441C94C430AA13DF9942E1786CFCAC95(G_B52_0, /*hidden argument*/NULL);
		// print("???????????");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral9BC1D0330CFCB704F750E1E7B16022F507C9360D, /*hidden argument*/NULL);
	}

IL_0427:
	{
		// if (Input.GetKey(KeyCode.LeftControl) && Input.GetKeyDown(KeyCode.V))
		bool L_109;
		L_109 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)306), /*hidden argument*/NULL);
		if (!L_109)
		{
			goto IL_0475;
		}
	}
	{
		bool L_110;
		L_110 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)118), /*hidden argument*/NULL);
		if (!L_110)
		{
			goto IL_0475;
		}
	}
	{
		// if (GUIUtility.systemCopyBuffer[0] == ':')
		String_t* L_111;
		L_111 = GUIUtility_get_systemCopyBuffer_m64CEF1CB0627F80D3CEEB458BA60DC9C1FA6141E(/*hidden argument*/NULL);
		NullCheck(L_111);
		Il2CppChar L_112;
		L_112 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_111, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_112) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0475;
		}
	}
	{
		// loaddata = GUIUtility.systemCopyBuffer;
		String_t* L_113;
		L_113 = GUIUtility_get_systemCopyBuffer_m64CEF1CB0627F80D3CEEB458BA60DC9C1FA6141E(/*hidden argument*/NULL);
		__this->set_loaddata_8(L_113);
		// filename = System.Guid.NewGuid().ToString();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_114;
		L_114 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		V_2 = L_114;
		String_t* L_115;
		L_115 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_2), /*hidden argument*/NULL);
		__this->set_filename_9(L_115);
		// gamestart();
		titlecamera_gamestart_mA0F379FA56741C2F18984E0D535E62C1FDF6766F(__this, /*hidden argument*/NULL);
	}

IL_0475:
	{
		// if (stages.transform.position.x == 0)//?????????????????????
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_116 = __this->get_stages_12();
		NullCheck(L_116);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_117;
		L_117 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_116, /*hidden argument*/NULL);
		NullCheck(L_117);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_118;
		L_118 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_117, /*hidden argument*/NULL);
		float L_119 = L_118.get_x_2();
		if ((!(((float)L_119) == ((float)(0.0f)))))
		{
			goto IL_04a3;
		}
	}
	{
		// target_y += 10;
		float L_120 = __this->get_target_y_7();
		__this->set_target_y_7(((float)il2cpp_codegen_add((float)L_120, (float)(10.0f))));
	}

IL_04a3:
	{
		// if (y == 30)//??
		float L_121 = __this->get_y_5();
		if ((!(((float)L_121) == ((float)(30.0f)))))
		{
			goto IL_052f;
		}
	}
	{
		// GameObject robotselecting = robots.transform.GetChild((int)(target / 5))?.gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_122 = __this->get_robots_11();
		NullCheck(L_122);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_123;
		L_123 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_122, /*hidden argument*/NULL);
		float L_124 = __this->get_target_6();
		NullCheck(L_123);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_125;
		L_125 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_123, ((int32_t)((int32_t)((float)((float)L_124/(float)(5.0f))))), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_126 = L_125;
		G_B61_0 = L_126;
		if (L_126)
		{
			G_B62_0 = L_126;
			goto IL_04d4;
		}
	}
	{
		G_B63_0 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)(NULL));
		goto IL_04d9;
	}

IL_04d4:
	{
		NullCheck(G_B62_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_127;
		L_127 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(G_B62_0, /*hidden argument*/NULL);
		G_B63_0 = L_127;
	}

IL_04d9:
	{
		V_3 = G_B63_0;
		// loaddata = robotselecting.GetComponent<robottable>().robottext;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_128 = V_3;
		NullCheck(L_128);
		robottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D * L_129;
		L_129 = GameObject_GetComponent_Tisrobottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D_m55187337BCC0A473298878E02385B88922D1257F(L_128, /*hidden argument*/GameObject_GetComponent_Tisrobottable_t00BC43ADDB733F0D2689713428CBE0BD0F62648D_m55187337BCC0A473298878E02385B88922D1257F_RuntimeMethod_var);
		NullCheck(L_129);
		String_t* L_130 = L_129->get_robottext_5();
		__this->set_loaddata_8(L_130);
		// if (robots.position.x == 0)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_131 = __this->get_robots_11();
		NullCheck(L_131);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_132;
		L_132 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_131, /*hidden argument*/NULL);
		float L_133 = L_132.get_x_2();
		if ((!(((float)L_133) == ((float)(0.0f)))))
		{
			goto IL_051d;
		}
	}
	{
		// filename = System.Guid.NewGuid().ToString();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_134;
		L_134 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
		V_2 = L_134;
		String_t* L_135;
		L_135 = Guid_ToString_mA3AB7742FB0E04808F580868E82BDEB93187FB75((Guid_t *)(&V_2), /*hidden argument*/NULL);
		__this->set_filename_9(L_135);
		// }
		goto IL_0529;
	}

IL_051d:
	{
		// filename = robotselecting.name;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_136 = V_3;
		NullCheck(L_136);
		String_t* L_137;
		L_137 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_136, /*hidden argument*/NULL);
		__this->set_filename_9(L_137);
	}

IL_0529:
	{
		// gamestart();
		titlecamera_gamestart_mA0F379FA56741C2F18984E0D535E62C1FDF6766F(__this, /*hidden argument*/NULL);
	}

IL_052f:
	{
		// }
		return;
	}
}
// System.Void titlecamera::gamestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void titlecamera_gamestart_mA0F379FA56741C2F18984E0D535E62C1FDF6766F (titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5242CA2A57E7C342839B448D32292929AEB6029B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE2EB8C21234B60F56F47667B6AB28B8001924C0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// print("stage?" + selectstage);
		String_t* L_0 = __this->get_selectstage_16();
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5242CA2A57E7C342839B448D32292929AEB6029B, L_0, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_1, /*hidden argument*/NULL);
		// stagename = selectstage;
		String_t* L_2 = __this->get_selectstage_16();
		__this->set_stagename_10(L_2);
		// SceneManager.LoadScene("fps");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralDE2EB8C21234B60F56F47667B6AB28B8001924C0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void titlecamera::setx(UnityEngine.Transform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void titlecamera_setx_m66AB99F2B9A4639E18C53CF69D788A2462D5BFC8 (titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___obj0, float ___x1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 pos = obj.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___obj0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// pos.x = -x;
		float L_2 = ___x1;
		(&V_0)->set_x_2(((-L_2)));
		// obj.position = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___obj0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void titlecamera::GameSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void titlecamera_GameSceneLoaded_mCC1336E024ACA85DEF6D3CD510B11649F9960E24 (titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___next0, int32_t ___mode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tismisson_tE35F9FCDC3926935096D22473095FE7579801E0D_m5306AE9C65B1A733A9B55E80229B446395EBD8EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tissave_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC_m20FC1E122B3749058E0E2DA07D0B9AC05B25CD71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A9CC9DC59C3C46CEF4E23A8B1C0E7EFDDD73360);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0C966CEEB9AAA93CD763DC9A83C5D79CBF560AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE2EB8C21234B60F56F47667B6AB28B8001924C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&titlecamera_GameSceneLoaded_mCC1336E024ACA85DEF6D3CD510B11649F9960E24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (SceneManager.GetActiveScene().name == "fps")
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralDE2EB8C21234B60F56F47667B6AB28B8001924C0, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_006e;
		}
	}
	{
		// misson misson = GameObject.Find("misson").GetComponent<misson>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralC0C966CEEB9AAA93CD763DC9A83C5D79CBF560AB, /*hidden argument*/NULL);
		NullCheck(L_3);
		misson_tE35F9FCDC3926935096D22473095FE7579801E0D * L_4;
		L_4 = GameObject_GetComponent_Tismisson_tE35F9FCDC3926935096D22473095FE7579801E0D_m5306AE9C65B1A733A9B55E80229B446395EBD8EC(L_3, /*hidden argument*/GameObject_GetComponent_Tismisson_tE35F9FCDC3926935096D22473095FE7579801E0D_m5306AE9C65B1A733A9B55E80229B446395EBD8EC_RuntimeMethod_var);
		// misson.missonchange(stagename);
		String_t* L_5 = __this->get_stagename_10();
		NullCheck(L_4);
		misson_missonchange_m06FEB0265C1BF8375EC029975A742BC23B7EEEE0(L_4, L_5, /*hidden argument*/NULL);
		// save save = GameObject.Find("EventSystem").GetComponent<save>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F, /*hidden argument*/NULL);
		NullCheck(L_6);
		save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * L_7;
		L_7 = GameObject_GetComponent_Tissave_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC_m20FC1E122B3749058E0E2DA07D0B9AC05B25CD71(L_6, /*hidden argument*/GameObject_GetComponent_Tissave_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC_m20FC1E122B3749058E0E2DA07D0B9AC05B25CD71_RuntimeMethod_var);
		// save.filename = filename;
		save_tCE6A75BA49D0A6EE152FB2DB43BCD7A3D0E8EBEC * L_8 = L_7;
		String_t* L_9 = __this->get_filename_9();
		NullCheck(L_8);
		L_8->set_filename_4(L_9);
		// save.allload(loaddata);
		String_t* L_10 = __this->get_loaddata_8();
		NullCheck(L_8);
		save_allload_mAC22A25C888E1C043512C2824951A1B14E20C982(L_8, L_10, /*hidden argument*/NULL);
		// print("gamesceenlooded");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral5A9CC9DC59C3C46CEF4E23A8B1C0E7EFDDD73360, /*hidden argument*/NULL);
		// print(stagename);
		String_t* L_11 = __this->get_stagename_10();
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_11, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// SceneManager.sceneLoaded -= GameSceneLoaded;
		UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * L_12 = (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *)il2cpp_codegen_object_new(UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0(L_12, __this, (intptr_t)((intptr_t)titlecamera_GameSceneLoaded_mCC1336E024ACA85DEF6D3CD510B11649F9960E24_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_remove_sceneLoaded_m69725C1E9ADF1E5FE760656AAC95054AC00AF97D(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void titlecamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void titlecamera__ctor_m7F36B25C643DEC79E3F9644423E4F59A78049E89 (titlecamera_tCDD4A69A83045541B6BA173B9082356CFE44B68D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void tutorial::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tutorial_Start_mE0062652C39B060D1B7D14DB876C236746C5DB89 (tutorial_t1F1611D4CF7705BAAF90F754A420AD55500FA99F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisplayer_tA80E0022C279849EE513BB6A4017ED62943ADC71_m0697638C371A3C624D3003D829B9C6461AB27039_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC40308D9CD5308D1A688E021361D33153A012F11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindWithTag("Player").GetComponent<player>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		NullCheck(L_0);
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_1;
		L_1 = GameObject_GetComponent_Tisplayer_tA80E0022C279849EE513BB6A4017ED62943ADC71_m0697638C371A3C624D3003D829B9C6461AB27039(L_0, /*hidden argument*/GameObject_GetComponent_Tisplayer_tA80E0022C279849EE513BB6A4017ED62943ADC71_m0697638C371A3C624D3003D829B9C6461AB27039_RuntimeMethod_var);
		__this->set_player_9(L_1);
		// step = 0;
		__this->set_step_7(0);
		// say("?????!\n VirtualRobot?????!");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteralC40308D9CD5308D1A688E021361D33153A012F11, /*hidden argument*/NULL);
		// player.programcamera.transform.position += new Vector3(-3f, 0, 0);
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_2 = __this->get_player_9();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2->get_programcamera_15();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = L_4;
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (-3.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void tutorial::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tutorial_Update_m207DC4DE1DE1CF49D788F6353FE78D6DD1FEED6C (tutorial_t1F1611D4CF7705BAAF90F754A420AD55500FA99F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m1025822CFFC3A3C846267590775A843ED9532924_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mEC132E230E8EE882BFFCEF116997ADFBC3BFC1C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tismisson_tE35F9FCDC3926935096D22473095FE7579801E0D_m5306AE9C65B1A733A9B55E80229B446395EBD8EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DD1D980B722E2F9D713D1C3C669AE12A3DC0BFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20D87BA4EE37D1A5D3AC4D9502E9929BA9F8D795);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21BDAEC6CF9B1EA7BF1F769B844B830FEB156873);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23A23D4B2C32D1BA8AAE3C37A173A2ACD553D4A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29E43B6AFB342BC9C1549B18C2BF712C991FDDD1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BA57791BAE44502293C8A4B600485817ADD058F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43B096CF6F72E47CD49136078669899171867B8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4892C810EC90C99AE0237971E77ED7BD22D8E806);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48BA8423A3ADC76C5733C0B8A2BA7DE29A20CAC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D29F7FE207105E0207D0267E68F48F34FAA2B22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50DD561547D08136581711028213F4DCA7FDD7F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5329E4EA335D502C9D8FA5F86B60ABA4BFA95BCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C158AB4EE81430E5A9C4821E81EA81B61010BE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60E8D3500F766ED764FB131C8383163A53369162);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64FE037FD423B6A375D4D07F76FCF5D8FC53FFD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ED2D7BF70062A9BBDC81C142C3367C446A7481C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9199BA1F7F7B3398048A76001D9B3BDD977E67B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A4E9819A62B37CDEFDE754FE870C3E5B3F3B7C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB9B21C957A123FF896A0ECF86032D49519CC33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA787A9719F350E9E70731CDF89D931F4B3944138);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB046325452A2030018F7F10DA54EF183E8BD0416);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0B8F70D8F2E3EC6FCBA117B4B01ED3741F1B45D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB95A8BDED8E863EA19239C49CB569B1A0A1C30D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0C966CEEB9AAA93CD763DC9A83C5D79CBF560AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1B8CE2076333139656A3669C7511B1EDC3242B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4F48A234338812C428DA2BA6D189CFDD37E88B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF4386087FAB3E9B1AB569E7B30B8B58FC07803B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD100379D1CBD46F6170EFBFA2D6117321AD842E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDF287A1A81ABE031A266689E5DBC5121B15AE01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8243A6B217C824C56CFAF8DE26C0A7F156AF040);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE83822A6AFFBBE0E3179F3D590E661D88BC3F7C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2730ADC3E3C8CE8F3A41BC7E5438AD14001A7E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF29C60C5C9F5C4D8E2833F276FA6D79B12CE5B51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF538E9847209F874F87160C6388F0273ADE24D77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// player.itemselect.target = Mathf.Clamp(player.itemselect.target, 0, 1);
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_0 = __this->get_player_9();
		NullCheck(L_0);
		itemselect_tD9D130EB5E787DBEC915E8AE169BC808DB2C15C9 * L_1 = L_0->get_itemselect_5();
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_2 = __this->get_player_9();
		NullCheck(L_2);
		itemselect_tD9D130EB5E787DBEC915E8AE169BC808DB2C15C9 * L_3 = L_2->get_itemselect_5();
		NullCheck(L_3);
		float L_4 = L_3->get_target_7();
		float L_5;
		L_5 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_4, (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_target_7(L_5);
		// if (textobj.text.Length == text.Length && wait < 0)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_textobj_4();
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_6);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		String_t* L_9 = __this->get_text_5();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_9, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_067a;
		}
	}
	{
		float L_11 = __this->get_wait_8();
		if ((!(((float)L_11) < ((float)(0.0f)))))
		{
			goto IL_067a;
		}
	}
	{
		// if (step == 0)
		int32_t L_12 = __this->get_step_7();
		if (L_12)
		{
			goto IL_0081;
		}
	}
	{
		// say("??????????????????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteral43B096CF6F72E47CD49136078669899171867B8C, /*hidden argument*/NULL);
		// step++;
		int32_t L_13 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		// }
		return;
	}

IL_0081:
	{
		// else if (step == 1)
		int32_t L_14 = __this->get_step_7();
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_00cc;
		}
	}
	{
		// if (Input.GetAxis("Mouse X") != 0 && Input.GetAxis("Mouse Y") != 0)
		float L_15;
		L_15 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, /*hidden argument*/NULL);
		if ((((float)L_15) == ((float)(0.0f))))
		{
			goto IL_067a;
		}
	}
	{
		float L_16;
		L_16 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, /*hidden argument*/NULL);
		if ((((float)L_16) == ((float)(0.0f))))
		{
			goto IL_067a;
		}
	}
	{
		// say("WASD,???????????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteral9AB9B21C957A123FF896A0ECF86032D49519CC33, /*hidden argument*/NULL);
		// step++;
		int32_t L_17 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
		// }
		return;
	}

IL_00cc:
	{
		// else if (step == 2)
		int32_t L_18 = __this->get_step_7();
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_0117;
		}
	}
	{
		// if (Input.GetAxis("Horizontal") != 0 && Input.GetAxis("Vertical") != 0)
		float L_19;
		L_19 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		if ((((float)L_19) == ((float)(0.0f))))
		{
			goto IL_067a;
		}
	}
	{
		float L_20;
		L_20 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		if ((((float)L_20) == ((float)(0.0f))))
		{
			goto IL_067a;
		}
	}
	{
		// say("?????????????????????????\ncube??motor?????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteral29E43B6AFB342BC9C1549B18C2BF712C991FDDD1, /*hidden argument*/NULL);
		// step++;
		int32_t L_21 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
		// }
		return;
	}

IL_0117:
	{
		// else if (step == 3)
		int32_t L_22 = __this->get_step_7();
		if ((!(((uint32_t)L_22) == ((uint32_t)3))))
		{
			goto IL_0159;
		}
	}
	{
		// if (player.itemselect.itemname == "motor")
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_23 = __this->get_player_9();
		NullCheck(L_23);
		itemselect_tD9D130EB5E787DBEC915E8AE169BC808DB2C15C9 * L_24 = L_23->get_itemselect_5();
		NullCheck(L_24);
		String_t* L_25 = L_24->get_itemname_11();
		bool L_26;
		L_26 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_25, _stringLiteral48BA8423A3ADC76C5733C0B8A2BA7DE29A20CAC4, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_067a;
		}
	}
	{
		// say("motor???????????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteral5C158AB4EE81430E5A9C4821E81EA81B61010BE2, /*hidden argument*/NULL);
		// step++;
		int32_t L_27 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
		// }
		return;
	}

IL_0159:
	{
		// else if (step == 4)
		int32_t L_28 = __this->get_step_7();
		if ((!(((uint32_t)L_28) == ((uint32_t)4))))
		{
			goto IL_017c;
		}
	}
	{
		// say("???????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteralCF4386087FAB3E9B1AB569E7B30B8B58FC07803B, /*hidden argument*/NULL);
		// step++;
		int32_t L_29 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)));
		// }
		return;
	}

IL_017c:
	{
		// else if (step == 5)
		int32_t L_30 = __this->get_step_7();
		if ((!(((uint32_t)L_30) == ((uint32_t)5))))
		{
			goto IL_019f;
		}
	}
	{
		// say("???????????????????????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteral64FE037FD423B6A375D4D07F76FCF5D8FC53FFD3, /*hidden argument*/NULL);
		// step++;
		int32_t L_31 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)));
		// }
		return;
	}

IL_019f:
	{
		// else if (step == 6)
		int32_t L_32 = __this->get_step_7();
		if ((!(((uint32_t)L_32) == ((uint32_t)6))))
		{
			goto IL_01f5;
		}
	}
	{
		// if (GameObject.Find("motor") != null && GameObject.Find("motor").tag == "robotblock")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33;
		L_33 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral48BA8423A3ADC76C5733C0B8A2BA7DE29A20CAC4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_33, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_067a;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral48BA8423A3ADC76C5733C0B8A2BA7DE29A20CAC4, /*hidden argument*/NULL);
		NullCheck(L_35);
		String_t* L_36;
		L_36 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_35, /*hidden argument*/NULL);
		bool L_37;
		L_37 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_36, _stringLiteralF29C60C5C9F5C4D8E2833F276FA6D79B12CE5B51, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_067a;
		}
	}
	{
		// say("????????????????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteralDDF287A1A81ABE031A266689E5DBC5121B15AE01, /*hidden argument*/NULL);
		// step++;
		int32_t L_38 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1)));
		// }
		return;
	}

IL_01f5:
	{
		// else if (step == 7)
		int32_t L_39 = __this->get_step_7();
		if ((!(((uint32_t)L_39) == ((uint32_t)7))))
		{
			goto IL_022d;
		}
	}
	{
		// if (GameObject.FindWithTag("blockdata") != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteral20D87BA4EE37D1A5D3AC4D9502E9929BA9F8D795, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_40, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_067a;
		}
	}
	{
		// say("??name,power????????????????????\npower??????????(??100??)");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteralB046325452A2030018F7F10DA54EF183E8BD0416, /*hidden argument*/NULL);
		// step++;
		int32_t L_42 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1)));
		// }
		return;
	}

IL_022d:
	{
		// else if (step == 8)
		int32_t L_43 = __this->get_step_7();
		if ((!(((uint32_t)L_43) == ((uint32_t)8))))
		{
			goto IL_029c;
		}
	}
	{
		// print(GameObject.FindGameObjectsWithTag("blockdata")[1].transform.GetChild(1));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_44;
		L_44 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral20D87BA4EE37D1A5D3AC4D9502E9929BA9F8D795, /*hidden argument*/NULL);
		NullCheck(L_44);
		int32_t L_45 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_46);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_47, 1, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_48, /*hidden argument*/NULL);
		// if (GameObject.FindGameObjectsWithTag("blockdata")[1].transform.GetChild(1).GetComponent<InputField>().text != "0")
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_49;
		L_49 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral20D87BA4EE37D1A5D3AC4D9502E9929BA9F8D795, /*hidden argument*/NULL);
		NullCheck(L_49);
		int32_t L_50 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_52, 1, /*hidden argument*/NULL);
		NullCheck(L_53);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_54;
		L_54 = Component_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m1025822CFFC3A3C846267590775A843ED9532924(L_53, /*hidden argument*/Component_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m1025822CFFC3A3C846267590775A843ED9532924_RuntimeMethod_var);
		NullCheck(L_54);
		String_t* L_55;
		L_55 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_54, /*hidden argument*/NULL);
		bool L_56;
		L_56 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_55, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_067a;
		}
	}
	{
		// say("?????????????????????????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteralC1B8CE2076333139656A3669C7511B1EDC3242B3, /*hidden argument*/NULL);
		// step++;
		int32_t L_57 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1)));
		// }
		return;
	}

IL_029c:
	{
		// else if (step == 9)
		int32_t L_58 = __this->get_step_7();
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_02d5;
		}
	}
	{
		// if (GameObject.FindWithTag("blockdata") == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteral20D87BA4EE37D1A5D3AC4D9502E9929BA9F8D795, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_60;
		L_60 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_59, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_067a;
		}
	}
	{
		// say("?????????????????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteral5329E4EA335D502C9D8FA5F86B60ABA4BFA95BCC, /*hidden argument*/NULL);
		// step++;
		int32_t L_61 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1)));
		// }
		return;
	}

IL_02d5:
	{
		// else if (step == 10)
		int32_t L_62 = __this->get_step_7();
		if ((!(((uint32_t)L_62) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_02f9;
		}
	}
	{
		// say("esc???????????????????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteralF538E9847209F874F87160C6388F0273ADE24D77, /*hidden argument*/NULL);
		// step++;
		int32_t L_63 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1)));
		// }
		return;
	}

IL_02f9:
	{
		// else if (step == 11)
		int32_t L_64 = __this->get_step_7();
		if ((!(((uint32_t)L_64) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_032e;
		}
	}
	{
		// if (player.mode == -1)
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_65 = __this->get_player_9();
		NullCheck(L_65);
		int32_t L_66 = L_65->get_mode_8();
		if ((!(((uint32_t)L_66) == ((uint32_t)(-1)))))
		{
			goto IL_067a;
		}
	}
	{
		// say("???????????????\n????esc????????????????????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteralC4F48A234338812C428DA2BA6D189CFDD37E88B4, /*hidden argument*/NULL);
		// step++;
		int32_t L_67 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1)));
		// }
		return;
	}

IL_032e:
	{
		// else if (step == 12)
		int32_t L_68 = __this->get_step_7();
		if ((!(((uint32_t)L_68) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0363;
		}
	}
	{
		// if (player.mode != -1)
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_69 = __this->get_player_9();
		NullCheck(L_69);
		int32_t L_70 = L_69->get_mode_8();
		if ((((int32_t)L_70) == ((int32_t)(-1))))
		{
			goto IL_067a;
		}
	}
	{
		// say("???????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteral50DD561547D08136581711028213F4DCA7FDD7F8, /*hidden argument*/NULL);
		// step++;
		int32_t L_71 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1)));
		// }
		return;
	}

IL_0363:
	{
		// else if (step == 13)
		int32_t L_72 = __this->get_step_7();
		if ((!(((uint32_t)L_72) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0387;
		}
	}
	{
		// say("????????????????????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteralB0B8F70D8F2E3EC6FCBA117B4B01ED3741F1B45D, /*hidden argument*/NULL);
		// step++;
		int32_t L_73 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1)));
		// }
		return;
	}

IL_0387:
	{
		// else if (step == 14)
		int32_t L_74 = __this->get_step_7();
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_03ab;
		}
	}
	{
		// say("Q??????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteral60E8D3500F766ED764FB131C8383163A53369162, /*hidden argument*/NULL);
		// step++;
		int32_t L_75 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1)));
		// }
		return;
	}

IL_03ab:
	{
		// else if (step == 15)
		int32_t L_76 = __this->get_step_7();
		if ((!(((uint32_t)L_76) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_03e0;
		}
	}
	{
		// if (player.mode == 2)
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_77 = __this->get_player_9();
		NullCheck(L_77);
		int32_t L_78 = L_77->get_mode_8();
		if ((!(((uint32_t)L_78) == ((uint32_t)2))))
		{
			goto IL_067a;
		}
	}
	{
		// say("????????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteral21BDAEC6CF9B1EA7BF1F769B844B830FEB156873, /*hidden argument*/NULL);
		// step++;
		int32_t L_79 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1)));
		// }
		return;
	}

IL_03e0:
	{
		// else if (step == 16)
		int32_t L_80 = __this->get_step_7();
		if ((!(((uint32_t)L_80) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0404;
		}
	}
	{
		// say("???A=[]???????????????????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteral4892C810EC90C99AE0237971E77ED7BD22D8E806, /*hidden argument*/NULL);
		// step++;
		int32_t L_81 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1)));
		// }
		return;
	}

IL_0404:
	{
		// else if (step == 17)
		int32_t L_82 = __this->get_step_7();
		if ((!(((uint32_t)L_82) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_0447;
		}
	}
	{
		// GameObject startnext = GameObject.Find("start").GetComponent<programblock>().next;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_83;
		L_83 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD, /*hidden argument*/NULL);
		NullCheck(L_83);
		programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * L_84;
		L_84 = GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8(L_83, /*hidden argument*/GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		NullCheck(L_84);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_85 = L_84->get_next_5();
		// if (startnext != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_85, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_86)
		{
			goto IL_067a;
		}
	}
	{
		// say("???????????????.???????????????????\n???????????????A???");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteralF2730ADC3E3C8CE8F3A41BC7E5438AD14001A7E8, /*hidden argument*/NULL);
		// step++;
		int32_t L_87 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1)));
		// }
		return;
	}

IL_0447:
	{
		// else if (step == 18)
		int32_t L_88 = __this->get_step_7();
		if ((!(((uint32_t)L_88) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_046b;
		}
	}
	{
		// say("???A.power?????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteral2BA57791BAE44502293C8A4B600485817ADD058F, /*hidden argument*/NULL);
		// step++;
		int32_t L_89 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1)));
		// }
		return;
	}

IL_046b:
	{
		// else if (step == 19)
		int32_t L_90 = __this->get_step_7();
		if ((!(((uint32_t)L_90) == ((uint32_t)((int32_t)19)))))
		{
			goto IL_04c8;
		}
	}
	{
		// GameObject startnext = GameObject.Find("start").GetComponent<programblock>().next;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_91;
		L_91 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD, /*hidden argument*/NULL);
		NullCheck(L_91);
		programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * L_92;
		L_92 = GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8(L_91, /*hidden argument*/GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		NullCheck(L_92);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_93 = L_92->get_next_5();
		// string keytex = startnext.GetComponent<programblock>().customobject[0].GetComponent<InputField>().text;
		NullCheck(L_93);
		programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * L_94;
		L_94 = GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8(L_93, /*hidden argument*/GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		NullCheck(L_94);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_95 = L_94->get_customobject_10();
		NullCheck(L_95);
		int32_t L_96 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_97);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_98;
		L_98 = GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mEC132E230E8EE882BFFCEF116997ADFBC3BFC1C8(L_97, /*hidden argument*/GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mEC132E230E8EE882BFFCEF116997ADFBC3BFC1C8_RuntimeMethod_var);
		NullCheck(L_98);
		String_t* L_99;
		L_99 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_98, /*hidden argument*/NULL);
		// if (keytex == "A.power")
		bool L_100;
		L_100 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_99, _stringLiteralA787A9719F350E9E70731CDF89D931F4B3944138, /*hidden argument*/NULL);
		if (!L_100)
		{
			goto IL_067a;
		}
	}
	{
		// say("???????????????????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteralE83822A6AFFBBE0E3179F3D590E661D88BC3F7C3, /*hidden argument*/NULL);
		// step++;
		int32_t L_101 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1)));
		// }
		return;
	}

IL_04c8:
	{
		// else if (step == 20)
		int32_t L_102 = __this->get_step_7();
		if ((!(((uint32_t)L_102) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_04ec;
		}
	}
	{
		// say("????????????????????????????????\n?????????????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteral1DD1D980B722E2F9D713D1C3C669AE12A3DC0BFD, /*hidden argument*/NULL);
		// step++;
		int32_t L_103 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1)));
		// }
		return;
	}

IL_04ec:
	{
		// else if (step == 21)
		int32_t L_104 = __this->get_step_7();
		if ((!(((uint32_t)L_104) == ((uint32_t)((int32_t)21)))))
		{
			goto IL_0556;
		}
	}
	{
		// GameObject startnext = GameObject.Find("start").GetComponent<programblock>().next;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_105;
		L_105 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD, /*hidden argument*/NULL);
		NullCheck(L_105);
		programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * L_106;
		L_106 = GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8(L_105, /*hidden argument*/GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		NullCheck(L_106);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_107 = L_106->get_next_5();
		// string keytex = startnext.GetComponent<programblock>().customobject[2].GetComponent<InputField>().text;
		NullCheck(L_107);
		programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * L_108;
		L_108 = GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8(L_107, /*hidden argument*/GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		NullCheck(L_108);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_109 = L_108->get_customobject_10();
		NullCheck(L_109);
		int32_t L_110 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_111 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_111);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_112;
		L_112 = GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mEC132E230E8EE882BFFCEF116997ADFBC3BFC1C8(L_111, /*hidden argument*/GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_mEC132E230E8EE882BFFCEF116997ADFBC3BFC1C8_RuntimeMethod_var);
		NullCheck(L_112);
		String_t* L_113;
		L_113 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_112, /*hidden argument*/NULL);
		V_0 = L_113;
		// if (keytex != "0")
		String_t* L_114 = V_0;
		bool L_115;
		L_115 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_114, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		if (!L_115)
		{
			goto IL_067a;
		}
	}
	{
		// say("???2?????wait?????start?A=" + keytex + "????????");
		String_t* L_116 = V_0;
		String_t* L_117;
		L_117 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral4D29F7FE207105E0207D0267E68F48F34FAA2B22, L_116, _stringLiteral9199BA1F7F7B3398048A76001D9B3BDD977E67B7, /*hidden argument*/NULL);
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, L_117, /*hidden argument*/NULL);
		// step++;
		int32_t L_118 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_118, (int32_t)1)));
		// }
		return;
	}

IL_0556:
	{
		// else if (step == 22)
		int32_t L_119 = __this->get_step_7();
		if ((!(((uint32_t)L_119) == ((uint32_t)((int32_t)22)))))
		{
			goto IL_05a2;
		}
	}
	{
		// if (GameObject.Find("start").GetComponent<programblock>().next.name == "wait")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_120;
		L_120 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD, /*hidden argument*/NULL);
		NullCheck(L_120);
		programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * L_121;
		L_121 = GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8(L_120, /*hidden argument*/GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		NullCheck(L_121);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_122 = L_121->get_next_5();
		NullCheck(L_122);
		String_t* L_123;
		L_123 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_122, /*hidden argument*/NULL);
		bool L_124;
		L_124 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_123, _stringLiteral9A4E9819A62B37CDEFDE754FE870C3E5B3F3B7C3, /*hidden argument*/NULL);
		if (!L_124)
		{
			goto IL_067a;
		}
	}
	{
		// say("Q???????????????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteralE8243A6B217C824C56CFAF8DE26C0A7F156AF040, /*hidden argument*/NULL);
		// step++;
		int32_t L_125 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_125, (int32_t)1)));
		// }
		return;
	}

IL_05a2:
	{
		// else if (step == 23)
		int32_t L_126 = __this->get_step_7();
		if ((!(((uint32_t)L_126) == ((uint32_t)((int32_t)23)))))
		{
			goto IL_05d6;
		}
	}
	{
		// if (player.mode == 0)
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_127 = __this->get_player_9();
		NullCheck(L_127);
		int32_t L_128 = L_127->get_mode_8();
		if (L_128)
		{
			goto IL_067a;
		}
	}
	{
		// say("esc??????????????????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteral23A23D4B2C32D1BA8AAE3C37A173A2ACD553D4A3, /*hidden argument*/NULL);
		// step++;
		int32_t L_129 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)1)));
		// }
		return;
	}

IL_05d6:
	{
		// else if (step == 24)
		int32_t L_130 = __this->get_step_7();
		if ((!(((uint32_t)L_130) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_060b;
		}
	}
	{
		// if (player.mode == -1)
		player_tA80E0022C279849EE513BB6A4017ED62943ADC71 * L_131 = __this->get_player_9();
		NullCheck(L_131);
		int32_t L_132 = L_131->get_mode_8();
		if ((!(((uint32_t)L_132) == ((uint32_t)(-1)))))
		{
			goto IL_067a;
		}
	}
	{
		// say("???????????????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteralD100379D1CBD46F6170EFBFA2D6117321AD842E4, /*hidden argument*/NULL);
		// step++;
		int32_t L_133 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)1)));
		// }
		return;
	}

IL_060b:
	{
		// else if (step == 25)
		int32_t L_134 = __this->get_step_7();
		if ((!(((uint32_t)L_134) == ((uint32_t)((int32_t)25)))))
		{
			goto IL_062f;
		}
	}
	{
		// say("???????????????");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteral8ED2D7BF70062A9BBDC81C142C3367C446A7481C, /*hidden argument*/NULL);
		// step++;
		int32_t L_135 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)1)));
		// }
		return;
	}

IL_062f:
	{
		// else if (step == 26)
		int32_t L_136 = __this->get_step_7();
		if ((!(((uint32_t)L_136) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_067a;
		}
	}
	{
		// say("esc?????????????????????????????????\n");
		tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B(__this, _stringLiteralBB95A8BDED8E863EA19239C49CB569B1A0A1C30D, /*hidden argument*/NULL);
		// GameObject.Find("misson").GetComponent<misson>().clear(new Vector3(0, 0, 0));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_137;
		L_137 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralC0C966CEEB9AAA93CD763DC9A83C5D79CBF560AB, /*hidden argument*/NULL);
		NullCheck(L_137);
		misson_tE35F9FCDC3926935096D22473095FE7579801E0D * L_138;
		L_138 = GameObject_GetComponent_Tismisson_tE35F9FCDC3926935096D22473095FE7579801E0D_m5306AE9C65B1A733A9B55E80229B446395EBD8EC(L_137, /*hidden argument*/GameObject_GetComponent_Tismisson_tE35F9FCDC3926935096D22473095FE7579801E0D_m5306AE9C65B1A733A9B55E80229B446395EBD8EC_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_139;
		memset((&L_139), 0, sizeof(L_139));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_139), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_138);
		misson_clear_mECCA7CC3A9D1F0FBA6C6E299C98081A77C817D6F(L_138, L_139, /*hidden argument*/NULL);
		// step++;
		int32_t L_140 = __this->get_step_7();
		__this->set_step_7(((int32_t)il2cpp_codegen_add((int32_t)L_140, (int32_t)1)));
	}

IL_067a:
	{
		// }
		return;
	}
}
// System.Void tutorial::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tutorial_FixedUpdate_m987A664482683518145E29098BEC61413DD219AE (tutorial_t1F1611D4CF7705BAAF90F754A420AD55500FA99F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		// count++;
		int32_t L_0 = __this->get_count_6();
		__this->set_count_6(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if (textobj.text.Length < text.Length)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_textobj_4();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		String_t* L_4 = __this->get_text_5();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_009b;
		}
	}
	{
		// print(count % 2);
		int32_t L_6 = __this->get_count_6();
		int32_t L_7 = ((int32_t)((int32_t)L_6%(int32_t)2));
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_8, /*hidden argument*/NULL);
		// robotimage.texture = robotimages[count % 2];
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_9 = __this->get_robotimage_10();
		Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* L_10 = __this->get_robotimages_11();
		int32_t L_11 = __this->get_count_6();
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)((int32_t)L_11%(int32_t)2));
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_9, L_13, /*hidden argument*/NULL);
		// if (count % 2 == 0)
		int32_t L_14 = __this->get_count_6();
		if (((int32_t)((int32_t)L_14%(int32_t)2)))
		{
			goto IL_00ad;
		}
	}
	{
		// textobj.text += text[textobj.text.Length];
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = __this->get_textobj_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = L_15;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_16);
		String_t* L_18 = __this->get_text_5();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = __this->get_textobj_4();
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_19);
		NullCheck(L_20);
		int32_t L_21;
		L_21 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		Il2CppChar L_22;
		L_22 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_18, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		String_t* L_23;
		L_23 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_0), /*hidden argument*/NULL);
		String_t* L_24;
		L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_17, L_23, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_24);
		// }
		return;
	}

IL_009b:
	{
		// wait -= Time.deltaTime;
		float L_25 = __this->get_wait_8();
		float L_26;
		L_26 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_wait_8(((float)il2cpp_codegen_subtract((float)L_25, (float)L_26)));
	}

IL_00ad:
	{
		// }
		return;
	}
}
// System.Void tutorial::say(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tutorial_say_mC924DC575F5497407A4D9C91DD2E72D3B117AD4B (tutorial_t1F1611D4CF7705BAAF90F754A420AD55500FA99F * __this, String_t* ___speak0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wait = 1;
		__this->set_wait_8((1.0f));
		// textobj.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_textobj_4();
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// text = speak;
		String_t* L_1 = ___speak0;
		__this->set_text_5(L_1);
		// }
		return;
	}
}
// System.Void tutorial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tutorial__ctor_mA7C47886D99C115A392D46FF4606EC5648314AF0 (tutorial_t1F1611D4CF7705BAAF90F754A420AD55500FA99F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void variables::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void variables_Start_m7F7543055EC0F1C3AC21ECA267DC1EFCA73A0F3B (variables_t3A18CB7A411573B064E656403C615084074FE63D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void variables::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void variables_Update_m9CECD0EBAD736866287175B2AD4C55D3CE798FDF (variables_t3A18CB7A411573B064E656403C615084074FE63D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void variables::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void variables__ctor_mF6FDD1D8BDEE1C0ED0694B1F3681CE8C943E3B8E (variables_t3A18CB7A411573B064E656403C615084074FE63D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void variables::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void variables__cctor_m613EA307B7CB9A2AA635FB7527778241AB5FF467 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2CE67E373BDB82A6E6FBA950E28F917BB650DB6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&variables_t3A18CB7A411573B064E656403C615084074FE63D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Dictionary<string, float> variable = new Dictionary<string, float>();
		Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * L_0 = (Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 *)il2cpp_codegen_object_new(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2CE67E373BDB82A6E6FBA950E28F917BB650DB6B(L_0, /*hidden argument*/Dictionary_2__ctor_m2CE67E373BDB82A6E6FBA950E28F917BB650DB6B_RuntimeMethod_var);
		((variables_t3A18CB7A411573B064E656403C615084074FE63D_StaticFields*)il2cpp_codegen_static_fields_for(variables_t3A18CB7A411573B064E656403C615084074FE63D_il2cpp_TypeInfo_var))->set_variable_4(L_0);
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
// System.Void whileblock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void whileblock_Start_mFBF2DB7E07C51B262EC83606A2203D1B3FE01720 (whileblock_t0BBCEC21FB1F2674F833F551D913738092D7143E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void whileblock::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void whileblock_Update_m2A8C45257B3FFEAAD56A4597A77CEB69A4C52F20 (whileblock_t0BBCEC21FB1F2674F833F551D913738092D7143E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisend_tDD3367686B3440E44BAD14851F1ED58F8590CBC5_mF5439E58A8A94ED724A75CBF77A7C7CA3A5B3C36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15B86A1C16305C5888786BF374E35F0ABB4044F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61A88EF487F99DCB9558AAAD39471532DEE75F42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD522BF64F2D257409CB3BAC45086A2EA0B03C59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA8820B8503A0DF8EC4AFFB9970E4A5EB027D933);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	String_t* V_3 = NULL;
	{
		// target = 0;
		__this->set_target_8((0.0f));
		// int searchmax = 100;
		V_0 = ((int32_t)100);
		// int nest = 0;
		V_1 = 0;
		// GameObject search = this.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		V_2 = L_0;
		goto IL_0155;
	}

IL_001c:
	{
		// search = search.GetComponent<programblock>().next;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_2;
		NullCheck(L_1);
		programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * L_2;
		L_2 = GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8(L_1, /*hidden argument*/GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2->get_next_5();
		V_2 = L_3;
		// if (search == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0067;
		}
	}
	{
		// if (end != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_end_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// end.GetComponent<end>().head = null;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_end_5();
		NullCheck(L_8);
		end_tDD3367686B3440E44BAD14851F1ED58F8590CBC5 * L_9;
		L_9 = GameObject_GetComponent_Tisend_tDD3367686B3440E44BAD14851F1ED58F8590CBC5_mF5439E58A8A94ED724A75CBF77A7C7CA3A5B3C36(L_8, /*hidden argument*/GameObject_GetComponent_Tisend_tDD3367686B3440E44BAD14851F1ED58F8590CBC5_mF5439E58A8A94ED724A75CBF77A7C7CA3A5B3C36_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->set_head_4((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
	}

IL_0050:
	{
		// end = null;
		__this->set_end_5((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// target = 0;
		__this->set_target_8((0.0f));
		// break;
		goto IL_0161;
	}

IL_0067:
	{
		// if (search.GetComponent<programblock>().blocktype == "elseif" && nest == 0)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_2;
		NullCheck(L_10);
		programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * L_11;
		L_11 = GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8(L_10, /*hidden argument*/GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		NullCheck(L_11);
		String_t* L_12 = L_11->get_blocktype_8();
		bool L_13;
		L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteralFA8820B8503A0DF8EC4AFFB9970E4A5EB027D933, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_14 = V_1;
		if (L_14)
		{
			goto IL_0088;
		}
	}
	{
		// elseif = search;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_2;
		__this->set_elseif_6(L_15);
	}

IL_0088:
	{
		// if (search.GetComponent<programblock>().blocktype == "end" && nest == 0)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = V_2;
		NullCheck(L_16);
		programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * L_17;
		L_17 = GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8(L_16, /*hidden argument*/GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		NullCheck(L_17);
		String_t* L_18 = L_17->get_blocktype_8();
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_20 = V_1;
		if (L_20)
		{
			goto IL_00ef;
		}
	}
	{
		// end = search;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = V_2;
		__this->set_end_5(L_21);
		// end.GetComponent<programblock>().customobject[0] = this.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_end_5();
		NullCheck(L_22);
		programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * L_23;
		L_23 = GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8(L_22, /*hidden argument*/GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		NullCheck(L_23);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_24 = L_23->get_customobject_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_25);
		// target = end.transform.position.x - transform.position.x;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_end_5();
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_x_2();
		__this->set_target_8(((float)il2cpp_codegen_subtract((float)L_29, (float)L_32)));
		// break;
		goto IL_0161;
	}

IL_00ef:
	{
		// string blocktype = search.GetComponent<programblock>().blocktype;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = V_2;
		NullCheck(L_33);
		programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * L_34;
		L_34 = GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8(L_33, /*hidden argument*/GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		NullCheck(L_34);
		String_t* L_35 = L_34->get_blocktype_8();
		V_3 = L_35;
		// if (blocktype == "loop" || blocktype == "while" || blocktype == "if") nest++;
		String_t* L_36 = V_3;
		bool L_37;
		L_37 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_36, _stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_0122;
		}
	}
	{
		String_t* L_38 = V_3;
		bool L_39;
		L_39 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_38, _stringLiteralAD522BF64F2D257409CB3BAC45086A2EA0B03C59, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_0122;
		}
	}
	{
		String_t* L_40 = V_3;
		bool L_41;
		L_41 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_40, _stringLiteral61A88EF487F99DCB9558AAAD39471532DEE75F42, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0126;
		}
	}

IL_0122:
	{
		// if (blocktype == "loop" || blocktype == "while" || blocktype == "if") nest++;
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_0126:
	{
		// if (search.GetComponent<programblock>().blocktype == "end") nest--;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = V_2;
		NullCheck(L_43);
		programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * L_44;
		L_44 = GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8(L_43, /*hidden argument*/GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		NullCheck(L_44);
		String_t* L_45 = L_44->get_blocktype_8();
		bool L_46;
		L_46 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_45, _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0141;
		}
	}
	{
		// if (search.GetComponent<programblock>().blocktype == "end") nest--;
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)1));
	}

IL_0141:
	{
		// searchmax--;
		int32_t L_48 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1));
		// if (searchmax < 0)
		int32_t L_49 = V_0;
		if ((((int32_t)L_49) >= ((int32_t)0)))
		{
			goto IL_0155;
		}
	}
	{
		// print("while?searchmax??????????");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteral15B86A1C16305C5888786BF374E35F0ABB4044F7, /*hidden argument*/NULL);
		// break;
		goto IL_0161;
	}

IL_0155:
	{
		// while (search != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_50, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_001c;
		}
	}

IL_0161:
	{
		// if (elseif != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = __this->get_elseif_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_52, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0187;
		}
	}
	{
		// elseif.GetComponent<programblock>().customobject[0] = end;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54 = __this->get_elseif_6();
		NullCheck(L_54);
		programblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3 * L_55;
		L_55 = GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8(L_54, /*hidden argument*/GameObject_GetComponent_Tisprogramblock_tC37AEDC6AE6CD4BD0C80890AAF3ED131CF373BD3_m8DD36BBD0AD997D74306F6BA2229E8C9CE505AD8_RuntimeMethod_var);
		NullCheck(L_55);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_56 = L_55->get_customobject_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57 = __this->get_end_5();
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_57);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_57);
	}

IL_0187:
	{
		// if (height < target)
		float L_58 = __this->get_height_7();
		float L_59 = __this->get_target_8();
		if ((!(((float)L_58) < ((float)L_59))))
		{
			goto IL_01a7;
		}
	}
	{
		// height += 0.1f;
		float L_60 = __this->get_height_7();
		__this->set_height_7(((float)il2cpp_codegen_add((float)L_60, (float)(0.100000001f))));
	}

IL_01a7:
	{
		// if (height > target)
		float L_61 = __this->get_height_7();
		float L_62 = __this->get_target_8();
		if ((!(((float)L_61) > ((float)L_62))))
		{
			goto IL_01c7;
		}
	}
	{
		// height -= 0.1f;
		float L_63 = __this->get_height_7();
		__this->set_height_7(((float)il2cpp_codegen_subtract((float)L_63, (float)(0.100000001f))));
	}

IL_01c7:
	{
		// connectend.localPosition = new Vector3(height / 2, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64 = __this->get_connectend_4();
		float L_65 = __this->get_height_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_66), ((float)((float)L_65/(float)(2.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_64);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_64, L_66, /*hidden argument*/NULL);
		// connectend.localScale = new Vector3(height, 0.2f, 0.2f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_67 = __this->get_connectend_4();
		float L_68 = __this->get_height_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_69), L_68, (0.200000003f), (0.200000003f), /*hidden argument*/NULL);
		NullCheck(L_67);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_67, L_69, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void whileblock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void whileblock__ctor_m799F9CC57A726A41B33BC5FC05F130F9C3773ACA (whileblock_t0BBCEC21FB1F2674F833F551D913738092D7143E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void programblocksave/programblockproperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void programblockproperty__ctor_m79237EF200965B6F1AF55E2267BB4A0A8F1C5DF2 (programblockproperty_t2BCDA5CD45C219084CD0446CE5F3DDBC1254E587 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method)
{
	{
		// return m_Text;
		String_t* L_0 = __this->get_m_Text_39();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26_inline (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method)
{
	{
		// return m_Value;
		int32_t L_0 = __this->get_m_Value_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mB302D9A2277C50A5968079E5246F09B080C7A9B3_gshared_inline (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentKey_3();
		return (RuntimeObject *)L_0;
	}
}
