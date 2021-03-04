// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Main/Body.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBody() {}
// Cross Module References
	MAIN_API UClass* Z_Construct_UClass_ABody_NoRegister();
	MAIN_API UClass* Z_Construct_UClass_ABody();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Main();
	MAIN_API UEnum* Z_Construct_UEnum_Main_EItemState();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	MAIN_API UEnum* Z_Construct_UEnum_Main_EItemType();
	MAIN_API UEnum* Z_Construct_UEnum_Main_EPawnBodyType();
// End Cross Module References
	DEFINE_FUNCTION(ABody::execWearServer)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->WearServer_Validate(Z_Param_Pawn))
		{
			RPC_ValidateFailed(TEXT("WearServer_Validate"));
			return;
		}
		P_THIS->WearServer_Implementation(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABody::execWear)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Wear(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABody::execSphereComponent_EndOverlap)
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
	DEFINE_FUNCTION(ABody::execSphereComponent_BeginOverlap)
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
	DEFINE_FUNCTION(ABody::execOnRep_SetItemState)
	{
		P_GET_ENUM(EItemState,Z_Param_NewItemState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SetItemState(EItemState(Z_Param_NewItemState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABody::execSetItemState)
	{
		P_GET_ENUM(EItemState,Z_Param_NewItemState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemState(EItemState(Z_Param_NewItemState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABody::execGetItemState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EItemState*)Z_Param__Result=P_THIS->GetItemState();
		P_NATIVE_END;
	}
	static FName NAME_ABody_WearServer = FName(TEXT("WearServer"));
	void ABody::WearServer(APawn* Pawn)
	{
		Body_eventWearServer_Parms Parms;
		Parms.Pawn=Pawn;
		ProcessEvent(FindFunctionChecked(NAME_ABody_WearServer),&Parms);
	}
	void ABody::StaticRegisterNativesABody()
	{
		UClass* Class = ABody::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemState", &ABody::execGetItemState },
			{ "OnRep_SetItemState", &ABody::execOnRep_SetItemState },
			{ "SetItemState", &ABody::execSetItemState },
			{ "SphereComponent_BeginOverlap", &ABody::execSphereComponent_BeginOverlap },
			{ "SphereComponent_EndOverlap", &ABody::execSphereComponent_EndOverlap },
			{ "Wear", &ABody::execWear },
			{ "WearServer", &ABody::execWearServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABody_GetItemState_Statics
	{
		struct Body_eventGetItemState_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABody_GetItemState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABody_GetItemState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Body_eventGetItemState_Parms, ReturnValue), Z_Construct_UEnum_Main_EItemState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABody_GetItemState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_GetItemState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_GetItemState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABody_GetItemState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe8\x8e\xb7\xe5\xbe\x97\xe7\x89\xa9\xe5\x93\x81\xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe9\x87\x8f\xe5\x87\xbd\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Body.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\xbe\x97\xe7\x89\xa9\xe5\x93\x81\xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe9\x87\x8f\xe5\x87\xbd\xe6\x95\xb0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABody_GetItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABody, nullptr, "GetItemState", nullptr, nullptr, sizeof(Body_eventGetItemState_Parms), Z_Construct_UFunction_ABody_GetItemState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_GetItemState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABody_GetItemState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_GetItemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABody_GetItemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABody_GetItemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABody_OnRep_SetItemState_Statics
	{
		struct Body_eventOnRep_SetItemState_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABody_OnRep_SetItemState_Statics::NewProp_NewItemState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABody_OnRep_SetItemState_Statics::NewProp_NewItemState = { "NewItemState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Body_eventOnRep_SetItemState_Parms, NewItemState), Z_Construct_UEnum_Main_EItemState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABody_OnRep_SetItemState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_OnRep_SetItemState_Statics::NewProp_NewItemState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_OnRep_SetItemState_Statics::NewProp_NewItemState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABody_OnRep_SetItemState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Body.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABody_OnRep_SetItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABody, nullptr, "OnRep_SetItemState", nullptr, nullptr, sizeof(Body_eventOnRep_SetItemState_Parms), Z_Construct_UFunction_ABody_OnRep_SetItemState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_OnRep_SetItemState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABody_OnRep_SetItemState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_OnRep_SetItemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABody_OnRep_SetItemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABody_OnRep_SetItemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABody_SetItemState_Statics
	{
		struct Body_eventSetItemState_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABody_SetItemState_Statics::NewProp_NewItemState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABody_SetItemState_Statics::NewProp_NewItemState = { "NewItemState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Body_eventSetItemState_Parms, NewItemState), Z_Construct_UEnum_Main_EItemState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABody_SetItemState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_SetItemState_Statics::NewProp_NewItemState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_SetItemState_Statics::NewProp_NewItemState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABody_SetItemState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe8\xae\xbe\xe7\xbd\xae\xe7\x89\xa9\xe5\x93\x81\xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe9\x87\x8f\xe5\x87\xbd\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Body.h" },
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe7\x89\xa9\xe5\x93\x81\xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe9\x87\x8f\xe5\x87\xbd\xe6\x95\xb0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABody_SetItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABody, nullptr, "SetItemState", nullptr, nullptr, sizeof(Body_eventSetItemState_Parms), Z_Construct_UFunction_ABody_SetItemState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_SetItemState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABody_SetItemState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_SetItemState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABody_SetItemState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABody_SetItemState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics
	{
		struct Body_eventSphereComponent_BeginOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Body_eventSphereComponent_BeginOverlap_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Body_eventSphereComponent_BeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Body_eventSphereComponent_BeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Body_eventSphereComponent_BeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Body_eventSphereComponent_BeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Body_eventSphereComponent_BeginOverlap_Parms), &Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Body_eventSphereComponent_BeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Body.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABody, nullptr, "SphereComponent_BeginOverlap", nullptr, nullptr, sizeof(Body_eventSphereComponent_BeginOverlap_Parms), Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics
	{
		struct Body_eventSphereComponent_EndOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Body_eventSphereComponent_EndOverlap_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Body_eventSphereComponent_EndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Body_eventSphereComponent_EndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Body_eventSphereComponent_EndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Body.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABody, nullptr, "SphereComponent_EndOverlap", nullptr, nullptr, sizeof(Body_eventSphereComponent_EndOverlap_Parms), Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABody_SphereComponent_EndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABody_SphereComponent_EndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABody_Wear_Statics
	{
		struct Body_eventWear_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABody_Wear_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Body_eventWear_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABody_Wear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_Wear_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABody_Wear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Body.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABody_Wear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABody, nullptr, "Wear", nullptr, nullptr, sizeof(Body_eventWear_Parms), Z_Construct_UFunction_ABody_Wear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_Wear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABody_Wear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_Wear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABody_Wear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABody_Wear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABody_WearServer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABody_WearServer_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Body_eventWearServer_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABody_WearServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_WearServer_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABody_WearServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Body.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABody_WearServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABody, nullptr, "WearServer", nullptr, nullptr, sizeof(Body_eventWearServer_Parms), Z_Construct_UFunction_ABody_WearServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_WearServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABody_WearServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_WearServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABody_WearServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABody_WearServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABody_NoRegister()
	{
		return ABody::StaticClass();
	}
	struct Z_Construct_UClass_ABody_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThisSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThisSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverlap_MetaData[];
#endif
		static void NewProp_bOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverlap;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PawnBodyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnBodyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PawnBodyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABody_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Main,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABody_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABody_GetItemState, "GetItemState" }, // 14670697
		{ &Z_Construct_UFunction_ABody_OnRep_SetItemState, "OnRep_SetItemState" }, // 4122073991
		{ &Z_Construct_UFunction_ABody_SetItemState, "SetItemState" }, // 2506680166
		{ &Z_Construct_UFunction_ABody_SphereComponent_BeginOverlap, "SphereComponent_BeginOverlap" }, // 908960640
		{ &Z_Construct_UFunction_ABody_SphereComponent_EndOverlap, "SphereComponent_EndOverlap" }, // 379654845
		{ &Z_Construct_UFunction_ABody_Wear, "Wear" }, // 317164962
		{ &Z_Construct_UFunction_ABody_WearServer, "WearServer" }, // 2198181034
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABody_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Body.h" },
		{ "ModuleRelativePath", "Body.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABody_Statics::NewProp_CurrentItemState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABody_Statics::NewProp_CurrentItemState_MetaData[] = {
		{ "Category", "ItemSetting" },
		{ "Comment", "//\xe7\x89\xa9\xe5\x93\x81\xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe9\x87\x8f\n" },
		{ "ModuleRelativePath", "Body.h" },
		{ "ToolTip", "\xe7\x89\xa9\xe5\x93\x81\xe7\x8a\xb6\xe6\x80\x81\xe5\x8f\x98\xe9\x87\x8f" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABody_Statics::NewProp_CurrentItemState = { "CurrentItemState", "OnRep_SetItemState", (EPropertyFlags)0x0010000100010025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABody, CurrentItemState), Z_Construct_UEnum_Main_EItemState, METADATA_PARAMS(Z_Construct_UClass_ABody_Statics::NewProp_CurrentItemState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABody_Statics::NewProp_CurrentItemState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABody_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "Category", "ItemSetting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Body.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABody_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABody, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABody_Statics::NewProp_SphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABody_Statics::NewProp_SphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABody_Statics::NewProp_ThisSkeletalMesh_MetaData[] = {
		{ "Category", "ItemSetting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Body.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABody_Statics::NewProp_ThisSkeletalMesh = { "ThisSkeletalMesh", nullptr, (EPropertyFlags)0x001000000009002d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABody, ThisSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABody_Statics::NewProp_ThisSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABody_Statics::NewProp_ThisSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABody_Statics::NewProp_bOverlap_MetaData[] = {
		{ "ModuleRelativePath", "Body.h" },
	};
#endif
	void Z_Construct_UClass_ABody_Statics::NewProp_bOverlap_SetBit(void* Obj)
	{
		((ABody*)Obj)->bOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABody_Statics::NewProp_bOverlap = { "bOverlap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABody), &Z_Construct_UClass_ABody_Statics::NewProp_bOverlap_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABody_Statics::NewProp_bOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABody_Statics::NewProp_bOverlap_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABody_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABody_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "ItemSetting" },
		{ "ModuleRelativePath", "Body.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABody_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000010025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABody, ItemType), Z_Construct_UEnum_Main_EItemType, METADATA_PARAMS(Z_Construct_UClass_ABody_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABody_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABody_Statics::NewProp_PawnBodyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABody_Statics::NewProp_PawnBodyType_MetaData[] = {
		{ "Category", "ItemSetting" },
		{ "ModuleRelativePath", "Body.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABody_Statics::NewProp_PawnBodyType = { "PawnBodyType", nullptr, (EPropertyFlags)0x0010000000010025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABody, PawnBodyType), Z_Construct_UEnum_Main_EPawnBodyType, METADATA_PARAMS(Z_Construct_UClass_ABody_Statics::NewProp_PawnBodyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABody_Statics::NewProp_PawnBodyType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABody_Statics::NewProp_CurrentItemState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABody_Statics::NewProp_CurrentItemState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABody_Statics::NewProp_SphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABody_Statics::NewProp_ThisSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABody_Statics::NewProp_bOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABody_Statics::NewProp_ItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABody_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABody_Statics::NewProp_PawnBodyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABody_Statics::NewProp_PawnBodyType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABody_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABody>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABody_Statics::ClassParams = {
		&ABody::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABody_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABody_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABody_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABody_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABody()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABody_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABody, 667628640);
	template<> MAIN_API UClass* StaticClass<ABody>()
	{
		return ABody::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABody(Z_Construct_UClass_ABody, &ABody::StaticClass, TEXT("/Script/Main"), TEXT("ABody"), false, nullptr, nullptr, nullptr);

	void ABody::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentItemState(TEXT("CurrentItemState"));
		static const FName Name_ThisSkeletalMesh(TEXT("ThisSkeletalMesh"));
		static const FName Name_ItemType(TEXT("ItemType"));
		static const FName Name_PawnBodyType(TEXT("PawnBodyType"));

		const bool bIsValid = true
			&& Name_CurrentItemState == ClassReps[(int32)ENetFields_Private::CurrentItemState].Property->GetFName()
			&& Name_ThisSkeletalMesh == ClassReps[(int32)ENetFields_Private::ThisSkeletalMesh].Property->GetFName()
			&& Name_ItemType == ClassReps[(int32)ENetFields_Private::ItemType].Property->GetFName()
			&& Name_PawnBodyType == ClassReps[(int32)ENetFields_Private::PawnBodyType].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABody"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABody);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
