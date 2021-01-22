// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Main/RPGPayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGPayer() {}
// Cross Module References
	MAIN_API UEnum* Z_Construct_UEnum_Main_EPlayerState();
	UPackage* Z_Construct_UPackage__Script_Main();
	MAIN_API UEnum* Z_Construct_UEnum_Main_EPlayerStance();
	MAIN_API UClass* Z_Construct_UClass_ARPGPayer_NoRegister();
	MAIN_API UClass* Z_Construct_UClass_ARPGPayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
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
	uint32 Get_Z_Construct_UEnum_Main_EPlayerState_Hash() { return 2620840150U; }
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
				{ "ModuleRelativePath", "RPGPayer.h" },
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
	uint32 Get_Z_Construct_UEnum_Main_EPlayerStance_Hash() { return 4174844702U; }
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
				{ "ModuleRelativePath", "RPGPayer.h" },
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
	DEFINE_FUNCTION(ARPGPayer::execOnRep_PlayerStateChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PlayerStateChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPayer::execGetPlayerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPlayerState*)Z_Param__Result=P_THIS->GetPlayerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPayer::execSetPlayerState)
	{
		P_GET_ENUM(EPlayerState,Z_Param_NewPlayerStance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerState(EPlayerState(Z_Param_NewPlayerStance));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPayer::execOnRep_PlayerStanceChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PlayerStanceChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPayer::execGetPlayerStance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPlayerStance*)Z_Param__Result=P_THIS->GetPlayerStance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPayer::execSetPlayerStance)
	{
		P_GET_ENUM(EPlayerStance,Z_Param_NewPlayerStance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerStance(EPlayerStance(Z_Param_NewPlayerStance));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARPGPayer::execRunServer)
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
	DEFINE_FUNCTION(ARPGPayer::execRun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Run();
		P_NATIVE_END;
	}
	static FName NAME_ARPGPayer_RunServer = FName(TEXT("RunServer"));
	void ARPGPayer::RunServer()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARPGPayer_RunServer),NULL);
	}
	void ARPGPayer::StaticRegisterNativesARPGPayer()
	{
		UClass* Class = ARPGPayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerStance", &ARPGPayer::execGetPlayerStance },
			{ "GetPlayerState", &ARPGPayer::execGetPlayerState },
			{ "OnRep_PlayerStanceChange", &ARPGPayer::execOnRep_PlayerStanceChange },
			{ "OnRep_PlayerStateChange", &ARPGPayer::execOnRep_PlayerStateChange },
			{ "Run", &ARPGPayer::execRun },
			{ "RunServer", &ARPGPayer::execRunServer },
			{ "SetPlayerStance", &ARPGPayer::execSetPlayerStance },
			{ "SetPlayerState", &ARPGPayer::execSetPlayerState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARPGPayer_GetPlayerStance_Statics
	{
		struct RPGPayer_eventGetPlayerStance_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARPGPayer_GetPlayerStance_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARPGPayer_GetPlayerStance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPayer_eventGetPlayerStance_Parms, ReturnValue), Z_Construct_UEnum_Main_EPlayerStance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPayer_GetPlayerStance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPayer_GetPlayerStance_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPayer_GetPlayerStance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPayer_GetPlayerStance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RPGPayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPayer_GetPlayerStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPayer, nullptr, "GetPlayerStance", nullptr, nullptr, sizeof(RPGPayer_eventGetPlayerStance_Parms), Z_Construct_UFunction_ARPGPayer_GetPlayerStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPayer_GetPlayerStance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPayer_GetPlayerStance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPayer_GetPlayerStance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPayer_GetPlayerStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPayer_GetPlayerStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPayer_GetPlayerState_Statics
	{
		struct RPGPayer_eventGetPlayerState_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARPGPayer_GetPlayerState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARPGPayer_GetPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPayer_eventGetPlayerState_Parms, ReturnValue), Z_Construct_UEnum_Main_EPlayerState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPayer_GetPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPayer_GetPlayerState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPayer_GetPlayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPayer_GetPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RPGPayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPayer_GetPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPayer, nullptr, "GetPlayerState", nullptr, nullptr, sizeof(RPGPayer_eventGetPlayerState_Parms), Z_Construct_UFunction_ARPGPayer_GetPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPayer_GetPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPayer_GetPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPayer_GetPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPayer_GetPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPayer_GetPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPayer_OnRep_PlayerStanceChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPayer_OnRep_PlayerStanceChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RPGPayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPayer_OnRep_PlayerStanceChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPayer, nullptr, "OnRep_PlayerStanceChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPayer_OnRep_PlayerStanceChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPayer_OnRep_PlayerStanceChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPayer_OnRep_PlayerStanceChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPayer_OnRep_PlayerStanceChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPayer_OnRep_PlayerStateChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPayer_OnRep_PlayerStateChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RPGPayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPayer_OnRep_PlayerStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPayer, nullptr, "OnRep_PlayerStateChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPayer_OnRep_PlayerStateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPayer_OnRep_PlayerStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPayer_OnRep_PlayerStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPayer_OnRep_PlayerStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPayer_Run_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPayer_Run_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RPGPayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPayer_Run_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPayer, nullptr, "Run", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPayer_Run_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPayer_Run_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPayer_Run()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPayer_Run_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPayer_RunServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPayer_RunServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RPGPayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPayer_RunServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPayer, nullptr, "RunServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPayer_RunServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPayer_RunServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPayer_RunServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPayer_RunServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPayer_SetPlayerStance_Statics
	{
		struct RPGPayer_eventSetPlayerStance_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARPGPayer_SetPlayerStance_Statics::NewProp_NewPlayerStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARPGPayer_SetPlayerStance_Statics::NewProp_NewPlayerStance = { "NewPlayerStance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPayer_eventSetPlayerStance_Parms, NewPlayerStance), Z_Construct_UEnum_Main_EPlayerStance, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPayer_SetPlayerStance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPayer_SetPlayerStance_Statics::NewProp_NewPlayerStance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPayer_SetPlayerStance_Statics::NewProp_NewPlayerStance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPayer_SetPlayerStance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RPGPayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPayer_SetPlayerStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPayer, nullptr, "SetPlayerStance", nullptr, nullptr, sizeof(RPGPayer_eventSetPlayerStance_Parms), Z_Construct_UFunction_ARPGPayer_SetPlayerStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPayer_SetPlayerStance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPayer_SetPlayerStance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPayer_SetPlayerStance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPayer_SetPlayerStance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPayer_SetPlayerStance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARPGPayer_SetPlayerState_Statics
	{
		struct RPGPayer_eventSetPlayerState_Parms
		{
			EPlayerState NewPlayerStance;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewPlayerStance_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewPlayerStance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARPGPayer_SetPlayerState_Statics::NewProp_NewPlayerStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARPGPayer_SetPlayerState_Statics::NewProp_NewPlayerStance = { "NewPlayerStance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RPGPayer_eventSetPlayerState_Parms, NewPlayerStance), Z_Construct_UEnum_Main_EPlayerState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGPayer_SetPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPayer_SetPlayerState_Statics::NewProp_NewPlayerStance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGPayer_SetPlayerState_Statics::NewProp_NewPlayerStance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARPGPayer_SetPlayerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RPGPayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGPayer_SetPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGPayer, nullptr, "SetPlayerState", nullptr, nullptr, sizeof(RPGPayer_eventSetPlayerState_Parms), Z_Construct_UFunction_ARPGPayer_SetPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPayer_SetPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARPGPayer_SetPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGPayer_SetPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARPGPayer_SetPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARPGPayer_SetPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARPGPayer_NoRegister()
	{
		return ARPGPayer::StaticClass();
	}
	struct Z_Construct_UClass_ARPGPayer_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceDirection;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBodyCloth_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemBodyCloth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBodyFace_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemBodyFace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBodyHair_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemBodyHair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBodyGlove_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemBodyGlove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBodyShoe_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemBodyShoe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBodyHeadGears_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemBodyHeadGears;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBodyShoulderPad_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemBodyShoulderPad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemBodyBelt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemBodyBelt;
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
	UObject* (*const Z_Construct_UClass_ARPGPayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Main,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARPGPayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARPGPayer_GetPlayerStance, "GetPlayerStance" }, // 1831470904
		{ &Z_Construct_UFunction_ARPGPayer_GetPlayerState, "GetPlayerState" }, // 260354292
		{ &Z_Construct_UFunction_ARPGPayer_OnRep_PlayerStanceChange, "OnRep_PlayerStanceChange" }, // 700143310
		{ &Z_Construct_UFunction_ARPGPayer_OnRep_PlayerStateChange, "OnRep_PlayerStateChange" }, // 2160827217
		{ &Z_Construct_UFunction_ARPGPayer_Run, "Run" }, // 3137549620
		{ &Z_Construct_UFunction_ARPGPayer_RunServer, "RunServer" }, // 3294072834
		{ &Z_Construct_UFunction_ARPGPayer_SetPlayerStance, "SetPlayerStance" }, // 385428532
		{ &Z_Construct_UFunction_ARPGPayer_SetPlayerState, "SetPlayerState" }, // 2467757679
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RPGPayer.h" },
		{ "ModuleRelativePath", "RPGPayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPayer_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Base Character" },
		{ "Comment", "//Spring Arm for holding camera \xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe8\x87\x82\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RPGPayer.h" },
		{ "ToolTip", "Spring Arm for holding camera \xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe8\x87\x82\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPayer_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPayer, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGPayer_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPayer_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPayer_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Base Character" },
		{ "Comment", "//Camera Component  \xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RPGPayer.h" },
		{ "ToolTip", "Camera Component  \xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPayer_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPayer, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGPayer_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPayer_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPayer_Statics::NewProp_TraceDirection_MetaData[] = {
		{ "Category", "Base Character" },
		{ "Comment", "//Arrow for determining forward direction \xe7\xae\xad\xe5\xa4\xb4\xe6\x96\xb9\xe5\x90\x91\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RPGPayer.h" },
		{ "ToolTip", "Arrow for determining forward direction \xe7\xae\xad\xe5\xa4\xb4\xe6\x96\xb9\xe5\x90\x91\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPayer_Statics::NewProp_TraceDirection = { "TraceDirection", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPayer, TraceDirection), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGPayer_Statics::NewProp_TraceDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPayer_Statics::NewProp_TraceDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPayer_Statics::NewProp_bIsRun_MetaData[] = {
		{ "Category", "Base Character" },
		{ "ModuleRelativePath", "RPGPayer.h" },
	};
#endif
	void Z_Construct_UClass_ARPGPayer_Statics::NewProp_bIsRun_SetBit(void* Obj)
	{
		((ARPGPayer*)Obj)->bIsRun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARPGPayer_Statics::NewProp_bIsRun = { "bIsRun", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARPGPayer), &Z_Construct_UClass_ARPGPayer_Statics::NewProp_bIsRun_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARPGPayer_Statics::NewProp_bIsRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPayer_Statics::NewProp_bIsRun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPayer_Statics::NewProp_BaseSpeed_MetaData[] = {
		{ "Category", "Base Character" },
		{ "ModuleRelativePath", "RPGPayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARPGPayer_Statics::NewProp_BaseSpeed = { "BaseSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPayer, BaseSpeed), METADATA_PARAMS(Z_Construct_UClass_ARPGPayer_Statics::NewProp_BaseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPayer_Statics::NewProp_BaseSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPayer_Statics::NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Base Character" },
		{ "ModuleRelativePath", "RPGPayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARPGPayer_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPayer, RunSpeed), METADATA_PARAMS(Z_Construct_UClass_ARPGPayer_Statics::NewProp_RunSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPayer_Statics::NewProp_RunSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyCloth_MetaData[] = {
		{ "Category", "PlayerBody" },
		{ "Comment", "/*\n\x09 * ALL BODY\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RPGPayer.h" },
		{ "ToolTip", "* ALL BODY" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyCloth = { "ItemBodyCloth", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPayer, ItemBodyCloth), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyCloth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyCloth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyFace_MetaData[] = {
		{ "Category", "PlayerBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RPGPayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyFace = { "ItemBodyFace", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPayer, ItemBodyFace), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyFace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyFace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyHair_MetaData[] = {
		{ "Category", "PlayerBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RPGPayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyHair = { "ItemBodyHair", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPayer, ItemBodyHair), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyHair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyHair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyGlove_MetaData[] = {
		{ "Category", "PlayerBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RPGPayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyGlove = { "ItemBodyGlove", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPayer, ItemBodyGlove), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyGlove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyGlove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyShoe_MetaData[] = {
		{ "Category", "PlayerBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RPGPayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyShoe = { "ItemBodyShoe", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPayer, ItemBodyShoe), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyShoe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyShoe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyHeadGears_MetaData[] = {
		{ "Category", "PlayerBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RPGPayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyHeadGears = { "ItemBodyHeadGears", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPayer, ItemBodyHeadGears), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyHeadGears_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyHeadGears_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyShoulderPad_MetaData[] = {
		{ "Category", "PlayerBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RPGPayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyShoulderPad = { "ItemBodyShoulderPad", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPayer, ItemBodyShoulderPad), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyShoulderPad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyShoulderPad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyBelt_MetaData[] = {
		{ "Category", "PlayerBody" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RPGPayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyBelt = { "ItemBodyBelt", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPayer, ItemBodyBelt), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyBelt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyBelt_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARPGPayer_Statics::NewProp_CurrentPlayerStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPayer_Statics::NewProp_CurrentPlayerStance_MetaData[] = {
		{ "Category", "Player" },
		{ "Comment", "/*\n\x09 * \xe8\xa7\x92\xe8\x89\xb2\xe6\xad\xa6\xe5\x99\xa8\xe7\x8a\xb6\xe6\x80\x81\xe5\xa7\xbf\xe5\x8a\xbf\n\x09 */" },
		{ "ModuleRelativePath", "RPGPayer.h" },
		{ "ToolTip", "* \xe8\xa7\x92\xe8\x89\xb2\xe6\xad\xa6\xe5\x99\xa8\xe7\x8a\xb6\xe6\x80\x81\xe5\xa7\xbf\xe5\x8a\xbf" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARPGPayer_Statics::NewProp_CurrentPlayerStance = { "CurrentPlayerStance", "OnRep_PlayerStanceChange", (EPropertyFlags)0x0010000100010025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPayer, CurrentPlayerStance), Z_Construct_UEnum_Main_EPlayerStance, METADATA_PARAMS(Z_Construct_UClass_ARPGPayer_Statics::NewProp_CurrentPlayerStance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPayer_Statics::NewProp_CurrentPlayerStance_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARPGPayer_Statics::NewProp_CurrentPlayerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPayer_Statics::NewProp_CurrentPlayerState_MetaData[] = {
		{ "Category", "Player" },
		{ "Comment", "/*\n\x09 * \xe8\xae\xbe\xe7\xbd\xae\xe8\xa7\x92\xe8\x89\xb2\xe7\x8a\xb6\xe6\x80\x81\xe7\x9b\xb8\xe5\x85\xb3\n\x09 */" },
		{ "ModuleRelativePath", "RPGPayer.h" },
		{ "ToolTip", "* \xe8\xae\xbe\xe7\xbd\xae\xe8\xa7\x92\xe8\x89\xb2\xe7\x8a\xb6\xe6\x80\x81\xe7\x9b\xb8\xe5\x85\xb3" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARPGPayer_Statics::NewProp_CurrentPlayerState = { "CurrentPlayerState", "OnRep_PlayerStateChange", (EPropertyFlags)0x0010000100010025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARPGPayer, CurrentPlayerState), Z_Construct_UEnum_Main_EPlayerState, METADATA_PARAMS(Z_Construct_UClass_ARPGPayer_Statics::NewProp_CurrentPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPayer_Statics::NewProp_CurrentPlayerState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGPayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPayer_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPayer_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPayer_Statics::NewProp_TraceDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPayer_Statics::NewProp_bIsRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPayer_Statics::NewProp_BaseSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPayer_Statics::NewProp_RunSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyCloth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyFace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyHair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyGlove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyShoe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyHeadGears,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyShoulderPad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPayer_Statics::NewProp_ItemBodyBelt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPayer_Statics::NewProp_CurrentPlayerStance_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPayer_Statics::NewProp_CurrentPlayerStance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPayer_Statics::NewProp_CurrentPlayerState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGPayer_Statics::NewProp_CurrentPlayerState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGPayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGPayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARPGPayer_Statics::ClassParams = {
		&ARPGPayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARPGPayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARPGPayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPGPayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARPGPayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARPGPayer, 4073609400);
	template<> MAIN_API UClass* StaticClass<ARPGPayer>()
	{
		return ARPGPayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARPGPayer(Z_Construct_UClass_ARPGPayer, &ARPGPayer::StaticClass, TEXT("/Script/Main"), TEXT("ARPGPayer"), false, nullptr, nullptr, nullptr);

	void ARPGPayer::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentPlayerStance(TEXT("CurrentPlayerStance"));
		static const FName Name_CurrentPlayerState(TEXT("CurrentPlayerState"));

		const bool bIsValid = true
			&& Name_CurrentPlayerStance == ClassReps[(int32)ENetFields_Private::CurrentPlayerStance].Property->GetFName()
			&& Name_CurrentPlayerState == ClassReps[(int32)ENetFields_Private::CurrentPlayerState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ARPGPayer"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGPayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
