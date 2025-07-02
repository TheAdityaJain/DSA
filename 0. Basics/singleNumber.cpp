#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    int N = 20, n= 20;
    vector<int> digits;
    set<int> s;
    int count = 0;
        while(n>0){
            int d = n%10;
            digits.push_back(d);
            n /= 10;
        }
        for(int i : digits){
            cout<<i<<" ";
        }
        cout<<endl;
        s.insert(digits.begin(),digits.end());
        vector<int> udigits(s.begin(), s.end());
        for(int i : udigits){
            cout<<i<<" ";
        }
        cout<<endl;
        for(int i : udigits){
            if(N % i == 0){
                count++;
            }
        }
        cout<<count;
}