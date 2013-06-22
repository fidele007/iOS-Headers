/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSMutableArray;

@interface LBSGAddress : PBCodable
{
    NSMutableArray *_formattedAddressLines;
    NSMutableArray *_components;
}

@property(retain, nonatomic) NSMutableArray *components; // @synthesize components=_components;
@property(retain, nonatomic) NSMutableArray *formattedAddressLines; // @synthesize formattedAddressLines=_formattedAddressLines;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)componentAtIndex:(unsigned int)arg1;
- (unsigned int)componentsCount;
- (void)addComponent:(id)arg1;
- (id)formattedAddressLineAtIndex:(unsigned int)arg1;
- (unsigned int)formattedAddressLinesCount;
- (void)addFormattedAddressLine:(id)arg1;
- (void)dealloc;

@end
