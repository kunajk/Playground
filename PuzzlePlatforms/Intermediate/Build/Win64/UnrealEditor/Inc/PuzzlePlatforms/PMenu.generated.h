// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IPMenuInterface;
#ifdef PUZZLEPLATFORMS_PMenu_generated_h
#error "PMenu.generated.h already included, missing '#pragma once' in PMenu.h"
#endif
#define PUZZLEPLATFORMS_PMenu_generated_h

#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_16_SPARSE_DATA
#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBindToInput); \
	DECLARE_FUNCTION(execTeardown); \
	DECLARE_FUNCTION(execSetMenuInterface);


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBindToInput); \
	DECLARE_FUNCTION(execTeardown); \
	DECLARE_FUNCTION(execSetMenuInterface);


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPMenu(); \
	friend struct Z_Construct_UClass_UPMenu_Statics; \
public: \
	DECLARE_CLASS(UPMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(UPMenu)


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPMenu(); \
	friend struct Z_Construct_UClass_UPMenu_Statics; \
public: \
	DECLARE_CLASS(UPMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(UPMenu)


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPMenu(UPMenu&&); \
	NO_API UPMenu(const UPMenu&); \
public:


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPMenu(UPMenu&&); \
	NO_API UPMenu(const UPMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPMenu)


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_13_PROLOG
#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_16_SPARSE_DATA \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_16_RPC_WRAPPERS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_16_INCLASS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_16_SPARSE_DATA \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_16_INCLASS_NO_PURE_DECLS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLEPLATFORMS_API UClass* StaticClass<class UPMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
