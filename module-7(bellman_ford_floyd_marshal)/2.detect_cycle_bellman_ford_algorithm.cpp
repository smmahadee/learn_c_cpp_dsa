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

const int N = 1e5 + 5;
int dis[N];

int main() {
    int n, e;
    cin >> n >> e;

    vector<Edge> edgeLists;

    while (e--) {
        int u, v, c;
        cin >> u >> v >> c;
        edgeLists.push_back(Edge(u, v, c));
    }

    for (int i = 0; i < n; i++) {
        dis[i] = INT_MAX;
    }

    dis[0] = 0;

    for (int i = 1; i <= n - 1; i++) {
        for (Edge ed : edgeLists) {
            int u = ed.u;
            int v = ed.v;
            int c = ed.c;

            // 1. check the distance of first edge smaller than int max
            // 2. check the distance of first edge + distance of two edges <
            // distance of second edge
            if (dis[u] < INT_MAX && dis[u] + c < dis[v]) {
                dis[v] = dis[u] + c;
            }
        }
    }

    // after looping n-1 times check if another time any edge can relaxe his path, then here cycle found
    bool cycle = false;
    for (Edge ed : edgeLists) {
        int u = ed.u;
        int v = ed.v;
        int c = ed.c;

        // 1. check the distance of first edge smaller than int max
        // 2. check the distance of first edge + distance of two edges <
        // distance of second edge
        if (dis[u] < INT_MAX && dis[u] + c < dis[v]) {
            cycle = true;
            break;
        }
    }

    if (cycle) {
        cout << "Cycle detected";
    } else {
        for (int i = 0; i < n; i++) {
            cout << i << " -> " << dis[i] << endl;
        }
    }

    return 0;
}

// 4 4
// 0 2 5
// 0 3 12
// 2 1 2
// 1 3 3

// 3 3
// 0 1 -1
// 1 2 2
// 2 0 -3