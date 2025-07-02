#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string s1 = "amazon", s2 = "azonam";

    int n = s1.length();
    string scw (n, ' '), sacw (n, ' ');
    
    
    for(int i = 0;i < n;i++){
        int idx = i + 2;
        if (idx >= n) {
            idx = idx - n; // wrap around
        }
        scw[idx] = s1[i];
    }
    
    for(int i = 0;i < n;i++){
        int idx = i - 2;
        if (idx < 0) {
            idx = idx + n; // wrap around
        }
        sacw[idx] = s1[i];
    }

    cout << "Clockwise Rotation: " << scw << endl;
    cout << "Anticlockwise Rotation: " << sacw << endl;
    
    if(scw == s2 || sacw == s2){
        cout <<  true;
    }
    else{
        cout << false;
    }
    
}