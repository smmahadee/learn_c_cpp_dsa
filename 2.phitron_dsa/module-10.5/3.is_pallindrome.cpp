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

    list2 = list1;
    list2.reverse();

    for(int val: list1) {
        cout<<val<<" ";
    }
    cout<<endl;

    for(int val: list2) {
        cout<<val<<" ";
    }

    std::list<int>::iterator it = list1.begin();
    std::list<int>::iterator it2 = list2.begin();

    bool flag = true;
    while (it != list1.end()) {
        if (*it != *it2) {
            flag = false;
            break;
        }

        ++it;
        ++it2;
    }

    if (flag) {
        cout << "Pallindrome";
    } else {
        cout << "not pallindrome";
    }

    return 0;
}