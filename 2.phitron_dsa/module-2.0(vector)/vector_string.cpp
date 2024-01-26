#include <iostream>

using namespace std;

int main() {
    // without space
    // int size;
    // cin >> size;

    // vector<string> v(size);
    // for (int i = 0; i < v.size(); i++) {
    //     cin >> v[i];
    // }

    // with space
    int size;
    cin >> size;
    cin.ignore();
    vector<string> v(size);
    for (int i = 0; i < v.size(); i++) {
        getline(cin, v[i]);
    }

    for (string val : v) {
        cout << val << endl;
    }

    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << endl;
    // }

    return 0;
}