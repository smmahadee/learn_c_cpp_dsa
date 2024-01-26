#include <iostream>

using namespace std;

    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> l;
        l.push_back(0);

        for(int i = 0; i < nums.size() - 1; i++){
            l.push_back(l[i] + nums[i]);
        }

        vector<int> r;
        r.push_back(0);

        for(int i = nums.size() - 1; i > 0; i--){
            r.push_back(r[i] + nums[i]);
        }

        for(int val: r) cout<<val<<" ";
        vector<int> res;
        for(int i = 0; i < l.size(); i++) {
            res.push_back(abs(l[i] - r[i]));
        }

        return res;
    }

int main() {
    int arr[4] = {10, 4 , 8 , 3};
    vector<int> v(arr, arr+4);
    vector<int> res = leftRightDifference(v);

    

    return 0;
}