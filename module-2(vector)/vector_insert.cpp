#include <iostream>

using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[7] = {10, 20 , 30, 40, 50, 60, 70};
    vector<int> v(arr, arr + 5);
    vector<int> v2(arr2, arr2 + 7);

    // v.insert(v.begin() + 2, 500); // insert single element 
    v.insert(v.begin() + 2, v2.begin(), v2.end()); // insert another vector

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}