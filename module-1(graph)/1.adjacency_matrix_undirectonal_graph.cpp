#include <iostream>

using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    int mat[n][n];
    while (e--) {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
        mat[b][a] = 1;
    }

    

    return 0;
}