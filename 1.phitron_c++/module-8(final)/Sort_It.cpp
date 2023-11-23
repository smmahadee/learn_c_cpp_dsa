#include <algorithm>
#include <iostream>

using namespace std;

class Student {
   public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b) {
    int total_marksA = a.math_marks + a.eng_marks;
    int total_marksB = b.math_marks + b.eng_marks;

    if (total_marksA == total_marksB) {
        return a.id < b.id;
    } else {
        return total_marksA > total_marksB;
    }
}

int main() {
    int size;
    cin >> size;

    Student s[size];
    for (int i = 0; i < size; i++) {
        cin >> s[i].nm >> s[i].cls >> s[i].s >> s[i].id >> s[i].math_marks >>
            s[i].eng_marks;
    }

    sort(s, s + size, cmp);

    for (int i = 0; i < size; i++) {
        cout << s[i].nm << " " << s[i].cls << " " << s[i].s << " " << s[i].id
             << " " << s[i].math_marks << " " << s[i].eng_marks << endl;
    }

    return 0;
}
