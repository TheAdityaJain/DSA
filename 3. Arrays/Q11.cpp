#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code starts here
        vector<int> nums = {1,1,0,1,1,1};
        int n = nums.size();
        int count = 1;
        int ans = INT_MIN;
        for(int i = 0;i < n;i++){
            if(nums[i] == nums[i+1]){
                count += 1;
                ans = max(ans,count);
            }
            else{
                count = 1;
            }
        }
        cout << ans;

    return 0;
}