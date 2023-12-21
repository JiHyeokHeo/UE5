// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "T1GameMode.generated.h"

/**
 * 
 */
UCLASS()
class T1_API AT1GameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	AT1GameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};
