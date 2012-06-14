//
//  ScaryBugData.m
//  ScaryBugs
//
//  Created by Joy Xi on 6/13/12.
//  Copyright (c) 2012 Globespan Capital. All rights reserved.
//

#import "ScaryBugData.h"

@implementation ScaryBugData

// synthesizing our properties (automatally makes setters and getter methods for them)
@synthesize title = _title;
@synthesize rating = _rating;

- (id)initWithTitle:(NSString *)title rating:(float)rating {
    if ((self = [super init])) {
        self.title = title;
        self.rating = rating;
    }
    return self;
}

@end
