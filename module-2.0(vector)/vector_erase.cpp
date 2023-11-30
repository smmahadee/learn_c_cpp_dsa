#include <iostream>

using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> v(arr, arr + 5);


    // v.erase(v.begin() + 2); // erase single element 
    v.erase(v.begin() + 2, v.end() ); // erase multiple element

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}