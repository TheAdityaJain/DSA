#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code starts ,here
    vector<int> arr = {3,2,4,1,0};
    int n = arr.size();
    for(int i = 0;i < n - 1;i++){
        int index = i;
        for(int j = i;j < n;j++){
            if(arr[j] < arr[index]){
                index = j;
            }
        }
        swap(arr[i],arr[index]);
    }

    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}