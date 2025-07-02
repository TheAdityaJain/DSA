#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "is2 sentence4 This1 a3";
    map<int, string> ans;
    for(int i = 0;i < s.length();i++){
        string word = "";
        while(i < s.length() && s[i] != ' '){
            word+=s[i];
            i++;
        }   
        if(word.length() > 0){
            int idx = word.back() - '0';
            word.pop_back();
            ans[idx] = word;
        }
    }
    string op;
    for (auto p : ans) {
        op += ' ' + p.second;
    }

    cout<<op.substr(1);
    return 0;
}