#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
    // how we can initialize doubly linked list 
    // list<int> myList;
    // list<int> myList(10);
    // list<int> myList(10, 5);

    // crete by another list 
    // list<int>temp(5, 3);
    // list <int> myList(temp);

    // create by array or vector 
    // int arr[5] = {1, 2, 3, 4 ,5};
    vector<int> v(10, 5);
    list <int> myList(v.begin(), v.end());

    // cout<<myList.size();
    for(int val : myList) {
        cout<<val<<" ";
    }

    return 0;
}