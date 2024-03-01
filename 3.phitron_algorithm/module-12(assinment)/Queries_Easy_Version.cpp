#include <iostream>
#include <queue>

using namespace std;

class cmp {
   public:
    bool operator()(int a, int b) { return a > b; }
};

int main() {
    int query;
    cin >> query;

    priority_queue<int, vector<int>, cmp> evenQ;
    priority_queue<int, vector<int>, cmp> oddQ;

    while (query--) {
        int inputType;
        cin >> inputType;

        if (inputType == 1) {
            int value;
            cin >> value;

            if (value % 2 == 0) {
                evenQ.push(value);
            } else {
                oddQ.push(value);
            }
        } else if (inputType == 2) {
            if (evenQ.empty()) {
                cout << "empty" << endl;
            } else {
                cout << evenQ.top() << endl;
                evenQ.pop();
            }

        } else {
            if (oddQ.empty()) {
                cout << "empty" << endl;
            } else {
                cout << oddQ.top() << endl;
                oddQ.pop();
            }
        }
    }

    return 0;
}