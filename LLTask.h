//
//  LLTask.h
//  LlemonApp
//
//  Created by 이택규 on 2015. 7. 2..
//  Copyright (c) 2015년 Llemon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class LLGoal, LLPlan, LLRecord;

@interface LLTask : NSManagedObject

@property (nonatomic, retain) NSString * desc;
@property (nonatomic, retain) NSNumber * priority;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSSet *records;
@property (nonatomic, retain) NSSet *plans;
@property (nonatomic, retain) NSSet *goals;
@end

@interface LLTask (CoreDataGeneratedAccessors)

- (void)addRecordsObject:(LLRecord *)value;
- (void)removeRecordsObject:(LLRecord *)value;
- (void)addRecords:(NSSet *)values;
- (void)removeRecords:(NSSet *)values;

- (void)addPlansObject:(LLPlan *)value;
- (void)removePlansObject:(LLPlan *)value;
- (void)addPlans:(NSSet *)values;
- (void)removePlans:(NSSet *)values;

- (void)addGoalsObject:(LLGoal *)value;
- (void)removeGoalsObject:(LLGoal *)value;
- (void)addGoals:(NSSet *)values;
- (void)removeGoals:(NSSet *)values;

@end
