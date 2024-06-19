#include <iostream>
#include "Square.h"
Square::Square(unsigned int RQ_a, unsigned int RQ_b, unsigned int RQ_c, unsigned int RQ_d, 
    unsigned int RQ_A, unsigned int RQ_B, unsigned int RQ_C, unsigned int RQ_D) : Quadraangle() {
    if ((RQ_a == RQ_b && RQ_b == RQ_c && RQ_c == RQ_d) && (RQ_A == 90 && RQ_B == 90 && RQ_C == 90 && RQ_D == 90)) {
        a = RQ_a, b = RQ_b, c = RQ_c, d = RQ_d, A = RQ_A, B = RQ_B, C = RQ_C, D = RQ_D;
    }
    else { std::cout << "Неправильные параметры для квадрата!" << std::endl; };
};
void Square::print_SQ() { std::cout << "Квадрат : " << std::endl; print_infoQ(); }