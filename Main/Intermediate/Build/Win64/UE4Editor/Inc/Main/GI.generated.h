// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlueprintSessionSetting;
struct FBlueprintSearchResult;
enum class EInputMode : uint8;
enum class EGameState : uint8;
#ifdef MAIN_GI_generated_h
#error "GI.generated.h already included, missing '#pragma once' in GI.h"
#endif
#define MAIN_GI_generated_h

#define Main_Source_Main_GI_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics; \
	MAIN_API static class UScriptStruct* StaticStruct();


template<> MAIN_API UScriptStruct* StaticStruct<struct FBlueprintSessionSetting>();

#define Main_Source_Main_GI_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics; \
	MAIN_API static class UScriptStruct* StaticStruct();


template<> MAIN_API UScriptStruct* StaticStruct<struct FBlueprintSearchResult>();

#define Main_Source_Main_GI_h_133_SPARSE_DATA
#define Main_Source_Main_GI_h_133_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLeaveGame); \
	DECLARE_FUNCTION(execSetOrUpdateSessionSpecialSettingString); \
	DECLARE_FUNCTION(execGetSessionSpecialSettingString); \
	DECLARE_FUNCTION(execJoinGame); \
	DECLARE_FUNCTION(execFindGames); \
	DECLARE_FUNCTION(execHostGame); \
	DECLARE_FUNCTION(execSetInputMode); \
	DECLARE_FUNCTION(execGetCurrentGameState); \
	DECLARE_FUNCTION(execChangeState);


#define Main_Source_Main_GI_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLeaveGame); \
	DECLARE_FUNCTION(execSetOrUpdateSessionSpecialSettingString); \
	DECLARE_FUNCTION(execGetSessionSpecialSettingString); \
	DECLARE_FUNCTION(execJoinGame); \
	DECLARE_FUNCTION(execFindGames); \
	DECLARE_FUNCTION(execHostGame); \
	DECLARE_FUNCTION(execSetInputMode); \
	DECLARE_FUNCTION(execGetCurrentGameState); \
	DECLARE_FUNCTION(execChangeState);


#define Main_Source_Main_GI_h_133_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGI(); \
	friend struct Z_Construct_UClass_UGI_Statics; \
public: \
	DECLARE_CLASS(UGI, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(UGI)


#define Main_Source_Main_GI_h_133_INCLASS \
private: \
	static void StaticRegisterNativesUGI(); \
	friend struct Z_Construct_UClass_UGI_Statics; \
public: \
	DECLARE_CLASS(UGI, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(UGI)


#define Main_Source_Main_GI_h_133_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGI(UGI&&); \
	NO_API UGI(const UGI&); \
public:


#define Main_Source_Main_GI_h_133_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGI(UGI&&); \
	NO_API UGI(const UGI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGI)


#define Main_Source_Main_GI_h_133_PRIVATE_PROPERTY_OFFSET
#define Main_Source_Main_GI_h_130_PROLOG
#define Main_Source_Main_GI_h_133_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_GI_h_133_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_GI_h_133_SPARSE_DATA \
	Main_Source_Main_GI_h_133_RPC_WRAPPERS \
	Main_Source_Main_GI_h_133_INCLASS \
	Main_Source_Main_GI_h_133_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Main_Source_Main_GI_h_133_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_GI_h_133_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_GI_h_133_SPARSE_DATA \
	Main_Source_Main_GI_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
	Main_Source_Main_GI_h_133_INCLASS_NO_PURE_DECLS \
	Main_Source_Main_GI_h_133_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAIN_API UClass* StaticClass<class UGI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Main_Source_Main_GI_h


#define FOREACH_ENUM_EINPUTMODE(op) \
	op(EInputMode::EUIOnly) \
	op(EInputMode::EUIAndGame) \
	op(EInputMode::EGameOnly) 

enum class EInputMode : uint8;
template<> MAIN_API UEnum* StaticEnum<EInputMode>();

#define FOREACH_ENUM_EGAMESTATE(op) \
	op(EGameState::ENone) \
	op(EGameState::ELogin) \
	op(EGameState::ELoadingScreen) \
	op(EGameState::EStartup) \
	op(EGameState::EMainMenu) \
	op(EGameState::EMultiplayerHome) \
	op(EGameState::EMultiplayerJoin) \
	op(EGameState::EMultiplayerHost) \
	op(EGameState::EMultiplayerInGame) \
	op(EGameState::ETravelling) 

enum class EGameState : uint8;
template<> MAIN_API UEnum* StaticEnum<EGameState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
