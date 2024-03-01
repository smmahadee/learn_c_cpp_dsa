#include <iostream>
#include <queue>

using namespace std;

char arr[105][105];
bool visits[105][105];
int distanceArr[105][105];
int n, m;

vector<pair<int, int> > elements;

void initializeElements() {
    elements.push_back(make_pair(1, 2));
    elements.push_back(make_pair(2, 1));
    elements.push_back(make_pair(-2, 1));
    elements.push_back(make_pair(-1, 2));
    elements.push_back(make_pair(1, -2));
    elements.push_back(make_pair(2, -1));
    elements.push_back(make_pair(-1, -2));
    elements.push_back(make_pair(-2, -1));
}

bool isValid(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m) return false;
    return true;
}

int bfs_traversal(int srcI, int srcJ, int desI, int desJ) {
    queue<pair<int, int> > q;
    q.push(make_pair(srcI, srcJ));
    visits[srcI][srcJ] = true;
    distanceArr[srcI][srcJ] = 0;

    while (!q.empty()) {
        pair<int, int> p = q.front();
        int a = p.first;
        int b = p.second;
        q.pop();

        if (a == desI && b == desJ) {
            return distanceArr[a][b];
        }

        for (int i = 0; i < 8; i++) {
            int childI = a + elements[i].first;
            int childJ = b + elements[i].second;

            if (isValid(childI, childJ) && visits[childI][childJ] == false) {
                q.push(make_pair(childI, childJ));
                visits[childI][childJ] = true;
                distanceArr[childI][childJ] = distanceArr[a][b] + 1;
            }
        }
    }

    return -1;
}

int main() {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                arr[i][j] = '-';
            }
        }

        memset(visits, false, sizeof(visits));
        memset(distanceArr, -1, sizeof(distanceArr));
        initializeElements();

        int srcI, srcJ, desI, desJ;
        cin >> srcI >> srcJ >> desI >> desJ;
        int result = bfs_traversal(srcI, srcJ, desI, desJ);

        cout << result << endl;
    }

    return 0;
}
