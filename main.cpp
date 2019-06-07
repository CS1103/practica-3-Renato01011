#include <iostream>
#include <vector>
#include "templates.h"

int main() {

    Matrix <int> m1(5,5);
    Matrix <int> m2(5,5);
    m1.fillRandomValues();
    m2.fillRandomValues();
    std::cout << "Matriz 1:" << std::endl;
    m1.printMatrix();
    std::cout << "Matriz 2:" << std::endl;
    m2.printMatrix();
    std::cout << std::endl;
    Matrix <int> m3(5,5);
    m3 = m2.getMconst() + m1.getMconst();
    std::cout << "Matriz 3:" << std::endl;
    m3.printMatrix();



    return 0;
}