#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size;
    cin >> size;

    vector<int> A(size);
    vector<int> B(size);
    vector<int> C;

    for (int i = 0; i < size; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < size; i++) {
        cin >> B[i];
    }

    C.insert(C.begin(), B.begin(), B.end());
    C.insert(C.begin() + size, A.begin(), A.end());

    for (int val : C) {
        cout << val << " ";
    }

    return 0;
}