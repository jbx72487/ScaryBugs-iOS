//
//  MasterViewController.h
//  ScaryBugs
//
//  Created by Joy Xi on 6/13/12.
//  Copyright (c) 2012 Globespan Capital. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;
@property (strong) NSMutableArray *bugs;

@end
