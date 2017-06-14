//
//  NSString+Size.h
//  TestTemplateProject
//
//  Created by Ben on 2017/5/22.
//  Copyright (c) 2017年 Ben. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Size)

- (CGSize)textSizeWithFont:(UIFont *)font constrainedToSize:(CGSize)size lineBreakMode:(NSLineBreakMode)lineBreakMode;

//文字的行数
- (int)textLineNumWithFont:(UIFont *)font constrainedToSize:(CGSize)size;

//文字放在一行时的宽高
- (CGSize)textSizeForOneLineWithFont:(UIFont *)font;

@end
