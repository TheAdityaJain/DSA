#include <bits/stdc++.h>
using namespace std;

void binarySearch(int st, int end, vector<int> nums, int target){
    if(st <= end){
        int mid = (st+end)/2;
        if(nums[mid]==target){
            cout<<"Target found at : "<<mid<<endl;
        }
        else if(nums[mid] < target){
            binarySearch(mid + 1,end,nums,target);
        }
        else if(nums[mid] > target){
            binarySearch(st,mid - 1,nums,target);
        }
        else{
            cout<<"Target not found...!!!"<<endl;
        }
    }
}

int main() {
    vector<int> nums = {-1,0,3,4,5,9,12};
    int n = nums.size();

    int target = 0;
    int st = 0,end = n - 1;
    
    binarySearch(st,end,nums,target);
    
    return 0;
}