#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    int n = nums.size();
    
    if(n==1) cout<< nums[0];
    
    int st = 0,end = n - 1;
    while(st <= end){
        int mid = (st+end)/2;

        if(mid == 0 && nums[0]!=nums[1]) cout<< nums[mid];
        if(mid == n-1 && nums[n-1]!=nums[n-2]) cout<< nums[mid];

        if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) cout<< nums[mid];

        if(mid % 2 == 0){
            if(nums[mid-1]==nums[mid])
            end = mid - 1;
            else
            st = mid + 1;
        }
        else{
            if(nums[mid-1]==nums[mid])
            st = mid + 1;
            else
            end = mid - 1;
        }
    }
    
    return 0;
}