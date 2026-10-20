//
//  NSError-KIFAdditions.h
//  KIF
//
//  Created by Brian Gesiak on 10/16/13.
//  Copyright (c) 2013 Brian Gesiak. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSError (KIFAdditions)

+ (instancetype)KIFErrorWithUnderlyingError:(NSError *)underlyingError format:(NSString *)format, ... NS_FORMAT_FUNCTION(2,3);

@end
