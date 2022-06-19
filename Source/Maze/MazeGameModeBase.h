// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MazeGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MAZE_API AMazeGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	AMazeGameModeBase();

	UPROPERTY(VisibleAnywhere)
		int pickedObjetives;

	UPROPERTY(EditAnywhere)
		int objectivesToPick;

	void Tick(float deltaSecons) override;
};
