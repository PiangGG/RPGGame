// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Main/ItemWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemWeapon() {}
// Cross Module References
	MAIN_API UClass* Z_Construct_UClass_AItemWeapon_NoRegister();
	MAIN_API UClass* Z_Construct_UClass_AItemWeapon();
	MAIN_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_Main();
// End Cross Module References
	void AItemWeapon::StaticRegisterNativesAItemWeapon()
	{
	}
	UClass* Z_Construct_UClass_AItemWeapon_NoRegister()
	{
		return AItemWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AItemWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Main,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ItemWeapon.h" },
		{ "ModuleRelativePath", "ItemWeapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItemWeapon_Statics::ClassParams = {
		&AItemWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItemWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItemWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItemWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItemWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItemWeapon, 4118652353);
	template<> MAIN_API UClass* StaticClass<AItemWeapon>()
	{
		return AItemWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItemWeapon(Z_Construct_UClass_AItemWeapon, &AItemWeapon::StaticClass, TEXT("/Script/Main"), TEXT("AItemWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
