// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class APlayerController;
class UCancelFindSessionsCallbackProxy;
#ifdef ADVANCEDSESSIONS_CancelFindSessionsCallbackProxy_generated_h
#error "CancelFindSessionsCallbackProxy.generated.h already included, missing '#pragma once' in CancelFindSessionsCallbackProxy.h"
#endif
#define ADVANCEDSESSIONS_CancelFindSessionsCallbackProxy_generated_h

#define MP_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCancelFindSessions) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCancelFindSessionsCallbackProxy**)Z_Param__Result=UCancelFindSessionsCallbackProxy::CancelFindSessions(Z_Param_WorldContextObject,Z_Param_PlayerController); \
		P_NATIVE_END; \
	}


#define MP_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCancelFindSessions) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UCancelFindSessionsCallbackProxy**)Z_Param__Result=UCancelFindSessionsCallbackProxy::CancelFindSessions(Z_Param_WorldContextObject,Z_Param_PlayerController); \
		P_NATIVE_END; \
	}


#define MP_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCancelFindSessionsCallbackProxy(); \
	friend struct Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UCancelFindSessionsCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(UCancelFindSessionsCallbackProxy)


#define MP_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCancelFindSessionsCallbackProxy(); \
	friend struct Z_Construct_UClass_UCancelFindSessionsCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UCancelFindSessionsCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSessions"), ADVANCEDSESSIONS_API) \
	DECLARE_SERIALIZER(UCancelFindSessionsCallbackProxy)


#define MP_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UCancelFindSessionsCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCancelFindSessionsCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UCancelFindSessionsCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCancelFindSessionsCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UCancelFindSessionsCallbackProxy(UCancelFindSessionsCallbackProxy&&); \
	ADVANCEDSESSIONS_API UCancelFindSessionsCallbackProxy(const UCancelFindSessionsCallbackProxy&); \
public:


#define MP_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSESSIONS_API UCancelFindSessionsCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSESSIONS_API UCancelFindSessionsCallbackProxy(UCancelFindSessionsCallbackProxy&&); \
	ADVANCEDSESSIONS_API UCancelFindSessionsCallbackProxy(const UCancelFindSessionsCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSESSIONS_API, UCancelFindSessionsCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCancelFindSessionsCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCancelFindSessionsCallbackProxy)


#define MP_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_PRIVATE_PROPERTY_OFFSET
#define MP_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_8_PROLOG
#define MP_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MP_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_PRIVATE_PROPERTY_OFFSET \
	MP_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_RPC_WRAPPERS \
	MP_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_INCLASS \
	MP_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MP_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MP_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_PRIVATE_PROPERTY_OFFSET \
	MP_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	MP_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_INCLASS_NO_PURE_DECLS \
	MP_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h_11_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CancelFindSessionsCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSESSIONS_API UClass* StaticClass<class UCancelFindSessionsCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MP_Plugins_AdvancedSessions_AdvancedSessions_Source_AdvancedSessions_Classes_CancelFindSessionsCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
