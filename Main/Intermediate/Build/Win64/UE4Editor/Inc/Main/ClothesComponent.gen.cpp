// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Main/ClothesComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothesComponent() {}
// Cross Module References
	MAIN_API UClass* Z_Construct_UClass_UClothesComponent_NoRegister();
	MAIN_API UClass* Z_Construct_UClass_UClothesComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Main();
	MAIN_API UClass* Z_Construct_UClass_ABody_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UClothesComponent::execSwitchMeshServer)
	{
		P_GET_OBJECT(ABody,Z_Param_NewItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SwitchMeshServer_Validate(Z_Param_NewItem))
		{
			RPC_ValidateFailed(TEXT("SwitchMeshServer_Validate"));
			return;
		}
		P_THIS->SwitchMeshServer_Implementation(Z_Param_NewItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothesComponent::execSwitchMesh)
	{
		P_GET_OBJECT(ABody,Z_Param_NewItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchMesh(Z_Param_NewItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UClothesComponent::execInitClothes)
	{
		P_GET_UBOOL(Z_Param_bDefaultClothes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitClothes(Z_Param_bDefaultClothes);
		P_NATIVE_END;
	}
	static FName NAME_UClothesComponent_SwitchMeshServer = FName(TEXT("SwitchMeshServer"));
	void UClothesComponent::SwitchMeshServer(ABody* NewItem)
	{
		ClothesComponent_eventSwitchMeshServer_Parms Parms;
		Parms.NewItem=NewItem;
		ProcessEvent(FindFunctionChecked(NAME_UClothesComponent_SwitchMeshServer),&Parms);
	}
	void UClothesComponent::StaticRegisterNativesUClothesComponent()
	{
		UClass* Class = UClothesComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitClothes", &UClothesComponent::execInitClothes },
			{ "SwitchMesh", &UClothesComponent::execSwitchMesh },
			{ "SwitchMeshServer", &UClothesComponent::execSwitchMeshServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UClothesComponent_InitClothes_Statics
	{
		struct ClothesComponent_eventInitClothes_Parms
		{
			bool bDefaultClothes;
		};
		static void NewProp_bDefaultClothes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultClothes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UClothesComponent_InitClothes_Statics::NewProp_bDefaultClothes_SetBit(void* Obj)
	{
		((ClothesComponent_eventInitClothes_Parms*)Obj)->bDefaultClothes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UClothesComponent_InitClothes_Statics::NewProp_bDefaultClothes = { "bDefaultClothes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ClothesComponent_eventInitClothes_Parms), &Z_Construct_UFunction_UClothesComponent_InitClothes_Statics::NewProp_bDefaultClothes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothesComponent_InitClothes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothesComponent_InitClothes_Statics::NewProp_bDefaultClothes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothesComponent_InitClothes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClothesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothesComponent_InitClothes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothesComponent, nullptr, "InitClothes", nullptr, nullptr, sizeof(ClothesComponent_eventInitClothes_Parms), Z_Construct_UFunction_UClothesComponent_InitClothes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothesComponent_InitClothes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothesComponent_InitClothes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothesComponent_InitClothes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothesComponent_InitClothes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothesComponent_InitClothes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothesComponent_SwitchMesh_Statics
	{
		struct ClothesComponent_eventSwitchMesh_Parms
		{
			ABody* NewItem;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClothesComponent_SwitchMesh_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClothesComponent_eventSwitchMesh_Parms, NewItem), Z_Construct_UClass_ABody_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothesComponent_SwitchMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothesComponent_SwitchMesh_Statics::NewProp_NewItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothesComponent_SwitchMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClothesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothesComponent_SwitchMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothesComponent, nullptr, "SwitchMesh", nullptr, nullptr, sizeof(ClothesComponent_eventSwitchMesh_Parms), Z_Construct_UFunction_UClothesComponent_SwitchMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothesComponent_SwitchMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothesComponent_SwitchMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothesComponent_SwitchMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothesComponent_SwitchMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothesComponent_SwitchMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UClothesComponent_SwitchMeshServer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UClothesComponent_SwitchMeshServer_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ClothesComponent_eventSwitchMeshServer_Parms, NewItem), Z_Construct_UClass_ABody_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothesComponent_SwitchMeshServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothesComponent_SwitchMeshServer_Statics::NewProp_NewItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothesComponent_SwitchMeshServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ClothesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothesComponent_SwitchMeshServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothesComponent, nullptr, "SwitchMeshServer", nullptr, nullptr, sizeof(ClothesComponent_eventSwitchMeshServer_Parms), Z_Construct_UFunction_UClothesComponent_SwitchMeshServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothesComponent_SwitchMeshServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothesComponent_SwitchMeshServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothesComponent_SwitchMeshServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothesComponent_SwitchMeshServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UClothesComponent_SwitchMeshServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UClothesComponent_NoRegister()
	{
		return UClothesComponent::StaticClass();
	}
	struct Z_Construct_UClass_UClothesComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothesMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClothesMesh;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultClothes_MetaData[];
#endif
		static void NewProp_DefaultClothes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultClothes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothesComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Main,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UClothesComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UClothesComponent_InitClothes, "InitClothes" }, // 1737404247
		{ &Z_Construct_UFunction_UClothesComponent_SwitchMesh, "SwitchMesh" }, // 611208929
		{ &Z_Construct_UFunction_UClothesComponent_SwitchMeshServer, "SwitchMeshServer" }, // 4167137122
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothesComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ClothesComponent.h" },
		{ "ModuleRelativePath", "ClothesComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothesComponent_Statics::NewProp_ClothesMesh_MetaData[] = {
		{ "Category", "Clothes" },
		{ "ModuleRelativePath", "ClothesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClothesComponent_Statics::NewProp_ClothesMesh = { "ClothesMesh", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothesComponent, ClothesMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothesComponent_Statics::NewProp_ClothesMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothesComponent_Statics::NewProp_ClothesMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothesComponent_Statics::NewProp_FaceMesh_MetaData[] = {
		{ "Category", "Clothes" },
		{ "ModuleRelativePath", "ClothesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClothesComponent_Statics::NewProp_FaceMesh = { "FaceMesh", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothesComponent, FaceMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothesComponent_Statics::NewProp_FaceMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothesComponent_Statics::NewProp_FaceMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothesComponent_Statics::NewProp_HairMesh_MetaData[] = {
		{ "Category", "Clothes" },
		{ "ModuleRelativePath", "ClothesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClothesComponent_Statics::NewProp_HairMesh = { "HairMesh", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothesComponent, HairMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothesComponent_Statics::NewProp_HairMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothesComponent_Statics::NewProp_HairMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothesComponent_Statics::NewProp_GloveMesh_MetaData[] = {
		{ "Category", "Clothes" },
		{ "ModuleRelativePath", "ClothesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClothesComponent_Statics::NewProp_GloveMesh = { "GloveMesh", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothesComponent, GloveMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothesComponent_Statics::NewProp_GloveMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothesComponent_Statics::NewProp_GloveMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothesComponent_Statics::NewProp_ShoeMesh_MetaData[] = {
		{ "Category", "Clothes" },
		{ "ModuleRelativePath", "ClothesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClothesComponent_Statics::NewProp_ShoeMesh = { "ShoeMesh", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothesComponent, ShoeMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothesComponent_Statics::NewProp_ShoeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothesComponent_Statics::NewProp_ShoeMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothesComponent_Statics::NewProp_HeadGearsMesh_MetaData[] = {
		{ "Category", "Clothes" },
		{ "ModuleRelativePath", "ClothesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClothesComponent_Statics::NewProp_HeadGearsMesh = { "HeadGearsMesh", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothesComponent, HeadGearsMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothesComponent_Statics::NewProp_HeadGearsMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothesComponent_Statics::NewProp_HeadGearsMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothesComponent_Statics::NewProp_ShoulderPadMesh_MetaData[] = {
		{ "Category", "Clothes" },
		{ "ModuleRelativePath", "ClothesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClothesComponent_Statics::NewProp_ShoulderPadMesh = { "ShoulderPadMesh", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothesComponent, ShoulderPadMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothesComponent_Statics::NewProp_ShoulderPadMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothesComponent_Statics::NewProp_ShoulderPadMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothesComponent_Statics::NewProp_BeltMesh_MetaData[] = {
		{ "Category", "Clothes" },
		{ "ModuleRelativePath", "ClothesComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClothesComponent_Statics::NewProp_BeltMesh = { "BeltMesh", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothesComponent, BeltMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothesComponent_Statics::NewProp_BeltMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothesComponent_Statics::NewProp_BeltMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothesComponent_Statics::NewProp_DefaultClothes_MetaData[] = {
		{ "Category", "Clothes" },
		{ "ModuleRelativePath", "ClothesComponent.h" },
	};
#endif
	void Z_Construct_UClass_UClothesComponent_Statics::NewProp_DefaultClothes_SetBit(void* Obj)
	{
		((UClothesComponent*)Obj)->DefaultClothes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UClothesComponent_Statics::NewProp_DefaultClothes = { "DefaultClothes", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UClothesComponent), &Z_Construct_UClass_UClothesComponent_Statics::NewProp_DefaultClothes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UClothesComponent_Statics::NewProp_DefaultClothes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothesComponent_Statics::NewProp_DefaultClothes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothesComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothesComponent_Statics::NewProp_ClothesMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothesComponent_Statics::NewProp_FaceMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothesComponent_Statics::NewProp_HairMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothesComponent_Statics::NewProp_GloveMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothesComponent_Statics::NewProp_ShoeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothesComponent_Statics::NewProp_HeadGearsMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothesComponent_Statics::NewProp_ShoulderPadMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothesComponent_Statics::NewProp_BeltMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothesComponent_Statics::NewProp_DefaultClothes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothesComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothesComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothesComponent_Statics::ClassParams = {
		&UClothesComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UClothesComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothesComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UClothesComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothesComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothesComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothesComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothesComponent, 2114201956);
	template<> MAIN_API UClass* StaticClass<UClothesComponent>()
	{
		return UClothesComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothesComponent(Z_Construct_UClass_UClothesComponent, &UClothesComponent::StaticClass, TEXT("/Script/Main"), TEXT("UClothesComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothesComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
