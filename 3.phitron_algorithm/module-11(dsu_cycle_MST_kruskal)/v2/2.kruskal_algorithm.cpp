#include <iostream>

using namespace std;

class Edge {
   public:
    int u, v, c;
    Edge(int u, int v, int c) {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const int N = 100;
int par[N];
int group_size[N];

void dsu_initialize(int n) {
    for (int i = 0; i < n; i++) {
        par[i] = -1;
        group_size[i] = 1;
    }
}

int find(int node) {
    if (par[node] == -1) return node;

    int result = find(par[node]);
    par[node] = result;
    return result;
}

void union_by_size(int node1, int node2) {
    int leader1 = find(node1);
    int leader2 = find(node2);

    if (group_size[leader1] >= group_size[leader2]) {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    } else {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

bool cmp(Edge edge1, Edge edge2) { return edge1.c < edge2.c; }

int main() {
    int n, e;
    cin >> n >> e;

    dsu_initialize(n);
    vector<Edge> edgelists;

    while (e--) {
        int a, b, c;
        cin >> a >> b >> c;

        edgelists.push_back(Edge(a, b, c));
    }

    sort(edgelists.begin(), edgelists.end(), cmp);

    int totalCost = 0;
    for (Edge el : edgelists) {
        int leaderA = find(el.u);
        int leaderB = find(el.v);

        if (leaderA != leaderB) {
            union_by_size(el.u, el.v);
            totalCost += el.c;
        }
    }

    cout << totalCost;

    return 0;
}