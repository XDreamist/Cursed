// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cursed/Pickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickup() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CURSED_API UClass* Z_Construct_UClass_APickup();
	CURSED_API UClass* Z_Construct_UClass_APickup_NoRegister();
	CURSED_API UClass* Z_Construct_UClass_UBaseItem_NoRegister();
	CURSED_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Cursed();
// End Cross Module References
	DEFINE_FUNCTION(APickup::execDisplayWidget)
	{
		P_GET_UBOOL(Z_Param_Show);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayWidget(Z_Param_Show);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickup::execOnInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_Causer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteract(Z_Param_Causer);
		P_NATIVE_END;
	}
	void APickup::StaticRegisterNativesAPickup()
	{
		UClass* Class = APickup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayWidget", &APickup::execDisplayWidget },
			{ "OnInteract", &APickup::execOnInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickup_DisplayWidget_Statics
	{
		struct Pickup_eventDisplayWidget_Parms
		{
			bool Show;
		};
		static void NewProp_Show_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Show;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APickup_DisplayWidget_Statics::NewProp_Show_SetBit(void* Obj)
	{
		((Pickup_eventDisplayWidget_Parms*)Obj)->Show = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickup_DisplayWidget_Statics::NewProp_Show = { "Show", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Pickup_eventDisplayWidget_Parms), &Z_Construct_UFunction_APickup_DisplayWidget_Statics::NewProp_Show_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_DisplayWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_DisplayWidget_Statics::NewProp_Show,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_DisplayWidget_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//virtual void OnInteract_Implementation(AActor* Causer);\n" },
#endif
		{ "ModuleRelativePath", "Pickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "virtual void OnInteract_Implementation(AActor* Causer);" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_DisplayWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, nullptr, "DisplayWidget", nullptr, nullptr, Z_Construct_UFunction_APickup_DisplayWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_DisplayWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickup_DisplayWidget_Statics::Pickup_eventDisplayWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_DisplayWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickup_DisplayWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_DisplayWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickup_DisplayWidget_Statics::Pickup_eventDisplayWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickup_DisplayWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickup_DisplayWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickup_OnInteract_Statics
	{
		struct Pickup_eventOnInteract_Parms
		{
			AActor* Causer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickup_OnInteract_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pickup_eventOnInteract_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_OnInteract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_OnInteract_Statics::NewProp_Causer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_OnInteract_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BlueprintNativeEvent, BlueprintCallable, Category = \"Interaction\")\n" },
#endif
		{ "ModuleRelativePath", "Pickup.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintNativeEvent, BlueprintCallable, Category = \"Interaction\")" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, nullptr, "OnInteract", nullptr, nullptr, Z_Construct_UFunction_APickup_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_OnInteract_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickup_OnInteract_Statics::Pickup_eventOnInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_OnInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickup_OnInteract_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_OnInteract_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickup_OnInteract_Statics::Pickup_eventOnInteract_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickup_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickup_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickup);
	UClass* Z_Construct_UClass_APickup_NoRegister()
	{
		return APickup::StaticClass();
	}
	struct Z_Construct_UClass_APickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Cursed,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APickup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickup_DisplayWidget, "DisplayWidget" }, // 3907481079
		{ &Z_Construct_UFunction_APickup_OnInteract, "OnInteract" }, // 2825989165
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickup.h" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickup, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_Root_MetaData), Z_Construct_UClass_APickup_Statics::NewProp_Root_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickup, Item), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_Item_MetaData), Z_Construct_UClass_APickup_Statics::NewProp_Item_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_Widget_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APickup, Widget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_Widget_MetaData), Z_Construct_UClass_APickup_Statics::NewProp_Widget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_Widget,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APickup_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(APickup, IInteractInterface), false },  // 2678696326
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickup_Statics::ClassParams = {
		&APickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickup_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::Class_MetaDataParams), Z_Construct_UClass_APickup_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APickup()
	{
		if (!Z_Registration_Info_UClass_APickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickup.OuterSingleton, Z_Construct_UClass_APickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickup.OuterSingleton;
	}
	template<> CURSED_API UClass* StaticClass<APickup>()
	{
		return APickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup);
	APickup::~APickup() {}
	struct Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_Pickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_Pickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickup, APickup::StaticClass, TEXT("APickup"), &Z_Registration_Info_UClass_APickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickup), 2568768463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_Pickup_h_1920634572(TEXT("/Script/Cursed"),
		Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_Pickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_Pickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
