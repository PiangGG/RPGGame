// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAIN_ItemBody_generated_h
#error "ItemBody.generated.h already included, missing '#pragma once' in ItemBody.h"
#endif
#define MAIN_ItemBody_generated_h

#define Main_Source_Main_ItemBody_h_15_SPARSE_DATA
#define Main_Source_Main_ItemBody_h_15_RPC_WRAPPERS
#define Main_Source_Main_ItemBody_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Main_Source_Main_ItemBody_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemBody(); \
	friend struct Z_Construct_UClass_AItemBody_Statics; \
public: \
	DECLARE_CLASS(AItemBody, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(AItemBody)


#define Main_Source_Main_ItemBody_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAItemBody(); \
	friend struct Z_Construct_UClass_AItemBody_Statics; \
public: \
	DECLARE_CLASS(AItemBody, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(AItemBody)


#define Main_Source_Main_ItemBody_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItemBody(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItemBody) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemBody); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemBody); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemBody(AItemBody&&); \
	NO_API AItemBody(const AItemBody&); \
public:


#define Main_Source_Main_ItemBody_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemBody(AItemBody&&); \
	NO_API AItemBody(const AItemBody&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemBody); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemBody); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemBody)


#define Main_Source_Main_ItemBody_h_15_PRIVATE_PROPERTY_OFFSET
#define Main_Source_Main_ItemBody_h_12_PROLOG
#define Main_Source_Main_ItemBody_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_ItemBody_h_15_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_ItemBody_h_15_SPARSE_DATA \
	Main_Source_Main_ItemBody_h_15_RPC_WRAPPERS \
	Main_Source_Main_ItemBody_h_15_INCLASS \
	Main_Source_Main_ItemBody_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Main_Source_Main_ItemBody_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_ItemBody_h_15_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_ItemBody_h_15_SPARSE_DATA \
	Main_Source_Main_ItemBody_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Main_Source_Main_ItemBody_h_15_INCLASS_NO_PURE_DECLS \
	Main_Source_Main_ItemBody_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAIN_API UClass* StaticClass<class AItemBody>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Main_Source_Main_ItemBody_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
