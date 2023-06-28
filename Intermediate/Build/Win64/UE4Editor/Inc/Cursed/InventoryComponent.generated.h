// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseItem;
#ifdef CURSED_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define CURSED_InventoryComponent_generated_h

#define Cursed_Source_Cursed_InventoryComponent_h_14_SPARSE_DATA
#define Cursed_Source_Cursed_InventoryComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddToInventory);


#define Cursed_Source_Cursed_InventoryComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddToInventory);


#define Cursed_Source_Cursed_InventoryComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cursed"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define Cursed_Source_Cursed_InventoryComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cursed"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define Cursed_Source_Cursed_InventoryComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public:


#define Cursed_Source_Cursed_InventoryComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent)


#define Cursed_Source_Cursed_InventoryComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define Cursed_Source_Cursed_InventoryComponent_h_11_PROLOG
#define Cursed_Source_Cursed_InventoryComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cursed_Source_Cursed_InventoryComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Cursed_Source_Cursed_InventoryComponent_h_14_SPARSE_DATA \
	Cursed_Source_Cursed_InventoryComponent_h_14_RPC_WRAPPERS \
	Cursed_Source_Cursed_InventoryComponent_h_14_INCLASS \
	Cursed_Source_Cursed_InventoryComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cursed_Source_Cursed_InventoryComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cursed_Source_Cursed_InventoryComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Cursed_Source_Cursed_InventoryComponent_h_14_SPARSE_DATA \
	Cursed_Source_Cursed_InventoryComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Cursed_Source_Cursed_InventoryComponent_h_14_INCLASS_NO_PURE_DECLS \
	Cursed_Source_Cursed_InventoryComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURSED_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cursed_Source_Cursed_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
