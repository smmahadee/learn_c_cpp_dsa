#include <iostream>

using namespace std;

const int N = 1e5 + 5;
int par[N];
int group_size[N];

void dsu_initialize(int n) {
    for (int i = 0; i < n; i++) {
        par[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node) {
    if (par[node] == -1) return node;

    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

void union_by_size(int node1, int node2) {
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if (group_size[leaderA] > group_size[leaderB]) {
        par[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    } else {
        par[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

class Edge {
   public:
    int u, v, w;
    Edge(int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool cmp(Edge a, Edge b) { return a.w < b.w; }

int main() {
    int n, e;
    cin >> n >> e;

    dsu_initialize(n);

    vector<Edge> edgeList;

    while (e--) {
        int u, v, w;
        cin >> u >> v >> w;

        edgeList.push_back(Edge(u, v, w));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);

    int totalCost = 0;

    for (Edge el : edgeList) {
        int leaderU = dsu_find(el.u);
        int leaderV = dsu_find(el.v);

        if (leaderU == leaderV) {
            continue;
        } else {
            union_by_size(el.u, el.v);
            totalCost += el.w;
        }
    }

    cout << totalCost << endl;

    return 0;
}

// 5 7
// 0 1 2
// 0 2 3
// 0 3 3
// 3 4 6
// 2 4 4
// 2 1 7
// 1 4 5