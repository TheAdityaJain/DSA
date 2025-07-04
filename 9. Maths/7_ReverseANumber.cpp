#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code starts here
    int num = 4537, count, rev = 0;

        while(num != 0){
            int t = num % 10;
            if(rev > INT_MAX/10 || rev < INT_MIN/10)
                return 0;

            rev = (rev * 10) + t;
            num = num / 10;
        }

    cout << rev;    

    return 0;
}