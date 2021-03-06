/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIOrientationLockSetting : CCUISettingModule {
    bool  _orientationLockEnabled;
}

@property (getter=_isOrientationLockEnabled, setter=_setOrientationLockEnabled:, nonatomic) bool orientationLockEnabled;

+ (id)displayName;
+ (id)identifier;
+ (id)statusOffString;
+ (id)statusOnString;

- (bool)_isOrientationLockEnabled;
- (bool)_isStateOverridden;
- (void)_setOrientationLockEnabled:(bool)arg1;
- (bool)_stateWithEffectiveOverrides;
- (void)_tearDown;
- (bool)_toggleState;
- (void)_updateState;
- (void)activate;
- (id)aggdKey;
- (void)deactivate;
- (void)dealloc;
- (id)glyphImageForState:(int)arg1;
- (bool)isRestricted;
- (id)selectedStateColor;

@end
