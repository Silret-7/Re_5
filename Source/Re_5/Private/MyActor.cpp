

#include "MyActor.h"


AMyActor::AMyActor()
{
 		PrimaryActorTick.bCanEverTick = true;

}



int32_t AMyActor::Step()
{
	int MinValue = 0;
	int MaxValue = 1;

	for(int i=0; i<10; ++i)
	{
		x = x + FMath::RandRange(MinValue, MaxValue);
		y = y + FMath::RandRange(MinValue, MaxValue);
	}

	return 0;

}

void AMyActor::Move()
{
	Step();

	FString xStr = FString::FromInt(x);


	FString yStr = FString::FromInt(y);


}


void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	Step();
	Move();
	
	UE_LOG(LogTemp, Warning, TEXT("Location : (%d, %d) "), x, y);



}


void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
