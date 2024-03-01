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

int main() {
    int n, e;
    cin >> n >> e;

    vector<Edge> edgeLists;

    while (e--) {
        int u, v;
        long long int c;
        cin >> u >> v >> c;
        edgeLists.push_back(Edge(u, v, c));
    }

    long long int dis[1005];

    for (int i = 0; i < 1005; i++) {
        dis[i] = LLONG_MAX;
    }

    int src;
    cin >> src;
    dis[src] = 0;

    for (int i = 1; i <= n - 1; i++) {
        for (Edge ed : edgeLists) {
            int u = ed.u;
            int v = ed.v;
            long long int c = ed.c;

            // 1. check the distance of first edge smaller than int max
            // 2. check the distance of first edge + distance of two edges <
            // distance of second edge
            long long int sourcePlusCost = dis[u] + c;
            if (dis[u] < LLONG_MAX && sourcePlusCost < dis[v]) {
                dis[v] = sourcePlusCost;
            }
        }
    }

    bool cycle = false;
    for (Edge ed : edgeLists) {
        int u = ed.u;
        int v = ed.v;
        long long int c = ed.c;

        long long int sourcePlusCost = dis[u] + c;
        if (dis[u] < LLONG_MAX && sourcePlusCost < dis[v]) {
            cycle = true;
            break;
        }
    }

    if (cycle) {
        cout << "Negative Cycle Detected" << endl;
    } else {
        int testCase;
        cin >> testCase;

        while (testCase--) {
            int d;
            cin >> d;

            if (dis[d] == LLONG_MAX) {
                cout << "Not Possible" << endl;
            } else {
                cout << dis[d] << endl;
            }
        }
    }

    return 0;
}

// 4 4
// 0 2 5
// 0 3 12
// 2 1 2
// 1 3 3