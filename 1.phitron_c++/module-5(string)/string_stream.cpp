#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string str = "Mehedi Hasan Shohag";
    // stringstream ss(str);

    stringstream ss;

    ss<<str;

    string word;

    while(ss>>word) {
        cout<< word<<endl;

        
    }

    return 0;
}