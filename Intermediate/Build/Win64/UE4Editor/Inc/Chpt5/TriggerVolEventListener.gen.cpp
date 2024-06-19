// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chpt5/TriggerVolEventListener.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerVolEventListener() {}
// Cross Module References
	CHPT5_API UClass* Z_Construct_UClass_ATriggerVolEventListener_NoRegister();
	CHPT5_API UClass* Z_Construct_UClass_ATriggerVolEventListener();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Chpt5();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	CHPT5_API UClass* Z_Construct_UClass_AMyTriggerVolume_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATriggerVolEventListener::execOnTriggerEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerEvent();
		P_NATIVE_END;
	}
	void ATriggerVolEventListener::StaticRegisterNativesATriggerVolEventListener()
	{
		UClass* Class = ATriggerVolEventListener::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTriggerEvent", &ATriggerVolEventListener::execOnTriggerEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATriggerVolEventListener_OnTriggerEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerVolEventListener_OnTriggerEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TriggerVolEventListener.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerVolEventListener_OnTriggerEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerVolEventListener, nullptr, "OnTriggerEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerVolEventListener_OnTriggerEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerVolEventListener_OnTriggerEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerVolEventListener_OnTriggerEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerVolEventListener_OnTriggerEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATriggerVolEventListener_NoRegister()
	{
		return ATriggerVolEventListener::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerVolEventListener_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerEventSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerEventSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerVolEventListener_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Chpt5,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATriggerVolEventListener_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATriggerVolEventListener_OnTriggerEvent, "OnTriggerEvent" }, // 1245046542
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerVolEventListener_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TriggerVolEventListener.h" },
		{ "ModuleRelativePath", "TriggerVolEventListener.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerVolEventListener_Statics::NewProp_PointLight_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TriggerVolEventListener.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerVolEventListener_Statics::NewProp_PointLight = { "PointLight", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerVolEventListener, PointLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerVolEventListener_Statics::NewProp_PointLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerVolEventListener_Statics::NewProp_PointLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerVolEventListener_Statics::NewProp_TriggerEventSource_MetaData[] = {
		{ "Category", "TriggerVolEventListener" },
		{ "ModuleRelativePath", "TriggerVolEventListener.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerVolEventListener_Statics::NewProp_TriggerEventSource = { "TriggerEventSource", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerVolEventListener, TriggerEventSource), Z_Construct_UClass_AMyTriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerVolEventListener_Statics::NewProp_TriggerEventSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerVolEventListener_Statics::NewProp_TriggerEventSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerVolEventListener_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerVolEventListener_Statics::NewProp_PointLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerVolEventListener_Statics::NewProp_TriggerEventSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerVolEventListener_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerVolEventListener>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATriggerVolEventListener_Statics::ClassParams = {
		&ATriggerVolEventListener::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATriggerVolEventListener_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerVolEventListener_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerVolEventListener_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerVolEventListener_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerVolEventListener()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATriggerVolEventListener_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATriggerVolEventListener, 896290945);
	template<> CHPT5_API UClass* StaticClass<ATriggerVolEventListener>()
	{
		return ATriggerVolEventListener::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerVolEventListener(Z_Construct_UClass_ATriggerVolEventListener, &ATriggerVolEventListener::StaticClass, TEXT("/Script/Chpt5"), TEXT("ATriggerVolEventListener"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerVolEventListener);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
