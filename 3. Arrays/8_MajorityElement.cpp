#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code starts here
    vector<int> nums = {2,2,1,1,1,2,2};
    int n = nums.size();
    // Brute force approach
    // for(int val : nums){
    //     int freq = 0;
    //     for(int elem : nums){
    //         if(val == elem){
    //             freq++;
    //         }
    //     }
    //     if(freq>n/2){
    //         cout<<val<<endl;
    //         break;
    //     }
    // }
    
    // Optimized approach
    // sort(nums.begin(), nums.end());
    // int ans = nums[0], freq = 0;
    // for(int i = 0;i < n;i++){
    //     if(nums[i]==nums[i+1]){
    //         freq++;
    //     }
    //     else{
    //         freq = 1;
    //         ans = nums[i+1];
    //     }
    //     if(freq>n/2){
    //         cout<<ans<<endl;
    //         break;
    //     }
    
    // }

    //Moore voting algorithm

    int freq = 0; int ans = 0;

    for(int i = 0; i < n;i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }

    cout<<ans;

    return 0;
}