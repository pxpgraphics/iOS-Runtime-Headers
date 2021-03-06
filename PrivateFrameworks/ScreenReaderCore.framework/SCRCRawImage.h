/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCRawImage : NSObject {
    int _bytesPerPixel;
    char *_data;
    int _height;
    struct CGImage { } *_imageRef;
    int _width;
}

@property int bytesPerPixel;
@property char * data;
@property int height;
@property(retain) struct CGImage { }* imageRef;
@property int width;

+ (id)rawImageForImage:(struct CGImage { }*)arg1;

- (int)bytesPerPixel;
- (char *)data;
- (void)dealloc;
- (int)height;
- (struct CGImage { }*)imageRef;
- (void)setBytesPerPixel:(int)arg1;
- (void)setData:(char *)arg1;
- (void)setHeight:(int)arg1;
- (void)setImageRef:(struct CGImage { }*)arg1;
- (void)setWidth:(int)arg1;
- (int)width;

@end
