//
//  LLAction.m
//  LlemonAssets
//
//  Created by 이택규 on 2015. 6. 12..
//  Copyright (c) 2015년 Tack-gyu Lee. All rights reserved.
//

#import "LLAction.h"
#import "NSTimer+Blocks.h"

@interface LLAction ()

@property (nonatomic, readwrite) NSTimeInterval delay;
@property (nonatomic, readwrite) dispatch_queue_t queue;

@end

@implementation LLAction

+ (instancetype) action {
    return [self actionInQueue:dispatch_get_main_queue()];
}

+ (instancetype) actionInQueue:(dispatch_queue_t)queue {
    LLAction *action = [[self alloc] init];
    action.delay = 0.0;
    action.queue = queue;
    return action;
}

- (LLAction *) continueAfterDelay:(NSTimeInterval)delay actionBlock:(LLActionBlock)actionBlock {
    return [self continueAfterDelay:delay inQueue:self.queue actionBlock:actionBlock];
}

- (LLAction *) continueAfterDelay:(NSTimeInterval)delay inQueue:(dispatch_queue_t)queue actionBlock:(LLActionBlock)actionBlock {
    self.delay += delay;
    
    if (actionBlock) {
        [NSTimer
         scheduledTimerWithTimeInterval:self.delay
         block:^{
             dispatch_async(queue, ^{
                 actionBlock(self);
             });
         } repeats:NO];
    }
    
    return self;
}

@end
