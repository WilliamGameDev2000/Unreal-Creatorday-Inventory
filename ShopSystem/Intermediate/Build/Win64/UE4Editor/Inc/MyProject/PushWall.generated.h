// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MYPROJECT_PushWall_generated_h
#error "PushWall.generated.h already included, missing '#pragma once' in PushWall.h"
#endif
#define MYPROJECT_PushWall_generated_h

#define ShopSystem_Source_MyProject_PushWall_h_14_SPARSE_DATA
#define ShopSystem_Source_MyProject_PushWall_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execActivateWall);


#define ShopSystem_Source_MyProject_PushWall_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execActivateWall);


#define ShopSystem_Source_MyProject_PushWall_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPushWall(); \
	friend struct Z_Construct_UClass_APushWall_Statics; \
public: \
	DECLARE_CLASS(APushWall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(APushWall)


#define ShopSystem_Source_MyProject_PushWall_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPushWall(); \
	friend struct Z_Construct_UClass_APushWall_Statics; \
public: \
	DECLARE_CLASS(APushWall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(APushWall)


#define ShopSystem_Source_MyProject_PushWall_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APushWall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APushWall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APushWall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APushWall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APushWall(APushWall&&); \
	NO_API APushWall(const APushWall&); \
public:


#define ShopSystem_Source_MyProject_PushWall_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APushWall(APushWall&&); \
	NO_API APushWall(const APushWall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APushWall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APushWall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APushWall)


#define ShopSystem_Source_MyProject_PushWall_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__speed() { return STRUCT_OFFSET(APushWall, speed); } \
	FORCEINLINE static uint32 __PPO__trigger() { return STRUCT_OFFSET(APushWall, trigger); }


#define ShopSystem_Source_MyProject_PushWall_h_11_PROLOG
#define ShopSystem_Source_MyProject_PushWall_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShopSystem_Source_MyProject_PushWall_h_14_PRIVATE_PROPERTY_OFFSET \
	ShopSystem_Source_MyProject_PushWall_h_14_SPARSE_DATA \
	ShopSystem_Source_MyProject_PushWall_h_14_RPC_WRAPPERS \
	ShopSystem_Source_MyProject_PushWall_h_14_INCLASS \
	ShopSystem_Source_MyProject_PushWall_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShopSystem_Source_MyProject_PushWall_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShopSystem_Source_MyProject_PushWall_h_14_PRIVATE_PROPERTY_OFFSET \
	ShopSystem_Source_MyProject_PushWall_h_14_SPARSE_DATA \
	ShopSystem_Source_MyProject_PushWall_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ShopSystem_Source_MyProject_PushWall_h_14_INCLASS_NO_PURE_DECLS \
	ShopSystem_Source_MyProject_PushWall_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class APushWall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShopSystem_Source_MyProject_PushWall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
