// Xuwu Games All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "XGF_ModularCharacter.generated.h"

#define UE_API XGF_MODULARACTORS_API

UCLASS(MinimalAPI, Blueprintable)
class AXGF_ModularCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	UE_API virtual void PreInitializeComponents() override;
	UE_API virtual void BeginPlay() override;
	UE_API virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
};

#undef UE_API