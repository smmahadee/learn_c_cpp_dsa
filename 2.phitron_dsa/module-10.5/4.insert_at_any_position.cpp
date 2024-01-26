#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> list1;

    int query, value, index;

    cin >> query;

    while (query--) {
        cin >> index >> value;
        if (index < 0 || index > list1.size()) {
            cout << "Invalid index" << endl;
            continue;
        }

        // cout << index << " " << value << endl;

        if (index == 0) {
            list1.push_front(value);
        } else {
            list1.insert(next(list1.begin(), index), value);
        }

        for (int val : list1) {
            cout << val << " ";
        }
        cout << endl;

        list<int>::iterator last = prev(list1.end());
        while (last != prev(list1.begin())) {
            cout << *last << " ";
            --last;
        }
        cout << endl;
    }

    return 0;
}