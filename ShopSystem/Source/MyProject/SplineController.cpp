// Fill out your copyright notice in the Description page of Project Settings.


#include "SplineController.h"
#include "Components/SplineComponent.h"

// Sets default values
ASplineController::ASplineController()
{
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	Spline->SetupAttachment(Root);
	Spline->Duration = TotalPathTimeController;
	Spline->bDrawDebug = true;

	TotalPathTimeController = 10.0f;
	bCanMoveActor = false;
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASplineController::BeginPlay()
{
	Super::BeginPlay();

	if (MoveActorClass != nullptr)
	{
		MoveActor = GetWorld()->SpawnActor<AActor>(MoveActorClass, Spline->GetComponentTransform());
		if (MoveActor != nullptr)
		{
			StartTime = GetWorld()->GetTimeSeconds();
			bCanMoveActor = true;
		}
	}

}

// Called every frame
void ASplineController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bCanMoveActor && MoveActor != nullptr)
	{
		if (opening)
		{
			float CurrentSplineTime = (GetWorld()->GetTimeSeconds() - StartTime) / TotalPathTimeController;

			float Distance = Spline->GetSplineLength() * CurrentSplineTime;

			FVector Pos = Spline->GetLocationAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::World);

			MoveActor->SetActorLocation(Pos);

			if (Distance >= Spline->GetSplineLength())
			{
				opened = true;
				opening = false;
			}
		}

		if (closing)
		{
			float CurrentSplineTime = (GetWorld()->GetTimeSeconds() - StartTime) / TotalPathTimeController;

			float Distance = Spline->GetSplineLength() * -CurrentSplineTime;

			FVector Pos = Spline->GetLocationAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::World);

			MoveActor->SetActorLocation(Pos);

			if (Distance <= 0)
			{
				closed = true;
				closing = false;
			}
		}
	}
}

void ASplineController::OpenDoor()
{
	if (!opened)
	{
		opening = true;
		StartTime = GetWorld()->GetTimeSeconds();
		closed = false;
	}

}

void ASplineController::CloseDoor()
{
	if (!closed)
	{
		closing = true;
		StartTime = GetWorld()->GetTimeSeconds();
		opened = false;
	}
}

