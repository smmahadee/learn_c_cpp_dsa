#include <iostream>
#include <queue>

using namespace std;

class cmp {
    public:
    bool operator()(pair<string, int> p1, pair<string, int> p2) {
        if(p1.first.compare(p2.first) < 0) return false;
        else if(p1.first.compare(p2.first) > 0) return true;
        else {
            if(p1.second > p2.second) return false;
            else return true;
        }
    }
};

int main() {
    priority_queue<pair<string, int>, vector<pair<string, int> >, cmp> pq;

    int size;
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        string str;
        int num;
        cin>>str>>num;
        pq.push(make_pair(str, num));
    }

    while (!pq.empty())
    {
        cout<<pq.top().first<<" "<<pq.top().second<<endl;
        pq.pop();
    }
    
    


    return 0;
}