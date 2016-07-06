// Fill out your copyright notice in the Description page of Project Settings.

#include "CashUIPlugin.h"
#include "CashUIUtils.h"




FString UCashUIUtils::MakeScrambledStringPercent(const FString inString, const float scrambledPercent)
{
	FString result;

	for (int16 i = 0; i < inString.Len(); ++i)
	{
		if (i < FMath::CeilToInt((inString.Len() / 100.0f) * scrambledPercent))
		{
			result.AppendChar(inString[i]);
		}
		else
		{
			result.AppendChar(char(FMath::RandRange(58, 126)));
		}
	}

	return result;
}

