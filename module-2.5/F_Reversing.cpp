#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size;
    cin >> size;

    vector<int> A(size);
    for (int i = 0; i < size; i++) {
        cin >> A[i];
    }

    reverse(A.begin(), A.end());

    for (int val : A) {
        cout << val << " ";
    }

    return 0;
}