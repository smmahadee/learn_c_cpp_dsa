#include <iostream>

using namespace std;

const int N = 100;
int par[N];

void dsu_initialize(int n){
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
    }

    par[3] = 1;
}

int find(int node) {
    if(par[node] == -1) return node;

    int result = find(par[node]);
    par[node] = result;

    return result;
}

int main() {
    dsu_initialize(4);

    cout<< find(3);
    return 0;
}