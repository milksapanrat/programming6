
#include <iostream>

// B1: Rectangle
class Rectangle {
public:
    double width = 0;
    double height = 0;

    double area() {
        return width * height;
    }

    double perimeter() {
        return 2 * (width + height);
    }

    bool isSquare() {
        return width == height;
    }
};

void b1() {
    Rectangle r1;
    r1.width = 4;
    r1.height = 5;

    Rectangle r2;
    r2.width = 3;
    r2.height = 3;

    std::cout << r1.area() << " "
              << r1.perimeter() << " "
              << r1.isSquare() << std::endl;

    std::cout << r2.area() << " "
              << r2.perimeter() << " "
              << r2.isSquare() << std::endl;
}

// B2: Counter
class Counter {
public:
    int count = 0;

    void add() {
        count++;
    }

    void addMany(int n) {
        for (int i = 0; i < n; i++) {
            add();
        }
    }

    void reset() {
        count = 0;
    }
};

void b2() {
    Counter c1;
    Counter c2;

    c1.add();
    c1.add();
    c1.addMany(5);

    c2.add();

    std::cout << c1.count << " "
              << c2.count << std::endl;

    c1.reset();

    std::cout << c1.count << " "
              << c2.count << std::endl;
}

// B3: Circle
const double PI = 3.14159;

class Circle {
public:
    double radius = 0;

    double area();
    double circumference();
    void scale(double factor);
};

// Define functions outside the class
double Circle::area() {
    return PI * radius * radius;
}

double Circle::circumference() {
    return 2 * PI * radius;
}

void Circle::scale(double factor) {
    radius *= factor;
}

void b3() {
    Circle c;
    c.radius = 3;

    std::cout << c.area() << " "
              << c.circumference() << std::endl;

    c.scale(2);

    std::cout << c.radius << " "
              << c.area() << " "
              << c.circumference() << std::endl;
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
