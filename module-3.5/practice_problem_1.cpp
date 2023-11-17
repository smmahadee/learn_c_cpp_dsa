#include <string.h>

#include <iostream>

using namespace std;

class Student {
   public:
    char name[100];
    int roll;
    char section;
    float math_marks;
    int cls;

    Student(char name[100], int roll, char section, float math_marks, int cls) {
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main() {
    Student rahim("Rahim", 1, 'A', 80.50, 6);
    Student karim("Karim", 1, 'A', 82.50, 6);
    Student mehedi("Mehedi", 1, 'A', 85.50, 6);

    if (rahim.math_marks > karim.math_marks &&
        rahim.math_marks > mehedi.math_marks) {
        cout << "Rahim" << endl;
    } else if (karim.math_marks > mehedi.math_marks) {
        cout << "Karim" << endl;
    } else {
        cout << "Mehedi" << endl;
    }

    return 0;
}