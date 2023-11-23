#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y;
    long long int sum = 0;

    cin >> x >> y;

    for (int i = 2; i <= y; i += 2) {
        sum += pow(x, i);
    }

    cout << sum << endl;

    return 0;
}