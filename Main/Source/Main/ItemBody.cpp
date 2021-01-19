// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBody.h"

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
}

void AItemBody::SetEPawnBody(EPawnBodyType NewPawnBodyType)
{
	PawnBodyType=NewPawnBodyType;
}

EPawnBodyType AItemBody::GetEPawnBodyType()
{
	return PawnBodyType;
}
