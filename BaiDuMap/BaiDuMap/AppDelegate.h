//
//  AppDelegate.h
//  BaiDuMap
//
//  Created by lanou3g on 15-7-25.
//  Copyright (c) 2015年 hehehhe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BaiduMapAPI/BMapKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate> {
    UINavigationController *navigationController;
    BMKMapManager* _mapManager;
}

@property (strong, nonatomic) UIWindow *window;


@end

