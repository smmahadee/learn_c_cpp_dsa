#include <iostream>
#include <set>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        set<int> s;
        int size;
        cin >> size;

        for (int i = 0; i < size; i++) {
            int val;
            cin >> val;
            s.insert(val);
        }

        for(set<int>::iterator it = s.begin(); it != s.end(); it++) {
            cout<<*it<<" ";
        }

        cout<<endl;
    }

    return 0;
}