#include <iostream>

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

        if (size % 2 != 0) {
            cout << -1 << endl;

        } else {
            int even = 0, odd = 0;
            for (int i = 0; i < size; i++) {
                if (arr[i] % 2 == 0) {
                    even++;
                } else {
                    odd++;
                }
            }

            int mx = max(even, odd);
            int numOfOperations = abs(mx - (size / 2));
            cout << numOfOperations << endl;
        }
    }

    return 0;
}