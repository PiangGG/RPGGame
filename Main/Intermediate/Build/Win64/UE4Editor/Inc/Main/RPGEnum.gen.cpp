// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Main/Core/RPGEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGEnum() {}
// Cross Module References
	MAIN_API UEnum* Z_Construct_UEnum_Main_EPlayerState();
	UPackage* Z_Construct_UPackage__Script_Main();
	MAIN_API UEnum* Z_Construct_UEnum_Main_EPlayerStance();
	MAIN_API UEnum* Z_Construct_UEnum_Main_EWeaponType();
	MAIN_API UEnum* Z_Construct_UEnum_Main_EPawnBodyType();
	MAIN_API UEnum* Z_Construct_UEnum_Main_EItemType();
	MAIN_API UEnum* Z_Construct_UEnum_Main_EItemState();
// End Cross Module References
	static UEnum* EPlayerState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Main_EPlayerState, Z_Construct_UPackage__Script_Main(), TEXT("EPlayerState"));
		}
		return Singleton;
	}
	template<> MAIN_API UEnum* StaticEnum<EPlayerState>()
	{
		return EPlayerState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayerState(EPlayerState_StaticEnum, TEXT("/Script/Main"), TEXT("EPlayerState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Main_EPlayerState_Hash() { return 2503723226U; }
	UEnum* Z_Construct_UEnum_Main_EPlayerState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Main();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayerState"), 0, Get_Z_Construct_UEnum_Main_EPlayerState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayerState::ENormal", (int64)EPlayerState::ENormal },
				{ "EPlayerState::EBattleing", (int64)EPlayerState::EBattleing },
				{ "EPlayerState::ESwimming", (int64)EPlayerState::ESwimming },
				{ "EPlayerState::EClimbing", (int64)EPlayerState::EClimbing },
				{ "EPlayerState::EGetHiting", (int64)EPlayerState::EGetHiting },
				{ "EPlayerState::EDead", (int64)EPlayerState::EDead },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EBattleing.DisplayName", "\xe6\x88\x98\xe6\x96\x97\xe7\x8a\xb6\xe6\x80\x81" },
				{ "EBattleing.Name", "EPlayerState::EBattleing" },
				{ "EClimbing.DisplayName", "\xe6\x94\x80\xe7\x88\xac\xe7\x8a\xb6\xe6\x80\x81" },
				{ "EClimbing.Name", "EPlayerState::EClimbing" },
				{ "EDead.DisplayName", "\xe6\xad\xbb\xe4\xba\xa1\xe7\x8a\xb6\xe6\x80\x81" },
				{ "EDead.Name", "EPlayerState::EDead" },
				{ "EGetHiting.DisplayName", "\xe8\xa2\xab\xe5\x87\xbb\xe7\x8a\xb6\xe6\x80\x81" },
				{ "EGetHiting.Name", "EPlayerState::EGetHiting" },
				{ "ENormal.DisplayName", "\xe6\xad\xa3\xe5\xb8\xb8\xe7\x8a\xb6\xe6\x80\x81" },
				{ "ENormal.Name", "EPlayerState::ENormal" },
				{ "ESwimming.DisplayName", "\xe6\xb8\xb8\xe6\xb3\xb3\xe7\x8a\xb6\xe6\x80\x81" },
				{ "ESwimming.Name", "EPlayerState::ESwimming" },
				{ "ModuleRelativePath", "Core/RPGEnum.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Main,
				nullptr,
				"EPlayerState",
				"EPlayerState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPlayerStance_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Main_EPlayerStance, Z_Construct_UPackage__Script_Main(), TEXT("EPlayerStance"));
		}
		return Singleton;
	}
	template<> MAIN_API UEnum* StaticEnum<EPlayerStance>()
	{
		return EPlayerStance_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayerStance(EPlayerStance_StaticEnum, TEXT("/Script/Main"), TEXT("EPlayerStance"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Main_EPlayerStance_Hash() { return 1836502927U; }
	UEnum* Z_Construct_UEnum_Main_EPlayerStance()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Main();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayerStance"), 0, Get_Z_Construct_UEnum_Main_EPlayerStance_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayerStance::EBowStance", (int64)EPlayerStance::EBowStance },
				{ "EPlayerStance::EDoubleSwordStance", (int64)EPlayerStance::EDoubleSwordStance },
				{ "EPlayerStance::EMagicWandStance", (int64)EPlayerStance::EMagicWandStance },
				{ "EPlayerStance::ENoWeaponStance", (int64)EPlayerStance::ENoWeaponStance },
				{ "EPlayerStance::ESwordAndShieldStance", (int64)EPlayerStance::ESwordAndShieldStance },
				{ "EPlayerStance::ETwoHandSwordStance", (int64)EPlayerStance::ETwoHandSwordStance },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EBowStance.DisplayName", "\xe5\xbc\x93\xe7\xae\xad\xe5\xa7\xbf\xe5\x8a\xbf" },
				{ "EBowStance.Name", "EPlayerStance::EBowStance" },
				{ "EDoubleSwordStance.DisplayName", "\xe5\x8f\x8c\xe5\x89\x91\xe5\xa7\xbf\xe5\x8a\xbf" },
				{ "EDoubleSwordStance.Name", "EPlayerStance::EDoubleSwordStance" },
				{ "EMagicWandStance.DisplayName", "\xe9\xad\x94\xe6\xb3\x95\xe6\xad\xa6\xe5\x99\xa8\xe5\xa7\xbf\xe5\x8a\xbf" },
				{ "EMagicWandStance.Name", "EPlayerStance::EMagicWandStance" },
				{ "ENoWeaponStance.DisplayName", "\xe6\x97\xa0\xe6\xad\xa6\xe5\x99\xa8\xe5\xa7\xbf\xe5\x8a\xbf" },
				{ "ENoWeaponStance.Name", "EPlayerStance::ENoWeaponStance" },
				{ "ESwordAndShieldStance.DisplayName", "\xe5\x89\x91\xe4\xb8\x8e\xe7\x9b\xbe\xe5\xa7\xbf\xe5\x8a\xbf" },
				{ "ESwordAndShieldStance.Name", "EPlayerStance::ESwordAndShieldStance" },
				{ "ETwoHandSwordStance.DisplayName", "\xe5\x8f\x8c\xe6\x89\x8b\xe5\x89\x91\xe5\xa7\xbf\xe5\x8a\xbf" },
				{ "ETwoHandSwordStance.Name", "EPlayerStance::ETwoHandSwordStance" },
				{ "ModuleRelativePath", "Core/RPGEnum.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Main,
				nullptr,
				"EPlayerStance",
				"EPlayerStance",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EWeaponType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Main_EWeaponType, Z_Construct_UPackage__Script_Main(), TEXT("EWeaponType"));
		}
		return Singleton;
	}
	template<> MAIN_API UEnum* StaticEnum<EWeaponType>()
	{
		return EWeaponType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponType(EWeaponType_StaticEnum, TEXT("/Script/Main"), TEXT("EWeaponType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Main_EWeaponType_Hash() { return 491276270U; }
	UEnum* Z_Construct_UEnum_Main_EWeaponType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Main();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponType"), 0, Get_Z_Construct_UEnum_Main_EWeaponType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponType::EBow", (int64)EWeaponType::EBow },
				{ "EWeaponType::EAxe", (int64)EWeaponType::EAxe },
				{ "EWeaponType::EHammer", (int64)EWeaponType::EHammer },
				{ "EWeaponType::EShield", (int64)EWeaponType::EShield },
				{ "EWeaponType::ESword", (int64)EWeaponType::ESword },
				{ "EWeaponType::EWand", (int64)EWeaponType::EWand },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/*\n* \xe6\xad\xa6\xe5\x99\xa8\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x9e\x9a\xe4\xb8\xbe\n*/" },
				{ "EAxe.DisplayName", "\xe6\x96\xa7\xe5\xa4\xb4" },
				{ "EAxe.Name", "EWeaponType::EAxe" },
				{ "EBow.DisplayName", "\xe5\xbc\x93" },
				{ "EBow.Name", "EWeaponType::EBow" },
				{ "EHammer.DisplayName", "\xe9\x94\xa4\xe5\xad\x90" },
				{ "EHammer.Name", "EWeaponType::EHammer" },
				{ "EShield.DisplayName", "\xe7\x9b\xbe" },
				{ "EShield.Name", "EWeaponType::EShield" },
				{ "ESword.DisplayName", "\xe5\x89\x91" },
				{ "ESword.Name", "EWeaponType::ESword" },
				{ "EWand.DisplayName", "\xe9\xad\x94\xe6\x9d\x96" },
				{ "EWand.Name", "EWeaponType::EWand" },
				{ "ModuleRelativePath", "Core/RPGEnum.h" },
				{ "ToolTip", "* \xe6\xad\xa6\xe5\x99\xa8\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x9e\x9a\xe4\xb8\xbe" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Main,
				nullptr,
				"EWeaponType",
				"EWeaponType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPawnBodyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Main_EPawnBodyType, Z_Construct_UPackage__Script_Main(), TEXT("EPawnBodyType"));
		}
		return Singleton;
	}
	template<> MAIN_API UEnum* StaticEnum<EPawnBodyType>()
	{
		return EPawnBodyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPawnBodyType(EPawnBodyType_StaticEnum, TEXT("/Script/Main"), TEXT("EPawnBodyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Main_EPawnBodyType_Hash() { return 748510570U; }
	UEnum* Z_Construct_UEnum_Main_EPawnBodyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Main();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPawnBodyType"), 0, Get_Z_Construct_UEnum_Main_EPawnBodyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPawnBodyType::ECloth", (int64)EPawnBodyType::ECloth },
				{ "EPawnBodyType::EFace", (int64)EPawnBodyType::EFace },
				{ "EPawnBodyType::EHair", (int64)EPawnBodyType::EHair },
				{ "EPawnBodyType::EGlove", (int64)EPawnBodyType::EGlove },
				{ "EPawnBodyType::EShoe", (int64)EPawnBodyType::EShoe },
				{ "EPawnBodyType::EHeadGears", (int64)EPawnBodyType::EHeadGears },
				{ "EPawnBodyType::EShoulderPad", (int64)EPawnBodyType::EShoulderPad },
				{ "EPawnBodyType::EBelt", (int64)EPawnBodyType::EBelt },
				{ "EPawnBodyType::EOther", (int64)EPawnBodyType::EOther },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/*\n* \xe8\xba\xab\xe4\xbd\x93\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84\xe6\x9e\x9a\xe4\xb8\xbe\n*/" },
				{ "EBelt.DisplayName", "\xe7\x9a\xae\xe5\xb8\xa6" },
				{ "EBelt.Name", "EPawnBodyType::EBelt" },
				{ "ECloth.DisplayName", "\xe8\xa1\xa3\xe6\x9c\x8d" },
				{ "ECloth.Name", "EPawnBodyType::ECloth" },
				{ "EFace.DisplayName", "\xe8\x84\xb8" },
				{ "EFace.Name", "EPawnBodyType::EFace" },
				{ "EGlove.DisplayName", "\xe6\x89\x8b\xe6\x8e\x8c" },
				{ "EGlove.Name", "EPawnBodyType::EGlove" },
				{ "EHair.DisplayName", "\xe5\xa4\xb4\xe5\x8f\x91" },
				{ "EHair.Name", "EPawnBodyType::EHair" },
				{ "EHeadGears.DisplayName", "\xe5\xa4\xb4\xe9\xa5\xb0" },
				{ "EHeadGears.Name", "EPawnBodyType::EHeadGears" },
				{ "EOther.DisplayName", "\xe5\x85\xb6\xe4\xbb\x96" },
				{ "EOther.Name", "EPawnBodyType::EOther" },
				{ "EShoe.DisplayName", "\xe9\x9e\x8b" },
				{ "EShoe.Name", "EPawnBodyType::EShoe" },
				{ "EShoulderPad.DisplayName", "\xe8\x82\xa9\xe5\x9e\xab" },
				{ "EShoulderPad.Name", "EPawnBodyType::EShoulderPad" },
				{ "ModuleRelativePath", "Core/RPGEnum.h" },
				{ "ToolTip", "* \xe8\xba\xab\xe4\xbd\x93\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84\xe6\x9e\x9a\xe4\xb8\xbe" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Main,
				nullptr,
				"EPawnBodyType",
				"EPawnBodyType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EItemType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Main_EItemType, Z_Construct_UPackage__Script_Main(), TEXT("EItemType"));
		}
		return Singleton;
	}
	template<> MAIN_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemType(EItemType_StaticEnum, TEXT("/Script/Main"), TEXT("EItemType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Main_EItemType_Hash() { return 2273567750U; }
	UEnum* Z_Construct_UEnum_Main_EItemType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Main();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemType"), 0, Get_Z_Construct_UEnum_Main_EItemType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItemType::Weapon", (int64)EItemType::Weapon },
				{ "EItemType::Drug", (int64)EItemType::Drug },
				{ "EItemType::Body", (int64)EItemType::Body },
				{ "EItemType::Other", (int64)EItemType::Other },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Body.DisplayName", "\xe8\xba\xab\xe4\xbd\x93" },
				{ "Body.Name", "EItemType::Body" },
				{ "Drug.DisplayName", "\xe8\x8d\xaf" },
				{ "Drug.Name", "EItemType::Drug" },
				{ "ModuleRelativePath", "Core/RPGEnum.h" },
				{ "Other.DisplayName", "\xe5\x85\xb6\xe4\xbb\x96" },
				{ "Other.Name", "EItemType::Other" },
				{ "Weapon.DisplayName", "\xe6\xad\xa6\xe5\x99\xa8" },
				{ "Weapon.Name", "EItemType::Weapon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Main,
				nullptr,
				"EItemType",
				"EItemType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EItemState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Main_EItemState, Z_Construct_UPackage__Script_Main(), TEXT("EItemState"));
		}
		return Singleton;
	}
	template<> MAIN_API UEnum* StaticEnum<EItemState>()
	{
		return EItemState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItemState(EItemState_StaticEnum, TEXT("/Script/Main"), TEXT("EItemState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Main_EItemState_Hash() { return 2588060902U; }
	UEnum* Z_Construct_UEnum_Main_EItemState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Main();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItemState"), 0, Get_Z_Construct_UEnum_Main_EItemState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItemState::InWorld", (int64)EItemState::InWorld },
				{ "EItemState::InPack", (int64)EItemState::InPack },
				{ "EItemState::InPlayering", (int64)EItemState::InPlayering },
				{ "EItemState::Other", (int64)EItemState::Other },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/*\xe8\xae\xbe\xe7\xbd\xae\xe7\x89\xa9\xe5\x93\x81\xe7\x8a\xb6\xe6\x80\x81*/" },
				{ "InPack.DisplayName", "\xe5\x9c\xa8\xe8\x83\x8c\xe5\x8c\x85\xe4\xb8\xad" },
				{ "InPack.Name", "EItemState::InPack" },
				{ "InPlayering.DisplayName", "\xe7\x8e\xa9\xe5\xae\xb6\xe4\xbd\xbf\xe7\x94\xa8\xe4\xb8\xad" },
				{ "InPlayering.Name", "EItemState::InPlayering" },
				{ "InWorld.DisplayName", "\xe5\x9c\xa8\xe5\x9c\xba\xe6\x99\xaf\xe4\xb8\xad" },
				{ "InWorld.Name", "EItemState::InWorld" },
				{ "ModuleRelativePath", "Core/RPGEnum.h" },
				{ "Other.DisplayName", "\xe5\x85\xb6\xe4\xbb\x96" },
				{ "Other.Name", "EItemState::Other" },
				{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe7\x89\xa9\xe5\x93\x81\xe7\x8a\xb6\xe6\x80\x81" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Main,
				nullptr,
				"EItemState",
				"EItemState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
