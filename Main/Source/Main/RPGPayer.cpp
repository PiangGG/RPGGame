// Fill out your copyright notice in the Description page of Project Settings.


#include "RPGPayer.h"



#include "ItemBody.h"
#include "Camera/CameraComponent.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ARPGPayer::ARPGPayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Set up our springarm to hold our camera
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(FName("Camera Boom"));
	//Do not allow spring arm to rotate with character
	SpringArm->bUsePawnControlRotation = false;
	//Do not allow it to be affected by relative rotation of character
	//SpringArm->bAbsoluteRotation = true;
	SpringArm->SetUsingAbsoluteRotation(true);
	//Length of arm
	SpringArm->TargetArmLength = 700.f;
	//Attach to root
	SpringArm->SetupAttachment(RootComponent);

	//Set up the camera
	Camera = CreateDefaultSubobject<UCameraComponent>(FName("Camera"));
	//Give it a wider FOV
	Camera->FieldOfView = 110.f;
	//attach to SpringArm
	Camera->SetupAttachment(SpringArm);

	//Set up our forward direction
	TraceDirection = CreateDefaultSubobject<UArrowComponent>(FName("Trace Direction"));
	//attach to root
	TraceDirection->SetupAttachment(RootComponent);

	//set up basic network replication
	bReplicates = true;
	bAlwaysRelevant = true;
	//bReplicateMovement = true;
	this->ACharacter::SetReplicateMovement(true);
	//Set up character movement properties

	//rotate the character in the direction its moving
	GetCharacterMovement()->bOrientRotationToMovement = true;
	//don't rotate based on controller input
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	//Set up some movement properties for improving input feel
	//jump higher
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	//fall faster
	GetCharacterMovement()->GravityScale = 2.f;
	//Allow some control of character while airborne
	GetCharacterMovement()->AirControl = 0.8f;

	/*
	 * init Body
	 */
	ItemBodyFace=CreateDefaultSubobject<USkeletalMeshComponent>("ItemBodyFace");
	ItemBodyFace->SetupAttachment(GetMesh());

	ItemBodyHair=CreateDefaultSubobject<USkeletalMeshComponent>("ItemBodyHair");
	ItemBodyHair->SetupAttachment(GetMesh());

	ItemBodyGlove=CreateDefaultSubobject<USkeletalMeshComponent>("ItemBodyGlove");
	ItemBodyGlove->SetupAttachment(GetMesh());

	ItemBodyShoe=CreateDefaultSubobject<USkeletalMeshComponent>("ItemBodyShoe");
	ItemBodyShoe->SetupAttachment(GetMesh());

	ItemBodyHeadGears=CreateDefaultSubobject<USkeletalMeshComponent>("ItemBodyHeadGears");
	ItemBodyHeadGears->SetupAttachment(GetMesh());

	ItemBodyShoulderPad=CreateDefaultSubobject<USkeletalMeshComponent>("ItemBodyShoulderPad");
	ItemBodyShoulderPad->SetupAttachment(GetMesh());

	ItemBodyBelt=CreateDefaultSubobject<USkeletalMeshComponent>("ItemBodyBelt");
	ItemBodyBelt->SetupAttachment(GetMesh());

	GetCharacterMovement()->MaxWalkSpeed=BaseSpeed;

	
}

// Called when the game starts or when spawned
void ARPGPayer::BeginPlay()
{
	Super::BeginPlay();

	SpringArm->SetRelativeRotation(FQuat::MakeFromEuler(FVector(0, -25, 180)));
	//InitBody();
}

// Called every frame
void ARPGPayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARPGPayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &ACharacter::Jump);

	InputComponent->BindAction("Attack", EInputEvent::IE_Pressed, this, &ACharacter::Jump);

	InputComponent->BindAxis("ChangeCameraHeight", this, &ARPGPayer::ChangeCameraHeight);
	InputComponent->BindAxis("RotateCamera", this, &ARPGPayer::RotateCamera);
	InputComponent->BindAxis("MoveForward", this, &ARPGPayer::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ARPGPayer::MoveRight);
	
	InputComponent->BindAction("Run",EInputEvent::IE_Pressed,this, &ARPGPayer::Run);
	InputComponent->BindAction("Run",EInputEvent::IE_Released,this, &ARPGPayer::Run);
}

void ARPGPayer::InitBody()
{
	if (GetWorld())
	{
		/*ItemBodyCloth=GetWorld()->SpawnActor<AItemBody>(ItemBodyClothSub,RootMeshComponent->GetComponentLocation(),RootMeshComponent->GetComponentRotation());
		if (ItemBodyCloth)
		{
			ItemBodyCloth->SetOwner(this);
			ItemBodyCloth->SetItemState(EItemState::InPlayering);
			ItemBodyCloth->AttachBody(this);
		}

		ItemBodyFace=GetWorld()->SpawnActor<AItemBody>(ItemBodyFaceSub);
		if (ItemBodyFace)
		{
			ItemBodyFace->SetOwner(this);
			ItemBodyFace->SetItemState(EItemState::InPlayering);
			ItemBodyFace->AttachBody(this);
		}
		ItemBodyHair=GetWorld()->SpawnActor<AItemBody>(ItemBodyHairSub);
		if (ItemBodyHair)
		{
			ItemBodyHair->SetOwner(this);
			ItemBodyHair->SetItemState(EItemState::InPlayering);
			ItemBodyHair->AttachBody(this);
		}
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride=ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		
		ItemBodyShoe=GetWorld()->SpawnActor<AItemBody>(ItemBodyShoeSub);
		if (ItemBodyShoe)
		{
			ItemBodyShoe->SetOwner(this);
			//ItemBodyShoe->SetItemState(EItemState::InPlayering);
			//ItemBodyShoe->AttachBody(this);
		}
		ItemBodyHeadGears=GetWorld()->SpawnActor<AItemBody>(ItemBodyHeadGearsSub);
		if (ItemBodyHeadGears)
		{
			ItemBodyHeadGears->SetOwner(this);
			ItemBodyHeadGears->SetItemState(EItemState::InPlayering);
			ItemBodyHeadGears->AttachBody(this);
		}
		ItemBodyShoulderPad=GetWorld()->SpawnActor<AItemBody>(ItemBodyShoulderPadSub);
		if (ItemBodyShoulderPad)
		{
			ItemBodyShoulderPad->SetOwner(this);
			ItemBodyShoulderPad->SetItemState(EItemState::InPlayering);
			ItemBodyShoulderPad->AttachBody(this);
		}
		ItemBodyBelt=GetWorld()->SpawnActor<AItemBody>(ItemBodyBeltSub);
		if (ItemBodyBelt)
		{
			ItemBodyBelt->SetOwner(this);
			ItemBodyBelt->SetItemState(EItemState::InPlayering);
			ItemBodyBelt->AttachBody(this);
		}*/
	}
	
}

void ARPGPayer::SetPlayerStance(EPlayerStance NewPlayerStance)
{
	CurrentPlayerStance=NewPlayerStance;
	switch (CurrentPlayerStance)
	{
		case EPlayerStance::ENoWeaponStance:
			{
				break;
			}
		case EPlayerStance::EBowStance:
			{
				break;
			}
		case EPlayerStance::EDoubleSwordStance:
			{
				break;
			}
		case EPlayerStance::EMagicWandStance:
			{
				break;
			}
		case EPlayerStance::ESwordAndShieldStance:
			{
				break;
			}
		case EPlayerStance::ETwoHandSwordStance:
			{
				break;
			}
		default:
			{
				break;
			}
	}
}

EPlayerStance ARPGPayer::GetPlayerStance()
{
	return  CurrentPlayerStance;
}

void ARPGPayer::OnRep_PlayerStanceChange()
{
	//CurrentPlayerState=NewPlayerState;
}

void ARPGPayer::SetPlayerState(EPlayerState NewPlayerState)
{
	CurrentPlayerState=NewPlayerState;
	switch (CurrentPlayerState)
	{
		case EPlayerState::ENormal:
			{
				BaseSpeed=300.0f;
				RunSpeed=600.0f;
				break;
			}
	case EPlayerState::EBattleing:
			{
				BaseSpeed=200.0f;
				RunSpeed=400.0f;
				break;
			}
	case EPlayerState::EClimbing:
			{
				break;
			}
	case EPlayerState::EDead:
			{
				break;
			}
	case EPlayerState::ESwimming:
			{
				break;
			}
	case EPlayerState::EGetHiting:
			{
				break;
			}
	default:
			{
				break;
			}
	}
}

EPlayerState ARPGPayer::GetPlayerState()
{
	return CurrentPlayerState;
}

void ARPGPayer::OnRep_PlayerStateChange()
{
}

void ARPGPayer::Attack()
{
	if (GetLocalRole()<ROLE_Authority)
	{
		AttackServer();
	}

	if(bIsAttacking)
	{
		AttackNumber++;
		switch (AttackNumber%3)
		{
			case 1:
				{
					break;
				}
			case 2:
				{
					break;
				}
			case 3:
				{
					break;
				}
		default:
			break;
		}
		if (GetWorld())
		{
			GetWorld()->GetTimerManager().SetTimer
            (TimerHandle_Attack, this, &ARPGPayer::AttackCallBack,AttackTime, false);
		}
		}
	else
	{
		bIsAttacking=true;
		GetWorld()->GetTimerManager().SetTimer
        (TimerHandle_Attack, this, &ARPGPayer::AttackCallBack,AttackTime, false);
	
	}
}

void ARPGPayer::AttackCallBack()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle_Attack);
	bIsAttacking=false;
}

bool ARPGPayer::AttackServer_Validate()
{
	return true;
}

void ARPGPayer::AttackServer_Implementation()
{
	Attack();
}


void ARPGPayer::MoveForward(float amount)
{
	//APlatformerPlayerController *PC = Cast<APlatformerPlayerController>(GetWorld()->GetFirstPlayerController());

	//if (PC && PC->bPauseMenuDisplayed) return;
	//add movement input in the direction the camera is facing
	if (Controller && amount) {
		AddMovementInput(SpringArm->GetForwardVector(), amount);
	}
}

void ARPGPayer::MoveRight(float amount)
{
	//APlatformerPlayerController *PC = Cast<APlatformerPlayerController>(GetWorld()->GetFirstPlayerController());

	//if (PC && PC->bPauseMenuDisplayed) return;
	//add input in the camera's right direction
	if (Controller && amount) {
		AddMovementInput(SpringArm->GetRightVector(), amount);
	}
}

void ARPGPayer::RotateCamera(float amount)
{
	//APlatformerPlayerController *PC = Cast<APlatformerPlayerController>(GetWorld()->GetFirstPlayerController());

	//if (PC && PC->bPauseMenuDisplayed) return;
	//add rotation on the spring arm's z axis
	if (Controller && amount) {
		FVector rot = SpringArm->GetComponentRotation().Euler();
		rot += FVector(0, 0, amount);
		SpringArm->SetWorldRotation(FQuat::MakeFromEuler(rot));
	}
}
void ARPGPayer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//replicates to everyone
	DOREPLIFETIME(ARPGPayer, CurrentPlayerStance);
	DOREPLIFETIME(ARPGPayer, CurrentPlayerState);
	DOREPLIFETIME(ARPGPayer, bIsAttacking);
}
void ARPGPayer::ChangeCameraHeight(float amount)
{
	//APlatformerPlayerController *PC = Cast<APlatformerPlayerController>(GetWorld()->GetFirstPlayerController());

	//if (PC && PC->bPauseMenuDisplayed) return;
	//add rotation on spring arm's y axis. Clamp between -45 and -5
	if (Controller && amount) {
		FVector rot = SpringArm->GetComponentRotation().Euler();

		float originalHeight = rot.Y;
		originalHeight += amount;
		originalHeight = FMath::Clamp(originalHeight, -45.f, -5.f);

		rot = FVector(0, originalHeight, rot.Z);
		SpringArm->SetWorldRotation(FQuat::MakeFromEuler(rot));
	}
}

void ARPGPayer::Run()
{
	if (GetLocalRole()<ROLE_Authority)
	{
		RunServer();
	}
	if (bIsRun)
	{
		bIsRun=false;
		GetCharacterMovement()->MaxWalkSpeed=BaseSpeed;
	}else
	{
		bIsRun=true;
		GetCharacterMovement()->MaxWalkSpeed=RunSpeed;
	}
}

void ARPGPayer::RunServer_Implementation()
{
	Run();	
}

bool ARPGPayer::RunServer_Validate()
{
	return true;
}
