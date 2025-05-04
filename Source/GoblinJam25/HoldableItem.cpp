// Fill out your copyright notice in the Description page of Project Settings.


#include "HoldableItem.h"

// Sets default values
AHoldableItem::AHoldableItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = ItemMesh;

	ItemType = EItemType::Broom;
}

// Called when the game starts or when spawned
void AHoldableItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHoldableItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}