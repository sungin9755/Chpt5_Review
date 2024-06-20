// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHPT5_Clock_generated_h
#error "Clock.generated.h already included, missing '#pragma once' in Clock.h"
#endif
#define CHPT5_Clock_generated_h

#define Chpt5_Source_Chpt5_Clock_h_12_SPARSE_DATA
#define Chpt5_Source_Chpt5_Clock_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTimeChanged);


#define Chpt5_Source_Chpt5_Clock_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTimeChanged);


#define Chpt5_Source_Chpt5_Clock_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClock(); \
	friend struct Z_Construct_UClass_AClock_Statics; \
public: \
	DECLARE_CLASS(AClock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chpt5"), NO_API) \
	DECLARE_SERIALIZER(AClock)


#define Chpt5_Source_Chpt5_Clock_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAClock(); \
	friend struct Z_Construct_UClass_AClock_Statics; \
public: \
	DECLARE_CLASS(AClock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chpt5"), NO_API) \
	DECLARE_SERIALIZER(AClock)


#define Chpt5_Source_Chpt5_Clock_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AClock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AClock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClock(AClock&&); \
	NO_API AClock(const AClock&); \
public:


#define Chpt5_Source_Chpt5_Clock_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClock(AClock&&); \
	NO_API AClock(const AClock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AClock)


#define Chpt5_Source_Chpt5_Clock_h_12_PRIVATE_PROPERTY_OFFSET
#define Chpt5_Source_Chpt5_Clock_h_9_PROLOG
#define Chpt5_Source_Chpt5_Clock_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chpt5_Source_Chpt5_Clock_h_12_PRIVATE_PROPERTY_OFFSET \
	Chpt5_Source_Chpt5_Clock_h_12_SPARSE_DATA \
	Chpt5_Source_Chpt5_Clock_h_12_RPC_WRAPPERS \
	Chpt5_Source_Chpt5_Clock_h_12_INCLASS \
	Chpt5_Source_Chpt5_Clock_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Chpt5_Source_Chpt5_Clock_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chpt5_Source_Chpt5_Clock_h_12_PRIVATE_PROPERTY_OFFSET \
	Chpt5_Source_Chpt5_Clock_h_12_SPARSE_DATA \
	Chpt5_Source_Chpt5_Clock_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Chpt5_Source_Chpt5_Clock_h_12_INCLASS_NO_PURE_DECLS \
	Chpt5_Source_Chpt5_Clock_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHPT5_API UClass* StaticClass<class AClock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Chpt5_Source_Chpt5_Clock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
