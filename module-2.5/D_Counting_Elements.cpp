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

    int count = 0;
    for (int i = 0; i < size; i++) {
        auto it = find(A.begin(), A.end(), A[i] + 1);
        if (it != A.end()) count++;
    }

    cout << count << endl;

    return 0;
}