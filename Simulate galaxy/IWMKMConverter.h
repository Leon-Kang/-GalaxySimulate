//
//  IWMKMConverter.h
//  Simulate galaxy
//
//  Created by 康梁 on 2019/2/1.
//  Copyright © 2019 Leon Kang. All rights reserved.
//

#ifndef IWMKMConverter_h
#define IWMKMConverter_h

#import <Foundation/Foundation.h>

@interface IWMKMConverter : NSObject

- (CGFloat)distenceInmilesFromKm:(CGFloat)distanceInKm;

- (NSString *)heightInFeetAndInchesFromHeightInCm:(CGFloat)heightInCentimeters;

@end

#endif /* IWMKMConverter_h */
