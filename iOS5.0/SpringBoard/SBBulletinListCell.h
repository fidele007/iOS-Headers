/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBBulletinLinenBackedCell.h"

@class NSDate, NSTimer, SBBulletinCellContentView, UIImageView;

@interface SBBulletinListCell : SBBulletinLinenBackedCell
{
    UIImageView *_bulletinAccessoryView;
    UIImageView *_bottomCellSeparator;
    SBBulletinCellContentView *_cellContentView;
    NSDate *_futureDate;
    NSTimer *_futureDateTimer;
}

+ (float)heightForRowWithSubtitle:(id)arg1 message:(id)arg2 maxLines:(unsigned int)arg3 width:(float)arg4 italicize:(BOOL)arg5;
+ (float)heightForRowWithSubtitle:(id)arg1 imageHeight:(float)arg2 italicize:(BOOL)arg3;
- (id)initWithLinenView:(id)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)_clearFutureDateTimer;
- (void)willMoveToSuperview:(id)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)setMaxMessageLines:(unsigned int)arg1;
- (void)setTitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 formatStyle:(int)arg5;
- (void)setAttachmentImage:(id)arg1;
- (void)setAttachmentImageSize:(struct CGSize)arg1;
- (void)setAttachmentText:(id)arg1;
- (void)setBulletinAccessoryStyle:(int)arg1;
- (void)setCellSeparatorStyle:(int)arg1;
- (void)setContentItalicizedUntil:(id)arg1;
- (void)_futureDateTimerFired:(id)arg1;
- (void)layoutSubviews;
@property(retain) NSDate *futureDate; // @synthesize futureDate=_futureDate;

@end

