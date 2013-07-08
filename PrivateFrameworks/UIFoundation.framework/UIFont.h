/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSString;

@interface UIFont : NSObject <NSCopying> {
}

@property(readonly) NSString * familyName;
@property(readonly) NSString * fontName;
@property(readonly) float pointSize;
@property(readonly) float ascender;
@property(readonly) float descender;
@property(readonly) float capHeight;
@property(readonly) float xHeight;
@property(readonly) float lineHeight;
@property(readonly) float leading;

+ (id)defaultFontForUsage:(id)arg1;
+ (id)preferredFontForUsage:(id)arg1 contentSizeCategoryName:(id)arg2;
+ (id)preferredFontForUsage:(id)arg1;
+ (float)buttonFontSize;
+ (id)_lightSystemFontOfSize:(float)arg1;
+ (id)_thinSystemFontOfSize:(float)arg1;
+ (id)italicSystemFontOfSize:(float)arg1;
+ (id)fontNamesForFamilyName:(id)arg1;
+ (id)familyNames;
+ (id)fontWithMarkupDescription:(id)arg1;
+ (void)_evictAllItemsFromFontAndFontDescriptorCaches;
+ (id)_sharedZeroPointFont;
+ (id)_systemFontsOfSize:(float)arg1 traits:(int)arg2;
+ (id)systemFontOfSize:(float)arg1 traits:(int)arg2;
+ (id)fontWithName:(id)arg1 size:(float)arg2 traits:(int)arg3;
+ (id)_sharedFontCache;
+ (id)fontWithFamilyName:(id)arg1 traits:(int)arg2 size:(float)arg3;
+ (id)boldSystemFontOfSize:(float)arg1;
+ (id)fontWithName:(id)arg1 size:(float)arg2;
+ (id)fontWithDescriptor:(id)arg1 size:(float)arg2;
+ (id)userFontOfSize:(float)arg1;
+ (id)systemFontOfSize:(float)arg1;
+ (void)initialize;
+ (id)_opticalSystemFontOfSize:(float)arg1;
+ (id)_opticalBoldSystemFontOfSize:(float)arg1;
+ (float)labelFontSize;
+ (id)preferredFontForTextStyle:(id)arg1;
+ (id)defaultFontForTextStyle:(id)arg1;
+ (float)systemFontSize;
+ (id)classFallbacksForKeyedArchiver;
+ (float)smallSystemFontSize;
+ (id)_ui_bulletFontForFont:(id)arg1;
+ (void)ab_setIgnoreUserFontSize:(BOOL)arg1;
+ (BOOL)_shouldUseDefaultFont;
+ (BOOL)ab_preferredContentSizeCategoryIsAccessibilityCategory;
+ (id)ab_preferredContentSizeCategoryName;
+ (id)ab_preferredFontForTextStyle:(id)arg1;

- (unsigned int)mostCompatibleStringEncoding;
- (unsigned int)_defaultGlyphForChar:(unsigned short)arg1;
- (id)_familyName;
- (float)_ascenderDeltaForBehavior:(int)arg1;
- (BOOL)_isHiraginoFont;
- (BOOL)isFixedPitch;
- (id)initWithName:(id)arg1 size:(float)arg2;
- (id)_alternateSystemFonts;
- (id)markupDescription;
- (id)familyNameForCSSFontFamilyValue;
- (float)lineHeight;
- (id)initWithFamilyName:(id)arg1 traits:(int)arg2 size:(float)arg3;
- (BOOL)isSystemFont;
- (id)initWithMarkupDescription:(id)arg1;
- (id)familyName;
- (bool)_getLatin1GlyphMapping:(const unsigned short**)arg1 andAdvanceMapping:(const struct CGSize {}**)arg2;
- (float)_baseLineHeightForFont:(BOOL)arg1;
- (id)_fontScaledByScaleFactor:(float)arg1;
- (id)lastResortFont;
- (id)bestMatchingFontForCharacters:(const unsigned short*)arg1 length:(unsigned int)arg2 attributes:(id)arg3 actualCoveredLength:(unsigned int*)arg4;
- (int)traits;
- (id)coveredCharacterSet;
- (id)fontDescriptor;
- (id)fontName;
- (id)fontWithSize:(float)arg1;
- (unsigned int)numberOfGlyphs;
- (unsigned short)glyphWithName:(id)arg1;
- (float)_defaultLineHeightForUILayout;
- (id)screenFontWithRenderingMode:(unsigned int)arg1;
- (void)getBoundingRects:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned int)arg3;
- (unsigned int)hyphenGlyphForLocale:(id)arg1;
- (struct __CTFont { }*)CTFont;
- (id)_kernOverride;
- (unsigned int)renderingMode;
- (BOOL)_isDefaultFace;
- (float)_totalAdvancementForNativeGlyphs:(const unsigned short*)arg1 count:(long)arg2;
- (unsigned int)getCaretPositions:(float*)arg1 forGlyph:(unsigned int)arg2 maximumLength:(unsigned int)arg3;
- (void)setInContext:(struct CGContext { }*)arg1;
- (void)getAdvancements:(struct CGSize { float x1; float x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned int)arg3;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_textMatrixTransformForContext:(struct CGContext { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRectForFont;
- (float)ascender;
- (float)underlineThickness;
- (float)_leading;
- (float)descender;
- (float)xHeight;
- (BOOL)isVertical;
- (float)pointSize;
- (struct CGFont { }*)_backingCGSFont;
- (struct CGSize { float x1; float x2; })advancementForGlyph:(unsigned short)arg1;
- (id)verticalFont;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)leading;
- (float)_bodyLeading;
- (float)capHeight;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)ab_italicFont;
- (id)ab_boldFont;
- (struct __CTFont { }*)_gkCTFont;
- (struct CGPoint { float x1; float x2; })mf_originPointFromMidlinePoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })mf_caplinePointFromBaselinePoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })mf_baselinePointFromCaplinePoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })mf_caplinePointFromOriginPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })mf_originPointFromCaplinePoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })mf_originPointFromBaselinePoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })mf_baselinePointFromOriginPoint:(struct CGPoint { float x1; float x2; })arg1;

@end