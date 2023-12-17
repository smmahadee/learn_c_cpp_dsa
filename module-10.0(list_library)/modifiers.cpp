#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int arr[5] = {10, 20 , 30 , 40 , 50};
    list<int> myList(arr, arr+5);

    // ASSIGN 
    // assign array or vector or another list
    // int arr[5] = {6};
    //  vector<int> v(10, 5);
    // myList.assign(v.begin(), v.end());

    // myList.push_back(100);
    // myList.pop_back();
    // myList.push_front(500);
    // myList.pop_front();

    // INSERT 
    // insert at any postion - element or vector or array or another list
    // myList.insert(next(myList.begin(), 3), 100);
    // list<int> temp(5, 100);
    // myList.insert(next(myList.begin(), 3), temp.begin(), temp.end());
    // it not woks in vs code but in xcode works
    // myList.insert(next(myList.begin(), 3), {10, 20, 30});

    // ERASE 
    // myList.erase(next(myList.begin(), 3));

    // REPLACE 
    // begin pointer, end pointer, which value will be replace , by which value 
    replace(myList.begin(), myList.end(),30,  100);

    // FIND 
    auto it = find(myList.begin(), myList.end(), 100);
    if(it != myList.end()) {
        cout<<"found";
    }else {
        cout<<"not found";
    }


    for (int val : myList) {
        cout << val << " ";
    }

    return 0;
}