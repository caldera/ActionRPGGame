#pragma once
#include "GAGlobalTypes.h"
#include "GAAttributeBase.h"
#include "GAGameEffect.h"
#include "GAEffectGlobalTypes.h"
#include "GAEffectExecution.generated.h"

/*

*/
UCLASS(BlueprintType, Blueprintable, EditInLineNew)
class GAMEATTRIBUTES_API UGAEffectExecution : public UObject
{
	GENERATED_BODY()
public:
	UGAEffectExecution(const FObjectInitializer& ObjectInitializer);

	virtual void ExecuteEffect(FGAGameEffectHandle& HandleIn, FGAEffectMod& ModIn, FGAExecutionContext& Context);
};
