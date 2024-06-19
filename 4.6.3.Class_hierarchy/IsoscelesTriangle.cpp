#include "IsoscelesTriangle.h"
IsoscelesTriangle::IsoscelesTriangle(unsigned int IT_a, unsigned int IT_b, unsigned int IT_c, 
    unsigned int IT_A, unsigned int IT_B, unsigned int IT_C) : Triangle() {
    if (IT_a == IT_c && IT_A == IT_C) { a = IT_a; b = IT_b; c = IT_c; A = IT_A; B = IT_B; C = IT_C; }
    else { std::cout << "Неправильные параметры для равнобедренного треугольника!" << std::endl; }
}
void IsoscelesTriangle::print_IT() { std::cout << "Равнобедренный треугольник: " << std::endl; print_infoT(); }