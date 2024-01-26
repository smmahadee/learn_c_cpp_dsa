#include <iostream>
#include <queue>

using namespace std;

vector<int> v[1000];
bool vis[1000];
int level[1000];
int parentsArr[1000];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty()) {
        int parent = q.front();
        q.pop();

        for (int i = 0; i < v[parent].size(); i++) {
            int child = v[parent][i];
            if (!vis[child]) {
                q.push(v[parent][i]);
                vis[child] = true;
                level[child] = level[parent] + 1;
                parentsArr[child] = parent;
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
    memset(level, -1, sizeof(level));
    memset(parentsArr, -1, sizeof(parentsArr));

    int src, des;
    cin >> src >> des;
    bfs(src);

    vector<int> paths;
    while (des != -1) {
        paths.push_back(des);
        des = parentsArr[des];
    }

    reverse(paths.begin(), paths.end());
    for (int path : paths) {
        cout << path << " ";
    }

    // for (int i = 0; i < n; i++) {
    //     cout << i << " " << level[i] << endl;
    // }

    return 0;
}

// 6 7
// 0 1
// 1 2
// 1 3
// 2 4
// 2 5
// 4 5
// 3 4
// 0 5