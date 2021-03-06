// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
/**
 * 
 */
/*设置物品状态*/
UENUM(BlueprintType)
enum class EItemState:uint8
{  
	InWorld		UMETA(DisplayName = "在场景中"),
    InPack		UMETA(DisplayName = "在背包中"),
    InPlayering	UMETA(DisplayName = "玩家使用中"),
    Other		UMETA(DisplayName = "其他"),
};

UENUM(BlueprintType)
enum class EItemType:uint8
{  
	Weapon	UMETA(DisplayName = "武器"),
    Drug	UMETA(DisplayName = "药"),
    Body	UMETA(DisplayName = "身体"),
    Other	UMETA(DisplayName = "其他"),
};
/*
* 身体类型的枚举
*/
UENUM(BlueprintType)
enum class EPawnBodyType:uint8
{
	ECloth			UMETA(DisplayName = "衣服"),
    EFace			UMETA(DisplayName = "脸"),
    EHair			UMETA(DisplayName = "头发"),
    EGlove			UMETA(DisplayName = "手掌"),
    EShoe			UMETA(DisplayName = "鞋"),
    EHeadGears		UMETA(DisplayName = "头饰"),
    EShoulderPad	UMETA(DisplayName = "肩垫"),
    EBelt			UMETA(DisplayName = "皮带"),
    EOther			UMETA(DisplayName = "其他"),
};
/*
* 武器类型枚举
*/
UENUM(BlueprintType)
enum class EWeaponType:uint8
{
	EBow			UMETA(DisplayName = "弓"),
    EAxe			UMETA(DisplayName = "斧头"),
    EHammer			UMETA(DisplayName = "锤子"),
    EShield			UMETA(DisplayName = "盾"),
    ESword			UMETA(DisplayName = "剑"),
    EWand			UMETA(DisplayName = "魔杖"),
};
UENUM(BlueprintType)
enum  class EPlayerStance :uint8
{
	EBowStance					UMETA(DisplayName = "弓箭姿势"),
    EDoubleSwordStance			UMETA(DisplayName = "双剑姿势"),
    EMagicWandStance			UMETA(DisplayName = "魔法武器姿势"),
    ENoWeaponStance				UMETA(DisplayName = "无武器姿势"),
    ESwordAndShieldStance		UMETA(DisplayName = "剑与盾姿势"),
    ETwoHandSwordStance			UMETA(DisplayName = "双手剑姿势"),
};

UENUM(BlueprintType)
enum  class EPlayerState :uint8
{
	ENormal 			UMETA(DisplayName = "正常状态"),
    EBattleing			UMETA(DisplayName = "战斗状态"),
    ESwimming			UMETA(DisplayName = "游泳状态"),
    EClimbing			UMETA(DisplayName = "攀爬状态"),
    EGetHiting			UMETA(DisplayName = "被击状态"),
    EDead				UMETA(DisplayName = "死亡状态"),
};
