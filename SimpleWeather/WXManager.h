//
//  WXManager.h
//  SimpleWeather
//
//  Created by matsu_chara on 2014/07/19.
//  Copyright (c) 2014年 matsu_chara. All rights reserved.
//

@import Foundation;
@import CoreLocation;
#import <ReactiveCocoa.h>

#import "WXCondition.h"

@interface WXManager : NSObject <CLLocationManagerDelegate>
+ (instancetype)sharedManager;

@property (nonatomic, strong, readonly) CLLocation *currentLocation;
@property (nonatomic, strong, readonly) WXCondition *currentCondition;
@property (nonatomic, strong, readonly) NSArray *hourlyForecast;
@property (nonatomic, strong, readonly) NSArray *dailyForecast;

- (void)findCurrentLocation;

@end
