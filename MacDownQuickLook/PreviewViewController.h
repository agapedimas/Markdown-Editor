//
//  PreviewViewController.h
//  MacDownQuickLook
//
//  Quick Look preview extension for Markdown Editor (Issue #284)
//  Copyright (c) 2025 Tzu-ping Chung. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Quartz/Quartz.h>
#import <WebKit/WebKit.h>

@interface PreviewViewController : NSViewController <QLPreviewingController, WKNavigationDelegate>

@end
