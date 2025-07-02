#include <bits/stdc++.h>
using namespace std;

bool isLowercaseVowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
bool isUppercaseVowel(char c){
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
int main() {
    string s = "lEetcOde",vowel = "";

    for(int i = 0;i < s.length();i++){
        if(isLowercaseVowel(s[i]) || isUppercaseVowel(s[i])){
            vowel += s[i];
            s[i] = '0';
        }
    }
    sort(vowel.begin(),vowel.end());
    
    int idx = 0,i = 0;
    while(idx < vowel.length() && i < s.length()){
        if(s[i] == '0'){
            s[i] = vowel[idx];
            idx++;
        }
        i++;
    }
    
    cout<<s;
    return 0;
}