/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVFrameRateRangeInternal;

@interface AVFrameRateRange : NSObject  {
    AVFrameRateRangeInternal *_internal;
}

@property(readonly) double minFrameRate;
@property(readonly) double maxFrameRate;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxFrameDuration;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minFrameDuration;

+ (id)frameRateRangeWithMinRate:(int)arg1 maxFrameRate:(int)arg2;

- (BOOL)includesFrameRate:(double)arg1;
- (id)initWithMinFrameRate:(int)arg1 maxFrameRate:(int)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxFrameDuration;
- (double)maxFrameRate;
- (double)minFrameRate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minFrameDuration;
- (BOOL)includesFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;

@end