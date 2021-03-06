//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DeviceManager, NSString;

@interface ICDeviceProperties : NSObject
{
    id _delegate;
    DeviceManager *_deviceManager;
    NSString *_name;
    struct CGImage *_icon;
    NSString *_productKind;
    NSString *_transportType;
    NSString *_UUIDString;
    int _usbLocationID;
    int _usbProductID;
    int _usbVendorID;
    BOOL _hasOpenSession;
    BOOL _autoOpenSession;
    BOOL _openSessionPending;
    BOOL _closeSessionPending;
}

@property BOOL closeSessionPending; // @synthesize closeSessionPending=_closeSessionPending;
@property BOOL openSessionPending; // @synthesize openSessionPending=_openSessionPending;
@property BOOL autoOpenSession; // @synthesize autoOpenSession=_autoOpenSession;
@property BOOL hasOpenSession; // @synthesize hasOpenSession=_hasOpenSession;
@property int usbVendorID; // @synthesize usbVendorID=_usbVendorID;
@property int usbProductID; // @synthesize usbProductID=_usbProductID;
@property int usbLocationID; // @synthesize usbLocationID=_usbLocationID;
@property(retain) NSString *UUIDString; // @synthesize UUIDString=_UUIDString;
@property(retain) NSString *transportType; // @synthesize transportType=_transportType;
@property(retain) NSString *productKind; // @synthesize productKind=_productKind;
@property(retain) NSString *name; // @synthesize name=_name;
@property DeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property id delegate; // @synthesize delegate=_delegate;
- (void)finalize;
- (void)dealloc;
@property struct CGImage *icon; // @dynamic icon;

@end

