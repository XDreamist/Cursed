// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cursed/SlotStructure.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotStructure() {}
// Cross Module References
	CURSED_API UScriptStruct* Z_Construct_UScriptStruct_FSlotStructure();
	UPackage* Z_Construct_UPackage__Script_Cursed();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CURSED_API UClass* Z_Construct_UClass_UBaseItem_NoRegister();
// End Cross Module References
class UScriptStruct* FSlotStructure::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CURSED_API uint32 Get_Z_Construct_UScriptStruct_FSlotStructure_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotStructure, Z_Construct_UPackage__Script_Cursed(), TEXT("SlotStructure"), sizeof(FSlotStructure), Get_Z_Construct_UScriptStruct_FSlotStructure_Hash());
	}
	return Singleton;
}
template<> CURSED_API UScriptStruct* StaticStruct<FSlotStructure>()
{
	return FSlotStructure::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlotStructure(FSlotStructure::StaticStruct, TEXT("/Script/Cursed"), TEXT("SlotStructure"), false, nullptr, nullptr);
static struct FScriptStruct_Cursed_StaticRegisterNativesFSlotStructure
{
	FScriptStruct_Cursed_StaticRegisterNativesFSlotStructure()
	{
		UScriptStruct::DeferCppStructOps<FSlotStructure>(FName(TEXT("SlotStructure")));
	}
} ScriptStruct_Cursed_StaticRegisterNativesFSlotStructure;
	struct Z_Construct_UScriptStruct_FSlotStructure_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotStructure_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SlotStructure.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlotStructure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlotStructure>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "SlotStructure" },
		{ "ModuleRelativePath", "SlotStructure.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlotStructure, Item), Z_Construct_UClass_UBaseItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Item_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "SlotStructure" },
		{ "ModuleRelativePath", "SlotStructure.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlotStructure, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Quantity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlotStructure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotStructure_Statics::NewProp_Quantity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlotStructure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Cursed,
		nullptr,
		&NewStructOps,
		"SlotStructure",
		sizeof(FSlotStructure),
		alignof(FSlotStructure),
		Z_Construct_UScriptStruct_FSlotStructure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStructure_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotStructure_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotStructure_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlotStructure()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlotStructure_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Cursed();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlotStructure"), sizeof(FSlotStructure), Get_Z_Construct_UScriptStruct_FSlotStructure_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSlotStructure_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlotStructure_Hash() { return 2362618217U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
