// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cursed/CursedGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCursedGameModeBase() {}
// Cross Module References
	CURSED_API UClass* Z_Construct_UClass_ACursedGameModeBase();
	CURSED_API UClass* Z_Construct_UClass_ACursedGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Cursed();
// End Cross Module References
	void ACursedGameModeBase::StaticRegisterNativesACursedGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACursedGameModeBase);
	UClass* Z_Construct_UClass_ACursedGameModeBase_NoRegister()
	{
		return ACursedGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACursedGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACursedGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Cursed,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACursedGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACursedGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CursedGameModeBase.h" },
		{ "ModuleRelativePath", "CursedGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACursedGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACursedGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACursedGameModeBase_Statics::ClassParams = {
		&ACursedGameModeBase::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACursedGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACursedGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACursedGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ACursedGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACursedGameModeBase.OuterSingleton, Z_Construct_UClass_ACursedGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACursedGameModeBase.OuterSingleton;
	}
	template<> CURSED_API UClass* StaticClass<ACursedGameModeBase>()
	{
		return ACursedGameModeBase::StaticClass();
	}
	ACursedGameModeBase::ACursedGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACursedGameModeBase);
	ACursedGameModeBase::~ACursedGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_CursedGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_CursedGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACursedGameModeBase, ACursedGameModeBase::StaticClass, TEXT("ACursedGameModeBase"), &Z_Registration_Info_UClass_ACursedGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACursedGameModeBase), 1111566930U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_CursedGameModeBase_h_1787440406(TEXT("/Script/Cursed"),
		Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_CursedGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Cursed_Source_Cursed_CursedGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
