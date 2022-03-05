// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractionInterface.h"
#include "Door.generated.h"

UCLASS()
class MYPROJECTCPP_API ADoor : public AActor, public IInteractionInterface
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
	virtual void InteractReceive() override;

private:
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* DoorBody;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* DoorFrame;
};
