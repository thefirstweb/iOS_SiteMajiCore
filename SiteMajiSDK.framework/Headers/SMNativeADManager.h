//
//  SMNativeADManager.h
//  SiteMajiSDK
//
//  Created by Alex on 2021/4/21.
//  Copyright © 2021 Feebee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@protocol SMNativeADManagerProtocol;

@interface SMNativeADManager : NSObject
+ (instancetype)sharedEngine;
- (void)fetchADWithViewController:(UIViewController *)presentViewController;
- (id)initWithPackageHash:(NSString *)packageHash;
@property (nonatomic, weak) id <SMNativeADManagerProtocol> delegate;
@property (nonatomic, weak) NSString *customProvider;
@property (nonatomic, assign) BOOL isTestModeEnable;
@property (nonatomic, assign) BOOL isLogEnable;
@end

@protocol SMNativeADManagerProtocol
-(void)nativeDidFetch:(UIView *)adView;
-(void)nativeAdDidClick;
-(void)nativeAdLoadFailed:(NSError *)error;
-(void)nativeError:(NSError *)error;
@end
NS_ASSUME_NONNULL_END
