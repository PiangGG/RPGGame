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
	
	//SetItemState(EItemState::InPlayering);
}

void AItemBody::InitItem()
{
	Super::InitItem();
}

void AItemBody::SwitchBody(APawn* Pawn)
{
	ARPGPayer *Player=Cast<ARPGPayer>(Pawn);
	
	if (!Player)return;;
	switch (GetEPawnBodyType())
	{
		case EPawnBodyType::ECloth:
			{
				//Player->ItemBodyCloth=ThisSkeletalMesh;
				break;
			}
		default: break;
	}
	
}

void AItemBody::AttachBody(APawn* Pawn)
{
	ARPGPayer *Player=Cast<ARPGPayer>(Pawn);
	
	if (!Player)return;;
	switch (GetEPawnBodyType())
	{
	case EPawnBodyType::ECloth:
		{
			//this->AttachToActor(Player,FAttachmentTransformRules::KeepRelativeTransform,AttachSoketName);
			this->ThisSkeletalMesh->AttachToComponent(Player->RootMeshComponent,FAttachmentTransformRules::KeepRelativeTransform,AttachSoketName);
			
			break;
		}
	case EPawnBodyType::EFace:
		{
			this->ThisSkeletalMesh->AttachToComponent(Player->GetMesh(),FAttachmentTransformRules::KeepRelativeTransform,AttachSoketName);
			
			break;
		}
	case EPawnBodyType::EHair:
		{
			this->ThisSkeletalMesh->AttachToComponent(Player->GetMesh(),FAttachmentTransformRules::KeepRelativeTransform,AttachSoketName);
			
			break;
		}
	case EPawnBodyType::EShoe:
		{
			this->ThisSkeletalMesh->AttachToComponent(Player->GetMesh(),FAttachmentTransformRules::KeepRelativeTransform,AttachSoketName);
			
			break;
		}
	case EPawnBodyType::EGlove:
		{
			this->ThisSkeletalMesh->AttachToComponent(Player->GetMesh(),FAttachmentTransformRules::KeepRelativeTransform,AttachSoketName);
			
			break;
		}
	case EPawnBodyType::EBelt:
		{
			this->ThisSkeletalMesh->AttachToComponent(Player->GetMesh(),FAttachmentTransformRules::KeepRelativeTransform,AttachSoketName);
			
			break;
		}
	case EPawnBodyType::EOther:
		{
			this->ThisSkeletalMesh->AttachToComponent(Player->GetMesh(),FAttachmentTransformRules::KeepRelativeTransform,AttachSoketName);
			
			break;
		}
	case EPawnBodyType::EHeadGears:
		{
			this->ThisSkeletalMesh->AttachToComponent(Player->GetMesh(),FAttachmentTransformRules::KeepRelativeTransform,AttachSoketName);
			
			break;
		}
	case EPawnBodyType::EShoulderPad:
		{
			this->ThisSkeletalMesh->AttachToComponent(Player->GetMesh(),FAttachmentTransformRules::KeepRelativeTransform,AttachSoketName);
			
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
