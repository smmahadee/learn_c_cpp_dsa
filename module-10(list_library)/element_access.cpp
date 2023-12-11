#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int arr[10] = {10, 20 , 30 , 40 , 50, 10, 10, 20, 30 , 40};
    list<int> myList(arr, arr+10);

    // cout<<myList.front()<<endl;
    // cout<<myList.back()<<endl;

    cout<< *next(myList.begin(), 3)<<endl;

    for (int val : myList) {
        cout << val << " ";
    }

    return 0;
}