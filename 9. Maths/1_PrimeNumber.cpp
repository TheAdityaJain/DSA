#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 23;

    for(int i = 2;i * i <= n;i++){
        if(n % i == 0){
            cout<<"Not a prime";
            return 0;
        }
    }
    cout<<"Prime number";
    return 0;
}