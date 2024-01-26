#include <iostream>

using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    vector<int> arr[n];
    while (e--) {
        int a, b;
        cin >> a >> b;

        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    // how many conncecton has with a node

    // 1.
    for (int x : arr[0]) {
        cout << x << " ";
    }

    // 2.
    for (int i = 0; i < arr[0].size(); i++) {
        cout << arr[0][i] << " ";
    }

    return 0;
}