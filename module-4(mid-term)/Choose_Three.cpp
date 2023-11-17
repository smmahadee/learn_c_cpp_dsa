#include <iostream>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int size, sum;
        cin >> size >> sum;

        int arr[size];
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        int flag = 0;

        for (int i = 0; i < size - 2; i++) {
            for (int j = i + 1; j < size - 1; j++) {
                for (int k = j + 1; k < size; k++) {
                    if (arr[i] + arr[j] + arr[k] == sum) {
                        flag = 1;
                        break;
                    }
                }
            }
        }

        if (flag == 1) {
            cout << "YES" << endl;

        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}