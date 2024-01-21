#include <iostream>
#include <queue>

using namespace std;

class cmp {
   public:
    bool operator()(int num1, int num2) {
        if (num1 > num2)
            return true;
        else
            return false;
    }
};


int main() {
    int size;
    cin >> size;

    priority_queue<int, vector<int>, cmp> pq;
    for (int i = 0; i < size; i++) {
        int val;
        cin >> val;
        pq.push(val);
    }

    int commandCount;
    cin >> commandCount;

    while (commandCount--) {
        int command;
        cin >> command;

        if (command == 0) {
            int val;
            cin >> val;
            pq.push(val);
            cout << pq.top() << endl;

        } else if (command == 1) {
            if (pq.size() == 0) {
                cout << "Empty" << endl;
            } else {
                cout << pq.top() << endl;
            }
        } else {
            if (pq.size() == 0) {
                cout << "Empty" << endl;
            } else {
                pq.pop();
                if (pq.size() == 0) {
                    cout << "Empty" << endl;
                } else {
                    cout << pq.top() << endl;
                }
            }
        }
    }

    return 0;
}