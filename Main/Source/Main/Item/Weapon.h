// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Main/Core/RPGEnum.h"
#include "Weapon.generated.h"

class UStaticMeshComponent;
class USphereComponent;
UCLASS()
class MAIN_API AWeapon : public AItem
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void SetItemState(EItemState NewItemState)override;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Replicated,Category="ItemSetting")
	UStaticMeshComponent *StaticMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AnimMontage")
	class UAnimMontage* AttackAnimMontage;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attack")
	float AttackTimerCD=2.0f;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attack")
	float AttackCurrentTimerCD=0.0f;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attack")
	int32 AttackNumber=0;
	
	UFUNCTION(BlueprintCallable)
    void Equipment(APawn *Pawn);
	UFUNCTION(Server,WithValidation,Reliable)
    void EquipmentServer(APawn *Pawn);
	void EquipmentServer_Implementation(APawn* Pawn);
	bool EquipmentServer_Validate(APawn* Pawn);

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Replicated,Category="ItemSetting")
	EWeaponType WeaponType=EWeaponType::ESword;
	UFUNCTION(BlueprintCallable)
	EWeaponType GetWeaponType();
	UFUNCTION(BlueprintCallable)
	void SetWeapon(EWeaponType NewEWeaponType);

	UFUNCTION(BlueprintCallable)
	void Attack();
	UFUNCTION(Server,WithValidation,Reliable)
    void AttackServer();

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Attack")
	FName AttachLocation="RightWeaponShield";
};
