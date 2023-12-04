#include <iostream>
#include <string>

using namespace std;

int main() {
    int testCase;
    cin>>testCase;

    while (testCase--)
    {
        string num;
        cin>>num;

        int firstPart = (stoi)(num.substr(0, 3));
        int lastPart = stoi(num.substr(3, 6));

        cout<<firstPart<<" "<<lastPart<<endl;

    }
    

    return 0;
}