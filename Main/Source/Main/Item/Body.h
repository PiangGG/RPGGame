// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Main/Core/RPGEnum.h"
#include "Body.generated.h"

class SphereComponent;
class USkeletalMeshComponent;
UCLASS()
class MAIN_API ABody : public AItem
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABody();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Replicated,Category="ItemSetting")
	USkeletalMeshComponent *ThisSkeletalMesh;

	virtual void SetItemState(EItemState NewItemState)override;
	
	UFUNCTION(BlueprintCallable)
	void Wear(APawn *Pawn);
	UFUNCTION(Server,WithValidation,Reliable)
	void WearServer(APawn *Pawn);
	void WearServer_Implementation(APawn* Pawn);
	bool WearServer_Validate(APawn* Pawn);

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Replicated,Category="ItemSetting")
	EPawnBodyType PawnBodyType=EPawnBodyType::ECloth;
	UFUNCTION(BlueprintCallable)
	EPawnBodyType GetPawnBodyType();
	UFUNCTION(BlueprintCallable)
	void SetPawnBodyType(EPawnBodyType NewPawnBodyType);
};
