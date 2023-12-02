#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size;
    cin >> size;

    vector<int> v(size);
    for (int i = 0; i < size; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int flag = 0;
    for (int i = 0; i < size - 1; i++) {
        if (v[i] == v[i + 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        cout << "NO";
    } else {
        cout << "YES";
    }

    return 0;
}