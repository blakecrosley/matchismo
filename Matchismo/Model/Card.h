//
//  Card.h
//  Matchismo
//
//  Created by Blake on 1/29/14.
//  Copyright (c) 2014 941 Apps, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;
@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;


- (int)match: (NSArray *)otherCards;


@end
