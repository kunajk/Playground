// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUZZLEPLATFORMS_PMenuInterface_generated_h
#error "PMenuInterface.generated.h already included, missing '#pragma once' in PMenuInterface.h"
#endif
#define PUZZLEPLATFORMS_PMenuInterface_generated_h

#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_13_SPARSE_DATA
#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_13_RPC_WRAPPERS
#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PUZZLEPLATFORMS_API UPMenuInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPMenuInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PUZZLEPLATFORMS_API, UPMenuInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPMenuInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PUZZLEPLATFORMS_API UPMenuInterface(UPMenuInterface&&); \
	PUZZLEPLATFORMS_API UPMenuInterface(const UPMenuInterface&); \
public:


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PUZZLEPLATFORMS_API UPMenuInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PUZZLEPLATFORMS_API UPMenuInterface(UPMenuInterface&&); \
	PUZZLEPLATFORMS_API UPMenuInterface(const UPMenuInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PUZZLEPLATFORMS_API, UPMenuInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPMenuInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPMenuInterface)


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPMenuInterface(); \
	friend struct Z_Construct_UClass_UPMenuInterface_Statics; \
public: \
	DECLARE_CLASS(UPMenuInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), PUZZLEPLATFORMS_API) \
	DECLARE_SERIALIZER(UPMenuInterface)


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPMenuInterface() {} \
public: \
	typedef UPMenuInterface UClassType; \
	typedef IPMenuInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPMenuInterface() {} \
public: \
	typedef UPMenuInterface UClassType; \
	typedef IPMenuInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_10_PROLOG
#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_13_SPARSE_DATA \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_13_RPC_WRAPPERS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_13_SPARSE_DATA \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLEPLATFORMS_API UClass* StaticClass<class UPMenuInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_PMenuInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
