// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHPT5_PickupSpawner_generated_h
#error "PickupSpawner.generated.h already included, missing '#pragma once' in PickupSpawner.h"
#endif
#define CHPT5_PickupSpawner_generated_h

#define Chpt5_Source_Chpt5_PickupSpawner_h_13_SPARSE_DATA
#define Chpt5_Source_Chpt5_PickupSpawner_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnPickup); \
	DECLARE_FUNCTION(execPickupCollected);


#define Chpt5_Source_Chpt5_PickupSpawner_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnPickup); \
	DECLARE_FUNCTION(execPickupCollected);


#define Chpt5_Source_Chpt5_PickupSpawner_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupSpawner(); \
	friend struct Z_Construct_UClass_APickupSpawner_Statics; \
public: \
	DECLARE_CLASS(APickupSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chpt5"), NO_API) \
	DECLARE_SERIALIZER(APickupSpawner)


#define Chpt5_Source_Chpt5_PickupSpawner_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPickupSpawner(); \
	friend struct Z_Construct_UClass_APickupSpawner_Statics; \
public: \
	DECLARE_CLASS(APickupSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chpt5"), NO_API) \
	DECLARE_SERIALIZER(APickupSpawner)


#define Chpt5_Source_Chpt5_PickupSpawner_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickupSpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickupSpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupSpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupSpawner(APickupSpawner&&); \
	NO_API APickupSpawner(const APickupSpawner&); \
public:


#define Chpt5_Source_Chpt5_PickupSpawner_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupSpawner(APickupSpawner&&); \
	NO_API APickupSpawner(const APickupSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupSpawner)


#define Chpt5_Source_Chpt5_PickupSpawner_h_13_PRIVATE_PROPERTY_OFFSET
#define Chpt5_Source_Chpt5_PickupSpawner_h_10_PROLOG
#define Chpt5_Source_Chpt5_PickupSpawner_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chpt5_Source_Chpt5_PickupSpawner_h_13_PRIVATE_PROPERTY_OFFSET \
	Chpt5_Source_Chpt5_PickupSpawner_h_13_SPARSE_DATA \
	Chpt5_Source_Chpt5_PickupSpawner_h_13_RPC_WRAPPERS \
	Chpt5_Source_Chpt5_PickupSpawner_h_13_INCLASS \
	Chpt5_Source_Chpt5_PickupSpawner_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Chpt5_Source_Chpt5_PickupSpawner_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chpt5_Source_Chpt5_PickupSpawner_h_13_PRIVATE_PROPERTY_OFFSET \
	Chpt5_Source_Chpt5_PickupSpawner_h_13_SPARSE_DATA \
	Chpt5_Source_Chpt5_PickupSpawner_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Chpt5_Source_Chpt5_PickupSpawner_h_13_INCLASS_NO_PURE_DECLS \
	Chpt5_Source_Chpt5_PickupSpawner_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHPT5_API UClass* StaticClass<class APickupSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Chpt5_Source_Chpt5_PickupSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
