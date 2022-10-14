// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUZZLEPLATFORMS_PMainMenu_generated_h
#error "PMainMenu.generated.h already included, missing '#pragma once' in PMainMenu.h"
#endif
#define PUZZLEPLATFORMS_PMainMenu_generated_h

#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_23_SPARSE_DATA
#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBackClicked); \
	DECLARE_FUNCTION(execPlayClicked); \
	DECLARE_FUNCTION(execJoinClicked); \
	DECLARE_FUNCTION(execHostClicked);


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBackClicked); \
	DECLARE_FUNCTION(execPlayClicked); \
	DECLARE_FUNCTION(execJoinClicked); \
	DECLARE_FUNCTION(execHostClicked);


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPMainMenu(); \
	friend struct Z_Construct_UClass_UPMainMenu_Statics; \
public: \
	DECLARE_CLASS(UPMainMenu, UPMenu, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(UPMainMenu)


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPMainMenu(); \
	friend struct Z_Construct_UClass_UPMainMenu_Statics; \
public: \
	DECLARE_CLASS(UPMainMenu, UPMenu, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(UPMainMenu)


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPMainMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPMainMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPMainMenu(UPMainMenu&&); \
	NO_API UPMainMenu(const UPMainMenu&); \
public:


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPMainMenu(UPMainMenu&&); \
	NO_API UPMainMenu(const UPMainMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPMainMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPMainMenu)


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_20_PROLOG
#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_23_SPARSE_DATA \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_23_RPC_WRAPPERS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_23_INCLASS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_23_SPARSE_DATA \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_23_INCLASS_NO_PURE_DECLS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLEPLATFORMS_API UClass* StaticClass<class UPMainMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMainMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
