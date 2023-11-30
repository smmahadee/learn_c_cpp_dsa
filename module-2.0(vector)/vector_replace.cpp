#include <iostream>

using namespace std;

int main() {
    int arr[7] = {1, 2, 3, 2, 3, 4, 7};
    vector<int> v(arr, arr + 7);

    // replace(start index, end index, which value will be replace, by which value will be repalce )
    replace(v.begin(), v.end(), 2, 100); // replace single element 


    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}