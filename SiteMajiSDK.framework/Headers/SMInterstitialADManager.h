//
//  SMInterstitialADManager.h
//  SiteMajiSDK
//
//  Created by Alex on 2017/10/12.
//  Copyright © 2017年 Feebee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol SMInterstitialADManagerProtocol;

@interface SMInterstitialADManager : NSObject
+ (instancetype)sharedEngine;
- (void)showInterstitalADWithViewController:(UIViewController *)vc;
- (void)fetchAD;
- (id)initWithPackageHash:(NSString *)packageHash;
@property (nonatomic, weak) id <SMInterstitialADManagerProtocol> delegate;
@property (nonatomic, weak) NSString *customProvider;
@property (nonatomic, assign) BOOL isTestModeEnable;
@property (nonatomic, assign) BOOL isLogEnable;
@end

@protocol SMInterstitialADManagerProtocol
-(void)adInterstitialDidFetchAd;
-(void)adInterstitialDidShow;
-(void)adInterstitialError:(NSError *)error;
-(void)adInterstitialDidDismiss;
-(void)adInterstitialDidClick;
@end
