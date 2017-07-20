//
//  main.cpp
//  Simulate galaxy
//
//  Created by Leon Kang on 2017/7/20.
//  Copyright © 2017年 Leon Kang. All rights reserved.
//

#include <iostream>
#include <GLUT/GLUT.h>
#include "SolarSystem.hpp"

#define WINDOW_X_POS 50
#define WINDOW_Y_POS 50
#define WIDTH 700
#define HEIGHT 700

SolarSystem solarsystem;

void onDisplay(void) {
    solarsystem.onDisplay();
}

void onUpdate(void) {
    solarsystem.onUpdate();
}

void onKeyboard(unsigned char key, int x, int y) {
    solarsystem.onKeyboard(key, x, y);
}

int main(int argc, const char * argv[]) {
    
    glutInit(&argc, (char**)argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutInitWindowSize(WIDTH, HEIGHT);
    
    glutCreateWindow("Simulate");
    
    glutDisplayFunc(onDisplay);
    glutIdleFunc(onUpdate);
    glutKeyboardFunc(onKeyboard);
    
    glutMainLoop();
    
    return 0;
}
