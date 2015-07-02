//
//  LLPlan.h
//  LlemonApp
//
//  Created by 이택규 on 2015. 7. 2..
//  Copyright (c) 2015년 Llemon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class LLTask;

@interface LLPlan : NSManagedObject

@property (nonatomic, retain) NSNumber * months;
@property (nonatomic, retain) NSNumber * weeks;
@property (nonatomic, retain) NSDate * from;
@property (nonatomic, retain) NSDate * to;
@property (nonatomic, retain) NSNumber * length;
@property (nonatomic, retain) NSNumber * valid;
@property (nonatomic, retain) LLTask *task;

@end
