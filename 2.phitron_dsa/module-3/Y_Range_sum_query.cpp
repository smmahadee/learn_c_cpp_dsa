#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size, query;
    cin >> size >> query;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int prefixSumArr[size];
    prefixSumArr[0] = arr[0];
    for (int i = 1; i < size; i++) {
        prefixSumArr[i] = prefixSumArr[i - 1] + arr[i];
    }

    for (int k = 0; k < query; k++) {
        int i, j;
        cin >> i >> j;
        i--;
        j--;

        int sum;
        if (i == 0) {
            sum = prefixSumArr[j];
        } else {
            sum = prefixSumArr[j] - prefixSumArr[i - 1];
        }

        cout << sum << endl;
    }

    return 0;
}