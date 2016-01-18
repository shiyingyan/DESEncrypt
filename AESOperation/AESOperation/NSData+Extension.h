//
//  NSData+Extension.h
//  ExtensionSDK
//
//  Created by YDJ on 13-3-11.
//  Copyright (c) 2013年 jingyoutimes. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSData (Extension)


/**
 * @brief 数据base64编码
 *
 * @return 编码后的数据
 */
@property (NS_NONATOMIC_IOSONLY, readonly, copy) NSData *base64Encoded_Ext;

/**
 * @brief 数据base64解码
 *
 * @return 解码后的数据
 */
@property (NS_NONATOMIC_IOSONLY, readonly, copy) NSData *base64Decoded_Ext;



@end
