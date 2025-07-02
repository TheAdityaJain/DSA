#include <bits/stdc++.h>
using namespace std;

bool isFreqSame(unordered_map<char,int>& freq1,unordered_map<char,int>& freq2){
    if(freq1 != freq2)
    return true;
}
int main() {
    string s1 = "ab", s2 = "eidbaooo";

    unordered_map<char,int> freq;

    for(char ch : s1){
        freq[ch]++;
    }

    for(int i = 0;i < s2.length();i++){
        int winIdx = 0,idx = i;
        unordered_map<char,int> winFreq;

        while(winIdx < s1.length() && idx < s2.length()){
            winFreq[s2[idx]]++;
            winIdx++;
            idx++;
        }
        if(isFreqSame(freq, winFreq)){
            cout<<"True";
            return 0;
        }
    }
    cout<<"False";
    return 0;
}