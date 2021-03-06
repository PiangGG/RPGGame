// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "Net/UnrealNetwork.h"
#include "Components/SphereComponent.h"
#include "Main/GamePlay/ThePlayer.h"
// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SphereComponent=CreateDefaultSubobject<USphereComponent>(FName("SphereComponent"));
	RootComponent=SphereComponent;

	SetReplicates(true);
	SetReplicateMovement(true);
	
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this,&AItem::SphereComponent_BeginOverlap);
	SphereComponent->OnComponentEndOverlap.AddDynamic(this,&AItem::SphereComponent_EndOverlap);

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetLocalRole()==ROLE_Authority)
	{
		/*
		 * 在场景中自动旋转
		 */
		if (GetItemState()==EItemState::InWorld)
		{
			float RotationSpeedVar=FMath::Fmod(RotationSpeed*DeltaTime,360);
			FRotator Rotator=FRotator(RotationSpeedVar,0.0f,0.0f);
			this->SetActorRotation(Rotator);
		}
	}
}

void AItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	//replicates to everyone
	DOREPLIFETIME(AItem, CurrentItemState);
	DOREPLIFETIME(AItem, ItemType);
	DOREPLIFETIME(AItem, bOverlap);
}

EItemState AItem::GetItemState()
{
	return CurrentItemState;
}

void AItem::SetItemState(EItemState NewItemState)
{
	if (GetLocalRole()<ROLE_Authority)
	{
		SetItemStateServer(NewItemState);
	}
	CurrentItemState=NewItemState;
}

void AItem::OnRep_SetItemState(EItemState NewItemState)
{
	UE_LOG(LogTemp,Warning,TEXT("OnRep_SetItemState"));
}

void AItem::SphereComponent_BeginOverlap(UPrimitiveComponent* Component, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp,Warning,TEXT("SphereComponent_BeginOverlap"));
	AThePlayer* Player=Cast<AThePlayer>(OtherActor);
	if (GetItemState()==EItemState::InWorld&&Player&&bOverlap==false&&Player->IsLocallyControlled())
	{
		bOverlap=true;
		Player->OverlapActor.Add(this);
		Player->OverlapActorChange();
	}
}

void AItem::SphereComponent_EndOverlap(UPrimitiveComponent* Component, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	UE_LOG(LogTemp,Warning,TEXT("SphereComponent_EndOverlap"));
	AThePlayer* Player=Cast<AThePlayer>(OtherActor);
	if (GetItemState()==EItemState::InWorld&&Player&&bOverlap==true&&Player->OverlapActor.Contains(this))
	{
		bOverlap=false;
		Player->OverlapActor.Remove(this);
		Player->OverlapActorChange();
	}
}

EItemType AItem::GetItemType()
{
	return ItemType;
}

void AItem::SetItemType(EItemType NewItemType)
{
	ItemType=NewItemType;
}

void AItem::Pickup(APawn* Pawn)
{
	if (GetLocalRole()<ROLE_Authority)
	{
		PickupServer(Pawn);
	}
	AThePlayer*Player=Cast<AThePlayer>(Pawn);
	if (!Player)return;
	Player->Pickup(this);
}

void AItem::PickupServer_Implementation(APawn* Pawn)
{
	Pickup(Pawn);
}

bool AItem::PickupServer_Validate(APawn* Pawn)
{
	return  true;
}

void AItem::SetItemStateServer_Implementation(EItemState NewItemState)
{
	SetItemState(NewItemState);
}

bool AItem::SetItemStateServer_Validate(EItemState NewItemState)
{
	return true;
}

