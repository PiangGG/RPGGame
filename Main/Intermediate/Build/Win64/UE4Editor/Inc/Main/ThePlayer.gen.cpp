// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Main/ThePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThePlayer() {}
// Cross Module References
	MAIN_API UClass* Z_Construct_UClass_AThePlayer_NoRegister();
	MAIN_API UClass* Z_Construct_UClass_AThePlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Main();
	MAIN_API UEnum* Z_Construct_UEnum_Main_EPlayerStance();
	MAIN_API UEnum* Z_Construct_UEnum_Main_EPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	MAIN_API UClass* Z_Construct_UClass_UClothesComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	MAIN_API UEnum* Z_Construct_UEnum_Main_EPawnBodyType();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AThePlayer::execWearServer)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->WearServer_Validate(Z_Param_Actor))
		{
			RPC_ValidateFailed(TEXT("WearServer_Validate"));
			return;
		}
		P_THIS->WearServer_Implementation(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThePlayer::execOnRep_PlayerStateChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PlayerStateChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThePlayer::execGetPlayerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPlayerState*)Z_Param__Result=P_THIS->GetPlayerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThePlayer::execSetPlayerState)
	{
		P_GET_ENUM(EPlayerState,Z_Param_NewPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerState(EPlayerState(Z_Param_NewPlayerState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThePlayer::execOnRep_PlayerStanceChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PlayerStanceChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThePlayer::execGetPlayerStance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPlayerStance*)Z_Param__Result=P_THIS->GetPlayerStance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThePlayer::execSetPlayerStance)
	{
		P_GET_ENUM(EPlayerStance,Z_Param_NewPlayerStance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerStance(EPlayerStance(Z_Param_NewPlayerStance));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThePlayer::execOverlapActorChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverlapActorChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThePlayer::execRunServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->RunServer_Validate())
		{
			RPC_ValidateFailed(TEXT("RunServer_Validate"));
			return;
		}
		P_THIS->RunServer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThePlayer::execRun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Run();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThePlayer::execAttackServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->AttackServer_Validate())
		{
			RPC_ValidateFailed(TEXT("AttackServer_Validate"));
			return;
		}
		P_THIS->AttackServer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AThePlayer::execAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack();
		P_NATIVE_END;
	}
	static FName NAME_AThePlayer_AttackServer = FName(TEXT("AttackServer"));
	void AThePlayer::AttackServer()
	{
		ProcessEvent(FindFunctionChecked(NAME_AThePlayer_AttackServer),NULL);
	}
	static FName NAME_AThePlayer_RunServer = FName(TEXT("RunServer"));
	void AThePlayer::RunServer()
	{
		ProcessEvent(FindFunctionChecked(NAME_AThePlayer_RunServer),NULL);
	}
	static FName NAME_AThePlayer_UpdateUUserWidgetOverlapActor = FName(TEXT("UpdateUUserWidgetOverlapActor"));
	void AThePlayer::UpdateUUserWidgetOverlapActor()
	{
		ProcessEvent(FindFunctionChecked(NAME_AThePlayer_UpdateUUserWidgetOverlapActor),NULL);
	}
	static FName NAME_AThePlayer_WearServer = FName(TEXT("WearServer"));
	void AThePlayer::WearServer(AActor* Actor)
	{
		ThePlayer_eventWearServer_Parms Parms;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_AThePlayer_WearServer),&Parms);
	}
	void AThePlayer::StaticRegisterNativesAThePlayer()
	{
		UClass* Class = AThePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack", &AThePlayer::execAttack },
			{ "AttackServer", &AThePlayer::execAttackServer },
			{ "GetPlayerStance", &AThePlayer::execGetPlayerStance },
			{ "GetPlayerState", &AThePlayer::execGetPlayerState },
			{ "OnRep_PlayerStanceChange", &AThePlayer::execOnRep_PlayerStanceChange },
			{ "OnRep_PlayerStateChange", &AThePlayer::execOnRep_PlayerStateChange },
			{ "OverlapActorChange", &AThePlayer::execOverlapActorChange },
			{ "Run", &AThePlayer::execRun },
			{ "RunServer", &AThePlayer::execRunServer },
			{ "SetPlayerStance", &AThePlayer::execSetPlayerStance },
			{ "SetPlayerState", &AThePlayer::execSetPlayerState },
			{ "WearServer", &AThePlayer::execWearServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AThePlayer_Attack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayer_Attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayer_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayer, nullptr, "Attack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThePlayer_Attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayer_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThePlayer_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThePlayer_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThePlayer_AttackServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayer_AttackServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayer_AttackServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayer, nullptr, "AttackServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThePlayer_AttackServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayer_AttackServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThePlayer_AttackServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThePlayer_AttackServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThePlayer_GetPlayerStance_Statics
	{
		struct ThePlayer_eventGetPlayerStance_Parms
		{
			EPlayerStance ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AThePlayer_GetPlayerStance_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AThePlayer_GetPlayerStance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThePlayer_eventGetPlayerStance_Parms, ReturnValue), Z_Construct_UEnum_Main_EPlayerStance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThePlayer_GetPlayerStance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThePlayer_GetPlayerStance_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThePlayer_GetPlayerStance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayer_GetPlayerStance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayer_GetPlayerStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayer, nullptr, "GetPlayerStance", nullptr, nullptr, sizeof(ThePlayer_eventGetPlayerStance_Parms), Z_Construct_UFunction_AThePlayer_GetPlayerStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayer_GetPlayerStance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThePlayer_GetPlayerStance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayer_GetPlayerStance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThePlayer_GetPlayerStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThePlayer_GetPlayerStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThePlayer_GetPlayerState_Statics
	{
		struct ThePlayer_eventGetPlayerState_Parms
		{
			EPlayerState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AThePlayer_GetPlayerState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AThePlayer_GetPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThePlayer_eventGetPlayerState_Parms, ReturnValue), Z_Construct_UEnum_Main_EPlayerState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThePlayer_GetPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThePlayer_GetPlayerState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThePlayer_GetPlayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayer_GetPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayer_GetPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayer, nullptr, "GetPlayerState", nullptr, nullptr, sizeof(ThePlayer_eventGetPlayerState_Parms), Z_Construct_UFunction_AThePlayer_GetPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayer_GetPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThePlayer_GetPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayer_GetPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThePlayer_GetPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThePlayer_GetPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThePlayer_OnRep_PlayerStanceChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayer_OnRep_PlayerStanceChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayer_OnRep_PlayerStanceChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayer, nullptr, "OnRep_PlayerStanceChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThePlayer_OnRep_PlayerStanceChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayer_OnRep_PlayerStanceChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThePlayer_OnRep_PlayerStanceChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThePlayer_OnRep_PlayerStanceChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThePlayer_OnRep_PlayerStateChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayer_OnRep_PlayerStateChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayer_OnRep_PlayerStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayer, nullptr, "OnRep_PlayerStateChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThePlayer_OnRep_PlayerStateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayer_OnRep_PlayerStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThePlayer_OnRep_PlayerStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThePlayer_OnRep_PlayerStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThePlayer_OverlapActorChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayer_OverlapActorChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayer_OverlapActorChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayer, nullptr, "OverlapActorChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThePlayer_OverlapActorChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayer_OverlapActorChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThePlayer_OverlapActorChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThePlayer_OverlapActorChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThePlayer_Run_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayer_Run_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayer_Run_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayer, nullptr, "Run", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThePlayer_Run_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayer_Run_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThePlayer_Run()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThePlayer_Run_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThePlayer_RunServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayer_RunServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayer_RunServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayer, nullptr, "RunServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThePlayer_RunServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayer_RunServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThePlayer_RunServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThePlayer_RunServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThePlayer_SetPlayerStance_Statics
	{
		struct ThePlayer_eventSetPlayerStance_Parms
		{
			EPlayerStance NewPlayerStance;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewPlayerStance_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewPlayerStance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AThePlayer_SetPlayerStance_Statics::NewProp_NewPlayerStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AThePlayer_SetPlayerStance_Statics::NewProp_NewPlayerStance = { "NewPlayerStance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThePlayer_eventSetPlayerStance_Parms, NewPlayerStance), Z_Construct_UEnum_Main_EPlayerStance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThePlayer_SetPlayerStance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThePlayer_SetPlayerStance_Statics::NewProp_NewPlayerStance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThePlayer_SetPlayerStance_Statics::NewProp_NewPlayerStance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayer_SetPlayerStance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayer_SetPlayerStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayer, nullptr, "SetPlayerStance", nullptr, nullptr, sizeof(ThePlayer_eventSetPlayerStance_Parms), Z_Construct_UFunction_AThePlayer_SetPlayerStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayer_SetPlayerStance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThePlayer_SetPlayerStance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayer_SetPlayerStance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThePlayer_SetPlayerStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThePlayer_SetPlayerStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThePlayer_SetPlayerState_Statics
	{
		struct ThePlayer_eventSetPlayerState_Parms
		{
			EPlayerState NewPlayerState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewPlayerState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AThePlayer_SetPlayerState_Statics::NewProp_NewPlayerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AThePlayer_SetPlayerState_Statics::NewProp_NewPlayerState = { "NewPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThePlayer_eventSetPlayerState_Parms, NewPlayerState), Z_Construct_UEnum_Main_EPlayerState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThePlayer_SetPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThePlayer_SetPlayerState_Statics::NewProp_NewPlayerState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThePlayer_SetPlayerState_Statics::NewProp_NewPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayer_SetPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayer_SetPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayer, nullptr, "SetPlayerState", nullptr, nullptr, sizeof(ThePlayer_eventSetPlayerState_Parms), Z_Construct_UFunction_AThePlayer_SetPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayer_SetPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThePlayer_SetPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayer_SetPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThePlayer_SetPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThePlayer_SetPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThePlayer_UpdateUUserWidgetOverlapActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayer_UpdateUUserWidgetOverlapActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayer_UpdateUUserWidgetOverlapActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayer, nullptr, "UpdateUUserWidgetOverlapActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThePlayer_UpdateUUserWidgetOverlapActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayer_UpdateUUserWidgetOverlapActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThePlayer_UpdateUUserWidgetOverlapActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThePlayer_UpdateUUserWidgetOverlapActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AThePlayer_WearServer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AThePlayer_WearServer_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThePlayer_eventWearServer_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThePlayer_WearServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThePlayer_WearServer_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePlayer_WearServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePlayer_WearServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePlayer, nullptr, "WearServer", nullptr, nullptr, sizeof(ThePlayer_eventWearServer_Parms), Z_Construct_UFunction_AThePlayer_WearServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayer_WearServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThePlayer_WearServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePlayer_WearServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThePlayer_WearServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThePlayer_WearServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AThePlayer_NoRegister()
	{
		return AThePlayer::StaticClass();
	}
	struct Z_Construct_UClass_AThePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothesComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClothesComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRun_MetaData[];
#endif
		static void NewProp_bIsRun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapActor_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlapActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapActorTSub_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OverlapActorTSub;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FaceMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HairMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HairMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GloveMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GloveMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShoeMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadGearsMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeadGearsMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderPadMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShoulderPadMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeltMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BeltMesh;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshCompMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshCompMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MeshCompMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshCompMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MeshCompMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentPlayerStance_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayerStance_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentPlayerStance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentPlayerState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Main,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AThePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AThePlayer_Attack, "Attack" }, // 1892364611
		{ &Z_Construct_UFunction_AThePlayer_AttackServer, "AttackServer" }, // 3692262211
		{ &Z_Construct_UFunction_AThePlayer_GetPlayerStance, "GetPlayerStance" }, // 1240733760
		{ &Z_Construct_UFunction_AThePlayer_GetPlayerState, "GetPlayerState" }, // 3047309724
		{ &Z_Construct_UFunction_AThePlayer_OnRep_PlayerStanceChange, "OnRep_PlayerStanceChange" }, // 1998259478
		{ &Z_Construct_UFunction_AThePlayer_OnRep_PlayerStateChange, "OnRep_PlayerStateChange" }, // 1179409779
		{ &Z_Construct_UFunction_AThePlayer_OverlapActorChange, "OverlapActorChange" }, // 1500551728
		{ &Z_Construct_UFunction_AThePlayer_Run, "Run" }, // 2706452342
		{ &Z_Construct_UFunction_AThePlayer_RunServer, "RunServer" }, // 3351928583
		{ &Z_Construct_UFunction_AThePlayer_SetPlayerStance, "SetPlayerStance" }, // 159329711
		{ &Z_Construct_UFunction_AThePlayer_SetPlayerState, "SetPlayerState" }, // 2954460778
		{ &Z_Construct_UFunction_AThePlayer_UpdateUUserWidgetOverlapActor, "UpdateUUserWidgetOverlapActor" }, // 3440859590
		{ &Z_Construct_UFunction_AThePlayer_WearServer, "WearServer" }, // 4202782105
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ThePlayer.h" },
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Base Character" },
		{ "Comment", "//Spring Arm for holding camera \xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe8\x87\x82\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThePlayer.h" },
		{ "ToolTip", "Spring Arm for holding camera \xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe8\x87\x82\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePlayer, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Base Character" },
		{ "Comment", "//Camera Component  \xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThePlayer.h" },
		{ "ToolTip", "Camera Component  \xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePlayer, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_ClothesComponent_MetaData[] = {
		{ "Category", "Base Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_ClothesComponent = { "ClothesComponent", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePlayer, ClothesComponent), Z_Construct_UClass_UClothesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_ClothesComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_ClothesComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_TraceDirection_MetaData[] = {
		{ "Category", "Base Character" },
		{ "Comment", "//Arrow for determining forward direction \xe7\xae\xad\xe5\xa4\xb4\xe6\x96\xb9\xe5\x90\x91\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThePlayer.h" },
		{ "ToolTip", "Arrow for determining forward direction \xe7\xae\xad\xe5\xa4\xb4\xe6\x96\xb9\xe5\x90\x91\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_TraceDirection = { "TraceDirection", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePlayer, TraceDirection), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_TraceDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_TraceDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "Category", "ItemSetting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePlayer, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_SphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_SphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_bIsRun_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	void Z_Construct_UClass_AThePlayer_Statics::NewProp_bIsRun_SetBit(void* Obj)
	{
		((AThePlayer*)Obj)->bIsRun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_bIsRun = { "bIsRun", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AThePlayer), &Z_Construct_UClass_AThePlayer_Statics::NewProp_bIsRun_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_bIsRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_bIsRun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_BaseSpeed_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_BaseSpeed = { "BaseSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePlayer, BaseSpeed), METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_BaseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_BaseSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePlayer, RunSpeed), METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_RunSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_RunSpeed_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_OverlapActor_Inner = { "OverlapActor", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_OverlapActor_MetaData[] = {
		{ "Category", "Character" },
		{ "Comment", "/*\n\x09UFUNCTION(BlueprintCallable)\n    virtual void SphereComponent_BeginOverlap(class UPrimitiveComponent* Component,class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);\n\x09UFUNCTION(BlueprintCallable)\n    virtual void SphereComponent_EndOverlap(UPrimitiveComponent* Component,AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);\n\x09*/" },
		{ "ModuleRelativePath", "ThePlayer.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable)\nvirtual void SphereComponent_BeginOverlap(class UPrimitiveComponent* Component,class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);\nUFUNCTION(BlueprintCallable)\nvirtual void SphereComponent_EndOverlap(UPrimitiveComponent* Component,AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_OverlapActor = { "OverlapActor", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePlayer, OverlapActor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_OverlapActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_OverlapActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_OverlapActorTSub_MetaData[] = {
		{ "Category", "UUserWidget" },
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_OverlapActorTSub = { "OverlapActorTSub", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePlayer, OverlapActorTSub), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_OverlapActorTSub_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_OverlapActorTSub_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_FaceMesh_MetaData[] = {
		{ "Category", "Clothes" },
		{ "Comment", "/*UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category=\"Clothes\")\n\x09USkeletalMeshComponent* ClothesMesh;*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThePlayer.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category=\"Clothes\")\n       USkeletalMeshComponent* ClothesMesh;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_FaceMesh = { "FaceMesh", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePlayer, FaceMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_FaceMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_FaceMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_HairMesh_MetaData[] = {
		{ "Category", "Clothes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_HairMesh = { "HairMesh", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePlayer, HairMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_HairMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_HairMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_GloveMesh_MetaData[] = {
		{ "Category", "Clothes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_GloveMesh = { "GloveMesh", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePlayer, GloveMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_GloveMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_GloveMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_ShoeMesh_MetaData[] = {
		{ "Category", "Clothes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_ShoeMesh = { "ShoeMesh", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePlayer, ShoeMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_ShoeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_ShoeMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_HeadGearsMesh_MetaData[] = {
		{ "Category", "Clothes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_HeadGearsMesh = { "HeadGearsMesh", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePlayer, HeadGearsMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_HeadGearsMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_HeadGearsMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_ShoulderPadMesh_MetaData[] = {
		{ "Category", "Clothes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_ShoulderPadMesh = { "ShoulderPadMesh", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePlayer, ShoulderPadMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_ShoulderPadMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_ShoulderPadMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_BeltMesh_MetaData[] = {
		{ "Category", "Clothes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_BeltMesh = { "BeltMesh", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePlayer, BeltMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_BeltMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_BeltMesh_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_MeshCompMap_ValueProp = { "MeshCompMap", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_MeshCompMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_MeshCompMap_Key_KeyProp = { "MeshCompMap_Key", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Main_EPawnBodyType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_MeshCompMap_MetaData[] = {
		{ "Category", "Clothes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_MeshCompMap = { "MeshCompMap", nullptr, (EPropertyFlags)0x001000800001000d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePlayer, MeshCompMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_MeshCompMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_MeshCompMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "Category", "AnimMontage" },
		{ "ModuleRelativePath", "ThePlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePlayer, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_AnimMontage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_CurrentPlayerStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_CurrentPlayerStance_MetaData[] = {
		{ "Category", "Player" },
		{ "Comment", "/*\n\x09* \xe8\xa7\x92\xe8\x89\xb2\xe6\xad\xa6\xe5\x99\xa8\xe7\x8a\xb6\xe6\x80\x81\xe5\xa7\xbf\xe5\x8a\xbf\n\x09*/" },
		{ "ModuleRelativePath", "ThePlayer.h" },
		{ "ToolTip", "* \xe8\xa7\x92\xe8\x89\xb2\xe6\xad\xa6\xe5\x99\xa8\xe7\x8a\xb6\xe6\x80\x81\xe5\xa7\xbf\xe5\x8a\xbf" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_CurrentPlayerStance = { "CurrentPlayerStance", "OnRep_PlayerStanceChange", (EPropertyFlags)0x0010000100010025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePlayer, CurrentPlayerStance), Z_Construct_UEnum_Main_EPlayerStance, METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_CurrentPlayerStance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_CurrentPlayerStance_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_CurrentPlayerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePlayer_Statics::NewProp_CurrentPlayerState_MetaData[] = {
		{ "Category", "Player" },
		{ "Comment", "/*\n\x09* \xe8\xae\xbe\xe7\xbd\xae\xe8\xa7\x92\xe8\x89\xb2\xe7\x8a\xb6\xe6\x80\x81\xe7\x9b\xb8\xe5\x85\xb3\n\x09*/" },
		{ "ModuleRelativePath", "ThePlayer.h" },
		{ "ToolTip", "* \xe8\xae\xbe\xe7\xbd\xae\xe8\xa7\x92\xe8\x89\xb2\xe7\x8a\xb6\xe6\x80\x81\xe7\x9b\xb8\xe5\x85\xb3" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AThePlayer_Statics::NewProp_CurrentPlayerState = { "CurrentPlayerState", "OnRep_PlayerStateChange", (EPropertyFlags)0x0010000100010025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePlayer, CurrentPlayerState), Z_Construct_UEnum_Main_EPlayerState, METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::NewProp_CurrentPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::NewProp_CurrentPlayerState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_ClothesComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_TraceDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_SphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_bIsRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_BaseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_RunSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_OverlapActor_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_OverlapActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_OverlapActorTSub,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_FaceMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_HairMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_GloveMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_ShoeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_HeadGearsMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_ShoulderPadMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_BeltMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_MeshCompMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_MeshCompMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_MeshCompMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_MeshCompMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_AnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_CurrentPlayerStance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_CurrentPlayerStance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_CurrentPlayerState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePlayer_Statics::NewProp_CurrentPlayerState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThePlayer_Statics::ClassParams = {
		&AThePlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AThePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AThePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThePlayer, 520642991);
	template<> MAIN_API UClass* StaticClass<AThePlayer>()
	{
		return AThePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThePlayer(Z_Construct_UClass_AThePlayer, &AThePlayer::StaticClass, TEXT("/Script/Main"), TEXT("AThePlayer"), false, nullptr, nullptr, nullptr);

	void AThePlayer::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentPlayerStance(TEXT("CurrentPlayerStance"));
		static const FName Name_CurrentPlayerState(TEXT("CurrentPlayerState"));

		const bool bIsValid = true
			&& Name_CurrentPlayerStance == ClassReps[(int32)ENetFields_Private::CurrentPlayerStance].Property->GetFName()
			&& Name_CurrentPlayerState == ClassReps[(int32)ENetFields_Private::CurrentPlayerState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AThePlayer"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
