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
#define CURRENT_FILE_ID Main_Source_Main_RPGEnum_h


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

#define FOREACH_ENUM_EITEM(op) \
	op(EItem::Weapon) \
	op(EItem::Drug) 

enum class EItem : uint8;
template<> MAIN_API UEnum* StaticEnum<EItem>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
