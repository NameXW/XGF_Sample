// Xuwu Games All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "XGF_ModularAIController.generated.h"

#define UE_API XGF_MODULARACTORS_API

UCLASS(MinimalAPI, Blueprintable)
class  AXGF_ModularAIController : public AAIController
{
	GENERATED_BODY()

public:
	UE_API virtual void PreInitializeComponents() override;
	UE_API virtual void BeginPlay() override;
	UE_API virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
};

#undef UE_API