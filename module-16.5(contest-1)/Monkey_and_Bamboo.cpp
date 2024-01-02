#include <cmath>
#include <iostream>

using namespace std;

int main() {
    // int testCase;
    // cin >> testCase;

    // while (testCase--) {

    // }

    long long int h, a, b;
    // cin >> h >> a >> b;
    cin >>  a >> b;
    // if (h < a) {
    //     cout << 1 << endl;

    // } else
     if (a > b) {
        long double minute = (a - b) * 1.0;

        cout << minute << endl;
    } else {
        cout << "Impossible" << endl;
    }

    return 0;
}