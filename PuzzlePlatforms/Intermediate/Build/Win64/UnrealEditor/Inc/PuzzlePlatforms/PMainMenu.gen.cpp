// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzlePlatforms/MenuSystem/PMainMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePMainMenu() {}
// Cross Module References
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPMainMenu_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPMainMenu();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPMenu();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPMainMenu::execBackClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BackClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPMainMenu::execPlayClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPMainMenu::execJoinClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPMainMenu::execHostClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HostClicked();
		P_NATIVE_END;
	}
	void UPMainMenu::StaticRegisterNativesUPMainMenu()
	{
		UClass* Class = UPMainMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BackClicked", &UPMainMenu::execBackClicked },
			{ "HostClicked", &UPMainMenu::execHostClicked },
			{ "JoinClicked", &UPMainMenu::execJoinClicked },
			{ "PlayClicked", &UPMainMenu::execPlayClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPMainMenu_BackClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMainMenu_BackClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuSystem/PMainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPMainMenu_BackClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPMainMenu, nullptr, "BackClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPMainMenu_BackClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMainMenu_BackClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPMainMenu_BackClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPMainMenu_BackClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPMainMenu_HostClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMainMenu_HostClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuSystem/PMainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPMainMenu_HostClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPMainMenu, nullptr, "HostClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPMainMenu_HostClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMainMenu_HostClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPMainMenu_HostClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPMainMenu_HostClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPMainMenu_JoinClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMainMenu_JoinClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuSystem/PMainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPMainMenu_JoinClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPMainMenu, nullptr, "JoinClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPMainMenu_JoinClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMainMenu_JoinClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPMainMenu_JoinClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPMainMenu_JoinClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPMainMenu_PlayClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPMainMenu_PlayClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuSystem/PMainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPMainMenu_PlayClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPMainMenu, nullptr, "PlayClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPMainMenu_PlayClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPMainMenu_PlayClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPMainMenu_PlayClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPMainMenu_PlayClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPMainMenu);
	UClass* Z_Construct_UClass_UPMainMenu_NoRegister()
	{
		return UPMainMenu::StaticClass();
	}
	struct Z_Construct_UClass_UPMainMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HostButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoinButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JoinButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPAddressTextBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IPAddressTextBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuSwitcher_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuSwitcher;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPMainMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPMenu,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatforms,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPMainMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPMainMenu_BackClicked, "BackClicked" }, // 1219865597
		{ &Z_Construct_UFunction_UPMainMenu_HostClicked, "HostClicked" }, // 2311579403
		{ &Z_Construct_UFunction_UPMainMenu_JoinClicked, "JoinClicked" }, // 4059208583
		{ &Z_Construct_UFunction_UPMainMenu_PlayClicked, "PlayClicked" }, // 2810552352
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPMainMenu_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MenuSystem/PMainMenu.h" },
		{ "ModuleRelativePath", "MenuSystem/PMainMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPMainMenu_Statics::NewProp_HostButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PMainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/PMainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPMainMenu_Statics::NewProp_HostButton = { "HostButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPMainMenu, HostButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPMainMenu_Statics::NewProp_HostButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPMainMenu_Statics::NewProp_HostButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPMainMenu_Statics::NewProp_JoinButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PMainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/PMainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPMainMenu_Statics::NewProp_JoinButton = { "JoinButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPMainMenu, JoinButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPMainMenu_Statics::NewProp_JoinButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPMainMenu_Statics::NewProp_JoinButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPMainMenu_Statics::NewProp_BackButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PMainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/PMainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPMainMenu_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPMainMenu, BackButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPMainMenu_Statics::NewProp_BackButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPMainMenu_Statics::NewProp_BackButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPMainMenu_Statics::NewProp_PlayButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PMainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/PMainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPMainMenu_Statics::NewProp_PlayButton = { "PlayButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPMainMenu, PlayButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPMainMenu_Statics::NewProp_PlayButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPMainMenu_Statics::NewProp_PlayButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPMainMenu_Statics::NewProp_IPAddressTextBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PMainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/PMainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPMainMenu_Statics::NewProp_IPAddressTextBox = { "IPAddressTextBox", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPMainMenu, IPAddressTextBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPMainMenu_Statics::NewProp_IPAddressTextBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPMainMenu_Statics::NewProp_IPAddressTextBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPMainMenu_Statics::NewProp_MenuSwitcher_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PMainMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/PMainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPMainMenu_Statics::NewProp_MenuSwitcher = { "MenuSwitcher", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPMainMenu, MenuSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPMainMenu_Statics::NewProp_MenuSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPMainMenu_Statics::NewProp_MenuSwitcher_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPMainMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPMainMenu_Statics::NewProp_HostButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPMainMenu_Statics::NewProp_JoinButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPMainMenu_Statics::NewProp_BackButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPMainMenu_Statics::NewProp_PlayButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPMainMenu_Statics::NewProp_IPAddressTextBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPMainMenu_Statics::NewProp_MenuSwitcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPMainMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPMainMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPMainMenu_Statics::ClassParams = {
		&UPMainMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPMainMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPMainMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPMainMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPMainMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPMainMenu()
	{
		if (!Z_Registration_Info_UClass_UPMainMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPMainMenu.OuterSingleton, Z_Construct_UClass_UPMainMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPMainMenu.OuterSingleton;
	}
	template<> PUZZLEPLATFORMS_API UClass* StaticClass<UPMainMenu>()
	{
		return UPMainMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPMainMenu);
	struct Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPMainMenu, UPMainMenu::StaticClass, TEXT("UPMainMenu"), &Z_Registration_Info_UClass_UPMainMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPMainMenu), 2798193304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_4292900074(TEXT("/Script/PuzzlePlatforms"),
		Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
