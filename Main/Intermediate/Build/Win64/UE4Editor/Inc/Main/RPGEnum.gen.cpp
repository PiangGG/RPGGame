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
	MAIN_API UEnum* Z_Construct_UEnum_Main_EItem();
	UPackage* Z_Construct_UPackage__Script_Main();
// End Cross Module References
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
