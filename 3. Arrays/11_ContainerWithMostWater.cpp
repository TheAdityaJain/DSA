#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
        int n  = height.size(), ans = 1;
        int maxArea = 0;

        // for(int i = 0;i < n;i++){
        //     for(int j = i + 1;j < n;j++){
        //         int w = j - i;
        //         int h = min(height[i],height[j]);
        //         ans = h * w;
        //         maxArea = max(ans, maxArea);
        //     }
        // }

        int i = 0, j = n - 1;
        while(i <= j){
            int w = j - i;
            int h = min(height[i],height[j]);
            ans = h * w;
            maxArea = max(ans, maxArea);
            height[i] <= height[j] ? i++ : j--;
        }
        
        cout<<maxArea;

    return 0;
}