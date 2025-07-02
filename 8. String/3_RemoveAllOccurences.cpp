#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code starts here
    string s = "daabcbaabcbc", part = "abc";

    while(s.find(part) != -1){
        int i = s.find(part);
        s.erase(i,part.size());
    }

    cout<<s;

    return 0;
}