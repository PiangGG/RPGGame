// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Main/RPGEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGEnum() {}
// Cross Module References
	MAIN_API UEnum* Z_Construct_UEnum_Main_EPawnBodyType();
	UPackage* Z_Construct_UPackage__Script_Main();
	MAIN_API UEnum* Z_Construct_UEnum_Main_EItemType();
	MAIN_API UEnum* Z_Construct_UEnum_Main_EItemState();
	MAIN_API UEnum* Z_Construct_UEnum_Main_EItem();
// End Cross Module References
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
	uint32 Get_Z_Construct_UEnum_Main_EPawnBodyType_Hash() { return 2273194018U; }
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
				{ "ModuleRelativePath", "RPGEnum.h" },
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
	uint32 Get_Z_Construct_UEnum_Main_EItemType_Hash() { return 737320572U; }
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
				{ "ModuleRelativePath", "RPGEnum.h" },
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
	uint32 Get_Z_Construct_UEnum_Main_EItemState_Hash() { return 2995966466U; }
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
				{ "ModuleRelativePath", "RPGEnum.h" },
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
	static UEnum* EItem_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Main_EItem, Z_Construct_UPackage__Script_Main(), TEXT("EItem"));
		}
		return Singleton;
	}
	template<> MAIN_API UEnum* StaticEnum<EItem>()
	{
		return EItem_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EItem(EItem_StaticEnum, TEXT("/Script/Main"), TEXT("EItem"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Main_EItem_Hash() { return 2793167189U; }
	UEnum* Z_Construct_UEnum_Main_EItem()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Main();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EItem"), 0, Get_Z_Construct_UEnum_Main_EItem_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EItem::Weapon", (int64)EItem::Weapon },
				{ "EItem::Drug", (int64)EItem::Drug },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n *///\xe8\xae\xbe\xe7\xbd\xaeuint8\xe7\xb1\xbb\xe5\x9e\x8b  \n" },
				{ "Drug.Comment", "//\xe6\x83\xb3\xe8\xa6\x81\xe6\x98\xbe\xe7\xa4\xba\xe4\xb8\xad\xe6\x96\x87 \xe9\x9c\x80\xe8\xa6\x81\xe5\xb0\x86\xe7\xbc\x96\xe7\xa0\x81\xe6\xa0\xbc\xe5\xbc\x8f\xe8\xae\xbe\xe7\xbd\xae\xe4\xb8\xbautf-8  \n" },
				{ "Drug.DisplayName", "\xe8\x8d\xaf" },
				{ "Drug.Name", "EItem::Drug" },
				{ "Drug.ToolTip", "\xe6\x83\xb3\xe8\xa6\x81\xe6\x98\xbe\xe7\xa4\xba\xe4\xb8\xad\xe6\x96\x87 \xe9\x9c\x80\xe8\xa6\x81\xe5\xb0\x86\xe7\xbc\x96\xe7\xa0\x81\xe6\xa0\xbc\xe5\xbc\x8f\xe8\xae\xbe\xe7\xbd\xae\xe4\xb8\xbautf-8" },
				{ "ModuleRelativePath", "RPGEnum.h" },
				{ "ToolTip", "//\xe8\xae\xbe\xe7\xbd\xaeuint8\xe7\xb1\xbb\xe5\x9e\x8b" },
				{ "Weapon.DisplayName", "\xe6\xad\xa6\xe5\x99\xa8" },
				{ "Weapon.Name", "EItem::Weapon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Main,
				nullptr,
				"EItem",
				"EItem",
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
