// Fill out your copyright notice in the Description page of Project Settings.

#include "CashUI.h"
#include "ActorAnchoredUI.h"
#include "Kismet/KismetMathLibrary.h"


// Sets default values
AActorAnchoredUI::AActorAnchoredUI()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	WidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
	RootComponent = WidgetComponent;

}

// Called when the game starts or when spawned
void AActorAnchoredUI::BeginPlay()
{
	Super::BeginPlay();

	WidgetComponent->SetVisibility(true);
}

// Called every frame
void AActorAnchoredUI::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	FVector newPosition = FVector(0.0f);

	switch (UIPosition)
	{
	case EUIAnchorPosition::Above:
		SetActorLocation(TargetActor->GetActorLocation() + FVector::UpVector * Offset);
		break;
	case EUIAnchorPosition::Left:
		SetActorLocation(TargetActor->GetActorLocation() + FVector::CrossProduct((TargetActor->GetActorLocation() - GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraLocation()), FVector::UpVector).GetSafeNormal() * Offset);
		break;
	case EUIAnchorPosition::Right:
		SetActorLocation(TargetActor->GetActorLocation() + FVector::CrossProduct((TargetActor->GetActorLocation() - GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraLocation()), FVector::UpVector).GetSafeNormal() * -Offset);
		break;
	}

	if (TargetActor != nullptr)
	{

		SetActorRotation(FMath::RInterpTo(GetActorRotation(), UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraLocation()), DeltaTime, 5.0f));
	}
}

