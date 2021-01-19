// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "Net/UnrealNetwork.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
}

void AItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//replicates to everyone
	DOREPLIFETIME(AItem, CurrentItemState);
}
// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

EItemState AItem::GetItemState()
{
	return CurrentItemState;
}

void AItem::SetItemState(EItemState NewItemState)
{
	CurrentItemState=NewItemState;
}

void AItem::OnRep_SetItemState(EItemState NewItemState)
{
	if (GetLocalRole()==ROLE_Authority)
	{
		CurrentItemState=NewItemState;
	}
}

