#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "the sky is blue",ans;
    reverse(s.begin(),s.end());

    for(int i = 0;i < s.length();i++){
        string word = "";
        while(i < s.length() && s[i] != ' '){
            word+=s[i];
            i++;
        }   
        reverse(word.begin(),word.end());

        if(word.length() > 0){
            ans += ' ' + word;
        }
    }

    cout<<ans.substr(1);

    return 0;
}