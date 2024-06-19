#pragma once
#include <iostream>
class Quadraangle {
protected:
    unsigned int a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;
    void print_infoQ();
public:
    Quadraangle();
    Quadraangle(unsigned int Q_a, unsigned int Q_b, unsigned int Q_c, unsigned int Q_d, 
        unsigned int Q_A, unsigned int Q_B, unsigned int Q_C, unsigned int Q_D);
    void print_Q();
};