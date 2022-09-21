//  KindredProperties.h
//  KindredSDK
//
//  Created by Vrushali Wani on 16/09/2022.
//  Copyright © 2022 Kindred Soul Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface KindredProperties : NSObject

+ (NSString *)appBundleIDWithInputViewController:(UIInputViewController *)inputViewController;

@end

NS_ASSUME_NONNULL_END
