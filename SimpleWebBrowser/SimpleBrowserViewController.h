//
//  ViewController.h
//  SimpleWebBrowser
//
//  Created by Matt Sencenbaugh on 1/31/12.
//  Copyright (c) 2012 Stanford University. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SimpleBrowserViewController : UIViewController <UIWebViewDelegate>{
    IBOutlet UIWebView *webView;
    IBOutlet UIActivityIndicatorView *spinner;
}

@property(nonatomic,retain)IBOutlet UIActivityIndicatorView *spinner;
@property(nonatomic,retain)IBOutlet UIWebView *webView;

-(IBAction)goBack:(id)sender;
-(IBAction)goForward:(id)sender;


@end
