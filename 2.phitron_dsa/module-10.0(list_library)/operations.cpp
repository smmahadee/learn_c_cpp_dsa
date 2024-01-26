#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int arr[10] = {10, 20 , 30 , 40 , 50, 10, 10, 20, 30 , 40};
    list<int> myList(arr, arr+10);

    // REMOVE ALL DUPLICATE VALUE 
    // myList.remove(10);

    // SORT 
    // myList.sort();
    // myList.sort(greater<int>());

    // KEEP ONLY UNIQUE VALUE (it will work only in sorted list)
    // myList.sort();
    // myList.unique();

    // REVERSE 
    // myList.reverse();

    for (int val : myList) {
        cout << val << " ";
    }

    return 0;
}