// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Main/Item/Item.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}
// Cross Module References
	MAIN_API UClass* Z_Construct_UClass_AItem_NoRegister();
	MAIN_API UClass* Z_Construct_UClass_AItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Main();
	MAIN_API UEnum* Z_Construct_UEnum_Main_EItemState();
	MAIN_API UEnum* Z_Construct_UEnum_Main_EItemType();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AItem::execPickupServer)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->PickupServer_Validate(Z_Param_Pawn))
		{
			RPC_ValidateFailed(TEXT("PickupServer_Validate"));
			return;
		}
		P_THIS->PickupServer_Implementation(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItem::execPickup)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pickup(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItem::execSetItemType)
	{
		P_GET_ENUM(EItemType,Z_Param_NewItemType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemType(EItemType(Z_Param_NewItemType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItem::execGetItemType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EItemType*)Z_Param__Result=P_THIS->GetItemType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItem::execSphereComponent_EndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SphereComponent_EndOverlap(Z_Param_Component,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItem::execSphereComponent_BeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SphereComponent_BeginOverlap(Z_Param_Component,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItem::execOnRep_SetItemState)
	{
		P_GET_ENUM(EItemState,Z_Param_NewItemState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SetItemState(EItemState(Z_Param_NewItemState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItem::execSetItemStateServer)
	{
		P_GET_ENUM(EItemState,Z_Param_NewItemState);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SetItemStateServer_Validate(EItemState(Z_Param_NewItemState)))
		{
			RPC_ValidateFailed(TEXT("SetItemStateServer_Validate"));
			return;
		}
		P_THIS->SetItemStateServer_Implementation(EItemState(Z_Param_NewItemState));
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
	static FName NAME_AItem_PickupServer = FName(TEXT("PickupServer"));
	void AItem::PickupServer(APawn* Pawn)
	{
		Item_eventPickupServer_Parms Parms;
		Parms.Pawn=Pawn;
		ProcessEvent(FindFunctionChecked(NAME_AItem_PickupServer),&Parms);
	}
	static FName NAME_AItem_SetItemStateServer = FName(TEXT("SetItemStateServer"));
	void AItem::SetItemStateServer(EItemState NewItemState)
	{
		Item_eventSetItemStateServer_Parms Parms;
		Parms.NewItemState=NewItemState;
		ProcessEvent(FindFunctionChecked(NAME_AItem_SetItemStateServer),&Parms);
	}
	void AItem::StaticRegisterNativesAItem()
	{
		UClass* Class = AItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemState", &AItem::execGetItemState },
			{ "GetItemType", &AItem::execGetItemType },
			{ "OnRep_SetItemState", &AItem::execOnRep_SetItemState },
			{ "Pickup", &AItem::execPickup },
			{ "PickupServer", &AItem::execPickupServer },
			{ "SetItemState", &AItem::execSetItemState },
			{ "SetItemStateServer", &AItem::execSetItemStateServer },
			{ "SetItemType", &AItem::execSetItemType },
			{ "SphereComponent_BeginOverlap", &AItem::execSphereComponent_BeginOverlap },
			{ "SphereComponent_EndOverlap", &AItem::execSphereComponent_EndOverlap },
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
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_GetItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "GetItemState", nullptr, nullptr, sizeof(Item_eventGetItemState_Parms), Z_Construct_UFunction_AItem_GetItemState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_GetItemState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_GetItemState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_GetItemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_GetItemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_GetItemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_GetItemType_Statics
	{
		struct Item_eventGetItemType_Parms
		{
			EItemType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AItem_GetItemType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AItem_GetItemType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventGetItemType_Parms, ReturnValue), Z_Construct_UEnum_Main_EItemType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_GetItemType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_GetItemType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_GetItemType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_GetItemType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_GetItemType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "GetItemType", nullptr, nullptr, sizeof(Item_eventGetItemType_Parms), Z_Construct_UFunction_AItem_GetItemType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_GetItemType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_GetItemType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_GetItemType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_GetItemType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_GetItemType_Statics::FuncParams);
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
		{ "ModuleRelativePath", "Item/Item.h" },
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
	struct Z_Construct_UFunction_AItem_Pickup_Statics
	{
		struct Item_eventPickup_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_Pickup_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventPickup_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_Pickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_Pickup_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_Pickup_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09 * \xe6\x8b\xbe\xe5\x8f\x96\xe7\x89\xa9\xe5\x93\x81\xe5\x87\xbd\xe6\x95\xb0\n\x09 */" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "* \xe6\x8b\xbe\xe5\x8f\x96\xe7\x89\xa9\xe5\x93\x81\xe5\x87\xbd\xe6\x95\xb0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_Pickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "Pickup", nullptr, nullptr, sizeof(Item_eventPickup_Parms), Z_Construct_UFunction_AItem_Pickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_Pickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_Pickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_Pickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_Pickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_Pickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_PickupServer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_PickupServer_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventPickupServer_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_PickupServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_PickupServer_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_PickupServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_PickupServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "PickupServer", nullptr, nullptr, sizeof(Item_eventPickupServer_Parms), Z_Construct_UFunction_AItem_PickupServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_PickupServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_PickupServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_PickupServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_PickupServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_PickupServer_Statics::FuncParams);
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
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_SetItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "SetItemState", nullptr, nullptr, sizeof(Item_eventSetItemState_Parms), Z_Construct_UFunction_AItem_SetItemState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SetItemState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_SetItemState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SetItemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_SetItemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_SetItemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_SetItemStateServer_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewItemState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewItemState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AItem_SetItemStateServer_Statics::NewProp_NewItemState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AItem_SetItemStateServer_Statics::NewProp_NewItemState = { "NewItemState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventSetItemStateServer_Parms, NewItemState), Z_Construct_UEnum_Main_EItemState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_SetItemStateServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SetItemStateServer_Statics::NewProp_NewItemState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SetItemStateServer_Statics::NewProp_NewItemState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_SetItemStateServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_SetItemStateServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "SetItemStateServer", nullptr, nullptr, sizeof(Item_eventSetItemStateServer_Parms), Z_Construct_UFunction_AItem_SetItemStateServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SetItemStateServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_SetItemStateServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SetItemStateServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_SetItemStateServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_SetItemStateServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_SetItemType_Statics
	{
		struct Item_eventSetItemType_Parms
		{
			EItemType NewItemType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewItemType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewItemType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AItem_SetItemType_Statics::NewProp_NewItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AItem_SetItemType_Statics::NewProp_NewItemType = { "NewItemType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventSetItemType_Parms, NewItemType), Z_Construct_UEnum_Main_EItemType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_SetItemType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SetItemType_Statics::NewProp_NewItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SetItemType_Statics::NewProp_NewItemType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_SetItemType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_SetItemType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "SetItemType", nullptr, nullptr, sizeof(Item_eventSetItemType_Parms), Z_Construct_UFunction_AItem_SetItemType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SetItemType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_SetItemType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SetItemType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_SetItemType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_SetItemType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics
	{
		struct Item_eventSphereComponent_BeginOverlap_Parms
		{
			UPrimitiveComponent* Component;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventSphereComponent_BeginOverlap_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventSphereComponent_BeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventSphereComponent_BeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventSphereComponent_BeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Item_eventSphereComponent_BeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Item_eventSphereComponent_BeginOverlap_Parms), &Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventSphereComponent_BeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "SphereComponent_BeginOverlap", nullptr, nullptr, sizeof(Item_eventSphereComponent_BeginOverlap_Parms), Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics
	{
		struct Item_eventSphereComponent_EndOverlap_Parms
		{
			UPrimitiveComponent* Component;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventSphereComponent_EndOverlap_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventSphereComponent_EndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventSphereComponent_EndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventSphereComponent_EndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "SphereComponent_EndOverlap", nullptr, nullptr, sizeof(Item_eventSphereComponent_EndOverlap_Parms), Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItem_SphereComponent_EndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItem_SphereComponent_EndOverlap_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverlap_MetaData[];
#endif
		static void NewProp_bOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverlap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Main,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItem_GetItemState, "GetItemState" }, // 645070345
		{ &Z_Construct_UFunction_AItem_GetItemType, "GetItemType" }, // 2652311057
		{ &Z_Construct_UFunction_AItem_OnRep_SetItemState, "OnRep_SetItemState" }, // 991399381
		{ &Z_Construct_UFunction_AItem_Pickup, "Pickup" }, // 1921483106
		{ &Z_Construct_UFunction_AItem_PickupServer, "PickupServer" }, // 4241686936
		{ &Z_Construct_UFunction_AItem_SetItemState, "SetItemState" }, // 580046235
		{ &Z_Construct_UFunction_AItem_SetItemStateServer, "SetItemStateServer" }, // 667500253
		{ &Z_Construct_UFunction_AItem_SetItemType, "SetItemType" }, // 3905979226
		{ &Z_Construct_UFunction_AItem_SphereComponent_BeginOverlap, "SphereComponent_BeginOverlap" }, // 991919869
		{ &Z_Construct_UFunction_AItem_SphereComponent_EndOverlap, "SphereComponent_EndOverlap" }, // 1063537969
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/Item.h" },
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AItem_Statics::NewProp_CurrentItemState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_CurrentItemState_MetaData[] = {
		{ "Category", "ItemSetting" },
		{ "Comment", "//\xe7\x89\xa9\xe5\x93\x81\xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe9\x87\x8f\n" },
		{ "ModuleRelativePath", "Item/Item.h" },
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe9\x87\x8f" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_CurrentItemState = { "CurrentItemState", "OnRep_SetItemState", (EPropertyFlags)0x0010000100010025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, CurrentItemState), Z_Construct_UEnum_Main_EItemState, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_CurrentItemState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_CurrentItemState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "Category", "ItemSetting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_SphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_SphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_bOverlap_MetaData[] = {
		{ "Category", "ItemSetting" },
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
	void Z_Construct_UClass_AItem_Statics::NewProp_bOverlap_SetBit(void* Obj)
	{
		((AItem*)Obj)->bOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_bOverlap = { "bOverlap", nullptr, (EPropertyFlags)0x0010000000010025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AItem), &Z_Construct_UClass_AItem_Statics::NewProp_bOverlap_SetBit, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_bOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_bOverlap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "ItemSetting" },
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_RotationSpeed_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItem_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "ItemSetting" },
		{ "ModuleRelativePath", "Item/Item.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000010025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItem, ItemType), Z_Construct_UEnum_Main_EItemType, METADATA_PARAMS(Z_Construct_UClass_AItem_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_CurrentItemState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_CurrentItemState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_SphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_bOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_RotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemType,
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
	IMPLEMENT_CLASS(AItem, 238506258);
	template<> MAIN_API UClass* StaticClass<AItem>()
	{
		return AItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItem(Z_Construct_UClass_AItem, &AItem::StaticClass, TEXT("/Script/Main"), TEXT("AItem"), false, nullptr, nullptr, nullptr);

	void AItem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentItemState(TEXT("CurrentItemState"));
		static const FName Name_bOverlap(TEXT("bOverlap"));
		static const FName Name_ItemType(TEXT("ItemType"));

		const bool bIsValid = true
			&& Name_CurrentItemState == ClassReps[(int32)ENetFields_Private::CurrentItemState].Property->GetFName()
			&& Name_bOverlap == ClassReps[(int32)ENetFields_Private::bOverlap].Property->GetFName()
			&& Name_ItemType == ClassReps[(int32)ENetFields_Private::ItemType].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AItem"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
