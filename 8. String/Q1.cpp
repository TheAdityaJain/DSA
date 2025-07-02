#include <bits/stdc++.h>
using namespace std;

int main() {
    // Check Palindrome
    string str1 = "naman",str2;
    
    str2 = str1;
    reverse(str2.begin(),str2.end());

    if(str1 == str2){
        cout<<"palidrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }

    return 0;
}