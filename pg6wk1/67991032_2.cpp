#include <iostream>
#include <string>

int main() {
    std::string name;
    bool isAdult;

    std::cout << "Enter visitor name: ";
    std::cin >> name;

    std::cout << "Is adult? (1 for Yes, 0 for No): ";
    std::cin >> isAdult;

    std::cout << std::endl;
    std::cout << "Visitor: " << name << " | Adult Ticket: " << isAdult << std::endl;

    return 0;
}