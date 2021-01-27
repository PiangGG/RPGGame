// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "Net/UnrealNetwork.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ThisSkeletalMesh=CreateDefaultSubobject<USkeletalMeshComponent>(FName("ThisSkeletalMesh"));
	SphereComponent=CreateDefaultSubobject<USphereComponent>(FName("SphereComponent"));
	RootComponent=ThisSkeletalMesh;
	SphereComponent->SetupAttachment(RootComponent);
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this,&AItem::SphereComponent_BeginOverlap);
	
	SphereComponent->OnComponentEndOverlap.AddDynamic(this,&AItem::SphereComponent_EndOverlap);
}

void AItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//replicates to everyone
	DOREPLIFETIME(AItem, CurrentItemState);
}
// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	SetItemState(EItemState::InWorld);
	//InitItem();
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AItem::InitItem()
{
	ItemStruct.ItemIcon=nullptr;
	ItemStruct.ItemName="";
	ItemStruct.ItemType=EItemType::Other;
}

EItemState AItem::GetItemState()
{
	return CurrentItemState;
}

void AItem::SetItemState(EItemState NewItemState)
{
	CurrentItemState=NewItemState;

	switch (CurrentItemState)
	{
		case EItemState::InWorld:
			{
				ThisSkeletalMesh->SetHiddenInGame(false);
				ThisSkeletalMesh->SetSimulatePhysics(true);
				ThisSkeletalMesh->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
				ThisSkeletalMesh->SetCollisionResponseToChannels(ECR_Block);
				ThisSkeletalMesh->SetWorldScale3D(FVector(1));
				ThisSkeletalMesh->SetRelativeScale3D(FVector(1));
				
				SphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
				//SphereComponent->SetCollisionObjectType(ECC_EngineTraceChannel1);
				//SphereComponent->SetCollisionResponseToChannels(ECR_Ignore);
				SphereComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
				SphereComponent->SetCollisionResponseToChannel(ECC_Pawn,ECR_Overlap);
				SphereComponent->SetHiddenInGame(false);
				break;
			}
		case EItemState::InPack:
			{
				ThisSkeletalMesh->SetHiddenInGame(true);
				ThisSkeletalMesh->SetSimulatePhysics(false);
				ThisSkeletalMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				ThisSkeletalMesh->SetCollisionResponseToChannels(ECR_Ignore);
				//ThisSkeletalMesh->SetWorldScale3D(FVector(1));
				//ThisSkeletalMesh->SetRelativeScale3D(FVector(1));
				
				SphereComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				SphereComponent->SetCollisionResponseToChannels(ECR_Ignore);
				//SphereComponent->SetCollisionResponseToChannel(ECC_EngineTraceChannel1,ECR_Overlap);
				SphereComponent->SetHiddenInGame(true);
				break;
			}
		case EItemState::InPlayering:
			{
				ThisSkeletalMesh->SetHiddenInGame(false);
				ThisSkeletalMesh->SetSimulatePhysics(false);
				ThisSkeletalMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				ThisSkeletalMesh->SetCollisionResponseToChannels(ECR_Overlap);
				ThisSkeletalMesh->SetWorldScale3D(FVector(1));
				ThisSkeletalMesh->SetRelativeScale3D(FVector(1));

				SphereComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				SphereComponent->SetCollisionResponseToChannels(ECR_Ignore);
				//SphereComponent->SetCollisionResponseToChannel(ECC_EngineTraceChannel1,ECR_Overlap);
				SphereComponent->SetHiddenInGame(false);
				break;
			}
		case EItemState::Other:
			{
				ThisSkeletalMesh->SetHiddenInGame(false);
				ThisSkeletalMesh->SetSimulatePhysics(true);
				ThisSkeletalMesh->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
				ThisSkeletalMesh->SetCollisionResponseToChannels(ECR_Block);
				ThisSkeletalMesh->SetWorldScale3D(FVector(1));
				ThisSkeletalMesh->SetRelativeScale3D(FVector(1));
				
				SphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
				SphereComponent->SetCollisionResponseToChannels(ECR_Ignore);
				SphereComponent->SetCollisionResponseToChannel(ECC_EngineTraceChannel1,ECR_Overlap);
				SphereComponent->SetHiddenInGame(false);
				
				break;
			}
		
		default:
			{
				ThisSkeletalMesh->SetHiddenInGame(false);
				ThisSkeletalMesh->SetSimulatePhysics(true);
				ThisSkeletalMesh->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
				ThisSkeletalMesh->SetCollisionResponseToChannels(ECR_Block);
				ThisSkeletalMesh->SetWorldScale3D(FVector(1));
				ThisSkeletalMesh->SetRelativeScale3D(FVector(1));
				
				SphereComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
				SphereComponent->SetCollisionResponseToChannels(ECR_Ignore);
				SphereComponent->SetCollisionResponseToChannel(ECC_EngineTraceChannel1,ECR_Overlap);
				SphereComponent->SetCollisionResponseToChannel(ECC_GameTraceChannel1,ECR_Overlap);
				SphereComponent->SetHiddenInGame(false);
				break;
			} 
	}
}

void AItem::OnRep_SetItemState(EItemState NewItemState)
{
	if (GetLocalRole()==ROLE_Authority)
	{
		CurrentItemState=NewItemState;
	}
}

void AItem::SphereComponent_BeginOverlap(UPrimitiveComponent* Component, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APawn* Player=Cast<APawn>(OtherActor);
	
	if (GetItemState()==EItemState::InWorld&&Player)
	{
		UE_LOG(LogTemp,Warning,TEXT("BeginOverlap"));
	}
}

void AItem::SphereComponent_EndOverlap(UPrimitiveComponent* Component,AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	APawn* Player=Cast<APawn>(OtherActor);
	
	if (GetItemState()==EItemState::InWorld&&Player)
	{
		UE_LOG(LogTemp,Warning,TEXT("EndOverlap"));
	}
}

void AItem::PickUpItem(APawn* Pawn)
{
}
