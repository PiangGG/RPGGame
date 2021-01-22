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
#ifdef MAIN_RPGPayer_generated_h
#error "RPGPayer.generated.h already included, missing '#pragma once' in RPGPayer.h"
#endif
#define MAIN_RPGPayer_generated_h

#define Main_Source_Main_RPGPayer_h_33_SPARSE_DATA
#define Main_Source_Main_RPGPayer_h_33_RPC_WRAPPERS \
	virtual bool RunServer_Validate(); \
	virtual void RunServer_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_PlayerStateChange); \
	DECLARE_FUNCTION(execGetPlayerState); \
	DECLARE_FUNCTION(execSetPlayerState); \
	DECLARE_FUNCTION(execOnRep_PlayerStanceChange); \
	DECLARE_FUNCTION(execGetPlayerStance); \
	DECLARE_FUNCTION(execSetPlayerStance); \
	DECLARE_FUNCTION(execRunServer); \
	DECLARE_FUNCTION(execRun);


#define Main_Source_Main_RPGPayer_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool RunServer_Validate(); \
	virtual void RunServer_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_PlayerStateChange); \
	DECLARE_FUNCTION(execGetPlayerState); \
	DECLARE_FUNCTION(execSetPlayerState); \
	DECLARE_FUNCTION(execOnRep_PlayerStanceChange); \
	DECLARE_FUNCTION(execGetPlayerStance); \
	DECLARE_FUNCTION(execSetPlayerStance); \
	DECLARE_FUNCTION(execRunServer); \
	DECLARE_FUNCTION(execRun);


#define Main_Source_Main_RPGPayer_h_33_EVENT_PARMS
#define Main_Source_Main_RPGPayer_h_33_CALLBACK_WRAPPERS
#define Main_Source_Main_RPGPayer_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARPGPayer(); \
	friend struct Z_Construct_UClass_ARPGPayer_Statics; \
public: \
	DECLARE_CLASS(ARPGPayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(ARPGPayer) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentPlayerStance=NETFIELD_REP_START, \
		CurrentPlayerState, \
		NETFIELD_REP_END=CurrentPlayerState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Main_Source_Main_RPGPayer_h_33_INCLASS \
private: \
	static void StaticRegisterNativesARPGPayer(); \
	friend struct Z_Construct_UClass_ARPGPayer_Statics; \
public: \
	DECLARE_CLASS(ARPGPayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(ARPGPayer) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentPlayerStance=NETFIELD_REP_START, \
		CurrentPlayerState, \
		NETFIELD_REP_END=CurrentPlayerState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Main_Source_Main_RPGPayer_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARPGPayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGPayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGPayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGPayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGPayer(ARPGPayer&&); \
	NO_API ARPGPayer(const ARPGPayer&); \
public:


#define Main_Source_Main_RPGPayer_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARPGPayer(ARPGPayer&&); \
	NO_API ARPGPayer(const ARPGPayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGPayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGPayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARPGPayer)


#define Main_Source_Main_RPGPayer_h_33_PRIVATE_PROPERTY_OFFSET
#define Main_Source_Main_RPGPayer_h_30_PROLOG \
	Main_Source_Main_RPGPayer_h_33_EVENT_PARMS


#define Main_Source_Main_RPGPayer_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_RPGPayer_h_33_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_RPGPayer_h_33_SPARSE_DATA \
	Main_Source_Main_RPGPayer_h_33_RPC_WRAPPERS \
	Main_Source_Main_RPGPayer_h_33_CALLBACK_WRAPPERS \
	Main_Source_Main_RPGPayer_h_33_INCLASS \
	Main_Source_Main_RPGPayer_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Main_Source_Main_RPGPayer_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_RPGPayer_h_33_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_RPGPayer_h_33_SPARSE_DATA \
	Main_Source_Main_RPGPayer_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Main_Source_Main_RPGPayer_h_33_CALLBACK_WRAPPERS \
	Main_Source_Main_RPGPayer_h_33_INCLASS_NO_PURE_DECLS \
	Main_Source_Main_RPGPayer_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAIN_API UClass* StaticClass<class ARPGPayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Main_Source_Main_RPGPayer_h


#define FOREACH_ENUM_EPLAYERSTATE(op) \
	op(EPlayerState::ENormal) \
	op(EPlayerState::EBattleing) \
	op(EPlayerState::ESwimming) \
	op(EPlayerState::EClimbing) \
	op(EPlayerState::EGetHiting) \
	op(EPlayerState::EDead) 

enum class EPlayerState : uint8;
template<> MAIN_API UEnum* StaticEnum<EPlayerState>();

#define FOREACH_ENUM_EPLAYERSTANCE(op) \
	op(EPlayerStance::EBowStance) \
	op(EPlayerStance::EDoubleSwordStance) \
	op(EPlayerStance::EMagicWandStance) \
	op(EPlayerStance::ENoWeaponStance) \
	op(EPlayerStance::ESwordAndShieldStance) \
	op(EPlayerStance::ETwoHandSwordStance) 

enum class EPlayerStance : uint8;
template<> MAIN_API UEnum* StaticEnum<EPlayerStance>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
