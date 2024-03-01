#include <iostream>
#include <queue>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1e5 + 5;
vector<pair<int, int> > v[N];
int dis[N];
int par[N];

class cmp {
   public:
    bool operator()(pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    }
};

void dijkstra(int src) {
    priority_queue<pair<int, int>, vector<pair<int, int> >, cmp> q;
    q.push(make_pair(src, 0));
    dis[src] = 0;

    while (!q.empty()) {
        pair<int, int> p = q.top();
        q.pop();
        int parent = p.first;
        int parentCost = p.second;

        for (pair<int, int> el : v[parent]) {
            int child = el.first;
            int childCost = el.second;

            if (parentCost < INT_MAX && childCost < INT_MAX &&
                parentCost + childCost < dis[child]) {
                dis[child] = parentCost + childCost;
                q.push(make_pair(child, parentCost + childCost));
                par[child] = parent;
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int a, b, c;
        cin >> a >> b >> c;

        v[a].push_back(make_pair(b, c));
        v[b].push_back(make_pair(a, c));
    }

    memset(par, -1, sizeof(par));

    for (int i = 0; i < N; i++) {
        dis[i] = INT_MAX;
    }

    dijkstra(1);

    int x = n;
    vector<int> result;

    while (x != -1) {
        result.push_back(x);
        x = par[x];
    }

    reverse(result.begin(), result.end());
    for (int el : result) {
        cout << el << " ";
    }

    return 0;
}