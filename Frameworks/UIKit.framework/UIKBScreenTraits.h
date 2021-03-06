/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIScreen;

@interface UIKBScreenTraits : NSObject {
    BOOL _knobInput;
    int _orientation;
    NSString *_orientationKey;
    UIScreen *_screen;
}

@property(readonly) int idiom;
@property(readonly) BOOL knobInput;
@property int orientation;
@property(retain) NSString * orientationKey;
@property(readonly) UIScreen * screen;

+ (id)traitsWithScreen:(id)arg1 orientation:(int)arg2;

- (void)dealloc;
- (int)idiom;
- (id)initWithScreen:(id)arg1 orientation:(int)arg2;
- (BOOL)knobInput;
- (int)orientation;
- (id)orientationKey;
- (id)screen;
- (void)setOrientation:(int)arg1;
- (void)setOrientationKey:(id)arg1;

@end
