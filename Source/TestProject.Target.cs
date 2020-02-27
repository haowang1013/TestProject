// Copyright (C) 2018-2019 - Directive Games Limited - All Rights Reserved

using UnrealBuildTool;
using System.Collections.Generic;

public class TestProjectTarget : TargetRules
{
	public TestProjectTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "TestProject" } );
	}
}
