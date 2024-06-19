#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(unsigned int RQ_a, unsigned int RQ_b, unsigned int RQ_c, unsigned int RQ_d, 
    unsigned int RQ_A, unsigned int RQ_B, unsigned int RQ_C, unsigned int RQ_D) : Quadraangle() {
    if ((RQ_a == RQ_c) && (RQ_b == RQ_d)) { a = RQ_a, b = RQ_b, c = RQ_c, d = RQ_d, A = RQ_A, B = RQ_B, C = RQ_C, D = RQ_D; }
    else { std::cout << "Неправильные параметры для прямоугольника!" << std::endl; }
};

void Rectangle::print_RQ() { std::cout << "Прямоугольник : " << std::endl; print_infoQ(); }