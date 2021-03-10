// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AWeapon;
class UInputComponent;
enum class EPlayerState : uint8;
enum class EPlayerStance : uint8;
#ifdef MAIN_ThePlayer_generated_h
#error "ThePlayer.generated.h already included, missing '#pragma once' in ThePlayer.h"
#endif
#define MAIN_ThePlayer_generated_h

#define Main_Source_Main_GamePlay_ThePlayer_h_16_SPARSE_DATA
#define Main_Source_Main_GamePlay_ThePlayer_h_16_RPC_WRAPPERS \
	virtual bool PickupServer_Validate(AActor* ); \
	virtual void PickupServer_Implementation(AActor* theActor); \
	virtual bool AttackNetMulticast_1_Validate(AWeapon* ); \
	virtual void AttackNetMulticast_1_Implementation(AWeapon* Weapon); \
	virtual bool AttackServer_1_Validate(AWeapon* ); \
	virtual void AttackServer_1_Implementation(AWeapon* Weapon); \
	virtual bool EquipmentNetMulticast_Validate(AActor* ); \
	virtual void EquipmentNetMulticast_Implementation(AActor* theActor); \
	virtual bool EquipmentServer_Validate(AActor* ); \
	virtual void EquipmentServer_Implementation(AActor* theActor); \
	virtual bool WearNetMulticast_Validate(AActor* ); \
	virtual void WearNetMulticast_Implementation(AActor* theActor); \
	virtual bool WearServer_Validate(AActor* ); \
	virtual void WearServer_Implementation(AActor* theActor); \
	virtual bool RunServer_Validate(); \
	virtual void RunServer_Implementation(); \
 \
	DECLARE_FUNCTION(execPickupServer); \
	DECLARE_FUNCTION(execPickup); \
	DECLARE_FUNCTION(execAttackNetMulticast_1); \
	DECLARE_FUNCTION(execAttackServer_1); \
	DECLARE_FUNCTION(execAttack_1); \
	DECLARE_FUNCTION(execEquipmentNetMulticast); \
	DECLARE_FUNCTION(execEquipmentServer); \
	DECLARE_FUNCTION(execEquipment); \
	DECLARE_FUNCTION(execCanPickup); \
	DECLARE_FUNCTION(execWearNetMulticast); \
	DECLARE_FUNCTION(execWearServer); \
	DECLARE_FUNCTION(execWear); \
	DECLARE_FUNCTION(execOnRep_PlayerStateChange); \
	DECLARE_FUNCTION(execGetPlayerState); \
	DECLARE_FUNCTION(execSetPlayerState); \
	DECLARE_FUNCTION(execOnRep_PlayerStanceChange); \
	DECLARE_FUNCTION(execGetPlayerStance); \
	DECLARE_FUNCTION(execSetPlayerStance); \
	DECLARE_FUNCTION(execOverlapActorChange); \
	DECLARE_FUNCTION(execRunServer); \
	DECLARE_FUNCTION(execRun);


#define Main_Source_Main_GamePlay_ThePlayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool PickupServer_Validate(AActor* ); \
	virtual void PickupServer_Implementation(AActor* theActor); \
	virtual bool AttackNetMulticast_1_Validate(AWeapon* ); \
	virtual void AttackNetMulticast_1_Implementation(AWeapon* Weapon); \
	virtual bool AttackServer_1_Validate(AWeapon* ); \
	virtual void AttackServer_1_Implementation(AWeapon* Weapon); \
	virtual bool EquipmentNetMulticast_Validate(AActor* ); \
	virtual void EquipmentNetMulticast_Implementation(AActor* theActor); \
	virtual bool EquipmentServer_Validate(AActor* ); \
	virtual void EquipmentServer_Implementation(AActor* theActor); \
	virtual bool WearNetMulticast_Validate(AActor* ); \
	virtual void WearNetMulticast_Implementation(AActor* theActor); \
	virtual bool WearServer_Validate(AActor* ); \
	virtual void WearServer_Implementation(AActor* theActor); \
	virtual bool RunServer_Validate(); \
	virtual void RunServer_Implementation(); \
 \
	DECLARE_FUNCTION(execPickupServer); \
	DECLARE_FUNCTION(execPickup); \
	DECLARE_FUNCTION(execAttackNetMulticast_1); \
	DECLARE_FUNCTION(execAttackServer_1); \
	DECLARE_FUNCTION(execAttack_1); \
	DECLARE_FUNCTION(execEquipmentNetMulticast); \
	DECLARE_FUNCTION(execEquipmentServer); \
	DECLARE_FUNCTION(execEquipment); \
	DECLARE_FUNCTION(execCanPickup); \
	DECLARE_FUNCTION(execWearNetMulticast); \
	DECLARE_FUNCTION(execWearServer); \
	DECLARE_FUNCTION(execWear); \
	DECLARE_FUNCTION(execOnRep_PlayerStateChange); \
	DECLARE_FUNCTION(execGetPlayerState); \
	DECLARE_FUNCTION(execSetPlayerState); \
	DECLARE_FUNCTION(execOnRep_PlayerStanceChange); \
	DECLARE_FUNCTION(execGetPlayerStance); \
	DECLARE_FUNCTION(execSetPlayerStance); \
	DECLARE_FUNCTION(execOverlapActorChange); \
	DECLARE_FUNCTION(execRunServer); \
	DECLARE_FUNCTION(execRun);


#define Main_Source_Main_GamePlay_ThePlayer_h_16_EVENT_PARMS \
	struct ThePlayer_eventAttackNetMulticast_1_Parms \
	{ \
		AWeapon* Weapon; \
	}; \
	struct ThePlayer_eventAttackServer_1_Parms \
	{ \
		AWeapon* Weapon; \
	}; \
	struct ThePlayer_eventEquipmentNetMulticast_Parms \
	{ \
		AActor* theActor; \
	}; \
	struct ThePlayer_eventEquipmentServer_Parms \
	{ \
		AActor* theActor; \
	}; \
	struct ThePlayer_eventPickupServer_Parms \
	{ \
		AActor* theActor; \
	}; \
	struct ThePlayer_eventWearNetMulticast_Parms \
	{ \
		AActor* theActor; \
	}; \
	struct ThePlayer_eventWearServer_Parms \
	{ \
		AActor* theActor; \
	};


#define Main_Source_Main_GamePlay_ThePlayer_h_16_CALLBACK_WRAPPERS
#define Main_Source_Main_GamePlay_ThePlayer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThePlayer(); \
	friend struct Z_Construct_UClass_AThePlayer_Statics; \
public: \
	DECLARE_CLASS(AThePlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(AThePlayer) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OverlapActor=NETFIELD_REP_START, \
		ShoeMesh, \
		CurrentPlayerStance, \
		CurrentPlayerState, \
		bCanPickup, \
		Weapons, \
		CurrentWeapon, \
		bAttack, \
		NETFIELD_REP_END=bAttack	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Main_Source_Main_GamePlay_ThePlayer_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAThePlayer(); \
	friend struct Z_Construct_UClass_AThePlayer_Statics; \
public: \
	DECLARE_CLASS(AThePlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(AThePlayer) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OverlapActor=NETFIELD_REP_START, \
		ShoeMesh, \
		CurrentPlayerStance, \
		CurrentPlayerState, \
		bCanPickup, \
		Weapons, \
		CurrentWeapon, \
		bAttack, \
		NETFIELD_REP_END=bAttack	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Main_Source_Main_GamePlay_ThePlayer_h_16_STANDARD_CONSTRUCTORS \
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


#define Main_Source_Main_GamePlay_ThePlayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThePlayer(AThePlayer&&); \
	NO_API AThePlayer(const AThePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThePlayer)


#define Main_Source_Main_GamePlay_ThePlayer_h_16_PRIVATE_PROPERTY_OFFSET
#define Main_Source_Main_GamePlay_ThePlayer_h_13_PROLOG \
	Main_Source_Main_GamePlay_ThePlayer_h_16_EVENT_PARMS


#define Main_Source_Main_GamePlay_ThePlayer_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_GamePlay_ThePlayer_h_16_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_GamePlay_ThePlayer_h_16_SPARSE_DATA \
	Main_Source_Main_GamePlay_ThePlayer_h_16_RPC_WRAPPERS \
	Main_Source_Main_GamePlay_ThePlayer_h_16_CALLBACK_WRAPPERS \
	Main_Source_Main_GamePlay_ThePlayer_h_16_INCLASS \
	Main_Source_Main_GamePlay_ThePlayer_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Main_Source_Main_GamePlay_ThePlayer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_GamePlay_ThePlayer_h_16_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_GamePlay_ThePlayer_h_16_SPARSE_DATA \
	Main_Source_Main_GamePlay_ThePlayer_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Main_Source_Main_GamePlay_ThePlayer_h_16_CALLBACK_WRAPPERS \
	Main_Source_Main_GamePlay_ThePlayer_h_16_INCLASS_NO_PURE_DECLS \
	Main_Source_Main_GamePlay_ThePlayer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAIN_API UClass* StaticClass<class AThePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Main_Source_Main_GamePlay_ThePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
