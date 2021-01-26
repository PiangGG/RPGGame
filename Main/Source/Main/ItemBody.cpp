// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBody.h"
#include "RPGPayer.h"

AItemBody::AItemBody()
{
	ItemStruct.ItemType=EItemType::Body;
}

void AItemBody::BeginPlay()
{
	Super::BeginPlay();
	
	SetItemState(EItemState::InPlayering);
}

void AItemBody::InitItem()
{
	Super::InitItem();
}

void AItemBody::SwitchBody(APawn* Pawn)
{
	ARPGPayer *Player=Cast<ARPGPayer>(Pawn);
	
	if (Player)return;;
	switch (GetEPawnBodyType())
	{
		case EPawnBodyType::ECloth:
			{
				Player->ItemBodyCloth=ThisSkeletalMesh;
				break;
			}
		default: break;
	}
	
}

void AItemBody::SetEPawnBody(EPawnBodyType NewPawnBodyType)
{
	PawnBodyType=NewPawnBodyType;
}

EPawnBodyType AItemBody::GetEPawnBodyType()
{
	return PawnBodyType;
}
