//
//  Target_A.h
//  A
//
//  Created by linbing on 2018/3/11.
//  Copyright © 2018年 linbing. All rights reserved.

/*
 A模块对应的target-action
 提供A模块对应的服务入口
 
 Action设计出来也不是仅仅用于返回ViewController实例的，Action具备调度业务线提供的任何对象和方法来完成自己的任务的能力。它的本质就是对外业务的一层服务化封装
 */

#import <UIKit/UIKit.h>

@interface Target_A : NSObject

// Target_A 的服务入口 Action_viewController
- (UIViewController *)Action_viewController:(NSDictionary *)params;

@end
