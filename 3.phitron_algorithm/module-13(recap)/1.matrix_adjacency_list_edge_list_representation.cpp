#include <iostream>

using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    // edge list for storing given edges
    vector<pair<int, int> > edgeList;

    for (int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;

        edgeList.push_back(make_pair(a, b));
    }

    for (int i = 0; i < e; i++) {
        cout << edgeList[i].first << " " << edgeList[i].second << endl;
    }

    // Graph representaion by adjacency list
    // usefull for getting how many nodes connected with a specific node
    // vector<int> graph[n];

    // for (int i = 0; i < e; i++) {
    //     int a, b;
    //     cin >> a >> b;

    //     graph[a].push_back(b);
    //     graph[b].push_back(a);
    // }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < graph[i].size(); j++) {
    //         cout << i << "->" << graph[i][j] << endl;
    //     }
    // }

    // Graph representation by matrix
    // it is usefull for checking whether it is possible to go from one node
    // to another node.

    // int graph[n][n];
    // memset(graph, 0, sizeof(graph));

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         int a, b;
    //         cin >> a >> b;

    //         graph[a][b] = 1;
    //         graph[b][a] = 1;
    //     }
    // }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         if (graph[i][j] == 1) {
    //             cout << i << "->" << j << endl;
    //         }
    //     }
    // }

    return 0;
}