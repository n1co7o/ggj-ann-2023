// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

TArray<UObject*> UMyBlueprintFunctionLibrary::SortArrayByName(TArray<UObject*>& ArrayToSort)
{
	ArrayToSort.Sort([&](const UObject& A, const UObject& B) {
		return A.GetFName().ToString() > B.GetFName().ToString();
	});
	return ArrayToSort;
}
