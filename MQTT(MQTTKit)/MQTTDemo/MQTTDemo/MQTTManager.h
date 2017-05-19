//
//  TYHSocketManager.h
//  CocoaSyncSocket
//
//  Created by Iean on 16/12/28.
//  Copyright © 2016年 Iean. All rights reserved.
//


#import <Foundation/Foundation.h>



@interface MQTTManager : NSObject

+ (instancetype)share;

- (void)connect;
- (void)disConnect;

- (void)sendMsg:(NSString *)msg;



@end
