//
//  VLCAddMediaViewController.h
//  VLC for iOS
//
//  Created by Felix Paul Kühne on 19.05.13.
//  Copyright (c) 2013 VideoLAN. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VLCAddMediaViewController : UIViewController
{
    NSURL *_pasteURL;
}

@property (strong, nonatomic) IBOutlet UIButton *dismissButton;
@property (strong, nonatomic) IBOutlet UIButton *aboutButton;
@property (strong, nonatomic) IBOutlet UIButton *openNetworkStreamButton;
@property (strong, nonatomic) IBOutlet UIButton *downloadFromHTTPServerButton;
@property (strong, nonatomic) IBOutlet UIButton *settingsButton;
@property (strong, nonatomic) IBOutlet UIButton *showInformationOnHTTPUploadButton;
@property (strong, nonatomic) IBOutlet UISwitch *httpUploadServerSwitch;

- (IBAction)openAboutPanel:(id)sender;
- (IBAction)openNetworkStream:(id)sender;
- (IBAction)downloadFromHTTPServer:(id)sender;
- (IBAction)showSettings:(id)sender;
- (IBAction)showInformationOnHTTPServer:(id)sender;
- (IBAction)toggleHTTPServer:(id)sender;

@end
