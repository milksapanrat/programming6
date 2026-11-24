
#include <iostream>

// --- C1 ---
struct PointS {
    int x = 0;
    int y = 0;
};

class PointC {
public:
    int x = 0;
    int y = 0;
};

// Difference: struct members are public by default,
// while class members are private by default.

void c1() {
    PointS a;
    a.x = 1;
    a.y = 2;

    PointC b;
    b.x = 3;
    b.y = 4;

    std::cout << a.x << " " << a.y << std::endl;
    std::cout << b.x << " " << b.y << std::endl;
}


// --- C2 and C3 ---
class Lamp {
private:
    bool on = false;
    int switchCount = 0;

public:
    void turnOn() {
        if (!on) {
            on = true;
            switchCount++;
        }
    }

    void turnOff() {
        if (on) {
            on = false;
            switchCount++;
        }
    }

    bool isOn() {
        return on;
    }

    void toggle() {
        if (on) {
            turnOff();
        } else {
            turnOn();
        }
    }

    int getSwitchCount() {
        return switchCount;
    }
};


// --- C2 ---
void c2() {
    Lamp l;

    l.turnOn();
    std::cout << l.isOn() << std::endl;

    l.turnOff();
    std::cout << l.isOn() << std::endl;
}


// --- C3 ---
void show(Lamp& l) {
    std::cout << l.isOn() << " "
              << l.getSwitchCount() << std::endl;
}

void c3() {
    Lamp l;

    l.turnOn();
    show(l);

    l.toggle();
    show(l);

    l.toggle();
    show(l);
}


// --- Main ---
int main() {
    std::cout << "--- C1 ---" << std::endl;
    c1();

    std::cout << "--- C2 ---" << std::endl;
    c2();

    std::cout << "--- C3 ---" << std::endl;
    c3();

    return 0;
}
