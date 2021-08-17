// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheStoneNewAdventure/TheStoneNewAdventureGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheStoneNewAdventureGameModeBase() {}
// Cross Module References
	THESTONENEWADVENTURE_API UClass* Z_Construct_UClass_ATheStoneNewAdventureGameModeBase_NoRegister();
	THESTONENEWADVENTURE_API UClass* Z_Construct_UClass_ATheStoneNewAdventureGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TheStoneNewAdventure();
// End Cross Module References
	void ATheStoneNewAdventureGameModeBase::StaticRegisterNativesATheStoneNewAdventureGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATheStoneNewAdventureGameModeBase_NoRegister()
	{
		return ATheStoneNewAdventureGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATheStoneNewAdventureGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATheStoneNewAdventureGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TheStoneNewAdventure,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheStoneNewAdventureGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TheStoneNewAdventureGameModeBase.h" },
		{ "ModuleRelativePath", "TheStoneNewAdventureGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATheStoneNewAdventureGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheStoneNewAdventureGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATheStoneNewAdventureGameModeBase_Statics::ClassParams = {
		&ATheStoneNewAdventureGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATheStoneNewAdventureGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATheStoneNewAdventureGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATheStoneNewAdventureGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATheStoneNewAdventureGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATheStoneNewAdventureGameModeBase, 1797536087);
	template<> THESTONENEWADVENTURE_API UClass* StaticClass<ATheStoneNewAdventureGameModeBase>()
	{
		return ATheStoneNewAdventureGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATheStoneNewAdventureGameModeBase(Z_Construct_UClass_ATheStoneNewAdventureGameModeBase, &ATheStoneNewAdventureGameModeBase::StaticClass, TEXT("/Script/TheStoneNewAdventure"), TEXT("ATheStoneNewAdventureGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATheStoneNewAdventureGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
