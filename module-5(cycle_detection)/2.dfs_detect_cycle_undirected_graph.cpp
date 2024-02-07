#include <iostream>
#include <queue>

using namespace std;

vector<int> graph[20];
bool visits[20];
int parentArr[20];
bool ans;

void dfs_cycle_detection(int src) {
    visits[src] = true;

    for (int i = 0; i < graph[src].size(); i++) {
        int child = graph[src][i];

        if (visits[child] && parentArr[src] != child) {
            ans = true;
        }

        if (!visits[child]) {
            parentArr[child] = src;
            dfs_cycle_detection(child);
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    while (e--) {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    memset(visits, false, sizeof(visits));
    memset(parentArr, -1, sizeof(parentArr));
    ans = false;

    for (int i = 0; i < n; i++) {
        if (!visits[i]) {
            dfs_cycle_detection(i);
        }
    }

    if (ans) {
        cout << "Cycle found";
    } else {
        cout << "Cycle not found";
    }

    return 0;
}