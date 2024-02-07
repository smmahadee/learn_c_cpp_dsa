#include <climits>
#include <iostream>
#include <vector>

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

    int src;
    cin >> src;

    for (int i = 0; i < n; i++) {
        dis[i] = LLONG_MAX;
    }

    dis[src] = 0;

    for (int i = 1; i <= n - 1; i++) {
        for (Edge ed : edgeLists) {
            int u = ed.u;
            int v = ed.v;
            int c = ed.c;

            if (dis[u] != LLONG_MAX && dis[u] + c < dis[v]) {
                dis[v] = dis[u] + c;
            }
        }
    }

    bool cycle = false;
    for (Edge ed : edgeLists) {
        int u = ed.u;
        int v = ed.v;
        int c = ed.c;

        if (dis[u] != LLONG_MAX && dis[u] + c < dis[v]) {
            cycle = true;
            break;
        }
    }

    if (cycle) {
        cout << "Negative Cycle Detected";
    } else {
        int testCase;
        cin >> testCase;

        while (testCase--) {
            long long d;
            cin >> d;

            if (dis[d] != LLONG_MAX) {
                cout << dis[d] << endl;
            } else {
                cout << "Not Possible" << endl;
            }
        }
    }

    return 0;
}
