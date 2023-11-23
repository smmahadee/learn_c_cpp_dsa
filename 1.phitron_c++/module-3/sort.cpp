#include <iostream>

using namespace std;

int main() {
    int arr[5] = {5, 2, 1, 6, 3};

    // have to give first index and last index 
    sort(arr, arr + 5);

    for (int i = 0; i < 5; i++) {
        cout << arr[i];
    }

    return 0;
}