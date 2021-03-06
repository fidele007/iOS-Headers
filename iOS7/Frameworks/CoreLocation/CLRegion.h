/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface CLRegion : NSObject <NSCopying, NSSecureCoding>
{
    CDStruct_f756f8ea fRegion;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) CDStruct_f756f8ea clientRegion;
- (_Bool)containsCoordinate:(CDStruct_2c43369c)arg1;
@property(nonatomic) _Bool notifyOnExit;
@property(nonatomic) _Bool notifyOnEntry;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) double radius;
@property(readonly, nonatomic) CDStruct_2c43369c center;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_encodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (id)initCircularRegionWithCenter:(CDStruct_2c43369c)arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initWithClientRegion:(CDStruct_f756f8ea)arg1;

@end

