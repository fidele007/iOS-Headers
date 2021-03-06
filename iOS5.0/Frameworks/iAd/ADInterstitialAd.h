/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ADInterstitialViewDelegate-Protocol.h"

@class ADInterstitialModalViewController, ADInterstitialView;

@interface ADInterstitialAd : NSObject <ADInterstitialViewDelegate>
{
    id <ADInterstitialAdDelegate> _weakDelegate;
    ADInterstitialView *_interstitialView;
    ADInterstitialModalViewController *_modalViewController;
    BOOL _presentedInView;
}

@property(nonatomic) BOOL presentedInView; // @synthesize presentedInView=_presentedInView;
@property(retain, nonatomic) ADInterstitialModalViewController *modalViewController; // @synthesize modalViewController=_modalViewController;
@property(retain, nonatomic) ADInterstitialView *interstitialView; // @synthesize interstitialView=_interstitialView;
- (void)interstitialViewActionDidFinish:(id)arg1;
- (BOOL)interstitialViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
- (void)interstitialViewDidLoadAd:(id)arg1;
- (void)interstitialViewWillLoadAd:(id)arg1;
- (void)interstitialView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)interstitialViewDidUnloadAd:(id)arg1;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setDebuggingDelegate:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setLocalAd:(id)arg1;
@property(nonatomic) id <ADInterstitialAdDelegate> delegate; // @synthesize delegate=_weakDelegate;
- (void)presentFromViewController:(id)arg1;
- (BOOL)presentInView:(id)arg1;
- (void)cancelAction;
@property(readonly, nonatomic, getter=isActionInProgress) BOOL actionInProgress;
@property(readonly, nonatomic, getter=isLoaded) BOOL loaded;
- (id)init;
- (void)dealloc;

@end

