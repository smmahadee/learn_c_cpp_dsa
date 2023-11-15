#include <iostream>

using namespace std;

int main() {
    int *a = new int;
    *a = 10;

    int **b = &a;

    cout << *a << endl;

    return 0;
}