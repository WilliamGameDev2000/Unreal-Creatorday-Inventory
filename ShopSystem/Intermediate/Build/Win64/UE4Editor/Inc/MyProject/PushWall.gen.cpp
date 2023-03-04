// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/PushWall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePushWall() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_APushWall_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_APushWall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APushWall::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlapped);
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_other_comp);
		P_GET_PROPERTY(FIntProperty,Z_Param_other_index);
		P_GET_UBOOL(Z_Param_sweep_result);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_overlapped,Z_Param_actor,Z_Param_other_comp,Z_Param_other_index,Z_Param_sweep_result,Z_Param_Out_hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APushWall::execActivateWall)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateWall();
		P_NATIVE_END;
	}
	void APushWall::StaticRegisterNativesAPushWall()
	{
		UClass* Class = APushWall::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateWall", &APushWall::execActivateWall },
			{ "OnOverlapBegin", &APushWall::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APushWall_ActivateWall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APushWall_ActivateWall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PushWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APushWall_ActivateWall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APushWall, nullptr, "ActivateWall", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APushWall_ActivateWall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APushWall_ActivateWall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APushWall_ActivateWall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APushWall_ActivateWall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics
	{
		struct PushWall_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* overlapped;
			AActor* actor;
			UPrimitiveComponent* other_comp;
			int32 other_index;
			bool sweep_result;
			FHitResult hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlapped_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlapped;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_other_comp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_other_comp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_other_index;
		static void NewProp_sweep_result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_sweep_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_overlapped_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_overlapped = { "overlapped", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PushWall_eventOnOverlapBegin_Parms, overlapped), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_overlapped_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_overlapped_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PushWall_eventOnOverlapBegin_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_other_comp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_other_comp = { "other_comp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PushWall_eventOnOverlapBegin_Parms, other_comp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_other_comp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_other_comp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_other_index = { "other_index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PushWall_eventOnOverlapBegin_Parms, other_index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_sweep_result_SetBit(void* Obj)
	{
		((PushWall_eventOnOverlapBegin_Parms*)Obj)->sweep_result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_sweep_result = { "sweep_result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PushWall_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_sweep_result_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PushWall_eventOnOverlapBegin_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_overlapped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_other_comp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_other_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_sweep_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::NewProp_hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PushWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APushWall, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(PushWall_eventOnOverlapBegin_Parms), Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APushWall_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APushWall_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APushWall_NoRegister()
	{
		return APushWall::StaticClass();
	}
	struct Z_Construct_UClass_APushWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APushWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APushWall_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APushWall_ActivateWall, "ActivateWall" }, // 1570660933
		{ &Z_Construct_UFunction_APushWall_OnOverlapBegin, "OnOverlapBegin" }, // 687832737
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushWall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PushWall.h" },
		{ "ModuleRelativePath", "PushWall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushWall_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "PushWall" },
		{ "ModuleRelativePath", "PushWall.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APushWall_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APushWall, speed), METADATA_PARAMS(Z_Construct_UClass_APushWall_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APushWall_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APushWall_Statics::NewProp_trigger_MetaData[] = {
		{ "Category", "Triggers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PushWall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APushWall_Statics::NewProp_trigger = { "trigger", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APushWall, trigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APushWall_Statics::NewProp_trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APushWall_Statics::NewProp_trigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APushWall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushWall_Statics::NewProp_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APushWall_Statics::NewProp_trigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APushWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APushWall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APushWall_Statics::ClassParams = {
		&APushWall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APushWall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APushWall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APushWall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APushWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APushWall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APushWall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APushWall, 4275563427);
	template<> MYPROJECT_API UClass* StaticClass<APushWall>()
	{
		return APushWall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APushWall(Z_Construct_UClass_APushWall, &APushWall::StaticClass, TEXT("/Script/MyProject"), TEXT("APushWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APushWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
