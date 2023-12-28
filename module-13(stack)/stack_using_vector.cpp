#include <iostream>

using namespace std;

class MyStack {
    private:
    vector<int> v;

    public: 
    void push(int val) {
        v.push_back(val);
    }

    void pop() {
        v.pop_back();
    }

    int top() {
        return v.back();
    }

    int size() {
        return v.size();
    }

    bool isEmpty() {
        if(v.size() == 0) {
            return true;
        }else {
            return false;
        }
    }
};

int main() {
    MyStack s;
    
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        s.push(val);
    }

    while(s.isEmpty() == false)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
    

    return 0;
}