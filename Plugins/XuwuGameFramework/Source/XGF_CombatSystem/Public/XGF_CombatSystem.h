#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FXGF_CombatSystemModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
