// Copyright Epic Games, Inc. All Rights Reserved.

#include "RenderToolsUE5.h"

#define LOCTEXT_NAMESPACE "FRenderToolsUE5Module"

void FRenderToolsUE5Module::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FRenderToolsUE5Module::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FRenderToolsUE5Module, RenderToolsUE5)