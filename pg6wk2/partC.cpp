#include <iostream>
#include <string>

// C1
void c1() {
    std::string first = "Ada";
    std::string last = "Lovelace";

    std::string fullName = last + ", " + first;
    fullName += "";

    std::cout << fullName << " " << fullName.length() << std::endl;

    std::cout << (first == last) << " "
              << (first != last) << " "
              << (first < last) << " "
              << (first > last) << std::endl;
}

// C2
void c2() {
    std::string s = "programming six";

    std::cout << s[0] << " "
              << s.at(s.length() - 1) << std::endl;

    std::size_t pos = s.find(" ");

    std::cout << s.substr(0, pos) << std::endl;
    std::cout << s.substr(pos + 1) << std::endl;

    if (s.find("xyz") == std::string::npos) {
        std::cout << "not found" << std::endl;
    }
}

// C3
void c3() {
    std::string s = "Programming 6";

    // Step 1: Insert C++ at the front
    s.insert(0, "C++ ");
    std::cout << s << std::endl;

    // Step 2: Add ! at the end
    s.push_back('!');
    std::cout << s << std::endl;

    // Step 3: Replace 6 with Six
    std::size_t pos = s.find("6");
    s.replace(pos, 1, "Six");
    std::cout << s << std::endl;

    // Step 4: Erase !
    s.erase(s.length() - 1);
    std::cout << s << std::endl;

    std::cout << s.length() << " " << s.empty() << std::endl;

    // Clear the string
    s.clear();

    std::cout << s.empty() << std::endl;
}

int main() {
    std::cout << "--- C1 ---" << std::endl;
    c1();

    std::cout << "--- C2 ---" << std::endl;
    c2();

    std::cout << "--- C3 ---" << std::endl;
    c3();

    return 0;
}
