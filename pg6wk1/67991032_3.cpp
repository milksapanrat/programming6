#include <iostream>

int main() {
    int score;
    int total = 0;

    while (true) {
        std::cout << "Enter mission score: ";
        std::cin >> score;

        if (score == 0) {
            break;
        }

        total += score;
    }

    std::cout << "Total score: " << total << std::endl;

    return 0;
}