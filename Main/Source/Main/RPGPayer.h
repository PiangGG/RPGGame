// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "ItemBodyCloth.h"
#include "GameFramework/Character.h"
#include "RPGPayer.generated.h"

UENUM(BlueprintType)
enum  class EPlayerStance :uint8
{
	EBowStance					UMETA(DisplayName = "弓箭姿势"),
	EDoubleSwordStance			UMETA(DisplayName = "双剑姿势"),
	EMagicWandStance			UMETA(DisplayName = "魔法武器姿势"),
	ENoWeaponStance				UMETA(DisplayName = "无武器姿势"),
	ESwordAndShieldStance		UMETA(DisplayName = "剑与盾姿势"),
	ETwoHandSwordStance			UMETA(DisplayName = "双手剑姿势"),
};

UENUM(BlueprintType)
enum  class EPlayerState :uint8
{
	ENormal 			UMETA(DisplayName = "正常状态"),
	EBattleing			UMETA(DisplayName = "战斗状态"),
	ESwimming			UMETA(DisplayName = "游泳状态"),
	EClimbing			UMETA(DisplayName = "攀爬状态"),
	EGetHiting			UMETA(DisplayName = "被击状态"),
	EDead				UMETA(DisplayName = "死亡状态"),
};
UCLASS()
class MAIN_API ARPGPayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARPGPayer();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const override;
	//Spring Arm for holding camera 摄像机臂组件
	UPROPERTY(EditDefaultsOnly, Category = "Base Character")
	class USpringArmComponent* SpringArm;

	//Camera Component  摄像机组件
	UPROPERTY(EditDefaultsOnly, Category = "Base Character")
	class UCameraComponent *Camera;

	//Arrow for determining forward direction 箭头方向组件
	UPROPERTY(EditDefaultsOnly, Category = "Base Character")
	UArrowComponent *TraceDirection;

	/* MOVEMENT/CAMERA INPUT FUNCTIONS|控制移动的函数 */

	void MoveForward(float amount);

	void MoveRight(float amount);

	void RotateCamera(float amount);

	void ChangeCameraHeight(float amount);

	UFUNCTION(BlueprintCallable)
	void Run();
	UFUNCTION(Server,Reliable,WithValidation)
	void RunServer();
	UPROPERTY(BlueprintReadWrite,EditDefaultsOnly,Category="Base Character")
	bool bIsRun=false;
	UPROPERTY(BlueprintReadWrite,EditDefaultsOnly,Category="Base Character")
	float BaseSpeed=300.0f;
	UPROPERTY(BlueprintReadWrite,EditDefaultsOnly,Category="Base Character")
	float RunSpeed =600.0f;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/*
	 * ALL BODY
	 */
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="PlayerBody")
	class USkeletalMeshComponent* ItemBodyCloth;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="PlayerBody")
	class USkeletalMeshComponent* ItemBodyFace;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="PlayerBody")
	class USkeletalMeshComponent* ItemBodyHair;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="PlayerBody")
	class USkeletalMeshComponent* ItemBodyGlove;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="PlayerBody")
	class USkeletalMeshComponent* ItemBodyShoe;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="PlayerBody")
	class USkeletalMeshComponent* ItemBodyHeadGears;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="PlayerBody")
	class USkeletalMeshComponent* ItemBodyShoulderPad;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="PlayerBody")
	class USkeletalMeshComponent* ItemBodyBelt;
public:
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
    void SetPlayerState(EPlayerState NewPlayerStance);
	UFUNCTION(BlueprintCallable)
    EPlayerState GetPlayerState();
	UFUNCTION()
    void OnRep_PlayerStateChange();

	/*
	 * 角色攻击函数
	 */
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Replicated,Category="Player")
	bool bIsAttacking=false;
	int32 AttackNumber=0;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Player")
	float AttackTime=3.0f;
	FTimerHandle TimerHandle_Attack;
	UFUNCTION(BlueprintCallable)
	void Attack();
	UFUNCTION(BlueprintCallable,Reliable,Server,WithValidation)
	void AttackServer();
	/*攻击回调函数*/
	void AttackCallBack();
};
