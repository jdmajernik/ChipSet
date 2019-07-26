// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MyProjectBlockGrid_generated_h
#error "MyProjectBlockGrid.generated.h already included, missing '#pragma once' in MyProjectBlockGrid.h"
#endif
#define MYPROJECT_MyProjectBlockGrid_generated_h

#define MyProject_Source_MyProject_MyProjectBlockGrid_h_13_RPC_WRAPPERS
#define MyProject_Source_MyProject_MyProjectBlockGrid_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_MyProjectBlockGrid_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectBlockGrid(); \
	friend struct Z_Construct_UClass_AMyProjectBlockGrid_Statics; \
public: \
	DECLARE_CLASS(AMyProjectBlockGrid, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), MYPROJECT_API) \
	DECLARE_SERIALIZER(AMyProjectBlockGrid)


#define MyProject_Source_MyProject_MyProjectBlockGrid_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyProjectBlockGrid(); \
	friend struct Z_Construct_UClass_AMyProjectBlockGrid_Statics; \
public: \
	DECLARE_CLASS(AMyProjectBlockGrid, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), MYPROJECT_API) \
	DECLARE_SERIALIZER(AMyProjectBlockGrid)


#define MyProject_Source_MyProject_MyProjectBlockGrid_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECT_API AMyProjectBlockGrid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectBlockGrid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, AMyProjectBlockGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectBlockGrid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECT_API AMyProjectBlockGrid(AMyProjectBlockGrid&&); \
	MYPROJECT_API AMyProjectBlockGrid(const AMyProjectBlockGrid&); \
public:


#define MyProject_Source_MyProject_MyProjectBlockGrid_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECT_API AMyProjectBlockGrid(AMyProjectBlockGrid&&); \
	MYPROJECT_API AMyProjectBlockGrid(const AMyProjectBlockGrid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, AMyProjectBlockGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectBlockGrid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectBlockGrid)


#define MyProject_Source_MyProject_MyProjectBlockGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(AMyProjectBlockGrid, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__ScoreText() { return STRUCT_OFFSET(AMyProjectBlockGrid, ScoreText); }


#define MyProject_Source_MyProject_MyProjectBlockGrid_h_10_PROLOG
#define MyProject_Source_MyProject_MyProjectBlockGrid_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectBlockGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectBlockGrid_h_13_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyProjectBlockGrid_h_13_INCLASS \
	MyProject_Source_MyProject_MyProjectBlockGrid_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyProjectBlockGrid_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectBlockGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectBlockGrid_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectBlockGrid_h_13_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectBlockGrid_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyProjectBlockGrid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyProjectBlockGrid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
