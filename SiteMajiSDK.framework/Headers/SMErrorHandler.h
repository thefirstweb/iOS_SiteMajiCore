//
//  SMErrorHandler.h
//  SiteMajiSDK
//
//  Created by Alex on 2019/2/18.
//  Copyright © 2019 Feebee. All rights reserved.
//

#import <Foundation/Foundation.h>

#define SMErrorDomain @"com.sitemaji.sdk"
typedef enum {
    SMErrorSDKInitFailed, //sdk初始化失敗
    SMErrorNOAD, //沒有廣告
    SMErrorNotFetchADYet, //還沒有執行fetch
    SMErrorADAlreadyShow, //廣告已顯示
    SMErrorADContentNotReady, //廣告內容尚未準備好
    SMErrorADNoSupportProvider, //沒有支援此provider
    SMErrorSDKNotInstall //sdk未安裝
}SMErrorFailed;

@interface SMErrorHandler : NSObject
+ (NSError *)errorWithCode:(SMErrorFailed)code;
@end
