
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

// --- E1 ---
class StudentRecord {
private:
    std::string id;
    std::string name;
    double assignment = 0;
    double midterm = 0;
    double finalExam = 0;

public:
    void setId(std::string i) {
        id = i;
    }

    void setName(std::string n) {
        name = n;
    }

    std::string getId() {
        return id;
    }

    std::string getName() {
        return name;
    }

    bool setScores(double a, double m, double f) {
        if (a < 0 || a > 100 ||
            m < 0 || m > 100 ||
            f < 0 || f > 100) {
            return false;
        }

        assignment = a;
        midterm = m;
        finalExam = f;

        return true;
    }

    double total() {
        return assignment * 0.3
             + midterm * 0.3
             + finalExam * 0.4;
    }

    std::string grade() {
        double t = total();

        if (t >= 80) return "A";
        if (t >= 75) return "B+";
        if (t >= 70) return "B";
        if (t >= 65) return "C+";
        if (t >= 60) return "C";
        if (t >= 55) return "D+";
        if (t >= 50) return "D";

        return "F";
    }

    bool passed() {
        return grade() != "F";
    }
};

void e1() {
    StudentRecord s;

    s.setId("66010001");
    s.setName("Ann");

    std::cout << s.setScores(85, 78, 90) << std::endl;

    std::cout << s.getId() << " "
              << s.getName() << " "
              << s.total() << " "
              << s.grade() << std::endl;

    std::cout << s.setScores(120, 50, 50) << std::endl;

    std::cout << s.total() << " "
              << s.grade() << std::endl;
}


// --- E2 ---
StudentRecord makeRecord(
    std::string id,
    std::string name,
    double a,
    double m,
    double f
) {
    StudentRecord s;

    s.setId(id);
    s.setName(name);
    s.setScores(a, m, f);

    return s;
}

void printReport(std::vector<StudentRecord>& list) {
    for (StudentRecord& s : list) {
        std::cout << s.getId() << " "
                  << s.getName() << " "
                  << s.total() << " "
                  << s.grade() << std::endl;
    }
}

void e2() {
    std::vector<StudentRecord> students;

    students.push_back(makeRecord("66010001", "Ann", 85, 78, 90));
    students.push_back(makeRecord("66010002", "Ben", 78, 75, 76));
    students.push_back(makeRecord("66010003", "Chai", 55, 40, 48));
    students.push_back(makeRecord("66010004", "Dao", 90, 88, 95));
    students.push_back(makeRecord("66010005", "Eak", 55, 52, 57));

    printReport(students);
}


// --- Main ---
int main() {
    std::cout << std::fixed << std::setprecision(1);

    std::cout << "--- E1 ---" << std::endl;
    e1();

    std::cout << "--- E2 ---" << std::endl;
    e2();

    return 0;
}
