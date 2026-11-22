#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interactable.h"
#include "HorrorCharacter.generated.h"

class UCameraComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractableChanged, AActor*, NewInteractable);

UCLASS()
class SOMEONE_NEXT_DOOR_API AHorrorCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    AHorrorCharacter();

    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    // ---------------- HeadBob ----------------

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HeadBob")
        float HeadBobAmplitude = 1.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HeadBob")
        float HeadBobFrequency = 8.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HeadBob")
        float HeadBobEaseSpeed = 6.f;

    UPROPERTY(BlueprintReadOnly, Category = "HeadBob")
        float HeadbobOffset = 0.f;

    // ---------------- Interaction ----------------

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
        float InteractionDistance = 150.f;

    UPROPERTY(BlueprintReadOnly, Category = "Interaction")
        AActor* CurrentInteractable = nullptr;

    UPROPERTY(BlueprintAssignable, Category = "Interaction")
        FOnInteractableChanged OnInteractableChanged;

    UFUNCTION(BlueprintCallable, Category = "Interaction")
        void Interact();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
        UCameraComponent* FirstPersonCamera = nullptr;

    void UpdateInteractionTrace();

private:
    float BobPhase = 0.f;
    float CurrentBobWeight = 0.f;
};