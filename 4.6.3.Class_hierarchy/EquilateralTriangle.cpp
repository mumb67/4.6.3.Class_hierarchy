#include "EquilateralTriangle.h"
EquilateralTriangle::EquilateralTriangle(unsigned int ET_a, unsigned int ET_b, unsigned int ET_c, 
    unsigned int ET_A, unsigned int ET_B, unsigned int ET_C) : Triangle() {
    if (ET_a == ET_b && ET_b == ET_c) { a = ET_a; b = ET_b; c = ET_c; A = ET_A; B = ET_B; C = ET_C; }
    else { std::cout << "Неправильные параметры для равностороннего треугольника!" << std::endl; }
}
void EquilateralTriangle::print_ET() { std::cout << "Равносторонний треугольник: " << std::endl; print_infoT(); }