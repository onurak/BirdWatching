//
//  BirdsMasterViewController.h
//  BirdWatching
//
//  Created by Onur Ak on 3/26/13.
//  Copyright (c) 2013 Onur Ak. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BirdSightingDataController;

@interface BirdsMasterViewController : UITableViewController

@property (strong, nonatomic) BirdSightingDataController *dataController;

- (IBAction)done:(UIStoryboardSegue *)segue;
- (IBAction)cancel:(UIStoryboardSegue *)segue;

@end
