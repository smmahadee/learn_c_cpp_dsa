#include <iostream>
#include <queue>

using namespace std;

vector<int> v[1000];
bool vis[1000];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty()) {
        int parent = q.front();
        q.pop();

        for (int i = 0; i < v[parent].size(); i++) {
            int child = v[parent][i];
            if (!vis[child]) {
                q.push(v[parent][i]);
                vis[child] = true;
                cout << v[parent][i] << " ";
            }
        }

        cout << endl;
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

    int src;
    cin >> src;
    bfs(src);

    return 0;
}

// 5 4
// 0 1
// 0 2
// 2 3
// 1 4
// 0