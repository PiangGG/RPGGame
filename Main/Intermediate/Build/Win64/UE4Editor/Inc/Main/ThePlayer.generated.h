// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPlayerState : uint8;
enum class EPlayerStance : uint8;
#ifdef MAIN_ThePlayer_generated_h
#error "ThePlayer.generated.h already included, missing '#pragma once' in ThePlayer.h"
#endif
#define MAIN_ThePlayer_generated_h

#define Main_Source_Main_ThePlayer_h_18_SPARSE_DATA
#define Main_Source_Main_ThePlayer_h_18_RPC_WRAPPERS \
	virtual bool RunServer_Validate(); \
	virtual void RunServer_Implementation(); \
	virtual bool AttackServer_Validate(); \
	virtual void AttackServer_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_PlayerStateChange); \
	DECLARE_FUNCTION(execGetPlayerState); \
	DECLARE_FUNCTION(execSetPlayerState); \
	DECLARE_FUNCTION(execOnRep_PlayerStanceChange); \
	DECLARE_FUNCTION(execGetPlayerStance); \
	DECLARE_FUNCTION(execSetPlayerStance); \
	DECLARE_FUNCTION(execOverlapActorChange); \
	DECLARE_FUNCTION(execRunServer); \
	DECLARE_FUNCTION(execRun); \
	DECLARE_FUNCTION(execAttackServer); \
	DECLARE_FUNCTION(execAttack);


#define Main_Source_Main_ThePlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool RunServer_Validate(); \
	virtual void RunServer_Implementation(); \
	virtual bool AttackServer_Validate(); \
	virtual void AttackServer_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_PlayerStateChange); \
	DECLARE_FUNCTION(execGetPlayerState); \
	DECLARE_FUNCTION(execSetPlayerState); \
	DECLARE_FUNCTION(execOnRep_PlayerStanceChange); \
	DECLARE_FUNCTION(execGetPlayerStance); \
	DECLARE_FUNCTION(execSetPlayerStance); \
	DECLARE_FUNCTION(execOverlapActorChange); \
	DECLARE_FUNCTION(execRunServer); \
	DECLARE_FUNCTION(execRun); \
	DECLARE_FUNCTION(execAttackServer); \
	DECLARE_FUNCTION(execAttack);


#define Main_Source_Main_ThePlayer_h_18_EVENT_PARMS
#define Main_Source_Main_ThePlayer_h_18_CALLBACK_WRAPPERS
#define Main_Source_Main_ThePlayer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThePlayer(); \
	friend struct Z_Construct_UClass_AThePlayer_Statics; \
public: \
	DECLARE_CLASS(AThePlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(AThePlayer) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentPlayerStance=NETFIELD_REP_START, \
		CurrentPlayerState, \
		NETFIELD_REP_END=CurrentPlayerState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Main_Source_Main_ThePlayer_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAThePlayer(); \
	friend struct Z_Construct_UClass_AThePlayer_Statics; \
public: \
	DECLARE_CLASS(AThePlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(AThePlayer) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentPlayerStance=NETFIELD_REP_START, \
		CurrentPlayerState, \
		NETFIELD_REP_END=CurrentPlayerState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Main_Source_Main_ThePlayer_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThePlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThePlayer(AThePlayer&&); \
	NO_API AThePlayer(const AThePlayer&); \
public:


#define Main_Source_Main_ThePlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThePlayer(AThePlayer&&); \
	NO_API AThePlayer(const AThePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThePlayer)


#define Main_Source_Main_ThePlayer_h_18_PRIVATE_PROPERTY_OFFSET
#define Main_Source_Main_ThePlayer_h_15_PROLOG \
	Main_Source_Main_ThePlayer_h_18_EVENT_PARMS


#define Main_Source_Main_ThePlayer_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_ThePlayer_h_18_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_ThePlayer_h_18_SPARSE_DATA \
	Main_Source_Main_ThePlayer_h_18_RPC_WRAPPERS \
	Main_Source_Main_ThePlayer_h_18_CALLBACK_WRAPPERS \
	Main_Source_Main_ThePlayer_h_18_INCLASS \
	Main_Source_Main_ThePlayer_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Main_Source_Main_ThePlayer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_ThePlayer_h_18_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_ThePlayer_h_18_SPARSE_DATA \
	Main_Source_Main_ThePlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Main_Source_Main_ThePlayer_h_18_CALLBACK_WRAPPERS \
	Main_Source_Main_ThePlayer_h_18_INCLASS_NO_PURE_DECLS \
	Main_Source_Main_ThePlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAIN_API UClass* StaticClass<class AThePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Main_Source_Main_ThePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
