// Longest Prefix Suffix

// Given a string of characters s, find the length of the longest prefix which is also a suffix.
// Note: Prefix and suffix can be overlapping but they should not be equal to the entire string.

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "abcabdabcabcabd";
    int n = s.size();
    int i = 0,j = 1;
    
    vector<int> lps(n);
    lps[0] = 0;

    while(j < s.size()){
           
        if(s[i] == s[j]){
            lps[j] = i + 1;
            i++;
            j++; 
        }
        else{
            if(i == 0){
                lps[j] = 0;
                j++;
            }
            else{
                i = lps[i-1];
            }
        }
    }
  
    
    for(int i :  lps){
        cout<<i<<" ";
    }
    
    cout<<"\n"<<lps.back();
    return 0;
}