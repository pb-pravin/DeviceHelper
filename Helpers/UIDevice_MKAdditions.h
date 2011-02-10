//
//  UIDevice_MKAdditions.h
//  DeviceHelper
//
//  Created by Mugunth Kumar on 15-Aug-10.
//  Copyright 2010 Steinlogic. All rights reserved.

#import <Foundation/Foundation.h>
#import <MessageUI/MessageUI.h>

#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioServices.h>
#import <CoreLocation/CoreLocation.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import <CoreMotion/CoreMotion.h>

@interface UIDevice (MKAdditions)  {

}

- (BOOL) microphoneAvailable;
- (void) vibrateWithSound;
- (void) vibrateWithoutSound;

- (BOOL) doesPhotoLibraryHavePictures;
- (BOOL) doesCameraRollHavePictures;

- (BOOL) cameraAvailable;
- (BOOL) videoCameraAvailable;
- (BOOL) frontCameraAvailable;
- (BOOL) cameraFlashAvailable;

- (BOOL) canSendEmail;
- (BOOL) canSendSMS;
- (BOOL) canMakePhoneCalls;

- (BOOL) multitaskingCapable;
- (BOOL) retinaDisplayCapable;

- (BOOL) compassAvailable;
- (BOOL) gyroscopeAvailable;
@end
