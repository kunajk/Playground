// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzlePlatforms/Environment/PMovingPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePMovingPlatform() {}
// Cross Module References
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_APMovingPlatform_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_APMovingPlatform();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(APMovingPlatform::execRemovActiveTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovActiveTrigger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APMovingPlatform::execAddActiveTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddActiveTrigger();
		P_NATIVE_END;
	}
	void APMovingPlatform::StaticRegisterNativesAPMovingPlatform()
	{
		UClass* Class = APMovingPlatform::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActiveTrigger", &APMovingPlatform::execAddActiveTrigger },
			{ "RemovActiveTrigger", &APMovingPlatform::execRemovActiveTrigger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APMovingPlatform_AddActiveTrigger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APMovingPlatform_AddActiveTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Environment/PMovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APMovingPlatform_AddActiveTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APMovingPlatform, nullptr, "AddActiveTrigger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APMovingPlatform_AddActiveTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APMovingPlatform_AddActiveTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APMovingPlatform_AddActiveTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APMovingPlatform_AddActiveTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APMovingPlatform_RemovActiveTrigger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APMovingPlatform_RemovActiveTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Environment/PMovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APMovingPlatform_RemovActiveTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APMovingPlatform, nullptr, "RemovActiveTrigger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APMovingPlatform_RemovActiveTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APMovingPlatform_RemovActiveTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APMovingPlatform_RemovActiveTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APMovingPlatform_RemovActiveTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APMovingPlatform);
	UClass* Z_Construct_UClass_APMovingPlatform_NoRegister()
	{
		return APMovingPlatform::StaticClass();
	}
	struct Z_Construct_UClass_APMovingPlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubeSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CubeSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTriggers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveTriggers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APMovingPlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatforms,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APMovingPlatform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APMovingPlatform_AddActiveTrigger, "AddActiveTrigger" }, // 3315839295
		{ &Z_Construct_UFunction_APMovingPlatform_RemovActiveTrigger, "RemovActiveTrigger" }, // 3591868902
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APMovingPlatform_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "Environment/PMovingPlatform.h" },
		{ "ModuleRelativePath", "Environment/PMovingPlatform.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APMovingPlatform_Statics::NewProp_CubeSpeed_MetaData[] = {
		{ "Category", "Puzzle|Config" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Environment/PMovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APMovingPlatform_Statics::NewProp_CubeSpeed = { "CubeSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APMovingPlatform, CubeSpeed), METADATA_PARAMS(Z_Construct_UClass_APMovingPlatform_Statics::NewProp_CubeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APMovingPlatform_Statics::NewProp_CubeSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APMovingPlatform_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Puzzle|Config" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Environment/PMovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APMovingPlatform_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APMovingPlatform, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APMovingPlatform_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APMovingPlatform_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APMovingPlatform_Statics::NewProp_ActiveTriggers_MetaData[] = {
		{ "Category", "Puzzle|Config" },
		{ "ModuleRelativePath", "Environment/PMovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APMovingPlatform_Statics::NewProp_ActiveTriggers = { "ActiveTriggers", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APMovingPlatform, ActiveTriggers), METADATA_PARAMS(Z_Construct_UClass_APMovingPlatform_Statics::NewProp_ActiveTriggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APMovingPlatform_Statics::NewProp_ActiveTriggers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APMovingPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APMovingPlatform_Statics::NewProp_CubeSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APMovingPlatform_Statics::NewProp_TargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APMovingPlatform_Statics::NewProp_ActiveTriggers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APMovingPlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APMovingPlatform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APMovingPlatform_Statics::ClassParams = {
		&APMovingPlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APMovingPlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APMovingPlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APMovingPlatform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APMovingPlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APMovingPlatform()
	{
		if (!Z_Registration_Info_UClass_APMovingPlatform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APMovingPlatform.OuterSingleton, Z_Construct_UClass_APMovingPlatform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APMovingPlatform.OuterSingleton;
	}
	template<> PUZZLEPLATFORMS_API UClass* StaticClass<APMovingPlatform>()
	{
		return APMovingPlatform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APMovingPlatform);
	struct Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PMovingPlatform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PMovingPlatform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APMovingPlatform, APMovingPlatform::StaticClass, TEXT("APMovingPlatform"), &Z_Registration_Info_UClass_APMovingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APMovingPlatform), 2589196145U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PMovingPlatform_h_182222976(TEXT("/Script/PuzzlePlatforms"),
		Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PMovingPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PMovingPlatform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
