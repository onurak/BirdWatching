//
//  BirdSighting.h
//  BirdWatching
//
//  Created by Onur Ak on 3/26/13.
//  Copyright (c) 2013 Onur Ak. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BirdSighting : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, strong) NSDate *date;

-(id)initWithName:(NSString *)name location:(NSString *)location date:(NSDate *)date;

@end


