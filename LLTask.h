//
//  LLTask.h
//  LlemonAssets
//
//  Created by 이택규 on 2015. 6. 12..
//  Copyright (c) 2015년 Tack-gyu Lee. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LLTask;

typedef void (^LLTaskBlock) (LLTask *task);

@interface LLTask : NSObject

@property (nonatomic, readonly) NSTimeInterval delay;
@property (nonatomic, readonly) dispatch_queue_t queue;

+ (instancetype) task;
+ (instancetype) taskInQueue:(dispatch_queue_t)queue;

- (LLTask *) continueAfterDelay:(NSTimeInterval)delay taskBlock:(LLTaskBlock)taskBlock;
- (LLTask *) continueAfterDelay:(NSTimeInterval)delay inQueue:(dispatch_queue_t)queue taskBlock:(LLTaskBlock)taskBlock;

@end
