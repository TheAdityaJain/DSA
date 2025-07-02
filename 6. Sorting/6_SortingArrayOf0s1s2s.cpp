#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {2,0,2,1,1,0};

    // 1. Brute force method - O(n log n)
    sort(nums.begin(),nums.end());

    cout<<"Brute Force Approach : ";
    for(int i : nums){
        cout<<i<<" ";
    }
    cout<<endl;

    // 2. Optimized Approach - O(n)
    nums = {2,0,2,1,1,0};
    int n = nums.size();
    int c0 = 0,c1 = 0,c2 = 0;
    for(int i = 0;i < n;i++){
        if(nums[i] == 0) c0++;
        else if(nums[i] == 1) c1++;
        else if(nums[i] == 2) c2++;
    }

    for(int i = 0;i < n;i++){
        if(c0 > 0){
            nums[i] = 0;
            c0--;
        }
        else if(c1 > 0){
            nums[i] = 1;
            c1--;
        }
        else if(c2 > 0){
            nums[i] = 2;
            c2--;
        }
    }   

    cout<<"Optimized Approach : ";
    for(int i : nums){
        cout<<i<<" ";
    }
    cout<<endl;

    //3. Dutch National Flag Algorithm - T.C O(n) S.C O(1)
    nums = {2,0,2,1,1,0};
    n = nums.size();
    int low = 0,mid = 0,high = n - 1;
    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else if(nums[mid] == 2){
            swap(nums[mid],nums[high]);
            high--;
        }
    }

    cout<<"DNF Algorithm : ";
    for(int i : nums){
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
} 