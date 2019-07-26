// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
#ifdef MYPROJECT_MyProjectBlock_generated_h
#error "MyProjectBlock.generated.h already included, missing '#pragma once' in MyProjectBlock.h"
#endif
#define MYPROJECT_MyProjectBlock_generated_h

#define MyProject_Source_MyProject_MyProjectBlock_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFingerPressedBlock(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockClicked) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockClicked(Z_Param_ClickedComp,Z_Param_ButtonClicked); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_MyProjectBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFingerPressedBlock(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockClicked) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlockClicked(Z_Param_ClickedComp,Z_Param_ButtonClicked); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_MyProjectBlock_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectBlock(); \
	friend struct Z_Construct_UClass_AMyProjectBlock_Statics; \
public: \
	DECLARE_CLASS(AMyProjectBlock, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), MYPROJECT_API) \
	DECLARE_SERIALIZER(AMyProjectBlock)


#define MyProject_Source_MyProject_MyProjectBlock_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyProjectBlock(); \
	friend struct Z_Construct_UClass_AMyProjectBlock_Statics; \
public: \
	DECLARE_CLASS(AMyProjectBlock, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), MYPROJECT_API) \
	DECLARE_SERIALIZER(AMyProjectBlock)


#define MyProject_Source_MyProject_MyProjectBlock_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECT_API AMyProjectBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, AMyProjectBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECT_API AMyProjectBlock(AMyProjectBlock&&); \
	MYPROJECT_API AMyProjectBlock(const AMyProjectBlock&); \
public:


#define MyProject_Source_MyProject_MyProjectBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MYPROJECT_API AMyProjectBlock(AMyProjectBlock&&); \
	MYPROJECT_API AMyProjectBlock(const AMyProjectBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, AMyProjectBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectBlock)


#define MyProject_Source_MyProject_MyProjectBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(AMyProjectBlock, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(AMyProjectBlock, BlockMesh); }


#define MyProject_Source_MyProject_MyProjectBlock_h_10_PROLOG
#define MyProject_Source_MyProject_MyProjectBlock_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectBlock_h_13_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyProjectBlock_h_13_INCLASS \
	MyProject_Source_MyProject_MyProjectBlock_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyProjectBlock_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectBlock_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectBlock_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectBlock_h_13_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectBlock_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyProjectBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyProjectBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
