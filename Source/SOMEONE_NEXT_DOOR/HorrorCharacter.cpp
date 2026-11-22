#include "HorrorCharacter.h"
#include "DrawDebugHelpers.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"

AHorrorCharacter::AHorrorCharacter()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AHorrorCharacter::BeginPlay()
{
    Super::BeginPlay();

    FirstPersonCamera = FindComponentByClass<UCameraComponent>();

    UE_LOG(LogTemp, Warning, TEXT("[DEBUG] FirstPersonCamera = %s"),
        FirstPersonCamera ? TEXT("VALID") : TEXT("NULLPTR"));
}

void AHorrorCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // ---------------- HeadBob ----------------

    const float Speed = GetVelocity().Size2D();

    float TargetWeight = 0.f;
    if (!GetCharacterMovement()->IsFalling())
    {
        const float WalkSpeed = GetCharacterMovement()->MaxWalkSpeed;
        if (WalkSpeed > 0.f)
        {
            TargetWeight = FMath::Clamp(Speed / WalkSpeed, 0.f, 1.f);
        }
    }

    CurrentBobWeight = FMath::FInterpTo(CurrentBobWeight, TargetWeight, DeltaTime, HeadBobEaseSpeed);

    BobPhase += DeltaTime * HeadBobFrequency;

    HeadbobOffset = FMath::Sin(BobPhase) * HeadBobAmplitude * CurrentBobWeight;

    // ---------------- Interaction ----------------

    UpdateInteractionTrace();
}

void AHorrorCharacter::UpdateInteractionTrace()
{
    if (!FirstPersonCamera)
    {
        UE_LOG(LogTemp, Warning, TEXT("[DEBUG] UpdateTrace: camera NULLPTR"));
        return;
    }

    const FVector Start = FirstPersonCamera->GetComponentLocation();
    const FVector End = Start + FirstPersonCamera->GetForwardVector() * InteractionDistance;

    FHitResult Hit;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this);

    const bool bHit = GetWorld()->LineTraceSingleByChannel(
        Hit, Start, End, ECC_Visibility, Params);

    DrawDebugLine(GetWorld(), Start, End,
        bHit ? FColor::Green : FColor::Red,
        false, -1.f, 0, 2.f);

    AActor* HitActor = bHit ? Hit.GetActor() : nullptr;

    // [DEBUG] Selalu log hasil trace mentah
    UE_LOG(LogTemp, Warning, TEXT("[DEBUG] Trace: bHit=%d HitActor=%s Implements=%d"),
        bHit ? 1 : 0,
        HitActor ? *HitActor->GetName() : TEXT("none"),
        (HitActor && HitActor->Implements<UInteractable>()) ? 1 : 0);

    AActor* NewInteractable = nullptr;
    if (HitActor && HitActor->Implements<UInteractable>())
    {
        NewInteractable = HitActor;
    }

    if (NewInteractable != CurrentInteractable)
    {
        CurrentInteractable = NewInteractable;
        OnInteractableChanged.Broadcast(CurrentInteractable);

        UE_LOG(LogTemp, Warning, TEXT("[DEBUG] Target changed to: %s"),
            CurrentInteractable ? *CurrentInteractable->GetName() : TEXT("nullptr"));
    }
}

void AHorrorCharacter::Interact()
{
    UE_LOG(LogTemp, Warning, TEXT("[DEBUG] Interact() called. CurrentInteractable = %s"),
        CurrentInteractable ? *CurrentInteractable->GetName() : TEXT("nullptr"));

    if (!IsValid(CurrentInteractable)) return;
    if (!CurrentInteractable->Implements<UInteractable>()) return;

    IInteractable::Execute_Interact(CurrentInteractable, this);

    UE_LOG(LogTemp, Log, TEXT("Interact with %s"), *CurrentInteractable->GetName());
}