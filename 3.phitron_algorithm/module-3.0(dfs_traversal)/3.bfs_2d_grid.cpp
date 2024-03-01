#include <iostream>
#include <queue>

using namespace std;

char arr[20][20];
bool visits[20][20];
int distanceArr[20][20];
int n, m;

vector<pair<int, int> > elements;

void initializeElements() {
    elements.push_back(make_pair(0, 1));
    elements.push_back(make_pair(0, -1));
    elements.push_back(make_pair(-1, 0));
    elements.push_back(make_pair(1, 0));
}

bool isValid(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m) return false;
    return true;
}

void bfs_traversal(int srcI, int srcJ) {
    queue<pair<int, int> > q;
    q.push(make_pair(srcI, srcJ));
    visits[srcI][srcJ] = true;
    distanceArr[srcI][srcJ] = 0;

    while (!q.empty()) {
        pair<int, int> p = q.front();
        int a = p.first;
        int b = p.second;
        q.pop();

        cout << a << " " << b << endl;

        for (int i = 0; i < 4; i++) {
            int childI = a + elements[i].first;
            int childJ = b + elements[i].second;

            if (isValid(childI, childJ) && visits[childI][childJ] == false) {
                q.push(make_pair(childI, childJ));
                visits[childI][childJ] = true;
                distanceArr[childI][childJ] = distanceArr[a][b] + 1;
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
            arr[n][m] = ch;
        }
    }

    memset(visits, false, sizeof(visits));
    memset(distanceArr, -1, sizeof(distanceArr));
    initializeElements();

    int srcI, srcJ;
    cin >> srcI >> srcJ;

    bfs_traversal(srcI, srcJ);

    cout << distanceArr[0][2];

    return 0;
}
