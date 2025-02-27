// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cursed/SlotStructure.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotStructure() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CURSED_API UClass* Z_Construct_UClass_UBaseItem_NoRegister();
	CURSED_API UScriptStruct* Z_Construct_UScriptStruct_FSlotStructure();
	UPackage* Z_Construct_UPackage__Script_Cursed();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlotStructure;
class UScriptStruct* FSlotStructure::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlotStructure.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlotStructure.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotStructure, (UObject*)Z_Construct_UPackage__Script_Cursed(), TEXT("SlotStructure"));
	}
	return Z_Registration_Info_UScriptStruct_SlotStructure.OuterSingleton;
}
template<> CURSED_API UScriptStruct* StaticStruct<FSlotStructure>()
{
	return FSlotStructure::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSlotStructure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotStructure_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SlotStructure.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlotStructure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlotStructure>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "SlotStructure" },
		{ "ModuleRelativePath", "SlotStructure.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotStructure, Item), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Item_MetaData), Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Item_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "SlotStructure" },
		{ "ModuleRelativePath", "SlotStructure.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotStructure, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Quantity_MetaData), Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Quantity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlotStructure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Quantity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlotStructure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Cursed,
		nullptr,
		&NewStructOps,
		"SlotStructure",
		Z_Construct_UScriptStruct_FSlotStructure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStructure_Statics::PropPointers),
		sizeof(FSlotStructure),
		alignof(FSlotStructure),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStructure_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlotStructure_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStructure_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSlotStructure()
	{
		if (!Z_Registration_Info_UScriptStruct_SlotStructure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlotStructure.InnerSingleton, Z_Construct_UScriptStruct_FSlotStructure_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SlotStructure.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_SlotStructure_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_SlotStructure_h_Statics::ScriptStructInfo[] = {
		{ FSlotStructure::StaticStruct, Z_Construct_UScriptStruct_FSlotStructure_Statics::NewStructOps, TEXT("SlotStructure"), &Z_Registration_Info_UScriptStruct_SlotStructure, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlotStructure), 3729195691U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_SlotStructure_h_469036148(TEXT("/Script/Cursed"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_SlotStructure_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_SlotStructure_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
