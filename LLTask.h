//
//  LLTask.h
//  LlemonApp
//
//  Created by 이택규 on 2015. 6. 16..
//  Copyright (c) 2015년 Llemon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class LLRecord;

@interface LLTask : NSManagedObject

@property (nonatomic, retain) NSString * desc;
@property (nonatomic, retain) NSDate * fromTime;
@property (nonatomic, retain) NSNumber * length;
@property (nonatomic, retain) NSNumber * months;
@property (nonatomic, retain) NSNumber * priority;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSDate * toTime;
@property (nonatomic, retain) NSNumber * weeks;
@property (nonatomic, retain) NSSet *records;
@end

@interface LLTask (CoreDataGeneratedAccessors)

- (void)addRecordsObject:(LLRecord *)value;
- (void)removeRecordsObject:(LLRecord *)value;
- (void)addRecords:(NSSet *)values;
- (void)removeRecords:(NSSet *)values;

@end
