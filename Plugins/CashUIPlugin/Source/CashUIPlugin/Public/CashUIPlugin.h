// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Engine.h"
#include "ModuleManager.h"

#define Msg(Text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Green, TEXT(Text));

class FCashUIPlugin : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};