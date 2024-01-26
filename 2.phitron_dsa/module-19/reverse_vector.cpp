#include <iostream>

using namespace std;

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);

    reverse(v.begin(), v.end());
    for (int val : v) {
        cout << val << " ";
    }

    return 0;
}