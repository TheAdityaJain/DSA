#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 5;
    int arr[n] = {-2,1,-3,4,-1,2,1,-5,4};
    int maxSumB = INT_MIN;
    int maxSumK = INT_MIN;

    for(int i = 0; i <= n-1;i++){
        for(int j = i;j <= n-1;j++){
            for(int k = i;k <= j;k++){
                cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }

    for(int i = 0; i <= n-1;i++){
        int currSum = 0;
        for(int j = i;j <= n-1;j++){
            currSum += arr[j];
            maxSumB = max(currSum, maxSumB);
        }
    }

    cout<<"Max sum : "<<maxSumB<<endl;


    int currSumK = 0;
    for(int i = 0; i <= n-1;i++){
        currSumK += arr[i];
        maxSumK = max(currSumK, maxSumK);
        if(currSumK < 0){
            currSumK = 0;
        }
    }

    cout<<"Max sum : "<<maxSumK<<endl;
    return 0;
}