#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> list1;
    list<int> list2;

    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;

        list1.push_back(val);
    }

    bool flag = true;
    
    list<int>::iterator first = list1.begin();
    list<int>::iterator last = prev(list1.end());

    while (first != last) {
        if (*first != *last) {
            flag = false;
            break;
        }

        ++first;
        --last;
    }

    if (flag) {
        cout << "Pallindrome";
    } else {
        cout << "not pallindrome";
    }

    return 0;
}