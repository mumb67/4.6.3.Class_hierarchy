#include "RightTriangle.h"
RightTriangle::RightTriangle(unsigned int RT_a, unsigned int RT_b, unsigned int RT_c, 
    unsigned int RT_A, unsigned int RT_B, unsigned int RT_C) : Triangle() {
    if (RT_C == 90) { a = RT_a; b = RT_b; c = RT_c;
        A = RT_A; B = RT_B; C = RT_C; }
    else { std::cout << "Неправильные параметры для прямоугольного треугольника!" << std::endl; }
}
void RightTriangle::print_RT() { std::cout << "Прямоугольный треугольник: " << std::endl; print_infoT(); }