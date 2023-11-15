#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int max_value = arr[0];

    for (int i = 0; i < size; i++) {
        max_value = max(arr[i], max_value);

    }

    cout << max_value << endl;

    return 0;
}