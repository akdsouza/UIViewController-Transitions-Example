//
//  TLMenuViewController.h
//  UIViewController-Transitions-Example
//
//  Created by Ash Furrow on 2013-07-18.
//  Copyright (c) 2013 Teehan+Lax. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TLMenuViewController;

@protocol TLMenuViewControllerPanTarget <NSObject>

-(void)userDidPan:(UIScreenEdgePanGestureRecognizer *)gestureRecognizer;

@end

@interface TLMenuViewController : UIViewController

-(id)initWithMenuInteractor:(id<TLMenuViewControllerPanTarget>)menuInteractor;

@property (nonatomic, readonly) id<TLMenuViewControllerPanTarget> menuInteractor;

@end
