// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"

UCLASS()
class LEARNING_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullet();

	UPROPERTY(EditAnywhere, Category = "Components");
	class UStaticMeshComponent* BulletMesh;
	
	UPROPERTY(EditAnywhere, Category = "Components");
	class UProjectileMovementComponent* BulletMovement;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	/*
	UPROPERTY(VisibleAnywhere)
		class UBoxComponent* MyComp;
	
	UFUNCTION()
		void OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit); */

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		int Count;


};
