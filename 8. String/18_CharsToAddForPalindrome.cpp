// Min Chars to Add for Palindrome
// Given a string s, the task is to find the minimum characters to be added at the front to make the string palindrome.

// Note: A palindrome string is a sequence of characters that reads the same forward and backward.

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code starts here
    string s = "abc";
    int n = s.size() - 1;
    int i = 0, j = n,cnt = 0;

    while(i < j){
        if(s[i] == s[j]){
            i++;
            j--;
        }
        else{
            cnt++;
        }
    }

    cout<<cnt;

    return 0;
}