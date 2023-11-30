#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size, query;
    cin >> size >> query;

    vector<int> A(size);
    for (int i = 0; i < size; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < query; i++) {
        int x, y;
        cin >> x >> y;

        int sum = 0;
        for (int i = x; x <= y; x++) {
            sum += A[x - 1];
        }

        cout << sum << endl;
    }

    return 0;
}