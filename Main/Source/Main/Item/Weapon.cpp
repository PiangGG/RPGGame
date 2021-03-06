// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Net/UnrealNetwork.h"
#include "Main/GamePlay/ThePlayer.h"

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
void AWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//replicates to everyone
	DOREPLIFETIME(AWeapon, CurrentItemState);
	DOREPLIFETIME(AWeapon, ItemType);
	DOREPLIFETIME(AWeapon, bOverlap);
	DOREPLIFETIME(AWeapon, WeaponType);
}
// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

EItemState AWeapon::GetItemState()
{
	return CurrentItemState;
}

void AWeapon::SetItemState(EItemState NewItemState)
{
	if (GetLocalRole()<ROLE_Authority)
	{
		SetItemStateServer(NewItemState);
	}
	CurrentItemState=NewItemState;
}

void AWeapon::OnRep_SetItemState(EItemState NewItemState)
{
	
}

void AWeapon::SphereComponent_BeginOverlap(UPrimitiveComponent* Component, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AThePlayer* Player=Cast<AThePlayer>(OtherActor);
	UE_LOG(LogTemp,Warning,TEXT("AWeapon::SphereComponent_BeginOverlap"));
	if (GetItemState()==EItemState::InWorld&&Player&&bOverlap==false&&Player->IsLocallyControlled())
	{
		bOverlap=true;
		Player->OverlapActor.Add(this);
		Player->OverlapActorChange();
	}
}

void AWeapon::SphereComponent_EndOverlap(UPrimitiveComponent* Component, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AThePlayer* Player=Cast<AThePlayer>(OtherActor);
	UE_LOG(LogTemp,Warning,TEXT("AWeapon::SphereComponent_EndOverlap"));
	if (GetItemState()==EItemState::InWorld&&Player&&bOverlap==true&&Player->OverlapActor.Contains(this))
	{
		bOverlap=false;
		Player->OverlapActor.Remove(this);
		Player->OverlapActorChange();
	}
}

void AWeapon::Equipment(APawn* Pawn)
{
	UE_LOG(LogTemp,Warning,TEXT("AWeapon::Equipment"));
	if (true)
	{
		EquipmentServer(Pawn);
	}
	AThePlayer*Player=Cast<AThePlayer>(Pawn);
	if (!Player/*&&Player->IsLocallyControlled()*/)return;
	Player->Equipment(this);
}

void AWeapon::EquipmentServer_Implementation(APawn* Pawn)
{
	Equipment(Pawn);
}

bool AWeapon::EquipmentServer_Validate(APawn* Pawn)
{
	return true;
}

EItemType AWeapon::GetItemType()
{
	return ItemType;
}

EWeaponType AWeapon::GetWeaponType()
{
	return WeaponType;
}

void AWeapon::SetItemStateServer_Implementation(EItemState NewItemState)
{
	SetItemState(NewItemState);
}

bool AWeapon::SetItemStateServer_Validate(EItemState NewItemState)
{
	return true;
}

