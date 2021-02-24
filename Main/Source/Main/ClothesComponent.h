// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Body.h"
#include "Components/ActorComponent.h"
#include "ClothesComponent.generated.h"

class USkeletalMeshComponent;
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MAIN_API UClothesComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UClothesComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Clothes")
	USkeletalMesh* ClothesMesh;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Clothes")
	USkeletalMesh* FaceMesh;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Clothes")
	USkeletalMesh* HairMesh;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Clothes")
	USkeletalMesh* GloveMesh;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Clothes")
	USkeletalMesh* ShoeMesh;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Clothes")
	USkeletalMesh* HeadGearsMesh;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Clothes")
	USkeletalMesh* ShoulderPadMesh;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Clothes")
	USkeletalMesh* BeltMesh;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Clothes")
	bool DefaultClothes=true;
	UFUNCTION(BlueprintCallable)
	void InitClothes(bool bDefaultClothes);
	
	UFUNCTION(BlueprintCallable)
	void SwitchMesh(ABody *NewItem);
	UFUNCTION(BlueprintCallable,Server,WithValidation,Reliable)
    void SwitchMeshServer(ABody *NewItem);

};
