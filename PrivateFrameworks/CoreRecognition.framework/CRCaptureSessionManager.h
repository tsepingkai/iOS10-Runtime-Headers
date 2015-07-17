/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRCaptureSessionManager : NSObject {
    NSString * _cameraMode;
    int  _cameraPosition;
    struct CGSize { 
        float width; 
        float height; 
    }  _cameraResolution;
    AVCaptureSession * _captureSession;
    <AVCaptureVideoDataOutputSampleBufferDelegate> * _captureSessionDelegate;
    AVCaptureVideoDataOutput * _captureVideoDataOutput;
    struct __CVBuffer { } * _correctedCreditCardBuffer;
    NSString * _currentDeviceID;
    AVCaptureDeviceInput * _deviceInput;
    int  _exposureMode;
    int  _focusMode;
    id  _inputPortFormatObserver;
    AVCaptureVideoPreviewLayer * _previewLayer;
    int  _torchMode;
    int  _whiteBalanceMode;
}

@property (nonatomic, copy) NSString *cameraMode;
@property (nonatomic) int cameraPosition;
@property (nonatomic) struct CGSize { float x1; float x2; } cameraResolution;
@property (nonatomic, retain) AVCaptureSession *captureSession;
@property (nonatomic) <AVCaptureVideoDataOutputSampleBufferDelegate> *captureSessionDelegate;
@property (nonatomic, retain) AVCaptureVideoDataOutput *captureVideoDataOutput;
@property struct __CVBuffer { }*correctedCreditCardBuffer;
@property (retain) NSString *currentDeviceID;
@property (nonatomic, retain) AVCaptureDeviceInput *deviceInput;
@property (nonatomic) int exposureMode;
@property (nonatomic) int focusMode;
@property (retain) id inputPortFormatObserver;
@property (nonatomic, retain) AVCaptureVideoPreviewLayer *previewLayer;
@property (nonatomic) int torchMode;
@property (nonatomic) int whiteBalanceMode;

- (void).cxx_destruct;
- (void)_refocusOnPoint:(struct CGPoint { float x1; float x2; })arg1 focusMode:(int)arg2 exposure:(BOOL)arg3;
- (id)backFacingCamera;
- (void)cacheCameraResolution:(id)arg1;
- (unsigned int)cameraCount;
- (id)cameraMode;
- (int)cameraPosition;
- (struct CGSize { float x1; float x2; })cameraResolution;
- (id)captureDeviceWithIdentifier:(id)arg1;
- (id)captureDeviceWithPosition:(int)arg1;
- (id)captureSession;
- (id)captureSessionDelegate;
- (id)captureVideoDataOutput;
- (void)changeCameraConfiguration;
- (struct CGPoint { float x1; float x2; })convertCameraPoint:(struct CGPoint { float x1; float x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertCameraPoint:(struct CGPoint { float x1; float x2; })arg1 toLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertCameraPoint:(struct CGPoint { float x1; float x2; })arg1 toLayer:(id)arg2 flipped:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertCameraRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct __CVBuffer { }*)correctedCreditCardBuffer;
- (id)currentDeviceID;
- (id)deviceInput;
- (int)exposureMode;
- (int)focusMode;
- (id)frontFacingCamera;
- (id)inputPortFormatObserver;
- (BOOL)isAdjustingFocus;
- (BOOL)isRearCamera;
- (BOOL)isRunning;
- (id)previewLayer;
- (void)refocusOnPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)refocusOnPoint:(struct CGPoint { float x1; float x2; })arg1 exposure:(BOOL)arg2;
- (void)resetFocus;
- (void)setCameraMode:(id)arg1;
- (void)setCameraPosition:(int)arg1;
- (void)setCameraResolution:(struct CGSize { float x1; float x2; })arg1;
- (void)setCaptureSession:(id)arg1;
- (void)setCaptureSessionDelegate:(id)arg1;
- (void)setCaptureVideoDataOutput:(id)arg1;
- (void)setCorrectedCreditCardBuffer:(struct __CVBuffer { }*)arg1;
- (void)setCurrentDeviceID:(id)arg1;
- (void)setDeviceInput:(id)arg1;
- (void)setExposureMode:(int)arg1;
- (void)setFocusMode:(int)arg1;
- (void)setInputPortFormatObserver:(id)arg1;
- (void)setPreviewLayer:(id)arg1;
- (void)setPreviewOrientation:(int)arg1;
- (void)setTorchMode:(int)arg1;
- (void)setWhiteBalanceMode:(int)arg1;
- (void)setupCameraSession;
- (void)setupCameraSessionWithCaptureDevice:(id)arg1;
- (void)startRunning;
- (void)stopRunning;
- (BOOL)switchToCamera:(int)arg1;
- (BOOL)switchToCameraWithDeviceID:(id)arg1;
- (void)teardownCameraSession;
- (BOOL)toggleCamera;
- (int)torchMode;
- (int)whiteBalanceMode;

@end