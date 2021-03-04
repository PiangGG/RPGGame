// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include "RPGEnum.h"
#include "RPGPayer.h"
#include "GameFramework/Character.h"
#include "ThePlayer.generated.h"

class UClothesComponent;
class UArrowComponent;
UCLASS()
class MAIN_API AThePlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AThePlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const override;
	//Spring Arm for holding camera 摄像机臂组件
	UPROPERTY(EditDefaultsOnly, Category = "Base Character")
	class USpringArmComponent* SpringArm;

	//Camera Component  摄像机组件
	UPROPERTY(EditDefaultsOnly, Category = "Base Character")
	class UCameraComponent *Camera;
	
	UPROPERTY(EditDefaultsOnly, Category = "Base Character")
	class UClothesComponent* ClothesComponent;
	//Arrow for determining forward direction 箭头方向组件
	UPROPERTY(EditDefaultsOnly, Category = "Base Character")
	UArrowComponent *TraceDirection;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="ItemSetting")
	class USphereComponent *SphereComponent;
	
	/* MOVEMENT/CAMERA INPUT FUNCTIONS|控制移动的函数 */

	void MoveForward(float amount);

	void MoveRight(float amount);

	void RotateCamera(float amount);

	void ChangeCameraHeight(float amount);

	
	UFUNCTION(BlueprintCallable)
	void Attack();
	UFUNCTION(Server,Reliable,WithValidation)
	void AttackServer();
	void AttackCallBack();
	
	UFUNCTION(BlueprintCallable)
    void Run();
	UFUNCTION(Server,Reliable,WithValidation)
    void RunServer();
	UPROPERTY(BlueprintReadWrite,EditDefaultsOnly,Category="Character")
	bool bIsRun=false;
	UPROPERTY(BlueprintReadWrite,EditDefaultsOnly,Category="Character")
	float BaseSpeed=300.0f;
	UPROPERTY(BlueprintReadWrite,EditDefaultsOnly,Category="Character")
	float RunSpeed =600.0f;

	/*
	UFUNCTION(BlueprintCallable)
    virtual void SphereComponent_BeginOverlap(class UPrimitiveComponent* Component,class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION(BlueprintCallable)
    virtual void SphereComponent_EndOverlap(UPrimitiveComponent* Component,AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	*/
	UPROPERTY(BlueprintReadWrite,Replicated,EditDefaultsOnly,Category="Character")
	TArray<AActor*> OverlapActor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UUserWidget")
	TSubclassOf<class UUserWidget> OverlapActorTSub;
	//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UUserWidget")
	UUserWidget* UUserWidgetOverlapActor;
	UFUNCTION(BlueprintCallable)
	void OverlapActorChange();
	
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateUUserWidgetOverlapActor();
	public:	
	/*UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Clothes")
	USkeletalMeshComponent* ClothesMesh;*/

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Clothes")
	USkeletalMeshComponent* FaceMesh;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Clothes")
	USkeletalMeshComponent* HairMesh;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Clothes")
	USkeletalMeshComponent* GloveMesh;

	UPROPERTY(EditDefaultsOnly,Replicated,BlueprintReadWrite,Category="Clothes")
	USkeletalMeshComponent* ShoeMesh;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Clothes")
	USkeletalMeshComponent* HeadGearsMesh;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Clothes")
	USkeletalMeshComponent* ShoulderPadMesh;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Clothes")
	USkeletalMeshComponent* BeltMesh;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Clothes")
	TMap<EPawnBodyType,USkeletalMeshComponent*> MeshCompMap;

	void Init();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AnimMontage")
	class UAnimMontage* AnimMontage;
	void PlayAnimMontage(UAnimMontage* PickAnimMontage,FName name);

	/*
	* 角色武器状态姿势
	*/
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,ReplicatedUsing=OnRep_PlayerStanceChange,Category="Player")
	EPlayerStance CurrentPlayerStance=EPlayerStance::ENoWeaponStance;
	UFUNCTION(BlueprintCallable)
    void SetPlayerStance(EPlayerStance NewPlayerStance);
	UFUNCTION(BlueprintCallable)
    EPlayerStance GetPlayerStance();
	UFUNCTION()
    void OnRep_PlayerStanceChange();
	
	/*
	* 设置角色状态相关
	*/
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,ReplicatedUsing=OnRep_PlayerStateChange,Category="Player")
	EPlayerState CurrentPlayerState=EPlayerState::ENormal;
	UFUNCTION(BlueprintCallable)
    void SetPlayerState(EPlayerState NewPlayerState);
	UFUNCTION(BlueprintCallable)
    EPlayerState GetPlayerState();
	UFUNCTION()
    void OnRep_PlayerStateChange();

	UFUNCTION(BlueprintCallable)
	void Wear(AActor* theActor);
	UFUNCTION(Server,WithValidation,Reliable)
	void WearServer(AActor* theActor);
	void CanWear(UInputComponent* PlayerInputComponent);
	UPROPERTY(Replicated,EditDefaultsOnly,BlueprintReadWrite)
	bool isCanWear;
	void BindActionWear();
	void NotCanWear(UInputComponent* PlayerInputComponent);
};

