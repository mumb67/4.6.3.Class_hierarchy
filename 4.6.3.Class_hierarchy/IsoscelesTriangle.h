#pragma once
#include "Triangle.h"
//равнобедренный
class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(unsigned int IT_a, unsigned int IT_b, unsigned int IT_c,
        unsigned int IT_A, unsigned int IT_B, unsigned int IT_C);
    void print_IT();
};