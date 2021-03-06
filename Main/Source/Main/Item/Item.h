// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Main/Core/RPGEnum.h"
#include "Item.generated.h"

/*USTRUCT(BlueprintType)
struct FItemStruct{

	GENERATED_BODY()
	/*
	* 物体类型
	* 默认其他
	*
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="ItemSetting")
	EItemType ItemType;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="ItemSetting")
	FString ItemName;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="ItemSetting")
	UTexture2D* ItemIcon;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="ItemSetting")
	FString AttachSocket;
	FItemStruct()
	{
		ItemType=EItemType::Other;

		ItemName="NullName";
		 
		ItemIcon=nullptr;

		AttachSocket="";
	}

	FItemStruct(EItemType NewItemType,FString NewItemName,UTexture2D* NewItemIcon,FString NewAttachSocket)
	{
		ItemType=NewItemType;
		ItemName=NewItemName;
		ItemIcon=NewItemIcon;
		AttachSocket=NewAttachSocket;
	}
};*/
UCLASS()
class MAIN_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void InitItem(); 
	/*
	 * 物品状态
	 */
	//物品状态变量
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Replicated,Category="ItemSetting")
	EItemState CurrentItemState=EItemState::Other;
	//获得物品状态变量函数
	UFUNCTION(BlueprintCallable)
	virtual EItemState GetItemState();
	//设置物品状态变量函数
	UFUNCTION(BlueprintCallable)
	virtual void SetItemState(EItemState NewItemState);
	/*
	 * 拾取碰撞体
	 */
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="ItemSetting")
	class USphereComponent *SphereComponent;

	UFUNCTION(BlueprintCallable)
    virtual void SphereComponent_BeginOverlap(class UPrimitiveComponent* Component,class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION(BlueprintCallable)
    virtual void SphereComponent_EndOverlap(UPrimitiveComponent* Component,AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	/*UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="ItemSetting")
	FItemStruct ItemStruct;*/
	
	/*
	 * 拾取这个Item进背包
	 */
	UFUNCTION(BlueprintCallable)
	virtual void PickUpItem(APawn* Pawn);
};
