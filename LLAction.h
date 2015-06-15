//
//  LLAction.h
//  LlemonAssets
//
//  Created by 이택규 on 2015. 6. 12..
//  Copyright (c) 2015년 Tack-gyu Lee. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LLAction;

typedef void (^LLActionBlock) (LLAction *action);

@interface LLAction : NSObject

@property (nonatomic, readonly) NSTimeInterval delay;
@property (nonatomic, readonly) dispatch_queue_t queue;

+ (instancetype) action;
+ (instancetype) actionInQueue:(dispatch_queue_t)queue;

- (LLAction *) continueAfterDelay:(NSTimeInterval)delay actionBlock:(LLActionBlock)actionBlock;
- (LLAction *) continueAfterDelay:(NSTimeInterval)delay inQueue:(dispatch_queue_t)queue actionBlock:(LLActionBlock)actionBlock;

@end
