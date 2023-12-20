// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "T1Temp.generated.h"

UCLASS()
class T1_API AT1Temp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AT1Temp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
