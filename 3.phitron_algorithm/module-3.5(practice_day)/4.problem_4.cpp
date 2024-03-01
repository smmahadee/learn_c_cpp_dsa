#include <iostream>

using namespace std;

bool vis[20];
vector<int> v[20];
int total;

void dfs(int src) {
    vis[src] = true;
    total++;

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
    total = 0;

    int src;
    cin >> src;

    dfs(src);

    cout << total << endl;

    return 0;
}