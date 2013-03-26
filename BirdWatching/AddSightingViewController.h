//
//  AddSightingViewController.h
//  BirdWatching
//
//  Created by Onur Ak on 3/26/13.
//  Copyright (c) 2013 Onur Ak. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSighting;

@interface AddSightingViewController : UITableViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *birdNameInput;
@property (weak, nonatomic) IBOutlet UITextField *locationInput;
@property (strong, nonatomic) BirdSighting *birdSighting;

@end
