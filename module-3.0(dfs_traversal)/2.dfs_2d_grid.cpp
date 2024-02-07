#include <iostream>
#include <vector>

using namespace std;

bool visits[20][20];
char arr[20][20];
int n, m;

vector<pair<int, int> > elements;

void initializeElements() {
    elements.push_back(make_pair(0, 1));
    elements.push_back(make_pair(0, -1));
    elements.push_back(make_pair(-1, 0));
    elements.push_back(make_pair(1, 0));
}

bool isValidRowColumn(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m) return false;
    return true;
}

void dfs_traversal(int srcI, int srcJ) {
    cout << srcI << " " << srcJ << endl;
    visits[srcI][srcJ] = true;

    for (int i = 0; i < 4; i++) {
        int childI = srcI + elements[i].first;
        int childJ = srcJ + elements[i].second;

        if (isValidRowColumn(childI, childJ) &&
            visits[childI][childJ] == false) {
            dfs_traversal(childI, childJ);
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char ch;
            cin >> ch;

            arr[i][j] = ch;
        }
    }

    memset(visits, false, sizeof(visits));
    initializeElements();

    int srcI = 1;
    int srcJ = 1;

    dfs_traversal(srcI, srcJ);

    return 0;
}