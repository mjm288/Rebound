// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class LEARNING_API UMyBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString OutputForHUD;
	//UFUNCTION(VisibleAnywhere, EditAnywhere, BlueprintReadWrite, BlueprintCallable, Category = "Utilities")
	UFUNCTION(BlueprintCallable, Category = "Utilities")
		FString getCountForHUD();
};
