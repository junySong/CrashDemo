//
//  JunyUncaghtExptionHandle.h
//  CrashDemo
//
//  Created by 宋俊红 on 17/2/14.
//  Copyright © 2017年 Juny_song. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface JunyUncaghtExptionHandle : NSObject{
      BOOL dismissed;
}
@end

/**
 处理异常

 @param exception 异常
 */
void HandleException(NSException *exception);

/**
 内存异常

 @param signal 0
 */
void SignalHandler(int signal);


void InstallUncaughtExceptionHandler(void);



