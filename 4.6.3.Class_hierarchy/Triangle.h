#pragma once
#include <iostream>
//Треугольник
class Triangle {
protected:
    unsigned int a = 0, b = 0, c = 0, A = 0, B = 0, C = 0;
    void print_infoT();
public:
    Triangle();
    Triangle(unsigned int T_a, unsigned int T_b, unsigned int T_c, 
        unsigned int T_A, unsigned int T_B, unsigned int T_C);
    void print_T();
};