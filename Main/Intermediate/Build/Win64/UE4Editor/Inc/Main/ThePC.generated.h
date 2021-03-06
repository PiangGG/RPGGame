// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAIN_ThePC_generated_h
#error "ThePC.generated.h already included, missing '#pragma once' in ThePC.h"
#endif
#define MAIN_ThePC_generated_h

#define Main_Source_Main_GamePlay_ThePC_h_19_SPARSE_DATA
#define Main_Source_Main_GamePlay_ThePC_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHideAllMenus);


#define Main_Source_Main_GamePlay_ThePC_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHideAllMenus);


#define Main_Source_Main_GamePlay_ThePC_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThePC(); \
	friend struct Z_Construct_UClass_AThePC_Statics; \
public: \
	DECLARE_CLASS(AThePC, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(AThePC)


#define Main_Source_Main_GamePlay_ThePC_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAThePC(); \
	friend struct Z_Construct_UClass_AThePC_Statics; \
public: \
	DECLARE_CLASS(AThePC, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(AThePC)


#define Main_Source_Main_GamePlay_ThePC_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThePC(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThePC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThePC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThePC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThePC(AThePC&&); \
	NO_API AThePC(const AThePC&); \
public:


#define Main_Source_Main_GamePlay_ThePC_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThePC(AThePC&&); \
	NO_API AThePC(const AThePC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThePC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThePC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThePC)


#define Main_Source_Main_GamePlay_ThePC_h_19_PRIVATE_PROPERTY_OFFSET
#define Main_Source_Main_GamePlay_ThePC_h_16_PROLOG
#define Main_Source_Main_GamePlay_ThePC_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_GamePlay_ThePC_h_19_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_GamePlay_ThePC_h_19_SPARSE_DATA \
	Main_Source_Main_GamePlay_ThePC_h_19_RPC_WRAPPERS \
	Main_Source_Main_GamePlay_ThePC_h_19_INCLASS \
	Main_Source_Main_GamePlay_ThePC_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Main_Source_Main_GamePlay_ThePC_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_GamePlay_ThePC_h_19_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_GamePlay_ThePC_h_19_SPARSE_DATA \
	Main_Source_Main_GamePlay_ThePC_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Main_Source_Main_GamePlay_ThePC_h_19_INCLASS_NO_PURE_DECLS \
	Main_Source_Main_GamePlay_ThePC_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAIN_API UClass* StaticClass<class AThePC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Main_Source_Main_GamePlay_ThePC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
