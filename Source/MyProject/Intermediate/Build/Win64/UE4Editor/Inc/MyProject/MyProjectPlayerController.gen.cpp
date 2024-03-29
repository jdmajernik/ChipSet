// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyProjectPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProjectPlayerController() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectPlayerController_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AMyProjectPlayerController::StaticRegisterNativesAMyProjectPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AMyProjectPlayerController_NoRegister()
	{
		return AMyProjectPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMyProjectPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProjectPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyProjectPlayerController.h" },
		{ "ModuleRelativePath", "MyProjectPlayerController.h" },
		{ "ToolTip", "PlayerController class used to enable cursor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProjectPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProjectPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProjectPlayerController_Statics::ClassParams = {
		&AMyProjectPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyProjectPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyProjectPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProjectPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProjectPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProjectPlayerController, 138660311);
	template<> MYPROJECT_API UClass* StaticClass<AMyProjectPlayerController>()
	{
		return AMyProjectPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectPlayerController(Z_Construct_UClass_AMyProjectPlayerController, &AMyProjectPlayerController::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyProjectPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
