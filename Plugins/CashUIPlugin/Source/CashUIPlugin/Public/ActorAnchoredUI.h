// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Components/WidgetComponent.h"
#include "Camera/PlayerCameraManager.h"
#include "ActorAnchoredUI.generated.h"

UENUM(BlueprintType)
enum class EUIAnchorPosition : uint8
{
	Above		UMETA(DisplayName = "Above"),
	Left		UMETA(DisplayName = "Left"),
	Right		UMETA(DisplayName = "Right")
};


UCLASS()
class CASHUIPLUGIN_API AActorAnchoredUI : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CashUI ActorAnchored UI")
	UWidgetComponent* WidgetComponent;

public:
	// Sets default values for this actor's properties
	AActorAnchoredUI();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CashUI ActorAnchored UI")
	AActor* TargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CashUI ActorAnchored UI")
	EUIAnchorPosition UIPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CashUI ActorAnchored UI")
	float Offset;

};
