#include <iostream>

using namespace std;

bool vis[20];
vector<int> v[20];

void dfs(int src) {
    vis[src] = true;

    for (int el : v[src]) {
        if (!vis[el]) {
            dfs(el);
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    int total = 0;

    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs(i);
            total++;
        }
    }

    cout << total;

    return 0;
}