//
//  AppDelegate.h
//  PodDemo
//
//  Created by 汪高明 on 2018/7/4.
//  Copyright © 2018年 gaoming. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

