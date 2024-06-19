#pragma once
#include "Triangle.h"
//равносторонний тругольник
class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(unsigned int ET_a, unsigned int ET_b, unsigned int ET_c,
        unsigned int ET_A, unsigned int ET_B, unsigned int ET_C);
void print_ET();
};