// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chpt5/PickUp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUp() {}
// Cross Module References
	CHPT5_API UClass* Z_Construct_UClass_APickUp_NoRegister();
	CHPT5_API UClass* Z_Construct_UClass_APickUp();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Chpt5();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URotatingMovementComponent_NoRegister();
// End Cross Module References
	void APickUp::StaticRegisterNativesAPickUp()
	{
	}
	UClass* Z_Construct_UClass_APickUp_NoRegister()
	{
		return APickUp::StaticClass();
	}
	struct Z_Construct_UClass_APickUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotatingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RotatingComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Chpt5,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickUp.h" },
		{ "ModuleRelativePath", "PickUp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::NewProp_MyMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_MyMesh = { "MyMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUp, MyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUp_Statics::NewProp_MyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::NewProp_MyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickUp_Statics::NewProp_RotatingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickUp.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickUp_Statics::NewProp_RotatingComponent = { "RotatingComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickUp, RotatingComponent), Z_Construct_UClass_URotatingMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickUp_Statics::NewProp_RotatingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::NewProp_RotatingComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_MyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickUp_Statics::NewProp_RotatingComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickUp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickUp_Statics::ClassParams = {
		&APickUp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APickUp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickUp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickUp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickUp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickUp, 335562566);
	template<> CHPT5_API UClass* StaticClass<APickUp>()
	{
		return APickUp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickUp(Z_Construct_UClass_APickUp, &APickUp::StaticClass, TEXT("/Script/Chpt5"), TEXT("APickUp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickUp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
