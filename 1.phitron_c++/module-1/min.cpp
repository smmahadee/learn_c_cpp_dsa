
#include <algorithm>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int mn = min(min(min(a, b), c), d);

    cout << mn << endl;

    return 0;
}