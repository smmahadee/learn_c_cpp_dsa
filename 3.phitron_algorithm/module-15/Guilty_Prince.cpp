#include <iostream>

using namespace std;

int n, m;
int grid[25][25];
bool vis[25][25];
int total;

vector<pair<int, int> > elements;

void initializeElements() {
    elements.push_back(make_pair(0, 1));
    elements.push_back(make_pair(0, -1));
    elements.push_back(make_pair(-1, 0));
    elements.push_back(make_pair(1, 0));
}

bool isValid(int i, int j) { return i >= 0 && i < m && j >= 0 && j < n; }

void dfs(int si, int sj) {
    vis[si][sj] = true;
    total++;

    for (pair<int, int> el : elements) {
        int ci = si + el.first;
        int cj = sj + el.second;

        if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#') {
            dfs(ci, cj);
        }
    }
}

int main() {
    int testCase;
    cin >> testCase;

    initializeElements();

    for (int t = 1; t <= testCase; t++) {
        total = 0;
        memset(vis, false, sizeof(vis));

        cin >> n >> m;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                char input;
                cin >> input;

                grid[i][j] = input;
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '@') {
                    dfs(i, j);
                    break;
                }
            }
        }

        cout << "Case "<< t<<": "<< total<<endl;
    }

    return 0;
}