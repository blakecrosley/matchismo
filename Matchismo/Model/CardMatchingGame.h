//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Blake on 2/6/14.
//  Copyright (c) 2014 941 Apps, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"

@interface CardMatchingGame : NSObject

// designated initializer
- (instancetype) initWithCardCount: (NSUInteger)count usingDeck: (Deck *)deck;
- (void)chooseCardAtIndex:(NSUInteger)index;
- (Card *)cardAtIndex: (NSUInteger)index;

@property (nonatomic, readonly) NSInteger score;

@end
