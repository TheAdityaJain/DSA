#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "ccd";

    map<char,int> freq;

    for(char ch : s){
        freq[ch]++;
    }
    int sum = 0;
    bool odd = 0;
    for(int i = 0;i < freq.size();i++){
        if(freq[i] % 2 == 0){
            sum += freq[i];
        }
        else{
            sum += freq[i] - 1;
            odd = 1;
        }
    }    
    cout<<sum + odd;
    return 0;
}