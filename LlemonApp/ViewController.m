//
//  ViewController.m
//  LlemonApp
//
//  Created by 이택규 on 2015. 6. 12..
//  Copyright (c) 2015년 Llemon. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    
    
    
    /* db 객체 생성 가이드 (보고 지워도 무방함)
     
    // LLTask 객체 생성
    LLTask *task = [NSEntityDescription
                    insertNewObjectForEntityForName:taskEntityName // Task 라는 이름의 객체를
                    inManagedObjectContext:APP_DELEGATE.managedObjectContext]; // AppDelegate의 컨텍스트에서 생성
    
    // title & description 설정
    task.title = @"my task";
    task.desc = @"this is my task. #good #job";
    
    // 시간 설정
    NSDate *currentDate = [NSDate new]; // 현재부터
    // NSDate 자료형 관련해서는 애플문서 참조
    // 추후 사용하기 편리한 utility method들을 많이 추가하겠습니당
    
    task.fromTime = currentDate;
    task.toTime = [NSDate dateWithTimeInterval:6*60*60 // 6시간 이후까지
                                     sinceDate:currentDate];
    task.length = @(2*60*60); // 2시간 (NSTimeInterval = double)
    // db에 들어가는 모든 값은 포인터이므로, 숫자를 대입할 때에는
    // 항상 @(...) 와 같은 형식의 포인터 타입을 사용해야 함.
    
    task.weeks = @(LLWeekMonday | LLWeekWednesday | LLWeekFriday); // 월수금 반복 이벤트
    task.months = @(LLMonthAll); // 월 전체
    // LLWeek & LLMonth 비트마스크는 LLTask+Manage.h 에 정의됨
    
    // 저장
    [APP_DELEGATE saveContext];
     
     */
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
