#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;

    int size = 26;
    vector<int> A(size);
    for (int i = 0; i < size; i++) {
        A[i] = 0;
    }

    for (int i = 0; i < s.size(); i++) {
        int index = s[i] - 97;
        A[index]++;
    }

    for (int i = 0; i < size; i++) {
        if (A[i] > 0) {
            char a = i + 97;
            cout << a << " "
                 << ":"
                 << " " << A[i] << endl;
        }
    }

    return 0;
}