// Copyright (C) 2018-2019 - Directive Games Limited - All Rights Reserved

#include "TestProjectGameModeBase.h"
#include "HAL/IConsoleManager.h"

static void CrashCommandHandler0(const TArray<FString>& Args, UWorld* World)
{
	check(0);
}

static void CrashCommandHandler1(const TArray<FString>& Args, UWorld* World)
{
	int* ptr = nullptr;
	*ptr = 100;
}

static void CrashCommandHandler2(const TArray<FString>& Args, UWorld* World)
{
	UE_LOG(LogTemp, Fatal, TEXT("I want to crash!"));
}

static FAutoConsoleCommandWithWorldAndArgs CrashCommand0(
	TEXT("Crash0"),
	TEXT(""),
	FConsoleCommandWithWorldAndArgsDelegate::CreateStatic(&CrashCommandHandler0)
);

static FAutoConsoleCommandWithWorldAndArgs CrashCommand1(
	TEXT("Crash1"),
	TEXT(""),
	FConsoleCommandWithWorldAndArgsDelegate::CreateStatic(&CrashCommandHandler1)
);

static FAutoConsoleCommandWithWorldAndArgs CrashCommand2(
	TEXT("Crash2"),
	TEXT(""),
	FConsoleCommandWithWorldAndArgsDelegate::CreateStatic(&CrashCommandHandler2)
);
