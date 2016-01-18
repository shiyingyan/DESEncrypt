//
//  CryptoCommon.h
//  AESOperation
//
//  Created by shiying on 1/18/16.
//  Copyright © 2016 shiying. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CryptoCommon : NSObject

+ (NSString *)encryptWithText:(NSString *)sText;//加密
+ (NSString *)decryptWithText:(NSString *)sText;//解密

@end
