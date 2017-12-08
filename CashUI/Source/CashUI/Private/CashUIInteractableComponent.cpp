// Fill out your copyright notice in the Description page of Project Settings.

#include "CashUI.h"
#include "CashUIInteractableComponent.h"


// Sets default values for this component's properties
UCashUIInteractableComponent::UCashUIInteractableComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UCashUIInteractableComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

}


// Called every frame
void UCashUIInteractableComponent::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

