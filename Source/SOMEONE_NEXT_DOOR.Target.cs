// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class SOMEONE_NEXT_DOORTarget : TargetRules
{
	public SOMEONE_NEXT_DOORTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "SOMEONE_NEXT_DOOR" } );
	}
}
