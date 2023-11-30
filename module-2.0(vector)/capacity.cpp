#include <iostream>

using namespace std;

int main() {
    int arr[4] = {1, 2, 3, 4};
    vector<int> v(arr, arr + 4);

    // cout<<v.size()<<endl; // size of the vector
    // cout<<v.max_size()<<endl; // max size of the vector
    // cout<<v.capacity()<<endl; // capacity of the vector
    // v.push_back(15);
    // cout<<v.capacity()<<endl; 

    // v.clear(); // clear the vector size = 0;
    // cout<<v[2];

    // v.resize(7); // resize with 1 parameter , rest = 0
    // v.resize(7, 100);  // resize with 2 paramerter , rest = 100

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }


    cout << endl;

    return 0;
}