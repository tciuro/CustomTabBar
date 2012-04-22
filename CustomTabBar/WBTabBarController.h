//
//  WBTabBarController.h
//  CustomTabBarItem
//
//  Created by Tito Ciuro on 4/20/12.
//  Copyright (c) 2012 Tito Ciuro. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WBTabBarController : UITabBarController

@property(nonatomic, weak) IBOutlet UIViewController *plusController;

-(void)addCenterButtonWithImage:(UIImage *)buttonImage highlightImage:(UIImage *)highlightImage target:(id)target action:(SEL)action;

@end
