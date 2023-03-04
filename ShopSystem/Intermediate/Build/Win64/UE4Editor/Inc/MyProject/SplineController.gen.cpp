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
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASplineController::execCloseDoor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseDoor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASplineController::execOpenDoor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenDoor();
		P_NATIVE_END;
	}
	void ASplineController::StaticRegisterNativesASplineController()
	{
		UClass* Class = ASplineController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseDoor", &ASplineController::execCloseDoor },
			{ "OpenDoor", &ASplineController::execOpenDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASplineController_CloseDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineController_CloseDoor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineController" },
		{ "ModuleRelativePath", "SplineController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineController_CloseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineController, nullptr, "CloseDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineController_CloseDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineController_CloseDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineController_CloseDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineController_CloseDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineController_OpenDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineController_OpenDoor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SplineController" },
		{ "ModuleRelativePath", "SplineController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineController_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineController, nullptr, "OpenDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineController_OpenDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineController_OpenDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineController_OpenDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineController_OpenDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASplineController_NoRegister()
	{
		return ASplineController::StaticClass();
	}
	struct Z_Construct_UClass_ASplineController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MoveActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalPathTimeController_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalPathTimeController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASplineController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASplineController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASplineController_CloseDoor, "CloseDoor" }, // 747709021
		{ &Z_Construct_UFunction_ASplineController_OpenDoor, "OpenDoor" }, // 3050855512
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplineController.h" },
		{ "ModuleRelativePath", "SplineController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineController_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "SplineController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SplineController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineController_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineController, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineController_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineController_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineController_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "SplineController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SplineController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineController_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineController, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineController_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineController_Statics::NewProp_Spline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineController_Statics::NewProp_MoveActorClass_MetaData[] = {
		{ "Category", "SplineController" },
		{ "ModuleRelativePath", "SplineController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASplineController_Statics::NewProp_MoveActorClass = { "MoveActorClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineController, MoveActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASplineController_Statics::NewProp_MoveActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineController_Statics::NewProp_MoveActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineController_Statics::NewProp_TotalPathTimeController_MetaData[] = {
		{ "Category", "SplineController" },
		{ "ModuleRelativePath", "SplineController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASplineController_Statics::NewProp_TotalPathTimeController = { "TotalPathTimeController", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineController, TotalPathTimeController), METADATA_PARAMS(Z_Construct_UClass_ASplineController_Statics::NewProp_TotalPathTimeController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineController_Statics::NewProp_TotalPathTimeController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASplineController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineController_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineController_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineController_Statics::NewProp_MoveActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineController_Statics::NewProp_TotalPathTimeController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASplineController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplineController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASplineController_Statics::ClassParams = {
		&ASplineController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASplineController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASplineController_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ASplineController, 1889691562);
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
