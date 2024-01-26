#include <iostream>
#include <queue>

using namespace std;

class Student {
    public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks) {
        this->name  = name;
        this->roll = roll;
        this->marks= marks;
    }
};

// tamim 1 95
// sakib 2 95
// jahid 3 80

class cmp {
    public:
    bool operator()(Student s1, Student s2){
        if(s1.marks > s2.marks) return true;
        else if(s1.marks < s2.marks) return false;
        else {
            if(s1.roll > s2.roll) return true;
            else return false;
        }
    }
};

int main() {
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, cmp> pq;

    while(n--) {
        string name;
        int roll, marks;
        cin>>name>>roll>>marks;

        Student obj(name, roll, marks);
        pq.push(obj);
    }

    while(!pq.empty()) {
        cout<< pq.top().name<<" ";
        pq.pop();
    }
    return 0;
}