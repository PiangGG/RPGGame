// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

/*设置物品状态*/
UENUM(BlueprintType)
enum class EItemState:uint8
{  
	InWorld		UMETA(DisplayName = "在场景中"),
    InPack		UMETA(DisplayName = "在背包中"),
	InPlayering	UMETA(DisplayName = "玩家使用中"),
	Other		UMETA(DisplayName = "其他"),
};

UENUM(BlueprintType)
enum class EItemType:uint8
{  
	Weapon	UMETA(DisplayName = "武器"),
    Drug	UMETA(DisplayName = "药"),
    Body	UMETA(DisplayName = "身体"),
    Other	UMETA(DisplayName = "其他"),
};

USTRUCT(BlueprintType)
struct FItemStruct
{
	GENERATED_BODY()
	/*
	* 物体类型
	* 默认其他
	*/
public:
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
};
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
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,ReplicatedUsing=OnRep_SetItemState,Category="ItemSetting")
	EItemState CurrentItemState=EItemState::Other;
	//获得物品状态变量函数
	UFUNCTION(BlueprintCallable)
	virtual EItemState GetItemState();
	//设置物品状态变量函数
	UFUNCTION(BlueprintCallable)
	virtual void SetItemState(EItemState NewItemState);
	UFUNCTION()
	virtual void OnRep_SetItemState(EItemState NewItemState);
	
	/*
	 * 物品骨骼网格体
	 */
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="ItemSetting")
	class USkeletalMeshComponent *ThisSkeletalMesh;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="ItemSetting")
	class USphereComponent *SphereComponent;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="ItemSetting")
	FItemStruct ItemStruct;
	
	/*
	 * 拾取这个Item进背包
	 */
	UFUNCTION(BlueprintCallable)
	virtual void PickUpItem(APawn* Pawn);
};
