#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code starts ,here
    vector<int> arr = {3,2,4,1,0};
    int n = arr.size();
    for(int i = 0;i < n - 1;i++){
        for(int j = 0;j < n - 1 - i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}