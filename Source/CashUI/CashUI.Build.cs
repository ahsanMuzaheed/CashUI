// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class CashUI : ModuleRules
{
    public CashUI(ReadOnlyTargetRules Target) : base(Target)
    {
		
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UMG", "Slate", "SlateCore"  });



	}


}
