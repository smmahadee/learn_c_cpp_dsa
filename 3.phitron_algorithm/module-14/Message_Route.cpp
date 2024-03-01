#include <iostream>
#include <queue>
#include <vector>
#include <cstring>

using namespace std;

const int N = 1e5 + 5;
bool vis[N];
vector<int> v[N];
int par[N];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty()) {
        int p = q.front();
        q.pop();

        for (int el : v[p]) {
            if (!vis[el]) {
                q.push(el);
                vis[el] = true;
                par[el] = p;
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

    bfs(1);

    vector<int> result;

    int x = n;
    while (x != -1) {
        result.push_back(x);
        x = par[x];
    }

    if (result.back() != 1) {
        cout << "IMPOSSIBLE";
    } else {
        reverse(result.begin(), result.end());
        cout<<result.size()<<endl;
        for (int el : result) cout << el << " ";
    }

    return 0;
}