#include <algorithm>
#include <iostream>

using namespace std;

class Student {
   public:
    string nm;
    int cls;
    char s;
    int id;
};

int main() {
    int size;
    cin >> size;

    Student s[size];
    for (int i = 0; i < size; i++) {
        cin >> s[i].nm >> s[i].cls >> s[i].s >> s[i].id;
    }

    int i = 0, j = size - 1;
    while (i < j) {
        swap(s[i].s, s[j].s);
        i++;
        j--;
    }

    for (int i = 0; i < size; i++) {
        cout << s[i].nm << " " << s[i].cls << " " << s[i].s << " " << s[i].id
             << endl;
    }

    return 0;
}
