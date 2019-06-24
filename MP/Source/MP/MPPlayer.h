// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MP.h"
#include "GameFramework/Character.h"
#include "MPPlayer.generated.h"

UCLASS()
class MP_API AMPPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMPPlayer();

	void MoveForward(float Value);
	void MoveRight(float Value);

	void SetCrouchMovement();
	void SetProneMovement();

	UPROPERTY()
	FTimerHandle timer;

	UPROPERTY(EditDefaultsOnly, Category = Bullet)
	TSubclassOf<class ABullet> BulletClass;	

	UPROPERTY(replicated,VisibleAnywhere, BlueprintReadWrite, Category = PlayerState)
	bool IsSprint;

	UPROPERTY(replicated,VisibleAnywhere, BlueprintReadWrite, Category = PlayerState)
	bool IsCrouch;

	UPROPERTY(replicated,VisibleAnywhere, BlueprintReadWrite, Category = PlayerState)
	bool IsProne;

	UPROPERTY(replicated,VisibleAnywhere, BlueprintReadWrite, Category = PlayerState)
	bool IsAiming;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// �������� ������Ʈ
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	class USpringArmComponent* TPSpringArm;

	// ī�޶� ������Ʈ
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	class UCameraComponent* FollowCamera;

	// ���� �޽� ������Ʈ
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = StaticMesh)
	class UStaticMeshComponent* WeaponMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character Movement: Walking")
	float SprintSpeedMultiplier;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:

	//////////     Sprint   //////////////////////

	UFUNCTION(Reliable, Server, WithValidation)
	void StartSprintServer();
	void StartSprintServer_Implementation();
	bool StartSprintServer_Validate();

	UFUNCTION(Reliable, NetMulticast)
	void StartSprintMulticast();
	void StartSprintMulticast_Implementation();

	UFUNCTION(Reliable, Server, WithValidation)
	void StopSprintServer();
	void StopSprintServer_Implementation();
	bool StopSprintServer_Validate();

	UFUNCTION(Reliable, NetMulticast)
	void StopSprintMulticast();
	void StopSprintMulticast_Implementation();

	//////////  Crouch ////////////////////

	UFUNCTION(Reliable, Server, WithValidation)
	void CrouchServer();
	void CrouchServer_Implementation();
	bool CrouchServer_Validate();

	UFUNCTION(Reliable, NetMulticast)
	void CrouchMulticast();
	void CrouchMulticast_Implementation();

	/////// Prone //////////////////////

	UFUNCTION(Reliable, Server, WithValidation)
	void ProneServer();
	void ProneServer_Implementation();
	bool ProneServer_Validate();

	UFUNCTION(Reliable, NetMulticast)
	void ProneMulticast();
	void ProneMulticast_Implementation();

	/////// Aiming //////////////////////

	UFUNCTION(Reliable, Server, WithValidation)
	void AimingServer();
	void AimingServer_Implementation();
	bool AimingServer_Validate();

	UFUNCTION(Reliable, NetMulticast)
	void AimingMulticast();
	void AimingMulticast_Implementation();

	/////// Fire //////////////////////

	UFUNCTION(Reliable, Server, WithValidation)
	void FireServer();
	void FireServer_Implementation();
	bool FireServer_Validate();

	UFUNCTION(Reliable, NetMulticast)
	void FireMulticast();
	void FireMulticast_Implementation();

	
};
