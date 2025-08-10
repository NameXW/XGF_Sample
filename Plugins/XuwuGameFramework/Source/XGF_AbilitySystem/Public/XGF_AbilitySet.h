// Xuwu Games All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "XGF_AbilitySet.generated.h"


class UGameplayEffect;
class UAttributeSet;
class UAbilitySystemComponent;
class UGameplayAbility;


USTRUCT(BlueprintType)
struct FXGF_AbilitySet_GameplayAbility
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameplayAbility> Ability = nullptr;

	UPROPERTY(EditDefaultsOnly)
	int32 AbilityLevel = 1;
};

USTRUCT(BlueprintType)
struct FXGF_AbilitySet_GameplayEffect
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameplayEffect> GameplayEffect = nullptr;

	UPROPERTY(EditDefaultsOnly)
	float EffectLevel = 1.0f;
};


USTRUCT(BlueprintType)
struct FXGF_AbilitySet_AttributeSet
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAttributeSet> AttributeSet;

};

USTRUCT(BlueprintType)
struct FXGF_AbilitySet_GrantedHandles
{
	GENERATED_BODY()

public:

	// void AddAbilitySpecHandle(const FGameplayAbilitySpecHandle& Handle);
	// void AddGameplayEffectHandle(const FActiveGameplayEffectHandle& Handle);
	// void AddAttributeSet(UAttributeSet* Set);
	//
	// void TakeFromAbilitySystem(UAbilitySystemComponent* LyraASC);

protected:

	UPROPERTY()
	TArray<FGameplayAbilitySpecHandle> AbilitySpecHandles;
	
	UPROPERTY()
	TArray<FActiveGameplayEffectHandle> GameplayEffectHandles;
	
	UPROPERTY()
	TArray<UAttributeSet*> GrantedAttributeSets;
};


/**
 *	UXGF_AbilitySet
 *	
 *	Non-mutable data asset used to grant gameplay abilities, gameplay effects, and attribute sets
 */
UCLASS()
class XGF_ABILITYSYSTEM_API UXGF_AbilitySet : public UPrimaryDataAsset
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Abilities", meta=(TitleProperty=Ability))
	TArray<FXGF_AbilitySet_GameplayAbility> GrantedGameplayAbilities;

	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Effects", meta=(TitleProperty=GameplayEffect))
	TArray<FXGF_AbilitySet_GameplayEffect> GrantedGameplayEffects;

	UPROPERTY(EditDefaultsOnly, Category = "Attribute Sets", meta=(TitleProperty=AttributeSet))
	TArray<FXGF_AbilitySet_AttributeSet> GrantedAttributes;
};
