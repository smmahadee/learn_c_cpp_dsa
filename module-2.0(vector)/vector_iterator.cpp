#include <iostream>

using namespace std;

int main() {
    int arr[7] = {1, 2, 3, 2, 3, 4, 7};
    vector<int> v(arr, arr + 7);

    vector<int>::iterator it;

    for (it = v.begin(); it < v.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}