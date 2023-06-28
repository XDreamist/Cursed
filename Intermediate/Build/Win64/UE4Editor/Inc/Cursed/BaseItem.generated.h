// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CURSED_BaseItem_generated_h
#error "BaseItem.generated.h already included, missing '#pragma once' in BaseItem.h"
#endif
#define CURSED_BaseItem_generated_h

#define Cursed_Source_Cursed_BaseItem_h_12_SPARSE_DATA
#define Cursed_Source_Cursed_BaseItem_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUseItem);


#define Cursed_Source_Cursed_BaseItem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUseItem);


#define Cursed_Source_Cursed_BaseItem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseItem(); \
	friend struct Z_Construct_UClass_UBaseItem_Statics; \
public: \
	DECLARE_CLASS(UBaseItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Cursed"), NO_API) \
	DECLARE_SERIALIZER(UBaseItem)


#define Cursed_Source_Cursed_BaseItem_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBaseItem(); \
	friend struct Z_Construct_UClass_UBaseItem_Statics; \
public: \
	DECLARE_CLASS(UBaseItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Cursed"), NO_API) \
	DECLARE_SERIALIZER(UBaseItem)


#define Cursed_Source_Cursed_BaseItem_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseItem(UBaseItem&&); \
	NO_API UBaseItem(const UBaseItem&); \
public:


#define Cursed_Source_Cursed_BaseItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseItem(UBaseItem&&); \
	NO_API UBaseItem(const UBaseItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseItem)


#define Cursed_Source_Cursed_BaseItem_h_12_PRIVATE_PROPERTY_OFFSET
#define Cursed_Source_Cursed_BaseItem_h_9_PROLOG
#define Cursed_Source_Cursed_BaseItem_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cursed_Source_Cursed_BaseItem_h_12_PRIVATE_PROPERTY_OFFSET \
	Cursed_Source_Cursed_BaseItem_h_12_SPARSE_DATA \
	Cursed_Source_Cursed_BaseItem_h_12_RPC_WRAPPERS \
	Cursed_Source_Cursed_BaseItem_h_12_INCLASS \
	Cursed_Source_Cursed_BaseItem_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cursed_Source_Cursed_BaseItem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cursed_Source_Cursed_BaseItem_h_12_PRIVATE_PROPERTY_OFFSET \
	Cursed_Source_Cursed_BaseItem_h_12_SPARSE_DATA \
	Cursed_Source_Cursed_BaseItem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Cursed_Source_Cursed_BaseItem_h_12_INCLASS_NO_PURE_DECLS \
	Cursed_Source_Cursed_BaseItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURSED_API UClass* StaticClass<class UBaseItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cursed_Source_Cursed_BaseItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
