//
//  ScaryBugData.h
//  ScaryBugs
//
//  Created by Joy Xi on 6/13/12.
//  Copyright (c) 2012 Globespan Capital. All rights reserved.
//

/* ORIGINAL CODE
 
 #import <UIKit/UIKit.h>

@interface ScaryBugData : NSObject

@end */

#import <Foundation/Foundation.h>

@interface ScaryBugData : NSObject

@property (strong) NSString *title;
// strong specifies that the runtime should automatically keep a strong rerence to the object - will keep obj in memory as logn as ther's a refernece to it around, deallocate when no references remain

@property (assign) float rating;
// assign means the property is set directly, with no memory managmeent involved. this is what you usually set for primiive (non-object) types like a float

// defining an initializer for the class, so we can set the title and rating when we create the bug
- (id)initWithTitle:(NSString*)title rating:(float)rating;


@end
