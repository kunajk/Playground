// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzlePlatforms/PGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePGameInstance() {}
// Cross Module References
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPGameInstance_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPMenu_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPMenuInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPGameInstance::execTransitToMainMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TransitToMainMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPGameInstance::execJoin)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_IPAddres);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Join(Z_Param_Out_IPAddres);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPGameInstance::execHost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Host();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPGameInstance::execToggleInGameMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleInGameMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPGameInstance::execLoadMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadMenu();
		P_NATIVE_END;
	}
	void UPGameInstance::StaticRegisterNativesUPGameInstance()
	{
		UClass* Class = UPGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Host", &UPGameInstance::execHost },
			{ "Join", &UPGameInstance::execJoin },
			{ "LoadMenu", &UPGameInstance::execLoadMenu },
			{ "ToggleInGameMenu", &UPGameInstance::execToggleInGameMenu },
			{ "TransitToMainMenu", &UPGameInstance::execTransitToMainMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPGameInstance_Host_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPGameInstance_Host_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPGameInstance_Host_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPGameInstance, nullptr, "Host", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPGameInstance_Host_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPGameInstance_Host_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPGameInstance_Host()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPGameInstance_Host_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPGameInstance_Join_Statics
	{
		struct PGameInstance_eventJoin_Parms
		{
			FString IPAddres;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddres;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPGameInstance_Join_Statics::NewProp_IPAddres = { "IPAddres", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PGameInstance_eventJoin_Parms, IPAddres), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPGameInstance_Join_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPGameInstance_Join_Statics::NewProp_IPAddres,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPGameInstance_Join_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPGameInstance_Join_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPGameInstance, nullptr, "Join", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPGameInstance_Join_Statics::PGameInstance_eventJoin_Parms), Z_Construct_UFunction_UPGameInstance_Join_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPGameInstance_Join_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPGameInstance_Join_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPGameInstance_Join_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPGameInstance_Join()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPGameInstance_Join_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPGameInstance_LoadMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPGameInstance_LoadMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle|State" },
		{ "ModuleRelativePath", "PGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPGameInstance_LoadMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPGameInstance, nullptr, "LoadMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPGameInstance_LoadMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPGameInstance_LoadMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPGameInstance_LoadMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPGameInstance_LoadMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPGameInstance_ToggleInGameMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPGameInstance_ToggleInGameMenu_Statics::Function_MetaDataParams[] = {
		{ "Category", "Puzzle" },
		{ "ModuleRelativePath", "PGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPGameInstance_ToggleInGameMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPGameInstance, nullptr, "ToggleInGameMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPGameInstance_ToggleInGameMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPGameInstance_ToggleInGameMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPGameInstance_ToggleInGameMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPGameInstance_ToggleInGameMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPGameInstance_TransitToMainMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPGameInstance_TransitToMainMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPGameInstance_TransitToMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPGameInstance, nullptr, "TransitToMainMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPGameInstance_TransitToMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPGameInstance_TransitToMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPGameInstance_TransitToMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPGameInstance_TransitToMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPGameInstance);
	UClass* Z_Construct_UClass_UPGameInstance_NoRegister()
	{
		return UPGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MenuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGameMenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InGameMenuClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatforms,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPGameInstance_Host, "Host" }, // 4277467152
		{ &Z_Construct_UFunction_UPGameInstance_Join, "Join" }, // 1648538223
		{ &Z_Construct_UFunction_UPGameInstance_LoadMenu, "LoadMenu" }, // 2648499299
		{ &Z_Construct_UFunction_UPGameInstance_ToggleInGameMenu, "ToggleInGameMenu" }, // 130755738
		{ &Z_Construct_UFunction_UPGameInstance_TransitToMainMenu, "TransitToMainMenu" }, // 3413172441
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PGameInstance.h" },
		{ "ModuleRelativePath", "PGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPGameInstance_Statics::NewProp_CurrentMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPGameInstance_Statics::NewProp_CurrentMenu = { "CurrentMenu", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPGameInstance, CurrentMenu), Z_Construct_UClass_UPMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPGameInstance_Statics::NewProp_CurrentMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPGameInstance_Statics::NewProp_CurrentMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPGameInstance_Statics::NewProp_MenuClass_MetaData[] = {
		{ "ModuleRelativePath", "PGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPGameInstance_Statics::NewProp_MenuClass = { "MenuClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPGameInstance, MenuClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPGameInstance_Statics::NewProp_MenuClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPGameInstance_Statics::NewProp_MenuClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPGameInstance_Statics::NewProp_InGameMenuClass_MetaData[] = {
		{ "ModuleRelativePath", "PGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPGameInstance_Statics::NewProp_InGameMenuClass = { "InGameMenuClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPGameInstance, InGameMenuClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPGameInstance_Statics::NewProp_InGameMenuClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPGameInstance_Statics::NewProp_InGameMenuClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPGameInstance_Statics::NewProp_CurrentMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPGameInstance_Statics::NewProp_MenuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPGameInstance_Statics::NewProp_InGameMenuClass,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPGameInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPMenuInterface_NoRegister, (int32)VTABLE_OFFSET(UPGameInstance, IPMenuInterface), false },  // 1754452209
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPGameInstance_Statics::ClassParams = {
		&UPGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPGameInstance_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPGameInstance_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPGameInstance()
	{
		if (!Z_Registration_Info_UClass_UPGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPGameInstance.OuterSingleton, Z_Construct_UClass_UPGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPGameInstance.OuterSingleton;
	}
	template<> PUZZLEPLATFORMS_API UClass* StaticClass<UPGameInstance>()
	{
		return UPGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPGameInstance);
	struct Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPGameInstance, UPGameInstance::StaticClass, TEXT("UPGameInstance"), &Z_Registration_Info_UClass_UPGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPGameInstance), 1076629979U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_768505387(TEXT("/Script/PuzzlePlatforms"),
		Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
