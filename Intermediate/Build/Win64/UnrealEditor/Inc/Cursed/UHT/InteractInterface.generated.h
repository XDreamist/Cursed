// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CURSED_InteractInterface_generated_h
#error "InteractInterface.generated.h already included, missing '#pragma once' in InteractInterface.h"
#endif
#define CURSED_InteractInterface_generated_h

#define FID_Projects_Cursed_Source_Cursed_InteractInterface_h_13_SPARSE_DATA
#define FID_Projects_Cursed_Source_Cursed_InteractInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Cursed_Source_Cursed_InteractInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Projects_Cursed_Source_Cursed_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisplayWidget); \
	DECLARE_FUNCTION(execOnInteract);


#define FID_Projects_Cursed_Source_Cursed_InteractInterface_h_13_ACCESSORS
#define FID_Projects_Cursed_Source_Cursed_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CURSED_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CURSED_API UInteractInterface(UInteractInterface&&); \
	CURSED_API UInteractInterface(const UInteractInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CURSED_API, UInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	CURSED_API virtual ~UInteractInterface();


#define FID_Projects_Cursed_Source_Cursed_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractInterface(); \
	friend struct Z_Construct_UClass_UInteractInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Cursed"), CURSED_API) \
	DECLARE_SERIALIZER(UInteractInterface)


#define FID_Projects_Cursed_Source_Cursed_InteractInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Projects_Cursed_Source_Cursed_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Projects_Cursed_Source_Cursed_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_Cursed_Source_Cursed_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Projects_Cursed_Source_Cursed_InteractInterface_h_10_PROLOG
#define FID_Projects_Cursed_Source_Cursed_InteractInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_Cursed_Source_Cursed_InteractInterface_h_13_SPARSE_DATA \
	FID_Projects_Cursed_Source_Cursed_InteractInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Cursed_Source_Cursed_InteractInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Projects_Cursed_Source_Cursed_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_Cursed_Source_Cursed_InteractInterface_h_13_ACCESSORS \
	FID_Projects_Cursed_Source_Cursed_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURSED_API UClass* StaticClass<class UInteractInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_Cursed_Source_Cursed_InteractInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
