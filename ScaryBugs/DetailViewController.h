//
//  DetailViewController.h
//  ScaryBugs
//
//  Created by Joy Xi on 6/13/12.
//  Copyright (c) 2012 Globespan Capital. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
