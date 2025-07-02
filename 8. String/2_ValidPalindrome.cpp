#include <bits/stdc++.h>
using namespace std;

bool isAlphaNumeric(char ch){
    if((ch >= '0' && ch <= '9')||
    (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
        return true;
    }
}

int main() {
    // Your code starts here
    string str = "n2a@ma!2n";
    int st = 0,end = str.length();
    while(st<end){
        if(!isAlphaNumeric(str[st])){
            st++;
            continue;
        }
        if(!isAlphaNumeric(str[end])){
            end--;
            continue;
        }

        if(tolower(str[st]) != tolower(str[end])){
            cout<<"Not a palindrome";
            return 0;
        }
        st++;
        end--;
    }

    cout<<"A palindrome";
}