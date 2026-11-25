
#include <iostream>
#include <vector>

// D1
void d1() {
    std::vector<int> v;

    for (int i = 1; i <= 10; i++) {
        v.push_back(i);
    }

    std::cout << v.size() << " "
              << v.front() << " "
              << v.back() << " "
              << v[4] << " "
              << v.at(9) << std::endl;
}

// D2
// Helper function to print vector
void printVector(const std::vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }

    std::cout << "| size=" << v.size() << std::endl;
}

void d2() {
    std::vector<int> v = {5, 3, 8};

    // Step 1: Add 9 to the back
    v.push_back(9);
    printVector(v);

    // Step 2: Insert 1 at the front
    v.insert(v.begin(), 1);
    printVector(v);

    // Step 3: Erase the element at index 2
    v.erase(v.begin() + 2);
    printVector(v);

    // Step 4: Remove the last element
    v.pop_back();
    printVector(v);

    // Clear the vector
    v.clear();

    std::cout << v.empty() << std::endl;
}

// D3
std::vector<int> removeNegatives(const std::vector<int>& v) {
    std::vector<int> result;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] >= 0) {
            result.push_back(v[i]);
        }
    }

    return result;
}

void d3() {
    std::vector<int> v = {3, -1, 4, -5, 9, 2};

    std::vector<int> result = removeNegatives(v);

    int sum = 0;
    int largest = result[0];

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";

        sum += result[i];

        if (result[i] > largest) {
            largest = result[i];
        }
    }

    std::cout << std::endl;

    double average = static_cast<double>(sum) / result.size();

    std::cout << result.size() << " "
              << largest << " "
              << average << std::endl;
}

int main() {
    std::cout << "--- D1 ---" << std::endl;
    d1();

    std::cout << "--- D2 ---" << std::endl;
    d2();

    std::cout << "--- D3 ---" << std::endl;
    d3();

    return 0;
}
