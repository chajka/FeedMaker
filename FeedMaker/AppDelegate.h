//
//  AppDelegate.h
//  FeedMaker
//
//  Created by Akira Muraki on 2/26/12.
//  Copyright (c) 2012 iom. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#if MAC_OS_X_VERSION_MAX_ALLOWED < MAC_OS_X_VERSION_10_5
@interface AppDelegate : NSObject <NSApplicationDelegate> {
#else
@interface AppDelegate : NSObject { //<NSApplicationDelegate> 
#endif

}
@property (assign) IBOutlet NSWindow *window;

@end
