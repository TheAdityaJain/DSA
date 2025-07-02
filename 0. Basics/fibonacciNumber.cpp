#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin>>n;
        int a[n];
        for(int i = 1;i <= n;i++){
                if(i==1 || i==2){
                        a[i]=1;
                }
                else{
                        a[i]=a[i-1]+a[i-2];
                }
        }

        cout<<a[n];
}