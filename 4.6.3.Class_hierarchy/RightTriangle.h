#pragma once
#include "Triangle.h"
//Прямоугольный треугольник
class RightTriangle : public Triangle {
public:
    RightTriangle(unsigned int RT_a, unsigned int RT_b, unsigned int RT_c,
        unsigned int RT_A, unsigned int RT_B, unsigned int RT_C);
    void print_RT();
};
