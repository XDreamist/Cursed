// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CURSED_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define CURSED_BaseCharacter_generated_h

#define Cursed_Source_Cursed_BaseCharacter_h_14_SPARSE_DATA
#define Cursed_Source_Cursed_BaseCharacter_h_14_RPC_WRAPPERS
#define Cursed_Source_Cursed_BaseCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Cursed_Source_Cursed_BaseCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cursed"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define Cursed_Source_Cursed_BaseCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cursed"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define Cursed_Source_Cursed_BaseCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define Cursed_Source_Cursed_BaseCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define Cursed_Source_Cursed_BaseCharacter_h_14_PRIVATE_PROPERTY_OFFSET
#define Cursed_Source_Cursed_BaseCharacter_h_11_PROLOG
#define Cursed_Source_Cursed_BaseCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cursed_Source_Cursed_BaseCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Cursed_Source_Cursed_BaseCharacter_h_14_SPARSE_DATA \
	Cursed_Source_Cursed_BaseCharacter_h_14_RPC_WRAPPERS \
	Cursed_Source_Cursed_BaseCharacter_h_14_INCLASS \
	Cursed_Source_Cursed_BaseCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cursed_Source_Cursed_BaseCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cursed_Source_Cursed_BaseCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Cursed_Source_Cursed_BaseCharacter_h_14_SPARSE_DATA \
	Cursed_Source_Cursed_BaseCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Cursed_Source_Cursed_BaseCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Cursed_Source_Cursed_BaseCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURSED_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cursed_Source_Cursed_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
