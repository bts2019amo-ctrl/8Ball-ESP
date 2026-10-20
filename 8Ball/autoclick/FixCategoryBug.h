//
//  FixCategoryBug.h
//  KIF
//
//  Created by Brian Gesiak on 11/12/13.
//  Copyright (c) 2013 Brian Gesiak. All rights reserved.
//

#ifndef FixCategoryBug_h
#define FixCategoryBug_h

#define FIX_CATEGORY_BUG(name) @interface FIXCATEGORYBUG##name : NSObject @end \
@implementation FIXCATEGORYBUG##name @end

#endif
