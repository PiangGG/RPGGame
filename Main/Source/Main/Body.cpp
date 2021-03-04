// Fill out your copyright notice in the Description page of Project Settings.


#include "Body.h"


#include "ThePlayer.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
ABody::ABody()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ThisSkeletalMesh=CreateDefaultSubobject<USkeletalMeshComponent>(FName("ThisSkeletalMesh"));
	SphereComponent=CreateDefaultSubobject<USphereComponent>(FName("SphereComponent"));
	RootComponent=SphereComponent;
	ThisSkeletalMesh->SetupAttachment(RootComponent);
	
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this,&ABody::SphereComponent_BeginOverlap);
	SphereComponent->OnComponentEndOverlap.AddDynamic(this,&ABody::SphereComponent_EndOverlap);

	SetReplicates(true);
	SetReplicateMovement(true);
	ThisSkeletalMesh->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	
}
void ABody::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//replicates to everyone
	DOREPLIFETIME(ABody, CurrentItemState);
	DOREPLIFETIME(ABody, PawnBodyType);
	DOREPLIFETIME(ABody, ItemType);
	DOREPLIFETIME(ABody, ThisSkeletalMesh);
}
// Called when the game starts or when spawned
void ABody::BeginPlay()
{
	Super::BeginPlay();
	
}

EItemState ABody::GetItemState()
{
	return CurrentItemState;
}

void ABody::SetItemState(EItemState NewItemState)
{
	UE_LOG(LogTemp,Warning,TEXT("Body->SetItemState"));
	CurrentItemState=NewItemState;
	/*switch (CurrentItemState)
	{
	case EItemState::InWorld:
		{
			SphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
			SphereComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
			SphereComponent->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);
			ThisSkeletalMesh->SetSimulatePhysics(true);
			//SphereComponent->SetHiddenInGame(true);
			
			ThisSkeletalMesh->SetHiddenInGame(false);
			ThisSkeletalMesh->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
			ThisSkeletalMesh->SetCollisionResponseToChannels(ECR_Ignore);
			ThisSkeletalMesh->SetWorldScale3D(FVector(1));
			ThisSkeletalMesh->SetRelativeScale3D(FVector(1));
			break;
		}
	case EItemState::InPlayering:
		{
			SphereComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			SphereComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
			//SphereComponent->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);
			ThisSkeletalMesh->SetSimulatePhysics(false);
			//SphereComponent->SetHiddenInGame(true);
			
			ThisSkeletalMesh->SetHiddenInGame(false);
			ThisSkeletalMesh->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
			//ThisSkeletalMesh->SetCollisionResponseToChannels(ECR_Ignore);
			ThisSkeletalMesh->SetWorldScale3D(FVector(1));
			ThisSkeletalMesh->SetRelativeScale3D(FVector(1));
			break;
		}
	default:
		UE_LOG(LogTemp,Warning,TEXT("OnRep_SetItemState:default"));
		break;
	}*/
}

void ABody::OnRep_SetItemState(EItemState NewItemState)
{
	UE_LOG(LogTemp,Warning,TEXT("Body->OnRep_SetItemState"));
	switch (CurrentItemState)
	{
	case EItemState::InWorld:
		{
			SphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
			SphereComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
			SphereComponent->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);
			SphereComponent->SetCollisionResponseToChannel(ECC_WorldStatic,ECR_Block);
			ThisSkeletalMesh->SetSimulatePhysics(true);
			//SphereComponent->SetHiddenInGame(true);
			
			ThisSkeletalMesh->SetHiddenInGame(false);
			ThisSkeletalMesh->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
			ThisSkeletalMesh->SetCollisionResponseToChannels(ECR_Ignore);
			ThisSkeletalMesh->SetWorldScale3D(FVector(1));
			ThisSkeletalMesh->SetRelativeScale3D(FVector(1));
			break;
		}
		case EItemState::InPlayering:
		{
			SphereComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			SphereComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
			//SphereComponent->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);
			ThisSkeletalMesh->SetSimulatePhysics(false);
			//SphereComponent->SetHiddenInGame(true);
			
			ThisSkeletalMesh->SetHiddenInGame(false);
			ThisSkeletalMesh->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
			//ThisSkeletalMesh->SetCollisionResponseToChannels(ECR_Ignore);
			ThisSkeletalMesh->SetWorldScale3D(FVector(1));
			ThisSkeletalMesh->SetRelativeScale3D(FVector(1));
			break;
		}
	default:
		UE_LOG(LogTemp,Warning,TEXT("OnRep_SetItemState:default"));
		break;
	}
}

void ABody::SphereComponent_BeginOverlap(UPrimitiveComponent* Component, AActor* OtherActor,
                                         UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AThePlayer* Player=Cast<AThePlayer>(OtherActor);
	
	if (GetItemState()==EItemState::InWorld&&Player&&bOverlap==false&&Player->IsLocallyControlled())
	{
		bOverlap=true;
		Player->OverlapActor.Add(this);
		Player->OverlapActorChange();
	}
}

void ABody::SphereComponent_EndOverlap(UPrimitiveComponent* Component, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AThePlayer* Player=Cast<AThePlayer>(OtherActor);
	
	if (GetItemState()==EItemState::InWorld&&Player&&bOverlap==true&&Player->OverlapActor.Contains(this))
	{
		bOverlap=false;
		
		Player->OverlapActor.Remove(this);
		Player->OverlapActorChange();
	}
}

void ABody::Wear(APawn* Pawn)
{
	if (GetLocalRole()<ROLE_Authority)
	{
		WearServer(Pawn);
	}
	AThePlayer*Player=Cast<AThePlayer>(Pawn);
	if (!Player/*&&Player->IsLocallyControlled()*/)return;
	Player->Wear(this);
}

EItemType ABody::GetItemType()
{
	return ItemType;;
}

EPawnBodyType ABody::GetPawnBodyType()
{
	return PawnBodyType;
}

void ABody::WearServer_Implementation(APawn* Pawn)
{
	Wear(Pawn);
}

bool ABody::WearServer_Validate(APawn* Pawn)
{
	return true;
}



