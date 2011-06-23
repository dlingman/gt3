//
//  gt3AppDelegate.h
//  gt3
//
//  Created by Dan Lingman on 11-06-23.
//  Copyright 2011 Digital Matrix. All rights reserved.
//

#import <UIKit/UIKit.h>

@class gt3ViewController;

@interface gt3AppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet gt3ViewController *viewController;

@end
