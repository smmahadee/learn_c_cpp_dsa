#include <iostream>

using namespace std;

vector<int> v[20];
bool vis[20];
bool pathVis[20];
bool flag;

void dfs(int src) {
    vis[src] = true;
    pathVis[src] = true;

    for (int el : v[src]) {
        if (vis[el] && pathVis[el]) {
            flag = true;
        }

        if (!vis[el]) {
            dfs(el);
        }
    }

    pathVis[src] = false;
}

int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
    }

    memset(vis, false, sizeof(vis));
    memset(pathVis, false, sizeof(pathVis));
    flag = false;

    int src;
    cin >> src;

    dfs(src);

    if (flag) {
        cout << "cycle";
    } else {
        cout << "not cycle";
    }

    return 0;
}