//
//  Deck.h
//  Matchismo
//
//  Created by Blake on 1/29/14.
//  Copyright (c) 2014 941 Apps, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;


- (Card *)drawRandomCard;

@end
