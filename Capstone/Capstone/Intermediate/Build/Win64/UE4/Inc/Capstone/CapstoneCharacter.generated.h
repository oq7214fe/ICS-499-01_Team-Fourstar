// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAPSTONE_CapstoneCharacter_generated_h
#error "CapstoneCharacter.generated.h already included, missing '#pragma once' in CapstoneCharacter.h"
#endif
#define CAPSTONE_CapstoneCharacter_generated_h

#define Capstone_Source_Capstone_CapstoneCharacter_h_22_RPC_WRAPPERS
#define Capstone_Source_Capstone_CapstoneCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Capstone_Source_Capstone_CapstoneCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACapstoneCharacter(); \
	friend struct Z_Construct_UClass_ACapstoneCharacter_Statics; \
public: \
	DECLARE_CLASS(ACapstoneCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Capstone"), NO_API) \
	DECLARE_SERIALIZER(ACapstoneCharacter) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Capstone_Source_Capstone_CapstoneCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesACapstoneCharacter(); \
	friend struct Z_Construct_UClass_ACapstoneCharacter_Statics; \
public: \
	DECLARE_CLASS(ACapstoneCharacter, APaperCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Capstone"), NO_API) \
	DECLARE_SERIALIZER(ACapstoneCharacter) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Capstone_Source_Capstone_CapstoneCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACapstoneCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACapstoneCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACapstoneCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACapstoneCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACapstoneCharacter(ACapstoneCharacter&&); \
	NO_API ACapstoneCharacter(const ACapstoneCharacter&); \
public:


#define Capstone_Source_Capstone_CapstoneCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACapstoneCharacter(ACapstoneCharacter&&); \
	NO_API ACapstoneCharacter(const ACapstoneCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACapstoneCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACapstoneCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACapstoneCharacter)


#define Capstone_Source_Capstone_CapstoneCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(ACapstoneCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACapstoneCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(ACapstoneCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(ACapstoneCharacter, IdleAnimation); }


#define Capstone_Source_Capstone_CapstoneCharacter_h_19_PROLOG
#define Capstone_Source_Capstone_CapstoneCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Capstone_Source_Capstone_CapstoneCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	Capstone_Source_Capstone_CapstoneCharacter_h_22_RPC_WRAPPERS \
	Capstone_Source_Capstone_CapstoneCharacter_h_22_INCLASS \
	Capstone_Source_Capstone_CapstoneCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Capstone_Source_Capstone_CapstoneCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Capstone_Source_Capstone_CapstoneCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	Capstone_Source_Capstone_CapstoneCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Capstone_Source_Capstone_CapstoneCharacter_h_22_INCLASS_NO_PURE_DECLS \
	Capstone_Source_Capstone_CapstoneCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAPSTONE_API UClass* StaticClass<class ACapstoneCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Capstone_Source_Capstone_CapstoneCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
