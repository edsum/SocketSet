//
//  MMSelectorCell.h
//  TopMenu
//
//  Created by tusm on 16/7/28.
//  Copyright © 2016年 tusm. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MMSelectorCell : UICollectionViewCell
@property (nonatomic, copy) NSString *title;
/**
 *  默认分别是 [UIColor redColor],[UIColor whiteColor]
 */
@property (nonatomic, strong) UIColor *selectedColor;
@property (nonatomic, strong) UIColor *normalColor;

/**
 *  默认都是14号字体
 */
@property (nonatomic, strong) UIFont *selectedFont;
@property (nonatomic, strong) UIFont *normalFont;

@end
