//
//  ResponseBase.h
//  YTKDemo
//
//  Created by 钟宝健 on 15/8/14.
//  Copyright © 2015年 joiway. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseBase : NSObject
@property (nonatomic, assign) NSInteger errNum;
@property (nonatomic, copy) NSString *retMsg;
@end
