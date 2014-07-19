//
//  WXDailyForecast.m
//  SimpleWeather
//
//  Created by matsu_chara on 2014/07/19.
//  Copyright (c) 2014年 matsu_chara. All rights reserved.
//

#import "WXDailyForecast.h"

@implementation WXDailyForecast

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    NSMutableDictionary *paths = [[super JSONKeyPathsByPropertyKey] mutableCopy];
    
    paths[@"tempHigh"] = @"temp.max";
    paths[@"tempLow"] = @"temp.min";

    return paths;
}

@end
