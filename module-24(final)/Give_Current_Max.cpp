#include <iostream>
#include <queue>

using namespace std;

class Students {
   public:
    string name;
    int roll;
    int marks;

    Students(string name, int roll, int marks) {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp {
   public:
    bool operator()(Students s1, Students s2) {
        if (s1.marks < s2.marks)
            return true;
        else if (s1.marks > s2.marks)
            return false;
        else {
            if (s1.roll > s2.roll)
                return true;
            else
                return false;
        }
    }
};

int main() {
    priority_queue<Students, vector<Students>, cmp> pq;

    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;

        Students obj(name, roll, marks);
        pq.push(obj);
    }

    int commandCount;
    cin >> commandCount;

    while (commandCount--) {
        int command;
        cin >> command;

        if (command == 0) {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;

            Students obj(name, roll, marks);
            pq.push(obj);

            Students top = pq.top();
            cout << top.name<<" "<<top.roll<<" "<<top.marks << endl;

        } else if (command == 1) {
            if (pq.size() == 0) {
                cout << "Empty" << endl;
            } else {
               Students top = pq.top();
            cout << top.name<<" "<<top.roll<<" "<<top.marks << endl;
            }
        } else {
            if (pq.size() == 0) {
                cout << "Empty" << endl;
            } else {
                pq.pop();
                if (pq.size() == 0) {
                    cout << "Empty" << endl;
                } else {
                    Students top = pq.top();
            cout << top.name<<" "<<top.roll<<" "<<top.marks << endl;
                }
            }
        }
    }

    return 0;
}