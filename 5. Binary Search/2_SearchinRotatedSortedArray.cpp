#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {4,5,6,7,0,1,2};
    int n = arr.size();

    int target = 0;
    int st = 0,end = n - 1;
    while(st <= end){
        int mid = (st+end)/2;

        if(arr[mid]==target){
            cout<<"Target found at : "<<mid<<endl;
            break;
        }

        if(arr[st] < arr[mid]){//left sorted
            if(arr[st] <= target && target <= arr[mid])
                end = mid - 1;
            else
                st = mid + 1;
        }
        else if(arr[st] > arr[mid]){//right sorted
            if(arr[mid] <= target && target <= arr[end])
                st = mid + 1;
            else
                end = mid - 1;
        }
        else{
            cout<<"Target not found...!!!"<<endl;
        }
    }
    
    return 0;
}