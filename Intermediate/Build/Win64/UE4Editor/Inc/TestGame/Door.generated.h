// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTGAME_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define TESTGAME_Door_generated_h

#define TestGame_Source_TestGame_Door_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpen_Implementation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Open_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerformInteract_Implementation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PerformInteract_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanInteract_Implementation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanInteract_Implementation(); \
		P_NATIVE_END; \
	}


#define TestGame_Source_TestGame_Door_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpen_Implementation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Open_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPerformInteract_Implementation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PerformInteract_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanInteract_Implementation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->CanInteract_Implementation(); \
		P_NATIVE_END; \
	}


#define TestGame_Source_TestGame_Door_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend TESTGAME_API class UClass* Z_Construct_UClass_ADoor(); \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestGame"), NO_API) \
	DECLARE_SERIALIZER(ADoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ADoor*>(this); }


#define TestGame_Source_TestGame_Door_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend TESTGAME_API class UClass* Z_Construct_UClass_ADoor(); \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestGame"), NO_API) \
	DECLARE_SERIALIZER(ADoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ADoor*>(this); }


#define TestGame_Source_TestGame_Door_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public:


#define TestGame_Source_TestGame_Door_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor)


#define TestGame_Source_TestGame_Door_h_12_PRIVATE_PROPERTY_OFFSET
#define TestGame_Source_TestGame_Door_h_9_PROLOG
#define TestGame_Source_TestGame_Door_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	TestGame_Source_TestGame_Door_h_12_RPC_WRAPPERS \
	TestGame_Source_TestGame_Door_h_12_INCLASS \
	TestGame_Source_TestGame_Door_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestGame_Source_TestGame_Door_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestGame_Source_TestGame_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	TestGame_Source_TestGame_Door_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TestGame_Source_TestGame_Door_h_12_INCLASS_NO_PURE_DECLS \
	TestGame_Source_TestGame_Door_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestGame_Source_TestGame_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
