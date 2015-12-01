//
//  ShoppingCartView.h
//  ZFShoppingCart
//
//  Created by macOne on 15/11/6.
//  Copyright © 2015年 WZF. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ZFReOrderTableView.h"
@class BadgeView;


@interface ShoppingCartView : UIView

@property (nonatomic,strong) BadgeView *badge;
@property (nonatomic,strong) UIButton *shoppingCartBtn;

@property (nonatomic,strong) UIView *parentView;

@property (nonatomic,strong) ZFReOrderTableView *OrderList;


-(instancetype) initWithFrame:(CGRect)frame inView:(UIView *)parentView withObjects:(NSMutableArray *)objects;

-(void)updateFrame:(UIView *)view;

-(void)setTotalMoney:(NSInteger)nTotal;

-(void)setCartImage:(NSString *)imageName;

-(void)dismissAnimated:(BOOL) animated;
@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com