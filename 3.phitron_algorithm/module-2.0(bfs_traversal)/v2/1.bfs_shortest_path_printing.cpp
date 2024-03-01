#include <iostream>
#include <queue>

using namespace std;

vector<int> v[20];
bool vis[20];
int par[20];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty()) {
        int parent = q.front();
        q.pop();

        for (int el : v[parent]) {
            if (!vis[el]) {
                q.push(el);
                vis[el] = true;
                par[el] = parent;
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
    memset(par, -1, sizeof(par));

    int src;
    cin >> src;

    bfs(src);

    int testcase;
    cin >> testcase;

    while (testcase--) {
        int des;
        cin >> des;

        while (des != -1) {
            cout << des << " ";
            des = par[des];
        }
    }

    return 0;
}