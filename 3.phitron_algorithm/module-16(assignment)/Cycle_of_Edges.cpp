#include <iostream>

using namespace std;

const int N = 1e5 + 5;
int par[N];
int group_size[N];

void dsu_initialize(int n) {
    for (int i = 0; i < n; i++) {
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

int main() {
    int n, e;
    cin >> n >> e;

    dsu_initialize(n);

    int totalCycle = 0;

    while (e--) {
        int a, b;
        cin >> a >> b;

        int leaderA = find(a);
        int leaderB = find(b);

        if (leaderA == leaderB) {
            totalCycle++;
        } else {
            union_by_size(a, b);
        }
    }

    cout << totalCycle;

    return 0;
}