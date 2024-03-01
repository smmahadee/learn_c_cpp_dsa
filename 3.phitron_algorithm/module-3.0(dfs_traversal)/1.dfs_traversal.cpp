#include <iostream>

using namespace std;

const int N = 1e5 + 5;
vector<int> arr[N];
bool visits[N];

void dfs_traversal(int src) {
    cout << src << " ";
    visits[src] = true;

    for (int i = 0; i < arr[src].size(); i++) {
        int child = arr[src][i];
        if (!visits[child]) {
            dfs_traversal(child);
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;

        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    memset(visits, false, sizeof(visits));

    int src = 0;
    dfs_traversal(src);

    return 0;
}