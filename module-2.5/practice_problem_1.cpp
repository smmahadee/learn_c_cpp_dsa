#include <iostream>

using namespace std;

int *get_array(int size) {
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    return arr;
}

int main() {
    int size;
    cin >> size;
    int *arr = get_array(size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}