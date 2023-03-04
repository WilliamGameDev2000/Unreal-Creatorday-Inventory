// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PushWall.generated.h"

class UBoxComponent;

UCLASS()
class MYPROJECT_API APushWall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APushWall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float speed = 5.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void ActivateWall();

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* overlapped, AActor* actor,
			UPrimitiveComponent* other_comp, int32 other_index, bool sweep_result, const FHitResult& hit);


private:
	FVector forward;

	bool can_move = false;

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Triggers")
		UBoxComponent* trigger;
	
	/*UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Triggers")
		AMyProjectCharacter* Player;*/

public:
	UBoxComponent* GetTrigger();

	/*AMyPlayerCharacter* GetPlayer();*/
};
