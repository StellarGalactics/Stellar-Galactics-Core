#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 Solana.Unity.Rpc.IRpcClient Solana.Unity.Rpc.ClientFactory::GetClient(Solana.Unity.Rpc.Cluster,System.Object)
extern void ClientFactory_GetClient_m83527B87F05645C47BE13C02BCE5BBAEA595734A (void);
// 0x00000002 Solana.Unity.Rpc.IRpcClient Solana.Unity.Rpc.ClientFactory::GetClient(Solana.Unity.Rpc.Cluster)
extern void ClientFactory_GetClient_m74B2BE4645FB5BCE4832B716727600F04DDA82A4 (void);
// 0x00000003 Solana.Unity.Rpc.IRpcClient Solana.Unity.Rpc.ClientFactory::GetClient(Solana.Unity.Rpc.Cluster,System.Object,Solana.Unity.Rpc.Utilities.IRateLimiter)
extern void ClientFactory_GetClient_m08438A5D30AF826FAECA8EF28804B77890785EAD (void);
// 0x00000004 Solana.Unity.Rpc.IRpcClient Solana.Unity.Rpc.ClientFactory::GetClient(Solana.Unity.Rpc.Cluster,System.Object,System.Net.Http.HttpClient,Solana.Unity.Rpc.Utilities.IRateLimiter)
extern void ClientFactory_GetClient_mEBC2E68E35FBF63820AEC53D5B6978814CE866C1 (void);
// 0x00000005 Solana.Unity.Rpc.IRpcClient Solana.Unity.Rpc.ClientFactory::GetClient(System.String,System.Object)
extern void ClientFactory_GetClient_m555DB5ACF7EB115D0FFD097E7CF9DC7089988CCD (void);
// 0x00000006 Solana.Unity.Rpc.IRpcClient Solana.Unity.Rpc.ClientFactory::GetClient(System.String,System.Object,Solana.Unity.Rpc.Utilities.IRateLimiter)
extern void ClientFactory_GetClient_mDA275F8E3C932304002C99030338C4736933559F (void);
// 0x00000007 Solana.Unity.Rpc.IRpcClient Solana.Unity.Rpc.ClientFactory::GetClient(System.String,System.Object,System.Net.Http.HttpClient,Solana.Unity.Rpc.Utilities.IRateLimiter)
extern void ClientFactory_GetClient_mE856D1AAE02BB5A1ED47840FCB72B4550F9EC49D (void);
// 0x00000008 Solana.Unity.Rpc.IStreamingRpcClient Solana.Unity.Rpc.ClientFactory::GetStreamingClient(Solana.Unity.Rpc.Cluster,System.Object)
extern void ClientFactory_GetStreamingClient_m2594513DDCDE394CF51617887B22E18371F1C2F6 (void);
// 0x00000009 Solana.Unity.Rpc.IStreamingRpcClient Solana.Unity.Rpc.ClientFactory::GetStreamingClient(System.String,System.Object,System.Net.WebSockets.ClientWebSocket)
extern void ClientFactory_GetStreamingClient_m8A350E93905CE8FD4A5AA53933A40053DDB577D0 (void);
// 0x0000000A System.Uri Solana.Unity.Rpc.IRpcClient::get_NodeAddress()
// 0x0000000B System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenMintInfo>>> Solana.Unity.Rpc.IRpcClient::GetTokenMintInfoAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x0000000C Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenMintInfo>> Solana.Unity.Rpc.IRpcClient::GetTokenMintInfo(System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x0000000D System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenAccountInfo>>> Solana.Unity.Rpc.IRpcClient::GetTokenAccountInfoAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x0000000E Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenAccountInfo>> Solana.Unity.Rpc.IRpcClient::GetTokenAccountInfo(System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x0000000F System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>> Solana.Unity.Rpc.IRpcClient::GetAccountInfoAsync(System.String,Solana.Unity.Rpc.Types.Commitment,Solana.Unity.Rpc.Types.BinaryEncoding)
// 0x00000010 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>> Solana.Unity.Rpc.IRpcClient::GetAccountInfo(System.String,Solana.Unity.Rpc.Types.Commitment,Solana.Unity.Rpc.Types.BinaryEncoding)
// 0x00000011 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>> Solana.Unity.Rpc.IRpcClient::GetBalanceAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x00000012 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>> Solana.Unity.Rpc.IRpcClient::GetBalance(System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x00000013 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.BlockInfo>> Solana.Unity.Rpc.IRpcClient::GetBlockAsync(System.UInt64,Solana.Unity.Rpc.Types.Commitment,Solana.Unity.Rpc.Types.TransactionDetailsFilterType,System.Boolean)
// 0x00000014 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.BlockInfo>> Solana.Unity.Rpc.IRpcClient::GetConfirmedBlockAsync(System.UInt64,Solana.Unity.Rpc.Types.Commitment,Solana.Unity.Rpc.Types.TransactionDetailsFilterType,System.Boolean)
// 0x00000015 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.BlockInfo> Solana.Unity.Rpc.IRpcClient::GetBlock(System.UInt64,Solana.Unity.Rpc.Types.Commitment,Solana.Unity.Rpc.Types.TransactionDetailsFilterType,System.Boolean)
// 0x00000016 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.BlockInfo> Solana.Unity.Rpc.IRpcClient::GetConfirmedBlock(System.UInt64,Solana.Unity.Rpc.Types.Commitment,Solana.Unity.Rpc.Types.TransactionDetailsFilterType,System.Boolean)
// 0x00000017 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.BlockCommitment>> Solana.Unity.Rpc.IRpcClient::GetBlockCommitmentAsync(System.UInt64)
// 0x00000018 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.BlockCommitment> Solana.Unity.Rpc.IRpcClient::GetBlockCommitment(System.UInt64)
// 0x00000019 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64>> Solana.Unity.Rpc.IRpcClient::GetBlockHeightAsync(Solana.Unity.Rpc.Types.Commitment)
// 0x0000001A Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64> Solana.Unity.Rpc.IRpcClient::GetBlockHeight(Solana.Unity.Rpc.Types.Commitment)
// 0x0000001B System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockProductionInfo>>> Solana.Unity.Rpc.IRpcClient::GetBlockProductionAsync(System.String,System.Nullable`1<System.UInt64>,System.Nullable`1<System.UInt64>,Solana.Unity.Rpc.Types.Commitment)
// 0x0000001C Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockProductionInfo>> Solana.Unity.Rpc.IRpcClient::GetBlockProduction(System.String,System.Nullable`1<System.UInt64>,System.Nullable`1<System.UInt64>,Solana.Unity.Rpc.Types.Commitment)
// 0x0000001D System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<System.UInt64>>> Solana.Unity.Rpc.IRpcClient::GetBlocksAsync(System.UInt64,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
// 0x0000001E System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<System.UInt64>>> Solana.Unity.Rpc.IRpcClient::GetConfirmedBlocksAsync(System.UInt64,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
// 0x0000001F Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<System.UInt64>> Solana.Unity.Rpc.IRpcClient::GetBlocks(System.UInt64,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
// 0x00000020 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<System.UInt64>> Solana.Unity.Rpc.IRpcClient::GetConfirmedBlocks(System.UInt64,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
// 0x00000021 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<System.UInt64>>> Solana.Unity.Rpc.IRpcClient::GetBlocksWithLimitAsync(System.UInt64,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
// 0x00000022 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<System.UInt64>>> Solana.Unity.Rpc.IRpcClient::GetConfirmedBlocksWithLimitAsync(System.UInt64,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
// 0x00000023 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<System.UInt64>> Solana.Unity.Rpc.IRpcClient::GetBlocksWithLimit(System.UInt64,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
// 0x00000024 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<System.UInt64>> Solana.Unity.Rpc.IRpcClient::GetConfirmedBlocksWithLimit(System.UInt64,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
// 0x00000025 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64>> Solana.Unity.Rpc.IRpcClient::GetBlockTimeAsync(System.UInt64)
// 0x00000026 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64> Solana.Unity.Rpc.IRpcClient::GetBlockTime(System.UInt64)
// 0x00000027 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.ClusterNode>>> Solana.Unity.Rpc.IRpcClient::GetClusterNodesAsync()
// 0x00000028 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.ClusterNode>> Solana.Unity.Rpc.IRpcClient::GetClusterNodes()
// 0x00000029 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.EpochInfo>> Solana.Unity.Rpc.IRpcClient::GetEpochInfoAsync(Solana.Unity.Rpc.Types.Commitment)
// 0x0000002A Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.EpochInfo> Solana.Unity.Rpc.IRpcClient::GetEpochInfo(Solana.Unity.Rpc.Types.Commitment)
// 0x0000002B System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.EpochScheduleInfo>> Solana.Unity.Rpc.IRpcClient::GetEpochScheduleAsync()
// 0x0000002C Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.EpochScheduleInfo> Solana.Unity.Rpc.IRpcClient::GetEpochSchedule()
// 0x0000002D System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.FeeCalculatorInfo>>> Solana.Unity.Rpc.IRpcClient::GetFeeCalculatorForBlockhashAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x0000002E Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.FeeCalculatorInfo>> Solana.Unity.Rpc.IRpcClient::GetFeeCalculatorForBlockhash(System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x0000002F System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.FeeRateGovernorInfo>>> Solana.Unity.Rpc.IRpcClient::GetFeeRateGovernorAsync()
// 0x00000030 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.FeeRateGovernorInfo>> Solana.Unity.Rpc.IRpcClient::GetFeeRateGovernor()
// 0x00000031 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.FeesInfo>>> Solana.Unity.Rpc.IRpcClient::GetFeesAsync(Solana.Unity.Rpc.Types.Commitment)
// 0x00000032 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.FeesInfo>> Solana.Unity.Rpc.IRpcClient::GetFees(Solana.Unity.Rpc.Types.Commitment)
// 0x00000033 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64>> Solana.Unity.Rpc.IRpcClient::GetFirstAvailableBlockAsync()
// 0x00000034 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64> Solana.Unity.Rpc.IRpcClient::GetFirstAvailableBlock()
// 0x00000035 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Rpc.IRpcClient::GetGenesisHashAsync()
// 0x00000036 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String> Solana.Unity.Rpc.IRpcClient::GetGenesisHash()
// 0x00000037 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Rpc.IRpcClient::GetHealthAsync()
// 0x00000038 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String> Solana.Unity.Rpc.IRpcClient::GetHealth()
// 0x00000039 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.NodeIdentity>> Solana.Unity.Rpc.IRpcClient::GetIdentityAsync()
// 0x0000003A Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.NodeIdentity> Solana.Unity.Rpc.IRpcClient::GetIdentity()
// 0x0000003B System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.InflationGovernor>> Solana.Unity.Rpc.IRpcClient::GetInflationGovernorAsync(Solana.Unity.Rpc.Types.Commitment)
// 0x0000003C Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.InflationGovernor> Solana.Unity.Rpc.IRpcClient::GetInflationGovernor(Solana.Unity.Rpc.Types.Commitment)
// 0x0000003D System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.InflationRate>> Solana.Unity.Rpc.IRpcClient::GetInflationRateAsync()
// 0x0000003E Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.InflationRate> Solana.Unity.Rpc.IRpcClient::GetInflationRate()
// 0x0000003F System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.InflationReward>>> Solana.Unity.Rpc.IRpcClient::GetInflationRewardAsync(System.Collections.Generic.IList`1<System.String>,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
// 0x00000040 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.InflationReward>> Solana.Unity.Rpc.IRpcClient::GetInflationReward(System.Collections.Generic.IList`1<System.String>,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
// 0x00000041 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.LargeAccount>>>> Solana.Unity.Rpc.IRpcClient::GetLargestAccountsAsync(System.Nullable`1<Solana.Unity.Rpc.Types.AccountFilterType>,Solana.Unity.Rpc.Types.Commitment)
// 0x00000042 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.LargeAccount>>> Solana.Unity.Rpc.IRpcClient::GetLargestAccounts(System.Nullable`1<Solana.Unity.Rpc.Types.AccountFilterType>,Solana.Unity.Rpc.Types.Commitment)
// 0x00000043 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.UInt64>>>> Solana.Unity.Rpc.IRpcClient::GetLeaderScheduleAsync(System.UInt64,System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x00000044 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.UInt64>>> Solana.Unity.Rpc.IRpcClient::GetLeaderSchedule(System.UInt64,System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x00000045 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64>> Solana.Unity.Rpc.IRpcClient::GetMaxRetransmitSlotAsync()
// 0x00000046 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64> Solana.Unity.Rpc.IRpcClient::GetMaxRetransmitSlot()
// 0x00000047 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64>> Solana.Unity.Rpc.IRpcClient::GetMaxShredInsertSlotAsync()
// 0x00000048 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64> Solana.Unity.Rpc.IRpcClient::GetMaxShredInsertSlot()
// 0x00000049 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64>> Solana.Unity.Rpc.IRpcClient::GetMinimumBalanceForRentExemptionAsync(System.Int64,Solana.Unity.Rpc.Types.Commitment)
// 0x0000004A Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64> Solana.Unity.Rpc.IRpcClient::GetMinimumBalanceForRentExemption(System.Int64,Solana.Unity.Rpc.Types.Commitment)
// 0x0000004B System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64>> Solana.Unity.Rpc.IRpcClient::GetMinimumLedgerSlotAsync()
// 0x0000004C Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64> Solana.Unity.Rpc.IRpcClient::GetMinimumLedgerSlot()
// 0x0000004D System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>>> Solana.Unity.Rpc.IRpcClient::GetMultipleAccountsAsync(System.Collections.Generic.IList`1<System.String>,Solana.Unity.Rpc.Types.Commitment)
// 0x0000004E Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>> Solana.Unity.Rpc.IRpcClient::GetMultipleAccounts(System.Collections.Generic.IList`1<System.String>,Solana.Unity.Rpc.Types.Commitment)
// 0x0000004F System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>> Solana.Unity.Rpc.IRpcClient::GetProgramAccountsAsync(System.String,Solana.Unity.Rpc.Types.Commitment,System.Nullable`1<System.Int32>,System.Collections.Generic.IList`1<Solana.Unity.Rpc.Models.MemCmp>)
// 0x00000050 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>> Solana.Unity.Rpc.IRpcClient::GetProgramAccounts(System.String,Solana.Unity.Rpc.Types.Commitment,System.Nullable`1<System.Int32>,System.Collections.Generic.IList`1<Solana.Unity.Rpc.Models.MemCmp>)
// 0x00000051 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>> Solana.Unity.Rpc.IRpcClient::GetRecentBlockHashAsync(Solana.Unity.Rpc.Types.Commitment)
// 0x00000052 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>> Solana.Unity.Rpc.IRpcClient::GetRecentBlockHash(Solana.Unity.Rpc.Types.Commitment)
// 0x00000053 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.PerformanceSample>>> Solana.Unity.Rpc.IRpcClient::GetRecentPerformanceSamplesAsync(System.UInt64)
// 0x00000054 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.PerformanceSample>> Solana.Unity.Rpc.IRpcClient::GetRecentPerformanceSamples(System.UInt64)
// 0x00000055 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.SignatureStatusInfo>>> Solana.Unity.Rpc.IRpcClient::GetSignaturesForAddressAsync(System.String,System.UInt64,System.String,System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x00000056 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.SignatureStatusInfo>>> Solana.Unity.Rpc.IRpcClient::GetConfirmedSignaturesForAddress2Async(System.String,System.UInt64,System.String,System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x00000057 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.SignatureStatusInfo>> Solana.Unity.Rpc.IRpcClient::GetSignaturesForAddress(System.String,System.UInt64,System.String,System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x00000058 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.SignatureStatusInfo>> Solana.Unity.Rpc.IRpcClient::GetConfirmedSignaturesForAddress2(System.String,System.UInt64,System.String,System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x00000059 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.SignatureStatusInfo>>>> Solana.Unity.Rpc.IRpcClient::GetSignatureStatusesAsync(System.Collections.Generic.List`1<System.String>,System.Boolean)
// 0x0000005A Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.SignatureStatusInfo>>> Solana.Unity.Rpc.IRpcClient::GetSignatureStatuses(System.Collections.Generic.List`1<System.String>,System.Boolean)
// 0x0000005B System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64>> Solana.Unity.Rpc.IRpcClient::GetSlotAsync(Solana.Unity.Rpc.Types.Commitment)
// 0x0000005C Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64> Solana.Unity.Rpc.IRpcClient::GetSlot(Solana.Unity.Rpc.Types.Commitment)
// 0x0000005D System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Rpc.IRpcClient::GetSlotLeaderAsync(Solana.Unity.Rpc.Types.Commitment)
// 0x0000005E Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String> Solana.Unity.Rpc.IRpcClient::GetSlotLeader(Solana.Unity.Rpc.Types.Commitment)
// 0x0000005F System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<System.String>>> Solana.Unity.Rpc.IRpcClient::GetSlotLeadersAsync(System.UInt64,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
// 0x00000060 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<System.String>> Solana.Unity.Rpc.IRpcClient::GetSlotLeaders(System.UInt64,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
// 0x00000061 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64>> Solana.Unity.Rpc.IRpcClient::GetSnapshotSlotAsync()
// 0x00000062 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64> Solana.Unity.Rpc.IRpcClient::GetSnapshotSlot()
// 0x00000063 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.StakeActivationInfo>> Solana.Unity.Rpc.IRpcClient::GetStakeActivationAsync(System.String,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
// 0x00000064 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.StakeActivationInfo> Solana.Unity.Rpc.IRpcClient::GetStakeActivation(System.String,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
// 0x00000065 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.Supply>>> Solana.Unity.Rpc.IRpcClient::GetSupplyAsync(Solana.Unity.Rpc.Types.Commitment)
// 0x00000066 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.Supply>> Solana.Unity.Rpc.IRpcClient::GetSupply(Solana.Unity.Rpc.Types.Commitment)
// 0x00000067 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenBalance>>> Solana.Unity.Rpc.IRpcClient::GetTokenAccountBalanceAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x00000068 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenBalance>> Solana.Unity.Rpc.IRpcClient::GetTokenAccountBalance(System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x00000069 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>> Solana.Unity.Rpc.IRpcClient::GetTokenAccountsByDelegateAsync(System.String,System.String,System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x0000006A Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>> Solana.Unity.Rpc.IRpcClient::GetTokenAccountsByDelegate(System.String,System.String,System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x0000006B System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>> Solana.Unity.Rpc.IRpcClient::GetTokenAccountsByOwnerAsync(System.String,System.String,System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x0000006C Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>> Solana.Unity.Rpc.IRpcClient::GetTokenAccountsByOwner(System.String,System.String,System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x0000006D System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.LargeTokenAccount>>>> Solana.Unity.Rpc.IRpcClient::GetTokenLargestAccountsAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x0000006E Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.LargeTokenAccount>>> Solana.Unity.Rpc.IRpcClient::GetTokenLargestAccounts(System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x0000006F System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenBalance>>> Solana.Unity.Rpc.IRpcClient::GetTokenSupplyAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x00000070 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenBalance>> Solana.Unity.Rpc.IRpcClient::GetTokenSupply(System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x00000071 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.TransactionMetaSlotInfo>> Solana.Unity.Rpc.IRpcClient::GetTransactionAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x00000072 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.TransactionMetaSlotInfo>> Solana.Unity.Rpc.IRpcClient::GetConfirmedTransactionAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x00000073 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.TransactionMetaSlotInfo> Solana.Unity.Rpc.IRpcClient::GetTransaction(System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x00000074 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.TransactionMetaSlotInfo> Solana.Unity.Rpc.IRpcClient::GetConfirmedTransaction(System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x00000075 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64>> Solana.Unity.Rpc.IRpcClient::GetTransactionCountAsync(Solana.Unity.Rpc.Types.Commitment)
// 0x00000076 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64> Solana.Unity.Rpc.IRpcClient::GetTransactionCount(Solana.Unity.Rpc.Types.Commitment)
// 0x00000077 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.NodeVersion>> Solana.Unity.Rpc.IRpcClient::GetVersionAsync()
// 0x00000078 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.NodeVersion> Solana.Unity.Rpc.IRpcClient::GetVersion()
// 0x00000079 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.VoteAccounts>> Solana.Unity.Rpc.IRpcClient::GetVoteAccountsAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x0000007A Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.VoteAccounts> Solana.Unity.Rpc.IRpcClient::GetVoteAccounts(System.String,Solana.Unity.Rpc.Types.Commitment)
// 0x0000007B System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Rpc.IRpcClient::RequestAirdropAsync(System.String,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
// 0x0000007C Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String> Solana.Unity.Rpc.IRpcClient::RequestAirdrop(System.String,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
// 0x0000007D System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Rpc.IRpcClient::SendTransactionAsync(System.String,System.Boolean,Solana.Unity.Rpc.Types.Commitment)
// 0x0000007E Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String> Solana.Unity.Rpc.IRpcClient::SendTransaction(System.String,System.Boolean,Solana.Unity.Rpc.Types.Commitment)
// 0x0000007F System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Rpc.IRpcClient::SendTransactionAsync(System.Byte[],System.Boolean,Solana.Unity.Rpc.Types.Commitment)
// 0x00000080 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String> Solana.Unity.Rpc.IRpcClient::SendTransaction(System.Byte[],System.Boolean,Solana.Unity.Rpc.Types.Commitment)
// 0x00000081 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.SimulationLogs>>> Solana.Unity.Rpc.IRpcClient::SimulateTransactionAsync(System.String,System.Boolean,Solana.Unity.Rpc.Types.Commitment,System.Boolean,System.Collections.Generic.IList`1<System.String>)
// 0x00000082 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.SimulationLogs>> Solana.Unity.Rpc.IRpcClient::SimulateTransaction(System.String,System.Boolean,Solana.Unity.Rpc.Types.Commitment,System.Boolean,System.Collections.Generic.IList`1<System.String>)
// 0x00000083 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.SimulationLogs>>> Solana.Unity.Rpc.IRpcClient::SimulateTransactionAsync(System.Byte[],System.Boolean,Solana.Unity.Rpc.Types.Commitment,System.Boolean,System.Collections.Generic.IList`1<System.String>)
// 0x00000084 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.SimulationLogs>> Solana.Unity.Rpc.IRpcClient::SimulateTransaction(System.Byte[],System.Boolean,Solana.Unity.Rpc.Types.Commitment,System.Boolean,System.Collections.Generic.IList`1<System.String>)
// 0x00000085 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.JsonRpcBatchResponse>> Solana.Unity.Rpc.IRpcClient::SendBatchRequestAsync(Solana.Unity.Rpc.Messages.JsonRpcBatchRequest)
// 0x00000086 System.Int32 Solana.Unity.Rpc.IRpcClient::GetNextIdForReq()
// 0x00000087 System.Net.WebSockets.WebSocketState Solana.Unity.Rpc.IStreamingRpcClient::get_State()
// 0x00000088 System.Void Solana.Unity.Rpc.IStreamingRpcClient::add_ConnectionStateChangedEvent(System.EventHandler`1<System.Net.WebSockets.WebSocketState>)
// 0x00000089 System.Void Solana.Unity.Rpc.IStreamingRpcClient::remove_ConnectionStateChangedEvent(System.EventHandler`1<System.Net.WebSockets.WebSocketState>)
// 0x0000008A System.Uri Solana.Unity.Rpc.IStreamingRpcClient::get_NodeAddress()
// 0x0000008B Solana.Unity.Rpc.Types.IConnectionStatistics Solana.Unity.Rpc.IStreamingRpcClient::get_Statistics()
// 0x0000008C System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Rpc.IStreamingRpcClient::SubscribeAccountInfoAsync(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>,Solana.Unity.Rpc.Types.Commitment)
// 0x0000008D Solana.Unity.Rpc.Core.Sockets.SubscriptionState Solana.Unity.Rpc.IStreamingRpcClient::SubscribeAccountInfo(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>,Solana.Unity.Rpc.Types.Commitment)
// 0x0000008E System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Rpc.IStreamingRpcClient::SubscribeTokenAccountAsync(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenAccountInfo>>,Solana.Unity.Rpc.Types.Commitment)
// 0x0000008F Solana.Unity.Rpc.Core.Sockets.SubscriptionState Solana.Unity.Rpc.IStreamingRpcClient::SubscribeTokenAccount(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenAccountInfo>>,Solana.Unity.Rpc.Types.Commitment)
// 0x00000090 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Rpc.IStreamingRpcClient::SubscribeLogInfoAsync(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.LogInfo>>,Solana.Unity.Rpc.Types.Commitment)
// 0x00000091 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Rpc.IStreamingRpcClient::SubscribeLogInfoAsync(Solana.Unity.Rpc.Types.LogsSubscriptionType,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.LogInfo>>,Solana.Unity.Rpc.Types.Commitment)
// 0x00000092 Solana.Unity.Rpc.Core.Sockets.SubscriptionState Solana.Unity.Rpc.IStreamingRpcClient::SubscribeLogInfo(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.LogInfo>>,Solana.Unity.Rpc.Types.Commitment)
// 0x00000093 Solana.Unity.Rpc.Core.Sockets.SubscriptionState Solana.Unity.Rpc.IStreamingRpcClient::SubscribeLogInfo(Solana.Unity.Rpc.Types.LogsSubscriptionType,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.LogInfo>>,Solana.Unity.Rpc.Types.Commitment)
// 0x00000094 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Rpc.IStreamingRpcClient::SubscribeSignatureAsync(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.ErrorResult>>,Solana.Unity.Rpc.Types.Commitment)
// 0x00000095 Solana.Unity.Rpc.Core.Sockets.SubscriptionState Solana.Unity.Rpc.IStreamingRpcClient::SubscribeSignature(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.ErrorResult>>,Solana.Unity.Rpc.Types.Commitment)
// 0x00000096 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Rpc.IStreamingRpcClient::SubscribeProgramAsync(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountKeyPair>>,Solana.Unity.Rpc.Types.Commitment)
// 0x00000097 Solana.Unity.Rpc.Core.Sockets.SubscriptionState Solana.Unity.Rpc.IStreamingRpcClient::SubscribeProgram(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountKeyPair>>,Solana.Unity.Rpc.Types.Commitment)
// 0x00000098 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Rpc.IStreamingRpcClient::SubscribeSlotInfoAsync(System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Models.SlotInfo>)
// 0x00000099 Solana.Unity.Rpc.Core.Sockets.SubscriptionState Solana.Unity.Rpc.IStreamingRpcClient::SubscribeSlotInfo(System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Models.SlotInfo>)
// 0x0000009A System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Rpc.IStreamingRpcClient::SubscribeRootAsync(System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,System.Int32>)
// 0x0000009B Solana.Unity.Rpc.Core.Sockets.SubscriptionState Solana.Unity.Rpc.IStreamingRpcClient::SubscribeRoot(System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,System.Int32>)
// 0x0000009C System.Threading.Tasks.Task Solana.Unity.Rpc.IStreamingRpcClient::UnsubscribeAsync(Solana.Unity.Rpc.Core.Sockets.SubscriptionState)
// 0x0000009D System.Void Solana.Unity.Rpc.IStreamingRpcClient::Unsubscribe(Solana.Unity.Rpc.Core.Sockets.SubscriptionState)
// 0x0000009E System.Threading.Tasks.Task Solana.Unity.Rpc.IStreamingRpcClient::ConnectAsync()
// 0x0000009F System.Threading.Tasks.Task Solana.Unity.Rpc.IStreamingRpcClient::DisconnectAsync()
// 0x000000A0 System.Int32 Solana.Unity.Rpc.SolanaRpcBatchComposer::get_Count()
extern void SolanaRpcBatchComposer_get_Count_m78E6322489A12D0AD9B4308F39E66EEB4ABBF433 (void);
// 0x000000A1 System.Void Solana.Unity.Rpc.SolanaRpcBatchComposer::.ctor(Solana.Unity.Rpc.IRpcClient)
extern void SolanaRpcBatchComposer__ctor_mA58316D19308E2EED6EAC042DB6178D40AFE26F9 (void);
// 0x000000A2 System.Void Solana.Unity.Rpc.SolanaRpcBatchComposer::AutoExecute(Solana.Unity.Rpc.Types.BatchAutoExecuteMode,System.Int32)
extern void SolanaRpcBatchComposer_AutoExecute_mF9B584CD08B89E7ED38A574F988579EB03C1E2F4 (void);
// 0x000000A3 Solana.Unity.Rpc.Messages.JsonRpcBatchRequest Solana.Unity.Rpc.SolanaRpcBatchComposer::CreateJsonRequests()
extern void SolanaRpcBatchComposer_CreateJsonRequests_m28CEF186C45A608D05D034EFA9A7F22E72AE44FB (void);
// 0x000000A4 Solana.Unity.Rpc.Messages.JsonRpcBatchResponse Solana.Unity.Rpc.SolanaRpcBatchComposer::Execute()
extern void SolanaRpcBatchComposer_Execute_m904163598ED92D4739AEE2A80E0939AE0C1511DA (void);
// 0x000000A5 Solana.Unity.Rpc.Messages.JsonRpcBatchResponse Solana.Unity.Rpc.SolanaRpcBatchComposer::Execute(Solana.Unity.Rpc.IRpcClient)
extern void SolanaRpcBatchComposer_Execute_m5E1D0AB46A518CB08EE20329988CA939DA93532A (void);
// 0x000000A6 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Messages.JsonRpcBatchResponse> Solana.Unity.Rpc.SolanaRpcBatchComposer::ExecuteAsync()
extern void SolanaRpcBatchComposer_ExecuteAsync_m3CEB0A7F3160EC693237B08D92E5FCDC217B265C (void);
// 0x000000A7 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Messages.JsonRpcBatchResponse> Solana.Unity.Rpc.SolanaRpcBatchComposer::ExecuteAsync(Solana.Unity.Rpc.IRpcClient)
extern void SolanaRpcBatchComposer_ExecuteAsync_m9FE5194E0FA03CA564487795A6848C17A4EF0279 (void);
// 0x000000A8 Solana.Unity.Rpc.Messages.JsonRpcBatchResponse Solana.Unity.Rpc.SolanaRpcBatchComposer::ExecuteWithFatalFailure()
extern void SolanaRpcBatchComposer_ExecuteWithFatalFailure_mC3407C57F620EA818C0FBC5BFDC9D46FB788CE08 (void);
// 0x000000A9 Solana.Unity.Rpc.Messages.JsonRpcBatchResponse Solana.Unity.Rpc.SolanaRpcBatchComposer::ExecuteWithFatalFailure(Solana.Unity.Rpc.IRpcClient)
extern void SolanaRpcBatchComposer_ExecuteWithFatalFailure_m69512C8085D6099C90E071FCEBC7F726DA16694E (void);
// 0x000000AA System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Messages.JsonRpcBatchResponse> Solana.Unity.Rpc.SolanaRpcBatchComposer::ExecuteWithFatalFailureAsync()
extern void SolanaRpcBatchComposer_ExecuteWithFatalFailureAsync_mE418A36A70A00C6D8275C13AC8EFC6860AAA379C (void);
// 0x000000AB System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Messages.JsonRpcBatchResponse> Solana.Unity.Rpc.SolanaRpcBatchComposer::ExecuteWithFatalFailureAsync(Solana.Unity.Rpc.IRpcClient)
extern void SolanaRpcBatchComposer_ExecuteWithFatalFailureAsync_mB9D943219BDA55932EBC7152C9F310618787F33E (void);
// 0x000000AC Solana.Unity.Rpc.Messages.JsonRpcBatchResponse Solana.Unity.Rpc.SolanaRpcBatchComposer::ProcessBatchResponse(Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.JsonRpcBatchResponse>)
extern void SolanaRpcBatchComposer_ProcessBatchResponse_mAC4B39E96EDE8562590A0D8D00C0D12020948AF3 (void);
// 0x000000AD Solana.Unity.Rpc.Messages.JsonRpcBatchResponse Solana.Unity.Rpc.SolanaRpcBatchComposer::ProcessBatchFailure(Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.JsonRpcBatchResponse>)
extern void SolanaRpcBatchComposer_ProcessBatchFailure_m7D8D28D61D18145B6E62904CFC82D81B12308F81 (void);
// 0x000000AE System.Object Solana.Unity.Rpc.SolanaRpcBatchComposer::MapJsonTypeToNativeType(System.Object,System.Type)
extern void SolanaRpcBatchComposer_MapJsonTypeToNativeType_mA2027B31403AD89C6B08EAF0B38D7C669C510186 (void);
// 0x000000AF System.Void Solana.Unity.Rpc.SolanaRpcBatchComposer::Clear()
extern void SolanaRpcBatchComposer_Clear_mACBEBAE56580347F224B3C5B6AAF9520AEB7FFA6 (void);
// 0x000000B0 System.Void Solana.Unity.Rpc.SolanaRpcBatchComposer::Flush()
extern void SolanaRpcBatchComposer_Flush_m4D40B1422F307337DE160F6EAF7DFC2A3118C3E2 (void);
// 0x000000B1 System.Void Solana.Unity.Rpc.SolanaRpcBatchComposer::AddRequest(System.String,System.Collections.Generic.IList`1<System.Object>,System.Action`2<T,System.Exception>)
// 0x000000B2 System.Threading.Tasks.Task`1<T> Solana.Unity.Rpc.SolanaRpcBatchComposer::AddRequest(System.String,System.Collections.Generic.IList`1<System.Object>)
// 0x000000B3 System.Void Solana.Unity.Rpc.SolanaRpcBatchComposer::Add(Solana.Unity.Rpc.RpcBatchReqRespItem)
extern void SolanaRpcBatchComposer_Add_m000B9E64C898975454CAB4FC4CDE53F3FC7DD8B5 (void);
// 0x000000B4 System.Action`2<Solana.Unity.Rpc.Messages.JsonRpcBatchResponseItem,System.Exception> Solana.Unity.Rpc.SolanaRpcBatchComposer::WrapCallback(System.Action`2<T,System.Exception>)
// 0x000000B5 System.Action`2<Solana.Unity.Rpc.Messages.JsonRpcBatchResponseItem,System.Exception> Solana.Unity.Rpc.SolanaRpcBatchComposer::WrapTaskSource(System.Threading.Tasks.TaskCompletionSource`1<T>)
// 0x000000B6 Solana.Unity.Rpc.Core.Http.KeyValue Solana.Unity.Rpc.SolanaRpcBatchComposer::HandleCommitment(Solana.Unity.Rpc.Types.Commitment,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcBatchComposer_HandleCommitment_m20F508410A575693EB66471132517D3AA622AB59 (void);
// 0x000000B7 System.Void Solana.Unity.Rpc.SolanaRpcBatchComposer/<>c::.cctor()
extern void U3CU3Ec__cctor_m0DDE3F6657B205D315D034AB5A4C849EF870CC13 (void);
// 0x000000B8 System.Void Solana.Unity.Rpc.SolanaRpcBatchComposer/<>c::.ctor()
extern void U3CU3Ec__ctor_mB93A2FBFF469C58638A31276C9DB1539D3C47592 (void);
// 0x000000B9 Solana.Unity.Rpc.Messages.JsonRpcRequest Solana.Unity.Rpc.SolanaRpcBatchComposer/<>c::<CreateJsonRequests>b__9_0(Solana.Unity.Rpc.RpcBatchReqRespItem)
extern void U3CU3Ec_U3CCreateJsonRequestsU3Eb__9_0_m6A83E0C715AD263CD5A20F9C754E3A928DF8EA4B (void);
// 0x000000BA System.Void Solana.Unity.Rpc.SolanaRpcBatchComposer/<>c__DisplayClass26_0`1::.ctor()
// 0x000000BB System.Void Solana.Unity.Rpc.SolanaRpcBatchComposer/<>c__DisplayClass26_0`1::<WrapCallback>b__0(Solana.Unity.Rpc.Messages.JsonRpcBatchResponseItem,System.Exception)
// 0x000000BC System.Void Solana.Unity.Rpc.SolanaRpcBatchComposer/<>c__DisplayClass27_0`1::.ctor()
// 0x000000BD System.Void Solana.Unity.Rpc.SolanaRpcBatchComposer/<>c__DisplayClass27_0`1::<WrapTaskSource>b__0(Solana.Unity.Rpc.Messages.JsonRpcBatchResponseItem,System.Exception)
// 0x000000BE System.Void Solana.Unity.Rpc.SolanaRpcBatchComposer/<ExecuteAsync>d__12::MoveNext()
extern void U3CExecuteAsyncU3Ed__12_MoveNext_m2F637C16F979AE8C29FB9E4AEF7EAF071489BD8C (void);
// 0x000000BF System.Void Solana.Unity.Rpc.SolanaRpcBatchComposer/<ExecuteAsync>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CExecuteAsyncU3Ed__12_SetStateMachine_m1BF5DEACEB000B88E9CA4594D31D6DC1F5DBED58 (void);
// 0x000000C0 System.Void Solana.Unity.Rpc.SolanaRpcBatchComposer/<ExecuteAsync>d__13::MoveNext()
extern void U3CExecuteAsyncU3Ed__13_MoveNext_mD936A1654134C05EECE48FA8819C26B7F2282B8D (void);
// 0x000000C1 System.Void Solana.Unity.Rpc.SolanaRpcBatchComposer/<ExecuteAsync>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CExecuteAsyncU3Ed__13_SetStateMachine_m96D7B9BA93CBB97CAE2A66B7C78F1050991105A1 (void);
// 0x000000C2 System.Void Solana.Unity.Rpc.SolanaRpcBatchComposer/<ExecuteWithFatalFailureAsync>d__16::MoveNext()
extern void U3CExecuteWithFatalFailureAsyncU3Ed__16_MoveNext_m72AB9CBB2C415D6E2102B6F15FF53E56A1F22516 (void);
// 0x000000C3 System.Void Solana.Unity.Rpc.SolanaRpcBatchComposer/<ExecuteWithFatalFailureAsync>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CExecuteWithFatalFailureAsyncU3Ed__16_SetStateMachine_mB8F354000925849D2705CACD633C04533EED2349 (void);
// 0x000000C4 System.Void Solana.Unity.Rpc.SolanaRpcBatchComposer/<ExecuteWithFatalFailureAsync>d__17::MoveNext()
extern void U3CExecuteWithFatalFailureAsyncU3Ed__17_MoveNext_m89DA6E27095FCB8783D40BD3EBA9E789A10D77A9 (void);
// 0x000000C5 System.Void Solana.Unity.Rpc.SolanaRpcBatchComposer/<ExecuteWithFatalFailureAsync>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CExecuteWithFatalFailureAsyncU3Ed__17_SetStateMachine_m84A26300C6E837A171DD36F119FA218C616350BE (void);
// 0x000000C6 Solana.Unity.Rpc.RpcBatchReqRespItem Solana.Unity.Rpc.RpcBatchReqRespItem::Create(System.Int32,System.String,System.Collections.Generic.IList`1<System.Object>,System.Action`2<Solana.Unity.Rpc.Messages.JsonRpcBatchResponseItem,System.Exception>)
// 0x000000C7 System.Void Solana.Unity.Rpc.RpcBatchReqRespItem::.ctor(Solana.Unity.Rpc.Messages.JsonRpcRequest,System.Type,System.Action`2<Solana.Unity.Rpc.Messages.JsonRpcBatchResponseItem,System.Exception>)
extern void RpcBatchReqRespItem__ctor_m3EA8238F86A3057D377E7A8ED18C4B721E9D358E (void);
// 0x000000C8 System.Void Solana.Unity.Rpc.SolanaRpcBatchWithCallbacks::.ctor(Solana.Unity.Rpc.IRpcClient)
extern void SolanaRpcBatchWithCallbacks__ctor_m42343DC247C822777418ABB31E2899F66FA8BF86 (void);
// 0x000000C9 Solana.Unity.Rpc.SolanaRpcBatchComposer Solana.Unity.Rpc.SolanaRpcBatchWithCallbacks::get_Composer()
extern void SolanaRpcBatchWithCallbacks_get_Composer_mD40C75AC3DB25846D85CBCB5F994CBA4103160AF (void);
// 0x000000CA System.Void Solana.Unity.Rpc.SolanaRpcBatchWithCallbacks::AutoExecute(Solana.Unity.Rpc.Types.BatchAutoExecuteMode,System.Int32)
extern void SolanaRpcBatchWithCallbacks_AutoExecute_mEAB98A8297718FBA739A6E1CDFF8ED2F59FDE04C (void);
// 0x000000CB System.Void Solana.Unity.Rpc.SolanaRpcBatchWithCallbacks::Flush()
extern void SolanaRpcBatchWithCallbacks_Flush_mC2B23802A41F8B44C4F5A076286E4AD92F932898 (void);
// 0x000000CC System.Void Solana.Unity.Rpc.SolanaRpcBatchWithCallbacks::GetBalance(System.String,Solana.Unity.Rpc.Types.Commitment,System.Action`2<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>,System.Exception>)
extern void SolanaRpcBatchWithCallbacks_GetBalance_m1CA0C3A83D714619D88C6107CAC99C24B4D74BA7 (void);
// 0x000000CD System.Void Solana.Unity.Rpc.SolanaRpcBatchWithCallbacks::GetTokenAccountsByOwner(System.String,System.String,System.String,Solana.Unity.Rpc.Types.Commitment,System.Action`2<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>,System.Exception>)
extern void SolanaRpcBatchWithCallbacks_GetTokenAccountsByOwner_m3BAD3D561884939F162540DCFB827BBEAA255E41 (void);
// 0x000000CE System.Void Solana.Unity.Rpc.SolanaRpcBatchWithCallbacks::GetSignaturesForAddress(System.String,System.UInt64,System.String,System.String,Solana.Unity.Rpc.Types.Commitment,System.Action`2<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.SignatureStatusInfo>,System.Exception>)
extern void SolanaRpcBatchWithCallbacks_GetSignaturesForAddress_m322A3E8E8554A16770C3FF3D07B5FE8374AD152C (void);
// 0x000000CF System.Void Solana.Unity.Rpc.SolanaRpcBatchWithCallbacks::GetConfirmedSignaturesForAddress2(System.String,System.UInt64,System.String,System.String,Solana.Unity.Rpc.Types.Commitment,System.Action`2<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.SignatureStatusInfo>,System.Exception>)
extern void SolanaRpcBatchWithCallbacks_GetConfirmedSignaturesForAddress2_m1262BB622F8732D0FECEEBBF6C66D938DCC4CA0D (void);
// 0x000000D0 System.Void Solana.Unity.Rpc.SolanaRpcBatchWithCallbacks::GetProgramAccounts(System.String,Solana.Unity.Rpc.Types.Commitment,System.Nullable`1<System.Int32>,System.Collections.Generic.IList`1<Solana.Unity.Rpc.Models.MemCmp>,System.Action`2<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>,System.Exception>)
extern void SolanaRpcBatchWithCallbacks_GetProgramAccounts_m62652CAC5B2A636E95E66C50DA538C79742957AA (void);
// 0x000000D1 System.Void Solana.Unity.Rpc.SolanaRpcBatchWithCallbacks::GetTransaction(System.String,Solana.Unity.Rpc.Types.Commitment,System.Action`2<Solana.Unity.Rpc.Models.TransactionMetaSlotInfo,System.Exception>)
extern void SolanaRpcBatchWithCallbacks_GetTransaction_mF0D17D0286EEC89DF4C831F47113C58BF99F24E3 (void);
// 0x000000D2 System.Void Solana.Unity.Rpc.SolanaRpcBatchWithCallbacks::GetAccountInfo(System.String,Solana.Unity.Rpc.Types.Commitment,Solana.Unity.Rpc.Types.BinaryEncoding,System.Action`2<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>,System.Exception>)
extern void SolanaRpcBatchWithCallbacks_GetAccountInfo_mB1B732869A79B9E5FC6629EE2AA5A534D212E9FA (void);
// 0x000000D3 System.Void Solana.Unity.Rpc.SolanaRpcBatchWithCallbacks::GetTokenLargestAccounts(System.String,Solana.Unity.Rpc.Types.Commitment,System.Action`2<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.LargeTokenAccount>>,System.Exception>)
extern void SolanaRpcBatchWithCallbacks_GetTokenLargestAccounts_m1FAE84F8A5F57EA130448D06459490C2C71824A3 (void);
// 0x000000D4 System.Void Solana.Unity.Rpc.SolanaRpcBatchWithCallbacks::SendTransaction(System.Byte[],System.Boolean,Solana.Unity.Rpc.Types.Commitment,System.Action`2<System.String,System.Exception>)
extern void SolanaRpcBatchWithCallbacks_SendTransaction_m04D18299043C79DA0AB2C625FF365895BAC6492D (void);
// 0x000000D5 System.Void Solana.Unity.Rpc.SolanaRpcBatchWithCallbacks::SendTransaction(System.String,System.Boolean,Solana.Unity.Rpc.Types.Commitment,System.Action`2<System.String,System.Exception>)
extern void SolanaRpcBatchWithCallbacks_SendTransaction_mA306D4BE6390044C7C79F1AE15BA01DC2BA99260 (void);
// 0x000000D6 System.Void Solana.Unity.Rpc.SolanaRpcBatchWithCallbacks::GetMultipleAccounts(System.Collections.Generic.IList`1<System.String>,Solana.Unity.Rpc.Types.Commitment,System.Action`2<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>,System.Exception>)
extern void SolanaRpcBatchWithCallbacks_GetMultipleAccounts_mB19C20C7F77EF2208FB5830061EFEAB90BE5961C (void);
// 0x000000D7 System.Void Solana.Unity.Rpc.SolanaRpcBatchWithCallbacks::GetTokenAccountInfo(System.String,Solana.Unity.Rpc.Types.Commitment,System.Action`2<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenAccountInfo>,System.Exception>)
extern void SolanaRpcBatchWithCallbacks_GetTokenAccountInfo_m2A6FD2AB88CC643F954DD18544F47B0B6FEF3877 (void);
// 0x000000D8 Solana.Unity.Rpc.Core.Http.KeyValue Solana.Unity.Rpc.SolanaRpcBatchWithCallbacks::HandleCommitment(Solana.Unity.Rpc.Types.Commitment,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcBatchWithCallbacks_HandleCommitment_m96043A9ABD6E06C3FFE0FB3360EA3D257BCAF06E (void);
// 0x000000D9 System.Void Solana.Unity.Rpc.SolanaRpcBatchWithCallbacks/<>c::.cctor()
extern void U3CU3Ec__cctor_m8DE37FFA7A87534A04A926D0EE467F6B12F9975A (void);
// 0x000000DA System.Void Solana.Unity.Rpc.SolanaRpcBatchWithCallbacks/<>c::.ctor()
extern void U3CU3Ec__ctor_m0018B226C96C793B19B69E651014596D8F095F9E (void);
// 0x000000DB System.Collections.Generic.Dictionary`2<System.String,System.Object> Solana.Unity.Rpc.SolanaRpcBatchWithCallbacks/<>c::<GetProgramAccounts>b__10_0(Solana.Unity.Rpc.Models.MemCmp)
extern void U3CU3Ec_U3CGetProgramAccountsU3Eb__10_0_mEA5DBCAE76F7A60D53DAB2CBF3FDCE2C9E3BA14B (void);
// 0x000000DC System.Void Solana.Unity.Rpc.SolanaRpcClient::.ctor(System.String,System.Object,System.Net.Http.HttpClient,Solana.Unity.Rpc.Utilities.IRateLimiter)
extern void SolanaRpcClient__ctor_mAAD32D3A5DD16EF1FE662F57792C7592CA372B36 (void);
// 0x000000DD Solana.Unity.Rpc.Messages.JsonRpcRequest Solana.Unity.Rpc.SolanaRpcClient::BuildRequest(System.String,System.Collections.Generic.IList`1<System.Object>)
// 0x000000DE System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<T>> Solana.Unity.Rpc.SolanaRpcClient::SendRequestAsync(System.String)
// 0x000000DF System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<T>> Solana.Unity.Rpc.SolanaRpcClient::SendRequestAsync(System.String,System.Collections.Generic.IList`1<System.Object>)
// 0x000000E0 Solana.Unity.Rpc.Core.Http.KeyValue Solana.Unity.Rpc.SolanaRpcClient::HandleCommitment(Solana.Unity.Rpc.Types.Commitment,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_HandleCommitment_mB09CA8C9C404B4908BD7F9CDA98A244F7A885214 (void);
// 0x000000E1 Solana.Unity.Rpc.Core.Http.KeyValue Solana.Unity.Rpc.SolanaRpcClient::HandleTransactionDetails(Solana.Unity.Rpc.Types.TransactionDetailsFilterType,Solana.Unity.Rpc.Types.TransactionDetailsFilterType)
extern void SolanaRpcClient_HandleTransactionDetails_m96C309C48DFB2B9F0BC47E9CB41F64D8A625FD8F (void);
// 0x000000E2 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenMintInfo>>> Solana.Unity.Rpc.SolanaRpcClient::GetTokenMintInfoAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetTokenMintInfoAsync_m9165D303AADE0CDA12B890AE52359FBA9A61A26F (void);
// 0x000000E3 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenMintInfo>> Solana.Unity.Rpc.SolanaRpcClient::GetTokenMintInfo(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetTokenMintInfo_m69FE046AE3E5EDC4C24858C8066346247F24D8B9 (void);
// 0x000000E4 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenAccountInfo>>> Solana.Unity.Rpc.SolanaRpcClient::GetTokenAccountInfoAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetTokenAccountInfoAsync_mE6E9AC4C06181D8D208C943B30ADCC9537008CA9 (void);
// 0x000000E5 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenAccountInfo>> Solana.Unity.Rpc.SolanaRpcClient::GetTokenAccountInfo(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetTokenAccountInfo_m548D353E28689D0B1AC2C156BC0E4F040F38AB9D (void);
// 0x000000E6 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>> Solana.Unity.Rpc.SolanaRpcClient::GetAccountInfoAsync(System.String,Solana.Unity.Rpc.Types.Commitment,Solana.Unity.Rpc.Types.BinaryEncoding)
extern void SolanaRpcClient_GetAccountInfoAsync_m118C1D4B37B48486DB931BB8F08DD8EB810468AB (void);
// 0x000000E7 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>> Solana.Unity.Rpc.SolanaRpcClient::GetAccountInfo(System.String,Solana.Unity.Rpc.Types.Commitment,Solana.Unity.Rpc.Types.BinaryEncoding)
extern void SolanaRpcClient_GetAccountInfo_m43D602763B212ED3D9FE317A534F7D2767D6B34D (void);
// 0x000000E8 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>>> Solana.Unity.Rpc.SolanaRpcClient::GetProgramAccountsAsync(System.String,Solana.Unity.Rpc.Types.Commitment,System.Nullable`1<System.Int32>,System.Collections.Generic.IList`1<Solana.Unity.Rpc.Models.MemCmp>)
extern void SolanaRpcClient_GetProgramAccountsAsync_m76D133181D3FFFA58F5C91558FA2B07A71653C73 (void);
// 0x000000E9 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountKeyPair>> Solana.Unity.Rpc.SolanaRpcClient::GetProgramAccounts(System.String,Solana.Unity.Rpc.Types.Commitment,System.Nullable`1<System.Int32>,System.Collections.Generic.IList`1<Solana.Unity.Rpc.Models.MemCmp>)
extern void SolanaRpcClient_GetProgramAccounts_m84EA7113A44A8B5369FA416D5F0CA9D955DB5490 (void);
// 0x000000EA System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>>> Solana.Unity.Rpc.SolanaRpcClient::GetMultipleAccountsAsync(System.Collections.Generic.IList`1<System.String>,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetMultipleAccountsAsync_m2A5E48F037105ACEBA26BAE528796C8A17C29386 (void);
// 0x000000EB Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountInfo>>> Solana.Unity.Rpc.SolanaRpcClient::GetMultipleAccounts(System.Collections.Generic.IList`1<System.String>,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetMultipleAccounts_m9E2816CB6F611565CB4BA3E38DA1D236864202CC (void);
// 0x000000EC System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>>> Solana.Unity.Rpc.SolanaRpcClient::GetBalanceAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetBalanceAsync_m64CA73D202387406DC6AC62D767F3EA45F047E4B (void);
// 0x000000ED Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.UInt64>> Solana.Unity.Rpc.SolanaRpcClient::GetBalance(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetBalance_mD11AC872E03C9657D99849F46B42A1F56A5172F4 (void);
// 0x000000EE System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.BlockInfo>> Solana.Unity.Rpc.SolanaRpcClient::GetBlockAsync(System.UInt64,Solana.Unity.Rpc.Types.Commitment,Solana.Unity.Rpc.Types.TransactionDetailsFilterType,System.Boolean)
extern void SolanaRpcClient_GetBlockAsync_m459CAFD5BB7F52650122C4584B5D013473914B21 (void);
// 0x000000EF Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.BlockInfo> Solana.Unity.Rpc.SolanaRpcClient::GetBlock(System.UInt64,Solana.Unity.Rpc.Types.Commitment,Solana.Unity.Rpc.Types.TransactionDetailsFilterType,System.Boolean)
extern void SolanaRpcClient_GetBlock_m6BBF41956E7A1EB69AB3CFBFB9427F33E9327CF7 (void);
// 0x000000F0 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<System.UInt64>>> Solana.Unity.Rpc.SolanaRpcClient::GetBlocksAsync(System.UInt64,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetBlocksAsync_m4B55945AEA7176DB4FF3F65F813742711539A271 (void);
// 0x000000F1 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.BlockInfo>> Solana.Unity.Rpc.SolanaRpcClient::GetConfirmedBlockAsync(System.UInt64,Solana.Unity.Rpc.Types.Commitment,Solana.Unity.Rpc.Types.TransactionDetailsFilterType,System.Boolean)
extern void SolanaRpcClient_GetConfirmedBlockAsync_m9AF16D8AADF887DB9953E46A99C34894B23B8C8A (void);
// 0x000000F2 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.BlockInfo> Solana.Unity.Rpc.SolanaRpcClient::GetConfirmedBlock(System.UInt64,Solana.Unity.Rpc.Types.Commitment,Solana.Unity.Rpc.Types.TransactionDetailsFilterType,System.Boolean)
extern void SolanaRpcClient_GetConfirmedBlock_m9A284513BC8AF7404C87879FD8A6F0EE73B5C4BC (void);
// 0x000000F3 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<System.UInt64>> Solana.Unity.Rpc.SolanaRpcClient::GetBlocks(System.UInt64,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetBlocks_m1C14008AA328CB1A37971DF0396E26C3893B78DF (void);
// 0x000000F4 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<System.UInt64>>> Solana.Unity.Rpc.SolanaRpcClient::GetConfirmedBlocksAsync(System.UInt64,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetConfirmedBlocksAsync_mA3B31FF03C24289787EE48FA59C80F87773A4D5C (void);
// 0x000000F5 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<System.UInt64>> Solana.Unity.Rpc.SolanaRpcClient::GetConfirmedBlocks(System.UInt64,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetConfirmedBlocks_mAA98E71CD31983BDB23AC1B49A51DE882EA518A8 (void);
// 0x000000F6 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<System.UInt64>>> Solana.Unity.Rpc.SolanaRpcClient::GetConfirmedBlocksWithLimitAsync(System.UInt64,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetConfirmedBlocksWithLimitAsync_mB27A9EED656776C2E88296191886876202683A29 (void);
// 0x000000F7 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<System.UInt64>> Solana.Unity.Rpc.SolanaRpcClient::GetBlocksWithLimit(System.UInt64,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetBlocksWithLimit_mF6B2EDEDB0891DB41C3D37EC190ABC8CC3176BC5 (void);
// 0x000000F8 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<System.UInt64>> Solana.Unity.Rpc.SolanaRpcClient::GetConfirmedBlocksWithLimit(System.UInt64,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetConfirmedBlocksWithLimit_m581C3604B5AB1D840DCED82ECFBF5E11ED6D16ED (void);
// 0x000000F9 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<System.UInt64>>> Solana.Unity.Rpc.SolanaRpcClient::GetBlocksWithLimitAsync(System.UInt64,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetBlocksWithLimitAsync_m2776DC7F083DDDEF7FCA81B90DE201C3830C3CA6 (void);
// 0x000000FA Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64> Solana.Unity.Rpc.SolanaRpcClient::GetFirstAvailableBlock()
extern void SolanaRpcClient_GetFirstAvailableBlock_mAD098F2BD40454C7587F582625F5EDAE4D06F5A5 (void);
// 0x000000FB System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64>> Solana.Unity.Rpc.SolanaRpcClient::GetFirstAvailableBlockAsync()
extern void SolanaRpcClient_GetFirstAvailableBlockAsync_mCC31128CBF16D334ADE8E1118843CA5D05A2A100 (void);
// 0x000000FC System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockProductionInfo>>> Solana.Unity.Rpc.SolanaRpcClient::GetBlockProductionAsync(System.String,System.Nullable`1<System.UInt64>,System.Nullable`1<System.UInt64>,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetBlockProductionAsync_m6D062C4EB32337E3B2A1FF995789E51D2B2DC092 (void);
// 0x000000FD Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockProductionInfo>> Solana.Unity.Rpc.SolanaRpcClient::GetBlockProduction(System.String,System.Nullable`1<System.UInt64>,System.Nullable`1<System.UInt64>,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetBlockProduction_m9AE62520E67B7AA753766D1BC7D1BE1211512349 (void);
// 0x000000FE Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String> Solana.Unity.Rpc.SolanaRpcClient::GetHealth()
extern void SolanaRpcClient_GetHealth_mDC820A00E695C00406E5593D13844E5BB48E4D5C (void);
// 0x000000FF System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Rpc.SolanaRpcClient::GetHealthAsync()
extern void SolanaRpcClient_GetHealthAsync_m5E33B5974035B385A44F4B23F1B2CB5126DE2C21 (void);
// 0x00000100 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.UInt64>>> Solana.Unity.Rpc.SolanaRpcClient::GetLeaderSchedule(System.UInt64,System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetLeaderSchedule_m2843E2267009D4EC3D5703096B1A1E509278617C (void);
// 0x00000101 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.UInt64>>>> Solana.Unity.Rpc.SolanaRpcClient::GetLeaderScheduleAsync(System.UInt64,System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetLeaderScheduleAsync_m5168D6C4DF3BC4C214F7281E2ED8DFDBCE64E850 (void);
// 0x00000102 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.TransactionMetaSlotInfo>> Solana.Unity.Rpc.SolanaRpcClient::GetTransactionAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetTransactionAsync_m031450661BFDD82AAC3773A2F57D7F7559C830C2 (void);
// 0x00000103 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.TransactionMetaSlotInfo>> Solana.Unity.Rpc.SolanaRpcClient::GetConfirmedTransactionAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetConfirmedTransactionAsync_mD88615024D91109065B17196F6D82B88D285EC24 (void);
// 0x00000104 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.TransactionMetaSlotInfo> Solana.Unity.Rpc.SolanaRpcClient::GetTransaction(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetTransaction_m6DCA8E5059735B33E9AF50DDBE71A19EC207BE5A (void);
// 0x00000105 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.TransactionMetaSlotInfo> Solana.Unity.Rpc.SolanaRpcClient::GetConfirmedTransaction(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetConfirmedTransaction_m4FDE8C595F7A0587D3043FFD9BB934EE674C37DD (void);
// 0x00000106 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64>> Solana.Unity.Rpc.SolanaRpcClient::GetBlockHeightAsync(Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetBlockHeightAsync_mA1F42FD3C0A26517EBE39F5C41072E44AE54485F (void);
// 0x00000107 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64> Solana.Unity.Rpc.SolanaRpcClient::GetBlockHeight(Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetBlockHeight_mADCC2982935DFCE2608B078103A5FC2D02C4BE1B (void);
// 0x00000108 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.BlockCommitment>> Solana.Unity.Rpc.SolanaRpcClient::GetBlockCommitmentAsync(System.UInt64)
extern void SolanaRpcClient_GetBlockCommitmentAsync_m26DED250DD258F2D7591686114E3D2903E2EAD85 (void);
// 0x00000109 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.BlockCommitment> Solana.Unity.Rpc.SolanaRpcClient::GetBlockCommitment(System.UInt64)
extern void SolanaRpcClient_GetBlockCommitment_m9A659C54427A52E8B92938820E92371C6E0765A7 (void);
// 0x0000010A System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64>> Solana.Unity.Rpc.SolanaRpcClient::GetBlockTimeAsync(System.UInt64)
extern void SolanaRpcClient_GetBlockTimeAsync_m075D86A5F985B60F7C4C56E52BC7F754BD0CA87F (void);
// 0x0000010B Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64> Solana.Unity.Rpc.SolanaRpcClient::GetBlockTime(System.UInt64)
extern void SolanaRpcClient_GetBlockTime_mB201ACA4747B0D7497975BE8573A864CAF0B6AF4 (void);
// 0x0000010C System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.ClusterNode>>> Solana.Unity.Rpc.SolanaRpcClient::GetClusterNodesAsync()
extern void SolanaRpcClient_GetClusterNodesAsync_mCC4A66C6F5ED16B0D3BE8C03268E611AA5242388 (void);
// 0x0000010D Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.ClusterNode>> Solana.Unity.Rpc.SolanaRpcClient::GetClusterNodes()
extern void SolanaRpcClient_GetClusterNodes_m7A92FBFE7CB8AF7B680D8FC4769DCBF8873416CA (void);
// 0x0000010E System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.EpochInfo>> Solana.Unity.Rpc.SolanaRpcClient::GetEpochInfoAsync(Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetEpochInfoAsync_mB8E244C9E9C34E17CCF85A22C998365859DC8542 (void);
// 0x0000010F Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.EpochInfo> Solana.Unity.Rpc.SolanaRpcClient::GetEpochInfo(Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetEpochInfo_m1232EA6CF03A25CD43EDF3960F66317B0D8C777D (void);
// 0x00000110 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.EpochScheduleInfo>> Solana.Unity.Rpc.SolanaRpcClient::GetEpochScheduleAsync()
extern void SolanaRpcClient_GetEpochScheduleAsync_mEB2111A6C9572AB3F2450785345CFDFB4EA6E738 (void);
// 0x00000111 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.EpochScheduleInfo> Solana.Unity.Rpc.SolanaRpcClient::GetEpochSchedule()
extern void SolanaRpcClient_GetEpochSchedule_m02FDCA488121B4DBC01B912D89C1008D9EAD9204 (void);
// 0x00000112 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.FeeCalculatorInfo>>> Solana.Unity.Rpc.SolanaRpcClient::GetFeeCalculatorForBlockhashAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetFeeCalculatorForBlockhashAsync_m75B74302258AFB3588FA0279F565B8AA642A6070 (void);
// 0x00000113 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.FeeCalculatorInfo>> Solana.Unity.Rpc.SolanaRpcClient::GetFeeCalculatorForBlockhash(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetFeeCalculatorForBlockhash_m2192BD26596D159506087C9B942EB5CB34658EAA (void);
// 0x00000114 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.FeeRateGovernorInfo>>> Solana.Unity.Rpc.SolanaRpcClient::GetFeeRateGovernorAsync()
extern void SolanaRpcClient_GetFeeRateGovernorAsync_m10A8CC8B4DA36ADAF204599E81B59DB41A59E4F0 (void);
// 0x00000115 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.FeeRateGovernorInfo>> Solana.Unity.Rpc.SolanaRpcClient::GetFeeRateGovernor()
extern void SolanaRpcClient_GetFeeRateGovernor_mC01661B1F7FB4905A866E86DF61EEA2E4748387E (void);
// 0x00000116 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.FeesInfo>>> Solana.Unity.Rpc.SolanaRpcClient::GetFeesAsync(Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetFeesAsync_m03B8A676F179BFF7D345B78C4E5D6429F2226EF0 (void);
// 0x00000117 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.FeesInfo>> Solana.Unity.Rpc.SolanaRpcClient::GetFees(Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetFees_m6EEF1AC6B1218F0F46B9D9719EE932C1CD9153D2 (void);
// 0x00000118 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>>> Solana.Unity.Rpc.SolanaRpcClient::GetRecentBlockHashAsync(Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetRecentBlockHashAsync_m2A8D0C5F5A07723124A4BB67E6F6D9404B5C3B82 (void);
// 0x00000119 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.BlockHash>> Solana.Unity.Rpc.SolanaRpcClient::GetRecentBlockHash(Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetRecentBlockHash_mBBBFEBEE4F7D86031D247F7D735E3A36B2E43934 (void);
// 0x0000011A System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64>> Solana.Unity.Rpc.SolanaRpcClient::GetMaxRetransmitSlotAsync()
extern void SolanaRpcClient_GetMaxRetransmitSlotAsync_mC129131A00686CCD95DE8219E89D9924A630401B (void);
// 0x0000011B Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64> Solana.Unity.Rpc.SolanaRpcClient::GetMaxRetransmitSlot()
extern void SolanaRpcClient_GetMaxRetransmitSlot_m4D7BBA42850A8120E4798497CC22F132B763B5E9 (void);
// 0x0000011C System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64>> Solana.Unity.Rpc.SolanaRpcClient::GetMaxShredInsertSlotAsync()
extern void SolanaRpcClient_GetMaxShredInsertSlotAsync_m0D4A7F8A6EC164340E386DD85B2BD9F8B331F61E (void);
// 0x0000011D Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64> Solana.Unity.Rpc.SolanaRpcClient::GetMaxShredInsertSlot()
extern void SolanaRpcClient_GetMaxShredInsertSlot_m4BEF93020E6985F9E5A13A3597217A87397BC7C2 (void);
// 0x0000011E System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64>> Solana.Unity.Rpc.SolanaRpcClient::GetMinimumBalanceForRentExemptionAsync(System.Int64,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetMinimumBalanceForRentExemptionAsync_m84FFCDFD0CF17529AC439FDE8856BD99F4FD1BBE (void);
// 0x0000011F Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64> Solana.Unity.Rpc.SolanaRpcClient::GetMinimumBalanceForRentExemption(System.Int64,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetMinimumBalanceForRentExemption_m157369BD9297B7B319518AEB0E4C7C3E5F5C3ED4 (void);
// 0x00000120 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Rpc.SolanaRpcClient::GetGenesisHashAsync()
extern void SolanaRpcClient_GetGenesisHashAsync_mD0AD32F4A17FB0064F43F3095E483266DF90247D (void);
// 0x00000121 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String> Solana.Unity.Rpc.SolanaRpcClient::GetGenesisHash()
extern void SolanaRpcClient_GetGenesisHash_mC5EFFEA6E0BD5EACDA0AA024D79287DA2D96782C (void);
// 0x00000122 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.NodeIdentity>> Solana.Unity.Rpc.SolanaRpcClient::GetIdentityAsync()
extern void SolanaRpcClient_GetIdentityAsync_mCC0D4F597DC6FC5C388AF91173D3721F3E246C52 (void);
// 0x00000123 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.NodeIdentity> Solana.Unity.Rpc.SolanaRpcClient::GetIdentity()
extern void SolanaRpcClient_GetIdentity_m210E7ABD55264679616C96164F1A8F38CD288212 (void);
// 0x00000124 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.InflationGovernor>> Solana.Unity.Rpc.SolanaRpcClient::GetInflationGovernorAsync(Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetInflationGovernorAsync_m41B08286810E3DB8FCF0DDCA2E9F0D91B4859D54 (void);
// 0x00000125 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.InflationGovernor> Solana.Unity.Rpc.SolanaRpcClient::GetInflationGovernor(Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetInflationGovernor_mADA745A5AD59C05169F0E0D2B5A44AA27DBE58C7 (void);
// 0x00000126 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.InflationRate>> Solana.Unity.Rpc.SolanaRpcClient::GetInflationRateAsync()
extern void SolanaRpcClient_GetInflationRateAsync_m179BCD8C913C69EA32F8B40DBE5A1D1643862AC8 (void);
// 0x00000127 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.InflationRate> Solana.Unity.Rpc.SolanaRpcClient::GetInflationRate()
extern void SolanaRpcClient_GetInflationRate_mC02655F1B5FB004DDAA4A17FAE56D7D9B3BFE084 (void);
// 0x00000128 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.InflationReward>>> Solana.Unity.Rpc.SolanaRpcClient::GetInflationRewardAsync(System.Collections.Generic.IList`1<System.String>,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetInflationRewardAsync_m5A23CB44D0AC66FEE1FE2B90E158C32FF6816160 (void);
// 0x00000129 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.InflationReward>> Solana.Unity.Rpc.SolanaRpcClient::GetInflationReward(System.Collections.Generic.IList`1<System.String>,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetInflationReward_m1C0FEE9D877D8E4867C296011CF192C585EAE337 (void);
// 0x0000012A System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.LargeAccount>>>> Solana.Unity.Rpc.SolanaRpcClient::GetLargestAccountsAsync(System.Nullable`1<Solana.Unity.Rpc.Types.AccountFilterType>,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetLargestAccountsAsync_m6477F4B64BB383F9DB81814BE08BE44892369033 (void);
// 0x0000012B Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.LargeAccount>>> Solana.Unity.Rpc.SolanaRpcClient::GetLargestAccounts(System.Nullable`1<Solana.Unity.Rpc.Types.AccountFilterType>,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetLargestAccounts_m7E85864D0A3265930378E543785CA86981EB37E9 (void);
// 0x0000012C System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64>> Solana.Unity.Rpc.SolanaRpcClient::GetSnapshotSlotAsync()
extern void SolanaRpcClient_GetSnapshotSlotAsync_mFABECC0B2BFE762564CA5BD7F367018757231B6A (void);
// 0x0000012D Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64> Solana.Unity.Rpc.SolanaRpcClient::GetSnapshotSlot()
extern void SolanaRpcClient_GetSnapshotSlot_mD30DC2CB9D585DD9C88CF7C0EE4A8CC717DF07B9 (void);
// 0x0000012E System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.PerformanceSample>>> Solana.Unity.Rpc.SolanaRpcClient::GetRecentPerformanceSamplesAsync(System.UInt64)
extern void SolanaRpcClient_GetRecentPerformanceSamplesAsync_mC86FC0AD9F25334CC3300B82281EA3E584BAE14A (void);
// 0x0000012F Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.PerformanceSample>> Solana.Unity.Rpc.SolanaRpcClient::GetRecentPerformanceSamples(System.UInt64)
extern void SolanaRpcClient_GetRecentPerformanceSamples_m2FD473F305863C38AEF791482BE82C48558805A2 (void);
// 0x00000130 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.SignatureStatusInfo>>> Solana.Unity.Rpc.SolanaRpcClient::GetSignaturesForAddressAsync(System.String,System.UInt64,System.String,System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetSignaturesForAddressAsync_m10C533CD0E6DEA552BEB9E9BD1AEDE6A2A4EB826 (void);
// 0x00000131 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.SignatureStatusInfo>>> Solana.Unity.Rpc.SolanaRpcClient::GetConfirmedSignaturesForAddress2Async(System.String,System.UInt64,System.String,System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetConfirmedSignaturesForAddress2Async_mF0882DD8F7A46E1C1DC974BD4C791870F96D0DFD (void);
// 0x00000132 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.SignatureStatusInfo>> Solana.Unity.Rpc.SolanaRpcClient::GetSignaturesForAddress(System.String,System.UInt64,System.String,System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetSignaturesForAddress_m4FE42F246E22440677AE265022B1A2EF374E7165 (void);
// 0x00000133 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.SignatureStatusInfo>> Solana.Unity.Rpc.SolanaRpcClient::GetConfirmedSignaturesForAddress2(System.String,System.UInt64,System.String,System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetConfirmedSignaturesForAddress2_m20E6E1BE0A3013C0635EEA600C13CC9F50088DF5 (void);
// 0x00000134 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.SignatureStatusInfo>>>> Solana.Unity.Rpc.SolanaRpcClient::GetSignatureStatusesAsync(System.Collections.Generic.List`1<System.String>,System.Boolean)
extern void SolanaRpcClient_GetSignatureStatusesAsync_m08A013D4A56757B3BD5EEC96E6D5F1810A73297F (void);
// 0x00000135 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.SignatureStatusInfo>>> Solana.Unity.Rpc.SolanaRpcClient::GetSignatureStatuses(System.Collections.Generic.List`1<System.String>,System.Boolean)
extern void SolanaRpcClient_GetSignatureStatuses_mFB0B81640637532412B16B7064AF42D8D0AFD8F2 (void);
// 0x00000136 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64>> Solana.Unity.Rpc.SolanaRpcClient::GetSlotAsync(Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetSlotAsync_m63A07A6ED145DC8EA775A817231D6FF7745CE0F8 (void);
// 0x00000137 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64> Solana.Unity.Rpc.SolanaRpcClient::GetSlot(Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetSlot_m12E6C10AA3A71E36902218500A6EF548F1181C10 (void);
// 0x00000138 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Rpc.SolanaRpcClient::GetSlotLeaderAsync(Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetSlotLeaderAsync_mB604C60E48B7385A6BA3FDC4793B02394EF74C21 (void);
// 0x00000139 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String> Solana.Unity.Rpc.SolanaRpcClient::GetSlotLeader(Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetSlotLeader_m85117C373C7E9755E4450D2568400E36AE4EBBDD (void);
// 0x0000013A System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<System.String>>> Solana.Unity.Rpc.SolanaRpcClient::GetSlotLeadersAsync(System.UInt64,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetSlotLeadersAsync_mF89BFD2EA2CA1E9E731E416B8EBEAF21A0FC3C34 (void);
// 0x0000013B Solana.Unity.Rpc.Core.Http.RequestResult`1<System.Collections.Generic.List`1<System.String>> Solana.Unity.Rpc.SolanaRpcClient::GetSlotLeaders(System.UInt64,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetSlotLeaders_mC4F141A828AAA929E7B8654F9C75BCC2E75C469C (void);
// 0x0000013C System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.StakeActivationInfo>> Solana.Unity.Rpc.SolanaRpcClient::GetStakeActivationAsync(System.String,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetStakeActivationAsync_m275A1AF221756C3EAFFBE70C45FDE86CE7575201 (void);
// 0x0000013D Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.StakeActivationInfo> Solana.Unity.Rpc.SolanaRpcClient::GetStakeActivation(System.String,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetStakeActivation_mDA69D6A3BB68C16C592383D0B75424660520A4AD (void);
// 0x0000013E System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.Supply>>> Solana.Unity.Rpc.SolanaRpcClient::GetSupplyAsync(Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetSupplyAsync_m5F51D44206627F89BE3C7D815B932A80EFD7DC18 (void);
// 0x0000013F Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.Supply>> Solana.Unity.Rpc.SolanaRpcClient::GetSupply(Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetSupply_mC457E91D1E13992CB49E7ADD221D2604DA5F9994 (void);
// 0x00000140 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenBalance>>> Solana.Unity.Rpc.SolanaRpcClient::GetTokenAccountBalanceAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetTokenAccountBalanceAsync_mF6C82580EB5AD7893A3DCEA7D62F430EBE36FB3E (void);
// 0x00000141 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenBalance>> Solana.Unity.Rpc.SolanaRpcClient::GetTokenAccountBalance(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetTokenAccountBalance_m0E2569EE991095AC23797AB19177EC4BA57B82CC (void);
// 0x00000142 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>> Solana.Unity.Rpc.SolanaRpcClient::GetTokenAccountsByDelegateAsync(System.String,System.String,System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetTokenAccountsByDelegateAsync_m85CA1F19ECB0FCD9AACBC76331704CA56F74A617 (void);
// 0x00000143 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>> Solana.Unity.Rpc.SolanaRpcClient::GetTokenAccountsByDelegate(System.String,System.String,System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetTokenAccountsByDelegate_m17F40AE93CE5FE1113799DCE5303BA6E9462CEC9 (void);
// 0x00000144 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>>> Solana.Unity.Rpc.SolanaRpcClient::GetTokenAccountsByOwnerAsync(System.String,System.String,System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetTokenAccountsByOwnerAsync_m20CF87E0F3DE7AD038CFA8D92B701D6501D9535F (void);
// 0x00000145 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TokenAccount>>> Solana.Unity.Rpc.SolanaRpcClient::GetTokenAccountsByOwner(System.String,System.String,System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetTokenAccountsByOwner_m4701DBDB4634DF60427EF7C06BE3CDF7C55D19BA (void);
// 0x00000146 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.LargeTokenAccount>>>> Solana.Unity.Rpc.SolanaRpcClient::GetTokenLargestAccountsAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetTokenLargestAccountsAsync_m41BB7A596E1FF79AF8E0E8E17F23F9524FD23866 (void);
// 0x00000147 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.LargeTokenAccount>>> Solana.Unity.Rpc.SolanaRpcClient::GetTokenLargestAccounts(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetTokenLargestAccounts_mAB3E1A8848080A1E362535A41F899D9C86B68B14 (void);
// 0x00000148 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenBalance>>> Solana.Unity.Rpc.SolanaRpcClient::GetTokenSupplyAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetTokenSupplyAsync_m6170DECBB9180F44C0C33F3028B53E1F33080E58 (void);
// 0x00000149 Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenBalance>> Solana.Unity.Rpc.SolanaRpcClient::GetTokenSupply(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetTokenSupply_mCAC9E11A456E1A43EBB5F5BA2FB22A29E0F653B8 (void);
// 0x0000014A System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64>> Solana.Unity.Rpc.SolanaRpcClient::GetTransactionCountAsync(Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetTransactionCountAsync_m4E24C6D9299C3B799070D3A8F58DE68B863D08E5 (void);
// 0x0000014B Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64> Solana.Unity.Rpc.SolanaRpcClient::GetTransactionCount(Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetTransactionCount_m0A0AA118468321A990C02508724480A858675CB8 (void);
// 0x0000014C System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.NodeVersion>> Solana.Unity.Rpc.SolanaRpcClient::GetVersionAsync()
extern void SolanaRpcClient_GetVersionAsync_m54367044592AA2827D4AD6977686760F226BB050 (void);
// 0x0000014D Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.NodeVersion> Solana.Unity.Rpc.SolanaRpcClient::GetVersion()
extern void SolanaRpcClient_GetVersion_m8B97A14FEEFCD6906AAA482DE65FF869C05AAAAF (void);
// 0x0000014E System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.VoteAccounts>> Solana.Unity.Rpc.SolanaRpcClient::GetVoteAccountsAsync(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetVoteAccountsAsync_mEC3151BA197A689AF88FF6D91996A9933D27E684 (void);
// 0x0000014F Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Models.VoteAccounts> Solana.Unity.Rpc.SolanaRpcClient::GetVoteAccounts(System.String,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_GetVoteAccounts_mEBFB38DC9878BC6BCD01EE5003B982D8D266AD55 (void);
// 0x00000150 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64>> Solana.Unity.Rpc.SolanaRpcClient::GetMinimumLedgerSlotAsync()
extern void SolanaRpcClient_GetMinimumLedgerSlotAsync_m7B70DA81D76168BBB8312260F92AA5A54CF1F8E3 (void);
// 0x00000151 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.UInt64> Solana.Unity.Rpc.SolanaRpcClient::GetMinimumLedgerSlot()
extern void SolanaRpcClient_GetMinimumLedgerSlot_m1FBBC9C80C59D1DDA4154C993E10CA8720E15A25 (void);
// 0x00000152 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Rpc.SolanaRpcClient::RequestAirdropAsync(System.String,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_RequestAirdropAsync_m7B135C1A2213CF9C0D31E2F6FC054F17398C13A7 (void);
// 0x00000153 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String> Solana.Unity.Rpc.SolanaRpcClient::RequestAirdrop(System.String,System.UInt64,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_RequestAirdrop_m65210936FA9BB0744CC0A134B86E51FEF30FDAE9 (void);
// 0x00000154 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Rpc.SolanaRpcClient::SendTransactionAsync(System.Byte[],System.Boolean,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_SendTransactionAsync_m9D962809E581CC886F65050AE41549E81A783B6C (void);
// 0x00000155 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String>> Solana.Unity.Rpc.SolanaRpcClient::SendTransactionAsync(System.String,System.Boolean,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_SendTransactionAsync_m0961748D9CA7EEAD1A3822F229329E563D6DF579 (void);
// 0x00000156 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String> Solana.Unity.Rpc.SolanaRpcClient::SendTransaction(System.String,System.Boolean,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_SendTransaction_m06DFEB1C90CF570279797EB4E1E7519562310F03 (void);
// 0x00000157 Solana.Unity.Rpc.Core.Http.RequestResult`1<System.String> Solana.Unity.Rpc.SolanaRpcClient::SendTransaction(System.Byte[],System.Boolean,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaRpcClient_SendTransaction_m7B5B031895328CE6A831B4B57CF692549D93BCAF (void);
// 0x00000158 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.SimulationLogs>>> Solana.Unity.Rpc.SolanaRpcClient::SimulateTransactionAsync(System.String,System.Boolean,Solana.Unity.Rpc.Types.Commitment,System.Boolean,System.Collections.Generic.IList`1<System.String>)
extern void SolanaRpcClient_SimulateTransactionAsync_mF1A1C1CDB66B30728E0525FCCEA346CAAA929BDF (void);
// 0x00000159 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.SimulationLogs>>> Solana.Unity.Rpc.SolanaRpcClient::SimulateTransactionAsync(System.Byte[],System.Boolean,Solana.Unity.Rpc.Types.Commitment,System.Boolean,System.Collections.Generic.IList`1<System.String>)
extern void SolanaRpcClient_SimulateTransactionAsync_m5181127729403AFD531A4626A3D9A48FAC8B47D7 (void);
// 0x0000015A Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.SimulationLogs>> Solana.Unity.Rpc.SolanaRpcClient::SimulateTransaction(System.String,System.Boolean,Solana.Unity.Rpc.Types.Commitment,System.Boolean,System.Collections.Generic.IList`1<System.String>)
extern void SolanaRpcClient_SimulateTransaction_m5050D30697BDD0064C795846F3D1A096B7F9EB46 (void);
// 0x0000015B Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.SimulationLogs>> Solana.Unity.Rpc.SolanaRpcClient::SimulateTransaction(System.Byte[],System.Boolean,Solana.Unity.Rpc.Types.Commitment,System.Boolean,System.Collections.Generic.IList`1<System.String>)
extern void SolanaRpcClient_SimulateTransaction_m98A6F9C91A7FD8DC397A6872A9763EB68580CCF2 (void);
// 0x0000015C System.Int32 Solana.Unity.Rpc.SolanaRpcClient::Solana.Unity.Rpc.IRpcClient.GetNextIdForReq()
extern void SolanaRpcClient_Solana_Unity_Rpc_IRpcClient_GetNextIdForReq_m20FE8CDC12B7A0B679112A81995A8839D78AD8A5 (void);
// 0x0000015D System.Void Solana.Unity.Rpc.SolanaRpcClient/<>c::.cctor()
extern void U3CU3Ec__cctor_m6D0A42AAB55367985C3C230585534DBC655C887E (void);
// 0x0000015E System.Void Solana.Unity.Rpc.SolanaRpcClient/<>c::.ctor()
extern void U3CU3Ec__ctor_m3B332E71D4BD87BD5D4CBA9EEA1E4938EBB6BA7F (void);
// 0x0000015F System.Collections.Generic.Dictionary`2<System.String,System.Object> Solana.Unity.Rpc.SolanaRpcClient/<>c::<GetProgramAccountsAsync>b__13_0(Solana.Unity.Rpc.Models.MemCmp)
extern void U3CU3Ec_U3CGetProgramAccountsAsyncU3Eb__13_0_m31367D6492BC65AA9731E26988DF5DE08ED42D70 (void);
// 0x00000160 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetAccountInfoAsync>d__11::MoveNext()
extern void U3CGetAccountInfoAsyncU3Ed__11_MoveNext_m71A035652C4E20F2C1238210D19531DBA9EBC7F4 (void);
// 0x00000161 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetAccountInfoAsync>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetAccountInfoAsyncU3Ed__11_SetStateMachine_m918F91204F4FBD26C53F53C9DABEDC05EAF67D1F (void);
// 0x00000162 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetBalanceAsync>d__17::MoveNext()
extern void U3CGetBalanceAsyncU3Ed__17_MoveNext_m4F5CB517DCA9EDD3965B7B775A9A44197FFE7045 (void);
// 0x00000163 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetBalanceAsync>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetBalanceAsyncU3Ed__17_SetStateMachine_mAE9B7B6827A2AE676475B89A243C6E5EADF174F5 (void);
// 0x00000164 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetBlockAsync>d__19::MoveNext()
extern void U3CGetBlockAsyncU3Ed__19_MoveNext_mF1A80C3F7F4ED121C65A2E7883EA910BD78A897F (void);
// 0x00000165 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetBlockAsync>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetBlockAsyncU3Ed__19_SetStateMachine_m3C66FE1A018DD6F5845EFC4FD1DC7413278A1156 (void);
// 0x00000166 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetBlockCommitmentAsync>d__45::MoveNext()
extern void U3CGetBlockCommitmentAsyncU3Ed__45_MoveNext_m0F1313671C8CD1104F25E931C1227964717DA365 (void);
// 0x00000167 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetBlockCommitmentAsync>d__45::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetBlockCommitmentAsyncU3Ed__45_SetStateMachine_m2A2B3D8A807312480BC5C1C7E4068141CE152FDC (void);
// 0x00000168 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetBlockHeightAsync>d__43::MoveNext()
extern void U3CGetBlockHeightAsyncU3Ed__43_MoveNext_m260547E20CE2CCF532A28643C28C60E653869779 (void);
// 0x00000169 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetBlockHeightAsync>d__43::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetBlockHeightAsyncU3Ed__43_SetStateMachine_m08B1445FDB8ED54D256DE70A07D993996955DB79 (void);
// 0x0000016A System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetBlockProductionAsync>d__33::MoveNext()
extern void U3CGetBlockProductionAsyncU3Ed__33_MoveNext_mE48D8A3D4CE678528DC30DE3E9C311187BFAEBA2 (void);
// 0x0000016B System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetBlockProductionAsync>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetBlockProductionAsyncU3Ed__33_SetStateMachine_m9619E9B9D3980BEC46017DBC8FE8B5BAA1C9A5AD (void);
// 0x0000016C System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetBlockTimeAsync>d__47::MoveNext()
extern void U3CGetBlockTimeAsyncU3Ed__47_MoveNext_m11C616CA46C66F321C2F896F27F9C611B4ECAC8B (void);
// 0x0000016D System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetBlockTimeAsync>d__47::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetBlockTimeAsyncU3Ed__47_SetStateMachine_mB3E9DF73B7988E360A37C8A3AE98DC5A44352CD5 (void);
// 0x0000016E System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetBlocksAsync>d__21::MoveNext()
extern void U3CGetBlocksAsyncU3Ed__21_MoveNext_mC0B59AFB286D4C89DAF4AC612F859C6FF4D891D9 (void);
// 0x0000016F System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetBlocksAsync>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetBlocksAsyncU3Ed__21_SetStateMachine_m3A54F7D4A7B4FCE37F26485E20108EE1F2455F1C (void);
// 0x00000170 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetBlocksWithLimitAsync>d__30::MoveNext()
extern void U3CGetBlocksWithLimitAsyncU3Ed__30_MoveNext_m6FDB251EC76756F620F26A86BE367C3AE72D05BA (void);
// 0x00000171 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetBlocksWithLimitAsync>d__30::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetBlocksWithLimitAsyncU3Ed__30_SetStateMachine_mE4708412237CAEDB998216CF3F049250E3659961 (void);
// 0x00000172 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetClusterNodesAsync>d__49::MoveNext()
extern void U3CGetClusterNodesAsyncU3Ed__49_MoveNext_m4CE4236A15EA5B96A27E4F65C4EC55644324098E (void);
// 0x00000173 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetClusterNodesAsync>d__49::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetClusterNodesAsyncU3Ed__49_SetStateMachine_m7C3F8EC519D85CF1C43376240AFDE1AF7BD054F8 (void);
// 0x00000174 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetConfirmedBlockAsync>d__22::MoveNext()
extern void U3CGetConfirmedBlockAsyncU3Ed__22_MoveNext_m449B330D80F8F14E6B3C85E796AB3A20FEB36404 (void);
// 0x00000175 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetConfirmedBlockAsync>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetConfirmedBlockAsyncU3Ed__22_SetStateMachine_mD0230753A0A883461893836E4B5A80526FEDBE2B (void);
// 0x00000176 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetConfirmedBlocksAsync>d__25::MoveNext()
extern void U3CGetConfirmedBlocksAsyncU3Ed__25_MoveNext_mFEC32FB8DF8B26C7E8BB03E76D545E7919AFA36F (void);
// 0x00000177 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetConfirmedBlocksAsync>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetConfirmedBlocksAsyncU3Ed__25_SetStateMachine_m408BDA98333EC31E1BE65C8C72E88F698BB00015 (void);
// 0x00000178 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetConfirmedBlocksWithLimitAsync>d__27::MoveNext()
extern void U3CGetConfirmedBlocksWithLimitAsyncU3Ed__27_MoveNext_m6961A2C6394CF1618783F5E1C0B4D06FDDAB7E27 (void);
// 0x00000179 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetConfirmedBlocksWithLimitAsync>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetConfirmedBlocksWithLimitAsyncU3Ed__27_SetStateMachine_m34D81FF9A155D8FF3495FBFF115DAEB0B371BF52 (void);
// 0x0000017A System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetConfirmedSignaturesForAddress2Async>d__86::MoveNext()
extern void U3CGetConfirmedSignaturesForAddress2AsyncU3Ed__86_MoveNext_mCF515026A73E21E519CA21F62FE3E2146536D45F (void);
// 0x0000017B System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetConfirmedSignaturesForAddress2Async>d__86::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetConfirmedSignaturesForAddress2AsyncU3Ed__86_SetStateMachine_m077004FFF2BE2F1F34771277E7588B3E58340B9F (void);
// 0x0000017C System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetConfirmedTransactionAsync>d__40::MoveNext()
extern void U3CGetConfirmedTransactionAsyncU3Ed__40_MoveNext_m21CEF49718574EFEC689A84C812DD0BF329533BA (void);
// 0x0000017D System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetConfirmedTransactionAsync>d__40::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetConfirmedTransactionAsyncU3Ed__40_SetStateMachine_m5DEACA442081D0F350CF2B4A9599BF2B2E444DA2 (void);
// 0x0000017E System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetEpochInfoAsync>d__51::MoveNext()
extern void U3CGetEpochInfoAsyncU3Ed__51_MoveNext_m884460B5CEB552BE3C41BC53E29D6233D468740F (void);
// 0x0000017F System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetEpochInfoAsync>d__51::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetEpochInfoAsyncU3Ed__51_SetStateMachine_mC942E328FB8CD1C7BB3E9AC296C79674D97A02AE (void);
// 0x00000180 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetEpochScheduleAsync>d__53::MoveNext()
extern void U3CGetEpochScheduleAsyncU3Ed__53_MoveNext_m0C7EA807EDB7B84A18197EB7B674C3825D167E84 (void);
// 0x00000181 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetEpochScheduleAsync>d__53::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetEpochScheduleAsyncU3Ed__53_SetStateMachine_m1619AD8C289B3FE979384856CEE18915E35ECF82 (void);
// 0x00000182 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetFeeCalculatorForBlockhashAsync>d__55::MoveNext()
extern void U3CGetFeeCalculatorForBlockhashAsyncU3Ed__55_MoveNext_m6B3F43E8A6230F6624673F3869DCF17FC552D4D5 (void);
// 0x00000183 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetFeeCalculatorForBlockhashAsync>d__55::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetFeeCalculatorForBlockhashAsyncU3Ed__55_SetStateMachine_mC9581F6D6637E22AFAF2E74FC7295E35B27575A7 (void);
// 0x00000184 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetFeeRateGovernorAsync>d__57::MoveNext()
extern void U3CGetFeeRateGovernorAsyncU3Ed__57_MoveNext_m4567AC38AB7748BDD389A2404A7DA4B8616FD1FE (void);
// 0x00000185 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetFeeRateGovernorAsync>d__57::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetFeeRateGovernorAsyncU3Ed__57_SetStateMachine_m672022222A7DD8676C9CD8F0CDDD475D7F2E1E4F (void);
// 0x00000186 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetFeesAsync>d__59::MoveNext()
extern void U3CGetFeesAsyncU3Ed__59_MoveNext_m777F047242526E748A8B2EF113EB58479DB8891F (void);
// 0x00000187 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetFeesAsync>d__59::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetFeesAsyncU3Ed__59_SetStateMachine_mB20F39D8716C914809FA7FFA5BF9C368FAF7450A (void);
// 0x00000188 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetFirstAvailableBlockAsync>d__32::MoveNext()
extern void U3CGetFirstAvailableBlockAsyncU3Ed__32_MoveNext_m297DD632FFAB265819B6C0D1DF2438166D4DE6CB (void);
// 0x00000189 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetFirstAvailableBlockAsync>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetFirstAvailableBlockAsyncU3Ed__32_SetStateMachine_m6F61A9EE0D127523319A47E048EF5EE7B9EF9DEC (void);
// 0x0000018A System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetGenesisHashAsync>d__69::MoveNext()
extern void U3CGetGenesisHashAsyncU3Ed__69_MoveNext_mE441AAA63680A1AD6D9D7DDA157E81EED46D7E9C (void);
// 0x0000018B System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetGenesisHashAsync>d__69::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetGenesisHashAsyncU3Ed__69_SetStateMachine_m2C7DC1E41303B657E41D25F8EAE6BD5FB451FA82 (void);
// 0x0000018C System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetHealthAsync>d__36::MoveNext()
extern void U3CGetHealthAsyncU3Ed__36_MoveNext_mE7FB1473AD9F334961DFB003217F07C3CBFD688F (void);
// 0x0000018D System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetHealthAsync>d__36::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetHealthAsyncU3Ed__36_SetStateMachine_mD428B47CC9937F03A47430D9C5443C0AA04D9519 (void);
// 0x0000018E System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetIdentityAsync>d__71::MoveNext()
extern void U3CGetIdentityAsyncU3Ed__71_MoveNext_m982C5109F1C0DE4A12BC57D22D6854DD9E2E0794 (void);
// 0x0000018F System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetIdentityAsync>d__71::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetIdentityAsyncU3Ed__71_SetStateMachine_mE5D50C8E9C5D4980AF46D301EB7AF2C8413921C1 (void);
// 0x00000190 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetInflationGovernorAsync>d__73::MoveNext()
extern void U3CGetInflationGovernorAsyncU3Ed__73_MoveNext_mDC4721BBCBF9435DB842D416D28FBFA755A36ECB (void);
// 0x00000191 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetInflationGovernorAsync>d__73::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetInflationGovernorAsyncU3Ed__73_SetStateMachine_mE4C760EDF2599140AA81C588EF155445C9906883 (void);
// 0x00000192 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetInflationRateAsync>d__75::MoveNext()
extern void U3CGetInflationRateAsyncU3Ed__75_MoveNext_mB35278FB495171CFFBDA3209E6CD2D4A6905C3FA (void);
// 0x00000193 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetInflationRateAsync>d__75::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetInflationRateAsyncU3Ed__75_SetStateMachine_mCCED976193DBA6376B63D9E9213E0C425327437A (void);
// 0x00000194 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetInflationRewardAsync>d__77::MoveNext()
extern void U3CGetInflationRewardAsyncU3Ed__77_MoveNext_m74103BF4FEA13D6F999C6E1AB2A70A356A6517D6 (void);
// 0x00000195 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetInflationRewardAsync>d__77::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetInflationRewardAsyncU3Ed__77_SetStateMachine_m3F53A9EB0CB5AABAC03647708C373273D7696FCC (void);
// 0x00000196 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetLargestAccountsAsync>d__79::MoveNext()
extern void U3CGetLargestAccountsAsyncU3Ed__79_MoveNext_m5227EDF6BC7C7428880FCA8B8DB904DFD39BAFA6 (void);
// 0x00000197 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetLargestAccountsAsync>d__79::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetLargestAccountsAsyncU3Ed__79_SetStateMachine_mB9DE4130BA71294F4E4E48FDFBA836848E92F59D (void);
// 0x00000198 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetLeaderScheduleAsync>d__38::MoveNext()
extern void U3CGetLeaderScheduleAsyncU3Ed__38_MoveNext_mA7B2522A6CB093BA92ADF307A9DF58FEAA197720 (void);
// 0x00000199 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetLeaderScheduleAsync>d__38::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetLeaderScheduleAsyncU3Ed__38_SetStateMachine_m1DF01C66460141C51EC5191005963C0A8AA7FEE8 (void);
// 0x0000019A System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetMaxRetransmitSlotAsync>d__63::MoveNext()
extern void U3CGetMaxRetransmitSlotAsyncU3Ed__63_MoveNext_m9D0335162A98DEFFE62A80D7F97B23CD99993B65 (void);
// 0x0000019B System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetMaxRetransmitSlotAsync>d__63::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetMaxRetransmitSlotAsyncU3Ed__63_SetStateMachine_mB2641299C98B42D5E915A3D7DC8A5C7E2E6582C9 (void);
// 0x0000019C System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetMaxShredInsertSlotAsync>d__65::MoveNext()
extern void U3CGetMaxShredInsertSlotAsyncU3Ed__65_MoveNext_m931457A8375554386F04DDF7F57B758E7F160468 (void);
// 0x0000019D System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetMaxShredInsertSlotAsync>d__65::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetMaxShredInsertSlotAsyncU3Ed__65_SetStateMachine_mB6DA78BC7C2C06FD40EAB66CAEF9978F92CAAC41 (void);
// 0x0000019E System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetMinimumBalanceForRentExemptionAsync>d__67::MoveNext()
extern void U3CGetMinimumBalanceForRentExemptionAsyncU3Ed__67_MoveNext_m221CA08C4EC6CDC60A81549900BA7771F74E6690 (void);
// 0x0000019F System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetMinimumBalanceForRentExemptionAsync>d__67::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetMinimumBalanceForRentExemptionAsyncU3Ed__67_SetStateMachine_m61768E112AE3695CCA2360B168038E3914486B9D (void);
// 0x000001A0 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetMinimumLedgerSlotAsync>d__117::MoveNext()
extern void U3CGetMinimumLedgerSlotAsyncU3Ed__117_MoveNext_m390631849901AEBECA02C26DB3ED362935AD5AE4 (void);
// 0x000001A1 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetMinimumLedgerSlotAsync>d__117::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetMinimumLedgerSlotAsyncU3Ed__117_SetStateMachine_m8B55DEC32C67E0BF87BD1612E438D5445C299698 (void);
// 0x000001A2 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetMultipleAccountsAsync>d__15::MoveNext()
extern void U3CGetMultipleAccountsAsyncU3Ed__15_MoveNext_m565E691948863B49019358885C7E17FA81F20D70 (void);
// 0x000001A3 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetMultipleAccountsAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetMultipleAccountsAsyncU3Ed__15_SetStateMachine_m71C7AE6D8849F3C9C30C9111DB21B5E096F1FEB8 (void);
// 0x000001A4 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetProgramAccountsAsync>d__13::MoveNext()
extern void U3CGetProgramAccountsAsyncU3Ed__13_MoveNext_mDD3EE587B4DF999973E5BB341C653695F7752E35 (void);
// 0x000001A5 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetProgramAccountsAsync>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetProgramAccountsAsyncU3Ed__13_SetStateMachine_mDC5A34888DFA4807600D4000C39AE9AC0366C85E (void);
// 0x000001A6 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetRecentBlockHashAsync>d__61::MoveNext()
extern void U3CGetRecentBlockHashAsyncU3Ed__61_MoveNext_m592D9D93066B6F4CB059DBAC7F4B9E2EB0912D9A (void);
// 0x000001A7 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetRecentBlockHashAsync>d__61::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetRecentBlockHashAsyncU3Ed__61_SetStateMachine_mACE64BD81C63DD882591CA6D5C345831EF0345C6 (void);
// 0x000001A8 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetRecentPerformanceSamplesAsync>d__83::MoveNext()
extern void U3CGetRecentPerformanceSamplesAsyncU3Ed__83_MoveNext_mEACF6DF7EAE932558F4A75011EFD340EEFDE24A1 (void);
// 0x000001A9 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetRecentPerformanceSamplesAsync>d__83::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetRecentPerformanceSamplesAsyncU3Ed__83_SetStateMachine_m5176600569417A469C4BD6D65DBCFC3CFD0B85BA (void);
// 0x000001AA System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetSignatureStatusesAsync>d__89::MoveNext()
extern void U3CGetSignatureStatusesAsyncU3Ed__89_MoveNext_mE01EB348A879AF02EB7D5EC23D728EF7B729A16B (void);
// 0x000001AB System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetSignatureStatusesAsync>d__89::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetSignatureStatusesAsyncU3Ed__89_SetStateMachine_m859B14153AE2B89AF84C9FED75572987D56EE67F (void);
// 0x000001AC System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetSignaturesForAddressAsync>d__85::MoveNext()
extern void U3CGetSignaturesForAddressAsyncU3Ed__85_MoveNext_m50D89D991424FA736F45E5B61A3047E180C337B0 (void);
// 0x000001AD System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetSignaturesForAddressAsync>d__85::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetSignaturesForAddressAsyncU3Ed__85_SetStateMachine_m8E8FF95E6BB7CF72E596390AB5BFE50B2F7A219E (void);
// 0x000001AE System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetSlotAsync>d__91::MoveNext()
extern void U3CGetSlotAsyncU3Ed__91_MoveNext_m7D6C1B33B4968E5CF38E2DCEAAB56EB2E059854A (void);
// 0x000001AF System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetSlotAsync>d__91::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetSlotAsyncU3Ed__91_SetStateMachine_mC66DC91641CE350292E957C74065BB187424A8EF (void);
// 0x000001B0 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetSlotLeaderAsync>d__93::MoveNext()
extern void U3CGetSlotLeaderAsyncU3Ed__93_MoveNext_m93B1E6355EC7EFA958EB328C9140E165DFF56400 (void);
// 0x000001B1 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetSlotLeaderAsync>d__93::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetSlotLeaderAsyncU3Ed__93_SetStateMachine_m562AC03AF88983C4B4BA2549BC539B03C42E2A0C (void);
// 0x000001B2 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetSlotLeadersAsync>d__95::MoveNext()
extern void U3CGetSlotLeadersAsyncU3Ed__95_MoveNext_mE95B076243894EF4452842531D908113A8F4495F (void);
// 0x000001B3 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetSlotLeadersAsync>d__95::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetSlotLeadersAsyncU3Ed__95_SetStateMachine_m1FEE1B7E1C54412C210F21E2A77ADBB59734D0E2 (void);
// 0x000001B4 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetSnapshotSlotAsync>d__81::MoveNext()
extern void U3CGetSnapshotSlotAsyncU3Ed__81_MoveNext_m971A83DD4E5BB58F4E30BAC5AF66F138764DA563 (void);
// 0x000001B5 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetSnapshotSlotAsync>d__81::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetSnapshotSlotAsyncU3Ed__81_SetStateMachine_m5298400BAAFBF35A206F0946AB73164A9B6320E3 (void);
// 0x000001B6 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetStakeActivationAsync>d__97::MoveNext()
extern void U3CGetStakeActivationAsyncU3Ed__97_MoveNext_m91448D031570AED4F8D28F75ED78DEFEDB00B52F (void);
// 0x000001B7 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetStakeActivationAsync>d__97::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetStakeActivationAsyncU3Ed__97_SetStateMachine_m891AF9FF8E86036B50E69841CB4F0B2D2E5FB395 (void);
// 0x000001B8 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetSupplyAsync>d__99::MoveNext()
extern void U3CGetSupplyAsyncU3Ed__99_MoveNext_m25F34F3102EF87622C30B13A6A2F6FABDF32D664 (void);
// 0x000001B9 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetSupplyAsync>d__99::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetSupplyAsyncU3Ed__99_SetStateMachine_m811BD303EAED9DC9CA9BBC5EFC0C943437AC357C (void);
// 0x000001BA System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetTokenAccountBalanceAsync>d__101::MoveNext()
extern void U3CGetTokenAccountBalanceAsyncU3Ed__101_MoveNext_mD7B586BA20F1A52BE54A52D71F13C8F6CA74FE14 (void);
// 0x000001BB System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetTokenAccountBalanceAsync>d__101::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetTokenAccountBalanceAsyncU3Ed__101_SetStateMachine_m19EDD46D57FC1C0A3FB0A35C2B5D3D6E45984A48 (void);
// 0x000001BC System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetTokenAccountInfoAsync>d__9::MoveNext()
extern void U3CGetTokenAccountInfoAsyncU3Ed__9_MoveNext_m43784E0CE9BB805471C63AF4A22121C827C6AAA6 (void);
// 0x000001BD System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetTokenAccountInfoAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetTokenAccountInfoAsyncU3Ed__9_SetStateMachine_m9BA43BFD5D20A73111E43C86DE954C14BE0E208E (void);
// 0x000001BE System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetTokenAccountsByDelegateAsync>d__103::MoveNext()
extern void U3CGetTokenAccountsByDelegateAsyncU3Ed__103_MoveNext_mDEEA11C0EC668229C498418CD65883C7D9BB2405 (void);
// 0x000001BF System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetTokenAccountsByDelegateAsync>d__103::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetTokenAccountsByDelegateAsyncU3Ed__103_SetStateMachine_m7A2DCB4ED5AA9CA52DB0C768C575452C3A60F0EF (void);
// 0x000001C0 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetTokenAccountsByOwnerAsync>d__105::MoveNext()
extern void U3CGetTokenAccountsByOwnerAsyncU3Ed__105_MoveNext_mCCD2253E9E2F01A8C3A107BAFE7648F25F883453 (void);
// 0x000001C1 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetTokenAccountsByOwnerAsync>d__105::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetTokenAccountsByOwnerAsyncU3Ed__105_SetStateMachine_mDFE5C6978DDA26D57988F367AF5D25AFF07DADBC (void);
// 0x000001C2 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetTokenLargestAccountsAsync>d__107::MoveNext()
extern void U3CGetTokenLargestAccountsAsyncU3Ed__107_MoveNext_m7723FA4D5BF5626611D94849DAD203E01ACAB7D2 (void);
// 0x000001C3 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetTokenLargestAccountsAsync>d__107::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetTokenLargestAccountsAsyncU3Ed__107_SetStateMachine_mA7DC5871EE47CE9E7C02072825FF9B4A49A01270 (void);
// 0x000001C4 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetTokenMintInfoAsync>d__7::MoveNext()
extern void U3CGetTokenMintInfoAsyncU3Ed__7_MoveNext_mB0CA133B363669AAA6D812F41BD826E1D1564627 (void);
// 0x000001C5 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetTokenMintInfoAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetTokenMintInfoAsyncU3Ed__7_SetStateMachine_mE12009A75BD318ABF581615DF0F7C7607D30065F (void);
// 0x000001C6 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetTokenSupplyAsync>d__109::MoveNext()
extern void U3CGetTokenSupplyAsyncU3Ed__109_MoveNext_mFB9033CCF1135C2C8A6BF6E15D18DFBC1324CB30 (void);
// 0x000001C7 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetTokenSupplyAsync>d__109::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetTokenSupplyAsyncU3Ed__109_SetStateMachine_m74420718BFCAFABE70E986AB4EB7308DC67CF382 (void);
// 0x000001C8 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetTransactionAsync>d__39::MoveNext()
extern void U3CGetTransactionAsyncU3Ed__39_MoveNext_m909B3974F1EDAD2C78A536CD9325033AF60CB0CD (void);
// 0x000001C9 System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetTransactionAsync>d__39::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetTransactionAsyncU3Ed__39_SetStateMachine_m028D146CEF9BDB81A6DB19DA1F9ECF919F30CFD0 (void);
// 0x000001CA System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetTransactionCountAsync>d__111::MoveNext()
extern void U3CGetTransactionCountAsyncU3Ed__111_MoveNext_mB86E4C231E90F0430A2B4900BFF1627AC2C25EF9 (void);
// 0x000001CB System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetTransactionCountAsync>d__111::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetTransactionCountAsyncU3Ed__111_SetStateMachine_m7FDA46901D98250361B82DA7B3B0FEB4F7B3E770 (void);
// 0x000001CC System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetVersionAsync>d__113::MoveNext()
extern void U3CGetVersionAsyncU3Ed__113_MoveNext_mB7E019E3A1EED9010664EDDDD5F514127463F4CA (void);
// 0x000001CD System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetVersionAsync>d__113::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetVersionAsyncU3Ed__113_SetStateMachine_m465BD30FE8C07CC289B7E8E12076E6FB1B114A9A (void);
// 0x000001CE System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetVoteAccountsAsync>d__115::MoveNext()
extern void U3CGetVoteAccountsAsyncU3Ed__115_MoveNext_m3B88ECC334A2896C8F9D14DD13A77D3E40D5ED45 (void);
// 0x000001CF System.Void Solana.Unity.Rpc.SolanaRpcClient/<GetVoteAccountsAsync>d__115::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CGetVoteAccountsAsyncU3Ed__115_SetStateMachine_m07C9A2343DB395D9E76A0237259669A559554665 (void);
// 0x000001D0 System.Void Solana.Unity.Rpc.SolanaRpcClient/<RequestAirdropAsync>d__119::MoveNext()
extern void U3CRequestAirdropAsyncU3Ed__119_MoveNext_m05F0111C27937451BF35892DFB8E5E457B38CDDF (void);
// 0x000001D1 System.Void Solana.Unity.Rpc.SolanaRpcClient/<RequestAirdropAsync>d__119::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CRequestAirdropAsyncU3Ed__119_SetStateMachine_m88D74D5A424DAD8F3FB06374988AD2D11470AA8F (void);
// 0x000001D2 System.Void Solana.Unity.Rpc.SolanaRpcClient/<SendRequestAsync>d__3`1::MoveNext()
// 0x000001D3 System.Void Solana.Unity.Rpc.SolanaRpcClient/<SendRequestAsync>d__3`1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x000001D4 System.Void Solana.Unity.Rpc.SolanaRpcClient/<SendRequestAsync>d__4`1::MoveNext()
// 0x000001D5 System.Void Solana.Unity.Rpc.SolanaRpcClient/<SendRequestAsync>d__4`1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x000001D6 System.Void Solana.Unity.Rpc.SolanaRpcClient/<SendTransactionAsync>d__121::MoveNext()
extern void U3CSendTransactionAsyncU3Ed__121_MoveNext_mAE4CE51B900D5F81327DC7E3BC990744E528AA48 (void);
// 0x000001D7 System.Void Solana.Unity.Rpc.SolanaRpcClient/<SendTransactionAsync>d__121::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendTransactionAsyncU3Ed__121_SetStateMachine_m03FE3FBDCB3C8D4590C087D4CD541BE5A0ECC324 (void);
// 0x000001D8 System.Void Solana.Unity.Rpc.SolanaRpcClient/<SendTransactionAsync>d__122::MoveNext()
extern void U3CSendTransactionAsyncU3Ed__122_MoveNext_mD9DB6D37CCE182A8E180E5D887B34F8202C669DB (void);
// 0x000001D9 System.Void Solana.Unity.Rpc.SolanaRpcClient/<SendTransactionAsync>d__122::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendTransactionAsyncU3Ed__122_SetStateMachine_m595047542F3E115C37189E0688421FAE5EF11C59 (void);
// 0x000001DA System.Void Solana.Unity.Rpc.SolanaRpcClient/<SimulateTransactionAsync>d__125::MoveNext()
extern void U3CSimulateTransactionAsyncU3Ed__125_MoveNext_mDC75A7A8EF3BDB28C91155B9F68E354E2D527F64 (void);
// 0x000001DB System.Void Solana.Unity.Rpc.SolanaRpcClient/<SimulateTransactionAsync>d__125::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSimulateTransactionAsyncU3Ed__125_SetStateMachine_mA797B71798BF8F94F5B3ED23A11222CEFFDB6969 (void);
// 0x000001DC System.Void Solana.Unity.Rpc.SolanaRpcClient/<SimulateTransactionAsync>d__126::MoveNext()
extern void U3CSimulateTransactionAsyncU3Ed__126_MoveNext_m0CFDE38809B9FD971206DD76BF1E9EDCE78B9FD4 (void);
// 0x000001DD System.Void Solana.Unity.Rpc.SolanaRpcClient/<SimulateTransactionAsync>d__126::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSimulateTransactionAsyncU3Ed__126_SetStateMachine_m38969B4936916C6B5536A490E1E705BF09674167 (void);
// 0x000001DE System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient::.ctor(System.String,System.Object,Solana.Unity.Rpc.Core.Sockets.IWebSocket,System.Net.WebSockets.ClientWebSocket)
extern void SolanaStreamingRpcClient__ctor_mADE48F62AC2B47EFA95462CB80184C8EA68886CA (void);
// 0x000001DF System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient::CleanupSubscriptions()
extern void SolanaStreamingRpcClient_CleanupSubscriptions_m17C1CFECB89B7D013A1AD1711AE1AE41876DFAC5 (void);
// 0x000001E0 System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient::HandleNewMessage(System.Memory`1<System.Byte>)
extern void SolanaStreamingRpcClient_HandleNewMessage_mE540FD916B6A616188ED72C34DE4D76C15FAB173 (void);
// 0x000001E1 System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient::HandleError(Newtonsoft.Json.Linq.JToken)
extern void SolanaStreamingRpcClient_HandleError_m1D1A3443A3DF374CBC0BEC03C9096B35C3744AB7 (void);
// 0x000001E2 Solana.Unity.Rpc.Core.Sockets.SubscriptionState Solana.Unity.Rpc.SolanaStreamingRpcClient::RemoveUnconfirmedSubscription(System.Int32)
extern void SolanaStreamingRpcClient_RemoveUnconfirmedSubscription_m83F5790C176437BD52A7210429254CF2D4F7183F (void);
// 0x000001E3 System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient::RemoveSubscription(System.Int32,System.Boolean)
extern void SolanaStreamingRpcClient_RemoveSubscription_m82339DE733340C0B1C4D8AFB38A3DD7274C68E96 (void);
// 0x000001E4 System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient::ConfirmSubscription(System.Int32,System.Int32)
extern void SolanaStreamingRpcClient_ConfirmSubscription_m06138B5555DE8CB2D746C63449D4E43FACC69DCE (void);
// 0x000001E5 System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient::AddSubscription(Solana.Unity.Rpc.Core.Sockets.SubscriptionState,System.Int32)
extern void SolanaStreamingRpcClient_AddSubscription_m9EB23E8F594B6F436FF0516E4D8CBBCD9C02B770 (void);
// 0x000001E6 Solana.Unity.Rpc.Core.Sockets.SubscriptionState Solana.Unity.Rpc.SolanaStreamingRpcClient::RetrieveSubscription(System.Int32)
extern void SolanaStreamingRpcClient_RetrieveSubscription_mCE797CF24A393058980165489D4424F57E8347B6 (void);
// 0x000001E7 System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient::HandleDataMessage(Newtonsoft.Json.Linq.JToken,System.String,System.Int32)
extern void SolanaStreamingRpcClient_HandleDataMessage_m823029802B9D9419D6C8588598DFA2DFF45BF493 (void);
// 0x000001E8 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Rpc.SolanaStreamingRpcClient::SubscribeAccountInfoAsync(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaStreamingRpcClient_SubscribeAccountInfoAsync_mA9F5C9B1BF01349DCBC361C4C4C1908CE8CA403E (void);
// 0x000001E9 Solana.Unity.Rpc.Core.Sockets.SubscriptionState Solana.Unity.Rpc.SolanaStreamingRpcClient::SubscribeAccountInfo(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountInfo>>,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaStreamingRpcClient_SubscribeAccountInfo_m046801EA571FF44ED64B89F9B0ADDD8B5EE07226 (void);
// 0x000001EA System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Rpc.SolanaStreamingRpcClient::SubscribeTokenAccountAsync(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenAccountInfo>>,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaStreamingRpcClient_SubscribeTokenAccountAsync_m8AF684A4B99B747D94D0265922B177A5EAF52EF2 (void);
// 0x000001EB Solana.Unity.Rpc.Core.Sockets.SubscriptionState Solana.Unity.Rpc.SolanaStreamingRpcClient::SubscribeTokenAccount(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.TokenAccountInfo>>,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaStreamingRpcClient_SubscribeTokenAccount_m37FFB5DE19AFCC5DBBB27303627D9EDF022BFB7C (void);
// 0x000001EC System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Rpc.SolanaStreamingRpcClient::SubscribeLogInfoAsync(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.LogInfo>>,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaStreamingRpcClient_SubscribeLogInfoAsync_m4EB17B7B91BAA61FDEB96AD970D3C6C456AF892F (void);
// 0x000001ED Solana.Unity.Rpc.Core.Sockets.SubscriptionState Solana.Unity.Rpc.SolanaStreamingRpcClient::SubscribeLogInfo(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.LogInfo>>,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaStreamingRpcClient_SubscribeLogInfo_m602FD24CB72BB0ADCAB14D4E201A0CA6BD6B1DBD (void);
// 0x000001EE System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Rpc.SolanaStreamingRpcClient::SubscribeLogInfoAsync(Solana.Unity.Rpc.Types.LogsSubscriptionType,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.LogInfo>>,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaStreamingRpcClient_SubscribeLogInfoAsync_m5C59FFC9C34EC666AB6657D3755707AE277A92C6 (void);
// 0x000001EF Solana.Unity.Rpc.Core.Sockets.SubscriptionState Solana.Unity.Rpc.SolanaStreamingRpcClient::SubscribeLogInfo(Solana.Unity.Rpc.Types.LogsSubscriptionType,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.LogInfo>>,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaStreamingRpcClient_SubscribeLogInfo_m13FDA7B1AA2E73AE823DBD3338F83C3033C496BA (void);
// 0x000001F0 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Rpc.SolanaStreamingRpcClient::SubscribeSignatureAsync(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.ErrorResult>>,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaStreamingRpcClient_SubscribeSignatureAsync_m72DD01DD790A96787426ADCF8AF7908F38A12AC6 (void);
// 0x000001F1 Solana.Unity.Rpc.Core.Sockets.SubscriptionState Solana.Unity.Rpc.SolanaStreamingRpcClient::SubscribeSignature(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.ErrorResult>>,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaStreamingRpcClient_SubscribeSignature_m0EDF6CA3879513DEA7E2BC56896613C9FCDF6F83 (void);
// 0x000001F2 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Rpc.SolanaStreamingRpcClient::SubscribeProgramAsync(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountKeyPair>>,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaStreamingRpcClient_SubscribeProgramAsync_m16E76E48B6079FBC19CE51D5AD27A8E077ABF014 (void);
// 0x000001F3 Solana.Unity.Rpc.Core.Sockets.SubscriptionState Solana.Unity.Rpc.SolanaStreamingRpcClient::SubscribeProgram(System.String,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.ResponseValue`1<Solana.Unity.Rpc.Models.AccountKeyPair>>,Solana.Unity.Rpc.Types.Commitment)
extern void SolanaStreamingRpcClient_SubscribeProgram_m6C14E83C42177A980A2AC3F8E282035D0576DB82 (void);
// 0x000001F4 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Rpc.SolanaStreamingRpcClient::SubscribeSlotInfoAsync(System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Models.SlotInfo>)
extern void SolanaStreamingRpcClient_SubscribeSlotInfoAsync_mD725C3DEFCB3D5DC407B5712C9573FED026877D5 (void);
// 0x000001F5 Solana.Unity.Rpc.Core.Sockets.SubscriptionState Solana.Unity.Rpc.SolanaStreamingRpcClient::SubscribeSlotInfo(System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Models.SlotInfo>)
extern void SolanaStreamingRpcClient_SubscribeSlotInfo_m01B5E3FCE82EA58BFC5EE5D6D9250298F5EC51C6 (void);
// 0x000001F6 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Rpc.SolanaStreamingRpcClient::SubscribeRootAsync(System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,System.Int32>)
extern void SolanaStreamingRpcClient_SubscribeRootAsync_m54E074927D18C57909A2C0C04875ABBA73D5136E (void);
// 0x000001F7 Solana.Unity.Rpc.Core.Sockets.SubscriptionState Solana.Unity.Rpc.SolanaStreamingRpcClient::SubscribeRoot(System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,System.Int32>)
extern void SolanaStreamingRpcClient_SubscribeRoot_mF146F7A31846F1DAFAAA443726AAF3B12C0C1C43 (void);
// 0x000001F8 System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionState> Solana.Unity.Rpc.SolanaStreamingRpcClient::Subscribe(Solana.Unity.Rpc.Core.Sockets.SubscriptionState,Solana.Unity.Rpc.Messages.JsonRpcRequest)
extern void SolanaStreamingRpcClient_Subscribe_m41695CFE2F240D43BB99FFB1143B8E0BDA95AA22 (void);
// 0x000001F9 System.String Solana.Unity.Rpc.SolanaStreamingRpcClient::GetUnsubscribeMethodName(Solana.Unity.Rpc.Core.Sockets.SubscriptionChannel)
extern void SolanaStreamingRpcClient_GetUnsubscribeMethodName_mE60F9A310E343292555DB5B00131D80B9D34AEDB (void);
// 0x000001FA System.Threading.Tasks.Task Solana.Unity.Rpc.SolanaStreamingRpcClient::UnsubscribeAsync(Solana.Unity.Rpc.Core.Sockets.SubscriptionState)
extern void SolanaStreamingRpcClient_UnsubscribeAsync_m010D97D6F313A8766B5FB0B10C3A34CA589D8559 (void);
// 0x000001FB System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient::Unsubscribe(Solana.Unity.Rpc.Core.Sockets.SubscriptionState)
extern void SolanaStreamingRpcClient_Unsubscribe_m10A7197E622E519986A90B2278B8B080E0E12E2C (void);
// 0x000001FC T Solana.Unity.Rpc.SolanaStreamingRpcClient::CloneObject(T)
// 0x000001FD System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient/<Subscribe>d__29::MoveNext()
extern void U3CSubscribeU3Ed__29_MoveNext_m19A74F8BF4EE77CF816F8E816B6E06867176C751 (void);
// 0x000001FE System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient/<Subscribe>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSubscribeU3Ed__29_SetStateMachine_m88CC88B3C6D5C8C343D4091BC27B0743745288C8 (void);
// 0x000001FF System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient/<SubscribeAccountInfoAsync>d__13::MoveNext()
extern void U3CSubscribeAccountInfoAsyncU3Ed__13_MoveNext_mE81C5971A3750466A46FB8CFC0CB368F18BA1122 (void);
// 0x00000200 System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient/<SubscribeAccountInfoAsync>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSubscribeAccountInfoAsyncU3Ed__13_SetStateMachine_mC09608BF9D44EA7677528E1C2692E6860C741889 (void);
// 0x00000201 System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient/<SubscribeLogInfoAsync>d__17::MoveNext()
extern void U3CSubscribeLogInfoAsyncU3Ed__17_MoveNext_mEEE821833DA66684EAD9C0D8624EA8CF3ADF7570 (void);
// 0x00000202 System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient/<SubscribeLogInfoAsync>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSubscribeLogInfoAsyncU3Ed__17_SetStateMachine_mD3A64E51D44D61D7375E3108FF10B8EDA6317D21 (void);
// 0x00000203 System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient/<SubscribeLogInfoAsync>d__19::MoveNext()
extern void U3CSubscribeLogInfoAsyncU3Ed__19_MoveNext_mB3C1BDBFDC09610FB5AFFF068EB1A863ED3A0A4C (void);
// 0x00000204 System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient/<SubscribeLogInfoAsync>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSubscribeLogInfoAsyncU3Ed__19_SetStateMachine_m4ED24DA7E0A5E71356B1BF07CB17ABEE88DAF12F (void);
// 0x00000205 System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient/<SubscribeProgramAsync>d__23::MoveNext()
extern void U3CSubscribeProgramAsyncU3Ed__23_MoveNext_m9629EE5778F56EF8AF992440C9EDD7E4E6BDC184 (void);
// 0x00000206 System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient/<SubscribeProgramAsync>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSubscribeProgramAsyncU3Ed__23_SetStateMachine_mD9A4B6DFE69FAD8D9304E677D17E6799DDE6D9E5 (void);
// 0x00000207 System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient/<SubscribeRootAsync>d__27::MoveNext()
extern void U3CSubscribeRootAsyncU3Ed__27_MoveNext_m2448A04EF9D140297BEEDCDC19F265715D08BACF (void);
// 0x00000208 System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient/<SubscribeRootAsync>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSubscribeRootAsyncU3Ed__27_SetStateMachine_m69140B0FF5BFCE9D475E7B53AE1A1BAC87659CE6 (void);
// 0x00000209 System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient/<SubscribeSignatureAsync>d__21::MoveNext()
extern void U3CSubscribeSignatureAsyncU3Ed__21_MoveNext_m58FF5A15210282468617586AEC1BBF42826B7DC2 (void);
// 0x0000020A System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient/<SubscribeSignatureAsync>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSubscribeSignatureAsyncU3Ed__21_SetStateMachine_m038818C1B3BEB7D99D929198B33173F2E6295A16 (void);
// 0x0000020B System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient/<SubscribeSlotInfoAsync>d__25::MoveNext()
extern void U3CSubscribeSlotInfoAsyncU3Ed__25_MoveNext_mD6F327BAA3F3389B45F8287177A30656AFBC2E04 (void);
// 0x0000020C System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient/<SubscribeSlotInfoAsync>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSubscribeSlotInfoAsyncU3Ed__25_SetStateMachine_mA2A10DD6730558C18A4BE32BB1E66D02C6E5E342 (void);
// 0x0000020D System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient/<SubscribeTokenAccountAsync>d__15::MoveNext()
extern void U3CSubscribeTokenAccountAsyncU3Ed__15_MoveNext_mAF96E43CD08E88423163E5DFBAD83C4153FC9AD2 (void);
// 0x0000020E System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient/<SubscribeTokenAccountAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSubscribeTokenAccountAsyncU3Ed__15_SetStateMachine_m64382CECC589211FD7C507A6E809CC5589AF884D (void);
// 0x0000020F System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient/<UnsubscribeAsync>d__31::MoveNext()
extern void U3CUnsubscribeAsyncU3Ed__31_MoveNext_m93CE65AF724FB6C4C59703BF8F4DC177F356F697 (void);
// 0x00000210 System.Void Solana.Unity.Rpc.SolanaStreamingRpcClient/<UnsubscribeAsync>d__31::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CUnsubscribeAsyncU3Ed__31_SetStateMachine_m148594523555676BE148B395C58A7E0C30489973 (void);
// 0x00000211 System.Void Solana.Unity.Rpc.Utilities.IRateLimiter::Fire()
// 0x00000212 System.Boolean Solana.Unity.Rpc.Utilities.IRateLimiter::CanFire()
// 0x00000213 System.Void Solana.Unity.Rpc.Utilities.RateLimiter::.ctor(System.Int32,System.Int32)
extern void RateLimiter__ctor_mB4CE5D99F7D6293EDC6D2C0BD9327200BBD88FC8 (void);
// 0x00000214 Solana.Unity.Rpc.Utilities.RateLimiter Solana.Unity.Rpc.Utilities.RateLimiter::Create()
extern void RateLimiter_Create_m00F7F0735978B160575A0E7D69C3D18B749ED9B4 (void);
// 0x00000215 System.Boolean Solana.Unity.Rpc.Utilities.RateLimiter::CanFire()
extern void RateLimiter_CanFire_m8364F4383D2CCB3C85074922C6F7B86E8422003F (void);
// 0x00000216 System.Void Solana.Unity.Rpc.Utilities.RateLimiter::Fire()
extern void RateLimiter_Fire_m7D0476D90431C27562511F7552587162A574F492 (void);
// 0x00000217 System.DateTime Solana.Unity.Rpc.Utilities.RateLimiter::NextFireAllowed(System.DateTime)
extern void RateLimiter_NextFireAllowed_mA8959433FF11212E9CDF098BDC4A322B72AF6DFA (void);
// 0x00000218 Solana.Unity.Rpc.Utilities.RateLimiter Solana.Unity.Rpc.Utilities.RateLimiter::PerSeconds(System.Int32)
extern void RateLimiter_PerSeconds_m4C6491A16B08B003F79DB0A87DB1B0F4EA6CA5B6 (void);
// 0x00000219 Solana.Unity.Rpc.Utilities.RateLimiter Solana.Unity.Rpc.Utilities.RateLimiter::PerMs(System.Int32)
extern void RateLimiter_PerMs_m645D1CA82345DB80767C0B0C592C71D25ABA3B27 (void);
// 0x0000021A Solana.Unity.Rpc.Utilities.RateLimiter Solana.Unity.Rpc.Utilities.RateLimiter::AllowHits(System.Int32)
extern void RateLimiter_AllowHits_m3E9DAF433DDA40D379DBD371EE2E92833558C580 (void);
// 0x0000021B System.String Solana.Unity.Rpc.Utilities.RateLimiter::ToString()
extern void RateLimiter_ToString_m2507DBBBD6EDB2589E44BBB3EA363886921B5D00 (void);
// 0x0000021C System.Byte[] Solana.Unity.Rpc.Utilities.ShortVectorEncoding::EncodeLength(System.Int32)
extern void ShortVectorEncoding_EncodeLength_m8AAD9A24463D3D652645F36575029E2BA53666BF (void);
// 0x0000021D System.ValueTuple`2<System.Int32,System.Int32> Solana.Unity.Rpc.Utilities.ShortVectorEncoding::DecodeLength(System.ReadOnlySpan`1<System.Byte>)
extern void ShortVectorEncoding_DecodeLength_m69682868B81192F5E1DCFABF8A391A255ADC6913 (void);
// 0x0000021E System.Void Solana.Unity.Rpc.Types.BatchRequestException::.ctor(Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.JsonRpcBatchResponse>)
extern void BatchRequestException__ctor_mE7DF77DEA73DB0E7D1483274EFD34EDE3D595507 (void);
// 0x0000021F System.UInt64 Solana.Unity.Rpc.Types.ConnectionStats::get_TotalReceivedBytes()
extern void ConnectionStats_get_TotalReceivedBytes_mBBB8F89C8441578F33113C7F25C26DAFBC35D588 (void);
// 0x00000220 System.Void Solana.Unity.Rpc.Types.ConnectionStats::set_TotalReceivedBytes(System.UInt64)
extern void ConnectionStats_set_TotalReceivedBytes_m57DF84CED7544668FF89FEC2FDF4FF05ED6AE290 (void);
// 0x00000221 System.UInt64 Solana.Unity.Rpc.Types.ConnectionStats::get_AverageThroughput10Seconds()
extern void ConnectionStats_get_AverageThroughput10Seconds_m01DC08CE8C46FAD5386549F0C8FAAA3AB3386424 (void);
// 0x00000222 System.Void Solana.Unity.Rpc.Types.ConnectionStats::set_AverageThroughput10Seconds(System.UInt64)
extern void ConnectionStats_set_AverageThroughput10Seconds_m4AC5A4776C08BC856B040106EF2CEA43775997D1 (void);
// 0x00000223 System.UInt64 Solana.Unity.Rpc.Types.ConnectionStats::get_AverageThroughput60Seconds()
extern void ConnectionStats_get_AverageThroughput60Seconds_m872B2A25163C429E65614829D8C0BB98602EEBB1 (void);
// 0x00000224 System.Void Solana.Unity.Rpc.Types.ConnectionStats::set_AverageThroughput60Seconds(System.UInt64)
extern void ConnectionStats_set_AverageThroughput60Seconds_m9B5DC8E9C5570964C98AE731A4EAAEE83912CCA4 (void);
// 0x00000225 System.Void Solana.Unity.Rpc.Types.ConnectionStats::AddReceived(System.UInt32)
extern void ConnectionStats_AddReceived_m912386EBCEB0A8FD9A90C5DA4A2F36A74E250F02 (void);
// 0x00000226 System.Void Solana.Unity.Rpc.Types.ConnectionStats::.ctor()
extern void ConnectionStats__ctor_m308DB5206094BCEBB1F5C9EACA63E059B8954C4E (void);
// 0x00000227 System.Void Solana.Unity.Rpc.Types.ConnectionStats::RemoveOutdatedData(System.Object,System.Timers.ElapsedEventArgs)
extern void ConnectionStats_RemoveOutdatedData_m2CDB8B09621FB3B26529B5A26A57DB0F8C81954F (void);
// 0x00000228 System.UInt64 Solana.Unity.Rpc.Types.IConnectionStatistics::get_AverageThroughput10Seconds()
// 0x00000229 System.Void Solana.Unity.Rpc.Types.IConnectionStatistics::set_AverageThroughput10Seconds(System.UInt64)
// 0x0000022A System.UInt64 Solana.Unity.Rpc.Types.IConnectionStatistics::get_AverageThroughput60Seconds()
// 0x0000022B System.Void Solana.Unity.Rpc.Types.IConnectionStatistics::set_AverageThroughput60Seconds(System.UInt64)
// 0x0000022C System.UInt64 Solana.Unity.Rpc.Types.IConnectionStatistics::get_TotalReceivedBytes()
// 0x0000022D System.Void Solana.Unity.Rpc.Types.IConnectionStatistics::set_TotalReceivedBytes(System.UInt64)
// 0x0000022E Solana.Unity.Rpc.Models.TokenAccountData Solana.Unity.Rpc.Models.TokenAccountInfo::get_Data()
extern void TokenAccountInfo_get_Data_m9CAACF7CCC99F324679AB00AE6DEB900BEF182D9 (void);
// 0x0000022F System.Void Solana.Unity.Rpc.Models.TokenAccountInfo::set_Data(Solana.Unity.Rpc.Models.TokenAccountData)
extern void TokenAccountInfo_set_Data_mAFAD933C254722A836041DAEE10E1CFC7B2E7FCB (void);
// 0x00000230 System.Void Solana.Unity.Rpc.Models.TokenAccountInfo::.ctor()
extern void TokenAccountInfo__ctor_m64753407F0421FBD32B801D922EBD6736E3FC3CA (void);
// 0x00000231 Solana.Unity.Rpc.Models.TokenMintData Solana.Unity.Rpc.Models.TokenMintInfo::get_Data()
extern void TokenMintInfo_get_Data_mBEF874EE89EF18FA5E9C18E17F6677F29BEBD447 (void);
// 0x00000232 System.Void Solana.Unity.Rpc.Models.TokenMintInfo::set_Data(Solana.Unity.Rpc.Models.TokenMintData)
extern void TokenMintInfo_set_Data_mAE76A1AF294860A4675148EAABCDF947EE0989EB (void);
// 0x00000233 System.Void Solana.Unity.Rpc.Models.TokenMintInfo::.ctor()
extern void TokenMintInfo__ctor_m8AEEA74EAB60ACB64B1C8171D5C5EFF1C03DBF5E (void);
// 0x00000234 System.String Solana.Unity.Rpc.Models.TokenMintData::get_Program()
extern void TokenMintData_get_Program_mA54FB0D3D88289E02440803D1C1A11DA10255B00 (void);
// 0x00000235 System.Void Solana.Unity.Rpc.Models.TokenMintData::set_Program(System.String)
extern void TokenMintData_set_Program_m35856EF226ECF5CD09763DE662CD8BFE8F0DCE62 (void);
// 0x00000236 System.UInt64 Solana.Unity.Rpc.Models.TokenMintData::get_Space()
extern void TokenMintData_get_Space_m10A60EEA66E0D2C633933E00AC31E08008DCEDB2 (void);
// 0x00000237 System.Void Solana.Unity.Rpc.Models.TokenMintData::set_Space(System.UInt64)
extern void TokenMintData_set_Space_m5F14708307CC332C233E3579684F54AC95457F1B (void);
// 0x00000238 Solana.Unity.Rpc.Models.ParsedTokenMintData Solana.Unity.Rpc.Models.TokenMintData::get_Parsed()
extern void TokenMintData_get_Parsed_m640C5F63EAF12F3FC44E38B0D4450CD2510D62E8 (void);
// 0x00000239 System.Void Solana.Unity.Rpc.Models.TokenMintData::set_Parsed(Solana.Unity.Rpc.Models.ParsedTokenMintData)
extern void TokenMintData_set_Parsed_m103B876F8C99ED7A9AC8384BAD2120B8807B1FEE (void);
// 0x0000023A System.Void Solana.Unity.Rpc.Models.TokenMintData::.ctor()
extern void TokenMintData__ctor_m3A28DEB120BDF31A61FA5301B1CB28F77589285D (void);
// 0x0000023B Solana.Unity.Rpc.Models.TokenMintInfoDetails Solana.Unity.Rpc.Models.ParsedTokenMintData::get_Info()
extern void ParsedTokenMintData_get_Info_m825D1468F23635485100B12A64DCE2B8E9EA524A (void);
// 0x0000023C System.Void Solana.Unity.Rpc.Models.ParsedTokenMintData::set_Info(Solana.Unity.Rpc.Models.TokenMintInfoDetails)
extern void ParsedTokenMintData_set_Info_m4D958F3472B380EF5C570774E890A6A121C33BD8 (void);
// 0x0000023D System.String Solana.Unity.Rpc.Models.ParsedTokenMintData::get_Type()
extern void ParsedTokenMintData_get_Type_m305FA1C586A41AD46B37361A41DF65C3EF19E47C (void);
// 0x0000023E System.Void Solana.Unity.Rpc.Models.ParsedTokenMintData::set_Type(System.String)
extern void ParsedTokenMintData_set_Type_m146FBF81AB9E2A35A929F6C87C6D1605F8F29576 (void);
// 0x0000023F System.Void Solana.Unity.Rpc.Models.ParsedTokenMintData::.ctor()
extern void ParsedTokenMintData__ctor_m6798511E834A0F4E9E3DEEA1114CC1E134FC9CEF (void);
// 0x00000240 System.String Solana.Unity.Rpc.Models.TokenMintInfoDetails::get_FreezeAuthority()
extern void TokenMintInfoDetails_get_FreezeAuthority_m0ABC5BC694B7EE3B7DAED12B736958968EF8700C (void);
// 0x00000241 System.Void Solana.Unity.Rpc.Models.TokenMintInfoDetails::set_FreezeAuthority(System.String)
extern void TokenMintInfoDetails_set_FreezeAuthority_mC82253B34EF6CD4FCB04ECDB38BD5D331D8139B0 (void);
// 0x00000242 System.String Solana.Unity.Rpc.Models.TokenMintInfoDetails::get_MintAuthority()
extern void TokenMintInfoDetails_get_MintAuthority_mB688457884C7A292ADF6154106C74951AD680F84 (void);
// 0x00000243 System.Void Solana.Unity.Rpc.Models.TokenMintInfoDetails::set_MintAuthority(System.String)
extern void TokenMintInfoDetails_set_MintAuthority_m25921E6F310B589CA06D155665281C1BA351D569 (void);
// 0x00000244 System.Byte Solana.Unity.Rpc.Models.TokenMintInfoDetails::get_Decimals()
extern void TokenMintInfoDetails_get_Decimals_mAB8F0B9F32197FEBC348B0CC938387FF348B3608 (void);
// 0x00000245 System.Void Solana.Unity.Rpc.Models.TokenMintInfoDetails::set_Decimals(System.Byte)
extern void TokenMintInfoDetails_set_Decimals_m410E36DF0B0809C5448AE6C5CC1243879BEEE354 (void);
// 0x00000246 System.Boolean Solana.Unity.Rpc.Models.TokenMintInfoDetails::get_IsInitialized()
extern void TokenMintInfoDetails_get_IsInitialized_mFA104F59164DC861B08BB9378DB22D906386F337 (void);
// 0x00000247 System.Void Solana.Unity.Rpc.Models.TokenMintInfoDetails::set_IsInitialized(System.Boolean)
extern void TokenMintInfoDetails_set_IsInitialized_mA7890FCF0E0E1C1A035CFF745648F9E48F606436 (void);
// 0x00000248 System.String Solana.Unity.Rpc.Models.TokenMintInfoDetails::get_Supply()
extern void TokenMintInfoDetails_get_Supply_m7E769A75FC1B140A8AAFDC9C7D5C6291BED0200D (void);
// 0x00000249 System.Void Solana.Unity.Rpc.Models.TokenMintInfoDetails::set_Supply(System.String)
extern void TokenMintInfoDetails_set_Supply_m28DCC2FC617E53C2D8CCD64E4F462EC28D8517D0 (void);
// 0x0000024A System.UInt64 Solana.Unity.Rpc.Models.TokenMintInfoDetails::get_SupplyUlong()
extern void TokenMintInfoDetails_get_SupplyUlong_m0C5537E643687C1CB59064FCE6C0F240038C250F (void);
// 0x0000024B System.Void Solana.Unity.Rpc.Models.TokenMintInfoDetails::.ctor()
extern void TokenMintInfoDetails__ctor_mB4619C1867398ADF1813EDB64DC1922A59DEC616 (void);
// 0x0000024C Solana.Unity.Rpc.Models.TokenBalance Solana.Unity.Rpc.Models.TokenAccountInfoDetails::get_TokenAmount()
extern void TokenAccountInfoDetails_get_TokenAmount_mCD5AFD1463727A6A85E257470E62C2451F791646 (void);
// 0x0000024D System.Void Solana.Unity.Rpc.Models.TokenAccountInfoDetails::set_TokenAmount(Solana.Unity.Rpc.Models.TokenBalance)
extern void TokenAccountInfoDetails_set_TokenAmount_mFC8473AF5E219D616CEA4086B843DC71A5FD38FF (void);
// 0x0000024E System.String Solana.Unity.Rpc.Models.TokenAccountInfoDetails::get_Delegate()
extern void TokenAccountInfoDetails_get_Delegate_m5A11B0B8950D5253C1FB8759C6ADBAB651259098 (void);
// 0x0000024F System.Void Solana.Unity.Rpc.Models.TokenAccountInfoDetails::set_Delegate(System.String)
extern void TokenAccountInfoDetails_set_Delegate_mE1DF1616C15A413A60D1646E152E2FA0E8BCCCF1 (void);
// 0x00000250 Solana.Unity.Rpc.Models.TokenBalance Solana.Unity.Rpc.Models.TokenAccountInfoDetails::get_DelegatedAmount()
extern void TokenAccountInfoDetails_get_DelegatedAmount_m9106CB33E04858FC4C1CD6BA57945C93C9FD80BE (void);
// 0x00000251 System.Void Solana.Unity.Rpc.Models.TokenAccountInfoDetails::set_DelegatedAmount(Solana.Unity.Rpc.Models.TokenBalance)
extern void TokenAccountInfoDetails_set_DelegatedAmount_mAFCC2D6647B23E6C4A8B74D65448FC4288295F24 (void);
// 0x00000252 System.String Solana.Unity.Rpc.Models.TokenAccountInfoDetails::get_State()
extern void TokenAccountInfoDetails_get_State_m5FBE310DFC60D4CA2900E16E3FC0F496854281CC (void);
// 0x00000253 System.Void Solana.Unity.Rpc.Models.TokenAccountInfoDetails::set_State(System.String)
extern void TokenAccountInfoDetails_set_State_m1D9D7A1DD9EAF1F452A5E93347D2066C36AE602B (void);
// 0x00000254 System.Boolean Solana.Unity.Rpc.Models.TokenAccountInfoDetails::get_IsNative()
extern void TokenAccountInfoDetails_get_IsNative_m8DF68301C8111C340EFB1C990E4DC1988DB1913C (void);
// 0x00000255 System.Void Solana.Unity.Rpc.Models.TokenAccountInfoDetails::set_IsNative(System.Boolean)
extern void TokenAccountInfoDetails_set_IsNative_m49CE80417C5BF8BFB66FA00FC47B998AF1BB444F (void);
// 0x00000256 System.String Solana.Unity.Rpc.Models.TokenAccountInfoDetails::get_Mint()
extern void TokenAccountInfoDetails_get_Mint_m3335A83447115280C56F2061713666864A65C03C (void);
// 0x00000257 System.Void Solana.Unity.Rpc.Models.TokenAccountInfoDetails::set_Mint(System.String)
extern void TokenAccountInfoDetails_set_Mint_m934620DE1067BD0FDC64846F020640C9B395E105 (void);
// 0x00000258 System.String Solana.Unity.Rpc.Models.TokenAccountInfoDetails::get_Owner()
extern void TokenAccountInfoDetails_get_Owner_m98E4D9B72749240E19C29D47868EE59A7230C258 (void);
// 0x00000259 System.Void Solana.Unity.Rpc.Models.TokenAccountInfoDetails::set_Owner(System.String)
extern void TokenAccountInfoDetails_set_Owner_m881D9842D710C585ACB6EEE0ED1B8AA84777FBD4 (void);
// 0x0000025A System.Void Solana.Unity.Rpc.Models.TokenAccountInfoDetails::.ctor()
extern void TokenAccountInfoDetails__ctor_mFE19B9F4CC81084E3C61B890F37EBB593E18361E (void);
// 0x0000025B System.String Solana.Unity.Rpc.Models.ParsedTokenAccountData::get_Type()
extern void ParsedTokenAccountData_get_Type_mD4449724F7DC4264242F41ACB9156D8D403EAEF5 (void);
// 0x0000025C System.Void Solana.Unity.Rpc.Models.ParsedTokenAccountData::set_Type(System.String)
extern void ParsedTokenAccountData_set_Type_m950AE162DCC934094FC9118E73557734A9DF9667 (void);
// 0x0000025D Solana.Unity.Rpc.Models.TokenAccountInfoDetails Solana.Unity.Rpc.Models.ParsedTokenAccountData::get_Info()
extern void ParsedTokenAccountData_get_Info_m9273B73FC72F6CC049D002AD4F5F04649E60F7ED (void);
// 0x0000025E System.Void Solana.Unity.Rpc.Models.ParsedTokenAccountData::set_Info(Solana.Unity.Rpc.Models.TokenAccountInfoDetails)
extern void ParsedTokenAccountData_set_Info_m723D7768A1D42894B7A85763EFF4E7181F8225FF (void);
// 0x0000025F System.Void Solana.Unity.Rpc.Models.ParsedTokenAccountData::.ctor()
extern void ParsedTokenAccountData__ctor_mBC25C97EBC40702D1B0ABEA12D84545B389C35AE (void);
// 0x00000260 System.String Solana.Unity.Rpc.Models.TokenAccountData::get_Program()
extern void TokenAccountData_get_Program_m65A0CC71054CD3AE978A6154643C3D3FEF6D0D98 (void);
// 0x00000261 System.Void Solana.Unity.Rpc.Models.TokenAccountData::set_Program(System.String)
extern void TokenAccountData_set_Program_m4D3D88E6D038AA63E9585C71C99300FA45A831C5 (void);
// 0x00000262 System.UInt64 Solana.Unity.Rpc.Models.TokenAccountData::get_Space()
extern void TokenAccountData_get_Space_m505300DF3EAD5D709896EC7E360A0FDFEDC36351 (void);
// 0x00000263 System.Void Solana.Unity.Rpc.Models.TokenAccountData::set_Space(System.UInt64)
extern void TokenAccountData_set_Space_mE7EE4DD555AB403E7EF7BAD3C43E30BB4F18DCCF (void);
// 0x00000264 Solana.Unity.Rpc.Models.ParsedTokenAccountData Solana.Unity.Rpc.Models.TokenAccountData::get_Parsed()
extern void TokenAccountData_get_Parsed_m463EC42E2A007BC0C7112CA190BA8DCBF09D8FCB (void);
// 0x00000265 System.Void Solana.Unity.Rpc.Models.TokenAccountData::set_Parsed(Solana.Unity.Rpc.Models.ParsedTokenAccountData)
extern void TokenAccountData_set_Parsed_mDD43E1E771A98F565CCB1F73F7F3FD37C9B7F9AB (void);
// 0x00000266 System.Void Solana.Unity.Rpc.Models.TokenAccountData::.ctor()
extern void TokenAccountData__ctor_mFB841BD75A762AF6BC8139F32B490FCF4F9377E7 (void);
// 0x00000267 System.String Solana.Unity.Rpc.Models.LargeTokenAccount::get_Address()
extern void LargeTokenAccount_get_Address_m0C124F38459D888C09EA152CFCE4522411899102 (void);
// 0x00000268 System.Void Solana.Unity.Rpc.Models.LargeTokenAccount::set_Address(System.String)
extern void LargeTokenAccount_set_Address_m42457FAD94BDC6350306B40F66A82ED81C785895 (void);
// 0x00000269 System.Void Solana.Unity.Rpc.Models.LargeTokenAccount::.ctor()
extern void LargeTokenAccount__ctor_m90A199DD60DC716ECF950744947396363F3A9D5E (void);
// 0x0000026A System.UInt64 Solana.Unity.Rpc.Models.LargeAccount::get_Lamports()
extern void LargeAccount_get_Lamports_mE6087A7F4CC0ED8BD927FF2D866B989FD10FD298 (void);
// 0x0000026B System.Void Solana.Unity.Rpc.Models.LargeAccount::set_Lamports(System.UInt64)
extern void LargeAccount_set_Lamports_m7359E2C220559AFE0A0A962C0DF90B6F5294AC38 (void);
// 0x0000026C System.String Solana.Unity.Rpc.Models.LargeAccount::get_Address()
extern void LargeAccount_get_Address_m1016276E7CCF5175B5BF676489AE03D32BFB418F (void);
// 0x0000026D System.Void Solana.Unity.Rpc.Models.LargeAccount::set_Address(System.String)
extern void LargeAccount_set_Address_mC45A8B3E4CA7CC06A95DF0A666D51E7081C699EA (void);
// 0x0000026E System.Void Solana.Unity.Rpc.Models.LargeAccount::.ctor()
extern void LargeAccount__ctor_m40F588F5EEDDC06E11BAEB272D9538C2583EFC18 (void);
// 0x0000026F System.String Solana.Unity.Rpc.Models.TokenBalance::get_Amount()
extern void TokenBalance_get_Amount_m64875C0B09F007DE409E1F0DB64C4DD342AA7416 (void);
// 0x00000270 System.Void Solana.Unity.Rpc.Models.TokenBalance::set_Amount(System.String)
extern void TokenBalance_set_Amount_m2B2E69A79B7E67FA72296DAE2651A41B3A16D200 (void);
// 0x00000271 System.Int32 Solana.Unity.Rpc.Models.TokenBalance::get_Decimals()
extern void TokenBalance_get_Decimals_m256A81CD453B7FE928625C52A92840FF4F2C1616 (void);
// 0x00000272 System.Void Solana.Unity.Rpc.Models.TokenBalance::set_Decimals(System.Int32)
extern void TokenBalance_set_Decimals_m6BCFE16CD54B6DD6BA16D41FA4E86B76D9500623 (void);
// 0x00000273 System.Nullable`1<System.Decimal> Solana.Unity.Rpc.Models.TokenBalance::get_UiAmount()
extern void TokenBalance_get_UiAmount_mD2E09E86F604961A2488A10BB85DCE80CAB6A595 (void);
// 0x00000274 System.Void Solana.Unity.Rpc.Models.TokenBalance::set_UiAmount(System.Nullable`1<System.Decimal>)
extern void TokenBalance_set_UiAmount_mCE0CFE47694520411C590EAE85E581B5747C02EE (void);
// 0x00000275 System.String Solana.Unity.Rpc.Models.TokenBalance::get_UiAmountString()
extern void TokenBalance_get_UiAmountString_m78EA0A9825970F2EC6322E948F8ECE5C014586A4 (void);
// 0x00000276 System.Void Solana.Unity.Rpc.Models.TokenBalance::set_UiAmountString(System.String)
extern void TokenBalance_set_UiAmountString_mB80C0F99F3D3A815016D528E8B1B71010235E9D2 (void);
// 0x00000277 System.UInt64 Solana.Unity.Rpc.Models.TokenBalance::get_AmountUlong()
extern void TokenBalance_get_AmountUlong_mE18DA694712240D74636A085D6210983E2377CDF (void);
// 0x00000278 System.Decimal Solana.Unity.Rpc.Models.TokenBalance::get_AmountDecimal()
extern void TokenBalance_get_AmountDecimal_m35DD24905951567450E582DC78779D0868DB705F (void);
// 0x00000279 System.Double Solana.Unity.Rpc.Models.TokenBalance::get_AmountDouble()
extern void TokenBalance_get_AmountDouble_m529B7F480992AF680F946BD1EBF3B7A9981B6714 (void);
// 0x0000027A System.Void Solana.Unity.Rpc.Models.TokenBalance::.ctor()
extern void TokenBalance__ctor_mA4AFFCA5EE73CD343329161D56D93BB81CFD756A (void);
// 0x0000027B System.UInt64 Solana.Unity.Rpc.Models.AccountInfoBase::get_Lamports()
extern void AccountInfoBase_get_Lamports_m7A93911FFB8740125E0A8162776621CED052546D (void);
// 0x0000027C System.Void Solana.Unity.Rpc.Models.AccountInfoBase::set_Lamports(System.UInt64)
extern void AccountInfoBase_set_Lamports_m8AFDBF6B1FADA7311FC8AA9FB17D68633E96EA43 (void);
// 0x0000027D System.String Solana.Unity.Rpc.Models.AccountInfoBase::get_Owner()
extern void AccountInfoBase_get_Owner_mFF8037330E76EE2839DE5B6355CA14D619D9547A (void);
// 0x0000027E System.Void Solana.Unity.Rpc.Models.AccountInfoBase::set_Owner(System.String)
extern void AccountInfoBase_set_Owner_mCE2F981AD4BFDC7495683A5A91A8E80033C308F3 (void);
// 0x0000027F System.Boolean Solana.Unity.Rpc.Models.AccountInfoBase::get_Executable()
extern void AccountInfoBase_get_Executable_mDEB3ACCFEEFAA5076C42F0AFC9B3156A33EF5F13 (void);
// 0x00000280 System.Void Solana.Unity.Rpc.Models.AccountInfoBase::set_Executable(System.Boolean)
extern void AccountInfoBase_set_Executable_m7E7AAAE7357ECE8599C1445DE9A5BEC2D7C0A54A (void);
// 0x00000281 System.UInt64 Solana.Unity.Rpc.Models.AccountInfoBase::get_RentEpoch()
extern void AccountInfoBase_get_RentEpoch_m8141A80D6C25B5F0A78E30F9B0930CBFB9C4459B (void);
// 0x00000282 System.Void Solana.Unity.Rpc.Models.AccountInfoBase::set_RentEpoch(System.UInt64)
extern void AccountInfoBase_set_RentEpoch_m02C5950BDE6F920CB1C22F091514870249A1119E (void);
// 0x00000283 System.Void Solana.Unity.Rpc.Models.AccountInfoBase::.ctor()
extern void AccountInfoBase__ctor_mDDB05E93EEE6D5D961C216B201549EC4F728731B (void);
// 0x00000284 System.Collections.Generic.List`1<System.String> Solana.Unity.Rpc.Models.AccountInfo::get_Data()
extern void AccountInfo_get_Data_mD10117914E4AB951B8D8F9211496B9EB2DACD646 (void);
// 0x00000285 System.Void Solana.Unity.Rpc.Models.AccountInfo::set_Data(System.Collections.Generic.List`1<System.String>)
extern void AccountInfo_set_Data_m3238746B103BE0B26E3194E8BDF9ECA81E5403F1 (void);
// 0x00000286 System.Void Solana.Unity.Rpc.Models.AccountInfo::.ctor()
extern void AccountInfo__ctor_m9CBE5CA73E076863145B38932B244682B61DC057 (void);
// 0x00000287 Solana.Unity.Rpc.Models.AccountInfo Solana.Unity.Rpc.Models.AccountKeyPair::get_Account()
extern void AccountKeyPair_get_Account_m1953E7F21E2813875D1B5088D80206F6BA7685B0 (void);
// 0x00000288 System.Void Solana.Unity.Rpc.Models.AccountKeyPair::set_Account(Solana.Unity.Rpc.Models.AccountInfo)
extern void AccountKeyPair_set_Account_m4460C451432A0760A397963D5183DF9F51F3BB4E (void);
// 0x00000289 System.String Solana.Unity.Rpc.Models.AccountKeyPair::get_PublicKey()
extern void AccountKeyPair_get_PublicKey_m339EFDACB82C95204D2F142EFF64DE6B46463DC4 (void);
// 0x0000028A System.Void Solana.Unity.Rpc.Models.AccountKeyPair::set_PublicKey(System.String)
extern void AccountKeyPair_set_PublicKey_mEE41909414BAA954D6F094E2401369563DD9737D (void);
// 0x0000028B System.Void Solana.Unity.Rpc.Models.AccountKeyPair::.ctor()
extern void AccountKeyPair__ctor_m6F5DADF4C5AFABE5D5FA96373F59B8CA9C29D22B (void);
// 0x0000028C System.Collections.Generic.IList`1<Solana.Unity.Rpc.Models.AccountMeta> Solana.Unity.Rpc.Models.AccountKeysList::get_AccountList()
extern void AccountKeysList_get_AccountList_mB95B1371D0B9212B7A7FADC5380543D5033C8AB8 (void);
// 0x0000028D System.Void Solana.Unity.Rpc.Models.AccountKeysList::.ctor()
extern void AccountKeysList__ctor_mF70FCFDDA86A39D3447259D831937BA248FE4C4F (void);
// 0x0000028E System.Void Solana.Unity.Rpc.Models.AccountKeysList::Add(Solana.Unity.Rpc.Models.AccountMeta)
extern void AccountKeysList_Add_m76B826D41DCF6757308B88DD3896D559465BA24A (void);
// 0x0000028F System.Void Solana.Unity.Rpc.Models.AccountKeysList::Add(System.Collections.Generic.IEnumerable`1<Solana.Unity.Rpc.Models.AccountMeta>)
extern void AccountKeysList_Add_m4F641419CFAC9FA133838D82F9B53F60D8F0B7A5 (void);
// 0x00000290 System.Void Solana.Unity.Rpc.Models.AccountKeysList/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_mC163475D1E70992BA057E36C3B85C1855B71DCA7 (void);
// 0x00000291 System.Boolean Solana.Unity.Rpc.Models.AccountKeysList/<>c__DisplayClass4_0::<Add>b__0(Solana.Unity.Rpc.Models.AccountMeta)
extern void U3CU3Ec__DisplayClass4_0_U3CAddU3Eb__0_m9ECC0E55D08A4F1BAA1C5E3E154D4910617A6745 (void);
// 0x00000292 System.Byte[] Solana.Unity.Rpc.Models.AccountMeta::get_PublicKeyBytes()
extern void AccountMeta_get_PublicKeyBytes_m8C1D88105ECCB2809E699E3D3E1DDE889CF59684 (void);
// 0x00000293 System.String Solana.Unity.Rpc.Models.AccountMeta::get_PublicKey()
extern void AccountMeta_get_PublicKey_mFC96C51156F0A89D687F8500675BF2E411EA298D (void);
// 0x00000294 System.Boolean Solana.Unity.Rpc.Models.AccountMeta::get_IsSigner()
extern void AccountMeta_get_IsSigner_m50BB21AB231FF91B3AD6C0D2EC1D80077CA96EE7 (void);
// 0x00000295 System.Void Solana.Unity.Rpc.Models.AccountMeta::set_IsSigner(System.Boolean)
extern void AccountMeta_set_IsSigner_m7CD2EDFA63A78DAE729A3BDF69612BC1D36A653C (void);
// 0x00000296 System.Boolean Solana.Unity.Rpc.Models.AccountMeta::get_IsWritable()
extern void AccountMeta_get_IsWritable_mAF90D23D6710E13A2D432ECE781C6C3852CA133A (void);
// 0x00000297 System.Void Solana.Unity.Rpc.Models.AccountMeta::set_IsWritable(System.Boolean)
extern void AccountMeta_set_IsWritable_m6F47E0FBFC262C651FF2178072758DA4D37A3B94 (void);
// 0x00000298 System.Void Solana.Unity.Rpc.Models.AccountMeta::.ctor(Solana.Unity.Wallet.PublicKey,System.Boolean,System.Boolean)
extern void AccountMeta__ctor_m47EE626C622F33C48061046D378D238612E60034 (void);
// 0x00000299 Solana.Unity.Rpc.Models.AccountMeta Solana.Unity.Rpc.Models.AccountMeta::Writable(Solana.Unity.Wallet.PublicKey,System.Boolean)
extern void AccountMeta_Writable_mAD682B881063D73C1ACD89BB71BAB7974E5C8AE5 (void);
// 0x0000029A Solana.Unity.Rpc.Models.AccountMeta Solana.Unity.Rpc.Models.AccountMeta::ReadOnly(Solana.Unity.Wallet.PublicKey,System.Boolean)
extern void AccountMeta_ReadOnly_m26D13CA31D86D71BC92CE39122BB120AF24D18F1 (void);
// 0x0000029B System.Int64 Solana.Unity.Rpc.Models.BlockInfo::get_BlockTime()
extern void BlockInfo_get_BlockTime_m227EC345103A3EA445963484023900C2C93B88F3 (void);
// 0x0000029C System.Void Solana.Unity.Rpc.Models.BlockInfo::set_BlockTime(System.Int64)
extern void BlockInfo_set_BlockTime_m787B2675E5E0FD765F90CB21AAA022BFFB2B78E3 (void);
// 0x0000029D System.String Solana.Unity.Rpc.Models.BlockInfo::get_Blockhash()
extern void BlockInfo_get_Blockhash_m0FBA00D022F0B0E9228E3ECCF33C355F1F5E5A89 (void);
// 0x0000029E System.Void Solana.Unity.Rpc.Models.BlockInfo::set_Blockhash(System.String)
extern void BlockInfo_set_Blockhash_m2DE12C328CA9CE309ACAB1F5EE9D5B0099F899DE (void);
// 0x0000029F System.String Solana.Unity.Rpc.Models.BlockInfo::get_PreviousBlockhash()
extern void BlockInfo_get_PreviousBlockhash_mAF8C0EF36674B52C9BEB22E0C6D49BEBEC4FE1F2 (void);
// 0x000002A0 System.Void Solana.Unity.Rpc.Models.BlockInfo::set_PreviousBlockhash(System.String)
extern void BlockInfo_set_PreviousBlockhash_m42EAB71B9D3CD73921913364DC4B49E4F2AA8C11 (void);
// 0x000002A1 System.UInt64 Solana.Unity.Rpc.Models.BlockInfo::get_ParentSlot()
extern void BlockInfo_get_ParentSlot_mD9F6937F2ED3DD112EDB9E01671D09DA2C2B3691 (void);
// 0x000002A2 System.Void Solana.Unity.Rpc.Models.BlockInfo::set_ParentSlot(System.UInt64)
extern void BlockInfo_set_ParentSlot_m68A567666E002129F5F2BC3E337CABBC19D6CEE3 (void);
// 0x000002A3 System.Nullable`1<System.Int64> Solana.Unity.Rpc.Models.BlockInfo::get_BlockHeight()
extern void BlockInfo_get_BlockHeight_m9F9C17EA114B524874DD49669EFAB8D09535765F (void);
// 0x000002A4 System.Void Solana.Unity.Rpc.Models.BlockInfo::set_BlockHeight(System.Nullable`1<System.Int64>)
extern void BlockInfo_set_BlockHeight_m4733E25CEF41115B4243819F35F0DFA2CA1C3537 (void);
// 0x000002A5 Solana.Unity.Rpc.Models.RewardInfo[] Solana.Unity.Rpc.Models.BlockInfo::get_Rewards()
extern void BlockInfo_get_Rewards_m4AA61AAC8636DB1FB77555681697CED6BE6CD24C (void);
// 0x000002A6 System.Void Solana.Unity.Rpc.Models.BlockInfo::set_Rewards(Solana.Unity.Rpc.Models.RewardInfo[])
extern void BlockInfo_set_Rewards_m64578AD24D8BFA7764FE37A4D9360FBC34A71CD6 (void);
// 0x000002A7 Solana.Unity.Rpc.Models.TransactionMetaInfo[] Solana.Unity.Rpc.Models.BlockInfo::get_Transactions()
extern void BlockInfo_get_Transactions_mD39CF0FE408C11323B65D7B948205B4D572F02A9 (void);
// 0x000002A8 System.Void Solana.Unity.Rpc.Models.BlockInfo::set_Transactions(Solana.Unity.Rpc.Models.TransactionMetaInfo[])
extern void BlockInfo_set_Transactions_mA720A54A0CFF5DF15C9613B32A9104110A178057 (void);
// 0x000002A9 System.Void Solana.Unity.Rpc.Models.BlockInfo::.ctor()
extern void BlockInfo__ctor_m4BC85E57A2CD16C7A14E586C299C330E9545558B (void);
// 0x000002AA System.UInt64 Solana.Unity.Rpc.Models.TransactionMetaSlotInfo::get_Slot()
extern void TransactionMetaSlotInfo_get_Slot_mC1A3E3FD6B99CF7C96A03EEB8B8746F35EA8F1BF (void);
// 0x000002AB System.Void Solana.Unity.Rpc.Models.TransactionMetaSlotInfo::set_Slot(System.UInt64)
extern void TransactionMetaSlotInfo_set_Slot_m58AB75F27515758BD5C2381BEA2B30A9E00C2A61 (void);
// 0x000002AC System.Nullable`1<System.Int64> Solana.Unity.Rpc.Models.TransactionMetaSlotInfo::get_BlockTime()
extern void TransactionMetaSlotInfo_get_BlockTime_m0994D38905C1C268BD0903B1EB3355A0D852B92F (void);
// 0x000002AD System.Void Solana.Unity.Rpc.Models.TransactionMetaSlotInfo::set_BlockTime(System.Nullable`1<System.Int64>)
extern void TransactionMetaSlotInfo_set_BlockTime_m75B678E02EA95C20E3C55816901CB8F307234788 (void);
// 0x000002AE System.Void Solana.Unity.Rpc.Models.TransactionMetaSlotInfo::.ctor()
extern void TransactionMetaSlotInfo__ctor_m9AC8E5C4C848240FCF61BD2B24B9224DFD76CAD5 (void);
// 0x000002AF Solana.Unity.Rpc.Models.TransactionInfo Solana.Unity.Rpc.Models.TransactionMetaInfo::get_Transaction()
extern void TransactionMetaInfo_get_Transaction_m097BD010797D8E502C4A6C117761CF3B4A173427 (void);
// 0x000002B0 System.Void Solana.Unity.Rpc.Models.TransactionMetaInfo::set_Transaction(Solana.Unity.Rpc.Models.TransactionInfo)
extern void TransactionMetaInfo_set_Transaction_m8F5D98AA339AED87D4966D6BC438DE5CB594F2B4 (void);
// 0x000002B1 Solana.Unity.Rpc.Models.TransactionMeta Solana.Unity.Rpc.Models.TransactionMetaInfo::get_Meta()
extern void TransactionMetaInfo_get_Meta_mCD16410E48911D30CD0ACA14108B17948F32D493 (void);
// 0x000002B2 System.Void Solana.Unity.Rpc.Models.TransactionMetaInfo::set_Meta(Solana.Unity.Rpc.Models.TransactionMeta)
extern void TransactionMetaInfo_set_Meta_m581207D6E445632CF00C4BA34A98A18E1764E8BA (void);
// 0x000002B3 System.Void Solana.Unity.Rpc.Models.TransactionMetaInfo::.ctor()
extern void TransactionMetaInfo__ctor_m377252F68C02105CA8743AB75DB0CAE0C534AB97 (void);
// 0x000002B4 System.String Solana.Unity.Rpc.Models.RewardInfo::get_Pubkey()
extern void RewardInfo_get_Pubkey_m69A367D52BD6E6B0DEF77E8080D19B1BF7E598E4 (void);
// 0x000002B5 System.Void Solana.Unity.Rpc.Models.RewardInfo::set_Pubkey(System.String)
extern void RewardInfo_set_Pubkey_m598408C79F89A30C7D7526839A5657A91B50A1E1 (void);
// 0x000002B6 System.Int64 Solana.Unity.Rpc.Models.RewardInfo::get_Lamports()
extern void RewardInfo_get_Lamports_m2F08BB274DF1A0EA72A94BE245F96EB6F4358EF7 (void);
// 0x000002B7 System.Void Solana.Unity.Rpc.Models.RewardInfo::set_Lamports(System.Int64)
extern void RewardInfo_set_Lamports_m9415BC7244F5CAC1C9A08A25DAAE141C19402148 (void);
// 0x000002B8 System.UInt64 Solana.Unity.Rpc.Models.RewardInfo::get_PostBalance()
extern void RewardInfo_get_PostBalance_m1E1513A90354D6DE19FA6AEDD294F4F8666F5493 (void);
// 0x000002B9 System.Void Solana.Unity.Rpc.Models.RewardInfo::set_PostBalance(System.UInt64)
extern void RewardInfo_set_PostBalance_m17ACA2A8F9D6114E6630B7455C1C074F5170EB53 (void);
// 0x000002BA Solana.Unity.Rpc.Models.RewardType Solana.Unity.Rpc.Models.RewardInfo::get_RewardType()
extern void RewardInfo_get_RewardType_m789044054B79F43A51F24E948B185708FFD7A96A (void);
// 0x000002BB System.Void Solana.Unity.Rpc.Models.RewardInfo::set_RewardType(Solana.Unity.Rpc.Models.RewardType)
extern void RewardInfo_set_RewardType_m47F63B1DAB1720C4CE407B23026AF5E8A8ACDA04 (void);
// 0x000002BC System.Void Solana.Unity.Rpc.Models.RewardInfo::.ctor()
extern void RewardInfo__ctor_mF4134DC311E094B2EA8562B4137C5641967AC601 (void);
// 0x000002BD System.String[] Solana.Unity.Rpc.Models.TransactionInfo::get_Signatures()
extern void TransactionInfo_get_Signatures_m59A472C2994A5255349B24728CA2853BB3E85401 (void);
// 0x000002BE System.Void Solana.Unity.Rpc.Models.TransactionInfo::set_Signatures(System.String[])
extern void TransactionInfo_set_Signatures_m13B9EEBEFB5FC72771BFBD705C8E8976F4837EAC (void);
// 0x000002BF Solana.Unity.Rpc.Models.TransactionContentInfo Solana.Unity.Rpc.Models.TransactionInfo::get_Message()
extern void TransactionInfo_get_Message_m79158B4AD83CB1E0DCCD709DCA98EF029A73DD77 (void);
// 0x000002C0 System.Void Solana.Unity.Rpc.Models.TransactionInfo::set_Message(Solana.Unity.Rpc.Models.TransactionContentInfo)
extern void TransactionInfo_set_Message_m97D14DDCC1988AC4A4C25F8210DA970D25B4E3E0 (void);
// 0x000002C1 System.Void Solana.Unity.Rpc.Models.TransactionInfo::.ctor()
extern void TransactionInfo__ctor_mFDD7D2011D974073B5BA33DAF03A20232BF9CF6A (void);
// 0x000002C2 System.String[] Solana.Unity.Rpc.Models.TransactionContentInfo::get_AccountKeys()
extern void TransactionContentInfo_get_AccountKeys_m588D416B82E5F96D5A8C9E725AAAD2BB94CC2255 (void);
// 0x000002C3 System.Void Solana.Unity.Rpc.Models.TransactionContentInfo::set_AccountKeys(System.String[])
extern void TransactionContentInfo_set_AccountKeys_m4B9E59503CE6AA8D209E941B299295F950DBC5E4 (void);
// 0x000002C4 Solana.Unity.Rpc.Models.TransactionHeaderInfo Solana.Unity.Rpc.Models.TransactionContentInfo::get_Header()
extern void TransactionContentInfo_get_Header_mFF783622D8DE65F4BB921B03917177A16C8E818D (void);
// 0x000002C5 System.Void Solana.Unity.Rpc.Models.TransactionContentInfo::set_Header(Solana.Unity.Rpc.Models.TransactionHeaderInfo)
extern void TransactionContentInfo_set_Header_m77F081F239EC16BDCB17B96A3FBBCF4F2D060FE5 (void);
// 0x000002C6 System.String Solana.Unity.Rpc.Models.TransactionContentInfo::get_RecentBlockhash()
extern void TransactionContentInfo_get_RecentBlockhash_m7BC8D2DDAC875D662D8CA07F27D71B65EEBD7530 (void);
// 0x000002C7 System.Void Solana.Unity.Rpc.Models.TransactionContentInfo::set_RecentBlockhash(System.String)
extern void TransactionContentInfo_set_RecentBlockhash_mFD1B62AEB2A6346E2E6780F7CAFDFC577C4DACCB (void);
// 0x000002C8 Solana.Unity.Rpc.Models.InstructionInfo[] Solana.Unity.Rpc.Models.TransactionContentInfo::get_Instructions()
extern void TransactionContentInfo_get_Instructions_m25AC62ADDC5C7A3006AB18DD8744BFB9A3CE5BA3 (void);
// 0x000002C9 System.Void Solana.Unity.Rpc.Models.TransactionContentInfo::set_Instructions(Solana.Unity.Rpc.Models.InstructionInfo[])
extern void TransactionContentInfo_set_Instructions_m0FE0853433B365F8702158E4AEC437BD43D5705C (void);
// 0x000002CA System.Void Solana.Unity.Rpc.Models.TransactionContentInfo::.ctor()
extern void TransactionContentInfo__ctor_mFBF3F47A28B2508D08A74280E9306F4914B5516B (void);
// 0x000002CB System.Int32 Solana.Unity.Rpc.Models.TransactionHeaderInfo::get_NumRequiredSignatures()
extern void TransactionHeaderInfo_get_NumRequiredSignatures_m6A69517C50BC8C648A0B791B1655F78A5EC9AF77 (void);
// 0x000002CC System.Void Solana.Unity.Rpc.Models.TransactionHeaderInfo::set_NumRequiredSignatures(System.Int32)
extern void TransactionHeaderInfo_set_NumRequiredSignatures_m75988784B1D0A8DFDE61E460877387E88D05B64E (void);
// 0x000002CD System.Int32 Solana.Unity.Rpc.Models.TransactionHeaderInfo::get_NumReadonlySignedAccounts()
extern void TransactionHeaderInfo_get_NumReadonlySignedAccounts_m32F5F079B918EBD2AC34C632D7401D19EE48A831 (void);
// 0x000002CE System.Void Solana.Unity.Rpc.Models.TransactionHeaderInfo::set_NumReadonlySignedAccounts(System.Int32)
extern void TransactionHeaderInfo_set_NumReadonlySignedAccounts_m4C96C609EE7C98155273FDE9DB96DE82CEC33529 (void);
// 0x000002CF System.Int32 Solana.Unity.Rpc.Models.TransactionHeaderInfo::get_NumReadonlyUnsignedAccounts()
extern void TransactionHeaderInfo_get_NumReadonlyUnsignedAccounts_m25EAFC6E517BBC8141A6C04BF74C9666E931234A (void);
// 0x000002D0 System.Void Solana.Unity.Rpc.Models.TransactionHeaderInfo::set_NumReadonlyUnsignedAccounts(System.Int32)
extern void TransactionHeaderInfo_set_NumReadonlyUnsignedAccounts_mF425FE23F77D5322B9DCB80FE421A09ECFEFE435 (void);
// 0x000002D1 System.Void Solana.Unity.Rpc.Models.TransactionHeaderInfo::.ctor()
extern void TransactionHeaderInfo__ctor_m4EB8708D9E5B21CA74DA8E5BC26792C1008A2664 (void);
// 0x000002D2 Solana.Unity.Rpc.Models.TransactionError Solana.Unity.Rpc.Models.TransactionMeta::get_Error()
extern void TransactionMeta_get_Error_m9B7574438BB243C13AFDEB6713E5C952688E1D4B (void);
// 0x000002D3 System.Void Solana.Unity.Rpc.Models.TransactionMeta::set_Error(Solana.Unity.Rpc.Models.TransactionError)
extern void TransactionMeta_set_Error_m3E20F2D5A52C8F6ACFB223B6E41785BD38E60BF9 (void);
// 0x000002D4 System.UInt64 Solana.Unity.Rpc.Models.TransactionMeta::get_Fee()
extern void TransactionMeta_get_Fee_m186448596B4B9B329AD4079FA2FF6DBF5F5BCF6D (void);
// 0x000002D5 System.Void Solana.Unity.Rpc.Models.TransactionMeta::set_Fee(System.UInt64)
extern void TransactionMeta_set_Fee_m452E09E92047024031FA9E7135E6D48BFDCC88C1 (void);
// 0x000002D6 System.UInt64[] Solana.Unity.Rpc.Models.TransactionMeta::get_PreBalances()
extern void TransactionMeta_get_PreBalances_mC6BFC8CF7F1BEBA2541705A03815F4504524BDF7 (void);
// 0x000002D7 System.Void Solana.Unity.Rpc.Models.TransactionMeta::set_PreBalances(System.UInt64[])
extern void TransactionMeta_set_PreBalances_mCCB9D699775E96985E126AA28B14FEBF3B5887A1 (void);
// 0x000002D8 System.UInt64[] Solana.Unity.Rpc.Models.TransactionMeta::get_PostBalances()
extern void TransactionMeta_get_PostBalances_mA3BDBA8B592772FA153C062858AB34B9F7E6F37C (void);
// 0x000002D9 System.Void Solana.Unity.Rpc.Models.TransactionMeta::set_PostBalances(System.UInt64[])
extern void TransactionMeta_set_PostBalances_m9ADB4277C932555985BC19CAA21BF2957540A64F (void);
// 0x000002DA Solana.Unity.Rpc.Models.InnerInstruction[] Solana.Unity.Rpc.Models.TransactionMeta::get_InnerInstructions()
extern void TransactionMeta_get_InnerInstructions_mA488AB7DD0F2EB16D806E1285D65D87F2762111A (void);
// 0x000002DB System.Void Solana.Unity.Rpc.Models.TransactionMeta::set_InnerInstructions(Solana.Unity.Rpc.Models.InnerInstruction[])
extern void TransactionMeta_set_InnerInstructions_m13AD4977906D778168C34BFF2502FF4A768F04BD (void);
// 0x000002DC Solana.Unity.Rpc.Models.TokenBalanceInfo[] Solana.Unity.Rpc.Models.TransactionMeta::get_PreTokenBalances()
extern void TransactionMeta_get_PreTokenBalances_m06266D19FCC0082F6B19AFB97E6A27B4736633FE (void);
// 0x000002DD System.Void Solana.Unity.Rpc.Models.TransactionMeta::set_PreTokenBalances(Solana.Unity.Rpc.Models.TokenBalanceInfo[])
extern void TransactionMeta_set_PreTokenBalances_mC29A275D7ECC89EC3EF5F549285E17E71EFE82E8 (void);
// 0x000002DE Solana.Unity.Rpc.Models.TokenBalanceInfo[] Solana.Unity.Rpc.Models.TransactionMeta::get_PostTokenBalances()
extern void TransactionMeta_get_PostTokenBalances_m3F751A033935C64BE8A907CCA4D481F4ED38DB53 (void);
// 0x000002DF System.Void Solana.Unity.Rpc.Models.TransactionMeta::set_PostTokenBalances(Solana.Unity.Rpc.Models.TokenBalanceInfo[])
extern void TransactionMeta_set_PostTokenBalances_m6907BB3B1469FDB209014B329DEC905736AECC1C (void);
// 0x000002E0 System.String[] Solana.Unity.Rpc.Models.TransactionMeta::get_LogMessages()
extern void TransactionMeta_get_LogMessages_m2F2BBA7B3BA1207B2708B0AFA3AE3201DCD6C99E (void);
// 0x000002E1 System.Void Solana.Unity.Rpc.Models.TransactionMeta::set_LogMessages(System.String[])
extern void TransactionMeta_set_LogMessages_m7A4D8157CB0D67F803390432AD0D2491F734CA1D (void);
// 0x000002E2 System.Void Solana.Unity.Rpc.Models.TransactionMeta::.ctor()
extern void TransactionMeta__ctor_m09490BEE5C0338572DBB7FBDC00FC8431DC62B9D (void);
// 0x000002E3 System.Int32 Solana.Unity.Rpc.Models.TokenBalanceInfo::get_AccountIndex()
extern void TokenBalanceInfo_get_AccountIndex_mD6692B3B8CA6A222FABD1581D6B315EBF0A6D4FF (void);
// 0x000002E4 System.Void Solana.Unity.Rpc.Models.TokenBalanceInfo::set_AccountIndex(System.Int32)
extern void TokenBalanceInfo_set_AccountIndex_m2B5218491C171922C6C17880F4F00C5622D67465 (void);
// 0x000002E5 System.String Solana.Unity.Rpc.Models.TokenBalanceInfo::get_Mint()
extern void TokenBalanceInfo_get_Mint_m4DE4EE9D2C9A6DD81DA15EA38CAB8D1C23117C77 (void);
// 0x000002E6 System.Void Solana.Unity.Rpc.Models.TokenBalanceInfo::set_Mint(System.String)
extern void TokenBalanceInfo_set_Mint_m32AA280017148A533A5E4E43CEAEF6B102009F55 (void);
// 0x000002E7 Solana.Unity.Rpc.Models.TokenBalance Solana.Unity.Rpc.Models.TokenBalanceInfo::get_UiTokenAmount()
extern void TokenBalanceInfo_get_UiTokenAmount_mE6FF1528BC8172EB95F0BD7729EE6FA468A4E35E (void);
// 0x000002E8 System.Void Solana.Unity.Rpc.Models.TokenBalanceInfo::set_UiTokenAmount(Solana.Unity.Rpc.Models.TokenBalance)
extern void TokenBalanceInfo_set_UiTokenAmount_mFFC971958138D549B1F00C02250AB2E6BC066760 (void);
// 0x000002E9 System.Void Solana.Unity.Rpc.Models.TokenBalanceInfo::.ctor()
extern void TokenBalanceInfo__ctor_m0A3751481513A52C0563E453D13E7BA16BA1F3F5 (void);
// 0x000002EA System.Int32 Solana.Unity.Rpc.Models.InnerInstruction::get_Index()
extern void InnerInstruction_get_Index_mEBDEB2BB35B43B0586CC12FA125F412404E84472 (void);
// 0x000002EB System.Void Solana.Unity.Rpc.Models.InnerInstruction::set_Index(System.Int32)
extern void InnerInstruction_set_Index_mA86E09B94E7CA1F3FF5E30060F87A66E0FE6334C (void);
// 0x000002EC Solana.Unity.Rpc.Models.InstructionInfo[] Solana.Unity.Rpc.Models.InnerInstruction::get_Instructions()
extern void InnerInstruction_get_Instructions_m9092845CEBACEE55D347CA8EA7E84171FA7781F1 (void);
// 0x000002ED System.Void Solana.Unity.Rpc.Models.InnerInstruction::set_Instructions(Solana.Unity.Rpc.Models.InstructionInfo[])
extern void InnerInstruction_set_Instructions_m36A8AB2C21F8428387C1E192FBE15245F083D51C (void);
// 0x000002EE System.Void Solana.Unity.Rpc.Models.InnerInstruction::.ctor()
extern void InnerInstruction__ctor_mAF1567DC5877EE87B3FF8D1BE13FC2E8A761251C (void);
// 0x000002EF System.Int32 Solana.Unity.Rpc.Models.InstructionInfo::get_ProgramIdIndex()
extern void InstructionInfo_get_ProgramIdIndex_m820F60B65CD911E37163B674D80428024F200169 (void);
// 0x000002F0 System.Void Solana.Unity.Rpc.Models.InstructionInfo::set_ProgramIdIndex(System.Int32)
extern void InstructionInfo_set_ProgramIdIndex_mFCEAB8B07A604AB547457D61762C5117DD408E7D (void);
// 0x000002F1 System.Int32[] Solana.Unity.Rpc.Models.InstructionInfo::get_Accounts()
extern void InstructionInfo_get_Accounts_mB51A5FB5E64658DD7ECAEC4D8D2C4A00BFF055D2 (void);
// 0x000002F2 System.Void Solana.Unity.Rpc.Models.InstructionInfo::set_Accounts(System.Int32[])
extern void InstructionInfo_set_Accounts_m0A92408C8FD359AE1CEACEDA4B8A3B4AB6952F27 (void);
// 0x000002F3 System.String Solana.Unity.Rpc.Models.InstructionInfo::get_Data()
extern void InstructionInfo_get_Data_m8C210FAB85D541E5DF51F2C4965999BE405C24ED (void);
// 0x000002F4 System.Void Solana.Unity.Rpc.Models.InstructionInfo::set_Data(System.String)
extern void InstructionInfo_set_Data_m86F6E3353D34656E33ADE83EB331C9BDCA770F11 (void);
// 0x000002F5 System.Void Solana.Unity.Rpc.Models.InstructionInfo::.ctor()
extern void InstructionInfo__ctor_m4DF8E12F13430661371DD394BC818C0A66E4F7BA (void);
// 0x000002F6 System.UInt64[] Solana.Unity.Rpc.Models.BlockCommitment::get_Commitment()
extern void BlockCommitment_get_Commitment_m9EC2B01F24FEA3ED77E110346F7C7055438ACEE0 (void);
// 0x000002F7 System.Void Solana.Unity.Rpc.Models.BlockCommitment::set_Commitment(System.UInt64[])
extern void BlockCommitment_set_Commitment_mBC306A4BA95E9050859C82A520FF6DF326B92915 (void);
// 0x000002F8 System.UInt64 Solana.Unity.Rpc.Models.BlockCommitment::get_TotalStake()
extern void BlockCommitment_get_TotalStake_mC291FE10995CEF8E45EA17405402EB53F32514E8 (void);
// 0x000002F9 System.Void Solana.Unity.Rpc.Models.BlockCommitment::set_TotalStake(System.UInt64)
extern void BlockCommitment_set_TotalStake_m671B47C4DC1AB419F50BCC9D474A2F0F93519C9F (void);
// 0x000002FA System.Void Solana.Unity.Rpc.Models.BlockCommitment::.ctor()
extern void BlockCommitment__ctor_m12CBDB72EF7D013610A15268DF26A566AA43998D (void);
// 0x000002FB System.UInt64 Solana.Unity.Rpc.Models.FeeCalculator::get_LamportsPerSignature()
extern void FeeCalculator_get_LamportsPerSignature_mC1FD3F8399992814DE532BC7064CA52911C8178E (void);
// 0x000002FC System.Void Solana.Unity.Rpc.Models.FeeCalculator::set_LamportsPerSignature(System.UInt64)
extern void FeeCalculator_set_LamportsPerSignature_m064E6C2F5E7C2DBA088B2A9CDCFAC98D446BB1DC (void);
// 0x000002FD System.Void Solana.Unity.Rpc.Models.FeeCalculator::.ctor()
extern void FeeCalculator__ctor_m4F66E4A8BB92DC1FD3234FA99A946D09B7382B0E (void);
// 0x000002FE Solana.Unity.Rpc.Models.FeeCalculator Solana.Unity.Rpc.Models.FeeCalculatorInfo::get_FeeCalculator()
extern void FeeCalculatorInfo_get_FeeCalculator_m9D4D1EB10E033CBA8C14642F5E90CE3BB7AE9870 (void);
// 0x000002FF System.Void Solana.Unity.Rpc.Models.FeeCalculatorInfo::set_FeeCalculator(Solana.Unity.Rpc.Models.FeeCalculator)
extern void FeeCalculatorInfo_set_FeeCalculator_m6B80099A505DE2ED6C93C0FE73B2EABEF0A96295 (void);
// 0x00000300 System.Void Solana.Unity.Rpc.Models.FeeCalculatorInfo::.ctor()
extern void FeeCalculatorInfo__ctor_m7C1D8B7138C9912F3A41CCBC2F3A8EB781BE9B91 (void);
// 0x00000301 System.String Solana.Unity.Rpc.Models.BlockHash::get_Blockhash()
extern void BlockHash_get_Blockhash_mB1D4C6DF7405E35706409EE52969F9842884AE54 (void);
// 0x00000302 System.Void Solana.Unity.Rpc.Models.BlockHash::set_Blockhash(System.String)
extern void BlockHash_set_Blockhash_m50DA9AFF362369F66773AFB28FA24A5991886CA2 (void);
// 0x00000303 Solana.Unity.Rpc.Models.FeeCalculator Solana.Unity.Rpc.Models.BlockHash::get_FeeCalculator()
extern void BlockHash_get_FeeCalculator_m51C7C23C09ADE4924ABE3BA8A050058C8DB5B9D8 (void);
// 0x00000304 System.Void Solana.Unity.Rpc.Models.BlockHash::set_FeeCalculator(Solana.Unity.Rpc.Models.FeeCalculator)
extern void BlockHash_set_FeeCalculator_m0CB008D50DFAD86C08226355FECC0C56543465FD (void);
// 0x00000305 System.Void Solana.Unity.Rpc.Models.BlockHash::.ctor()
extern void BlockHash__ctor_m8FFA015DBB4BC87692C63155B00E876A87C42A95 (void);
// 0x00000306 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>> Solana.Unity.Rpc.Models.BlockProductionInfo::get_ByIdentity()
extern void BlockProductionInfo_get_ByIdentity_mE1AABED30B82F277B01903B894296DA265E94992 (void);
// 0x00000307 System.Void Solana.Unity.Rpc.Models.BlockProductionInfo::set_ByIdentity(System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>>)
extern void BlockProductionInfo_set_ByIdentity_m3D3826FC831BE8A1E5636C55D1A06307E0BC8A6E (void);
// 0x00000308 Solana.Unity.Rpc.Models.SlotRange Solana.Unity.Rpc.Models.BlockProductionInfo::get_Range()
extern void BlockProductionInfo_get_Range_m0635F09BE4DACB42E6B5D32CE8CE8A00EDA6C612 (void);
// 0x00000309 System.Void Solana.Unity.Rpc.Models.BlockProductionInfo::set_Range(Solana.Unity.Rpc.Models.SlotRange)
extern void BlockProductionInfo_set_Range_m392D427A2568A1CDA88F0CA647780A76A5463B81 (void);
// 0x0000030A System.Void Solana.Unity.Rpc.Models.BlockProductionInfo::.ctor()
extern void BlockProductionInfo__ctor_m8AE0CF4505112AC11CEC5E5D7891EC1627CDC38D (void);
// 0x0000030B System.UInt64 Solana.Unity.Rpc.Models.SlotRange::get_FirstSlot()
extern void SlotRange_get_FirstSlot_m3C744951BF5F55173BCE7E670414435C71E1EC6A (void);
// 0x0000030C System.Void Solana.Unity.Rpc.Models.SlotRange::set_FirstSlot(System.UInt64)
extern void SlotRange_set_FirstSlot_mE027729ED22E1940E6BC9D6E70069607430254AF (void);
// 0x0000030D System.UInt64 Solana.Unity.Rpc.Models.SlotRange::get_LastSlot()
extern void SlotRange_get_LastSlot_m0C4A5F6F6C473A1CE57D5F1D4BD1937840940C30 (void);
// 0x0000030E System.Void Solana.Unity.Rpc.Models.SlotRange::set_LastSlot(System.UInt64)
extern void SlotRange_set_LastSlot_mFC5926BF9EC7A622A9380BCC9A7D918770DB06E9 (void);
// 0x0000030F System.Void Solana.Unity.Rpc.Models.SlotRange::.ctor()
extern void SlotRange__ctor_mCD6601762657567212E08F593FE481670BD92AA9 (void);
// 0x00000310 System.String Solana.Unity.Rpc.Models.ClusterNode::get_Gossip()
extern void ClusterNode_get_Gossip_m2F2AB40F78A227CC1231F7163CF7AE6D070BC15C (void);
// 0x00000311 System.Void Solana.Unity.Rpc.Models.ClusterNode::set_Gossip(System.String)
extern void ClusterNode_set_Gossip_mB9E2619E6819D3098621A4688BCC07AED89D9265 (void);
// 0x00000312 System.String Solana.Unity.Rpc.Models.ClusterNode::get_PublicKey()
extern void ClusterNode_get_PublicKey_m519F48C7F2642B0A90A8D9C995B6CFD970211C30 (void);
// 0x00000313 System.Void Solana.Unity.Rpc.Models.ClusterNode::set_PublicKey(System.String)
extern void ClusterNode_set_PublicKey_m631280E0F78D3174435E669B70826F057F1D6DD5 (void);
// 0x00000314 System.String Solana.Unity.Rpc.Models.ClusterNode::get_Rpc()
extern void ClusterNode_get_Rpc_mC1C3BDE9B754ABFBBF0B9472DCB38D9C27FAB554 (void);
// 0x00000315 System.Void Solana.Unity.Rpc.Models.ClusterNode::set_Rpc(System.String)
extern void ClusterNode_set_Rpc_mF2074E50335982720AE090F711F2090662A52E2A (void);
// 0x00000316 System.String Solana.Unity.Rpc.Models.ClusterNode::get_Tpu()
extern void ClusterNode_get_Tpu_m26D20536439D2630FAF5B31247A931EFD9A42A83 (void);
// 0x00000317 System.Void Solana.Unity.Rpc.Models.ClusterNode::set_Tpu(System.String)
extern void ClusterNode_set_Tpu_mC6D516005301E2D41D6DBD46AC076C790E5D55A4 (void);
// 0x00000318 System.String Solana.Unity.Rpc.Models.ClusterNode::get_Version()
extern void ClusterNode_get_Version_mE0405318C2D6E7650F4AD68619CD20DBA13A0C33 (void);
// 0x00000319 System.Void Solana.Unity.Rpc.Models.ClusterNode::set_Version(System.String)
extern void ClusterNode_set_Version_mA792CC7C584D2509C05B9F10499BED651EE4A3D7 (void);
// 0x0000031A System.Nullable`1<System.UInt64> Solana.Unity.Rpc.Models.ClusterNode::get_FeatureSet()
extern void ClusterNode_get_FeatureSet_m7DDC01C5819BC0C538634A6F7E7F8CAA0961C533 (void);
// 0x0000031B System.Void Solana.Unity.Rpc.Models.ClusterNode::set_FeatureSet(System.Nullable`1<System.UInt64>)
extern void ClusterNode_set_FeatureSet_mEBB051E2CAF27FAF3328901C6CEC6B587E641726 (void);
// 0x0000031C System.UInt64 Solana.Unity.Rpc.Models.ClusterNode::get_ShredVersion()
extern void ClusterNode_get_ShredVersion_mBC9B5C31206B275C407CBC8EE26C2FB19A968557 (void);
// 0x0000031D System.Void Solana.Unity.Rpc.Models.ClusterNode::set_ShredVersion(System.UInt64)
extern void ClusterNode_set_ShredVersion_mB14BCF21009C31C20FA31D74AD76A4683AAA13B6 (void);
// 0x0000031E System.Void Solana.Unity.Rpc.Models.ClusterNode::.ctor()
extern void ClusterNode__ctor_m2BC9822D99F04991A6CCA1894FB172AB1906D754 (void);
// 0x0000031F System.UInt64 Solana.Unity.Rpc.Models.EpochInfo::get_AbsoluteSlot()
extern void EpochInfo_get_AbsoluteSlot_m7EDC3B865554C33AF38526D58C0BA3192BB6D786 (void);
// 0x00000320 System.Void Solana.Unity.Rpc.Models.EpochInfo::set_AbsoluteSlot(System.UInt64)
extern void EpochInfo_set_AbsoluteSlot_mAB4632B51FEE88BB61D24A7F699E8EBA5ABA231F (void);
// 0x00000321 System.UInt64 Solana.Unity.Rpc.Models.EpochInfo::get_BlockHeight()
extern void EpochInfo_get_BlockHeight_m78E1F86C000EBD43662B0AA94CEAAFD9B9060648 (void);
// 0x00000322 System.Void Solana.Unity.Rpc.Models.EpochInfo::set_BlockHeight(System.UInt64)
extern void EpochInfo_set_BlockHeight_m7F7E87E574375AF67DAB2E7413CE4ED2725A19DD (void);
// 0x00000323 System.UInt64 Solana.Unity.Rpc.Models.EpochInfo::get_Epoch()
extern void EpochInfo_get_Epoch_mD949F237B86D4CB7565351F9444053B758133882 (void);
// 0x00000324 System.Void Solana.Unity.Rpc.Models.EpochInfo::set_Epoch(System.UInt64)
extern void EpochInfo_set_Epoch_m8E6F99E93A029725B2AFE6C0C19D7A938BC3E13D (void);
// 0x00000325 System.UInt64 Solana.Unity.Rpc.Models.EpochInfo::get_SlotIndex()
extern void EpochInfo_get_SlotIndex_mD89A1D937220F80850FBAF4FE25C90695A5ED4EC (void);
// 0x00000326 System.Void Solana.Unity.Rpc.Models.EpochInfo::set_SlotIndex(System.UInt64)
extern void EpochInfo_set_SlotIndex_m1F3643DE1839FD069D093809300D679FC7EF1F0F (void);
// 0x00000327 System.UInt64 Solana.Unity.Rpc.Models.EpochInfo::get_SlotsInEpoch()
extern void EpochInfo_get_SlotsInEpoch_m7F00083145115F94FFCCE7891B54345D207CC2F2 (void);
// 0x00000328 System.Void Solana.Unity.Rpc.Models.EpochInfo::set_SlotsInEpoch(System.UInt64)
extern void EpochInfo_set_SlotsInEpoch_m78042450758B7AABE219701DC377018A968FF255 (void);
// 0x00000329 System.Void Solana.Unity.Rpc.Models.EpochInfo::.ctor()
extern void EpochInfo__ctor_mDD9CD0042ACED44C06C4CB64CD0904D97DA9D62E (void);
// 0x0000032A System.UInt64 Solana.Unity.Rpc.Models.EpochScheduleInfo::get_SlotsPerEpoch()
extern void EpochScheduleInfo_get_SlotsPerEpoch_mC79D5E1C5CF42E78CE3478D33D45B7A7AED79A78 (void);
// 0x0000032B System.Void Solana.Unity.Rpc.Models.EpochScheduleInfo::set_SlotsPerEpoch(System.UInt64)
extern void EpochScheduleInfo_set_SlotsPerEpoch_mE9203E6C4460D9E694DDD06900ED1DC93BAC3565 (void);
// 0x0000032C System.UInt64 Solana.Unity.Rpc.Models.EpochScheduleInfo::get_LeaderScheduleSlotOffset()
extern void EpochScheduleInfo_get_LeaderScheduleSlotOffset_m8AEBA3F6D5CB4147FBC2F2BA7C82DA3F38D8F5F6 (void);
// 0x0000032D System.Void Solana.Unity.Rpc.Models.EpochScheduleInfo::set_LeaderScheduleSlotOffset(System.UInt64)
extern void EpochScheduleInfo_set_LeaderScheduleSlotOffset_m86D4D0544B1FFC8FC8E192390CB468C9F805099D (void);
// 0x0000032E System.UInt64 Solana.Unity.Rpc.Models.EpochScheduleInfo::get_FirstNormalEpoch()
extern void EpochScheduleInfo_get_FirstNormalEpoch_m622C9421A50FC3BA6C9B8FA12DC37C4E0A6991C8 (void);
// 0x0000032F System.Void Solana.Unity.Rpc.Models.EpochScheduleInfo::set_FirstNormalEpoch(System.UInt64)
extern void EpochScheduleInfo_set_FirstNormalEpoch_m2A3AE78BB628BF3C715D9807276B1AACA25F7305 (void);
// 0x00000330 System.UInt64 Solana.Unity.Rpc.Models.EpochScheduleInfo::get_FirstNormalSlot()
extern void EpochScheduleInfo_get_FirstNormalSlot_mD9AA0B11C2EEDFB60672617CE21580AF5A2540A1 (void);
// 0x00000331 System.Void Solana.Unity.Rpc.Models.EpochScheduleInfo::set_FirstNormalSlot(System.UInt64)
extern void EpochScheduleInfo_set_FirstNormalSlot_mE03E8FE2D50F6288233B675B751D7B2CB4567FE8 (void);
// 0x00000332 System.Boolean Solana.Unity.Rpc.Models.EpochScheduleInfo::get_Warmup()
extern void EpochScheduleInfo_get_Warmup_m81682215C63B1D03D031ED4580A2B1431D833CB9 (void);
// 0x00000333 System.Void Solana.Unity.Rpc.Models.EpochScheduleInfo::set_Warmup(System.Boolean)
extern void EpochScheduleInfo_set_Warmup_mBEAB8931CA194A51FE0D2E7A1BAD421DD9072027 (void);
// 0x00000334 System.Void Solana.Unity.Rpc.Models.EpochScheduleInfo::.ctor()
extern void EpochScheduleInfo__ctor_m16366408A2CFBE0E92F11A88B326AA0D5FB61865 (void);
// 0x00000335 Solana.Unity.Rpc.Models.TransactionError Solana.Unity.Rpc.Models.ErrorResult::get_Error()
extern void ErrorResult_get_Error_mB20E45706787DC0C26CFEAC69F579745B42308C2 (void);
// 0x00000336 System.Void Solana.Unity.Rpc.Models.ErrorResult::set_Error(Solana.Unity.Rpc.Models.TransactionError)
extern void ErrorResult_set_Error_mF7479B9AA015B5FFEBD7CD5A3CAC524713CAF045 (void);
// 0x00000337 System.Void Solana.Unity.Rpc.Models.ErrorResult::.ctor()
extern void ErrorResult__ctor_m1172FE1A15B53A5054747C480C6A68716969CA21 (void);
// 0x00000338 System.Decimal Solana.Unity.Rpc.Models.FeeRateGovernor::get_BurnPercent()
extern void FeeRateGovernor_get_BurnPercent_m0EED8B49EB8906E913D1A73836B80939A0250D02 (void);
// 0x00000339 System.Void Solana.Unity.Rpc.Models.FeeRateGovernor::set_BurnPercent(System.Decimal)
extern void FeeRateGovernor_set_BurnPercent_m3623F53047680EB021361901D99A86BD57B30460 (void);
// 0x0000033A System.UInt64 Solana.Unity.Rpc.Models.FeeRateGovernor::get_MaxLamportsPerSignature()
extern void FeeRateGovernor_get_MaxLamportsPerSignature_mFB1B001DB959844A3CF10899E5428A02EF719ACE (void);
// 0x0000033B System.Void Solana.Unity.Rpc.Models.FeeRateGovernor::set_MaxLamportsPerSignature(System.UInt64)
extern void FeeRateGovernor_set_MaxLamportsPerSignature_m6C6B76447A63EF25D94E6DBEB7D587F5CA5D4546 (void);
// 0x0000033C System.UInt64 Solana.Unity.Rpc.Models.FeeRateGovernor::get_MinLamportsPerSignature()
extern void FeeRateGovernor_get_MinLamportsPerSignature_m66A1E94F7630A0AA6A6813390EE8152001E653C7 (void);
// 0x0000033D System.Void Solana.Unity.Rpc.Models.FeeRateGovernor::set_MinLamportsPerSignature(System.UInt64)
extern void FeeRateGovernor_set_MinLamportsPerSignature_m05F8187C5491DB6929B86D082D9B2D94D6FF3B5F (void);
// 0x0000033E System.UInt64 Solana.Unity.Rpc.Models.FeeRateGovernor::get_TargetLamportsPerSignature()
extern void FeeRateGovernor_get_TargetLamportsPerSignature_mF1A3EE118C153A2F63CA420167800C1D45D52B0B (void);
// 0x0000033F System.Void Solana.Unity.Rpc.Models.FeeRateGovernor::set_TargetLamportsPerSignature(System.UInt64)
extern void FeeRateGovernor_set_TargetLamportsPerSignature_m56CE6030259878748C955E9014BA21EA31827C6D (void);
// 0x00000340 System.UInt64 Solana.Unity.Rpc.Models.FeeRateGovernor::get_TargetSignaturesPerSlot()
extern void FeeRateGovernor_get_TargetSignaturesPerSlot_mDE411C06C8D282D15AE88536CF93FFCC5A4FA00A (void);
// 0x00000341 System.Void Solana.Unity.Rpc.Models.FeeRateGovernor::set_TargetSignaturesPerSlot(System.UInt64)
extern void FeeRateGovernor_set_TargetSignaturesPerSlot_m0BA2B9130F1792DCDB834E010CCF83183CE44AB3 (void);
// 0x00000342 System.Void Solana.Unity.Rpc.Models.FeeRateGovernor::.ctor()
extern void FeeRateGovernor__ctor_mDA58FBB59B1170D8FA680E11641A0829E4F5E164 (void);
// 0x00000343 Solana.Unity.Rpc.Models.FeeRateGovernor Solana.Unity.Rpc.Models.FeeRateGovernorInfo::get_FeeRateGovernor()
extern void FeeRateGovernorInfo_get_FeeRateGovernor_mF9613F8EB216075579375A26011201214C64D791 (void);
// 0x00000344 System.Void Solana.Unity.Rpc.Models.FeeRateGovernorInfo::set_FeeRateGovernor(Solana.Unity.Rpc.Models.FeeRateGovernor)
extern void FeeRateGovernorInfo_set_FeeRateGovernor_m8DC785629D012E7A5C6333C50B6998813793D0A4 (void);
// 0x00000345 System.Void Solana.Unity.Rpc.Models.FeeRateGovernorInfo::.ctor()
extern void FeeRateGovernorInfo__ctor_mD63B43B05F05457254D5F19E32EDCA202400B1C9 (void);
// 0x00000346 System.String Solana.Unity.Rpc.Models.FeesInfo::get_Blockhash()
extern void FeesInfo_get_Blockhash_m469220E351011026C7257F9D945BAA5B62989ACD (void);
// 0x00000347 System.Void Solana.Unity.Rpc.Models.FeesInfo::set_Blockhash(System.String)
extern void FeesInfo_set_Blockhash_mB93ADB9709DBF9B0C5A648BA43B1D5658E62DE04 (void);
// 0x00000348 Solana.Unity.Rpc.Models.FeeCalculator Solana.Unity.Rpc.Models.FeesInfo::get_FeeCalculator()
extern void FeesInfo_get_FeeCalculator_m1A4CC5CCC1D2D14C73DCAAE169E53A7B829224B2 (void);
// 0x00000349 System.Void Solana.Unity.Rpc.Models.FeesInfo::set_FeeCalculator(Solana.Unity.Rpc.Models.FeeCalculator)
extern void FeesInfo_set_FeeCalculator_m960390175661F891D171272DCCC94429324ABCE6 (void);
// 0x0000034A System.UInt64 Solana.Unity.Rpc.Models.FeesInfo::get_LastValidSlot()
extern void FeesInfo_get_LastValidSlot_m4AA1CEA9480E06A691096627CFFEEAC90C1F2483 (void);
// 0x0000034B System.Void Solana.Unity.Rpc.Models.FeesInfo::set_LastValidSlot(System.UInt64)
extern void FeesInfo_set_LastValidSlot_m647A5C9DD1FE7C1F93E60F42C2B77173F9AEA9E7 (void);
// 0x0000034C System.UInt64 Solana.Unity.Rpc.Models.FeesInfo::get_LastValidBlockHeight()
extern void FeesInfo_get_LastValidBlockHeight_m2F70E7BB96884AFF930BBF0A2366BBC824E735AE (void);
// 0x0000034D System.Void Solana.Unity.Rpc.Models.FeesInfo::set_LastValidBlockHeight(System.UInt64)
extern void FeesInfo_set_LastValidBlockHeight_m4BCC621EBA4F433168D0076118BB8D644C87CFEC (void);
// 0x0000034E System.Void Solana.Unity.Rpc.Models.FeesInfo::.ctor()
extern void FeesInfo__ctor_mFB2B712C24B6339C6CDF4FAE0B12D59D47222142 (void);
// 0x0000034F System.Int32 Solana.Unity.Rpc.Models.MemCmp::get_Offset()
extern void MemCmp_get_Offset_m8C6898CE5F90F46288BAE54654D3B9844686FA64 (void);
// 0x00000350 System.Void Solana.Unity.Rpc.Models.MemCmp::set_Offset(System.Int32)
extern void MemCmp_set_Offset_mCB83B81A3939A37B8DF0EFD827F906F7814E4ECC (void);
// 0x00000351 System.String Solana.Unity.Rpc.Models.MemCmp::get_Bytes()
extern void MemCmp_get_Bytes_m8A9AF8A0F35EA92D1030583DB84553A241FD5CCC (void);
// 0x00000352 System.Void Solana.Unity.Rpc.Models.MemCmp::set_Bytes(System.String)
extern void MemCmp_set_Bytes_mCDC0CAE1E02E4847F4BD1155280B968EA5E4E550 (void);
// 0x00000353 System.Void Solana.Unity.Rpc.Models.MemCmp::.ctor()
extern void MemCmp__ctor_m57991249C7DB05E5D8154A984009A688B1D8DE6B (void);
// 0x00000354 System.String Solana.Unity.Rpc.Models.NodeIdentity::get_Identity()
extern void NodeIdentity_get_Identity_m9A663E9055FEF35A47C1C190217AD572EC1958C9 (void);
// 0x00000355 System.Void Solana.Unity.Rpc.Models.NodeIdentity::set_Identity(System.String)
extern void NodeIdentity_set_Identity_m435947E3F1CAADA40FE7035241B51376CE6940A1 (void);
// 0x00000356 System.Void Solana.Unity.Rpc.Models.NodeIdentity::.ctor()
extern void NodeIdentity__ctor_m21686784F432453C9A643E8D5DB8DBB5F9633837 (void);
// 0x00000357 System.Decimal Solana.Unity.Rpc.Models.InflationGovernor::get_Initial()
extern void InflationGovernor_get_Initial_m4BAD3DA5DB9B2EF800822B6F705BAE275989EBBD (void);
// 0x00000358 System.Void Solana.Unity.Rpc.Models.InflationGovernor::set_Initial(System.Decimal)
extern void InflationGovernor_set_Initial_mB26F51C7383DA2AB73C9C976FC4601C8DD12B385 (void);
// 0x00000359 System.Decimal Solana.Unity.Rpc.Models.InflationGovernor::get_Terminal()
extern void InflationGovernor_get_Terminal_mDE4BA4A295CC429A4900ABB966F75628ADA851B5 (void);
// 0x0000035A System.Void Solana.Unity.Rpc.Models.InflationGovernor::set_Terminal(System.Decimal)
extern void InflationGovernor_set_Terminal_mDBDA06C063B8C3C754FB975732C6CD88B47D77CB (void);
// 0x0000035B System.Decimal Solana.Unity.Rpc.Models.InflationGovernor::get_Taper()
extern void InflationGovernor_get_Taper_mFA0087E54B86C8A98A8CEAB9DAE522677AC8C829 (void);
// 0x0000035C System.Void Solana.Unity.Rpc.Models.InflationGovernor::set_Taper(System.Decimal)
extern void InflationGovernor_set_Taper_m59A7C76EA4AADCD73248B812A6CC9FE7C092358A (void);
// 0x0000035D System.Decimal Solana.Unity.Rpc.Models.InflationGovernor::get_Foundation()
extern void InflationGovernor_get_Foundation_m7FD796D780D9B4CBC801F9A056232835CB7AE8AA (void);
// 0x0000035E System.Void Solana.Unity.Rpc.Models.InflationGovernor::set_Foundation(System.Decimal)
extern void InflationGovernor_set_Foundation_mA569D4EB165544DC7BB29B0E624257ABBA1B7D08 (void);
// 0x0000035F System.Decimal Solana.Unity.Rpc.Models.InflationGovernor::get_FoundationTerm()
extern void InflationGovernor_get_FoundationTerm_m5B62F76CE0308890317BB2FC1BA8893723933638 (void);
// 0x00000360 System.Void Solana.Unity.Rpc.Models.InflationGovernor::set_FoundationTerm(System.Decimal)
extern void InflationGovernor_set_FoundationTerm_mBD908315D6A6AC6A9C777D112D3E2EF4D3B6D827 (void);
// 0x00000361 System.Void Solana.Unity.Rpc.Models.InflationGovernor::.ctor()
extern void InflationGovernor__ctor_m5CFB5FEF4A775E2D0055691108920EC8195474CE (void);
// 0x00000362 System.Decimal Solana.Unity.Rpc.Models.InflationRate::get_Epoch()
extern void InflationRate_get_Epoch_m0F6CF185D933D7A3C2E0781BD5A53DDF6A29928E (void);
// 0x00000363 System.Void Solana.Unity.Rpc.Models.InflationRate::set_Epoch(System.Decimal)
extern void InflationRate_set_Epoch_m5F4E0A504CB85549339DA5284E0160053D560DEE (void);
// 0x00000364 System.Decimal Solana.Unity.Rpc.Models.InflationRate::get_Foundation()
extern void InflationRate_get_Foundation_m8991F185A79E508BC07EB87776CB097FC463A44A (void);
// 0x00000365 System.Void Solana.Unity.Rpc.Models.InflationRate::set_Foundation(System.Decimal)
extern void InflationRate_set_Foundation_m05EEE37DE65A560CB406D0096B4F30B7A476B31B (void);
// 0x00000366 System.Decimal Solana.Unity.Rpc.Models.InflationRate::get_Total()
extern void InflationRate_get_Total_mE90620CCFC3AE9F0410C57AEA92461D2404B19CB (void);
// 0x00000367 System.Void Solana.Unity.Rpc.Models.InflationRate::set_Total(System.Decimal)
extern void InflationRate_set_Total_m1A665C9B65633001ED37458EDBD7B28818060C44 (void);
// 0x00000368 System.Decimal Solana.Unity.Rpc.Models.InflationRate::get_Validator()
extern void InflationRate_get_Validator_m5FC6F88B8EDCC4F50A2A22122E106586826525DE (void);
// 0x00000369 System.Void Solana.Unity.Rpc.Models.InflationRate::set_Validator(System.Decimal)
extern void InflationRate_set_Validator_m750DB18787C63A25CA458DBBE126A60E6288E45E (void);
// 0x0000036A System.Void Solana.Unity.Rpc.Models.InflationRate::.ctor()
extern void InflationRate__ctor_mFE7C3B3D2992A9A32AF903BF42986FAA2379C882 (void);
// 0x0000036B System.UInt64 Solana.Unity.Rpc.Models.InflationReward::get_Epoch()
extern void InflationReward_get_Epoch_m6472C8C40271176C16343B8CC447BCE37A2AC6CC (void);
// 0x0000036C System.Void Solana.Unity.Rpc.Models.InflationReward::set_Epoch(System.UInt64)
extern void InflationReward_set_Epoch_m2BD10B604F2ECCFBF49D993A2076F8CF0DB482E3 (void);
// 0x0000036D System.UInt64 Solana.Unity.Rpc.Models.InflationReward::get_EffectiveSlot()
extern void InflationReward_get_EffectiveSlot_m71904D8E5F8696859ECA0A304041E27493128006 (void);
// 0x0000036E System.Void Solana.Unity.Rpc.Models.InflationReward::set_EffectiveSlot(System.UInt64)
extern void InflationReward_set_EffectiveSlot_m4A069AA0F3245E826C2B02983A5DB645B741CD04 (void);
// 0x0000036F System.UInt64 Solana.Unity.Rpc.Models.InflationReward::get_Amount()
extern void InflationReward_get_Amount_m10C89B12DD0D3F90CA73E540274119C2A4B21BD3 (void);
// 0x00000370 System.Void Solana.Unity.Rpc.Models.InflationReward::set_Amount(System.UInt64)
extern void InflationReward_set_Amount_mBE725320FCE723F44A480FC6C62CE30F3C5430CA (void);
// 0x00000371 System.UInt64 Solana.Unity.Rpc.Models.InflationReward::get_PostBalance()
extern void InflationReward_get_PostBalance_mD23094FCF37E4549654D27DF44A0EE253ACB9185 (void);
// 0x00000372 System.Void Solana.Unity.Rpc.Models.InflationReward::set_PostBalance(System.UInt64)
extern void InflationReward_set_PostBalance_mCDC7BC57EEBBFA25A948CC65819C9283F975DF7E (void);
// 0x00000373 System.Void Solana.Unity.Rpc.Models.InflationReward::.ctor()
extern void InflationReward__ctor_mB0D941C7F324A96E1ED773FA1DA2A588EC077376 (void);
// 0x00000374 System.Int32 Solana.Unity.Rpc.Models.InstructionError::get_InstructionIndex()
extern void InstructionError_get_InstructionIndex_m5EFB67ED2FC2E0BCB2D2DD67DA9AD400669A460A (void);
// 0x00000375 System.Void Solana.Unity.Rpc.Models.InstructionError::set_InstructionIndex(System.Int32)
extern void InstructionError_set_InstructionIndex_mDD1291F9C5B1EAFAB7CDAFAF7F39C169218049D1 (void);
// 0x00000376 Solana.Unity.Rpc.Models.InstructionErrorType Solana.Unity.Rpc.Models.InstructionError::get_Type()
extern void InstructionError_get_Type_mC2A2289E7FCB80A789B28D9A26E4204BF4E12580 (void);
// 0x00000377 System.Void Solana.Unity.Rpc.Models.InstructionError::set_Type(Solana.Unity.Rpc.Models.InstructionErrorType)
extern void InstructionError_set_Type_mB754FCF74F33FF8BCAB2882CD3BEC01CEB211CC5 (void);
// 0x00000378 System.Nullable`1<System.UInt32> Solana.Unity.Rpc.Models.InstructionError::get_CustomError()
extern void InstructionError_get_CustomError_m40295812898DF5B7DCECFFDA079609C731015DC0 (void);
// 0x00000379 System.Void Solana.Unity.Rpc.Models.InstructionError::set_CustomError(System.Nullable`1<System.UInt32>)
extern void InstructionError_set_CustomError_m51AF981BA969BD682B0DAEF60DF28FA700C3975D (void);
// 0x0000037A System.String Solana.Unity.Rpc.Models.InstructionError::get_BorshIoError()
extern void InstructionError_get_BorshIoError_m55EC33305B57E305927B5FF7F67686984D9C3DB4 (void);
// 0x0000037B System.Void Solana.Unity.Rpc.Models.InstructionError::set_BorshIoError(System.String)
extern void InstructionError_set_BorshIoError_mA8594D52B1F661D0DBF7303374CAD7C64896053E (void);
// 0x0000037C System.Void Solana.Unity.Rpc.Models.InstructionError::.ctor()
extern void InstructionError__ctor_mE86A1D8205C20F25F73E3447F994AA384E680F41 (void);
// 0x0000037D Solana.Unity.Rpc.Models.TransactionError Solana.Unity.Rpc.Models.Log::get_Error()
extern void Log_get_Error_mA8428BA06305A0163A5885E643B37A92CE8A86E4 (void);
// 0x0000037E System.Void Solana.Unity.Rpc.Models.Log::set_Error(Solana.Unity.Rpc.Models.TransactionError)
extern void Log_set_Error_mC9F3A133DBF61C76B62F249C937918DBE57FD185 (void);
// 0x0000037F System.String[] Solana.Unity.Rpc.Models.Log::get_Logs()
extern void Log_get_Logs_m0E5BAE67B434A249EACB2F9C3DBB0EBA716C6C21 (void);
// 0x00000380 System.Void Solana.Unity.Rpc.Models.Log::set_Logs(System.String[])
extern void Log_set_Logs_m21A53701F93EEEB9F29C11B5034B1B8E12405010 (void);
// 0x00000381 System.Void Solana.Unity.Rpc.Models.Log::.ctor()
extern void Log__ctor_m5EE4882648C9CF0EFD63933EB477FD44C3DDC661 (void);
// 0x00000382 System.String Solana.Unity.Rpc.Models.LogInfo::get_Signature()
extern void LogInfo_get_Signature_m282D918CD3805500731EF1AB79DC3F8E1B5F329F (void);
// 0x00000383 System.Void Solana.Unity.Rpc.Models.LogInfo::set_Signature(System.String)
extern void LogInfo_set_Signature_m221439DAD5B162482E613838D901FB56ACCFE2A7 (void);
// 0x00000384 System.Void Solana.Unity.Rpc.Models.LogInfo::.ctor()
extern void LogInfo__ctor_mB534E3B1804C2B0ED1FD65A9A3F7F1AF2FBB8F86 (void);
// 0x00000385 Solana.Unity.Rpc.Models.AccountInfo[] Solana.Unity.Rpc.Models.SimulationLogs::get_Accounts()
extern void SimulationLogs_get_Accounts_mB2D5346E4055CBCC43F114E0CAE9FAD5B8333555 (void);
// 0x00000386 System.Void Solana.Unity.Rpc.Models.SimulationLogs::set_Accounts(Solana.Unity.Rpc.Models.AccountInfo[])
extern void SimulationLogs_set_Accounts_m42C92B16EB75E115B627D278FDA4995D460F03A6 (void);
// 0x00000387 Solana.Unity.Rpc.Models.TransactionError Solana.Unity.Rpc.Models.SimulationLogs::get_Error()
extern void SimulationLogs_get_Error_m3F9FA3148E23D94EBE9381A28ECB0B0BA0E9D4B9 (void);
// 0x00000388 System.Void Solana.Unity.Rpc.Models.SimulationLogs::set_Error(Solana.Unity.Rpc.Models.TransactionError)
extern void SimulationLogs_set_Error_mA8F296CE916985761C0D724D7E416CF64127A2AC (void);
// 0x00000389 System.String[] Solana.Unity.Rpc.Models.SimulationLogs::get_Logs()
extern void SimulationLogs_get_Logs_mF702C920B248E6656B8470C01A0D36595DB4B0C7 (void);
// 0x0000038A System.Void Solana.Unity.Rpc.Models.SimulationLogs::set_Logs(System.String[])
extern void SimulationLogs_set_Logs_m4A8B1E0E99BCAA64E0219033B71ECAE62B658952 (void);
// 0x0000038B System.Void Solana.Unity.Rpc.Models.SimulationLogs::.ctor()
extern void SimulationLogs__ctor_mB2E7C22172270BBD21FB4F2DF86F28341762973F (void);
// 0x0000038C System.UInt64 Solana.Unity.Rpc.Models.ErrorData::get_UnitsConsumed()
extern void ErrorData_get_UnitsConsumed_m2FBD9C79B33BCEA44192887D635F208FA0B8CE68 (void);
// 0x0000038D System.Void Solana.Unity.Rpc.Models.ErrorData::set_UnitsConsumed(System.UInt64)
extern void ErrorData_set_UnitsConsumed_m608F80AFAFE99DE022716AC272D2AA466541C35A (void);
// 0x0000038E System.Void Solana.Unity.Rpc.Models.ErrorData::.ctor()
extern void ErrorData__ctor_m74616011BB48A3A68FC844A9FEC5B6428D4B2784 (void);
// 0x0000038F System.Byte Solana.Unity.Rpc.Models.MessageHeader::get_RequiredSignatures()
extern void MessageHeader_get_RequiredSignatures_m3C77B77CD11336FC68C05D1DD67FC8C1E68C63EE (void);
// 0x00000390 System.Void Solana.Unity.Rpc.Models.MessageHeader::set_RequiredSignatures(System.Byte)
extern void MessageHeader_set_RequiredSignatures_mFECD9873EFDE944B95AA0993867EAF0C97A78A04 (void);
// 0x00000391 System.Byte Solana.Unity.Rpc.Models.MessageHeader::get_ReadOnlySignedAccounts()
extern void MessageHeader_get_ReadOnlySignedAccounts_mEEC326CFE1A9B711A8C92DCD3068B47E36A4FA57 (void);
// 0x00000392 System.Void Solana.Unity.Rpc.Models.MessageHeader::set_ReadOnlySignedAccounts(System.Byte)
extern void MessageHeader_set_ReadOnlySignedAccounts_mC22DB7647B3E5AF9CE46A6CE4BA261AED7F5DD21 (void);
// 0x00000393 System.Byte Solana.Unity.Rpc.Models.MessageHeader::get_ReadOnlyUnsignedAccounts()
extern void MessageHeader_get_ReadOnlyUnsignedAccounts_m52CAF5D75F20EDEC819A86C1C1B277FA61B6FF9A (void);
// 0x00000394 System.Void Solana.Unity.Rpc.Models.MessageHeader::set_ReadOnlyUnsignedAccounts(System.Byte)
extern void MessageHeader_set_ReadOnlyUnsignedAccounts_m205AFD91711E42A7200C0CF45C27C7E5AFB13F4A (void);
// 0x00000395 System.Byte[] Solana.Unity.Rpc.Models.MessageHeader::ToBytes()
extern void MessageHeader_ToBytes_m03375E5280260E633DA064FF836ACD4F1881985B (void);
// 0x00000396 System.Void Solana.Unity.Rpc.Models.MessageHeader::.ctor()
extern void MessageHeader__ctor_m1B784A4C5BCAD2205A4B3CB608C99430D20D99B3 (void);
// 0x00000397 Solana.Unity.Rpc.Models.MessageHeader Solana.Unity.Rpc.Models.Message::get_Header()
extern void Message_get_Header_m8B3CB58DE35F964301F1405FB24285FE91CB33C0 (void);
// 0x00000398 System.Void Solana.Unity.Rpc.Models.Message::set_Header(Solana.Unity.Rpc.Models.MessageHeader)
extern void Message_set_Header_mFF10513C46586AD10BB451CAD06FF6FC8D54483F (void);
// 0x00000399 System.Collections.Generic.IList`1<Solana.Unity.Wallet.PublicKey> Solana.Unity.Rpc.Models.Message::get_AccountKeys()
extern void Message_get_AccountKeys_mA54601D25C2E379ECE833089A96026A7AFF910AE (void);
// 0x0000039A System.Void Solana.Unity.Rpc.Models.Message::set_AccountKeys(System.Collections.Generic.IList`1<Solana.Unity.Wallet.PublicKey>)
extern void Message_set_AccountKeys_mD6F317B3A3FAC31A407AB699F5EBB84038A08CD5 (void);
// 0x0000039B System.Collections.Generic.IList`1<Solana.Unity.Rpc.Models.CompiledInstruction> Solana.Unity.Rpc.Models.Message::get_Instructions()
extern void Message_get_Instructions_m1B7AD3A350614D71DBF11A6B4180AC9BB01AA0D0 (void);
// 0x0000039C System.Void Solana.Unity.Rpc.Models.Message::set_Instructions(System.Collections.Generic.IList`1<Solana.Unity.Rpc.Models.CompiledInstruction>)
extern void Message_set_Instructions_mE1EB7428D6DED6DC7CE3A721A42785E8117E6BA0 (void);
// 0x0000039D System.String Solana.Unity.Rpc.Models.Message::get_RecentBlockhash()
extern void Message_get_RecentBlockhash_m3E9CAE6C709D1551650E900A476F2F9F7857414B (void);
// 0x0000039E System.Void Solana.Unity.Rpc.Models.Message::set_RecentBlockhash(System.String)
extern void Message_set_RecentBlockhash_m14C1D2BEF3A93BED84D3F3D237967EE63BF9795C (void);
// 0x0000039F System.Boolean Solana.Unity.Rpc.Models.Message::IsAccountWritable(System.Int32)
extern void Message_IsAccountWritable_mDE3740CDAED7874C775EDC04E38B630FD79A7276 (void);
// 0x000003A0 System.Boolean Solana.Unity.Rpc.Models.Message::IsAccountSigner(System.Int32)
extern void Message_IsAccountSigner_mB885EA6408660BA3D386534D385BD4FFBEE10E08 (void);
// 0x000003A1 System.Byte[] Solana.Unity.Rpc.Models.Message::Serialize()
extern void Message_Serialize_mC6E6D0C5B8C54CE6E844802E43B267698D09F8BC (void);
// 0x000003A2 Solana.Unity.Rpc.Models.Message Solana.Unity.Rpc.Models.Message::Deserialize(System.ReadOnlySpan`1<System.Byte>)
extern void Message_Deserialize_m76ADCE69A212502C8C189EB192D08B6E9E008C91 (void);
// 0x000003A3 Solana.Unity.Rpc.Models.Message Solana.Unity.Rpc.Models.Message::Deserialize(System.String)
extern void Message_Deserialize_m4B3AE7CEC497D8F294298CD22B40547DBB667430 (void);
// 0x000003A4 System.Void Solana.Unity.Rpc.Models.Message::.ctor()
extern void Message__ctor_m8F62C603416EC6B6F5F3626A730C4B62C244A705 (void);
// 0x000003A5 System.UInt64 Solana.Unity.Rpc.Models.PerformanceSample::get_Slot()
extern void PerformanceSample_get_Slot_m6C879D1EB47F162E48ADF23A426AE8450F3DABBB (void);
// 0x000003A6 System.Void Solana.Unity.Rpc.Models.PerformanceSample::set_Slot(System.UInt64)
extern void PerformanceSample_set_Slot_m0F70FE933D732FCAB0F2D703FC8D07A70EC175CA (void);
// 0x000003A7 System.UInt64 Solana.Unity.Rpc.Models.PerformanceSample::get_NumTransactions()
extern void PerformanceSample_get_NumTransactions_m2E5C4FD41413954D9482FFA479F53F3605109254 (void);
// 0x000003A8 System.Void Solana.Unity.Rpc.Models.PerformanceSample::set_NumTransactions(System.UInt64)
extern void PerformanceSample_set_NumTransactions_mF00F9A9B0684EA4293A2BA27F2D41A1B0C36C22D (void);
// 0x000003A9 System.UInt64 Solana.Unity.Rpc.Models.PerformanceSample::get_NumSlots()
extern void PerformanceSample_get_NumSlots_mCD1372DDE766F61417EA775136738D335FFE9BBE (void);
// 0x000003AA System.Void Solana.Unity.Rpc.Models.PerformanceSample::set_NumSlots(System.UInt64)
extern void PerformanceSample_set_NumSlots_mF9E260EDAA876DDB2A7807B1C19079E47D98B4C1 (void);
// 0x000003AB System.Int32 Solana.Unity.Rpc.Models.PerformanceSample::get_SamplePeriodSecs()
extern void PerformanceSample_get_SamplePeriodSecs_m91C97FF1CBE8B4002DC4DC208ED694F3C337C6EC (void);
// 0x000003AC System.Void Solana.Unity.Rpc.Models.PerformanceSample::set_SamplePeriodSecs(System.Int32)
extern void PerformanceSample_set_SamplePeriodSecs_m6A613994AD4C5EAA344470C878F170F89AFFFAFD (void);
// 0x000003AD System.Void Solana.Unity.Rpc.Models.PerformanceSample::.ctor()
extern void PerformanceSample__ctor_m20FDFBCEC7534834BE9EC4B91A5C53C7C129E1D4 (void);
// 0x000003AE System.UInt64 Solana.Unity.Rpc.Models.SignatureStatusInfo::get_Slot()
extern void SignatureStatusInfo_get_Slot_m5AEF48333CCF369111BB719294A5A1CD55AC0587 (void);
// 0x000003AF System.Void Solana.Unity.Rpc.Models.SignatureStatusInfo::set_Slot(System.UInt64)
extern void SignatureStatusInfo_set_Slot_mE6C81CC85E9CB72F79B48FCDDA4207D2B2840B0B (void);
// 0x000003B0 System.Nullable`1<System.UInt64> Solana.Unity.Rpc.Models.SignatureStatusInfo::get_Confirmations()
extern void SignatureStatusInfo_get_Confirmations_mC049C7DDC9D4DDE608EC4B7CA8E8B2AF9F49AFAB (void);
// 0x000003B1 System.Void Solana.Unity.Rpc.Models.SignatureStatusInfo::set_Confirmations(System.Nullable`1<System.UInt64>)
extern void SignatureStatusInfo_set_Confirmations_mE3335326BA3707A9F4E0C8DF013E0A48B5351D3E (void);
// 0x000003B2 Solana.Unity.Rpc.Models.TransactionError Solana.Unity.Rpc.Models.SignatureStatusInfo::get_Error()
extern void SignatureStatusInfo_get_Error_mEC3F3AA1011FF7357B1299497FCAA594A7697605 (void);
// 0x000003B3 System.Void Solana.Unity.Rpc.Models.SignatureStatusInfo::set_Error(Solana.Unity.Rpc.Models.TransactionError)
extern void SignatureStatusInfo_set_Error_mFE8B80958CE6F0FC0DA6A12E50F069F1F44FE215 (void);
// 0x000003B4 System.String Solana.Unity.Rpc.Models.SignatureStatusInfo::get_ConfirmationStatus()
extern void SignatureStatusInfo_get_ConfirmationStatus_m07A6A18CC391871FA8B2641CE3398432B5CE8C23 (void);
// 0x000003B5 System.Void Solana.Unity.Rpc.Models.SignatureStatusInfo::set_ConfirmationStatus(System.String)
extern void SignatureStatusInfo_set_ConfirmationStatus_m42BDB3DADB410405A92BA4A977D05FBE5D9C0D77 (void);
// 0x000003B6 System.String Solana.Unity.Rpc.Models.SignatureStatusInfo::get_Memo()
extern void SignatureStatusInfo_get_Memo_m7168829B6BB671E4F748608B6B02869D0CF36B8B (void);
// 0x000003B7 System.Void Solana.Unity.Rpc.Models.SignatureStatusInfo::set_Memo(System.String)
extern void SignatureStatusInfo_set_Memo_m8186B329439F3E44908A1B66E3C9C420F70BF82D (void);
// 0x000003B8 System.String Solana.Unity.Rpc.Models.SignatureStatusInfo::get_Signature()
extern void SignatureStatusInfo_get_Signature_m4E08CA1B0DB7FEC87AAB33FC721EBCDB2DED2E34 (void);
// 0x000003B9 System.Void Solana.Unity.Rpc.Models.SignatureStatusInfo::set_Signature(System.String)
extern void SignatureStatusInfo_set_Signature_m205F1C86C51836E2664B9CACFA7A1168DBF30EB0 (void);
// 0x000003BA System.Nullable`1<System.UInt64> Solana.Unity.Rpc.Models.SignatureStatusInfo::get_BlockTime()
extern void SignatureStatusInfo_get_BlockTime_m5856275D41516AAEB2C2B62C999E1C859509CD6D (void);
// 0x000003BB System.Void Solana.Unity.Rpc.Models.SignatureStatusInfo::set_BlockTime(System.Nullable`1<System.UInt64>)
extern void SignatureStatusInfo_set_BlockTime_m65D7E9833A0C669E19174672F1411D034AE08F90 (void);
// 0x000003BC System.Void Solana.Unity.Rpc.Models.SignatureStatusInfo::.ctor()
extern void SignatureStatusInfo__ctor_m897DC54F1CA1834E757A72EBC37277FAEC720CFA (void);
// 0x000003BD System.Int32 Solana.Unity.Rpc.Models.SlotInfo::get_Parent()
extern void SlotInfo_get_Parent_m48877B8C11CE5D5EE9D2E4085452136337AADEFD (void);
// 0x000003BE System.Void Solana.Unity.Rpc.Models.SlotInfo::set_Parent(System.Int32)
extern void SlotInfo_set_Parent_m37A456D1FC40ED40D18B12ADA9FBC287D911ABC6 (void);
// 0x000003BF System.Int32 Solana.Unity.Rpc.Models.SlotInfo::get_Root()
extern void SlotInfo_get_Root_m5DD509E62527D242A2028B3F36E013E92E6F536E (void);
// 0x000003C0 System.Void Solana.Unity.Rpc.Models.SlotInfo::set_Root(System.Int32)
extern void SlotInfo_set_Root_m687411D00A7C8FAA8BAEB8E06FF642895BA3ED4B (void);
// 0x000003C1 System.Int32 Solana.Unity.Rpc.Models.SlotInfo::get_Slot()
extern void SlotInfo_get_Slot_mA075CD7BB29B63EEB98880E30126E9B485C602C0 (void);
// 0x000003C2 System.Void Solana.Unity.Rpc.Models.SlotInfo::set_Slot(System.Int32)
extern void SlotInfo_set_Slot_mA5804429A050045D48C5B6D5864CDF568998D385 (void);
// 0x000003C3 System.Void Solana.Unity.Rpc.Models.SlotInfo::.ctor()
extern void SlotInfo__ctor_mBC336F4A1E7BD6BD160E6E80DF7C1E53AFF8C595 (void);
// 0x000003C4 System.UInt64 Solana.Unity.Rpc.Models.StakeActivationInfo::get_Active()
extern void StakeActivationInfo_get_Active_m2CC313B31F954E77597FDD50B096FE6EEAEE93E4 (void);
// 0x000003C5 System.Void Solana.Unity.Rpc.Models.StakeActivationInfo::set_Active(System.UInt64)
extern void StakeActivationInfo_set_Active_m73F483754D008ECB06215EA4C3C475B0145D0BF8 (void);
// 0x000003C6 System.UInt64 Solana.Unity.Rpc.Models.StakeActivationInfo::get_Inactive()
extern void StakeActivationInfo_get_Inactive_m2C592B195E2926D35C544104B6118F7C388ED5E1 (void);
// 0x000003C7 System.Void Solana.Unity.Rpc.Models.StakeActivationInfo::set_Inactive(System.UInt64)
extern void StakeActivationInfo_set_Inactive_m0ED815E857C215330E6A22D19B0B70A006BFD30E (void);
// 0x000003C8 System.String Solana.Unity.Rpc.Models.StakeActivationInfo::get_State()
extern void StakeActivationInfo_get_State_m3C99F8C9C06BFD832D16A906FFF78E51CE2A3548 (void);
// 0x000003C9 System.Void Solana.Unity.Rpc.Models.StakeActivationInfo::set_State(System.String)
extern void StakeActivationInfo_set_State_m71A6A43B36F80FFA2B1DDA7E9288A6BD5AC5E7B5 (void);
// 0x000003CA System.Void Solana.Unity.Rpc.Models.StakeActivationInfo::.ctor()
extern void StakeActivationInfo__ctor_m2DFF6FF95977B2BC6C6C73224A9338B11B4FFD01 (void);
// 0x000003CB System.UInt64 Solana.Unity.Rpc.Models.Supply::get_Circulating()
extern void Supply_get_Circulating_m86ADD7B737C3BC4CA9B6A950E3D82AA2876AE56C (void);
// 0x000003CC System.Void Solana.Unity.Rpc.Models.Supply::set_Circulating(System.UInt64)
extern void Supply_set_Circulating_mADD795B447C2E3050AFCEB111B601244E0762C4D (void);
// 0x000003CD System.UInt64 Solana.Unity.Rpc.Models.Supply::get_NonCirculating()
extern void Supply_get_NonCirculating_m3A6106220E282C8FE76278BABE2CA603BDCC9442 (void);
// 0x000003CE System.Void Solana.Unity.Rpc.Models.Supply::set_NonCirculating(System.UInt64)
extern void Supply_set_NonCirculating_m78BF5EE9C5972DC8006956E2C5B88A5967B6DB72 (void);
// 0x000003CF System.Collections.Generic.IList`1<System.String> Solana.Unity.Rpc.Models.Supply::get_NonCirculatingAccounts()
extern void Supply_get_NonCirculatingAccounts_mDB3319ADBB422CC5C7970BFDFBE7FA28E16EA9CF (void);
// 0x000003D0 System.Void Solana.Unity.Rpc.Models.Supply::set_NonCirculatingAccounts(System.Collections.Generic.IList`1<System.String>)
extern void Supply_set_NonCirculatingAccounts_m86123783924CD55E909F7E6D0962520D09AADF8D (void);
// 0x000003D1 System.UInt64 Solana.Unity.Rpc.Models.Supply::get_Total()
extern void Supply_get_Total_mC18DD6C172D03BD14241557788B44132B8BD8D33 (void);
// 0x000003D2 System.Void Solana.Unity.Rpc.Models.Supply::set_Total(System.UInt64)
extern void Supply_set_Total_m55A9E1972EF3B767862C66347B6F1F479FEF301E (void);
// 0x000003D3 System.Void Solana.Unity.Rpc.Models.Supply::.ctor()
extern void Supply__ctor_mDDD53BCDEA8E08260B41BDF0A17987E55239076B (void);
// 0x000003D4 Solana.Unity.Rpc.Models.TokenAccountInfo Solana.Unity.Rpc.Models.TokenAccount::get_Account()
extern void TokenAccount_get_Account_m30A2FD6E7BA2E1A3913F2AEDC4EA0E34052C2D76 (void);
// 0x000003D5 System.Void Solana.Unity.Rpc.Models.TokenAccount::set_Account(Solana.Unity.Rpc.Models.TokenAccountInfo)
extern void TokenAccount_set_Account_m2513C4280CC46745A16AB88A3708DBC79EF74778 (void);
// 0x000003D6 System.String Solana.Unity.Rpc.Models.TokenAccount::get_PublicKey()
extern void TokenAccount_get_PublicKey_mA307152D18933F83868F1AB250842C4F1094906A (void);
// 0x000003D7 System.Void Solana.Unity.Rpc.Models.TokenAccount::set_PublicKey(System.String)
extern void TokenAccount_set_PublicKey_m6C1057FD09D798BDD9E85C9CA63EE0F5FDA55399 (void);
// 0x000003D8 System.Void Solana.Unity.Rpc.Models.TokenAccount::.ctor()
extern void TokenAccount__ctor_m16E6798D6CD2286B313C71F1A3A511B024681B72 (void);
// 0x000003D9 Solana.Unity.Wallet.PublicKey Solana.Unity.Rpc.Models.SignaturePubKeyPair::get_PublicKey()
extern void SignaturePubKeyPair_get_PublicKey_mCD199EC815C8D197CA0D63119B27185E3AFFEFBA (void);
// 0x000003DA System.Void Solana.Unity.Rpc.Models.SignaturePubKeyPair::set_PublicKey(Solana.Unity.Wallet.PublicKey)
extern void SignaturePubKeyPair_set_PublicKey_m5995765CE87F2A8B4A645179359EDCD699F22526 (void);
// 0x000003DB System.Byte[] Solana.Unity.Rpc.Models.SignaturePubKeyPair::get_Signature()
extern void SignaturePubKeyPair_get_Signature_m198CFD29A7E8FDDACE2FE79319BCB3ED02D1D7C6 (void);
// 0x000003DC System.Void Solana.Unity.Rpc.Models.SignaturePubKeyPair::set_Signature(System.Byte[])
extern void SignaturePubKeyPair_set_Signature_mF786A5B3C1C853CF04DCE4BAC1C97B00D5F054A0 (void);
// 0x000003DD System.Void Solana.Unity.Rpc.Models.SignaturePubKeyPair::.ctor()
extern void SignaturePubKeyPair__ctor_mC28335DF4EFB5F8D57597D6963BEE99C248DE5F7 (void);
// 0x000003DE System.String Solana.Unity.Rpc.Models.NonceInformation::get_Nonce()
extern void NonceInformation_get_Nonce_mB234162303700F10B48E0B91F61F86E50C97F349 (void);
// 0x000003DF System.Void Solana.Unity.Rpc.Models.NonceInformation::set_Nonce(System.String)
extern void NonceInformation_set_Nonce_m52F300E14D780A909C6426FCAFE58903866319A9 (void);
// 0x000003E0 Solana.Unity.Rpc.Models.TransactionInstruction Solana.Unity.Rpc.Models.NonceInformation::get_Instruction()
extern void NonceInformation_get_Instruction_m20D4DC79C534646F86998706AABAA96F5805CAFD (void);
// 0x000003E1 System.Void Solana.Unity.Rpc.Models.NonceInformation::set_Instruction(Solana.Unity.Rpc.Models.TransactionInstruction)
extern void NonceInformation_set_Instruction_mBC8E650B95021E90510C51A2F8AF0A5E1388C4DA (void);
// 0x000003E2 System.Void Solana.Unity.Rpc.Models.NonceInformation::.ctor()
extern void NonceInformation__ctor_m2F58711EAC6578BE8646852E77D9B83A010723DE (void);
// 0x000003E3 Solana.Unity.Wallet.PublicKey Solana.Unity.Rpc.Models.Transaction::get_FeePayer()
extern void Transaction_get_FeePayer_mAEF1CBD0871968BA883D07528247CAF244766D90 (void);
// 0x000003E4 System.Void Solana.Unity.Rpc.Models.Transaction::set_FeePayer(Solana.Unity.Wallet.PublicKey)
extern void Transaction_set_FeePayer_m9D00E15B2BA42805F8B369BE35A6E8F7D0D103EC (void);
// 0x000003E5 System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TransactionInstruction> Solana.Unity.Rpc.Models.Transaction::get_Instructions()
extern void Transaction_get_Instructions_m9EC087350247FD5F1A804DF86F806AA884802E85 (void);
// 0x000003E6 System.Void Solana.Unity.Rpc.Models.Transaction::set_Instructions(System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TransactionInstruction>)
extern void Transaction_set_Instructions_mB83C5EADFACF2C01DD250AA32E48446FB534FE3D (void);
// 0x000003E7 System.String Solana.Unity.Rpc.Models.Transaction::get_RecentBlockHash()
extern void Transaction_get_RecentBlockHash_mBCF30621782BD4C6AB52F9D6F745E418CA9D7125 (void);
// 0x000003E8 System.Void Solana.Unity.Rpc.Models.Transaction::set_RecentBlockHash(System.String)
extern void Transaction_set_RecentBlockHash_m700B69C4E5C3BA794F3E5EA8E6ADAB230FE9F7EB (void);
// 0x000003E9 Solana.Unity.Rpc.Models.NonceInformation Solana.Unity.Rpc.Models.Transaction::get_NonceInformation()
extern void Transaction_get_NonceInformation_m79E164F87D5376FA8CE0D0B8D26670B10DB4007B (void);
// 0x000003EA System.Void Solana.Unity.Rpc.Models.Transaction::set_NonceInformation(Solana.Unity.Rpc.Models.NonceInformation)
extern void Transaction_set_NonceInformation_m3A1C6A2CDCF5B5798CFB218DB0442B22EA2DDF60 (void);
// 0x000003EB System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.SignaturePubKeyPair> Solana.Unity.Rpc.Models.Transaction::get_Signatures()
extern void Transaction_get_Signatures_m9BD74BB992946CDDA642FEA69FCFDE3372A0CFF2 (void);
// 0x000003EC System.Void Solana.Unity.Rpc.Models.Transaction::set_Signatures(System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.SignaturePubKeyPair>)
extern void Transaction_set_Signatures_mD40405AC24FA330AF9D1F67AB6D96AAA5C198E61 (void);
// 0x000003ED System.Byte[] Solana.Unity.Rpc.Models.Transaction::CompileMessage()
extern void Transaction_CompileMessage_m29CE7689D3FCF14B7386FC8614323946FA37CA53 (void);
// 0x000003EE System.Boolean Solana.Unity.Rpc.Models.Transaction::VerifySignatures(System.Byte[])
extern void Transaction_VerifySignatures_m7C5B21D7841F9B686CE0F9F73BABABD188DDE1C5 (void);
// 0x000003EF System.Boolean Solana.Unity.Rpc.Models.Transaction::VerifySignatures()
extern void Transaction_VerifySignatures_m08F4592EAABD32A10BA1B50C8301BAFD493C72CB (void);
// 0x000003F0 System.Boolean Solana.Unity.Rpc.Models.Transaction::Sign(System.Collections.Generic.IList`1<Solana.Unity.Wallet.Account>)
extern void Transaction_Sign_mB5D3E65DF6166B774CB44B159108535A7BFBAF78 (void);
// 0x000003F1 System.Boolean Solana.Unity.Rpc.Models.Transaction::Sign(Solana.Unity.Wallet.Account)
extern void Transaction_Sign_mCAF8393B2BB05F43EC3331422AA6F280CD13A9CA (void);
// 0x000003F2 System.Void Solana.Unity.Rpc.Models.Transaction::PartialSign(System.Collections.Generic.IList`1<Solana.Unity.Wallet.Account>)
extern void Transaction_PartialSign_m17A50A90C6E23C26EFB3CACF8F7D22C0CA5E0E2C (void);
// 0x000003F3 System.Collections.Generic.IEnumerable`1<Solana.Unity.Wallet.Account> Solana.Unity.Rpc.Models.Transaction::DeduplicateSigners(System.Collections.Generic.IEnumerable`1<Solana.Unity.Wallet.Account>)
extern void Transaction_DeduplicateSigners_m41FAEC7A619D733613694C21ABCE7AB46A372801 (void);
// 0x000003F4 System.Void Solana.Unity.Rpc.Models.Transaction::PartialSign(Solana.Unity.Wallet.Account)
extern void Transaction_PartialSign_m66886FA26A80ABDBCB88E1A0B282EB656466A3E4 (void);
// 0x000003F5 System.Byte[] Solana.Unity.Rpc.Models.Transaction::Build(Solana.Unity.Wallet.Account)
extern void Transaction_Build_m7C1F2A7191576F3778EBA29FB9AD58D1952A0C7A (void);
// 0x000003F6 System.Byte[] Solana.Unity.Rpc.Models.Transaction::Build(System.Collections.Generic.IList`1<Solana.Unity.Wallet.Account>)
extern void Transaction_Build_mFEF158FA0CB53924D125AA80250B32F5B06E202A (void);
// 0x000003F7 System.Void Solana.Unity.Rpc.Models.Transaction::AddSignature(Solana.Unity.Wallet.PublicKey,System.Byte[])
extern void Transaction_AddSignature_m849538D0AD0971307556B2E46DED71E6B69BDA22 (void);
// 0x000003F8 Solana.Unity.Rpc.Models.Transaction Solana.Unity.Rpc.Models.Transaction::Add(System.Collections.Generic.IEnumerable`1<Solana.Unity.Rpc.Models.TransactionInstruction>)
extern void Transaction_Add_m91A371F435D32B1151C7DC32BFC928A65F8FCAEF (void);
// 0x000003F9 Solana.Unity.Rpc.Models.Transaction Solana.Unity.Rpc.Models.Transaction::Add(Solana.Unity.Rpc.Models.TransactionInstruction)
extern void Transaction_Add_mA4B546EC3F3987F8AD2FC4232A287F61AF28DFB4 (void);
// 0x000003FA System.Byte[] Solana.Unity.Rpc.Models.Transaction::Serialize()
extern void Transaction_Serialize_m766F5057CA9AF9CA6EC97DA0B736A8E5A7F2502E (void);
// 0x000003FB Solana.Unity.Rpc.Models.Transaction Solana.Unity.Rpc.Models.Transaction::Populate(Solana.Unity.Rpc.Models.Message,System.Collections.Generic.IList`1<System.Byte[]>)
extern void Transaction_Populate_m8728396C91CBF778987AED0D1119F85EEB78E5D9 (void);
// 0x000003FC Solana.Unity.Rpc.Models.Transaction Solana.Unity.Rpc.Models.Transaction::Populate(System.String,System.Collections.Generic.IList`1<System.Byte[]>)
extern void Transaction_Populate_m4C2CE9C8003FDF32D88E2B681E9CC442D84C7432 (void);
// 0x000003FD Solana.Unity.Rpc.Models.Transaction Solana.Unity.Rpc.Models.Transaction::Deserialize(System.ReadOnlySpan`1<System.Byte>)
extern void Transaction_Deserialize_m1B8EFE9F8104979D4F4112C435967D79AEE1BEAD (void);
// 0x000003FE Solana.Unity.Rpc.Models.Transaction Solana.Unity.Rpc.Models.Transaction::Deserialize(System.String)
extern void Transaction_Deserialize_m68F125694C95AA700BC70FFFE33B20EFB82254AA (void);
// 0x000003FF System.Void Solana.Unity.Rpc.Models.Transaction::.ctor()
extern void Transaction__ctor_mF3664A24553FFF4D79E55AAD11AA5879A5779CB9 (void);
// 0x00000400 System.Void Solana.Unity.Rpc.Models.Transaction/<>c::.cctor()
extern void U3CU3Ec__cctor_m6A7F2B6888C8FDED59F8813A161DE37BF2E486E4 (void);
// 0x00000401 System.Void Solana.Unity.Rpc.Models.Transaction/<>c::.ctor()
extern void U3CU3Ec__ctor_m15CDB9D16A15C83FD3B2A425FFC68AFA20BC7AA5 (void);
// 0x00000402 System.Boolean Solana.Unity.Rpc.Models.Transaction/<>c::<Populate>b__34_0(Solana.Unity.Rpc.Models.AccountMeta)
extern void U3CU3Ec_U3CPopulateU3Eb__34_0_m59FDCB59294D81478EB8FD0A82CA4C988CE7F039 (void);
// 0x00000403 System.Void Solana.Unity.Rpc.Models.Transaction/<>c__DisplayClass21_0::.ctor()
extern void U3CU3Ec__DisplayClass21_0__ctor_m8B197F74686AA68C2C30348587939DC43B2A56C4 (void);
// 0x00000404 System.Boolean Solana.Unity.Rpc.Models.Transaction/<>c__DisplayClass21_0::<VerifySignatures>b__0(Solana.Unity.Rpc.Models.SignaturePubKeyPair)
extern void U3CU3Ec__DisplayClass21_0_U3CVerifySignaturesU3Eb__0_m620844E9F51E5E560F68EA7C5751D2C36E16910C (void);
// 0x00000405 System.Void Solana.Unity.Rpc.Models.Transaction/<>c__DisplayClass34_0::.ctor()
extern void U3CU3Ec__DisplayClass34_0__ctor_m28AD6EE2767971ED34447A7B336F50EB9D35FE67 (void);
// 0x00000406 System.Void Solana.Unity.Rpc.Models.Transaction/<>c__DisplayClass34_1::.ctor()
extern void U3CU3Ec__DisplayClass34_1__ctor_mB5585A2A995360A513F7768A827ECA781A881A0E (void);
// 0x00000407 System.Boolean Solana.Unity.Rpc.Models.Transaction/<>c__DisplayClass34_1::<Populate>b__1(Solana.Unity.Rpc.Models.SignaturePubKeyPair)
extern void U3CU3Ec__DisplayClass34_1_U3CPopulateU3Eb__1_m6B66C177837ACE000CA110C57E7844A8C6453D63 (void);
// 0x00000408 Solana.Unity.Rpc.Models.TransactionErrorType Solana.Unity.Rpc.Models.TransactionError::get_Type()
extern void TransactionError_get_Type_m3CAC08B70412028EC57D4003E0F0F64A62DC4817 (void);
// 0x00000409 System.Void Solana.Unity.Rpc.Models.TransactionError::set_Type(Solana.Unity.Rpc.Models.TransactionErrorType)
extern void TransactionError_set_Type_m259308D6964D4E39A4200CCF557DC1A71773D68B (void);
// 0x0000040A Solana.Unity.Rpc.Models.InstructionError Solana.Unity.Rpc.Models.TransactionError::get_InstructionError()
extern void TransactionError_get_InstructionError_mB292F03F3B3519594494B354F1D637C0F9DD84E4 (void);
// 0x0000040B System.Void Solana.Unity.Rpc.Models.TransactionError::set_InstructionError(Solana.Unity.Rpc.Models.InstructionError)
extern void TransactionError_set_InstructionError_mA6E4A3CD9FEBCEF1D3AE58CE6A39BFE2926E9FF2 (void);
// 0x0000040C System.Void Solana.Unity.Rpc.Models.TransactionError::.ctor()
extern void TransactionError__ctor_m96D9B7C139A1F700DF613F329E3F69F4956BA672 (void);
// 0x0000040D System.Byte[] Solana.Unity.Rpc.Models.TransactionInstruction::get_ProgramId()
extern void TransactionInstruction_get_ProgramId_mE857581B4C57D4EAF7142CE37FDA33F677DEF271 (void);
// 0x0000040E System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Rpc.Models.TransactionInstruction::set_ProgramId(System.Byte[])
extern void TransactionInstruction_set_ProgramId_mB99504E26550E308C1FFDA8EFF9DBDEE582A9C52 (void);
// 0x0000040F System.Collections.Generic.IList`1<Solana.Unity.Rpc.Models.AccountMeta> Solana.Unity.Rpc.Models.TransactionInstruction::get_Keys()
extern void TransactionInstruction_get_Keys_m4919C0B7F1942DE9C0349F39A8F4BE957F32EEBA (void);
// 0x00000410 System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Rpc.Models.TransactionInstruction::set_Keys(System.Collections.Generic.IList`1<Solana.Unity.Rpc.Models.AccountMeta>)
extern void TransactionInstruction_set_Keys_mEE992F580C4FB052CA6D59F4DDE06C1C00587226 (void);
// 0x00000411 System.Byte[] Solana.Unity.Rpc.Models.TransactionInstruction::get_Data()
extern void TransactionInstruction_get_Data_mD0D8887DD66481B7EE27A70D3CDD559F4E2FF4E2 (void);
// 0x00000412 System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Rpc.Models.TransactionInstruction::set_Data(System.Byte[])
extern void TransactionInstruction_set_Data_m04A7F7910F30C3CC2DA1A9AA4470C609BE5A7797 (void);
// 0x00000413 System.Void Solana.Unity.Rpc.Models.TransactionInstruction::.ctor()
extern void TransactionInstruction__ctor_mD4A602752140DDCA7AB55A6C1B5F6690769B473C (void);
// 0x00000414 System.Byte Solana.Unity.Rpc.Models.CompiledInstruction::get_ProgramIdIndex()
extern void CompiledInstruction_get_ProgramIdIndex_mF57CF17CEA4E3CA4CDD7EE144A181BFC39605309 (void);
// 0x00000415 System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Rpc.Models.CompiledInstruction::set_ProgramIdIndex(System.Byte)
extern void CompiledInstruction_set_ProgramIdIndex_m0D227034D58F79FB9F9A8EFA72667E1B0323C1B8 (void);
// 0x00000416 System.Byte[] Solana.Unity.Rpc.Models.CompiledInstruction::get_KeyIndicesCount()
extern void CompiledInstruction_get_KeyIndicesCount_m87A95CE718EF03E195A06141092A89F02D16D109 (void);
// 0x00000417 System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Rpc.Models.CompiledInstruction::set_KeyIndicesCount(System.Byte[])
extern void CompiledInstruction_set_KeyIndicesCount_mF79C37A3A1A2C68DB012F943CC90F720C231D31F (void);
// 0x00000418 System.Byte[] Solana.Unity.Rpc.Models.CompiledInstruction::get_KeyIndices()
extern void CompiledInstruction_get_KeyIndices_m53626C9D288F5ACDC82C4F998CBF6D5BAF3BFE69 (void);
// 0x00000419 System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Rpc.Models.CompiledInstruction::set_KeyIndices(System.Byte[])
extern void CompiledInstruction_set_KeyIndices_mE72BE4E389F6F6CF2C4DDDD8F85A2CA3A2B5FC4D (void);
// 0x0000041A System.Byte[] Solana.Unity.Rpc.Models.CompiledInstruction::get_DataLength()
extern void CompiledInstruction_get_DataLength_mEABD131C5F2D22905960E4E761C503B7B55360EB (void);
// 0x0000041B System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Rpc.Models.CompiledInstruction::set_DataLength(System.Byte[])
extern void CompiledInstruction_set_DataLength_m49A4B22F186332568F71B5EDBCAC3D629AA9A88D (void);
// 0x0000041C System.Byte[] Solana.Unity.Rpc.Models.CompiledInstruction::get_Data()
extern void CompiledInstruction_get_Data_mDE2E87DBCCDD64C81874645C623B296FB9D055CC (void);
// 0x0000041D System.Void modreq(System.Runtime.CompilerServices.IsExternalInit) Solana.Unity.Rpc.Models.CompiledInstruction::set_Data(System.Byte[])
extern void CompiledInstruction_set_Data_mA59CC7DA1AE9F3E0F8A3DBBB2C33F62DDA52A3B6 (void);
// 0x0000041E System.Int32 Solana.Unity.Rpc.Models.CompiledInstruction::Length()
extern void CompiledInstruction_Length_mBF0D79919A5AA19A8A821CA5032814544ACF4732 (void);
// 0x0000041F System.ValueTuple`2<Solana.Unity.Rpc.Models.CompiledInstruction,System.Int32> Solana.Unity.Rpc.Models.CompiledInstruction::Deserialize(System.ReadOnlySpan`1<System.Byte>)
extern void CompiledInstruction_Deserialize_m5900AD48F4EB33FD1FB725018CEED3901CC61903 (void);
// 0x00000420 System.Void Solana.Unity.Rpc.Models.CompiledInstruction::.ctor()
extern void CompiledInstruction__ctor_m012B7B7CCD31EB05282EDA551687EE9524243492 (void);
// 0x00000421 System.String Solana.Unity.Rpc.Models.NodeVersion::get_SolanaCore()
extern void NodeVersion_get_SolanaCore_mACCBD7BF4678D81F06BAD577E0F769311F50AF3B (void);
// 0x00000422 System.Void Solana.Unity.Rpc.Models.NodeVersion::set_SolanaCore(System.String)
extern void NodeVersion_set_SolanaCore_mD1FF08D0D28FF64735F59653CCF0D8250AE226C0 (void);
// 0x00000423 System.Nullable`1<System.UInt64> Solana.Unity.Rpc.Models.NodeVersion::get_FeatureSet()
extern void NodeVersion_get_FeatureSet_m8665B692225EC4A2ECD6ADF7B8860EAC7E211529 (void);
// 0x00000424 System.Void Solana.Unity.Rpc.Models.NodeVersion::set_FeatureSet(System.Nullable`1<System.UInt64>)
extern void NodeVersion_set_FeatureSet_mACA399F7827808BAF7B1CEB702A8EC3959A5D4D9 (void);
// 0x00000425 System.Void Solana.Unity.Rpc.Models.NodeVersion::.ctor()
extern void NodeVersion__ctor_mC7EF3A1EF4D37C73978C588F599BDFF637CCC996 (void);
// 0x00000426 System.UInt64 Solana.Unity.Rpc.Models.VoteAccount::get_RootSlot()
extern void VoteAccount_get_RootSlot_mF9C04607F770C71DCC0F7D6C100C93A793E69EB5 (void);
// 0x00000427 System.Void Solana.Unity.Rpc.Models.VoteAccount::set_RootSlot(System.UInt64)
extern void VoteAccount_set_RootSlot_mF0A4206656897493AFF91A87700CC1B4C4CB0D85 (void);
// 0x00000428 System.String Solana.Unity.Rpc.Models.VoteAccount::get_VotePublicKey()
extern void VoteAccount_get_VotePublicKey_m9B6F49B6B7D0773067C7D2013C482D0C3E8DE9EE (void);
// 0x00000429 System.Void Solana.Unity.Rpc.Models.VoteAccount::set_VotePublicKey(System.String)
extern void VoteAccount_set_VotePublicKey_mC1AEB647AE9BA8A059CD312A3ADE3CAD6FFF4352 (void);
// 0x0000042A System.String Solana.Unity.Rpc.Models.VoteAccount::get_NodePublicKey()
extern void VoteAccount_get_NodePublicKey_m6B255B98FA52A55B5193E7EC85AF774C05601961 (void);
// 0x0000042B System.Void Solana.Unity.Rpc.Models.VoteAccount::set_NodePublicKey(System.String)
extern void VoteAccount_set_NodePublicKey_mF7600E793B8566DC853B9281C2B12198199ADE0D (void);
// 0x0000042C System.UInt64 Solana.Unity.Rpc.Models.VoteAccount::get_ActivatedStake()
extern void VoteAccount_get_ActivatedStake_m1962D71D72D621B21EA26D99B8E59C1F2D2E671F (void);
// 0x0000042D System.Void Solana.Unity.Rpc.Models.VoteAccount::set_ActivatedStake(System.UInt64)
extern void VoteAccount_set_ActivatedStake_m22C7AEEF8B558A76C23B2E9265A404F4F71FE9F2 (void);
// 0x0000042E System.Boolean Solana.Unity.Rpc.Models.VoteAccount::get_EpochVoteAccount()
extern void VoteAccount_get_EpochVoteAccount_m36241280BBA090F41A714081D3093A2DDFFBA29A (void);
// 0x0000042F System.Void Solana.Unity.Rpc.Models.VoteAccount::set_EpochVoteAccount(System.Boolean)
extern void VoteAccount_set_EpochVoteAccount_m450AA4297485F6A1AD643987987182DD7879B9F5 (void);
// 0x00000430 System.Decimal Solana.Unity.Rpc.Models.VoteAccount::get_Commission()
extern void VoteAccount_get_Commission_m934F731E56E6F96E95E280D1FABD234C58973CBF (void);
// 0x00000431 System.Void Solana.Unity.Rpc.Models.VoteAccount::set_Commission(System.Decimal)
extern void VoteAccount_set_Commission_m1E3299A6BA306E73E4A16DF66384785F91B1E7C3 (void);
// 0x00000432 System.UInt64 Solana.Unity.Rpc.Models.VoteAccount::get_LastVote()
extern void VoteAccount_get_LastVote_mC7D8A4CCD7B0E8667867A3433085E0C0F3782002 (void);
// 0x00000433 System.Void Solana.Unity.Rpc.Models.VoteAccount::set_LastVote(System.UInt64)
extern void VoteAccount_set_LastVote_m9DA1ED9DA6157CA47753FA86F1E484A8BCFE12E0 (void);
// 0x00000434 System.UInt64[][] Solana.Unity.Rpc.Models.VoteAccount::get_EpochCredits()
extern void VoteAccount_get_EpochCredits_mCCA573E5423794BEA70A4533DC05944B35452B83 (void);
// 0x00000435 System.Void Solana.Unity.Rpc.Models.VoteAccount::set_EpochCredits(System.UInt64[][])
extern void VoteAccount_set_EpochCredits_mAAFC36707DC3C7708CB9A8E7E7F1405AB1BF71FC (void);
// 0x00000436 System.Void Solana.Unity.Rpc.Models.VoteAccount::.ctor()
extern void VoteAccount__ctor_m42C18AE8A7DFA3CBA1A13BA1DD60359EDE654B5D (void);
// 0x00000437 Solana.Unity.Rpc.Models.VoteAccount[] Solana.Unity.Rpc.Models.VoteAccounts::get_Current()
extern void VoteAccounts_get_Current_m19D7F6B089370836D5EF76C6CDDD9EB0EFFA7AE6 (void);
// 0x00000438 System.Void Solana.Unity.Rpc.Models.VoteAccounts::set_Current(Solana.Unity.Rpc.Models.VoteAccount[])
extern void VoteAccounts_set_Current_m46CA027568AF48529CE152EBDE40C6DC361B2674 (void);
// 0x00000439 Solana.Unity.Rpc.Models.VoteAccount[] Solana.Unity.Rpc.Models.VoteAccounts::get_Delinquent()
extern void VoteAccounts_get_Delinquent_m173FCA0634473BA18DBE17BA0CBA24B9CEE3AA1E (void);
// 0x0000043A System.Void Solana.Unity.Rpc.Models.VoteAccounts::set_Delinquent(Solana.Unity.Rpc.Models.VoteAccount[])
extern void VoteAccounts_set_Delinquent_mCE8D817F8B0557B1C542CCB1E11CC341DE5A3927 (void);
// 0x0000043B System.Void Solana.Unity.Rpc.Models.VoteAccounts::.ctor()
extern void VoteAccounts__ctor_mE02F5B0CD72240C28AC1B6627AC74093883E4CF6 (void);
// 0x0000043C System.String Solana.Unity.Rpc.Messages.JsonRpcBase::get_Jsonrpc()
extern void JsonRpcBase_get_Jsonrpc_m67DB878235B81CBDB16CA2654FA3F3553A2CFF8A (void);
// 0x0000043D System.Void Solana.Unity.Rpc.Messages.JsonRpcBase::set_Jsonrpc(System.String)
extern void JsonRpcBase_set_Jsonrpc_m3038A746831E3BBD03956A58003186EE7DF357F1 (void);
// 0x0000043E System.Int32 Solana.Unity.Rpc.Messages.JsonRpcBase::get_Id()
extern void JsonRpcBase_get_Id_m66E89AB05A6DF258D4DBC541A17F8307018B917B (void);
// 0x0000043F System.Void Solana.Unity.Rpc.Messages.JsonRpcBase::set_Id(System.Int32)
extern void JsonRpcBase_set_Id_m5DAD9AA97D5549F57AE6105C8F1E62565957B69A (void);
// 0x00000440 System.Void Solana.Unity.Rpc.Messages.JsonRpcBase::.ctor()
extern void JsonRpcBase__ctor_m91E9D4C1F026439EE46A1B03DABD332C1C816A5D (void);
// 0x00000441 System.Void Solana.Unity.Rpc.Messages.JsonRpcBatchRequest::.ctor()
extern void JsonRpcBatchRequest__ctor_m2142957D26CA6F08007EA8FF554DF06F51DA8D22 (void);
// 0x00000442 System.Void Solana.Unity.Rpc.Messages.JsonRpcBatchResponse::.ctor()
extern void JsonRpcBatchResponse__ctor_m2850796527C0A9E02253F4FB3D91648AA52B21C7 (void);
// 0x00000443 System.Type Solana.Unity.Rpc.Messages.JsonRpcBatchResponseItem::get_ResultType()
extern void JsonRpcBatchResponseItem_get_ResultType_mF1FF79A59FB52E7DC3E0B68593BE9BFAF2460B87 (void);
// 0x00000444 System.Void Solana.Unity.Rpc.Messages.JsonRpcBatchResponseItem::set_ResultType(System.Type)
extern void JsonRpcBatchResponseItem_set_ResultType_m4965160F375951D8171C6DA568175DA1EF31A56C (void);
// 0x00000445 System.Object Solana.Unity.Rpc.Messages.JsonRpcBatchResponseItem::get_Result()
extern void JsonRpcBatchResponseItem_get_Result_m460BB099262C6137C6D9C2BF732666F6914A4619 (void);
// 0x00000446 System.Void Solana.Unity.Rpc.Messages.JsonRpcBatchResponseItem::set_Result(System.Object)
extern void JsonRpcBatchResponseItem_set_Result_m2D3630EAEAC536F263D5113352B5ADC41B1EEE33 (void);
// 0x00000447 T Solana.Unity.Rpc.Messages.JsonRpcBatchResponseItem::ResultAs()
// 0x00000448 System.Void Solana.Unity.Rpc.Messages.JsonRpcBatchResponseItem::.ctor()
extern void JsonRpcBatchResponseItem__ctor_mC31B42ECDD4EDA3E4E6264FFD905B85858A75732 (void);
// 0x00000449 System.String Solana.Unity.Rpc.Messages.JsonRpcRequest::get_Method()
extern void JsonRpcRequest_get_Method_m741EDF82389A2D31548B46F58BC5B70E07A94DDD (void);
// 0x0000044A System.Collections.Generic.IList`1<System.Object> Solana.Unity.Rpc.Messages.JsonRpcRequest::get_Params()
extern void JsonRpcRequest_get_Params_m4F7EC20CFC34F62AD2C2A372AFF7D14F8B0A6356 (void);
// 0x0000044B System.Boolean Solana.Unity.Rpc.Messages.JsonRpcRequest::ShouldSerializeParams()
extern void JsonRpcRequest_ShouldSerializeParams_m046F2E169D273B657CC70F4B6ADEC46E943E9A14 (void);
// 0x0000044C System.Void Solana.Unity.Rpc.Messages.JsonRpcRequest::.ctor(System.Int32,System.String,System.Collections.Generic.IList`1<System.Object>)
extern void JsonRpcRequest__ctor_m5E045BA36C7911AD2122F4870E81A99537966C29 (void);
// 0x0000044D T Solana.Unity.Rpc.Messages.JsonRpcResponse`1::get_Result()
// 0x0000044E System.Void Solana.Unity.Rpc.Messages.JsonRpcResponse`1::set_Result(T)
// 0x0000044F System.Void Solana.Unity.Rpc.Messages.JsonRpcResponse`1::.ctor()
// 0x00000450 Solana.Unity.Rpc.Messages.ErrorContent Solana.Unity.Rpc.Messages.JsonRpcErrorResponse::get_Error()
extern void JsonRpcErrorResponse_get_Error_m7EEBEAE544BF1C4947BDB9001B43549B1A9B879A (void);
// 0x00000451 System.Void Solana.Unity.Rpc.Messages.JsonRpcErrorResponse::set_Error(Solana.Unity.Rpc.Messages.ErrorContent)
extern void JsonRpcErrorResponse_set_Error_m908EBE8E52B5BCEFBEDF7957CB4FDE59844505E5 (void);
// 0x00000452 System.String Solana.Unity.Rpc.Messages.JsonRpcErrorResponse::get_ErrorMessage()
extern void JsonRpcErrorResponse_get_ErrorMessage_m61EBF466562318C7DBABC5F24471CFFE28322C8D (void);
// 0x00000453 System.Void Solana.Unity.Rpc.Messages.JsonRpcErrorResponse::set_ErrorMessage(System.String)
extern void JsonRpcErrorResponse_set_ErrorMessage_mDF9F0A849C6DD9DC179203A746AC3C3AAAA0EA96 (void);
// 0x00000454 System.Void Solana.Unity.Rpc.Messages.JsonRpcErrorResponse::.ctor()
extern void JsonRpcErrorResponse__ctor_m0D1F545D00B873A45047DDF72AF209B4725F1526 (void);
// 0x00000455 System.Int32 Solana.Unity.Rpc.Messages.ErrorContent::get_Code()
extern void ErrorContent_get_Code_m3A4050525ED45411E74404DE71085408E8E7D7F3 (void);
// 0x00000456 System.Void Solana.Unity.Rpc.Messages.ErrorContent::set_Code(System.Int32)
extern void ErrorContent_set_Code_m96E87434400EC21F4CE8B74E635BA28ABC37BEDE (void);
// 0x00000457 System.String Solana.Unity.Rpc.Messages.ErrorContent::get_Message()
extern void ErrorContent_get_Message_m9A1A49757059AF5F85F8842C31CE0384FAF32F31 (void);
// 0x00000458 System.Void Solana.Unity.Rpc.Messages.ErrorContent::set_Message(System.String)
extern void ErrorContent_set_Message_m3E80833006ED28E71876DEE2CF74A6ECDB258E17 (void);
// 0x00000459 Solana.Unity.Rpc.Models.ErrorData Solana.Unity.Rpc.Messages.ErrorContent::get_Data()
extern void ErrorContent_get_Data_mBCEBC48D8B62F7805281D273922E14D433A3AABA (void);
// 0x0000045A System.Void Solana.Unity.Rpc.Messages.ErrorContent::set_Data(Solana.Unity.Rpc.Models.ErrorData)
extern void ErrorContent_set_Data_m29326E6002B54047B8DEC8F63898108E9A5DA0C9 (void);
// 0x0000045B System.Void Solana.Unity.Rpc.Messages.ErrorContent::.ctor()
extern void ErrorContent__ctor_m109ABD8E84279F4890208B5B6B3CE5A17A053F3A (void);
// 0x0000045C System.UInt64 Solana.Unity.Rpc.Messages.ContextObj::get_Slot()
extern void ContextObj_get_Slot_mCC19252D7AF81438C5B85B39910963D0C31327DD (void);
// 0x0000045D System.Void Solana.Unity.Rpc.Messages.ContextObj::set_Slot(System.UInt64)
extern void ContextObj_set_Slot_m442869495714E12A8248E730BB7539E511E042EE (void);
// 0x0000045E System.Void Solana.Unity.Rpc.Messages.ContextObj::.ctor()
extern void ContextObj__ctor_m265894027033965B1F76BD088D8895ADEA6E82F2 (void);
// 0x0000045F Solana.Unity.Rpc.Messages.ContextObj Solana.Unity.Rpc.Messages.ResponseValue`1::get_Context()
// 0x00000460 System.Void Solana.Unity.Rpc.Messages.ResponseValue`1::set_Context(Solana.Unity.Rpc.Messages.ContextObj)
// 0x00000461 T Solana.Unity.Rpc.Messages.ResponseValue`1::get_Value()
// 0x00000462 System.Void Solana.Unity.Rpc.Messages.ResponseValue`1::set_Value(T)
// 0x00000463 System.Void Solana.Unity.Rpc.Messages.ResponseValue`1::.ctor()
// 0x00000464 T Solana.Unity.Rpc.Messages.JsonRpcStreamResponse`1::get_Result()
// 0x00000465 System.Void Solana.Unity.Rpc.Messages.JsonRpcStreamResponse`1::set_Result(T)
// 0x00000466 System.Int32 Solana.Unity.Rpc.Messages.JsonRpcStreamResponse`1::get_Subscription()
// 0x00000467 System.Void Solana.Unity.Rpc.Messages.JsonRpcStreamResponse`1::set_Subscription(System.Int32)
// 0x00000468 System.Void Solana.Unity.Rpc.Messages.JsonRpcStreamResponse`1::.ctor()
// 0x00000469 System.Int32 Solana.Unity.Rpc.Core.IdGenerator::GetNextId()
extern void IdGenerator_GetNextId_mC31E533E8EBE82167C9D0D4071C5CBFF5A65CAB3 (void);
// 0x0000046A System.Void Solana.Unity.Rpc.Core.IdGenerator::.ctor()
extern void IdGenerator__ctor_mD64A5916CCD48FFF33654BB0B92E3FD0D336527B (void);
// 0x0000046B System.Net.WebSockets.WebSocketState Solana.Unity.Rpc.Core.Sockets.IWebSocket::get_State()
// 0x0000046C System.String Solana.Unity.Rpc.Core.Sockets.IWebSocket::get_CloseStatusDescription()
// 0x0000046D System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus> Solana.Unity.Rpc.Core.Sockets.IWebSocket::get_CloseStatus()
// 0x0000046E System.Threading.Tasks.Task Solana.Unity.Rpc.Core.Sockets.IWebSocket::ConnectAsync(System.Uri,System.Threading.CancellationToken)
// 0x0000046F System.Threading.Tasks.Task Solana.Unity.Rpc.Core.Sockets.IWebSocket::CloseAsync(System.Threading.CancellationToken)
// 0x00000470 System.Threading.Tasks.Task Solana.Unity.Rpc.Core.Sockets.IWebSocket::SendAsync(System.ReadOnlyMemory`1<System.Byte>,System.Net.WebSockets.WebSocketMessageType,System.Boolean,System.Threading.CancellationToken)
// 0x00000471 System.Threading.Tasks.Task Solana.Unity.Rpc.Core.Sockets.IWebSocket::CloseAsync(System.Net.WebSockets.WebSocketCloseStatus,System.String,System.Threading.CancellationToken)
// 0x00000472 System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult> Solana.Unity.Rpc.Core.Sockets.IWebSocket::ReceiveAsync(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
// 0x00000473 System.Uri Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient::get_NodeAddress()
extern void StreamingRpcClient_get_NodeAddress_m88EE00362C124C652C9EA2A1067B209D2730E719 (void);
// 0x00000474 System.Net.WebSockets.WebSocketState Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient::get_State()
extern void StreamingRpcClient_get_State_mE6C7A0C0C4BD05C2418D43ADD307360F2DF677A8 (void);
// 0x00000475 System.Void Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient::add_ConnectionStateChangedEvent(System.EventHandler`1<System.Net.WebSockets.WebSocketState>)
extern void StreamingRpcClient_add_ConnectionStateChangedEvent_mABEF4D1BF8D0A59D11FC0A421FE26B1CE2FD359E (void);
// 0x00000476 System.Void Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient::remove_ConnectionStateChangedEvent(System.EventHandler`1<System.Net.WebSockets.WebSocketState>)
extern void StreamingRpcClient_remove_ConnectionStateChangedEvent_mD20B80F942EEC6C9DFD5B624DEC861ED7351BCAB (void);
// 0x00000477 Solana.Unity.Rpc.Types.IConnectionStatistics Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient::get_Statistics()
extern void StreamingRpcClient_get_Statistics_m521958F9C7623ED4BF18F617FDA2F81327E3327F (void);
// 0x00000478 System.Void Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient::.ctor(System.String,System.Object,Solana.Unity.Rpc.Core.Sockets.IWebSocket,System.Net.WebSockets.ClientWebSocket)
extern void StreamingRpcClient__ctor_m92334700F27C9E8E592254F836FEB31B333787CA (void);
// 0x00000479 System.Threading.Tasks.Task Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient::ConnectAsync()
extern void StreamingRpcClient_ConnectAsync_mC23052C20AFB9B9E875935A2B822268326511133 (void);
// 0x0000047A System.Threading.Tasks.Task Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient::DisconnectAsync()
extern void StreamingRpcClient_DisconnectAsync_m505E2383EC0F49FC31AAEE1B445A3CA7B1DF3DAA (void);
// 0x0000047B System.Threading.Tasks.Task Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient::StartListening()
extern void StreamingRpcClient_StartListening_mB796C11B1956E29485835483B708B1236B5EC252 (void);
// 0x0000047C System.Threading.Tasks.Task Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient::ReadNextMessage(System.Threading.CancellationToken)
extern void StreamingRpcClient_ReadNextMessage_mBDB61D34EF24AED5844932EB841968571E472F01 (void);
// 0x0000047D System.Void Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient::HandleNewMessage(System.Memory`1<System.Byte>)
// 0x0000047E System.Void Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient::CleanupSubscriptions()
// 0x0000047F System.Void Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient::Dispose(System.Boolean)
extern void StreamingRpcClient_Dispose_m676DF92B099C2A415E915863CD3371BECA0AF9F2 (void);
// 0x00000480 System.Void Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient::Dispose()
extern void StreamingRpcClient_Dispose_m6F9C8992EF7F636E2D67B02694F21B7A90394D79 (void);
// 0x00000481 System.Void Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient/<ConnectAsync>d__16::MoveNext()
extern void U3CConnectAsyncU3Ed__16_MoveNext_m231FF9BF3459368286A5D8E5AEBC061438DC2774 (void);
// 0x00000482 System.Void Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient/<ConnectAsync>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CConnectAsyncU3Ed__16_SetStateMachine_m3BEA29BA9635C5D68AE6FE4FF2F70486C52EB272 (void);
// 0x00000483 System.Void Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient/<DisconnectAsync>d__17::MoveNext()
extern void U3CDisconnectAsyncU3Ed__17_MoveNext_mBA9771CC74FC8E8FB18D87F02EB3916CAA3E980B (void);
// 0x00000484 System.Void Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient/<DisconnectAsync>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CDisconnectAsyncU3Ed__17_SetStateMachine_m9AFA2B64EC88D23BF280B982EFD8CABE7580BFCD (void);
// 0x00000485 System.Void Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient/<ReadNextMessage>d__19::MoveNext()
extern void U3CReadNextMessageU3Ed__19_MoveNext_m0B9B6FE31B5B8D964C663C576885DC7AA6779905 (void);
// 0x00000486 System.Void Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient/<ReadNextMessage>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReadNextMessageU3Ed__19_SetStateMachine_m2ED23CA5FF66774D0A0A41873E49F2FDD2941953 (void);
// 0x00000487 System.Void Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient/<StartListening>d__18::MoveNext()
extern void U3CStartListeningU3Ed__18_MoveNext_m725C7EF6651CDF3E4AB5D910FAC6002F67F59BE3 (void);
// 0x00000488 System.Void Solana.Unity.Rpc.Core.Sockets.StreamingRpcClient/<StartListening>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CStartListeningU3Ed__18_SetStateMachine_mE665A6E42184DE93940063479A95A177F7C98636 (void);
// 0x00000489 Solana.Unity.Rpc.Core.Sockets.SubscriptionStatus Solana.Unity.Rpc.Core.Sockets.SubscriptionEvent::get_Status()
extern void SubscriptionEvent_get_Status_m0F41FD16DE26CF7C0FE4894D2926B4A0D025D048 (void);
// 0x0000048A System.String Solana.Unity.Rpc.Core.Sockets.SubscriptionEvent::get_Error()
extern void SubscriptionEvent_get_Error_mF04C00456952B8A2A3C07EB739E2BD7A5CC02CF1 (void);
// 0x0000048B System.String Solana.Unity.Rpc.Core.Sockets.SubscriptionEvent::get_Code()
extern void SubscriptionEvent_get_Code_m4678E594566FCDB0CCFFECBCD986C5F82D8BE84C (void);
// 0x0000048C System.Void Solana.Unity.Rpc.Core.Sockets.SubscriptionEvent::.ctor(Solana.Unity.Rpc.Core.Sockets.SubscriptionStatus,System.String,System.String)
extern void SubscriptionEvent__ctor_mA2E72832294CFE20D6C7B22FDB2830AAF6C6098E (void);
// 0x0000048D System.Int32 Solana.Unity.Rpc.Core.Sockets.SubscriptionState::get_SubscriptionId()
extern void SubscriptionState_get_SubscriptionId_m9B41A1697743D111396F800CFF223479E07634D1 (void);
// 0x0000048E System.Void Solana.Unity.Rpc.Core.Sockets.SubscriptionState::set_SubscriptionId(System.Int32)
extern void SubscriptionState_set_SubscriptionId_m3A1D430266356C9D1D240322521CA6121956863C (void);
// 0x0000048F Solana.Unity.Rpc.Core.Sockets.SubscriptionChannel Solana.Unity.Rpc.Core.Sockets.SubscriptionState::get_Channel()
extern void SubscriptionState_get_Channel_m2F7A40B8DC43C94667882B34B4BC82A63AF1BDD9 (void);
// 0x00000490 System.Void Solana.Unity.Rpc.Core.Sockets.SubscriptionState::set_Channel(Solana.Unity.Rpc.Core.Sockets.SubscriptionChannel)
extern void SubscriptionState_set_Channel_m6581410521EECB9608A392BFD12F073F046820E2 (void);
// 0x00000491 Solana.Unity.Rpc.Core.Sockets.SubscriptionStatus Solana.Unity.Rpc.Core.Sockets.SubscriptionState::get_State()
extern void SubscriptionState_get_State_mA6EC539E49C63E3B8FB8EFA8C9AACE4C87E7A865 (void);
// 0x00000492 System.Void Solana.Unity.Rpc.Core.Sockets.SubscriptionState::set_State(Solana.Unity.Rpc.Core.Sockets.SubscriptionStatus)
extern void SubscriptionState_set_State_m8E05111E394B522386860D74EC0E53609514B177 (void);
// 0x00000493 System.String Solana.Unity.Rpc.Core.Sockets.SubscriptionState::get_LastError()
extern void SubscriptionState_get_LastError_m4F78F8554A0A39C1F9875BA435D54B93B12264DE (void);
// 0x00000494 System.Void Solana.Unity.Rpc.Core.Sockets.SubscriptionState::set_LastError(System.String)
extern void SubscriptionState_set_LastError_m5D63322A3E9B9B36D3BEBD7AA43EB21844B3938C (void);
// 0x00000495 System.String Solana.Unity.Rpc.Core.Sockets.SubscriptionState::get_LastCode()
extern void SubscriptionState_get_LastCode_m725EB146EE029E120FCD4601A3DAF8AA143367A8 (void);
// 0x00000496 System.Void Solana.Unity.Rpc.Core.Sockets.SubscriptionState::set_LastCode(System.String)
extern void SubscriptionState_set_LastCode_mA8C2D7EAC8D8A49E6029E2AFB7FE0A4AC17B8032 (void);
// 0x00000497 System.Collections.Generic.List`1<System.Object> Solana.Unity.Rpc.Core.Sockets.SubscriptionState::get_AdditionalParameters()
extern void SubscriptionState_get_AdditionalParameters_m3D65AED56E812BD996B1565A54009CBE09C29E57 (void);
// 0x00000498 System.Void Solana.Unity.Rpc.Core.Sockets.SubscriptionState::set_AdditionalParameters(System.Collections.Generic.List`1<System.Object>)
extern void SubscriptionState_set_AdditionalParameters_m06472BAE86E9042243E40F4E64B6293342668A84 (void);
// 0x00000499 System.Void Solana.Unity.Rpc.Core.Sockets.SubscriptionState::add_SubscriptionChanged(System.EventHandler`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionEvent>)
extern void SubscriptionState_add_SubscriptionChanged_mD373CB088D252FE73FD22FDCBE234882515CCE91 (void);
// 0x0000049A System.Void Solana.Unity.Rpc.Core.Sockets.SubscriptionState::remove_SubscriptionChanged(System.EventHandler`1<Solana.Unity.Rpc.Core.Sockets.SubscriptionEvent>)
extern void SubscriptionState_remove_SubscriptionChanged_mED7AD41F77DC8DB5A0664AD83C7A177C3C5DA177 (void);
// 0x0000049B System.Void Solana.Unity.Rpc.Core.Sockets.SubscriptionState::.ctor(Solana.Unity.Rpc.IStreamingRpcClient,Solana.Unity.Rpc.Core.Sockets.SubscriptionChannel,System.Collections.Generic.IList`1<System.Object>)
extern void SubscriptionState__ctor_mA149F391BE686295EDF3022B93E91952186726E4 (void);
// 0x0000049C System.Void Solana.Unity.Rpc.Core.Sockets.SubscriptionState::.ctor()
extern void SubscriptionState__ctor_mF7DC651D9B22156866FEECA107E832C132B3D65A (void);
// 0x0000049D System.Void Solana.Unity.Rpc.Core.Sockets.SubscriptionState::ChangeState(Solana.Unity.Rpc.Core.Sockets.SubscriptionStatus,System.String,System.String)
extern void SubscriptionState_ChangeState_m383C617EDA674EFDC2CD7F2C2194CC4A54033E2F (void);
// 0x0000049E System.Void Solana.Unity.Rpc.Core.Sockets.SubscriptionState::HandleData(System.Object)
// 0x0000049F System.Void Solana.Unity.Rpc.Core.Sockets.SubscriptionState::Unsubscribe()
extern void SubscriptionState_Unsubscribe_m2C4765D390BE9DB00B743F040B00DA4C369D8415 (void);
// 0x000004A0 System.Threading.Tasks.Task Solana.Unity.Rpc.Core.Sockets.SubscriptionState::UnsubscribeAsync()
extern void SubscriptionState_UnsubscribeAsync_m19E4883E71E8F564D78128ECF0634D250313EA90 (void);
// 0x000004A1 System.Void Solana.Unity.Rpc.Core.Sockets.SubscriptionState/<UnsubscribeAsync>d__33::MoveNext()
extern void U3CUnsubscribeAsyncU3Ed__33_MoveNext_m9844309C0213DEDA669526F8AF5395B0712BEA5E (void);
// 0x000004A2 System.Void Solana.Unity.Rpc.Core.Sockets.SubscriptionState/<UnsubscribeAsync>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CUnsubscribeAsyncU3Ed__33_SetStateMachine_mFED2A9628DFDDE68592F9D6E99BF454A30048612 (void);
// 0x000004A3 System.Void Solana.Unity.Rpc.Core.Sockets.SubscriptionState`1::.ctor(Solana.Unity.Rpc.SolanaStreamingRpcClient,Solana.Unity.Rpc.Core.Sockets.SubscriptionChannel,System.Action`2<Solana.Unity.Rpc.Core.Sockets.SubscriptionState,T>,System.Collections.Generic.IList`1<System.Object>)
// 0x000004A4 System.Void Solana.Unity.Rpc.Core.Sockets.SubscriptionState`1::HandleData(System.Object)
// 0x000004A5 System.Void Solana.Unity.Rpc.Core.Sockets.WebSocketWrapper::.ctor(System.Net.WebSockets.ClientWebSocket)
extern void WebSocketWrapper__ctor_mC512F61CD551CC48FFB0BFA053A7E79266596EF1 (void);
// 0x000004A6 System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus> Solana.Unity.Rpc.Core.Sockets.WebSocketWrapper::get_CloseStatus()
extern void WebSocketWrapper_get_CloseStatus_mBFC23720AC69279D45ABBB728D472D4266373CAE (void);
// 0x000004A7 System.String Solana.Unity.Rpc.Core.Sockets.WebSocketWrapper::get_CloseStatusDescription()
extern void WebSocketWrapper_get_CloseStatusDescription_mA5EBFDC7ABFFD45518844AA4355AC4C7B6216FE0 (void);
// 0x000004A8 System.Net.WebSockets.WebSocketState Solana.Unity.Rpc.Core.Sockets.WebSocketWrapper::get_State()
extern void WebSocketWrapper_get_State_mBF4F436E08D7C8AB89101871D7808D330EAA8D11 (void);
// 0x000004A9 System.Threading.Tasks.Task Solana.Unity.Rpc.Core.Sockets.WebSocketWrapper::CloseAsync(System.Net.WebSockets.WebSocketCloseStatus,System.String,System.Threading.CancellationToken)
extern void WebSocketWrapper_CloseAsync_m519D747329B914AB69D626BCA5A8226D83747F2A (void);
// 0x000004AA System.Threading.Tasks.Task Solana.Unity.Rpc.Core.Sockets.WebSocketWrapper::ConnectAsync(System.Uri,System.Threading.CancellationToken)
extern void WebSocketWrapper_ConnectAsync_m374EB77A0FAB436486B36CFA5B2431F9F813C442 (void);
// 0x000004AB System.Threading.Tasks.Task Solana.Unity.Rpc.Core.Sockets.WebSocketWrapper::CloseAsync(System.Threading.CancellationToken)
extern void WebSocketWrapper_CloseAsync_m265477B5870FDBEB1EE18166A00E7DDF7F792F58 (void);
// 0x000004AC System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult> Solana.Unity.Rpc.Core.Sockets.WebSocketWrapper::ReceiveAsync(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
extern void WebSocketWrapper_ReceiveAsync_m82328EF51748EEF4BD889CEBBB527434814E67BB (void);
// 0x000004AD System.Threading.Tasks.Task Solana.Unity.Rpc.Core.Sockets.WebSocketWrapper::SendAsync(System.ReadOnlyMemory`1<System.Byte>,System.Net.WebSockets.WebSocketMessageType,System.Boolean,System.Threading.CancellationToken)
extern void WebSocketWrapper_SendAsync_m3BD5E210A83C3723DBB217694EA8FE4409A89027 (void);
// 0x000004AE System.Void Solana.Unity.Rpc.Core.Sockets.WebSocketWrapper::Dispose(System.Boolean)
extern void WebSocketWrapper_Dispose_m53DBD2C72D5D547A02F0DB34D0658F22D1D490AC (void);
// 0x000004AF System.Void Solana.Unity.Rpc.Core.Sockets.WebSocketWrapper::Dispose()
extern void WebSocketWrapper_Dispose_m3BE727A90A4084F962EF0775E4D8679AFCAB8285 (void);
// 0x000004B0 System.Void Solana.Unity.Rpc.Core.Http.KeyValue::.ctor(System.String,System.Object)
extern void KeyValue__ctor_m999B96D855E56C834E2EC88C125997971BA57B75 (void);
// 0x000004B1 Solana.Unity.Rpc.Core.Http.KeyValue Solana.Unity.Rpc.Core.Http.KeyValue::Create(System.String,System.Object)
extern void KeyValue_Create_mD319F02D58730A70E0FD2D01AD4D9DCB4E47B27A (void);
// 0x000004B2 System.Collections.Generic.Dictionary`2<System.String,System.Object> Solana.Unity.Rpc.Core.Http.ConfigObject::Create(Solana.Unity.Rpc.Core.Http.KeyValue)
extern void ConfigObject_Create_m24DE3CECCEA1B3E8FC47E8A1A2C4DE4F652CA7A7 (void);
// 0x000004B3 System.Collections.Generic.Dictionary`2<System.String,System.Object> Solana.Unity.Rpc.Core.Http.ConfigObject::Create(Solana.Unity.Rpc.Core.Http.KeyValue,Solana.Unity.Rpc.Core.Http.KeyValue)
extern void ConfigObject_Create_mEA04AA70BA174C8D96545CAB10E8A768427AA5B0 (void);
// 0x000004B4 System.Collections.Generic.Dictionary`2<System.String,System.Object> Solana.Unity.Rpc.Core.Http.ConfigObject::Create(Solana.Unity.Rpc.Core.Http.KeyValue,Solana.Unity.Rpc.Core.Http.KeyValue,Solana.Unity.Rpc.Core.Http.KeyValue)
extern void ConfigObject_Create_m7723A953D95F1D605AAD7E4B98ECA0380DC63168 (void);
// 0x000004B5 System.Collections.Generic.Dictionary`2<System.String,System.Object> Solana.Unity.Rpc.Core.Http.ConfigObject::Create(Solana.Unity.Rpc.Core.Http.KeyValue,Solana.Unity.Rpc.Core.Http.KeyValue,Solana.Unity.Rpc.Core.Http.KeyValue,Solana.Unity.Rpc.Core.Http.KeyValue)
extern void ConfigObject_Create_m1B457E0EB95DA64309AD685C415F5B9E62FAC768 (void);
// 0x000004B6 System.Collections.Generic.Dictionary`2<System.String,System.Object> Solana.Unity.Rpc.Core.Http.ConfigObject::Create(Solana.Unity.Rpc.Core.Http.KeyValue,Solana.Unity.Rpc.Core.Http.KeyValue,Solana.Unity.Rpc.Core.Http.KeyValue,Solana.Unity.Rpc.Core.Http.KeyValue,Solana.Unity.Rpc.Core.Http.KeyValue)
extern void ConfigObject_Create_m2D929797E8C2BE5161C95731AF43B4BDBCECC53C (void);
// 0x000004B7 System.Collections.Generic.List`1<System.Object> Solana.Unity.Rpc.Core.Http.Parameters::Create(System.Object)
extern void Parameters_Create_m62B4C5B584BD6BC573589B0125DA6501AF22CB6D (void);
// 0x000004B8 System.Collections.Generic.List`1<System.Object> Solana.Unity.Rpc.Core.Http.Parameters::Create(System.Object,System.Object)
extern void Parameters_Create_m219B4F29C692F576D95B2B2011F248B5ACD3C512 (void);
// 0x000004B9 System.Collections.Generic.List`1<System.Object> Solana.Unity.Rpc.Core.Http.Parameters::Create(System.Object,System.Object,System.Object)
extern void Parameters_Create_mF8CFCCC585836E3988753E6C10A79EDB1EA78CD5 (void);
// 0x000004BA System.Boolean Solana.Unity.Rpc.Core.Http.IRequestResult::get_WasSuccessful()
// 0x000004BB System.Boolean Solana.Unity.Rpc.Core.Http.IRequestResult::get_WasHttpRequestSuccessful()
// 0x000004BC System.Void Solana.Unity.Rpc.Core.Http.IRequestResult::set_WasHttpRequestSuccessful(System.Boolean)
// 0x000004BD System.Boolean Solana.Unity.Rpc.Core.Http.IRequestResult::get_WasRequestSuccessfullyHandled()
// 0x000004BE System.Void Solana.Unity.Rpc.Core.Http.IRequestResult::set_WasRequestSuccessfullyHandled(System.Boolean)
// 0x000004BF System.String Solana.Unity.Rpc.Core.Http.IRequestResult::get_Reason()
// 0x000004C0 System.Void Solana.Unity.Rpc.Core.Http.IRequestResult::set_Reason(System.String)
// 0x000004C1 System.Net.HttpStatusCode Solana.Unity.Rpc.Core.Http.IRequestResult::get_HttpStatusCode()
// 0x000004C2 System.Void Solana.Unity.Rpc.Core.Http.IRequestResult::set_HttpStatusCode(System.Net.HttpStatusCode)
// 0x000004C3 System.Int32 Solana.Unity.Rpc.Core.Http.IRequestResult::get_ServerErrorCode()
// 0x000004C4 System.Void Solana.Unity.Rpc.Core.Http.IRequestResult::set_ServerErrorCode(System.Int32)
// 0x000004C5 Solana.Unity.Rpc.Models.ErrorData Solana.Unity.Rpc.Core.Http.IRequestResult::get_ErrorData()
// 0x000004C6 System.Void Solana.Unity.Rpc.Core.Http.IRequestResult::set_ErrorData(Solana.Unity.Rpc.Models.ErrorData)
// 0x000004C7 System.String Solana.Unity.Rpc.Core.Http.IRequestResult::get_RawRpcRequest()
// 0x000004C8 System.String Solana.Unity.Rpc.Core.Http.IRequestResult::get_RawRpcResponse()
// 0x000004C9 System.Uri Solana.Unity.Rpc.Core.Http.JsonRpcClient::get_NodeAddress()
extern void JsonRpcClient_get_NodeAddress_mEFBDEAED205E616E3BE3781982FE0098CE2A134B (void);
// 0x000004CA System.Void Solana.Unity.Rpc.Core.Http.JsonRpcClient::.ctor(System.String,System.Object,System.Net.Http.HttpClient,Solana.Unity.Rpc.Utilities.IRateLimiter)
extern void JsonRpcClient__ctor_m24A6F528E5983737E046B62FDE3B666A92E79B94 (void);
// 0x000004CB System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<T>> Solana.Unity.Rpc.Core.Http.JsonRpcClient::SendRequest(Solana.Unity.Rpc.Messages.JsonRpcRequest)
// 0x000004CC System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<T>> Solana.Unity.Rpc.Core.Http.JsonRpcClient::HandleResult(Solana.Unity.Rpc.Messages.JsonRpcRequest,System.Net.Http.HttpResponseMessage)
// 0x000004CD System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.JsonRpcBatchResponse>> Solana.Unity.Rpc.Core.Http.JsonRpcClient::SendBatchRequestAsync(Solana.Unity.Rpc.Messages.JsonRpcBatchRequest)
extern void JsonRpcClient_SendBatchRequestAsync_mCEE26161A18A96C07CE8A9A21559C4EDEB10AC57 (void);
// 0x000004CE System.Threading.Tasks.Task`1<Solana.Unity.Rpc.Core.Http.RequestResult`1<Solana.Unity.Rpc.Messages.JsonRpcBatchResponse>> Solana.Unity.Rpc.Core.Http.JsonRpcClient::HandleBatchResult(Solana.Unity.Rpc.Messages.JsonRpcBatchRequest,System.Net.Http.HttpResponseMessage)
extern void JsonRpcClient_HandleBatchResult_m3F92FAFAEC72FA26B605200DBCC11194CC698F87 (void);
// 0x000004CF System.Boolean Solana.Unity.Rpc.Core.Http.JsonRpcClient::IsUnityPlayer()
extern void JsonRpcClient_IsUnityPlayer_m96FA075AE11CD230CF6B92757DA257F3BA895B50 (void);
// 0x000004D0 System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> Solana.Unity.Rpc.Core.Http.JsonRpcClient::SendAsyncRequest(System.Net.Http.HttpClient,System.Net.Http.HttpRequestMessage)
extern void JsonRpcClient_SendAsyncRequest_m151732259B533F0081BB97C4943FA18590679779 (void);
// 0x000004D1 System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> Solana.Unity.Rpc.Core.Http.JsonRpcClient::SendUnityWebRequest(System.Uri,System.Net.Http.HttpRequestMessage)
extern void JsonRpcClient_SendUnityWebRequest_mBC9773D363CB859ECD454926E97EF6EC720BB52E (void);
// 0x000004D2 System.Void Solana.Unity.Rpc.Core.Http.JsonRpcClient/<>c::.cctor()
extern void U3CU3Ec__cctor_mB57C32038F6B1A7811FE3CB001609D051A4EE55C (void);
// 0x000004D3 System.Void Solana.Unity.Rpc.Core.Http.JsonRpcClient/<>c::.ctor()
extern void U3CU3Ec__ctor_m4F210FDACBC58117A38EE07FBA4D990874D7AEB3 (void);
// 0x000004D4 System.Int32 Solana.Unity.Rpc.Core.Http.JsonRpcClient/<>c::<SendBatchRequestAsync>b__10_0(Solana.Unity.Rpc.Messages.JsonRpcRequest)
extern void U3CU3Ec_U3CSendBatchRequestAsyncU3Eb__10_0_mD01D6778A27280B2958F17A3D5414A323A242629 (void);
// 0x000004D5 System.Int32 Solana.Unity.Rpc.Core.Http.JsonRpcClient/<>c::<HandleBatchResult>b__11_0(Solana.Unity.Rpc.Messages.JsonRpcRequest)
extern void U3CU3Ec_U3CHandleBatchResultU3Eb__11_0_mCA1F76858FD9FFA0B9155FBA3228CC92FE206F5C (void);
// 0x000004D6 System.Void Solana.Unity.Rpc.Core.Http.JsonRpcClient/<HandleBatchResult>d__11::MoveNext()
extern void U3CHandleBatchResultU3Ed__11_MoveNext_mA1E25865F5F0A29CBFF7E44A8644512F61186ACD (void);
// 0x000004D7 System.Void Solana.Unity.Rpc.Core.Http.JsonRpcClient/<HandleBatchResult>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CHandleBatchResultU3Ed__11_SetStateMachine_mA545527D52AE171E953D22147DE199BA0322E4E6 (void);
// 0x000004D8 System.Void Solana.Unity.Rpc.Core.Http.JsonRpcClient/<HandleResult>d__9`1::MoveNext()
// 0x000004D9 System.Void Solana.Unity.Rpc.Core.Http.JsonRpcClient/<HandleResult>d__9`1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x000004DA System.Void Solana.Unity.Rpc.Core.Http.JsonRpcClient/<SendAsyncRequest>d__13::MoveNext()
extern void U3CSendAsyncRequestU3Ed__13_MoveNext_mE43C7E980835C082EA2186A732E6675F551FF30D (void);
// 0x000004DB System.Void Solana.Unity.Rpc.Core.Http.JsonRpcClient/<SendAsyncRequest>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendAsyncRequestU3Ed__13_SetStateMachine_mA6ECF580EFC00856519425D09A5DB1C92D5E3813 (void);
// 0x000004DC System.Void Solana.Unity.Rpc.Core.Http.JsonRpcClient/<SendBatchRequestAsync>d__10::MoveNext()
extern void U3CSendBatchRequestAsyncU3Ed__10_MoveNext_mAD39C189E6E6F4A319164BE543A9A6451921BBD0 (void);
// 0x000004DD System.Void Solana.Unity.Rpc.Core.Http.JsonRpcClient/<SendBatchRequestAsync>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendBatchRequestAsyncU3Ed__10_SetStateMachine_mF09646C90792F0A88DA079AC80C4E5E479D3C6C9 (void);
// 0x000004DE System.Void Solana.Unity.Rpc.Core.Http.JsonRpcClient/<SendRequest>d__8`1::MoveNext()
// 0x000004DF System.Void Solana.Unity.Rpc.Core.Http.JsonRpcClient/<SendRequest>d__8`1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
// 0x000004E0 System.Void Solana.Unity.Rpc.Core.Http.JsonRpcClient/<SendUnityWebRequest>d__14::MoveNext()
extern void U3CSendUnityWebRequestU3Ed__14_MoveNext_mA1798666235B99E241A25860C264189CAE6C11A9 (void);
// 0x000004E1 System.Void Solana.Unity.Rpc.Core.Http.JsonRpcClient/<SendUnityWebRequest>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSendUnityWebRequestU3Ed__14_SetStateMachine_mF98C2B9241F540BC219475D99EBB456A97F9A531 (void);
// 0x000004E2 System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::get_WasSuccessful()
// 0x000004E3 System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::get_WasHttpRequestSuccessful()
// 0x000004E4 System.Void Solana.Unity.Rpc.Core.Http.RequestResult`1::set_WasHttpRequestSuccessful(System.Boolean)
// 0x000004E5 System.Boolean Solana.Unity.Rpc.Core.Http.RequestResult`1::get_WasRequestSuccessfullyHandled()
// 0x000004E6 System.Void Solana.Unity.Rpc.Core.Http.RequestResult`1::set_WasRequestSuccessfullyHandled(System.Boolean)
// 0x000004E7 System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::get_Reason()
// 0x000004E8 System.Void Solana.Unity.Rpc.Core.Http.RequestResult`1::set_Reason(System.String)
// 0x000004E9 T Solana.Unity.Rpc.Core.Http.RequestResult`1::get_Result()
// 0x000004EA System.Void Solana.Unity.Rpc.Core.Http.RequestResult`1::set_Result(T)
// 0x000004EB System.Net.HttpStatusCode Solana.Unity.Rpc.Core.Http.RequestResult`1::get_HttpStatusCode()
// 0x000004EC System.Void Solana.Unity.Rpc.Core.Http.RequestResult`1::set_HttpStatusCode(System.Net.HttpStatusCode)
// 0x000004ED System.Int32 Solana.Unity.Rpc.Core.Http.RequestResult`1::get_ServerErrorCode()
// 0x000004EE System.Void Solana.Unity.Rpc.Core.Http.RequestResult`1::set_ServerErrorCode(System.Int32)
// 0x000004EF Solana.Unity.Rpc.Models.ErrorData Solana.Unity.Rpc.Core.Http.RequestResult`1::get_ErrorData()
// 0x000004F0 System.Void Solana.Unity.Rpc.Core.Http.RequestResult`1::set_ErrorData(Solana.Unity.Rpc.Models.ErrorData)
// 0x000004F1 System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::get_RawRpcRequest()
// 0x000004F2 System.Void Solana.Unity.Rpc.Core.Http.RequestResult`1::set_RawRpcRequest(System.String)
// 0x000004F3 System.String Solana.Unity.Rpc.Core.Http.RequestResult`1::get_RawRpcResponse()
// 0x000004F4 System.Void Solana.Unity.Rpc.Core.Http.RequestResult`1::set_RawRpcResponse(System.String)
// 0x000004F5 System.Void Solana.Unity.Rpc.Core.Http.RequestResult`1::.ctor(System.Net.Http.HttpResponseMessage,T)
// 0x000004F6 System.Void Solana.Unity.Rpc.Core.Http.RequestResult`1::.ctor()
// 0x000004F7 System.Void Solana.Unity.Rpc.Core.Http.RequestResult`1::.ctor(System.Net.HttpStatusCode,System.String)
// 0x000004F8 System.Void Solana.Unity.Rpc.Converters.AccountDataConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Collections.Generic.List`1<System.String>,Newtonsoft.Json.JsonSerializer)
extern void AccountDataConverter_WriteJson_mD030969A790A9BB88BACC1343A76254F4E314B25 (void);
// 0x000004F9 System.Collections.Generic.List`1<System.String> Solana.Unity.Rpc.Converters.AccountDataConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Collections.Generic.List`1<System.String>,System.Boolean,Newtonsoft.Json.JsonSerializer)
extern void AccountDataConverter_ReadJson_m23D0286E1FB5E1DCC88B6A33953D1A5A0CFD7CE9 (void);
// 0x000004FA System.Void Solana.Unity.Rpc.Converters.AccountDataConverter::.ctor()
extern void AccountDataConverter__ctor_m8C207F3E4432ACC128D604D63B5B4B2FA4422F82 (void);
// 0x000004FB System.Void Solana.Unity.Rpc.Converters.EncodingConverter::WriteJson(Newtonsoft.Json.JsonWriter,Solana.Unity.Rpc.Types.BinaryEncoding,Newtonsoft.Json.JsonSerializer)
extern void EncodingConverter_WriteJson_m87A4E88FCD8552E1F926D00CD8B519E6F773C264 (void);
// 0x000004FC Solana.Unity.Rpc.Types.BinaryEncoding Solana.Unity.Rpc.Converters.EncodingConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,Solana.Unity.Rpc.Types.BinaryEncoding,System.Boolean,Newtonsoft.Json.JsonSerializer)
extern void EncodingConverter_ReadJson_mD076CD129AFD17ED5B22721D95EA10A4074AB65B (void);
// 0x000004FD System.Void Solana.Unity.Rpc.Converters.EncodingConverter::.ctor()
extern void EncodingConverter__ctor_mABA3F582395E552168F30E6420E22951E3089A03 (void);
// 0x000004FE Solana.Unity.Rpc.Messages.JsonRpcErrorResponse Solana.Unity.Rpc.Converters.RpcErrorResponseConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,Solana.Unity.Rpc.Messages.JsonRpcErrorResponse,System.Boolean,Newtonsoft.Json.JsonSerializer)
extern void RpcErrorResponseConverter_ReadJson_m0CBE8A3CC07518EAF045D9C72275171F0D72B21C (void);
// 0x000004FF System.Void Solana.Unity.Rpc.Converters.RpcErrorResponseConverter::WriteJson(Newtonsoft.Json.JsonWriter,Solana.Unity.Rpc.Messages.JsonRpcErrorResponse,Newtonsoft.Json.JsonSerializer)
extern void RpcErrorResponseConverter_WriteJson_m55E907732931F41D3880F3DF0F619CE116810150 (void);
// 0x00000500 System.Void Solana.Unity.Rpc.Converters.RpcErrorResponseConverter::.ctor()
extern void RpcErrorResponseConverter__ctor_m8B2BDF3455F9C11612C1FBFDA54A1CBDADDE0125 (void);
// 0x00000501 Solana.Unity.Rpc.Models.TransactionError Solana.Unity.Rpc.Converters.TransactionErrorJsonConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,Solana.Unity.Rpc.Models.TransactionError,System.Boolean,Newtonsoft.Json.JsonSerializer)
extern void TransactionErrorJsonConverter_ReadJson_mB2381426EBF056F8ECFA71176C43791D5F9066E4 (void);
// 0x00000502 System.Void Solana.Unity.Rpc.Converters.TransactionErrorJsonConverter::WriteJson(Newtonsoft.Json.JsonWriter,Solana.Unity.Rpc.Models.TransactionError,Newtonsoft.Json.JsonSerializer)
extern void TransactionErrorJsonConverter_WriteJson_m7F7D1AA1CC9A578AC593C6F6D5F7411A1118D8D6 (void);
// 0x00000503 System.Void Solana.Unity.Rpc.Converters.TransactionErrorJsonConverter::.ctor()
extern void TransactionErrorJsonConverter__ctor_mFBD6A536D2F891BA692E87E56C9A158433D1A4EE (void);
// 0x00000504 System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TransactionInstruction> Solana.Unity.Rpc.Builders.MessageBuilder::get_Instructions()
extern void MessageBuilder_get_Instructions_mC163950E5CF40D3323DFA1CE3FD9E3471457913E (void);
// 0x00000505 System.Void Solana.Unity.Rpc.Builders.MessageBuilder::set_Instructions(System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.TransactionInstruction>)
extern void MessageBuilder_set_Instructions_m1608447F8BBD75D6ECB20784B6171FB54EF53FF5 (void);
// 0x00000506 System.String Solana.Unity.Rpc.Builders.MessageBuilder::get_RecentBlockHash()
extern void MessageBuilder_get_RecentBlockHash_mABE99E108C7898D2ADD31134BDB58065A2C52388 (void);
// 0x00000507 System.Void Solana.Unity.Rpc.Builders.MessageBuilder::set_RecentBlockHash(System.String)
extern void MessageBuilder_set_RecentBlockHash_mA0F0C212CE9860B29A040485DBCC3A0A49B16D36 (void);
// 0x00000508 Solana.Unity.Rpc.Models.NonceInformation Solana.Unity.Rpc.Builders.MessageBuilder::get_NonceInformation()
extern void MessageBuilder_get_NonceInformation_m2DE7865888D28A13CDB88F165CD78B9F1855782B (void);
// 0x00000509 System.Void Solana.Unity.Rpc.Builders.MessageBuilder::set_NonceInformation(Solana.Unity.Rpc.Models.NonceInformation)
extern void MessageBuilder_set_NonceInformation_m2B04126DAE5636C09BB2196C2A36CC30307ED05A (void);
// 0x0000050A Solana.Unity.Wallet.PublicKey Solana.Unity.Rpc.Builders.MessageBuilder::get_FeePayer()
extern void MessageBuilder_get_FeePayer_m7F9C738541C58C88C3AF0CA8ABD992FF420974F8 (void);
// 0x0000050B System.Void Solana.Unity.Rpc.Builders.MessageBuilder::set_FeePayer(Solana.Unity.Wallet.PublicKey)
extern void MessageBuilder_set_FeePayer_m24917CF396CC6C2288EF7E461291737F3D37D7C2 (void);
// 0x0000050C System.Void Solana.Unity.Rpc.Builders.MessageBuilder::.ctor()
extern void MessageBuilder__ctor_m63FE66D7C7664A85188CB9DD42D9EC86187E8954 (void);
// 0x0000050D Solana.Unity.Rpc.Builders.MessageBuilder Solana.Unity.Rpc.Builders.MessageBuilder::AddInstruction(Solana.Unity.Rpc.Models.TransactionInstruction)
extern void MessageBuilder_AddInstruction_m7DBE36A5D4F323D66D15ED54922A5F7FF38A8B31 (void);
// 0x0000050E System.Byte[] Solana.Unity.Rpc.Builders.MessageBuilder::Build()
extern void MessageBuilder_Build_mF9D2177D141C703EF1DF6E3319CB3388D830CDFF (void);
// 0x0000050F System.Collections.Generic.List`1<Solana.Unity.Rpc.Models.AccountMeta> Solana.Unity.Rpc.Builders.MessageBuilder::GetAccountKeys()
extern void MessageBuilder_GetAccountKeys_m7CF4AB33F727FB62C5E91B8F966684166F0E9CFE (void);
// 0x00000510 System.Int32 Solana.Unity.Rpc.Builders.MessageBuilder::FindAccountIndex(System.Collections.Generic.IList`1<Solana.Unity.Rpc.Models.AccountMeta>,System.Byte[])
extern void MessageBuilder_FindAccountIndex_m47803F12CA795152D1375EE2E59CC6F69B118942 (void);
// 0x00000511 System.Void Solana.Unity.Rpc.Builders.TransactionBuilder::.ctor()
extern void TransactionBuilder__ctor_m0B3F1BCABDCC514E09F089FADDF382793AB85906 (void);
// 0x00000512 System.Byte[] Solana.Unity.Rpc.Builders.TransactionBuilder::Serialize()
extern void TransactionBuilder_Serialize_m920C472467CA548CC223EE1031D2169460735337 (void);
// 0x00000513 System.Void Solana.Unity.Rpc.Builders.TransactionBuilder::Sign(System.Collections.Generic.IList`1<Solana.Unity.Wallet.Account>)
extern void TransactionBuilder_Sign_mEB113BB4056747C11040C4E2B6E66B6BA94F79EE (void);
// 0x00000514 Solana.Unity.Rpc.Builders.TransactionBuilder Solana.Unity.Rpc.Builders.TransactionBuilder::AddSignature(System.Byte[])
extern void TransactionBuilder_AddSignature_m0140FBDDD3F4CD65EC5A46DEE183AE840DD067D4 (void);
// 0x00000515 Solana.Unity.Rpc.Builders.TransactionBuilder Solana.Unity.Rpc.Builders.TransactionBuilder::AddSignature(System.String)
extern void TransactionBuilder_AddSignature_m8E35F8E642894D152DE85DA90129D63873BA3DC2 (void);
// 0x00000516 Solana.Unity.Rpc.Builders.TransactionBuilder Solana.Unity.Rpc.Builders.TransactionBuilder::SetRecentBlockHash(System.String)
extern void TransactionBuilder_SetRecentBlockHash_m867442395CF50EE764EF39BF869C480246E1ECC9 (void);
// 0x00000517 Solana.Unity.Rpc.Builders.TransactionBuilder Solana.Unity.Rpc.Builders.TransactionBuilder::SetNonceInformation(Solana.Unity.Rpc.Models.NonceInformation)
extern void TransactionBuilder_SetNonceInformation_mED6F1C23492F57A439653826472E7C5A3FAB0059 (void);
// 0x00000518 Solana.Unity.Rpc.Builders.TransactionBuilder Solana.Unity.Rpc.Builders.TransactionBuilder::SetFeePayer(Solana.Unity.Wallet.PublicKey)
extern void TransactionBuilder_SetFeePayer_m0667AA3756160B7FCF72EB4F44EEB1D59D0A5698 (void);
// 0x00000519 Solana.Unity.Rpc.Builders.TransactionBuilder Solana.Unity.Rpc.Builders.TransactionBuilder::AddInstruction(Solana.Unity.Rpc.Models.TransactionInstruction)
extern void TransactionBuilder_AddInstruction_m47204C5F74C6203BCF68D1965D8BB186CA148B3A (void);
// 0x0000051A System.Byte[] Solana.Unity.Rpc.Builders.TransactionBuilder::CompileMessage()
extern void TransactionBuilder_CompileMessage_m3F11B420C035A388257288C2D25D30EA412C7073 (void);
// 0x0000051B System.Byte[] Solana.Unity.Rpc.Builders.TransactionBuilder::Build(Solana.Unity.Wallet.Account)
extern void TransactionBuilder_Build_m943CA918D10296F1FBC00EE75472D561B8F9DDCD (void);
// 0x0000051C System.Byte[] Solana.Unity.Rpc.Builders.TransactionBuilder::Build(System.Collections.Generic.IList`1<Solana.Unity.Wallet.Account>)
extern void TransactionBuilder_Build_m9F3B305D960BCAA5792825205D115271B3775C21 (void);
// 0x0000051D Solana.Unity.Rpc.Models.TransactionInstruction Solana.Unity.Rpc.Builders.TransactionInstructionFactory::Create(Solana.Unity.Wallet.PublicKey,System.Collections.Generic.IList`1<Solana.Unity.Rpc.Models.AccountMeta>,System.Byte[])
extern void TransactionInstructionFactory_Create_m6856783D950A8686DA7FB86C9B24F909032D5F7F (void);
static Il2CppMethodPointer s_methodPointers[1309] = 
{
	ClientFactory_GetClient_m83527B87F05645C47BE13C02BCE5BBAEA595734A,
	ClientFactory_GetClient_m74B2BE4645FB5BCE4832B716727600F04DDA82A4,
	ClientFactory_GetClient_m08438A5D30AF826FAECA8EF28804B77890785EAD,
	ClientFactory_GetClient_mEBC2E68E35FBF63820AEC53D5B6978814CE866C1,
	ClientFactory_GetClient_m555DB5ACF7EB115D0FFD097E7CF9DC7089988CCD,
	ClientFactory_GetClient_mDA275F8E3C932304002C99030338C4736933559F,
	ClientFactory_GetClient_mE856D1AAE02BB5A1ED47840FCB72B4550F9EC49D,
	ClientFactory_GetStreamingClient_m2594513DDCDE394CF51617887B22E18371F1C2F6,
	ClientFactory_GetStreamingClient_m8A350E93905CE8FD4A5AA53933A40053DDB577D0,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	SolanaRpcBatchComposer_get_Count_m78E6322489A12D0AD9B4308F39E66EEB4ABBF433,
	SolanaRpcBatchComposer__ctor_mA58316D19308E2EED6EAC042DB6178D40AFE26F9,
	SolanaRpcBatchComposer_AutoExecute_mF9B584CD08B89E7ED38A574F988579EB03C1E2F4,
	SolanaRpcBatchComposer_CreateJsonRequests_m28CEF186C45A608D05D034EFA9A7F22E72AE44FB,
	SolanaRpcBatchComposer_Execute_m904163598ED92D4739AEE2A80E0939AE0C1511DA,
	SolanaRpcBatchComposer_Execute_m5E1D0AB46A518CB08EE20329988CA939DA93532A,
	SolanaRpcBatchComposer_ExecuteAsync_m3CEB0A7F3160EC693237B08D92E5FCDC217B265C,
	SolanaRpcBatchComposer_ExecuteAsync_m9FE5194E0FA03CA564487795A6848C17A4EF0279,
	SolanaRpcBatchComposer_ExecuteWithFatalFailure_mC3407C57F620EA818C0FBC5BFDC9D46FB788CE08,
	SolanaRpcBatchComposer_ExecuteWithFatalFailure_m69512C8085D6099C90E071FCEBC7F726DA16694E,
	SolanaRpcBatchComposer_ExecuteWithFatalFailureAsync_mE418A36A70A00C6D8275C13AC8EFC6860AAA379C,
	SolanaRpcBatchComposer_ExecuteWithFatalFailureAsync_mB9D943219BDA55932EBC7152C9F310618787F33E,
	SolanaRpcBatchComposer_ProcessBatchResponse_mAC4B39E96EDE8562590A0D8D00C0D12020948AF3,
	SolanaRpcBatchComposer_ProcessBatchFailure_m7D8D28D61D18145B6E62904CFC82D81B12308F81,
	SolanaRpcBatchComposer_MapJsonTypeToNativeType_mA2027B31403AD89C6B08EAF0B38D7C669C510186,
	SolanaRpcBatchComposer_Clear_mACBEBAE56580347F224B3C5B6AAF9520AEB7FFA6,
	SolanaRpcBatchComposer_Flush_m4D40B1422F307337DE160F6EAF7DFC2A3118C3E2,
	NULL,
	NULL,
	SolanaRpcBatchComposer_Add_m000B9E64C898975454CAB4FC4CDE53F3FC7DD8B5,
	NULL,
	NULL,
	SolanaRpcBatchComposer_HandleCommitment_m20F508410A575693EB66471132517D3AA622AB59,
	U3CU3Ec__cctor_m0DDE3F6657B205D315D034AB5A4C849EF870CC13,
	U3CU3Ec__ctor_mB93A2FBFF469C58638A31276C9DB1539D3C47592,
	U3CU3Ec_U3CCreateJsonRequestsU3Eb__9_0_m6A83E0C715AD263CD5A20F9C754E3A928DF8EA4B,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CExecuteAsyncU3Ed__12_MoveNext_m2F637C16F979AE8C29FB9E4AEF7EAF071489BD8C,
	U3CExecuteAsyncU3Ed__12_SetStateMachine_m1BF5DEACEB000B88E9CA4594D31D6DC1F5DBED58,
	U3CExecuteAsyncU3Ed__13_MoveNext_mD936A1654134C05EECE48FA8819C26B7F2282B8D,
	U3CExecuteAsyncU3Ed__13_SetStateMachine_m96D7B9BA93CBB97CAE2A66B7C78F1050991105A1,
	U3CExecuteWithFatalFailureAsyncU3Ed__16_MoveNext_m72AB9CBB2C415D6E2102B6F15FF53E56A1F22516,
	U3CExecuteWithFatalFailureAsyncU3Ed__16_SetStateMachine_mB8F354000925849D2705CACD633C04533EED2349,
	U3CExecuteWithFatalFailureAsyncU3Ed__17_MoveNext_m89DA6E27095FCB8783D40BD3EBA9E789A10D77A9,
	U3CExecuteWithFatalFailureAsyncU3Ed__17_SetStateMachine_m84A26300C6E837A171DD36F119FA218C616350BE,
	NULL,
	RpcBatchReqRespItem__ctor_m3EA8238F86A3057D377E7A8ED18C4B721E9D358E,
	SolanaRpcBatchWithCallbacks__ctor_m42343DC247C822777418ABB31E2899F66FA8BF86,
	SolanaRpcBatchWithCallbacks_get_Composer_mD40C75AC3DB25846D85CBCB5F994CBA4103160AF,
	SolanaRpcBatchWithCallbacks_AutoExecute_mEAB98A8297718FBA739A6E1CDFF8ED2F59FDE04C,
	SolanaRpcBatchWithCallbacks_Flush_mC2B23802A41F8B44C4F5A076286E4AD92F932898,
	SolanaRpcBatchWithCallbacks_GetBalance_m1CA0C3A83D714619D88C6107CAC99C24B4D74BA7,
	SolanaRpcBatchWithCallbacks_GetTokenAccountsByOwner_m3BAD3D561884939F162540DCFB827BBEAA255E41,
	SolanaRpcBatchWithCallbacks_GetSignaturesForAddress_m322A3E8E8554A16770C3FF3D07B5FE8374AD152C,
	SolanaRpcBatchWithCallbacks_GetConfirmedSignaturesForAddress2_m1262BB622F8732D0FECEEBBF6C66D938DCC4CA0D,
	SolanaRpcBatchWithCallbacks_GetProgramAccounts_m62652CAC5B2A636E95E66C50DA538C79742957AA,
	SolanaRpcBatchWithCallbacks_GetTransaction_mF0D17D0286EEC89DF4C831F47113C58BF99F24E3,
	SolanaRpcBatchWithCallbacks_GetAccountInfo_mB1B732869A79B9E5FC6629EE2AA5A534D212E9FA,
	SolanaRpcBatchWithCallbacks_GetTokenLargestAccounts_m1FAE84F8A5F57EA130448D06459490C2C71824A3,
	SolanaRpcBatchWithCallbacks_SendTransaction_m04D18299043C79DA0AB2C625FF365895BAC6492D,
	SolanaRpcBatchWithCallbacks_SendTransaction_mA306D4BE6390044C7C79F1AE15BA01DC2BA99260,
	SolanaRpcBatchWithCallbacks_GetMultipleAccounts_mB19C20C7F77EF2208FB5830061EFEAB90BE5961C,
	SolanaRpcBatchWithCallbacks_GetTokenAccountInfo_m2A6FD2AB88CC643F954DD18544F47B0B6FEF3877,
	SolanaRpcBatchWithCallbacks_HandleCommitment_m96043A9ABD6E06C3FFE0FB3360EA3D257BCAF06E,
	U3CU3Ec__cctor_m8DE37FFA7A87534A04A926D0EE467F6B12F9975A,
	U3CU3Ec__ctor_m0018B226C96C793B19B69E651014596D8F095F9E,
	U3CU3Ec_U3CGetProgramAccountsU3Eb__10_0_mEA5DBCAE76F7A60D53DAB2CBF3FDCE2C9E3BA14B,
	SolanaRpcClient__ctor_mAAD32D3A5DD16EF1FE662F57792C7592CA372B36,
	NULL,
	NULL,
	NULL,
	SolanaRpcClient_HandleCommitment_mB09CA8C9C404B4908BD7F9CDA98A244F7A885214,
	SolanaRpcClient_HandleTransactionDetails_m96C309C48DFB2B9F0BC47E9CB41F64D8A625FD8F,
	SolanaRpcClient_GetTokenMintInfoAsync_m9165D303AADE0CDA12B890AE52359FBA9A61A26F,
	SolanaRpcClient_GetTokenMintInfo_m69FE046AE3E5EDC4C24858C8066346247F24D8B9,
	SolanaRpcClient_GetTokenAccountInfoAsync_mE6E9AC4C06181D8D208C943B30ADCC9537008CA9,
	SolanaRpcClient_GetTokenAccountInfo_m548D353E28689D0B1AC2C156BC0E4F040F38AB9D,
	SolanaRpcClient_GetAccountInfoAsync_m118C1D4B37B48486DB931BB8F08DD8EB810468AB,
	SolanaRpcClient_GetAccountInfo_m43D602763B212ED3D9FE317A534F7D2767D6B34D,
	SolanaRpcClient_GetProgramAccountsAsync_m76D133181D3FFFA58F5C91558FA2B07A71653C73,
	SolanaRpcClient_GetProgramAccounts_m84EA7113A44A8B5369FA416D5F0CA9D955DB5490,
	SolanaRpcClient_GetMultipleAccountsAsync_m2A5E48F037105ACEBA26BAE528796C8A17C29386,
	SolanaRpcClient_GetMultipleAccounts_m9E2816CB6F611565CB4BA3E38DA1D236864202CC,
	SolanaRpcClient_GetBalanceAsync_m64CA73D202387406DC6AC62D767F3EA45F047E4B,
	SolanaRpcClient_GetBalance_mD11AC872E03C9657D99849F46B42A1F56A5172F4,
	SolanaRpcClient_GetBlockAsync_m459CAFD5BB7F52650122C4584B5D013473914B21,
	SolanaRpcClient_GetBlock_m6BBF41956E7A1EB69AB3CFBFB9427F33E9327CF7,
	SolanaRpcClient_GetBlocksAsync_m4B55945AEA7176DB4FF3F65F813742711539A271,
	SolanaRpcClient_GetConfirmedBlockAsync_m9AF16D8AADF887DB9953E46A99C34894B23B8C8A,
	SolanaRpcClient_GetConfirmedBlock_m9A284513BC8AF7404C87879FD8A6F0EE73B5C4BC,
	SolanaRpcClient_GetBlocks_m1C14008AA328CB1A37971DF0396E26C3893B78DF,
	SolanaRpcClient_GetConfirmedBlocksAsync_mA3B31FF03C24289787EE48FA59C80F87773A4D5C,
	SolanaRpcClient_GetConfirmedBlocks_mAA98E71CD31983BDB23AC1B49A51DE882EA518A8,
	SolanaRpcClient_GetConfirmedBlocksWithLimitAsync_mB27A9EED656776C2E88296191886876202683A29,
	SolanaRpcClient_GetBlocksWithLimit_mF6B2EDEDB0891DB41C3D37EC190ABC8CC3176BC5,
	SolanaRpcClient_GetConfirmedBlocksWithLimit_m581C3604B5AB1D840DCED82ECFBF5E11ED6D16ED,
	SolanaRpcClient_GetBlocksWithLimitAsync_m2776DC7F083DDDEF7FCA81B90DE201C3830C3CA6,
	SolanaRpcClient_GetFirstAvailableBlock_mAD098F2BD40454C7587F582625F5EDAE4D06F5A5,
	SolanaRpcClient_GetFirstAvailableBlockAsync_mCC31128CBF16D334ADE8E1118843CA5D05A2A100,
	SolanaRpcClient_GetBlockProductionAsync_m6D062C4EB32337E3B2A1FF995789E51D2B2DC092,
	SolanaRpcClient_GetBlockProduction_m9AE62520E67B7AA753766D1BC7D1BE1211512349,
	SolanaRpcClient_GetHealth_mDC820A00E695C00406E5593D13844E5BB48E4D5C,
	SolanaRpcClient_GetHealthAsync_m5E33B5974035B385A44F4B23F1B2CB5126DE2C21,
	SolanaRpcClient_GetLeaderSchedule_m2843E2267009D4EC3D5703096B1A1E509278617C,
	SolanaRpcClient_GetLeaderScheduleAsync_m5168D6C4DF3BC4C214F7281E2ED8DFDBCE64E850,
	SolanaRpcClient_GetTransactionAsync_m031450661BFDD82AAC3773A2F57D7F7559C830C2,
	SolanaRpcClient_GetConfirmedTransactionAsync_mD88615024D91109065B17196F6D82B88D285EC24,
	SolanaRpcClient_GetTransaction_m6DCA8E5059735B33E9AF50DDBE71A19EC207BE5A,
	SolanaRpcClient_GetConfirmedTransaction_m4FDE8C595F7A0587D3043FFD9BB934EE674C37DD,
	SolanaRpcClient_GetBlockHeightAsync_mA1F42FD3C0A26517EBE39F5C41072E44AE54485F,
	SolanaRpcClient_GetBlockHeight_mADCC2982935DFCE2608B078103A5FC2D02C4BE1B,
	SolanaRpcClient_GetBlockCommitmentAsync_m26DED250DD258F2D7591686114E3D2903E2EAD85,
	SolanaRpcClient_GetBlockCommitment_m9A659C54427A52E8B92938820E92371C6E0765A7,
	SolanaRpcClient_GetBlockTimeAsync_m075D86A5F985B60F7C4C56E52BC7F754BD0CA87F,
	SolanaRpcClient_GetBlockTime_mB201ACA4747B0D7497975BE8573A864CAF0B6AF4,
	SolanaRpcClient_GetClusterNodesAsync_mCC4A66C6F5ED16B0D3BE8C03268E611AA5242388,
	SolanaRpcClient_GetClusterNodes_m7A92FBFE7CB8AF7B680D8FC4769DCBF8873416CA,
	SolanaRpcClient_GetEpochInfoAsync_mB8E244C9E9C34E17CCF85A22C998365859DC8542,
	SolanaRpcClient_GetEpochInfo_m1232EA6CF03A25CD43EDF3960F66317B0D8C777D,
	SolanaRpcClient_GetEpochScheduleAsync_mEB2111A6C9572AB3F2450785345CFDFB4EA6E738,
	SolanaRpcClient_GetEpochSchedule_m02FDCA488121B4DBC01B912D89C1008D9EAD9204,
	SolanaRpcClient_GetFeeCalculatorForBlockhashAsync_m75B74302258AFB3588FA0279F565B8AA642A6070,
	SolanaRpcClient_GetFeeCalculatorForBlockhash_m2192BD26596D159506087C9B942EB5CB34658EAA,
	SolanaRpcClient_GetFeeRateGovernorAsync_m10A8CC8B4DA36ADAF204599E81B59DB41A59E4F0,
	SolanaRpcClient_GetFeeRateGovernor_mC01661B1F7FB4905A866E86DF61EEA2E4748387E,
	SolanaRpcClient_GetFeesAsync_m03B8A676F179BFF7D345B78C4E5D6429F2226EF0,
	SolanaRpcClient_GetFees_m6EEF1AC6B1218F0F46B9D9719EE932C1CD9153D2,
	SolanaRpcClient_GetRecentBlockHashAsync_m2A8D0C5F5A07723124A4BB67E6F6D9404B5C3B82,
	SolanaRpcClient_GetRecentBlockHash_mBBBFEBEE4F7D86031D247F7D735E3A36B2E43934,
	SolanaRpcClient_GetMaxRetransmitSlotAsync_mC129131A00686CCD95DE8219E89D9924A630401B,
	SolanaRpcClient_GetMaxRetransmitSlot_m4D7BBA42850A8120E4798497CC22F132B763B5E9,
	SolanaRpcClient_GetMaxShredInsertSlotAsync_m0D4A7F8A6EC164340E386DD85B2BD9F8B331F61E,
	SolanaRpcClient_GetMaxShredInsertSlot_m4BEF93020E6985F9E5A13A3597217A87397BC7C2,
	SolanaRpcClient_GetMinimumBalanceForRentExemptionAsync_m84FFCDFD0CF17529AC439FDE8856BD99F4FD1BBE,
	SolanaRpcClient_GetMinimumBalanceForRentExemption_m157369BD9297B7B319518AEB0E4C7C3E5F5C3ED4,
	SolanaRpcClient_GetGenesisHashAsync_mD0AD32F4A17FB0064F43F3095E483266DF90247D,
	SolanaRpcClient_GetGenesisHash_mC5EFFEA6E0BD5EACDA0AA024D79287DA2D96782C,
	SolanaRpcClient_GetIdentityAsync_mCC0D4F597DC6FC5C388AF91173D3721F3E246C52,
	SolanaRpcClient_GetIdentity_m210E7ABD55264679616C96164F1A8F38CD288212,
	SolanaRpcClient_GetInflationGovernorAsync_m41B08286810E3DB8FCF0DDCA2E9F0D91B4859D54,
	SolanaRpcClient_GetInflationGovernor_mADA745A5AD59C05169F0E0D2B5A44AA27DBE58C7,
	SolanaRpcClient_GetInflationRateAsync_m179BCD8C913C69EA32F8B40DBE5A1D1643862AC8,
	SolanaRpcClient_GetInflationRate_mC02655F1B5FB004DDAA4A17FAE56D7D9B3BFE084,
	SolanaRpcClient_GetInflationRewardAsync_m5A23CB44D0AC66FEE1FE2B90E158C32FF6816160,
	SolanaRpcClient_GetInflationReward_m1C0FEE9D877D8E4867C296011CF192C585EAE337,
	SolanaRpcClient_GetLargestAccountsAsync_m6477F4B64BB383F9DB81814BE08BE44892369033,
	SolanaRpcClient_GetLargestAccounts_m7E85864D0A3265930378E543785CA86981EB37E9,
	SolanaRpcClient_GetSnapshotSlotAsync_mFABECC0B2BFE762564CA5BD7F367018757231B6A,
	SolanaRpcClient_GetSnapshotSlot_mD30DC2CB9D585DD9C88CF7C0EE4A8CC717DF07B9,
	SolanaRpcClient_GetRecentPerformanceSamplesAsync_mC86FC0AD9F25334CC3300B82281EA3E584BAE14A,
	SolanaRpcClient_GetRecentPerformanceSamples_m2FD473F305863C38AEF791482BE82C48558805A2,
	SolanaRpcClient_GetSignaturesForAddressAsync_m10C533CD0E6DEA552BEB9E9BD1AEDE6A2A4EB826,
	SolanaRpcClient_GetConfirmedSignaturesForAddress2Async_mF0882DD8F7A46E1C1DC974BD4C791870F96D0DFD,
	SolanaRpcClient_GetSignaturesForAddress_m4FE42F246E22440677AE265022B1A2EF374E7165,
	SolanaRpcClient_GetConfirmedSignaturesForAddress2_m20E6E1BE0A3013C0635EEA600C13CC9F50088DF5,
	SolanaRpcClient_GetSignatureStatusesAsync_m08A013D4A56757B3BD5EEC96E6D5F1810A73297F,
	SolanaRpcClient_GetSignatureStatuses_mFB0B81640637532412B16B7064AF42D8D0AFD8F2,
	SolanaRpcClient_GetSlotAsync_m63A07A6ED145DC8EA775A817231D6FF7745CE0F8,
	SolanaRpcClient_GetSlot_m12E6C10AA3A71E36902218500A6EF548F1181C10,
	SolanaRpcClient_GetSlotLeaderAsync_mB604C60E48B7385A6BA3FDC4793B02394EF74C21,
	SolanaRpcClient_GetSlotLeader_m85117C373C7E9755E4450D2568400E36AE4EBBDD,
	SolanaRpcClient_GetSlotLeadersAsync_mF89BFD2EA2CA1E9E731E416B8EBEAF21A0FC3C34,
	SolanaRpcClient_GetSlotLeaders_mC4F141A828AAA929E7B8654F9C75BCC2E75C469C,
	SolanaRpcClient_GetStakeActivationAsync_m275A1AF221756C3EAFFBE70C45FDE86CE7575201,
	SolanaRpcClient_GetStakeActivation_mDA69D6A3BB68C16C592383D0B75424660520A4AD,
	SolanaRpcClient_GetSupplyAsync_m5F51D44206627F89BE3C7D815B932A80EFD7DC18,
	SolanaRpcClient_GetSupply_mC457E91D1E13992CB49E7ADD221D2604DA5F9994,
	SolanaRpcClient_GetTokenAccountBalanceAsync_mF6C82580EB5AD7893A3DCEA7D62F430EBE36FB3E,
	SolanaRpcClient_GetTokenAccountBalance_m0E2569EE991095AC23797AB19177EC4BA57B82CC,
	SolanaRpcClient_GetTokenAccountsByDelegateAsync_m85CA1F19ECB0FCD9AACBC76331704CA56F74A617,
	SolanaRpcClient_GetTokenAccountsByDelegate_m17F40AE93CE5FE1113799DCE5303BA6E9462CEC9,
	SolanaRpcClient_GetTokenAccountsByOwnerAsync_m20CF87E0F3DE7AD038CFA8D92B701D6501D9535F,
	SolanaRpcClient_GetTokenAccountsByOwner_m4701DBDB4634DF60427EF7C06BE3CDF7C55D19BA,
	SolanaRpcClient_GetTokenLargestAccountsAsync_m41BB7A596E1FF79AF8E0E8E17F23F9524FD23866,
	SolanaRpcClient_GetTokenLargestAccounts_mAB3E1A8848080A1E362535A41F899D9C86B68B14,
	SolanaRpcClient_GetTokenSupplyAsync_m6170DECBB9180F44C0C33F3028B53E1F33080E58,
	SolanaRpcClient_GetTokenSupply_mCAC9E11A456E1A43EBB5F5BA2FB22A29E0F653B8,
	SolanaRpcClient_GetTransactionCountAsync_m4E24C6D9299C3B799070D3A8F58DE68B863D08E5,
	SolanaRpcClient_GetTransactionCount_m0A0AA118468321A990C02508724480A858675CB8,
	SolanaRpcClient_GetVersionAsync_m54367044592AA2827D4AD6977686760F226BB050,
	SolanaRpcClient_GetVersion_m8B97A14FEEFCD6906AAA482DE65FF869C05AAAAF,
	SolanaRpcClient_GetVoteAccountsAsync_mEC3151BA197A689AF88FF6D91996A9933D27E684,
	SolanaRpcClient_GetVoteAccounts_mEBFB38DC9878BC6BCD01EE5003B982D8D266AD55,
	SolanaRpcClient_GetMinimumLedgerSlotAsync_m7B70DA81D76168BBB8312260F92AA5A54CF1F8E3,
	SolanaRpcClient_GetMinimumLedgerSlot_m1FBBC9C80C59D1DDA4154C993E10CA8720E15A25,
	SolanaRpcClient_RequestAirdropAsync_m7B135C1A2213CF9C0D31E2F6FC054F17398C13A7,
	SolanaRpcClient_RequestAirdrop_m65210936FA9BB0744CC0A134B86E51FEF30FDAE9,
	SolanaRpcClient_SendTransactionAsync_m9D962809E581CC886F65050AE41549E81A783B6C,
	SolanaRpcClient_SendTransactionAsync_m0961748D9CA7EEAD1A3822F229329E563D6DF579,
	SolanaRpcClient_SendTransaction_m06DFEB1C90CF570279797EB4E1E7519562310F03,
	SolanaRpcClient_SendTransaction_m7B5B031895328CE6A831B4B57CF692549D93BCAF,
	SolanaRpcClient_SimulateTransactionAsync_mF1A1C1CDB66B30728E0525FCCEA346CAAA929BDF,
	SolanaRpcClient_SimulateTransactionAsync_m5181127729403AFD531A4626A3D9A48FAC8B47D7,
	SolanaRpcClient_SimulateTransaction_m5050D30697BDD0064C795846F3D1A096B7F9EB46,
	SolanaRpcClient_SimulateTransaction_m98A6F9C91A7FD8DC397A6872A9763EB68580CCF2,
	SolanaRpcClient_Solana_Unity_Rpc_IRpcClient_GetNextIdForReq_m20FE8CDC12B7A0B679112A81995A8839D78AD8A5,
	U3CU3Ec__cctor_m6D0A42AAB55367985C3C230585534DBC655C887E,
	U3CU3Ec__ctor_m3B332E71D4BD87BD5D4CBA9EEA1E4938EBB6BA7F,
	U3CU3Ec_U3CGetProgramAccountsAsyncU3Eb__13_0_m31367D6492BC65AA9731E26988DF5DE08ED42D70,
	U3CGetAccountInfoAsyncU3Ed__11_MoveNext_m71A035652C4E20F2C1238210D19531DBA9EBC7F4,
	U3CGetAccountInfoAsyncU3Ed__11_SetStateMachine_m918F91204F4FBD26C53F53C9DABEDC05EAF67D1F,
	U3CGetBalanceAsyncU3Ed__17_MoveNext_m4F5CB517DCA9EDD3965B7B775A9A44197FFE7045,
	U3CGetBalanceAsyncU3Ed__17_SetStateMachine_mAE9B7B6827A2AE676475B89A243C6E5EADF174F5,
	U3CGetBlockAsyncU3Ed__19_MoveNext_mF1A80C3F7F4ED121C65A2E7883EA910BD78A897F,
	U3CGetBlockAsyncU3Ed__19_SetStateMachine_m3C66FE1A018DD6F5845EFC4FD1DC7413278A1156,
	U3CGetBlockCommitmentAsyncU3Ed__45_MoveNext_m0F1313671C8CD1104F25E931C1227964717DA365,
	U3CGetBlockCommitmentAsyncU3Ed__45_SetStateMachine_m2A2B3D8A807312480BC5C1C7E4068141CE152FDC,
	U3CGetBlockHeightAsyncU3Ed__43_MoveNext_m260547E20CE2CCF532A28643C28C60E653869779,
	U3CGetBlockHeightAsyncU3Ed__43_SetStateMachine_m08B1445FDB8ED54D256DE70A07D993996955DB79,
	U3CGetBlockProductionAsyncU3Ed__33_MoveNext_mE48D8A3D4CE678528DC30DE3E9C311187BFAEBA2,
	U3CGetBlockProductionAsyncU3Ed__33_SetStateMachine_m9619E9B9D3980BEC46017DBC8FE8B5BAA1C9A5AD,
	U3CGetBlockTimeAsyncU3Ed__47_MoveNext_m11C616CA46C66F321C2F896F27F9C611B4ECAC8B,
	U3CGetBlockTimeAsyncU3Ed__47_SetStateMachine_mB3E9DF73B7988E360A37C8A3AE98DC5A44352CD5,
	U3CGetBlocksAsyncU3Ed__21_MoveNext_mC0B59AFB286D4C89DAF4AC612F859C6FF4D891D9,
	U3CGetBlocksAsyncU3Ed__21_SetStateMachine_m3A54F7D4A7B4FCE37F26485E20108EE1F2455F1C,
	U3CGetBlocksWithLimitAsyncU3Ed__30_MoveNext_m6FDB251EC76756F620F26A86BE367C3AE72D05BA,
	U3CGetBlocksWithLimitAsyncU3Ed__30_SetStateMachine_mE4708412237CAEDB998216CF3F049250E3659961,
	U3CGetClusterNodesAsyncU3Ed__49_MoveNext_m4CE4236A15EA5B96A27E4F65C4EC55644324098E,
	U3CGetClusterNodesAsyncU3Ed__49_SetStateMachine_m7C3F8EC519D85CF1C43376240AFDE1AF7BD054F8,
	U3CGetConfirmedBlockAsyncU3Ed__22_MoveNext_m449B330D80F8F14E6B3C85E796AB3A20FEB36404,
	U3CGetConfirmedBlockAsyncU3Ed__22_SetStateMachine_mD0230753A0A883461893836E4B5A80526FEDBE2B,
	U3CGetConfirmedBlocksAsyncU3Ed__25_MoveNext_mFEC32FB8DF8B26C7E8BB03E76D545E7919AFA36F,
	U3CGetConfirmedBlocksAsyncU3Ed__25_SetStateMachine_m408BDA98333EC31E1BE65C8C72E88F698BB00015,
	U3CGetConfirmedBlocksWithLimitAsyncU3Ed__27_MoveNext_m6961A2C6394CF1618783F5E1C0B4D06FDDAB7E27,
	U3CGetConfirmedBlocksWithLimitAsyncU3Ed__27_SetStateMachine_m34D81FF9A155D8FF3495FBFF115DAEB0B371BF52,
	U3CGetConfirmedSignaturesForAddress2AsyncU3Ed__86_MoveNext_mCF515026A73E21E519CA21F62FE3E2146536D45F,
	U3CGetConfirmedSignaturesForAddress2AsyncU3Ed__86_SetStateMachine_m077004FFF2BE2F1F34771277E7588B3E58340B9F,
	U3CGetConfirmedTransactionAsyncU3Ed__40_MoveNext_m21CEF49718574EFEC689A84C812DD0BF329533BA,
	U3CGetConfirmedTransactionAsyncU3Ed__40_SetStateMachine_m5DEACA442081D0F350CF2B4A9599BF2B2E444DA2,
	U3CGetEpochInfoAsyncU3Ed__51_MoveNext_m884460B5CEB552BE3C41BC53E29D6233D468740F,
	U3CGetEpochInfoAsyncU3Ed__51_SetStateMachine_mC942E328FB8CD1C7BB3E9AC296C79674D97A02AE,
	U3CGetEpochScheduleAsyncU3Ed__53_MoveNext_m0C7EA807EDB7B84A18197EB7B674C3825D167E84,
	U3CGetEpochScheduleAsyncU3Ed__53_SetStateMachine_m1619AD8C289B3FE979384856CEE18915E35ECF82,
	U3CGetFeeCalculatorForBlockhashAsyncU3Ed__55_MoveNext_m6B3F43E8A6230F6624673F3869DCF17FC552D4D5,
	U3CGetFeeCalculatorForBlockhashAsyncU3Ed__55_SetStateMachine_mC9581F6D6637E22AFAF2E74FC7295E35B27575A7,
	U3CGetFeeRateGovernorAsyncU3Ed__57_MoveNext_m4567AC38AB7748BDD389A2404A7DA4B8616FD1FE,
	U3CGetFeeRateGovernorAsyncU3Ed__57_SetStateMachine_m672022222A7DD8676C9CD8F0CDDD475D7F2E1E4F,
	U3CGetFeesAsyncU3Ed__59_MoveNext_m777F047242526E748A8B2EF113EB58479DB8891F,
	U3CGetFeesAsyncU3Ed__59_SetStateMachine_mB20F39D8716C914809FA7FFA5BF9C368FAF7450A,
	U3CGetFirstAvailableBlockAsyncU3Ed__32_MoveNext_m297DD632FFAB265819B6C0D1DF2438166D4DE6CB,
	U3CGetFirstAvailableBlockAsyncU3Ed__32_SetStateMachine_m6F61A9EE0D127523319A47E048EF5EE7B9EF9DEC,
	U3CGetGenesisHashAsyncU3Ed__69_MoveNext_mE441AAA63680A1AD6D9D7DDA157E81EED46D7E9C,
	U3CGetGenesisHashAsyncU3Ed__69_SetStateMachine_m2C7DC1E41303B657E41D25F8EAE6BD5FB451FA82,
	U3CGetHealthAsyncU3Ed__36_MoveNext_mE7FB1473AD9F334961DFB003217F07C3CBFD688F,
	U3CGetHealthAsyncU3Ed__36_SetStateMachine_mD428B47CC9937F03A47430D9C5443C0AA04D9519,
	U3CGetIdentityAsyncU3Ed__71_MoveNext_m982C5109F1C0DE4A12BC57D22D6854DD9E2E0794,
	U3CGetIdentityAsyncU3Ed__71_SetStateMachine_mE5D50C8E9C5D4980AF46D301EB7AF2C8413921C1,
	U3CGetInflationGovernorAsyncU3Ed__73_MoveNext_mDC4721BBCBF9435DB842D416D28FBFA755A36ECB,
	U3CGetInflationGovernorAsyncU3Ed__73_SetStateMachine_mE4C760EDF2599140AA81C588EF155445C9906883,
	U3CGetInflationRateAsyncU3Ed__75_MoveNext_mB35278FB495171CFFBDA3209E6CD2D4A6905C3FA,
	U3CGetInflationRateAsyncU3Ed__75_SetStateMachine_mCCED976193DBA6376B63D9E9213E0C425327437A,
	U3CGetInflationRewardAsyncU3Ed__77_MoveNext_m74103BF4FEA13D6F999C6E1AB2A70A356A6517D6,
	U3CGetInflationRewardAsyncU3Ed__77_SetStateMachine_m3F53A9EB0CB5AABAC03647708C373273D7696FCC,
	U3CGetLargestAccountsAsyncU3Ed__79_MoveNext_m5227EDF6BC7C7428880FCA8B8DB904DFD39BAFA6,
	U3CGetLargestAccountsAsyncU3Ed__79_SetStateMachine_mB9DE4130BA71294F4E4E48FDFBA836848E92F59D,
	U3CGetLeaderScheduleAsyncU3Ed__38_MoveNext_mA7B2522A6CB093BA92ADF307A9DF58FEAA197720,
	U3CGetLeaderScheduleAsyncU3Ed__38_SetStateMachine_m1DF01C66460141C51EC5191005963C0A8AA7FEE8,
	U3CGetMaxRetransmitSlotAsyncU3Ed__63_MoveNext_m9D0335162A98DEFFE62A80D7F97B23CD99993B65,
	U3CGetMaxRetransmitSlotAsyncU3Ed__63_SetStateMachine_mB2641299C98B42D5E915A3D7DC8A5C7E2E6582C9,
	U3CGetMaxShredInsertSlotAsyncU3Ed__65_MoveNext_m931457A8375554386F04DDF7F57B758E7F160468,
	U3CGetMaxShredInsertSlotAsyncU3Ed__65_SetStateMachine_mB6DA78BC7C2C06FD40EAB66CAEF9978F92CAAC41,
	U3CGetMinimumBalanceForRentExemptionAsyncU3Ed__67_MoveNext_m221CA08C4EC6CDC60A81549900BA7771F74E6690,
	U3CGetMinimumBalanceForRentExemptionAsyncU3Ed__67_SetStateMachine_m61768E112AE3695CCA2360B168038E3914486B9D,
	U3CGetMinimumLedgerSlotAsyncU3Ed__117_MoveNext_m390631849901AEBECA02C26DB3ED362935AD5AE4,
	U3CGetMinimumLedgerSlotAsyncU3Ed__117_SetStateMachine_m8B55DEC32C67E0BF87BD1612E438D5445C299698,
	U3CGetMultipleAccountsAsyncU3Ed__15_MoveNext_m565E691948863B49019358885C7E17FA81F20D70,
	U3CGetMultipleAccountsAsyncU3Ed__15_SetStateMachine_m71C7AE6D8849F3C9C30C9111DB21B5E096F1FEB8,
	U3CGetProgramAccountsAsyncU3Ed__13_MoveNext_mDD3EE587B4DF999973E5BB341C653695F7752E35,
	U3CGetProgramAccountsAsyncU3Ed__13_SetStateMachine_mDC5A34888DFA4807600D4000C39AE9AC0366C85E,
	U3CGetRecentBlockHashAsyncU3Ed__61_MoveNext_m592D9D93066B6F4CB059DBAC7F4B9E2EB0912D9A,
	U3CGetRecentBlockHashAsyncU3Ed__61_SetStateMachine_mACE64BD81C63DD882591CA6D5C345831EF0345C6,
	U3CGetRecentPerformanceSamplesAsyncU3Ed__83_MoveNext_mEACF6DF7EAE932558F4A75011EFD340EEFDE24A1,
	U3CGetRecentPerformanceSamplesAsyncU3Ed__83_SetStateMachine_m5176600569417A469C4BD6D65DBCFC3CFD0B85BA,
	U3CGetSignatureStatusesAsyncU3Ed__89_MoveNext_mE01EB348A879AF02EB7D5EC23D728EF7B729A16B,
	U3CGetSignatureStatusesAsyncU3Ed__89_SetStateMachine_m859B14153AE2B89AF84C9FED75572987D56EE67F,
	U3CGetSignaturesForAddressAsyncU3Ed__85_MoveNext_m50D89D991424FA736F45E5B61A3047E180C337B0,
	U3CGetSignaturesForAddressAsyncU3Ed__85_SetStateMachine_m8E8FF95E6BB7CF72E596390AB5BFE50B2F7A219E,
	U3CGetSlotAsyncU3Ed__91_MoveNext_m7D6C1B33B4968E5CF38E2DCEAAB56EB2E059854A,
	U3CGetSlotAsyncU3Ed__91_SetStateMachine_mC66DC91641CE350292E957C74065BB187424A8EF,
	U3CGetSlotLeaderAsyncU3Ed__93_MoveNext_m93B1E6355EC7EFA958EB328C9140E165DFF56400,
	U3CGetSlotLeaderAsyncU3Ed__93_SetStateMachine_m562AC03AF88983C4B4BA2549BC539B03C42E2A0C,
	U3CGetSlotLeadersAsyncU3Ed__95_MoveNext_mE95B076243894EF4452842531D908113A8F4495F,
	U3CGetSlotLeadersAsyncU3Ed__95_SetStateMachine_m1FEE1B7E1C54412C210F21E2A77ADBB59734D0E2,
	U3CGetSnapshotSlotAsyncU3Ed__81_MoveNext_m971A83DD4E5BB58F4E30BAC5AF66F138764DA563,
	U3CGetSnapshotSlotAsyncU3Ed__81_SetStateMachine_m5298400BAAFBF35A206F0946AB73164A9B6320E3,
	U3CGetStakeActivationAsyncU3Ed__97_MoveNext_m91448D031570AED4F8D28F75ED78DEFEDB00B52F,
	U3CGetStakeActivationAsyncU3Ed__97_SetStateMachine_m891AF9FF8E86036B50E69841CB4F0B2D2E5FB395,
	U3CGetSupplyAsyncU3Ed__99_MoveNext_m25F34F3102EF87622C30B13A6A2F6FABDF32D664,
	U3CGetSupplyAsyncU3Ed__99_SetStateMachine_m811BD303EAED9DC9CA9BBC5EFC0C943437AC357C,
	U3CGetTokenAccountBalanceAsyncU3Ed__101_MoveNext_mD7B586BA20F1A52BE54A52D71F13C8F6CA74FE14,
	U3CGetTokenAccountBalanceAsyncU3Ed__101_SetStateMachine_m19EDD46D57FC1C0A3FB0A35C2B5D3D6E45984A48,
	U3CGetTokenAccountInfoAsyncU3Ed__9_MoveNext_m43784E0CE9BB805471C63AF4A22121C827C6AAA6,
	U3CGetTokenAccountInfoAsyncU3Ed__9_SetStateMachine_m9BA43BFD5D20A73111E43C86DE954C14BE0E208E,
	U3CGetTokenAccountsByDelegateAsyncU3Ed__103_MoveNext_mDEEA11C0EC668229C498418CD65883C7D9BB2405,
	U3CGetTokenAccountsByDelegateAsyncU3Ed__103_SetStateMachine_m7A2DCB4ED5AA9CA52DB0C768C575452C3A60F0EF,
	U3CGetTokenAccountsByOwnerAsyncU3Ed__105_MoveNext_mCCD2253E9E2F01A8C3A107BAFE7648F25F883453,
	U3CGetTokenAccountsByOwnerAsyncU3Ed__105_SetStateMachine_mDFE5C6978DDA26D57988F367AF5D25AFF07DADBC,
	U3CGetTokenLargestAccountsAsyncU3Ed__107_MoveNext_m7723FA4D5BF5626611D94849DAD203E01ACAB7D2,
	U3CGetTokenLargestAccountsAsyncU3Ed__107_SetStateMachine_mA7DC5871EE47CE9E7C02072825FF9B4A49A01270,
	U3CGetTokenMintInfoAsyncU3Ed__7_MoveNext_mB0CA133B363669AAA6D812F41BD826E1D1564627,
	U3CGetTokenMintInfoAsyncU3Ed__7_SetStateMachine_mE12009A75BD318ABF581615DF0F7C7607D30065F,
	U3CGetTokenSupplyAsyncU3Ed__109_MoveNext_mFB9033CCF1135C2C8A6BF6E15D18DFBC1324CB30,
	U3CGetTokenSupplyAsyncU3Ed__109_SetStateMachine_m74420718BFCAFABE70E986AB4EB7308DC67CF382,
	U3CGetTransactionAsyncU3Ed__39_MoveNext_m909B3974F1EDAD2C78A536CD9325033AF60CB0CD,
	U3CGetTransactionAsyncU3Ed__39_SetStateMachine_m028D146CEF9BDB81A6DB19DA1F9ECF919F30CFD0,
	U3CGetTransactionCountAsyncU3Ed__111_MoveNext_mB86E4C231E90F0430A2B4900BFF1627AC2C25EF9,
	U3CGetTransactionCountAsyncU3Ed__111_SetStateMachine_m7FDA46901D98250361B82DA7B3B0FEB4F7B3E770,
	U3CGetVersionAsyncU3Ed__113_MoveNext_mB7E019E3A1EED9010664EDDDD5F514127463F4CA,
	U3CGetVersionAsyncU3Ed__113_SetStateMachine_m465BD30FE8C07CC289B7E8E12076E6FB1B114A9A,
	U3CGetVoteAccountsAsyncU3Ed__115_MoveNext_m3B88ECC334A2896C8F9D14DD13A77D3E40D5ED45,
	U3CGetVoteAccountsAsyncU3Ed__115_SetStateMachine_m07C9A2343DB395D9E76A0237259669A559554665,
	U3CRequestAirdropAsyncU3Ed__119_MoveNext_m05F0111C27937451BF35892DFB8E5E457B38CDDF,
	U3CRequestAirdropAsyncU3Ed__119_SetStateMachine_m88D74D5A424DAD8F3FB06374988AD2D11470AA8F,
	NULL,
	NULL,
	NULL,
	NULL,
	U3CSendTransactionAsyncU3Ed__121_MoveNext_mAE4CE51B900D5F81327DC7E3BC990744E528AA48,
	U3CSendTransactionAsyncU3Ed__121_SetStateMachine_m03FE3FBDCB3C8D4590C087D4CD541BE5A0ECC324,
	U3CSendTransactionAsyncU3Ed__122_MoveNext_mD9DB6D37CCE182A8E180E5D887B34F8202C669DB,
	U3CSendTransactionAsyncU3Ed__122_SetStateMachine_m595047542F3E115C37189E0688421FAE5EF11C59,
	U3CSimulateTransactionAsyncU3Ed__125_MoveNext_mDC75A7A8EF3BDB28C91155B9F68E354E2D527F64,
	U3CSimulateTransactionAsyncU3Ed__125_SetStateMachine_mA797B71798BF8F94F5B3ED23A11222CEFFDB6969,
	U3CSimulateTransactionAsyncU3Ed__126_MoveNext_m0CFDE38809B9FD971206DD76BF1E9EDCE78B9FD4,
	U3CSimulateTransactionAsyncU3Ed__126_SetStateMachine_m38969B4936916C6B5536A490E1E705BF09674167,
	SolanaStreamingRpcClient__ctor_mADE48F62AC2B47EFA95462CB80184C8EA68886CA,
	SolanaStreamingRpcClient_CleanupSubscriptions_m17C1CFECB89B7D013A1AD1711AE1AE41876DFAC5,
	SolanaStreamingRpcClient_HandleNewMessage_mE540FD916B6A616188ED72C34DE4D76C15FAB173,
	SolanaStreamingRpcClient_HandleError_m1D1A3443A3DF374CBC0BEC03C9096B35C3744AB7,
	SolanaStreamingRpcClient_RemoveUnconfirmedSubscription_m83F5790C176437BD52A7210429254CF2D4F7183F,
	SolanaStreamingRpcClient_RemoveSubscription_m82339DE733340C0B1C4D8AFB38A3DD7274C68E96,
	SolanaStreamingRpcClient_ConfirmSubscription_m06138B5555DE8CB2D746C63449D4E43FACC69DCE,
	SolanaStreamingRpcClient_AddSubscription_m9EB23E8F594B6F436FF0516E4D8CBBCD9C02B770,
	SolanaStreamingRpcClient_RetrieveSubscription_mCE797CF24A393058980165489D4424F57E8347B6,
	SolanaStreamingRpcClient_HandleDataMessage_m823029802B9D9419D6C8588598DFA2DFF45BF493,
	SolanaStreamingRpcClient_SubscribeAccountInfoAsync_mA9F5C9B1BF01349DCBC361C4C4C1908CE8CA403E,
	SolanaStreamingRpcClient_SubscribeAccountInfo_m046801EA571FF44ED64B89F9B0ADDD8B5EE07226,
	SolanaStreamingRpcClient_SubscribeTokenAccountAsync_m8AF684A4B99B747D94D0265922B177A5EAF52EF2,
	SolanaStreamingRpcClient_SubscribeTokenAccount_m37FFB5DE19AFCC5DBBB27303627D9EDF022BFB7C,
	SolanaStreamingRpcClient_SubscribeLogInfoAsync_m4EB17B7B91BAA61FDEB96AD970D3C6C456AF892F,
	SolanaStreamingRpcClient_SubscribeLogInfo_m602FD24CB72BB0ADCAB14D4E201A0CA6BD6B1DBD,
	SolanaStreamingRpcClient_SubscribeLogInfoAsync_m5C59FFC9C34EC666AB6657D3755707AE277A92C6,
	SolanaStreamingRpcClient_SubscribeLogInfo_m13FDA7B1AA2E73AE823DBD3338F83C3033C496BA,
	SolanaStreamingRpcClient_SubscribeSignatureAsync_m72DD01DD790A96787426ADCF8AF7908F38A12AC6,
	SolanaStreamingRpcClient_SubscribeSignature_m0EDF6CA3879513DEA7E2BC56896613C9FCDF6F83,
	SolanaStreamingRpcClient_SubscribeProgramAsync_m16E76E48B6079FBC19CE51D5AD27A8E077ABF014,
	SolanaStreamingRpcClient_SubscribeProgram_m6C14E83C42177A980A2AC3F8E282035D0576DB82,
	SolanaStreamingRpcClient_SubscribeSlotInfoAsync_mD725C3DEFCB3D5DC407B5712C9573FED026877D5,
	SolanaStreamingRpcClient_SubscribeSlotInfo_m01B5E3FCE82EA58BFC5EE5D6D9250298F5EC51C6,
	SolanaStreamingRpcClient_SubscribeRootAsync_m54E074927D18C57909A2C0C04875ABBA73D5136E,
	SolanaStreamingRpcClient_SubscribeRoot_mF146F7A31846F1DAFAAA443726AAF3B12C0C1C43,
	SolanaStreamingRpcClient_Subscribe_m41695CFE2F240D43BB99FFB1143B8E0BDA95AA22,
	SolanaStreamingRpcClient_GetUnsubscribeMethodName_mE60F9A310E343292555DB5B00131D80B9D34AEDB,
	SolanaStreamingRpcClient_UnsubscribeAsync_m010D97D6F313A8766B5FB0B10C3A34CA589D8559,
	SolanaStreamingRpcClient_Unsubscribe_m10A7197E622E519986A90B2278B8B080E0E12E2C,
	NULL,
	U3CSubscribeU3Ed__29_MoveNext_m19A74F8BF4EE77CF816F8E816B6E06867176C751,
	U3CSubscribeU3Ed__29_SetStateMachine_m88CC88B3C6D5C8C343D4091BC27B0743745288C8,
	U3CSubscribeAccountInfoAsyncU3Ed__13_MoveNext_mE81C5971A3750466A46FB8CFC0CB368F18BA1122,
	U3CSubscribeAccountInfoAsyncU3Ed__13_SetStateMachine_mC09608BF9D44EA7677528E1C2692E6860C741889,
	U3CSubscribeLogInfoAsyncU3Ed__17_MoveNext_mEEE821833DA66684EAD9C0D8624EA8CF3ADF7570,
	U3CSubscribeLogInfoAsyncU3Ed__17_SetStateMachine_mD3A64E51D44D61D7375E3108FF10B8EDA6317D21,
	U3CSubscribeLogInfoAsyncU3Ed__19_MoveNext_mB3C1BDBFDC09610FB5AFFF068EB1A863ED3A0A4C,
	U3CSubscribeLogInfoAsyncU3Ed__19_SetStateMachine_m4ED24DA7E0A5E71356B1BF07CB17ABEE88DAF12F,
	U3CSubscribeProgramAsyncU3Ed__23_MoveNext_m9629EE5778F56EF8AF992440C9EDD7E4E6BDC184,
	U3CSubscribeProgramAsyncU3Ed__23_SetStateMachine_mD9A4B6DFE69FAD8D9304E677D17E6799DDE6D9E5,
	U3CSubscribeRootAsyncU3Ed__27_MoveNext_m2448A04EF9D140297BEEDCDC19F265715D08BACF,
	U3CSubscribeRootAsyncU3Ed__27_SetStateMachine_m69140B0FF5BFCE9D475E7B53AE1A1BAC87659CE6,
	U3CSubscribeSignatureAsyncU3Ed__21_MoveNext_m58FF5A15210282468617586AEC1BBF42826B7DC2,
	U3CSubscribeSignatureAsyncU3Ed__21_SetStateMachine_m038818C1B3BEB7D99D929198B33173F2E6295A16,
	U3CSubscribeSlotInfoAsyncU3Ed__25_MoveNext_mD6F327BAA3F3389B45F8287177A30656AFBC2E04,
	U3CSubscribeSlotInfoAsyncU3Ed__25_SetStateMachine_mA2A10DD6730558C18A4BE32BB1E66D02C6E5E342,
	U3CSubscribeTokenAccountAsyncU3Ed__15_MoveNext_mAF96E43CD08E88423163E5DFBAD83C4153FC9AD2,
	U3CSubscribeTokenAccountAsyncU3Ed__15_SetStateMachine_m64382CECC589211FD7C507A6E809CC5589AF884D,
	U3CUnsubscribeAsyncU3Ed__31_MoveNext_m93CE65AF724FB6C4C59703BF8F4DC177F356F697,
	U3CUnsubscribeAsyncU3Ed__31_SetStateMachine_m148594523555676BE148B395C58A7E0C30489973,
	NULL,
	NULL,
	RateLimiter__ctor_mB4CE5D99F7D6293EDC6D2C0BD9327200BBD88FC8,
	RateLimiter_Create_m00F7F0735978B160575A0E7D69C3D18B749ED9B4,
	RateLimiter_CanFire_m8364F4383D2CCB3C85074922C6F7B86E8422003F,
	RateLimiter_Fire_m7D0476D90431C27562511F7552587162A574F492,
	RateLimiter_NextFireAllowed_mA8959433FF11212E9CDF098BDC4A322B72AF6DFA,
	RateLimiter_PerSeconds_m4C6491A16B08B003F79DB0A87DB1B0F4EA6CA5B6,
	RateLimiter_PerMs_m645D1CA82345DB80767C0B0C592C71D25ABA3B27,
	RateLimiter_AllowHits_m3E9DAF433DDA40D379DBD371EE2E92833558C580,
	RateLimiter_ToString_m2507DBBBD6EDB2589E44BBB3EA363886921B5D00,
	ShortVectorEncoding_EncodeLength_m8AAD9A24463D3D652645F36575029E2BA53666BF,
	ShortVectorEncoding_DecodeLength_m69682868B81192F5E1DCFABF8A391A255ADC6913,
	BatchRequestException__ctor_mE7DF77DEA73DB0E7D1483274EFD34EDE3D595507,
	ConnectionStats_get_TotalReceivedBytes_mBBB8F89C8441578F33113C7F25C26DAFBC35D588,
	ConnectionStats_set_TotalReceivedBytes_m57DF84CED7544668FF89FEC2FDF4FF05ED6AE290,
	ConnectionStats_get_AverageThroughput10Seconds_m01DC08CE8C46FAD5386549F0C8FAAA3AB3386424,
	ConnectionStats_set_AverageThroughput10Seconds_m4AC5A4776C08BC856B040106EF2CEA43775997D1,
	ConnectionStats_get_AverageThroughput60Seconds_m872B2A25163C429E65614829D8C0BB98602EEBB1,
	ConnectionStats_set_AverageThroughput60Seconds_m9B5DC8E9C5570964C98AE731A4EAAEE83912CCA4,
	ConnectionStats_AddReceived_m912386EBCEB0A8FD9A90C5DA4A2F36A74E250F02,
	ConnectionStats__ctor_m308DB5206094BCEBB1F5C9EACA63E059B8954C4E,
	ConnectionStats_RemoveOutdatedData_m2CDB8B09621FB3B26529B5A26A57DB0F8C81954F,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	TokenAccountInfo_get_Data_m9CAACF7CCC99F324679AB00AE6DEB900BEF182D9,
	TokenAccountInfo_set_Data_mAFAD933C254722A836041DAEE10E1CFC7B2E7FCB,
	TokenAccountInfo__ctor_m64753407F0421FBD32B801D922EBD6736E3FC3CA,
	TokenMintInfo_get_Data_mBEF874EE89EF18FA5E9C18E17F6677F29BEBD447,
	TokenMintInfo_set_Data_mAE76A1AF294860A4675148EAABCDF947EE0989EB,
	TokenMintInfo__ctor_m8AEEA74EAB60ACB64B1C8171D5C5EFF1C03DBF5E,
	TokenMintData_get_Program_mA54FB0D3D88289E02440803D1C1A11DA10255B00,
	TokenMintData_set_Program_m35856EF226ECF5CD09763DE662CD8BFE8F0DCE62,
	TokenMintData_get_Space_m10A60EEA66E0D2C633933E00AC31E08008DCEDB2,
	TokenMintData_set_Space_m5F14708307CC332C233E3579684F54AC95457F1B,
	TokenMintData_get_Parsed_m640C5F63EAF12F3FC44E38B0D4450CD2510D62E8,
	TokenMintData_set_Parsed_m103B876F8C99ED7A9AC8384BAD2120B8807B1FEE,
	TokenMintData__ctor_m3A28DEB120BDF31A61FA5301B1CB28F77589285D,
	ParsedTokenMintData_get_Info_m825D1468F23635485100B12A64DCE2B8E9EA524A,
	ParsedTokenMintData_set_Info_m4D958F3472B380EF5C570774E890A6A121C33BD8,
	ParsedTokenMintData_get_Type_m305FA1C586A41AD46B37361A41DF65C3EF19E47C,
	ParsedTokenMintData_set_Type_m146FBF81AB9E2A35A929F6C87C6D1605F8F29576,
	ParsedTokenMintData__ctor_m6798511E834A0F4E9E3DEEA1114CC1E134FC9CEF,
	TokenMintInfoDetails_get_FreezeAuthority_m0ABC5BC694B7EE3B7DAED12B736958968EF8700C,
	TokenMintInfoDetails_set_FreezeAuthority_mC82253B34EF6CD4FCB04ECDB38BD5D331D8139B0,
	TokenMintInfoDetails_get_MintAuthority_mB688457884C7A292ADF6154106C74951AD680F84,
	TokenMintInfoDetails_set_MintAuthority_m25921E6F310B589CA06D155665281C1BA351D569,
	TokenMintInfoDetails_get_Decimals_mAB8F0B9F32197FEBC348B0CC938387FF348B3608,
	TokenMintInfoDetails_set_Decimals_m410E36DF0B0809C5448AE6C5CC1243879BEEE354,
	TokenMintInfoDetails_get_IsInitialized_mFA104F59164DC861B08BB9378DB22D906386F337,
	TokenMintInfoDetails_set_IsInitialized_mA7890FCF0E0E1C1A035CFF745648F9E48F606436,
	TokenMintInfoDetails_get_Supply_m7E769A75FC1B140A8AAFDC9C7D5C6291BED0200D,
	TokenMintInfoDetails_set_Supply_m28DCC2FC617E53C2D8CCD64E4F462EC28D8517D0,
	TokenMintInfoDetails_get_SupplyUlong_m0C5537E643687C1CB59064FCE6C0F240038C250F,
	TokenMintInfoDetails__ctor_mB4619C1867398ADF1813EDB64DC1922A59DEC616,
	TokenAccountInfoDetails_get_TokenAmount_mCD5AFD1463727A6A85E257470E62C2451F791646,
	TokenAccountInfoDetails_set_TokenAmount_mFC8473AF5E219D616CEA4086B843DC71A5FD38FF,
	TokenAccountInfoDetails_get_Delegate_m5A11B0B8950D5253C1FB8759C6ADBAB651259098,
	TokenAccountInfoDetails_set_Delegate_mE1DF1616C15A413A60D1646E152E2FA0E8BCCCF1,
	TokenAccountInfoDetails_get_DelegatedAmount_m9106CB33E04858FC4C1CD6BA57945C93C9FD80BE,
	TokenAccountInfoDetails_set_DelegatedAmount_mAFCC2D6647B23E6C4A8B74D65448FC4288295F24,
	TokenAccountInfoDetails_get_State_m5FBE310DFC60D4CA2900E16E3FC0F496854281CC,
	TokenAccountInfoDetails_set_State_m1D9D7A1DD9EAF1F452A5E93347D2066C36AE602B,
	TokenAccountInfoDetails_get_IsNative_m8DF68301C8111C340EFB1C990E4DC1988DB1913C,
	TokenAccountInfoDetails_set_IsNative_m49CE80417C5BF8BFB66FA00FC47B998AF1BB444F,
	TokenAccountInfoDetails_get_Mint_m3335A83447115280C56F2061713666864A65C03C,
	TokenAccountInfoDetails_set_Mint_m934620DE1067BD0FDC64846F020640C9B395E105,
	TokenAccountInfoDetails_get_Owner_m98E4D9B72749240E19C29D47868EE59A7230C258,
	TokenAccountInfoDetails_set_Owner_m881D9842D710C585ACB6EEE0ED1B8AA84777FBD4,
	TokenAccountInfoDetails__ctor_mFE19B9F4CC81084E3C61B890F37EBB593E18361E,
	ParsedTokenAccountData_get_Type_mD4449724F7DC4264242F41ACB9156D8D403EAEF5,
	ParsedTokenAccountData_set_Type_m950AE162DCC934094FC9118E73557734A9DF9667,
	ParsedTokenAccountData_get_Info_m9273B73FC72F6CC049D002AD4F5F04649E60F7ED,
	ParsedTokenAccountData_set_Info_m723D7768A1D42894B7A85763EFF4E7181F8225FF,
	ParsedTokenAccountData__ctor_mBC25C97EBC40702D1B0ABEA12D84545B389C35AE,
	TokenAccountData_get_Program_m65A0CC71054CD3AE978A6154643C3D3FEF6D0D98,
	TokenAccountData_set_Program_m4D3D88E6D038AA63E9585C71C99300FA45A831C5,
	TokenAccountData_get_Space_m505300DF3EAD5D709896EC7E360A0FDFEDC36351,
	TokenAccountData_set_Space_mE7EE4DD555AB403E7EF7BAD3C43E30BB4F18DCCF,
	TokenAccountData_get_Parsed_m463EC42E2A007BC0C7112CA190BA8DCBF09D8FCB,
	TokenAccountData_set_Parsed_mDD43E1E771A98F565CCB1F73F7F3FD37C9B7F9AB,
	TokenAccountData__ctor_mFB841BD75A762AF6BC8139F32B490FCF4F9377E7,
	LargeTokenAccount_get_Address_m0C124F38459D888C09EA152CFCE4522411899102,
	LargeTokenAccount_set_Address_m42457FAD94BDC6350306B40F66A82ED81C785895,
	LargeTokenAccount__ctor_m90A199DD60DC716ECF950744947396363F3A9D5E,
	LargeAccount_get_Lamports_mE6087A7F4CC0ED8BD927FF2D866B989FD10FD298,
	LargeAccount_set_Lamports_m7359E2C220559AFE0A0A962C0DF90B6F5294AC38,
	LargeAccount_get_Address_m1016276E7CCF5175B5BF676489AE03D32BFB418F,
	LargeAccount_set_Address_mC45A8B3E4CA7CC06A95DF0A666D51E7081C699EA,
	LargeAccount__ctor_m40F588F5EEDDC06E11BAEB272D9538C2583EFC18,
	TokenBalance_get_Amount_m64875C0B09F007DE409E1F0DB64C4DD342AA7416,
	TokenBalance_set_Amount_m2B2E69A79B7E67FA72296DAE2651A41B3A16D200,
	TokenBalance_get_Decimals_m256A81CD453B7FE928625C52A92840FF4F2C1616,
	TokenBalance_set_Decimals_m6BCFE16CD54B6DD6BA16D41FA4E86B76D9500623,
	TokenBalance_get_UiAmount_mD2E09E86F604961A2488A10BB85DCE80CAB6A595,
	TokenBalance_set_UiAmount_mCE0CFE47694520411C590EAE85E581B5747C02EE,
	TokenBalance_get_UiAmountString_m78EA0A9825970F2EC6322E948F8ECE5C014586A4,
	TokenBalance_set_UiAmountString_mB80C0F99F3D3A815016D528E8B1B71010235E9D2,
	TokenBalance_get_AmountUlong_mE18DA694712240D74636A085D6210983E2377CDF,
	TokenBalance_get_AmountDecimal_m35DD24905951567450E582DC78779D0868DB705F,
	TokenBalance_get_AmountDouble_m529B7F480992AF680F946BD1EBF3B7A9981B6714,
	TokenBalance__ctor_mA4AFFCA5EE73CD343329161D56D93BB81CFD756A,
	AccountInfoBase_get_Lamports_m7A93911FFB8740125E0A8162776621CED052546D,
	AccountInfoBase_set_Lamports_m8AFDBF6B1FADA7311FC8AA9FB17D68633E96EA43,
	AccountInfoBase_get_Owner_mFF8037330E76EE2839DE5B6355CA14D619D9547A,
	AccountInfoBase_set_Owner_mCE2F981AD4BFDC7495683A5A91A8E80033C308F3,
	AccountInfoBase_get_Executable_mDEB3ACCFEEFAA5076C42F0AFC9B3156A33EF5F13,
	AccountInfoBase_set_Executable_m7E7AAAE7357ECE8599C1445DE9A5BEC2D7C0A54A,
	AccountInfoBase_get_RentEpoch_m8141A80D6C25B5F0A78E30F9B0930CBFB9C4459B,
	AccountInfoBase_set_RentEpoch_m02C5950BDE6F920CB1C22F091514870249A1119E,
	AccountInfoBase__ctor_mDDB05E93EEE6D5D961C216B201549EC4F728731B,
	AccountInfo_get_Data_mD10117914E4AB951B8D8F9211496B9EB2DACD646,
	AccountInfo_set_Data_m3238746B103BE0B26E3194E8BDF9ECA81E5403F1,
	AccountInfo__ctor_m9CBE5CA73E076863145B38932B244682B61DC057,
	AccountKeyPair_get_Account_m1953E7F21E2813875D1B5088D80206F6BA7685B0,
	AccountKeyPair_set_Account_m4460C451432A0760A397963D5183DF9F51F3BB4E,
	AccountKeyPair_get_PublicKey_m339EFDACB82C95204D2F142EFF64DE6B46463DC4,
	AccountKeyPair_set_PublicKey_mEE41909414BAA954D6F094E2401369563DD9737D,
	AccountKeyPair__ctor_m6F5DADF4C5AFABE5D5FA96373F59B8CA9C29D22B,
	AccountKeysList_get_AccountList_mB95B1371D0B9212B7A7FADC5380543D5033C8AB8,
	AccountKeysList__ctor_mF70FCFDDA86A39D3447259D831937BA248FE4C4F,
	AccountKeysList_Add_m76B826D41DCF6757308B88DD3896D559465BA24A,
	AccountKeysList_Add_m4F641419CFAC9FA133838D82F9B53F60D8F0B7A5,
	U3CU3Ec__DisplayClass4_0__ctor_mC163475D1E70992BA057E36C3B85C1855B71DCA7,
	U3CU3Ec__DisplayClass4_0_U3CAddU3Eb__0_m9ECC0E55D08A4F1BAA1C5E3E154D4910617A6745,
	AccountMeta_get_PublicKeyBytes_m8C1D88105ECCB2809E699E3D3E1DDE889CF59684,
	AccountMeta_get_PublicKey_mFC96C51156F0A89D687F8500675BF2E411EA298D,
	AccountMeta_get_IsSigner_m50BB21AB231FF91B3AD6C0D2EC1D80077CA96EE7,
	AccountMeta_set_IsSigner_m7CD2EDFA63A78DAE729A3BDF69612BC1D36A653C,
	AccountMeta_get_IsWritable_mAF90D23D6710E13A2D432ECE781C6C3852CA133A,
	AccountMeta_set_IsWritable_m6F47E0FBFC262C651FF2178072758DA4D37A3B94,
	AccountMeta__ctor_m47EE626C622F33C48061046D378D238612E60034,
	AccountMeta_Writable_mAD682B881063D73C1ACD89BB71BAB7974E5C8AE5,
	AccountMeta_ReadOnly_m26D13CA31D86D71BC92CE39122BB120AF24D18F1,
	BlockInfo_get_BlockTime_m227EC345103A3EA445963484023900C2C93B88F3,
	BlockInfo_set_BlockTime_m787B2675E5E0FD765F90CB21AAA022BFFB2B78E3,
	BlockInfo_get_Blockhash_m0FBA00D022F0B0E9228E3ECCF33C355F1F5E5A89,
	BlockInfo_set_Blockhash_m2DE12C328CA9CE309ACAB1F5EE9D5B0099F899DE,
	BlockInfo_get_PreviousBlockhash_mAF8C0EF36674B52C9BEB22E0C6D49BEBEC4FE1F2,
	BlockInfo_set_PreviousBlockhash_m42EAB71B9D3CD73921913364DC4B49E4F2AA8C11,
	BlockInfo_get_ParentSlot_mD9F6937F2ED3DD112EDB9E01671D09DA2C2B3691,
	BlockInfo_set_ParentSlot_m68A567666E002129F5F2BC3E337CABBC19D6CEE3,
	BlockInfo_get_BlockHeight_m9F9C17EA114B524874DD49669EFAB8D09535765F,
	BlockInfo_set_BlockHeight_m4733E25CEF41115B4243819F35F0DFA2CA1C3537,
	BlockInfo_get_Rewards_m4AA61AAC8636DB1FB77555681697CED6BE6CD24C,
	BlockInfo_set_Rewards_m64578AD24D8BFA7764FE37A4D9360FBC34A71CD6,
	BlockInfo_get_Transactions_mD39CF0FE408C11323B65D7B948205B4D572F02A9,
	BlockInfo_set_Transactions_mA720A54A0CFF5DF15C9613B32A9104110A178057,
	BlockInfo__ctor_m4BC85E57A2CD16C7A14E586C299C330E9545558B,
	TransactionMetaSlotInfo_get_Slot_mC1A3E3FD6B99CF7C96A03EEB8B8746F35EA8F1BF,
	TransactionMetaSlotInfo_set_Slot_m58AB75F27515758BD5C2381BEA2B30A9E00C2A61,
	TransactionMetaSlotInfo_get_BlockTime_m0994D38905C1C268BD0903B1EB3355A0D852B92F,
	TransactionMetaSlotInfo_set_BlockTime_m75B678E02EA95C20E3C55816901CB8F307234788,
	TransactionMetaSlotInfo__ctor_m9AC8E5C4C848240FCF61BD2B24B9224DFD76CAD5,
	TransactionMetaInfo_get_Transaction_m097BD010797D8E502C4A6C117761CF3B4A173427,
	TransactionMetaInfo_set_Transaction_m8F5D98AA339AED87D4966D6BC438DE5CB594F2B4,
	TransactionMetaInfo_get_Meta_mCD16410E48911D30CD0ACA14108B17948F32D493,
	TransactionMetaInfo_set_Meta_m581207D6E445632CF00C4BA34A98A18E1764E8BA,
	TransactionMetaInfo__ctor_m377252F68C02105CA8743AB75DB0CAE0C534AB97,
	RewardInfo_get_Pubkey_m69A367D52BD6E6B0DEF77E8080D19B1BF7E598E4,
	RewardInfo_set_Pubkey_m598408C79F89A30C7D7526839A5657A91B50A1E1,
	RewardInfo_get_Lamports_m2F08BB274DF1A0EA72A94BE245F96EB6F4358EF7,
	RewardInfo_set_Lamports_m9415BC7244F5CAC1C9A08A25DAAE141C19402148,
	RewardInfo_get_PostBalance_m1E1513A90354D6DE19FA6AEDD294F4F8666F5493,
	RewardInfo_set_PostBalance_m17ACA2A8F9D6114E6630B7455C1C074F5170EB53,
	RewardInfo_get_RewardType_m789044054B79F43A51F24E948B185708FFD7A96A,
	RewardInfo_set_RewardType_m47F63B1DAB1720C4CE407B23026AF5E8A8ACDA04,
	RewardInfo__ctor_mF4134DC311E094B2EA8562B4137C5641967AC601,
	TransactionInfo_get_Signatures_m59A472C2994A5255349B24728CA2853BB3E85401,
	TransactionInfo_set_Signatures_m13B9EEBEFB5FC72771BFBD705C8E8976F4837EAC,
	TransactionInfo_get_Message_m79158B4AD83CB1E0DCCD709DCA98EF029A73DD77,
	TransactionInfo_set_Message_m97D14DDCC1988AC4A4C25F8210DA970D25B4E3E0,
	TransactionInfo__ctor_mFDD7D2011D974073B5BA33DAF03A20232BF9CF6A,
	TransactionContentInfo_get_AccountKeys_m588D416B82E5F96D5A8C9E725AAAD2BB94CC2255,
	TransactionContentInfo_set_AccountKeys_m4B9E59503CE6AA8D209E941B299295F950DBC5E4,
	TransactionContentInfo_get_Header_mFF783622D8DE65F4BB921B03917177A16C8E818D,
	TransactionContentInfo_set_Header_m77F081F239EC16BDCB17B96A3FBBCF4F2D060FE5,
	TransactionContentInfo_get_RecentBlockhash_m7BC8D2DDAC875D662D8CA07F27D71B65EEBD7530,
	TransactionContentInfo_set_RecentBlockhash_mFD1B62AEB2A6346E2E6780F7CAFDFC577C4DACCB,
	TransactionContentInfo_get_Instructions_m25AC62ADDC5C7A3006AB18DD8744BFB9A3CE5BA3,
	TransactionContentInfo_set_Instructions_m0FE0853433B365F8702158E4AEC437BD43D5705C,
	TransactionContentInfo__ctor_mFBF3F47A28B2508D08A74280E9306F4914B5516B,
	TransactionHeaderInfo_get_NumRequiredSignatures_m6A69517C50BC8C648A0B791B1655F78A5EC9AF77,
	TransactionHeaderInfo_set_NumRequiredSignatures_m75988784B1D0A8DFDE61E460877387E88D05B64E,
	TransactionHeaderInfo_get_NumReadonlySignedAccounts_m32F5F079B918EBD2AC34C632D7401D19EE48A831,
	TransactionHeaderInfo_set_NumReadonlySignedAccounts_m4C96C609EE7C98155273FDE9DB96DE82CEC33529,
	TransactionHeaderInfo_get_NumReadonlyUnsignedAccounts_m25EAFC6E517BBC8141A6C04BF74C9666E931234A,
	TransactionHeaderInfo_set_NumReadonlyUnsignedAccounts_mF425FE23F77D5322B9DCB80FE421A09ECFEFE435,
	TransactionHeaderInfo__ctor_m4EB8708D9E5B21CA74DA8E5BC26792C1008A2664,
	TransactionMeta_get_Error_m9B7574438BB243C13AFDEB6713E5C952688E1D4B,
	TransactionMeta_set_Error_m3E20F2D5A52C8F6ACFB223B6E41785BD38E60BF9,
	TransactionMeta_get_Fee_m186448596B4B9B329AD4079FA2FF6DBF5F5BCF6D,
	TransactionMeta_set_Fee_m452E09E92047024031FA9E7135E6D48BFDCC88C1,
	TransactionMeta_get_PreBalances_mC6BFC8CF7F1BEBA2541705A03815F4504524BDF7,
	TransactionMeta_set_PreBalances_mCCB9D699775E96985E126AA28B14FEBF3B5887A1,
	TransactionMeta_get_PostBalances_mA3BDBA8B592772FA153C062858AB34B9F7E6F37C,
	TransactionMeta_set_PostBalances_m9ADB4277C932555985BC19CAA21BF2957540A64F,
	TransactionMeta_get_InnerInstructions_mA488AB7DD0F2EB16D806E1285D65D87F2762111A,
	TransactionMeta_set_InnerInstructions_m13AD4977906D778168C34BFF2502FF4A768F04BD,
	TransactionMeta_get_PreTokenBalances_m06266D19FCC0082F6B19AFB97E6A27B4736633FE,
	TransactionMeta_set_PreTokenBalances_mC29A275D7ECC89EC3EF5F549285E17E71EFE82E8,
	TransactionMeta_get_PostTokenBalances_m3F751A033935C64BE8A907CCA4D481F4ED38DB53,
	TransactionMeta_set_PostTokenBalances_m6907BB3B1469FDB209014B329DEC905736AECC1C,
	TransactionMeta_get_LogMessages_m2F2BBA7B3BA1207B2708B0AFA3AE3201DCD6C99E,
	TransactionMeta_set_LogMessages_m7A4D8157CB0D67F803390432AD0D2491F734CA1D,
	TransactionMeta__ctor_m09490BEE5C0338572DBB7FBDC00FC8431DC62B9D,
	TokenBalanceInfo_get_AccountIndex_mD6692B3B8CA6A222FABD1581D6B315EBF0A6D4FF,
	TokenBalanceInfo_set_AccountIndex_m2B5218491C171922C6C17880F4F00C5622D67465,
	TokenBalanceInfo_get_Mint_m4DE4EE9D2C9A6DD81DA15EA38CAB8D1C23117C77,
	TokenBalanceInfo_set_Mint_m32AA280017148A533A5E4E43CEAEF6B102009F55,
	TokenBalanceInfo_get_UiTokenAmount_mE6FF1528BC8172EB95F0BD7729EE6FA468A4E35E,
	TokenBalanceInfo_set_UiTokenAmount_mFFC971958138D549B1F00C02250AB2E6BC066760,
	TokenBalanceInfo__ctor_m0A3751481513A52C0563E453D13E7BA16BA1F3F5,
	InnerInstruction_get_Index_mEBDEB2BB35B43B0586CC12FA125F412404E84472,
	InnerInstruction_set_Index_mA86E09B94E7CA1F3FF5E30060F87A66E0FE6334C,
	InnerInstruction_get_Instructions_m9092845CEBACEE55D347CA8EA7E84171FA7781F1,
	InnerInstruction_set_Instructions_m36A8AB2C21F8428387C1E192FBE15245F083D51C,
	InnerInstruction__ctor_mAF1567DC5877EE87B3FF8D1BE13FC2E8A761251C,
	InstructionInfo_get_ProgramIdIndex_m820F60B65CD911E37163B674D80428024F200169,
	InstructionInfo_set_ProgramIdIndex_mFCEAB8B07A604AB547457D61762C5117DD408E7D,
	InstructionInfo_get_Accounts_mB51A5FB5E64658DD7ECAEC4D8D2C4A00BFF055D2,
	InstructionInfo_set_Accounts_m0A92408C8FD359AE1CEACEDA4B8A3B4AB6952F27,
	InstructionInfo_get_Data_m8C210FAB85D541E5DF51F2C4965999BE405C24ED,
	InstructionInfo_set_Data_m86F6E3353D34656E33ADE83EB331C9BDCA770F11,
	InstructionInfo__ctor_m4DF8E12F13430661371DD394BC818C0A66E4F7BA,
	BlockCommitment_get_Commitment_m9EC2B01F24FEA3ED77E110346F7C7055438ACEE0,
	BlockCommitment_set_Commitment_mBC306A4BA95E9050859C82A520FF6DF326B92915,
	BlockCommitment_get_TotalStake_mC291FE10995CEF8E45EA17405402EB53F32514E8,
	BlockCommitment_set_TotalStake_m671B47C4DC1AB419F50BCC9D474A2F0F93519C9F,
	BlockCommitment__ctor_m12CBDB72EF7D013610A15268DF26A566AA43998D,
	FeeCalculator_get_LamportsPerSignature_mC1FD3F8399992814DE532BC7064CA52911C8178E,
	FeeCalculator_set_LamportsPerSignature_m064E6C2F5E7C2DBA088B2A9CDCFAC98D446BB1DC,
	FeeCalculator__ctor_m4F66E4A8BB92DC1FD3234FA99A946D09B7382B0E,
	FeeCalculatorInfo_get_FeeCalculator_m9D4D1EB10E033CBA8C14642F5E90CE3BB7AE9870,
	FeeCalculatorInfo_set_FeeCalculator_m6B80099A505DE2ED6C93C0FE73B2EABEF0A96295,
	FeeCalculatorInfo__ctor_m7C1D8B7138C9912F3A41CCBC2F3A8EB781BE9B91,
	BlockHash_get_Blockhash_mB1D4C6DF7405E35706409EE52969F9842884AE54,
	BlockHash_set_Blockhash_m50DA9AFF362369F66773AFB28FA24A5991886CA2,
	BlockHash_get_FeeCalculator_m51C7C23C09ADE4924ABE3BA8A050058C8DB5B9D8,
	BlockHash_set_FeeCalculator_m0CB008D50DFAD86C08226355FECC0C56543465FD,
	BlockHash__ctor_m8FFA015DBB4BC87692C63155B00E876A87C42A95,
	BlockProductionInfo_get_ByIdentity_mE1AABED30B82F277B01903B894296DA265E94992,
	BlockProductionInfo_set_ByIdentity_m3D3826FC831BE8A1E5636C55D1A06307E0BC8A6E,
	BlockProductionInfo_get_Range_m0635F09BE4DACB42E6B5D32CE8CE8A00EDA6C612,
	BlockProductionInfo_set_Range_m392D427A2568A1CDA88F0CA647780A76A5463B81,
	BlockProductionInfo__ctor_m8AE0CF4505112AC11CEC5E5D7891EC1627CDC38D,
	SlotRange_get_FirstSlot_m3C744951BF5F55173BCE7E670414435C71E1EC6A,
	SlotRange_set_FirstSlot_mE027729ED22E1940E6BC9D6E70069607430254AF,
	SlotRange_get_LastSlot_m0C4A5F6F6C473A1CE57D5F1D4BD1937840940C30,
	SlotRange_set_LastSlot_mFC5926BF9EC7A622A9380BCC9A7D918770DB06E9,
	SlotRange__ctor_mCD6601762657567212E08F593FE481670BD92AA9,
	ClusterNode_get_Gossip_m2F2AB40F78A227CC1231F7163CF7AE6D070BC15C,
	ClusterNode_set_Gossip_mB9E2619E6819D3098621A4688BCC07AED89D9265,
	ClusterNode_get_PublicKey_m519F48C7F2642B0A90A8D9C995B6CFD970211C30,
	ClusterNode_set_PublicKey_m631280E0F78D3174435E669B70826F057F1D6DD5,
	ClusterNode_get_Rpc_mC1C3BDE9B754ABFBBF0B9472DCB38D9C27FAB554,
	ClusterNode_set_Rpc_mF2074E50335982720AE090F711F2090662A52E2A,
	ClusterNode_get_Tpu_m26D20536439D2630FAF5B31247A931EFD9A42A83,
	ClusterNode_set_Tpu_mC6D516005301E2D41D6DBD46AC076C790E5D55A4,
	ClusterNode_get_Version_mE0405318C2D6E7650F4AD68619CD20DBA13A0C33,
	ClusterNode_set_Version_mA792CC7C584D2509C05B9F10499BED651EE4A3D7,
	ClusterNode_get_FeatureSet_m7DDC01C5819BC0C538634A6F7E7F8CAA0961C533,
	ClusterNode_set_FeatureSet_mEBB051E2CAF27FAF3328901C6CEC6B587E641726,
	ClusterNode_get_ShredVersion_mBC9B5C31206B275C407CBC8EE26C2FB19A968557,
	ClusterNode_set_ShredVersion_mB14BCF21009C31C20FA31D74AD76A4683AAA13B6,
	ClusterNode__ctor_m2BC9822D99F04991A6CCA1894FB172AB1906D754,
	EpochInfo_get_AbsoluteSlot_m7EDC3B865554C33AF38526D58C0BA3192BB6D786,
	EpochInfo_set_AbsoluteSlot_mAB4632B51FEE88BB61D24A7F699E8EBA5ABA231F,
	EpochInfo_get_BlockHeight_m78E1F86C000EBD43662B0AA94CEAAFD9B9060648,
	EpochInfo_set_BlockHeight_m7F7E87E574375AF67DAB2E7413CE4ED2725A19DD,
	EpochInfo_get_Epoch_mD949F237B86D4CB7565351F9444053B758133882,
	EpochInfo_set_Epoch_m8E6F99E93A029725B2AFE6C0C19D7A938BC3E13D,
	EpochInfo_get_SlotIndex_mD89A1D937220F80850FBAF4FE25C90695A5ED4EC,
	EpochInfo_set_SlotIndex_m1F3643DE1839FD069D093809300D679FC7EF1F0F,
	EpochInfo_get_SlotsInEpoch_m7F00083145115F94FFCCE7891B54345D207CC2F2,
	EpochInfo_set_SlotsInEpoch_m78042450758B7AABE219701DC377018A968FF255,
	EpochInfo__ctor_mDD9CD0042ACED44C06C4CB64CD0904D97DA9D62E,
	EpochScheduleInfo_get_SlotsPerEpoch_mC79D5E1C5CF42E78CE3478D33D45B7A7AED79A78,
	EpochScheduleInfo_set_SlotsPerEpoch_mE9203E6C4460D9E694DDD06900ED1DC93BAC3565,
	EpochScheduleInfo_get_LeaderScheduleSlotOffset_m8AEBA3F6D5CB4147FBC2F2BA7C82DA3F38D8F5F6,
	EpochScheduleInfo_set_LeaderScheduleSlotOffset_m86D4D0544B1FFC8FC8E192390CB468C9F805099D,
	EpochScheduleInfo_get_FirstNormalEpoch_m622C9421A50FC3BA6C9B8FA12DC37C4E0A6991C8,
	EpochScheduleInfo_set_FirstNormalEpoch_m2A3AE78BB628BF3C715D9807276B1AACA25F7305,
	EpochScheduleInfo_get_FirstNormalSlot_mD9AA0B11C2EEDFB60672617CE21580AF5A2540A1,
	EpochScheduleInfo_set_FirstNormalSlot_mE03E8FE2D50F6288233B675B751D7B2CB4567FE8,
	EpochScheduleInfo_get_Warmup_m81682215C63B1D03D031ED4580A2B1431D833CB9,
	EpochScheduleInfo_set_Warmup_mBEAB8931CA194A51FE0D2E7A1BAD421DD9072027,
	EpochScheduleInfo__ctor_m16366408A2CFBE0E92F11A88B326AA0D5FB61865,
	ErrorResult_get_Error_mB20E45706787DC0C26CFEAC69F579745B42308C2,
	ErrorResult_set_Error_mF7479B9AA015B5FFEBD7CD5A3CAC524713CAF045,
	ErrorResult__ctor_m1172FE1A15B53A5054747C480C6A68716969CA21,
	FeeRateGovernor_get_BurnPercent_m0EED8B49EB8906E913D1A73836B80939A0250D02,
	FeeRateGovernor_set_BurnPercent_m3623F53047680EB021361901D99A86BD57B30460,
	FeeRateGovernor_get_MaxLamportsPerSignature_mFB1B001DB959844A3CF10899E5428A02EF719ACE,
	FeeRateGovernor_set_MaxLamportsPerSignature_m6C6B76447A63EF25D94E6DBEB7D587F5CA5D4546,
	FeeRateGovernor_get_MinLamportsPerSignature_m66A1E94F7630A0AA6A6813390EE8152001E653C7,
	FeeRateGovernor_set_MinLamportsPerSignature_m05F8187C5491DB6929B86D082D9B2D94D6FF3B5F,
	FeeRateGovernor_get_TargetLamportsPerSignature_mF1A3EE118C153A2F63CA420167800C1D45D52B0B,
	FeeRateGovernor_set_TargetLamportsPerSignature_m56CE6030259878748C955E9014BA21EA31827C6D,
	FeeRateGovernor_get_TargetSignaturesPerSlot_mDE411C06C8D282D15AE88536CF93FFCC5A4FA00A,
	FeeRateGovernor_set_TargetSignaturesPerSlot_m0BA2B9130F1792DCDB834E010CCF83183CE44AB3,
	FeeRateGovernor__ctor_mDA58FBB59B1170D8FA680E11641A0829E4F5E164,
	FeeRateGovernorInfo_get_FeeRateGovernor_mF9613F8EB216075579375A26011201214C64D791,
	FeeRateGovernorInfo_set_FeeRateGovernor_m8DC785629D012E7A5C6333C50B6998813793D0A4,
	FeeRateGovernorInfo__ctor_mD63B43B05F05457254D5F19E32EDCA202400B1C9,
	FeesInfo_get_Blockhash_m469220E351011026C7257F9D945BAA5B62989ACD,
	FeesInfo_set_Blockhash_mB93ADB9709DBF9B0C5A648BA43B1D5658E62DE04,
	FeesInfo_get_FeeCalculator_m1A4CC5CCC1D2D14C73DCAAE169E53A7B829224B2,
	FeesInfo_set_FeeCalculator_m960390175661F891D171272DCCC94429324ABCE6,
	FeesInfo_get_LastValidSlot_m4AA1CEA9480E06A691096627CFFEEAC90C1F2483,
	FeesInfo_set_LastValidSlot_m647A5C9DD1FE7C1F93E60F42C2B77173F9AEA9E7,
	FeesInfo_get_LastValidBlockHeight_m2F70E7BB96884AFF930BBF0A2366BBC824E735AE,
	FeesInfo_set_LastValidBlockHeight_m4BCC621EBA4F433168D0076118BB8D644C87CFEC,
	FeesInfo__ctor_mFB2B712C24B6339C6CDF4FAE0B12D59D47222142,
	MemCmp_get_Offset_m8C6898CE5F90F46288BAE54654D3B9844686FA64,
	MemCmp_set_Offset_mCB83B81A3939A37B8DF0EFD827F906F7814E4ECC,
	MemCmp_get_Bytes_m8A9AF8A0F35EA92D1030583DB84553A241FD5CCC,
	MemCmp_set_Bytes_mCDC0CAE1E02E4847F4BD1155280B968EA5E4E550,
	MemCmp__ctor_m57991249C7DB05E5D8154A984009A688B1D8DE6B,
	NodeIdentity_get_Identity_m9A663E9055FEF35A47C1C190217AD572EC1958C9,
	NodeIdentity_set_Identity_m435947E3F1CAADA40FE7035241B51376CE6940A1,
	NodeIdentity__ctor_m21686784F432453C9A643E8D5DB8DBB5F9633837,
	InflationGovernor_get_Initial_m4BAD3DA5DB9B2EF800822B6F705BAE275989EBBD,
	InflationGovernor_set_Initial_mB26F51C7383DA2AB73C9C976FC4601C8DD12B385,
	InflationGovernor_get_Terminal_mDE4BA4A295CC429A4900ABB966F75628ADA851B5,
	InflationGovernor_set_Terminal_mDBDA06C063B8C3C754FB975732C6CD88B47D77CB,
	InflationGovernor_get_Taper_mFA0087E54B86C8A98A8CEAB9DAE522677AC8C829,
	InflationGovernor_set_Taper_m59A7C76EA4AADCD73248B812A6CC9FE7C092358A,
	InflationGovernor_get_Foundation_m7FD796D780D9B4CBC801F9A056232835CB7AE8AA,
	InflationGovernor_set_Foundation_mA569D4EB165544DC7BB29B0E624257ABBA1B7D08,
	InflationGovernor_get_FoundationTerm_m5B62F76CE0308890317BB2FC1BA8893723933638,
	InflationGovernor_set_FoundationTerm_mBD908315D6A6AC6A9C777D112D3E2EF4D3B6D827,
	InflationGovernor__ctor_m5CFB5FEF4A775E2D0055691108920EC8195474CE,
	InflationRate_get_Epoch_m0F6CF185D933D7A3C2E0781BD5A53DDF6A29928E,
	InflationRate_set_Epoch_m5F4E0A504CB85549339DA5284E0160053D560DEE,
	InflationRate_get_Foundation_m8991F185A79E508BC07EB87776CB097FC463A44A,
	InflationRate_set_Foundation_m05EEE37DE65A560CB406D0096B4F30B7A476B31B,
	InflationRate_get_Total_mE90620CCFC3AE9F0410C57AEA92461D2404B19CB,
	InflationRate_set_Total_m1A665C9B65633001ED37458EDBD7B28818060C44,
	InflationRate_get_Validator_m5FC6F88B8EDCC4F50A2A22122E106586826525DE,
	InflationRate_set_Validator_m750DB18787C63A25CA458DBBE126A60E6288E45E,
	InflationRate__ctor_mFE7C3B3D2992A9A32AF903BF42986FAA2379C882,
	InflationReward_get_Epoch_m6472C8C40271176C16343B8CC447BCE37A2AC6CC,
	InflationReward_set_Epoch_m2BD10B604F2ECCFBF49D993A2076F8CF0DB482E3,
	InflationReward_get_EffectiveSlot_m71904D8E5F8696859ECA0A304041E27493128006,
	InflationReward_set_EffectiveSlot_m4A069AA0F3245E826C2B02983A5DB645B741CD04,
	InflationReward_get_Amount_m10C89B12DD0D3F90CA73E540274119C2A4B21BD3,
	InflationReward_set_Amount_mBE725320FCE723F44A480FC6C62CE30F3C5430CA,
	InflationReward_get_PostBalance_mD23094FCF37E4549654D27DF44A0EE253ACB9185,
	InflationReward_set_PostBalance_mCDC7BC57EEBBFA25A948CC65819C9283F975DF7E,
	InflationReward__ctor_mB0D941C7F324A96E1ED773FA1DA2A588EC077376,
	InstructionError_get_InstructionIndex_m5EFB67ED2FC2E0BCB2D2DD67DA9AD400669A460A,
	InstructionError_set_InstructionIndex_mDD1291F9C5B1EAFAB7CDAFAF7F39C169218049D1,
	InstructionError_get_Type_mC2A2289E7FCB80A789B28D9A26E4204BF4E12580,
	InstructionError_set_Type_mB754FCF74F33FF8BCAB2882CD3BEC01CEB211CC5,
	InstructionError_get_CustomError_m40295812898DF5B7DCECFFDA079609C731015DC0,
	InstructionError_set_CustomError_m51AF981BA969BD682B0DAEF60DF28FA700C3975D,
	InstructionError_get_BorshIoError_m55EC33305B57E305927B5FF7F67686984D9C3DB4,
	InstructionError_set_BorshIoError_mA8594D52B1F661D0DBF7303374CAD7C64896053E,
	InstructionError__ctor_mE86A1D8205C20F25F73E3447F994AA384E680F41,
	Log_get_Error_mA8428BA06305A0163A5885E643B37A92CE8A86E4,
	Log_set_Error_mC9F3A133DBF61C76B62F249C937918DBE57FD185,
	Log_get_Logs_m0E5BAE67B434A249EACB2F9C3DBB0EBA716C6C21,
	Log_set_Logs_m21A53701F93EEEB9F29C11B5034B1B8E12405010,
	Log__ctor_m5EE4882648C9CF0EFD63933EB477FD44C3DDC661,
	LogInfo_get_Signature_m282D918CD3805500731EF1AB79DC3F8E1B5F329F,
	LogInfo_set_Signature_m221439DAD5B162482E613838D901FB56ACCFE2A7,
	LogInfo__ctor_mB534E3B1804C2B0ED1FD65A9A3F7F1AF2FBB8F86,
	SimulationLogs_get_Accounts_mB2D5346E4055CBCC43F114E0CAE9FAD5B8333555,
	SimulationLogs_set_Accounts_m42C92B16EB75E115B627D278FDA4995D460F03A6,
	SimulationLogs_get_Error_m3F9FA3148E23D94EBE9381A28ECB0B0BA0E9D4B9,
	SimulationLogs_set_Error_mA8F296CE916985761C0D724D7E416CF64127A2AC,
	SimulationLogs_get_Logs_mF702C920B248E6656B8470C01A0D36595DB4B0C7,
	SimulationLogs_set_Logs_m4A8B1E0E99BCAA64E0219033B71ECAE62B658952,
	SimulationLogs__ctor_mB2E7C22172270BBD21FB4F2DF86F28341762973F,
	ErrorData_get_UnitsConsumed_m2FBD9C79B33BCEA44192887D635F208FA0B8CE68,
	ErrorData_set_UnitsConsumed_m608F80AFAFE99DE022716AC272D2AA466541C35A,
	ErrorData__ctor_m74616011BB48A3A68FC844A9FEC5B6428D4B2784,
	MessageHeader_get_RequiredSignatures_m3C77B77CD11336FC68C05D1DD67FC8C1E68C63EE,
	MessageHeader_set_RequiredSignatures_mFECD9873EFDE944B95AA0993867EAF0C97A78A04,
	MessageHeader_get_ReadOnlySignedAccounts_mEEC326CFE1A9B711A8C92DCD3068B47E36A4FA57,
	MessageHeader_set_ReadOnlySignedAccounts_mC22DB7647B3E5AF9CE46A6CE4BA261AED7F5DD21,
	MessageHeader_get_ReadOnlyUnsignedAccounts_m52CAF5D75F20EDEC819A86C1C1B277FA61B6FF9A,
	MessageHeader_set_ReadOnlyUnsignedAccounts_m205AFD91711E42A7200C0CF45C27C7E5AFB13F4A,
	MessageHeader_ToBytes_m03375E5280260E633DA064FF836ACD4F1881985B,
	MessageHeader__ctor_m1B784A4C5BCAD2205A4B3CB608C99430D20D99B3,
	Message_get_Header_m8B3CB58DE35F964301F1405FB24285FE91CB33C0,
	Message_set_Header_mFF10513C46586AD10BB451CAD06FF6FC8D54483F,
	Message_get_AccountKeys_mA54601D25C2E379ECE833089A96026A7AFF910AE,
	Message_set_AccountKeys_mD6F317B3A3FAC31A407AB699F5EBB84038A08CD5,
	Message_get_Instructions_m1B7AD3A350614D71DBF11A6B4180AC9BB01AA0D0,
	Message_set_Instructions_mE1EB7428D6DED6DC7CE3A721A42785E8117E6BA0,
	Message_get_RecentBlockhash_m3E9CAE6C709D1551650E900A476F2F9F7857414B,
	Message_set_RecentBlockhash_m14C1D2BEF3A93BED84D3F3D237967EE63BF9795C,
	Message_IsAccountWritable_mDE3740CDAED7874C775EDC04E38B630FD79A7276,
	Message_IsAccountSigner_mB885EA6408660BA3D386534D385BD4FFBEE10E08,
	Message_Serialize_mC6E6D0C5B8C54CE6E844802E43B267698D09F8BC,
	Message_Deserialize_m76ADCE69A212502C8C189EB192D08B6E9E008C91,
	Message_Deserialize_m4B3AE7CEC497D8F294298CD22B40547DBB667430,
	Message__ctor_m8F62C603416EC6B6F5F3626A730C4B62C244A705,
	PerformanceSample_get_Slot_m6C879D1EB47F162E48ADF23A426AE8450F3DABBB,
	PerformanceSample_set_Slot_m0F70FE933D732FCAB0F2D703FC8D07A70EC175CA,
	PerformanceSample_get_NumTransactions_m2E5C4FD41413954D9482FFA479F53F3605109254,
	PerformanceSample_set_NumTransactions_mF00F9A9B0684EA4293A2BA27F2D41A1B0C36C22D,
	PerformanceSample_get_NumSlots_mCD1372DDE766F61417EA775136738D335FFE9BBE,
	PerformanceSample_set_NumSlots_mF9E260EDAA876DDB2A7807B1C19079E47D98B4C1,
	PerformanceSample_get_SamplePeriodSecs_m91C97FF1CBE8B4002DC4DC208ED694F3C337C6EC,
	PerformanceSample_set_SamplePeriodSecs_m6A613994AD4C5EAA344470C878F170F89AFFFAFD,
	PerformanceSample__ctor_m20FDFBCEC7534834BE9EC4B91A5C53C7C129E1D4,
	SignatureStatusInfo_get_Slot_m5AEF48333CCF369111BB719294A5A1CD55AC0587,
	SignatureStatusInfo_set_Slot_mE6C81CC85E9CB72F79B48FCDDA4207D2B2840B0B,
	SignatureStatusInfo_get_Confirmations_mC049C7DDC9D4DDE608EC4B7CA8E8B2AF9F49AFAB,
	SignatureStatusInfo_set_Confirmations_mE3335326BA3707A9F4E0C8DF013E0A48B5351D3E,
	SignatureStatusInfo_get_Error_mEC3F3AA1011FF7357B1299497FCAA594A7697605,
	SignatureStatusInfo_set_Error_mFE8B80958CE6F0FC0DA6A12E50F069F1F44FE215,
	SignatureStatusInfo_get_ConfirmationStatus_m07A6A18CC391871FA8B2641CE3398432B5CE8C23,
	SignatureStatusInfo_set_ConfirmationStatus_m42BDB3DADB410405A92BA4A977D05FBE5D9C0D77,
	SignatureStatusInfo_get_Memo_m7168829B6BB671E4F748608B6B02869D0CF36B8B,
	SignatureStatusInfo_set_Memo_m8186B329439F3E44908A1B66E3C9C420F70BF82D,
	SignatureStatusInfo_get_Signature_m4E08CA1B0DB7FEC87AAB33FC721EBCDB2DED2E34,
	SignatureStatusInfo_set_Signature_m205F1C86C51836E2664B9CACFA7A1168DBF30EB0,
	SignatureStatusInfo_get_BlockTime_m5856275D41516AAEB2C2B62C999E1C859509CD6D,
	SignatureStatusInfo_set_BlockTime_m65D7E9833A0C669E19174672F1411D034AE08F90,
	SignatureStatusInfo__ctor_m897DC54F1CA1834E757A72EBC37277FAEC720CFA,
	SlotInfo_get_Parent_m48877B8C11CE5D5EE9D2E4085452136337AADEFD,
	SlotInfo_set_Parent_m37A456D1FC40ED40D18B12ADA9FBC287D911ABC6,
	SlotInfo_get_Root_m5DD509E62527D242A2028B3F36E013E92E6F536E,
	SlotInfo_set_Root_m687411D00A7C8FAA8BAEB8E06FF642895BA3ED4B,
	SlotInfo_get_Slot_mA075CD7BB29B63EEB98880E30126E9B485C602C0,
	SlotInfo_set_Slot_mA5804429A050045D48C5B6D5864CDF568998D385,
	SlotInfo__ctor_mBC336F4A1E7BD6BD160E6E80DF7C1E53AFF8C595,
	StakeActivationInfo_get_Active_m2CC313B31F954E77597FDD50B096FE6EEAEE93E4,
	StakeActivationInfo_set_Active_m73F483754D008ECB06215EA4C3C475B0145D0BF8,
	StakeActivationInfo_get_Inactive_m2C592B195E2926D35C544104B6118F7C388ED5E1,
	StakeActivationInfo_set_Inactive_m0ED815E857C215330E6A22D19B0B70A006BFD30E,
	StakeActivationInfo_get_State_m3C99F8C9C06BFD832D16A906FFF78E51CE2A3548,
	StakeActivationInfo_set_State_m71A6A43B36F80FFA2B1DDA7E9288A6BD5AC5E7B5,
	StakeActivationInfo__ctor_m2DFF6FF95977B2BC6C6C73224A9338B11B4FFD01,
	Supply_get_Circulating_m86ADD7B737C3BC4CA9B6A950E3D82AA2876AE56C,
	Supply_set_Circulating_mADD795B447C2E3050AFCEB111B601244E0762C4D,
	Supply_get_NonCirculating_m3A6106220E282C8FE76278BABE2CA603BDCC9442,
	Supply_set_NonCirculating_m78BF5EE9C5972DC8006956E2C5B88A5967B6DB72,
	Supply_get_NonCirculatingAccounts_mDB3319ADBB422CC5C7970BFDFBE7FA28E16EA9CF,
	Supply_set_NonCirculatingAccounts_m86123783924CD55E909F7E6D0962520D09AADF8D,
	Supply_get_Total_mC18DD6C172D03BD14241557788B44132B8BD8D33,
	Supply_set_Total_m55A9E1972EF3B767862C66347B6F1F479FEF301E,
	Supply__ctor_mDDD53BCDEA8E08260B41BDF0A17987E55239076B,
	TokenAccount_get_Account_m30A2FD6E7BA2E1A3913F2AEDC4EA0E34052C2D76,
	TokenAccount_set_Account_m2513C4280CC46745A16AB88A3708DBC79EF74778,
	TokenAccount_get_PublicKey_mA307152D18933F83868F1AB250842C4F1094906A,
	TokenAccount_set_PublicKey_m6C1057FD09D798BDD9E85C9CA63EE0F5FDA55399,
	TokenAccount__ctor_m16E6798D6CD2286B313C71F1A3A511B024681B72,
	SignaturePubKeyPair_get_PublicKey_mCD199EC815C8D197CA0D63119B27185E3AFFEFBA,
	SignaturePubKeyPair_set_PublicKey_m5995765CE87F2A8B4A645179359EDCD699F22526,
	SignaturePubKeyPair_get_Signature_m198CFD29A7E8FDDACE2FE79319BCB3ED02D1D7C6,
	SignaturePubKeyPair_set_Signature_mF786A5B3C1C853CF04DCE4BAC1C97B00D5F054A0,
	SignaturePubKeyPair__ctor_mC28335DF4EFB5F8D57597D6963BEE99C248DE5F7,
	NonceInformation_get_Nonce_mB234162303700F10B48E0B91F61F86E50C97F349,
	NonceInformation_set_Nonce_m52F300E14D780A909C6426FCAFE58903866319A9,
	NonceInformation_get_Instruction_m20D4DC79C534646F86998706AABAA96F5805CAFD,
	NonceInformation_set_Instruction_mBC8E650B95021E90510C51A2F8AF0A5E1388C4DA,
	NonceInformation__ctor_m2F58711EAC6578BE8646852E77D9B83A010723DE,
	Transaction_get_FeePayer_mAEF1CBD0871968BA883D07528247CAF244766D90,
	Transaction_set_FeePayer_m9D00E15B2BA42805F8B369BE35A6E8F7D0D103EC,
	Transaction_get_Instructions_m9EC087350247FD5F1A804DF86F806AA884802E85,
	Transaction_set_Instructions_mB83C5EADFACF2C01DD250AA32E48446FB534FE3D,
	Transaction_get_RecentBlockHash_mBCF30621782BD4C6AB52F9D6F745E418CA9D7125,
	Transaction_set_RecentBlockHash_m700B69C4E5C3BA794F3E5EA8E6ADAB230FE9F7EB,
	Transaction_get_NonceInformation_m79E164F87D5376FA8CE0D0B8D26670B10DB4007B,
	Transaction_set_NonceInformation_m3A1C6A2CDCF5B5798CFB218DB0442B22EA2DDF60,
	Transaction_get_Signatures_m9BD74BB992946CDDA642FEA69FCFDE3372A0CFF2,
	Transaction_set_Signatures_mD40405AC24FA330AF9D1F67AB6D96AAA5C198E61,
	Transaction_CompileMessage_m29CE7689D3FCF14B7386FC8614323946FA37CA53,
	Transaction_VerifySignatures_m7C5B21D7841F9B686CE0F9F73BABABD188DDE1C5,
	Transaction_VerifySignatures_m08F4592EAABD32A10BA1B50C8301BAFD493C72CB,
	Transaction_Sign_mB5D3E65DF6166B774CB44B159108535A7BFBAF78,
	Transaction_Sign_mCAF8393B2BB05F43EC3331422AA6F280CD13A9CA,
	Transaction_PartialSign_m17A50A90C6E23C26EFB3CACF8F7D22C0CA5E0E2C,
	Transaction_DeduplicateSigners_m41FAEC7A619D733613694C21ABCE7AB46A372801,
	Transaction_PartialSign_m66886FA26A80ABDBCB88E1A0B282EB656466A3E4,
	Transaction_Build_m7C1F2A7191576F3778EBA29FB9AD58D1952A0C7A,
	Transaction_Build_mFEF158FA0CB53924D125AA80250B32F5B06E202A,
	Transaction_AddSignature_m849538D0AD0971307556B2E46DED71E6B69BDA22,
	Transaction_Add_m91A371F435D32B1151C7DC32BFC928A65F8FCAEF,
	Transaction_Add_mA4B546EC3F3987F8AD2FC4232A287F61AF28DFB4,
	Transaction_Serialize_m766F5057CA9AF9CA6EC97DA0B736A8E5A7F2502E,
	Transaction_Populate_m8728396C91CBF778987AED0D1119F85EEB78E5D9,
	Transaction_Populate_m4C2CE9C8003FDF32D88E2B681E9CC442D84C7432,
	Transaction_Deserialize_m1B8EFE9F8104979D4F4112C435967D79AEE1BEAD,
	Transaction_Deserialize_m68F125694C95AA700BC70FFFE33B20EFB82254AA,
	Transaction__ctor_mF3664A24553FFF4D79E55AAD11AA5879A5779CB9,
	U3CU3Ec__cctor_m6A7F2B6888C8FDED59F8813A161DE37BF2E486E4,
	U3CU3Ec__ctor_m15CDB9D16A15C83FD3B2A425FFC68AFA20BC7AA5,
	U3CU3Ec_U3CPopulateU3Eb__34_0_m59FDCB59294D81478EB8FD0A82CA4C988CE7F039,
	U3CU3Ec__DisplayClass21_0__ctor_m8B197F74686AA68C2C30348587939DC43B2A56C4,
	U3CU3Ec__DisplayClass21_0_U3CVerifySignaturesU3Eb__0_m620844E9F51E5E560F68EA7C5751D2C36E16910C,
	U3CU3Ec__DisplayClass34_0__ctor_m28AD6EE2767971ED34447A7B336F50EB9D35FE67,
	U3CU3Ec__DisplayClass34_1__ctor_mB5585A2A995360A513F7768A827ECA781A881A0E,
	U3CU3Ec__DisplayClass34_1_U3CPopulateU3Eb__1_m6B66C177837ACE000CA110C57E7844A8C6453D63,
	TransactionError_get_Type_m3CAC08B70412028EC57D4003E0F0F64A62DC4817,
	TransactionError_set_Type_m259308D6964D4E39A4200CCF557DC1A71773D68B,
	TransactionError_get_InstructionError_mB292F03F3B3519594494B354F1D637C0F9DD84E4,
	TransactionError_set_InstructionError_mA6E4A3CD9FEBCEF1D3AE58CE6A39BFE2926E9FF2,
	TransactionError__ctor_m96D9B7C139A1F700DF613F329E3F69F4956BA672,
	TransactionInstruction_get_ProgramId_mE857581B4C57D4EAF7142CE37FDA33F677DEF271,
	TransactionInstruction_set_ProgramId_mB99504E26550E308C1FFDA8EFF9DBDEE582A9C52,
	TransactionInstruction_get_Keys_m4919C0B7F1942DE9C0349F39A8F4BE957F32EEBA,
	TransactionInstruction_set_Keys_mEE992F580C4FB052CA6D59F4DDE06C1C00587226,
	TransactionInstruction_get_Data_mD0D8887DD66481B7EE27A70D3CDD559F4E2FF4E2,
	TransactionInstruction_set_Data_m04A7F7910F30C3CC2DA1A9AA4470C609BE5A7797,
	TransactionInstruction__ctor_mD4A602752140DDCA7AB55A6C1B5F6690769B473C,
	CompiledInstruction_get_ProgramIdIndex_mF57CF17CEA4E3CA4CDD7EE144A181BFC39605309,
	CompiledInstruction_set_ProgramIdIndex_m0D227034D58F79FB9F9A8EFA72667E1B0323C1B8,
	CompiledInstruction_get_KeyIndicesCount_m87A95CE718EF03E195A06141092A89F02D16D109,
	CompiledInstruction_set_KeyIndicesCount_mF79C37A3A1A2C68DB012F943CC90F720C231D31F,
	CompiledInstruction_get_KeyIndices_m53626C9D288F5ACDC82C4F998CBF6D5BAF3BFE69,
	CompiledInstruction_set_KeyIndices_mE72BE4E389F6F6CF2C4DDDD8F85A2CA3A2B5FC4D,
	CompiledInstruction_get_DataLength_mEABD131C5F2D22905960E4E761C503B7B55360EB,
	CompiledInstruction_set_DataLength_m49A4B22F186332568F71B5EDBCAC3D629AA9A88D,
	CompiledInstruction_get_Data_mDE2E87DBCCDD64C81874645C623B296FB9D055CC,
	CompiledInstruction_set_Data_mA59CC7DA1AE9F3E0F8A3DBBB2C33F62DDA52A3B6,
	CompiledInstruction_Length_mBF0D79919A5AA19A8A821CA5032814544ACF4732,
	CompiledInstruction_Deserialize_m5900AD48F4EB33FD1FB725018CEED3901CC61903,
	CompiledInstruction__ctor_m012B7B7CCD31EB05282EDA551687EE9524243492,
	NodeVersion_get_SolanaCore_mACCBD7BF4678D81F06BAD577E0F769311F50AF3B,
	NodeVersion_set_SolanaCore_mD1FF08D0D28FF64735F59653CCF0D8250AE226C0,
	NodeVersion_get_FeatureSet_m8665B692225EC4A2ECD6ADF7B8860EAC7E211529,
	NodeVersion_set_FeatureSet_mACA399F7827808BAF7B1CEB702A8EC3959A5D4D9,
	NodeVersion__ctor_mC7EF3A1EF4D37C73978C588F599BDFF637CCC996,
	VoteAccount_get_RootSlot_mF9C04607F770C71DCC0F7D6C100C93A793E69EB5,
	VoteAccount_set_RootSlot_mF0A4206656897493AFF91A87700CC1B4C4CB0D85,
	VoteAccount_get_VotePublicKey_m9B6F49B6B7D0773067C7D2013C482D0C3E8DE9EE,
	VoteAccount_set_VotePublicKey_mC1AEB647AE9BA8A059CD312A3ADE3CAD6FFF4352,
	VoteAccount_get_NodePublicKey_m6B255B98FA52A55B5193E7EC85AF774C05601961,
	VoteAccount_set_NodePublicKey_mF7600E793B8566DC853B9281C2B12198199ADE0D,
	VoteAccount_get_ActivatedStake_m1962D71D72D621B21EA26D99B8E59C1F2D2E671F,
	VoteAccount_set_ActivatedStake_m22C7AEEF8B558A76C23B2E9265A404F4F71FE9F2,
	VoteAccount_get_EpochVoteAccount_m36241280BBA090F41A714081D3093A2DDFFBA29A,
	VoteAccount_set_EpochVoteAccount_m450AA4297485F6A1AD643987987182DD7879B9F5,
	VoteAccount_get_Commission_m934F731E56E6F96E95E280D1FABD234C58973CBF,
	VoteAccount_set_Commission_m1E3299A6BA306E73E4A16DF66384785F91B1E7C3,
	VoteAccount_get_LastVote_mC7D8A4CCD7B0E8667867A3433085E0C0F3782002,
	VoteAccount_set_LastVote_m9DA1ED9DA6157CA47753FA86F1E484A8BCFE12E0,
	VoteAccount_get_EpochCredits_mCCA573E5423794BEA70A4533DC05944B35452B83,
	VoteAccount_set_EpochCredits_mAAFC36707DC3C7708CB9A8E7E7F1405AB1BF71FC,
	VoteAccount__ctor_m42C18AE8A7DFA3CBA1A13BA1DD60359EDE654B5D,
	VoteAccounts_get_Current_m19D7F6B089370836D5EF76C6CDDD9EB0EFFA7AE6,
	VoteAccounts_set_Current_m46CA027568AF48529CE152EBDE40C6DC361B2674,
	VoteAccounts_get_Delinquent_m173FCA0634473BA18DBE17BA0CBA24B9CEE3AA1E,
	VoteAccounts_set_Delinquent_mCE8D817F8B0557B1C542CCB1E11CC341DE5A3927,
	VoteAccounts__ctor_mE02F5B0CD72240C28AC1B6627AC74093883E4CF6,
	JsonRpcBase_get_Jsonrpc_m67DB878235B81CBDB16CA2654FA3F3553A2CFF8A,
	JsonRpcBase_set_Jsonrpc_m3038A746831E3BBD03956A58003186EE7DF357F1,
	JsonRpcBase_get_Id_m66E89AB05A6DF258D4DBC541A17F8307018B917B,
	JsonRpcBase_set_Id_m5DAD9AA97D5549F57AE6105C8F1E62565957B69A,
	JsonRpcBase__ctor_m91E9D4C1F026439EE46A1B03DABD332C1C816A5D,
	JsonRpcBatchRequest__ctor_m2142957D26CA6F08007EA8FF554DF06F51DA8D22,
	JsonRpcBatchResponse__ctor_m2850796527C0A9E02253F4FB3D91648AA52B21C7,
	JsonRpcBatchResponseItem_get_ResultType_mF1FF79A59FB52E7DC3E0B68593BE9BFAF2460B87,
	JsonRpcBatchResponseItem_set_ResultType_m4965160F375951D8171C6DA568175DA1EF31A56C,
	JsonRpcBatchResponseItem_get_Result_m460BB099262C6137C6D9C2BF732666F6914A4619,
	JsonRpcBatchResponseItem_set_Result_m2D3630EAEAC536F263D5113352B5ADC41B1EEE33,
	NULL,
	JsonRpcBatchResponseItem__ctor_mC31B42ECDD4EDA3E4E6264FFD905B85858A75732,
	JsonRpcRequest_get_Method_m741EDF82389A2D31548B46F58BC5B70E07A94DDD,
	JsonRpcRequest_get_Params_m4F7EC20CFC34F62AD2C2A372AFF7D14F8B0A6356,
	JsonRpcRequest_ShouldSerializeParams_m046F2E169D273B657CC70F4B6ADEC46E943E9A14,
	JsonRpcRequest__ctor_m5E045BA36C7911AD2122F4870E81A99537966C29,
	NULL,
	NULL,
	NULL,
	JsonRpcErrorResponse_get_Error_m7EEBEAE544BF1C4947BDB9001B43549B1A9B879A,
	JsonRpcErrorResponse_set_Error_m908EBE8E52B5BCEFBEDF7957CB4FDE59844505E5,
	JsonRpcErrorResponse_get_ErrorMessage_m61EBF466562318C7DBABC5F24471CFFE28322C8D,
	JsonRpcErrorResponse_set_ErrorMessage_mDF9F0A849C6DD9DC179203A746AC3C3AAAA0EA96,
	JsonRpcErrorResponse__ctor_m0D1F545D00B873A45047DDF72AF209B4725F1526,
	ErrorContent_get_Code_m3A4050525ED45411E74404DE71085408E8E7D7F3,
	ErrorContent_set_Code_m96E87434400EC21F4CE8B74E635BA28ABC37BEDE,
	ErrorContent_get_Message_m9A1A49757059AF5F85F8842C31CE0384FAF32F31,
	ErrorContent_set_Message_m3E80833006ED28E71876DEE2CF74A6ECDB258E17,
	ErrorContent_get_Data_mBCEBC48D8B62F7805281D273922E14D433A3AABA,
	ErrorContent_set_Data_m29326E6002B54047B8DEC8F63898108E9A5DA0C9,
	ErrorContent__ctor_m109ABD8E84279F4890208B5B6B3CE5A17A053F3A,
	ContextObj_get_Slot_mCC19252D7AF81438C5B85B39910963D0C31327DD,
	ContextObj_set_Slot_m442869495714E12A8248E730BB7539E511E042EE,
	ContextObj__ctor_m265894027033965B1F76BD088D8895ADEA6E82F2,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	IdGenerator_GetNextId_mC31E533E8EBE82167C9D0D4071C5CBFF5A65CAB3,
	IdGenerator__ctor_mD64A5916CCD48FFF33654BB0B92E3FD0D336527B,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	StreamingRpcClient_get_NodeAddress_m88EE00362C124C652C9EA2A1067B209D2730E719,
	StreamingRpcClient_get_State_mE6C7A0C0C4BD05C2418D43ADD307360F2DF677A8,
	StreamingRpcClient_add_ConnectionStateChangedEvent_mABEF4D1BF8D0A59D11FC0A421FE26B1CE2FD359E,
	StreamingRpcClient_remove_ConnectionStateChangedEvent_mD20B80F942EEC6C9DFD5B624DEC861ED7351BCAB,
	StreamingRpcClient_get_Statistics_m521958F9C7623ED4BF18F617FDA2F81327E3327F,
	StreamingRpcClient__ctor_m92334700F27C9E8E592254F836FEB31B333787CA,
	StreamingRpcClient_ConnectAsync_mC23052C20AFB9B9E875935A2B822268326511133,
	StreamingRpcClient_DisconnectAsync_m505E2383EC0F49FC31AAEE1B445A3CA7B1DF3DAA,
	StreamingRpcClient_StartListening_mB796C11B1956E29485835483B708B1236B5EC252,
	StreamingRpcClient_ReadNextMessage_mBDB61D34EF24AED5844932EB841968571E472F01,
	NULL,
	NULL,
	StreamingRpcClient_Dispose_m676DF92B099C2A415E915863CD3371BECA0AF9F2,
	StreamingRpcClient_Dispose_m6F9C8992EF7F636E2D67B02694F21B7A90394D79,
	U3CConnectAsyncU3Ed__16_MoveNext_m231FF9BF3459368286A5D8E5AEBC061438DC2774,
	U3CConnectAsyncU3Ed__16_SetStateMachine_m3BEA29BA9635C5D68AE6FE4FF2F70486C52EB272,
	U3CDisconnectAsyncU3Ed__17_MoveNext_mBA9771CC74FC8E8FB18D87F02EB3916CAA3E980B,
	U3CDisconnectAsyncU3Ed__17_SetStateMachine_m9AFA2B64EC88D23BF280B982EFD8CABE7580BFCD,
	U3CReadNextMessageU3Ed__19_MoveNext_m0B9B6FE31B5B8D964C663C576885DC7AA6779905,
	U3CReadNextMessageU3Ed__19_SetStateMachine_m2ED23CA5FF66774D0A0A41873E49F2FDD2941953,
	U3CStartListeningU3Ed__18_MoveNext_m725C7EF6651CDF3E4AB5D910FAC6002F67F59BE3,
	U3CStartListeningU3Ed__18_SetStateMachine_mE665A6E42184DE93940063479A95A177F7C98636,
	SubscriptionEvent_get_Status_m0F41FD16DE26CF7C0FE4894D2926B4A0D025D048,
	SubscriptionEvent_get_Error_mF04C00456952B8A2A3C07EB739E2BD7A5CC02CF1,
	SubscriptionEvent_get_Code_m4678E594566FCDB0CCFFECBCD986C5F82D8BE84C,
	SubscriptionEvent__ctor_mA2E72832294CFE20D6C7B22FDB2830AAF6C6098E,
	SubscriptionState_get_SubscriptionId_m9B41A1697743D111396F800CFF223479E07634D1,
	SubscriptionState_set_SubscriptionId_m3A1D430266356C9D1D240322521CA6121956863C,
	SubscriptionState_get_Channel_m2F7A40B8DC43C94667882B34B4BC82A63AF1BDD9,
	SubscriptionState_set_Channel_m6581410521EECB9608A392BFD12F073F046820E2,
	SubscriptionState_get_State_mA6EC539E49C63E3B8FB8EFA8C9AACE4C87E7A865,
	SubscriptionState_set_State_m8E05111E394B522386860D74EC0E53609514B177,
	SubscriptionState_get_LastError_m4F78F8554A0A39C1F9875BA435D54B93B12264DE,
	SubscriptionState_set_LastError_m5D63322A3E9B9B36D3BEBD7AA43EB21844B3938C,
	SubscriptionState_get_LastCode_m725EB146EE029E120FCD4601A3DAF8AA143367A8,
	SubscriptionState_set_LastCode_mA8C2D7EAC8D8A49E6029E2AFB7FE0A4AC17B8032,
	SubscriptionState_get_AdditionalParameters_m3D65AED56E812BD996B1565A54009CBE09C29E57,
	SubscriptionState_set_AdditionalParameters_m06472BAE86E9042243E40F4E64B6293342668A84,
	SubscriptionState_add_SubscriptionChanged_mD373CB088D252FE73FD22FDCBE234882515CCE91,
	SubscriptionState_remove_SubscriptionChanged_mED7AD41F77DC8DB5A0664AD83C7A177C3C5DA177,
	SubscriptionState__ctor_mA149F391BE686295EDF3022B93E91952186726E4,
	SubscriptionState__ctor_mF7DC651D9B22156866FEECA107E832C132B3D65A,
	SubscriptionState_ChangeState_m383C617EDA674EFDC2CD7F2C2194CC4A54033E2F,
	NULL,
	SubscriptionState_Unsubscribe_m2C4765D390BE9DB00B743F040B00DA4C369D8415,
	SubscriptionState_UnsubscribeAsync_m19E4883E71E8F564D78128ECF0634D250313EA90,
	U3CUnsubscribeAsyncU3Ed__33_MoveNext_m9844309C0213DEDA669526F8AF5395B0712BEA5E,
	U3CUnsubscribeAsyncU3Ed__33_SetStateMachine_mFED2A9628DFDDE68592F9D6E99BF454A30048612,
	NULL,
	NULL,
	WebSocketWrapper__ctor_mC512F61CD551CC48FFB0BFA053A7E79266596EF1,
	WebSocketWrapper_get_CloseStatus_mBFC23720AC69279D45ABBB728D472D4266373CAE,
	WebSocketWrapper_get_CloseStatusDescription_mA5EBFDC7ABFFD45518844AA4355AC4C7B6216FE0,
	WebSocketWrapper_get_State_mBF4F436E08D7C8AB89101871D7808D330EAA8D11,
	WebSocketWrapper_CloseAsync_m519D747329B914AB69D626BCA5A8226D83747F2A,
	WebSocketWrapper_ConnectAsync_m374EB77A0FAB436486B36CFA5B2431F9F813C442,
	WebSocketWrapper_CloseAsync_m265477B5870FDBEB1EE18166A00E7DDF7F792F58,
	WebSocketWrapper_ReceiveAsync_m82328EF51748EEF4BD889CEBBB527434814E67BB,
	WebSocketWrapper_SendAsync_m3BD5E210A83C3723DBB217694EA8FE4409A89027,
	WebSocketWrapper_Dispose_m53DBD2C72D5D547A02F0DB34D0658F22D1D490AC,
	WebSocketWrapper_Dispose_m3BE727A90A4084F962EF0775E4D8679AFCAB8285,
	KeyValue__ctor_m999B96D855E56C834E2EC88C125997971BA57B75,
	KeyValue_Create_mD319F02D58730A70E0FD2D01AD4D9DCB4E47B27A,
	ConfigObject_Create_m24DE3CECCEA1B3E8FC47E8A1A2C4DE4F652CA7A7,
	ConfigObject_Create_mEA04AA70BA174C8D96545CAB10E8A768427AA5B0,
	ConfigObject_Create_m7723A953D95F1D605AAD7E4B98ECA0380DC63168,
	ConfigObject_Create_m1B457E0EB95DA64309AD685C415F5B9E62FAC768,
	ConfigObject_Create_m2D929797E8C2BE5161C95731AF43B4BDBCECC53C,
	Parameters_Create_m62B4C5B584BD6BC573589B0125DA6501AF22CB6D,
	Parameters_Create_m219B4F29C692F576D95B2B2011F248B5ACD3C512,
	Parameters_Create_mF8CFCCC585836E3988753E6C10A79EDB1EA78CD5,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	JsonRpcClient_get_NodeAddress_mEFBDEAED205E616E3BE3781982FE0098CE2A134B,
	JsonRpcClient__ctor_m24A6F528E5983737E046B62FDE3B666A92E79B94,
	NULL,
	NULL,
	JsonRpcClient_SendBatchRequestAsync_mCEE26161A18A96C07CE8A9A21559C4EDEB10AC57,
	JsonRpcClient_HandleBatchResult_m3F92FAFAEC72FA26B605200DBCC11194CC698F87,
	JsonRpcClient_IsUnityPlayer_m96FA075AE11CD230CF6B92757DA257F3BA895B50,
	JsonRpcClient_SendAsyncRequest_m151732259B533F0081BB97C4943FA18590679779,
	JsonRpcClient_SendUnityWebRequest_mBC9773D363CB859ECD454926E97EF6EC720BB52E,
	U3CU3Ec__cctor_mB57C32038F6B1A7811FE3CB001609D051A4EE55C,
	U3CU3Ec__ctor_m4F210FDACBC58117A38EE07FBA4D990874D7AEB3,
	U3CU3Ec_U3CSendBatchRequestAsyncU3Eb__10_0_mD01D6778A27280B2958F17A3D5414A323A242629,
	U3CU3Ec_U3CHandleBatchResultU3Eb__11_0_mCA1F76858FD9FFA0B9155FBA3228CC92FE206F5C,
	U3CHandleBatchResultU3Ed__11_MoveNext_mA1E25865F5F0A29CBFF7E44A8644512F61186ACD,
	U3CHandleBatchResultU3Ed__11_SetStateMachine_mA545527D52AE171E953D22147DE199BA0322E4E6,
	NULL,
	NULL,
	U3CSendAsyncRequestU3Ed__13_MoveNext_mE43C7E980835C082EA2186A732E6675F551FF30D,
	U3CSendAsyncRequestU3Ed__13_SetStateMachine_mA6ECF580EFC00856519425D09A5DB1C92D5E3813,
	U3CSendBatchRequestAsyncU3Ed__10_MoveNext_mAD39C189E6E6F4A319164BE543A9A6451921BBD0,
	U3CSendBatchRequestAsyncU3Ed__10_SetStateMachine_mF09646C90792F0A88DA079AC80C4E5E479D3C6C9,
	NULL,
	NULL,
	U3CSendUnityWebRequestU3Ed__14_MoveNext_mA1798666235B99E241A25860C264189CAE6C11A9,
	U3CSendUnityWebRequestU3Ed__14_SetStateMachine_mF98C2B9241F540BC219475D99EBB456A97F9A531,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AccountDataConverter_WriteJson_mD030969A790A9BB88BACC1343A76254F4E314B25,
	AccountDataConverter_ReadJson_m23D0286E1FB5E1DCC88B6A33953D1A5A0CFD7CE9,
	AccountDataConverter__ctor_m8C207F3E4432ACC128D604D63B5B4B2FA4422F82,
	EncodingConverter_WriteJson_m87A4E88FCD8552E1F926D00CD8B519E6F773C264,
	EncodingConverter_ReadJson_mD076CD129AFD17ED5B22721D95EA10A4074AB65B,
	EncodingConverter__ctor_mABA3F582395E552168F30E6420E22951E3089A03,
	RpcErrorResponseConverter_ReadJson_m0CBE8A3CC07518EAF045D9C72275171F0D72B21C,
	RpcErrorResponseConverter_WriteJson_m55E907732931F41D3880F3DF0F619CE116810150,
	RpcErrorResponseConverter__ctor_m8B2BDF3455F9C11612C1FBFDA54A1CBDADDE0125,
	TransactionErrorJsonConverter_ReadJson_mB2381426EBF056F8ECFA71176C43791D5F9066E4,
	TransactionErrorJsonConverter_WriteJson_m7F7D1AA1CC9A578AC593C6F6D5F7411A1118D8D6,
	TransactionErrorJsonConverter__ctor_mFBD6A536D2F891BA692E87E56C9A158433D1A4EE,
	MessageBuilder_get_Instructions_mC163950E5CF40D3323DFA1CE3FD9E3471457913E,
	MessageBuilder_set_Instructions_m1608447F8BBD75D6ECB20784B6171FB54EF53FF5,
	MessageBuilder_get_RecentBlockHash_mABE99E108C7898D2ADD31134BDB58065A2C52388,
	MessageBuilder_set_RecentBlockHash_mA0F0C212CE9860B29A040485DBCC3A0A49B16D36,
	MessageBuilder_get_NonceInformation_m2DE7865888D28A13CDB88F165CD78B9F1855782B,
	MessageBuilder_set_NonceInformation_m2B04126DAE5636C09BB2196C2A36CC30307ED05A,
	MessageBuilder_get_FeePayer_m7F9C738541C58C88C3AF0CA8ABD992FF420974F8,
	MessageBuilder_set_FeePayer_m24917CF396CC6C2288EF7E461291737F3D37D7C2,
	MessageBuilder__ctor_m63FE66D7C7664A85188CB9DD42D9EC86187E8954,
	MessageBuilder_AddInstruction_m7DBE36A5D4F323D66D15ED54922A5F7FF38A8B31,
	MessageBuilder_Build_mF9D2177D141C703EF1DF6E3319CB3388D830CDFF,
	MessageBuilder_GetAccountKeys_m7CF4AB33F727FB62C5E91B8F966684166F0E9CFE,
	MessageBuilder_FindAccountIndex_m47803F12CA795152D1375EE2E59CC6F69B118942,
	TransactionBuilder__ctor_m0B3F1BCABDCC514E09F089FADDF382793AB85906,
	TransactionBuilder_Serialize_m920C472467CA548CC223EE1031D2169460735337,
	TransactionBuilder_Sign_mEB113BB4056747C11040C4E2B6E66B6BA94F79EE,
	TransactionBuilder_AddSignature_m0140FBDDD3F4CD65EC5A46DEE183AE840DD067D4,
	TransactionBuilder_AddSignature_m8E35F8E642894D152DE85DA90129D63873BA3DC2,
	TransactionBuilder_SetRecentBlockHash_m867442395CF50EE764EF39BF869C480246E1ECC9,
	TransactionBuilder_SetNonceInformation_mED6F1C23492F57A439653826472E7C5A3FAB0059,
	TransactionBuilder_SetFeePayer_m0667AA3756160B7FCF72EB4F44EEB1D59D0A5698,
	TransactionBuilder_AddInstruction_m47204C5F74C6203BCF68D1965D8BB186CA148B3A,
	TransactionBuilder_CompileMessage_m3F11B420C035A388257288C2D25D30EA412C7073,
	TransactionBuilder_Build_m943CA918D10296F1FBC00EE75472D561B8F9DDCD,
	TransactionBuilder_Build_m9F3B305D960BCAA5792825205D115271B3775C21,
	TransactionInstructionFactory_Create_m6856783D950A8686DA7FB86C9B24F909032D5F7F,
};
extern void U3CExecuteAsyncU3Ed__12_MoveNext_m2F637C16F979AE8C29FB9E4AEF7EAF071489BD8C_AdjustorThunk (void);
extern void U3CExecuteAsyncU3Ed__12_SetStateMachine_m1BF5DEACEB000B88E9CA4594D31D6DC1F5DBED58_AdjustorThunk (void);
extern void U3CExecuteAsyncU3Ed__13_MoveNext_mD936A1654134C05EECE48FA8819C26B7F2282B8D_AdjustorThunk (void);
extern void U3CExecuteAsyncU3Ed__13_SetStateMachine_m96D7B9BA93CBB97CAE2A66B7C78F1050991105A1_AdjustorThunk (void);
extern void U3CExecuteWithFatalFailureAsyncU3Ed__16_MoveNext_m72AB9CBB2C415D6E2102B6F15FF53E56A1F22516_AdjustorThunk (void);
extern void U3CExecuteWithFatalFailureAsyncU3Ed__16_SetStateMachine_mB8F354000925849D2705CACD633C04533EED2349_AdjustorThunk (void);
extern void U3CExecuteWithFatalFailureAsyncU3Ed__17_MoveNext_m89DA6E27095FCB8783D40BD3EBA9E789A10D77A9_AdjustorThunk (void);
extern void U3CExecuteWithFatalFailureAsyncU3Ed__17_SetStateMachine_m84A26300C6E837A171DD36F119FA218C616350BE_AdjustorThunk (void);
extern void U3CGetAccountInfoAsyncU3Ed__11_MoveNext_m71A035652C4E20F2C1238210D19531DBA9EBC7F4_AdjustorThunk (void);
extern void U3CGetAccountInfoAsyncU3Ed__11_SetStateMachine_m918F91204F4FBD26C53F53C9DABEDC05EAF67D1F_AdjustorThunk (void);
extern void U3CGetBalanceAsyncU3Ed__17_MoveNext_m4F5CB517DCA9EDD3965B7B775A9A44197FFE7045_AdjustorThunk (void);
extern void U3CGetBalanceAsyncU3Ed__17_SetStateMachine_mAE9B7B6827A2AE676475B89A243C6E5EADF174F5_AdjustorThunk (void);
extern void U3CGetBlockAsyncU3Ed__19_MoveNext_mF1A80C3F7F4ED121C65A2E7883EA910BD78A897F_AdjustorThunk (void);
extern void U3CGetBlockAsyncU3Ed__19_SetStateMachine_m3C66FE1A018DD6F5845EFC4FD1DC7413278A1156_AdjustorThunk (void);
extern void U3CGetBlockCommitmentAsyncU3Ed__45_MoveNext_m0F1313671C8CD1104F25E931C1227964717DA365_AdjustorThunk (void);
extern void U3CGetBlockCommitmentAsyncU3Ed__45_SetStateMachine_m2A2B3D8A807312480BC5C1C7E4068141CE152FDC_AdjustorThunk (void);
extern void U3CGetBlockHeightAsyncU3Ed__43_MoveNext_m260547E20CE2CCF532A28643C28C60E653869779_AdjustorThunk (void);
extern void U3CGetBlockHeightAsyncU3Ed__43_SetStateMachine_m08B1445FDB8ED54D256DE70A07D993996955DB79_AdjustorThunk (void);
extern void U3CGetBlockProductionAsyncU3Ed__33_MoveNext_mE48D8A3D4CE678528DC30DE3E9C311187BFAEBA2_AdjustorThunk (void);
extern void U3CGetBlockProductionAsyncU3Ed__33_SetStateMachine_m9619E9B9D3980BEC46017DBC8FE8B5BAA1C9A5AD_AdjustorThunk (void);
extern void U3CGetBlockTimeAsyncU3Ed__47_MoveNext_m11C616CA46C66F321C2F896F27F9C611B4ECAC8B_AdjustorThunk (void);
extern void U3CGetBlockTimeAsyncU3Ed__47_SetStateMachine_mB3E9DF73B7988E360A37C8A3AE98DC5A44352CD5_AdjustorThunk (void);
extern void U3CGetBlocksAsyncU3Ed__21_MoveNext_mC0B59AFB286D4C89DAF4AC612F859C6FF4D891D9_AdjustorThunk (void);
extern void U3CGetBlocksAsyncU3Ed__21_SetStateMachine_m3A54F7D4A7B4FCE37F26485E20108EE1F2455F1C_AdjustorThunk (void);
extern void U3CGetBlocksWithLimitAsyncU3Ed__30_MoveNext_m6FDB251EC76756F620F26A86BE367C3AE72D05BA_AdjustorThunk (void);
extern void U3CGetBlocksWithLimitAsyncU3Ed__30_SetStateMachine_mE4708412237CAEDB998216CF3F049250E3659961_AdjustorThunk (void);
extern void U3CGetClusterNodesAsyncU3Ed__49_MoveNext_m4CE4236A15EA5B96A27E4F65C4EC55644324098E_AdjustorThunk (void);
extern void U3CGetClusterNodesAsyncU3Ed__49_SetStateMachine_m7C3F8EC519D85CF1C43376240AFDE1AF7BD054F8_AdjustorThunk (void);
extern void U3CGetConfirmedBlockAsyncU3Ed__22_MoveNext_m449B330D80F8F14E6B3C85E796AB3A20FEB36404_AdjustorThunk (void);
extern void U3CGetConfirmedBlockAsyncU3Ed__22_SetStateMachine_mD0230753A0A883461893836E4B5A80526FEDBE2B_AdjustorThunk (void);
extern void U3CGetConfirmedBlocksAsyncU3Ed__25_MoveNext_mFEC32FB8DF8B26C7E8BB03E76D545E7919AFA36F_AdjustorThunk (void);
extern void U3CGetConfirmedBlocksAsyncU3Ed__25_SetStateMachine_m408BDA98333EC31E1BE65C8C72E88F698BB00015_AdjustorThunk (void);
extern void U3CGetConfirmedBlocksWithLimitAsyncU3Ed__27_MoveNext_m6961A2C6394CF1618783F5E1C0B4D06FDDAB7E27_AdjustorThunk (void);
extern void U3CGetConfirmedBlocksWithLimitAsyncU3Ed__27_SetStateMachine_m34D81FF9A155D8FF3495FBFF115DAEB0B371BF52_AdjustorThunk (void);
extern void U3CGetConfirmedSignaturesForAddress2AsyncU3Ed__86_MoveNext_mCF515026A73E21E519CA21F62FE3E2146536D45F_AdjustorThunk (void);
extern void U3CGetConfirmedSignaturesForAddress2AsyncU3Ed__86_SetStateMachine_m077004FFF2BE2F1F34771277E7588B3E58340B9F_AdjustorThunk (void);
extern void U3CGetConfirmedTransactionAsyncU3Ed__40_MoveNext_m21CEF49718574EFEC689A84C812DD0BF329533BA_AdjustorThunk (void);
extern void U3CGetConfirmedTransactionAsyncU3Ed__40_SetStateMachine_m5DEACA442081D0F350CF2B4A9599BF2B2E444DA2_AdjustorThunk (void);
extern void U3CGetEpochInfoAsyncU3Ed__51_MoveNext_m884460B5CEB552BE3C41BC53E29D6233D468740F_AdjustorThunk (void);
extern void U3CGetEpochInfoAsyncU3Ed__51_SetStateMachine_mC942E328FB8CD1C7BB3E9AC296C79674D97A02AE_AdjustorThunk (void);
extern void U3CGetEpochScheduleAsyncU3Ed__53_MoveNext_m0C7EA807EDB7B84A18197EB7B674C3825D167E84_AdjustorThunk (void);
extern void U3CGetEpochScheduleAsyncU3Ed__53_SetStateMachine_m1619AD8C289B3FE979384856CEE18915E35ECF82_AdjustorThunk (void);
extern void U3CGetFeeCalculatorForBlockhashAsyncU3Ed__55_MoveNext_m6B3F43E8A6230F6624673F3869DCF17FC552D4D5_AdjustorThunk (void);
extern void U3CGetFeeCalculatorForBlockhashAsyncU3Ed__55_SetStateMachine_mC9581F6D6637E22AFAF2E74FC7295E35B27575A7_AdjustorThunk (void);
extern void U3CGetFeeRateGovernorAsyncU3Ed__57_MoveNext_m4567AC38AB7748BDD389A2404A7DA4B8616FD1FE_AdjustorThunk (void);
extern void U3CGetFeeRateGovernorAsyncU3Ed__57_SetStateMachine_m672022222A7DD8676C9CD8F0CDDD475D7F2E1E4F_AdjustorThunk (void);
extern void U3CGetFeesAsyncU3Ed__59_MoveNext_m777F047242526E748A8B2EF113EB58479DB8891F_AdjustorThunk (void);
extern void U3CGetFeesAsyncU3Ed__59_SetStateMachine_mB20F39D8716C914809FA7FFA5BF9C368FAF7450A_AdjustorThunk (void);
extern void U3CGetFirstAvailableBlockAsyncU3Ed__32_MoveNext_m297DD632FFAB265819B6C0D1DF2438166D4DE6CB_AdjustorThunk (void);
extern void U3CGetFirstAvailableBlockAsyncU3Ed__32_SetStateMachine_m6F61A9EE0D127523319A47E048EF5EE7B9EF9DEC_AdjustorThunk (void);
extern void U3CGetGenesisHashAsyncU3Ed__69_MoveNext_mE441AAA63680A1AD6D9D7DDA157E81EED46D7E9C_AdjustorThunk (void);
extern void U3CGetGenesisHashAsyncU3Ed__69_SetStateMachine_m2C7DC1E41303B657E41D25F8EAE6BD5FB451FA82_AdjustorThunk (void);
extern void U3CGetHealthAsyncU3Ed__36_MoveNext_mE7FB1473AD9F334961DFB003217F07C3CBFD688F_AdjustorThunk (void);
extern void U3CGetHealthAsyncU3Ed__36_SetStateMachine_mD428B47CC9937F03A47430D9C5443C0AA04D9519_AdjustorThunk (void);
extern void U3CGetIdentityAsyncU3Ed__71_MoveNext_m982C5109F1C0DE4A12BC57D22D6854DD9E2E0794_AdjustorThunk (void);
extern void U3CGetIdentityAsyncU3Ed__71_SetStateMachine_mE5D50C8E9C5D4980AF46D301EB7AF2C8413921C1_AdjustorThunk (void);
extern void U3CGetInflationGovernorAsyncU3Ed__73_MoveNext_mDC4721BBCBF9435DB842D416D28FBFA755A36ECB_AdjustorThunk (void);
extern void U3CGetInflationGovernorAsyncU3Ed__73_SetStateMachine_mE4C760EDF2599140AA81C588EF155445C9906883_AdjustorThunk (void);
extern void U3CGetInflationRateAsyncU3Ed__75_MoveNext_mB35278FB495171CFFBDA3209E6CD2D4A6905C3FA_AdjustorThunk (void);
extern void U3CGetInflationRateAsyncU3Ed__75_SetStateMachine_mCCED976193DBA6376B63D9E9213E0C425327437A_AdjustorThunk (void);
extern void U3CGetInflationRewardAsyncU3Ed__77_MoveNext_m74103BF4FEA13D6F999C6E1AB2A70A356A6517D6_AdjustorThunk (void);
extern void U3CGetInflationRewardAsyncU3Ed__77_SetStateMachine_m3F53A9EB0CB5AABAC03647708C373273D7696FCC_AdjustorThunk (void);
extern void U3CGetLargestAccountsAsyncU3Ed__79_MoveNext_m5227EDF6BC7C7428880FCA8B8DB904DFD39BAFA6_AdjustorThunk (void);
extern void U3CGetLargestAccountsAsyncU3Ed__79_SetStateMachine_mB9DE4130BA71294F4E4E48FDFBA836848E92F59D_AdjustorThunk (void);
extern void U3CGetLeaderScheduleAsyncU3Ed__38_MoveNext_mA7B2522A6CB093BA92ADF307A9DF58FEAA197720_AdjustorThunk (void);
extern void U3CGetLeaderScheduleAsyncU3Ed__38_SetStateMachine_m1DF01C66460141C51EC5191005963C0A8AA7FEE8_AdjustorThunk (void);
extern void U3CGetMaxRetransmitSlotAsyncU3Ed__63_MoveNext_m9D0335162A98DEFFE62A80D7F97B23CD99993B65_AdjustorThunk (void);
extern void U3CGetMaxRetransmitSlotAsyncU3Ed__63_SetStateMachine_mB2641299C98B42D5E915A3D7DC8A5C7E2E6582C9_AdjustorThunk (void);
extern void U3CGetMaxShredInsertSlotAsyncU3Ed__65_MoveNext_m931457A8375554386F04DDF7F57B758E7F160468_AdjustorThunk (void);
extern void U3CGetMaxShredInsertSlotAsyncU3Ed__65_SetStateMachine_mB6DA78BC7C2C06FD40EAB66CAEF9978F92CAAC41_AdjustorThunk (void);
extern void U3CGetMinimumBalanceForRentExemptionAsyncU3Ed__67_MoveNext_m221CA08C4EC6CDC60A81549900BA7771F74E6690_AdjustorThunk (void);
extern void U3CGetMinimumBalanceForRentExemptionAsyncU3Ed__67_SetStateMachine_m61768E112AE3695CCA2360B168038E3914486B9D_AdjustorThunk (void);
extern void U3CGetMinimumLedgerSlotAsyncU3Ed__117_MoveNext_m390631849901AEBECA02C26DB3ED362935AD5AE4_AdjustorThunk (void);
extern void U3CGetMinimumLedgerSlotAsyncU3Ed__117_SetStateMachine_m8B55DEC32C67E0BF87BD1612E438D5445C299698_AdjustorThunk (void);
extern void U3CGetMultipleAccountsAsyncU3Ed__15_MoveNext_m565E691948863B49019358885C7E17FA81F20D70_AdjustorThunk (void);
extern void U3CGetMultipleAccountsAsyncU3Ed__15_SetStateMachine_m71C7AE6D8849F3C9C30C9111DB21B5E096F1FEB8_AdjustorThunk (void);
extern void U3CGetProgramAccountsAsyncU3Ed__13_MoveNext_mDD3EE587B4DF999973E5BB341C653695F7752E35_AdjustorThunk (void);
extern void U3CGetProgramAccountsAsyncU3Ed__13_SetStateMachine_mDC5A34888DFA4807600D4000C39AE9AC0366C85E_AdjustorThunk (void);
extern void U3CGetRecentBlockHashAsyncU3Ed__61_MoveNext_m592D9D93066B6F4CB059DBAC7F4B9E2EB0912D9A_AdjustorThunk (void);
extern void U3CGetRecentBlockHashAsyncU3Ed__61_SetStateMachine_mACE64BD81C63DD882591CA6D5C345831EF0345C6_AdjustorThunk (void);
extern void U3CGetRecentPerformanceSamplesAsyncU3Ed__83_MoveNext_mEACF6DF7EAE932558F4A75011EFD340EEFDE24A1_AdjustorThunk (void);
extern void U3CGetRecentPerformanceSamplesAsyncU3Ed__83_SetStateMachine_m5176600569417A469C4BD6D65DBCFC3CFD0B85BA_AdjustorThunk (void);
extern void U3CGetSignatureStatusesAsyncU3Ed__89_MoveNext_mE01EB348A879AF02EB7D5EC23D728EF7B729A16B_AdjustorThunk (void);
extern void U3CGetSignatureStatusesAsyncU3Ed__89_SetStateMachine_m859B14153AE2B89AF84C9FED75572987D56EE67F_AdjustorThunk (void);
extern void U3CGetSignaturesForAddressAsyncU3Ed__85_MoveNext_m50D89D991424FA736F45E5B61A3047E180C337B0_AdjustorThunk (void);
extern void U3CGetSignaturesForAddressAsyncU3Ed__85_SetStateMachine_m8E8FF95E6BB7CF72E596390AB5BFE50B2F7A219E_AdjustorThunk (void);
extern void U3CGetSlotAsyncU3Ed__91_MoveNext_m7D6C1B33B4968E5CF38E2DCEAAB56EB2E059854A_AdjustorThunk (void);
extern void U3CGetSlotAsyncU3Ed__91_SetStateMachine_mC66DC91641CE350292E957C74065BB187424A8EF_AdjustorThunk (void);
extern void U3CGetSlotLeaderAsyncU3Ed__93_MoveNext_m93B1E6355EC7EFA958EB328C9140E165DFF56400_AdjustorThunk (void);
extern void U3CGetSlotLeaderAsyncU3Ed__93_SetStateMachine_m562AC03AF88983C4B4BA2549BC539B03C42E2A0C_AdjustorThunk (void);
extern void U3CGetSlotLeadersAsyncU3Ed__95_MoveNext_mE95B076243894EF4452842531D908113A8F4495F_AdjustorThunk (void);
extern void U3CGetSlotLeadersAsyncU3Ed__95_SetStateMachine_m1FEE1B7E1C54412C210F21E2A77ADBB59734D0E2_AdjustorThunk (void);
extern void U3CGetSnapshotSlotAsyncU3Ed__81_MoveNext_m971A83DD4E5BB58F4E30BAC5AF66F138764DA563_AdjustorThunk (void);
extern void U3CGetSnapshotSlotAsyncU3Ed__81_SetStateMachine_m5298400BAAFBF35A206F0946AB73164A9B6320E3_AdjustorThunk (void);
extern void U3CGetStakeActivationAsyncU3Ed__97_MoveNext_m91448D031570AED4F8D28F75ED78DEFEDB00B52F_AdjustorThunk (void);
extern void U3CGetStakeActivationAsyncU3Ed__97_SetStateMachine_m891AF9FF8E86036B50E69841CB4F0B2D2E5FB395_AdjustorThunk (void);
extern void U3CGetSupplyAsyncU3Ed__99_MoveNext_m25F34F3102EF87622C30B13A6A2F6FABDF32D664_AdjustorThunk (void);
extern void U3CGetSupplyAsyncU3Ed__99_SetStateMachine_m811BD303EAED9DC9CA9BBC5EFC0C943437AC357C_AdjustorThunk (void);
extern void U3CGetTokenAccountBalanceAsyncU3Ed__101_MoveNext_mD7B586BA20F1A52BE54A52D71F13C8F6CA74FE14_AdjustorThunk (void);
extern void U3CGetTokenAccountBalanceAsyncU3Ed__101_SetStateMachine_m19EDD46D57FC1C0A3FB0A35C2B5D3D6E45984A48_AdjustorThunk (void);
extern void U3CGetTokenAccountInfoAsyncU3Ed__9_MoveNext_m43784E0CE9BB805471C63AF4A22121C827C6AAA6_AdjustorThunk (void);
extern void U3CGetTokenAccountInfoAsyncU3Ed__9_SetStateMachine_m9BA43BFD5D20A73111E43C86DE954C14BE0E208E_AdjustorThunk (void);
extern void U3CGetTokenAccountsByDelegateAsyncU3Ed__103_MoveNext_mDEEA11C0EC668229C498418CD65883C7D9BB2405_AdjustorThunk (void);
extern void U3CGetTokenAccountsByDelegateAsyncU3Ed__103_SetStateMachine_m7A2DCB4ED5AA9CA52DB0C768C575452C3A60F0EF_AdjustorThunk (void);
extern void U3CGetTokenAccountsByOwnerAsyncU3Ed__105_MoveNext_mCCD2253E9E2F01A8C3A107BAFE7648F25F883453_AdjustorThunk (void);
extern void U3CGetTokenAccountsByOwnerAsyncU3Ed__105_SetStateMachine_mDFE5C6978DDA26D57988F367AF5D25AFF07DADBC_AdjustorThunk (void);
extern void U3CGetTokenLargestAccountsAsyncU3Ed__107_MoveNext_m7723FA4D5BF5626611D94849DAD203E01ACAB7D2_AdjustorThunk (void);
extern void U3CGetTokenLargestAccountsAsyncU3Ed__107_SetStateMachine_mA7DC5871EE47CE9E7C02072825FF9B4A49A01270_AdjustorThunk (void);
extern void U3CGetTokenMintInfoAsyncU3Ed__7_MoveNext_mB0CA133B363669AAA6D812F41BD826E1D1564627_AdjustorThunk (void);
extern void U3CGetTokenMintInfoAsyncU3Ed__7_SetStateMachine_mE12009A75BD318ABF581615DF0F7C7607D30065F_AdjustorThunk (void);
extern void U3CGetTokenSupplyAsyncU3Ed__109_MoveNext_mFB9033CCF1135C2C8A6BF6E15D18DFBC1324CB30_AdjustorThunk (void);
extern void U3CGetTokenSupplyAsyncU3Ed__109_SetStateMachine_m74420718BFCAFABE70E986AB4EB7308DC67CF382_AdjustorThunk (void);
extern void U3CGetTransactionAsyncU3Ed__39_MoveNext_m909B3974F1EDAD2C78A536CD9325033AF60CB0CD_AdjustorThunk (void);
extern void U3CGetTransactionAsyncU3Ed__39_SetStateMachine_m028D146CEF9BDB81A6DB19DA1F9ECF919F30CFD0_AdjustorThunk (void);
extern void U3CGetTransactionCountAsyncU3Ed__111_MoveNext_mB86E4C231E90F0430A2B4900BFF1627AC2C25EF9_AdjustorThunk (void);
extern void U3CGetTransactionCountAsyncU3Ed__111_SetStateMachine_m7FDA46901D98250361B82DA7B3B0FEB4F7B3E770_AdjustorThunk (void);
extern void U3CGetVersionAsyncU3Ed__113_MoveNext_mB7E019E3A1EED9010664EDDDD5F514127463F4CA_AdjustorThunk (void);
extern void U3CGetVersionAsyncU3Ed__113_SetStateMachine_m465BD30FE8C07CC289B7E8E12076E6FB1B114A9A_AdjustorThunk (void);
extern void U3CGetVoteAccountsAsyncU3Ed__115_MoveNext_m3B88ECC334A2896C8F9D14DD13A77D3E40D5ED45_AdjustorThunk (void);
extern void U3CGetVoteAccountsAsyncU3Ed__115_SetStateMachine_m07C9A2343DB395D9E76A0237259669A559554665_AdjustorThunk (void);
extern void U3CRequestAirdropAsyncU3Ed__119_MoveNext_m05F0111C27937451BF35892DFB8E5E457B38CDDF_AdjustorThunk (void);
extern void U3CRequestAirdropAsyncU3Ed__119_SetStateMachine_m88D74D5A424DAD8F3FB06374988AD2D11470AA8F_AdjustorThunk (void);
extern void U3CSendTransactionAsyncU3Ed__121_MoveNext_mAE4CE51B900D5F81327DC7E3BC990744E528AA48_AdjustorThunk (void);
extern void U3CSendTransactionAsyncU3Ed__121_SetStateMachine_m03FE3FBDCB3C8D4590C087D4CD541BE5A0ECC324_AdjustorThunk (void);
extern void U3CSendTransactionAsyncU3Ed__122_MoveNext_mD9DB6D37CCE182A8E180E5D887B34F8202C669DB_AdjustorThunk (void);
extern void U3CSendTransactionAsyncU3Ed__122_SetStateMachine_m595047542F3E115C37189E0688421FAE5EF11C59_AdjustorThunk (void);
extern void U3CSimulateTransactionAsyncU3Ed__125_MoveNext_mDC75A7A8EF3BDB28C91155B9F68E354E2D527F64_AdjustorThunk (void);
extern void U3CSimulateTransactionAsyncU3Ed__125_SetStateMachine_mA797B71798BF8F94F5B3ED23A11222CEFFDB6969_AdjustorThunk (void);
extern void U3CSimulateTransactionAsyncU3Ed__126_MoveNext_m0CFDE38809B9FD971206DD76BF1E9EDCE78B9FD4_AdjustorThunk (void);
extern void U3CSimulateTransactionAsyncU3Ed__126_SetStateMachine_m38969B4936916C6B5536A490E1E705BF09674167_AdjustorThunk (void);
extern void U3CSubscribeU3Ed__29_MoveNext_m19A74F8BF4EE77CF816F8E816B6E06867176C751_AdjustorThunk (void);
extern void U3CSubscribeU3Ed__29_SetStateMachine_m88CC88B3C6D5C8C343D4091BC27B0743745288C8_AdjustorThunk (void);
extern void U3CSubscribeAccountInfoAsyncU3Ed__13_MoveNext_mE81C5971A3750466A46FB8CFC0CB368F18BA1122_AdjustorThunk (void);
extern void U3CSubscribeAccountInfoAsyncU3Ed__13_SetStateMachine_mC09608BF9D44EA7677528E1C2692E6860C741889_AdjustorThunk (void);
extern void U3CSubscribeLogInfoAsyncU3Ed__17_MoveNext_mEEE821833DA66684EAD9C0D8624EA8CF3ADF7570_AdjustorThunk (void);
extern void U3CSubscribeLogInfoAsyncU3Ed__17_SetStateMachine_mD3A64E51D44D61D7375E3108FF10B8EDA6317D21_AdjustorThunk (void);
extern void U3CSubscribeLogInfoAsyncU3Ed__19_MoveNext_mB3C1BDBFDC09610FB5AFFF068EB1A863ED3A0A4C_AdjustorThunk (void);
extern void U3CSubscribeLogInfoAsyncU3Ed__19_SetStateMachine_m4ED24DA7E0A5E71356B1BF07CB17ABEE88DAF12F_AdjustorThunk (void);
extern void U3CSubscribeProgramAsyncU3Ed__23_MoveNext_m9629EE5778F56EF8AF992440C9EDD7E4E6BDC184_AdjustorThunk (void);
extern void U3CSubscribeProgramAsyncU3Ed__23_SetStateMachine_mD9A4B6DFE69FAD8D9304E677D17E6799DDE6D9E5_AdjustorThunk (void);
extern void U3CSubscribeRootAsyncU3Ed__27_MoveNext_m2448A04EF9D140297BEEDCDC19F265715D08BACF_AdjustorThunk (void);
extern void U3CSubscribeRootAsyncU3Ed__27_SetStateMachine_m69140B0FF5BFCE9D475E7B53AE1A1BAC87659CE6_AdjustorThunk (void);
extern void U3CSubscribeSignatureAsyncU3Ed__21_MoveNext_m58FF5A15210282468617586AEC1BBF42826B7DC2_AdjustorThunk (void);
extern void U3CSubscribeSignatureAsyncU3Ed__21_SetStateMachine_m038818C1B3BEB7D99D929198B33173F2E6295A16_AdjustorThunk (void);
extern void U3CSubscribeSlotInfoAsyncU3Ed__25_MoveNext_mD6F327BAA3F3389B45F8287177A30656AFBC2E04_AdjustorThunk (void);
extern void U3CSubscribeSlotInfoAsyncU3Ed__25_SetStateMachine_mA2A10DD6730558C18A4BE32BB1E66D02C6E5E342_AdjustorThunk (void);
extern void U3CSubscribeTokenAccountAsyncU3Ed__15_MoveNext_mAF96E43CD08E88423163E5DFBAD83C4153FC9AD2_AdjustorThunk (void);
extern void U3CSubscribeTokenAccountAsyncU3Ed__15_SetStateMachine_m64382CECC589211FD7C507A6E809CC5589AF884D_AdjustorThunk (void);
extern void U3CUnsubscribeAsyncU3Ed__31_MoveNext_m93CE65AF724FB6C4C59703BF8F4DC177F356F697_AdjustorThunk (void);
extern void U3CUnsubscribeAsyncU3Ed__31_SetStateMachine_m148594523555676BE148B395C58A7E0C30489973_AdjustorThunk (void);
extern void U3CConnectAsyncU3Ed__16_MoveNext_m231FF9BF3459368286A5D8E5AEBC061438DC2774_AdjustorThunk (void);
extern void U3CConnectAsyncU3Ed__16_SetStateMachine_m3BEA29BA9635C5D68AE6FE4FF2F70486C52EB272_AdjustorThunk (void);
extern void U3CDisconnectAsyncU3Ed__17_MoveNext_mBA9771CC74FC8E8FB18D87F02EB3916CAA3E980B_AdjustorThunk (void);
extern void U3CDisconnectAsyncU3Ed__17_SetStateMachine_m9AFA2B64EC88D23BF280B982EFD8CABE7580BFCD_AdjustorThunk (void);
extern void U3CReadNextMessageU3Ed__19_MoveNext_m0B9B6FE31B5B8D964C663C576885DC7AA6779905_AdjustorThunk (void);
extern void U3CReadNextMessageU3Ed__19_SetStateMachine_m2ED23CA5FF66774D0A0A41873E49F2FDD2941953_AdjustorThunk (void);
extern void U3CStartListeningU3Ed__18_MoveNext_m725C7EF6651CDF3E4AB5D910FAC6002F67F59BE3_AdjustorThunk (void);
extern void U3CStartListeningU3Ed__18_SetStateMachine_mE665A6E42184DE93940063479A95A177F7C98636_AdjustorThunk (void);
extern void U3CUnsubscribeAsyncU3Ed__33_MoveNext_m9844309C0213DEDA669526F8AF5395B0712BEA5E_AdjustorThunk (void);
extern void U3CUnsubscribeAsyncU3Ed__33_SetStateMachine_mFED2A9628DFDDE68592F9D6E99BF454A30048612_AdjustorThunk (void);
extern void U3CHandleBatchResultU3Ed__11_MoveNext_mA1E25865F5F0A29CBFF7E44A8644512F61186ACD_AdjustorThunk (void);
extern void U3CHandleBatchResultU3Ed__11_SetStateMachine_mA545527D52AE171E953D22147DE199BA0322E4E6_AdjustorThunk (void);
extern void U3CSendAsyncRequestU3Ed__13_MoveNext_mE43C7E980835C082EA2186A732E6675F551FF30D_AdjustorThunk (void);
extern void U3CSendAsyncRequestU3Ed__13_SetStateMachine_mA6ECF580EFC00856519425D09A5DB1C92D5E3813_AdjustorThunk (void);
extern void U3CSendBatchRequestAsyncU3Ed__10_MoveNext_mAD39C189E6E6F4A319164BE543A9A6451921BBD0_AdjustorThunk (void);
extern void U3CSendBatchRequestAsyncU3Ed__10_SetStateMachine_mF09646C90792F0A88DA079AC80C4E5E479D3C6C9_AdjustorThunk (void);
extern void U3CSendUnityWebRequestU3Ed__14_MoveNext_mA1798666235B99E241A25860C264189CAE6C11A9_AdjustorThunk (void);
extern void U3CSendUnityWebRequestU3Ed__14_SetStateMachine_mF98C2B9241F540BC219475D99EBB456A97F9A531_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[168] = 
{
	{ 0x060000BE, U3CExecuteAsyncU3Ed__12_MoveNext_m2F637C16F979AE8C29FB9E4AEF7EAF071489BD8C_AdjustorThunk },
	{ 0x060000BF, U3CExecuteAsyncU3Ed__12_SetStateMachine_m1BF5DEACEB000B88E9CA4594D31D6DC1F5DBED58_AdjustorThunk },
	{ 0x060000C0, U3CExecuteAsyncU3Ed__13_MoveNext_mD936A1654134C05EECE48FA8819C26B7F2282B8D_AdjustorThunk },
	{ 0x060000C1, U3CExecuteAsyncU3Ed__13_SetStateMachine_m96D7B9BA93CBB97CAE2A66B7C78F1050991105A1_AdjustorThunk },
	{ 0x060000C2, U3CExecuteWithFatalFailureAsyncU3Ed__16_MoveNext_m72AB9CBB2C415D6E2102B6F15FF53E56A1F22516_AdjustorThunk },
	{ 0x060000C3, U3CExecuteWithFatalFailureAsyncU3Ed__16_SetStateMachine_mB8F354000925849D2705CACD633C04533EED2349_AdjustorThunk },
	{ 0x060000C4, U3CExecuteWithFatalFailureAsyncU3Ed__17_MoveNext_m89DA6E27095FCB8783D40BD3EBA9E789A10D77A9_AdjustorThunk },
	{ 0x060000C5, U3CExecuteWithFatalFailureAsyncU3Ed__17_SetStateMachine_m84A26300C6E837A171DD36F119FA218C616350BE_AdjustorThunk },
	{ 0x06000160, U3CGetAccountInfoAsyncU3Ed__11_MoveNext_m71A035652C4E20F2C1238210D19531DBA9EBC7F4_AdjustorThunk },
	{ 0x06000161, U3CGetAccountInfoAsyncU3Ed__11_SetStateMachine_m918F91204F4FBD26C53F53C9DABEDC05EAF67D1F_AdjustorThunk },
	{ 0x06000162, U3CGetBalanceAsyncU3Ed__17_MoveNext_m4F5CB517DCA9EDD3965B7B775A9A44197FFE7045_AdjustorThunk },
	{ 0x06000163, U3CGetBalanceAsyncU3Ed__17_SetStateMachine_mAE9B7B6827A2AE676475B89A243C6E5EADF174F5_AdjustorThunk },
	{ 0x06000164, U3CGetBlockAsyncU3Ed__19_MoveNext_mF1A80C3F7F4ED121C65A2E7883EA910BD78A897F_AdjustorThunk },
	{ 0x06000165, U3CGetBlockAsyncU3Ed__19_SetStateMachine_m3C66FE1A018DD6F5845EFC4FD1DC7413278A1156_AdjustorThunk },
	{ 0x06000166, U3CGetBlockCommitmentAsyncU3Ed__45_MoveNext_m0F1313671C8CD1104F25E931C1227964717DA365_AdjustorThunk },
	{ 0x06000167, U3CGetBlockCommitmentAsyncU3Ed__45_SetStateMachine_m2A2B3D8A807312480BC5C1C7E4068141CE152FDC_AdjustorThunk },
	{ 0x06000168, U3CGetBlockHeightAsyncU3Ed__43_MoveNext_m260547E20CE2CCF532A28643C28C60E653869779_AdjustorThunk },
	{ 0x06000169, U3CGetBlockHeightAsyncU3Ed__43_SetStateMachine_m08B1445FDB8ED54D256DE70A07D993996955DB79_AdjustorThunk },
	{ 0x0600016A, U3CGetBlockProductionAsyncU3Ed__33_MoveNext_mE48D8A3D4CE678528DC30DE3E9C311187BFAEBA2_AdjustorThunk },
	{ 0x0600016B, U3CGetBlockProductionAsyncU3Ed__33_SetStateMachine_m9619E9B9D3980BEC46017DBC8FE8B5BAA1C9A5AD_AdjustorThunk },
	{ 0x0600016C, U3CGetBlockTimeAsyncU3Ed__47_MoveNext_m11C616CA46C66F321C2F896F27F9C611B4ECAC8B_AdjustorThunk },
	{ 0x0600016D, U3CGetBlockTimeAsyncU3Ed__47_SetStateMachine_mB3E9DF73B7988E360A37C8A3AE98DC5A44352CD5_AdjustorThunk },
	{ 0x0600016E, U3CGetBlocksAsyncU3Ed__21_MoveNext_mC0B59AFB286D4C89DAF4AC612F859C6FF4D891D9_AdjustorThunk },
	{ 0x0600016F, U3CGetBlocksAsyncU3Ed__21_SetStateMachine_m3A54F7D4A7B4FCE37F26485E20108EE1F2455F1C_AdjustorThunk },
	{ 0x06000170, U3CGetBlocksWithLimitAsyncU3Ed__30_MoveNext_m6FDB251EC76756F620F26A86BE367C3AE72D05BA_AdjustorThunk },
	{ 0x06000171, U3CGetBlocksWithLimitAsyncU3Ed__30_SetStateMachine_mE4708412237CAEDB998216CF3F049250E3659961_AdjustorThunk },
	{ 0x06000172, U3CGetClusterNodesAsyncU3Ed__49_MoveNext_m4CE4236A15EA5B96A27E4F65C4EC55644324098E_AdjustorThunk },
	{ 0x06000173, U3CGetClusterNodesAsyncU3Ed__49_SetStateMachine_m7C3F8EC519D85CF1C43376240AFDE1AF7BD054F8_AdjustorThunk },
	{ 0x06000174, U3CGetConfirmedBlockAsyncU3Ed__22_MoveNext_m449B330D80F8F14E6B3C85E796AB3A20FEB36404_AdjustorThunk },
	{ 0x06000175, U3CGetConfirmedBlockAsyncU3Ed__22_SetStateMachine_mD0230753A0A883461893836E4B5A80526FEDBE2B_AdjustorThunk },
	{ 0x06000176, U3CGetConfirmedBlocksAsyncU3Ed__25_MoveNext_mFEC32FB8DF8B26C7E8BB03E76D545E7919AFA36F_AdjustorThunk },
	{ 0x06000177, U3CGetConfirmedBlocksAsyncU3Ed__25_SetStateMachine_m408BDA98333EC31E1BE65C8C72E88F698BB00015_AdjustorThunk },
	{ 0x06000178, U3CGetConfirmedBlocksWithLimitAsyncU3Ed__27_MoveNext_m6961A2C6394CF1618783F5E1C0B4D06FDDAB7E27_AdjustorThunk },
	{ 0x06000179, U3CGetConfirmedBlocksWithLimitAsyncU3Ed__27_SetStateMachine_m34D81FF9A155D8FF3495FBFF115DAEB0B371BF52_AdjustorThunk },
	{ 0x0600017A, U3CGetConfirmedSignaturesForAddress2AsyncU3Ed__86_MoveNext_mCF515026A73E21E519CA21F62FE3E2146536D45F_AdjustorThunk },
	{ 0x0600017B, U3CGetConfirmedSignaturesForAddress2AsyncU3Ed__86_SetStateMachine_m077004FFF2BE2F1F34771277E7588B3E58340B9F_AdjustorThunk },
	{ 0x0600017C, U3CGetConfirmedTransactionAsyncU3Ed__40_MoveNext_m21CEF49718574EFEC689A84C812DD0BF329533BA_AdjustorThunk },
	{ 0x0600017D, U3CGetConfirmedTransactionAsyncU3Ed__40_SetStateMachine_m5DEACA442081D0F350CF2B4A9599BF2B2E444DA2_AdjustorThunk },
	{ 0x0600017E, U3CGetEpochInfoAsyncU3Ed__51_MoveNext_m884460B5CEB552BE3C41BC53E29D6233D468740F_AdjustorThunk },
	{ 0x0600017F, U3CGetEpochInfoAsyncU3Ed__51_SetStateMachine_mC942E328FB8CD1C7BB3E9AC296C79674D97A02AE_AdjustorThunk },
	{ 0x06000180, U3CGetEpochScheduleAsyncU3Ed__53_MoveNext_m0C7EA807EDB7B84A18197EB7B674C3825D167E84_AdjustorThunk },
	{ 0x06000181, U3CGetEpochScheduleAsyncU3Ed__53_SetStateMachine_m1619AD8C289B3FE979384856CEE18915E35ECF82_AdjustorThunk },
	{ 0x06000182, U3CGetFeeCalculatorForBlockhashAsyncU3Ed__55_MoveNext_m6B3F43E8A6230F6624673F3869DCF17FC552D4D5_AdjustorThunk },
	{ 0x06000183, U3CGetFeeCalculatorForBlockhashAsyncU3Ed__55_SetStateMachine_mC9581F6D6637E22AFAF2E74FC7295E35B27575A7_AdjustorThunk },
	{ 0x06000184, U3CGetFeeRateGovernorAsyncU3Ed__57_MoveNext_m4567AC38AB7748BDD389A2404A7DA4B8616FD1FE_AdjustorThunk },
	{ 0x06000185, U3CGetFeeRateGovernorAsyncU3Ed__57_SetStateMachine_m672022222A7DD8676C9CD8F0CDDD475D7F2E1E4F_AdjustorThunk },
	{ 0x06000186, U3CGetFeesAsyncU3Ed__59_MoveNext_m777F047242526E748A8B2EF113EB58479DB8891F_AdjustorThunk },
	{ 0x06000187, U3CGetFeesAsyncU3Ed__59_SetStateMachine_mB20F39D8716C914809FA7FFA5BF9C368FAF7450A_AdjustorThunk },
	{ 0x06000188, U3CGetFirstAvailableBlockAsyncU3Ed__32_MoveNext_m297DD632FFAB265819B6C0D1DF2438166D4DE6CB_AdjustorThunk },
	{ 0x06000189, U3CGetFirstAvailableBlockAsyncU3Ed__32_SetStateMachine_m6F61A9EE0D127523319A47E048EF5EE7B9EF9DEC_AdjustorThunk },
	{ 0x0600018A, U3CGetGenesisHashAsyncU3Ed__69_MoveNext_mE441AAA63680A1AD6D9D7DDA157E81EED46D7E9C_AdjustorThunk },
	{ 0x0600018B, U3CGetGenesisHashAsyncU3Ed__69_SetStateMachine_m2C7DC1E41303B657E41D25F8EAE6BD5FB451FA82_AdjustorThunk },
	{ 0x0600018C, U3CGetHealthAsyncU3Ed__36_MoveNext_mE7FB1473AD9F334961DFB003217F07C3CBFD688F_AdjustorThunk },
	{ 0x0600018D, U3CGetHealthAsyncU3Ed__36_SetStateMachine_mD428B47CC9937F03A47430D9C5443C0AA04D9519_AdjustorThunk },
	{ 0x0600018E, U3CGetIdentityAsyncU3Ed__71_MoveNext_m982C5109F1C0DE4A12BC57D22D6854DD9E2E0794_AdjustorThunk },
	{ 0x0600018F, U3CGetIdentityAsyncU3Ed__71_SetStateMachine_mE5D50C8E9C5D4980AF46D301EB7AF2C8413921C1_AdjustorThunk },
	{ 0x06000190, U3CGetInflationGovernorAsyncU3Ed__73_MoveNext_mDC4721BBCBF9435DB842D416D28FBFA755A36ECB_AdjustorThunk },
	{ 0x06000191, U3CGetInflationGovernorAsyncU3Ed__73_SetStateMachine_mE4C760EDF2599140AA81C588EF155445C9906883_AdjustorThunk },
	{ 0x06000192, U3CGetInflationRateAsyncU3Ed__75_MoveNext_mB35278FB495171CFFBDA3209E6CD2D4A6905C3FA_AdjustorThunk },
	{ 0x06000193, U3CGetInflationRateAsyncU3Ed__75_SetStateMachine_mCCED976193DBA6376B63D9E9213E0C425327437A_AdjustorThunk },
	{ 0x06000194, U3CGetInflationRewardAsyncU3Ed__77_MoveNext_m74103BF4FEA13D6F999C6E1AB2A70A356A6517D6_AdjustorThunk },
	{ 0x06000195, U3CGetInflationRewardAsyncU3Ed__77_SetStateMachine_m3F53A9EB0CB5AABAC03647708C373273D7696FCC_AdjustorThunk },
	{ 0x06000196, U3CGetLargestAccountsAsyncU3Ed__79_MoveNext_m5227EDF6BC7C7428880FCA8B8DB904DFD39BAFA6_AdjustorThunk },
	{ 0x06000197, U3CGetLargestAccountsAsyncU3Ed__79_SetStateMachine_mB9DE4130BA71294F4E4E48FDFBA836848E92F59D_AdjustorThunk },
	{ 0x06000198, U3CGetLeaderScheduleAsyncU3Ed__38_MoveNext_mA7B2522A6CB093BA92ADF307A9DF58FEAA197720_AdjustorThunk },
	{ 0x06000199, U3CGetLeaderScheduleAsyncU3Ed__38_SetStateMachine_m1DF01C66460141C51EC5191005963C0A8AA7FEE8_AdjustorThunk },
	{ 0x0600019A, U3CGetMaxRetransmitSlotAsyncU3Ed__63_MoveNext_m9D0335162A98DEFFE62A80D7F97B23CD99993B65_AdjustorThunk },
	{ 0x0600019B, U3CGetMaxRetransmitSlotAsyncU3Ed__63_SetStateMachine_mB2641299C98B42D5E915A3D7DC8A5C7E2E6582C9_AdjustorThunk },
	{ 0x0600019C, U3CGetMaxShredInsertSlotAsyncU3Ed__65_MoveNext_m931457A8375554386F04DDF7F57B758E7F160468_AdjustorThunk },
	{ 0x0600019D, U3CGetMaxShredInsertSlotAsyncU3Ed__65_SetStateMachine_mB6DA78BC7C2C06FD40EAB66CAEF9978F92CAAC41_AdjustorThunk },
	{ 0x0600019E, U3CGetMinimumBalanceForRentExemptionAsyncU3Ed__67_MoveNext_m221CA08C4EC6CDC60A81549900BA7771F74E6690_AdjustorThunk },
	{ 0x0600019F, U3CGetMinimumBalanceForRentExemptionAsyncU3Ed__67_SetStateMachine_m61768E112AE3695CCA2360B168038E3914486B9D_AdjustorThunk },
	{ 0x060001A0, U3CGetMinimumLedgerSlotAsyncU3Ed__117_MoveNext_m390631849901AEBECA02C26DB3ED362935AD5AE4_AdjustorThunk },
	{ 0x060001A1, U3CGetMinimumLedgerSlotAsyncU3Ed__117_SetStateMachine_m8B55DEC32C67E0BF87BD1612E438D5445C299698_AdjustorThunk },
	{ 0x060001A2, U3CGetMultipleAccountsAsyncU3Ed__15_MoveNext_m565E691948863B49019358885C7E17FA81F20D70_AdjustorThunk },
	{ 0x060001A3, U3CGetMultipleAccountsAsyncU3Ed__15_SetStateMachine_m71C7AE6D8849F3C9C30C9111DB21B5E096F1FEB8_AdjustorThunk },
	{ 0x060001A4, U3CGetProgramAccountsAsyncU3Ed__13_MoveNext_mDD3EE587B4DF999973E5BB341C653695F7752E35_AdjustorThunk },
	{ 0x060001A5, U3CGetProgramAccountsAsyncU3Ed__13_SetStateMachine_mDC5A34888DFA4807600D4000C39AE9AC0366C85E_AdjustorThunk },
	{ 0x060001A6, U3CGetRecentBlockHashAsyncU3Ed__61_MoveNext_m592D9D93066B6F4CB059DBAC7F4B9E2EB0912D9A_AdjustorThunk },
	{ 0x060001A7, U3CGetRecentBlockHashAsyncU3Ed__61_SetStateMachine_mACE64BD81C63DD882591CA6D5C345831EF0345C6_AdjustorThunk },
	{ 0x060001A8, U3CGetRecentPerformanceSamplesAsyncU3Ed__83_MoveNext_mEACF6DF7EAE932558F4A75011EFD340EEFDE24A1_AdjustorThunk },
	{ 0x060001A9, U3CGetRecentPerformanceSamplesAsyncU3Ed__83_SetStateMachine_m5176600569417A469C4BD6D65DBCFC3CFD0B85BA_AdjustorThunk },
	{ 0x060001AA, U3CGetSignatureStatusesAsyncU3Ed__89_MoveNext_mE01EB348A879AF02EB7D5EC23D728EF7B729A16B_AdjustorThunk },
	{ 0x060001AB, U3CGetSignatureStatusesAsyncU3Ed__89_SetStateMachine_m859B14153AE2B89AF84C9FED75572987D56EE67F_AdjustorThunk },
	{ 0x060001AC, U3CGetSignaturesForAddressAsyncU3Ed__85_MoveNext_m50D89D991424FA736F45E5B61A3047E180C337B0_AdjustorThunk },
	{ 0x060001AD, U3CGetSignaturesForAddressAsyncU3Ed__85_SetStateMachine_m8E8FF95E6BB7CF72E596390AB5BFE50B2F7A219E_AdjustorThunk },
	{ 0x060001AE, U3CGetSlotAsyncU3Ed__91_MoveNext_m7D6C1B33B4968E5CF38E2DCEAAB56EB2E059854A_AdjustorThunk },
	{ 0x060001AF, U3CGetSlotAsyncU3Ed__91_SetStateMachine_mC66DC91641CE350292E957C74065BB187424A8EF_AdjustorThunk },
	{ 0x060001B0, U3CGetSlotLeaderAsyncU3Ed__93_MoveNext_m93B1E6355EC7EFA958EB328C9140E165DFF56400_AdjustorThunk },
	{ 0x060001B1, U3CGetSlotLeaderAsyncU3Ed__93_SetStateMachine_m562AC03AF88983C4B4BA2549BC539B03C42E2A0C_AdjustorThunk },
	{ 0x060001B2, U3CGetSlotLeadersAsyncU3Ed__95_MoveNext_mE95B076243894EF4452842531D908113A8F4495F_AdjustorThunk },
	{ 0x060001B3, U3CGetSlotLeadersAsyncU3Ed__95_SetStateMachine_m1FEE1B7E1C54412C210F21E2A77ADBB59734D0E2_AdjustorThunk },
	{ 0x060001B4, U3CGetSnapshotSlotAsyncU3Ed__81_MoveNext_m971A83DD4E5BB58F4E30BAC5AF66F138764DA563_AdjustorThunk },
	{ 0x060001B5, U3CGetSnapshotSlotAsyncU3Ed__81_SetStateMachine_m5298400BAAFBF35A206F0946AB73164A9B6320E3_AdjustorThunk },
	{ 0x060001B6, U3CGetStakeActivationAsyncU3Ed__97_MoveNext_m91448D031570AED4F8D28F75ED78DEFEDB00B52F_AdjustorThunk },
	{ 0x060001B7, U3CGetStakeActivationAsyncU3Ed__97_SetStateMachine_m891AF9FF8E86036B50E69841CB4F0B2D2E5FB395_AdjustorThunk },
	{ 0x060001B8, U3CGetSupplyAsyncU3Ed__99_MoveNext_m25F34F3102EF87622C30B13A6A2F6FABDF32D664_AdjustorThunk },
	{ 0x060001B9, U3CGetSupplyAsyncU3Ed__99_SetStateMachine_m811BD303EAED9DC9CA9BBC5EFC0C943437AC357C_AdjustorThunk },
	{ 0x060001BA, U3CGetTokenAccountBalanceAsyncU3Ed__101_MoveNext_mD7B586BA20F1A52BE54A52D71F13C8F6CA74FE14_AdjustorThunk },
	{ 0x060001BB, U3CGetTokenAccountBalanceAsyncU3Ed__101_SetStateMachine_m19EDD46D57FC1C0A3FB0A35C2B5D3D6E45984A48_AdjustorThunk },
	{ 0x060001BC, U3CGetTokenAccountInfoAsyncU3Ed__9_MoveNext_m43784E0CE9BB805471C63AF4A22121C827C6AAA6_AdjustorThunk },
	{ 0x060001BD, U3CGetTokenAccountInfoAsyncU3Ed__9_SetStateMachine_m9BA43BFD5D20A73111E43C86DE954C14BE0E208E_AdjustorThunk },
	{ 0x060001BE, U3CGetTokenAccountsByDelegateAsyncU3Ed__103_MoveNext_mDEEA11C0EC668229C498418CD65883C7D9BB2405_AdjustorThunk },
	{ 0x060001BF, U3CGetTokenAccountsByDelegateAsyncU3Ed__103_SetStateMachine_m7A2DCB4ED5AA9CA52DB0C768C575452C3A60F0EF_AdjustorThunk },
	{ 0x060001C0, U3CGetTokenAccountsByOwnerAsyncU3Ed__105_MoveNext_mCCD2253E9E2F01A8C3A107BAFE7648F25F883453_AdjustorThunk },
	{ 0x060001C1, U3CGetTokenAccountsByOwnerAsyncU3Ed__105_SetStateMachine_mDFE5C6978DDA26D57988F367AF5D25AFF07DADBC_AdjustorThunk },
	{ 0x060001C2, U3CGetTokenLargestAccountsAsyncU3Ed__107_MoveNext_m7723FA4D5BF5626611D94849DAD203E01ACAB7D2_AdjustorThunk },
	{ 0x060001C3, U3CGetTokenLargestAccountsAsyncU3Ed__107_SetStateMachine_mA7DC5871EE47CE9E7C02072825FF9B4A49A01270_AdjustorThunk },
	{ 0x060001C4, U3CGetTokenMintInfoAsyncU3Ed__7_MoveNext_mB0CA133B363669AAA6D812F41BD826E1D1564627_AdjustorThunk },
	{ 0x060001C5, U3CGetTokenMintInfoAsyncU3Ed__7_SetStateMachine_mE12009A75BD318ABF581615DF0F7C7607D30065F_AdjustorThunk },
	{ 0x060001C6, U3CGetTokenSupplyAsyncU3Ed__109_MoveNext_mFB9033CCF1135C2C8A6BF6E15D18DFBC1324CB30_AdjustorThunk },
	{ 0x060001C7, U3CGetTokenSupplyAsyncU3Ed__109_SetStateMachine_m74420718BFCAFABE70E986AB4EB7308DC67CF382_AdjustorThunk },
	{ 0x060001C8, U3CGetTransactionAsyncU3Ed__39_MoveNext_m909B3974F1EDAD2C78A536CD9325033AF60CB0CD_AdjustorThunk },
	{ 0x060001C9, U3CGetTransactionAsyncU3Ed__39_SetStateMachine_m028D146CEF9BDB81A6DB19DA1F9ECF919F30CFD0_AdjustorThunk },
	{ 0x060001CA, U3CGetTransactionCountAsyncU3Ed__111_MoveNext_mB86E4C231E90F0430A2B4900BFF1627AC2C25EF9_AdjustorThunk },
	{ 0x060001CB, U3CGetTransactionCountAsyncU3Ed__111_SetStateMachine_m7FDA46901D98250361B82DA7B3B0FEB4F7B3E770_AdjustorThunk },
	{ 0x060001CC, U3CGetVersionAsyncU3Ed__113_MoveNext_mB7E019E3A1EED9010664EDDDD5F514127463F4CA_AdjustorThunk },
	{ 0x060001CD, U3CGetVersionAsyncU3Ed__113_SetStateMachine_m465BD30FE8C07CC289B7E8E12076E6FB1B114A9A_AdjustorThunk },
	{ 0x060001CE, U3CGetVoteAccountsAsyncU3Ed__115_MoveNext_m3B88ECC334A2896C8F9D14DD13A77D3E40D5ED45_AdjustorThunk },
	{ 0x060001CF, U3CGetVoteAccountsAsyncU3Ed__115_SetStateMachine_m07C9A2343DB395D9E76A0237259669A559554665_AdjustorThunk },
	{ 0x060001D0, U3CRequestAirdropAsyncU3Ed__119_MoveNext_m05F0111C27937451BF35892DFB8E5E457B38CDDF_AdjustorThunk },
	{ 0x060001D1, U3CRequestAirdropAsyncU3Ed__119_SetStateMachine_m88D74D5A424DAD8F3FB06374988AD2D11470AA8F_AdjustorThunk },
	{ 0x060001D6, U3CSendTransactionAsyncU3Ed__121_MoveNext_mAE4CE51B900D5F81327DC7E3BC990744E528AA48_AdjustorThunk },
	{ 0x060001D7, U3CSendTransactionAsyncU3Ed__121_SetStateMachine_m03FE3FBDCB3C8D4590C087D4CD541BE5A0ECC324_AdjustorThunk },
	{ 0x060001D8, U3CSendTransactionAsyncU3Ed__122_MoveNext_mD9DB6D37CCE182A8E180E5D887B34F8202C669DB_AdjustorThunk },
	{ 0x060001D9, U3CSendTransactionAsyncU3Ed__122_SetStateMachine_m595047542F3E115C37189E0688421FAE5EF11C59_AdjustorThunk },
	{ 0x060001DA, U3CSimulateTransactionAsyncU3Ed__125_MoveNext_mDC75A7A8EF3BDB28C91155B9F68E354E2D527F64_AdjustorThunk },
	{ 0x060001DB, U3CSimulateTransactionAsyncU3Ed__125_SetStateMachine_mA797B71798BF8F94F5B3ED23A11222CEFFDB6969_AdjustorThunk },
	{ 0x060001DC, U3CSimulateTransactionAsyncU3Ed__126_MoveNext_m0CFDE38809B9FD971206DD76BF1E9EDCE78B9FD4_AdjustorThunk },
	{ 0x060001DD, U3CSimulateTransactionAsyncU3Ed__126_SetStateMachine_m38969B4936916C6B5536A490E1E705BF09674167_AdjustorThunk },
	{ 0x060001FD, U3CSubscribeU3Ed__29_MoveNext_m19A74F8BF4EE77CF816F8E816B6E06867176C751_AdjustorThunk },
	{ 0x060001FE, U3CSubscribeU3Ed__29_SetStateMachine_m88CC88B3C6D5C8C343D4091BC27B0743745288C8_AdjustorThunk },
	{ 0x060001FF, U3CSubscribeAccountInfoAsyncU3Ed__13_MoveNext_mE81C5971A3750466A46FB8CFC0CB368F18BA1122_AdjustorThunk },
	{ 0x06000200, U3CSubscribeAccountInfoAsyncU3Ed__13_SetStateMachine_mC09608BF9D44EA7677528E1C2692E6860C741889_AdjustorThunk },
	{ 0x06000201, U3CSubscribeLogInfoAsyncU3Ed__17_MoveNext_mEEE821833DA66684EAD9C0D8624EA8CF3ADF7570_AdjustorThunk },
	{ 0x06000202, U3CSubscribeLogInfoAsyncU3Ed__17_SetStateMachine_mD3A64E51D44D61D7375E3108FF10B8EDA6317D21_AdjustorThunk },
	{ 0x06000203, U3CSubscribeLogInfoAsyncU3Ed__19_MoveNext_mB3C1BDBFDC09610FB5AFFF068EB1A863ED3A0A4C_AdjustorThunk },
	{ 0x06000204, U3CSubscribeLogInfoAsyncU3Ed__19_SetStateMachine_m4ED24DA7E0A5E71356B1BF07CB17ABEE88DAF12F_AdjustorThunk },
	{ 0x06000205, U3CSubscribeProgramAsyncU3Ed__23_MoveNext_m9629EE5778F56EF8AF992440C9EDD7E4E6BDC184_AdjustorThunk },
	{ 0x06000206, U3CSubscribeProgramAsyncU3Ed__23_SetStateMachine_mD9A4B6DFE69FAD8D9304E677D17E6799DDE6D9E5_AdjustorThunk },
	{ 0x06000207, U3CSubscribeRootAsyncU3Ed__27_MoveNext_m2448A04EF9D140297BEEDCDC19F265715D08BACF_AdjustorThunk },
	{ 0x06000208, U3CSubscribeRootAsyncU3Ed__27_SetStateMachine_m69140B0FF5BFCE9D475E7B53AE1A1BAC87659CE6_AdjustorThunk },
	{ 0x06000209, U3CSubscribeSignatureAsyncU3Ed__21_MoveNext_m58FF5A15210282468617586AEC1BBF42826B7DC2_AdjustorThunk },
	{ 0x0600020A, U3CSubscribeSignatureAsyncU3Ed__21_SetStateMachine_m038818C1B3BEB7D99D929198B33173F2E6295A16_AdjustorThunk },
	{ 0x0600020B, U3CSubscribeSlotInfoAsyncU3Ed__25_MoveNext_mD6F327BAA3F3389B45F8287177A30656AFBC2E04_AdjustorThunk },
	{ 0x0600020C, U3CSubscribeSlotInfoAsyncU3Ed__25_SetStateMachine_mA2A10DD6730558C18A4BE32BB1E66D02C6E5E342_AdjustorThunk },
	{ 0x0600020D, U3CSubscribeTokenAccountAsyncU3Ed__15_MoveNext_mAF96E43CD08E88423163E5DFBAD83C4153FC9AD2_AdjustorThunk },
	{ 0x0600020E, U3CSubscribeTokenAccountAsyncU3Ed__15_SetStateMachine_m64382CECC589211FD7C507A6E809CC5589AF884D_AdjustorThunk },
	{ 0x0600020F, U3CUnsubscribeAsyncU3Ed__31_MoveNext_m93CE65AF724FB6C4C59703BF8F4DC177F356F697_AdjustorThunk },
	{ 0x06000210, U3CUnsubscribeAsyncU3Ed__31_SetStateMachine_m148594523555676BE148B395C58A7E0C30489973_AdjustorThunk },
	{ 0x06000481, U3CConnectAsyncU3Ed__16_MoveNext_m231FF9BF3459368286A5D8E5AEBC061438DC2774_AdjustorThunk },
	{ 0x06000482, U3CConnectAsyncU3Ed__16_SetStateMachine_m3BEA29BA9635C5D68AE6FE4FF2F70486C52EB272_AdjustorThunk },
	{ 0x06000483, U3CDisconnectAsyncU3Ed__17_MoveNext_mBA9771CC74FC8E8FB18D87F02EB3916CAA3E980B_AdjustorThunk },
	{ 0x06000484, U3CDisconnectAsyncU3Ed__17_SetStateMachine_m9AFA2B64EC88D23BF280B982EFD8CABE7580BFCD_AdjustorThunk },
	{ 0x06000485, U3CReadNextMessageU3Ed__19_MoveNext_m0B9B6FE31B5B8D964C663C576885DC7AA6779905_AdjustorThunk },
	{ 0x06000486, U3CReadNextMessageU3Ed__19_SetStateMachine_m2ED23CA5FF66774D0A0A41873E49F2FDD2941953_AdjustorThunk },
	{ 0x06000487, U3CStartListeningU3Ed__18_MoveNext_m725C7EF6651CDF3E4AB5D910FAC6002F67F59BE3_AdjustorThunk },
	{ 0x06000488, U3CStartListeningU3Ed__18_SetStateMachine_mE665A6E42184DE93940063479A95A177F7C98636_AdjustorThunk },
	{ 0x060004A1, U3CUnsubscribeAsyncU3Ed__33_MoveNext_m9844309C0213DEDA669526F8AF5395B0712BEA5E_AdjustorThunk },
	{ 0x060004A2, U3CUnsubscribeAsyncU3Ed__33_SetStateMachine_mFED2A9628DFDDE68592F9D6E99BF454A30048612_AdjustorThunk },
	{ 0x060004D6, U3CHandleBatchResultU3Ed__11_MoveNext_mA1E25865F5F0A29CBFF7E44A8644512F61186ACD_AdjustorThunk },
	{ 0x060004D7, U3CHandleBatchResultU3Ed__11_SetStateMachine_mA545527D52AE171E953D22147DE199BA0322E4E6_AdjustorThunk },
	{ 0x060004DA, U3CSendAsyncRequestU3Ed__13_MoveNext_mE43C7E980835C082EA2186A732E6675F551FF30D_AdjustorThunk },
	{ 0x060004DB, U3CSendAsyncRequestU3Ed__13_SetStateMachine_mA6ECF580EFC00856519425D09A5DB1C92D5E3813_AdjustorThunk },
	{ 0x060004DC, U3CSendBatchRequestAsyncU3Ed__10_MoveNext_mAD39C189E6E6F4A319164BE543A9A6451921BBD0_AdjustorThunk },
	{ 0x060004DD, U3CSendBatchRequestAsyncU3Ed__10_SetStateMachine_mF09646C90792F0A88DA079AC80C4E5E479D3C6C9_AdjustorThunk },
	{ 0x060004E0, U3CSendUnityWebRequestU3Ed__14_MoveNext_mA1798666235B99E241A25860C264189CAE6C11A9_AdjustorThunk },
	{ 0x060004E1, U3CSendUnityWebRequestU3Ed__14_SetStateMachine_mF98C2B9241F540BC219475D99EBB456A97F9A531_AdjustorThunk },
};
static const int32_t s_InvokerIndices[1309] = 
{
	12092,
	13811,
	10937,
	10195,
	12114,
	10975,
	10253,
	12092,
	10975,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	8253,
	6851,
	3656,
	8289,
	8289,
	6140,
	8289,
	6140,
	8289,
	6140,
	8289,
	6140,
	6140,
	6140,
	3141,
	8460,
	8460,
	0,
	0,
	6851,
	0,
	0,
	12090,
	15051,
	8460,
	6140,
	0,
	0,
	0,
	0,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	0,
	2235,
	6851,
	8289,
	3656,
	8460,
	2208,
	872,
	515,
	515,
	833,
	2208,
	1529,
	2208,
	1488,
	1488,
	2208,
	2208,
	3120,
	15051,
	8460,
	6140,
	1565,
	0,
	0,
	0,
	3120,
	3120,
	3138,
	3138,
	3138,
	3138,
	1895,
	1895,
	1304,
	1304,
	3138,
	3138,
	3138,
	3138,
	1344,
	1344,
	1944,
	1344,
	1344,
	1944,
	1944,
	1944,
	1944,
	1944,
	1944,
	1944,
	8289,
	8289,
	1291,
	1291,
	8289,
	8289,
	1941,
	1941,
	3138,
	3138,
	3138,
	3138,
	6136,
	6136,
	6157,
	6157,
	6157,
	6157,
	8289,
	8289,
	6136,
	6136,
	8289,
	8289,
	3138,
	3138,
	8289,
	8289,
	6136,
	6136,
	6136,
	6136,
	8289,
	8289,
	8289,
	8289,
	3126,
	3126,
	8289,
	8289,
	8289,
	8289,
	6136,
	6136,
	8289,
	8289,
	1914,
	1914,
	3068,
	3068,
	8289,
	8289,
	6157,
	6157,
	762,
	762,
	762,
	762,
	3133,
	3133,
	6136,
	6136,
	6136,
	6136,
	1944,
	1944,
	1914,
	1914,
	6136,
	6136,
	3138,
	3138,
	1329,
	1329,
	1329,
	1329,
	3138,
	3138,
	3138,
	3138,
	6136,
	6136,
	8289,
	8289,
	3138,
	3138,
	8289,
	8289,
	1914,
	1914,
	1889,
	1889,
	1889,
	1889,
	730,
	730,
	730,
	730,
	8253,
	15051,
	8460,
	6140,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	0,
	0,
	0,
	0,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	1565,
	8460,
	6578,
	6851,
	6136,
	3610,
	3656,
	3998,
	6136,
	2231,
	1904,
	1904,
	1904,
	1904,
	1904,
	1904,
	1874,
	1874,
	1904,
	1904,
	1904,
	1904,
	6140,
	6140,
	6140,
	6140,
	3141,
	6136,
	6140,
	6851,
	0,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	0,
	0,
	3656,
	15012,
	8176,
	8460,
	5426,
	6136,
	6136,
	6136,
	8289,
	13811,
	13425,
	6851,
	8430,
	6985,
	8430,
	6985,
	8430,
	6985,
	6984,
	8460,
	4008,
	0,
	0,
	0,
	0,
	0,
	0,
	8289,
	6851,
	8460,
	8289,
	6851,
	8460,
	8289,
	6851,
	8430,
	6985,
	8289,
	6851,
	8460,
	8289,
	6851,
	8289,
	6851,
	8460,
	8289,
	6851,
	8289,
	6851,
	8176,
	6737,
	8176,
	6737,
	8289,
	6851,
	8430,
	8460,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8176,
	6737,
	8289,
	6851,
	8289,
	6851,
	8460,
	8289,
	6851,
	8289,
	6851,
	8460,
	8289,
	6851,
	8430,
	6985,
	8289,
	6851,
	8460,
	8289,
	6851,
	8460,
	8430,
	6985,
	8289,
	6851,
	8460,
	8289,
	6851,
	8253,
	6816,
	8038,
	6614,
	8289,
	6851,
	8430,
	8200,
	8205,
	8460,
	8430,
	6985,
	8289,
	6851,
	8176,
	6737,
	8430,
	6985,
	8460,
	8289,
	6851,
	8460,
	8289,
	6851,
	8289,
	6851,
	8460,
	8289,
	8460,
	6851,
	6851,
	8460,
	5038,
	8289,
	8289,
	8176,
	6737,
	8176,
	6737,
	2183,
	12102,
	12102,
	8254,
	6817,
	8289,
	6851,
	8289,
	6851,
	8430,
	6985,
	8044,
	6621,
	8289,
	6851,
	8289,
	6851,
	8460,
	8430,
	6985,
	8044,
	6621,
	8460,
	8289,
	6851,
	8289,
	6851,
	8460,
	8289,
	6851,
	8254,
	6817,
	8430,
	6985,
	8253,
	6816,
	8460,
	8289,
	6851,
	8289,
	6851,
	8460,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8460,
	8253,
	6816,
	8253,
	6816,
	8253,
	6816,
	8460,
	8289,
	6851,
	8430,
	6985,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8460,
	8253,
	6816,
	8289,
	6851,
	8289,
	6851,
	8460,
	8253,
	6816,
	8289,
	6851,
	8460,
	8253,
	6816,
	8289,
	6851,
	8289,
	6851,
	8460,
	8289,
	6851,
	8430,
	6985,
	8460,
	8430,
	6985,
	8460,
	8289,
	6851,
	8460,
	8289,
	6851,
	8289,
	6851,
	8460,
	8289,
	6851,
	8289,
	6851,
	8460,
	8430,
	6985,
	8430,
	6985,
	8460,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8065,
	6642,
	8430,
	6985,
	8460,
	8430,
	6985,
	8430,
	6985,
	8430,
	6985,
	8430,
	6985,
	8430,
	6985,
	8460,
	8430,
	6985,
	8430,
	6985,
	8430,
	6985,
	8430,
	6985,
	8176,
	6737,
	8460,
	8289,
	6851,
	8460,
	8200,
	6766,
	8430,
	6985,
	8430,
	6985,
	8430,
	6985,
	8430,
	6985,
	8460,
	8289,
	6851,
	8460,
	8289,
	6851,
	8289,
	6851,
	8430,
	6985,
	8430,
	6985,
	8460,
	8253,
	6816,
	8289,
	6851,
	8460,
	8289,
	6851,
	8460,
	8200,
	6766,
	8200,
	6766,
	8200,
	6766,
	8200,
	6766,
	8200,
	6766,
	8460,
	8200,
	6766,
	8200,
	6766,
	8200,
	6766,
	8200,
	6766,
	8460,
	8430,
	6985,
	8430,
	6985,
	8430,
	6985,
	8430,
	6985,
	8460,
	8253,
	6816,
	8253,
	6816,
	8064,
	6641,
	8289,
	6851,
	8460,
	8289,
	6851,
	8289,
	6851,
	8460,
	8289,
	6851,
	8460,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8460,
	8430,
	6985,
	8460,
	8176,
	6737,
	8176,
	6737,
	8176,
	6737,
	8289,
	8460,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	5003,
	5003,
	8289,
	13785,
	13814,
	8460,
	8430,
	6985,
	8430,
	6985,
	8430,
	6985,
	8253,
	6816,
	8460,
	8430,
	6985,
	8065,
	6642,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8065,
	6642,
	8460,
	8253,
	6816,
	8253,
	6816,
	8253,
	6816,
	8460,
	8430,
	6985,
	8430,
	6985,
	8289,
	6851,
	8460,
	8430,
	6985,
	8430,
	6985,
	8289,
	6851,
	8430,
	6985,
	8460,
	8289,
	6851,
	8289,
	6851,
	8460,
	8289,
	6851,
	8289,
	6851,
	8460,
	8289,
	6851,
	8289,
	6851,
	8460,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8289,
	5038,
	8176,
	5038,
	5038,
	6851,
	13814,
	6851,
	6140,
	6140,
	4008,
	6140,
	6140,
	8289,
	12114,
	12114,
	13785,
	13814,
	8460,
	15051,
	8460,
	5038,
	8460,
	5038,
	8460,
	8460,
	5038,
	8253,
	6816,
	8289,
	6851,
	8460,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8460,
	8176,
	6737,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8253,
	13424,
	8460,
	8289,
	6851,
	8065,
	6642,
	8460,
	8430,
	6985,
	8289,
	6851,
	8289,
	6851,
	8430,
	6985,
	8176,
	6737,
	8200,
	6766,
	8430,
	6985,
	8289,
	6851,
	8460,
	8289,
	6851,
	8289,
	6851,
	8460,
	8289,
	6851,
	8253,
	6816,
	8460,
	8460,
	8460,
	8289,
	6851,
	8289,
	6851,
	0,
	8460,
	8289,
	8289,
	8176,
	2146,
	0,
	0,
	0,
	8289,
	6851,
	8289,
	6851,
	8460,
	8253,
	6816,
	8289,
	6851,
	8289,
	6851,
	8460,
	8430,
	6985,
	8460,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	8253,
	8460,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	8289,
	8253,
	6851,
	6851,
	8289,
	1565,
	8289,
	8289,
	8289,
	6125,
	0,
	0,
	6737,
	8460,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8460,
	6851,
	8253,
	8289,
	8289,
	2146,
	8253,
	6816,
	8253,
	6816,
	8253,
	6816,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	6851,
	6851,
	2208,
	8460,
	2146,
	0,
	8460,
	8289,
	8460,
	6851,
	0,
	0,
	6851,
	8071,
	8289,
	8253,
	1873,
	3135,
	6125,
	3066,
	1277,
	6737,
	8460,
	4008,
	12114,
	13814,
	12114,
	10975,
	10253,
	9460,
	13814,
	12114,
	10975,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	8289,
	1565,
	0,
	0,
	6140,
	3141,
	8176,
	3141,
	3141,
	15051,
	8460,
	5816,
	5816,
	8460,
	6851,
	0,
	0,
	8460,
	6851,
	8460,
	6851,
	0,
	0,
	8460,
	6851,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	2235,
	750,
	8460,
	2208,
	700,
	8460,
	750,
	2235,
	8460,
	750,
	2235,
	8460,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8289,
	6851,
	8460,
	6140,
	8289,
	8289,
	11981,
	8460,
	8289,
	6851,
	6140,
	6140,
	6140,
	6140,
	6140,
	6140,
	8289,
	6140,
	6140,
	10975,
};
static const Il2CppTokenRangePair s_rgctxIndices[19] = 
{
	{ 0x02000008, { 13, 3 } },
	{ 0x02000009, { 16, 4 } },
	{ 0x0200004C, { 29, 10 } },
	{ 0x0200004D, { 39, 10 } },
	{ 0x020000CD, { 51, 3 } },
	{ 0x020000D7, { 62, 17 } },
	{ 0x020000DA, { 79, 14 } },
	{ 0x020000DC, { 93, 6 } },
	{ 0x060000B1, { 0, 2 } },
	{ 0x060000B2, { 2, 5 } },
	{ 0x060000B4, { 7, 3 } },
	{ 0x060000B5, { 10, 3 } },
	{ 0x060000C6, { 20, 1 } },
	{ 0x060000DE, { 21, 4 } },
	{ 0x060000DF, { 25, 4 } },
	{ 0x060001FC, { 49, 1 } },
	{ 0x06000447, { 50, 1 } },
	{ 0x060004CB, { 54, 4 } },
	{ 0x060004CC, { 58, 4 } },
};
extern const uint32_t g_rgctx_SolanaRpcBatchComposer_WrapCallback_TisT_tB2DC60DC1F3D4E3AF399809702A20C2B51EC92FF_m8478FA59E2280E8E221BF19FDF8908A640889423;
extern const uint32_t g_rgctx_RpcBatchReqRespItem_Create_TisT_tB2DC60DC1F3D4E3AF399809702A20C2B51EC92FF_m85CC5648E09F6EC3C07B084466C99F6F55A098BF;
extern const uint32_t g_rgctx_TaskCompletionSource_1_tE153D68E7B7F1B0F214EE4654DCA301339CD640A;
extern const uint32_t g_rgctx_TaskCompletionSource_1__ctor_m53C4816AD96F251EAAE5C548E2D6F1C76166E905;
extern const uint32_t g_rgctx_SolanaRpcBatchComposer_WrapTaskSource_TisT_tF7D842AACC987F8D31D6F8DAC34CCE5EB2217D36_m091EB9967314CAB2AFD8295172677BFB5286EC07;
extern const uint32_t g_rgctx_RpcBatchReqRespItem_Create_TisT_tF7D842AACC987F8D31D6F8DAC34CCE5EB2217D36_mEB77D3936A27ACBC5104896B3E0AC942EC80EEF8;
extern const uint32_t g_rgctx_TaskCompletionSource_1_get_Task_m6EB64938A3621D64384EADF04302E620FE30B26C;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass26_0_1_t3135817B9A18ED055B6C37F66442D7E848270034;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass26_0_1__ctor_mF3DE12E91702084356D6A73139ABDA314DD82C91;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass26_0_1_U3CWrapCallbackU3Eb__0_m1D2892705D2B066FBACD67D9C4FE4B871EC9C0D8;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass27_0_1_t09BF99CE723D58DC21E5CD189BF66CC8334C8134;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass27_0_1__ctor_mCF09D5C87E6045C37B6B7F690AD1805629BD32FB;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass27_0_1_U3CWrapTaskSourceU3Eb__0_m9972000A51E8249F27F9D1812E1311FC20EF879A;
extern const uint32_t g_rgctx_JsonRpcBatchResponseItem_ResultAs_TisT_t3A90E8FDD48960B3FD3B34F7F3A4F08C392B4C13_m8CEBB814A40CA76FBECACD316D591E4B6FA8C01A;
extern const uint32_t g_rgctx_Action_2_t223C59586A4F9346F1D3D855CA209E3B38613EE5;
extern const uint32_t g_rgctx_Action_2_Invoke_m65E2395EF3DE821E180AC35F5E043D30F7206B14;
extern const uint32_t g_rgctx_JsonRpcBatchResponseItem_ResultAs_TisT_t2D3AA161113269A11853DAC65F413CC13D8D5433_mEA1FF81A6D0A6528A5286935EB401F81CBF327C5;
extern const uint32_t g_rgctx_TaskCompletionSource_1_tC6E7616F3311FF68CCB99464D7ACB376A17969CD;
extern const uint32_t g_rgctx_TaskCompletionSource_1_SetException_mE06E724708BD0625379BFC55B488CD9671D48D14;
extern const uint32_t g_rgctx_TaskCompletionSource_1_SetResult_mF6BDEB96697CE6FCB1634D8318F3C9BC710EF88E;
extern const uint32_t g_rgctx_T_tCA22D2C5BF17177B30E1DD8BE94C2AD269004BD0;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Create_mD1F1C8884E47C4702D5412B65654EF792A357D6A;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_t8ED2244AB40B9B915E1D975EB1096ACF4091993B;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CSendRequestAsyncU3Ed__3_1_tE5C211815C91F0C22DA571BF30F17DB19DE8632C_mCCE7C5C122179A92A6252213098EFB004A09107B;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_get_Task_m502EBC4AB74790D140784FFB64AB17657EA7ACD0;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Create_mFBB0242BC0C0A3D295386201411FC283E65D98BE;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_t4F496C890DBCD245AB36E0A5C476EEE4BD077316;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CSendRequestAsyncU3Ed__4_1_tFFD041210D1D4556DE7676FE7FC68249D00112D3_m62C10EF680B9ED2DDBB8EDE082C62A08C9DBF0FF;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_get_Task_m12D660C5EF1136480810E62B8B76D4915A0FFFA5;
extern const uint32_t g_rgctx_SolanaRpcClient_BuildRequest_TisT_tD929023A9ABEB2A3947F37BD94EE254F69EB2A58_mF3750B73E0214CA49988EC5611FE85D3782C059C;
extern const uint32_t g_rgctx_JsonRpcClient_SendRequest_TisT_tD929023A9ABEB2A3947F37BD94EE254F69EB2A58_mD2AC87856C9361710C61C1F1A84A088D6FCA4AC4;
extern const uint32_t g_rgctx_Task_1_tE41B92380672C6FF2F5C54D3CFC68658981CE8C9;
extern const uint32_t g_rgctx_Task_1_GetAwaiter_mCA7BFF6E5BA482FC2D7DC0E0976A4D5A9B8F209B;
extern const uint32_t g_rgctx_TaskAwaiter_1_get_IsCompleted_m7E473F1967596C56422C310D8A49F289C8B6C52C;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E38314F0AB1B1C74BEAE2E6B28F9CA00DA2A5CC_TisU3CSendRequestAsyncU3Ed__3_1_tAF69F02E07681507BED5DDBAB9AE4139B49ED3F9_m57199B7E44424AAADB3CC8A1F089885AD0C8C706;
extern const uint32_t g_rgctx_TaskAwaiter_1_GetResult_m4401C3FCA53542BC8291D13F019293450204B5DE;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetException_mA81E8E8045C9CCD4664F469C4492EFAC4D7AFCBC;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetResult_m6C4E696E2320A424634643283E1264CC2445A37C;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_m98D799BE13EBD33F14B12E09F0D44664F4123B9C;
extern const uint32_t g_rgctx_SolanaRpcClient_BuildRequest_TisT_t21A1F964A13B200AB4CE4064EC3936605A9F7822_m31A58D982695C265EFDE458280BADFB450039A93;
extern const uint32_t g_rgctx_JsonRpcClient_SendRequest_TisT_t21A1F964A13B200AB4CE4064EC3936605A9F7822_m7AAECB1C95E28BB472CF30BADF31196A712BAA84;
extern const uint32_t g_rgctx_Task_1_tE8DFD854D280DC477C2D9928BED472775073FEE0;
extern const uint32_t g_rgctx_Task_1_GetAwaiter_m9D653D270BA021BF732517D8DB2720308167CDA0;
extern const uint32_t g_rgctx_TaskAwaiter_1_get_IsCompleted_mA450C75BD785E0B08724E49C11E9711014821C62;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t151085ABC8CF8C290B037A23E7E860A82D3D8928_TisU3CSendRequestAsyncU3Ed__4_1_t0F895849551304E04E0FA87C5FF14D5B10616EFA_m5A584AD52BD735A9DCE40A2DCC88175884D40E1C;
extern const uint32_t g_rgctx_TaskAwaiter_1_GetResult_m240AE623500728A71F772951A6521F17FF2C2391;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetException_mB41EA6D23DC9959F76F5D09688F9F5CC8DE44ED3;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetResult_m94054680B6D2ABC46AC5A94D1A88AB562214B131;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_mEF28A4ABB36B957FDD5886162E7AC6470828252A;
extern const uint32_t g_rgctx_T_t727E4914F92287D7561E60AB8A072C958D1C87A6;
extern const uint32_t g_rgctx_T_t21547A0C50592C6CD0BE46D3624D2E89EA4ECE31;
extern const uint32_t g_rgctx_T_t95491C80BF381E6E069AD1812ABE17B7D184E199;
extern const uint32_t g_rgctx_Action_2_tE802758787A40287A2A19D748E01614E400AE999;
extern const uint32_t g_rgctx_Action_2_Invoke_mAC76979A258478A1AE3F5729A1344794916896C1;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Create_mF229E9BCAB38F3D9D75D1F4FD0CE2971937B6A9E;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_t2008EDD62FAD5A79002685266310C2F6024C891B;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CSendRequestU3Ed__8_1_t6D2B62CD5F9DD5CD97CE75A78A05B150F6969423_m155464FCE4BC58702A6530D9B4DC714C750269DF;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_get_Task_mF4DDAB626203738FAF0909F8BC0AA8A98EC9631F;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Create_m4AC15352D4CCC1091C47E81ECCC55AAE77EE9807;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_t62CAFF8B1DF43D81C95A6F21DD2A43CC3FA88496;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CHandleResultU3Ed__9_1_tC722A5E7423FAFDD4EF16CE18C6ED398F32B52BD_m9C8B0A1728E26679B10B7A16AB91269BED19BF30;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_get_Task_m62078F70D139D2A3074728F6E68499341252E69C;
extern const uint32_t g_rgctx_RequestResult_1_tB4533CB3186DCDC7DA2FA6E374545084900B2D85;
extern const uint32_t g_rgctx_RequestResult_1__ctor_m7DE7B15256DC68D9B96D64A7A0753B4B0DD25A33;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CHandleResultU3Ed__9_1_t4271D42C5609DD308C6C746AB10C844E7BE63B1B_m0A344AA5582814269E40157A0DCF298CE29AD291;
extern const uint32_t g_rgctx_RequestResult_1_set_RawRpcResponse_m48A6CD961B24ACE43FB5FA6A73FCB70B52F83979;
extern const uint32_t g_rgctx_RequestResult_1_get_RawRpcResponse_mC2B978AD01BFBC28E6AAEDE2BD797392C3612082;
extern const uint32_t g_rgctx_JsonConvert_DeserializeObject_TisJsonRpcResponse_1_t7E5A85D341A4A0492D8EF7EE976D5CF607F62AC6_m512B20292A23CB256692489B9F47449206C38FD3;
extern const uint32_t g_rgctx_JsonRpcResponse_1_t7E5A85D341A4A0492D8EF7EE976D5CF607F62AC6;
extern const uint32_t g_rgctx_JsonRpcResponse_1_get_Result_m170316AFE44B4797BE33F3AAF68F74A18B1E1CC1;
extern const uint32_t g_rgctx_T_t5F454FBC05B7C7AF0A46A681ADE1F90C69897A80;
extern const uint32_t g_rgctx_RequestResult_1_set_Result_m2810AF671CC4B7FF69FD057643C9817FF33FC409;
extern const uint32_t g_rgctx_RequestResult_1_set_WasRequestSuccessfullyHandled_m79846C6E15E3F61FEC2D2F97809A8A00C14589AC;
extern const uint32_t g_rgctx_RequestResult_1_set_Reason_m4D12D1D3E8C3C055FC73191FFB8C40FE93A5DCE7;
extern const uint32_t g_rgctx_RequestResult_1_set_ServerErrorCode_m9D5294883AB2E2B1541B450E8DE0A58E0130CFE3;
extern const uint32_t g_rgctx_RequestResult_1_set_ErrorData_m3EC091332F366113FED9534AB4FAEA8FCF819E42;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetException_mC67FAE78EAAA5D8FCA49AFF6AE240139A74D7E73;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetResult_m23A17840196D5E688803F2C969087832BECCF684;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_mF3BA5C86129406D4DBEB8618315F7E37CCE12B60;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4_TisU3CSendRequestU3Ed__8_1_tD347E0CEBAF6C436B7DEB65CDA3C1C7C1812024D_m7670A1620B24B0D2CB65A1D3FA2D0247CDC78302;
extern const uint32_t g_rgctx_JsonRpcClient_HandleResult_TisT_tF98FCFD3931E94B9DD289B90B360CF5785E7F457_m7BDC81600F0CC4B41D49C29CAA46185B166ED0C1;
extern const uint32_t g_rgctx_Task_1_tDF339E3DF61EB25173DF354099FF4FBA3A943B02;
extern const uint32_t g_rgctx_Task_1_ConfigureAwait_m89EE1D96D9DC0242CCA80BD59728118C0E3055ED;
extern const uint32_t g_rgctx_ConfiguredTaskAwaitable_1_GetAwaiter_m7EA9F92ED9186B1E65C240AF6658E76EA27C8D24;
extern const uint32_t g_rgctx_ConfiguredTaskAwaiter_get_IsCompleted_mAE2E58DA8249B59DFDF222089A13E7C0ABB075A8;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tCA80B894CF52307B5B11994B23D5BEC1C66DCFF7_TisU3CSendRequestU3Ed__8_1_tD347E0CEBAF6C436B7DEB65CDA3C1C7C1812024D_m470FBD93FC41813EDB95FA3FECC5A24D490604AD;
extern const uint32_t g_rgctx_ConfiguredTaskAwaiter_GetResult_mEB4903779B1677605D147B0918979B89BFF988CE;
extern const uint32_t g_rgctx_RequestResult_1_tFEFEC1954A23CE324FD89E25EBE7BBF8A0496EC1;
extern const uint32_t g_rgctx_RequestResult_1_set_RawRpcRequest_mDF957CE3B48BF8A5F5BCB6FCAFBBB37654FA5994;
extern const uint32_t g_rgctx_RequestResult_1__ctor_mFC344B377FAA8835A633877C981B19ECF3B2A8B0;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetException_m510F50B11214F05A7D88E21EDAC9ECB9111CC3E6;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetResult_mA0A4848A0CC86F6E336AB04D41D95C195AA8B1AD;
extern const uint32_t g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_mF3C76B076AFC715FB6477D7061717CEBD1A98E0D;
extern const uint32_t g_rgctx_RequestResult_1_get_WasHttpRequestSuccessful_m87E9D2F79DFCFFFBBB686FEFEA1843610E103B2F;
extern const uint32_t g_rgctx_RequestResult_1_get_WasRequestSuccessfullyHandled_mB8F7052354A85121EAB47300AC8B31DCF682C284;
extern const uint32_t g_rgctx_RequestResult_1_set_HttpStatusCode_mCD53200C512A49AE3380ADECCD77869F6F9E8B73;
extern const uint32_t g_rgctx_RequestResult_1_set_WasHttpRequestSuccessful_m7E95CB29D5C6E0082E81BCEA64A7A5486C7D80C8;
extern const uint32_t g_rgctx_RequestResult_1_set_Reason_m82133EAA137C04F237493E4B50597D17560897A2;
extern const uint32_t g_rgctx_RequestResult_1_set_Result_mA431B1A6D020A50CE0690989BBD7C40BDEDAFC98;
static const Il2CppRGCTXDefinition s_rgctxValues[99] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_SolanaRpcBatchComposer_WrapCallback_TisT_tB2DC60DC1F3D4E3AF399809702A20C2B51EC92FF_m8478FA59E2280E8E221BF19FDF8908A640889423 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RpcBatchReqRespItem_Create_TisT_tB2DC60DC1F3D4E3AF399809702A20C2B51EC92FF_m85CC5648E09F6EC3C07B084466C99F6F55A098BF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TaskCompletionSource_1_tE153D68E7B7F1B0F214EE4654DCA301339CD640A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1__ctor_m53C4816AD96F251EAAE5C548E2D6F1C76166E905 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_SolanaRpcBatchComposer_WrapTaskSource_TisT_tF7D842AACC987F8D31D6F8DAC34CCE5EB2217D36_m091EB9967314CAB2AFD8295172677BFB5286EC07 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RpcBatchReqRespItem_Create_TisT_tF7D842AACC987F8D31D6F8DAC34CCE5EB2217D36_mEB77D3936A27ACBC5104896B3E0AC942EC80EEF8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_get_Task_m6EB64938A3621D64384EADF04302E620FE30B26C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass26_0_1_t3135817B9A18ED055B6C37F66442D7E848270034 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass26_0_1__ctor_mF3DE12E91702084356D6A73139ABDA314DD82C91 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass26_0_1_U3CWrapCallbackU3Eb__0_m1D2892705D2B066FBACD67D9C4FE4B871EC9C0D8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass27_0_1_t09BF99CE723D58DC21E5CD189BF66CC8334C8134 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass27_0_1__ctor_mCF09D5C87E6045C37B6B7F690AD1805629BD32FB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass27_0_1_U3CWrapTaskSourceU3Eb__0_m9972000A51E8249F27F9D1812E1311FC20EF879A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonRpcBatchResponseItem_ResultAs_TisT_t3A90E8FDD48960B3FD3B34F7F3A4F08C392B4C13_m8CEBB814A40CA76FBECACD316D591E4B6FA8C01A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_2_t223C59586A4F9346F1D3D855CA209E3B38613EE5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_2_Invoke_m65E2395EF3DE821E180AC35F5E043D30F7206B14 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonRpcBatchResponseItem_ResultAs_TisT_t2D3AA161113269A11853DAC65F413CC13D8D5433_mEA1FF81A6D0A6528A5286935EB401F81CBF327C5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TaskCompletionSource_1_tC6E7616F3311FF68CCB99464D7ACB376A17969CD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_SetException_mE06E724708BD0625379BFC55B488CD9671D48D14 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskCompletionSource_1_SetResult_mF6BDEB96697CE6FCB1634D8318F3C9BC710EF88E },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_tCA22D2C5BF17177B30E1DD8BE94C2AD269004BD0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Create_mD1F1C8884E47C4702D5412B65654EF792A357D6A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_t8ED2244AB40B9B915E1D975EB1096ACF4091993B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CSendRequestAsyncU3Ed__3_1_tE5C211815C91F0C22DA571BF30F17DB19DE8632C_mCCE7C5C122179A92A6252213098EFB004A09107B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_get_Task_m502EBC4AB74790D140784FFB64AB17657EA7ACD0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Create_mFBB0242BC0C0A3D295386201411FC283E65D98BE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_t4F496C890DBCD245AB36E0A5C476EEE4BD077316 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CSendRequestAsyncU3Ed__4_1_tFFD041210D1D4556DE7676FE7FC68249D00112D3_m62C10EF680B9ED2DDBB8EDE082C62A08C9DBF0FF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_get_Task_m12D660C5EF1136480810E62B8B76D4915A0FFFA5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_SolanaRpcClient_BuildRequest_TisT_tD929023A9ABEB2A3947F37BD94EE254F69EB2A58_mF3750B73E0214CA49988EC5611FE85D3782C059C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonRpcClient_SendRequest_TisT_tD929023A9ABEB2A3947F37BD94EE254F69EB2A58_mD2AC87856C9361710C61C1F1A84A088D6FCA4AC4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Task_1_tE41B92380672C6FF2F5C54D3CFC68658981CE8C9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1_GetAwaiter_mCA7BFF6E5BA482FC2D7DC0E0976A4D5A9B8F209B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskAwaiter_1_get_IsCompleted_m7E473F1967596C56422C310D8A49F289C8B6C52C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t7E38314F0AB1B1C74BEAE2E6B28F9CA00DA2A5CC_TisU3CSendRequestAsyncU3Ed__3_1_tAF69F02E07681507BED5DDBAB9AE4139B49ED3F9_m57199B7E44424AAADB3CC8A1F089885AD0C8C706 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskAwaiter_1_GetResult_m4401C3FCA53542BC8291D13F019293450204B5DE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetException_mA81E8E8045C9CCD4664F469C4492EFAC4D7AFCBC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetResult_m6C4E696E2320A424634643283E1264CC2445A37C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_m98D799BE13EBD33F14B12E09F0D44664F4123B9C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_SolanaRpcClient_BuildRequest_TisT_t21A1F964A13B200AB4CE4064EC3936605A9F7822_m31A58D982695C265EFDE458280BADFB450039A93 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonRpcClient_SendRequest_TisT_t21A1F964A13B200AB4CE4064EC3936605A9F7822_m7AAECB1C95E28BB472CF30BADF31196A712BAA84 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Task_1_tE8DFD854D280DC477C2D9928BED472775073FEE0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1_GetAwaiter_m9D653D270BA021BF732517D8DB2720308167CDA0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskAwaiter_1_get_IsCompleted_mA450C75BD785E0B08724E49C11E9711014821C62 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t151085ABC8CF8C290B037A23E7E860A82D3D8928_TisU3CSendRequestAsyncU3Ed__4_1_t0F895849551304E04E0FA87C5FF14D5B10616EFA_m5A584AD52BD735A9DCE40A2DCC88175884D40E1C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TaskAwaiter_1_GetResult_m240AE623500728A71F772951A6521F17FF2C2391 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetException_mB41EA6D23DC9959F76F5D09688F9F5CC8DE44ED3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetResult_m94054680B6D2ABC46AC5A94D1A88AB562214B131 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_mEF28A4ABB36B957FDD5886162E7AC6470828252A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t727E4914F92287D7561E60AB8A072C958D1C87A6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t21547A0C50592C6CD0BE46D3624D2E89EA4ECE31 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t95491C80BF381E6E069AD1812ABE17B7D184E199 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_2_tE802758787A40287A2A19D748E01614E400AE999 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_2_Invoke_mAC76979A258478A1AE3F5729A1344794916896C1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Create_mF229E9BCAB38F3D9D75D1F4FD0CE2971937B6A9E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_t2008EDD62FAD5A79002685266310C2F6024C891B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CSendRequestU3Ed__8_1_t6D2B62CD5F9DD5CD97CE75A78A05B150F6969423_m155464FCE4BC58702A6530D9B4DC714C750269DF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_get_Task_mF4DDAB626203738FAF0909F8BC0AA8A98EC9631F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Create_m4AC15352D4CCC1091C47E81ECCC55AAE77EE9807 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_t62CAFF8B1DF43D81C95A6F21DD2A43CC3FA88496 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_Start_TisU3CHandleResultU3Ed__9_1_tC722A5E7423FAFDD4EF16CE18C6ED398F32B52BD_m9C8B0A1728E26679B10B7A16AB91269BED19BF30 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_get_Task_m62078F70D139D2A3074728F6E68499341252E69C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_RequestResult_1_tB4533CB3186DCDC7DA2FA6E374545084900B2D85 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RequestResult_1__ctor_m7DE7B15256DC68D9B96D64A7A0753B4B0DD25A33 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t09B651400CE1B2687A813877C97A9E352E771CA5_TisU3CHandleResultU3Ed__9_1_t4271D42C5609DD308C6C746AB10C844E7BE63B1B_m0A344AA5582814269E40157A0DCF298CE29AD291 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RequestResult_1_set_RawRpcResponse_m48A6CD961B24ACE43FB5FA6A73FCB70B52F83979 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RequestResult_1_get_RawRpcResponse_mC2B978AD01BFBC28E6AAEDE2BD797392C3612082 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonConvert_DeserializeObject_TisJsonRpcResponse_1_t7E5A85D341A4A0492D8EF7EE976D5CF607F62AC6_m512B20292A23CB256692489B9F47449206C38FD3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_JsonRpcResponse_1_t7E5A85D341A4A0492D8EF7EE976D5CF607F62AC6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonRpcResponse_1_get_Result_m170316AFE44B4797BE33F3AAF68F74A18B1E1CC1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t5F454FBC05B7C7AF0A46A681ADE1F90C69897A80 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RequestResult_1_set_Result_m2810AF671CC4B7FF69FD057643C9817FF33FC409 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RequestResult_1_set_WasRequestSuccessfullyHandled_m79846C6E15E3F61FEC2D2F97809A8A00C14589AC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RequestResult_1_set_Reason_m4D12D1D3E8C3C055FC73191FFB8C40FE93A5DCE7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RequestResult_1_set_ServerErrorCode_m9D5294883AB2E2B1541B450E8DE0A58E0130CFE3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RequestResult_1_set_ErrorData_m3EC091332F366113FED9534AB4FAEA8FCF819E42 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetException_mC67FAE78EAAA5D8FCA49AFF6AE240139A74D7E73 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetResult_m23A17840196D5E688803F2C969087832BECCF684 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_mF3BA5C86129406D4DBEB8618315F7E37CCE12B60 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4_TisU3CSendRequestU3Ed__8_1_tD347E0CEBAF6C436B7DEB65CDA3C1C7C1812024D_m7670A1620B24B0D2CB65A1D3FA2D0247CDC78302 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_JsonRpcClient_HandleResult_TisT_tF98FCFD3931E94B9DD289B90B360CF5785E7F457_m7BDC81600F0CC4B41D49C29CAA46185B166ED0C1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Task_1_tDF339E3DF61EB25173DF354099FF4FBA3A943B02 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Task_1_ConfigureAwait_m89EE1D96D9DC0242CCA80BD59728118C0E3055ED },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ConfiguredTaskAwaitable_1_GetAwaiter_m7EA9F92ED9186B1E65C240AF6658E76EA27C8D24 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ConfiguredTaskAwaiter_get_IsCompleted_mAE2E58DA8249B59DFDF222089A13E7C0ABB075A8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tCA80B894CF52307B5B11994B23D5BEC1C66DCFF7_TisU3CSendRequestU3Ed__8_1_tD347E0CEBAF6C436B7DEB65CDA3C1C7C1812024D_m470FBD93FC41813EDB95FA3FECC5A24D490604AD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ConfiguredTaskAwaiter_GetResult_mEB4903779B1677605D147B0918979B89BFF988CE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_RequestResult_1_tFEFEC1954A23CE324FD89E25EBE7BBF8A0496EC1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RequestResult_1_set_RawRpcRequest_mDF957CE3B48BF8A5F5BCB6FCAFBBB37654FA5994 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RequestResult_1__ctor_mFC344B377FAA8835A633877C981B19ECF3B2A8B0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetException_m510F50B11214F05A7D88E21EDAC9ECB9111CC3E6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetResult_mA0A4848A0CC86F6E336AB04D41D95C195AA8B1AD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AsyncTaskMethodBuilder_1_SetStateMachine_mF3C76B076AFC715FB6477D7061717CEBD1A98E0D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RequestResult_1_get_WasHttpRequestSuccessful_m87E9D2F79DFCFFFBBB686FEFEA1843610E103B2F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RequestResult_1_get_WasRequestSuccessfullyHandled_mB8F7052354A85121EAB47300AC8B31DCF682C284 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RequestResult_1_set_HttpStatusCode_mCD53200C512A49AE3380ADECCD77869F6F9E8B73 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RequestResult_1_set_WasHttpRequestSuccessful_m7E95CB29D5C6E0082E81BCEA64A7A5486C7D80C8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RequestResult_1_set_Reason_m82133EAA137C04F237493E4B50597D17560897A2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_RequestResult_1_set_Result_mA431B1A6D020A50CE0690989BBD7C40BDEDAFC98 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Solana_Unity_Rpc_CodeGenModule;
const Il2CppCodeGenModule g_Solana_Unity_Rpc_CodeGenModule = 
{
	"Solana.Unity.Rpc.dll",
	1309,
	s_methodPointers,
	168,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	19,
	s_rgctxIndices,
	99,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
