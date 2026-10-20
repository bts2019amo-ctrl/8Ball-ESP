//
//  NutLog.m
//

#import "NutLog.h"

void NutLog(NSString *format, ...) {
    va_list args;
    va_start(args, format);
    NSString *str = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);
    NSLog(@"%@(Nut)", str);
}
