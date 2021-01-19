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
class MAIN_API RPGEnum
{
public:
	
};
