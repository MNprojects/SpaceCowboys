// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef V1_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define V1_Door_generated_h

#define v1_Source_v1_Door_h_19_RPC_WRAPPERS
#define v1_Source_v1_Door_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define v1_Source_v1_Door_h_19_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesADoor(); \
	friend V1_API class UClass* Z_Construct_UClass_ADoor(); \
	public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/v1"), NO_API) \
	DECLARE_SERIALIZER(ADoor) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define v1_Source_v1_Door_h_19_INCLASS \
	private: \
	static void StaticRegisterNativesADoor(); \
	friend V1_API class UClass* Z_Construct_UClass_ADoor(); \
	public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/v1"), NO_API) \
	DECLARE_SERIALIZER(ADoor) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define v1_Source_v1_Door_h_19_STANDARD_CONSTRUCTORS \
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


#define v1_Source_v1_Door_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor)


#define v1_Source_v1_Door_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(ADoor, CurrentState); }


#define v1_Source_v1_Door_h_16_PROLOG
#define v1_Source_v1_Door_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	v1_Source_v1_Door_h_19_PRIVATE_PROPERTY_OFFSET \
	v1_Source_v1_Door_h_19_RPC_WRAPPERS \
	v1_Source_v1_Door_h_19_INCLASS \
	v1_Source_v1_Door_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define v1_Source_v1_Door_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	v1_Source_v1_Door_h_19_PRIVATE_PROPERTY_OFFSET \
	v1_Source_v1_Door_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	v1_Source_v1_Door_h_19_INCLASS_NO_PURE_DECLS \
	v1_Source_v1_Door_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID v1_Source_v1_Door_h


#define FOREACH_ENUM_DOOR_STATE(op) \
	op(DOOR_STATE::OPEN) \
	op(DOOR_STATE::CLOSED) \
	op(DOOR_STATE::LOCKED) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
