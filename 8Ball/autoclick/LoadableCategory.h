//
//  LoadableCategory.h
//  KIF
//
//  Created by Brian Gesiak on 11/12/13.
//  Copyright (c) 2013 Brian Gesiak. All rights reserved.
//

/** Make all categories in the current file loadable without using -load-all.
 *
 * Normally, compilers will strip out object files that appear unused,
 * even if those object files contain only categories. Using this macro
 * forces the linker to include the object file.
 */
#define MAKE_CATEGORIES_LOADABLE(UNIQUE_NAME) @interface FORCELOAD_##UNIQUE_NAME : NSObject @end @implementation FORCELOAD_##UNIQUE_NAME @end
