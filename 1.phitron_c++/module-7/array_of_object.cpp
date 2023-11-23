#include <iostream>

using namespace std;

class Student {
   public:
    string name;
    int roll;
    int marks;
};

int main() {
    int size;
    cin >> size;

    Student s[size];

    // dynamic array of object 
    // Student* s = new Student[size];

    for (int i = 0; i < size; i++) {
        cin >> s[i].name >> s[i].roll >> s[i].marks;
    }

    for (int i = 0; i < size; i++) {
        cout << s[i].name << " " << s[i].roll << " " << s[i].marks << endl;
    }

    // copy array element from array of object
    Student t;
    t = s[0];
    // cout<<t.name<<t.roll<<t.marks<<endl;

    return 0;
}