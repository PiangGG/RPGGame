// Fill out your copyright notice in the Description page of Project Settings.


#include "Body.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"
#include "Components/SkeletalMeshComponent.h"
#include "Main/GamePlay/ThePlayer.h"

// Sets default values
ABody::ABody()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ThisSkeletalMesh=CreateDefaultSubobject<USkeletalMeshComponent>(FName("ThisSkeletalMesh"));
	ThisSkeletalMesh->SetupAttachment(RootComponent);
	ThisSkeletalMesh->SetAnimationMode(EAnimationMode::AnimationBlueprint);

	SetItemType(EItemType::Body);
}
void ABody::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ABody, PawnBodyType);
	DOREPLIFETIME(ABody, ThisSkeletalMesh);
}
// Called when the game starts or when spawned
void ABody::BeginPlay()
{
	Super::BeginPlay();
}

void ABody::SetItemState(EItemState NewItemState)
{
	if (GetLocalRole()<ROLE_Authority)
	{
		SetItemStateServer(NewItemState);
	}
	CurrentItemState=NewItemState;
	switch (CurrentItemState)
	{
	case EItemState::InWorld:
		{
			SphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
			SphereComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
			SphereComponent->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);
			//ThisSkeletalMesh->SetSimulatePhysics(true);
			SphereComponent->SetHiddenInGame(false);
			
			//ThisSkeletalMesh->SetHiddenInGame(false);
			ThisSkeletalMesh->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
			ThisSkeletalMesh->SetCollisionResponseToChannels(ECR_Ignore);
			ThisSkeletalMesh->SetWorldScale3D(FVector(1));
			ThisSkeletalMesh->SetRelativeScale3D(FVector(1));

			bOverlap=false;
			break;
		}
	case EItemState::InPlayering:
		{
			SphereComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			SphereComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
			//SphereComponent->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);
			//ThisSkeletalMesh->SetSimulatePhysics(false);
			//SphereComponent->SetHiddenInGame(true);
			
			//ThisSkeletalMesh->SetHiddenInGame(false);
			ThisSkeletalMesh->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
			//ThisSkeletalMesh->SetCollisionResponseToChannels(ECR_Ignore);
			ThisSkeletalMesh->SetWorldScale3D(FVector(1));
			ThisSkeletalMesh->SetRelativeScale3D(FVector(1));
			break;
		}
		case EItemState::InPack:
		{
			break;
		}
	default:
		UE_LOG(LogTemp,Warning,TEXT("OnRep_SetItemState:default"));
		break;
	}
}

void ABody::Wear(APawn* Pawn)
{
	if (GetLocalRole()<ROLE_Authority)
	{
		WearServer(Pawn);
	}
	AThePlayer*Player=Cast<AThePlayer>(Pawn);
	if (!Player)return;
	Player->Wear(this);
}

EPawnBodyType ABody::GetPawnBodyType()
{
	return PawnBodyType;
}

void ABody::SetPawnBodyType(EPawnBodyType NewPawnBodyType)
{
	PawnBodyType=NewPawnBodyType;
}

void ABody::WearServer_Implementation(APawn* Pawn)
{
	Wear(Pawn);
}

bool ABody::WearServer_Validate(APawn* Pawn)
{
	return true;
}



