// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/SplineController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineController() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_ASplineController_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ASplineController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void ASplineController::StaticRegisterNativesASplineController()
	{
	}
	UClass* Z_Construct_UClass_ASplineController_NoRegister()
	{
		return ASplineController::StaticClass();
	}
	struct Z_Construct_UClass_ASplineController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASplineController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplineController.h" },
		{ "ModuleRelativePath", "SplineController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASplineController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplineController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASplineController_Statics::ClassParams = {
		&ASplineController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASplineController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASplineController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASplineController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASplineController, 2924991234);
	template<> MYPROJECT_API UClass* StaticClass<ASplineController>()
	{
		return ASplineController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASplineController(Z_Construct_UClass_ASplineController, &ASplineController::StaticClass, TEXT("/Script/MyProject"), TEXT("ASplineController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASplineController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
