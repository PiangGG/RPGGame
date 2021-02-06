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
	
	if (!Player)return;
	AttachBody(Pawn);
	/*switch (GetEPawnBodyType())
	{
		case EPawnBodyType::ECloth:
			{
				Player->GetMesh()=ThisSkeletalMesh;
				break;
			}
		default: break;
	}*/
	
}

void AItemBody::AttachBody(APawn* Pawn)
{
	ARPGPayer *Player=Cast<ARPGPayer>(Pawn);
	
	if (!Player&&!ThisSkeletalMesh)return;;
	switch (GetEPawnBodyType())
	{
	case EPawnBodyType::ECloth:
		{
			//this->AttachToActor(Player,FAttachmentTransformRules::KeepRelativeTransform,AttachSoketName);
			//this->ThisSkeletalMesh->AttachToComponent(Player->RootMeshComponent,FAttachmentTransformRules::KeepRelativeTransform,AttachSoketName)
			if (ThisSkeletalMesh->SkeletalMesh)
			{
				UE_LOG(LogTemp,Warning,TEXT("SetSkeletalMesh1"));
				Player->GetMesh()->SetSkeletalMesh(ThisSkeletalMesh->SkeletalMesh);
			}
			
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

void AItemBody::SphereComponent_BeginOverlap(UPrimitiveComponent* Component, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::SphereComponent_BeginOverlap(Component, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	ARPGPayer *player=Cast<ARPGPayer>(OtherActor);
	if (GetLocalRole()==ROLE_Authority&&player)
	{
		SwitchBody(player);
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
