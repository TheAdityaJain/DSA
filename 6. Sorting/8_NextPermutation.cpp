#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code starts here
    vector<int> arr = {1,2,3};
    int n = arr.size();

    int piv = -1;

    for(int i = n - 2;i >= 0;i--){
        if(arr[i] < arr[i+1]){
            piv = i;
            break;
        }
    }

    if(piv == -1){
        reverse(arr.begin(),arr.end());
    }

    for(int i = n - 1;i > piv;i--){
        if(arr[i] > arr[piv]){
            swap(arr[i],arr[piv]);
            break;
        }
    }
    
    int i = piv + 1;
    int j = n - 1;

    while(i <= j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}