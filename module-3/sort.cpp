#include <iostream>

using namespace std;

int main() {
    int arr[5] = {5, 2, 1, 6, 3};

    sort(arr, arr + 5);

    for (int i = 0; i < 5; i++) {
        cout << arr[i];
    }

    return 0;
}