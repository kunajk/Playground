// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef PUZZLEPLATFORMS_PPlatformTrigger_generated_h
#error "PPlatformTrigger.generated.h already included, missing '#pragma once' in PPlatformTrigger.h"
#endif
#define PUZZLEPLATFORMS_PPlatformTrigger_generated_h

#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_15_SPARSE_DATA
#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTriggerVolumeEndOverlap); \
	DECLARE_FUNCTION(execTriggerVolumeBeginOverlap);


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriggerVolumeEndOverlap); \
	DECLARE_FUNCTION(execTriggerVolumeBeginOverlap);


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPPlatformTrigger(); \
	friend struct Z_Construct_UClass_APPlatformTrigger_Statics; \
public: \
	DECLARE_CLASS(APPlatformTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(APPlatformTrigger)


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPPlatformTrigger(); \
	friend struct Z_Construct_UClass_APPlatformTrigger_Statics; \
public: \
	DECLARE_CLASS(APPlatformTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(APPlatformTrigger)


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APPlatformTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APPlatformTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APPlatformTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APPlatformTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APPlatformTrigger(APPlatformTrigger&&); \
	NO_API APPlatformTrigger(const APPlatformTrigger&); \
public:


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APPlatformTrigger(APPlatformTrigger&&); \
	NO_API APPlatformTrigger(const APPlatformTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APPlatformTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APPlatformTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APPlatformTrigger)


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_12_PROLOG
#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_15_SPARSE_DATA \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_15_RPC_WRAPPERS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_15_INCLASS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_15_SPARSE_DATA \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_15_INCLASS_NO_PURE_DECLS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLEPLATFORMS_API UClass* StaticClass<class APPlatformTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PuzzlePlatforms_Source_PuzzlePlatforms_Environment_PPlatformTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
