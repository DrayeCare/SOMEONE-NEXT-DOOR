// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class SOMEONE_NEXT_DOOREditorTarget : TargetRules
{
	public SOMEONE_NEXT_DOOREditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "SOMEONE_NEXT_DOOR" } );
	}
}
