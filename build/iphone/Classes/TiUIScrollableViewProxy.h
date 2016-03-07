/**
 * _titaniumkookoo _titaniumkookoo Mobile
 * Copyright (c) 2009-2010 by _titaniumkookoo, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_UISCROLLABLEVIEW

#import "TiViewProxy.h"
#import <libkern/OSAtomic.h>

@interface TiUIScrollableViewProxy : TiViewProxy 
{
	pthread_rwlock_t viewsLock;
	NSMutableArray *viewProxies;
}

@property(nonatomic,readonly)	NSArray * viewProxies;
-(TiViewProxy *)viewAtIndex:(NSInteger)index;
-(void)lockViews;
-(void)unlockViews;
-(NSUInteger)viewCount;
-(NSArray *)views;
@end

#endif
