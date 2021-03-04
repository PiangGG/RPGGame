// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
enum class EItemState : uint8;
#ifdef MAIN_Body_generated_h
#error "Body.generated.h already included, missing '#pragma once' in Body.h"
#endif
#define MAIN_Body_generated_h

#define Main_Source_Main_Body_h_14_SPARSE_DATA
#define Main_Source_Main_Body_h_14_RPC_WRAPPERS \
	virtual bool WearServer_Validate(APawn* ); \
	virtual void WearServer_Implementation(APawn* Pawn); \
 \
	DECLARE_FUNCTION(execWearServer); \
	DECLARE_FUNCTION(execWear); \
	DECLARE_FUNCTION(execSphereComponent_EndOverlap); \
	DECLARE_FUNCTION(execSphereComponent_BeginOverlap); \
	DECLARE_FUNCTION(execOnRep_SetItemState); \
	DECLARE_FUNCTION(execSetItemState); \
	DECLARE_FUNCTION(execGetItemState);


#define Main_Source_Main_Body_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWearServer); \
	DECLARE_FUNCTION(execWear); \
	DECLARE_FUNCTION(execSphereComponent_EndOverlap); \
	DECLARE_FUNCTION(execSphereComponent_BeginOverlap); \
	DECLARE_FUNCTION(execOnRep_SetItemState); \
	DECLARE_FUNCTION(execSetItemState); \
	DECLARE_FUNCTION(execGetItemState);


#define Main_Source_Main_Body_h_14_EVENT_PARMS \
	struct Body_eventWearServer_Parms \
	{ \
		APawn* Pawn; \
	};


#define Main_Source_Main_Body_h_14_CALLBACK_WRAPPERS
#define Main_Source_Main_Body_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABody(); \
	friend struct Z_Construct_UClass_ABody_Statics; \
public: \
	DECLARE_CLASS(ABody, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(ABody) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentItemState=NETFIELD_REP_START, \
		ThisSkeletalMesh, \
		ItemType, \
		PawnBodyType, \
		NETFIELD_REP_END=PawnBodyType	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Main_Source_Main_Body_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABody(); \
	friend struct Z_Construct_UClass_ABody_Statics; \
public: \
	DECLARE_CLASS(ABody, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(ABody) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentItemState=NETFIELD_REP_START, \
		ThisSkeletalMesh, \
		ItemType, \
		PawnBodyType, \
		NETFIELD_REP_END=PawnBodyType	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Main_Source_Main_Body_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABody(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABody) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABody); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABody); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABody(ABody&&); \
	NO_API ABody(const ABody&); \
public:


#define Main_Source_Main_Body_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABody(ABody&&); \
	NO_API ABody(const ABody&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABody); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABody); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABody)


#define Main_Source_Main_Body_h_14_PRIVATE_PROPERTY_OFFSET
#define Main_Source_Main_Body_h_11_PROLOG \
	Main_Source_Main_Body_h_14_EVENT_PARMS


#define Main_Source_Main_Body_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_Body_h_14_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_Body_h_14_SPARSE_DATA \
	Main_Source_Main_Body_h_14_RPC_WRAPPERS \
	Main_Source_Main_Body_h_14_CALLBACK_WRAPPERS \
	Main_Source_Main_Body_h_14_INCLASS \
	Main_Source_Main_Body_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Main_Source_Main_Body_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_Body_h_14_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_Body_h_14_SPARSE_DATA \
	Main_Source_Main_Body_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Main_Source_Main_Body_h_14_CALLBACK_WRAPPERS \
	Main_Source_Main_Body_h_14_INCLASS_NO_PURE_DECLS \
	Main_Source_Main_Body_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAIN_API UClass* StaticClass<class ABody>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Main_Source_Main_Body_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
