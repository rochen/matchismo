//
//  PlayingCard.h
//  Matchismo
//
//  Created by robbie on 6/21/14.
//  Copyright (c) 2014 cs193p. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card
@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
