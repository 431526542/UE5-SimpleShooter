// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShooterAIController.generated.h"

/**
 * 
 */

class UBehaviorTree;

UCLASS()
class SIMPLESHOOTER_API AShooterAIController : public AAIController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere)
	UBehaviorTree* AIBehavior;

public:
	bool IsDead() const;


};
