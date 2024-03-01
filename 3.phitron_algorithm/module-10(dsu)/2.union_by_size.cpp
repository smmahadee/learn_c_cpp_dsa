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

    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void union_by_size(int node1, int node2) {
    int leaderA = find(node1);
    int leaderB = find(node2);

    if (group_size[leaderA] > group_size[leaderB]) {
        par[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    } else {
        par[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

int main() {
    dsu_initialize(8);
    union_by_size(1, 2);
    union_by_size(2, 3);
    union_by_size(3, 4);
    union_by_size(5, 6);
    union_by_size(6, 7);

    union_by_size(1, 6);

    // cout << group_size[4] << endl;

    cout << find(1) << endl;
    cout << find(7) << endl;
    cout << find(3) << endl;
    cout << find(4) << endl;
    cout << find(5) << endl;
    cout << find(6) << endl;

    return 0;
}