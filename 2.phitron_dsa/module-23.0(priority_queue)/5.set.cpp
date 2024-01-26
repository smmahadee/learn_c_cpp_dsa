#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s;
    int n;
    cin>>n;

    while(n--){
        int val;
        cin>>val;
        s.insert(val);
    }
    // s.count 
    for(set<int>::iterator it = s.begin(); it != s.end(); it++){
        cout<<*it<< " ";
    }
    return 0;
}