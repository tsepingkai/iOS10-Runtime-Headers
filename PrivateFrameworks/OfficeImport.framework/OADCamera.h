/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADRotation3D;

@interface OADCamera : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mCameraType;
    float mFieldOfView;
    float mZoom;
}


- (void)setFieldOfView:(float)arg1;
- (float)fieldOfView;
- (void)setCameraType:(int)arg1;
- (int)cameraType;
- (id)rotation;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)zoom;
- (void)setZoom:(float)arg1;
- (void)setRotation:(id)arg1;

@end