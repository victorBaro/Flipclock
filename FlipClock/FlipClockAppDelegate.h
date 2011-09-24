//
//  FlipClockAppDelegate.h
//  FlipClock
//
//  Created by Víctor Baro on 24/09/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FlipClockViewController;

@interface FlipClockAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet FlipClockViewController *viewController;

@end
