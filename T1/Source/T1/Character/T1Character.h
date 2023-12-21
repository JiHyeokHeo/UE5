// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "T1Character.generated.h"

UCLASS()
class T1_API AT1Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AT1Character();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(EditAnywhere, Category=Character)
	TObjectPtr<class USpringArmComponent> SpringArm;

	UPROPERTY(EditAnywhere, Category = Character)
	TObjectPtr<class UCameraComponent> Camera;
};
