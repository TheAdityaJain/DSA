#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {22, 23, 67};
    int n = arr.size();
    int m = 1;
    int ans;
    int st = *max_element(arr.begin(),arr.end()),end = accumulate(arr.begin(),arr.end(),0);
    if(m>n){
        ans = -1;
        cout<<ans;
        return 0;
    }
    while(st <= end){
        int mid = (st+end)/2;
        int pages = 0,count = 1;
        for(int i : arr){
            pages += i;
            if(pages>mid){
                count++;
                pages = i;
            }
        }
        if(count<=m){
            ans = mid;
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
    
    cout<<ans;
    return 0;
}