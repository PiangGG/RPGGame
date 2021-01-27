// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "ItemWeapon.generated.h"

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
/**
 * 
 */
UCLASS()
class MAIN_API AItemWeapon : public AItem
{
	GENERATED_BODY()

public:
	AItemWeapon();

	/*
	 * Component
	 */
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Weapon")
	class  UStaticMeshComponent* StaticMeshComponent;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Weapon")
	EWeaponType WeaponType;

	/*装备武器*/
	UFUNCTION(BlueprintCallable)
	void Equipment(APawn *Pawn);

	/*切换武器*/
	UFUNCTION(BlueprintCallable)
	void SwapWeapon(AItemWeapon *ItemWeapon);

	virtual void SphereComponent_BeginOverlap(class UPrimitiveComponent* Component,class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	virtual void SphereComponent_EndOverlap( UPrimitiveComponent* Component,AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) override;
};
