/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequest.h"

@class ADAdData, ADLogMetaData, NSMutableArray;

@interface ADServerErrorRequest : PBRequest
{
    ADLogMetaData *_metaData;
    BOOL _hasErrorCode;
    int _errorCode;
    ADAdData *_badResponse;
    NSMutableArray *_urlWithErrors;
}

@property(retain, nonatomic) NSMutableArray *urlWithErrors; // @synthesize urlWithErrors=_urlWithErrors;
@property(retain, nonatomic) ADAdData *badResponse; // @synthesize badResponse=_badResponse;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) BOOL hasErrorCode; // @synthesize hasErrorCode=_hasErrorCode;
@property(retain, nonatomic) ADLogMetaData *metaData; // @synthesize metaData=_metaData;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)urlWithErrorAtIndex:(unsigned int)arg1;
- (unsigned int)urlWithErrorsCount;
- (void)addUrlWithError:(id)arg1;
- (void)clearUrlWithErrors;
@property(readonly, nonatomic) BOOL hasBadResponse;
@property(readonly, nonatomic) BOOL hasMetaData;
- (void)dealloc;

@end

