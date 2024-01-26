#include <iostream>

using namespace std;

void fun(int* &p) {
    p = NULL;
    
}

int main() {
    int a = 10;

    int* p = &a;

    fun(p);

    cout << a << endl;
    cout << *p << endl;

    return 0;
}