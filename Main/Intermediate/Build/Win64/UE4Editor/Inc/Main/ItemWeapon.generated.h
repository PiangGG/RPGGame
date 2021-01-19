// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AItemWeapon;
class APawn;
#ifdef MAIN_ItemWeapon_generated_h
#error "ItemWeapon.generated.h already included, missing '#pragma once' in ItemWeapon.h"
#endif
#define MAIN_ItemWeapon_generated_h

#define Main_Source_Main_ItemWeapon_h_28_SPARSE_DATA
#define Main_Source_Main_ItemWeapon_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSwapWeapon); \
	DECLARE_FUNCTION(execEquipment);


#define Main_Source_Main_ItemWeapon_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwapWeapon); \
	DECLARE_FUNCTION(execEquipment);


#define Main_Source_Main_ItemWeapon_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemWeapon(); \
	friend struct Z_Construct_UClass_AItemWeapon_Statics; \
public: \
	DECLARE_CLASS(AItemWeapon, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(AItemWeapon)


#define Main_Source_Main_ItemWeapon_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAItemWeapon(); \
	friend struct Z_Construct_UClass_AItemWeapon_Statics; \
public: \
	DECLARE_CLASS(AItemWeapon, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Main"), NO_API) \
	DECLARE_SERIALIZER(AItemWeapon)


#define Main_Source_Main_ItemWeapon_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItemWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItemWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemWeapon(AItemWeapon&&); \
	NO_API AItemWeapon(const AItemWeapon&); \
public:


#define Main_Source_Main_ItemWeapon_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemWeapon(AItemWeapon&&); \
	NO_API AItemWeapon(const AItemWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemWeapon)


#define Main_Source_Main_ItemWeapon_h_28_PRIVATE_PROPERTY_OFFSET
#define Main_Source_Main_ItemWeapon_h_25_PROLOG
#define Main_Source_Main_ItemWeapon_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_ItemWeapon_h_28_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_ItemWeapon_h_28_SPARSE_DATA \
	Main_Source_Main_ItemWeapon_h_28_RPC_WRAPPERS \
	Main_Source_Main_ItemWeapon_h_28_INCLASS \
	Main_Source_Main_ItemWeapon_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Main_Source_Main_ItemWeapon_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Main_Source_Main_ItemWeapon_h_28_PRIVATE_PROPERTY_OFFSET \
	Main_Source_Main_ItemWeapon_h_28_SPARSE_DATA \
	Main_Source_Main_ItemWeapon_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	Main_Source_Main_ItemWeapon_h_28_INCLASS_NO_PURE_DECLS \
	Main_Source_Main_ItemWeapon_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAIN_API UClass* StaticClass<class AItemWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Main_Source_Main_ItemWeapon_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::EBow) \
	op(EWeaponType::EAxe) \
	op(EWeaponType::EHammer) \
	op(EWeaponType::EShield) \
	op(EWeaponType::ESword) \
	op(EWeaponType::EWand) 

enum class EWeaponType : uint8;
template<> MAIN_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
