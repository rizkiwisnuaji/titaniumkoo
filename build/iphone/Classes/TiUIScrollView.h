/**
 * _titaniumkookoo _titaniumkookoo Mobile
 * Copyright (c) 2009-2010 by _titaniumkookoo, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_UISCROLLVIEW

#import "TiUIView.h"

@interface TiUIScrollViewImpl : UIScrollView {
@private
    TiUIView * touchHandler;
    UIView * touchedContentView;
}
-(void)setTouchHandler:(TiUIView*)handler;
@end

@interface TiUIScrollView : TiUIView<TiScrolling,UIScrollViewDelegate> {

@private
	TiUIScrollViewImpl * scrollView;
#ifdef TI_USE_AUTOLAYOUT
    TiLayoutView* contentView;
#else
	UIView * wrapperView;
	TiDimension contentWidth;
	TiDimension contentHeight;
#endif
	CGFloat minimumContentHeight;
	
	BOOL needsHandleContentSize;
	
}

@property(nonatomic,retain,readonly) TiUIScrollViewImpl * scrollView;

@property(nonatomic,readonly) TiDimension contentWidth;

-(void)setNeedsHandleContentSize;
-(void)setNeedsHandleContentSizeIfAutosizing;
-(BOOL)handleContentSizeIfNeeded;
-(void)handleContentSize;
-(void)setContentOffset_:(id)value withObject:(id)property;
-(void)setZoomScale_:(id)value withObject:(id)property;
#ifndef TI_USE_AUTOLAYOUT
-(UIView *)wrapperView;
#endif
-(void)scrollToBottom;

@end

#endif
