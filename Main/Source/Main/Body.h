// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "RPGEnum.h"
#include "GameFramework/Actor.h"
#include "Body.generated.h"

UCLASS()
class MAIN_API ABody : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABody();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	//物品状态变量
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,ReplicatedUsing=OnRep_SetItemState,Category="ItemSetting")
	EItemState CurrentItemState=EItemState::InWorld;
	//获得物品状态变量函数
	UFUNCTION(BlueprintCallable)
    virtual EItemState GetItemState();
	//设置物品状态变量函数
	UFUNCTION(BlueprintCallable)
    virtual void SetItemState(EItemState NewItemState);
	UFUNCTION(Server,WithValidation,Reliable)
    virtual void SetItemStateServer(EItemState NewItemState);
	UFUNCTION()
    virtual void OnRep_SetItemState(EItemState NewItemState);
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="ItemSetting")
	class USphereComponent *SphereComponent;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Replicated,Category="ItemSetting")
	class USkeletalMeshComponent *ThisSkeletalMesh;

	UPROPERTY()
	bool bOverlap=false;
	
	UFUNCTION(BlueprintCallable)
    virtual void SphereComponent_BeginOverlap(class UPrimitiveComponent* Component,class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION(BlueprintCallable)
    virtual void SphereComponent_EndOverlap(UPrimitiveComponent* Component,AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	UFUNCTION(BlueprintCallable)
	void Wear(APawn *Pawn);
	UFUNCTION(Server,WithValidation,Reliable)
	void WearServer(APawn *Pawn);
	void WearServer_Implementation(APawn* Pawn);
	bool WearServer_Validate(APawn* Pawn);

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Replicated,Category="ItemSetting")
	EItemType ItemType=EItemType::Other;
	
	EItemType GetItemType();

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Replicated,Category="ItemSetting")
	EPawnBodyType PawnBodyType=EPawnBodyType::ECloth;
	
	EPawnBodyType GetPawnBodyType();
	
};
