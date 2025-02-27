// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CURSED_BaseItem_generated_h
#error "BaseItem.generated.h already included, missing '#pragma once' in BaseItem.h"
#endif
#define CURSED_BaseItem_generated_h

#define FID_Projects_Cursed_Source_Cursed_BaseItem_h_12_SPARSE_DATA
#define FID_Projects_Cursed_Source_Cursed_BaseItem_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Cursed_Source_Cursed_BaseItem_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Cursed_Source_Cursed_BaseItem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUseItem);


#define FID_Projects_Cursed_Source_Cursed_BaseItem_h_12_ACCESSORS
#define FID_Projects_Cursed_Source_Cursed_BaseItem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseItem(); \
	friend struct Z_Construct_UClass_UBaseItem_Statics; \
public: \
	DECLARE_CLASS(UBaseItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Cursed"), NO_API) \
	DECLARE_SERIALIZER(UBaseItem)


#define FID_Projects_Cursed_Source_Cursed_BaseItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseItem(UBaseItem&&); \
	NO_API UBaseItem(const UBaseItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseItem) \
	NO_API virtual ~UBaseItem();


#define FID_Projects_Cursed_Source_Cursed_BaseItem_h_9_PROLOG
#define FID_Projects_Cursed_Source_Cursed_BaseItem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Cursed_Source_Cursed_BaseItem_h_12_SPARSE_DATA \
	FID_Projects_Cursed_Source_Cursed_BaseItem_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Cursed_Source_Cursed_BaseItem_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Cursed_Source_Cursed_BaseItem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Cursed_Source_Cursed_BaseItem_h_12_ACCESSORS \
	FID_Projects_Cursed_Source_Cursed_BaseItem_h_12_INCLASS_NO_PURE_DECLS \
	FID_Projects_Cursed_Source_Cursed_BaseItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURSED_API UClass* StaticClass<class UBaseItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Cursed_Source_Cursed_BaseItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
