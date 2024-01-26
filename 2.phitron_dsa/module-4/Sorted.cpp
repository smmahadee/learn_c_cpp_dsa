#include <iostream>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        int size;
        cin >> size;

        vector<int> v(size);
        for (int i = 0; i < v.size(); i++) {
            cin >> v[i];
        }

        int flag = 0;
        for (int i = 0; i < v.size() - 1; i++) {
            if (v[i] > v[i + 1]) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}