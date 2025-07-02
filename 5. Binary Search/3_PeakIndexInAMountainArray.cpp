#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {0,10,5,2};
    int n = arr.size();

    int st = 1,end = n - 2;
    while(st <= end){
        int mid = (st+end)/2;

        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
            cout<<"Target found at : "<<mid<<endl;
            break;
        }
        else if(arr[mid-1] < arr[mid]){
                st = mid + 1;
        }
        else if(arr[mid-1] > arr[mid]){
                end = mid - 1;
        }
        else{
            cout<<"Target not found...!!!"<<endl;
        }
    }
    
    return 0;
}