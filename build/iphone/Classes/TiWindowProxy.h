/**
 * _titaniumkookoo _titaniumkookoo Mobile
 * Copyright (c) 2009-2013 by _titaniumkookoo, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#import "TiViewProxy.h"
#import "TiTab.h"
#import "TiViewController.h"

#ifdef USE_TI_UIIOSTRANSITIONANIMATION
#import "TiUIiOSTransitionAnimationProxy.h"
#endif

@interface TiWindowProxy : TiViewProxy<TiWindowProtocol, TiAnimationDelegate> {
@protected
    TiViewController* controller;
    id<TiOrientationController> parentController;
    TiOrientationFlags _supportedOrientations;
    BOOL opening;
    BOOL opened;
    BOOL closing;
    BOOL focussed;
    BOOL isModal;
    BOOL hidesStatusBar;
    UIStatusBarStyle barStyle;
    TiViewProxy<TiTab> *tab;
    TiAnimation * openAnimation;
    TiAnimation * closeAnimation;
    UIView* animatedOver;
#ifdef USE_TI_UIIOSTRANSITIONANIMATION
    TiUIiOSTransitionAnimationProxy* transitionProxy;
#endif
    
}

@property (nonatomic, readwrite, assign) TiViewProxy<TiTab> *tab;
@property (nonatomic, readonly) TiProxy* tabGroup;

#ifdef USE_TI_UIIOSTRANSITIONANIMATION
-(TiUIiOSTransitionAnimationProxy*) transitionAnimation;
#endif
@end
