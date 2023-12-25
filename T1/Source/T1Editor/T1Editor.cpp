// Copyright Epic Games, Inc. All Rights Reserved.

#include "T1Editor.h"
#include "Modules/ModuleManager.h"

class FT1EditorModule : public FDefaultGameModuleImpl
{
public:
	virtual void StartupModule() override
	{
		int32 a = 0;
	}

	virtual void ShutdownModule() override
	{

	}
};

//IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, T1, "T1" );
IMPLEMENT_MODULE(FDefaultGameModuleImpl, T1Editor);