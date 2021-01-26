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
	MAIN_API UEnum* Z_Construct_UEnum_Main_EWeaponType();
	UPackage* Z_Construct_UPackage__Script_Main();
	MAIN_API UClass* Z_Construct_UClass_AItemWeapon_NoRegister();
	MAIN_API UClass* Z_Construct_UClass_AItemWeapon();
	MAIN_API UClass* Z_Construct_UClass_AItem();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
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
	uint32 Get_Z_Construct_UEnum_Main_EWeaponType_Hash() { return 421403510U; }
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
				{ "Comment", "/*\n * \xe6\xad\xa6\xe5\x99\xa8\xe7\xb1\xbb\xe5\x9e\x8b\xe6\x9e\x9a\xe4\xb8\xbe\n */" },
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
				{ "ModuleRelativePath", "ItemWeapon.h" },
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
	DEFINE_FUNCTION(AItemWeapon::execSwapWeapon)
	{
		P_GET_OBJECT(AItemWeapon,Z_Param_ItemWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwapWeapon(Z_Param_ItemWeapon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemWeapon::execEquipment)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Equipment(Z_Param_Pawn);
		P_NATIVE_END;
	}
	void AItemWeapon::StaticRegisterNativesAItemWeapon()
	{
		UClass* Class = AItemWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Equipment", &AItemWeapon::execEquipment },
			{ "SwapWeapon", &AItemWeapon::execSwapWeapon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItemWeapon_Equipment_Statics
	{
		struct ItemWeapon_eventEquipment_Parms
		{
			APawn* Pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemWeapon_Equipment_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemWeapon_eventEquipment_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemWeapon_Equipment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemWeapon_Equipment_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemWeapon_Equipment_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\xe8\xa3\x85\xe5\xa4\x87\xe6\xad\xa6\xe5\x99\xa8*/" },
		{ "ModuleRelativePath", "ItemWeapon.h" },
		{ "ToolTip", "\xe8\xa3\x85\xe5\xa4\x87\xe6\xad\xa6\xe5\x99\xa8" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemWeapon_Equipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemWeapon, nullptr, "Equipment", nullptr, nullptr, sizeof(ItemWeapon_eventEquipment_Parms), Z_Construct_UFunction_AItemWeapon_Equipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemWeapon_Equipment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemWeapon_Equipment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemWeapon_Equipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemWeapon_Equipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemWeapon_Equipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemWeapon_SwapWeapon_Statics
	{
		struct ItemWeapon_eventSwapWeapon_Parms
		{
			AItemWeapon* ItemWeapon;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemWeapon_SwapWeapon_Statics::NewProp_ItemWeapon = { "ItemWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemWeapon_eventSwapWeapon_Parms, ItemWeapon), Z_Construct_UClass_AItemWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemWeapon_SwapWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemWeapon_SwapWeapon_Statics::NewProp_ItemWeapon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemWeapon_SwapWeapon_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\xe5\x88\x87\xe6\x8d\xa2\xe6\xad\xa6\xe5\x99\xa8*/" },
		{ "ModuleRelativePath", "ItemWeapon.h" },
		{ "ToolTip", "\xe5\x88\x87\xe6\x8d\xa2\xe6\xad\xa6\xe5\x99\xa8" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemWeapon_SwapWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemWeapon, nullptr, "SwapWeapon", nullptr, nullptr, sizeof(ItemWeapon_eventSwapWeapon_Parms), Z_Construct_UFunction_AItemWeapon_SwapWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemWeapon_SwapWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemWeapon_SwapWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemWeapon_SwapWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemWeapon_SwapWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemWeapon_SwapWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AItemWeapon_NoRegister()
	{
		return AItemWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AItemWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Main,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AItemWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItemWeapon_Equipment, "Equipment" }, // 847137131
		{ &Z_Construct_UFunction_AItemWeapon_SwapWeapon, "SwapWeapon" }, // 1742506026
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ItemWeapon.h" },
		{ "ModuleRelativePath", "ItemWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemWeapon_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/*\n\x09 * Component\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemWeapon.h" },
		{ "ToolTip", "* Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemWeapon_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemWeapon, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItemWeapon_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemWeapon_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AItemWeapon_Statics::NewProp_WeaponType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemWeapon_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "ItemWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AItemWeapon_Statics::NewProp_WeaponType = { "WeaponType", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemWeapon, WeaponType), Z_Construct_UEnum_Main_EWeaponType, METADATA_PARAMS(Z_Construct_UClass_AItemWeapon_Statics::NewProp_WeaponType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemWeapon_Statics::NewProp_WeaponType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemWeapon_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemWeapon_Statics::NewProp_WeaponType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemWeapon_Statics::NewProp_WeaponType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItemWeapon_Statics::ClassParams = {
		&AItemWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItemWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AItemWeapon_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AItemWeapon, 2638728734);
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
