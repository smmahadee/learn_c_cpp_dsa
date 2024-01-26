#include <iostream>
#include <queue>

using namespace std;

vector<int> v[1000];
bool vis[1000];

void bfs(int src, int des) {
    queue<pair<int, int> > q;
    q.push(make_pair(src, 0));
    vis[src] = true;

    while (!q.empty()) {
        pair<int, int> p = q.front();
        int parent = p.first;
        int parentLevel = p.second;

        q.pop();

        if (parent == des) {
            cout << parentLevel;
        }

        for (int i = 0; i < v[parent].size(); i++) {
            int child = v[parent][i];
            if (!vis[child]) {
                q.push(make_pair(child, parentLevel + 1));
                vis[child] = true;
            }
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

    int src, des;
    cin >> src >> des;
    bfs(src, des);

    return 0;
}

// 6 6
// 0 1
// 0 2
// 2 3
// 1 4
// 4 5
// 0 4
// 0