/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDIDSMessageTransport : NSObject <HMIDSMessageTransport, HMMessageTransport, IDSServiceDelegate> {
    IDSService * _idsService;
    HMMessageDispatcher * _messageDispatcher;
    NSString * _pairedCompanionDestination;
    NSString * _pairedWatchDestination;
    NSMutableSet * _pairedWatchDeviceAddresses;
    NSMutableSet * _peerResidentDeviceAddresses;
    NSMutableSet * _peerTransientDeviceAddresses;
    NSMutableDictionary * _pendingResponseTimers;
    NSMutableDictionary * _pendingResponses;
    NSMutableDictionary * _pendingSentMessages;
    BOOL  _proxy;
    NSMutableSet * _reachableCompanionDeviceAddresses;
    NSMutableSet * _reachableWatchDeviceAddresses;
    NSMutableDictionary * _receivedResponses;
    NSMutableDictionary * _requestedCapabilities;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (getter=isAccountActive, nonatomic, readonly) BOOL accountActive;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) IDSService *idsService;
@property (nonatomic) HMMessageDispatcher *messageDispatcher;
@property (nonatomic, retain) NSString *pairedCompanionDestination;
@property (nonatomic, retain) NSString *pairedWatchDestination;
@property (nonatomic, retain) NSMutableSet *pairedWatchDeviceAddresses;
@property (nonatomic, readonly) NSArray *pairedWatchDevices;
@property (nonatomic, retain) NSMutableSet *peerResidentDeviceAddresses;
@property (nonatomic, retain) NSMutableSet *peerTransientDeviceAddresses;
@property (nonatomic, retain) NSMutableDictionary *pendingResponseTimers;
@property (nonatomic, retain) NSMutableDictionary *pendingResponses;
@property (nonatomic, retain) NSMutableDictionary *pendingSentMessages;
@property (nonatomic, readonly) BOOL proxy;
@property (nonatomic, retain) NSMutableSet *reachableCompanionDeviceAddresses;
@property (nonatomic, readonly) NSArray *reachableCompanionDevices;
@property (nonatomic, retain) NSMutableSet *reachableWatchDeviceAddresses;
@property (nonatomic, readonly) NSArray *reachableWatchDevices;
@property (nonatomic, readonly) NSMutableDictionary *receivedResponses;
@property (nonatomic, readonly) NSMutableDictionary *requestedCapabilities;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)dictionaryForMessageName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 transactionID:(id)arg5 msgType:(unsigned int)arg6;
+ (id)idsMessageTypeDescription:(unsigned int)arg1;
+ (void)messageElementsFromDictionary:(id)arg1 messageName:(id*)arg2 messageIdentifier:(id*)arg3 messagePayload:(id*)arg4 target:(id*)arg5 transactionID:(id*)arg6 isRequest:(BOOL*)arg7 isResponse:(BOOL*)arg8 isNotification:(BOOL*)arg9;

- (void).cxx_destruct;
- (id)_compatibleDevices:(id)arg1;
- (BOOL)_isCompatibleCompanionDevice:(id)arg1;
- (BOOL)_isCompatibleWatchDevice:(id)arg1;
- (void)_pendingResponseTimeoutFor:(id)arg1;
- (void)_removePendingResponseTimerForTransaction:(id)arg1;
- (BOOL)_rerouteDestinationIfCompanion:(id)arg1 newDestination:(id*)arg2;
- (BOOL)_rerouteDestinationIfWatch:(id)arg1 newDestination:(id*)arg2;
- (void)_restartPendingResponseTimerFor:(id)arg1 withReducedFactor:(unsigned long)arg2;
- (void)_setDestinationAddress;
- (void)_startPendingResponseTimer:(id)arg1 identifier:(id)arg2;
- (void)_updateReachableDeviceAddresses:(id)arg1;
- (void)configure:(id)arg1;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 destination:(id)arg5;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 destination:(id)arg5 responseHandler:(id /* block */)arg6;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(id /* block */)arg5;
- (id)idsService;
- (id)initWithIDSService:(id)arg1 proxy:(BOOL)arg2;
- (BOOL)isAccountActive;
- (id)messageDispatcher;
- (id)pairedCompanionDestination;
- (id)pairedWatchDestination;
- (id)pairedWatchDeviceAddresses;
- (id)pairedWatchDevices;
- (id)peerResidentDeviceAddresses;
- (id)peerTransientDeviceAddresses;
- (id)pendingResponseTimers;
- (id)pendingResponses;
- (id)pendingSentMessages;
- (BOOL)proxy;
- (id)reachableCompanionDeviceAddresses;
- (id)reachableCompanionDevices;
- (id)reachableWatchDeviceAddresses;
- (id)reachableWatchDevices;
- (id)receivedResponses;
- (id)requestedCapabilities;
- (BOOL)rerouteDestinationIfCompanion:(id)arg1 newDestination:(id*)arg2;
- (BOOL)rerouteDestinationIfWatch:(id)arg1 newDestination:(id*)arg2;
- (id)residentDevices;
- (id)sendMessage:(id)arg1 destinations:(id)arg2 msgType:(unsigned int)arg3 error:(id*)arg4;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)setIdsService:(id)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (void)setPairedCompanionDestination:(id)arg1;
- (void)setPairedWatchDestination:(id)arg1;
- (void)setPairedWatchDeviceAddresses:(id)arg1;
- (void)setPeerResidentDeviceAddresses:(id)arg1;
- (void)setPeerTransientDeviceAddresses:(id)arg1;
- (void)setPendingResponseTimers:(id)arg1;
- (void)setPendingResponses:(id)arg1;
- (void)setPendingSentMessages:(id)arg1;
- (void)setReachableCompanionDeviceAddresses:(id)arg1;
- (void)setReachableWatchDeviceAddresses:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)start;
- (id)transientDevices;
- (void)updatePeerDeviceAddresses:(id)arg1;
- (id)workQueue;

@end