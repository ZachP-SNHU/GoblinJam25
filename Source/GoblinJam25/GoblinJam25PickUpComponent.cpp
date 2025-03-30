// Copyright Epic Games, Inc. All Rights Reserved.

#include "GoblinJam25PickUpComponent.h"

UGoblinJam25PickUpComponent::UGoblinJam25PickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UGoblinJam25PickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UGoblinJam25PickUpComponent::OnSphereBeginOverlap);
}

void UGoblinJam25PickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	AGoblinJam25Character* Character = Cast<AGoblinJam25Character>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
