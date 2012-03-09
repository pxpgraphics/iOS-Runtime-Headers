/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString;

@interface SAReminderListSearch : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;
@property(copy) NSString * name;

+ (id)listSearch;
+ (id)listSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (void)setName:(id)arg1;
- (id)name;
- (id)encodedClassName;
- (id)targetAppId;
- (void)setTargetAppId:(id)arg1;
- (BOOL)requiresResponse;

@end