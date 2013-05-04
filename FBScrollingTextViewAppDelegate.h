//
//  FBScrollingTextViewAppDelegate.h
//  FBScrollingTextView
//
//  Created by Fábio Bernardo on 2/6/11.
//

#import <Cocoa/Cocoa.h>
#import "FBScrollingTextView.h"
@interface FBScrollingTextViewAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *__weak window;
	FBScrollingTextView *tView;
	NSStatusItem *statusItem;
}

@property (weak) IBOutlet NSWindow *window;
@property (strong) FBScrollingTextView *tView;
@end
