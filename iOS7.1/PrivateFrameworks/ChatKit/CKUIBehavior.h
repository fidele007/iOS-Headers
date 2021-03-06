//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CKUIBehavior : NSObject
{
    float _bubbleIndentationDuringEditMode;
}

+ (id)sharedBehaviors;
@property(readonly, nonatomic) float bubbleIndentationDuringEditMode; // @synthesize bubbleIndentationDuringEditMode=_bubbleIndentationDuringEditMode;
- (id)timestampDateFormatter;
@property(readonly, nonatomic) NSString *transcriptDefaultPNG;
@property(readonly, nonatomic) NSString *conversationListDefaultPNG;
- (unsigned int)conversationCacheSize;
- (id)dimmingViewBackgroundColor;
- (BOOL)dimsTranscriptWhileEditingConversations;
- (BOOL)shouldDimTranscript;
- (float)senderSummaryConversationListSpace;
- (float)bottomConversationListSpace;
- (float)topConversationListSpace;
- (float)conversationListDateBodyLeading;
- (float)conversationListSummaryBodyLeading;
- (float)conversationListSenderBodyLeading;
- (id)forwardImage;
- (id)red_chevronImage;
- (id)siri_chevronImage;
- (id)blue_chevronImage;
- (id)green_chevronImage;
- (id)gray_chevronImage;
- (id)chevronImageForColorType:(BOOL)arg1;
- (id)systemGrayChevronImage;
- (id)whiteChevronImage;
- (id)chevronImage;
- (BOOL)showsChevronImage;
- (id)conversationListDateFont;
- (id)conversationListSummaryFont;
- (id)conversationListSenderFont;
- (float)entryFieldElementPadding;
- (float)entryFieldLineFragmentPadding;
- (id)characterCountFont;
- (id)entryFieldDividerColor;
- (id)entryFieldBackgroundColor;
- (id)entryFieldGrayColor;
- (id)lightGrayColor;
- (id)photoButtonColor;
- (id)red_sendButtonColor;
- (id)siri_sendButtonColor;
- (id)blue_sendButtonColor;
- (id)green_sendButtonColor;
- (id)gray_sendButtonColor;
- (id)sendButtonColorForColorType:(BOOL)arg1;
- (id)textDocumentIcon;
- (id)errorDocumentIcon;
- (id)genericDocumentIcon;
- (struct CGSize)documentIconSize;
- (struct UIEdgeInsets)documentIconAlignmentRectInsets;
- (BOOL)supportsPassbookAttachments;
- (float)balloonMaxWidthForOrientation:(BOOL)arg1;
- (float)rightBalloonMaxWidth;
- (float)leftBalloonMaxWidth;
- (float)contactPhotoBalloonMargin;
- (struct UIEdgeInsets)balloonMaskFrameInsets;
- (struct UIEdgeInsets)balloonMaskFrameCapInsets;
- (struct UIEdgeInsets)balloonMaskAlignmentRectInsets;
- (struct UIEdgeInsets)skinnyBalloonMaskCapInsets;
- (struct UIEdgeInsets)balloonMaskCapInsets;
- (struct CGSize)skinnyBalloonMaskSize;
- (struct CGSize)balloonMaskSize;
- (float)skinnyBalloonWidthDifference;
- (float)balloonMaskTailWidth;
- (float)balloonTextLineHeight;
- (id)balloonSubjectFont;
- (id)balloonTextFont;
- (id)attachmentBalloonTextColor;
- (id)attachmentBalloonActionColor;
- (id)red_balloonOverlayColor;
- (id)siri_balloonOverlayColor;
- (id)blue_balloonOverlayColor;
- (id)green_balloonOverlayColor;
- (id)gray_balloonOverlayColor;
- (id)balloonOverlayColorForColorType:(BOOL)arg1;
- (id)red_backgroundBalloonColor;
- (id)siri_backgroundBalloonColor;
- (id)blue_backgroundBalloonColor;
- (id)green_backgroundBalloonColor;
- (id)gray_backgroundBalloonColor;
- (id)backgroundBalloonColorForColorType:(BOOL)arg1;
- (id)red_balloonTextLinkColor;
- (id)siri_balloonTextLinkColor;
- (id)blue_balloonTextLinkColor;
- (id)green_balloonTextLinkColor;
- (id)gray_balloonTextLinkColor;
- (id)balloonTextLinkColorForColorType:(BOOL)arg1;
- (id)red_balloonTextColor;
- (id)siri_balloonTextColor;
- (id)blue_balloonTextColor;
- (id)green_balloonTextColor;
- (id)gray_balloonTextColor;
- (id)balloonTextColorForColorType:(BOOL)arg1;
- (id)red_unfilledBalloonColor;
- (id)siri_unfilledBalloonColor;
- (id)blue_unfilledBalloonColor;
- (id)green_unfilledBalloonColor;
- (id)gray_unfilledBalloonColor;
- (id)unfilledBalloonColorForColorType:(BOOL)arg1;
- (id)red_balloonColors;
- (id)siri_balloonColors;
- (id)blue_balloonColors;
- (id)green_balloonColors;
- (id)gray_balloonColors;
- (id)balloonColorsForColorType:(BOOL)arg1;
- (float)bottomTranscriptSpace;
- (float)topTranscriptSpace;
- (float)largeTranscriptSpace;
- (float)mediumTranscriptSpace;
- (float)smallTranscriptSpace;
- (float)timestampBodyLeadingFraction:(float)arg1;
- (float)timestampBodyLeading;
- (float)balloonBalloonTranscriptSpace:(BOOL)arg1;
- (float)transcriptDrawerOverlap;
- (void)invalidateTranscriptDrawerWidth;
- (float)transcriptDrawerWidth;
- (struct UIEdgeInsets)contactPhotoTranscriptInsets;
- (struct UIEdgeInsets)serviceTranscriptInsets;
- (struct UIEdgeInsets)timestampTranscriptInsets;
- (struct UIEdgeInsets)entityTranscriptInsets;
- (struct UIEdgeInsets)statusTranscriptInsets;
- (struct UIEdgeInsets)balloonTranscriptInsets;
- (float)transcriptBoldTextHeight;
- (struct UIEdgeInsets)transcriptBoldTextAlignmentInsets;
- (id)transcriptStatusParagraphStyle;
- (id)transcriptBoldTextFont;
- (id)transcriptTextFont;
- (id)transcriptTextColor;
- (id)readerFont;
- (float)spaceBetweenEditToolbarButtons;
- (BOOL)isAccessibilityPreferredContentSizeCategory;
- (id)appTintColor;
@property(readonly, nonatomic) BOOL shouldShowContactPhotos;
- (id)previewTitleFont;
- (float)previewTitleBarHeight;
- (struct UIEdgeInsets)minimumPlayButtonInsets;
- (struct CGSize)mapThumbnailFillSize;
- (struct CGSize)attachmentBalloonSize;
- (struct CGSize)untailedPreviewFillSizeForImageSize:(struct CGSize)arg1;
- (struct CGSize)thumbnailFillSizeForImageSize:(struct CGSize)arg1;
- (id)transcriptSeparatorColor;
- (id)transcriptHeaderTextFont;
- (id)transcriptBackgroundColor;
- (float)transcriptContactImageDiameter;
- (float)recipientOverlaySingleLineContentHeight;
- (BOOL)shouldRefreshAlternateAddressesSheet;
- (BOOL)shouldAutomaticallyCheckAvailabilityOfAlternateAddresses;
- (float)collapsedRecipientListLeftPadding;
- (BOOL)shouldShowDisclosureChevronInRecipientAtoms;
- (BOOL)shouldHomogenizeAtomsForPreferredService;
- (float)conversationListRowHeight;
- (float)conversationListMultipleContactsImageDiameter;
- (float)conversationListContactImageDiameter;
@property(readonly, nonatomic) BOOL useContactPhotosInConversationList;
@property(readonly, nonatomic) BOOL presentForwardingUIModally;
@property(readonly, nonatomic) BOOL usesPersistentConversationSelection;
@property(readonly, nonatomic) BOOL selectNewConversationOnDeletion;
@property(readonly, nonatomic) BOOL selectNewConversationOnStateRestore;
@property(readonly, nonatomic) BOOL showPendingInConversationList;
- (float)toFieldPreferredHeight;
- (id)red_recipientTextColor;
- (id)siri_recipientTextColor;
- (id)blue_recipientTextColor;
- (id)green_recipientTextColor;
- (id)gray_recipientTextColor;
- (id)recipientTextColorForColorType:(BOOL)arg1;
- (float)updateTranscriptInsetsAnimationDuration;
- (float)editingTransitionAnimationDuration;
- (float)resizeMessageEntryViewAnimationDuration;
- (float)throwMessageAnimationDuration;
- (float)scrollInNewMessageAnimationDuration;
- (float)fadeInBubbleAnimationDuration;
- (float)_transcriptAnimationScaleFactor;
@property(readonly, nonatomic) BOOL shouldUseDynamicScrolling;
@property(readonly, nonatomic) BOOL isN9xScreen;
@property(readonly, nonatomic) BOOL supportsTypingIndicatorAnimation;
@property(readonly, nonatomic) BOOL shouldSetConversationKeyboardOnSearchBeginEnd;
@property(readonly, nonatomic) float scrollToHideKeyboardGestureThreshold;
@property(readonly, nonatomic) float escapeVelocityForHidingKeyboard;
@property(readonly, nonatomic) float velocityThresholdForHidingKeyboard;
@property(readonly, nonatomic) BOOL usesVelocityDirectionToDetermineWhetherToHideKeyboard;
@property(readonly, nonatomic) BOOL usesDistanceToDetermineWhetherToHideKeyboard;
@property(readonly, nonatomic) BOOL usesScrollGestureToHideKeyboard;
- (BOOL)returnKeySendsMessage;
@property(readonly, nonatomic) BOOL shouldBackfillTranscript;
@property(readonly, nonatomic) BOOL shouldShowSendProgressIndicator;
@property(readonly, nonatomic) BOOL canAccessCoreRecents;
@property(readonly, nonatomic) BOOL canAccessPhotos;
@property(readonly, nonatomic) BOOL canAccessContacts;
@property(readonly, nonatomic) BOOL photosIsWhitelisted;
@property(readonly, nonatomic) BOOL cameraIsWhitelisted;
@property(readonly, nonatomic) BOOL mailIsWhitelisted;
@property(readonly, nonatomic) BOOL faceTimeAudioIsWhitelisted;
@property(readonly, nonatomic) BOOL faceTimeVideoIsWhitelisted;
@property(readonly, nonatomic) BOOL phoneIsWhitelisted;
@property(readonly, nonatomic) BOOL madridRegistrationShowsSplashScreenOnSignin;
@property(readonly, nonatomic) BOOL madridRegistrationShowsSplashScreen;
@property(readonly, nonatomic) int madridRegistrationAppearanceStyle;
- (BOOL)isSupportedInterfaceOrientation:(int)arg1;
@property(readonly, nonatomic) unsigned int defaultConversationSummaryMessageCount;
@property(readonly, nonatomic) unsigned int defaultConversationViewingMessageCount;
@property(readonly, nonatomic) BOOL presentsReaderController;
@property(readonly, nonatomic) BOOL presentsQuickLookController;
@property(readonly, nonatomic) BOOL showTranscriptButtonsInNavigationBar;
@property(readonly, nonatomic) BOOL usesPopovers;
- (float)transcriptPortraitWidth;
- (float)leftSplitPaneWidthForUIInterfaceOrientation:(int)arg1;
@property(readonly, nonatomic) BOOL lowClearanceInLandscape;
@property(readonly, nonatomic) BOOL splitViewEnabled; // @dynamic splitViewEnabled;

@end

