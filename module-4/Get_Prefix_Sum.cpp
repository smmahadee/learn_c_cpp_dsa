#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    long long int prefixSumArr[size];
    prefixSumArr[0] = arr[0];

    for (int i = 1; i < size; i++) {
        prefixSumArr[i] = prefixSumArr[i - 1] + arr[i];
    }

    for (int i = size - 1; i >= 0; i--) {
        cout << prefixSumArr[i] << " ";
    }

    return 0;
}