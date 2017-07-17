//
//  vec3.cpp
//  RayTracingInOneWeekend
//
//  Created by Hina on 2017/06/29.
//  Copyright © 2017年 Hina. All rights reserved.
//

#include <stdlib.h>
#include <math.h>
#include <iostream>

class vec3 {
public:
    vec3(){}
    vec3(float e0, float e1, float e2) { e[0] = e0; e[1] = e1; e[2] = e2; }
    inline float x() const { return e[0]; }
    inline float y() const { return e[1]; }
    inline float z() const { return e[2]; }
    inline float r() const { return e[0]; }
    inline float g() const { return e[1]; }
    inline float b() const { return e[2]; }
    
    inline const vec3& operator+() const { return *this; }
    inline vec3 operator-() const { return vec3(-e[0], -e[1], -e[2]); }
    
    
    float e[3];
};
