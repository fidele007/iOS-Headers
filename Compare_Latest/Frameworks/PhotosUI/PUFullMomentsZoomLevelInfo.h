//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUGridZoomLevelInfo.h>

#import "PUPhotosSectionHeaderViewDelegate.h"
#import "PUSectionedGridLayoutDelegate.h"

@class NSString;

@interface PUFullMomentsZoomLevelInfo : PUGridZoomLevelInfo <PUSectionedGridLayoutDelegate, PUPhotosSectionHeaderViewDelegate>
{
    PUGridZoomLevelInfo *_transitionOtherLevelInfo;
}

- (void).cxx_destruct;
- (void)headerView:(id)arg1 actionButtonPressed:(id)arg2;
- (struct UIEdgeInsets)_fillerViewInsetsForItemAtIndexPath:(id)arg1;
- (void)sectionedGridLayout:(id)arg1 didFinalizePrepareTransitionIsAppearing:(BOOL)arg2;
- (void)_prepareTransitionImageContentForCell:(id)arg1 atIndexPath:(id)arg2 appearingZoomLevelInfo:(id)arg3;
- (void)_prepareTransitionSubviewsForCell:(id)arg1 atIndexPath:(id)arg2 isAppearing:(BOOL)arg3;
- (void)didFinishZoomLevelTransition;
- (void)prepareForTransitionFromZoomLevelInfo:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3;
- (void)prepareForTransitionToZoomLevelInfo:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3;
- (BOOL)supportsEditMode;
- (int)imageFormat;
- (BOOL)wantsAutomaticContentOffsetAdjustment;
- (BOOL)wantsCloudStatusVisible;
- (BOOL)wantsAssetCountsVisible;
- (BOOL)wantsMagnifierNavigation;
- (id)assetsToDisplayInMapForVisualSection:(int)arg1;
- (BOOL)supportsIncrementalChangeNotifications;
- (id)diagnosticsProviderForVisualSection:(int)arg1;
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(int)arg2;
- (BOOL)configureGridCell:(id)arg1 forIndexPath:(id)arg2;
- (id)sectionHeaderElementKind;
- (int)cellFillMode;
- (void)updateLayoutMetricsForWidth:(float)arg1;
- (id)newCollectionViewLayout;
- (double)zoomInDuration;
- (struct __CFString *)aggregateLevelKey;
- (BOOL)hasEnoughContentToDisplay;
- (id)displayTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

