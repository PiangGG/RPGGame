// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Main/Item/Body.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBody() {}
// Cross Module References
	MAIN_API UClass* Z_Construct_UClass_ABody_NoRegister();
	MAIN_API UClass* Z_Construct_UClass_ABody();
	MAIN_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_Main();
	MAIN_API UEnum* Z_Construct_UEnum_Main_EPawnBodyType();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABody::execSetPawnBodyType)
	{
		P_GET_ENUM(EPawnBodyType,Z_Param_NewPawnBodyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPawnBodyType(EPawnBodyType(Z_Param_NewPawnBodyType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABody::execGetPawnBodyType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPawnBodyType*)Z_Param__Result=P_THIS->GetPawnBodyType();
		P_NATIVE_END;
	}
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
			{ "GetPawnBodyType", &ABody::execGetPawnBodyType },
			{ "SetPawnBodyType", &ABody::execSetPawnBodyType },
			{ "Wear", &ABody::execWear },
			{ "WearServer", &ABody::execWearServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABody_GetPawnBodyType_Statics
	{
		struct Body_eventGetPawnBodyType_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABody_GetPawnBodyType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABody_GetPawnBodyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Body_eventGetPawnBodyType_Parms, ReturnValue), Z_Construct_UEnum_Main_EPawnBodyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABody_GetPawnBodyType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_GetPawnBodyType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_GetPawnBodyType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABody_GetPawnBodyType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Body.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABody_GetPawnBodyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABody, nullptr, "GetPawnBodyType", nullptr, nullptr, sizeof(Body_eventGetPawnBodyType_Parms), Z_Construct_UFunction_ABody_GetPawnBodyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_GetPawnBodyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABody_GetPawnBodyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_GetPawnBodyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABody_GetPawnBodyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABody_GetPawnBodyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABody_SetPawnBodyType_Statics
	{
		struct Body_eventSetPawnBodyType_Parms
		{
			EPawnBodyType NewPawnBodyType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewPawnBodyType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewPawnBodyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABody_SetPawnBodyType_Statics::NewProp_NewPawnBodyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABody_SetPawnBodyType_Statics::NewProp_NewPawnBodyType = { "NewPawnBodyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Body_eventSetPawnBodyType_Parms, NewPawnBodyType), Z_Construct_UEnum_Main_EPawnBodyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABody_SetPawnBodyType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_SetPawnBodyType_Statics::NewProp_NewPawnBodyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABody_SetPawnBodyType_Statics::NewProp_NewPawnBodyType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABody_SetPawnBodyType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Item/Body.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABody_SetPawnBodyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABody, nullptr, "SetPawnBodyType", nullptr, nullptr, sizeof(Body_eventSetPawnBodyType_Parms), Z_Construct_UFunction_ABody_SetPawnBodyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_SetPawnBodyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABody_SetPawnBodyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABody_SetPawnBodyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABody_SetPawnBodyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABody_SetPawnBodyType_Statics::FuncParams);
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
		{ "ModuleRelativePath", "Item/Body.h" },
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
		{ "ModuleRelativePath", "Item/Body.h" },
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThisSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThisSkeletalMesh;
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
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Main,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABody_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABody_GetPawnBodyType, "GetPawnBodyType" }, // 588858480
		{ &Z_Construct_UFunction_ABody_SetPawnBodyType, "SetPawnBodyType" }, // 4148500681
		{ &Z_Construct_UFunction_ABody_Wear, "Wear" }, // 2143413000
		{ &Z_Construct_UFunction_ABody_WearServer, "WearServer" }, // 235437677
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABody_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/Body.h" },
		{ "ModuleRelativePath", "Item/Body.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABody_Statics::NewProp_ThisSkeletalMesh_MetaData[] = {
		{ "Category", "ItemSetting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Item/Body.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABody_Statics::NewProp_ThisSkeletalMesh = { "ThisSkeletalMesh", nullptr, (EPropertyFlags)0x001000000009002d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABody, ThisSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABody_Statics::NewProp_ThisSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABody_Statics::NewProp_ThisSkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABody_Statics::NewProp_PawnBodyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABody_Statics::NewProp_PawnBodyType_MetaData[] = {
		{ "Category", "ItemSetting" },
		{ "ModuleRelativePath", "Item/Body.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABody_Statics::NewProp_PawnBodyType = { "PawnBodyType", nullptr, (EPropertyFlags)0x0010000000010025, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABody, PawnBodyType), Z_Construct_UEnum_Main_EPawnBodyType, METADATA_PARAMS(Z_Construct_UClass_ABody_Statics::NewProp_PawnBodyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABody_Statics::NewProp_PawnBodyType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABody_Statics::NewProp_ThisSkeletalMesh,
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
	IMPLEMENT_CLASS(ABody, 3286873453);
	template<> MAIN_API UClass* StaticClass<ABody>()
	{
		return ABody::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABody(Z_Construct_UClass_ABody, &ABody::StaticClass, TEXT("/Script/Main"), TEXT("ABody"), false, nullptr, nullptr, nullptr);

	void ABody::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ThisSkeletalMesh(TEXT("ThisSkeletalMesh"));
		static const FName Name_PawnBodyType(TEXT("PawnBodyType"));

		const bool bIsValid = true
			&& Name_ThisSkeletalMesh == ClassReps[(int32)ENetFields_Private::ThisSkeletalMesh].Property->GetFName()
			&& Name_PawnBodyType == ClassReps[(int32)ENetFields_Private::PawnBodyType].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABody"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABody);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
