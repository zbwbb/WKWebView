//
//  AppDelegate.h
//  WKWebView
//
//  Created by TsouMac2016 on 2018/12/21.
//  Copyright © 2018 TsouMac2016. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

