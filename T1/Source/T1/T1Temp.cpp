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
	
	// 카테고리, 상세 수준, 내용
	// "Tory" L"Tory" // 크로스플랫폼을 위해
	UE_LOG(LogTemp, Warning, TEXT("Hello Unreal"));
}

// Called every frame
void AT1Temp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

