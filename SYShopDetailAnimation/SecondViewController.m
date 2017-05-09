//
//  SecondViewController.m
//  SYShopDetailAnimation
//
//  Created by shusy on 2017/5/6.
//  Copyright © 2017年 shusy. All rights reserved.
//

#import "SecondViewController.h"

@interface SecondViewController ()
@property(nonatomic,strong)UIScrollView *scrollView;

@end

@implementation SecondViewController


- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
//    self.automaticallyAdjustsScrollViewInsets = NO;
    self.view.backgroundColor = [UIColor lightGrayColor];
    self.title = @"商品评论页面";
}


@end
