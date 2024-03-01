#include <iostream>

using namespace std;

const int N = 100;
int par[N];
int level[N];

void dsu_initialize(int n) {
    for (int i = 0; i < n; i++) {
        par[i] = -1;
        level[i] = 0;
    }
}

int find(int node) {
    if (par[node] == -1) return node;

    int result = find(par[node]);
    par[node] = result;
    return result;
}

void union_by_level(int node1, int node2) {
    int leader1 = find(node1);
    int leader2 = find(node2);

    if(level[leader1] > level[leader2]){
        par[leader2] = leader1;
    }else if(level[leader2] > level[leader1]) {
        par[leader1] = leader2;
    }else {
        par[leader1] = leader2;
        level[leader2]++;
    }
}


int main() {
    dsu_initialize(5);
    union_by_level(1, 3);
    union_by_level(1, 2);
    union_by_level(2, 4);

    cout<<find(4);
    
     return 0;
 }