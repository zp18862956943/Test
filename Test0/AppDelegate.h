//
//  AppDelegate.h
//  Test0
//
//  Created by 南通猜猜看IOS开发机 on 2019/3/6.
//  Copyright © 2019 南通猜猜看文化传媒. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

