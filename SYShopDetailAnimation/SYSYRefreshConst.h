//
//  SYConst.h
//  SYShopDetailAnimation
//
//  Created by shusy on 2017/5/8.
//  Copyright © 2017年 shusy. All rights reserved.
//

#ifndef SYConst_h
#define SYConst_h

NSString *const SYKeyPathContentOffset = @"contentOffset";
NSString *const SYKeyPathContentInset = @"contentInset";
NSString *const SYKeyPathContentSize = @"contentSize";
NSString *const SYKeyPathPanState = @"state";

NSString *const SYRefreshViewStateIdleTitle = @"下拉加载最新数据";
NSString *const SYRefreshViewPullingTitle = @"释放回到商品详情";
NSString *const SYRefreshViewRefreshingTitle = @"正在刷新中...";

const CGFloat SYHeaderHeight = 54.0;
const CGFloat SYFooterHeight = 44.0;
const CGFloat SYAnimationDuration = 0.25;
const CGFloat SYArrowRightMargin = 8;

#define SYRefreshViewTitleFont [UIFont systemFontOfSize:15]

// rgb颜色转换（16进制->10进制）
#define SYColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#endif /* SYConst_h */
