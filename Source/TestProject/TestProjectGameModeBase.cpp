// Copyright (C) 2018-2019 - Directive Games Limited - All Rights Reserved

#include "TestProjectGameModeBase.h"
#include "HAL/IConsoleManager.h"

PRAGMA_DISABLE_OPTIMIZATION

static void CrashCommandHandler(const TArray<FString>& Args, UWorld* World)
{
	if (!Args.Num())
	{
		check(0);
	}
	
	const auto Arg = Args[0];
	if (Arg == TEXT("0"))
	{
		check(0);
	}
	else if (Arg == TEXT("1"))
	{
		int* ptr = nullptr;
		*ptr = 100;
	}
	else if (Arg == TEXT("2"))
	{
		UE_LOG(LogTemp, Fatal, TEXT("I want to crash!"));
	}
}

static FAutoConsoleCommandWithWorldAndArgs CrashCommand(
	TEXT("Crash"),
	TEXT("Command for testing various test scenarios."),
	FConsoleCommandWithWorldAndArgsDelegate::CreateStatic(&CrashCommandHandler)
);

PRAGMA_ENABLE_OPTIMIZATION
