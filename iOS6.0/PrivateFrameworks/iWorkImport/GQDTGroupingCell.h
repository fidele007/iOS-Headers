/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/GQDTCell.h>

@interface GQDTGroupingCell : GQDTCell
{
    unsigned short mLevel;
    unsigned short mRowIdx;
    unsigned short mRowCount;
    BOOL mIsCollapsed;
    id mValue;
    id mFormat;
    struct __CFBundle *mProcessorBundle;
    BOOL mHasValidFormulaValue;
    struct __CFString *mFormulaValue;
}

+ (struct __CFString *)displayTypeString:(int)arg1;
- (BOOL)hasFormulaValue;
- (struct __CFString *)createFormattedValue;
- (id)value;
- (BOOL)isCollapsed;
- (unsigned short)rowCount;
- (unsigned short)rowIdx;
- (unsigned short)level;
- (void)dealloc;
- (int)readAttributes:(struct _xmlTextReader *)arg1;
- (void)setProcessorBundle:(struct __CFBundle *)arg1;
- (int)readRootFormat:(struct _xmlTextReader *)arg1;
- (int)readElement:(struct _xmlTextReader *)arg1;
- (int)readValue:(struct _xmlTextReader *)arg1;

@end

