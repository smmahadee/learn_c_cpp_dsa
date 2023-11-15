#include <iostream>

using namespace std;

int main() {
    int* arr = new int[5];
    int* newArr = new int[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        newArr[i] = arr[i];
    }

    delete[] arr;

    arr = new int[7];

    for (size_t i = 0; i < 5; i++) {
        arr[i] = newArr[i];
    }

    delete[] newArr;

    arr[5] = 5;
    arr[6] = 6;

    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}