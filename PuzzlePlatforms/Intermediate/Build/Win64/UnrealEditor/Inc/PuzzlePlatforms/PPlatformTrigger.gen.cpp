// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzlePlatforms/Environment/PPlatformTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePPlatformTrigger() {}
// Cross Module References
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_APPlatformTrigger_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_APPlatformTrigger();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_APMovingPlatform_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(APPlatformTrigger::execTriggerVolumeEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerVolumeEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APPlatformTrigger::execTriggerVolumeBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerVolumeBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void APPlatformTrigger::StaticRegisterNativesAPPlatformTrigger()
	{
		UClass* Class = APPlatformTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerVolumeBeginOverlap", &APPlatformTrigger::execTriggerVolumeBeginOverlap },
			{ "TriggerVolumeEndOverlap", &APPlatformTrigger::execTriggerVolumeEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics
	{
		struct PPlatformTrigger_eventTriggerVolumeBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PPlatformTrigger_eventTriggerVolumeBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PPlatformTrigger_eventTriggerVolumeBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PPlatformTrigger_eventTriggerVolumeBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PPlatformTrigger_eventTriggerVolumeBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((PPlatformTrigger_eventTriggerVolumeBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PPlatformTrigger_eventTriggerVolumeBeginOverlap_Parms), &Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PPlatformTrigger_eventTriggerVolumeBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Environment/PPlatformTrigger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APPlatformTrigger, nullptr, "TriggerVolumeBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::PPlatformTrigger_eventTriggerVolumeBeginOverlap_Parms), Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics
	{
		struct PPlatformTrigger_eventTriggerVolumeEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PPlatformTrigger_eventTriggerVolumeEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PPlatformTrigger_eventTriggerVolumeEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PPlatformTrigger_eventTriggerVolumeEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PPlatformTrigger_eventTriggerVolumeEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Environment/PPlatformTrigger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APPlatformTrigger, nullptr, "TriggerVolumeEndOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::PPlatformTrigger_eventTriggerVolumeEndOverlap_Parms), Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APPlatformTrigger);
	UClass* Z_Construct_UClass_APPlatformTrigger_NoRegister()
	{
		return APPlatformTrigger::StaticClass();
	}
	struct Z_Construct_UClass_APPlatformTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerVolume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformsToTrigger_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformsToTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlatformsToTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerVolumeBaseLoc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerVolumeBaseLoc;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APPlatformTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatforms,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APPlatformTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeBeginOverlap, "TriggerVolumeBeginOverlap" }, // 700680820
		{ &Z_Construct_UFunction_APPlatformTrigger_TriggerVolumeEndOverlap, "TriggerVolumeEndOverlap" }, // 3946840203
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APPlatformTrigger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Environment/PPlatformTrigger.h" },
		{ "ModuleRelativePath", "Environment/PPlatformTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_TriggerVolume_MetaData[] = {
		{ "Category", "Puzzle|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Environment/PPlatformTrigger.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_TriggerVolume = { "TriggerVolume", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APPlatformTrigger, TriggerVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_TriggerVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_TriggerVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Puzzle|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Environment/PPlatformTrigger.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APPlatformTrigger, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_MeshComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_PlatformsToTrigger_Inner = { "PlatformsToTrigger", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APMovingPlatform_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_PlatformsToTrigger_MetaData[] = {
		{ "Category", "Puzzle|Config" },
		{ "ModuleRelativePath", "Environment/PPlatformTrigger.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_PlatformsToTrigger = { "PlatformsToTrigger", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APPlatformTrigger, PlatformsToTrigger), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_PlatformsToTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_PlatformsToTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_TriggerVolumeBaseLoc_MetaData[] = {
		{ "ModuleRelativePath", "Environment/PPlatformTrigger.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_TriggerVolumeBaseLoc = { "TriggerVolumeBaseLoc", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APPlatformTrigger, TriggerVolumeBaseLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_TriggerVolumeBaseLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_TriggerVolumeBaseLoc_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APPlatformTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_TriggerVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_PlatformsToTrigger_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_PlatformsToTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APPlatformTrigger_Statics::NewProp_TriggerVolumeBaseLoc,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APPlatformTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APPlatformTrigger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APPlatformTrigger_Statics::ClassParams = {
		&APPlatformTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APPlatformTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APPlatformTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APPlatformTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APPlatformTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APPlatformTrigger()
	{
		if (!Z_Registration_Info_UClass_APPlatformTrigger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APPlatformTrigger.OuterSingleton, Z_Construct_UClass_APPlatformTrigger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APPlatformTrigger.OuterSingleton;
	}
	template<> PUZZLEPLATFORMS_API UClass* StaticClass<APPlatformTrigger>()
	{
		return APPlatformTrigger::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APPlatformTrigger);
	struct Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APPlatformTrigger, APPlatformTrigger::StaticClass, TEXT("APPlatformTrigger"), &Z_Registration_Info_UClass_APPlatformTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APPlatformTrigger), 3658699778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_676675763(TEXT("/Script/PuzzlePlatforms"),
		Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
