
#include <iostream>
#include <queue>

using namespace std;

const int N = 10;
vector<int> v[N];
bool vis[N];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty()) {
        int par = q.front();
        q.pop();

        cout << par << " ";

        for (int child : v[par]) {
            if (!vis[child]) {
                q.push(child);
                vis[child] = true;
            }
        }
    }
}

void dfs(int src) {
    vis[src] = true;

    cout << src << " ";

    for (int child : v[src]) {
        if (!vis[child]) {
            dfs(child);
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

    // bfs(1);
    dfs(1);

    return 0;
}

// 7 8
// 1 2
// 1 3
// 1 7
// 2 4
// 4 6
// 3 4
// 3 5
// 5 6