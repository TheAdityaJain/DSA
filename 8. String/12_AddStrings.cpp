#include <bits/stdc++.h>
using namespace std;

string add(string& num1, string& num2){
    string ans = "";
    int i = num1.length() - 1,j = num2.length() - 1, sum = 0,carry = 0; 

    while(j >= 0){
        sum = (num1[i] - '0') + (num2[j] - '0') + carry;
        carry = sum/10;
        char c = '0' + sum%10;
        ans += c;
        i--;
        j--; 
    }

    while(i >= 0){
        sum = (num1[i] - '0') + carry;
        carry = sum/10;
        char c = '0' + sum%10;
        ans += c;
        i--;
    }
    if(carry)
    ans += '1';

    reverse(ans.begin(),ans.end());

    return ans;
}
int main() {
    // Your code starts here
    string num1 = "11", num2 = "123";

    if(num1.size() < num2.size())
    cout << add(num2,num1);
    else
    cout << add(num1,num2);

    return 0;
}