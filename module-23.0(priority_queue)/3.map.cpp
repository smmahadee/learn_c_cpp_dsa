#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> mp;

    // mp.insert({"akib", 100});
    mp["Sakib"] = 20;
    mp["akib"] = 40;

    // map uses pointer for loop   
    

    for ( map<string, int> ::iterator it = mp.begin();  it != mp.end(); it++)
    {
        cout<<it->first<<" ";
    }
    

    cout<<mp["Sakib"];

    return 0;
}