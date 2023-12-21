// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "T1GameInstance.generated.h"

/**
 * 
 */
UCLASS()
class T1_API UT1GameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UT1GameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
protected:
	virtual void Init() override;
	virtual void Shutdown() override;
};
