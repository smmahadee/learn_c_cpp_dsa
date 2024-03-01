#include <iostream>
#include <vector>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        int n;
        cin >> n;
        long long int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long int maxHeight = INT_MIN;
        pair<int, int> indexes;
        int left = 0, right = n - 1;

        while (left < right) {
            long long int curHeight = min(arr[left], arr[right]);

            if (curHeight > maxHeight) {
                maxHeight = curHeight;
                indexes = make_pair(left, right);
            }

            if (arr[left] < arr[right]) {
                left++;
            } else {
                right--;
            }
        }
        cout << indexes.first << " " << indexes.second << endl;
    }

    return 0;
}
