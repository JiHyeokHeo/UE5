// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/T1GameMode.h"
#include "Character/T1Character.h"

AT1GameMode::AT1GameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DefaultPawnClass = AT1Character::StaticClass();
}
