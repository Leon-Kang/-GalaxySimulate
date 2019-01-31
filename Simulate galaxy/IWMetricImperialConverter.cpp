//
//  IWMetricImperialConverter.cpp
//  Simulate galaxy
//
//  Created by Leon Kang on 2019/1/31.
//  Copyright © 2019 Leon Kang. All rights reserved.
//

#include "IWMetricImperialConverter.hpp"

#define kOneKmInMiles 0.621371192
#define kOneInchInCm 2.54

float distenceInmilesFromKm(float distanceInKm) {
    return distanceInKm * kOneKmInMiles;
}

std::string heightInFeetAndInchesFromHeightInCm(float heightInCentimeters) {
    int numInches = roundf(heightInCentimeters / kOneInchInCm);
    std::ostringstream stringStream;
    int feet = roundf(numInches / 12);
    int inches = numInches % 12;
    stringStream << feet << "' " << inches << "\"";
    return stringStream.str();
}
