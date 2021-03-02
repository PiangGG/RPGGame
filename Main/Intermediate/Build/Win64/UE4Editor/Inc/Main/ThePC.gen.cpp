// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Main/ThePC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThePC() {}
// Cross Module References
	MAIN_API UClass* Z_Construct_UClass_AThePC_NoRegister();
	MAIN_API UClass* Z_Construct_UClass_AThePC();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Main();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AThePC::execHideAllMenus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideAllMenus();
		P_NATIVE_END;
	}
	void AThePC::StaticRegisterNativesAThePC()
	{
		UClass* Class = AThePC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideAllMenus", &AThePC::execHideAllMenus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AThePC_HideAllMenus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThePC_HideAllMenus_Statics::Function_MetaDataParams[] = {
		{ "Category", "PC" },
		{ "ModuleRelativePath", "ThePC.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AThePC_HideAllMenus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThePC, nullptr, "HideAllMenus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThePC_HideAllMenus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThePC_HideAllMenus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThePC_HideAllMenus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AThePC_HideAllMenus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AThePC_NoRegister()
	{
		return AThePC::StaticClass();
	}
	struct Z_Construct_UClass_AThePC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cHUD_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_cHUD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPauseMenuDisplayed_MetaData[];
#endif
		static void NewProp_bPauseMenuDisplayed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPauseMenuDisplayed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayerListDisplayed_MetaData[];
#endif
		static void NewProp_bPlayerListDisplayed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerListDisplayed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThePC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Main,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AThePC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AThePC_HideAllMenus, "HideAllMenus" }, // 2635342121
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePC_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ThePC.h" },
		{ "ModuleRelativePath", "ThePC.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePC_Statics::NewProp_cHUD_MetaData[] = {
		{ "Category", "PC" },
		{ "Comment", "//To hold a reference to our UMG HUD widget\n" },
		{ "ModuleRelativePath", "ThePC.h" },
		{ "ToolTip", "To hold a reference to our UMG HUD widget" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThePC_Statics::NewProp_cHUD = { "cHUD", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThePC, cHUD), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AThePC_Statics::NewProp_cHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePC_Statics::NewProp_cHUD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePC_Statics::NewProp_bPauseMenuDisplayed_MetaData[] = {
		{ "Category", "PC" },
		{ "Comment", "/*UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = \"PC\")\n\x09TSubclassOf<class UUserWidget> TSubTextUserWidget;\n\n\x09//HUD instance\n\x09UUserWidget *TextUserWidget;*///to hide or show pause menu\n" },
		{ "ModuleRelativePath", "ThePC.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = \"PC\")\n       TSubclassOf<class UUserWidget> TSubTextUserWidget;\n\n       //HUD instance\n       UUserWidget *TextUserWidget;//to hide or show pause menu" },
	};
#endif
	void Z_Construct_UClass_AThePC_Statics::NewProp_bPauseMenuDisplayed_SetBit(void* Obj)
	{
		((AThePC*)Obj)->bPauseMenuDisplayed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThePC_Statics::NewProp_bPauseMenuDisplayed = { "bPauseMenuDisplayed", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AThePC), &Z_Construct_UClass_AThePC_Statics::NewProp_bPauseMenuDisplayed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThePC_Statics::NewProp_bPauseMenuDisplayed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePC_Statics::NewProp_bPauseMenuDisplayed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThePC_Statics::NewProp_bPlayerListDisplayed_MetaData[] = {
		{ "Category", "PC" },
		{ "Comment", "//to hide or show the player list\n" },
		{ "ModuleRelativePath", "ThePC.h" },
		{ "ToolTip", "to hide or show the player list" },
	};
#endif
	void Z_Construct_UClass_AThePC_Statics::NewProp_bPlayerListDisplayed_SetBit(void* Obj)
	{
		((AThePC*)Obj)->bPlayerListDisplayed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThePC_Statics::NewProp_bPlayerListDisplayed = { "bPlayerListDisplayed", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AThePC), &Z_Construct_UClass_AThePC_Statics::NewProp_bPlayerListDisplayed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThePC_Statics::NewProp_bPlayerListDisplayed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThePC_Statics::NewProp_bPlayerListDisplayed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThePC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePC_Statics::NewProp_cHUD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePC_Statics::NewProp_bPauseMenuDisplayed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThePC_Statics::NewProp_bPlayerListDisplayed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThePC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThePC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThePC_Statics::ClassParams = {
		&AThePC::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AThePC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AThePC_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AThePC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThePC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThePC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThePC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThePC, 45064302);
	template<> MAIN_API UClass* StaticClass<AThePC>()
	{
		return AThePC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThePC(Z_Construct_UClass_AThePC, &AThePC::StaticClass, TEXT("/Script/Main"), TEXT("AThePC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThePC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
