// 283. Move Zeroes
// Approach : Store the non - zero elements in temp array and increment count with each zero element found
// and then add the count of zero at the end of temp array.

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {0,0,1};
    vector<int> temp;
    int n = nums.size();
    int count = 0;
    for(int i = 0;i < n;i++){
        if(nums[i] == 0){
            count += 1;
        }
        else{
            temp.push_back(nums[i]);
        }
    }   
    for(int i = count;i > 0;i--){
        temp.push_back(0);
    }
    nums = temp;
    for(int i : nums){
        cout<<i<<" ";
    }

    return 0;
}