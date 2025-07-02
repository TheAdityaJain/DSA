#include <bits/stdc++.h>
using namespace std;

int main() {
    int binNo,ans=0,pow=1,rem;
    cout << "Enter the binary number : ";
    cin >> binNo;
    while(binNo>0){
        rem = binNo % 10;
        ans += rem * pow;
        binNo = binNo/10;
        pow *= 2;
    }
    cout << "Decimal : " <<ans;
    return 0;
}