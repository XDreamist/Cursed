// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CURSED_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define CURSED_Pickup_generated_h

#define Cursed_Source_Cursed_Pickup_h_16_SPARSE_DATA
#define Cursed_Source_Cursed_Pickup_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisplayWidget); \
	DECLARE_FUNCTION(execOnInteract);


#define Cursed_Source_Cursed_Pickup_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisplayWidget); \
	DECLARE_FUNCTION(execOnInteract);


#define Cursed_Source_Cursed_Pickup_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cursed"), NO_API) \
	DECLARE_SERIALIZER(APickup) \
	virtual UObject* _getUObject() const override { return const_cast<APickup*>(this); }


#define Cursed_Source_Cursed_Pickup_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cursed"), NO_API) \
	DECLARE_SERIALIZER(APickup) \
	virtual UObject* _getUObject() const override { return const_cast<APickup*>(this); }


#define Cursed_Source_Cursed_Pickup_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define Cursed_Source_Cursed_Pickup_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define Cursed_Source_Cursed_Pickup_h_16_PRIVATE_PROPERTY_OFFSET
#define Cursed_Source_Cursed_Pickup_h_13_PROLOG
#define Cursed_Source_Cursed_Pickup_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cursed_Source_Cursed_Pickup_h_16_PRIVATE_PROPERTY_OFFSET \
	Cursed_Source_Cursed_Pickup_h_16_SPARSE_DATA \
	Cursed_Source_Cursed_Pickup_h_16_RPC_WRAPPERS \
	Cursed_Source_Cursed_Pickup_h_16_INCLASS \
	Cursed_Source_Cursed_Pickup_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Cursed_Source_Cursed_Pickup_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Cursed_Source_Cursed_Pickup_h_16_PRIVATE_PROPERTY_OFFSET \
	Cursed_Source_Cursed_Pickup_h_16_SPARSE_DATA \
	Cursed_Source_Cursed_Pickup_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Cursed_Source_Cursed_Pickup_h_16_INCLASS_NO_PURE_DECLS \
	Cursed_Source_Cursed_Pickup_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURSED_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Cursed_Source_Cursed_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
