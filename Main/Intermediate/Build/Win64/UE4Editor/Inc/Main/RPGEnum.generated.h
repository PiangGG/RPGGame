// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAIN_RPGEnum_generated_h
#error "RPGEnum.generated.h already included, missing '#pragma once' in RPGEnum.h"
#endif
#define MAIN_RPGEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Main_Source_Main_Core_RPGEnum_h


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

#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::EBow) \
	op(EWeaponType::EAxe) \
	op(EWeaponType::EHammer) \
	op(EWeaponType::EShield) \
	op(EWeaponType::ESword) \
	op(EWeaponType::EWand) 

enum class EWeaponType : uint8;
template<> MAIN_API UEnum* StaticEnum<EWeaponType>();

#define FOREACH_ENUM_EPAWNBODYTYPE(op) \
	op(EPawnBodyType::ECloth) \
	op(EPawnBodyType::EFace) \
	op(EPawnBodyType::EHair) \
	op(EPawnBodyType::EGlove) \
	op(EPawnBodyType::EShoe) \
	op(EPawnBodyType::EHeadGears) \
	op(EPawnBodyType::EShoulderPad) \
	op(EPawnBodyType::EBelt) \
	op(EPawnBodyType::EOther) 

enum class EPawnBodyType : uint8;
template<> MAIN_API UEnum* StaticEnum<EPawnBodyType>();

#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Weapon) \
	op(EItemType::Drug) \
	op(EItemType::Body) \
	op(EItemType::Other) 

enum class EItemType : uint8;
template<> MAIN_API UEnum* StaticEnum<EItemType>();

#define FOREACH_ENUM_EITEMSTATE(op) \
	op(EItemState::InWorld) \
	op(EItemState::InPack) \
	op(EItemState::InPlayering) \
	op(EItemState::Other) 

enum class EItemState : uint8;
template<> MAIN_API UEnum* StaticEnum<EItemState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
