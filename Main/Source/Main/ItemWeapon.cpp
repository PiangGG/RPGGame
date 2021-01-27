// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemWeapon.h"
#include "RPGPayer.h"

AItemWeapon::AItemWeapon()
{
	StaticMeshComponent=CreateDefaultSubobject<UStaticMeshComponent>(FName("StaticMeshComponent"));
	StaticMeshComponent->SetupAttachment(RootComponent);
}

void AItemWeapon::Equipment(APawn* Pawn)
{
	/*
	 * 先判断角色是否有武器
	 */
	ARPGPayer *Player=Cast<ARPGPayer>(Pawn);
	
	if (Player)
	{
		this->SetItemState(EItemState::InPlayering);
	}
}

void AItemWeapon::SwapWeapon(AItemWeapon* ItemWeapon)
{
}

void AItemWeapon::SphereComponent_BeginOverlap(UPrimitiveComponent* Component, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::SphereComponent_BeginOverlap(Component, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
}

void AItemWeapon::SphereComponent_EndOverlap(UPrimitiveComponent* Component,AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Super::SphereComponent_EndOverlap( Component,OtherActor, OtherComp, OtherBodyIndex);
}

