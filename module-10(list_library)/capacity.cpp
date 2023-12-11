#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
    list <int> myList(5, 3);

    // myList.clear();
    // cout<<myList.size();

    // it returns 0 if not empty and returns 1 if  empty
    // cout<<myList.empty();

    // myList.resize(2);
    // myList.resize(8, 5);

    for(int val : myList) {
        cout<<val<<" ";
    }

    return 0;
}