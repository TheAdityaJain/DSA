#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "aaaabbccc",ans;
    int idx = 0;
    for(int i = 0;i < s.length();i++){
        char ch = s[i];
        int count = 0;
        while(i < s.length() && s[i] == ch){
            count++;
            i++;
        }
        if(count == 1){
            s[idx] = ch;
            idx++;
        }
        else{
            s[idx] = ch;
            idx++;
            string str = to_string(count);
            for(char ch : str){
                s[idx] = ch;
                idx++;
            }
        }
        i--;
    }
    s.resize(idx);
    cout<<s;

    return 0;
}