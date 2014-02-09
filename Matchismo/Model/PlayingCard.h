//
//  PlayingCard.h
//  Matchismo
//
//  Created by Blake on 1/29/14.
//  Copyright (c) 2014 941 Apps, Inc. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
