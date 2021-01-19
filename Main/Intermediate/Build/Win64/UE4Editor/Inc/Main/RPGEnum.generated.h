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


#define FOREACH_ENUM_EITEM(op) \
	op(EItem::Weapon) \
	op(EItem::Drug) 

enum class EItem : uint8;
template<> MAIN_API UEnum* StaticEnum<EItem>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
