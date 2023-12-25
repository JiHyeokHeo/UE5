// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/T1Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "System/T1UIManagerSubSystem.h"

// Sets default values
AT1Character::AT1Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	SpringArm->SetupAttachment(RootComponent);
	Camera->SetupAttachment(SpringArm);

	SpringArm->SetRelativeRotation(FRotator(-30, 0, 0));
	SpringArm->TargetArmLength = 700;

	GetMesh()->SetRelativeLocationAndRotation(FVector(0, 0, -88), FRotator(0, -90, 0));

	ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshResource(TEXT("/Script/Engine.SkeletalMesh'/Game/ParagonRevenant/Characters/Heroes/Revenant/Meshes/Revenant.Revenant'"));
	if (MeshResource.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshResource.Object);
	}


	Item = MakeShared<FItem>();

	// STL Lock이랑 동일한 기능
	TSharedPtr<FItem> SharedPtr = ItemWeak.Pin();
	if (SharedPtr)
	{

	}

	// SubSystem + 게임 인스턴스를 활용한 매니저
	UGameInstance* GameInstance = GetGameInstance();
	
	UT1UIManagerSubsystem* UIManager = GameInstance->GetSubsystem<UT1UIManagerSubsystem>();
	if (UIManager)
	{
		//UIManager->
	}



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

