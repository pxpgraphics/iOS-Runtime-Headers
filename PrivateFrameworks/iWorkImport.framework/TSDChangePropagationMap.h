/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableSet, TSUNoCopyDictionary;

@interface TSDChangePropagationMap : NSObject <TSDChangePropagationMap> {
    NSMutableSet *mClassesOfChangedPrototypes;
    TSUNoCopyDictionary *mDictionary;
}

- (void)dealloc;
- (BOOL)hasAnyChangesForPrototypesOfClasses:(id)arg1;
- (id)init;
- (void)p_addClassesForPrototype:(id)arg1;
- (id)prototypeChangeForPrototype:(id)arg1;
- (id)prototypePassingTest:(id)arg1;
- (void)recordDeleteChangeForPrototype:(id)arg1 replacement:(id)arg2;
- (void)recordModifyChangeForPrototype:(id)arg1 property:(int)arg2 oldBoxedValue:(id)arg3 newBoxedValue:(id)arg4;
- (void)recordNewValueForModifyChangeForPrototype:(id)arg1 property:(int)arg2 newBoxedValue:(id)arg3;
- (void)recordOldValueForModifyChangeForPrototype:(id)arg1 property:(int)arg2 oldBoxedValue:(id)arg3;
- (void)recordReplacementChangeForPrototype:(id)arg1 replacement:(id)arg2;

@end
