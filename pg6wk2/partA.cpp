#include <iostream>

void a1() {
    int a = 5;
    int* ptr = &a;

    std::cout << *ptr << std::endl;
    *ptr = 50;
    std::cout << a << std::endl;
}