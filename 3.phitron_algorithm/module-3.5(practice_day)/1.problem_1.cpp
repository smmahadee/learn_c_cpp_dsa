// Question: You will be given an undirected graph as input. Then you will be
// given a node N. You need to tell the number of nodes that can be visited from
// node N.

#include <iostream>
#include <queue>

using namespace std;

bool visits[20];
vector<int> edges[20];

int bfs_traversal_node_count(int src) {
    queue<int> q;
    q.push(src);
    visits[src] = true;
    int totalCount = 0;

    while (!q.empty()) {
        int parent = q.front();
        q.pop();
        totalCount++;

        for (int i = 0; i < edges[parent].size(); i++) {
            int child = edges[parent][i];

            if (!visits[child]) {
                q.push(child);
                visits[child] = true;
            }
        }
    }

    return totalCount;
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
    int e;
    cin >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;

        edges[a].push_back(b);
        edges[b].push_back(a);
    }

    memset(visits, false, sizeof(visits));

    int src;
    cin >> src;

    int result = dfs_node_count(src);
    cout << result;

    return 0;
}