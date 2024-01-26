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

    for (int i = 0; i < size; i++) {
        if (A[i] < 0)
            cout << 2 << " ";
        else if (A[i] > 0)
            cout << 1 << " ";
        else
            cout << A[i] << " ";
    }

    return 0;
}