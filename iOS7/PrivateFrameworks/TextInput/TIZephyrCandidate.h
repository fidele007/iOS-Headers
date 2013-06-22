/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <TextInput/TIKeyboardCandidateSingle.h>

@interface TIZephyrCandidate : TIKeyboardCandidateSingle
{
    BOOL extensionCandidate;
    BOOL _isFromPhraseDictionary;
    unsigned int _wordOriginFeedbackID;
    unsigned int _usageTrackingMask;
}

+ (int)type;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isFromPhraseDictionary; // @synthesize isFromPhraseDictionary=_isFromPhraseDictionary;
@property(nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate; // @synthesize extensionCandidate;
- (unsigned int)usageTrackingMask;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isAutocorrection;
- (unsigned int)wordOriginFeedbackID;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned int)arg3 usageTrackingMask:(unsigned int)arg4;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned int)arg3;

@end
