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

    int testCase;
    cin >> testCase;

    while (testCase--) {
        int a;
        cin >> a;

        for (int i = 0; i < arr[a].size(); i++) {
            cout << arr[a][i] << " ";
        }

        cout << endl;
    }

    return 0;
}

// 6 7
// 1 2
// 2 3
// 3 4
// 2 4
// 1 6
// 1 5
// 5 6