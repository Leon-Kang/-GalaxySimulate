//
//  SolarSystem.hpp
//  Simulate galaxy
//
//  Created by Leon Kang on 2017/7/20.
//  Copyright © 2017年 Leon Kang. All rights reserved.
//

#ifndef SolarSystem_hpp
#define SolarSystem_hpp

#include <stdio.h>
#include <GLUT/GLUT.h>
#include "Star.hpp"

#define STARS_NUM 10

class SolarSystem {
    
public:
    
    SolarSystem();
    ~SolarSystem();
    
    void onDisplay();
    void onUpdate();
    void onKeyboard(unsigned char key, int x, int y);
    
private:
    Star *stars[STARS_NUM];
    
    GLdouble viewX, viewY, viewZ;
    GLdouble centerX, centerY, centerZ;
    GLdouble upX, upY, upZ;
};

#endif /* SolarSystem_hpp */

