/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@class DigitalClockLabel, NSString, UILabel, UISwitch;

@interface AlarmView : UIView {
    UILabel *_detailLabel;
    UISwitch *_enabledSwitch;
    NSString *_name;
    NSString *_repeatText;
    int _style;
    DigitalClockLabel *_timeLabel;
}

@property(retain) UILabel * detailLabel;
@property(readonly) UISwitch * enabledSwitch;
@property(copy) NSString * name;
@property(copy) NSString * repeatText;
@property int style;
@property(readonly) DigitalClockLabel * timeLabel;

- (void)dealloc;
- (id)detailLabel;
- (id)enabledSwitch;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)name;
- (id)repeatText;
- (void)setDetailLabel:(id)arg1;
- (void)setName:(id)arg1 andRepeatText:(id)arg2 textColor:(id)arg3;
- (void)setName:(id)arg1;
- (void)setRepeatText:(id)arg1;
- (void)setStyle:(int)arg1;
- (int)style;
- (id)timeLabel;

@end
