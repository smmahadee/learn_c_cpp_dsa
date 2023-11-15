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

Student * fun() {
    Student rahim("Rahim", 23, 32.23);
    Student * p = &rahim;
    return p;
}

int main() {
    Student * rahim = fun();

    cout<<rahim->name<<rahim->roll<<endl;

    return 0;
}