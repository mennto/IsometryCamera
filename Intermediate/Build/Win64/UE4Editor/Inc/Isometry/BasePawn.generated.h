// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ISOMETRY_BasePawn_generated_h
#error "BasePawn.generated.h already included, missing '#pragma once' in BasePawn.h"
#endif
#define ISOMETRY_BasePawn_generated_h

#define Isometry_Source_Isometry_BasePawn_h_16_SPARSE_DATA
#define Isometry_Source_Isometry_BasePawn_h_16_RPC_WRAPPERS
#define Isometry_Source_Isometry_BasePawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Isometry_Source_Isometry_BasePawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePawn(); \
	friend struct Z_Construct_UClass_ABasePawn_Statics; \
public: \
	DECLARE_CLASS(ABasePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Isometry"), NO_API) \
	DECLARE_SERIALIZER(ABasePawn)


#define Isometry_Source_Isometry_BasePawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesABasePawn(); \
	friend struct Z_Construct_UClass_ABasePawn_Statics; \
public: \
	DECLARE_CLASS(ABasePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Isometry"), NO_API) \
	DECLARE_SERIALIZER(ABasePawn)


#define Isometry_Source_Isometry_BasePawn_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePawn(ABasePawn&&); \
	NO_API ABasePawn(const ABasePawn&); \
public:


#define Isometry_Source_Isometry_BasePawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePawn(ABasePawn&&); \
	NO_API ABasePawn(const ABasePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePawn)


#define Isometry_Source_Isometry_BasePawn_h_16_PRIVATE_PROPERTY_OFFSET
#define Isometry_Source_Isometry_BasePawn_h_13_PROLOG
#define Isometry_Source_Isometry_BasePawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Isometry_Source_Isometry_BasePawn_h_16_PRIVATE_PROPERTY_OFFSET \
	Isometry_Source_Isometry_BasePawn_h_16_SPARSE_DATA \
	Isometry_Source_Isometry_BasePawn_h_16_RPC_WRAPPERS \
	Isometry_Source_Isometry_BasePawn_h_16_INCLASS \
	Isometry_Source_Isometry_BasePawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Isometry_Source_Isometry_BasePawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Isometry_Source_Isometry_BasePawn_h_16_PRIVATE_PROPERTY_OFFSET \
	Isometry_Source_Isometry_BasePawn_h_16_SPARSE_DATA \
	Isometry_Source_Isometry_BasePawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Isometry_Source_Isometry_BasePawn_h_16_INCLASS_NO_PURE_DECLS \
	Isometry_Source_Isometry_BasePawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ISOMETRY_API UClass* StaticClass<class ABasePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Isometry_Source_Isometry_BasePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
