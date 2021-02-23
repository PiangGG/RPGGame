// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EItem:uint8 //设置uint8类型  
{  
	Weapon	UMETA(DisplayName = "武器"),//想要显示中文 需要将编码格式设置为utf-8  
    Drug	UMETA(DisplayName = "药"),//DisPlayName表示显示的名称，在蓝图中可见  
};
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
