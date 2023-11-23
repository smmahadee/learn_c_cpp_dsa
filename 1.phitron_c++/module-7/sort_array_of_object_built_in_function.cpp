#include <algorithm>
#include <iostream>

using namespace std;

class Student {
   public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student a, Student b) {
    if (a.marks == b.marks) {
        return a.roll < b.roll;
    } else {
        return a.marks > b.marks;
    }
}

int main() {
    int size;
    cin >> size;

    Student s[size];
    for (int i = 0; i < size; i++) {
        cin >> s[i].name >> s[i].roll >> s[i].marks;
    }

    sort(s, s + size, cmp);

    for (int i = 0; i < size; i++) {
        cout << s[i].name << " " << s[i].roll << " " << s[i].marks << endl;
    }

    return 0;
}
