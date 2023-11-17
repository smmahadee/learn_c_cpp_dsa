#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int size;
        cin >> size;

        int arr[size];
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        long long int minSum = LLONG_MAX;

        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++) {
                long long int curSum = arr[i] + arr[j] + j - i;
                minSum = min(minSum, curSum);
            }
        }

        cout << minSum << endl;
    }

    return 0;
}