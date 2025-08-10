// Xuwu Games All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "XGF_ModularGameState.generated.h"


#define UE_API XGF_MODULARACTORS_API

UCLASS(MinimalAPI, Blueprintable)
class  AXGF_ModularGameStateBase : public AGameStateBase
{
	GENERATED_BODY()

public:
	UE_API virtual void PreInitializeComponents() override;
	UE_API virtual void BeginPlay() override;
	UE_API virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
};


UCLASS(MinimalAPI, Blueprintable)
class  AXGF_ModularGameState : public AGameState
{
	GENERATED_BODY()

public:
	UE_API virtual void PreInitializeComponents() override;
	UE_API virtual void BeginPlay() override;
	UE_API virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

protected:
	UE_API virtual void HandleMatchHasStarted() override;
};

#undef UE_API