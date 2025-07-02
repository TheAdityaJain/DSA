// 28. Find the Index of the First Occurrence in a String
// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code starts here
    string h = "ababcabcabababd", n = "ababd";
    
    if(h.size() < n.size()) cout << -1;
    
    int i = 0,j = 1;
    
    vector<int> lps(n.size());
    lps[0] = 0;

    while(j < n.size()){
        if(n[i] == n[j]){
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
    cout<<endl;
    i = 0,j = 0;
    int idx = INT_MAX;

    while(i < h.size() && j < n.size()){            
        if(h[i] == n[j]){
            i++;
            j++;
        }
        else{
            if(j == 0){
                i++;
            }
            else{
                j = lps[j-1];
            }
        }
    }

    if(j == n.size()){
        cout << i - j;
        return 0;
    }

    cout<<-1;
    return 0;
}