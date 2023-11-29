#include <iostream>

using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> v(arr, arr + 5);
    vector<int> v2(arr2, arr2 + 10);

    // v.pop_back();
    // v.push_back(10);
    v = v2;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}