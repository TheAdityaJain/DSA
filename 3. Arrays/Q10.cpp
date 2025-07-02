// Union of 2 Sorted with Duplicates

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code starts here
    vector<int> a = {1, 2, 3, 4, 5},b = {1, 2, 3, 6, 7};
        set<int> c;
        int m = a.size();
        int n = b.size();
        for(int i = 0;i < m;i++){
            c.insert(a[i]);
        }
        for(int i = 0;i < n;i++){
            c.insert(b[i]);
        }
        
        vector<int> ans(c.begin(), c.end());
        sort(ans.begin(),ans.end());

        for(int i: ans)
        {
            cout << i <<" ";
        }

    return 0;
}