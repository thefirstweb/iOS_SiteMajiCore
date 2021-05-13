//
//  SMBannerADManager.h
//  SiteMajiSDK
//
//  Created by Alex on 2018/1/12.
//  Copyright © 2018年 Feebee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol SMBannerADManagerProtocol;

@interface SMBannerADManager : NSObject
+ (instancetype)sharedEngine;
- (id)initWithPackageHash:(NSString *)packageHash;
//-(void)showBannerWithViewController:(UIViewController *)viewController;
- (void)fetchAD;
@property (nonatomic, weak) id <SMBannerADManagerProtocol> delegate;
@property (nonatomic, weak) NSString *customProvider;
@property (nonatomic, assign) BOOL isTestModeEnable;
@property (nonatomic, assign) BOOL isLogEnable;
@end

@protocol SMBannerADManagerProtocol
-(void)bannerDidFetch:(UIView *)adView;
-(void)bannerError:(NSError *)error;
//-(void)bannerWillLeaveApplication;
-(void)bannerDidRefreshed;
-(void)bannerDidClick;
@end
