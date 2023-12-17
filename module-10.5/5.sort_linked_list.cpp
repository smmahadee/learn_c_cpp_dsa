#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> list1;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;

        list1.push_back(val);
    }

    list1.sort();

    for(int val: list1) {
        cout<<val<<" ";
    }

    return 0;
}