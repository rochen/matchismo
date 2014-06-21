//
//  Deck.h
//  Matchismo
//
//  Created by robbie on 6/21/14.
//  Copyright (c) 2014 cs193p. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
