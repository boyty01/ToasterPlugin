// Copyright - DMTesseracT

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ToasterSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class TOASTERPLUGIN_API UToasterSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
	

public:


	//Register a widget as the toast notification widget
	UFUNCTION(BlueprintCallable, Category ="Toaster")
	void RegisterToastNotificationWidget(UUserWidget* WidgetToRegister) 
	{ 
		ToastNotificationWidget = WidgetToRegister; 
		return; 
	};


	// Get existing toast notification widget, if it exists.
	UFUNCTION(BlueprintCallable, Category ="Toaster")
	bool GetToastNotificationWidget(UUserWidget*& OutToaster)
	{
		OutToaster = ToastNotificationWidget;
		return OutToaster ? true : false;
	}


private:

	TObjectPtr<UUserWidget> ToastNotificationWidget;

};
