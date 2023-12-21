// Fill out your copyright notice in the Description page of Project Settings.


#include "System/T1GameInstance.h"
#include "T1LogChannels.h"

UT1GameInstance::UT1GameInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UT1GameInstance::Init()
{
	Super::Init();
	 // For Testing Log
	// UE_LOG(LogT1, Warning, TEXT("CheckTest"));
}

void UT1GameInstance::Shutdown()
{
	Super::Shutdown();
}
