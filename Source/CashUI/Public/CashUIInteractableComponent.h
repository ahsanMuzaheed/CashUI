// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "CashUIActorWidget.h"
#include "CashUIInteractableComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CASHUI_API UCashUIInteractableComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCashUIInteractableComponent();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CashUI Parameters")
		FString HeaderText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CashUI Parameters")
		FString DescriptionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CashUI Parameters")
		TSubclassOf<UCashUIActorWidget> WidgetToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CashUI Parameters")
		UImage* ProfileImage;
	
};
