// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "Image.h"
#include "CashUIActorWidget.generated.h"

/**
 *
 */
UCLASS()
class CASHUIPLUGIN_API UCashUIActorWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CashUI Parameters")
	FString LabelText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CashUI Parameters")
	FString DescriptionText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CashUI Parameters")
	UImage* ProfileImage;


};
