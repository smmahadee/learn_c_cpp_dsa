#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> list1;

    int query, value, option;
    cin >> query;

    while (query--) {
        cin >> option >> value;

        if (option == 0) {
            list1.push_front(value);
        } else if (option == 1) {
            list1.push_back(value);
        } else {
            if (value >= 0 && value < list1.size()) {
                auto it = list1.begin();
                for (int i = 0; i < value; ++i) {
                    ++it;
                }
                list1.erase(it);
            }
        }

        cout << "L -> ";
        for (int val : list1) {
            cout << val << " ";
        }
        cout << endl;

        // print reverse
        cout << "R -> ";
        list<int>::iterator last = prev(list1.end());
        while (last != prev(list1.begin())) {
            cout << *last << " ";
            --last;
        }
        cout << endl;
    }

    return 0;
}