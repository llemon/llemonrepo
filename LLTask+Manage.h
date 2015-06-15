//
//  LLTask+Manage.h
//  LlemonApp
//
//  Created by 이택규 on 2015. 6. 16..
//  Copyright (c) 2015년 Llemon. All rights reserved.
//

#import "LLTask.h"

static NSString *const taskEntityName = @"LLTask";

typedef NS_OPTIONS(NSUInteger, LLWeek) {
    LLWeekSunday    = (1 << 0),
    LLWeekMonday    = (1 << 1),
    LLWeekTuesday   = (1 << 2),
    LLWeekWednesday = (1 << 3),
    LLWeekThursday  = (1 << 4),
    LLWeekFriday    = (1 << 5),
    LLWeekSaturday  = (1 << 6),
};

const NSUInteger LLWeekAll       = 1111111;
const NSUInteger LLWeekWeekend   = 1000001;

typedef NS_OPTIONS(NSUInteger, LLMonth) {
    LLMonthFirst    = (1 << 0),
    LLMonthSecond   = (1 << 1),
    LLMonthThird    = (1 << 2),
    LLMonthFourth   = (1 << 3),
    LLMonthFifth    = (1 << 4),
};

const NSUInteger LLMonthAll = 11111;

@interface LLTask (Manage)

@end
