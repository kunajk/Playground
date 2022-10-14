// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzlePlatforms/MenuSystem/PMenuInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePMenuInterface() {}
// Cross Module References
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPMenuInterface_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPMenuInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
// End Cross Module References
	void UPMenuInterface::StaticRegisterNativesUPMenuInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPMenuInterface);
	UClass* Z_Construct_UClass_UPMenuInterface_NoRegister()
	{
		return UPMenuInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPMenuInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPMenuInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatforms,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPMenuInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuSystem/PMenuInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPMenuInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPMenuInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPMenuInterface_Statics::ClassParams = {
		&UPMenuInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPMenuInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPMenuInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPMenuInterface()
	{
		if (!Z_Registration_Info_UClass_UPMenuInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPMenuInterface.OuterSingleton, Z_Construct_UClass_UPMenuInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPMenuInterface.OuterSingleton;
	}
	template<> PUZZLEPLATFORMS_API UClass* StaticClass<UPMenuInterface>()
	{
		return UPMenuInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPMenuInterface);
	struct Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPMenuInterface, UPMenuInterface::StaticClass, TEXT("UPMenuInterface"), &Z_Registration_Info_UClass_UPMenuInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPMenuInterface), 1754452209U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_3734918438(TEXT("/Script/PuzzlePlatforms"),
		Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
