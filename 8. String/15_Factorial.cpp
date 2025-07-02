#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code starts here
    int n = 5;
    string s = "";
    int ans = 1;
    for(int i = n;i > 0;i--){
        ans *= i;
    }
    while(ans >= 0){
        int r = ans % 10;
        ans = ans / 10;
        s += 
    }

    for(char c : s){
        cout<<c;
    }
    return 0;
}