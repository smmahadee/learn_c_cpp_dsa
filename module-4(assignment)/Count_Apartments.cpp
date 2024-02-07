#include <cstring>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

char arr[20][20];
bool visits[20][20];
int n, m;

vector<pair<int, int> > elements;

void initializeElements() {
    elements.push_back(make_pair(0, 1));
    elements.push_back(make_pair(0, -1));
    elements.push_back(make_pair(-1, 0));
    elements.push_back(make_pair(1, 0));
}

bool isValid(int i, int j) { return (i >= 0 && i < n && j >= 0 && j < m); }

void bfs_traversal(int srcI, int srcJ) {
    queue<pair<int, int> > q;
    q.push(make_pair(srcI, srcJ));
    visits[srcI][srcJ] = true;

    while (!q.empty()) {
        pair<int, int> p = q.front();
        int a = p.first;
        int b = p.second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int childI = a + elements[i].first;
            int childJ = b + elements[i].second;

            if (isValid(childI, childJ) && !visits[childI][childJ] &&
                arr[childI][childJ] != '#') {
                q.push(make_pair(childI, childJ));
                visits[childI][childJ] = true;
            }
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

    int total = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == '.' && visits[i][j] == false) {
                bfs_traversal(i, j);
                total++;
            }
        }
    }

    cout << total;

    return 0;
}
