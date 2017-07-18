//
//  main.cpp
//  RayTracingInOneWeekend
//
//  Created by Hina on 2017/06/26.
//  Copyright © 2017年 Hina. All rights reserved.
//

#include <iostream>
#include "vec3.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    int nx = 200;
    int ny = 100;
    std::cout << "P3\n" << nx << " " << ny << "\n255\n";
    for (int j = ny-1; j >= 0; j--){
        for(int i = 0; i<nx; i++){
//            float r = float(i) / float(nx);
//            float g = float(j) / float(ny);
//            float b = 0.2;
//            int ir = int(255.99*r);
//            int ig = int(255.99*g);
//            int ib = int(255.99*b);
            
            vec3 col(float(i) / float(nx), float(j) / float(ny), 0.2);
            int ir = int(255.99*col[0]);
            int ig = int(255.99*col[1]);
            int ib = int(255.99*col[2]);
            
            std::cout << ir << " " << ig << " " << ib << "\n";
            
            
        }
    }
    
}
