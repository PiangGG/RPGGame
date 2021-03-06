// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"

#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"
#include "Main/GamePlay/ThePlayer.h"

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh=CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(RootComponent);
	
	SetItemType(EItemType::Weapon);
}
void AWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//replicates to everyone
	DOREPLIFETIME(AWeapon, WeaponType);
}
// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

void AWeapon::SetItemState(EItemState NewItemState)
{
	if (GetLocalRole()<ROLE_Authority)
	{
		SetItemStateServer(NewItemState);
	}
	CurrentItemState=NewItemState;
	switch (GetItemState())
	{
		case EItemState::InPlayering:
			{
				StaticMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
				StaticMesh->SetCollisionResponseToChannels(ECR_Overlap);
				//StaticMesh->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);
				SphereComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				SphereComponent->SetCollisionResponseToChannels(ECR_Ignore);
				break;
			}
	default: break;
	}
}

void AWeapon::Equipment(APawn* Pawn)
{
	UE_LOG(LogTemp,Warning,TEXT("AWeapon::Equipment"));
	if (GetLocalRole()<ROLE_Authority)
	{
		EquipmentServer(Pawn);
	}
	AThePlayer*Player=Cast<AThePlayer>(Pawn);
	if (!Player)return;
	SetItemState(EItemState::InPlayering);
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
EWeaponType AWeapon::GetWeaponType()
{
	return WeaponType;
}

void AWeapon::SetWeapon(EWeaponType NewEWeaponType)
{
	WeaponType=NewEWeaponType;
}

void AWeapon::Attack()
{
	if (GetLocalRole()<ROLE_Authority)
	{
		AttackServer();
	}
	/*
	 * 实现攻击
	 */
	AThePlayer* Player=Cast<AThePlayer>(GetOuter());
	if (!Player)return;
	Player->Attack_1(this);
}

void AWeapon::AttackServer_Implementation()
{
	Attack();
}

bool AWeapon::AttackServer_Validate()
{
	return true;
}

