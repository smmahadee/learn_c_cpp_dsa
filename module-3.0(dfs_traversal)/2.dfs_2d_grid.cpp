#include <iostream>

using namespace std;

const int N = 20;
const int M = 20;

bool visits[N][M];

vector<pair<int, int> > elements = {make_pair(0, 1), make_pair(0, -1),
                                    make_pair(-1, 0), make_pair(1, 0)};

bool isValidRowColumn(int i, int j) {
    if (i < 0 || i >= N || j < 0 || j >= M) return false;
    return true;
}

void dfs_traversal(int srcI, int srcJ) {
    cout << srcI << " " << srcJ << endl;
    visits[srcI][srcJ] = true;

    for (int i = 0; i < 4; i++) {
        int childI = srcI + elements[i].first;
        int childJ = srcJ + elements[i].second;

        if(isValidRowColumn(childI, childJ) && visits[childI][childJ] == false) {
            
        }

    }
}

int main() {
    int n, m;
    cin >> n >> m;

    char arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char ch;
            cin >> ch;

            arr[i][j] = ch;
        }
    }

    memset(visits, false, sizeof(visits));

    int srcI = 1;
    int srcJ = 1;

    dfs_traversal(srcI, srcJ);

    return 0;
}