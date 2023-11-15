#include <iostream>

using namespace std;

int main() {
    int *a = new int;
    *a = 10;

    int **b = &a;

    **b = 100;

    cout << *a << endl;
    cout << **b << endl;

    return 0;
}