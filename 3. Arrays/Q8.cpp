// 189. Rotate Array
// Approach - 
// Directly put the element on their final after rotation position inside a temp vector.

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code starts here
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    int n = nums.size();
    
    vector<int> temp(n,1);

    for(int i = 0;i < n;i++){
        int j = (i+k)%n;
        temp[j] = nums[i];
    }
    nums = temp;

    for(int i : nums){
        cout<<i<<" ";
    }
    return 0;
}
