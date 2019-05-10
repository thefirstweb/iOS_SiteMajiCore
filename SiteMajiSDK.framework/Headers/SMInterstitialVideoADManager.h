//
//  SMInterstitialVideoADManager.h
//  SiteMajiSDK
//
//  Created by Alex on 2019/5/7.
//  Copyright © 2019 Feebee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@protocol SMInterstitialVideoADManagerProtocol;

@interface SMInterstitialVideoADManager : NSObject
+ (instancetype)sharedEngine;
- (void)showInterstitalADWithViewController:(UIViewController *)vc;
- (void)fetchAD;
- (id)initWithPackageHash:(NSString *)packageHash;
@property (nonatomic, weak) id <SMInterstitialVideoADManagerProtocol> delegate;
@property (nonatomic, weak) NSString *customProvider;
@property (nonatomic, assign) BOOL isTestModeEnable;
@property (nonatomic, assign) BOOL isLogEnable;
@end

@protocol SMInterstitialVideoADManagerProtocol
-(void)adInterstitialVideoDidFetchAd;
-(void)adInterstitialVideoDidShow;
-(void)adInterstitialVideoError:(NSError *)error;
-(void)adInterstitialVideoDidDismiss;
-(void)adInterstitialVideoDidClick;
-(void)adInterstitialVideoDidPlayFinish;
@end

NS_ASSUME_NONNULL_END
