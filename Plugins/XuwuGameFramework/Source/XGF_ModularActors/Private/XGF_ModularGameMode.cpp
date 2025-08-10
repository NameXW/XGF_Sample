// Xuwu Games All Rights Reserved.


#include "XGF_ModularGameMode.h"

#include "XGF_ModularGameState.h"
#include "XGF_ModularPawn.h"
#include "XGF_ModularPlayerController.h"
#include "XGF_ModularPlayerState.h"

AXGF_ModularGameModeBase::AXGF_ModularGameModeBase(const FObjectInitializer& ObjectInitializer)
{
	GameStateClass = AXGF_ModularGameStateBase::StaticClass();
	PlayerControllerClass = AXGF_ModularPlayerController::StaticClass();
	PlayerStateClass = AXGF_ModularPlayerState::StaticClass();
	DefaultPawnClass = AXGF_ModularPawn::StaticClass();
}

AXGF_ModularGameMode::AXGF_ModularGameMode(const FObjectInitializer& ObjectInitializer)
{
	GameStateClass = AXGF_ModularGameStateBase::StaticClass();
	PlayerControllerClass = AXGF_ModularPlayerController::StaticClass();
	PlayerStateClass = AXGF_ModularPlayerState::StaticClass();
	DefaultPawnClass = AXGF_ModularPawn::StaticClass();
}
