//
//  LLGoal.h
//  LlemonApp
//
//  Created by 이택규 on 2015. 7. 2..
//  Copyright (c) 2015년 Llemon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class LLTask;

@interface LLGoal : NSManagedObject

@property (nonatomic, retain) NSDate * end;
@property (nonatomic, retain) NSNumber * goal;
@property (nonatomic, retain) NSNumber * acheived;
@property (nonatomic, retain) NSNumber * valid;
@property (nonatomic, retain) LLTask *task;

@end
