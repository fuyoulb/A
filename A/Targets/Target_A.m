//
//  Target_A.m
//  A
//
//  Created by linbing on 2018/3/11.
//  Copyright © 2018年 linbing. All rights reserved.
//

#import "Target_A.h"

// Target_A处于A业务命名域中，可以随意import A业务中的任何头文件
#import "AViewController.h"

@implementation Target_A

- (UIViewController *)Action_viewController:(NSDictionary *)params
{
    AViewController *viewController = [[AViewController alloc] init];
    return viewController;
}

@end
