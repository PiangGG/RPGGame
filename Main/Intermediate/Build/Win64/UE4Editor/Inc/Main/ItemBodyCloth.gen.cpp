// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Main/ItemBodyCloth.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemBodyCloth() {}
// Cross Module References
	MAIN_API UClass* Z_Construct_UClass_AItemBodyCloth_NoRegister();
	MAIN_API UClass* Z_Construct_UClass_AItemBodyCloth();
	MAIN_API UClass* Z_Construct_UClass_AItemBody();
	UPackage* Z_Construct_UPackage__Script_Main();
// End Cross Module References
	void AItemBodyCloth::StaticRegisterNativesAItemBodyCloth()
	{
	}
	UClass* Z_Construct_UClass_AItemBodyCloth_NoRegister()
	{
		return AItemBodyCloth::StaticClass();
	}
	struct Z_Construct_UClass_AItemBodyCloth_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemBodyCloth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItemBody,
		(UObject* (*)())Z_Construct_UPackage__Script_Main,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBodyCloth_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ItemBodyCloth.h" },
		{ "ModuleRelativePath", "ItemBodyCloth.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemBodyCloth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemBodyCloth>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItemBodyCloth_Statics::ClassParams = {
		&AItemBodyCloth::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AItemBodyCloth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItemBodyCloth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItemBodyCloth()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItemBodyCloth_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItemBodyCloth, 4270129694);
	template<> MAIN_API UClass* StaticClass<AItemBodyCloth>()
	{
		return AItemBodyCloth::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItemBodyCloth(Z_Construct_UClass_AItemBodyCloth, &AItemBodyCloth::StaticClass, TEXT("/Script/Main"), TEXT("AItemBodyCloth"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemBodyCloth);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
