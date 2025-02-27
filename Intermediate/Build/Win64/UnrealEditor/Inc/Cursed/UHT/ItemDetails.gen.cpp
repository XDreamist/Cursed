// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cursed/ItemDetails.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDetails() {}
// Cross Module References
	CURSED_API UScriptStruct* Z_Construct_UScriptStruct_FItemDetails();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Cursed();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemDetails;
class UScriptStruct* FItemDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemDetails, (UObject*)Z_Construct_UPackage__Script_Cursed(), TEXT("ItemDetails"));
	}
	return Z_Registration_Info_UScriptStruct_ItemDetails.OuterSingleton;
}
template<> CURSED_API UScriptStruct* StaticStruct<FItemDetails>()
{
	return FItemDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDetails_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ItemDetails.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ItemDetails" },
		{ "ModuleRelativePath", "ItemDetails.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDetails, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ItemDetails" },
		{ "ModuleRelativePath", "ItemDetails.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDetails, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "ItemDetails" },
		{ "ModuleRelativePath", "ItemDetails.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDetails, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Thumbnail_MetaData), Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Thumbnail_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "ItemDetails" },
		{ "ModuleRelativePath", "ItemDetails.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemDetails, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Weight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Thumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDetails_Statics::NewProp_Weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Cursed,
		nullptr,
		&NewStructOps,
		"ItemDetails",
		Z_Construct_UScriptStruct_FItemDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetails_Statics::PropPointers),
		sizeof(FItemDetails),
		alignof(FItemDetails),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetails_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemDetails_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDetails_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItemDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemDetails.InnerSingleton, Z_Construct_UScriptStruct_FItemDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemDetails.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_ItemDetails_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_ItemDetails_h_Statics::ScriptStructInfo[] = {
		{ FItemDetails::StaticStruct, Z_Construct_UScriptStruct_FItemDetails_Statics::NewStructOps, TEXT("ItemDetails"), &Z_Registration_Info_UScriptStruct_ItemDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemDetails), 1895688065U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_ItemDetails_h_2484344748(TEXT("/Script/Cursed"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_ItemDetails_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_ItemDetails_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
