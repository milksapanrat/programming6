
#include <iostream>

// B1
void b1() {
    int* p = new int(21);

    std::cout << *p * 2 << std::endl;

    delete p;
    p = nullptr;

    std::cout << (p == nullptr) << std::endl;
}

// B2
void b2() {
    int* arr = new int[5];

    arr[0] = 4;
    arr[1] = 9;
    arr[2] = 2;
    arr[3] = 7;
    arr[4] = 5;

    int sum = 0;
    int largest = arr[0];

    for (int i = 0; i < 5; i++) {
        sum += arr[i];

        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    std::cout << sum << " " << largest << std::endl;

    delete[] arr;
}

// B3
int* find(int* a, int n, int key) {
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            return &a[i];
        }
    }

    return nullptr;
}

void b3() {
    int data[5] = {4, 9, 2, 7, 5};

    int* result = find(data, 5, 7);

    if (result != nullptr) {
        std::cout << *result << std::endl;
    }
    else {
        std::cout << "not found" << std::endl;
    }

    result = find(data, 5, 8);

    if (result != nullptr) {
        std::cout << *result << std::endl;
    }
    else {
        std::cout << "not found" << std::endl;
    }
}

int main() {
    std::cout << "--- B1 ---" << std::endl;
    b1();

    std::cout << "--- B2 ---" << std::endl;
    b2();

    std::cout << "--- B3 ---" << std::endl;
    b3();

    return 0;
}
