﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern void AudioSettings_InvokeOnAudioConfigurationChanged_m2CBD1FC39E7AE46E07E777990310D1DC40FB980E (void);
// 0x00000002 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern void AudioConfigurationChangeHandler__ctor_mB63AFBABA4712DF64F06A65CC7CE3C9E8C58080B (void);
// 0x00000003 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern void AudioConfigurationChangeHandler_Invoke_mDC001A19067B6A02B0DE21A4D66FC8D82529F911 (void);
// 0x00000004 System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern void AudioClip_InvokePCMReaderCallback_Internal_m9CB2976CDC2C73A92479F8C11C30B17FAA05751F (void);
// 0x00000005 System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern void AudioClip_InvokePCMSetPositionCallback_Internal_m9F3ACF3A244349568C0D0D1D40EE72EF013FB45D (void);
// 0x00000006 System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern void PCMReaderCallback__ctor_mCA9CC5271DE0E4083B85759CA74EED1C1CD219F7 (void);
// 0x00000007 System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern void PCMReaderCallback_Invoke_mE5E7A777A52B9627F9A6A57A140E5C4AAB5A1387 (void);
// 0x00000008 System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern void PCMSetPositionCallback__ctor_m0204C8557D7FB9E95F33168EDFD64182D9342002 (void);
// 0x00000009 System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern void PCMSetPositionCallback_Invoke_m1FBFFA5FC15B57601D6D13F4A574F7CAD2A93B7E (void);
// 0x0000000A UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle()
extern void AudioClipPlayable_GetHandle_mBEB846B088961170B6DB961951B511C11B98E0B8 (void);
// 0x0000000B System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable)
extern void AudioClipPlayable_Equals_m52ECDD49AE6BD8AB4C0AC83C417A0C1B23E3E55E (void);
// 0x0000000C UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle()
extern void AudioMixerPlayable_GetHandle_m76EFC486A7639C4842F590F544B60988CF27BB17 (void);
// 0x0000000D System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable)
extern void AudioMixerPlayable_Equals_mB55D2602ACCD196F61AF3D1AE90B81930A9AB7E8 (void);
// 0x0000000E System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32)
extern void AudioSampleProvider_InvokeSampleFramesAvailable_mE6689CFA13C0621F305F389FEEE4D543B71BF236 (void);
// 0x0000000F System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32)
extern void AudioSampleProvider_InvokeSampleFramesOverflow_m998BEADD2A2B4BEF0906A31108B6DC486411CC78 (void);
// 0x00000010 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr)
extern void SampleFramesHandler__ctor_m389B32B949592BFD1BA53D0C0983CA6B5BA6AAC7 (void);
// 0x00000011 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32)
extern void SampleFramesHandler_Invoke_mCB6172CE3EF20C5E12A697A5CE5EEDED9A3B5779 (void);
static Il2CppMethodPointer s_methodPointers[17] = 
{
	AudioSettings_InvokeOnAudioConfigurationChanged_m2CBD1FC39E7AE46E07E777990310D1DC40FB980E,
	AudioConfigurationChangeHandler__ctor_mB63AFBABA4712DF64F06A65CC7CE3C9E8C58080B,
	AudioConfigurationChangeHandler_Invoke_mDC001A19067B6A02B0DE21A4D66FC8D82529F911,
	AudioClip_InvokePCMReaderCallback_Internal_m9CB2976CDC2C73A92479F8C11C30B17FAA05751F,
	AudioClip_InvokePCMSetPositionCallback_Internal_m9F3ACF3A244349568C0D0D1D40EE72EF013FB45D,
	PCMReaderCallback__ctor_mCA9CC5271DE0E4083B85759CA74EED1C1CD219F7,
	PCMReaderCallback_Invoke_mE5E7A777A52B9627F9A6A57A140E5C4AAB5A1387,
	PCMSetPositionCallback__ctor_m0204C8557D7FB9E95F33168EDFD64182D9342002,
	PCMSetPositionCallback_Invoke_m1FBFFA5FC15B57601D6D13F4A574F7CAD2A93B7E,
	AudioClipPlayable_GetHandle_mBEB846B088961170B6DB961951B511C11B98E0B8,
	AudioClipPlayable_Equals_m52ECDD49AE6BD8AB4C0AC83C417A0C1B23E3E55E,
	AudioMixerPlayable_GetHandle_m76EFC486A7639C4842F590F544B60988CF27BB17,
	AudioMixerPlayable_Equals_mB55D2602ACCD196F61AF3D1AE90B81930A9AB7E8,
	AudioSampleProvider_InvokeSampleFramesAvailable_mE6689CFA13C0621F305F389FEEE4D543B71BF236,
	AudioSampleProvider_InvokeSampleFramesOverflow_m998BEADD2A2B4BEF0906A31108B6DC486411CC78,
	SampleFramesHandler__ctor_m389B32B949592BFD1BA53D0C0983CA6B5BA6AAC7,
	SampleFramesHandler_Invoke_mCB6172CE3EF20C5E12A697A5CE5EEDED9A3B5779,
};
extern void AudioClipPlayable_GetHandle_mBEB846B088961170B6DB961951B511C11B98E0B8_AdjustorThunk (void);
extern void AudioClipPlayable_Equals_m52ECDD49AE6BD8AB4C0AC83C417A0C1B23E3E55E_AdjustorThunk (void);
extern void AudioMixerPlayable_GetHandle_m76EFC486A7639C4842F590F544B60988CF27BB17_AdjustorThunk (void);
extern void AudioMixerPlayable_Equals_mB55D2602ACCD196F61AF3D1AE90B81930A9AB7E8_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[4] = 
{
	{ 0x0600000A, AudioClipPlayable_GetHandle_mBEB846B088961170B6DB961951B511C11B98E0B8_AdjustorThunk },
	{ 0x0600000B, AudioClipPlayable_Equals_m52ECDD49AE6BD8AB4C0AC83C417A0C1B23E3E55E_AdjustorThunk },
	{ 0x0600000C, AudioMixerPlayable_GetHandle_m76EFC486A7639C4842F590F544B60988CF27BB17_AdjustorThunk },
	{ 0x0600000D, AudioMixerPlayable_Equals_mB55D2602ACCD196F61AF3D1AE90B81930A9AB7E8_AdjustorThunk },
};
static const int32_t s_InvokerIndices[17] = 
{
	2614,
	787,
	1376,
	1357,
	1345,
	787,
	1357,
	787,
	1345,
	1602,
	1115,
	1602,
	1116,
	1345,
	1345,
	787,
	785,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_AudioModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_AudioModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_AudioModule_CodeGenModule = 
{
	"UnityEngine.AudioModule.dll",
	17,
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
	g_UnityEngine_AudioModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
