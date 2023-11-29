#include <iostream>

using namespace std;

int main() {
    // method  1
    vector<int> v;
    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int val : v) {
        cout << val << " ";
    }

    return 0;
}