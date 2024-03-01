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

        vector<int> v;

        for (int i = 0; i < arr[a].size(); i++) {
            v.push_back(arr[a][i]);
        }

        if (v.size() == 0) {
            cout << -1 << endl;
        } else {
            sort(v.begin(), v.end(), greater<int>());
            for (int el : v) {
                cout << el << " ";
            }
            cout << endl;
        }
    }

    return 0;
}