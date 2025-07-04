#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 20, b = 28;

    int gcd = 1; // Default GCD is 1
    if(a == 0){
        gcd = b;
    }
    else if(b == 0){
        gcd = a;
    }
    else if(a == b){
        gcd = a;
    }
    else{
        for(int i = 1; i <= min(a, b); i++){
            if(a % i == 0 && b % i == 0){
                gcd = i;
            }
        }
    }
    
    cout << "GCD is: " << gcd << endl;
    return 0;
}
