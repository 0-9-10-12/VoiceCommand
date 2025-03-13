﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "LamBall.h"
#include "Components/CapsuleComponent.h"


// Sets default values
ALamBall::ALamBall()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Monster"));
	
	m_AreaObjectID = 103;
}

// Called when the game starts or when spawned
void ALamBall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALamBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ALamBall::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

