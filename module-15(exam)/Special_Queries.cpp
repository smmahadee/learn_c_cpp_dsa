#include <iostream>
#include <queue>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    queue<string> q;

    while (testCase--) {

        int input;
        cin >> input;
        cin.ignore();
        if (input == 0) {
            string name;
            cin >> name;
            q.push(name);
        } else {
            if (!q.empty()) {
                cout << q.front() << endl;
                q.pop();
            } else {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}