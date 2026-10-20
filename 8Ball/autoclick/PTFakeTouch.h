//
//  PTFakeTouch.h
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PTFakeTouch : NSObject
+ (void)touchDownAtPoint:(CGPoint)point;
+ (void)touchUpAtPoint:(CGPoint)point;
+ (void)touchMoveToPoint:(CGPoint)point;
@end
