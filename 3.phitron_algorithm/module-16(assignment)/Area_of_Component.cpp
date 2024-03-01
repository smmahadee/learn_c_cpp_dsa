#include <iostream>
#include <queue>

using namespace std;

const int N = 1e3 + 5;
char grid[N][N];
bool vis[N][N];
int n, m;
long long int totalArea;

vector<pair<int, int> > elements = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

bool isValidRowColumn(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

void dfs(int srcI, int srcJ) {
    vis[srcI][srcJ] = true;
    totalArea++;

    for (pair<int, int> el : elements) {
        int childI = srcI + el.first;
        int childJ = srcJ + el.second;

        if (isValidRowColumn(childI, childJ) && !vis[childI][childJ] &&
            grid[childI][childJ] == '.') {
            dfs(childI, childJ);
        }
    }
}

int main() {
    cin >> n >> m;

    cin.ignore();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char input;
            cin >> input;
            grid[i][j] = input;
        }
    }

    memset(vis, false, sizeof(vis));

    long long int minArea = LLONG_MAX;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j] && grid[i][j] == '.') {
                totalArea = 0;
                dfs(i, j);

                minArea = min(minArea, totalArea);
            }
        }
    }

    if (minArea == LLONG_MAX) {
        cout << -1;
    } else {
        cout << minArea;
    }

    return 0;
}