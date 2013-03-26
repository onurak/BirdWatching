//
//  BirdsDetailViewController.h
//  BirdWatching
//
//  Created by Onur Ak on 3/26/13.
//  Copyright (c) 2013 Onur Ak. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BirdSighting;

@interface BirdsDetailViewController : UITableViewController

@property (strong, nonatomic) BirdSighting *sighting;
@property (weak, nonatomic) IBOutlet UILabel *birdNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *locationLabel;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;

@end
