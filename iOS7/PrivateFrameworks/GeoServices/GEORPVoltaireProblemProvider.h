/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/GEORPProblemProvider.h>

#import "PBRequesterDelegate-Protocol.h"

@class GEORequester;

@interface GEORPVoltaireProblemProvider : GEORPProblemProvider <PBRequesterDelegate>
{
    GEORequester *_submissionRequester;
    GEORequester *_statusRequester;
    id _submissionErrorHandler;
    id _submissionFinishedHandler;
    id _statusErrorHandler;
    id _statusFinishedHandler;
}

+ (unsigned short)providerID;
+ (void)setUsePersistentConnection:(_Bool)arg1;
+ (void)_resetURLs;
- (void)requesterDidFinish:(id)arg1;
- (void)requesterDidCancel:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)cancelRequest;
- (void)startStatusRequest:(id)arg1 finished:(id)arg2 error:(void)arg3;
- (void)startSubmissionRequest:(id)arg1 finished:(id)arg2 error:(void)arg3;
- (void)dealloc;
- (id)init;

@end

