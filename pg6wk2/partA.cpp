#include <iostream>

// A1
void a1() {
    int a = 5;
    int* ptr = &a;

    std::cout << *ptr << std::endl;
    *ptr = 50;
    std::cout << a << std::endl;
}

// A2
void addTen(int& n) {
    n += 10;
}

void a2() {
    int x = 7;
    std::cout << x << std::endl;
    addTen(x);
    std::cout << x << std::endl;
}

// A3
void swapValues(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapPtr(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void a3() {
    int p = 3;
    int q = 9;
    swapValues(p, q);
    std::cout << p << " " << q << std::endl;
    swapPtr(&p, &q);
    std::cout << p << " " << q << std::endl;
}

int main() {
    std::cout << "---A1---" << std::endl;
    a1();
    std::cout << "---A2---" << std::endl;
    a2();
    std::cout << "---A3---" << std::endl;
    a3();
}