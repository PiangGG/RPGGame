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
