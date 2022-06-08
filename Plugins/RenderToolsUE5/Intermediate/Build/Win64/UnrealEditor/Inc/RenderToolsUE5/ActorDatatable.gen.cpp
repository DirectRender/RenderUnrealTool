// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderToolsUE5/Public/ActorDatatable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorDatatable() {}
// Cross Module References
	RENDERTOOLSUE5_API UEnum* Z_Construct_UEnum_RenderToolsUE5_EWeapon();
	UPackage* Z_Construct_UPackage__Script_RenderToolsUE5();
	RENDERTOOLSUE5_API UScriptStruct* Z_Construct_UScriptStruct_FAmmo();
	RENDERTOOLSUE5_API UClass* Z_Construct_UClass_AActorDatatable_NoRegister();
	RENDERTOOLSUE5_API UClass* Z_Construct_UClass_AActorDatatable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeapon;
	static UEnum* EWeapon_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeapon.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeapon.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RenderToolsUE5_EWeapon, Z_Construct_UPackage__Script_RenderToolsUE5(), TEXT("EWeapon"));
		}
		return Z_Registration_Info_UEnum_EWeapon.OuterSingleton;
	}
	template<> RENDERTOOLSUE5_API UEnum* StaticEnum<EWeapon>()
	{
		return EWeapon_StaticEnum();
	}
	struct Z_Construct_UEnum_RenderToolsUE5_EWeapon_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RenderToolsUE5_EWeapon_Statics::Enumerators[] = {
		{ "ObjectOne", (int64)ObjectOne },
		{ "ObjectTwo", (int64)ObjectTwo },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RenderToolsUE5_EWeapon_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorDatatable.h" },
		{ "ObjectOne.Name", "ObjectOne" },
		{ "ObjectTwo.Name", "ObjectTwo" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RenderToolsUE5_EWeapon_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RenderToolsUE5,
		nullptr,
		"EWeapon",
		"EWeapon",
		Z_Construct_UEnum_RenderToolsUE5_EWeapon_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RenderToolsUE5_EWeapon_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_RenderToolsUE5_EWeapon_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RenderToolsUE5_EWeapon_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RenderToolsUE5_EWeapon()
	{
		if (!Z_Registration_Info_UEnum_EWeapon.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeapon.InnerSingleton, Z_Construct_UEnum_RenderToolsUE5_EWeapon_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeapon.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Ammo;
class UScriptStruct* FAmmo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Ammo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Ammo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAmmo, Z_Construct_UPackage__Script_RenderToolsUE5(), TEXT("Ammo"));
	}
	return Z_Registration_Info_UScriptStruct_Ammo.OuterSingleton;
}
template<> RENDERTOOLSUE5_API UScriptStruct* StaticStruct<FAmmo>()
{
	return FAmmo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAmmo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ActorDatatable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAmmo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAmmo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmo_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DATA" },
		{ "ModuleRelativePath", "Public/ActorDatatable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmmo_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmmo, MaxHealth), METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmo_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmo_Statics::NewProp_MaxHealth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmo_Statics::NewProp_MaxHealth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAmmo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RenderToolsUE5,
		nullptr,
		&NewStructOps,
		"Ammo",
		sizeof(FAmmo),
		alignof(FAmmo),
		Z_Construct_UScriptStruct_FAmmo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAmmo()
	{
		if (!Z_Registration_Info_UScriptStruct_Ammo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Ammo.InnerSingleton, Z_Construct_UScriptStruct_FAmmo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Ammo.InnerSingleton;
	}
	void AActorDatatable::StaticRegisterNativesAActorDatatable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorDatatable);
	UClass* Z_Construct_UClass_AActorDatatable_NoRegister()
	{
		return AActorDatatable::StaticClass();
	}
	struct Z_Construct_UClass_AActorDatatable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectOne_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTwo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectTwo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhatWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WhatWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorDatatable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderToolsUE5,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorDatatable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorDatatable.h" },
		{ "ModuleRelativePath", "Public/ActorDatatable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorDatatable_Statics::NewProp_Weapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DATA" },
		{ "Comment", "// Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActorDatatable.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorDatatable_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorDatatable, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActorDatatable_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorDatatable_Statics::NewProp_Weapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorDatatable_Statics::NewProp_ObjectOne_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DATA" },
		{ "Comment", "// Weapon Meshes\n" },
		{ "ModuleRelativePath", "Public/ActorDatatable.h" },
		{ "ToolTip", "Weapon Meshes" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorDatatable_Statics::NewProp_ObjectOne = { "ObjectOne", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorDatatable, ObjectOne), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActorDatatable_Statics::NewProp_ObjectOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorDatatable_Statics::NewProp_ObjectOne_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorDatatable_Statics::NewProp_ObjectTwo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DATA" },
		{ "ModuleRelativePath", "Public/ActorDatatable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorDatatable_Statics::NewProp_ObjectTwo = { "ObjectTwo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorDatatable, ObjectTwo), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActorDatatable_Statics::NewProp_ObjectTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorDatatable_Statics::NewProp_ObjectTwo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorDatatable_Statics::NewProp_WhatWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DATA" },
		{ "Comment", "// Data tables (Cast>)\n" },
		{ "ModuleRelativePath", "Public/ActorDatatable.h" },
		{ "ToolTip", "Data tables (Cast>)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AActorDatatable_Statics::NewProp_WhatWeapon = { "WhatWeapon", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorDatatable, WhatWeapon), Z_Construct_UEnum_RenderToolsUE5_EWeapon, METADATA_PARAMS(Z_Construct_UClass_AActorDatatable_Statics::NewProp_WhatWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorDatatable_Statics::NewProp_WhatWeapon_MetaData)) }; // 2041210368
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorDatatable_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DATA" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/ActorDatatable.h" },
		{ "PasswordField", "true" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AActorDatatable_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorDatatable, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AActorDatatable_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorDatatable_Statics::NewProp_MaxHealth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorDatatable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorDatatable_Statics::NewProp_Weapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorDatatable_Statics::NewProp_ObjectOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorDatatable_Statics::NewProp_ObjectTwo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorDatatable_Statics::NewProp_WhatWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorDatatable_Statics::NewProp_MaxHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorDatatable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorDatatable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorDatatable_Statics::ClassParams = {
		&AActorDatatable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AActorDatatable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AActorDatatable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AActorDatatable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActorDatatable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActorDatatable()
	{
		if (!Z_Registration_Info_UClass_AActorDatatable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorDatatable.OuterSingleton, Z_Construct_UClass_AActorDatatable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AActorDatatable.OuterSingleton;
	}
	template<> RENDERTOOLSUE5_API UClass* StaticClass<AActorDatatable>()
	{
		return AActorDatatable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorDatatable);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_RenderToolsUE5_Source_RenderToolsUE5_Public_ActorDatatable_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RenderToolsUE5_Source_RenderToolsUE5_Public_ActorDatatable_h_Statics::EnumInfo[] = {
		{ EWeapon_StaticEnum, TEXT("EWeapon"), &Z_Registration_Info_UEnum_EWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2041210368U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RenderToolsUE5_Source_RenderToolsUE5_Public_ActorDatatable_h_Statics::ScriptStructInfo[] = {
		{ FAmmo::StaticStruct, Z_Construct_UScriptStruct_FAmmo_Statics::NewStructOps, TEXT("Ammo"), &Z_Registration_Info_UScriptStruct_Ammo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAmmo), 722433653U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RenderToolsUE5_Source_RenderToolsUE5_Public_ActorDatatable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AActorDatatable, AActorDatatable::StaticClass, TEXT("AActorDatatable"), &Z_Registration_Info_UClass_AActorDatatable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorDatatable), 4192121603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RenderToolsUE5_Source_RenderToolsUE5_Public_ActorDatatable_h_2585636010(TEXT("/Script/RenderToolsUE5"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_RenderToolsUE5_Source_RenderToolsUE5_Public_ActorDatatable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_RenderToolsUE5_Source_RenderToolsUE5_Public_ActorDatatable_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_RenderToolsUE5_Source_RenderToolsUE5_Public_ActorDatatable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_RenderToolsUE5_Source_RenderToolsUE5_Public_ActorDatatable_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_RenderToolsUE5_Source_RenderToolsUE5_Public_ActorDatatable_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_RenderToolsUE5_Source_RenderToolsUE5_Public_ActorDatatable_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
