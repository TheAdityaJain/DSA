#include <bits/stdc++.h>
using namespace std;
int reverse(int x) {
    int num = x, rev = 0;

    while(num != 0){
        int t = num % 10;
        if(rev > INT_MAX/10 || rev < INT_MIN/10)
            return 0;

        rev = (rev * 10) + t;
        num = num / 10;
    }

    return rev;

}
int main() {
    int x = 565;
    if(x < 0) return false;
    int revNum = reverse(x);
    if(revNum == x) cout<<"True";
    else cout<<"False";
    return 0;
}