// Fill out your copyright notice in the Description page of Project Settings.


#include "FL_Portal.h"

UTextureRenderTarget2D* UFL_Portal::CreateRenderTarget(UObject* WorldContextObject, int Width, int Height, ETextureRenderTargetFormat Format, FLinearColor ClearColor, bool bAutoGenerateMipMaps)
{

	UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::Assert);
	//UWorld* World = GEngine->GetWorld();

	if (Width > 0 && Height > 0 && World)
	{
		UTextureRenderTarget2D* NewRenderTarget2D = NewObject<UTextureRenderTarget2D>(WorldContextObject);
		check(NewRenderTarget2D);
		NewRenderTarget2D->RenderTargetFormat = Format;
		NewRenderTarget2D->ClearColor = ClearColor;
		NewRenderTarget2D->bAutoGenerateMips = bAutoGenerateMipMaps;
		NewRenderTarget2D->InitAutoFormat(Width, Height);
		NewRenderTarget2D->UpdateResourceImmediate(true);

		return NewRenderTarget2D;
	}

	return nullptr;
}