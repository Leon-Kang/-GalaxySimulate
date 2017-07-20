//
//  Star.hpp
//  Simulate galaxy
//
//  Created by Leon Kang on 2017/7/20.
//  Copyright © 2017年 Leon Kang. All rights reserved.
//

#ifndef Star_hpp
#define Star_hpp

#include <stdio.h>
#include <GLUT/GLUT.h>

class Star {
    
public:
    GLfloat radius;
    GLfloat speed, selfSpeed;
    GLfloat distance;
    GLfloat rgbaColor[4];
    
    Star* parentStar;
    
    Star(GLfloat radius, GLfloat distance,
         GLfloat speed,  GLfloat selfSpeed,
         Star* parent);
    
    void drawStar();
    
    virtual void draw() {
        drawStar();
    }
    virtual void update(long timeSpan);
    
protected:
    GLfloat alphaSelf, alpha;
    
};

class Planet : public Star {
    
public:
    Planet(GLfloat radius, GLfloat distance,
           GLfloat speed,  GLfloat selfSpeed,
           Star* parent, GLfloat rgbColor[3]);
    
    void drawPlanet();
    
    virtual void draw() {
        drawPlanet();
        drawStar();
    }
};

class LightPlanet : public Planet {
    
public:
    LightPlanet(GLfloat Radius, GLfloat Distance,
                GLfloat Speed,  GLfloat SelfSpeed,
                Star* Parent, GLfloat rgbColor[]);
    
    void drawLight();
    
    virtual void draw() {
        drawLight();
        drawPlanet();
        drawStar();
    }
};

#endif /* Star_hpp */
