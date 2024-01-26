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

    int val2;
    while (true) {
        cin >> val2;
        if (val2 == -1) break;

        list2.push_back(val2);
    }

    if(list1.size() != list2.size()) {
        cout<<"Not same";
        return 0;
    }

    cout << list1.size() << " " << list2.size() << endl;
    std::list<int>::iterator it = list1.begin();
    std::list<int>::iterator it2 = list2.begin();

    while (it != list1.end()) {
        if (*it != *it2) {
            cout << "not same";
            return 0;
        }
        ++it;
        ++it2;
    }

    cout << "same";
    // for (int val : list2) {
    //     cout << val << " ";
    // }

    return 0;
}