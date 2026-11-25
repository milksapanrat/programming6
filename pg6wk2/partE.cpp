
#include <iostream>
#include <vector>
#include <string>

// E1
void e1() {
    std::vector<int> v = {4, 8, 15, 16, 23, 42};

    for (int x : v) {
        std::cout << x << " ";
    }

    std::cout << std::endl;
}

// E2
void e2() {
    std::vector<int> v = {4, 8, 15, 16, 23, 42};

    for (int& x : v) {
        x *= 2;
    }

    // Without &, x would be a copy, so the original vector would not change.

    for (int x : v) {
        std::cout << x << " ";
    }

    std::cout << std::endl;
}

// E3
void e3() {
    std::vector<std::string> words = {"cat", "elephant", "dog", "giraffe"};
    std::string longest = words[0];

    for (const std::string& word : words) {
        if (word.length() > longest.length()) {
            longest = word;
        }
    }

    std::cout << longest << std::endl;
}

int main() {
    std::cout << "--- E1 ---" << std::endl;
    e1();

    std::cout << "--- E2 ---" << std::endl;
    e2();

    std::cout << "--- E3 ---" << std::endl;
    e3();

    return 0;
}
