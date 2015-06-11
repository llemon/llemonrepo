//
//  NSObject+Localizable.m
//  cnocnocapp
//
//  Created by 이택규 on 2015. 2. 23..
//  Copyright (c) 2015년 CnoCnoCTeam. All rights reserved.
//

#import "NSObject+Localizable.h"

@implementation NSObject (Localizable)

- (NSString *) localizedString:(NSString *)suffix {
    NSString *string = [NSString stringWithFormat:@"%@ %@", NSStringFromClass(self.class), suffix];
    return LLLocalizedString(string);
}

@end
