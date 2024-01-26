#include <iostream>
#include <queue>

using namespace std;

int main() {
    // max heap 
    // priority_queue<int> pq;

    // min heap 
    priority_queue<int, vector<int>, greater<int> > pq;

    pq.push(10);
    pq.push(5);
    pq.push(20);
    pq.push(30);
    pq.pop();
    cout<<pq.top();

    return 0;
}