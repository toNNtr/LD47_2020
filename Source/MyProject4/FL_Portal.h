// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/TextureRenderTarget2D.h"
#include "FL_Portal.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT4_API UFL_Portal : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "Portals", meta = (WorldContext = "WorldContextObject"))
		static UTextureRenderTarget2D* CreateRenderTarget(UObject* WorldContextObject, int Width = 0, int Height = 0, ETextureRenderTargetFormat Format = ETextureRenderTargetFormat::RTF_R16f, FLinearColor ClearColor = FLinearColor::Black, bool bAutoGenerateMipMaps = false);
};
