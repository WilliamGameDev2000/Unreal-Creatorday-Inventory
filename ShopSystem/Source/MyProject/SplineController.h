// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplineController.generated.h"

UCLASS()
class MYPROJECT_API ASplineController : public AActor
{
	GENERATED_BODY()
	
protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SplineController")
		USceneComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SplineController")
		class USplineComponent* Spline;

	UPROPERTY(EditDefaultsOnly, Category = "SplineController")
		TSubclassOf<AActor> MoveActorClass;

	class AActor* MoveActor;

	UPROPERTY(EditAnywhere, Category = "SplineController")
		float TotalPathTimeController;

	//UPROPERTY(EditAnywhere, Category = "SplineController")
	//	bool bSplineInLoop;

	float StartTime;

	bool bCanMoveActor;

public:	
	// Sets default values for this actor's properties
	ASplineController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



private:
	UFUNCTION(BlueprintCallable, Category = "SplineController")
		void OpenDoor();

	UFUNCTION(BlueprintCallable, Category = "SplineController")
		void CloseDoor();

	bool opening;

	bool closing;

	bool opened = false;

	bool closed = true;
};
