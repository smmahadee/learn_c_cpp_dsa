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

int main() {
    int n, e;
    cin >> n >> e;

    vector<Edge> edgeLists;

    while (e--) {
        int u, v, c;
        cin >> u >> v >> c;
        edgeLists.push_back(Edge(u, v, c));
    }

    int dis[1005];

    for (int i = 0; i < 1005; i++) {
        dis[i] = INT_MAX;
    }

    dis[0] = 0;

    for (int i = 1; i <= n - 1; i++) {
        for (Edge ed : edgeLists) {
            int u = ed.u;
            int v = ed.v;
            int c = ed.c;

            // 1. check the distance of first edge smaller than int max 
            // 2. check the distance of first edge + distance of two edges < distance of second edge 
            if (dis[u] < INT_MAX &&
                dis[u] + c < dis[v]) {
                dis[v] = dis[u] + c;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << i << " -> " << dis[i] << endl;
    }

    return 0;
}

// 4 4
// 0 2 5
// 0 3 12
// 2 1 2
// 1 3 3