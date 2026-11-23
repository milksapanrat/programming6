
#include <iostream>
#include <string>

// --- D1 ---
class Student {
private:
    std::string name;
    int score = 0;

public:
    void setName(std::string n) {
        name = n;
    }

    std::string getName() {
        return name;
    }

    int getScore() {
        return score;
    }

    bool setScore(int s) {
        if (s >= 0 && s <= 100) {
            score = s;
            return true;
        }
        return false;
    }
};

void d1() {
    Student s;

    s.setName("Ann");

    std::cout << s.setScore(85) << " "
              << s.setScore(150) << " "
              << s.setScore(-5) << std::endl;

    std::cout << s.getName() << " "
              << s.getScore() << std::endl;
}


// --- D2 ---
class BankAccount {
private:
    double balance = 0;
    int transactions = 0;

public:
    bool deposit(double amount) {
        if (amount <= 0) {
            return false;
        }

        balance += amount;
        transactions++;
        return true;
    }

    bool withdraw(double amount) {
        if (amount <= 0 || amount > balance) {
            return false;
        }

        balance -= amount;
        transactions++;
        return true;
    }

    double getBalance() {
        return balance;
    }

    int getTransactions() {
        return transactions;
    }
};

void d2() {
    BankAccount account;

    std::cout << account.deposit(1000) << " "
              << account.withdraw(300) << " "
              << account.withdraw(5000) << " "
              << account.deposit(-50) << std::endl;

    std::cout << account.getBalance() << " "
              << account.getTransactions() << std::endl;
}


// --- D3 ---
class Thermometer {
private:
    double celsius = 25.0;

public:
    bool setCelsius(double c) {
        if (c < -273.15) {
            return false;
        }

        celsius = c;
        return true;
    }

    double getCelsius() {
        return celsius;
    }

    double getFahrenheit() {
        return celsius * 9 / 5 + 32;
    }

    double getKelvin() {
        return celsius + 273.15;
    }
};

// Fahrenheit is not a data member because it can be
// calculated from Celsius, so storing it separately is unnecessary.

void printT(Thermometer& t) {
    std::cout << t.getCelsius() << " "
              << t.getFahrenheit() << " "
              << t.getKelvin() << std::endl;
}

void d3() {
    Thermometer t;

    printT(t);

    std::cout << t.setCelsius(-300) << std::endl;
    printT(t);

    t.setCelsius(100);
    printT(t);
}


// --- Main ---
int main() {
    std::cout << "--- D1 ---" << std::endl;
    d1();

    std::cout << "--- D2 ---" << std::endl;
    d2();

    std::cout << "--- D3 ---" << std::endl;
    d3();

    return 0;
}
