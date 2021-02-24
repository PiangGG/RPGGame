// Fill out your copyright notice in the Description page of Project Settings.


#include "ClothesComponent.h"

// Sets default values for this component's properties
UClothesComponent::UClothesComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	/*
	 * init all mesh
	 */
	//InitClothes(true);
}


// Called when the game starts
void UClothesComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
}

void UClothesComponent::InitClothes(bool bDefaultClothes)
{
	/*if (bDefaultClothes)
	{
		static ConstructorHelpers::FObjectFinder<USkeletalMesh> theClothesMesh(TEXT("SkeletalMesh'/Game/ModularRPGHeroesPolyart/Meshes/ModularBodyParts/Cloth01SK.Cloth01SK'"));
		if (theClothesMesh.Object&&ClothesMesh)
		{
			
		}
	}*/
}

void UClothesComponent::SwitchMesh(ABody* NewItem)
{
	if (GetOwnerRole()<ROLE_Authority)
	{
		SwitchMeshServer(NewItem);
	}

	/*
	 * 
	 */
	
}

void UClothesComponent::SwitchMeshServer_Implementation(ABody* NewItem)
{
	SwitchMesh(NewItem);
}

bool UClothesComponent::SwitchMeshServer_Validate(ABody* NewItem)
{
	return true;
}

