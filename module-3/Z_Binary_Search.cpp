#include <algorithm>
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

    sort(arr, arr + size);

    while (query--) {
        int findEl;
        cin >> findEl;

        int flag = 0;
        int i = 0, j = size - 1;
        while (i <= j) {
            int mid = (i + j) / 2;
            if (arr[mid] == findEl) {
                flag = 1;
                break;
            } else if (arr[mid] > findEl) {
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }

        if (flag == 0) {
            cout << "not found" << endl;
        } else {
            cout << "found" << endl;
        }
    }

    return 0;
}