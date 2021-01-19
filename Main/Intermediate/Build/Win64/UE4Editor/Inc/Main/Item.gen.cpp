// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Main/Item.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}
// Cross Module References
	MAIN_API UEnum* Z_Construct_UEnum_Main_EItemType();
	UPackage* Z_Construct_UPackage__Script_Main();
	MAIN_API UEnum* Z_Construct_UEnum_Main_EItemState();
	MAIN_API UClass* Z_Construct_UClass_AItem_NoRegister();
	MAIN_API UClass* Z_Construct_UClass_AItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
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
	uint32 Get_Z_Construct_UEnum_Main_EItemType_Hash() { return 2616277715U; }
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
				{ "ModuleRelativePath", "Item.h" },
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
	uint32 Get_Z_Construct_UEnum_Main_EItemState_Hash() { return 2272280627U; }
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
				{ "ModuleRelativePath", "Item.h" },
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
	DEFINE_FUNCTION(AItem::execOnRep_SetItemState)
	{
		P_GET_ENUM(EItemState,Z_Param_NewItemState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SetItemState(EItemState(Z_Param_NewItemState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItem::execSetItemState)
	{
		P_GET_ENUM(EItemState,Z_Param_NewItemState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemState(EItemState(Z_Param_NewItemState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItem::execGetItemState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EItemState*)Z_Param__Result=P_THIS->GetItemState();
		P_NATIVE_END;
	}
	void AItem::StaticRegisterNativesAItem()
	{
		UClass* Class = AItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemState", &AItem::execGetItemState },
			{ "OnRep_SetItemState", &AItem::execOnRep_SetItemState },
			{ "SetItemState", &AItem::execSetItemState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItem_GetItemState_Statics
	{
		struct Item_eventGetItemState_Parms
		{
			EItemState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AItem_GetItemState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AItem_GetItemState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventGetItemState_Parms, ReturnValue), Z_Construct_UEnum_Main_EItemState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_GetItemState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_GetItemState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_GetItemState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_GetItemState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe8\x8e\xb7\xe5\xbe\x97\xe7\x89\xa9\xe5\x93\x81\xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe9\x87\x8f\xe5\x87\xbd\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Item.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\xbe\x97\xe7\x89\xa9\xe5\x93\x81\xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe9\x87\x8f\xe5\x87\xbd\xe6\x95\xb0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_GetItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "GetItemState", nullptr, nullptr, sizeof(Item_eventGetItemState_Parms), Z_Construct_UFunction_AItem_GetItemState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_GetItemState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_GetItemState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_GetItemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_GetItemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_GetItemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_OnRep_SetItemState_Statics
	{
		struct Item_eventOnRep_SetItemState_Parms
		{
			EItemState NewItemState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewItemState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewItemState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AItem_OnRep_SetItemState_Statics::NewProp_NewItemState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AItem_OnRep_SetItemState_Statics::NewProp_NewItemState = { "NewItemState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventOnRep_SetItemState_Parms, NewItemState), Z_Construct_UEnum_Main_EItemState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_OnRep_SetItemState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnRep_SetItemState_Statics::NewProp_NewItemState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnRep_SetItemState_Statics::NewProp_NewItemState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_OnRep_SetItemState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_OnRep_SetItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "OnRep_SetItemState", nullptr, nullptr, sizeof(Item_eventOnRep_SetItemState_Parms), Z_Construct_UFunction_AItem_OnRep_SetItemState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnRep_SetItemState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_OnRep_SetItemState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnRep_SetItemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_OnRep_SetItemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_OnRep_SetItemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_SetItemState_Statics
	{
		struct Item_eventSetItemState_Parms
		{
			EItemState NewItemState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewItemState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewItemState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AItem_SetItemState_Statics::NewProp_NewItemState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AItem_SetItemState_Statics::NewProp_NewItemState = { "NewItemState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventSetItemState_Parms, NewItemState), Z_Construct_UEnum_Main_EItemState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_SetItemState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SetItemState_Statics::NewProp_NewItemState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SetItemState_Statics::NewProp_NewItemState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_SetItemState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe8\xae\xbe\xe7\xbd\xae\xe7\x89\xa9\xe5\x93\x81\xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe9\x87\x8f\xe5\x87\xbd\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Item.h" },
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe7\x89\xa9\xe5\x93\x81\xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe9\x87\x8f\xe5\x87\xbd\xe6\x95\xb0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_SetItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "SetItemState", nullptr, nullptr, sizeof(Item_eventSetItemState_Parms), Z_Construct_UFunction_AItem_SetItemState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SetItemState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_SetItemState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SetItemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_SetItemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_SetItemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AItem_NoRegister()
	{
		return AItem::StaticClass();
	}
	struct Z_Construct_UClass_AItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentItemState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentItemState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentItemState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThisSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThisSkeletalMesh;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Main,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItem_GetItemState, "GetItemState" }, // 728133192
		{ &Z_Construct_UFunction_AItem_OnRep_SetItemState, "OnRep_SetItemState" }, // 4097365341
		{ &Z_Construct_UFunction_AItem_SetItemState, "SetItemState" }, // 3849407321
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item.h" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AItem_Statics::NewProp_CurrentItemState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_CurrentItemState_MetaData[] = {
		{ "Category", "ItemSetting" },
		{ "Comment", "/*\n\x09 * \xe7\x89\xa9\xe5\x93\x81\xe7\x8a\xb6\xe6\x80\x81\n\x09 *///\xe7\x89\xa9\xe5\x93\x81\xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe9\x87\x8f\n" },
		{ "ModuleRelativePath", "Item.h" },
		{ "ToolTip", "* \xe7\x89\xa9\xe5\x93\x81\xe7\x8a\xb6\xe6\x80\x81\n//\xe7\x89\xa9\xe5\x93\x81\xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe9\x87\x8f" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_CurrentItemState = { "CurrentItemState", "OnRep_SetItemState", (EPropertyFlags)0x0010000100010025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, CurrentItemState), Z_Construct_UEnum_Main_EItemState, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_CurrentItemState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_CurrentItemState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_ThisSkeletalMesh_MetaData[] = {
		{ "Category", "ItemSetting" },
		{ "Comment", "/*\n\x09 * \xe7\x89\xa9\xe5\x93\x81\xe9\xaa\xa8\xe9\xaa\xbc\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93\n\x09 */" },
		{ "ModuleRelativePath", "Item.h" },
		{ "ToolTip", "* \xe7\x89\xa9\xe5\x93\x81\xe9\xaa\xa8\xe9\xaa\xbc\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ThisSkeletalMesh = { "ThisSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, ThisSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_ThisSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_ThisSkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "ItemSetting" },
		{ "Comment", "/*\n\x09 * \xe7\x89\xa9\xe4\xbd\x93\xe7\xb1\xbb\xe5\x9e\x8b\n\x09 * \xe9\xbb\x98\xe8\xae\xa4\xe5\x85\xb6\xe4\xbb\x96\n\x09 */" },
		{ "ModuleRelativePath", "Item.h" },
		{ "ToolTip", "* \xe7\x89\xa9\xe4\xbd\x93\xe7\xb1\xbb\xe5\x9e\x8b\n* \xe9\xbb\x98\xe8\xae\xa4\xe5\x85\xb6\xe4\xbb\x96" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, ItemType), Z_Construct_UEnum_Main_EItemType, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "ItemSetting" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, ItemName), METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "Category", "ItemSetting" },
		{ "ModuleRelativePath", "Item.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, ItemIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_ItemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_ItemIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_CurrentItemState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_CurrentItemState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ThisSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItem_Statics::ClassParams = {
		&AItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItem, 3541605476);
	template<> MAIN_API UClass* StaticClass<AItem>()
	{
		return AItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItem(Z_Construct_UClass_AItem, &AItem::StaticClass, TEXT("/Script/Main"), TEXT("AItem"), false, nullptr, nullptr, nullptr);

	void AItem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentItemState(TEXT("CurrentItemState"));

		const bool bIsValid = true
			&& Name_CurrentItemState == ClassReps[(int32)ENetFields_Private::CurrentItemState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AItem"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
