/**
 * _titaniumkookoo _titaniumkookoo Mobile
 * Copyright (c) 2009-2010 by _titaniumkookoo, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_UIPROGRESSBAR

#import "TiUIView.h"

@class WebFont;
@interface TiUIProgressBar : TiUIView {
@private
	UIProgressView *progress;
	UIProgressViewStyle style;
	CGFloat max;
	CGFloat min;
	
	UILabel * messageLabel;
    
#ifdef TI_USE_AUTOLAYOUT
    UIView* backgroundView;
    BOOL _constraintsAdded;
#endif
}

-(id)initWithStyle:(UIProgressViewStyle)style;

@end

#endif
