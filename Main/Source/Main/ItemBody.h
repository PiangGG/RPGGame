// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "ItemBody.generated.h"

/*
 * 身体类型的枚举
 */
UENUM(BlueprintType)
enum class EPawnBodyType:uint8
{
	ECloth			UMETA(DisplayName = "衣服"),
	EFace			UMETA(DisplayName = "脸"),
	EHair			UMETA(DisplayName = "头发"),
	EGlove			UMETA(DisplayName = "手掌"),
	EShoe			UMETA(DisplayName = "鞋"),
	EHeadGears		UMETA(DisplayName = "头饰"),
	EShoulderPad	UMETA(DisplayName = "肩垫"),
	EBelt			UMETA(DisplayName = "皮带"),
	EOther			UMETA(DisplayName = "其他"),
};

/**
 * 
 */
UCLASS()
class MAIN_API AItemBody : public AItem
{
	GENERATED_BODY()
	
	public:
	AItemBody();

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="PawnBody")
	EPawnBodyType PawnBodyType=EPawnBodyType::EOther;

	UFUNCTION(BlueprintCallable)
	virtual void SetEPawnBody(EPawnBodyType NewPawnBody);

	UFUNCTION(BlueprintCallable)
	virtual EPawnBodyType GetEPawnBodyType();

	UFUNCTION(BlueprintCallable)
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable)
	virtual void InitItem()override;
	
	/*
	 * 切换身体部位
	 */
	UFUNCTION(BlueprintCallable,Category="ItemBody")
	void SwitchBody(APawn* Pawn);
	UFUNCTION(BlueprintCallable,Reliable,WithValidation,Server,Category="ItemBody")
    void SwitchBodyServer(APawn* Pawn);

	UFUNCTION(BlueprintCallable,Category="ItemBody")
    void AttachBody(APawn* Pawn);
	UFUNCTION(BlueprintCallable,Reliable,WithValidation,Server,Category="ItemBody")
	void AttachBodyServer(APawn* Pawn);
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	FName AttachSoketName;

	/*
	 * overlap
	 */
	//UFUNCTION(BlueprintCallable)
	void SphereComponent_BeginOverlap(class UPrimitiveComponent* Component,class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ItemBodyAnimationMontage")
	class UAnimMontage* PickAnimMontage;
};
