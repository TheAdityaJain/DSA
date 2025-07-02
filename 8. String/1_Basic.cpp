#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    // Your code starts here
    char str1[20];

    cin>>str1; //aditya jain
    cout<<str1<<endl;  //aditya
    
    cin.getline(str1,20); //aditya jain
    cout<<str1<<endl; //aditya jain

    cin.getline(str1,20,'$'); //aditya j$in
    cout<<str1<<endl;  //aditya j

    string str = "aditya";
    //getline(cin,str2,20);

    //Print string
    for(char a : str){
        cout<<a<<" ";
    }
    cout<<endl; 

    //Length of string
    cout<<str.length()<<endl;

    //Concatenation of string
    str = str + "jain";

    //Reverse a string
    int st = 0,end = str.length();
    while(st<end){
        swap(str[st],str[end]);
        st++;
        end--;
    }
    cout<<str;

    string str3 = "Adi is \"good\" boy";
    return 0;
}