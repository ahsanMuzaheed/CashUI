// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class CashUIPlugin : ModuleRules
{
	public CashUIPlugin(TargetInfo Target)
	{
        
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UMG", "Slate", "SlateCore"  });



    }


}
