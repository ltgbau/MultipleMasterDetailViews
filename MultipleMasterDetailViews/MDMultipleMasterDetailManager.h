//
//  MDMultipleMasterDetailManager.h
//  MultipleMasterDetailViews
//
//  Created by Todd Bates on 11/14/11.
//  Copyright (c) 2011 Science At Hand LLC. All rights reserved.
//
//  manages multiple master/detail views
//  MasterViewController of splitview controller must be a UITabViewController
//  Detail views must be the topViewController of a UINavigationController
//  

#import <Foundation/Foundation.h>

@interface MDMultipleMasterDetailManager 
           : NSObject<UISplitViewControllerDelegate,UITabBarControllerDelegate>

-(id)initWithSplitViewController:(UISplitViewController*)splitViewController 
       withDetailRootControllers:(NSArray*)detailControllers;

 @end
