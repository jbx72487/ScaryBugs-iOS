//
//  ScaryBugDoc.h
//  ScaryBugs
//
//  Created by Joy Xi on 6/13/12.
//  Copyright (c) 2012 Globespan Capital. All rights reserved.
//

/* ORIGINAL DATA

#import <UIKit/UIKit.h>

@interface ScaryBugDoc : NSObject

@end

*/


#import <Foundation/Foundation.h>

@class ScaryBugData;

@interface ScaryBugDoc :NSObject

@property (strong) ScaryBugData *data;
@property (strong) UIImage *thumbImage;
@property (strong) UIImage *fullImage;

- (id)initWithTitle:(NSString*)title rating:(float)rating thumbImage:(UIImage *)thumbImage fullImage:(UIImage *)fullImage;

@end