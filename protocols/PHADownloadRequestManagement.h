/* Generated by RuntimeBrowser.
 */

@protocol PHADownloadRequestManagement <NSObject>

@required

- (unsigned long long)requestCount;
- (void)requestPermissionToDownloadWithPhotoLibrary:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: PHPhotoLibrary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDate *, void*
- (void)setRequestCount:(unsigned long long)arg1;

@end