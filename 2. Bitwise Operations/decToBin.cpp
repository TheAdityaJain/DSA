#include <bits/stdc++.h>

using namespace std;

int main() {
    int decNo,rem,ans=0,pow=1;
    cout << "Enter the decimal number : ";
    cin >> decNo;
    while(decNo>0){
        rem = decNo%2;
        decNo = decNo/2;
        ans += rem * pow;
        cout<<ans<<" ";
        pow = pow * 10;
    };
    cout << "Binary : " <<ans;
    return 0;
}