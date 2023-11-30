#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int size, query;
    cin >> size >> query;

    vector<int> A(size);
    for (int i = 0; i < size; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < query; i++) {
        int x;
        cin >> x;
        auto it = find(A.begin(), A.end(), x);
        if (it != A.end()) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }

    return 0;
}