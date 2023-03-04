// Fill out your copyright notice in the Description page of Project Settings.


#include "PushWall.h"
#include "EndBlock.h"
#include "Components/BoxComponent.h"


// Sets default values
APushWall::APushWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void APushWall::BeginPlay()
{
	Super::BeginPlay();

	forward = GetRootComponent()->GetForwardVector();

	this->GetRootComponent()->ComponentVelocity = forward * speed;

}

// Called every frame
void APushWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (can_move)
	{
		SetActorLocation(GetActorLocation() + GetRootComponent()->ComponentVelocity);
	}
}

void APushWall::ActivateWall()
{
	can_move = true;
}

void APushWall::OnOverlapBegin(UPrimitiveComponent* overlapped, AActor* actor, UPrimitiveComponent* other_comp, int32 other_index, bool sweep_result, const FHitResult& hit)
{

	if (actor != nullptr)
	{

		AEndBlock* end = Cast<AEndBlock>(actor);

		//AMyProjectCharacter* player = Cast<AMyProjectCharacter>(actor);

		//if (player)
		//{
		//	//player->
		//	player->SetCanBeDamaged(false);

		//	//take health away
		//}

		if (end)
		{
			//Player->SetCanBeDamaged(false);

			//take 2 health away
		}
	}
}

UBoxComponent* APushWall::GetTrigger()
{
	return trigger;
}

//AMyPlayerCharacter* APushWall::GetPlayer()
//{
//	return Player;
//}


