// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cursed/InteractInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	CURSED_API UClass* Z_Construct_UClass_UInteractInterface();
	CURSED_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Cursed();
// End Cross Module References
	DEFINE_FUNCTION(IInteractInterface::execDisplayWidget)
	{
		P_GET_UBOOL(Z_Param_Show);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayWidget(Z_Param_Show);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractInterface::execOnInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_Causer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteract(Z_Param_Causer);
		P_NATIVE_END;
	}
	void UInteractInterface::StaticRegisterNativesUInteractInterface()
	{
		UClass* Class = UInteractInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisplayWidget", &IInteractInterface::execDisplayWidget },
			{ "OnInteract", &IInteractInterface::execOnInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractInterface_DisplayWidget_Statics
	{
		struct InteractInterface_eventDisplayWidget_Parms
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
	void Z_Construct_UFunction_UInteractInterface_DisplayWidget_Statics::NewProp_Show_SetBit(void* Obj)
	{
		((InteractInterface_eventDisplayWidget_Parms*)Obj)->Show = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractInterface_DisplayWidget_Statics::NewProp_Show = { "Show", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractInterface_eventDisplayWidget_Parms), &Z_Construct_UFunction_UInteractInterface_DisplayWidget_Statics::NewProp_Show_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractInterface_DisplayWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractInterface_DisplayWidget_Statics::NewProp_Show,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractInterface_DisplayWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractInterface_DisplayWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractInterface, nullptr, "DisplayWidget", nullptr, nullptr, Z_Construct_UFunction_UInteractInterface_DisplayWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_DisplayWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractInterface_DisplayWidget_Statics::InteractInterface_eventDisplayWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_DisplayWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractInterface_DisplayWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_DisplayWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInteractInterface_DisplayWidget_Statics::InteractInterface_eventDisplayWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractInterface_DisplayWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractInterface_DisplayWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractInterface_OnInteract_Statics
	{
		struct InteractInterface_eventOnInteract_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractInterface_OnInteract_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractInterface_eventOnInteract_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractInterface_OnInteract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractInterface_OnInteract_Statics::NewProp_Causer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractInterface_OnInteract_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//BlueprintNativeEvent, BlueprintCallable, Category = \"Interaction\")\n" },
#endif
		{ "ModuleRelativePath", "InteractInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintNativeEvent, BlueprintCallable, Category = \"Interaction\")" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractInterface_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractInterface, nullptr, "OnInteract", nullptr, nullptr, Z_Construct_UFunction_UInteractInterface_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_OnInteract_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractInterface_OnInteract_Statics::InteractInterface_eventOnInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_OnInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractInterface_OnInteract_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractInterface_OnInteract_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInteractInterface_OnInteract_Statics::InteractInterface_eventOnInteract_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractInterface_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractInterface_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractInterface);
	UClass* Z_Construct_UClass_UInteractInterface_NoRegister()
	{
		return UInteractInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInteractInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Cursed,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractInterface_DisplayWidget, "DisplayWidget" }, // 4116536156
		{ &Z_Construct_UFunction_UInteractInterface_OnInteract, "OnInteract" }, // 2105729967
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "InteractInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractInterface_Statics::ClassParams = {
		&UInteractInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInteractInterface()
	{
		if (!Z_Registration_Info_UClass_UInteractInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractInterface.OuterSingleton, Z_Construct_UClass_UInteractInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractInterface.OuterSingleton;
	}
	template<> CURSED_API UClass* StaticClass<UInteractInterface>()
	{
		return UInteractInterface::StaticClass();
	}
	UInteractInterface::UInteractInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractInterface);
	UInteractInterface::~UInteractInterface() {}
	struct Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_InteractInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_InteractInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractInterface, UInteractInterface::StaticClass, TEXT("UInteractInterface"), &Z_Registration_Info_UClass_UInteractInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractInterface), 2678696326U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_InteractInterface_h_2459499367(TEXT("/Script/Cursed"),
		Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_InteractInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_InteractInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
