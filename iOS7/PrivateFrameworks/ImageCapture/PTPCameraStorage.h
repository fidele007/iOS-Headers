/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ImageCapture/PTPCameraFolder.h>

@class NSMutableArray;

@interface PTPCameraStorage : PTPCameraFolder
{
    NSMutableArray *_tempArrayOfAllObjectHandles;
    NSMutableArray *_tempArrayOfAllObjectHandlesToBeIgnored;
}

- (id)tempArrayOfAllObjectHandlesToBeIgnored;
- (id)tempArrayOfAllObjectHandles;
- (void)prime;
- (void)refreshInfo;
- (void)dealloc;
- (id)initWithStorageID:(unsigned int)arg1 device:(id)arg2;

@end

