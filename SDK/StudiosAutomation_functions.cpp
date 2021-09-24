﻿// Name: SoT, Version: 2.3.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FTestLevelMetadataEntry::AfterRead()
{
}

void FTestLevelMetadataEntry::BeforeDelete()
{
}

void FClientPawnDetails::AfterRead()
{
}

void FClientPawnDetails::BeforeDelete()
{
}

void FSubstringAuditQueryData::AfterRead()
{
}

void FSubstringAuditQueryData::BeforeDelete()
{
}

void FFolderTotals::AfterRead()
{
}

void FFolderTotals::BeforeDelete()
{
}

void FMeshAuditLimits::AfterRead()
{
}

void FMeshAuditLimits::BeforeDelete()
{
}

void FAssetAuditConstantEntry::AfterRead()
{
}

void FAssetAuditConstantEntry::BeforeDelete()
{
}

void FAssetAuditConstants::AfterRead()
{
}

void FAssetAuditConstants::BeforeDelete()
{
}

void FCollectionTotalsLimits::AfterRead()
{
}

void FCollectionTotalsLimits::BeforeDelete()
{
}

void FCollectionMeshLimitsBase::AfterRead()
{
}

void FCollectionMeshLimitsBase::BeforeDelete()
{
}

void FCollectionStaticMeshLimits::AfterRead()
{
	FCollectionMeshLimitsBase::AfterRead();

}

void FCollectionStaticMeshLimits::BeforeDelete()
{
	FCollectionMeshLimitsBase::BeforeDelete();

}

void FCollectionSkeleMeshLimits::AfterRead()
{
	FCollectionMeshLimitsBase::AfterRead();

}

void FCollectionSkeleMeshLimits::BeforeDelete()
{
	FCollectionMeshLimitsBase::BeforeDelete();

}

void FCollectionAnimSequenceLimits::AfterRead()
{
}

void FCollectionAnimSequenceLimits::BeforeDelete()
{
}

void FCollectionLimits::AfterRead()
{
}

void FCollectionLimits::BeforeDelete()
{
}

void FCollectionLimitsArray::AfterRead()
{
}

void FCollectionLimitsArray::BeforeDelete()
{
}

// Function:
//		Offset -> 0x01A0F470
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.YieldToServer
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
void ATestLevelScriptActor::STATIC_YieldToServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.YieldToServer");

	ATestLevelScriptActor_YieldToServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0F380
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.YieldToOriginalServer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
void ATestLevelScriptActor::YieldToOriginalServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.YieldToOriginalServer");

	ATestLevelScriptActor_YieldToOriginalServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0F250
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.YieldToDynamicServer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
//		int                                                ServerIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATestLevelScriptActor::YieldToDynamicServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int ServerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.YieldToDynamicServer");

	ATestLevelScriptActor_YieldToDynamicServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.ServerIndex = ServerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0F130
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.YieldToClient
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
//		int                                                ClientId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATestLevelScriptActor::STATIC_YieldToClient(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int ClientId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.YieldToClient");

	ATestLevelScriptActor_YieldToClient_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.ClientId = ClientId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0F050
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.WaitForPossessionAcknowledgement
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
void ATestLevelScriptActor::STATIC_WaitForPossessionAcknowledgement(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.WaitForPossessionAcknowledgement");

	ATestLevelScriptActor_WaitForPossessionAcknowledgement_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0EF20
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.WaitForOtherServers
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
//		int                                                NumberOfServers                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATestLevelScriptActor::WaitForOtherServers(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumberOfServers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.WaitForOtherServers");

	ATestLevelScriptActor_WaitForOtherServers_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumberOfServers = NumberOfServers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0EE00
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.WaitForClients
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
//		int                                                NumberOfClients                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATestLevelScriptActor::STATIC_WaitForClients(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumberOfClients)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.WaitForClients");

	ATestLevelScriptActor_WaitForClients_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumberOfClients = NumberOfClients;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0ED00
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.TestTriggerServerMigration
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class AActor*>                              ActorGroup                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		int                                                TargetServerIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATestLevelScriptActor::TestTriggerServerMigration(TArray<class AActor*> ActorGroup, int TargetServerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.TestTriggerServerMigration");

	ATestLevelScriptActor_TestTriggerServerMigration_Params params;
	params.ActorGroup = ActorGroup;
	params.TargetServerIndex = TargetServerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0EB30
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.TestCloseConnection
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ConnectionIdx                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ATestLevelScriptActor::TestCloseConnection(int ConnectionIdx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.TestCloseConnection");

	ATestLevelScriptActor_TestCloseConnection_Params params;
	params.ConnectionIdx = ConnectionIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01A0E690
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.SyncClientServer
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
//		int                                                NumClients                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               RegisterPawnsForMPTesting                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
//		bool                                               ClearPawnInputBindings                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
void ATestLevelScriptActor::STATIC_SyncClientServer(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumClients, bool RegisterPawnsForMPTesting, bool ClearPawnInputBindings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.SyncClientServer");

	ATestLevelScriptActor_SyncClientServer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumClients = NumClients;
	params.RegisterPawnsForMPTesting = RegisterPawnsForMPTesting;
	params.ClearPawnInputBindings = ClearPawnInputBindings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0E470
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.SpawnActorForMPTesting
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		struct FVector                                     SpawnLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FRotator                                    SpawnRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* ATestLevelScriptActor::STATIC_SpawnActorForMPTesting(class UObject* WorldContextObject, class UClass* ActorClass, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.SpawnActorForMPTesting");

	ATestLevelScriptActor_SpawnActorForMPTesting_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01A0E370
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.SendServerMigrationTestValueInt32
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TestValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATestLevelScriptActor::SendServerMigrationTestValueInt32(int TestValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.SendServerMigrationTestValueInt32");

	ATestLevelScriptActor_SendServerMigrationTestValueInt32_Params params;
	params.TestValue = TestValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0E300
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.RegisterPawnsForMPTesting
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATestLevelScriptActor::STATIC_RegisterPawnsForMPTesting(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.RegisterPawnsForMPTesting");

	ATestLevelScriptActor_RegisterPawnsForMPTesting_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0E280
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTestingRecursively
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATestLevelScriptActor::RegisterActorForMPTestingRecursively(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTestingRecursively");

	ATestLevelScriptActor_RegisterActorForMPTestingRecursively_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0E200
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTesting
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATestLevelScriptActor::RegisterActorForMPTesting(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTesting");

	ATestLevelScriptActor_RegisterActorForMPTesting_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.PostTestCleanup
//		Flags  -> (Event, Public, BlueprintEvent)
void ATestLevelScriptActor::PostTestCleanup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.PostTestCleanup");

	ATestLevelScriptActor_PostTestCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.OnServerMigrationTestValueInt32Received
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                TestValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATestLevelScriptActor::OnServerMigrationTestValueInt32Received(int TestValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnServerMigrationTestValueInt32Received");

	ATestLevelScriptActor_OnServerMigrationTestValueInt32Received_Params params;
	params.TestValue = TestValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationStarted
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FGuid                                       MigrationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<class APlayerController*>                   Players                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ATestLevelScriptActor::OnOutgoingServerMigrationStarted(const struct FGuid& MigrationId, TArray<class APlayerController*> Players)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationStarted");

	ATestLevelScriptActor_OnOutgoingServerMigrationStarted_Params params;
	params.MigrationId = MigrationId;
	params.Players = Players;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationCompleted
//		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FGuid                                       MigrationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATestLevelScriptActor::OnOutgoingServerMigrationCompleted(const struct FGuid& MigrationId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationCompleted");

	ATestLevelScriptActor_OnOutgoingServerMigrationCompleted_Params params;
	params.MigrationId = MigrationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationAborted
//		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FGuid                                       MigrationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATestLevelScriptActor::OnOutgoingServerMigrationAborted(const struct FGuid& MigrationId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationAborted");

	ATestLevelScriptActor_OnOutgoingServerMigrationAborted_Params params;
	params.MigrationId = MigrationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationStarted
//		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FGuid                                       MigrationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                NumPlayers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATestLevelScriptActor::OnIncomingServerMigrationStarted(const struct FGuid& MigrationId, int NumPlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationStarted");

	ATestLevelScriptActor_OnIncomingServerMigrationStarted_Params params;
	params.MigrationId = MigrationId;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationCompleted
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FGuid                                       MigrationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<class APlayerController*>                   Players                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<class AActor*>                              Actors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ATestLevelScriptActor::OnIncomingServerMigrationCompleted(const struct FGuid& MigrationId, TArray<class APlayerController*> Players, TArray<class AActor*> Actors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationCompleted");

	ATestLevelScriptActor_OnIncomingServerMigrationCompleted_Params params;
	params.MigrationId = MigrationId;
	params.Players = Players;
	params.Actors = Actors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationAborted
//		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FGuid                                       MigrationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATestLevelScriptActor::OnIncomingServerMigrationAborted(const struct FGuid& MigrationId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationAborted");

	ATestLevelScriptActor_OnIncomingServerMigrationAborted_Params params;
	params.MigrationId = MigrationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationStarted
//		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FGuid                                       MigrationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATestLevelScriptActor::OnClientServerMigrationStarted(const struct FGuid& MigrationId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationStarted");

	ATestLevelScriptActor_OnClientServerMigrationStarted_Params params;
	params.MigrationId = MigrationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationCompleted
//		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FGuid                                       MigrationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATestLevelScriptActor::OnClientServerMigrationCompleted(const struct FGuid& MigrationId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationCompleted");

	ATestLevelScriptActor_OnClientServerMigrationCompleted_Params params;
	params.MigrationId = MigrationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationAborted
//		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FGuid                                       MigrationId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATestLevelScriptActor::OnClientServerMigrationAborted(const struct FGuid& MigrationId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationAborted");

	ATestLevelScriptActor_OnClientServerMigrationAborted_Params params;
	params.MigrationId = MigrationId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0DD60
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.GetServerIndex
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ATestLevelScriptActor::GetServerIndex(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetServerIndex");

	ATestLevelScriptActor_GetServerIndex_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01A0DC70
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.GetRemoteServerMigrationURL
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TargetServerIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString ATestLevelScriptActor::GetRemoteServerMigrationURL(int TargetServerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetRemoteServerMigrationURL");

	ATestLevelScriptActor_GetRemoteServerMigrationURL_Params params;
	params.TargetServerIndex = TargetServerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01A0DBE0
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.GetPlayerIndexFromClientId
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ClientId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ATestLevelScriptActor::GetPlayerIndexFromClientId(int ClientId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetPlayerIndexFromClientId");

	ATestLevelScriptActor_GetPlayerIndexFromClientId_Params params;
	params.ClientId = ClientId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01A0DB30
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.GetNumClientsForMultiplayerTest
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ATestLevelScriptActor::GetNumClientsForMultiplayerTest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetNumClientsForMultiplayerTest");

	ATestLevelScriptActor_GetNumClientsForMultiplayerTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01A0DB00
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.GetNumAutomationClients
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ATestLevelScriptActor::GetNumAutomationClients()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetNumAutomationClients");

	ATestLevelScriptActor_GetNumAutomationClients_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01A0D8C0
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.GetClientPawn
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ClientId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                SplitScreenIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
//		class APawn*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class APawn* ATestLevelScriptActor::GetClientPawn(int ClientId, int SplitScreenIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetClientPawn");

	ATestLevelScriptActor_GetClientPawn_Params params;
	params.ClientId = ClientId;
	params.SplitScreenIndex = SplitScreenIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01A0D830
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.GetClientId
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ErrorOnFailure                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ATestLevelScriptActor::GetClientId(bool ErrorOnFailure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.GetClientId");

	ATestLevelScriptActor_GetClientId_Params params;
	params.ErrorOnFailure = ErrorOnFailure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01A0D700
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.DoServerPostTestCleanup
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void ATestLevelScriptActor::DoServerPostTestCleanup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.DoServerPostTestCleanup");

	ATestLevelScriptActor_DoServerPostTestCleanup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0D360
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.ClearPawnInputBindings
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATestLevelScriptActor::STATIC_ClearPawnInputBindings(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.ClearPawnInputBindings");

	ATestLevelScriptActor_ClearPawnInputBindings_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0B550
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.AddServerOnNewMap
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     MapPath                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
void ATestLevelScriptActor::AddServerOnNewMap(const struct FString& Name, const struct FString& MapPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.AddServerOnNewMap");

	ATestLevelScriptActor_AddServerOnNewMap_Params params;
	params.Name = Name;
	params.MapPath = MapPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0B4B0
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.AddServer
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
void ATestLevelScriptActor::AddServer(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.AddServer");

	ATestLevelScriptActor_AddServer_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0B340
//		Name   -> Function StudiosAutomation.TestLevelScriptActor.AddClient
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
void ATestLevelScriptActor::AddClient(int Port, const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestLevelScriptActor.AddClient");

	ATestLevelScriptActor_AddClient_Params params;
	params.Port = Port;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ATestLevelScriptActor::AfterRead()
{
	ALevelScriptActor::AfterRead();

}

void ATestLevelScriptActor::BeforeDelete()
{
	ALevelScriptActor::BeforeDelete();

}

void AActorThatLogsErrorWhenTicked::AfterRead()
{
	AActor::AfterRead();

}

void AActorThatLogsErrorWhenTicked::BeforeDelete()
{
	AActor::BeforeDelete();

}

// Function:
//		Offset -> 0x01A0EC90
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFinished
//		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_TestFinished(class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFinished");

	UAutomationBlueprintFunctionLibrary_TestFinished_Params params;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0EBC0
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFailed
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_TestFailed(const struct FString& Message, class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFailed");

	UAutomationBlueprintFunctionLibrary_TestFailed_Params params;
	params.Message = Message;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0E970
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
//		class ACameraActor*                                Camera                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     NameOverride                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
//		float                                              DelayBeforeScreenshotSeconds                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_TakeAutomationScreenshotAtCamera(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class ACameraActor* Camera, const struct FString& NameOverride, float DelayBeforeScreenshotSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera");

	UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Camera = Camera;
	params.NameOverride = NameOverride;
	params.DelayBeforeScreenshotSeconds = DelayBeforeScreenshotSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0E830
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_TakeAutomationScreenshot(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot");

	UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0E600
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepStarted
//		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     StepName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_StepStarted(const struct FString& StepName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepStarted");

	UAutomationBlueprintFunctionLibrary_StepStarted_Params params;
	params.StepName = StepName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0E5E0
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepFinished
//		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
void UAutomationBlueprintFunctionLibrary::STATIC_StepFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepFinished");

	UAutomationBlueprintFunctionLibrary_StepFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0E3F0
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.SetTestTimeoutAsFatal
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               TimeoutIsFatal                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAutomationBlueprintFunctionLibrary::STATIC_SetTestTimeoutAsFatal(bool TimeoutIsFatal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.SetTestTimeoutAsFatal");

	UAutomationBlueprintFunctionLibrary_SetTestTimeoutAsFatal_Params params;
	params.TimeoutIsFatal = TimeoutIsFatal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0E1E0
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.PreventGarbageCollection
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UAutomationBlueprintFunctionLibrary::STATIC_PreventGarbageCollection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.PreventGarbageCollection");

	UAutomationBlueprintFunctionLibrary_PreventGarbageCollection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0E090
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.OpenLevelWithGameMode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       LevelName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      GameMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		bool                                               Absolute                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAutomationBlueprintFunctionLibrary::STATIC_OpenLevelWithGameMode(class UObject* WorldContextObject, const struct FName& LevelName, class UClass* GameMode, bool Absolute)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.OpenLevelWithGameMode");

	UAutomationBlueprintFunctionLibrary_OpenLevelWithGameMode_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelName = LevelName;
	params.GameMode = GameMode;
	params.Absolute = Absolute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0E070
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.LogPlatformMemoryStats
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UAutomationBlueprintFunctionLibrary::STATIC_LogPlatformMemoryStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.LogPlatformMemoryStats");

	UAutomationBlueprintFunctionLibrary_LogPlatformMemoryStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0DF70
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsTravelFinished
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAutomationBlueprintFunctionLibrary::STATIC_IsTravelFinished(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsTravelFinished");

	UAutomationBlueprintFunctionLibrary_IsTravelFinished_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01A0DEE0
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsFeatureToggleEnabled
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       FeatureToggleName                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAutomationBlueprintFunctionLibrary::STATIC_IsFeatureToggleEnabled(const struct FName& FeatureToggleName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsFeatureToggleEnabled");

	UAutomationBlueprintFunctionLibrary_IsFeatureToggleEnabled_Params params;
	params.FeatureToggleName = FeatureToggleName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01A0DEB0
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsEditor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAutomationBlueprintFunctionLibrary::STATIC_IsEditor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsEditor");

	UAutomationBlueprintFunctionLibrary_IsEditor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01A0DE80
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.HasPerformanceDataBeenCaptured
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAutomationBlueprintFunctionLibrary::STATIC_HasPerformanceDataBeenCaptured()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.HasPerformanceDataBeenCaptured");

	UAutomationBlueprintFunctionLibrary_HasPerformanceDataBeenCaptured_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01A0DDF0
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetTestLevelScriptActor
//		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ErrorOnFailure                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ATestLevelScriptActor*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class ATestLevelScriptActor* UAutomationBlueprintFunctionLibrary::STATIC_GetTestLevelScriptActor(bool ErrorOnFailure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetTestLevelScriptActor");

	UAutomationBlueprintFunctionLibrary_GetTestLevelScriptActor_Params params;
	params.ErrorOnFailure = ErrorOnFailure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01A0DB60
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetPlayerId
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class APlayerState*                                State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UAutomationBlueprintFunctionLibrary::STATIC_GetPlayerId(class APlayerState* State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetPlayerId");

	UAutomationBlueprintFunctionLibrary_GetPlayerId_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01A0DA20
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetLevelUrl
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UAutomationBlueprintFunctionLibrary::STATIC_GetLevelUrl(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetLevelUrl");

	UAutomationBlueprintFunctionLibrary_GetLevelUrl_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01A0D980
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetCurrentMapTestName
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UAutomationBlueprintFunctionLibrary::STATIC_GetCurrentMapTestName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetCurrentMapTestName");

	UAutomationBlueprintFunctionLibrary_GetCurrentMapTestName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01A0D7B0
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.EndPerformanceCapture
//		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               DumpMemReport                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAutomationBlueprintFunctionLibrary::STATIC_EndPerformanceCapture(bool DumpMemReport)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.EndPerformanceCapture");

	UAutomationBlueprintFunctionLibrary_EndPerformanceCapture_Params params;
	params.DumpMemReport = DumpMemReport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0D740
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReportDelayed
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                FrameDelay                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_DumpFullMemReportDelayed(int FrameDelay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReportDelayed");

	UAutomationBlueprintFunctionLibrary_DumpFullMemReportDelayed_Params params;
	params.FrameDelay = FrameDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0D720
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReport
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UAutomationBlueprintFunctionLibrary::STATIC_DumpFullMemReport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReport");

	UAutomationBlueprintFunctionLibrary_DumpFullMemReport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0D570
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFramesWithDesc
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
//		int                                                NumFrames                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_DelayForFramesWithDesc(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumFrames, const struct FString& Description)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFramesWithDesc");

	UAutomationBlueprintFunctionLibrary_DelayForFramesWithDesc_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumFrames = NumFrames;
	params.Description = Description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0D450
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFrames
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
//		int                                                NumFrames                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_DelayForFrames(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int NumFrames)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFrames");

	UAutomationBlueprintFunctionLibrary_DelayForFrames_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.NumFrames = NumFrames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0D3D0
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.CollectGarbageNow
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               FullPurge                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAutomationBlueprintFunctionLibrary::STATIC_CollectGarbageNow(bool FullPurge)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.CollectGarbageNow");

	UAutomationBlueprintFunctionLibrary_CollectGarbageNow_Params params;
	params.FullPurge = FullPurge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0D2E0
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BlockAsyncLoading
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               EnableBlock                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAutomationBlueprintFunctionLibrary::STATIC_BlockAsyncLoading(bool EnableBlock)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BlockAsyncLoading");

	UAutomationBlueprintFunctionLibrary_BlockAsyncLoading_Params params;
	params.EnableBlock = EnableBlock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0D1B0
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture
//		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FolderName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               DumpMemReport                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               PreventGarbageCollection                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAutomationBlueprintFunctionLibrary::STATIC_BeginPerformanceCapture(const struct FString& FolderName, bool DumpMemReport, bool PreventGarbageCollection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture");

	UAutomationBlueprintFunctionLibrary_BeginPerformanceCapture_Params params;
	params.FolderName = FolderName;
	params.DumpMemReport = DumpMemReport;
	params.PreventGarbageCollection = PreventGarbageCollection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0D010
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Int
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<StudiosAutomation_EComparisonMethod>   ShouldBe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_AssertValue_Int(int Actual, TEnumAsByte<StudiosAutomation_EComparisonMethod> ShouldBe, int Expected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Int");

	UAutomationBlueprintFunctionLibrary_AssertValue_Int_Params params;
	params.Actual = Actual;
	params.ShouldBe = ShouldBe;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0CE60
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Float
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		float                                              Actual                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<StudiosAutomation_EComparisonMethod>   ShouldBe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Expected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_AssertValue_Float(float Actual, TEnumAsByte<StudiosAutomation_EComparisonMethod> ShouldBe, float Expected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Float");

	UAutomationBlueprintFunctionLibrary_AssertValue_Float_Params params;
	params.Actual = Actual;
	params.ShouldBe = ShouldBe;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0CCC0
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_DateTime
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FDateTime                                   Actual                                                     (Parm, ZeroConstructor)
//		TEnumAsByte<StudiosAutomation_EComparisonMethod>   ShouldBe                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FDateTime                                   Expected                                                   (Parm, ZeroConstructor)
//		struct FString                                     What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_AssertValue_DateTime(const struct FDateTime& Actual, TEnumAsByte<StudiosAutomation_EComparisonMethod> ShouldBe, const struct FDateTime& Expected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_DateTime");

	UAutomationBlueprintFunctionLibrary_AssertValue_DateTime_Params params;
	params.Actual = Actual;
	params.ShouldBe = ShouldBe;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0CB90
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertTrue
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               Condition                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_AssertTrue(bool Condition, const struct FString& Message, class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertTrue");

	UAutomationBlueprintFunctionLibrary_AssertTrue_Params params;
	params.Condition = Condition;
	params.Message = Message;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0CA20
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Vector
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     Actual                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     NotExpected                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_AssertNotEqual_Vector(const struct FVector& Actual, const struct FVector& NotExpected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Vector");

	UAutomationBlueprintFunctionLibrary_AssertNotEqual_Vector_Params params;
	params.Actual = Actual;
	params.NotExpected = NotExpected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0C7E0
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Transform
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FTransform                                  Actual                                                     (ConstParm, Parm, IsPlainOldData, NoDestructor)
//		struct FTransform                                  NotExpected                                                (ConstParm, Parm, IsPlainOldData, NoDestructor)
//		struct FString                                     What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_AssertNotEqual_Transform(const struct FTransform& Actual, const struct FTransform& NotExpected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Transform");

	UAutomationBlueprintFunctionLibrary_AssertNotEqual_Transform_Params params;
	params.Actual = Actual;
	params.NotExpected = NotExpected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0C630
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_String
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Actual                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     NotExpected                                                (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_AssertNotEqual_String(const struct FString& Actual, const struct FString& NotExpected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_String");

	UAutomationBlueprintFunctionLibrary_AssertNotEqual_String_Params params;
	params.Actual = Actual;
	params.NotExpected = NotExpected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0C4C0
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Rotator
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FRotator                                    Actual                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FRotator                                    NotExpected                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_AssertNotEqual_Rotator(const struct FRotator& Actual, const struct FRotator& NotExpected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Rotator");

	UAutomationBlueprintFunctionLibrary_AssertNotEqual_Rotator_Params params;
	params.Actual = Actual;
	params.NotExpected = NotExpected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0C3A0
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsValid
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_AssertIsValid(class UObject* Object, const struct FString& Message, class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsValid");

	UAutomationBlueprintFunctionLibrary_AssertIsValid_Params params;
	params.Object = Object;
	params.Message = Message;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0C280
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsNotValid
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_AssertIsNotValid(class UObject* Object, const struct FString& Message, class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsNotValid");

	UAutomationBlueprintFunctionLibrary_AssertIsNotValid_Params params;
	params.Object = Object;
	params.Message = Message;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0C150
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertFalse
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               Condition                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_AssertFalse(bool Condition, const struct FString& Message, class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertFalse");

	UAutomationBlueprintFunctionLibrary_AssertFalse_Params params;
	params.Condition = Condition;
	params.Message = Message;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0C0C0
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertErrorOccurred
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ErrorMessage                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_AssertErrorOccurred(const struct FString& ErrorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertErrorOccurred");

	UAutomationBlueprintFunctionLibrary_AssertErrorOccurred_Params params;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0BD60
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector2D
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   Actual                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector2D                                   Expected                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		float                                              Tolerance                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_AssertEqual_Vector2D(const struct FVector2D& Actual, const struct FVector2D& Expected, const struct FString& What, float Tolerance, class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector2D");

	UAutomationBlueprintFunctionLibrary_AssertEqual_Vector2D_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.Tolerance = Tolerance;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0BF00
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     Actual                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Expected                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		float                                              Tolerance                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_AssertEqual_Vector(const struct FVector& Actual, const struct FVector& Expected, const struct FString& What, float Tolerance, class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector");

	UAutomationBlueprintFunctionLibrary_AssertEqual_Vector_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.Tolerance = Tolerance;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0BB20
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Transform
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FTransform                                  Actual                                                     (ConstParm, Parm, IsPlainOldData, NoDestructor)
//		struct FTransform                                  Expected                                                   (ConstParm, Parm, IsPlainOldData, NoDestructor)
//		struct FString                                     What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_AssertEqual_Transform(const struct FTransform& Actual, const struct FTransform& Expected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Transform");

	UAutomationBlueprintFunctionLibrary_AssertEqual_Transform_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0B970
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_String
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Actual                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Expected                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_AssertEqual_String(const struct FString& Actual, const struct FString& Expected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_String");

	UAutomationBlueprintFunctionLibrary_AssertEqual_String_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0B800
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Rotator
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FRotator                                    Actual                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FRotator                                    Expected                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_AssertEqual_Rotator(const struct FRotator& Actual, const struct FRotator& Expected, const struct FString& What, class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Rotator");

	UAutomationBlueprintFunctionLibrary_AssertEqual_Rotator_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0B650
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Float
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		float                                              Actual                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Expected                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     What                                                       (Parm, ZeroConstructor, HasGetValueTypeHash)
//		float                                              Tolerance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     ContextObject                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_AssertEqual_Float(float Actual, float Expected, const struct FString& What, float Tolerance, class UObject* ContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Float");

	UAutomationBlueprintFunctionLibrary_AssertEqual_Float_Params params;
	params.Actual = Actual;
	params.Expected = Expected;
	params.What = What;
	params.Tolerance = Tolerance;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0B420
//		Name   -> Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AddExpectedError
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ErrorMessage                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAutomationBlueprintFunctionLibrary::STATIC_AddExpectedError(const struct FString& ErrorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AddExpectedError");

	UAutomationBlueprintFunctionLibrary_AddExpectedError_Params params;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAutomationBlueprintFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UAutomationBlueprintFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x01A0DFF0
//		Name   -> Function StudiosAutomation.AutomationLatentActionCallback.LatentCallback
//		Flags  -> (Final, Native, Private)
// Parameters:
//		int                                                Linkage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAutomationLatentActionCallback::LatentCallback(int Linkage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.AutomationLatentActionCallback.LatentCallback");

	UAutomationLatentActionCallback_LatentCallback_Params params;
	params.Linkage = Linkage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAutomationLatentActionCallback::AfterRead()
{
	UObject::AfterRead();

}

void UAutomationLatentActionCallback::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UBPNamedObjectMock::AfterRead()
{
	UObject::AfterRead();

}

void UBPNamedObjectMock::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ADummyReplicatedActor::AfterRead()
{
	AActor::AfterRead();

}

void ADummyReplicatedActor::BeforeDelete()
{
	AActor::BeforeDelete();

}

void AMapFixtureTestGameMode::AfterRead()
{
	AGameMode::AfterRead();

}

void AMapFixtureTestGameMode::BeforeDelete()
{
	AGameMode::BeforeDelete();

}

void UObjectWithSettableWorld::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(World, UWorld);
}

void UObjectWithSettableWorld::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(World);
}

void UTestUObject::AfterRead()
{
	UObject::AfterRead();

}

void UTestUObject::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UOtherTestUObject::AfterRead()
{
	UObject::AfterRead();

}

void UOtherTestUObject::BeforeDelete()
{
	UObject::BeforeDelete();

}

void URunUnitTestsCommandlet::AfterRead()
{
	UCommandlet::AfterRead();

}

void URunUnitTestsCommandlet::BeforeDelete()
{
	UCommandlet::BeforeDelete();

}

void ATestablePlayerController::AfterRead()
{
	APlayerController::AfterRead();

}

void ATestablePlayerController::BeforeDelete()
{
	APlayerController::BeforeDelete();

}

void UTestablePlayerControllerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UTestablePlayerControllerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x01A0F550
//		Name   -> Function StudiosAutomation.TestablePlayerControllerComponent.YieldToServer
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
void UTestablePlayerControllerComponent::YieldToServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestablePlayerControllerComponent.YieldToServer");

	UTestablePlayerControllerComponent_YieldToServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0E1C0
//		Name   -> Function StudiosAutomation.TestablePlayerControllerComponent.PerformPostTestCleanup
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
void UTestablePlayerControllerComponent::PerformPostTestCleanup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestablePlayerControllerComponent.PerformPostTestCleanup");

	UTestablePlayerControllerComponent_PerformPostTestCleanup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01A0D6E0
//		Name   -> Function StudiosAutomation.TestablePlayerControllerComponent.DisconnectClientFromTest
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
void UTestablePlayerControllerComponent::DisconnectClientFromTest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StudiosAutomation.TestablePlayerControllerComponent.DisconnectClientFromTest");

	UTestablePlayerControllerComponent_DisconnectClientFromTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UTestablePlayerControllerComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UTestablePlayerControllerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void ATestAbstractActor::AfterRead()
{
	AActor::AfterRead();

}

void ATestAbstractActor::BeforeDelete()
{
	AActor::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
