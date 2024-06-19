#include "Quadraangle.h"
#include <iostream>
void Quadraangle::print_infoQ() {
        std::cout << "Стороны:" << "\t" << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
        std::cout << "Углы:" << "\t\t" << "A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << "\n\n"; };

Quadraangle::Quadraangle() {};
Quadraangle::Quadraangle(unsigned int Q_a, unsigned int Q_b, unsigned int Q_c, unsigned int Q_d, unsigned int Q_A, unsigned int Q_B, unsigned int Q_C, unsigned int Q_D) {
        a = Q_a; b = Q_b, c = Q_c, d = Q_d, A = Q_A, B = Q_B, C = Q_C, D = Q_D; };

void Quadraangle::print_Q() { std::cout << "Четырехугольник: " << std::endl; print_infoQ(); };