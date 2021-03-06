// Fill out your copyright notice in the Description page of Project Settings.


#include "ThePlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Net/UnrealNetwork.h"
#include "ThePC.h"
#include "Main/Item/Body.h"

// Sets default values
AThePlayer::AThePlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Set up our springarm to hold our camera
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(FName("Camera Boom"));
	SpringArm->bUsePawnControlRotation = false;
	//SpringArm->bAbsoluteRotation = true;
	SpringArm->SetUsingAbsoluteRotation(true);
	SpringArm->TargetArmLength = 700.f;
	SpringArm->SetupAttachment(RootComponent);

	//Set up the camera
	Camera = CreateDefaultSubobject<UCameraComponent>(FName("Camera"));
	Camera->FieldOfView = 110.f;
	Camera->SetupAttachment(SpringArm);

	//Set up our forward direction
	TraceDirection = CreateDefaultSubobject<UArrowComponent>(FName("Trace Direction"));
	TraceDirection->SetupAttachment(RootComponent);

	SphereComponent= CreateDefaultSubobject<USphereComponent>(FName("SphereComponent"));
	SphereComponent->SetupAttachment(RootComponent);
	//set up basic network replication
	bReplicates = true;
	bAlwaysRelevant = true;
	//Set up character movement properties
	GetCharacterMovement()->bOrientRotationToMovement = true;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	//Set up some movement properties for improving input feel
	//jump higher
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.8f;

	/*
	 * init Body
	 */
	Init();
	isCanWear=false;
	GetCharacterMovement()->MaxWalkSpeed=BaseSpeed;
}

// Called when the game starts or when spawned
void AThePlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AThePlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AThePlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	InputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &ACharacter::Jump);

	InputComponent->BindAction("Attack", EInputEvent::IE_Pressed, this, &AThePlayer::Attack);

	InputComponent->BindAxis("ChangeCameraHeight", this, &AThePlayer::ChangeCameraHeight);
	InputComponent->BindAxis("RotateCamera", this, &AThePlayer::RotateCamera);
	InputComponent->BindAxis("MoveForward", this, &AThePlayer::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AThePlayer::MoveRight);
	
	InputComponent->BindAction("Run",EInputEvent::IE_Pressed,this, &AThePlayer::Run);
	InputComponent->BindAction("Run",EInputEvent::IE_Released,this, &AThePlayer::Run);

}

void AThePlayer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	//DOREPLIFETIME(AThePlayer,MeshCompMap);
	DOREPLIFETIME(AThePlayer,isCanWear);
	DOREPLIFETIME(AThePlayer,ShoeMesh);
	DOREPLIFETIME(AThePlayer,OverlapActor);
	//DOREPLIFETIME(AThePlayer,GetMesh());
}

void AThePlayer::MoveForward(float amount)
{
	AThePC *PC = Cast<AThePC>(GetWorld()->GetFirstPlayerController());

	if (PC && PC->bPauseMenuDisplayed) return;
	//add movement input in the direction the camera is facing
	if (Controller && amount) {
		AddMovementInput(SpringArm->GetForwardVector(), amount);
	}
}

void AThePlayer::MoveRight(float amount)
{
	AThePC *PC = Cast<AThePC>(GetWorld()->GetFirstPlayerController());

	if (PC && PC->bPauseMenuDisplayed) return;
	//add input in the camera's right direction
	if (Controller && amount) {
		AddMovementInput(SpringArm->GetRightVector(), amount);
	}
}

void AThePlayer::RotateCamera(float amount)
{
	AThePC *PC = Cast<AThePC>(GetWorld()->GetFirstPlayerController());

	if (PC && PC->bPauseMenuDisplayed) return;
	//add rotation on the spring arm's z axis
	if (Controller && amount) {
		FVector rot = SpringArm->GetComponentRotation().Euler();
		rot += FVector(0, 0, amount);
		SpringArm->SetWorldRotation(FQuat::MakeFromEuler(rot));
	}
}

void AThePlayer::ChangeCameraHeight(float amount)
{
	AThePC *PC = Cast<AThePC>(GetWorld()->GetFirstPlayerController());

	if (PC && PC->bPauseMenuDisplayed) return;
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

void AThePlayer::Attack()
{
	if (GetLocalRole()<ROLE_Authority)
	{
		AttackServer();
	}
	/*
	 * 
	 */
	UE_LOG(LogTemp,Warning,TEXT("Attack"));
	
}

void AThePlayer::AttackServer_Implementation()
{
	Attack();
}

bool AThePlayer::AttackServer_Validate()
{
	return  true;
}

void AThePlayer::AttackCallBack()
{
	
}

void AThePlayer::Run()
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

void AThePlayer::OverlapActorChange()
{
	if (!OverlapActorTSub/*||!IsLocallyControlled()*/||!InputComponent)
	{
		return;
	}
	if (OverlapActor.IsValidIndex(0)&&UUserWidgetOverlapActor==nullptr)
	{
		UUserWidgetOverlapActor = CreateWidget<UUserWidget>(GetWorld()->GetFirstPlayerController(), OverlapActorTSub);
		if (UUserWidgetOverlapActor)
		{
			//add the widget to the viewport
			UUserWidgetOverlapActor->AddToViewport();
			CanWear(InputComponent);
			//go to the appropriate input mode
			//SetInputMode(EInputMode::EUIOnly, true);     
		}else
		{
			UE_LOG(LogTemp,Warning,TEXT("!UUserWidgetOverlapActor->AddToViewport"));
		}
	}else if(OverlapActor.IsValidIndex(0)&&UUserWidgetOverlapActor)
	{
		UE_LOG(LogTemp,Warning,TEXT("OverlapActor.IsValidIndex(0)&&UUserWidgetOverlapActor"));
		
		UUserWidgetOverlapActor->RemoveFromViewport();
		UUserWidgetOverlapActor=nullptr;
		UUserWidgetOverlapActor = CreateWidget<UUserWidget>(GetWorld()->GetFirstPlayerController(), OverlapActorTSub);
		UUserWidgetOverlapActor->AddToViewport();
		CanWear(InputComponent);
		//UpdateUUserWidgetOverlapActor();
		//UUserWidgetOverlapActor=nullptr;
	}else
	{
		UE_LOG(LogTemp,Warning,TEXT("OverlapActorChange:else"));
		UUserWidgetOverlapActor->RemoveFromViewport();
		UUserWidgetOverlapActor=nullptr;
		NotCanWear(InputComponent);
	}
}

void AThePlayer::Init()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> theClothesMesh(TEXT("SkeletalMesh'/Game/ModularRPGHeroesPolyart/Meshes/ModularBodyParts/Cloth01SK.Cloth01SK'"));
	//static ConstructorHelpers::FObjectFinder<UAnimInstance> theAnimInstance(TEXT("AnimBlueprint'/Game/Demo/Animation/PlayerAnimBlueprint.PlayerAnimBlueprint_C'"));
	
	if (theClothesMesh.Object&&GetMesh())
	{
		GetMesh()->SetSkeletalMesh(theClothesMesh.Object);
		GetMesh()->SetIsReplicated(true);
	}else
	{
		return;
	}
	
	FaceMesh=CreateDefaultSubobject<USkeletalMeshComponent>("FaceMesh");
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> theFaceMesh(TEXT("SkeletalMesh'/Game/ModularRPGHeroesPolyart/Meshes/ModularBodyParts/Face01SK.Face01SK'"));
	if (theFaceMesh.Object&&FaceMesh)
	{
		FaceMesh->SetSkeletalMesh(theFaceMesh.Object);
		FaceMesh->SetupAttachment(GetMesh());
	}
	
	HairMesh=CreateDefaultSubobject<USkeletalMeshComponent>("HairMesh");
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> theHairMesh(TEXT("SkeletalMesh'/Game/ModularRPGHeroesPolyart/Meshes/ModularBodyParts/Hair01HalfSK.Hair01HalfSK'"));
	if (theHairMesh.Object&&HairMesh)
	{
		HairMesh->SetSkeletalMesh(theHairMesh.Object);
		HairMesh->SetupAttachment(GetMesh());
	}
	

	GloveMesh=CreateDefaultSubobject<USkeletalMeshComponent>("GloveMesh");
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> theGloveMesh(TEXT("SkeletalMesh'/Game/ModularRPGHeroesPolyart/Meshes/ModularBodyParts/Glove01SK.Glove01SK'"));
	if (theGloveMesh.Object&&GloveMesh)
	{
		GloveMesh->SetSkeletalMesh(theGloveMesh.Object);
		GloveMesh->SetupAttachment(GetMesh());
	}
	
	ShoeMesh=CreateDefaultSubobject<USkeletalMeshComponent>("ShoeMesh");
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> theShoeMesh(TEXT("SkeletalMesh'/Game/ModularRPGHeroesPolyart/Meshes/ModularBodyParts/Shoe01SK.Shoe01SK'"));
	if (theShoeMesh.Object&&ShoeMesh)
	{
		ShoeMesh->SetSkeletalMesh(theShoeMesh.Object);
		ShoeMesh->SetIsReplicated(true);
		ShoeMesh->SetupAttachment(GetMesh());

	}

	HeadGearsMesh=CreateDefaultSubobject<USkeletalMeshComponent>("HeadGearsMesh");
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> theHeadGearsMesh(TEXT("SkeletalMesh'/Game/ModularRPGHeroesPolyart/Meshes/ModularBodyParts/Helm01SK.Helm01SK'"));
	if (theHeadGearsMesh.Object&&HeadGearsMesh)
	{
		HeadGearsMesh->SetSkeletalMesh(theHeadGearsMesh.Object);
		HeadGearsMesh->SetupAttachment(GetMesh());
	}
	
	ShoulderPadMesh=CreateDefaultSubobject<USkeletalMeshComponent>("ShoulderPadMesh");
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> theShoulderPadMesh(TEXT("SkeletalMesh'/Game/ModularRPGHeroesPolyart/Meshes/ModularBodyParts/ShoulderPad01SK.ShoulderPad01SK'"));
	if (theShoulderPadMesh.Object&&ShoulderPadMesh)
	{
		ShoulderPadMesh->SetSkeletalMesh(theShoulderPadMesh.Object);
		ShoulderPadMesh->SetupAttachment(GetMesh());
	}

	BeltMesh=CreateDefaultSubobject<USkeletalMeshComponent>("ItemBodyBelt");
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> theBeltMesh(TEXT("SkeletalMesh'/Game/ModularRPGHeroesPolyart/Meshes/ModularBodyParts/ShoulderPad01SK.ShoulderPad01SK'"));
	if (theBeltMesh.Object&&BeltMesh)
	{
		BeltMesh->SetSkeletalMesh(theBeltMesh.Object);
		BeltMesh->SetupAttachment(GetMesh());
	}

	MeshCompMap.Add(EPawnBodyType::ECloth,GetMesh());
	MeshCompMap.Add(EPawnBodyType::EFace,FaceMesh);
	MeshCompMap.Add(EPawnBodyType::EHair,HairMesh);
	MeshCompMap.Add(EPawnBodyType::EGlove,GloveMesh);
	MeshCompMap.Add(EPawnBodyType::EShoe,ShoeMesh);
	MeshCompMap.Add(EPawnBodyType::EHeadGears,HeadGearsMesh);
	MeshCompMap.Add(EPawnBodyType::EShoulderPad,ShoulderPadMesh);
	MeshCompMap.Add(EPawnBodyType::EBelt,BeltMesh);

	
	for (auto& Elem :MeshCompMap)
	{
		USkeletalMeshComponent *thisMesh=Cast<USkeletalMeshComponent>(Elem.Value);
		thisMesh->SetAnimInstanceClass(GetMesh()->GetAnimClass());
		//UE_LOG(LogTemp,Warning,TEXT("0"));
	}
}

void AThePlayer::PlayAnimMontage(UAnimMontage* PickAnimMontage, FName name)
{
	UE_LOG(LogTemp,Warning,TEXT("PlayAnimMontage"));
	if (PickAnimMontage&&name!=""&&MeshCompMap.Num()>0)
	{
		for (auto& Elem :MeshCompMap)
		{
			USkeletalMeshComponent *thisMesh=Cast<USkeletalMeshComponent>(Elem.Value);
			UAnimInstance* PlayerAnimation =thisMesh->GetAnimInstance();
			if (PlayerAnimation)
			{
				if (PlayerAnimation->IsAnyMontagePlaying()==false)
				{
					
					PlayerAnimation->Montage_Play(AnimMontage);
					PlayerAnimation->Montage_JumpToSection(name,AnimMontage);
				}else
				{
					PlayerAnimation->Montage_Play(AnimMontage);
					PlayerAnimation->Montage_JumpToSection(name,AnimMontage);
				}	
			}
			
		}
	}
}

void AThePlayer::SetPlayerStance(EPlayerStance NewPlayerStance)
{
	CurrentPlayerStance=NewPlayerStance;
}

EPlayerStance AThePlayer::GetPlayerStance()
{
	return CurrentPlayerStance;
}

void AThePlayer::OnRep_PlayerStanceChange()
{
	UE_LOG(LogTemp,Warning,TEXT("OnRep_PlayerStanceChange"));
}

void AThePlayer::SetPlayerState(EPlayerState NewPlayerState)
{
	CurrentPlayerState=NewPlayerState;
}

EPlayerState AThePlayer::GetPlayerState()
{
	return  CurrentPlayerState;
}

void AThePlayer::OnRep_PlayerStateChange()
{
	UE_LOG(LogTemp,Warning,TEXT("OnRep_PlayerStateChange"));
}

void AThePlayer::Wear(AActor* theActor)
{
	WearServer(theActor);
}

void AThePlayer::WearServer_Implementation(AActor *theActor)
{
	WearNetMulticast(theActor);
}

bool AThePlayer::WearServer_Validate(AActor* theActor)
{
	return true;
}

void AThePlayer::WearNetMulticast_Implementation(AActor* theActor)
{
	ABody *Body=Cast<ABody>(theActor);
	if (!Body)return;
	PlayAnimMontage(AnimMontage,"Wear");
	//Body->SetItemState(EItemState::InPlayering);
	switch (Body->GetPawnBodyType())
	{
	case EPawnBodyType::ECloth:{
			if (GetMesh()&&Body->ThisSkeletalMesh)
			{
				USkeletalMesh* MeshComponent=GetMesh()->SkeletalMesh;
				GetMesh()->SetSkeletalMesh(Body->ThisSkeletalMesh->SkeletalMesh);
				Body->ThisSkeletalMesh->SetSkeletalMesh(MeshComponent);
				Body->SetItemState(EItemState::InWorld);
			}	
			break;
	}
	case EPawnBodyType::EShoe:{
			if (ShoeMesh&&Body->ThisSkeletalMesh)
			{
				USkeletalMesh* MeshComponent=ShoeMesh->SkeletalMesh;
				ShoeMesh->SetSkeletalMesh(Body->ThisSkeletalMesh->SkeletalMesh);
				Body->ThisSkeletalMesh->SetSkeletalMesh(MeshComponent);
				Body->SetItemState(EItemState::InWorld);
			}	
			break;
	}
	case EPawnBodyType::EFace:{
			if (FaceMesh&&Body->ThisSkeletalMesh)
			{
				USkeletalMesh* MeshComponent=FaceMesh->SkeletalMesh;
				FaceMesh->SetSkeletalMesh(Body->ThisSkeletalMesh->SkeletalMesh);
				Body->ThisSkeletalMesh->SetSkeletalMesh(MeshComponent);
				Body->SetItemState(EItemState::InWorld);
			}	
			break;
	}
	case EPawnBodyType::EBelt:{
			if (BeltMesh&&Body->ThisSkeletalMesh)
			{
				USkeletalMesh* MeshComponent=BeltMesh->SkeletalMesh;
				BeltMesh->SetSkeletalMesh(Body->ThisSkeletalMesh->SkeletalMesh);
				Body->ThisSkeletalMesh->SetSkeletalMesh(MeshComponent);
				Body->SetItemState(EItemState::InWorld);
			}	
			break;
	}
	case EPawnBodyType::EGlove:{
			if (GloveMesh&&Body->ThisSkeletalMesh)
			{
				USkeletalMesh* MeshComponent=GloveMesh->SkeletalMesh;
				GloveMesh->SetSkeletalMesh(Body->ThisSkeletalMesh->SkeletalMesh);
				Body->ThisSkeletalMesh->SetSkeletalMesh(MeshComponent);
				Body->SetItemState(EItemState::InWorld);
			}	
			break;
	}
	case EPawnBodyType::EHair:{
			if (HairMesh&&Body->ThisSkeletalMesh)
			{
				USkeletalMesh* MeshComponent=HairMesh->SkeletalMesh;
				HairMesh->SetSkeletalMesh(Body->ThisSkeletalMesh->SkeletalMesh);
				Body->ThisSkeletalMesh->SetSkeletalMesh(MeshComponent);
				Body->SetItemState(EItemState::InWorld);
			}	
			break;
	}
	case EPawnBodyType::EHeadGears:{
			if (HeadGearsMesh&&Body->ThisSkeletalMesh)
			{
				USkeletalMesh* MeshComponent=HeadGearsMesh->SkeletalMesh;
				HeadGearsMesh->SetSkeletalMesh(Body->ThisSkeletalMesh->SkeletalMesh);
				Body->ThisSkeletalMesh->SetSkeletalMesh(MeshComponent);
				Body->SetItemState(EItemState::InWorld);
			}	
			break;
	}
	case EPawnBodyType::EShoulderPad:{
			if (ShoulderPadMesh&&Body->ThisSkeletalMesh)
			{
				USkeletalMesh* MeshComponent=ShoulderPadMesh->SkeletalMesh;
				ShoulderPadMesh->SetSkeletalMesh(Body->ThisSkeletalMesh->SkeletalMesh);
				Body->ThisSkeletalMesh->SetSkeletalMesh(MeshComponent);
				Body->SetItemState(EItemState::InWorld);
			}	
			break;
	}
	default:
		UE_LOG(LogTemp,Warning,TEXT("Body->GetItemType()ERR"));
		break;
	}
}

bool AThePlayer::WearNetMulticast_Validate(AActor* theActor)
{
	return true;
}

void AThePlayer::CanWear(UInputComponent* PlayerInputComponent)
{
	if(/*IsLocallyControlled()&&*/isCanWear==false)
	{
		isCanWear=true;
		PlayerInputComponent->BindAction("Wear",EInputEvent::IE_Pressed,this,&AThePlayer::BindActionWear);
	}
}

void AThePlayer::BindActionWear()
{
	if (OverlapActor.IsValidIndex(0))
	{
		ABody * Body=Cast<ABody>(OverlapActor.Top());
		if (!Body)return;
		Body->Wear(this);
		//Wear(Body);
		OverlapActor.RemoveAt(0);
		OverlapActorChange();
	}
}

void AThePlayer::NotCanWear(UInputComponent* PlayerInputComponent)
{
	if(/*IsLocallyControlled()&&*/isCanWear==true)
	{
		isCanWear=false;
		PlayerInputComponent->RemoveActionBinding("Wear",EInputEvent::IE_Pressed);
	}
}

void AThePlayer::Equipment(AActor* theActor)
{
	if (GetLocalRole()<ROLE_Authority)
	{
		EquipmentServer(theActor);
	}
}

void AThePlayer::EquipmentServer_Implementation(AActor* theActor)
{
	Equipment(theActor);
}

bool AThePlayer::EquipmentServer_Validate(AActor* theActor)
{
	return  true;
}

void AThePlayer::RunServer_Implementation()
{
	Run();
}

bool AThePlayer::RunServer_Validate()
{
	return true;
}
