// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseItem;
#ifdef CURSED_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define CURSED_InventoryComponent_generated_h

#define FID_Projects_Cursed_Source_Cursed_InventoryComponent_h_14_SPARSE_DATA
#define FID_Projects_Cursed_Source_Cursed_InventoryComponent_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Cursed_Source_Cursed_InventoryComponent_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Cursed_Source_Cursed_InventoryComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddToInventory);


#define FID_Projects_Cursed_Source_Cursed_InventoryComponent_h_14_ACCESSORS
#define FID_Projects_Cursed_Source_Cursed_InventoryComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cursed"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FID_Projects_Cursed_Source_Cursed_InventoryComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_Projects_Cursed_Source_Cursed_InventoryComponent_h_11_PROLOG
#define FID_Projects_Cursed_Source_Cursed_InventoryComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Cursed_Source_Cursed_InventoryComponent_h_14_SPARSE_DATA \
	FID_Projects_Cursed_Source_Cursed_InventoryComponent_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Cursed_Source_Cursed_InventoryComponent_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Cursed_Source_Cursed_InventoryComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Cursed_Source_Cursed_InventoryComponent_h_14_ACCESSORS \
	FID_Projects_Cursed_Source_Cursed_InventoryComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Projects_Cursed_Source_Cursed_InventoryComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURSED_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Cursed_Source_Cursed_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
