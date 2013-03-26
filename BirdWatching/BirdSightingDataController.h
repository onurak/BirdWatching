//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by Onur Ak on 3/26/13.
//  Copyright (c) 2013 Onur Ak. All rights reserved.
//

#import <Foundation/Foundation.h>


@class BirdSighting;


@interface BirdSightingDataController : NSObject

@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;


- (NSUInteger)countOfList;
- (BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex;
- (void)addBirdSightingWithSighting:(BirdSighting *)sighting;

@end


