// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/T1Character.h"

// Sets default values
AT1Character::AT1Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AT1Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AT1Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AT1Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

