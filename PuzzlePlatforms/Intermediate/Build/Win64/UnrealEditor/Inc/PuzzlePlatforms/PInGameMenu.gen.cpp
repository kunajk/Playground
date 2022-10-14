// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzlePlatforms/MenuSystem/PInGameMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePInGameMenu() {}
// Cross Module References
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPInGameMenu_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPInGameMenu();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPMenu();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPInGameMenu::execOnExitClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitClicked();
		P_NATIVE_END;
	}
	void UPInGameMenu::StaticRegisterNativesUPInGameMenu()
	{
		UClass* Class = UPInGameMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnExitClicked", &UPInGameMenu::execOnExitClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPInGameMenu_OnExitClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPInGameMenu_OnExitClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuSystem/PInGameMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPInGameMenu_OnExitClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPInGameMenu, nullptr, "OnExitClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPInGameMenu_OnExitClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPInGameMenu_OnExitClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPInGameMenu_OnExitClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPInGameMenu_OnExitClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPInGameMenu);
	UClass* Z_Construct_UClass_UPInGameMenu_NoRegister()
	{
		return UPInGameMenu::StaticClass();
	}
	struct Z_Construct_UClass_UPInGameMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContinueButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContinueButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPInGameMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPMenu,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatforms,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPInGameMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPInGameMenu_OnExitClicked, "OnExitClicked" }, // 15875696
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPInGameMenu_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MenuSystem/PInGameMenu.h" },
		{ "ModuleRelativePath", "MenuSystem/PInGameMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPInGameMenu_Statics::NewProp_ContinueButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PInGameMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/PInGameMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPInGameMenu_Statics::NewProp_ContinueButton = { "ContinueButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPInGameMenu, ContinueButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPInGameMenu_Statics::NewProp_ContinueButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPInGameMenu_Statics::NewProp_ContinueButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPInGameMenu_Statics::NewProp_ExitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PInGameMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/PInGameMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPInGameMenu_Statics::NewProp_ExitButton = { "ExitButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPInGameMenu, ExitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPInGameMenu_Statics::NewProp_ExitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPInGameMenu_Statics::NewProp_ExitButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPInGameMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPInGameMenu_Statics::NewProp_ContinueButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPInGameMenu_Statics::NewProp_ExitButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPInGameMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPInGameMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPInGameMenu_Statics::ClassParams = {
		&UPInGameMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPInGameMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPInGameMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPInGameMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPInGameMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPInGameMenu()
	{
		if (!Z_Registration_Info_UClass_UPInGameMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPInGameMenu.OuterSingleton, Z_Construct_UClass_UPInGameMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPInGameMenu.OuterSingleton;
	}
	template<> PUZZLEPLATFORMS_API UClass* StaticClass<UPInGameMenu>()
	{
		return UPInGameMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPInGameMenu);
	struct Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PInGameMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PInGameMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPInGameMenu, UPInGameMenu::StaticClass, TEXT("UPInGameMenu"), &Z_Registration_Info_UClass_UPInGameMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPInGameMenu), 3399908730U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PInGameMenu_h_2539971244(TEXT("/Script/PuzzlePlatforms"),
		Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PInGameMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PInGameMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
