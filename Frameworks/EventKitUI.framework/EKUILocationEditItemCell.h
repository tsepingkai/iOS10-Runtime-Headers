/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUILocationEditItemCell : UITableViewCell {
    UIButton * _clearButton;
    id /* block */  _clearButtonTapped;
    UIImageView * _image;
    UIActivityIndicatorView * _spinner;
    UILabel * _title;
}

@property (nonatomic, copy) id /* block */ clearButtonTapped;

- (void).cxx_destruct;
- (void)_clearButtonTapped:(id)arg1;
- (id /* block */)clearButtonTapped;
- (id)description;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setClearButtonTapped:(id /* block */)arg1;
- (void)updateWithName:(id)arg1 sourceSupportsAvailability:(BOOL)arg2 availabilityRequestInProgress:(BOOL)arg3 availabilityType:(int)arg4;

@end