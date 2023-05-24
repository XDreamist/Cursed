// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CURSED_BaseItem_generated_h
#error "BaseItem.generated.h already included, missing '#pragma once' in BaseItem.h"
#endif
#define CURSED_BaseItem_generated_h

#define Cursed_Source_Cursed_BaseItem_h_13_SPARSE_DATA
#define Cursed_Source_Cursed_BaseItem_h_13_RPC_WRAPPERS
#define Cursed_Source_Cursed_BaseItem_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Cursed_Source_Cursed_BaseItem_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseItem(); \
	friend struct Z_Construct_UClass_ABaseItem_Statics; \
public: \
	DECLARE_CLASS(ABaseItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cursed"), NO_API) \
	DECLARE_SERIALIZER(ABaseItem)


#define Cursed_Source_Cursed_BaseItem_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABaseItem(); \
	friend struct Z_Construct_UClass_ABaseItem_Statics; \
public: \
	DECLARE_CLASS(ABaseItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cursed"), NO_API) \
	DECLARE_SERIALIZER(ABaseItem)


#define Cursed_Source_Cursed_BaseItem_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseItem(ABaseItem&&); \
	NO_API ABaseItem(const ABaseItem&); \
public:


#define Cursed_Source_Cursed_BaseItem_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseItem(ABaseItem&&); \
	NO_API ABaseItem(const ABaseItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseItem)


#define Cursed_Source_Cursed_BaseItem_h_13_PRIVATE_PROPERTY_OFFSET
#define Cursed_Source_Cursed_BaseItem_h_10_PROLOG
#define Cursed_Source_Cursed_BaseItem_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cursed_Source_Cursed_BaseItem_h_13_PRIVATE_PROPERTY_OFFSET \
	Cursed_Source_Cursed_BaseItem_h_13_SPARSE_DATA \
	Cursed_Source_Cursed_BaseItem_h_13_RPC_WRAPPERS \
	Cursed_Source_Cursed_BaseItem_h_13_INCLASS \
	Cursed_Source_Cursed_BaseItem_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cursed_Source_Cursed_BaseItem_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cursed_Source_Cursed_BaseItem_h_13_PRIVATE_PROPERTY_OFFSET \
	Cursed_Source_Cursed_BaseItem_h_13_SPARSE_DATA \
	Cursed_Source_Cursed_BaseItem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Cursed_Source_Cursed_BaseItem_h_13_INCLASS_NO_PURE_DECLS \
	Cursed_Source_Cursed_BaseItem_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURSED_API UClass* StaticClass<class ABaseItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cursed_Source_Cursed_BaseItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
