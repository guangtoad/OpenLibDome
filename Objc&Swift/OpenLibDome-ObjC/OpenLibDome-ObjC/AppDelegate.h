//
//  AppDelegate.h
//  OpenLibDome-ObjC
//
//  Created by toad on 2019/6/5.
//  Copyright © 2019 toad. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

