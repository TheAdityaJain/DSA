#include <bits/stdc++.h>
using namespace std;

int main() {
    
    double x = 2;
    long n = -2;
    double ans = 1;

    if(x == 1)return 1.0;
    if(x == 0)return 1.0;
    if(n == 0)return 1.0;
    if(x == -1 && n % 2 ==0) return 1.0;
    if(x == -1 && n % 2 !=0) return -1.0;

    if(n < 0){
        x = 1/x;
        n = -1 * n;
    }

    while(n > 0){
        if(n%2 == 1){
            ans *= x;
        }
        n = n/2;
        x *= x;
    }
    cout<<ans;
    return 0;
}