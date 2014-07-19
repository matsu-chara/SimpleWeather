//
//  WXClient.h
//  SimpleWeather
//
//  Created by matsu_chara on 2014/07/19.
//  Copyright (c) 2014年 matsu_chara. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReactiveCocoa.h>
@import CoreLocation;

@interface WXClient : NSObject
- (RACSignal *)fetchJSONFromURL:(NSURL *)url;
- (RACSignal *)fetchCurrentConditionsForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchHourlyForecastForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchDailyForecastForLocation:(CLLocationCoordinate2D)coordinate;

@end
