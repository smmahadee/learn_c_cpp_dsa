#include <string.h>

#include <iostream>

using namespace std;

class Student {
   public:
    int ID;
    char name[101];
    char section;
    int total_marks;

    Student(int ID, char name[101], char section, int total_marks) {
        this->ID = ID;
        strcpy(this->name, name);
        this->section = section;
        this->total_marks = total_marks;
    }
};

int main() {
    Student* rahim = new Student(23, "rahim", 'A', 232);
    Student* karim = new Student(23, "karim", 'A', 232);

    rahim = karim; // this is not ideal;

    // number 1 method - copy object
    rahim->ID = karim->ID;

    // number 2 method
    *rahim = *karim;

    return 0;
}