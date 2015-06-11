//
//  NSObject+Localizable.h
//  cnocnocapp
//
//  Created by 이택규 on 2015. 2. 23..
//  Copyright (c) 2015년 CnoCnoCTeam. All rights reserved.
//

#import <Foundation/Foundation.h>

#define LLLocalizedString(...) NSLocalizedString(__VA_ARGS__, __VA_ARGS__)

@interface NSObject (Localizable)

- (NSString *) localizedString:(NSString *)suffix;

@end
