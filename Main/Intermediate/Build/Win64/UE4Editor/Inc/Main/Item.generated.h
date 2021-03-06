// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
enum class EItemType : uint8;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
enum class EItemState : uint8;
#ifdef MAIN_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define MAIN_Item_generated_h

#define Main_Source_Main_Item_Item_h_15_SPARSE_DATA
#define Main_Source_Main_Item_Item_h_15_RPC_WRAPPERS \
	virtual bool PickupServer_Validate(APawn* ); \
	virtual void PickupServer_Implementation(APawn* Pawn); \
	virtual bool SetItemStateServer_Validate(EItemState ); \
	virtual void SetItemStateServer_Implementation(EItemState NewItemState); \
 \
	DECLARE_FUNCTION(execPickupServer); \
	DECLARE_FUNCTION(execPickup); \
	DECLARE_FUNCTION(execSetItemType); \
	DECLARE_FUNCTION(execGetItemType); \
	DECLARE_FUNCTION(execSphereComponent_EndOverlap); \
	DECLARE_FUNCTION(execSphereComponent_BeginOverlap); \
	DECLARE_FUNCTION(execOnRep_SetItemState); \
	DECLARE_FUNCTION(execSetItemStateServer); \
	DECLARE_FUNCTION(execSetItemState); \
	DECLARE_FUNCTION(execGetItemState);


#define Main_Source_Main_Item_Item_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool SetItemStateServer_Validate(EItemState ); \
	virtual void SetItemStateServer_Implementation(EItemState NewItemState); \
 \
	DECLARE_FUNCTION(execPickupServer); \
	DECLARE_FUNCTION(execPickup); \
	DECLARE_FUNCTION(execSetItemType); \
	DECLARE_FUNCTION(execGetItemType); \
	DECLARE_FUNCTION(execSphereComponent_EndOverlap); \
	DECLARE_FUNCTION(execSphereComponent_BeginOverlap); \
	DECLARE_FUNCTION(execOnRep_SetItemState); \
	DECLARE_FUNCTION(execSetItemStateServer); \
	DECLARE_FUNCTION(execSetItemState); \
	DECLARE_FUNCTION(execGetItemState);


#define Main_Source_Main_Item_Item_h_15_EVENT_PARMS \
	struct Item_eventPickupServer_Parms \
	{ \
		APawn* Pawn; \
	}; \
	struct Item_eventSetItemStateServer_Parms \
	{ \
		EItemState NewItemState; \
	};


#define Main_Source_Main_Item_Item_h_15_CALLBACK_WRAPPERS
#define Main_Source_Main_Item_Item_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(AItem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentItemState=NETFIELD_REP_START, \
		bOverlap, \
		ItemType, \
		NETFIELD_REP_END=ItemType	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Main_Source_Main_Item_Item_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(AItem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentItemState=NETFIELD_REP_START, \
		bOverlap, \
		ItemType, \
		NETFIELD_REP_END=ItemType	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Main_Source_Main_Item_Item_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public:


#define Main_Source_Main_Item_Item_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define Main_Source_Main_Item_Item_h_15_PRIVATE_PROPERTY_OFFSET
#define Main_Source_Main_Item_Item_h_12_PROLOG \
	Main_Source_Main_Item_Item_h_15_EVENT_PARMS


#define Main_Source_Main_Item_Item_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_Item_Item_h_15_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_Item_Item_h_15_SPARSE_DATA \
	Main_Source_Main_Item_Item_h_15_RPC_WRAPPERS \
	Main_Source_Main_Item_Item_h_15_CALLBACK_WRAPPERS \
	Main_Source_Main_Item_Item_h_15_INCLASS \
	Main_Source_Main_Item_Item_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Main_Source_Main_Item_Item_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_Item_Item_h_15_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_Item_Item_h_15_SPARSE_DATA \
	Main_Source_Main_Item_Item_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Main_Source_Main_Item_Item_h_15_CALLBACK_WRAPPERS \
	Main_Source_Main_Item_Item_h_15_INCLASS_NO_PURE_DECLS \
	Main_Source_Main_Item_Item_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAIN_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Main_Source_Main_Item_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
