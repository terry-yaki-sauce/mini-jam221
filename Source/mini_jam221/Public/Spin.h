// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Spin.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MINI_JAM221_API USpin : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USpin();

	UFUNCTION(BlueprintCallable, Category = "Abilities")
	void Spin(float DeltaTime);

	UPROPERTY(EditAnywhere)
	float SpinSpeed;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	AActor* Owner;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
};
