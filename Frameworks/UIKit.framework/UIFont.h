/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIFont : NSObject 
{
}

@property(retain,readonly) NSString *familyName;
@property(retain,readonly) NSString *fontName;
@property(readonly) float pointSize;
@property(readonly) float ascender;
@property(readonly) float descender;
@property(readonly) float capHeight;
@property(readonly) float xHeight;
@property(readonly) float lineHeight;

+ (id)__newDummy;
+ (id)fontWithName:(id)arg1 size:(float)arg2;
+ (id)fontWithMarkupDescription:(id)arg1;
+ (id)familyNames;
+ (id)fontNamesForFamilyName:(id)arg1;
+ (id)italicSystemFontOfSize:(float)arg1;
+ (float)labelFontSize;
+ (float)buttonFontSize;
+ (float)smallSystemFontSize;
+ (float)systemFontSize;
+ (id)fontWithFamilyName:(id)arg1 traits:(NSInteger)arg2 size:(float)arg3;
+ (id)boldSystemFontOfSize:(float)arg1;
+ (id)systemFontOfSize:(float)arg1;
+ (id)abMoreLabelFont;

- (id)fontWithSize:(float)arg1;
- (id)initWithName:(id)arg1 size:(float)arg2;
- (id)initWithFamilyName:(id)arg1 traits:(NSInteger)arg2 size:(float)arg3;
- (id)initWithMarkupDescription:(id)arg1;
- (Class)classForCoder;
- (float)descender;
- (float)lineHeight;
- (BOOL)isFixedPitch;
- (float)xHeight;
- (id)familyName;
- (float)ascender;
- (float)pointSize;
- (id)fontName;
- (id)markupDescription;
- (NSInteger)traits;
- (void)encodeWithCoder:(id)arg1;
- (float)leading;
- (float)capHeight;
- (id)initWithCoder:(id)arg1;

@end