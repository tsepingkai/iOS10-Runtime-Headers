/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPMutableHistoryEntryRoute : MSPMutableHistoryEntry <MSPHistoryEntryRoute> {
    bool  _failed;
    <MSPRouteInformationSource> * _routeInformationSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFailed, nonatomic) bool failed;
@property (readonly) unsigned long long hash;
@property (getter=navigationWasInterrupted, nonatomic) bool navigationInterrupted;
@property (nonatomic, copy) <MSPRouteInformationSource> *routeInformationSource;
@property (readonly) Class superclass;

+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;

- (void).cxx_destruct;
- (bool)_isUserVisibleDuplicateOfSameClassObject:(id)arg1;
- (id)_routeRequestStorage;
- (id)endWaypoint;
- (id)initWithStorage:(id)arg1;
- (bool)isFailed;
- (bool)navigationWasInterrupted;
- (id)routeHandle;
- (id)routeInformationSource;
- (void)setFailed:(bool)arg1;
- (void)setNavigationInterrupted:(bool)arg1;
- (void)setRouteInformationSource:(id)arg1;
- (id)startWaypoint;
- (id)transferToImmutableIfValidWithError:(out id*)arg1;
- (long long)transportType;

@end
