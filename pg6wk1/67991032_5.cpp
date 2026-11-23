#include <iostream>

int main() {
    int hp = 40;
    int* hpPtr = &hp;

    std::cout << "HP using variable: " << hp << std::endl;
    std::cout << "HP using pointer: " << *hpPtr << std::endl;

    return 0;
}