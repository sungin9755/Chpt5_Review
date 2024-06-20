// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chpt5/TimeOfDayHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeOfDayHandler() {}
// Cross Module References
	CHPT5_API UClass* Z_Construct_UClass_ATimeOfDayHandler_NoRegister();
	CHPT5_API UClass* Z_Construct_UClass_ATimeOfDayHandler();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Chpt5();
// End Cross Module References
	void ATimeOfDayHandler::StaticRegisterNativesATimeOfDayHandler()
	{
	}
	UClass* Z_Construct_UClass_ATimeOfDayHandler_NoRegister()
	{
		return ATimeOfDayHandler::StaticClass();
	}
	struct Z_Construct_UClass_ATimeOfDayHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hours_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hours;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Minutes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Minutes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimeOfDayHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Chpt5,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDayHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimeOfDayHandler.h" },
		{ "ModuleRelativePath", "TimeOfDayHandler.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDayHandler_Statics::NewProp_TimeScale_MetaData[] = {
		{ "ModuleRelativePath", "TimeOfDayHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATimeOfDayHandler_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATimeOfDayHandler, TimeScale), METADATA_PARAMS(Z_Construct_UClass_ATimeOfDayHandler_Statics::NewProp_TimeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDayHandler_Statics::NewProp_TimeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDayHandler_Statics::NewProp_Hours_MetaData[] = {
		{ "ModuleRelativePath", "TimeOfDayHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATimeOfDayHandler_Statics::NewProp_Hours = { "Hours", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATimeOfDayHandler, Hours), METADATA_PARAMS(Z_Construct_UClass_ATimeOfDayHandler_Statics::NewProp_Hours_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDayHandler_Statics::NewProp_Hours_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDayHandler_Statics::NewProp_Minutes_MetaData[] = {
		{ "ModuleRelativePath", "TimeOfDayHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATimeOfDayHandler_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATimeOfDayHandler, Minutes), METADATA_PARAMS(Z_Construct_UClass_ATimeOfDayHandler_Statics::NewProp_Minutes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDayHandler_Statics::NewProp_Minutes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDayHandler_Statics::NewProp_ElapsedSeconds_MetaData[] = {
		{ "ModuleRelativePath", "TimeOfDayHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATimeOfDayHandler_Statics::NewProp_ElapsedSeconds = { "ElapsedSeconds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATimeOfDayHandler, ElapsedSeconds), METADATA_PARAMS(Z_Construct_UClass_ATimeOfDayHandler_Statics::NewProp_ElapsedSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDayHandler_Statics::NewProp_ElapsedSeconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimeOfDayHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDayHandler_Statics::NewProp_TimeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDayHandler_Statics::NewProp_Hours,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDayHandler_Statics::NewProp_Minutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDayHandler_Statics::NewProp_ElapsedSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimeOfDayHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimeOfDayHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATimeOfDayHandler_Statics::ClassParams = {
		&ATimeOfDayHandler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATimeOfDayHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDayHandler_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATimeOfDayHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDayHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimeOfDayHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATimeOfDayHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATimeOfDayHandler, 459246691);
	template<> CHPT5_API UClass* StaticClass<ATimeOfDayHandler>()
	{
		return ATimeOfDayHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATimeOfDayHandler(Z_Construct_UClass_ATimeOfDayHandler, &ATimeOfDayHandler::StaticClass, TEXT("/Script/Chpt5"), TEXT("ATimeOfDayHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimeOfDayHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
