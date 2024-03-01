#include <iostream>
#include <queue>

using namespace std;

bool vis[20];
vector<int> v[20];
int par[20];
bool flag;

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty()) {
        int parent = q.front();
        q.pop();

        for (int el : v[parent]) {
            if (vis[el] && par[el] != parent) {
                flag = true;
            }

            if (!vis[el]) {
                q.push(el);
                vis[el] = true;
                par[el] = parent;
            }
        }
    }
}

void dfs(int src) {
    vis[src] = true;
    
    for(int el : v[src]) {
        
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

    bfs(0);

    if (flag) {
        cout << "cycle" << endl;
    } else {
        cout << "not cycle" << endl;
    }

    return 0;
}