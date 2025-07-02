#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> prices = {7,1,5,3,6,4};
    int bestBuy = prices[0], st = 0,maxProfit = 0;

    int n = prices.size();
    for(int i = 1;i < n;i++){
        bestBuy = min(bestBuy,prices[i]);

        if(bestBuy < prices[i]){
            maxProfit = max(maxProfit, prices[i]-bestBuy);
        }
    }

    cout<<bestBuy<<" "<<maxProfit;
        // for(int i = 0;i < n;i++){
        //     mini = min(mini, prices[i]);
            
        // }
        // cout<<mini<<endl;
        // for(int i = 0;i < n;i++){
        //     if(prices[i]==mini){
        //         st = i;
        //         cout<<st<<endl;
        //     }
        // }

        // if(mini == prices.back()){
        //     return 0;
        // }
        // else{
        //     for(int i = st;i < n;i++){
        //         maxi = max(maxi, prices[i]);
        //     }
        // }

        // cout<<maxi - mini<<endl;
    

    return 0;
}