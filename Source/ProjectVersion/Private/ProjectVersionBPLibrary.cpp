// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ProjectVersionBPLibrary.h"
#include "ProjectVersion.h"

UProjectVersionBPLibrary::UProjectVersionBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

FString UProjectVersionBPLibrary::GetProjectVersion() {
	FString ProjectVersion;
	GConfig->GetString(
		TEXT("/Script/EngineSettings.GeneralProjectSettings"),
		TEXT("ProjectVersion"),
		ProjectVersion,
		GGameIni
	);
	return ProjectVersion;
}
