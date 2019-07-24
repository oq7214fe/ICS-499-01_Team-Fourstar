// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Capstone/CapstoneGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapstoneGameMode() {}
// Cross Module References
	CAPSTONE_API UClass* Z_Construct_UClass_ACapstoneGameMode_NoRegister();
	CAPSTONE_API UClass* Z_Construct_UClass_ACapstoneGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Capstone();
// End Cross Module References
	void ACapstoneGameMode::StaticRegisterNativesACapstoneGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACapstoneGameMode_NoRegister()
	{
		return ACapstoneGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACapstoneGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapstoneGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Capstone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapstoneGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CapstoneGameMode.h" },
		{ "ModuleRelativePath", "CapstoneGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The GameMode defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nThis game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of CapstoneCharacter" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapstoneGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapstoneGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapstoneGameMode_Statics::ClassParams = {
		&ACapstoneGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ACapstoneGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACapstoneGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapstoneGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapstoneGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapstoneGameMode, 1222696028);
	template<> CAPSTONE_API UClass* StaticClass<ACapstoneGameMode>()
	{
		return ACapstoneGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapstoneGameMode(Z_Construct_UClass_ACapstoneGameMode, &ACapstoneGameMode::StaticClass, TEXT("/Script/Capstone"), TEXT("ACapstoneGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapstoneGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
