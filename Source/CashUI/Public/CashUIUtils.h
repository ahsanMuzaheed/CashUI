// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "CashUIUtils.generated.h"

/**
 *
 */
UCLASS()
class CASHUI_API UCashUIUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
		UFUNCTION(BlueprintCallable, Category = "CashUI Utils")
		static FString MakeScrambledStringPercent(const FString inString, const float scrambledPercent);



};
