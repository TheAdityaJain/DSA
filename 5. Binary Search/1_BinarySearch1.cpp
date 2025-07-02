#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {-1,0,3,4,5,9,12};
    int n = arr.size();

    int target = 12;
    int st = 0,end = n - 1;
    while(st <= end){
        int mid = (st+end)/2;
        if(arr[mid]==target){
            cout<<"Target found at : "<<mid<<endl;
            break;
        }
        else if(arr[mid] < target){
            st = mid + 1;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            cout<<"Target not found...!!!"<<endl;
        }
    }
    
    return 0;
}