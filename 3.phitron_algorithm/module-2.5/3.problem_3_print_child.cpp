#include <iostream>
#include <queue>

using namespace std;

int main() {
    vector<int> arr[1000];
    int e;
    cin >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;

        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    int node;
    cin >> node;

    int totalEl = 0;
    for (int el : arr[node]) {
        totalEl++;
    }

    cout << totalEl;

    return 0;
}