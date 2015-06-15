//
//  LLCalendarView.m
//  LlemonApp
//
//  Created by 이택규 on 2015. 6. 15..
//  Copyright (c) 2015년 Llemon. All rights reserved.
//

#import "LLCalendarView.h"

@implementation LLCalendarView

- (instancetype) init {
    self = [super init];
    if (self) {
        [self setUp];
    }
    return self;
}

- (void) awakeFromNib {
    [super awakeFromNib];
    [self setUp];
}

- (void) setUp {
    
}

@end
