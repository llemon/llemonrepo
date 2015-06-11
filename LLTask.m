//
//  LLTask.m
//  LlemonAssets
//
//  Created by 이택규 on 2015. 6. 12..
//  Copyright (c) 2015년 Tack-gyu Lee. All rights reserved.
//

#import "LLTask.h"
#import "NSTimer+Blocks.h"

@interface LLTask ()

@property (nonatomic, readwrite) NSTimeInterval delay;
@property (nonatomic, readwrite) dispatch_queue_t queue;

@end

@implementation LLTask

+ (instancetype) task {
    return [self taskInQueue:dispatch_get_main_queue()];
}

+ (instancetype) taskInQueue:(dispatch_queue_t)queue {
    LLTask *task = [[self alloc] init];
    task.delay = 0.0;
    task.queue = queue;
    return task;
}

- (LLTask *) continueAfterDelay:(NSTimeInterval)delay taskBlock:(LLTaskBlock)taskBlock {
    return [self continueAfterDelay:delay inQueue:self.queue taskBlock:taskBlock];
}

- (LLTask *) continueAfterDelay:(NSTimeInterval)delay inQueue:(dispatch_queue_t)queue taskBlock:(LLTaskBlock)taskBlock {
    self.delay += delay;
    
    if (taskBlock) {
        [NSTimer
         scheduledTimerWithTimeInterval:self.delay
         block:^{
             dispatch_async(queue, ^{
                 taskBlock(self);
             });
         } repeats:NO];
    }
    
    return self;
}

@end
