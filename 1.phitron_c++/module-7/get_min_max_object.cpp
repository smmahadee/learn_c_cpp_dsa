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
    for (int i = 0; i < size; i++) {
        cin >> s[i].name >> s[i].roll >> s[i].marks;
    }

    Student mn;
    mn.marks = INT_MAX;

    Student mx;
    mx.marks = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (s[i].marks < mn.marks) {
            mn = s[i];
        };

        if (s[i].marks > mn.marks) {
            mx = s[i];
        };
    }

    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;
    cout << mx.name << " " << mx.roll << " " << mx.marks << endl;

    return 0;
}