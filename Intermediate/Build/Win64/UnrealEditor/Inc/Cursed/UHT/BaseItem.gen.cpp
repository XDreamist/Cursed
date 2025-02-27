// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cursed/BaseItem.h"
#include "Cursed/ItemDetails.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseItem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CURSED_API UClass* Z_Construct_UClass_UBaseItem();
	CURSED_API UClass* Z_Construct_UClass_UBaseItem_NoRegister();
	CURSED_API UScriptStruct* Z_Construct_UScriptStruct_FItemDetails();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Cursed();
// End Cross Module References
	DEFINE_FUNCTION(UBaseItem::execUseItem)
	{
		P_GET_OBJECT(AActor,Z_Param_User);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseItem(Z_Param_User);
		P_NATIVE_END;
	}
	void UBaseItem::StaticRegisterNativesUBaseItem()
	{
		UClass* Class = UBaseItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UseItem", &UBaseItem::execUseItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseItem_UseItem_Statics
	{
		struct BaseItem_eventUseItem_Parms
		{
			AActor* User;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_UseItem_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventUseItem_Parms, User), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_UseItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_UseItem_Statics::NewProp_User,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseItem_UseItem_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*BlueprintNativeEvent, */" },
#endif
		{ "ModuleRelativePath", "BaseItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintNativeEvent," },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "UseItem", nullptr, nullptr, Z_Construct_UFunction_UBaseItem_UseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_UseItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseItem_UseItem_Statics::BaseItem_eventUseItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_UseItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseItem_UseItem_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_UseItem_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBaseItem_UseItem_Statics::BaseItem_eventUseItem_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBaseItem_UseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseItem_UseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseItem);
	UClass* Z_Construct_UClass_UBaseItem_NoRegister()
	{
		return UBaseItem::StaticClass();
	}
	struct Z_Construct_UClass_UBaseItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Details_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Details;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Cursed,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseItem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseItem_UseItem, "UseItem" }, // 165976353
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseItem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "BaseItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseItem_Statics::NewProp_Details_MetaData[] = {
		{ "Category", "BaseItem" },
		{ "ModuleRelativePath", "BaseItem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseItem, Details), Z_Construct_UScriptStruct_FItemDetails, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseItem_Statics::NewProp_Details_MetaData), Z_Construct_UClass_UBaseItem_Statics::NewProp_Details_MetaData) }; // 1895688065
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseItem_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "BaseItem" },
		{ "ModuleRelativePath", "BaseItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseItem, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseItem_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_UBaseItem_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseItem_Statics::ClassParams = {
		&UBaseItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseItem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseItem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseItem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBaseItem()
	{
		if (!Z_Registration_Info_UClass_UBaseItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseItem.OuterSingleton, Z_Construct_UClass_UBaseItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseItem.OuterSingleton;
	}
	template<> CURSED_API UClass* StaticClass<UBaseItem>()
	{
		return UBaseItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseItem);
	UBaseItem::~UBaseItem() {}
	struct Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_BaseItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_BaseItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseItem, UBaseItem::StaticClass, TEXT("UBaseItem"), &Z_Registration_Info_UClass_UBaseItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseItem), 2671220155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_BaseItem_h_3242101467(TEXT("/Script/Cursed"),
		Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_BaseItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_BaseItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
