// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABody;
#ifdef MAIN_ClothesComponent_generated_h
#error "ClothesComponent.generated.h already included, missing '#pragma once' in ClothesComponent.h"
#endif
#define MAIN_ClothesComponent_generated_h

#define Main_Source_Main_ClothesComponent_h_14_SPARSE_DATA
#define Main_Source_Main_ClothesComponent_h_14_RPC_WRAPPERS \
	virtual bool SwitchMeshServer_Validate(ABody* ); \
	virtual void SwitchMeshServer_Implementation(ABody* NewItem); \
 \
	DECLARE_FUNCTION(execSwitchMeshServer); \
	DECLARE_FUNCTION(execSwitchMesh); \
	DECLARE_FUNCTION(execInitClothes);


#define Main_Source_Main_ClothesComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool SwitchMeshServer_Validate(ABody* ); \
	virtual void SwitchMeshServer_Implementation(ABody* NewItem); \
 \
	DECLARE_FUNCTION(execSwitchMeshServer); \
	DECLARE_FUNCTION(execSwitchMesh); \
	DECLARE_FUNCTION(execInitClothes);


#define Main_Source_Main_ClothesComponent_h_14_EVENT_PARMS \
	struct ClothesComponent_eventSwitchMeshServer_Parms \
	{ \
		ABody* NewItem; \
	};


#define Main_Source_Main_ClothesComponent_h_14_CALLBACK_WRAPPERS
#define Main_Source_Main_ClothesComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClothesComponent(); \
	friend struct Z_Construct_UClass_UClothesComponent_Statics; \
public: \
	DECLARE_CLASS(UClothesComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(UClothesComponent)


#define Main_Source_Main_ClothesComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUClothesComponent(); \
	friend struct Z_Construct_UClass_UClothesComponent_Statics; \
public: \
	DECLARE_CLASS(UClothesComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(UClothesComponent)


#define Main_Source_Main_ClothesComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClothesComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothesComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothesComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothesComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClothesComponent(UClothesComponent&&); \
	NO_API UClothesComponent(const UClothesComponent&); \
public:


#define Main_Source_Main_ClothesComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UClothesComponent(UClothesComponent&&); \
	NO_API UClothesComponent(const UClothesComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothesComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothesComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClothesComponent)


#define Main_Source_Main_ClothesComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define Main_Source_Main_ClothesComponent_h_11_PROLOG \
	Main_Source_Main_ClothesComponent_h_14_EVENT_PARMS


#define Main_Source_Main_ClothesComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_ClothesComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_ClothesComponent_h_14_SPARSE_DATA \
	Main_Source_Main_ClothesComponent_h_14_RPC_WRAPPERS \
	Main_Source_Main_ClothesComponent_h_14_CALLBACK_WRAPPERS \
	Main_Source_Main_ClothesComponent_h_14_INCLASS \
	Main_Source_Main_ClothesComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Main_Source_Main_ClothesComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_ClothesComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_ClothesComponent_h_14_SPARSE_DATA \
	Main_Source_Main_ClothesComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Main_Source_Main_ClothesComponent_h_14_CALLBACK_WRAPPERS \
	Main_Source_Main_ClothesComponent_h_14_INCLASS_NO_PURE_DECLS \
	Main_Source_Main_ClothesComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAIN_API UClass* StaticClass<class UClothesComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Main_Source_Main_ClothesComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
