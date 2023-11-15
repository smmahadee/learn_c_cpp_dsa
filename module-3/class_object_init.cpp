#include <string.h>

#include <iostream>

using namespace std;

class Student {
   public:
    char name[100];
    int roll;
    double cgpa;
};

int main() {
    Student rakib;

    cin >> rakib.name >> rakib.roll >> rakib.cgpa;

    cout << rakib.name << " " << rakib.roll << " " << rakib.cgpa << endl;

    return 0;
}