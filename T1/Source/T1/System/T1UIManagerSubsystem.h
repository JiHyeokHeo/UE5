// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "T1UIManagerSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class T1_API UT1UIManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override; 

	virtual void Deinitialize() override;
};
