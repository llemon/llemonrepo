//
//  NSLayoutConstraint+SimpleConstraint.m
//  MusicEater
//
//  Created by 이택규 on 2015. 6. 11..
//  Copyright (c) 2015년 Tack-gyu Lee. All rights reserved.
//

#import "NSLayoutConstraint+SimpleConstraint.h"

@implementation NSLayoutConstraint (SimpleConstraint)

+ (instancetype) constraintOnItem:(id)view
                        attribute:(NSLayoutAttribute)attr
                         constant:(CGFloat)c
                         priority:(UILayoutPriority)p {
    
    NSLayoutConstraint *constraint = [NSLayoutConstraint
                                      constraintWithItem:view
                                      attribute:attr
                                      relatedBy:NSLayoutRelationEqual
                                      toItem:nil
                                      attribute:NSLayoutAttributeNotAnAttribute
                                      multiplier:1.0
                                      constant:c];
    
    constraint.priority = p;
    
    return constraint;
}

+ (instancetype) constraintWithItem:(id)view1
                             toItem:(id)view2
                          attribute:(NSLayoutAttribute)attr
                           priority:(UILayoutPriority)p {
    
    return [self constraintWithItem:view1
                             toItem:view2
                          attribute:attr
                           constant:0
                           priority:p];
}

+ (instancetype) constraintWithItem:(id)view1
                             toItem:(id)view2
                          attribute:(NSLayoutAttribute)attr
                           constant:(CGFloat)c
                           priority:(UILayoutPriority)p {
    
    NSLayoutConstraint *constraint = [NSLayoutConstraint
                                      constraintWithItem:view1
                                      attribute:attr
                                      relatedBy:NSLayoutRelationEqual
                                      toItem:view2
                                      attribute:attr
                                      multiplier:1.0
                                      constant:c];
    
    constraint.priority = p;
    
    return constraint;
}

+ (instancetype) constraintWithItem:(id)view1
                          attribute:(NSLayoutAttribute)attr1
                          relatedBy:(NSLayoutRelation)relation
                             toItem:(id)view2
                          attribute:(NSLayoutAttribute)attr2
                         multiplier:(CGFloat)multiplier
                           constant:(CGFloat)c
                           priority:(UILayoutPriority)p {
    
    NSLayoutConstraint *constraint = [NSLayoutConstraint
                                      constraintWithItem:view1
                                      attribute:attr1
                                      relatedBy:relation
                                      toItem:view2
                                      attribute:attr2
                                      multiplier:multiplier
                                      constant:c];
    
    constraint.priority = p;
    
    return constraint;
}

@end
