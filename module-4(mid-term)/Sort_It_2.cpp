#include <iostream>

using namespace std;

int* sort_it(int size) {
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // SORT DESCENDING ORDER
    sort(arr, arr + size, greater<int>());

    return arr;
}

int main() {
    int size;
    cin >> size;

    int* arr = sort_it(size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}