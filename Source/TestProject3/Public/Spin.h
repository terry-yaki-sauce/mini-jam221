// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Spin.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TESTPROJECT3_API USpin : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USpin();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "SPIIIIN")
	void Spin(float DeltaTime);

	UPROPERTY(EditAnywhere)
	float SpinSpeed;

	AActor* Owner;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
