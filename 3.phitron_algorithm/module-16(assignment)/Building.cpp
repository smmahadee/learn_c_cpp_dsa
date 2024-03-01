#include <iostream>

using namespace std;

class Edge {
   public:
    int u, v;
    long long int c;

    Edge(int u, int v, long long int c) {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const int N = 1e5 + 5;
int par[N];
int group_size[N];

void dsu_initialize(int n) {
    for (int i = 1; i <= n; i++) {
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
        int a, b;
        long long int c;

        cin >> a >> b >> c;

        edgelists.push_back(Edge(a, b, c));
    }

    sort(edgelists.begin(), edgelists.end(), cmp);

    long long int totalCost = 0;
    for (Edge el : edgelists) {
        int leaderA = find(el.u);
        int leaderB = find(el.v);

        if (leaderA != leaderB) {
            union_by_size(el.u, el.v);
            totalCost += el.c;
        }
    }

    vector<int> leader;
    for(int i = 1; i <= n ; i++) {
        leader.push_back(find(i));
    }
    sort(leader.begin(), leader.end());
    leader.erase(unique(leader.begin(), leader.end()), leader.end());
    

    if(leader.size() > 1) {
        cout<< -1;
    }else {
        cout<<totalCost;
    }

    return 0;
}