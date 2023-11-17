#include <string.h>

#include <iostream>

using namespace std;

class Student {
   public:
    char name[100];
    int roll;
    float gpa;

    Student(char name[100], int roll, float gpa) {
        strcpy(this->name, name);
        this->roll = roll;
        this->gpa = gpa;
    }
};

Student* fun() {
    Student* rahim = new Student("Rahim", 23, 32.23);

    return rahim;
}

int main() {
    // Student* rahim = fun();
    Student * rahim = new Student("Rahim", 23, 32.23);


    cout << rahim->name << rahim->roll << endl;
    delete rahim;
    cout << rahim->name << rahim->roll << endl;
    
    return 0;
}