#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;

    map<string, int> mp;
    while(ss >> word) {
        mp[word]++;
    }

    for(map<string, int> :: iterator it = mp.begin(); it != mp.end(); it++) {
        cout<<it->first <<" "<< it->second<<endl;
    }

    return 0;
}