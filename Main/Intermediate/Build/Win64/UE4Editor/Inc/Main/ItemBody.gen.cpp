// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Main/ItemBody.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemBody() {}
// Cross Module References
	MAIN_API UEnum* Z_Construct_UEnum_Main_EPawnBodyType();
	UPackage* Z_Construct_UPackage__Script_Main();
	MAIN_API UClass* Z_Construct_UClass_AItemBody_NoRegister();
	MAIN_API UClass* Z_Construct_UClass_AItemBody();
	MAIN_API UClass* Z_Construct_UClass_AItem();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
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
	uint32 Get_Z_Construct_UEnum_Main_EPawnBodyType_Hash() { return 265721481U; }
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
				{ "Comment", "/*\n * \xe8\xba\xab\xe4\xbd\x93\xe7\xb1\xbb\xe5\x9e\x8b\xe7\x9a\x84\xe6\x9e\x9a\xe4\xb8\xbe\n */" },
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
				{ "ModuleRelativePath", "ItemBody.h" },
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
	DEFINE_FUNCTION(AItemBody::execAttachBodyServer)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->AttachBodyServer_Validate(Z_Param_Pawn))
		{
			RPC_ValidateFailed(TEXT("AttachBodyServer_Validate"));
			return;
		}
		P_THIS->AttachBodyServer_Implementation(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemBody::execAttachBody)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachBody(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemBody::execSwitchBodyServer)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SwitchBodyServer_Validate(Z_Param_Pawn))
		{
			RPC_ValidateFailed(TEXT("SwitchBodyServer_Validate"));
			return;
		}
		P_THIS->SwitchBodyServer_Implementation(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemBody::execSwitchBody)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchBody(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemBody::execInitItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitItem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemBody::execBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemBody::execGetEPawnBodyType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPawnBodyType*)Z_Param__Result=P_THIS->GetEPawnBodyType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AItemBody::execSetEPawnBody)
	{
		P_GET_ENUM(EPawnBodyType,Z_Param_NewPawnBody);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEPawnBody(EPawnBodyType(Z_Param_NewPawnBody));
		P_NATIVE_END;
	}
	static FName NAME_AItemBody_AttachBodyServer = FName(TEXT("AttachBodyServer"));
	void AItemBody::AttachBodyServer(APawn* Pawn)
	{
		ItemBody_eventAttachBodyServer_Parms Parms;
		Parms.Pawn=Pawn;
		ProcessEvent(FindFunctionChecked(NAME_AItemBody_AttachBodyServer),&Parms);
	}
	static FName NAME_AItemBody_SwitchBodyServer = FName(TEXT("SwitchBodyServer"));
	void AItemBody::SwitchBodyServer(APawn* Pawn)
	{
		ItemBody_eventSwitchBodyServer_Parms Parms;
		Parms.Pawn=Pawn;
		ProcessEvent(FindFunctionChecked(NAME_AItemBody_SwitchBodyServer),&Parms);
	}
	void AItemBody::StaticRegisterNativesAItemBody()
	{
		UClass* Class = AItemBody::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachBody", &AItemBody::execAttachBody },
			{ "AttachBodyServer", &AItemBody::execAttachBodyServer },
			{ "BeginPlay", &AItemBody::execBeginPlay },
			{ "GetEPawnBodyType", &AItemBody::execGetEPawnBodyType },
			{ "InitItem", &AItemBody::execInitItem },
			{ "SetEPawnBody", &AItemBody::execSetEPawnBody },
			{ "SwitchBody", &AItemBody::execSwitchBody },
			{ "SwitchBodyServer", &AItemBody::execSwitchBodyServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItemBody_AttachBody_Statics
	{
		struct ItemBody_eventAttachBody_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemBody_AttachBody_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemBody_eventAttachBody_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemBody_AttachBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBody_AttachBody_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemBody_AttachBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemBody" },
		{ "ModuleRelativePath", "ItemBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemBody_AttachBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemBody, nullptr, "AttachBody", nullptr, nullptr, sizeof(ItemBody_eventAttachBody_Parms), Z_Construct_UFunction_AItemBody_AttachBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBody_AttachBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemBody_AttachBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBody_AttachBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemBody_AttachBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemBody_AttachBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemBody_AttachBodyServer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemBody_AttachBodyServer_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemBody_eventAttachBodyServer_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemBody_AttachBodyServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBody_AttachBodyServer_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemBody_AttachBodyServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemBody" },
		{ "ModuleRelativePath", "ItemBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemBody_AttachBodyServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemBody, nullptr, "AttachBodyServer", nullptr, nullptr, sizeof(ItemBody_eventAttachBodyServer_Parms), Z_Construct_UFunction_AItemBody_AttachBodyServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBody_AttachBodyServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemBody_AttachBodyServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBody_AttachBodyServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemBody_AttachBodyServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemBody_AttachBodyServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemBody_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemBody_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemBody_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemBody, nullptr, "BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemBody_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBody_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemBody_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemBody_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemBody_GetEPawnBodyType_Statics
	{
		struct ItemBody_eventGetEPawnBodyType_Parms
		{
			EPawnBodyType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AItemBody_GetEPawnBodyType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AItemBody_GetEPawnBodyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemBody_eventGetEPawnBodyType_Parms, ReturnValue), Z_Construct_UEnum_Main_EPawnBodyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemBody_GetEPawnBodyType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBody_GetEPawnBodyType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBody_GetEPawnBodyType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemBody_GetEPawnBodyType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemBody_GetEPawnBodyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemBody, nullptr, "GetEPawnBodyType", nullptr, nullptr, sizeof(ItemBody_eventGetEPawnBodyType_Parms), Z_Construct_UFunction_AItemBody_GetEPawnBodyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBody_GetEPawnBodyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemBody_GetEPawnBodyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBody_GetEPawnBodyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemBody_GetEPawnBodyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemBody_GetEPawnBodyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemBody_InitItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemBody_InitItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemBody_InitItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemBody, nullptr, "InitItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemBody_InitItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBody_InitItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemBody_InitItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemBody_InitItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemBody_SetEPawnBody_Statics
	{
		struct ItemBody_eventSetEPawnBody_Parms
		{
			EPawnBodyType NewPawnBody;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewPawnBody_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewPawnBody;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AItemBody_SetEPawnBody_Statics::NewProp_NewPawnBody_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AItemBody_SetEPawnBody_Statics::NewProp_NewPawnBody = { "NewPawnBody", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemBody_eventSetEPawnBody_Parms, NewPawnBody), Z_Construct_UEnum_Main_EPawnBodyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemBody_SetEPawnBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBody_SetEPawnBody_Statics::NewProp_NewPawnBody_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBody_SetEPawnBody_Statics::NewProp_NewPawnBody,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemBody_SetEPawnBody_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ItemBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemBody_SetEPawnBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemBody, nullptr, "SetEPawnBody", nullptr, nullptr, sizeof(ItemBody_eventSetEPawnBody_Parms), Z_Construct_UFunction_AItemBody_SetEPawnBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBody_SetEPawnBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemBody_SetEPawnBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBody_SetEPawnBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemBody_SetEPawnBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemBody_SetEPawnBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemBody_SwitchBody_Statics
	{
		struct ItemBody_eventSwitchBody_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemBody_SwitchBody_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemBody_eventSwitchBody_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemBody_SwitchBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBody_SwitchBody_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemBody_SwitchBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemBody" },
		{ "Comment", "/*\n\x09 * \xe5\x88\x87\xe6\x8d\xa2\xe8\xba\xab\xe4\xbd\x93\xe9\x83\xa8\xe4\xbd\x8d\n\x09 */" },
		{ "ModuleRelativePath", "ItemBody.h" },
		{ "ToolTip", "* \xe5\x88\x87\xe6\x8d\xa2\xe8\xba\xab\xe4\xbd\x93\xe9\x83\xa8\xe4\xbd\x8d" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemBody_SwitchBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemBody, nullptr, "SwitchBody", nullptr, nullptr, sizeof(ItemBody_eventSwitchBody_Parms), Z_Construct_UFunction_AItemBody_SwitchBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBody_SwitchBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemBody_SwitchBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBody_SwitchBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemBody_SwitchBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemBody_SwitchBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemBody_SwitchBodyServer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemBody_SwitchBodyServer_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemBody_eventSwitchBodyServer_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemBody_SwitchBodyServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemBody_SwitchBodyServer_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemBody_SwitchBodyServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "ItemBody" },
		{ "ModuleRelativePath", "ItemBody.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemBody_SwitchBodyServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemBody, nullptr, "SwitchBodyServer", nullptr, nullptr, sizeof(ItemBody_eventSwitchBodyServer_Parms), Z_Construct_UFunction_AItemBody_SwitchBodyServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBody_SwitchBodyServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemBody_SwitchBodyServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBody_SwitchBodyServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemBody_SwitchBodyServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemBody_SwitchBodyServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AItemBody_NoRegister()
	{
		return AItemBody::StaticClass();
	}
	struct Z_Construct_UClass_AItemBody_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PawnBodyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnBodyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PawnBodyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachSoketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachSoketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickAnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickAnimMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemBody_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Main,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AItemBody_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItemBody_AttachBody, "AttachBody" }, // 1904030867
		{ &Z_Construct_UFunction_AItemBody_AttachBodyServer, "AttachBodyServer" }, // 3771869553
		{ &Z_Construct_UFunction_AItemBody_BeginPlay, "BeginPlay" }, // 3606741401
		{ &Z_Construct_UFunction_AItemBody_GetEPawnBodyType, "GetEPawnBodyType" }, // 2776063966
		{ &Z_Construct_UFunction_AItemBody_InitItem, "InitItem" }, // 1469664223
		{ &Z_Construct_UFunction_AItemBody_SetEPawnBody, "SetEPawnBody" }, // 491148868
		{ &Z_Construct_UFunction_AItemBody_SwitchBody, "SwitchBody" }, // 1624458178
		{ &Z_Construct_UFunction_AItemBody_SwitchBodyServer, "SwitchBodyServer" }, // 3245664270
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBody_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ItemBody.h" },
		{ "ModuleRelativePath", "ItemBody.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AItemBody_Statics::NewProp_PawnBodyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBody_Statics::NewProp_PawnBodyType_MetaData[] = {
		{ "Category", "PawnBody" },
		{ "ModuleRelativePath", "ItemBody.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AItemBody_Statics::NewProp_PawnBodyType = { "PawnBodyType", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemBody, PawnBodyType), Z_Construct_UEnum_Main_EPawnBodyType, METADATA_PARAMS(Z_Construct_UClass_AItemBody_Statics::NewProp_PawnBodyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemBody_Statics::NewProp_PawnBodyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBody_Statics::NewProp_AttachSoketName_MetaData[] = {
		{ "Category", "ItemBody" },
		{ "ModuleRelativePath", "ItemBody.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AItemBody_Statics::NewProp_AttachSoketName = { "AttachSoketName", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemBody, AttachSoketName), METADATA_PARAMS(Z_Construct_UClass_AItemBody_Statics::NewProp_AttachSoketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemBody_Statics::NewProp_AttachSoketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBody_Statics::NewProp_PickAnimMontage_MetaData[] = {
		{ "Category", "ItemBodyAnimationMontage" },
		{ "ModuleRelativePath", "ItemBody.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBody_Statics::NewProp_PickAnimMontage = { "PickAnimMontage", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemBody, PickAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItemBody_Statics::NewProp_PickAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemBody_Statics::NewProp_PickAnimMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBody_Statics::NewProp_PawnBodyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBody_Statics::NewProp_PawnBodyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBody_Statics::NewProp_AttachSoketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBody_Statics::NewProp_PickAnimMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemBody_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemBody>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItemBody_Statics::ClassParams = {
		&AItemBody::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItemBody_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AItemBody_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItemBody_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItemBody_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItemBody()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItemBody_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItemBody, 4255937842);
	template<> MAIN_API UClass* StaticClass<AItemBody>()
	{
		return AItemBody::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItemBody(Z_Construct_UClass_AItemBody, &AItemBody::StaticClass, TEXT("/Script/Main"), TEXT("AItemBody"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemBody);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
