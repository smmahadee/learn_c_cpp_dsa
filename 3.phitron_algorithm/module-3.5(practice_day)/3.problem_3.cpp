// Question : You will be given an undirected graph as input .You need to tell
// the number of nodes in each component in  ascending order.

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
    int n, e;
    cin >> n >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;

        edges[a].push_back(b);
        edges[b].push_back(a);
    }

    memset(visits, false, sizeof(visits));

    vector<int> nodeCount;

    for (int i = 0; i < n; i++) {
        if (!visits[i]) {
            nodeCount.push_back(bfs_traversal_node_count(i));
        }
    }

    sort(nodeCount.begin(), nodeCount.end());
    for (int el : nodeCount) {
        cout << el << " ";
    }

    return 0;
}