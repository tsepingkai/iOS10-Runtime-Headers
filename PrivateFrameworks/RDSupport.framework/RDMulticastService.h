/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RDSupport.framework/RDSupport
 */

@interface RDMulticastService : NSObject {
    int  _connectionState;
    id /* block */  _connectionStateChangedBlock;
    BOOL  _continueAfterHandshake;
    BOOL  _didCompleteHandshake;
    id /* block */  _handshakeCompletionBlock;
    NSObject<OS_dispatch_queue> * _handshakeWorkQueue;
    NSString * _lastKnownIDSPairingRecordsState;
    NSString * _localIP;
    NSString * _localInterfaceName;
    struct addrinfo { int x1; int x2; int x3; int x4; unsigned int x5; char *x6; struct sockaddr {} *x7; struct addrinfo {} *x8; } * _multicastAddr;
    id /* block */  _multicastPayloadCallback;
    NSObject<OS_dispatch_source> * _multicastSendTimer;
    NSObject<OS_dispatch_source> * _readSource;
    int  _receiveSocketFd;
    NSString * _remoteIP;
    int  _repeatedSendFailureBails;
    int  _repeatedSendFailureCount;
    int  _sendSocketFd;
    double  _senderTime;
    BOOL  _shouldAllowIDSReset;
    BOOL  _shouldRefetchIDSPairingState;
    int  _unansweredMulticastCount;
}

@property (nonatomic) int connectionState;
@property (nonatomic, copy) id /* block */ connectionStateChangedBlock;
@property (nonatomic) BOOL continueAfterHandshake;
@property (nonatomic) BOOL didCompleteHandshake;
@property (nonatomic, copy) id /* block */ handshakeCompletionBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *handshakeWorkQueue;
@property (nonatomic, copy) NSString *lastKnownIDSPairingRecordsState;
@property (nonatomic, retain) NSString *localIP;
@property (nonatomic, retain) NSString *localInterfaceName;
@property (nonatomic) struct addrinfo { int x1; int x2; int x3; int x4; unsigned int x5; char *x6; struct sockaddr {} *x7; struct addrinfo {} *x8; }*multicastAddr;
@property (nonatomic, copy) id /* block */ multicastPayloadCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *multicastSendTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *readSource;
@property (nonatomic) int receiveSocketFd;
@property (nonatomic, retain) NSString *remoteIP;
@property (nonatomic) int repeatedSendFailureBails;
@property (nonatomic) int repeatedSendFailureCount;
@property (nonatomic) int sendSocketFd;
@property (nonatomic) double senderTime;
@property (nonatomic) BOOL shouldAllowIDSReset;
@property (nonatomic) BOOL shouldRefetchIDSPairingState;
@property (nonatomic) int unansweredMulticastCount;

+ (id)ipv4AddressForInterface:(id)arg1;
+ (id)localEthernetInterfaceName;

- (void).cxx_destruct;
- (void)beginMulticastConnectionWithPayloadCallBack:(id /* block */)arg1;
- (int)connectionState;
- (id /* block */)connectionStateChangedBlock;
- (BOOL)continueAfterHandshake;
- (BOOL)didCompleteHandshake;
- (BOOL)discoverLocalInterface;
- (id /* block */)handshakeCompletionBlock;
- (id)handshakeWorkQueue;
- (id)init;
- (id)lastKnownIDSPairingRecordsState;
- (id)localIP;
- (id)localInterfaceName;
- (struct addrinfo { int x1; int x2; int x3; int x4; unsigned int x5; char *x6; struct sockaddr {} *x7; struct addrinfo {} *x8; }*)multicastAddr;
- (id /* block */)multicastPayloadCallback;
- (id)multicastSendTimer;
- (void)performHandshakeWithCompletionBlock:(id /* block */)arg1;
- (id)readSource;
- (BOOL)receiveHandshakeMulticast;
- (int)receiveSocketFd;
- (id)remoteIP;
- (int)repeatedSendFailureBails;
- (int)repeatedSendFailureCount;
- (void)resetHandshakeState;
- (BOOL)sendHandshakeMulticast;
- (void)sendMulticastPayload:(id)arg1;
- (int)sendSocketFd;
- (double)senderTime;
- (void)setConnectionState:(int)arg1;
- (void)setConnectionStateChangedBlock:(id /* block */)arg1;
- (void)setContinueAfterHandshake:(BOOL)arg1;
- (void)setDidCompleteHandshake:(BOOL)arg1;
- (void)setHandshakeCompletionBlock:(id /* block */)arg1;
- (void)setHandshakeWorkQueue:(id)arg1;
- (void)setLastKnownIDSPairingRecordsState:(id)arg1;
- (void)setLocalIP:(id)arg1;
- (void)setLocalInterfaceName:(id)arg1;
- (void)setMulticastAddr:(struct addrinfo { int x1; int x2; int x3; int x4; unsigned int x5; char *x6; struct sockaddr {} *x7; struct addrinfo {} *x8; }*)arg1;
- (void)setMulticastPayloadCallback:(id /* block */)arg1;
- (void)setMulticastSendTimer:(id)arg1;
- (void)setReadSource:(id)arg1;
- (void)setReceiveSocketFd:(int)arg1;
- (void)setRemoteIP:(id)arg1;
- (void)setRepeatedSendFailureBails:(int)arg1;
- (void)setRepeatedSendFailureCount:(int)arg1;
- (void)setSendSocketFd:(int)arg1;
- (void)setSenderTime:(double)arg1;
- (void)setShouldAllowIDSReset:(BOOL)arg1;
- (void)setShouldRefetchIDSPairingState:(BOOL)arg1;
- (void)setUnansweredMulticastCount:(int)arg1;
- (BOOL)setUpMulticastReceiveSocket;
- (BOOL)setUpMulticastSendSocket;
- (BOOL)setUpMulticastSendTimer;
- (BOOL)setUpReceiveDispatchSource;
- (BOOL)shouldAllowIDSReset;
- (BOOL)shouldRefetchIDSPairingState;
- (void)syncTimeWithSender:(double)arg1;
- (void)tearDownMulticastSendReceiveState;
- (int)unansweredMulticastCount;

@end