#include <iostream>
#include <string>

// A1
class Book {
public:
    std::string title;
    std::string author;
    int pages = 0;

    void print() {
        std::cout << title << " by " << author
                  << " (" << pages << " pages)" << std::endl;
    }
};

void a1() {
    Book b1;
    b1.title = "Clean Code";
    b1.author = "Robert C. Martin";
    b1.pages = 464;

    Book b2;
    b2.title = "C++ Primer";
    b2.author = "Lippman";
    b2.pages = 976;

    b1.print();
    b2.print();
}

// A2
class Point {
public:
    int x = 0;
    int y = 0;

    void print() {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

void a2() {
    Point p;
    p.x = 3;
    p.y = 4;

    Point q = p;
    q.x = 10;

    p.print();
    q.print();

    // q is a copy of p, so changing q.x does not change p.x.
}

// A3
class Student {
public:
    std::string name;
    int score = 0; // Fix 1: Initialize score to prevent a garbage value.

    void print() {
        std::cout << name << " " << score << std::endl;
    }
}; // Fix 2: Add a semicolon after the class definition.

void a3() {
    Student s;
    s.name = "Ann"; // Fix 3: Use the object name s instead of Student.
    s.print();
}

int main() {
    std::cout << "--- A1 ---" << std::endl;
    a1();

    std::cout << "--- A2 ---" << std::endl;
    a2();

    std::cout << "--- A3 ---" << std::endl;
    a3();

    return 0;
}