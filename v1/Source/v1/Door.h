// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Door.generated.h"

UENUM()
enum class DOOR_STATE : int8
{
    OPEN,
    CLOSED,
    LOCKED
};

UCLASS()
class V1_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
    
    UPROPERTY(EditAnywhere, Category="State")
    DOOR_STATE CurrentState;
	
};
