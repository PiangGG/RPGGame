// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
enum class EItemState : uint8;
#ifdef MAIN_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define MAIN_Item_generated_h

#define Main_Source_Main_Item_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemStruct_Statics; \
	MAIN_API static class UScriptStruct* StaticStruct();


template<> MAIN_API UScriptStruct* StaticStruct<struct FItemStruct>();

#define Main_Source_Main_Item_h_71_SPARSE_DATA
#define Main_Source_Main_Item_h_71_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPickUpItem); \
	DECLARE_FUNCTION(execOnRep_SetItemState); \
	DECLARE_FUNCTION(execSetItemState); \
	DECLARE_FUNCTION(execGetItemState);


#define Main_Source_Main_Item_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPickUpItem); \
	DECLARE_FUNCTION(execOnRep_SetItemState); \
	DECLARE_FUNCTION(execSetItemState); \
	DECLARE_FUNCTION(execGetItemState);


#define Main_Source_Main_Item_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(AItem) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentItemState=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentItemState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Main_Source_Main_Item_h_71_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(AItem) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentItemState=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentItemState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Main_Source_Main_Item_h_71_STANDARD_CONSTRUCTORS \
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


#define Main_Source_Main_Item_h_71_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define Main_Source_Main_Item_h_71_PRIVATE_PROPERTY_OFFSET
#define Main_Source_Main_Item_h_67_PROLOG
#define Main_Source_Main_Item_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_Item_h_71_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_Item_h_71_SPARSE_DATA \
	Main_Source_Main_Item_h_71_RPC_WRAPPERS \
	Main_Source_Main_Item_h_71_INCLASS \
	Main_Source_Main_Item_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Main_Source_Main_Item_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_Item_h_71_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_Item_h_71_SPARSE_DATA \
	Main_Source_Main_Item_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	Main_Source_Main_Item_h_71_INCLASS_NO_PURE_DECLS \
	Main_Source_Main_Item_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAIN_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Main_Source_Main_Item_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Weapon) \
	op(EItemType::Drug) \
	op(EItemType::Body) \
	op(EItemType::Other) 

enum class EItemType : uint8;
template<> MAIN_API UEnum* StaticEnum<EItemType>();

#define FOREACH_ENUM_EITEMSTATE(op) \
	op(EItemState::InWorld) \
	op(EItemState::InPack) \
	op(EItemState::InPlayering) \
	op(EItemState::Other) 

enum class EItemState : uint8;
template<> MAIN_API UEnum* StaticEnum<EItemState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
