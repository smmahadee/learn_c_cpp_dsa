// Question: You will be given an undirected graph as input. You need to tell
// the number of components in this graph.

#include <iostream>
#include <queue>

using namespace std;

const int MAXN = 20;

bool visits[MAXN];
vector<int> edges[MAXN];

void bfs_traversal(int src) {
    queue<int> q;
    q.push(src);
    visits[src] = true;

    while (!q.empty()) {
        int parent = q.front();
        q.pop();

        for (int i = 0; i < edges[parent].size(); i++) {
            int child = edges[parent][i];

            if (!visits[child]) {
                q.push(child);
                visits[child] = true;
            }
        }
    }
}

int dfs_node_count(int src) {
    visits[src] = true;
    int count = 1;

    for (int i = 0; i < edges[src].size(); i++) {
        int child = edges[src][i];
        if (!visits[child]) {
            count += dfs_node_count(child);
        }
    }

    return count;
}

int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;

        edges[a].push_back(b);
        edges[b].push_back(a);
    }

    memset(visits, false, sizeof(visits));

    int totalComponents = 0;
    for (int i = 0; i < n; i++) {
        if (!visits[i]) {
            totalComponents++;
            bfs_traversal(i);
        }
    }

    cout << totalComponents;

    return 0;
}