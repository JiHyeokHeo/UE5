// Fill out your copyright notice in the Description page of Project Settings.


#include "T1Temp.h"

// Sets default values
AT1Temp::AT1Temp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AT1Temp::BeginPlay()
{
	Super::BeginPlay();
	
	// ī�װ�, �� ����, ����
	// "Tory" L"Tory" // ũ�ν��÷����� ����
	UE_LOG(LogTemp, Warning, TEXT("Hello Unreal"));
}

// Called every frame
void AT1Temp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

