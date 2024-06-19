// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chpt5/Chapter_05GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChapter_05GameModeBase() {}
// Cross Module References
	CHPT5_API UClass* Z_Construct_UClass_AChapter_05GameModeBase_NoRegister();
	CHPT5_API UClass* Z_Construct_UClass_AChapter_05GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Chpt5();
// End Cross Module References
	void AChapter_05GameModeBase::StaticRegisterNativesAChapter_05GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AChapter_05GameModeBase_NoRegister()
	{
		return AChapter_05GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AChapter_05GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChapter_05GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Chpt5,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChapter_05GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Chapter_05GameModeBase.h" },
		{ "ModuleRelativePath", "Chapter_05GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChapter_05GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChapter_05GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChapter_05GameModeBase_Statics::ClassParams = {
		&AChapter_05GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AChapter_05GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChapter_05GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChapter_05GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChapter_05GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChapter_05GameModeBase, 2998149672);
	template<> CHPT5_API UClass* StaticClass<AChapter_05GameModeBase>()
	{
		return AChapter_05GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChapter_05GameModeBase(Z_Construct_UClass_AChapter_05GameModeBase, &AChapter_05GameModeBase::StaticClass, TEXT("/Script/Chpt5"), TEXT("AChapter_05GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChapter_05GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
