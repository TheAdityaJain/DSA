#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code starts here
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int i = 0;
    int j = i + 1;
    while(i < 5){
        if(arr[i]+arr[j] == 9){
            cout << i << " "<< j<<endl;
            break;
        }
        else if(j < 5){
            j++;
        }
        else if(j >= 5){
            i++;
            j = i + 1;
        }
    }

    int st = 0,end = n-1;
    while(st<=end){
        if(arr[st]+arr[end]==8){
            cout << i << " "<< j<<endl;
            break;
        }
        else if(arr[st]+arr[end]>8){
            end--;
        }
        else if(arr[st]+arr[end]<8){
            st++;
        }
    }
    return 0;
}