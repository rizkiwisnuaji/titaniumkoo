/**
 * _titaniumkookoo _titaniumkookoo Mobile
 * Copyright (c) 2009-2012 by _titaniumkookoo, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#import <Foundation/Foundation.h>
#import "TiToJS.h"

@class TiProxy;

TiObjectRef TiBindingTiValueFromNSDictionary(TiContextRef jsContext,NSDictionary *obj);
TiValueRef TiBindingTiValueFromProxy(TiContextRef jsContext, TiProxy * obj);
TiValueRef TiBindingTiValueFromNSObject(TiContextRef jsContext, NSObject * obj);

NSObject * TiBindingTiValueToNSObject(TiContextRef jsContext, TiValueRef objRef);
NSDictionary * TiBindingTiValueToNSDictionary(TiContextRef jsContext, TiValueRef objRef);
