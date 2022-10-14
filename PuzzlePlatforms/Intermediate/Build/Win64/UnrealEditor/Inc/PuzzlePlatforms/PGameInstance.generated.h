// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUZZLEPLATFORMS_PGameInstance_generated_h
#error "PGameInstance.generated.h already included, missing '#pragma once' in PGameInstance.h"
#endif
#define PUZZLEPLATFORMS_PGameInstance_generated_h

#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_15_SPARSE_DATA
#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTransitToMainMenu); \
	DECLARE_FUNCTION(execJoin); \
	DECLARE_FUNCTION(execHost); \
	DECLARE_FUNCTION(execToggleInGameMenu); \
	DECLARE_FUNCTION(execLoadMenu);


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTransitToMainMenu); \
	DECLARE_FUNCTION(execJoin); \
	DECLARE_FUNCTION(execHost); \
	DECLARE_FUNCTION(execToggleInGameMenu); \
	DECLARE_FUNCTION(execLoadMenu);


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPGameInstance(); \
	friend struct Z_Construct_UClass_UPGameInstance_Statics; \
public: \
	DECLARE_CLASS(UPGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(UPGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UPGameInstance*>(this); }


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPGameInstance(); \
	friend struct Z_Construct_UClass_UPGameInstance_Statics; \
public: \
	DECLARE_CLASS(UPGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(UPGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UPGameInstance*>(this); }


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPGameInstance(UPGameInstance&&); \
	NO_API UPGameInstance(const UPGameInstance&); \
public:


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPGameInstance(UPGameInstance&&); \
	NO_API UPGameInstance(const UPGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPGameInstance)


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_12_PROLOG
#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_15_SPARSE_DATA \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_15_RPC_WRAPPERS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_15_INCLASS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_15_SPARSE_DATA \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLEPLATFORMS_API UClass* StaticClass<class UPGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PuzzlePlatforms_Source_PuzzlePlatforms_PGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
