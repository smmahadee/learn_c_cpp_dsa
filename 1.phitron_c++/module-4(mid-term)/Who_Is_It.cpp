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
    int testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int ID, total_marks;
        char name[101], section;

        cin >> ID >> name >> section >> total_marks;
        Student s1(ID, name, section, total_marks);

        cin >> ID >> name >> section >> total_marks;
        Student s2(ID, name, section, total_marks);

        cin >> ID >> name >> section >> total_marks;
        Student s3(ID, name, section, total_marks);

        if (s1.total_marks >= s2.total_marks &&
            s1.total_marks >= s3.total_marks) {
            cout << s1.ID << " " << s1.name << " " << s1.section << " "
                 << s1.total_marks << endl;
        } else if (s2.total_marks >= s3.total_marks) {
            cout << s2.ID << " " << s2.name << " " << s2.section << " "
                 << s2.total_marks << endl;
        } else {
            cout << s3.ID << " " << s3.name << " " << s3.section << " "
                 << s3.total_marks << endl;
        }
    }

    return 0;
}