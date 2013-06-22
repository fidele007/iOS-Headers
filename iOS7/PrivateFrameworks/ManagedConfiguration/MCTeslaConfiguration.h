/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSXPCConnection;

@interface MCTeslaConfiguration : NSObject
{
    BOOL _fetching;
    id _callback;
    NSXPCConnection *_connection;
}

@property(nonatomic, getter=isFetching) BOOL fetching; // @synthesize fetching=_fetching;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) id callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)fetchConfigurationWithCompletionBlock:(id)arg1;
- (void)fetchDidFailWithError:(id)arg1;
- (id)connectionError;
- (void)dealloc;
- (id)init;

@end
