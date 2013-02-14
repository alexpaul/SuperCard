//
//  Card.h
//  Matchismo
//
//  Created by Alex Paul on 1/25/13.
//  Copyright (c) 2013 Alex Paul. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (nonatomic, strong) NSString *contents;
@property (nonatomic, getter = isFaceUp) BOOL faceUp;
@property (nonatomic, getter = isUnplayable) BOOL unPlayable;

- (int)match:(NSArray *)otherCards; 

@end
