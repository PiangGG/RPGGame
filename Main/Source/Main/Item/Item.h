// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Main/Core/RPGEnum.h"
#include "Item.generated.h"

class USphereComponent;

UCLASS()
class MAIN_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	//物品状态变量
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,ReplicatedUsing=OnRep_SetItemState,Category="ItemSetting")
	EItemState CurrentItemState=EItemState::InWorld;
	UFUNCTION()
    virtual EItemState GetItemState();
	UFUNCTION()
    virtual void SetItemState(EItemState NewItemState);
	UFUNCTION(Server,WithValidation,Reliable)
    virtual void SetItemStateServer(EItemState NewItemState);
	UFUNCTION()
    virtual void OnRep_SetItemState(EItemState NewItemState);
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="ItemSetting")
	USphereComponent *SphereComponent;

	UPROPERTY(EditDefaultsOnly,Replicated,BlueprintReadWrite,Category="ItemSetting")
	bool bOverlap=false;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="ItemSetting")
	float RotationSpeed=10.0f;
	UFUNCTION(BlueprintCallable)
    virtual void SphereComponent_BeginOverlap(class UPrimitiveComponent* Component,class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION(BlueprintCallable)
    virtual void SphereComponent_EndOverlap(UPrimitiveComponent* Component,AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Replicated,Category="ItemSetting")
	EItemType ItemType=EItemType::Other;

	UFUNCTION(BlueprintCallable)
	virtual EItemType GetItemType();
	
	UFUNCTION(BlueprintCallable)
	virtual void SetItemType(EItemType NewItemType);

	/*
	 * 拾取物品函数
	 */
	UFUNCTION(BlueprintCallable)
    void Pickup(APawn *Pawn);
	UFUNCTION(Server,WithValidation,Reliable)
    void PickupServer(APawn *Pawn);
	void PickupServer_Implementation(APawn* Pawn);
	bool PickupServer_Validate(APawn* Pawn);
};
