#include <iostream>

int Accumulate_Score(int bonus = 50) {
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

    total += bonus;

    return total;
}

int main() {
    int total1 = Accumulate_Score();
    std::cout << "Total score: " << total1 << std::endl;

    int total2 = Accumulate_Score(100);
    std::cout << "Total score: " << total2 << std::endl;

    return 0;
}