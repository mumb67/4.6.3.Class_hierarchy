#pragma once
#include "Quadraangle.h"
//прямоугольник
class Rectangle : public Quadraangle {
public:
    Rectangle(unsigned int RQ_a, unsigned int RQ_b, unsigned int RQ_c, unsigned int RQ_d,
        unsigned int RQ_A, unsigned int RQ_B, unsigned int RQ_C, unsigned int RQ_D);
    void print_RQ();
};