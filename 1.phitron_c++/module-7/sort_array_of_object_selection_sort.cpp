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

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (s[i].marks > s[j].marks) {
                swap(s[i], s[j]);
            }

            if (s[i].marks == s[j].marks) {
                if (s[i].roll > s[j].roll) {
                    swap(s[i], s[j]);
                }
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << s[i].name << " " << s[i].roll << " " << s[i].marks << endl;
    }

    return 0;
}
