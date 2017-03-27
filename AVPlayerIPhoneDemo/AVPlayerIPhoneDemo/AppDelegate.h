//
//  AppDelegate.h
//  AVPlayerIPhoneDemo
//
//  Created by ylgwhyh on 17/3/27.
//  Copyright © 2017年 com.ylgwhyh.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

