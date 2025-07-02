#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code starts here
    vector<int> nums = {1,2,3,4},product;
    int n = nums.size();
    // for(int i = 0;i < n;i++){
    //     int prod = 1;
    //     for(int j = 0;j < n;j++){
    //         if(i==j){
    //             continue;
    //         }
    //         prod *= nums[j];
    //         // cout<<i<<" "<<j<<" "<<prod<<endl;
    //     }
    //     product.push_back(prod);
    // }

    int i = 0,j = n -1;
    while(i < n){
        cout<<i<<" "<<j<<" "<<endl;
        product[i] = 1;
        if(i<j){
            product[i] *= nums[j];
            j--; 
        }
        i++;
        j = n-1;
    }
    for(int i : product){
        cout<<i<<" ";
    }
    return 0;
}