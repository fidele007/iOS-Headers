/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputMediaDataRequester : NSObject
{
    AVAssetWriterInputWritingHelper *_writingHelper;
    struct dispatch_queue_s *_requestQueue;
    id _requestBlock;
}

- (id)initWithAssetWriterInputWritingHelper:(id)arg1 requestQueue:(struct dispatch_queue_s *)arg2 requestBlock:(id)arg3;
- (id)init;
- (void)dealloc;
- (void)finalize;
- (void)startRequestingMediaData;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_requestMediaDataIfReady;
@property(readonly, nonatomic) id requestBlock; // @synthesize requestBlock=_requestBlock;
@property(readonly, nonatomic) struct dispatch_queue_s *requestQueue; // @synthesize requestQueue=_requestQueue;

@end

