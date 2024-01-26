#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    cin.ignore();

    while (testCases--) {
        string str;
        getline(cin, str);

        stringstream ss(str);
        string word;

        map<string, int> mp;

        int maxCount = INT_MIN;
        string maxWord;

        while (ss >> word) {
            mp[word]++;

            if(mp[word] > maxCount) {
                maxCount = mp[word];
                maxWord = word;
            }
        }

        cout << maxWord << " " << maxCount << endl;
    }

    return 0;
}