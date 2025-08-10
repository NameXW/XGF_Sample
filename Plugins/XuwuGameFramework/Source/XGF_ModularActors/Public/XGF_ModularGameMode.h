// Xuwu Games All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "GameFramework/GameModeBase.h"
#include "XGF_ModularGameMode.generated.h"

#define UE_API XGF_MODULARACTORS_API

UCLASS(MinimalAPI, Blueprintable)
class  AXGF_ModularGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	UE_API AXGF_ModularGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};

UCLASS(MinimalAPI, Blueprintable)
class AXGF_ModularGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	UE_API AXGF_ModularGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};

#undef UE_API