//
//  IWMKMConverter.m
//  Simulate galaxy
//
//  Created by 康梁 on 2019/2/1.
//  Copyright © 2019 Leon Kang. All rights reserved.
//

#import "IWMKMConverter.h"
#include "IWMetricImperialConverter.hpp"

@interface IWMKMConverter ()

@end



@implementation IWMKMConverter


- (CGFloat)distenceInmilesFromKm:(CGFloat)distanceInKm {
    return distenceInmilesFromKm(distanceInKm);
}

- (NSString *)heightInFeetAndInchesFromHeightInCm:(CGFloat)heightInCentimeters {
    
    NSString *result = [NSString stringWithCString:heightInFeetAndInchesFromHeightInCm(heightInCentimeters).c_str()
                                          encoding:[NSString defaultCStringEncoding]];
    
    return result;
}


@end
