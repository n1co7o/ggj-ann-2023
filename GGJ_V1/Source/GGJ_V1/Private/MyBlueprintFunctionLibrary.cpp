// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

TArray<UDataAsset*> UMyBlueprintFunctionLibrary::SortArrayByName(TArray<UDataAsset*>& ArrayToSort)
{
	ArrayToSort.Sort([&](const UDataAsset& A, const UDataAsset& B) {
		return A.GetFName().ToString() > B.GetFName().ToString();
	});
	return ArrayToSort;
}
