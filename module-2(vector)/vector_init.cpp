#include <iostream>

using namespace std;

int main() {
    // vector<int> v;  // 1
    // vector<int> v(5); // 2
    // vector<int> v(5, 10); // 3

    // method 4
    // vector<int> temp(4, 10);
    // vector<int> v(temp);

    // method 5
    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> v(arr, arr + 5);

    // vector with initialization
    // vector<int> v = {1, 2, 3}; // it not work in mac c++ compiler

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}