// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzlePlatforms/MenuSystem/PMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePMenu() {}
// Cross Module References
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPMenu_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPMenu();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPMenuInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPMenu::execBindToInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPMenu::execTeardown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Teardown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPMenu::execSetMenuInterface)
	{
		P_GET_TINTERFACE(IPMenuInterface,Z_Param__MenuInterface);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuInterface(Z_Param__MenuInterface);
		P_NATIVE_END;
	}
	void UPMenu::StaticRegisterNativesUPMenu()
	{
		UClass* Class = UPMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindToInput", &UPMenu::execBindToInput },
			{ "SetMenuInterface", &UPMenu::execSetMenuInterface },
			{ "Teardown", &UPMenu::execTeardown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPMenu_BindToInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMenu_BindToInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuSystem/PMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPMenu_BindToInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPMenu, nullptr, "BindToInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPMenu_BindToInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMenu_BindToInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPMenu_BindToInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPMenu_BindToInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPMenu_SetMenuInterface_Statics
	{
		struct PMenu_eventSetMenuInterface_Parms
		{
			TScriptInterface<IPMenuInterface> _MenuInterface;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp__MenuInterface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UPMenu_SetMenuInterface_Statics::NewProp__MenuInterface = { "_MenuInterface", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PMenu_eventSetMenuInterface_Parms, _MenuInterface), Z_Construct_UClass_UPMenuInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPMenu_SetMenuInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPMenu_SetMenuInterface_Statics::NewProp__MenuInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMenu_SetMenuInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Menu|Interface" },
		{ "ModuleRelativePath", "MenuSystem/PMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPMenu_SetMenuInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPMenu, nullptr, "SetMenuInterface", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPMenu_SetMenuInterface_Statics::PMenu_eventSetMenuInterface_Parms), Z_Construct_UFunction_UPMenu_SetMenuInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMenu_SetMenuInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPMenu_SetMenuInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMenu_SetMenuInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPMenu_SetMenuInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPMenu_SetMenuInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPMenu_Teardown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMenu_Teardown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuSystem/PMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPMenu_Teardown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPMenu, nullptr, "Teardown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPMenu_Teardown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMenu_Teardown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPMenu_Teardown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPMenu_Teardown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPMenu);
	UClass* Z_Construct_UClass_UPMenu_NoRegister()
	{
		return UPMenu::StaticClass();
	}
	struct Z_Construct_UClass_UPMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuInterface_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_MenuInterface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatforms,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPMenu_BindToInput, "BindToInput" }, // 4139214173
		{ &Z_Construct_UFunction_UPMenu_SetMenuInterface, "SetMenuInterface" }, // 3116301414
		{ &Z_Construct_UFunction_UPMenu_Teardown, "Teardown" }, // 3410465284
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MenuSystem/PMenu.h" },
		{ "ModuleRelativePath", "MenuSystem/PMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPMenu_Statics::NewProp_MenuInterface_MetaData[] = {
		{ "ModuleRelativePath", "MenuSystem/PMenu.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UPMenu_Statics::NewProp_MenuInterface = { "MenuInterface", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPMenu, MenuInterface), Z_Construct_UClass_UPMenuInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPMenu_Statics::NewProp_MenuInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPMenu_Statics::NewProp_MenuInterface_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPMenu_Statics::NewProp_MenuInterface,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPMenu_Statics::ClassParams = {
		&UPMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPMenu()
	{
		if (!Z_Registration_Info_UClass_UPMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPMenu.OuterSingleton, Z_Construct_UClass_UPMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPMenu.OuterSingleton;
	}
	template<> PUZZLEPLATFORMS_API UClass* StaticClass<UPMenu>()
	{
		return UPMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPMenu);
	struct Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPMenu, UPMenu::StaticClass, TEXT("UPMenu"), &Z_Registration_Info_UClass_UPMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPMenu), 3367401095U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_2355123778(TEXT("/Script/PuzzlePlatforms"),
		Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
