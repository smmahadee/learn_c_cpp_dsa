#include <iostream>
#include <map>

#define pi pair<int, int>

using namespace std;

int main() {
    map<pi, pi> mp;

    mp[make_pair(0, 1)] = make_pair(2, 3);

    cout<<mp[make_pair(0, 1)].first;

    return 0;
}