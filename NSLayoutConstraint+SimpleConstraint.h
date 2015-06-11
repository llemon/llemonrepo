//
//  NSLayoutConstraint+SimpleConstraint.h
//  MusicEater
//
//  Created by 이택규 on 2015. 6. 11..
//  Copyright (c) 2015년 Tack-gyu Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSLayoutConstraint (SimpleConstraint)

/*!
 * @brief Creates a constraint that defines the relationship only on a given view.
 */
+ (instancetype) constraintOnItem:(id)view attribute:(NSLayoutAttribute)attr constant:(CGFloat)c priority:(UILayoutPriority)p;

/*!
 * @brief Creates a constraint that defines the relationship between the given views, by the same layout attributes, with unity multiplier and zero constant.
 */
+ (instancetype) constraintWithItem:(id)view1 toItem:(id)view2 attribute:(NSLayoutAttribute)attr priority:(UILayoutPriority)p;

/*!
 * @brief Creates a constraint that defines the relationship between the given views, by the same layout attributes, with unity multiplier.
 */
+ (instancetype) constraintWithItem:(id)view1 toItem:(id)view2 attribute:(NSLayoutAttribute)attr constant:(CGFloat)c priority:(UILayoutPriority)p;

/*!
 * @brief Creates a constraint that defines the relationship between the specified attributes of the given views, with a given layout constraint priority.
 */
+ (instancetype) constraintWithItem:(id)view1 attribute:(NSLayoutAttribute)attr1 relatedBy:(NSLayoutRelation)relation toItem:(id)view2 attribute:(NSLayoutAttribute)attr2 multiplier:(CGFloat)multiplier constant:(CGFloat)c priority:(UILayoutPriority)p;

@end
