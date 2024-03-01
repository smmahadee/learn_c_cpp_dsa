#include <iostream>
#include <queue>

using namespace std;

vector<int> v[20];
bool vis[20];
int level[20];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty()) {
        int par = q.front();
        q.pop();

        for (int el : v[par]) {
            if (!vis[el]) {
                q.push(el);
                vis[el] = true;
                level[el] = level[par] + 1;
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

    int src;
    cin >> src;

    bfs(src);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        int des;
        cin >> des;

        cout << level[des] << endl;
    }

    return 0;
}